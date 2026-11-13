#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_83864D00"))) PPC_WEAK_FUNC(sub_83864D00);
PPC_FUNC_IMPL(__imp__sub_83864D00) {
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
	// bl 0x83860c48
	ctx.lr = 0x83864D10;
	sub_83860C48(ctx, base);
	// bl 0x8386c670
	ctx.lr = 0x83864D14;
	sub_8386C670(ctx, base);
	// bl 0x83865560
	ctx.lr = 0x83864D18;
	sub_83865560(ctx, base);
	// bl 0x8386b190
	ctx.lr = 0x83864D1C;
	sub_8386B190(ctx, base);
	// bl 0x838673d8
	ctx.lr = 0x83864D20;
	sub_838673D8(ctx, base);
	// bl 0x8386a640
	ctx.lr = 0x83864D24;
	sub_8386A640(ctx, base);
	// bl 0x838699b0
	ctx.lr = 0x83864D28;
	sub_838699B0(ctx, base);
	// bl 0x83868e38
	ctx.lr = 0x83864D2C;
	sub_83868E38(ctx, base);
	// bl 0x83868300
	ctx.lr = 0x83864D30;
	sub_83868300(ctx, base);
	// bl 0x838643c0
	ctx.lr = 0x83864D34;
	sub_838643C0(ctx, base);
	// bl 0x83860cc8
	ctx.lr = 0x83864D38;
	sub_83860CC8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83864D48"))) PPC_WEAK_FUNC(sub_83864D48);
PPC_FUNC_IMPL(__imp__sub_83864D48) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83864D50;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,12(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// bne cr6,0x83864d70
	if (!cr6.eq) goto loc_83864D70;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83864D70:
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r29,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r29.u32);
	// subf r4,r10,r11
	ctx.r4.s64 = ctx.r11.s64 - ctx.r10.s64;
	// bl 0x838659e8
	ctx.lr = 0x83864D8C;
	sub_838659E8(ctx, base);
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r29,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r29.u32);
	// bl 0x83865890
	ctx.lr = 0x83864DA0;
	sub_83865890(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83864DAC"))) PPC_WEAK_FUNC(sub_83864DAC);
PPC_FUNC_IMPL(__imp__sub_83864DAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83864DB0"))) PPC_WEAK_FUNC(sub_83864DB0);
PPC_FUNC_IMPL(__imp__sub_83864DB0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// b 0x83864d48
	sub_83864D48(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83864DC0"))) PPC_WEAK_FUNC(sub_83864DC0);
PPC_FUNC_IMPL(__imp__sub_83864DC0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83864DC4"))) PPC_WEAK_FUNC(sub_83864DC4);
PPC_FUNC_IMPL(__imp__sub_83864DC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83864DC8"))) PPC_WEAK_FUNC(sub_83864DC8);
PPC_FUNC_IMPL(__imp__sub_83864DC8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83864DD0;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r29,12(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x83864dec
	if (cr6.eq) goto loc_83864DEC;
	// bl 0x83864d48
	ctx.lr = 0x83864DEC;
	sub_83864D48(ctx, base);
loc_83864DEC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83864e70
	ctx.lr = 0x83864DF4;
	sub_83864E70(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83864f68
	ctx.lr = 0x83864E04;
	sub_83864F68(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83864e34
	if (cr6.eq) goto loc_83864E34;
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// stw r8,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r8.u32);
loc_83864E34:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83864E3C"))) PPC_WEAK_FUNC(sub_83864E3C);
PPC_FUNC_IMPL(__imp__sub_83864E3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83864E40"))) PPC_WEAK_FUNC(sub_83864E40);
PPC_FUNC_IMPL(__imp__sub_83864E40) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// rlwinm r10,r3,5,12,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 5) & 0xFFFE0;
	// lwz r11,13800(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13800);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r3
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r3.u32, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83864E70"))) PPC_WEAK_FUNC(sub_83864E70);
PPC_FUNC_IMPL(__imp__sub_83864E70) {
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
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r30,r11,13812
	ctx.r30.s64 = ctx.r11.s64 + 13812;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83d7554c
	ctx.lr = 0x83864E98;
	__imp__RtlEnterCriticalSection(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r7,r30,28
	ctx.r7.s64 = ctx.r30.s64 + 28;
loc_83864EA0:
	// mfmsr r8
	ctx.r8.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r7
	ea = ctx.r7.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stwcx. r9,0,r7
	ea = ctx.r7.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r8,1
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x83864ea0
	if (!cr0.eq) goto loc_83864EA0;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x83864ee0
	if (cr6.eq) goto loc_83864EE0;
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// rlwinm r10,r31,5,12,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 5) & 0xFFFE0;
	// lwz r11,13800(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13800);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r31
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r31.u32, xer);
	// beq cr6,0x83864f14
	if (cr6.eq) goto loc_83864F14;
loc_83864EE0:
	// li r10,-1
	ctx.r10.s64 = -1;
	// addi r7,r30,28
	ctx.r7.s64 = ctx.r30.s64 + 28;
loc_83864EE8:
	// mfmsr r8
	ctx.r8.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r7
	ea = ctx.r7.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r11.u64 = __builtin_bswap32(reserved.u32);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stwcx. r9,0,r7
	ea = ctx.r7.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r8,1
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x83864ee8
	if (!cr0.eq) goto loc_83864EE8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83d7553c
	ctx.lr = 0x83864F0C;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x83864f50
	goto loc_83864F50;
loc_83864F14:
	// addi r3,r11,28
	ctx.r3.s64 = ctx.r11.s64 + 28;
	// bl 0x83863818
	ctx.lr = 0x83864F1C;
	sub_83863818(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r9,-1
	ctx.r9.s64 = -1;
	// addi r7,r30,28
	ctx.r7.s64 = ctx.r30.s64 + 28;
loc_83864F28:
	// mfmsr r8
	ctx.r8.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r7
	ea = ctx.r7.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r11.u64 = __builtin_bswap32(reserved.u32);
	// add r10,r9,r11
	ctx.r10.u64 = ctx.r9.u64 + ctx.r11.u64;
	// stwcx. r10,0,r7
	ea = ctx.r7.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r8,1
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x83864f28
	if (!cr0.eq) goto loc_83864F28;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83d7553c
	ctx.lr = 0x83864F4C;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_83864F50:
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

__attribute__((alias("__imp__sub_83864F68"))) PPC_WEAK_FUNC(sub_83864F68);
PPC_FUNC_IMPL(__imp__sub_83864F68) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x83864F70;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r31,r11,13812
	ctx.r31.s64 = ctx.r11.s64 + 13812;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// bl 0x83d7554c
	ctx.lr = 0x83864F90;
	__imp__RtlEnterCriticalSection(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r7,r31,28
	ctx.r7.s64 = ctx.r31.s64 + 28;
loc_83864F98:
	// mfmsr r8
	ctx.r8.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r7
	ea = ctx.r7.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stwcx. r9,0,r7
	ea = ctx.r7.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r8,1
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x83864f98
	if (!cr0.eq) goto loc_83864F98;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// beq cr6,0x83864fd8
	if (cr6.eq) goto loc_83864FD8;
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// rlwinm r10,r28,5,12,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 5) & 0xFFFE0;
	// lwz r11,13800(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13800);
	// add r30,r10,r11
	ctx.r30.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwzx r10,r10,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplw cr6,r10,r28
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r28.u32, xer);
	// beq cr6,0x83865020
	if (cr6.eq) goto loc_83865020;
loc_83864FD8:
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r7,r31,28
	ctx.r7.s64 = ctx.r31.s64 + 28;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// li r6,-1
	ctx.r6.s64 = -1;
	// stw r11,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r11.u32);
	// stw r11,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r11.u32);
loc_83864FF0:
	// mfmsr r8
	ctx.r8.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r7
	ea = ctx.r7.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// add r9,r6,r10
	ctx.r9.u64 = ctx.r6.u64 + ctx.r10.u64;
	// stwcx. r9,0,r7
	ea = ctx.r7.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r8,1
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x83864ff0
	if (!cr0.eq) goto loc_83864FF0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83d7553c
	ctx.lr = 0x83865014;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_83865020:
	// addi r3,r30,28
	ctx.r3.s64 = ctx.r30.s64 + 28;
	// bl 0x83863818
	ctx.lr = 0x83865028;
	sub_83863818(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// addi r7,r31,28
	ctx.r7.s64 = ctx.r31.s64 + 28;
loc_83865030:
	// mfmsr r8
	ctx.r8.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r7
	ea = ctx.r7.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stwcx. r9,0,r7
	ea = ctx.r7.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r8,1
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x83865030
	if (!cr0.eq) goto loc_83865030;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83d7553c
	ctx.lr = 0x83865054;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,24(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x83863b20
	ctx.lr = 0x83865068;
	sub_83863B20(ctx, base);
	// stw r3,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r3.u32);
	// lwz r6,4(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r6,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r6.u32);
	// lwz r5,8(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// stw r5,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r5.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83865084"))) PPC_WEAK_FUNC(sub_83865084);
PPC_FUNC_IMPL(__imp__sub_83865084) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83865088"))) PPC_WEAK_FUNC(sub_83865088);
PPC_FUNC_IMPL(__imp__sub_83865088) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83865090;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r30,r11,13812
	ctx.r30.s64 = ctx.r11.s64 + 13812;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83d7554c
	ctx.lr = 0x838650AC;
	__imp__RtlEnterCriticalSection(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r7,r30,28
	ctx.r7.s64 = ctx.r30.s64 + 28;
loc_838650B4:
	// mfmsr r8
	ctx.r8.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r7
	ea = ctx.r7.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stwcx. r9,0,r7
	ea = ctx.r7.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r8,1
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x838650b4
	if (!cr0.eq) goto loc_838650B4;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// beq cr6,0x838650f4
	if (cr6.eq) goto loc_838650F4;
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// rlwinm r10,r28,5,12,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 5) & 0xFFFE0;
	// lwz r11,13800(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13800);
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwzx r10,r10,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplw cr6,r10,r28
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r28.u32, xer);
	// beq cr6,0x8386513c
	if (cr6.eq) goto loc_8386513C;
loc_838650F4:
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r7,r30,28
	ctx.r7.s64 = ctx.r30.s64 + 28;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// li r6,-1
	ctx.r6.s64 = -1;
	// stw r11,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r11.u32);
	// stw r11,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r11.u32);
loc_8386510C:
	// mfmsr r8
	ctx.r8.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r7
	ea = ctx.r7.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// add r9,r6,r10
	ctx.r9.u64 = ctx.r6.u64 + ctx.r10.u64;
	// stwcx. r9,0,r7
	ea = ctx.r7.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r8,1
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8386510c
	if (!cr0.eq) goto loc_8386510C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83d7553c
	ctx.lr = 0x83865130;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_8386513C:
	// addi r3,r31,28
	ctx.r3.s64 = ctx.r31.s64 + 28;
	// bl 0x83863818
	ctx.lr = 0x83865144;
	sub_83863818(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// addi r7,r30,28
	ctx.r7.s64 = ctx.r30.s64 + 28;
loc_8386514C:
	// mfmsr r8
	ctx.r8.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r7
	ea = ctx.r7.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stwcx. r9,0,r7
	ea = ctx.r7.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r8,1
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8386514c
	if (!cr0.eq) goto loc_8386514C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83d7553c
	ctx.lr = 0x83865170;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// li r4,16
	ctx.r4.s64 = 16;
	// bl 0x83863b20
	ctx.lr = 0x83865184;
	sub_83863B20(ctx, base);
	// stw r3,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r3.u32);
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r6,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r6.u32);
	// lwz r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r5,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r5.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_838651A0"))) PPC_WEAK_FUNC(sub_838651A0);
PPC_FUNC_IMPL(__imp__sub_838651A0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x838651A8;
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
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, xer);
	// bne cr6,0x83865224
	if (!cr6.eq) goto loc_83865224;
	// addi r29,r4,28
	ctx.r29.s64 = ctx.r4.s64 + 28;
	// li r9,-1
	ctx.r9.s64 = -1;
loc_838651C8:
	// mfmsr r8
	ctx.r8.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r29
	ea = ctx.r29.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r11.u64 = __builtin_bswap32(reserved.u32);
	// add r10,r9,r11
	ctx.r10.u64 = ctx.r9.u64 + ctx.r11.u64;
	// stwcx. r10,0,r29
	ea = ctx.r29.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r8,1
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x838651c8
	if (!cr0.eq) goto loc_838651C8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83d7553c
	ctx.lr = 0x838651EC;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// bl 0x83864d00
	ctx.lr = 0x838651F0;
	sub_83864D00(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83d7554c
	ctx.lr = 0x838651F8;
	__imp__RtlEnterCriticalSection(ctx, base);
	// li r7,1
	ctx.r7.s64 = 1;
loc_838651FC:
	// mfmsr r4
	ctx.r4.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r6,0,r29
	ea = ctx.r29.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r6.u64 = __builtin_bswap32(reserved.u32);
	// add r5,r7,r6
	ctx.r5.u64 = ctx.r7.u64 + ctx.r6.u64;
	// stwcx. r5,0,r29
	ea = ctx.r29.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r5.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r4,1
	ctx.msr = (ctx.r4.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x838651fc
	if (!cr0.eq) goto loc_838651FC;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplw cr6,r31,r3
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r3.u32, xer);
	// beq cr6,0x83865270
	if (cr6.eq) goto loc_83865270;
loc_83865224:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// subf r10,r31,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r31.s64;
	// subfic r9,r10,0
	xer.ca = ctx.r10.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r10.s64;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 & ctx.r11.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83865270
	if (cr6.eq) goto loc_83865270;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r3,r11,-12
	ctx.r3.s64 = ctx.r11.s64 + -12;
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r6,4(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r6,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r6.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83865270:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8386527C"))) PPC_WEAK_FUNC(sub_8386527C);
PPC_FUNC_IMPL(__imp__sub_8386527C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83865280"))) PPC_WEAK_FUNC(sub_83865280);
PPC_FUNC_IMPL(__imp__sub_83865280) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
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
	// lwz r3,24(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// bl 0x83864610
	ctx.lr = 0x8386529C;
	sub_83864610(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r8,r31,28
	ctx.r8.s64 = ctx.r31.s64 + 28;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
loc_838652B4:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r8
	ea = ctx.r8.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// stwcx. r11,0,r8
	ea = ctx.r8.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x838652b4
	if (!cr0.eq) goto loc_838652B4;
	// lwsync 
	// lis r7,-31743
	ctx.r7.s64 = -2080309248;
	// lis r6,-31743
	ctx.r6.s64 = -2080309248;
	// addi r10,r31,12
	ctx.r10.s64 = ctx.r31.s64 + 12;
	// lwz r11,13804(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 13804);
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r5,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r5.u32);
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r11,13844(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 13844);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,13844(r6)
	PPC_STORE_U32(ctx.r6.u32 + 13844, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_8386531C"))) PPC_WEAK_FUNC(sub_8386531C);
PPC_FUNC_IMPL(__imp__sub_8386531C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83865320"))) PPC_WEAK_FUNC(sub_83865320);
PPC_FUNC_IMPL(__imp__sub_83865320) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x83865328;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r27,r11,13812
	ctx.r27.s64 = ctx.r11.s64 + 13812;
	// li r4,4000
	ctx.r4.s64 = 4000;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x83d7562c
	ctx.lr = 0x83865344;
	__imp__RtlInitializeCriticalSectionAndSpinCount(ctx, base);
	// lis r10,-31743
	ctx.r10.s64 = -2080309248;
	// lis r7,-31743
	ctx.r7.s64 = -2080309248;
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// lis r29,-31743
	ctx.r29.s64 = -2080309248;
	// addi r31,r11,13804
	ctx.r31.s64 = ctx.r11.s64 + 13804;
	// addi r8,r10,13848
	ctx.r8.s64 = ctx.r10.s64 + 13848;
	// addi r9,r7,13856
	ctx.r9.s64 = ctx.r7.s64 + 13856;
	// stw r31,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r31.u32);
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r8,13848(r10)
	PPC_STORE_U32(ctx.r10.u32 + 13848, ctx.r8.u32);
	// stw r31,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r31.u32);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// stw r9,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r9.u32);
	// rlwinm r3,r28,5,0,26
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 5) & 0xFFFFFFE0;
	// stw r8,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r8.u32);
	// li r4,4
	ctx.r4.s64 = 4;
	// stw r30,28(r27)
	PPC_STORE_U32(ctx.r27.u32 + 28, ctx.r30.u32);
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// stw r9,13856(r7)
	PPC_STORE_U32(ctx.r7.u32 + 13856, ctx.r9.u32);
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// stw r28,13796(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13796, ctx.r28.u32);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// bl 0x838636d0
	ctx.lr = 0x838653A0;
	sub_838636D0(ctx, base);
	// lis r6,-31743
	ctx.r6.s64 = -2080309248;
	// lwz r9,13796(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13796);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// stw r3,13800(r6)
	PPC_STORE_U32(ctx.r6.u32 + 13800, ctx.r3.u32);
	// beq cr6,0x83865420
	if (cr6.eq) goto loc_83865420;
loc_838653BC:
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// addi r7,r11,28
	ctx.r7.s64 = ctx.r11.s64 + 28;
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
	// stw r30,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r30.u32);
	// stw r30,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r30.u32);
	// stw r30,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r30.u32);
loc_838653D4:
	// mfmsr r8
	ctx.r8.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r9,0,r7
	ea = ctx.r7.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r9.u64 = __builtin_bswap32(reserved.u32);
	// stwcx. r30,0,r7
	ea = ctx.r7.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r30.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r8,1
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x838653d4
	if (!cr0.eq) goto loc_838653D4;
	// lwsync 
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r31,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r31.u32);
	// addi r9,r11,12
	ctx.r9.s64 = ctx.r11.s64 + 12;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r8,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r8.u32);
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r9,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r9.u32);
	// lwz r8,13796(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13796);
	// cmplw cr6,r10,r8
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, xer);
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// blt cr6,0x838653bc
	if (cr6.lt) goto loc_838653BC;
loc_83865420:
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r30,13844(r11)
	PPC_STORE_U32(ctx.r11.u32 + 13844, ctx.r30.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83865434"))) PPC_WEAK_FUNC(sub_83865434);
PPC_FUNC_IMPL(__imp__sub_83865434) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83865438"))) PPC_WEAK_FUNC(sub_83865438);
PPC_FUNC_IMPL(__imp__sub_83865438) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x83865440;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// addi r31,r11,13812
	ctx.r31.s64 = ctx.r11.s64 + 13812;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83d7554c
	ctx.lr = 0x83865454;
	__imp__RtlEnterCriticalSection(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r7,r31,28
	ctx.r7.s64 = ctx.r31.s64 + 28;
loc_8386545C:
	// mfmsr r8
	ctx.r8.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r7
	ea = ctx.r7.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stwcx. r9,0,r7
	ea = ctx.r7.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r8,1
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8386545c
	if (!cr0.eq) goto loc_8386545C;
	// lis r28,-31743
	ctx.r28.s64 = -2080309248;
	// lis r29,-31743
	ctx.r29.s64 = -2080309248;
	// li r27,0
	ctx.r27.s64 = 0;
	// lwz r3,13800(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13800);
	// lwz r11,13796(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13796);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x838654c4
	if (cr6.eq) goto loc_838654C4;
loc_83865498:
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x838654b0
	if (cr6.eq) goto loc_838654B0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83865280
	ctx.lr = 0x838654AC;
	sub_83865280(ctx, base);
	// lwz r11,13796(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13796);
loc_838654B0:
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r30,r30,32
	ctx.r30.s64 = ctx.r30.s64 + 32;
	// cmplw cr6,r27,r11
	cr6.compare<uint32_t>(ctx.r27.u32, ctx.r11.u32, xer);
	// blt cr6,0x83865498
	if (cr6.lt) goto loc_83865498;
	// lwz r3,13800(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13800);
loc_838654C4:
	// lis r8,-31743
	ctx.r8.s64 = -2080309248;
	// lis r7,-31743
	ctx.r7.s64 = -2080309248;
	// addi r6,r8,13848
	ctx.r6.s64 = ctx.r8.s64 + 13848;
	// lis r4,-31743
	ctx.r4.s64 = -2080309248;
	// addi r5,r7,13856
	ctx.r5.s64 = ctx.r7.s64 + 13856;
	// stw r6,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, ctx.r6.u32);
	// stw r6,13848(r8)
	PPC_STORE_U32(ctx.r8.u32 + 13848, ctx.r6.u32);
	// addi r8,r4,13804
	ctx.r8.s64 = ctx.r4.s64 + 13804;
	// stw r5,13856(r7)
	PPC_STORE_U32(ctx.r7.u32 + 13856, ctx.r5.u32);
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// stw r5,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r5.u32);
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
	// stw r8,13804(r4)
	PPC_STORE_U32(ctx.r4.u32 + 13804, ctx.r8.u32);
	// mr r9,r5
	ctx.r9.u64 = ctx.r5.u64;
	// stw r8,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r8.u32);
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// bl 0x83863770
	ctx.lr = 0x83865510;
	sub_83863770(ctx, base);
	// lis r7,-31743
	ctx.r7.s64 = -2080309248;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,13800(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13800, ctx.r11.u32);
	// addi r11,r31,28
	ctx.r11.s64 = ctx.r31.s64 + 28;
	// stw r10,13844(r7)
	PPC_STORE_U32(ctx.r7.u32 + 13844, ctx.r10.u32);
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r9,13796(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13796, ctx.r9.u32);
loc_83865534:
	// mfmsr r4
	ctx.r4.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r6,0,r11
	ea = ctx.r11.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r6.u64 = __builtin_bswap32(reserved.u32);
	// add r5,r10,r6
	ctx.r5.u64 = ctx.r10.u64 + ctx.r6.u64;
	// stwcx. r5,0,r11
	ea = ctx.r11.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r5.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r4,1
	ctx.msr = (ctx.r4.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x83865534
	if (!cr0.eq) goto loc_83865534;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83d7553c
	ctx.lr = 0x83865558;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83865560"))) PPC_WEAK_FUNC(sub_83865560);
PPC_FUNC_IMPL(__imp__sub_83865560) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83865568;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// addi r29,r11,13812
	ctx.r29.s64 = ctx.r11.s64 + 13812;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83d7554c
	ctx.lr = 0x8386557C;
	__imp__RtlEnterCriticalSection(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r7,r29,28
	ctx.r7.s64 = ctx.r29.s64 + 28;
loc_83865584:
	// mfmsr r8
	ctx.r8.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r7
	ea = ctx.r7.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stwcx. r9,0,r7
	ea = ctx.r7.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r8,1
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x83865584
	if (!cr0.eq) goto loc_83865584;
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// addi r31,r11,13856
	ctx.r31.s64 = ctx.r11.s64 + 13856;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// beq cr6,0x83865648
	if (cr6.eq) goto loc_83865648;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r30,0
	ctx.r30.s64 = 0;
	// subf r10,r31,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r31.s64;
	// subfic r9,r10,0
	xer.ca = ctx.r10.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r10.s64;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 & ctx.r11.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83865648
	if (cr6.eq) goto loc_83865648;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r7,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r7.u32);
	// stw r30,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r30.u32);
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
loc_838655F4:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// addi r3,r11,-12
	ctx.r3.s64 = ctx.r11.s64 + -12;
	// bne cr6,0x83865604
	if (!cr6.eq) goto loc_83865604;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_83865604:
	// bl 0x83865280
	ctx.lr = 0x83865608;
	sub_83865280(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// subf r10,r31,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r31.s64;
	// subfic r9,r10,0
	xer.ca = ctx.r10.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r10.s64;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 & ctx.r11.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83865648
	if (cr6.eq) goto loc_83865648;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r7,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r7.u32);
	// stw r30,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r30.u32);
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
	// bne cr6,0x838655f4
	if (!cr6.eq) goto loc_838655F4;
loc_83865648:
	// li r10,-1
	ctx.r10.s64 = -1;
	// addi r7,r29,28
	ctx.r7.s64 = ctx.r29.s64 + 28;
loc_83865650:
	// mfmsr r8
	ctx.r8.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r7
	ea = ctx.r7.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r11.u64 = __builtin_bswap32(reserved.u32);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stwcx. r9,0,r7
	ea = ctx.r7.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r8,1
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x83865650
	if (!cr0.eq) goto loc_83865650;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83d7553c
	ctx.lr = 0x83865674;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8386567C"))) PPC_WEAK_FUNC(sub_8386567C);
PPC_FUNC_IMPL(__imp__sub_8386567C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83865680"))) PPC_WEAK_FUNC(sub_83865680);
PPC_FUNC_IMPL(__imp__sub_83865680) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x83865688;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r30,r11,13812
	ctx.r30.s64 = ctx.r11.s64 + 13812;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83d7554c
	ctx.lr = 0x838656A0;
	__imp__RtlEnterCriticalSection(ctx, base);
	// addi r11,r30,28
	ctx.r11.s64 = ctx.r30.s64 + 28;
	// li r25,1
	ctx.r25.s64 = 1;
loc_838656A8:
	// mfmsr r8
	ctx.r8.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r11
	ea = ctx.r11.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// add r9,r25,r10
	ctx.r9.u64 = ctx.r25.u64 + ctx.r10.u64;
	// stwcx. r9,0,r11
	ea = ctx.r11.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r8,1
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x838656a8
	if (!cr0.eq) goto loc_838656A8;
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r28,r11,13804
	ctx.r28.s64 = ctx.r11.s64 + 13804;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x838651a0
	ctx.lr = 0x838656D8;
	sub_838651A0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x838657ac
	if (cr6.eq) goto loc_838657AC;
	// lis r29,-31743
	ctx.r29.s64 = -2080309248;
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r11,13844(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13844);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,13844(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13844, ctx.r11.u32);
	// bl 0x838644e8
	ctx.lr = 0x83865704;
	sub_838644E8(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x838657e4
	if (!cr6.eq) goto loc_838657E4;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r8,r31,28
	ctx.r8.s64 = ctx.r31.s64 + 28;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
loc_83865728:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r8
	ea = ctx.r8.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// stwcx. r11,0,r8
	ea = ctx.r8.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x83865728
	if (!cr0.eq) goto loc_83865728;
	// lwsync 
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r10,r31,12
	ctx.r10.s64 = ctx.r31.s64 + 12;
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// li r4,-1
	ctx.r4.s64 = -1;
	// addi r9,r30,28
	ctx.r9.s64 = ctx.r30.s64 + 28;
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r8,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r8.u32);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r11,13844(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13844);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,13844(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13844, ctx.r11.u32);
loc_8386577C:
	// mfmsr r5
	ctx.r5.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r7,0,r9
	ea = ctx.r9.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r7.u64 = __builtin_bswap32(reserved.u32);
	// add r6,r4,r7
	ctx.r6.u64 = ctx.r4.u64 + ctx.r7.u64;
	// stwcx. r6,0,r9
	ea = ctx.r9.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r6.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r5,1
	ctx.msr = (ctx.r5.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8386577c
	if (!cr0.eq) goto loc_8386577C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83d7553c
	ctx.lr = 0x838657A0;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_838657AC:
	// li r10,-1
	ctx.r10.s64 = -1;
	// addi r7,r30,28
	ctx.r7.s64 = ctx.r30.s64 + 28;
loc_838657B4:
	// mfmsr r8
	ctx.r8.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r7
	ea = ctx.r7.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r11.u64 = __builtin_bswap32(reserved.u32);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stwcx. r9,0,r7
	ea = ctx.r7.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r8,1
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x838657b4
	if (!cr0.eq) goto loc_838657B4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83d7553c
	ctx.lr = 0x838657D8;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_838657E4:
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r5,20(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8386cff8
	ctx.lr = 0x838657F4;
	sub_8386CFF8(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r26,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r26.u32);
	// stw r27,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r27.u32);
	// addi r7,r31,28
	ctx.r7.s64 = ctx.r31.s64 + 28;
	// stw r8,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r8.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_83865810:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r7
	ea = ctx.r7.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// stwcx. r25,0,r7
	ea = ctx.r7.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r25.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x83865810
	if (!cr0.eq) goto loc_83865810;
	// lwsync 
	// lis r6,-31743
	ctx.r6.s64 = -2080309248;
	// addi r10,r31,12
	ctx.r10.s64 = ctx.r31.s64 + 12;
	// li r8,-1
	ctx.r8.s64 = -1;
	// addi r7,r30,28
	ctx.r7.s64 = ctx.r30.s64 + 28;
	// lwz r11,13848(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 13848);
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// lwz r6,4(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r6,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r6.u32);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r31,0(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
loc_83865860:
	// mfmsr r3
	ctx.r3.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r5,0,r7
	ea = ctx.r7.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r5.u64 = __builtin_bswap32(reserved.u32);
	// add r4,r8,r5
	ctx.r4.u64 = ctx.r8.u64 + ctx.r5.u64;
	// stwcx. r4,0,r7
	ea = ctx.r7.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r4.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r3,1
	ctx.msr = (ctx.r3.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x83865860
	if (!cr0.eq) goto loc_83865860;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83d7553c
	ctx.lr = 0x83865884;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83865890"))) PPC_WEAK_FUNC(sub_83865890);
PPC_FUNC_IMPL(__imp__sub_83865890) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83865898;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r29,r11,13812
	ctx.r29.s64 = ctx.r11.s64 + 13812;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83d7554c
	ctx.lr = 0x838658B0;
	__imp__RtlEnterCriticalSection(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r7,r29,28
	ctx.r7.s64 = ctx.r29.s64 + 28;
loc_838658B8:
	// mfmsr r8
	ctx.r8.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r7
	ea = ctx.r7.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stwcx. r9,0,r7
	ea = ctx.r7.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r8,1
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x838658b8
	if (!cr0.eq) goto loc_838658B8;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x838658f8
	if (cr6.eq) goto loc_838658F8;
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// rlwinm r10,r30,5,12,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 5) & 0xFFFE0;
	// lwz r11,13800(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13800);
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwzx r10,r10,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplw cr6,r10,r30
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r30.u32, xer);
	// beq cr6,0x83865930
	if (cr6.eq) goto loc_83865930;
loc_838658F8:
	// li r10,-1
	ctx.r10.s64 = -1;
	// addi r7,r29,28
	ctx.r7.s64 = ctx.r29.s64 + 28;
loc_83865900:
	// mfmsr r8
	ctx.r8.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r7
	ea = ctx.r7.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r11.u64 = __builtin_bswap32(reserved.u32);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stwcx. r9,0,r7
	ea = ctx.r7.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r8,1
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x83865900
	if (!cr0.eq) goto loc_83865900;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83d7553c
	ctx.lr = 0x83865924;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_83865930:
	// addi r3,r31,28
	ctx.r3.s64 = ctx.r31.s64 + 28;
	// bl 0x838638d0
	ctx.lr = 0x83865938;
	sub_838638D0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x838659ac
	if (!cr6.eq) goto loc_838659AC;
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r30,r31,12
	ctx.r30.s64 = ctx.r31.s64 + 12;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r7,12(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r6,16(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// stw r6,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r6.u32);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r5,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r5.u32);
	// lwz r4,0(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// bl 0x8386d028
	ctx.lr = 0x83865984;
	sub_8386D028(ctx, base);
	// lis r4,-31743
	ctx.r4.s64 = -2080309248;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r10,r4,13856
	ctx.r10.s64 = ctx.r4.s64 + 13856;
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
	// stw r30,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r30.u32);
loc_838659AC:
	// li r10,-1
	ctx.r10.s64 = -1;
	// addi r7,r29,28
	ctx.r7.s64 = ctx.r29.s64 + 28;
loc_838659B4:
	// mfmsr r8
	ctx.r8.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r7
	ea = ctx.r7.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r11.u64 = __builtin_bswap32(reserved.u32);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stwcx. r9,0,r7
	ea = ctx.r7.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r8,1
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x838659b4
	if (!cr0.eq) goto loc_838659B4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83d7553c
	ctx.lr = 0x838659D8;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_838659E4"))) PPC_WEAK_FUNC(sub_838659E4);
PPC_FUNC_IMPL(__imp__sub_838659E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_838659E8"))) PPC_WEAK_FUNC(sub_838659E8);
PPC_FUNC_IMPL(__imp__sub_838659E8) {
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
	// beq cr6,0x83865a3c
	if (cr6.eq) goto loc_83865A3C;
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// rlwinm r10,r3,5,12,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 5) & 0xFFFE0;
	// lwz r11,13800(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13800);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r3
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r3.u32, xer);
	// bne cr6,0x83865a3c
	if (!cr6.eq) goto loc_83865A3C;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x83865a2c
	if (cr6.eq) goto loc_83865A2C;
	// stw r4,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r4.u32);
loc_83865A2C:
	// lwz r3,24(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// bl 0x83864770
	ctx.lr = 0x83865A34;
	sub_83864770(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83865890
	ctx.lr = 0x83865A3C;
	sub_83865890(ctx, base);
loc_83865A3C:
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

__attribute__((alias("__imp__sub_83865A50"))) PPC_WEAK_FUNC(sub_83865A50);
PPC_FUNC_IMPL(__imp__sub_83865A50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83865A58;
	__savegprlr_28(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r7
	ctx.r4.u64 = ctx.r7.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,28(r6)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r6.u32 + 28);
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// bl 0x83b0dc80
	ctx.lr = 0x83865A7C;
	sub_83B0DC80(ctx, base);
	// lwz r11,24(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 24);
	// clrlwi r11,r11,26
	ctx.r11.u64 = ctx.r11.u32 & 0x3F;
	// cmplwi cr6,r11,44
	cr6.compare<uint32_t>(ctx.r11.u32, 44, xer);
	// bgt cr6,0x83865aec
	if (cr6.gt) goto loc_83865AEC;
	// beq cr6,0x83865b44
	if (cr6.eq) goto loc_83865B44;
	// cmplwi cr6,r11,20
	cr6.compare<uint32_t>(ctx.r11.u32, 20, xer);
	// bgt cr6,0x83865adc
	if (cr6.gt) goto loc_83865ADC;
	// cmplwi cr6,r11,18
	cr6.compare<uint32_t>(ctx.r11.u32, 18, xer);
	// bge cr6,0x83865b44
	if (!cr6.lt) goto loc_83865B44;
	// cmplwi cr6,r11,11
	cr6.compare<uint32_t>(ctx.r11.u32, 11, xer);
	// blt cr6,0x83865ab0
	if (cr6.lt) goto loc_83865AB0;
	// cmplwi cr6,r11,12
	cr6.compare<uint32_t>(ctx.r11.u32, 12, xer);
loc_83865AAC:
	// ble cr6,0x83865b44
	if (!cr6.gt) goto loc_83865B44;
loc_83865AB0:
	// lwz r11,108(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// cmplwi cr6,r11,64
	cr6.compare<uint32_t>(ctx.r11.u32, 64, xer);
	// bgt cr6,0x83865b70
	if (cr6.gt) goto loc_83865B70;
	// beq cr6,0x83865b44
	if (cr6.eq) goto loc_83865B44;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// beq cr6,0x83865b44
	if (cr6.eq) goto loc_83865B44;
	// cmplwi cr6,r11,32
	cr6.compare<uint32_t>(ctx.r11.u32, 32, xer);
	// beq cr6,0x83865b78
	if (cr6.eq) goto loc_83865B78;
loc_83865AD0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_83865ADC:
	// cmplwi cr6,r11,39
	cr6.compare<uint32_t>(ctx.r11.u32, 39, xer);
	// blt cr6,0x83865ab0
	if (cr6.lt) goto loc_83865AB0;
	// cmplwi cr6,r11,40
	cr6.compare<uint32_t>(ctx.r11.u32, 40, xer);
	// b 0x83865aac
	goto loc_83865AAC;
loc_83865AEC:
	// addi r11,r11,-49
	ctx.r11.s64 = ctx.r11.s64 + -49;
	// cmplwi cr6,r11,12
	cr6.compare<uint32_t>(ctx.r11.u32, 12, xer);
	// bgt cr6,0x83865ab0
	if (cr6.gt) goto loc_83865AB0;
	// lis r12,-31866
	ctx.r12.s64 = -2088370176;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,23312
	ctx.r12.s64 = ctx.r12.s64 + 23312;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_83865B44;
	case 1:
		goto loc_83865AB0;
	case 2:
		goto loc_83865B44;
	case 3:
		goto loc_83865B44;
	case 4:
		goto loc_83865B44;
	case 5:
		goto loc_83865AB0;
	case 6:
		goto loc_83865AB0;
	case 7:
		goto loc_83865AB0;
	case 8:
		goto loc_83865AB0;
	case 9:
		goto loc_83865B44;
	case 10:
		goto loc_83865B44;
	case 11:
		goto loc_83865B44;
	case 12:
		goto loc_83865B44;
	default:
		return;
	}
	// lwz r28,23364(r6)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r6.u32 + 23364);
	// lwz r28,23216(r6)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r6.u32 + 23216);
	// lwz r28,23364(r6)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r6.u32 + 23364);
	// lwz r28,23364(r6)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r6.u32 + 23364);
	// lwz r28,23364(r6)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r6.u32 + 23364);
	// lwz r28,23216(r6)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r6.u32 + 23216);
	// lwz r28,23216(r6)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r6.u32 + 23216);
	// lwz r28,23216(r6)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r6.u32 + 23216);
	// lwz r28,23216(r6)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r6.u32 + 23216);
	// lwz r28,23364(r6)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r6.u32 + 23364);
	// lwz r28,23364(r6)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r6.u32 + 23364);
	// lwz r28,23364(r6)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r6.u32 + 23364);
	// lwz r28,23364(r6)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r6.u32 + 23364);
loc_83865B44:
	// lis r5,2
	ctx.r5.s64 = 131072;
	// li r6,2
	ctx.r6.s64 = 2;
loc_83865B4C:
	// ori r5,r5,1
	ctx.r5.u64 = ctx.r5.u64 | 1;
	// divwu r7,r29,r6
	ctx.r7.u32 = PPCDivide(ctx.r29.u32, ctx.r6.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// twllei r6,0
	// bl 0x832de758
	ctx.lr = 0x83865B64;
	sub_832DE758(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_83865B70:
	// cmplwi cr6,r11,128
	cr6.compare<uint32_t>(ctx.r11.u32, 128, xer);
	// bne cr6,0x83865ad0
	if (!cr6.eq) goto loc_83865AD0;
loc_83865B78:
	// lis r5,4
	ctx.r5.s64 = 262144;
	// li r6,4
	ctx.r6.s64 = 4;
	// b 0x83865b4c
	goto loc_83865B4C;
}

__attribute__((alias("__imp__sub_83865B84"))) PPC_WEAK_FUNC(sub_83865B84);
PPC_FUNC_IMPL(__imp__sub_83865B84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83865B88"))) PPC_WEAK_FUNC(sub_83865B88);
PPC_FUNC_IMPL(__imp__sub_83865B88) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83865bb4
	if (cr6.eq) goto loc_83865BB4;
	// lis r10,-31743
	ctx.r10.s64 = -2080309248;
	// clrlwi r9,r3,17
	ctx.r9.u64 = ctx.r3.u32 & 0x7FFF;
	// mulli r9,r9,116
	ctx.r9.s64 = ctx.r9.s64 * 116;
	// lwz r10,13884(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13884);
	// lwzx r8,r9,r10
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// add r3,r9,r10
	ctx.r3.u64 = ctx.r9.u64 + ctx.r10.u64;
	// cmplw cr6,r8,r11
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, xer);
	// beqlr cr6
	if (cr6.eq) return;
loc_83865BB4:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83865BBC"))) PPC_WEAK_FUNC(sub_83865BBC);
PPC_FUNC_IMPL(__imp__sub_83865BBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83865BC0"))) PPC_WEAK_FUNC(sub_83865BC0);
PPC_FUNC_IMPL(__imp__sub_83865BC0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// rlwinm r11,r4,0,22,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x200;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83865bd0
	if (cr6.eq) goto loc_83865BD0;
	// rlwinm r3,r3,0,24,22
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFFFFFFFFFFEFF;
loc_83865BD0:
	// rlwinm r11,r4,0,18,18
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x2000;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// ori r3,r3,32256
	ctx.r3.u64 = ctx.r3.u64 | 32256;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83865BE4"))) PPC_WEAK_FUNC(sub_83865BE4);
PPC_FUNC_IMPL(__imp__sub_83865BE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83865BE8"))) PPC_WEAK_FUNC(sub_83865BE8);
PPC_FUNC_IMPL(__imp__sub_83865BE8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r4,1
	cr6.compare<uint32_t>(ctx.r4.u32, 1, xer);
	// blt cr6,0x83865c28
	if (cr6.lt) goto loc_83865C28;
	// bnelr cr6
	if (!cr6.eq) return;
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// ori r9,r10,12
	ctx.r9.u64 = ctx.r10.u64 | 12;
	// stw r9,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r9.u32);
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// lwz r8,28(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// ori r7,r8,48
	ctx.r7.u64 = ctx.r8.u64 | 48;
	// stw r7,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r7.u32);
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// lwz r6,28(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// ori r5,r6,192
	ctx.r5.u64 = ctx.r6.u64 | 192;
	// stw r5,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r5.u32);
	// blr 
	return;
loc_83865C28:
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// rlwinm r9,r10,0,30,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF3;
	// stw r9,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r9.u32);
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// lwz r8,28(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// rlwinm r7,r8,0,28,25
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFFFFFFFCF;
	// stw r7,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r7.u32);
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// lwz r6,28(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// rlwinm r5,r6,0,26,23
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFFFFFFFFF3F;
	// stw r5,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83865C5C"))) PPC_WEAK_FUNC(sub_83865C5C);
PPC_FUNC_IMPL(__imp__sub_83865C5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83865C60"))) PPC_WEAK_FUNC(sub_83865C60);
PPC_FUNC_IMPL(__imp__sub_83865C60) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83865C68;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,4096
	ctx.r4.s64 = 4096;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83863b20
	ctx.lr = 0x83865C90;
	sub_83863B20(ctx, base);
	// rlwinm r11,r28,0,21,21
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0x400;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83865ca0
	if (cr6.eq) goto loc_83865CA0;
	// bl 0x8386cfd8
	ctx.lr = 0x83865CA0;
	sub_8386CFD8(ctx, base);
loc_83865CA0:
	// add r31,r3,r31
	ctx.r31.u64 = ctx.r3.u64 + ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x83b0d458
	ctx.lr = 0x83865CB0;
	sub_83B0D458(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83864770
	ctx.lr = 0x83865CB8;
	sub_83864770(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83865CC4"))) PPC_WEAK_FUNC(sub_83865CC4);
PPC_FUNC_IMPL(__imp__sub_83865CC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83865CC8"))) PPC_WEAK_FUNC(sub_83865CC8);
PPC_FUNC_IMPL(__imp__sub_83865CC8) {
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
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r30,r11,13888
	ctx.r30.s64 = ctx.r11.s64 + 13888;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83d7554c
	ctx.lr = 0x83865CF0;
	__imp__RtlEnterCriticalSection(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r7,r30,28
	ctx.r7.s64 = ctx.r30.s64 + 28;
loc_83865CF8:
	// mfmsr r8
	ctx.r8.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r7
	ea = ctx.r7.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stwcx. r9,0,r7
	ea = ctx.r7.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r8,1
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x83865cf8
	if (!cr0.eq) goto loc_83865CF8;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x83865d3c
	if (cr6.eq) goto loc_83865D3C;
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// clrlwi r10,r31,17
	ctx.r10.u64 = ctx.r31.u32 & 0x7FFF;
	// mulli r10,r10,116
	ctx.r10.s64 = ctx.r10.s64 * 116;
	// lwz r11,13884(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13884);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r9,r31
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r31.u32, xer);
	// beq cr6,0x83865d70
	if (cr6.eq) goto loc_83865D70;
loc_83865D3C:
	// li r10,-1
	ctx.r10.s64 = -1;
	// addi r7,r30,28
	ctx.r7.s64 = ctx.r30.s64 + 28;
loc_83865D44:
	// mfmsr r8
	ctx.r8.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r7
	ea = ctx.r7.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r11.u64 = __builtin_bswap32(reserved.u32);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stwcx. r9,0,r7
	ea = ctx.r7.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r8,1
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x83865d44
	if (!cr0.eq) goto loc_83865D44;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83d7553c
	ctx.lr = 0x83865D68;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x83865dac
	goto loc_83865DAC;
loc_83865D70:
	// addi r3,r11,112
	ctx.r3.s64 = ctx.r11.s64 + 112;
	// bl 0x83863818
	ctx.lr = 0x83865D78;
	sub_83863818(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r9,-1
	ctx.r9.s64 = -1;
	// addi r7,r30,28
	ctx.r7.s64 = ctx.r30.s64 + 28;
loc_83865D84:
	// mfmsr r8
	ctx.r8.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r7
	ea = ctx.r7.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r11.u64 = __builtin_bswap32(reserved.u32);
	// add r10,r9,r11
	ctx.r10.u64 = ctx.r9.u64 + ctx.r11.u64;
	// stwcx. r10,0,r7
	ea = ctx.r7.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r8,1
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x83865d84
	if (!cr0.eq) goto loc_83865D84;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83d7553c
	ctx.lr = 0x83865DA8;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_83865DAC:
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

__attribute__((alias("__imp__sub_83865DC4"))) PPC_WEAK_FUNC(sub_83865DC4);
PPC_FUNC_IMPL(__imp__sub_83865DC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83865DC8"))) PPC_WEAK_FUNC(sub_83865DC8);
PPC_FUNC_IMPL(__imp__sub_83865DC8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x83865DD0;
	__savegprlr_25(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r30,r11,13888
	ctx.r30.s64 = ctx.r11.s64 + 13888;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// mr r25,r7
	ctx.r25.u64 = ctx.r7.u64;
	// bl 0x83d7554c
	ctx.lr = 0x83865DF8;
	__imp__RtlEnterCriticalSection(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r7,r30,28
	ctx.r7.s64 = ctx.r30.s64 + 28;
loc_83865E00:
	// mfmsr r8
	ctx.r8.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r7
	ea = ctx.r7.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stwcx. r9,0,r7
	ea = ctx.r7.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r8,1
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x83865e00
	if (!cr0.eq) goto loc_83865E00;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// beq cr6,0x83865f14
	if (cr6.eq) goto loc_83865F14;
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// clrlwi r10,r28,17
	ctx.r10.u64 = ctx.r28.u32 & 0x7FFF;
	// mulli r10,r10,116
	ctx.r10.s64 = ctx.r10.s64 * 116;
	// lwz r11,13884(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13884);
	// lwzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r9,r28
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r28.u32, xer);
	// bne cr6,0x83865f14
	if (!cr6.eq) goto loc_83865F14;
	// lbz r11,14(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 14);
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, xer);
	// bge cr6,0x83865f14
	if (!cr6.lt) goto loc_83865F14;
	// lbz r11,15(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 15);
	// cmplw cr6,r27,r11
	cr6.compare<uint32_t>(ctx.r27.u32, ctx.r11.u32, xer);
	// bge cr6,0x83865f14
	if (!cr6.lt) goto loc_83865F14;
	// addi r3,r31,112
	ctx.r3.s64 = ctx.r31.s64 + 112;
	// bl 0x83863818
	ctx.lr = 0x83865E64;
	sub_83863818(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// addi r7,r30,28
	ctx.r7.s64 = ctx.r30.s64 + 28;
loc_83865E6C:
	// mfmsr r8
	ctx.r8.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r7
	ea = ctx.r7.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stwcx. r9,0,r7
	ea = ctx.r7.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r8,1
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x83865e6c
	if (!cr0.eq) goto loc_83865E6C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83d7553c
	ctx.lr = 0x83865E90;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// bl 0x83b0dc80
	ctx.lr = 0x83865EA0;
	sub_83B0DC80(ctx, base);
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r6,116(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
	// mullw r27,r6,r11
	ctx.r27.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r11.s32);
	// bl 0x83b0d530
	ctx.lr = 0x83865EC0;
	sub_83B0D530(ctx, base);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// bne cr6,0x83865ed0
	if (!cr6.eq) goto loc_83865ED0;
	// lwz r11,104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// b 0x83865ed4
	goto loc_83865ED4;
loc_83865ED0:
	// lwz r11,108(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
loc_83865ED4:
	// add r30,r11,r3
	ctx.r30.u64 = ctx.r11.u64 + ctx.r3.u64;
	// rlwinm r11,r25,0,19,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 0) & 0x1FF0;
	// rlwinm r11,r11,0,27,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFF01F;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83865ef0
	if (!cr6.eq) goto loc_83865EF0;
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// bl 0x8386ca10
	ctx.lr = 0x83865EF0;
	sub_8386CA10(ctx, base);
loc_83865EF0:
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// lwz r3,100(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// bl 0x83863b20
	ctx.lr = 0x83865F04;
	sub_83863B20(ctx, base);
	// stw r3,4(r26)
	PPC_STORE_U32(ctx.r26.u32 + 4, ctx.r3.u32);
	// stw r28,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r28.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_83865F14:
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r7,r30,28
	ctx.r7.s64 = ctx.r30.s64 + 28;
	// stw r11,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r11.u32);
	// li r6,-1
	ctx.r6.s64 = -1;
	// stw r11,4(r26)
	PPC_STORE_U32(ctx.r26.u32 + 4, ctx.r11.u32);
loc_83865F28:
	// mfmsr r8
	ctx.r8.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r7
	ea = ctx.r7.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// add r9,r6,r10
	ctx.r9.u64 = ctx.r6.u64 + ctx.r10.u64;
	// stwcx. r9,0,r7
	ea = ctx.r7.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r8,1
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x83865f28
	if (!cr0.eq) goto loc_83865F28;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83d7553c
	ctx.lr = 0x83865F4C;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83865F54"))) PPC_WEAK_FUNC(sub_83865F54);
PPC_FUNC_IMPL(__imp__sub_83865F54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83865F58"))) PPC_WEAK_FUNC(sub_83865F58);
PPC_FUNC_IMPL(__imp__sub_83865F58) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83865F60;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r29,r11,13888
	ctx.r29.s64 = ctx.r11.s64 + 13888;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83d7554c
	ctx.lr = 0x83865F78;
	__imp__RtlEnterCriticalSection(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r7,r29,28
	ctx.r7.s64 = ctx.r29.s64 + 28;
loc_83865F80:
	// mfmsr r8
	ctx.r8.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r7
	ea = ctx.r7.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stwcx. r9,0,r7
	ea = ctx.r7.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r8,1
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x83865f80
	if (!cr0.eq) goto loc_83865F80;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x83865fc4
	if (cr6.eq) goto loc_83865FC4;
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// clrlwi r10,r31,17
	ctx.r10.u64 = ctx.r31.u32 & 0x7FFF;
	// mulli r10,r10,116
	ctx.r10.s64 = ctx.r10.s64 * 116;
	// lwz r11,13884(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13884);
	// lwzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// add r30,r10,r11
	ctx.r30.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r9,r31
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r31.u32, xer);
	// beq cr6,0x83865ffc
	if (cr6.eq) goto loc_83865FFC;
loc_83865FC4:
	// li r10,-1
	ctx.r10.s64 = -1;
	// addi r7,r29,28
	ctx.r7.s64 = ctx.r29.s64 + 28;
loc_83865FCC:
	// mfmsr r8
	ctx.r8.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r7
	ea = ctx.r7.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r11.u64 = __builtin_bswap32(reserved.u32);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stwcx. r9,0,r7
	ea = ctx.r7.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r8,1
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x83865fcc
	if (!cr0.eq) goto loc_83865FCC;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83d7553c
	ctx.lr = 0x83865FF0;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83865FFC:
	// addi r3,r30,112
	ctx.r3.s64 = ctx.r30.s64 + 112;
	// bl 0x83863818
	ctx.lr = 0x83866004;
	sub_83863818(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// addi r7,r29,28
	ctx.r7.s64 = ctx.r29.s64 + 28;
loc_8386600C:
	// mfmsr r8
	ctx.r8.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r7
	ea = ctx.r7.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stwcx. r9,0,r7
	ea = ctx.r7.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r8,1
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8386600c
	if (!cr0.eq) goto loc_8386600C;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83d7553c
	ctx.lr = 0x83866030;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8386603C"))) PPC_WEAK_FUNC(sub_8386603C);
PPC_FUNC_IMPL(__imp__sub_8386603C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83866040"))) PPC_WEAK_FUNC(sub_83866040);
PPC_FUNC_IMPL(__imp__sub_83866040) {
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
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r30,r11,13888
	ctx.r30.s64 = ctx.r11.s64 + 13888;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83d7554c
	ctx.lr = 0x83866068;
	__imp__RtlEnterCriticalSection(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r7,r30,28
	ctx.r7.s64 = ctx.r30.s64 + 28;
loc_83866070:
	// mfmsr r8
	ctx.r8.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r7
	ea = ctx.r7.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stwcx. r9,0,r7
	ea = ctx.r7.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r8,1
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x83866070
	if (!cr0.eq) goto loc_83866070;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x838660b4
	if (cr6.eq) goto loc_838660B4;
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// clrlwi r10,r31,17
	ctx.r10.u64 = ctx.r31.u32 & 0x7FFF;
	// mulli r10,r10,116
	ctx.r10.s64 = ctx.r10.s64 * 116;
	// lwz r11,13884(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13884);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r9,r31
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r31.u32, xer);
	// beq cr6,0x838660e8
	if (cr6.eq) goto loc_838660E8;
loc_838660B4:
	// li r10,-1
	ctx.r10.s64 = -1;
	// addi r7,r30,28
	ctx.r7.s64 = ctx.r30.s64 + 28;
loc_838660BC:
	// mfmsr r8
	ctx.r8.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r7
	ea = ctx.r7.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r11.u64 = __builtin_bswap32(reserved.u32);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stwcx. r9,0,r7
	ea = ctx.r7.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r8,1
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x838660bc
	if (!cr0.eq) goto loc_838660BC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83d7553c
	ctx.lr = 0x838660E0;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83866124
	goto loc_83866124;
loc_838660E8:
	// lwz r31,100(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83863a18
	ctx.lr = 0x838660F4;
	sub_83863A18(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// addi r7,r30,28
	ctx.r7.s64 = ctx.r30.s64 + 28;
loc_838660FC:
	// mfmsr r8
	ctx.r8.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r7
	ea = ctx.r7.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stwcx. r9,0,r7
	ea = ctx.r7.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r8,1
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x838660fc
	if (!cr0.eq) goto loc_838660FC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83d7553c
	ctx.lr = 0x83866120;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_83866124:
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

__attribute__((alias("__imp__sub_8386613C"))) PPC_WEAK_FUNC(sub_8386613C);
PPC_FUNC_IMPL(__imp__sub_8386613C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83866140"))) PPC_WEAK_FUNC(sub_83866140);
PPC_FUNC_IMPL(__imp__sub_83866140) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83866148;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r29,r11,13888
	ctx.r29.s64 = ctx.r11.s64 + 13888;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83d7554c
	ctx.lr = 0x83866160;
	__imp__RtlEnterCriticalSection(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r7,r29,28
	ctx.r7.s64 = ctx.r29.s64 + 28;
loc_83866168:
	// mfmsr r8
	ctx.r8.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r7
	ea = ctx.r7.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stwcx. r9,0,r7
	ea = ctx.r7.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r8,1
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x83866168
	if (!cr0.eq) goto loc_83866168;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x838661ac
	if (cr6.eq) goto loc_838661AC;
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// clrlwi r10,r31,17
	ctx.r10.u64 = ctx.r31.u32 & 0x7FFF;
	// mulli r10,r10,116
	ctx.r10.s64 = ctx.r10.s64 * 116;
	// lwz r11,13884(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13884);
	// lwzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// add r30,r10,r11
	ctx.r30.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r9,r31
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r31.u32, xer);
	// beq cr6,0x838661e4
	if (cr6.eq) goto loc_838661E4;
loc_838661AC:
	// li r10,-1
	ctx.r10.s64 = -1;
	// addi r7,r29,28
	ctx.r7.s64 = ctx.r29.s64 + 28;
loc_838661B4:
	// mfmsr r8
	ctx.r8.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r7
	ea = ctx.r7.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r11.u64 = __builtin_bswap32(reserved.u32);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stwcx. r9,0,r7
	ea = ctx.r7.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r8,1
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x838661b4
	if (!cr0.eq) goto loc_838661B4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83d7553c
	ctx.lr = 0x838661D8;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_838661E4:
	// addi r3,r30,112
	ctx.r3.s64 = ctx.r30.s64 + 112;
	// bl 0x83863818
	ctx.lr = 0x838661EC;
	sub_83863818(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// addi r7,r29,28
	ctx.r7.s64 = ctx.r29.s64 + 28;
	// lwz r31,28(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
loc_838661F8:
	// mfmsr r8
	ctx.r8.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r7
	ea = ctx.r7.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stwcx. r9,0,r7
	ea = ctx.r7.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r8,1
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x838661f8
	if (!cr0.eq) goto loc_838661F8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83d7553c
	ctx.lr = 0x8386621C;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83866228"))) PPC_WEAK_FUNC(sub_83866228);
PPC_FUNC_IMPL(__imp__sub_83866228) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83866230;
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
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, xer);
	// bne cr6,0x838662ac
	if (!cr6.eq) goto loc_838662AC;
	// addi r29,r4,28
	ctx.r29.s64 = ctx.r4.s64 + 28;
	// li r9,-1
	ctx.r9.s64 = -1;
loc_83866250:
	// mfmsr r8
	ctx.r8.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r29
	ea = ctx.r29.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r11.u64 = __builtin_bswap32(reserved.u32);
	// add r10,r9,r11
	ctx.r10.u64 = ctx.r9.u64 + ctx.r11.u64;
	// stwcx. r10,0,r29
	ea = ctx.r29.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r8,1
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x83866250
	if (!cr0.eq) goto loc_83866250;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83d7553c
	ctx.lr = 0x83866274;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// bl 0x83864d00
	ctx.lr = 0x83866278;
	sub_83864D00(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83d7554c
	ctx.lr = 0x83866280;
	__imp__RtlEnterCriticalSection(ctx, base);
	// li r7,1
	ctx.r7.s64 = 1;
loc_83866284:
	// mfmsr r4
	ctx.r4.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r6,0,r29
	ea = ctx.r29.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r6.u64 = __builtin_bswap32(reserved.u32);
	// add r5,r7,r6
	ctx.r5.u64 = ctx.r7.u64 + ctx.r6.u64;
	// stwcx. r5,0,r29
	ea = ctx.r29.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r5.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r4,1
	ctx.msr = (ctx.r4.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x83866284
	if (!cr0.eq) goto loc_83866284;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplw cr6,r31,r3
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r3.u32, xer);
	// beq cr6,0x838662f8
	if (cr6.eq) goto loc_838662F8;
loc_838662AC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// subf r10,r31,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r31.s64;
	// subfic r9,r10,0
	xer.ca = ctx.r10.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r10.s64;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 & ctx.r11.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x838662f8
	if (cr6.eq) goto loc_838662F8;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r3,r11,-36
	ctx.r3.s64 = ctx.r11.s64 + -36;
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r6,4(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r6,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r6.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_838662F8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83866304"))) PPC_WEAK_FUNC(sub_83866304);
PPC_FUNC_IMPL(__imp__sub_83866304) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83866308"))) PPC_WEAK_FUNC(sub_83866308);
PPC_FUNC_IMPL(__imp__sub_83866308) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	uint32_t ea{};
	// lis r10,32767
	ctx.r10.s64 = 2147418112;
	// li r11,0
	ctx.r11.s64 = 0;
	// ori r7,r10,65535
	ctx.r7.u64 = ctx.r10.u64 | 65535;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// addi r6,r3,112
	ctx.r6.s64 = ctx.r3.s64 + 112;
	// sth r11,8(r3)
	PPC_STORE_U16(ctx.r3.u32 + 8, ctx.r11.u16);
	// sth r11,10(r3)
	PPC_STORE_U16(ctx.r3.u32 + 10, ctx.r11.u16);
	// stb r11,14(r3)
	PPC_STORE_U8(ctx.r3.u32 + 14, ctx.r11.u8);
	// stb r11,15(r3)
	PPC_STORE_U8(ctx.r3.u32 + 15, ctx.r11.u8);
	// stw r7,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r7.u32);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// stw r11,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
	// stw r11,100(r3)
	PPC_STORE_U32(ctx.r3.u32 + 100, ctx.r11.u32);
loc_83866340:
	// mfmsr r8
	ctx.r8.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r9,0,r6
	ea = ctx.r6.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r9.u64 = __builtin_bswap32(reserved.u32);
	// stwcx. r11,0,r6
	ea = ctx.r6.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r8,1
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x83866340
	if (!cr0.eq) goto loc_83866340;
	// lwsync 
	// lis r5,-31743
	ctx.r5.s64 = -2080309248;
	// lis r4,-31743
	ctx.r4.s64 = -2080309248;
	// addi r10,r3,36
	ctx.r10.s64 = ctx.r3.s64 + 36;
	// lwz r11,13924(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 13924);
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r11,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
	// stw r9,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r9.u32);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r11,13880(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 13880);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,13880(r4)
	PPC_STORE_U32(ctx.r4.u32 + 13880, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83866398"))) PPC_WEAK_FUNC(sub_83866398);
PPC_FUNC_IMPL(__imp__sub_83866398) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x838663A0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwsync 
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r29,r3,112
	ctx.r29.s64 = ctx.r3.s64 + 112;
loc_838663B4:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r29
	ea = ctx.r29.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r11.u64 = __builtin_bswap32(reserved.u32);
	// add r10,r30,r11
	ctx.r10.u64 = ctx.r30.u64 + ctx.r11.u64;
	// stwcx. r10,0,r29
	ea = ctx.r29.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x838663b4
	if (!cr0.eq) goto loc_838663B4;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// bl 0x823f76b8
	ctx.lr = 0x838663DC;
	sub_823F76B8(ctx, base);
	// lwz r3,100(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// bl 0x83864610
	ctx.lr = 0x838663E4;
	sub_83864610(ctx, base);
	// lis r8,32767
	ctx.r8.s64 = 2147418112;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// ori r5,r8,65535
	ctx.r5.u64 = ctx.r8.u64 | 65535;
	// sth r30,8(r31)
	PPC_STORE_U16(ctx.r31.u32 + 8, ctx.r30.u16);
	// sth r30,10(r31)
	PPC_STORE_U16(ctx.r31.u32 + 10, ctx.r30.u16);
	// stb r30,14(r31)
	PPC_STORE_U8(ctx.r31.u32 + 14, ctx.r30.u8);
	// stb r30,15(r31)
	PPC_STORE_U8(ctx.r31.u32 + 15, ctx.r30.u8);
	// stw r5,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r5.u32);
	// stw r30,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r30.u32);
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// stw r30,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r30.u32);
loc_83866414:
	// mfmsr r6
	ctx.r6.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r7,0,r29
	ea = ctx.r29.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r7.u64 = __builtin_bswap32(reserved.u32);
	// stwcx. r30,0,r29
	ea = ctx.r29.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r30.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r6,1
	ctx.msr = (ctx.r6.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x83866414
	if (!cr0.eq) goto loc_83866414;
	// lwsync 
	// lis r4,-31743
	ctx.r4.s64 = -2080309248;
	// lis r3,-31743
	ctx.r3.s64 = -2080309248;
	// addi r10,r31,36
	ctx.r10.s64 = ctx.r31.s64 + 36;
	// lwz r11,13924(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 13924);
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// stw r9,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r9.u32);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r11,13880(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 13880);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,13880(r3)
	PPC_STORE_U32(ctx.r3.u32 + 13880, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83866470"))) PPC_WEAK_FUNC(sub_83866470);
PPC_FUNC_IMPL(__imp__sub_83866470) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad4
	ctx.lr = 0x83866478;
	__savegprlr_23(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// lwz r5,96(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// li r4,7
	ctx.r4.s64 = 7;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
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
	// bl 0x8386cff8
	ctx.lr = 0x838664AC;
	sub_8386CFF8(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// clrlwi r10,r25,24
	ctx.r10.u64 = ctx.r25.u32 & 0xFF;
	// lwz r29,268(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 268);
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// lwz r9,260(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 260);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// lwz r30,276(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	// stw r28,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r28.u32);
	// stw r23,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r23.u32);
	// stw r29,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r29.u32);
	// sth r8,8(r31)
	PPC_STORE_U16(ctx.r31.u32 + 8, ctx.r8.u16);
	// sth r27,10(r31)
	PPC_STORE_U16(ctx.r31.u32 + 10, ctx.r27.u16);
	// sth r26,12(r31)
	PPC_STORE_U16(ctx.r31.u32 + 12, ctx.r26.u16);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stb r10,14(r31)
	PPC_STORE_U8(ctx.r31.u32 + 14, ctx.r10.u8);
	// stb r24,15(r31)
	PPC_STORE_U8(ctx.r31.u32 + 15, ctx.r24.u8);
	// stw r9,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r9.u32);
	// bne cr6,0x83866500
	if (!cr6.eq) goto loc_83866500;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823f1ab0
	ctx.lr = 0x838664FC;
	sub_823F1AB0(ctx, base);
	// stb r3,14(r31)
	PPC_STORE_U8(ctx.r31.u32 + 14, ctx.r3.u8);
loc_83866500:
	// rlwinm r11,r29,18,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 18) & 0x3;
	// lwz r7,40(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// rlwinm r8,r29,20,28,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 20) & 0xC;
	// lwz r9,28(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// rlwinm r6,r29,11,29,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 11) & 0x7;
	// lwz r5,44(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// or r4,r8,r11
	ctx.r4.u64 = ctx.r8.u64 | ctx.r11.u64;
	// lwz r3,284(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 284);
	// rlwinm r11,r29,0,11,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x1F0000;
	// lwz r10,292(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 292);
	// rlwinm r8,r4,0,28,22
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFFFFFFFFFFE0F;
	// rlwimi r9,r6,10,19,21
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r6.u32, 10) & 0x1C00) | (ctx.r9.u64 & 0xFFFFFFFFFFFFE3FF);
	// rlwinm r4,r8,12,0,19
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 12) & 0xFFFFF000;
	// rlwinm r8,r7,0,13,3
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFFF007FFFF;
	// or r7,r4,r11
	ctx.r7.u64 = ctx.r4.u64 | ctx.r11.u64;
	// rlwimi r9,r6,13,16,18
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r6.u32, 13) & 0xE000) | (ctx.r9.u64 & 0xFFFFFFFFFFFF1FFF);
	// rlwinm r4,r7,7,0,24
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 7) & 0xFFFFFF80;
	// stw r9,28(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28, ctx.r9.u32);
	// or r11,r4,r8
	ctx.r11.u64 = ctx.r4.u64 | ctx.r8.u64;
	// stw r11,40(r30)
	PPC_STORE_U32(ctx.r30.u32 + 40, ctx.r11.u32);
	// lbz r11,14(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 14);
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// rlwimi r5,r9,6,22,25
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r9.u32, 6) & 0x3C0) | (ctx.r5.u64 & 0xFFFFFFFFFFFFFC3F);
	// stw r5,44(r30)
	PPC_STORE_U32(ctx.r30.u32 + 44, ctx.r5.u32);
	// lbz r8,14(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 14);
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
	// stw r3,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r3.u32);
	// lwz r7,32(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// rlwinm r6,r7,0,0,19
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFF000;
	// subf r5,r10,r6
	ctx.r5.s64 = ctx.r6.s64 - ctx.r10.s64;
	// cmplwi cr6,r8,1
	cr6.compare<uint32_t>(ctx.r8.u32, 1, xer);
	// stw r5,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r5.u32);
	// ble cr6,0x838665a4
	if (!cr6.gt) goto loc_838665A4;
	// lwz r11,48(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// rlwinm r9,r11,0,0,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFF000;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x838665a4
	if (cr6.eq) goto loc_838665A4;
	// rlwinm r11,r11,0,0,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFF000;
	// subf r10,r10,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r10.s64;
	// stw r10,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r10.u32);
	// b 0x838665ac
	goto loc_838665AC;
loc_838665A4:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r11.u32);
loc_838665AC:
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r8,r31,112
	ctx.r8.s64 = ctx.r31.s64 + 112;
loc_838665B4:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r8
	ea = ctx.r8.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// stwcx. r11,0,r8
	ea = ctx.r8.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x838665b4
	if (!cr0.eq) goto loc_838665B4;
	// lwsync 
	// lis r7,-31743
	ctx.r7.s64 = -2080309248;
	// addi r10,r31,36
	ctx.r10.s64 = ctx.r31.s64 + 36;
	// lwz r11,13872(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 13872);
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// lwz r6,4(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// stw r6,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r6.u32);
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83866600"))) PPC_WEAK_FUNC(sub_83866600);
PPC_FUNC_IMPL(__imp__sub_83866600) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdab4
	ctx.lr = 0x83866608;
	__savegprlr_15(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// rlwinm r11,r9,0,22,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x200;
	// mr r19,r3
	ctx.r19.u64 = ctx.r3.u64;
	// mr r15,r4
	ctx.r15.u64 = ctx.r4.u64;
	// mr r23,r5
	ctx.r23.u64 = ctx.r5.u64;
	// mr r22,r6
	ctx.r22.u64 = ctx.r6.u64;
	// mr r21,r7
	ctx.r21.u64 = ctx.r7.u64;
	// mr r17,r8
	ctx.r17.u64 = ctx.r8.u64;
	// mr r24,r9
	ctx.r24.u64 = ctx.r9.u64;
	// mr r25,r8
	ctx.r25.u64 = ctx.r8.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8386663c
	if (cr6.eq) goto loc_8386663C;
	// rlwinm r25,r8,0,24,22
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFFFFFFEFF;
loc_8386663C:
	// rlwinm r11,r24,0,18,18
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 0) & 0x2000;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8386664c
	if (cr6.eq) goto loc_8386664C;
	// ori r25,r25,32256
	ctx.r25.u64 = ctx.r25.u64 | 32256;
loc_8386664C:
	// rlwinm r11,r24,0,23,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 0) & 0x100;
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// mr r20,r31
	ctx.r20.u64 = ctx.r31.u64;
	// beq cr6,0x83866668
	if (cr6.eq) goto loc_83866668;
	// clrlwi r11,r24,26
	ctx.r11.u64 = ctx.r24.u32 & 0x3F;
	// addi r20,r11,-32
	ctx.r20.s64 = ctx.r11.s64 + -32;
loc_83866668:
	// rlwinm r16,r24,0,21,21
	ctx.r16.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 0) & 0x400;
	// mr r27,r31
	ctx.r27.u64 = ctx.r31.u64;
	// cmplwi cr6,r16,0
	cr6.compare<uint32_t>(ctx.r16.u32, 0, xer);
	// beq cr6,0x8386667c
	if (cr6.eq) goto loc_8386667C;
	// li r27,4
	ctx.r27.s64 = 4;
loc_8386667C:
	// rlwinm r11,r24,0,7,7
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 0) & 0x1000000;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8386668c
	if (cr6.eq) goto loc_8386668C;
	// ori r27,r27,512
	ctx.r27.u64 = ctx.r27.u64 | 512;
loc_8386668C:
	// rlwinm r11,r24,0,20,20
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 0) & 0x800;
	// mr r28,r31
	ctx.r28.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x838666a0
	if (cr6.eq) goto loc_838666A0;
	// li r28,1
	ctx.r28.s64 = 1;
loc_838666A0:
	// rlwinm r11,r24,0,19,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 0) & 0x1000;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x838666b0
	if (cr6.eq) goto loc_838666B0;
	// ori r28,r28,2
	ctx.r28.u64 = ctx.r28.u64 | 2;
loc_838666B0:
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// addi r18,r11,13888
	ctx.r18.s64 = ctx.r11.s64 + 13888;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x83d7554c
	ctx.lr = 0x838666C0;
	__imp__RtlEnterCriticalSection(ctx, base);
	// addi r11,r18,28
	ctx.r11.s64 = ctx.r18.s64 + 28;
	// li r8,1
	ctx.r8.s64 = 1;
loc_838666C8:
	// mfmsr r7
	ctx.r7.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r11
	ea = ctx.r11.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// add r9,r8,r10
	ctx.r9.u64 = ctx.r8.u64 + ctx.r10.u64;
	// stwcx. r9,0,r11
	ea = ctx.r11.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r7,1
	ctx.msr = (ctx.r7.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x838666c8
	if (!cr0.eq) goto loc_838666C8;
	// lis r6,-31743
	ctx.r6.s64 = -2080309248;
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// addi r3,r6,13924
	ctx.r3.s64 = ctx.r6.s64 + 13924;
	// bl 0x83866228
	ctx.lr = 0x838666F4;
	sub_83866228(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8386672c
	if (cr6.eq) goto loc_8386672C;
	// lis r10,-31743
	ctx.r10.s64 = -2080309248;
	// addic. r30,r3,44
	xer.ca = ctx.r3.u32 > 4294967251;
	ctx.r30.s64 = ctx.r3.s64 + 44;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// lwz r11,13880(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13880);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,13880(r10)
	PPC_STORE_U32(ctx.r10.u32 + 13880, ctx.r11.u32);
	// beq 0x83866764
	if (cr0.eq) goto loc_83866764;
	// li r5,52
	ctx.r5.s64 = 52;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831cdcf0
	ctx.lr = 0x83866728;
	sub_831CDCF0(ctx, base);
	// b 0x83866768
	goto loc_83866768;
loc_8386672C:
	// li r10,-1
	ctx.r10.s64 = -1;
	// addi r7,r18,28
	ctx.r7.s64 = ctx.r18.s64 + 28;
loc_83866734:
	// mfmsr r8
	ctx.r8.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r7
	ea = ctx.r7.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r11.u64 = __builtin_bswap32(reserved.u32);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stwcx. r9,0,r7
	ea = ctx.r7.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r8,1
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x83866734
	if (!cr0.eq) goto loc_83866734;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x83d7553c
	ctx.lr = 0x83866758;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x831cdb04
	__restgprlr_15(ctx, base);
	return;
loc_83866764:
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
loc_83866768:
	// cmpwi cr6,r20,0
	cr6.compare<int32_t>(ctx.r20.s32, 0, xer);
	// bne cr6,0x838667b4
	if (!cr6.eq) goto loc_838667B4;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// bne cr6,0x838667b4
	if (!cr6.eq) goto loc_838667B4;
	// li r29,-1
	ctx.r29.s64 = -1;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r31,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r31.u32);
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x83b0d0f8
	ctx.lr = 0x838667B0;
	sub_83B0D0F8(ctx, base);
	// b 0x838667f0
	goto loc_838667F0;
loc_838667B4:
	// li r29,-1
	ctx.r29.s64 = -1;
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r31,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r31.u32);
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
	// stw r31,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r31.u32);
	// mr r8,r20
	ctx.r8.u64 = ctx.r20.u64;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x83b0d168
	ctx.lr = 0x838667F0;
	sub_83B0D168(ctx, base);
loc_838667F0:
	// cmplwi cr6,r19,0
	cr6.compare<uint32_t>(ctx.r19.u32, 0, xer);
	// bne cr6,0x83866858
	if (!cr6.eq) goto loc_83866858;
	// li r7,1028
	ctx.r7.s64 = 1028;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x83864558
	ctx.lr = 0x8386680C;
	sub_83864558(ctx, base);
	// mr r19,r3
	ctx.r19.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83866860
	if (!cr6.eq) goto loc_83866860;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x83866308
	ctx.lr = 0x83866820;
	sub_83866308(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// addi r7,r18,28
	ctx.r7.s64 = ctx.r18.s64 + 28;
loc_83866828:
	// mfmsr r8
	ctx.r8.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r7
	ea = ctx.r7.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stwcx. r9,0,r7
	ea = ctx.r7.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r8,1
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x83866828
	if (!cr0.eq) goto loc_83866828;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x83d7553c
	ctx.lr = 0x8386684C;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x831cdb04
	__restgprlr_15(ctx, base);
	return;
loc_83866858:
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x83863a18
	ctx.lr = 0x83866860;
	sub_83863A18(ctx, base);
loc_83866860:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,4096
	ctx.r4.s64 = 4096;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x83863b20
	ctx.lr = 0x83866874;
	sub_83863B20(ctx, base);
	// cmplwi cr6,r16,0
	cr6.compare<uint32_t>(ctx.r16.u32, 0, xer);
	// beq cr6,0x83866880
	if (cr6.eq) goto loc_83866880;
	// bl 0x8386cfd8
	ctx.lr = 0x83866880;
	sub_8386CFD8(ctx, base);
loc_83866880:
	// add r31,r3,r15
	ctx.r31.u64 = ctx.r3.u64 + ctx.r15.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x83b0d458
	ctx.lr = 0x83866890;
	sub_83B0D458(ctx, base);
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x83864770
	ctx.lr = 0x83866898;
	sub_83864770(ctx, base);
	// mr r10,r17
	ctx.r10.u64 = ctx.r17.u64;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r25,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r25.u32);
	// mr r8,r21
	ctx.r8.u64 = ctx.r21.u64;
	// stw r24,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r24.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// stw r31,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r31.u32);
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// stw r19,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r19.u32);
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x83866470
	ctx.lr = 0x838668D0;
	sub_83866470(ctx, base);
	// addi r7,r18,28
	ctx.r7.s64 = ctx.r18.s64 + 28;
	// lwz r31,0(r26)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// bne cr6,0x83866914
	if (!cr6.eq) goto loc_83866914;
	// li r11,-1
	ctx.r11.s64 = -1;
loc_838668E4:
	// mfmsr r8
	ctx.r8.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r7
	ea = ctx.r7.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stwcx. r9,0,r7
	ea = ctx.r7.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r8,1
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x838668e4
	if (!cr0.eq) goto loc_838668E4;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x83d7553c
	ctx.lr = 0x83866908;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x831cdb04
	__restgprlr_15(ctx, base);
	return;
loc_83866914:
	// li r8,-1
	ctx.r8.s64 = -1;
loc_83866918:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r7
	ea = ctx.r7.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r11.u64 = __builtin_bswap32(reserved.u32);
	// add r10,r8,r11
	ctx.r10.u64 = ctx.r8.u64 + ctx.r11.u64;
	// stwcx. r10,0,r7
	ea = ctx.r7.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x83866918
	if (!cr0.eq) goto loc_83866918;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x83d7553c
	ctx.lr = 0x8386693C;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x831cdb04
	__restgprlr_15(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83866948"))) PPC_WEAK_FUNC(sub_83866948);
PPC_FUNC_IMPL(__imp__sub_83866948) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdabc
	ctx.lr = 0x83866950;
	__savegprlr_17(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// rlwinm r11,r8,0,22,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x200;
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// mr r21,r4
	ctx.r21.u64 = ctx.r4.u64;
	// mr r20,r5
	ctx.r20.u64 = ctx.r5.u64;
	// mr r19,r6
	ctx.r19.u64 = ctx.r6.u64;
	// mr r17,r7
	ctx.r17.u64 = ctx.r7.u64;
	// mr r24,r8
	ctx.r24.u64 = ctx.r8.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83866980
	if (cr6.eq) goto loc_83866980;
	// rlwinm r26,r7,0,24,22
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFFFFFFFEFF;
loc_83866980:
	// rlwinm r11,r24,0,18,18
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 0) & 0x2000;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83866990
	if (cr6.eq) goto loc_83866990;
	// ori r26,r26,32256
	ctx.r26.u64 = ctx.r26.u64 | 32256;
loc_83866990:
	// rlwinm r11,r24,0,23,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 0) & 0x100;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// mr r18,r29
	ctx.r18.u64 = ctx.r29.u64;
	// beq cr6,0x838669ac
	if (cr6.eq) goto loc_838669AC;
	// clrlwi r11,r24,26
	ctx.r11.u64 = ctx.r24.u32 & 0x3F;
	// addi r18,r11,-32
	ctx.r18.s64 = ctx.r11.s64 + -32;
loc_838669AC:
	// rlwinm r11,r24,0,21,21
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 0) & 0x400;
	// mr r25,r29
	ctx.r25.u64 = ctx.r29.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x838669c0
	if (cr6.eq) goto loc_838669C0;
	// li r25,4
	ctx.r25.s64 = 4;
loc_838669C0:
	// rlwinm r11,r24,0,7,7
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 0) & 0x1000000;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x838669d0
	if (cr6.eq) goto loc_838669D0;
	// ori r25,r25,512
	ctx.r25.u64 = ctx.r25.u64 | 512;
loc_838669D0:
	// rlwinm r11,r24,0,20,20
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 0) & 0x800;
	// mr r27,r29
	ctx.r27.u64 = ctx.r29.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x838669e4
	if (cr6.eq) goto loc_838669E4;
	// li r27,1
	ctx.r27.s64 = 1;
loc_838669E4:
	// rlwinm r11,r24,0,19,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 0) & 0x1000;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x838669f4
	if (cr6.eq) goto loc_838669F4;
	// ori r27,r27,2
	ctx.r27.u64 = ctx.r27.u64 | 2;
loc_838669F4:
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// addi r28,r11,13888
	ctx.r28.s64 = ctx.r11.s64 + 13888;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83d7554c
	ctx.lr = 0x83866A04;
	__imp__RtlEnterCriticalSection(ctx, base);
	// addi r11,r28,28
	ctx.r11.s64 = ctx.r28.s64 + 28;
	// li r8,1
	ctx.r8.s64 = 1;
loc_83866A0C:
	// mfmsr r7
	ctx.r7.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r11
	ea = ctx.r11.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// add r9,r8,r10
	ctx.r9.u64 = ctx.r8.u64 + ctx.r10.u64;
	// stwcx. r9,0,r11
	ea = ctx.r11.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r7,1
	ctx.msr = (ctx.r7.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x83866a0c
	if (!cr0.eq) goto loc_83866A0C;
	// lis r6,-31743
	ctx.r6.s64 = -2080309248;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r6,13924
	ctx.r3.s64 = ctx.r6.s64 + 13924;
	// bl 0x83866228
	ctx.lr = 0x83866A38;
	sub_83866228(ctx, base);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83866a70
	if (cr6.eq) goto loc_83866A70;
	// lis r10,-31743
	ctx.r10.s64 = -2080309248;
	// addic. r30,r3,44
	xer.ca = ctx.r3.u32 > 4294967251;
	ctx.r30.s64 = ctx.r3.s64 + 44;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// lwz r11,13880(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13880);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,13880(r10)
	PPC_STORE_U32(ctx.r10.u32 + 13880, ctx.r11.u32);
	// beq 0x83866aa8
	if (cr0.eq) goto loc_83866AA8;
	// li r5,52
	ctx.r5.s64 = 52;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831cdcf0
	ctx.lr = 0x83866A6C;
	sub_831CDCF0(ctx, base);
	// b 0x83866aac
	goto loc_83866AAC;
loc_83866A70:
	// li r10,-1
	ctx.r10.s64 = -1;
	// addi r7,r28,28
	ctx.r7.s64 = ctx.r28.s64 + 28;
loc_83866A78:
	// mfmsr r8
	ctx.r8.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r7
	ea = ctx.r7.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r11.u64 = __builtin_bswap32(reserved.u32);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stwcx. r9,0,r7
	ea = ctx.r7.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r8,1
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x83866a78
	if (!cr0.eq) goto loc_83866A78;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83d7553c
	ctx.lr = 0x83866A9C;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x831cdb0c
	__restgprlr_17(ctx, base);
	return;
loc_83866AA8:
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
loc_83866AAC:
	// cmpwi cr6,r18,0
	cr6.compare<int32_t>(ctx.r18.s32, 0, xer);
	// bne cr6,0x83866af8
	if (!cr6.eq) goto loc_83866AF8;
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, xer);
	// bne cr6,0x83866af8
	if (!cr6.eq) goto loc_83866AF8;
	// li r31,-1
	ctx.r31.s64 = -1;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r29,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r29.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// mr r6,r19
	ctx.r6.u64 = ctx.r19.u64;
	// mr r5,r20
	ctx.r5.u64 = ctx.r20.u64;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x83b0d2c8
	ctx.lr = 0x83866AF4;
	sub_83B0D2C8(ctx, base);
	// b 0x83866b34
	goto loc_83866B34;
loc_83866AF8:
	// li r31,-1
	ctx.r31.s64 = -1;
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// stw r29,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r29.u32);
	// mr r9,r18
	ctx.r9.u64 = ctx.r18.u64;
	// stw r29,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r29.u32);
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// mr r6,r19
	ctx.r6.u64 = ctx.r19.u64;
	// mr r5,r20
	ctx.r5.u64 = ctx.r20.u64;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x83b0d328
	ctx.lr = 0x83866B34;
	sub_83B0D328(ctx, base);
loc_83866B34:
	// li r7,1028
	ctx.r7.s64 = 1028;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x83864558
	ctx.lr = 0x83866B48;
	sub_83864558(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83866b94
	if (!cr6.eq) goto loc_83866B94;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x83866308
	ctx.lr = 0x83866B5C;
	sub_83866308(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// addi r7,r28,28
	ctx.r7.s64 = ctx.r28.s64 + 28;
loc_83866B64:
	// mfmsr r8
	ctx.r8.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r7
	ea = ctx.r7.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stwcx. r9,0,r7
	ea = ctx.r7.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r8,1
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x83866b64
	if (!cr0.eq) goto loc_83866B64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83d7553c
	ctx.lr = 0x83866B88;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x831cdb0c
	__restgprlr_17(ctx, base);
	return;
loc_83866B94:
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83865c60
	ctx.lr = 0x83866BA8;
	sub_83865C60(ctx, base);
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// mr r10,r17
	ctx.r10.u64 = ctx.r17.u64;
	// stw r26,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r26.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r31,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r31.u32);
	// mr r8,r19
	ctx.r8.u64 = ctx.r19.u64;
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// mr r7,r20
	ctx.r7.u64 = ctx.r20.u64;
	// stw r24,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r24.u32);
	// mr r6,r21
	ctx.r6.u64 = ctx.r21.u64;
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x83866470
	ctx.lr = 0x83866BE0;
	sub_83866470(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// addi r7,r28,28
	ctx.r7.s64 = ctx.r28.s64 + 28;
	// lwz r31,0(r23)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
loc_83866BEC:
	// mfmsr r8
	ctx.r8.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r7
	ea = ctx.r7.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stwcx. r9,0,r7
	ea = ctx.r7.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r8,1
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x83866bec
	if (!cr0.eq) goto loc_83866BEC;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83d7553c
	ctx.lr = 0x83866C10;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x831cdb0c
	__restgprlr_17(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83866C1C"))) PPC_WEAK_FUNC(sub_83866C1C);
PPC_FUNC_IMPL(__imp__sub_83866C1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83866C20"))) PPC_WEAK_FUNC(sub_83866C20);
PPC_FUNC_IMPL(__imp__sub_83866C20) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdac4
	ctx.lr = 0x83866C28;
	__savegprlr_19(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// addi r23,r11,13888
	ctx.r23.s64 = ctx.r11.s64 + 13888;
	// mr r21,r4
	ctx.r21.u64 = ctx.r4.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// mr r19,r5
	ctx.r19.u64 = ctx.r5.u64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// bl 0x83d7554c
	ctx.lr = 0x83866C4C;
	__imp__RtlEnterCriticalSection(ctx, base);
	// addi r11,r23,28
	ctx.r11.s64 = ctx.r23.s64 + 28;
	// li r8,1
	ctx.r8.s64 = 1;
loc_83866C54:
	// mfmsr r7
	ctx.r7.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r11
	ea = ctx.r11.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// add r9,r8,r10
	ctx.r9.u64 = ctx.r8.u64 + ctx.r10.u64;
	// stwcx. r9,0,r11
	ea = ctx.r11.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r7,1
	ctx.msr = (ctx.r7.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x83866c54
	if (!cr0.eq) goto loc_83866C54;
	// lis r6,-31743
	ctx.r6.s64 = -2080309248;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// addi r3,r6,13924
	ctx.r3.s64 = ctx.r6.s64 + 13924;
	// bl 0x83866228
	ctx.lr = 0x83866C80;
	sub_83866228(ctx, base);
	// mr r20,r3
	ctx.r20.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83866d40
	if (cr6.eq) goto loc_83866D40;
	// lis r10,-31743
	ctx.r10.s64 = -2080309248;
	// mr r24,r19
	ctx.r24.u64 = ctx.r19.u64;
	// lwz r11,13880(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13880);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,13880(r10)
	PPC_STORE_U32(ctx.r10.u32 + 13880, ctx.r11.u32);
	// rlwinm r11,r25,0,22,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 0) & 0x200;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83866cb0
	if (cr6.eq) goto loc_83866CB0;
	// rlwinm r24,r19,0,24,22
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 0) & 0xFFFFFFFFFFFFFEFF;
loc_83866CB0:
	// rlwinm r11,r25,0,18,18
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 0) & 0x2000;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83866cc0
	if (cr6.eq) goto loc_83866CC0;
	// ori r24,r24,32256
	ctx.r24.u64 = ctx.r24.u64 | 32256;
loc_83866CC0:
	// rlwinm r11,r25,0,23,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 0) & 0x100;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// mr r22,r29
	ctx.r22.u64 = ctx.r29.u64;
	// beq cr6,0x83866cdc
	if (cr6.eq) goto loc_83866CDC;
	// clrlwi r11,r25,26
	ctx.r11.u64 = ctx.r25.u32 & 0x3F;
	// addi r22,r11,-32
	ctx.r22.s64 = ctx.r11.s64 + -32;
loc_83866CDC:
	// rlwinm r11,r25,0,21,21
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 0) & 0x400;
	// mr r27,r29
	ctx.r27.u64 = ctx.r29.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83866cf0
	if (cr6.eq) goto loc_83866CF0;
	// li r27,4
	ctx.r27.s64 = 4;
loc_83866CF0:
	// rlwinm r11,r25,0,7,7
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 0) & 0x1000000;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83866d00
	if (cr6.eq) goto loc_83866D00;
	// ori r27,r27,512
	ctx.r27.u64 = ctx.r27.u64 | 512;
loc_83866D00:
	// rlwinm r11,r25,0,20,20
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 0) & 0x800;
	// mr r28,r29
	ctx.r28.u64 = ctx.r29.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83866d14
	if (cr6.eq) goto loc_83866D14;
	// li r28,1
	ctx.r28.s64 = 1;
loc_83866D14:
	// rlwinm r11,r25,0,19,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 0) & 0x1000;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83866d24
	if (cr6.eq) goto loc_83866D24;
	// ori r28,r28,2
	ctx.r28.u64 = ctx.r28.u64 | 2;
loc_83866D24:
	// addic. r31,r20,44
	xer.ca = ctx.r20.u32 > 4294967251;
	ctx.r31.s64 = ctx.r20.s64 + 44;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// beq 0x83866d78
	if (cr0.eq) goto loc_83866D78;
	// li r5,52
	ctx.r5.s64 = 52;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831cdcf0
	ctx.lr = 0x83866D3C;
	sub_831CDCF0(ctx, base);
	// b 0x83866d7c
	goto loc_83866D7C;
loc_83866D40:
	// li r10,-1
	ctx.r10.s64 = -1;
	// addi r7,r23,28
	ctx.r7.s64 = ctx.r23.s64 + 28;
loc_83866D48:
	// mfmsr r8
	ctx.r8.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r7
	ea = ctx.r7.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r11.u64 = __builtin_bswap32(reserved.u32);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stwcx. r9,0,r7
	ea = ctx.r7.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r8,1
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x83866d48
	if (!cr0.eq) goto loc_83866D48;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x83d7553c
	ctx.lr = 0x83866D6C;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x831cdb14
	__restgprlr_19(ctx, base);
	return;
loc_83866D78:
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
loc_83866D7C:
	// cmpwi cr6,r22,0
	cr6.compare<int32_t>(ctx.r22.s32, 0, xer);
	// bne cr6,0x83866dc0
	if (!cr6.eq) goto loc_83866DC0;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// bne cr6,0x83866dc0
	if (!cr6.eq) goto loc_83866DC0;
	// li r30,-1
	ctx.r30.s64 = -1;
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r29.u32);
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x83b0d1e0
	ctx.lr = 0x83866DBC;
	sub_83B0D1E0(ctx, base);
	// b 0x83866df4
	goto loc_83866DF4;
loc_83866DC0:
	// li r30,-1
	ctx.r30.s64 = -1;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r29.u32);
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// mr r7,r22
	ctx.r7.u64 = ctx.r22.u64;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x83b0d250
	ctx.lr = 0x83866DF4;
	sub_83B0D250(ctx, base);
loc_83866DF4:
	// li r7,1028
	ctx.r7.s64 = 1028;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x83864558
	ctx.lr = 0x83866E08;
	sub_83864558(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83866e54
	if (!cr6.eq) goto loc_83866E54;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x83866308
	ctx.lr = 0x83866E1C;
	sub_83866308(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// addi r7,r23,28
	ctx.r7.s64 = ctx.r23.s64 + 28;
loc_83866E24:
	// mfmsr r8
	ctx.r8.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r7
	ea = ctx.r7.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stwcx. r9,0,r7
	ea = ctx.r7.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r8,1
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x83866e24
	if (!cr0.eq) goto loc_83866E24;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x83d7553c
	ctx.lr = 0x83866E48;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x831cdb14
	__restgprlr_19(ctx, base);
	return;
loc_83866E54:
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83865c60
	ctx.lr = 0x83866E68;
	sub_83865C60(ctx, base);
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// mr r10,r19
	ctx.r10.u64 = ctx.r19.u64;
	// stw r30,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r30.u32);
	// li r9,6
	ctx.r9.s64 = 6;
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// mr r8,r21
	ctx.r8.u64 = ctx.r21.u64;
	// stw r25,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r25.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// stw r24,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r24.u32);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x83866470
	ctx.lr = 0x83866EA0;
	sub_83866470(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// addi r7,r23,28
	ctx.r7.s64 = ctx.r23.s64 + 28;
	// lwz r31,0(r20)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r20.u32 + 0);
loc_83866EAC:
	// mfmsr r8
	ctx.r8.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r7
	ea = ctx.r7.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stwcx. r9,0,r7
	ea = ctx.r7.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r8,1
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x83866eac
	if (!cr0.eq) goto loc_83866EAC;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x83d7553c
	ctx.lr = 0x83866ED0;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x831cdb14
	__restgprlr_19(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83866EDC"))) PPC_WEAK_FUNC(sub_83866EDC);
PPC_FUNC_IMPL(__imp__sub_83866EDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83866EE0"))) PPC_WEAK_FUNC(sub_83866EE0);
PPC_FUNC_IMPL(__imp__sub_83866EE0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdac4
	ctx.lr = 0x83866EE8;
	__savegprlr_19(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r20,r3
	ctx.r20.u64 = ctx.r3.u64;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// mr r23,r5
	ctx.r23.u64 = ctx.r5.u64;
	// mr r22,r6
	ctx.r22.u64 = ctx.r6.u64;
	// mr r19,r7
	ctx.r19.u64 = ctx.r7.u64;
	// mr r29,r8
	ctx.r29.u64 = ctx.r8.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8386701c
	if (cr6.eq) goto loc_8386701C;
	// rlwinm r11,r8,0,22,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x200;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83866f20
	if (cr6.eq) goto loc_83866F20;
	// rlwinm r26,r7,0,24,22
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFFFFFFFEFF;
loc_83866F20:
	// rlwinm r11,r29,0,18,18
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x2000;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83866f30
	if (cr6.eq) goto loc_83866F30;
	// ori r26,r26,32256
	ctx.r26.u64 = ctx.r26.u64 | 32256;
loc_83866F30:
	// rlwinm r11,r29,0,23,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x100;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// mr r21,r30
	ctx.r21.u64 = ctx.r30.u64;
	// beq cr6,0x83866f4c
	if (cr6.eq) goto loc_83866F4C;
	// clrlwi r11,r29,26
	ctx.r11.u64 = ctx.r29.u32 & 0x3F;
	// addi r21,r11,-32
	ctx.r21.s64 = ctx.r11.s64 + -32;
loc_83866F4C:
	// rlwinm r11,r29,0,21,21
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x400;
	// mr r27,r30
	ctx.r27.u64 = ctx.r30.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83866f60
	if (cr6.eq) goto loc_83866F60;
	// li r27,4
	ctx.r27.s64 = 4;
loc_83866F60:
	// rlwinm r11,r29,0,7,7
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x1000000;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83866f70
	if (cr6.eq) goto loc_83866F70;
	// ori r27,r27,512
	ctx.r27.u64 = ctx.r27.u64 | 512;
loc_83866F70:
	// rlwinm r11,r29,0,20,20
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x800;
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83866f84
	if (cr6.eq) goto loc_83866F84;
	// li r28,1
	ctx.r28.s64 = 1;
loc_83866F84:
	// rlwinm r11,r29,0,19,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x1000;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83866f94
	if (cr6.eq) goto loc_83866F94;
	// ori r28,r28,2
	ctx.r28.u64 = ctx.r28.u64 | 2;
loc_83866F94:
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r31,r11,13888
	ctx.r31.s64 = ctx.r11.s64 + 13888;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x838639b0
	ctx.lr = 0x83866FA8;
	sub_838639B0(ctx, base);
	// lis r10,-31743
	ctx.r10.s64 = -2080309248;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r10,13924
	ctx.r3.s64 = ctx.r10.s64 + 13924;
	// bl 0x83866228
	ctx.lr = 0x83866FB8;
	sub_83866228(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83866ff0
	if (cr6.eq) goto loc_83866FF0;
	// lis r10,-31743
	ctx.r10.s64 = -2080309248;
	// addic. r31,r3,44
	xer.ca = ctx.r3.u32 > 4294967251;
	ctx.r31.s64 = ctx.r3.s64 + 44;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// lwz r11,13880(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13880);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,13880(r10)
	PPC_STORE_U32(ctx.r10.u32 + 13880, ctx.r11.u32);
	// beq 0x83867028
	if (cr0.eq) goto loc_83867028;
	// li r5,52
	ctx.r5.s64 = 52;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831cdcf0
	ctx.lr = 0x83866FEC;
	sub_831CDCF0(ctx, base);
	// b 0x8386702c
	goto loc_8386702C;
loc_83866FF0:
	// lwz r3,128(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// li r9,-1
	ctx.r9.s64 = -1;
	// addi r7,r3,28
	ctx.r7.s64 = ctx.r3.s64 + 28;
loc_83866FFC:
	// mfmsr r8
	ctx.r8.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r7
	ea = ctx.r7.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r11.u64 = __builtin_bswap32(reserved.u32);
	// add r10,r9,r11
	ctx.r10.u64 = ctx.r9.u64 + ctx.r11.u64;
	// stwcx. r10,0,r7
	ea = ctx.r7.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r8,1
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x83866ffc
	if (!cr0.eq) goto loc_83866FFC;
	// bl 0x83d7553c
	ctx.lr = 0x8386701C;
	__imp__RtlLeaveCriticalSection(ctx, base);
loc_8386701C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x831cdb14
	__restgprlr_19(ctx, base);
	return;
loc_83867028:
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
loc_8386702C:
	// cmpwi cr6,r21,0
	cr6.compare<int32_t>(ctx.r21.s32, 0, xer);
	// bne cr6,0x83867074
	if (!cr6.eq) goto loc_83867074;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// bne cr6,0x83867074
	if (!cr6.eq) goto loc_83867074;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r30,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r30.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x83b0d0f8
	ctx.lr = 0x83867070;
	sub_83B0D0F8(ctx, base);
	// b 0x838670b0
	goto loc_838670B0;
loc_83867074:
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
	// stw r30,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r30.u32);
	// mr r8,r21
	ctx.r8.u64 = ctx.r21.u64;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x83b0d168
	ctx.lr = 0x838670B0;
	sub_83B0D168(ctx, base);
loc_838670B0:
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x83863a18
	ctx.lr = 0x838670B8;
	sub_83863A18(ctx, base);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83865c60
	ctx.lr = 0x838670CC;
	sub_83865C60(ctx, base);
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// mr r10,r19
	ctx.r10.u64 = ctx.r19.u64;
	// stw r20,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r20.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// mr r8,r22
	ctx.r8.u64 = ctx.r22.u64;
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r29.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// stw r26,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r26.u32);
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x83866470
	ctx.lr = 0x83867104;
	sub_83866470(ctx, base);
	// lwz r3,128(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// li r10,-1
	ctx.r10.s64 = -1;
	// addi r7,r3,28
	ctx.r7.s64 = ctx.r3.s64 + 28;
	// lwz r31,0(r25)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// bne cr6,0x83867148
	if (!cr6.eq) goto loc_83867148;
loc_8386711C:
	// mfmsr r8
	ctx.r8.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r7
	ea = ctx.r7.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r11.u64 = __builtin_bswap32(reserved.u32);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stwcx. r9,0,r7
	ea = ctx.r7.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r8,1
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8386711c
	if (!cr0.eq) goto loc_8386711C;
	// bl 0x83d7553c
	ctx.lr = 0x8386713C;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x831cdb14
	__restgprlr_19(ctx, base);
	return;
loc_83867148:
	// mfmsr r8
	ctx.r8.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r7
	ea = ctx.r7.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r11.u64 = __builtin_bswap32(reserved.u32);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stwcx. r9,0,r7
	ea = ctx.r7.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r8,1
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x83867148
	if (!cr0.eq) goto loc_83867148;
	// bl 0x83d7553c
	ctx.lr = 0x83867168;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x831cdb14
	__restgprlr_19(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83867174"))) PPC_WEAK_FUNC(sub_83867174);
PPC_FUNC_IMPL(__imp__sub_83867174) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83867178"))) PPC_WEAK_FUNC(sub_83867178);
PPC_FUNC_IMPL(__imp__sub_83867178) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x83867180;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r27,r11,13888
	ctx.r27.s64 = ctx.r11.s64 + 13888;
	// li r4,4000
	ctx.r4.s64 = 4000;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x83d7562c
	ctx.lr = 0x8386719C;
	__imp__RtlInitializeCriticalSectionAndSpinCount(ctx, base);
	// lis r10,-31743
	ctx.r10.s64 = -2080309248;
	// lis r7,-31743
	ctx.r7.s64 = -2080309248;
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// lis r29,-31743
	ctx.r29.s64 = -2080309248;
	// addi r30,r11,13924
	ctx.r30.s64 = ctx.r11.s64 + 13924;
	// addi r8,r10,13872
	ctx.r8.s64 = ctx.r10.s64 + 13872;
	// addi r9,r7,13864
	ctx.r9.s64 = ctx.r7.s64 + 13864;
	// stw r30,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r30.u32);
	// li r31,0
	ctx.r31.s64 = 0;
	// stw r8,13872(r10)
	PPC_STORE_U32(ctx.r10.u32 + 13872, ctx.r8.u32);
	// stw r30,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r30.u32);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// stw r9,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r9.u32);
	// mulli r3,r28,116
	ctx.r3.s64 = ctx.r28.s64 * 116;
	// stw r8,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r8.u32);
	// stw r31,28(r27)
	PPC_STORE_U32(ctx.r27.u32 + 28, ctx.r31.u32);
	// stw r9,13864(r7)
	PPC_STORE_U32(ctx.r7.u32 + 13864, ctx.r9.u32);
	// stw r28,13920(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13920, ctx.r28.u32);
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// bl 0x838636d0
	ctx.lr = 0x838671F8;
	sub_838636D0(ctx, base);
	// lis r6,-31743
	ctx.r6.s64 = -2080309248;
	// lwz r9,13920(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13920);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// stw r3,13884(r6)
	PPC_STORE_U32(ctx.r6.u32 + 13884, ctx.r3.u32);
	// beq cr6,0x83867298
	if (cr6.eq) goto loc_83867298;
	// lis r9,32767
	ctx.r9.s64 = 2147418112;
	// ori r7,r9,65535
	ctx.r7.u64 = ctx.r9.u64 | 65535;
loc_8386721C:
	// stw r10,96(r11)
	PPC_STORE_U32(ctx.r11.u32 + 96, ctx.r10.u32);
	// addi r6,r11,112
	ctx.r6.s64 = ctx.r11.s64 + 112;
	// stw r31,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
	// sth r31,8(r11)
	PPC_STORE_U16(ctx.r11.u32 + 8, ctx.r31.u16);
	// sth r31,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r31.u16);
	// stb r31,14(r11)
	PPC_STORE_U8(ctx.r11.u32 + 14, ctx.r31.u8);
	// stb r31,15(r11)
	PPC_STORE_U8(ctx.r11.u32 + 15, ctx.r31.u8);
	// stw r7,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r7.u32);
	// stw r31,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r31.u32);
	// stw r31,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r31.u32);
	// stw r31,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r31.u32);
	// stw r31,100(r11)
	PPC_STORE_U32(ctx.r11.u32 + 100, ctx.r31.u32);
loc_8386724C:
	// mfmsr r8
	ctx.r8.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r9,0,r6
	ea = ctx.r6.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r9.u64 = __builtin_bswap32(reserved.u32);
	// stwcx. r31,0,r6
	ea = ctx.r6.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r31.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r8,1
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8386724c
	if (!cr0.eq) goto loc_8386724C;
	// lwsync 
	// lwz r8,4(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r30,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r30.u32);
	// addi r9,r11,36
	ctx.r9.s64 = ctx.r11.s64 + 36;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r8,40(r11)
	PPC_STORE_U32(ctx.r11.u32 + 40, ctx.r8.u32);
	// addi r11,r11,116
	ctx.r11.s64 = ctx.r11.s64 + 116;
	// lwz r8,4(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r9,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r9.u32);
	// lwz r8,13920(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13920);
	// cmplw cr6,r10,r8
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, xer);
	// stw r9,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r9.u32);
	// blt cr6,0x8386721c
	if (cr6.lt) goto loc_8386721C;
loc_83867298:
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r31,13880(r11)
	PPC_STORE_U32(ctx.r11.u32 + 13880, ctx.r31.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_838672AC"))) PPC_WEAK_FUNC(sub_838672AC);
PPC_FUNC_IMPL(__imp__sub_838672AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_838672B0"))) PPC_WEAK_FUNC(sub_838672B0);
PPC_FUNC_IMPL(__imp__sub_838672B0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x838672B8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// addi r31,r11,13888
	ctx.r31.s64 = ctx.r11.s64 + 13888;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83d7554c
	ctx.lr = 0x838672CC;
	__imp__RtlEnterCriticalSection(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r7,r31,28
	ctx.r7.s64 = ctx.r31.s64 + 28;
loc_838672D4:
	// mfmsr r8
	ctx.r8.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r7
	ea = ctx.r7.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stwcx. r9,0,r7
	ea = ctx.r7.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r8,1
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x838672d4
	if (!cr0.eq) goto loc_838672D4;
	// lis r28,-31743
	ctx.r28.s64 = -2080309248;
	// lis r29,-31743
	ctx.r29.s64 = -2080309248;
	// li r27,0
	ctx.r27.s64 = 0;
	// lwz r3,13884(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13884);
	// lwz r11,13920(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13920);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8386733c
	if (cr6.eq) goto loc_8386733C;
loc_83867310:
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83867328
	if (cr6.eq) goto loc_83867328;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83866398
	ctx.lr = 0x83867324;
	sub_83866398(ctx, base);
	// lwz r11,13920(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13920);
loc_83867328:
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r30,r30,116
	ctx.r30.s64 = ctx.r30.s64 + 116;
	// cmplw cr6,r27,r11
	cr6.compare<uint32_t>(ctx.r27.u32, ctx.r11.u32, xer);
	// blt cr6,0x83867310
	if (cr6.lt) goto loc_83867310;
	// lwz r3,13884(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13884);
loc_8386733C:
	// lis r8,-31743
	ctx.r8.s64 = -2080309248;
	// lis r7,-31743
	ctx.r7.s64 = -2080309248;
	// addi r6,r8,13872
	ctx.r6.s64 = ctx.r8.s64 + 13872;
	// lis r4,-31743
	ctx.r4.s64 = -2080309248;
	// addi r5,r7,13864
	ctx.r5.s64 = ctx.r7.s64 + 13864;
	// stw r6,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, ctx.r6.u32);
	// stw r6,13872(r8)
	PPC_STORE_U32(ctx.r8.u32 + 13872, ctx.r6.u32);
	// addi r8,r4,13924
	ctx.r8.s64 = ctx.r4.s64 + 13924;
	// stw r5,13864(r7)
	PPC_STORE_U32(ctx.r7.u32 + 13864, ctx.r5.u32);
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// stw r5,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r5.u32);
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
	// stw r8,13924(r4)
	PPC_STORE_U32(ctx.r4.u32 + 13924, ctx.r8.u32);
	// mr r9,r5
	ctx.r9.u64 = ctx.r5.u64;
	// stw r8,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r8.u32);
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// bl 0x83863770
	ctx.lr = 0x83867388;
	sub_83863770(ctx, base);
	// lis r7,-31743
	ctx.r7.s64 = -2080309248;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,13884(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13884, ctx.r11.u32);
	// addi r11,r31,28
	ctx.r11.s64 = ctx.r31.s64 + 28;
	// stw r10,13880(r7)
	PPC_STORE_U32(ctx.r7.u32 + 13880, ctx.r10.u32);
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r9,13920(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13920, ctx.r9.u32);
loc_838673AC:
	// mfmsr r4
	ctx.r4.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r6,0,r11
	ea = ctx.r11.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r6.u64 = __builtin_bswap32(reserved.u32);
	// add r5,r10,r6
	ctx.r5.u64 = ctx.r10.u64 + ctx.r6.u64;
	// stwcx. r5,0,r11
	ea = ctx.r11.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r5.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r4,1
	ctx.msr = (ctx.r4.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x838673ac
	if (!cr0.eq) goto loc_838673AC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83d7553c
	ctx.lr = 0x838673D0;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_838673D8"))) PPC_WEAK_FUNC(sub_838673D8);
PPC_FUNC_IMPL(__imp__sub_838673D8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x838673E0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// addi r29,r11,13888
	ctx.r29.s64 = ctx.r11.s64 + 13888;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83d7554c
	ctx.lr = 0x838673F4;
	__imp__RtlEnterCriticalSection(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r7,r29,28
	ctx.r7.s64 = ctx.r29.s64 + 28;
loc_838673FC:
	// mfmsr r8
	ctx.r8.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r7
	ea = ctx.r7.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stwcx. r9,0,r7
	ea = ctx.r7.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r8,1
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x838673fc
	if (!cr0.eq) goto loc_838673FC;
	// bl 0x83860c48
	ctx.lr = 0x8386741C;
	sub_83860C48(ctx, base);
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// addi r31,r11,13864
	ctx.r31.s64 = ctx.r11.s64 + 13864;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// beq cr6,0x838674c4
	if (cr6.eq) goto loc_838674C4;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r30,0
	ctx.r30.s64 = 0;
	// subf r10,r31,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r31.s64;
	// subfic r9,r10,0
	xer.ca = ctx.r10.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r10.s64;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 & ctx.r11.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x838674c4
	if (cr6.eq) goto loc_838674C4;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r7,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r7.u32);
	// stw r30,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r30.u32);
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
loc_83867470:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// addi r3,r11,-36
	ctx.r3.s64 = ctx.r11.s64 + -36;
	// bne cr6,0x83867480
	if (!cr6.eq) goto loc_83867480;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_83867480:
	// bl 0x83866398
	ctx.lr = 0x83867484;
	sub_83866398(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// subf r10,r31,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r31.s64;
	// subfic r9,r10,0
	xer.ca = ctx.r10.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r10.s64;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 & ctx.r11.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x838674c4
	if (cr6.eq) goto loc_838674C4;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r7,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r7.u32);
	// stw r30,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r30.u32);
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
	// bne cr6,0x83867470
	if (!cr6.eq) goto loc_83867470;
loc_838674C4:
	// bl 0x83860cc8
	ctx.lr = 0x838674C8;
	sub_83860CC8(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// addi r7,r29,28
	ctx.r7.s64 = ctx.r29.s64 + 28;
loc_838674D0:
	// mfmsr r8
	ctx.r8.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r7
	ea = ctx.r7.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stwcx. r9,0,r7
	ea = ctx.r7.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r8,1
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x838674d0
	if (!cr0.eq) goto loc_838674D0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83d7553c
	ctx.lr = 0x838674F4;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_838674FC"))) PPC_WEAK_FUNC(sub_838674FC);
PPC_FUNC_IMPL(__imp__sub_838674FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83867500"))) PPC_WEAK_FUNC(sub_83867500);
PPC_FUNC_IMPL(__imp__sub_83867500) {
	PPC_FUNC_PROLOGUE();
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
	// mr r8,r6
	ctx.r8.u64 = ctx.r6.u64;
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83866600
	sub_83866600(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83867520"))) PPC_WEAK_FUNC(sub_83867520);
PPC_FUNC_IMPL(__imp__sub_83867520) {
	PPC_FUNC_PROLOGUE();
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x83866600
	sub_83866600(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8386753C"))) PPC_WEAK_FUNC(sub_8386753C);
PPC_FUNC_IMPL(__imp__sub_8386753C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83867540"))) PPC_WEAK_FUNC(sub_83867540);
PPC_FUNC_IMPL(__imp__sub_83867540) {
	PPC_FUNC_PROLOGUE();
	// b 0x83866948
	sub_83866948(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83867544"))) PPC_WEAK_FUNC(sub_83867544);
PPC_FUNC_IMPL(__imp__sub_83867544) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83867548"))) PPC_WEAK_FUNC(sub_83867548);
PPC_FUNC_IMPL(__imp__sub_83867548) {
	PPC_FUNC_PROLOGUE();
	// b 0x83866c20
	sub_83866C20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8386754C"))) PPC_WEAK_FUNC(sub_8386754C);
PPC_FUNC_IMPL(__imp__sub_8386754C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83867550"))) PPC_WEAK_FUNC(sub_83867550);
PPC_FUNC_IMPL(__imp__sub_83867550) {
	PPC_FUNC_PROLOGUE();
	// b 0x83866ee0
	sub_83866EE0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83867554"))) PPC_WEAK_FUNC(sub_83867554);
PPC_FUNC_IMPL(__imp__sub_83867554) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83867558"))) PPC_WEAK_FUNC(sub_83867558);
PPC_FUNC_IMPL(__imp__sub_83867558) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83867560;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r29,r11,13888
	ctx.r29.s64 = ctx.r11.s64 + 13888;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83d7554c
	ctx.lr = 0x83867578;
	__imp__RtlEnterCriticalSection(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r7,r29,28
	ctx.r7.s64 = ctx.r29.s64 + 28;
loc_83867580:
	// mfmsr r8
	ctx.r8.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r7
	ea = ctx.r7.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stwcx. r9,0,r7
	ea = ctx.r7.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r8,1
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x83867580
	if (!cr0.eq) goto loc_83867580;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x838675c4
	if (cr6.eq) goto loc_838675C4;
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// clrlwi r10,r30,17
	ctx.r10.u64 = ctx.r30.u32 & 0x7FFF;
	// mulli r10,r10,116
	ctx.r10.s64 = ctx.r10.s64 * 116;
	// lwz r11,13884(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13884);
	// lwzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r9,r30
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r30.u32, xer);
	// beq cr6,0x838675fc
	if (cr6.eq) goto loc_838675FC;
loc_838675C4:
	// li r10,-1
	ctx.r10.s64 = -1;
	// addi r7,r29,28
	ctx.r7.s64 = ctx.r29.s64 + 28;
loc_838675CC:
	// mfmsr r8
	ctx.r8.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r7
	ea = ctx.r7.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r11.u64 = __builtin_bswap32(reserved.u32);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stwcx. r9,0,r7
	ea = ctx.r7.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r8,1
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x838675cc
	if (!cr0.eq) goto loc_838675CC;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83d7553c
	ctx.lr = 0x838675F0;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_838675FC:
	// addi r3,r31,112
	ctx.r3.s64 = ctx.r31.s64 + 112;
	// bl 0x838638d0
	ctx.lr = 0x83867604;
	sub_838638D0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83867678
	if (!cr6.eq) goto loc_83867678;
	// lwz r10,40(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r9,36(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r30,r31,36
	ctx.r30.s64 = ctx.r31.s64 + 36;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r7,36(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r6,40(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// stw r6,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r6.u32);
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r5,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r5.u32);
	// lwz r4,0(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// bl 0x8386d028
	ctx.lr = 0x83867650;
	sub_8386D028(ctx, base);
	// lis r4,-31743
	ctx.r4.s64 = -2080309248;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r10,r4,13864
	ctx.r10.s64 = ctx.r4.s64 + 13864;
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r10,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r10.u32);
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
	// stw r30,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r30.u32);
loc_83867678:
	// li r10,-1
	ctx.r10.s64 = -1;
	// addi r7,r29,28
	ctx.r7.s64 = ctx.r29.s64 + 28;
loc_83867680:
	// mfmsr r8
	ctx.r8.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r7
	ea = ctx.r7.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r11.u64 = __builtin_bswap32(reserved.u32);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stwcx. r9,0,r7
	ea = ctx.r7.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r8,1
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x83867680
	if (!cr0.eq) goto loc_83867680;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83d7553c
	ctx.lr = 0x838676A4;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_838676B0"))) PPC_WEAK_FUNC(sub_838676B0);
PPC_FUNC_IMPL(__imp__sub_838676B0) {
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
	// beq cr6,0x838676fc
	if (cr6.eq) goto loc_838676FC;
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// clrlwi r10,r3,17
	ctx.r10.u64 = ctx.r3.u32 & 0x7FFF;
	// mulli r10,r10,116
	ctx.r10.s64 = ctx.r10.s64 * 116;
	// lwz r11,13884(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13884);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r9,r3
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r3.u32, xer);
	// bne cr6,0x838676fc
	if (!cr6.eq) goto loc_838676FC;
	// lwz r3,100(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// bl 0x83864770
	ctx.lr = 0x838676F4;
	sub_83864770(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83867558
	ctx.lr = 0x838676FC;
	sub_83867558(ctx, base);
loc_838676FC:
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

__attribute__((alias("__imp__sub_83867710"))) PPC_WEAK_FUNC(sub_83867710);
PPC_FUNC_IMPL(__imp__sub_83867710) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdab4
	ctx.lr = 0x83867718;
	__savegprlr_15(ctx, base);
	// stfd f31,-152(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -152, ctx.f31.u64);
	// stwu r1,-400(r1)
	ea = -400 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// mr r15,r3
	ctx.r15.u64 = ctx.r3.u64;
	// addi r31,r11,13888
	ctx.r31.s64 = ctx.r11.s64 + 13888;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r16,r6
	ctx.r16.u64 = ctx.r6.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// mr r25,r8
	ctx.r25.u64 = ctx.r8.u64;
	// mr r28,r9
	ctx.r28.u64 = ctx.r9.u64;
	// bl 0x83d7554c
	ctx.lr = 0x8386774C;
	__imp__RtlEnterCriticalSection(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r7,r31,28
	ctx.r7.s64 = ctx.r31.s64 + 28;
loc_83867754:
	// mfmsr r8
	ctx.r8.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r7
	ea = ctx.r7.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stwcx. r9,0,r7
	ea = ctx.r7.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r8,1
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x83867754
	if (!cr0.eq) goto loc_83867754;
	// cmplwi cr6,r15,0
	cr6.compare<uint32_t>(ctx.r15.u32, 0, xer);
	// beq cr6,0x83867a04
	if (cr6.eq) goto loc_83867A04;
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// clrlwi r10,r15,17
	ctx.r10.u64 = ctx.r15.u32 & 0x7FFF;
	// mulli r10,r10,116
	ctx.r10.s64 = ctx.r10.s64 * 116;
	// lwz r11,13884(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13884);
	// lwzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// add r24,r10,r11
	ctx.r24.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r9,r15
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r15.u32, xer);
	// bne cr6,0x83867a04
	if (!cr6.eq) goto loc_83867A04;
	// lbz r11,14(r24)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r24.u32 + 14);
	// cmplw cr6,r16,r11
	cr6.compare<uint32_t>(ctx.r16.u32, ctx.r11.u32, xer);
	// bge cr6,0x83867a04
	if (!cr6.lt) goto loc_83867A04;
	// lbz r11,15(r24)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r24.u32 + 15);
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, xer);
	// bge cr6,0x83867a04
	if (!cr6.lt) goto loc_83867A04;
	// addi r3,r24,112
	ctx.r3.s64 = ctx.r24.s64 + 112;
	// bl 0x83863818
	ctx.lr = 0x838677B8;
	sub_83863818(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// addi r7,r31,28
	ctx.r7.s64 = ctx.r31.s64 + 28;
loc_838677C0:
	// mfmsr r8
	ctx.r8.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r7
	ea = ctx.r7.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stwcx. r9,0,r7
	ea = ctx.r7.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r8,1
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x838677c0
	if (!cr0.eq) goto loc_838677C0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83d7553c
	ctx.lr = 0x838677E4;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,100(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 100);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x83863b20
	ctx.lr = 0x838677F8;
	sub_83863B20(ctx, base);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r19,r3
	ctx.r19.u64 = ctx.r3.u64;
	// lwz r3,28(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 28);
	// bl 0x83b0dc80
	ctx.lr = 0x8386780C;
	sub_83B0DC80(ctx, base);
	// lwz r6,28(r24)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r24.u32 + 28);
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r4,120(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// clrlwi r20,r11,26
	ctx.r20.u64 = ctx.r11.u32 & 0x3F;
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// rlwinm r17,r11,24,31,31
	ctx.r17.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0x1;
	// lwz r5,40(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 40);
	// rlwinm r31,r5,1,31,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0x1;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwz r11,48(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 48);
	// rlwinm r30,r11,21,31,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 21) & 0x1;
	// bl 0x83b0dc88
	ctx.lr = 0x8386783C;
	sub_83B0DC88(ctx, base);
	// li r23,0
	ctx.r23.s64 = 0;
	// cmpwi cr6,r17,0
	cr6.compare<int32_t>(ctx.r17.s32, 0, xer);
	// mr r21,r23
	ctx.r21.u64 = ctx.r23.u64;
	// beq cr6,0x83867868
	if (cr6.eq) goto loc_83867868;
	// subfic r11,r31,0
	xer.ca = ctx.r31.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r31.s64;
	// cntlzw r9,r30
	ctx.r9.u64 = ctx.r30.u32 == 0 ? 32 : __builtin_clz(ctx.r30.u32);
	// li r8,2
	ctx.r8.s64 = 2;
	// subfe r7,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// rlwinm r6,r9,27,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// and r5,r7,r8
	ctx.r5.u64 = ctx.r7.u64 & ctx.r8.u64;
	// or r21,r6,r5
	ctx.r21.u64 = ctx.r6.u64 | ctx.r5.u64;
loc_83867868:
	// clrlwi r11,r28,31
	ctx.r11.u64 = ctx.r28.u32 & 0x1;
	// mr r22,r23
	ctx.r22.u64 = ctx.r23.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83867888
	if (cr6.eq) goto loc_83867888;
	// li r4,16
	ctx.r4.s64 = 16;
	// lwz r3,4(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// bl 0x838636d0
	ctx.lr = 0x83867884;
	sub_838636D0(ctx, base);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
loc_83867888:
	// add r18,r29,r27
	ctx.r18.u64 = ctx.r29.u64 + ctx.r27.u64;
	// not r11,r28
	ctx.r11.u64 = ~ctx.r28.u64;
	// cmplw cr6,r29,r18
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r18.u32, xer);
	// rlwinm r28,r11,31,31,31
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x1;
	// bge cr6,0x838679d8
	if (!cr6.lt) goto loc_838679D8;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// add r27,r16,r26
	ctx.r27.u64 = ctx.r16.u64 + ctx.r26.u64;
	// lfs f31,-24912(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -24912);
	ctx.f31.f64 = double(temp.f32);
loc_838678A8:
	// mr r31,r16
	ctx.r31.u64 = ctx.r16.u64;
	// cmplw cr6,r16,r27
	cr6.compare<uint32_t>(ctx.r16.u32, ctx.r27.u32, xer);
	// bge cr6,0x838679cc
	if (!cr6.lt) goto loc_838679CC;
loc_838678B4:
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
	// lwz r3,28(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 28);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x83b0dc80
	ctx.lr = 0x838678C4;
	sub_83B0DC80(ctx, base);
	// cmplwi cr6,r22,0
	cr6.compare<uint32_t>(ctx.r22.u32, 0, xer);
	// lwz r30,8(r25)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	// beq cr6,0x838678f8
	if (cr6.eq) goto loc_838678F8;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// lwz r5,4(r25)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x83865a50
	ctx.lr = 0x838678E8;
	sub_83865A50(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x838678f8
	if (cr6.eq) goto loc_838678F8;
	// mr r30,r22
	ctx.r30.u64 = ctx.r22.u64;
loc_838678F8:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwz r3,28(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 28);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x83b0d530
	ctx.lr = 0x83867908;
	sub_83B0D530(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// bne cr6,0x83867918
	if (!cr6.eq) goto loc_83867918;
	// lwz r11,104(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 104);
	// b 0x8386791c
	goto loc_8386791C;
loc_83867918:
	// lwz r11,108(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 108);
loc_8386791C:
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(ctx.r28.s32, 0, xer);
	// add r11,r11,r19
	ctx.r11.u64 = ctx.r11.u64 + ctx.r19.u64;
	// bne cr6,0x83867940
	if (!cr6.eq) goto loc_83867940;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r5,4(r25)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x831ce980
	ctx.lr = 0x8386793C;
	sub_831CE980(ctx, base);
	// b 0x838679bc
	goto loc_838679BC;
loc_83867940:
	// lwz r10,0(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// cmpwi cr6,r17,0
	cr6.compare<int32_t>(ctx.r17.s32, 0, xer);
	// beq cr6,0x8386798c
	if (cr6.eq) goto loc_8386798C;
	// lwz r8,220(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 220);
	// cmplw cr6,r10,r8
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, xer);
	// ble cr6,0x8386795c
	if (!cr6.gt) goto loc_8386795C;
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
loc_8386795C:
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r4,120(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// mr r7,r21
	ctx.r7.u64 = ctx.r21.u64;
	// stw r23,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r23.u32);
	// mr r6,r20
	ctx.r6.u64 = ctx.r20.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x83b0c880
	ctx.lr = 0x83867988;
	sub_83B0C880(ctx, base);
	// b 0x838679bc
	goto loc_838679BC;
loc_8386798C:
	// lwz r7,192(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r6,184(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r5,180(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r4,196(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// stw r23,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r23.u32);
	// stw r23,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r23.u32);
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// bl 0x83b0fcb0
	ctx.lr = 0x838679BC;
	sub_83B0FCB0(ctx, base);
loc_838679BC:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r25,r25,12
	ctx.r25.s64 = ctx.r25.s64 + 12;
	// cmplw cr6,r31,r27
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r27.u32, xer);
	// blt cr6,0x838678b4
	if (cr6.lt) goto loc_838678B4;
loc_838679CC:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmplw cr6,r29,r18
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r18.u32, xer);
	// blt cr6,0x838678a8
	if (cr6.lt) goto loc_838678A8;
loc_838679D8:
	// cmplwi cr6,r22,0
	cr6.compare<uint32_t>(ctx.r22.u32, 0, xer);
	// beq cr6,0x838679e8
	if (cr6.eq) goto loc_838679E8;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x83863770
	ctx.lr = 0x838679E8;
	sub_83863770(ctx, base);
loc_838679E8:
	// lwz r3,100(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 100);
	// bl 0x83864770
	ctx.lr = 0x838679F0;
	sub_83864770(ctx, base);
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// bl 0x83867558
	ctx.lr = 0x838679F8;
	sub_83867558(ctx, base);
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// lfd f31,-152(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -152);
	// b 0x831cdb04
	__restgprlr_15(ctx, base);
	return;
loc_83867A04:
	// li r10,-1
	ctx.r10.s64 = -1;
	// addi r7,r31,28
	ctx.r7.s64 = ctx.r31.s64 + 28;
loc_83867A0C:
	// mfmsr r8
	ctx.r8.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r7
	ea = ctx.r7.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r11.u64 = __builtin_bswap32(reserved.u32);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stwcx. r9,0,r7
	ea = ctx.r7.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r8,1
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x83867a0c
	if (!cr0.eq) goto loc_83867A0C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83d7553c
	ctx.lr = 0x83867A30;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// lfd f31,-152(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -152);
	// b 0x831cdb04
	__restgprlr_15(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83867A3C"))) PPC_WEAK_FUNC(sub_83867A3C);
PPC_FUNC_IMPL(__imp__sub_83867A3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83867A40"))) PPC_WEAK_FUNC(sub_83867A40);
PPC_FUNC_IMPL(__imp__sub_83867A40) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdab8
	ctx.lr = 0x83867A48;
	__savegprlr_16(ctx, base);
	// stfd f31,-144(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -144, ctx.f31.u64);
	// stwu r1,-416(r1)
	ea = -416 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// mr r16,r3
	ctx.r16.u64 = ctx.r3.u64;
	// addi r31,r11,13888
	ctx.r31.s64 = ctx.r11.s64 + 13888;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// bl 0x83d7554c
	ctx.lr = 0x83867A74;
	__imp__RtlEnterCriticalSection(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r7,r31,28
	ctx.r7.s64 = ctx.r31.s64 + 28;
loc_83867A7C:
	// mfmsr r8
	ctx.r8.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r7
	ea = ctx.r7.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stwcx. r9,0,r7
	ea = ctx.r7.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r8,1
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x83867a7c
	if (!cr0.eq) goto loc_83867A7C;
	// cmplwi cr6,r16,0
	cr6.compare<uint32_t>(ctx.r16.u32, 0, xer);
	// beq cr6,0x83867ac0
	if (cr6.eq) goto loc_83867AC0;
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// clrlwi r10,r16,17
	ctx.r10.u64 = ctx.r16.u32 & 0x7FFF;
	// mulli r10,r10,116
	ctx.r10.s64 = ctx.r10.s64 * 116;
	// lwz r11,13884(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13884);
	// lwzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// add r28,r10,r11
	ctx.r28.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r9,r16
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r16.u32, xer);
	// beq cr6,0x83867af8
	if (cr6.eq) goto loc_83867AF8;
loc_83867AC0:
	// li r10,-1
	ctx.r10.s64 = -1;
	// addi r7,r31,28
	ctx.r7.s64 = ctx.r31.s64 + 28;
loc_83867AC8:
	// mfmsr r8
	ctx.r8.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r7
	ea = ctx.r7.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r11.u64 = __builtin_bswap32(reserved.u32);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stwcx. r9,0,r7
	ea = ctx.r7.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r8,1
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x83867ac8
	if (!cr0.eq) goto loc_83867AC8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83d7553c
	ctx.lr = 0x83867AEC;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// addi r1,r1,416
	ctx.r1.s64 = ctx.r1.s64 + 416;
	// lfd f31,-144(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -144);
	// b 0x831cdb08
	__restgprlr_16(ctx, base);
	return;
loc_83867AF8:
	// addi r3,r28,112
	ctx.r3.s64 = ctx.r28.s64 + 112;
	// bl 0x83863818
	ctx.lr = 0x83867B00;
	sub_83863818(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// addi r7,r31,28
	ctx.r7.s64 = ctx.r31.s64 + 28;
loc_83867B08:
	// mfmsr r8
	ctx.r8.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r7
	ea = ctx.r7.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stwcx. r9,0,r7
	ea = ctx.r7.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r8,1
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x83867b08
	if (!cr0.eq) goto loc_83867B08;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83d7553c
	ctx.lr = 0x83867B2C;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,100(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 100);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x83863b20
	ctx.lr = 0x83867B40;
	sub_83863B20(ctx, base);
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// lwz r3,28(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 28);
	// bl 0x83b0dc80
	ctx.lr = 0x83867B54;
	sub_83B0DC80(ctx, base);
	// lwz r6,28(r28)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r28.u32 + 28);
	// lwz r11,160(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// lwz r4,152(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// clrlwi r18,r11,26
	ctx.r18.u64 = ctx.r11.u32 & 0x3F;
	// lwz r3,148(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// rlwinm r17,r11,24,31,31
	ctx.r17.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0x1;
	// lwz r5,40(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 40);
	// rlwinm r31,r5,1,31,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0x1;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwz r11,48(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 48);
	// rlwinm r29,r11,21,31,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 21) & 0x1;
	// bl 0x83b0dc88
	ctx.lr = 0x83867B84;
	sub_83B0DC88(ctx, base);
	// li r23,0
	ctx.r23.s64 = 0;
	// cmpwi cr6,r17,0
	cr6.compare<int32_t>(ctx.r17.s32, 0, xer);
	// mr r20,r23
	ctx.r20.u64 = ctx.r23.u64;
	// beq cr6,0x83867bb0
	if (cr6.eq) goto loc_83867BB0;
	// subfic r11,r31,0
	xer.ca = ctx.r31.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r31.s64;
	// cntlzw r9,r29
	ctx.r9.u64 = ctx.r29.u32 == 0 ? 32 : __builtin_clz(ctx.r29.u32);
	// li r8,2
	ctx.r8.s64 = 2;
	// subfe r7,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// rlwinm r6,r9,27,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// and r5,r7,r8
	ctx.r5.u64 = ctx.r7.u64 & ctx.r8.u64;
	// or r20,r6,r5
	ctx.r20.u64 = ctx.r6.u64 | ctx.r5.u64;
loc_83867BB0:
	// clrlwi r11,r27,31
	ctx.r11.u64 = ctx.r27.u32 & 0x1;
	// mr r24,r23
	ctx.r24.u64 = ctx.r23.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83867bd0
	if (cr6.eq) goto loc_83867BD0;
	// li r4,16
	ctx.r4.s64 = 16;
	// lwz r3,8(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	// bl 0x838636d0
	ctx.lr = 0x83867BCC;
	sub_838636D0(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
loc_83867BD0:
	// add r26,r30,r26
	ctx.r26.u64 = ctx.r30.u64 + ctx.r26.u64;
	// lwz r22,28(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 28);
	// not r11,r27
	ctx.r11.u64 = ~ctx.r27.u64;
	// cmplw cr6,r30,r26
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r26.u32, xer);
	// rlwinm r19,r11,31,31,31
	ctx.r19.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x1;
	// bge cr6,0x83867d14
	if (!cr6.lt) goto loc_83867D14;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r31,r25,8
	ctx.r31.s64 = ctx.r25.s64 + 8;
	// lfs f31,-24912(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -24912);
	ctx.f31.f64 = double(temp.f32);
loc_83867BF4:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x823f1c88
	ctx.lr = 0x83867C00;
	sub_823F1C88(ctx, base);
	// addi r5,r1,208
	ctx.r5.s64 = ctx.r1.s64 + 208;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x83b0dc80
	ctx.lr = 0x83867C0C;
	sub_83B0DC80(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,28(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 28);
	// lwz r29,4(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x83b0d530
	ctx.lr = 0x83867C20;
	sub_83B0D530(ctx, base);
	// add r27,r3,r21
	ctx.r27.u64 = ctx.r3.u64 + ctx.r21.u64;
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(ctx.r24.u32, 0, xer);
	// beq cr6,0x83867c54
	if (cr6.eq) goto loc_83867C54;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x83865a50
	ctx.lr = 0x83867C44;
	sub_83865A50(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83867c54
	if (cr6.eq) goto loc_83867C54;
	// mr r29,r24
	ctx.r29.u64 = ctx.r24.u64;
loc_83867C54:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// bne cr6,0x83867c64
	if (!cr6.eq) goto loc_83867C64;
	// lwz r11,104(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 104);
	// b 0x83867c68
	goto loc_83867C68;
loc_83867C64:
	// lwz r11,108(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 108);
loc_83867C68:
	// add r3,r11,r27
	ctx.r3.u64 = ctx.r11.u64 + ctx.r27.u64;
	// cmpwi cr6,r19,0
	cr6.compare<int32_t>(ctx.r19.s32, 0, xer);
	// bne cr6,0x83867c84
	if (!cr6.eq) goto loc_83867C84;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x831ce980
	ctx.lr = 0x83867C80;
	sub_831CE980(ctx, base);
	// b 0x83867d04
	goto loc_83867D04;
loc_83867C84:
	// lwz r11,-8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// cmpwi cr6,r17,0
	cr6.compare<int32_t>(ctx.r17.s32, 0, xer);
	// lwz r27,-4(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// li r10,0
	ctx.r10.s64 = 0;
	// beq cr6,0x83867ccc
	if (cr6.eq) goto loc_83867CCC;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// lwz r5,156(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// mr r8,r20
	ctx.r8.u64 = ctx.r20.u64;
	// lwz r4,152(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// mr r7,r18
	ctx.r7.u64 = ctx.r18.u64;
	// lwz r3,148(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// stw r23,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r23.u32);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// stw r27,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r27.u32);
	// bl 0x83b11230
	ctx.lr = 0x83867CC8;
	sub_83B11230(ctx, base);
	// b 0x83867d04
	goto loc_83867D04;
loc_83867CCC:
	// lwz r9,224(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// lwz r8,220(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 220);
	// lwz r7,216(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 216);
	// lwz r6,212(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// lwz r5,232(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 232);
	// lwz r4,228(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// stw r23,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r23.u32);
	// stw r23,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r23.u32);
	// stw r9,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r9.u32);
	// stw r27,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r27.u32);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// bl 0x83b107d0
	ctx.lr = 0x83867D04;
	sub_83B107D0(ctx, base);
loc_83867D04:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,16
	ctx.r31.s64 = ctx.r31.s64 + 16;
	// cmplw cr6,r30,r26
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r26.u32, xer);
	// blt cr6,0x83867bf4
	if (cr6.lt) goto loc_83867BF4;
loc_83867D14:
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(ctx.r24.u32, 0, xer);
	// beq cr6,0x83867d24
	if (cr6.eq) goto loc_83867D24;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x83863770
	ctx.lr = 0x83867D24;
	sub_83863770(ctx, base);
loc_83867D24:
	// lwz r3,100(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 100);
	// bl 0x83864770
	ctx.lr = 0x83867D2C;
	sub_83864770(ctx, base);
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// bl 0x83867558
	ctx.lr = 0x83867D34;
	sub_83867558(ctx, base);
	// addi r1,r1,416
	ctx.r1.s64 = ctx.r1.s64 + 416;
	// lfd f31,-144(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -144);
	// b 0x831cdb08
	__restgprlr_16(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83867D40"))) PPC_WEAK_FUNC(sub_83867D40);
PPC_FUNC_IMPL(__imp__sub_83867D40) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// rlwinm r11,r6,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x8;
	// mr r9,r4
	ctx.r9.u64 = ctx.r4.u64;
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83867d58
	if (cr6.eq) goto loc_83867D58;
	// rlwinm r10,r10,0,24,22
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFEFF;
loc_83867D58:
	// rlwinm r11,r6,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x10;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83867d68
	if (cr6.eq) goto loc_83867D68;
	// ori r10,r10,32256
	ctx.r10.u64 = ctx.r10.u64 | 32256;
loc_83867D68:
	// clrlwi r11,r6,30
	ctx.r11.u64 = ctx.r6.u32 & 0x3;
	// clrlwi r8,r10,26
	ctx.r8.u64 = ctx.r10.u32 & 0x3F;
	// li r7,4
	ctx.r7.s64 = 4;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// blt cr6,0x83867d84
	if (cr6.lt) goto loc_83867D84;
	// rlwinm r9,r9,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
loc_83867D84:
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bne cr6,0x83867d90
	if (!cr6.eq) goto loc_83867D90;
	// rlwinm r10,r3,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
loc_83867D90:
	// addi r11,r10,79
	ctx.r11.s64 = ctx.r10.s64 + 79;
	// li r10,80
	ctx.r10.s64 = 80;
	// addi r9,r9,15
	ctx.r9.s64 = ctx.r9.s64 + 15;
	// divwu r11,r11,r10
	ctx.r11.u32 = PPCDivide(ctx.r11.u32, ctx.r10.u32);
	// rlwinm r9,r9,0,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFF0;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// cmpwi cr6,r8,21
	cr6.compare<int32_t>(ctx.r8.s32, 21, xer);
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r6,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 4) & 0xFFFFFFF0;
	// beq cr6,0x83867dc8
	if (cr6.eq) goto loc_83867DC8;
	// cmpwi cr6,r8,32
	cr6.compare<int32_t>(ctx.r8.s32, 32, xer);
	// beq cr6,0x83867dc8
	if (cr6.eq) goto loc_83867DC8;
	// cmpwi cr6,r8,37
	cr6.compare<int32_t>(ctx.r8.s32, 37, xer);
	// bne cr6,0x83867dcc
	if (!cr6.eq) goto loc_83867DCC;
loc_83867DC8:
	// li r7,8
	ctx.r7.s64 = 8;
loc_83867DCC:
	// mullw r11,r9,r11
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// mullw r10,r11,r7
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// li r9,5120
	ctx.r9.s64 = 5120;
	// divwu r3,r10,r9
	ctx.r3.u32 = PPCDivide(ctx.r10.u32, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83867DE0"))) PPC_WEAK_FUNC(sub_83867DE0);
PPC_FUNC_IMPL(__imp__sub_83867DE0) {
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
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r30,r11,13956
	ctx.r30.s64 = ctx.r11.s64 + 13956;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83d7554c
	ctx.lr = 0x83867E08;
	__imp__RtlEnterCriticalSection(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r7,r30,28
	ctx.r7.s64 = ctx.r30.s64 + 28;
loc_83867E10:
	// mfmsr r8
	ctx.r8.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r7
	ea = ctx.r7.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stwcx. r9,0,r7
	ea = ctx.r7.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r8,1
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x83867e10
	if (!cr0.eq) goto loc_83867E10;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x83867e54
	if (cr6.eq) goto loc_83867E54;
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// clrlwi r10,r31,17
	ctx.r10.u64 = ctx.r31.u32 & 0x7FFF;
	// mulli r10,r10,84
	ctx.r10.s64 = ctx.r10.s64 * 84;
	// lwz r11,13996(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13996);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r9,r31
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r31.u32, xer);
	// beq cr6,0x83867e88
	if (cr6.eq) goto loc_83867E88;
loc_83867E54:
	// li r10,-1
	ctx.r10.s64 = -1;
	// addi r7,r30,28
	ctx.r7.s64 = ctx.r30.s64 + 28;
loc_83867E5C:
	// mfmsr r8
	ctx.r8.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r7
	ea = ctx.r7.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r11.u64 = __builtin_bswap32(reserved.u32);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stwcx. r9,0,r7
	ea = ctx.r7.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r8,1
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x83867e5c
	if (!cr0.eq) goto loc_83867E5C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83d7553c
	ctx.lr = 0x83867E80;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x83867ec4
	goto loc_83867EC4;
loc_83867E88:
	// addi r3,r11,80
	ctx.r3.s64 = ctx.r11.s64 + 80;
	// bl 0x83863818
	ctx.lr = 0x83867E90;
	sub_83863818(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r9,-1
	ctx.r9.s64 = -1;
	// addi r7,r30,28
	ctx.r7.s64 = ctx.r30.s64 + 28;
loc_83867E9C:
	// mfmsr r8
	ctx.r8.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r7
	ea = ctx.r7.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r11.u64 = __builtin_bswap32(reserved.u32);
	// add r10,r9,r11
	ctx.r10.u64 = ctx.r9.u64 + ctx.r11.u64;
	// stwcx. r10,0,r7
	ea = ctx.r7.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r8,1
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x83867e9c
	if (!cr0.eq) goto loc_83867E9C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83d7553c
	ctx.lr = 0x83867EC0;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_83867EC4:
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

__attribute__((alias("__imp__sub_83867EDC"))) PPC_WEAK_FUNC(sub_83867EDC);
PPC_FUNC_IMPL(__imp__sub_83867EDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83867EE0"))) PPC_WEAK_FUNC(sub_83867EE0);
PPC_FUNC_IMPL(__imp__sub_83867EE0) {
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
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r30,r11,13956
	ctx.r30.s64 = ctx.r11.s64 + 13956;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83d7554c
	ctx.lr = 0x83867F08;
	__imp__RtlEnterCriticalSection(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r7,r30,28
	ctx.r7.s64 = ctx.r30.s64 + 28;
loc_83867F10:
	// mfmsr r8
	ctx.r8.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r7
	ea = ctx.r7.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stwcx. r9,0,r7
	ea = ctx.r7.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r8,1
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x83867f10
	if (!cr0.eq) goto loc_83867F10;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x83867f54
	if (cr6.eq) goto loc_83867F54;
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// clrlwi r10,r31,17
	ctx.r10.u64 = ctx.r31.u32 & 0x7FFF;
	// mulli r10,r10,84
	ctx.r10.s64 = ctx.r10.s64 * 84;
	// lwz r11,13996(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13996);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r9,r31
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r31.u32, xer);
	// beq cr6,0x83867f88
	if (cr6.eq) goto loc_83867F88;
loc_83867F54:
	// li r10,-1
	ctx.r10.s64 = -1;
	// addi r7,r30,28
	ctx.r7.s64 = ctx.r30.s64 + 28;
loc_83867F5C:
	// mfmsr r8
	ctx.r8.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r7
	ea = ctx.r7.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r11.u64 = __builtin_bswap32(reserved.u32);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stwcx. r9,0,r7
	ea = ctx.r7.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r8,1
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x83867f5c
	if (!cr0.eq) goto loc_83867F5C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83d7553c
	ctx.lr = 0x83867F80;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83867fbc
	goto loc_83867FBC;
loc_83867F88:
	// lwz r31,16(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// li r11,-1
	ctx.r11.s64 = -1;
	// addi r7,r30,28
	ctx.r7.s64 = ctx.r30.s64 + 28;
loc_83867F94:
	// mfmsr r8
	ctx.r8.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r7
	ea = ctx.r7.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stwcx. r9,0,r7
	ea = ctx.r7.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r8,1
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x83867f94
	if (!cr0.eq) goto loc_83867F94;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83d7553c
	ctx.lr = 0x83867FB8;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_83867FBC:
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

__attribute__((alias("__imp__sub_83867FD4"))) PPC_WEAK_FUNC(sub_83867FD4);
PPC_FUNC_IMPL(__imp__sub_83867FD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83867FD8"))) PPC_WEAK_FUNC(sub_83867FD8);
PPC_FUNC_IMPL(__imp__sub_83867FD8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83867FE0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwsync 
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r29,r3,80
	ctx.r29.s64 = ctx.r3.s64 + 80;
loc_83867FF4:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r29
	ea = ctx.r29.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r11.u64 = __builtin_bswap32(reserved.u32);
	// add r10,r30,r11
	ctx.r10.u64 = ctx.r30.u64 + ctx.r11.u64;
	// stwcx. r10,0,r29
	ea = ctx.r29.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x83867ff4
	if (!cr0.eq) goto loc_83867FF4;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x823f76b8
	ctx.lr = 0x83868018;
	sub_823F76B8(ctx, base);
	// lis r8,32767
	ctx.r8.s64 = 2147418112;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// sth r30,4(r31)
	PPC_STORE_U16(ctx.r31.u32 + 4, ctx.r30.u16);
	// ori r5,r8,65535
	ctx.r5.u64 = ctx.r8.u64 | 65535;
	// sth r30,6(r31)
	PPC_STORE_U16(ctx.r31.u32 + 6, ctx.r30.u16);
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// stw r5,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r5.u32);
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
loc_83868038:
	// mfmsr r6
	ctx.r6.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r7,0,r29
	ea = ctx.r29.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r7.u64 = __builtin_bswap32(reserved.u32);
	// stwcx. r30,0,r29
	ea = ctx.r29.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r30.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r6,1
	ctx.msr = (ctx.r6.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x83868038
	if (!cr0.eq) goto loc_83868038;
	// lwsync 
	// lis r4,-31743
	ctx.r4.s64 = -2080309248;
	// lis r3,-31743
	ctx.r3.s64 = -2080309248;
	// addi r10,r31,20
	ctx.r10.s64 = ctx.r31.s64 + 20;
	// lwz r11,13948(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 13948);
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// stw r9,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r9.u32);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r11,13992(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 13992);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,13992(r3)
	PPC_STORE_U32(ctx.r3.u32 + 13992, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83868094"))) PPC_WEAK_FUNC(sub_83868094);
PPC_FUNC_IMPL(__imp__sub_83868094) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83868098"))) PPC_WEAK_FUNC(sub_83868098);
PPC_FUNC_IMPL(__imp__sub_83868098) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x838680A0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r27,r11,13956
	ctx.r27.s64 = ctx.r11.s64 + 13956;
	// li r4,4000
	ctx.r4.s64 = 4000;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x83d7562c
	ctx.lr = 0x838680BC;
	__imp__RtlInitializeCriticalSectionAndSpinCount(ctx, base);
	// lis r10,-31743
	ctx.r10.s64 = -2080309248;
	// lis r7,-31743
	ctx.r7.s64 = -2080309248;
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// lis r29,-31743
	ctx.r29.s64 = -2080309248;
	// addi r31,r11,13948
	ctx.r31.s64 = ctx.r11.s64 + 13948;
	// addi r8,r10,13932
	ctx.r8.s64 = ctx.r10.s64 + 13932;
	// addi r9,r7,13940
	ctx.r9.s64 = ctx.r7.s64 + 13940;
	// stw r31,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r31.u32);
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r8,13932(r10)
	PPC_STORE_U32(ctx.r10.u32 + 13932, ctx.r8.u32);
	// stw r31,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r31.u32);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// stw r9,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r9.u32);
	// mulli r3,r28,84
	ctx.r3.s64 = ctx.r28.s64 * 84;
	// stw r8,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r8.u32);
	// stw r30,28(r27)
	PPC_STORE_U32(ctx.r27.u32 + 28, ctx.r30.u32);
	// stw r9,13940(r7)
	PPC_STORE_U32(ctx.r7.u32 + 13940, ctx.r9.u32);
	// stw r28,13988(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13988, ctx.r28.u32);
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// bl 0x838636d0
	ctx.lr = 0x83868118;
	sub_838636D0(ctx, base);
	// lis r6,-31743
	ctx.r6.s64 = -2080309248;
	// lwz r9,13988(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13988);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// stw r3,13996(r6)
	PPC_STORE_U32(ctx.r6.u32 + 13996, ctx.r3.u32);
	// beq cr6,0x838681a8
	if (cr6.eq) goto loc_838681A8;
	// lis r9,32767
	ctx.r9.s64 = 2147418112;
	// ori r7,r9,65535
	ctx.r7.u64 = ctx.r9.u64 | 65535;
loc_8386813C:
	// stw r10,76(r11)
	PPC_STORE_U32(ctx.r11.u32 + 76, ctx.r10.u32);
	// addi r6,r11,80
	ctx.r6.s64 = ctx.r11.s64 + 80;
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
	// sth r30,4(r11)
	PPC_STORE_U16(ctx.r11.u32 + 4, ctx.r30.u16);
	// sth r30,6(r11)
	PPC_STORE_U16(ctx.r11.u32 + 6, ctx.r30.u16);
	// stw r7,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r7.u32);
	// stw r30,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r30.u32);
	// stw r30,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r30.u32);
loc_8386815C:
	// mfmsr r8
	ctx.r8.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r9,0,r6
	ea = ctx.r6.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r9.u64 = __builtin_bswap32(reserved.u32);
	// stwcx. r30,0,r6
	ea = ctx.r6.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r30.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r8,1
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8386815c
	if (!cr0.eq) goto loc_8386815C;
	// lwsync 
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r31,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r31.u32);
	// addi r9,r11,20
	ctx.r9.s64 = ctx.r11.s64 + 20;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r8,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r8.u32);
	// addi r11,r11,84
	ctx.r11.s64 = ctx.r11.s64 + 84;
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r9,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r9.u32);
	// lwz r8,13988(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13988);
	// cmplw cr6,r10,r8
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, xer);
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// blt cr6,0x8386813c
	if (cr6.lt) goto loc_8386813C;
loc_838681A8:
	// lis r10,-31743
	ctx.r10.s64 = -2080309248;
	// lis r9,-31743
	ctx.r9.s64 = -2080309248;
	// addi r8,r10,14000
	ctx.r8.s64 = ctx.r10.s64 + 14000;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r30,14000(r10)
	PPC_STORE_U32(ctx.r10.u32 + 14000, ctx.r30.u32);
	// stw r30,13992(r9)
	PPC_STORE_U32(ctx.r9.u32 + 13992, ctx.r30.u32);
	// stw r30,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r30.u32);
	// stw r30,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r30.u32);
	// stw r30,12(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12, ctx.r30.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_838681D8"))) PPC_WEAK_FUNC(sub_838681D8);
PPC_FUNC_IMPL(__imp__sub_838681D8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x838681E0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// addi r31,r11,13956
	ctx.r31.s64 = ctx.r11.s64 + 13956;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83d7554c
	ctx.lr = 0x838681F4;
	__imp__RtlEnterCriticalSection(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r7,r31,28
	ctx.r7.s64 = ctx.r31.s64 + 28;
loc_838681FC:
	// mfmsr r8
	ctx.r8.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r7
	ea = ctx.r7.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stwcx. r9,0,r7
	ea = ctx.r7.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r8,1
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x838681fc
	if (!cr0.eq) goto loc_838681FC;
	// lis r28,-31743
	ctx.r28.s64 = -2080309248;
	// lis r29,-31743
	ctx.r29.s64 = -2080309248;
	// li r27,0
	ctx.r27.s64 = 0;
	// lwz r3,13996(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13996);
	// lwz r11,13988(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13988);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83868264
	if (cr6.eq) goto loc_83868264;
loc_83868238:
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83868250
	if (cr6.eq) goto loc_83868250;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83867fd8
	ctx.lr = 0x8386824C;
	sub_83867FD8(ctx, base);
	// lwz r11,13988(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13988);
loc_83868250:
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r30,r30,84
	ctx.r30.s64 = ctx.r30.s64 + 84;
	// cmplw cr6,r27,r11
	cr6.compare<uint32_t>(ctx.r27.u32, ctx.r11.u32, xer);
	// blt cr6,0x83868238
	if (cr6.lt) goto loc_83868238;
	// lwz r3,13996(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13996);
loc_83868264:
	// lis r8,-31743
	ctx.r8.s64 = -2080309248;
	// lis r7,-31743
	ctx.r7.s64 = -2080309248;
	// addi r6,r8,13932
	ctx.r6.s64 = ctx.r8.s64 + 13932;
	// lis r4,-31743
	ctx.r4.s64 = -2080309248;
	// addi r5,r7,13940
	ctx.r5.s64 = ctx.r7.s64 + 13940;
	// stw r6,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, ctx.r6.u32);
	// stw r6,13932(r8)
	PPC_STORE_U32(ctx.r8.u32 + 13932, ctx.r6.u32);
	// addi r8,r4,13948
	ctx.r8.s64 = ctx.r4.s64 + 13948;
	// stw r5,13940(r7)
	PPC_STORE_U32(ctx.r7.u32 + 13940, ctx.r5.u32);
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// stw r5,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r5.u32);
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
	// stw r8,13948(r4)
	PPC_STORE_U32(ctx.r4.u32 + 13948, ctx.r8.u32);
	// mr r9,r5
	ctx.r9.u64 = ctx.r5.u64;
	// stw r8,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r8.u32);
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// bl 0x83863770
	ctx.lr = 0x838682B0;
	sub_83863770(ctx, base);
	// lis r7,-31743
	ctx.r7.s64 = -2080309248;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,13996(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13996, ctx.r11.u32);
	// addi r11,r31,28
	ctx.r11.s64 = ctx.r31.s64 + 28;
	// stw r10,13992(r7)
	PPC_STORE_U32(ctx.r7.u32 + 13992, ctx.r10.u32);
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r9,13988(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13988, ctx.r9.u32);
loc_838682D4:
	// mfmsr r4
	ctx.r4.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r6,0,r11
	ea = ctx.r11.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r6.u64 = __builtin_bswap32(reserved.u32);
	// add r5,r10,r6
	ctx.r5.u64 = ctx.r10.u64 + ctx.r6.u64;
	// stwcx. r5,0,r11
	ea = ctx.r11.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r5.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r4,1
	ctx.msr = (ctx.r4.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x838682d4
	if (!cr0.eq) goto loc_838682D4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83d7553c
	ctx.lr = 0x838682F8;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83868300"))) PPC_WEAK_FUNC(sub_83868300);
PPC_FUNC_IMPL(__imp__sub_83868300) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83868308;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// addi r29,r11,13956
	ctx.r29.s64 = ctx.r11.s64 + 13956;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83d7554c
	ctx.lr = 0x8386831C;
	__imp__RtlEnterCriticalSection(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r7,r29,28
	ctx.r7.s64 = ctx.r29.s64 + 28;
loc_83868324:
	// mfmsr r8
	ctx.r8.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r7
	ea = ctx.r7.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stwcx. r9,0,r7
	ea = ctx.r7.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r8,1
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x83868324
	if (!cr0.eq) goto loc_83868324;
	// bl 0x83860c48
	ctx.lr = 0x83868344;
	sub_83860C48(ctx, base);
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// addi r31,r11,13940
	ctx.r31.s64 = ctx.r11.s64 + 13940;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// beq cr6,0x838683ec
	if (cr6.eq) goto loc_838683EC;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r30,0
	ctx.r30.s64 = 0;
	// subf r10,r31,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r31.s64;
	// subfic r9,r10,0
	xer.ca = ctx.r10.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r10.s64;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 & ctx.r11.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x838683ec
	if (cr6.eq) goto loc_838683EC;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r7,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r7.u32);
	// stw r30,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r30.u32);
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
loc_83868398:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// addi r3,r11,-20
	ctx.r3.s64 = ctx.r11.s64 + -20;
	// bne cr6,0x838683a8
	if (!cr6.eq) goto loc_838683A8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_838683A8:
	// bl 0x83867fd8
	ctx.lr = 0x838683AC;
	sub_83867FD8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// subf r10,r31,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r31.s64;
	// subfic r9,r10,0
	xer.ca = ctx.r10.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r10.s64;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 & ctx.r11.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x838683ec
	if (cr6.eq) goto loc_838683EC;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r7,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r7.u32);
	// stw r30,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r30.u32);
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
	// bne cr6,0x83868398
	if (!cr6.eq) goto loc_83868398;
loc_838683EC:
	// bl 0x83860cc8
	ctx.lr = 0x838683F0;
	sub_83860CC8(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// addi r7,r29,28
	ctx.r7.s64 = ctx.r29.s64 + 28;
loc_838683F8:
	// mfmsr r8
	ctx.r8.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r7
	ea = ctx.r7.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stwcx. r9,0,r7
	ea = ctx.r7.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r8,1
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x838683f8
	if (!cr0.eq) goto loc_838683F8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83d7553c
	ctx.lr = 0x8386841C;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83868424"))) PPC_WEAK_FUNC(sub_83868424);
PPC_FUNC_IMPL(__imp__sub_83868424) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83868428"))) PPC_WEAK_FUNC(sub_83868428);
PPC_FUNC_IMPL(__imp__sub_83868428) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad0
	ctx.lr = 0x83868430;
	__savegprlr_22(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// rlwinm r11,r6,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x8;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r23,r5
	ctx.r23.u64 = ctx.r5.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83868458
	if (cr6.eq) goto loc_83868458;
	// rlwinm r23,r5,0,24,22
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xFFFFFFFFFFFFFEFF;
loc_83868458:
	// rlwinm r11,r29,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x10;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83868468
	if (cr6.eq) goto loc_83868468;
	// ori r23,r23,32256
	ctx.r23.u64 = ctx.r23.u64 | 32256;
loc_83868468:
	// clrlwi r22,r29,30
	ctx.r22.u64 = ctx.r29.u32 & 0x3;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// bne cr6,0x8386847c
	if (!cr6.eq) goto loc_8386847C;
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// addi r7,r11,14000
	ctx.r7.s64 = ctx.r11.s64 + 14000;
loc_8386847C:
	// lwz r10,0(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// lwz r9,4(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// lwz r8,8(r7)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// addi r30,r11,13956
	ctx.r30.s64 = ctx.r11.s64 + 13956;
	// lwz r7,12(r7)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// stw r8,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r8.u32);
	// stw r7,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r7.u32);
	// bl 0x83d7554c
	ctx.lr = 0x838684AC;
	__imp__RtlEnterCriticalSection(ctx, base);
	// addi r6,r30,28
	ctx.r6.s64 = ctx.r30.s64 + 28;
	// li r26,1
	ctx.r26.s64 = 1;
loc_838684B4:
	// mfmsr r3
	ctx.r3.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r5,0,r6
	ea = ctx.r6.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r5.u64 = __builtin_bswap32(reserved.u32);
	// add r4,r26,r5
	ctx.r4.u64 = ctx.r26.u64 + ctx.r5.u64;
	// stwcx. r4,0,r6
	ea = ctx.r6.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r4.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r3,1
	ctx.msr = (ctx.r3.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x838684b4
	if (!cr0.eq) goto loc_838684B4;
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r11,13948
	ctx.r3.s64 = ctx.r11.s64 + 13948;
	// bl 0x838688e8
	ctx.lr = 0x838684E0;
	sub_838688E8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83868534
	if (cr6.eq) goto loc_83868534;
	// lis r10,-31743
	ctx.r10.s64 = -2080309248;
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r11,13992(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13992);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,13992(r10)
	PPC_STORE_U32(ctx.r10.u32 + 13992, ctx.r11.u32);
	// lwz r5,76(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8386cff8
	ctx.lr = 0x8386850C;
	sub_8386CFF8(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addic. r25,r31,28
	xer.ca = ctx.r31.u32 > 4294967267;
	ctx.r25.s64 = ctx.r31.s64 + 28;
	cr0.compare<int32_t>(ctx.r25.s32, 0, xer);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// beq 0x8386856c
	if (cr0.eq) goto loc_8386856C;
	// li r5,48
	ctx.r5.s64 = 48;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x831cdcf0
	ctx.lr = 0x8386852C;
	sub_831CDCF0(ctx, base);
	// mr r8,r25
	ctx.r8.u64 = ctx.r25.u64;
	// b 0x83868570
	goto loc_83868570;
loc_83868534:
	// li r10,-1
	ctx.r10.s64 = -1;
	// addi r7,r30,28
	ctx.r7.s64 = ctx.r30.s64 + 28;
loc_8386853C:
	// mfmsr r8
	ctx.r8.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r7
	ea = ctx.r7.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r11.u64 = __builtin_bswap32(reserved.u32);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stwcx. r9,0,r7
	ea = ctx.r7.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r8,1
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8386853c
	if (!cr0.eq) goto loc_8386853C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83d7553c
	ctx.lr = 0x83868560;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
loc_8386856C:
	// li r8,0
	ctx.r8.s64 = 0;
loc_83868570:
	// stw r8,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83b0ce68
	ctx.lr = 0x83868590;
	sub_83B0CE68(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x83b0d390
	ctx.lr = 0x838685A0;
	sub_83B0D390(ctx, base);
	// stw r24,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r24.u32);
	// sth r28,4(r31)
	PPC_STORE_U16(ctx.r31.u32 + 4, ctx.r28.u16);
	// addi r7,r31,80
	ctx.r7.s64 = ctx.r31.s64 + 80;
	// sth r27,6(r31)
	PPC_STORE_U16(ctx.r31.u32 + 6, ctx.r27.u16);
	// stw r29,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r29.u32);
loc_838685B4:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r7
	ea = ctx.r7.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// stwcx. r26,0,r7
	ea = ctx.r7.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r26.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x838685b4
	if (!cr0.eq) goto loc_838685B4;
	// lwsync 
	// lis r6,-31743
	ctx.r6.s64 = -2080309248;
	// addi r10,r31,20
	ctx.r10.s64 = ctx.r31.s64 + 20;
	// addi r8,r30,28
	ctx.r8.s64 = ctx.r30.s64 + 28;
	// li r7,-1
	ctx.r7.s64 = -1;
	// lwz r11,13932(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 13932);
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// lwz r6,4(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// stw r6,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r6.u32);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
loc_83868600:
	// mfmsr r3
	ctx.r3.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r5,0,r8
	ea = ctx.r8.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r5.u64 = __builtin_bswap32(reserved.u32);
	// add r4,r7,r5
	ctx.r4.u64 = ctx.r7.u64 + ctx.r5.u64;
	// stwcx. r4,0,r8
	ea = ctx.r8.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r4.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r3,1
	ctx.msr = (ctx.r3.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x83868600
	if (!cr0.eq) goto loc_83868600;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83d7553c
	ctx.lr = 0x83868624;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83868630"))) PPC_WEAK_FUNC(sub_83868630);
PPC_FUNC_IMPL(__imp__sub_83868630) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83868638;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r29,r11,13956
	ctx.r29.s64 = ctx.r11.s64 + 13956;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83d7554c
	ctx.lr = 0x83868650;
	__imp__RtlEnterCriticalSection(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r7,r29,28
	ctx.r7.s64 = ctx.r29.s64 + 28;
loc_83868658:
	// mfmsr r8
	ctx.r8.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r7
	ea = ctx.r7.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stwcx. r9,0,r7
	ea = ctx.r7.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r8,1
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x83868658
	if (!cr0.eq) goto loc_83868658;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x8386869c
	if (cr6.eq) goto loc_8386869C;
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// clrlwi r10,r30,17
	ctx.r10.u64 = ctx.r30.u32 & 0x7FFF;
	// mulli r10,r10,84
	ctx.r10.s64 = ctx.r10.s64 * 84;
	// lwz r11,13996(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13996);
	// lwzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r9,r30
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r30.u32, xer);
	// beq cr6,0x838686d4
	if (cr6.eq) goto loc_838686D4;
loc_8386869C:
	// li r10,-1
	ctx.r10.s64 = -1;
	// addi r7,r29,28
	ctx.r7.s64 = ctx.r29.s64 + 28;
loc_838686A4:
	// mfmsr r8
	ctx.r8.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r7
	ea = ctx.r7.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r11.u64 = __builtin_bswap32(reserved.u32);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stwcx. r9,0,r7
	ea = ctx.r7.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r8,1
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x838686a4
	if (!cr0.eq) goto loc_838686A4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83d7553c
	ctx.lr = 0x838686C8;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_838686D4:
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x838638d0
	ctx.lr = 0x838686DC;
	sub_838638D0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83868750
	if (!cr6.eq) goto loc_83868750;
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r9,20(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r30,r31,20
	ctx.r30.s64 = ctx.r31.s64 + 20;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r7,20(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r6,24(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// stw r6,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r6.u32);
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r5,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r5.u32);
	// lwz r4,0(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// bl 0x8386d028
	ctx.lr = 0x83868728;
	sub_8386D028(ctx, base);
	// lis r4,-31743
	ctx.r4.s64 = -2080309248;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r10,r4,13940
	ctx.r10.s64 = ctx.r4.s64 + 13940;
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
	// stw r30,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r30.u32);
loc_83868750:
	// li r10,-1
	ctx.r10.s64 = -1;
	// addi r7,r29,28
	ctx.r7.s64 = ctx.r29.s64 + 28;
loc_83868758:
	// mfmsr r8
	ctx.r8.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r7
	ea = ctx.r7.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r11.u64 = __builtin_bswap32(reserved.u32);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stwcx. r9,0,r7
	ea = ctx.r7.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r8,1
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x83868758
	if (!cr0.eq) goto loc_83868758;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83d7553c
	ctx.lr = 0x8386877C;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83868788"))) PPC_WEAK_FUNC(sub_83868788);
PPC_FUNC_IMPL(__imp__sub_83868788) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x838687bc
	if (cr6.eq) goto loc_838687BC;
	// clrlwi r9,r3,17
	ctx.r9.u64 = ctx.r3.u32 & 0x7FFF;
	// rlwinm r10,r3,3,14,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0x3FFF8;
	// lis r8,-31743
	ctx.r8.s64 = -2080309248;
	// add r7,r9,r10
	ctx.r7.u64 = ctx.r9.u64 + ctx.r10.u64;
	// rlwinm r9,r7,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r10,14024(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 14024);
	// add r3,r9,r10
	ctx.r3.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lwzx r6,r9,r10
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// cmplw cr6,r6,r11
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r11.u32, xer);
	// beqlr cr6
	if (cr6.eq) return;
loc_838687BC:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_838687C4"))) PPC_WEAK_FUNC(sub_838687C4);
PPC_FUNC_IMPL(__imp__sub_838687C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_838687C8"))) PPC_WEAK_FUNC(sub_838687C8);
PPC_FUNC_IMPL(__imp__sub_838687C8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x838687D0;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r29,r11,14028
	ctx.r29.s64 = ctx.r11.s64 + 14028;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// bl 0x83d7554c
	ctx.lr = 0x838687F4;
	__imp__RtlEnterCriticalSection(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r7,r29,28
	ctx.r7.s64 = ctx.r29.s64 + 28;
loc_838687FC:
	// mfmsr r8
	ctx.r8.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r7
	ea = ctx.r7.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stwcx. r9,0,r7
	ea = ctx.r7.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r8,1
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x838687fc
	if (!cr0.eq) goto loc_838687FC;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x83868848
	if (cr6.eq) goto loc_83868848;
	// clrlwi r11,r31,17
	ctx.r11.u64 = ctx.r31.u32 & 0x7FFF;
	// rlwinm r10,r31,3,14,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 3) & 0x3FFF8;
	// lis r9,-31743
	ctx.r9.s64 = -2080309248;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r10,r8,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r11,14024(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 14024);
	// add r30,r10,r11
	ctx.r30.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwzx r7,r10,r11
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplw cr6,r7,r31
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r31.u32, xer);
	// beq cr6,0x83868880
	if (cr6.eq) goto loc_83868880;
loc_83868848:
	// li r10,-1
	ctx.r10.s64 = -1;
	// addi r7,r29,28
	ctx.r7.s64 = ctx.r29.s64 + 28;
loc_83868850:
	// mfmsr r8
	ctx.r8.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r7
	ea = ctx.r7.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r11.u64 = __builtin_bswap32(reserved.u32);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stwcx. r9,0,r7
	ea = ctx.r7.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r8,1
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x83868850
	if (!cr0.eq) goto loc_83868850;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83d7553c
	ctx.lr = 0x83868874;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_83868880:
	// addi r3,r30,68
	ctx.r3.s64 = ctx.r30.s64 + 68;
	// bl 0x83863818
	ctx.lr = 0x83868888;
	sub_83863818(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// addi r7,r29,28
	ctx.r7.s64 = ctx.r29.s64 + 28;
loc_83868890:
	// mfmsr r8
	ctx.r8.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r7
	ea = ctx.r7.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stwcx. r9,0,r7
	ea = ctx.r7.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r8,1
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x83868890
	if (!cr0.eq) goto loc_83868890;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83d7553c
	ctx.lr = 0x838688B4;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// rlwinm r6,r28,0,19,27
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0x1FF0;
	// rlwinm r6,r6,0,27,19
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFFFFFFFF01F;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// bne cr6,0x838688cc
	if (!cr6.eq) goto loc_838688CC;
	// lwz r3,16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// bl 0x8386ca10
	ctx.lr = 0x838688CC;
	sub_8386CA10(ctx, base);
loc_838688CC:
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// lwz r3,64(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x83863b20
	ctx.lr = 0x838688E0;
	sub_83863B20(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_838688E8"))) PPC_WEAK_FUNC(sub_838688E8);
PPC_FUNC_IMPL(__imp__sub_838688E8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x838688F0;
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
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, xer);
	// bne cr6,0x8386896c
	if (!cr6.eq) goto loc_8386896C;
	// addi r29,r4,28
	ctx.r29.s64 = ctx.r4.s64 + 28;
	// li r9,-1
	ctx.r9.s64 = -1;
loc_83868910:
	// mfmsr r8
	ctx.r8.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r29
	ea = ctx.r29.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r11.u64 = __builtin_bswap32(reserved.u32);
	// add r10,r9,r11
	ctx.r10.u64 = ctx.r9.u64 + ctx.r11.u64;
	// stwcx. r10,0,r29
	ea = ctx.r29.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r8,1
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x83868910
	if (!cr0.eq) goto loc_83868910;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83d7553c
	ctx.lr = 0x83868934;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// bl 0x83864d00
	ctx.lr = 0x83868938;
	sub_83864D00(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83d7554c
	ctx.lr = 0x83868940;
	__imp__RtlEnterCriticalSection(ctx, base);
	// li r7,1
	ctx.r7.s64 = 1;
loc_83868944:
	// mfmsr r4
	ctx.r4.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r6,0,r29
	ea = ctx.r29.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r6.u64 = __builtin_bswap32(reserved.u32);
	// add r5,r7,r6
	ctx.r5.u64 = ctx.r7.u64 + ctx.r6.u64;
	// stwcx. r5,0,r29
	ea = ctx.r29.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r5.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r4,1
	ctx.msr = (ctx.r4.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x83868944
	if (!cr0.eq) goto loc_83868944;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplw cr6,r31,r3
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r3.u32, xer);
	// beq cr6,0x838689b8
	if (cr6.eq) goto loc_838689B8;
loc_8386896C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// subf r10,r31,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r31.s64;
	// subfic r9,r10,0
	xer.ca = ctx.r10.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r10.s64;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 & ctx.r11.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x838689b8
	if (cr6.eq) goto loc_838689B8;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r3,r11,-20
	ctx.r3.s64 = ctx.r11.s64 + -20;
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r6,4(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r6,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r6.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_838689B8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_838689C4"))) PPC_WEAK_FUNC(sub_838689C4);
PPC_FUNC_IMPL(__imp__sub_838689C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_838689C8"))) PPC_WEAK_FUNC(sub_838689C8);
PPC_FUNC_IMPL(__imp__sub_838689C8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x838689D0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwsync 
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r29,r3,68
	ctx.r29.s64 = ctx.r3.s64 + 68;
loc_838689E4:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r29
	ea = ctx.r29.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r11.u64 = __builtin_bswap32(reserved.u32);
	// add r10,r30,r11
	ctx.r10.u64 = ctx.r30.u64 + ctx.r11.u64;
	// stwcx. r10,0,r29
	ea = ctx.r29.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x838689e4
	if (!cr0.eq) goto loc_838689E4;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x823f76b8
	ctx.lr = 0x83868A0C;
	sub_823F76B8(ctx, base);
	// lwz r3,64(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// bl 0x83864610
	ctx.lr = 0x83868A14;
	sub_83864610(ctx, base);
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
	// stw r30,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r30.u32);
loc_83868A2C:
	// mfmsr r7
	ctx.r7.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r8,0,r29
	ea = ctx.r29.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r8.u64 = __builtin_bswap32(reserved.u32);
	// stwcx. r30,0,r29
	ea = ctx.r29.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r30.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r7,1
	ctx.msr = (ctx.r7.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x83868a2c
	if (!cr0.eq) goto loc_83868A2C;
	// lwsync 
	// lis r6,-31743
	ctx.r6.s64 = -2080309248;
	// lis r5,-31743
	ctx.r5.s64 = -2080309248;
	// addi r10,r31,20
	ctx.r10.s64 = ctx.r31.s64 + 20;
	// lwz r11,14016(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 14016);
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// stw r4,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r4.u32);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r11,14080(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 14080);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,14080(r5)
	PPC_STORE_U32(ctx.r5.u32 + 14080, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83868A88"))) PPC_WEAK_FUNC(sub_83868A88);
PPC_FUNC_IMPL(__imp__sub_83868A88) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x83868A90;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// clrlwi r28,r6,31
	ctx.r28.u64 = ctx.r6.u32 & 0x1;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// mr r25,r7
	ctx.r25.u64 = ctx.r7.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// beq cr6,0x83868abc
	if (cr6.eq) goto loc_83868ABC;
	// li r4,4
	ctx.r4.s64 = 4;
loc_83868ABC:
	// rlwinm r11,r26,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83868acc
	if (cr6.eq) goto loc_83868ACC;
	// ori r4,r4,512
	ctx.r4.u64 = ctx.r4.u64 | 512;
loc_83868ACC:
	// addic. r30,r31,28
	xer.ca = ctx.r31.u32 > 4294967267;
	ctx.r30.s64 = ctx.r31.s64 + 28;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// beq 0x83868af0
	if (cr0.eq) goto loc_83868AF0;
	// li r10,8
	ctx.r10.s64 = 8;
	// addi r11,r30,-4
	ctx.r11.s64 = ctx.r30.s64 + -4;
	// li r9,0
	ctx.r9.s64 = 0;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_83868AE4:
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x83868ae4
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83868AE4;
	// b 0x83868af4
	goto loc_83868AF4;
loc_83868AF0:
	// li r30,0
	ctx.r30.s64 = 0;
loc_83868AF4:
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x83b0cd40
	ctx.lr = 0x83868B08;
	sub_83B0CD40(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,4096
	ctx.r4.s64 = 4096;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83863b20
	ctx.lr = 0x83868B1C;
	sub_83863B20(ctx, base);
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// beq cr6,0x83868b28
	if (cr6.eq) goto loc_83868B28;
	// bl 0x8386cfd8
	ctx.lr = 0x83868B28;
	sub_8386CFD8(ctx, base);
loc_83868B28:
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83b0d458
	ctx.lr = 0x83868B34;
	sub_83B0D458(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83864770
	ctx.lr = 0x83868B3C;
	sub_83864770(ctx, base);
	// li r4,3
	ctx.r4.s64 = 3;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r5,60(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// bl 0x8386cff8
	ctx.lr = 0x83868B4C;
	sub_8386CFF8(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r26,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r26.u32);
	// addi r7,r31,68
	ctx.r7.s64 = ctx.r31.s64 + 68;
	// stw r29,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r29.u32);
	// stw r27,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r27.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_83868B6C:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r7
	ea = ctx.r7.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// stwcx. r8,0,r7
	ea = ctx.r7.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r8.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x83868b6c
	if (!cr0.eq) goto loc_83868B6C;
	// lwsync 
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(ctx.r25.u32, 0, xer);
	// beq cr6,0x83868bb8
	if (cr6.eq) goto loc_83868BB8;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,64(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,4096
	ctx.r4.s64 = 4096;
	// bl 0x83863b20
	ctx.lr = 0x83868BA4;
	sub_83863B20(ctx, base);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x832d2408
	ctx.lr = 0x83868BB0;
	sub_832D2408(ctx, base);
	// lwz r3,64(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// bl 0x83864770
	ctx.lr = 0x83868BB8;
	sub_83864770(ctx, base);
loc_83868BB8:
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// addi r10,r31,20
	ctx.r10.s64 = ctx.r31.s64 + 20;
	// lwz r11,14072(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 14072);
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// stw r9,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r9.u32);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83868BEC"))) PPC_WEAK_FUNC(sub_83868BEC);
PPC_FUNC_IMPL(__imp__sub_83868BEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83868BF0"))) PPC_WEAK_FUNC(sub_83868BF0);
PPC_FUNC_IMPL(__imp__sub_83868BF0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x83868BF8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r27,r11,14028
	ctx.r27.s64 = ctx.r11.s64 + 14028;
	// li r4,4000
	ctx.r4.s64 = 4000;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x83d7562c
	ctx.lr = 0x83868C14;
	__imp__RtlInitializeCriticalSectionAndSpinCount(ctx, base);
	// lis r10,-31743
	ctx.r10.s64 = -2080309248;
	// lis r7,-31743
	ctx.r7.s64 = -2080309248;
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// lis r29,-31743
	ctx.r29.s64 = -2080309248;
	// addi r31,r11,14016
	ctx.r31.s64 = ctx.r11.s64 + 14016;
	// addi r8,r10,14072
	ctx.r8.s64 = ctx.r10.s64 + 14072;
	// addi r9,r7,14064
	ctx.r9.s64 = ctx.r7.s64 + 14064;
	// stw r31,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r31.u32);
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r8,14072(r10)
	PPC_STORE_U32(ctx.r10.u32 + 14072, ctx.r8.u32);
	// stw r31,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r31.u32);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// stw r9,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r9.u32);
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// stw r8,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r8.u32);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stw r30,28(r27)
	PPC_STORE_U32(ctx.r27.u32 + 28, ctx.r30.u32);
	// rlwinm r11,r28,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r9,14064(r7)
	PPC_STORE_U32(ctx.r7.u32 + 14064, ctx.r9.u32);
	// li r4,4
	ctx.r4.s64 = 4;
	// stw r28,14060(r29)
	PPC_STORE_U32(ctx.r29.u32 + 14060, ctx.r28.u32);
	// add r6,r28,r11
	ctx.r6.u64 = ctx.r28.u64 + ctx.r11.u64;
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// rlwinm r3,r6,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x838636d0
	ctx.lr = 0x83868C78;
	sub_838636D0(ctx, base);
	// lis r5,-31743
	ctx.r5.s64 = -2080309248;
	// lwz r9,14060(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 14060);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// stw r3,14024(r5)
	PPC_STORE_U32(ctx.r5.u32 + 14024, ctx.r3.u32);
	// beq cr6,0x83868cfc
	if (cr6.eq) goto loc_83868CFC;
loc_83868C94:
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
	// addi r7,r11,68
	ctx.r7.s64 = ctx.r11.s64 + 68;
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
	// stw r30,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r30.u32);
	// stw r30,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r30.u32);
	// stw r30,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r30.u32);
	// stw r30,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r30.u32);
loc_83868CB0:
	// mfmsr r8
	ctx.r8.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r9,0,r7
	ea = ctx.r7.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r9.u64 = __builtin_bswap32(reserved.u32);
	// stwcx. r30,0,r7
	ea = ctx.r7.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r30.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r8,1
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x83868cb0
	if (!cr0.eq) goto loc_83868CB0;
	// lwsync 
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r31,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r31.u32);
	// addi r9,r11,20
	ctx.r9.s64 = ctx.r11.s64 + 20;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r8,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r8.u32);
	// addi r11,r11,72
	ctx.r11.s64 = ctx.r11.s64 + 72;
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r9,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r9.u32);
	// lwz r8,14060(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 14060);
	// cmplw cr6,r10,r8
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, xer);
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// blt cr6,0x83868c94
	if (cr6.lt) goto loc_83868C94;
loc_83868CFC:
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r30,14080(r11)
	PPC_STORE_U32(ctx.r11.u32 + 14080, ctx.r30.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83868D10"))) PPC_WEAK_FUNC(sub_83868D10);
PPC_FUNC_IMPL(__imp__sub_83868D10) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x83868D18;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// addi r31,r11,14028
	ctx.r31.s64 = ctx.r11.s64 + 14028;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83d7554c
	ctx.lr = 0x83868D2C;
	__imp__RtlEnterCriticalSection(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r7,r31,28
	ctx.r7.s64 = ctx.r31.s64 + 28;
loc_83868D34:
	// mfmsr r8
	ctx.r8.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r7
	ea = ctx.r7.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stwcx. r9,0,r7
	ea = ctx.r7.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r8,1
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x83868d34
	if (!cr0.eq) goto loc_83868D34;
	// lis r28,-31743
	ctx.r28.s64 = -2080309248;
	// lis r29,-31743
	ctx.r29.s64 = -2080309248;
	// li r27,0
	ctx.r27.s64 = 0;
	// lwz r3,14024(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 14024);
	// lwz r11,14060(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 14060);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83868d9c
	if (cr6.eq) goto loc_83868D9C;
loc_83868D70:
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83868d88
	if (cr6.eq) goto loc_83868D88;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x838689c8
	ctx.lr = 0x83868D84;
	sub_838689C8(ctx, base);
	// lwz r11,14060(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 14060);
loc_83868D88:
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r30,r30,72
	ctx.r30.s64 = ctx.r30.s64 + 72;
	// cmplw cr6,r27,r11
	cr6.compare<uint32_t>(ctx.r27.u32, ctx.r11.u32, xer);
	// blt cr6,0x83868d70
	if (cr6.lt) goto loc_83868D70;
	// lwz r3,14024(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 14024);
loc_83868D9C:
	// lis r8,-31743
	ctx.r8.s64 = -2080309248;
	// lis r7,-31743
	ctx.r7.s64 = -2080309248;
	// addi r6,r8,14072
	ctx.r6.s64 = ctx.r8.s64 + 14072;
	// lis r4,-31743
	ctx.r4.s64 = -2080309248;
	// addi r5,r7,14064
	ctx.r5.s64 = ctx.r7.s64 + 14064;
	// stw r6,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, ctx.r6.u32);
	// stw r6,14072(r8)
	PPC_STORE_U32(ctx.r8.u32 + 14072, ctx.r6.u32);
	// addi r8,r4,14016
	ctx.r8.s64 = ctx.r4.s64 + 14016;
	// stw r5,14064(r7)
	PPC_STORE_U32(ctx.r7.u32 + 14064, ctx.r5.u32);
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// stw r5,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r5.u32);
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
	// stw r8,14016(r4)
	PPC_STORE_U32(ctx.r4.u32 + 14016, ctx.r8.u32);
	// mr r9,r5
	ctx.r9.u64 = ctx.r5.u64;
	// stw r8,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r8.u32);
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// bl 0x83863770
	ctx.lr = 0x83868DE8;
	sub_83863770(ctx, base);
	// lis r7,-31743
	ctx.r7.s64 = -2080309248;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,14024(r28)
	PPC_STORE_U32(ctx.r28.u32 + 14024, ctx.r11.u32);
	// addi r11,r31,28
	ctx.r11.s64 = ctx.r31.s64 + 28;
	// stw r10,14080(r7)
	PPC_STORE_U32(ctx.r7.u32 + 14080, ctx.r10.u32);
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r9,14060(r29)
	PPC_STORE_U32(ctx.r29.u32 + 14060, ctx.r9.u32);
loc_83868E0C:
	// mfmsr r4
	ctx.r4.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r6,0,r11
	ea = ctx.r11.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r6.u64 = __builtin_bswap32(reserved.u32);
	// add r5,r10,r6
	ctx.r5.u64 = ctx.r10.u64 + ctx.r6.u64;
	// stwcx. r5,0,r11
	ea = ctx.r11.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r5.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r4,1
	ctx.msr = (ctx.r4.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x83868e0c
	if (!cr0.eq) goto loc_83868E0C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83d7553c
	ctx.lr = 0x83868E30;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83868E38"))) PPC_WEAK_FUNC(sub_83868E38);
PPC_FUNC_IMPL(__imp__sub_83868E38) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83868E40;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// addi r29,r11,14028
	ctx.r29.s64 = ctx.r11.s64 + 14028;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83d7554c
	ctx.lr = 0x83868E54;
	__imp__RtlEnterCriticalSection(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r7,r29,28
	ctx.r7.s64 = ctx.r29.s64 + 28;
loc_83868E5C:
	// mfmsr r8
	ctx.r8.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r7
	ea = ctx.r7.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stwcx. r9,0,r7
	ea = ctx.r7.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r8,1
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x83868e5c
	if (!cr0.eq) goto loc_83868E5C;
	// bl 0x83860c48
	ctx.lr = 0x83868E7C;
	sub_83860C48(ctx, base);
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// addi r31,r11,14064
	ctx.r31.s64 = ctx.r11.s64 + 14064;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// beq cr6,0x83868f24
	if (cr6.eq) goto loc_83868F24;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r30,0
	ctx.r30.s64 = 0;
	// subf r10,r31,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r31.s64;
	// subfic r9,r10,0
	xer.ca = ctx.r10.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r10.s64;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 & ctx.r11.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83868f24
	if (cr6.eq) goto loc_83868F24;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r7,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r7.u32);
	// stw r30,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r30.u32);
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
loc_83868ED0:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// addi r3,r11,-20
	ctx.r3.s64 = ctx.r11.s64 + -20;
	// bne cr6,0x83868ee0
	if (!cr6.eq) goto loc_83868EE0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_83868EE0:
	// bl 0x838689c8
	ctx.lr = 0x83868EE4;
	sub_838689C8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// subf r10,r31,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r31.s64;
	// subfic r9,r10,0
	xer.ca = ctx.r10.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r10.s64;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 & ctx.r11.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83868f24
	if (cr6.eq) goto loc_83868F24;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r7,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r7.u32);
	// stw r30,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r30.u32);
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
	// bne cr6,0x83868ed0
	if (!cr6.eq) goto loc_83868ED0;
loc_83868F24:
	// bl 0x83860cc8
	ctx.lr = 0x83868F28;
	sub_83860CC8(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// addi r7,r29,28
	ctx.r7.s64 = ctx.r29.s64 + 28;
loc_83868F30:
	// mfmsr r8
	ctx.r8.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r7
	ea = ctx.r7.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stwcx. r9,0,r7
	ea = ctx.r7.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r8,1
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x83868f30
	if (!cr0.eq) goto loc_83868F30;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83d7553c
	ctx.lr = 0x83868F54;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83868F5C"))) PPC_WEAK_FUNC(sub_83868F5C);
PPC_FUNC_IMPL(__imp__sub_83868F5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83868F60"))) PPC_WEAK_FUNC(sub_83868F60);
PPC_FUNC_IMPL(__imp__sub_83868F60) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x83868F68;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r30,r11,14028
	ctx.r30.s64 = ctx.r11.s64 + 14028;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// bl 0x83d7554c
	ctx.lr = 0x83868F88;
	__imp__RtlEnterCriticalSection(ctx, base);
	// addi r11,r30,28
	ctx.r11.s64 = ctx.r30.s64 + 28;
	// li r8,1
	ctx.r8.s64 = 1;
loc_83868F90:
	// mfmsr r7
	ctx.r7.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r11
	ea = ctx.r11.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// add r9,r8,r10
	ctx.r9.u64 = ctx.r8.u64 + ctx.r10.u64;
	// stwcx. r9,0,r11
	ea = ctx.r11.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r7,1
	ctx.msr = (ctx.r7.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x83868f90
	if (!cr0.eq) goto loc_83868F90;
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r28,r11,14016
	ctx.r28.s64 = ctx.r11.s64 + 14016;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x838688e8
	ctx.lr = 0x83868FC0;
	sub_838688E8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x838690b4
	if (cr6.eq) goto loc_838690B4;
	// lis r29,-31743
	ctx.r29.s64 = -2080309248;
	// li r7,4
	ctx.r7.s64 = 4;
	// lwz r11,14080(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 14080);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,14080(r29)
	PPC_STORE_U32(ctx.r29.u32 + 14080, ctx.r11.u32);
	// clrlwi r11,r26,31
	ctx.r11.u64 = ctx.r26.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83868ff0
	if (!cr6.eq) goto loc_83868FF0;
	// li r7,1028
	ctx.r7.s64 = 1028;
loc_83868FF0:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x83864558
	ctx.lr = 0x83869004;
	sub_83864558(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x838690ec
	if (!cr6.eq) goto loc_838690EC;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r8,r31,68
	ctx.r8.s64 = ctx.r31.s64 + 68;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
loc_83869030:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r8
	ea = ctx.r8.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// stwcx. r11,0,r8
	ea = ctx.r8.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x83869030
	if (!cr0.eq) goto loc_83869030;
	// lwsync 
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r10,r31,20
	ctx.r10.s64 = ctx.r31.s64 + 20;
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// li r4,-1
	ctx.r4.s64 = -1;
	// addi r9,r30,28
	ctx.r9.s64 = ctx.r30.s64 + 28;
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// stw r8,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r8.u32);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r11,14080(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 14080);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,14080(r29)
	PPC_STORE_U32(ctx.r29.u32 + 14080, ctx.r11.u32);
loc_83869084:
	// mfmsr r5
	ctx.r5.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r7,0,r9
	ea = ctx.r9.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r7.u64 = __builtin_bswap32(reserved.u32);
	// add r6,r4,r7
	ctx.r6.u64 = ctx.r4.u64 + ctx.r7.u64;
	// stwcx. r6,0,r9
	ea = ctx.r9.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r6.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r5,1
	ctx.msr = (ctx.r5.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x83869084
	if (!cr0.eq) goto loc_83869084;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83d7553c
	ctx.lr = 0x838690A8;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_838690B4:
	// li r10,-1
	ctx.r10.s64 = -1;
	// addi r7,r30,28
	ctx.r7.s64 = ctx.r30.s64 + 28;
loc_838690BC:
	// mfmsr r8
	ctx.r8.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r7
	ea = ctx.r7.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r11.u64 = __builtin_bswap32(reserved.u32);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stwcx. r9,0,r7
	ea = ctx.r7.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r8,1
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x838690bc
	if (!cr0.eq) goto loc_838690BC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83d7553c
	ctx.lr = 0x838690E0;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_838690EC:
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83868a88
	ctx.lr = 0x83869100;
	sub_83868A88(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r9,-1
	ctx.r9.s64 = -1;
	// addi r7,r30,28
	ctx.r7.s64 = ctx.r30.s64 + 28;
loc_8386910C:
	// mfmsr r8
	ctx.r8.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r7
	ea = ctx.r7.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r11.u64 = __builtin_bswap32(reserved.u32);
	// add r10,r9,r11
	ctx.r10.u64 = ctx.r9.u64 + ctx.r11.u64;
	// stwcx. r10,0,r7
	ea = ctx.r7.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r8,1
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8386910c
	if (!cr0.eq) goto loc_8386910C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83d7553c
	ctx.lr = 0x83869130;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8386913C"))) PPC_WEAK_FUNC(sub_8386913C);
PPC_FUNC_IMPL(__imp__sub_8386913C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83869140"))) PPC_WEAK_FUNC(sub_83869140);
PPC_FUNC_IMPL(__imp__sub_83869140) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83869148;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r29,r11,14028
	ctx.r29.s64 = ctx.r11.s64 + 14028;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83d7554c
	ctx.lr = 0x83869160;
	__imp__RtlEnterCriticalSection(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r7,r29,28
	ctx.r7.s64 = ctx.r29.s64 + 28;
loc_83869168:
	// mfmsr r8
	ctx.r8.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r7
	ea = ctx.r7.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stwcx. r9,0,r7
	ea = ctx.r7.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r8,1
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x83869168
	if (!cr0.eq) goto loc_83869168;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x838691b4
	if (cr6.eq) goto loc_838691B4;
	// clrlwi r10,r30,17
	ctx.r10.u64 = ctx.r30.u32 & 0x7FFF;
	// rlwinm r11,r30,3,14,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 3) & 0x3FFF8;
	// lis r9,-31743
	ctx.r9.s64 = -2080309248;
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r10,r8,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r11,14024(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 14024);
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwzx r7,r10,r11
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplw cr6,r7,r30
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r30.u32, xer);
	// beq cr6,0x838691ec
	if (cr6.eq) goto loc_838691EC;
loc_838691B4:
	// li r10,-1
	ctx.r10.s64 = -1;
	// addi r7,r29,28
	ctx.r7.s64 = ctx.r29.s64 + 28;
loc_838691BC:
	// mfmsr r8
	ctx.r8.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r7
	ea = ctx.r7.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r11.u64 = __builtin_bswap32(reserved.u32);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stwcx. r9,0,r7
	ea = ctx.r7.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r8,1
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x838691bc
	if (!cr0.eq) goto loc_838691BC;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83d7553c
	ctx.lr = 0x838691E0;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_838691EC:
	// addi r3,r31,68
	ctx.r3.s64 = ctx.r31.s64 + 68;
	// bl 0x838638d0
	ctx.lr = 0x838691F4;
	sub_838638D0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83869268
	if (!cr6.eq) goto loc_83869268;
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r9,20(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r30,r31,20
	ctx.r30.s64 = ctx.r31.s64 + 20;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r7,20(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r6,24(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// stw r6,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r6.u32);
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r5,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r5.u32);
	// lwz r4,0(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// bl 0x8386d028
	ctx.lr = 0x83869240;
	sub_8386D028(ctx, base);
	// lis r4,-31743
	ctx.r4.s64 = -2080309248;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r10,r4,14064
	ctx.r10.s64 = ctx.r4.s64 + 14064;
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
	// stw r30,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r30.u32);
loc_83869268:
	// li r10,-1
	ctx.r10.s64 = -1;
	// addi r7,r29,28
	ctx.r7.s64 = ctx.r29.s64 + 28;
loc_83869270:
	// mfmsr r8
	ctx.r8.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r7
	ea = ctx.r7.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r11.u64 = __builtin_bswap32(reserved.u32);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stwcx. r9,0,r7
	ea = ctx.r7.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r8,1
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x83869270
	if (!cr0.eq) goto loc_83869270;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83d7553c
	ctx.lr = 0x83869294;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_838692A0"))) PPC_WEAK_FUNC(sub_838692A0);
PPC_FUNC_IMPL(__imp__sub_838692A0) {
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
	// beq cr6,0x838692f4
	if (cr6.eq) goto loc_838692F4;
	// clrlwi r10,r3,17
	ctx.r10.u64 = ctx.r3.u32 & 0x7FFF;
	// rlwinm r11,r3,3,14,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0x3FFF8;
	// lis r9,-31743
	ctx.r9.s64 = -2080309248;
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r10,r8,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r11,14024(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 14024);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r7,r3
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r3.u32, xer);
	// bne cr6,0x838692f4
	if (!cr6.eq) goto loc_838692F4;
	// lwz r3,64(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// bl 0x83864770
	ctx.lr = 0x838692EC;
	sub_83864770(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83869140
	ctx.lr = 0x838692F4;
	sub_83869140(ctx, base);
loc_838692F4:
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

__attribute__((alias("__imp__sub_83869308"))) PPC_WEAK_FUNC(sub_83869308);
PPC_FUNC_IMPL(__imp__sub_83869308) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83869338
	if (cr6.eq) goto loc_83869338;
	// clrlwi r10,r3,17
	ctx.r10.u64 = ctx.r3.u32 & 0x7FFF;
	// rlwinm r11,r3,3,14,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0x3FFF8;
	// lis r9,-31743
	ctx.r9.s64 = -2080309248;
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r10,r8,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r11,14140(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 14140);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r7,r3
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r3.u32, xer);
	// beq cr6,0x83869340
	if (cr6.eq) goto loc_83869340;
loc_83869338:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_83869340:
	// lwz r3,64(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83869348"))) PPC_WEAK_FUNC(sub_83869348);
PPC_FUNC_IMPL(__imp__sub_83869348) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83869350;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r29,r11,14096
	ctx.r29.s64 = ctx.r11.s64 + 14096;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83d7554c
	ctx.lr = 0x8386936C;
	__imp__RtlEnterCriticalSection(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r7,r29,28
	ctx.r7.s64 = ctx.r29.s64 + 28;
loc_83869374:
	// mfmsr r8
	ctx.r8.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r7
	ea = ctx.r7.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stwcx. r9,0,r7
	ea = ctx.r7.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r8,1
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x83869374
	if (!cr0.eq) goto loc_83869374;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x838693c0
	if (cr6.eq) goto loc_838693C0;
	// clrlwi r11,r31,17
	ctx.r11.u64 = ctx.r31.u32 & 0x7FFF;
	// rlwinm r10,r31,3,14,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 3) & 0x3FFF8;
	// lis r9,-31743
	ctx.r9.s64 = -2080309248;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r10,r8,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r11,14140(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 14140);
	// add r30,r10,r11
	ctx.r30.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwzx r7,r10,r11
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplw cr6,r7,r31
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r31.u32, xer);
	// beq cr6,0x838693f8
	if (cr6.eq) goto loc_838693F8;
loc_838693C0:
	// li r10,-1
	ctx.r10.s64 = -1;
	// addi r7,r29,28
	ctx.r7.s64 = ctx.r29.s64 + 28;
loc_838693C8:
	// mfmsr r8
	ctx.r8.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r7
	ea = ctx.r7.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r11.u64 = __builtin_bswap32(reserved.u32);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stwcx. r9,0,r7
	ea = ctx.r7.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r8,1
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x838693c8
	if (!cr0.eq) goto loc_838693C8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83d7553c
	ctx.lr = 0x838693EC;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_838693F8:
	// addi r3,r30,68
	ctx.r3.s64 = ctx.r30.s64 + 68;
	// bl 0x83863818
	ctx.lr = 0x83869400;
	sub_83863818(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// addi r7,r29,28
	ctx.r7.s64 = ctx.r29.s64 + 28;
loc_83869408:
	// mfmsr r8
	ctx.r8.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r7
	ea = ctx.r7.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stwcx. r9,0,r7
	ea = ctx.r7.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r8,1
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x83869408
	if (!cr0.eq) goto loc_83869408;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83d7553c
	ctx.lr = 0x8386942C;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,60(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x83863b20
	ctx.lr = 0x83869440;
	sub_83863B20(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83869448"))) PPC_WEAK_FUNC(sub_83869448);
PPC_FUNC_IMPL(__imp__sub_83869448) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83869450;
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
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, xer);
	// bne cr6,0x838694cc
	if (!cr6.eq) goto loc_838694CC;
	// addi r29,r4,28
	ctx.r29.s64 = ctx.r4.s64 + 28;
	// li r9,-1
	ctx.r9.s64 = -1;
loc_83869470:
	// mfmsr r8
	ctx.r8.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r29
	ea = ctx.r29.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r11.u64 = __builtin_bswap32(reserved.u32);
	// add r10,r9,r11
	ctx.r10.u64 = ctx.r9.u64 + ctx.r11.u64;
	// stwcx. r10,0,r29
	ea = ctx.r29.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r8,1
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x83869470
	if (!cr0.eq) goto loc_83869470;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83d7553c
	ctx.lr = 0x83869494;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// bl 0x83864d00
	ctx.lr = 0x83869498;
	sub_83864D00(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83d7554c
	ctx.lr = 0x838694A0;
	__imp__RtlEnterCriticalSection(ctx, base);
	// li r7,1
	ctx.r7.s64 = 1;
loc_838694A4:
	// mfmsr r4
	ctx.r4.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r6,0,r29
	ea = ctx.r29.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r6.u64 = __builtin_bswap32(reserved.u32);
	// add r5,r7,r6
	ctx.r5.u64 = ctx.r7.u64 + ctx.r6.u64;
	// stwcx. r5,0,r29
	ea = ctx.r29.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r5.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r4,1
	ctx.msr = (ctx.r4.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x838694a4
	if (!cr0.eq) goto loc_838694A4;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplw cr6,r31,r3
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r3.u32, xer);
	// beq cr6,0x83869518
	if (cr6.eq) goto loc_83869518;
loc_838694CC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// subf r10,r31,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r31.s64;
	// subfic r9,r10,0
	xer.ca = ctx.r10.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r10.s64;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 & ctx.r11.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83869518
	if (cr6.eq) goto loc_83869518;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r3,r11,-16
	ctx.r3.s64 = ctx.r11.s64 + -16;
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r6,4(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r6,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r6.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83869518:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83869524"))) PPC_WEAK_FUNC(sub_83869524);
PPC_FUNC_IMPL(__imp__sub_83869524) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83869528"))) PPC_WEAK_FUNC(sub_83869528);
PPC_FUNC_IMPL(__imp__sub_83869528) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83869530;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwsync 
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r29,r3,68
	ctx.r29.s64 = ctx.r3.s64 + 68;
loc_83869544:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r29
	ea = ctx.r29.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r11.u64 = __builtin_bswap32(reserved.u32);
	// add r10,r30,r11
	ctx.r10.u64 = ctx.r30.u64 + ctx.r11.u64;
	// stwcx. r10,0,r29
	ea = ctx.r29.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x83869544
	if (!cr0.eq) goto loc_83869544;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// lwz r3,64(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// bl 0x823f76b8
	ctx.lr = 0x8386956C;
	sub_823F76B8(ctx, base);
	// lwz r3,60(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// bl 0x83864610
	ctx.lr = 0x83869574;
	sub_83864610(ctx, base);
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// stw r30,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r30.u32);
	// stw r30,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r30.u32);
loc_8386958C:
	// mfmsr r7
	ctx.r7.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r8,0,r29
	ea = ctx.r29.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r8.u64 = __builtin_bswap32(reserved.u32);
	// stwcx. r30,0,r29
	ea = ctx.r29.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r30.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r7,1
	ctx.msr = (ctx.r7.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8386958c
	if (!cr0.eq) goto loc_8386958C;
	// lwsync 
	// lis r6,-31743
	ctx.r6.s64 = -2080309248;
	// lis r5,-31743
	ctx.r5.s64 = -2080309248;
	// addi r10,r31,16
	ctx.r10.s64 = ctx.r31.s64 + 16;
	// lwz r11,14144(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 14144);
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// stw r4,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r4.u32);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r11,14092(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 14092);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,14092(r5)
	PPC_STORE_U32(ctx.r5.u32 + 14092, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_838695E8"))) PPC_WEAK_FUNC(sub_838695E8);
PPC_FUNC_IMPL(__imp__sub_838695E8) {
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
	// bl 0x831cdadc
	ctx.lr = 0x838695F0;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// rlwinm r11,r7,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x2;
	// clrlwi r26,r7,31
	ctx.r26.u64 = ctx.r7.u32 & 0x1;
	// subfic r10,r11,0
	xer.ca = ctx.r11.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r11.s64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// clrlwi r11,r9,29
	ctx.r11.u64 = ctx.r9.u32 & 0x7;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// rlwinm r11,r11,0,31,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// mr r25,r8
	ctx.r25.u64 = ctx.r8.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(ctx.r26.u32, 0, xer);
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// beq cr6,0x83869634
	if (cr6.eq) goto loc_83869634;
	// li r4,4
	ctx.r4.s64 = 4;
loc_83869634:
	// rlwinm r11,r29,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83869644
	if (cr6.eq) goto loc_83869644;
	// ori r4,r4,512
	ctx.r4.u64 = ctx.r4.u64 | 512;
loc_83869644:
	// addic. r30,r31,24
	xer.ca = ctx.r31.u32 > 4294967271;
	ctx.r30.s64 = ctx.r31.s64 + 24;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// beq 0x83869668
	if (cr0.eq) goto loc_83869668;
	// li r10,8
	ctx.r10.s64 = 8;
	// addi r11,r30,-4
	ctx.r11.s64 = ctx.r30.s64 + -4;
	// li r9,0
	ctx.r9.s64 = 0;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_8386965C:
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8386965c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8386965C;
	// b 0x8386966c
	goto loc_8386966C;
loc_83869668:
	// li r30,0
	ctx.r30.s64 = 0;
loc_8386966C:
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x83b0cdd8
	ctx.lr = 0x83869680;
	sub_83B0CDD8(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,4096
	ctx.r4.s64 = 4096;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83863b20
	ctx.lr = 0x83869694;
	sub_83863B20(ctx, base);
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(ctx.r26.u32, 0, xer);
	// beq cr6,0x838696a0
	if (cr6.eq) goto loc_838696A0;
	// bl 0x8386cfd8
	ctx.lr = 0x838696A0;
	sub_8386CFD8(ctx, base);
loc_838696A0:
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83b0d458
	ctx.lr = 0x838696AC;
	sub_83B0D458(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83864770
	ctx.lr = 0x838696B4;
	sub_83864770(ctx, base);
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r5,56(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// bl 0x8386cff8
	ctx.lr = 0x838696C4;
	sub_8386CFF8(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r30,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r30.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r27,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r27.u32);
	// addi r7,r31,68
	ctx.r7.s64 = ctx.r31.s64 + 68;
	// stw r29,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r29.u32);
	// stw r28,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r28.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r27,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r27.u32);
loc_838696E8:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r7
	ea = ctx.r7.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// stwcx. r8,0,r7
	ea = ctx.r7.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r8.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x838696e8
	if (!cr0.eq) goto loc_838696E8;
	// lwsync 
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(ctx.r25.u32, 0, xer);
	// beq cr6,0x83869734
	if (cr6.eq) goto loc_83869734;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,60(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x83863b20
	ctx.lr = 0x83869720;
	sub_83863B20(ctx, base);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// lwz r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x832d2408
	ctx.lr = 0x8386972C;
	sub_832D2408(ctx, base);
	// lwz r3,60(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// bl 0x83864770
	ctx.lr = 0x83869734;
	sub_83864770(ctx, base);
loc_83869734:
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// addi r10,r31,16
	ctx.r10.s64 = ctx.r31.s64 + 16;
	// lwz r11,14128(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 14128);
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// stw r9,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r9.u32);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83869768"))) PPC_WEAK_FUNC(sub_83869768);
PPC_FUNC_IMPL(__imp__sub_83869768) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x83869770;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r27,r11,14096
	ctx.r27.s64 = ctx.r11.s64 + 14096;
	// li r4,4000
	ctx.r4.s64 = 4000;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x83d7562c
	ctx.lr = 0x8386978C;
	__imp__RtlInitializeCriticalSectionAndSpinCount(ctx, base);
	// lis r10,-31743
	ctx.r10.s64 = -2080309248;
	// lis r7,-31743
	ctx.r7.s64 = -2080309248;
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// lis r29,-31743
	ctx.r29.s64 = -2080309248;
	// addi r31,r11,14144
	ctx.r31.s64 = ctx.r11.s64 + 14144;
	// addi r8,r10,14128
	ctx.r8.s64 = ctx.r10.s64 + 14128;
	// addi r9,r7,14084
	ctx.r9.s64 = ctx.r7.s64 + 14084;
	// stw r31,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r31.u32);
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r8,14128(r10)
	PPC_STORE_U32(ctx.r10.u32 + 14128, ctx.r8.u32);
	// stw r31,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r31.u32);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// stw r9,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r9.u32);
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// stw r8,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r8.u32);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stw r30,28(r27)
	PPC_STORE_U32(ctx.r27.u32 + 28, ctx.r30.u32);
	// rlwinm r11,r28,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r9,14084(r7)
	PPC_STORE_U32(ctx.r7.u32 + 14084, ctx.r9.u32);
	// li r4,4
	ctx.r4.s64 = 4;
	// stw r28,14136(r29)
	PPC_STORE_U32(ctx.r29.u32 + 14136, ctx.r28.u32);
	// add r6,r28,r11
	ctx.r6.u64 = ctx.r28.u64 + ctx.r11.u64;
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// rlwinm r3,r6,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x838636d0
	ctx.lr = 0x838697F0;
	sub_838636D0(ctx, base);
	// lis r5,-31743
	ctx.r5.s64 = -2080309248;
	// lwz r9,14136(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 14136);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// stw r3,14140(r5)
	PPC_STORE_U32(ctx.r5.u32 + 14140, ctx.r3.u32);
	// beq cr6,0x83869870
	if (cr6.eq) goto loc_83869870;
loc_8386980C:
	// stw r10,56(r11)
	PPC_STORE_U32(ctx.r11.u32 + 56, ctx.r10.u32);
	// addi r7,r11,68
	ctx.r7.s64 = ctx.r11.s64 + 68;
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
	// stw r30,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r30.u32);
	// stw r30,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r30.u32);
	// stw r30,64(r11)
	PPC_STORE_U32(ctx.r11.u32 + 64, ctx.r30.u32);
loc_83869824:
	// mfmsr r8
	ctx.r8.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r9,0,r7
	ea = ctx.r7.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r9.u64 = __builtin_bswap32(reserved.u32);
	// stwcx. r30,0,r7
	ea = ctx.r7.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r30.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r8,1
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x83869824
	if (!cr0.eq) goto loc_83869824;
	// lwsync 
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r31,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r31.u32);
	// addi r9,r11,16
	ctx.r9.s64 = ctx.r11.s64 + 16;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r8,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r8.u32);
	// addi r11,r11,72
	ctx.r11.s64 = ctx.r11.s64 + 72;
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r9,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r9.u32);
	// lwz r8,14136(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 14136);
	// cmplw cr6,r10,r8
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, xer);
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// blt cr6,0x8386980c
	if (cr6.lt) goto loc_8386980C;
loc_83869870:
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r30,14092(r11)
	PPC_STORE_U32(ctx.r11.u32 + 14092, ctx.r30.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83869884"))) PPC_WEAK_FUNC(sub_83869884);
PPC_FUNC_IMPL(__imp__sub_83869884) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83869888"))) PPC_WEAK_FUNC(sub_83869888);
PPC_FUNC_IMPL(__imp__sub_83869888) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x83869890;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// addi r31,r11,14096
	ctx.r31.s64 = ctx.r11.s64 + 14096;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83d7554c
	ctx.lr = 0x838698A4;
	__imp__RtlEnterCriticalSection(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r7,r31,28
	ctx.r7.s64 = ctx.r31.s64 + 28;
loc_838698AC:
	// mfmsr r8
	ctx.r8.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r7
	ea = ctx.r7.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stwcx. r9,0,r7
	ea = ctx.r7.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r8,1
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x838698ac
	if (!cr0.eq) goto loc_838698AC;
	// lis r28,-31743
	ctx.r28.s64 = -2080309248;
	// lis r29,-31743
	ctx.r29.s64 = -2080309248;
	// li r27,0
	ctx.r27.s64 = 0;
	// lwz r3,14140(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 14140);
	// lwz r11,14136(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 14136);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83869914
	if (cr6.eq) goto loc_83869914;
loc_838698E8:
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83869900
	if (cr6.eq) goto loc_83869900;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83869528
	ctx.lr = 0x838698FC;
	sub_83869528(ctx, base);
	// lwz r11,14136(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 14136);
loc_83869900:
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r30,r30,72
	ctx.r30.s64 = ctx.r30.s64 + 72;
	// cmplw cr6,r27,r11
	cr6.compare<uint32_t>(ctx.r27.u32, ctx.r11.u32, xer);
	// blt cr6,0x838698e8
	if (cr6.lt) goto loc_838698E8;
	// lwz r3,14140(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 14140);
loc_83869914:
	// lis r8,-31743
	ctx.r8.s64 = -2080309248;
	// lis r7,-31743
	ctx.r7.s64 = -2080309248;
	// addi r6,r8,14128
	ctx.r6.s64 = ctx.r8.s64 + 14128;
	// lis r4,-31743
	ctx.r4.s64 = -2080309248;
	// addi r5,r7,14084
	ctx.r5.s64 = ctx.r7.s64 + 14084;
	// stw r6,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, ctx.r6.u32);
	// stw r6,14128(r8)
	PPC_STORE_U32(ctx.r8.u32 + 14128, ctx.r6.u32);
	// addi r8,r4,14144
	ctx.r8.s64 = ctx.r4.s64 + 14144;
	// stw r5,14084(r7)
	PPC_STORE_U32(ctx.r7.u32 + 14084, ctx.r5.u32);
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// stw r5,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r5.u32);
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
	// stw r8,14144(r4)
	PPC_STORE_U32(ctx.r4.u32 + 14144, ctx.r8.u32);
	// mr r9,r5
	ctx.r9.u64 = ctx.r5.u64;
	// stw r8,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r8.u32);
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// bl 0x83863770
	ctx.lr = 0x83869960;
	sub_83863770(ctx, base);
	// lis r7,-31743
	ctx.r7.s64 = -2080309248;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,14140(r28)
	PPC_STORE_U32(ctx.r28.u32 + 14140, ctx.r11.u32);
	// addi r11,r31,28
	ctx.r11.s64 = ctx.r31.s64 + 28;
	// stw r10,14092(r7)
	PPC_STORE_U32(ctx.r7.u32 + 14092, ctx.r10.u32);
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r9,14136(r29)
	PPC_STORE_U32(ctx.r29.u32 + 14136, ctx.r9.u32);
loc_83869984:
	// mfmsr r4
	ctx.r4.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r6,0,r11
	ea = ctx.r11.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r6.u64 = __builtin_bswap32(reserved.u32);
	// add r5,r10,r6
	ctx.r5.u64 = ctx.r10.u64 + ctx.r6.u64;
	// stwcx. r5,0,r11
	ea = ctx.r11.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r5.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r4,1
	ctx.msr = (ctx.r4.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x83869984
	if (!cr0.eq) goto loc_83869984;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83d7553c
	ctx.lr = 0x838699A8;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_838699B0"))) PPC_WEAK_FUNC(sub_838699B0);
PPC_FUNC_IMPL(__imp__sub_838699B0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x838699B8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// addi r29,r11,14096
	ctx.r29.s64 = ctx.r11.s64 + 14096;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83d7554c
	ctx.lr = 0x838699CC;
	__imp__RtlEnterCriticalSection(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r7,r29,28
	ctx.r7.s64 = ctx.r29.s64 + 28;
loc_838699D4:
	// mfmsr r8
	ctx.r8.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r7
	ea = ctx.r7.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stwcx. r9,0,r7
	ea = ctx.r7.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r8,1
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x838699d4
	if (!cr0.eq) goto loc_838699D4;
	// bl 0x83860c48
	ctx.lr = 0x838699F4;
	sub_83860C48(ctx, base);
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// addi r31,r11,14084
	ctx.r31.s64 = ctx.r11.s64 + 14084;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// beq cr6,0x83869a9c
	if (cr6.eq) goto loc_83869A9C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r30,0
	ctx.r30.s64 = 0;
	// subf r10,r31,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r31.s64;
	// subfic r9,r10,0
	xer.ca = ctx.r10.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r10.s64;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 & ctx.r11.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83869a9c
	if (cr6.eq) goto loc_83869A9C;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r7,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r7.u32);
	// stw r30,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r30.u32);
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
loc_83869A48:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// addi r3,r11,-16
	ctx.r3.s64 = ctx.r11.s64 + -16;
	// bne cr6,0x83869a58
	if (!cr6.eq) goto loc_83869A58;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_83869A58:
	// bl 0x83869528
	ctx.lr = 0x83869A5C;
	sub_83869528(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// subf r10,r31,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r31.s64;
	// subfic r9,r10,0
	xer.ca = ctx.r10.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r10.s64;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 & ctx.r11.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83869a9c
	if (cr6.eq) goto loc_83869A9C;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r7,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r7.u32);
	// stw r30,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r30.u32);
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
	// bne cr6,0x83869a48
	if (!cr6.eq) goto loc_83869A48;
loc_83869A9C:
	// bl 0x83860cc8
	ctx.lr = 0x83869AA0;
	sub_83860CC8(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// addi r7,r29,28
	ctx.r7.s64 = ctx.r29.s64 + 28;
loc_83869AA8:
	// mfmsr r8
	ctx.r8.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r7
	ea = ctx.r7.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stwcx. r9,0,r7
	ea = ctx.r7.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r8,1
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x83869aa8
	if (!cr0.eq) goto loc_83869AA8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83d7553c
	ctx.lr = 0x83869ACC;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83869AD4"))) PPC_WEAK_FUNC(sub_83869AD4);
PPC_FUNC_IMPL(__imp__sub_83869AD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83869AD8"))) PPC_WEAK_FUNC(sub_83869AD8);
PPC_FUNC_IMPL(__imp__sub_83869AD8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x83869AE0;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// rlwinm r11,r4,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x2;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// subfic r10,r11,0
	xer.ca = ctx.r11.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r11.s64;
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r30,r11,14096
	ctx.r30.s64 = ctx.r11.s64 + 14096;
	// rlwinm r11,r9,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x2;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// mullw r25,r11,r27
	ctx.r25.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r27.s32);
	// bl 0x83d7554c
	ctx.lr = 0x83869B18;
	__imp__RtlEnterCriticalSection(ctx, base);
	// addi r5,r30,28
	ctx.r5.s64 = ctx.r30.s64 + 28;
	// li r4,1
	ctx.r4.s64 = 1;
loc_83869B20:
	// mfmsr r6
	ctx.r6.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r8,0,r5
	ea = ctx.r5.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r8.u64 = __builtin_bswap32(reserved.u32);
	// add r7,r4,r8
	ctx.r7.u64 = ctx.r4.u64 + ctx.r8.u64;
	// stwcx. r7,0,r5
	ea = ctx.r5.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r7.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r6,1
	ctx.msr = (ctx.r6.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x83869b20
	if (!cr0.eq) goto loc_83869B20;
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r29,r11,14144
	ctx.r29.s64 = ctx.r11.s64 + 14144;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83869448
	ctx.lr = 0x83869B50;
	sub_83869448(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83869c34
	if (cr6.eq) goto loc_83869C34;
	// lis r28,-31743
	ctx.r28.s64 = -2080309248;
	// li r7,1028
	ctx.r7.s64 = 1028;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r11,14092(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 14092);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,14092(r28)
	PPC_STORE_U32(ctx.r28.u32 + 14092, ctx.r11.u32);
	// bl 0x83864558
	ctx.lr = 0x83869B84;
	sub_83864558(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83869c6c
	if (!cr6.eq) goto loc_83869C6C;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r8,r31,68
	ctx.r8.s64 = ctx.r31.s64 + 68;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// stw r11,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
loc_83869BB0:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r8
	ea = ctx.r8.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// stwcx. r11,0,r8
	ea = ctx.r8.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x83869bb0
	if (!cr0.eq) goto loc_83869BB0;
	// lwsync 
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r10,r31,16
	ctx.r10.s64 = ctx.r31.s64 + 16;
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// li r4,-1
	ctx.r4.s64 = -1;
	// addi r9,r30,28
	ctx.r9.s64 = ctx.r30.s64 + 28;
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// stw r8,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r8.u32);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r11,14092(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 14092);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,14092(r28)
	PPC_STORE_U32(ctx.r28.u32 + 14092, ctx.r11.u32);
loc_83869C04:
	// mfmsr r5
	ctx.r5.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r7,0,r9
	ea = ctx.r9.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r7.u64 = __builtin_bswap32(reserved.u32);
	// add r6,r4,r7
	ctx.r6.u64 = ctx.r4.u64 + ctx.r7.u64;
	// stwcx. r6,0,r9
	ea = ctx.r9.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r6.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r5,1
	ctx.msr = (ctx.r5.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x83869c04
	if (!cr0.eq) goto loc_83869C04;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83d7553c
	ctx.lr = 0x83869C28;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_83869C34:
	// li r10,-1
	ctx.r10.s64 = -1;
	// addi r7,r30,28
	ctx.r7.s64 = ctx.r30.s64 + 28;
loc_83869C3C:
	// mfmsr r8
	ctx.r8.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r7
	ea = ctx.r7.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r11.u64 = __builtin_bswap32(reserved.u32);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stwcx. r9,0,r7
	ea = ctx.r7.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r8,1
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x83869c3c
	if (!cr0.eq) goto loc_83869C3C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83d7553c
	ctx.lr = 0x83869C60;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_83869C6C:
	// mr r8,r24
	ctx.r8.u64 = ctx.r24.u64;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x838695e8
	ctx.lr = 0x83869C84;
	sub_838695E8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r9,-1
	ctx.r9.s64 = -1;
	// addi r7,r30,28
	ctx.r7.s64 = ctx.r30.s64 + 28;
loc_83869C90:
	// mfmsr r8
	ctx.r8.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r7
	ea = ctx.r7.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r11.u64 = __builtin_bswap32(reserved.u32);
	// add r10,r9,r11
	ctx.r10.u64 = ctx.r9.u64 + ctx.r11.u64;
	// stwcx. r10,0,r7
	ea = ctx.r7.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r8,1
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x83869c90
	if (!cr0.eq) goto loc_83869C90;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83d7553c
	ctx.lr = 0x83869CB4;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83869CC0"))) PPC_WEAK_FUNC(sub_83869CC0);
PPC_FUNC_IMPL(__imp__sub_83869CC0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83869CC8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r29,r11,14096
	ctx.r29.s64 = ctx.r11.s64 + 14096;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83d7554c
	ctx.lr = 0x83869CE0;
	__imp__RtlEnterCriticalSection(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r7,r29,28
	ctx.r7.s64 = ctx.r29.s64 + 28;
loc_83869CE8:
	// mfmsr r8
	ctx.r8.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r7
	ea = ctx.r7.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stwcx. r9,0,r7
	ea = ctx.r7.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r8,1
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x83869ce8
	if (!cr0.eq) goto loc_83869CE8;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x83869d34
	if (cr6.eq) goto loc_83869D34;
	// clrlwi r10,r30,17
	ctx.r10.u64 = ctx.r30.u32 & 0x7FFF;
	// rlwinm r11,r30,3,14,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 3) & 0x3FFF8;
	// lis r9,-31743
	ctx.r9.s64 = -2080309248;
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r10,r8,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r11,14140(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 14140);
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwzx r7,r10,r11
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplw cr6,r7,r30
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r30.u32, xer);
	// beq cr6,0x83869d6c
	if (cr6.eq) goto loc_83869D6C;
loc_83869D34:
	// li r10,-1
	ctx.r10.s64 = -1;
	// addi r7,r29,28
	ctx.r7.s64 = ctx.r29.s64 + 28;
loc_83869D3C:
	// mfmsr r8
	ctx.r8.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r7
	ea = ctx.r7.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r11.u64 = __builtin_bswap32(reserved.u32);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stwcx. r9,0,r7
	ea = ctx.r7.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r8,1
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x83869d3c
	if (!cr0.eq) goto loc_83869D3C;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83d7553c
	ctx.lr = 0x83869D60;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_83869D6C:
	// addi r3,r31,68
	ctx.r3.s64 = ctx.r31.s64 + 68;
	// bl 0x838638d0
	ctx.lr = 0x83869D74;
	sub_838638D0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83869de8
	if (!cr6.eq) goto loc_83869DE8;
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r30,r31,16
	ctx.r30.s64 = ctx.r31.s64 + 16;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r7,16(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r6,20(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// stw r6,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r6.u32);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r5,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r5.u32);
	// lwz r4,0(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// bl 0x8386d028
	ctx.lr = 0x83869DC0;
	sub_8386D028(ctx, base);
	// lis r4,-31743
	ctx.r4.s64 = -2080309248;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r10,r4,14084
	ctx.r10.s64 = ctx.r4.s64 + 14084;
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
	// stw r30,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r30.u32);
loc_83869DE8:
	// li r10,-1
	ctx.r10.s64 = -1;
	// addi r7,r29,28
	ctx.r7.s64 = ctx.r29.s64 + 28;
loc_83869DF0:
	// mfmsr r8
	ctx.r8.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r7
	ea = ctx.r7.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r11.u64 = __builtin_bswap32(reserved.u32);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stwcx. r9,0,r7
	ea = ctx.r7.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r8,1
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x83869df0
	if (!cr0.eq) goto loc_83869DF0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83d7553c
	ctx.lr = 0x83869E14;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83869E20"))) PPC_WEAK_FUNC(sub_83869E20);
PPC_FUNC_IMPL(__imp__sub_83869E20) {
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
	// beq cr6,0x83869e74
	if (cr6.eq) goto loc_83869E74;
	// clrlwi r10,r3,17
	ctx.r10.u64 = ctx.r3.u32 & 0x7FFF;
	// rlwinm r11,r3,3,14,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0x3FFF8;
	// lis r9,-31743
	ctx.r9.s64 = -2080309248;
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r10,r8,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r11,14140(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 14140);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r7,r3
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r3.u32, xer);
	// bne cr6,0x83869e74
	if (!cr6.eq) goto loc_83869E74;
	// lwz r3,60(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// bl 0x83864770
	ctx.lr = 0x83869E6C;
	sub_83864770(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83869cc0
	ctx.lr = 0x83869E74;
	sub_83869CC0(ctx, base);
loc_83869E74:
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

__attribute__((alias("__imp__sub_83869E88"))) PPC_WEAK_FUNC(sub_83869E88);
PPC_FUNC_IMPL(__imp__sub_83869E88) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83869eb0
	if (cr6.eq) goto loc_83869EB0;
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// clrlwi r10,r3,17
	ctx.r10.u64 = ctx.r3.u32 & 0x7FFF;
	// mulli r10,r10,284
	ctx.r10.s64 = ctx.r10.s64 * 284;
	// lwz r11,14160(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 14160);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r9,r3
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r3.u32, xer);
	// beq cr6,0x83869eb8
	if (cr6.eq) goto loc_83869EB8;
loc_83869EB0:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_83869EB8:
	// lwz r3,272(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 272);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83869EC0"))) PPC_WEAK_FUNC(sub_83869EC0);
PPC_FUNC_IMPL(__imp__sub_83869EC0) {
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
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r30,r11,14172
	ctx.r30.s64 = ctx.r11.s64 + 14172;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83d7554c
	ctx.lr = 0x83869EE8;
	__imp__RtlEnterCriticalSection(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r7,r30,28
	ctx.r7.s64 = ctx.r30.s64 + 28;
loc_83869EF0:
	// mfmsr r8
	ctx.r8.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r7
	ea = ctx.r7.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stwcx. r9,0,r7
	ea = ctx.r7.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r8,1
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x83869ef0
	if (!cr0.eq) goto loc_83869EF0;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x83869f34
	if (cr6.eq) goto loc_83869F34;
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// clrlwi r10,r31,17
	ctx.r10.u64 = ctx.r31.u32 & 0x7FFF;
	// mulli r10,r10,284
	ctx.r10.s64 = ctx.r10.s64 * 284;
	// lwz r11,14160(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 14160);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r9,r31
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r31.u32, xer);
	// beq cr6,0x83869f68
	if (cr6.eq) goto loc_83869F68;
loc_83869F34:
	// li r10,-1
	ctx.r10.s64 = -1;
	// addi r7,r30,28
	ctx.r7.s64 = ctx.r30.s64 + 28;
loc_83869F3C:
	// mfmsr r8
	ctx.r8.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r7
	ea = ctx.r7.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r11.u64 = __builtin_bswap32(reserved.u32);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stwcx. r9,0,r7
	ea = ctx.r7.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r8,1
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x83869f3c
	if (!cr0.eq) goto loc_83869F3C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83d7553c
	ctx.lr = 0x83869F60;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x83869fa4
	goto loc_83869FA4;
loc_83869F68:
	// addi r3,r11,280
	ctx.r3.s64 = ctx.r11.s64 + 280;
	// bl 0x83863818
	ctx.lr = 0x83869F70;
	sub_83863818(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r9,-1
	ctx.r9.s64 = -1;
	// addi r7,r30,28
	ctx.r7.s64 = ctx.r30.s64 + 28;
loc_83869F7C:
	// mfmsr r8
	ctx.r8.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r7
	ea = ctx.r7.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r11.u64 = __builtin_bswap32(reserved.u32);
	// add r10,r9,r11
	ctx.r10.u64 = ctx.r9.u64 + ctx.r11.u64;
	// stwcx. r10,0,r7
	ea = ctx.r7.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r8,1
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x83869f7c
	if (!cr0.eq) goto loc_83869F7C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83d7553c
	ctx.lr = 0x83869FA0;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_83869FA4:
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

__attribute__((alias("__imp__sub_83869FBC"))) PPC_WEAK_FUNC(sub_83869FBC);
PPC_FUNC_IMPL(__imp__sub_83869FBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83869FC0"))) PPC_WEAK_FUNC(sub_83869FC0);
PPC_FUNC_IMPL(__imp__sub_83869FC0) {
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
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r30,r11,14172
	ctx.r30.s64 = ctx.r11.s64 + 14172;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83d7554c
	ctx.lr = 0x83869FE8;
	__imp__RtlEnterCriticalSection(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r7,r30,28
	ctx.r7.s64 = ctx.r30.s64 + 28;
loc_83869FF0:
	// mfmsr r8
	ctx.r8.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r7
	ea = ctx.r7.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stwcx. r9,0,r7
	ea = ctx.r7.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r8,1
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x83869ff0
	if (!cr0.eq) goto loc_83869FF0;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x8386a034
	if (cr6.eq) goto loc_8386A034;
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// clrlwi r10,r31,17
	ctx.r10.u64 = ctx.r31.u32 & 0x7FFF;
	// mulli r10,r10,284
	ctx.r10.s64 = ctx.r10.s64 * 284;
	// lwz r11,14160(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 14160);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r9,r31
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r31.u32, xer);
	// beq cr6,0x8386a068
	if (cr6.eq) goto loc_8386A068;
loc_8386A034:
	// li r10,-1
	ctx.r10.s64 = -1;
	// addi r7,r30,28
	ctx.r7.s64 = ctx.r30.s64 + 28;
loc_8386A03C:
	// mfmsr r8
	ctx.r8.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r7
	ea = ctx.r7.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r11.u64 = __builtin_bswap32(reserved.u32);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stwcx. r9,0,r7
	ea = ctx.r7.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r8,1
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8386a03c
	if (!cr0.eq) goto loc_8386A03C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83d7553c
	ctx.lr = 0x8386A060;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8386a09c
	goto loc_8386A09C;
loc_8386A068:
	// lwz r31,272(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 272);
	// li r11,-1
	ctx.r11.s64 = -1;
	// addi r7,r30,28
	ctx.r7.s64 = ctx.r30.s64 + 28;
loc_8386A074:
	// mfmsr r8
	ctx.r8.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r7
	ea = ctx.r7.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stwcx. r9,0,r7
	ea = ctx.r7.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r8,1
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8386a074
	if (!cr0.eq) goto loc_8386A074;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83d7553c
	ctx.lr = 0x8386A098;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8386A09C:
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

__attribute__((alias("__imp__sub_8386A0B4"))) PPC_WEAK_FUNC(sub_8386A0B4);
PPC_FUNC_IMPL(__imp__sub_8386A0B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8386A0B8"))) PPC_WEAK_FUNC(sub_8386A0B8);
PPC_FUNC_IMPL(__imp__sub_8386A0B8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// addi r9,r11,14152
	ctx.r9.s64 = ctx.r11.s64 + 14152;
	// lwz r11,14152(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 14152);
	// subf r10,r9,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r9.s64;
	// subfic r8,r10,0
	xer.ca = ctx.r10.u32 <= 0;
	ctx.r8.s64 = 0 - ctx.r10.s64;
	// subfe r6,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + xer.ca < xer.ca);
	ctx.r6.u64 = ~ctx.r7.u64 + ctx.r7.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r11,r6,r11
	ctx.r11.u64 = ctx.r6.u64 & ctx.r11.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8386a114
	if (cr6.eq) goto loc_8386A114;
loc_8386A0DC:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// addi r10,r11,-4
	ctx.r10.s64 = ctx.r11.s64 + -4;
	// bne cr6,0x8386a0ec
	if (!cr6.eq) goto loc_8386A0EC;
	// li r10,0
	ctx.r10.s64 = 0;
loc_8386A0EC:
	// lwz r8,276(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 276);
	// cmpw cr6,r8,r3
	cr6.compare<int32_t>(ctx.r8.s32, ctx.r3.s32, xer);
	// beq cr6,0x8386a11c
	if (cr6.eq) goto loc_8386A11C;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// subf r10,r11,r9
	ctx.r10.s64 = ctx.r9.s64 - ctx.r11.s64;
	// subfic r8,r10,0
	xer.ca = ctx.r10.u32 <= 0;
	ctx.r8.s64 = 0 - ctx.r10.s64;
	// subfe r6,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + xer.ca < xer.ca);
	ctx.r6.u64 = ~ctx.r7.u64 + ctx.r7.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r11,r6,r11
	ctx.r11.u64 = ctx.r6.u64 & ctx.r11.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8386a0dc
	if (!cr6.eq) goto loc_8386A0DC;
loc_8386A114:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8386A11C:
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8386A124"))) PPC_WEAK_FUNC(sub_8386A124);
PPC_FUNC_IMPL(__imp__sub_8386A124) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8386A128"))) PPC_WEAK_FUNC(sub_8386A128);
PPC_FUNC_IMPL(__imp__sub_8386A128) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x8386A130;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwsync 
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r29,r3,280
	ctx.r29.s64 = ctx.r3.s64 + 280;
loc_8386A144:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r29
	ea = ctx.r29.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r11.u64 = __builtin_bswap32(reserved.u32);
	// add r10,r30,r11
	ctx.r10.u64 = ctx.r30.u64 + ctx.r11.u64;
	// stwcx. r10,0,r29
	ea = ctx.r29.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8386a144
	if (!cr0.eq) goto loc_8386A144;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// lwz r3,272(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 272);
	// bl 0x823f76b8
	ctx.lr = 0x8386A16C;
	sub_823F76B8(ctx, base);
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// stw r30,276(r31)
	PPC_STORE_U32(ctx.r31.u32 + 276, ctx.r30.u32);
loc_8386A174:
	// mfmsr r7
	ctx.r7.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r8,0,r29
	ea = ctx.r29.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r8.u64 = __builtin_bswap32(reserved.u32);
	// stwcx. r30,0,r29
	ea = ctx.r29.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r30.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r7,1
	ctx.msr = (ctx.r7.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8386a174
	if (!cr0.eq) goto loc_8386A174;
	// lwsync 
	// lis r6,-31743
	ctx.r6.s64 = -2080309248;
	// lis r5,-31743
	ctx.r5.s64 = -2080309248;
	// addi r10,r31,4
	ctx.r10.s64 = ctx.r31.s64 + 4;
	// lwz r11,14208(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 14208);
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r4,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r4.u32);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r11,14204(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 14204);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,14204(r5)
	PPC_STORE_U32(ctx.r5.u32 + 14204, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8386A1D0"))) PPC_WEAK_FUNC(sub_8386A1D0);
PPC_FUNC_IMPL(__imp__sub_8386A1D0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x8386A1D8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r27,r11,14172
	ctx.r27.s64 = ctx.r11.s64 + 14172;
	// li r4,4000
	ctx.r4.s64 = 4000;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x83d7562c
	ctx.lr = 0x8386A1F4;
	__imp__RtlInitializeCriticalSectionAndSpinCount(ctx, base);
	// lis r10,-31743
	ctx.r10.s64 = -2080309248;
	// lis r7,-31743
	ctx.r7.s64 = -2080309248;
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// lis r30,-31743
	ctx.r30.s64 = -2080309248;
	// addi r31,r11,14208
	ctx.r31.s64 = ctx.r11.s64 + 14208;
	// addi r8,r10,14152
	ctx.r8.s64 = ctx.r10.s64 + 14152;
	// addi r9,r7,14164
	ctx.r9.s64 = ctx.r7.s64 + 14164;
	// stw r31,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r31.u32);
	// li r29,0
	ctx.r29.s64 = 0;
	// stw r8,14152(r10)
	PPC_STORE_U32(ctx.r10.u32 + 14152, ctx.r8.u32);
	// stw r31,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r31.u32);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// stw r9,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r9.u32);
	// mulli r3,r28,284
	ctx.r3.s64 = ctx.r28.s64 * 284;
	// stw r8,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r8.u32);
	// stw r29,28(r27)
	PPC_STORE_U32(ctx.r27.u32 + 28, ctx.r29.u32);
	// stw r9,14164(r7)
	PPC_STORE_U32(ctx.r7.u32 + 14164, ctx.r9.u32);
	// stw r28,14216(r30)
	PPC_STORE_U32(ctx.r30.u32 + 14216, ctx.r28.u32);
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// bl 0x838636d0
	ctx.lr = 0x8386A250;
	sub_838636D0(ctx, base);
	// lis r6,-31743
	ctx.r6.s64 = -2080309248;
	// lwz r9,14216(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 14216);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// stw r3,14160(r6)
	PPC_STORE_U32(ctx.r6.u32 + 14160, ctx.r3.u32);
	// beq cr6,0x8386a2d0
	if (cr6.eq) goto loc_8386A2D0;
loc_8386A26C:
	// addi r9,r11,12
	ctx.r9.s64 = ctx.r11.s64 + 12;
	// stw r10,268(r11)
	PPC_STORE_U32(ctx.r11.u32 + 268, ctx.r10.u32);
	// stw r29,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r29.u32);
	// addi r6,r11,280
	ctx.r6.s64 = ctx.r11.s64 + 280;
	// stw r9,272(r11)
	PPC_STORE_U32(ctx.r11.u32 + 272, ctx.r9.u32);
	// stw r29,276(r11)
	PPC_STORE_U32(ctx.r11.u32 + 276, ctx.r29.u32);
loc_8386A284:
	// mfmsr r7
	ctx.r7.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r8,0,r6
	ea = ctx.r6.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r8.u64 = __builtin_bswap32(reserved.u32);
	// stwcx. r29,0,r6
	ea = ctx.r6.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r29.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r7,1
	ctx.msr = (ctx.r7.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8386a284
	if (!cr0.eq) goto loc_8386A284;
	// lwsync 
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r31,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r31.u32);
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r8,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r8.u32);
	// addi r11,r11,284
	ctx.r11.s64 = ctx.r11.s64 + 284;
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r9,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r9.u32);
	// lwz r8,14216(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 14216);
	// cmplw cr6,r10,r8
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, xer);
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// blt cr6,0x8386a26c
	if (cr6.lt) goto loc_8386A26C;
loc_8386A2D0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8386A2DC"))) PPC_WEAK_FUNC(sub_8386A2DC);
PPC_FUNC_IMPL(__imp__sub_8386A2DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8386A2E0"))) PPC_WEAK_FUNC(sub_8386A2E0);
PPC_FUNC_IMPL(__imp__sub_8386A2E0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x8386A2E8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// addi r31,r11,14172
	ctx.r31.s64 = ctx.r11.s64 + 14172;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83d7554c
	ctx.lr = 0x8386A2FC;
	__imp__RtlEnterCriticalSection(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r7,r31,28
	ctx.r7.s64 = ctx.r31.s64 + 28;
loc_8386A304:
	// mfmsr r8
	ctx.r8.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r7
	ea = ctx.r7.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stwcx. r9,0,r7
	ea = ctx.r7.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r8,1
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8386a304
	if (!cr0.eq) goto loc_8386A304;
	// lis r28,-31743
	ctx.r28.s64 = -2080309248;
	// lis r29,-31743
	ctx.r29.s64 = -2080309248;
	// li r27,0
	ctx.r27.s64 = 0;
	// lwz r3,14160(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 14160);
	// lwz r11,14216(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 14216);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8386a36c
	if (cr6.eq) goto loc_8386A36C;
loc_8386A340:
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8386a358
	if (cr6.eq) goto loc_8386A358;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8386a128
	ctx.lr = 0x8386A354;
	sub_8386A128(ctx, base);
	// lwz r11,14216(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 14216);
loc_8386A358:
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r30,r30,284
	ctx.r30.s64 = ctx.r30.s64 + 284;
	// cmplw cr6,r27,r11
	cr6.compare<uint32_t>(ctx.r27.u32, ctx.r11.u32, xer);
	// blt cr6,0x8386a340
	if (cr6.lt) goto loc_8386A340;
	// lwz r3,14160(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 14160);
loc_8386A36C:
	// lis r8,-31743
	ctx.r8.s64 = -2080309248;
	// lis r7,-31743
	ctx.r7.s64 = -2080309248;
	// addi r6,r8,14152
	ctx.r6.s64 = ctx.r8.s64 + 14152;
	// lis r4,-31743
	ctx.r4.s64 = -2080309248;
	// addi r5,r7,14164
	ctx.r5.s64 = ctx.r7.s64 + 14164;
	// stw r6,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, ctx.r6.u32);
	// stw r6,14152(r8)
	PPC_STORE_U32(ctx.r8.u32 + 14152, ctx.r6.u32);
	// addi r8,r4,14208
	ctx.r8.s64 = ctx.r4.s64 + 14208;
	// stw r5,14164(r7)
	PPC_STORE_U32(ctx.r7.u32 + 14164, ctx.r5.u32);
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// stw r5,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r5.u32);
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
	// stw r8,14208(r4)
	PPC_STORE_U32(ctx.r4.u32 + 14208, ctx.r8.u32);
	// mr r9,r5
	ctx.r9.u64 = ctx.r5.u64;
	// stw r8,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r8.u32);
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// bl 0x83863770
	ctx.lr = 0x8386A3B8;
	sub_83863770(ctx, base);
	// lis r7,-31743
	ctx.r7.s64 = -2080309248;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,14160(r28)
	PPC_STORE_U32(ctx.r28.u32 + 14160, ctx.r11.u32);
	// addi r11,r31,28
	ctx.r11.s64 = ctx.r31.s64 + 28;
	// stw r10,14204(r7)
	PPC_STORE_U32(ctx.r7.u32 + 14204, ctx.r10.u32);
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r9,14216(r29)
	PPC_STORE_U32(ctx.r29.u32 + 14216, ctx.r9.u32);
loc_8386A3DC:
	// mfmsr r4
	ctx.r4.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r6,0,r11
	ea = ctx.r11.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r6.u64 = __builtin_bswap32(reserved.u32);
	// add r5,r10,r6
	ctx.r5.u64 = ctx.r10.u64 + ctx.r6.u64;
	// stwcx. r5,0,r11
	ea = ctx.r11.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r5.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r4,1
	ctx.msr = (ctx.r4.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8386a3dc
	if (!cr0.eq) goto loc_8386A3DC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83d7553c
	ctx.lr = 0x8386A400;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8386A408"))) PPC_WEAK_FUNC(sub_8386A408);
PPC_FUNC_IMPL(__imp__sub_8386A408) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x8386A410;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r29,r11,14172
	ctx.r29.s64 = ctx.r11.s64 + 14172;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83d7554c
	ctx.lr = 0x8386A428;
	__imp__RtlEnterCriticalSection(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r7,r29,28
	ctx.r7.s64 = ctx.r29.s64 + 28;
loc_8386A430:
	// mfmsr r8
	ctx.r8.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r7
	ea = ctx.r7.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stwcx. r9,0,r7
	ea = ctx.r7.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r8,1
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8386a430
	if (!cr0.eq) goto loc_8386A430;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x8386a474
	if (cr6.eq) goto loc_8386A474;
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// clrlwi r10,r30,17
	ctx.r10.u64 = ctx.r30.u32 & 0x7FFF;
	// mulli r10,r10,284
	ctx.r10.s64 = ctx.r10.s64 * 284;
	// lwz r11,14160(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 14160);
	// lwzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r9,r30
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r30.u32, xer);
	// beq cr6,0x8386a4ac
	if (cr6.eq) goto loc_8386A4AC;
loc_8386A474:
	// li r10,-1
	ctx.r10.s64 = -1;
	// addi r7,r29,28
	ctx.r7.s64 = ctx.r29.s64 + 28;
loc_8386A47C:
	// mfmsr r8
	ctx.r8.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r7
	ea = ctx.r7.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r11.u64 = __builtin_bswap32(reserved.u32);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stwcx. r9,0,r7
	ea = ctx.r7.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r8,1
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8386a47c
	if (!cr0.eq) goto loc_8386A47C;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83d7553c
	ctx.lr = 0x8386A4A0;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_8386A4AC:
	// addi r3,r31,280
	ctx.r3.s64 = ctx.r31.s64 + 280;
	// bl 0x838638d0
	ctx.lr = 0x8386A4B4;
	sub_838638D0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8386a528
	if (!cr6.eq) goto loc_8386A528;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r30,r31,4
	ctx.r30.s64 = ctx.r31.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r6,8(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r6,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r6.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r5,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r5.u32);
	// lwz r4,0(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// bl 0x8386d028
	ctx.lr = 0x8386A500;
	sub_8386D028(ctx, base);
	// lis r4,-31743
	ctx.r4.s64 = -2080309248;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r10,r4,14164
	ctx.r10.s64 = ctx.r4.s64 + 14164;
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
	// stw r30,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r30.u32);
loc_8386A528:
	// li r10,-1
	ctx.r10.s64 = -1;
	// addi r7,r29,28
	ctx.r7.s64 = ctx.r29.s64 + 28;
loc_8386A530:
	// mfmsr r8
	ctx.r8.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r7
	ea = ctx.r7.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r11.u64 = __builtin_bswap32(reserved.u32);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stwcx. r9,0,r7
	ea = ctx.r7.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r8,1
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8386a530
	if (!cr0.eq) goto loc_8386A530;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83d7553c
	ctx.lr = 0x8386A554;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8386A560"))) PPC_WEAK_FUNC(sub_8386A560);
PPC_FUNC_IMPL(__imp__sub_8386A560) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x8386A568;
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
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, xer);
	// bne cr6,0x8386a5e4
	if (!cr6.eq) goto loc_8386A5E4;
	// addi r29,r4,28
	ctx.r29.s64 = ctx.r4.s64 + 28;
	// li r9,-1
	ctx.r9.s64 = -1;
loc_8386A588:
	// mfmsr r8
	ctx.r8.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r29
	ea = ctx.r29.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r11.u64 = __builtin_bswap32(reserved.u32);
	// add r10,r9,r11
	ctx.r10.u64 = ctx.r9.u64 + ctx.r11.u64;
	// stwcx. r10,0,r29
	ea = ctx.r29.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r8,1
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8386a588
	if (!cr0.eq) goto loc_8386A588;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83d7553c
	ctx.lr = 0x8386A5AC;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// bl 0x83864d00
	ctx.lr = 0x8386A5B0;
	sub_83864D00(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83d7554c
	ctx.lr = 0x8386A5B8;
	__imp__RtlEnterCriticalSection(ctx, base);
	// li r7,1
	ctx.r7.s64 = 1;
loc_8386A5BC:
	// mfmsr r4
	ctx.r4.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r6,0,r29
	ea = ctx.r29.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r6.u64 = __builtin_bswap32(reserved.u32);
	// add r5,r7,r6
	ctx.r5.u64 = ctx.r7.u64 + ctx.r6.u64;
	// stwcx. r5,0,r29
	ea = ctx.r29.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r5.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r4,1
	ctx.msr = (ctx.r4.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8386a5bc
	if (!cr0.eq) goto loc_8386A5BC;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplw cr6,r31,r3
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r3.u32, xer);
	// beq cr6,0x8386a630
	if (cr6.eq) goto loc_8386A630;
loc_8386A5E4:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// subf r10,r31,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r31.s64;
	// subfic r9,r10,0
	xer.ca = ctx.r10.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r10.s64;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 & ctx.r11.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8386a630
	if (cr6.eq) goto loc_8386A630;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r3,r11,-4
	ctx.r3.s64 = ctx.r11.s64 + -4;
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r6,4(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r6,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r6.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_8386A630:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8386A63C"))) PPC_WEAK_FUNC(sub_8386A63C);
PPC_FUNC_IMPL(__imp__sub_8386A63C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8386A640"))) PPC_WEAK_FUNC(sub_8386A640);
PPC_FUNC_IMPL(__imp__sub_8386A640) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x8386A648;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// addi r29,r11,14172
	ctx.r29.s64 = ctx.r11.s64 + 14172;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83d7554c
	ctx.lr = 0x8386A65C;
	__imp__RtlEnterCriticalSection(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r7,r29,28
	ctx.r7.s64 = ctx.r29.s64 + 28;
loc_8386A664:
	// mfmsr r8
	ctx.r8.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r7
	ea = ctx.r7.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stwcx. r9,0,r7
	ea = ctx.r7.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r8,1
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8386a664
	if (!cr0.eq) goto loc_8386A664;
	// bl 0x83860c48
	ctx.lr = 0x8386A684;
	sub_83860C48(ctx, base);
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// addi r31,r11,14164
	ctx.r31.s64 = ctx.r11.s64 + 14164;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// beq cr6,0x8386a72c
	if (cr6.eq) goto loc_8386A72C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r30,0
	ctx.r30.s64 = 0;
	// subf r10,r31,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r31.s64;
	// subfic r9,r10,0
	xer.ca = ctx.r10.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r10.s64;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 & ctx.r11.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8386a72c
	if (cr6.eq) goto loc_8386A72C;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r7,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r7.u32);
	// stw r30,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r30.u32);
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
loc_8386A6D8:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// addi r3,r11,-4
	ctx.r3.s64 = ctx.r11.s64 + -4;
	// bne cr6,0x8386a6e8
	if (!cr6.eq) goto loc_8386A6E8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_8386A6E8:
	// bl 0x8386a128
	ctx.lr = 0x8386A6EC;
	sub_8386A128(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// subf r10,r31,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r31.s64;
	// subfic r9,r10,0
	xer.ca = ctx.r10.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r10.s64;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 & ctx.r11.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8386a72c
	if (cr6.eq) goto loc_8386A72C;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r7,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r7.u32);
	// stw r30,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r30.u32);
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
	// bne cr6,0x8386a6d8
	if (!cr6.eq) goto loc_8386A6D8;
loc_8386A72C:
	// bl 0x83860cc8
	ctx.lr = 0x8386A730;
	sub_83860CC8(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// addi r7,r29,28
	ctx.r7.s64 = ctx.r29.s64 + 28;
loc_8386A738:
	// mfmsr r8
	ctx.r8.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r7
	ea = ctx.r7.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stwcx. r9,0,r7
	ea = ctx.r7.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r8,1
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8386a738
	if (!cr0.eq) goto loc_8386A738;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83d7553c
	ctx.lr = 0x8386A75C;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8386A764"))) PPC_WEAK_FUNC(sub_8386A764);
PPC_FUNC_IMPL(__imp__sub_8386A764) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8386A768"))) PPC_WEAK_FUNC(sub_8386A768);
PPC_FUNC_IMPL(__imp__sub_8386A768) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x8386A770;
	__savegprlr_25(ctx, base);
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// rlwinm r10,r4,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// rlwinm r31,r11,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x831ce980
	ctx.lr = 0x8386A794;
	sub_831CE980(ctx, base);
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// stb r29,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r29.u8);
	// li r9,255
	ctx.r9.s64 = 255;
	// stb r29,89(r1)
	PPC_STORE_U8(ctx.r1.u32 + 89, ctx.r29.u8);
	// add r7,r31,r10
	ctx.r7.u64 = ctx.r31.u64 + ctx.r10.u64;
	// stb r29,90(r1)
	PPC_STORE_U8(ctx.r1.u32 + 90, ctx.r29.u8);
	// li r11,-1
	ctx.r11.s64 = -1;
	// lwz r6,88(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lis r10,-31743
	ctx.r10.s64 = -2080309248;
	// sth r9,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r9.u16);
	// sth r29,82(r1)
	PPC_STORE_U16(ctx.r1.u32 + 82, ctx.r29.u16);
	// addi r30,r10,14172
	ctx.r30.s64 = ctx.r10.s64 + 14172;
	// lwz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r11.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r8,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r8.u32);
	// stw r6,8(r7)
	PPC_STORE_U32(ctx.r7.u32 + 8, ctx.r6.u32);
	// bl 0x83d7554c
	ctx.lr = 0x8386A7E0;
	__imp__RtlEnterCriticalSection(ctx, base);
	// addi r5,r30,28
	ctx.r5.s64 = ctx.r30.s64 + 28;
	// li r25,1
	ctx.r25.s64 = 1;
loc_8386A7E8:
	// mfmsr r11
	ctx.r11.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r4,0,r5
	ea = ctx.r5.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r4.u64 = __builtin_bswap32(reserved.u32);
	// add r3,r25,r4
	ctx.r3.u64 = ctx.r25.u64 + ctx.r4.u64;
	// stwcx. r3,0,r5
	ea = ctx.r5.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r3.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r11,1
	ctx.msr = (ctx.r11.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8386a7e8
	if (!cr0.eq) goto loc_8386A7E8;
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r28,r11,14208
	ctx.r28.s64 = ctx.r11.s64 + 14208;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8386a560
	ctx.lr = 0x8386A818;
	sub_8386A560(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8386a8f8
	if (cr6.eq) goto loc_8386A8F8;
	// lis r27,-31743
	ctx.r27.s64 = -2080309248;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r11,14204(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 14204);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,14204(r27)
	PPC_STORE_U32(ctx.r27.u32 + 14204, ctx.r11.u32);
	// lwz r4,272(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 272);
	// bl 0x823fc650
	ctx.lr = 0x8386A840;
	sub_823FC650(ctx, base);
	// lwz r3,272(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 272);
	// bl 0x823fc7c8
	ctx.lr = 0x8386A848;
	sub_823FC7C8(ctx, base);
	// stw r3,276(r31)
	PPC_STORE_U32(ctx.r31.u32 + 276, ctx.r3.u32);
	// bl 0x8386a0b8
	ctx.lr = 0x8386A850;
	sub_8386A0B8(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8386a930
	if (cr6.eq) goto loc_8386A930;
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
	// addi r9,r31,280
	ctx.r9.s64 = ctx.r31.s64 + 280;
	// stw r29,276(r31)
	PPC_STORE_U32(ctx.r31.u32 + 276, ctx.r29.u32);
loc_8386A868:
	// mfmsr r10
	ctx.r10.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r9
	ea = ctx.r9.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r11.u64 = __builtin_bswap32(reserved.u32);
	// stwcx. r29,0,r9
	ea = ctx.r9.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r29.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r10,1
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8386a868
	if (!cr0.eq) goto loc_8386A868;
	// lwsync 
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r10,r31,4
	ctx.r10.s64 = ctx.r31.s64 + 4;
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// addi r3,r26,280
	ctx.r3.s64 = ctx.r26.s64 + 280;
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r8,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r8.u32);
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r11,14204(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 14204);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,14204(r27)
	PPC_STORE_U32(ctx.r27.u32 + 14204, ctx.r11.u32);
	// bl 0x83863818
	ctx.lr = 0x8386A8BC;
	sub_83863818(ctx, base);
	// li r6,-1
	ctx.r6.s64 = -1;
	// addi r11,r30,28
	ctx.r11.s64 = ctx.r30.s64 + 28;
	// lwz r31,0(r26)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
loc_8386A8C8:
	// mfmsr r3
	ctx.r3.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r5,0,r11
	ea = ctx.r11.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r5.u64 = __builtin_bswap32(reserved.u32);
	// add r4,r6,r5
	ctx.r4.u64 = ctx.r6.u64 + ctx.r5.u64;
	// stwcx. r4,0,r11
	ea = ctx.r11.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r4.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r3,1
	ctx.msr = (ctx.r3.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8386a8c8
	if (!cr0.eq) goto loc_8386A8C8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83d7553c
	ctx.lr = 0x8386A8EC;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_8386A8F8:
	// li r10,-1
	ctx.r10.s64 = -1;
	// addi r7,r30,28
	ctx.r7.s64 = ctx.r30.s64 + 28;
loc_8386A900:
	// mfmsr r8
	ctx.r8.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r7
	ea = ctx.r7.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r11.u64 = __builtin_bswap32(reserved.u32);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stwcx. r9,0,r7
	ea = ctx.r7.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r8,1
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8386a900
	if (!cr0.eq) goto loc_8386A900;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83d7553c
	ctx.lr = 0x8386A924;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_8386A930:
	// lwz r3,272(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 272);
	// bl 0x823fc7c0
	ctx.lr = 0x8386A938;
	sub_823FC7C0(ctx, base);
	// li r4,5
	ctx.r4.s64 = 5;
	// lwz r5,268(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 268);
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x8386cff8
	ctx.lr = 0x8386A948;
	sub_8386CFF8(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r8,r31,280
	ctx.r8.s64 = ctx.r31.s64 + 280;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_8386A954:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r8
	ea = ctx.r8.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// stwcx. r25,0,r8
	ea = ctx.r8.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r25.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8386a954
	if (!cr0.eq) goto loc_8386A954;
	// lwsync 
	// lis r7,-31743
	ctx.r7.s64 = -2080309248;
	// addi r10,r31,4
	ctx.r10.s64 = ctx.r31.s64 + 4;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r8,r30,28
	ctx.r8.s64 = ctx.r30.s64 + 28;
	// lwz r11,14152(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 14152);
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r7,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r7.u32);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r31,0(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
loc_8386A9A4:
	// mfmsr r4
	ctx.r4.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r6,0,r8
	ea = ctx.r8.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r6.u64 = __builtin_bswap32(reserved.u32);
	// add r5,r3,r6
	ctx.r5.u64 = ctx.r3.u64 + ctx.r6.u64;
	// stwcx. r5,0,r8
	ea = ctx.r8.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r5.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r4,1
	ctx.msr = (ctx.r4.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8386a9a4
	if (!cr0.eq) goto loc_8386A9A4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83d7553c
	ctx.lr = 0x8386A9C8;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8386A9D4"))) PPC_WEAK_FUNC(sub_8386A9D4);
PPC_FUNC_IMPL(__imp__sub_8386A9D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8386A9D8"))) PPC_WEAK_FUNC(sub_8386A9D8);
PPC_FUNC_IMPL(__imp__sub_8386A9D8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8386a9e4
	if (!cr6.eq) goto loc_8386A9E4;
	// blr 
	return;
loc_8386A9E4:
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// clrlwi r10,r3,17
	ctx.r10.u64 = ctx.r3.u32 & 0x7FFF;
	// mulli r10,r10,56
	ctx.r10.s64 = ctx.r10.s64 * 56;
	// lwz r11,14224(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 14224);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// subf r8,r9,r3
	ctx.r8.s64 = ctx.r3.s64 - ctx.r9.s64;
	// addic r7,r8,-1
	xer.ca = ctx.r8.u32 > 0;
	ctx.r7.s64 = ctx.r8.s64 + -1;
	// subfe r5,r6,r6
	temp.u8 = (~ctx.r6.u32 + ctx.r6.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r6.u32 + xer.ca < xer.ca);
	ctx.r5.u64 = ~ctx.r6.u64 + ctx.r6.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r3,r5,r11
	ctx.r3.u64 = ctx.r5.u64 & ctx.r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8386AA10"))) PPC_WEAK_FUNC(sub_8386AA10);
PPC_FUNC_IMPL(__imp__sub_8386AA10) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x8386AA18;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x8386aa50
	if (cr6.lt) goto loc_8386AA50;
	// lis r9,-31743
	ctx.r9.s64 = -2080309248;
	// mulli r10,r11,56
	ctx.r10.s64 = ctx.r11.s64 * 56;
	// lwz r11,14224(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 14224);
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r7,12(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// stw r7,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_8386AA50:
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x83863b20
	ctx.lr = 0x8386AA64;
	sub_83863B20(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x823fc1d0
	ctx.lr = 0x8386AA74;
	sub_823FC1D0(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x83863b20
	ctx.lr = 0x8386AA88;
	sub_83863B20(ctx, base);
	// lwz r5,12(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x831ce980
	ctx.lr = 0x8386AA98;
	sub_831CE980(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x823fc210
	ctx.lr = 0x8386AAA4;
	sub_823FC210(ctx, base);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x83864770
	ctx.lr = 0x8386AAAC;
	sub_83864770(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8386AAB4"))) PPC_WEAK_FUNC(sub_8386AAB4);
PPC_FUNC_IMPL(__imp__sub_8386AAB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8386AAB8"))) PPC_WEAK_FUNC(sub_8386AAB8);
PPC_FUNC_IMPL(__imp__sub_8386AAB8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x8386AAC0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x8386aaf8
	if (cr6.lt) goto loc_8386AAF8;
	// lis r9,-31743
	ctx.r9.s64 = -2080309248;
	// mulli r10,r11,56
	ctx.r10.s64 = ctx.r11.s64 * 56;
	// lwz r11,14224(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 14224);
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r7,28(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 28);
	// stw r7,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_8386AAF8:
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x83863b20
	ctx.lr = 0x8386AB0C;
	sub_83863B20(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x823fbe78
	ctx.lr = 0x8386AB1C;
	sub_823FBE78(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x83863b20
	ctx.lr = 0x8386AB30;
	sub_83863B20(ctx, base);
	// lwz r5,12(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x831ce980
	ctx.lr = 0x8386AB40;
	sub_831CE980(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x823fbeb0
	ctx.lr = 0x8386AB4C;
	sub_823FBEB0(ctx, base);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x83864770
	ctx.lr = 0x8386AB54;
	sub_83864770(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8386AB5C"))) PPC_WEAK_FUNC(sub_8386AB5C);
PPC_FUNC_IMPL(__imp__sub_8386AB5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8386AB60"))) PPC_WEAK_FUNC(sub_8386AB60);
PPC_FUNC_IMPL(__imp__sub_8386AB60) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8386ab88
	if (cr6.eq) goto loc_8386AB88;
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// clrlwi r10,r3,17
	ctx.r10.u64 = ctx.r3.u32 & 0x7FFF;
	// mulli r10,r10,56
	ctx.r10.s64 = ctx.r10.s64 * 56;
	// lwz r11,14224(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 14224);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r9,r3
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r3.u32, xer);
	// beq cr6,0x8386ab9c
	if (cr6.eq) goto loc_8386AB9C;
loc_8386AB88:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// stw r11,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r11.u32);
	// stw r11,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r11.u32);
	// blr 
	return;
loc_8386AB9C:
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// lwz r9,28(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// stw r9,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r9.u32);
	// lwz r8,48(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// stw r8,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8386ABB8"))) PPC_WEAK_FUNC(sub_8386ABB8);
PPC_FUNC_IMPL(__imp__sub_8386ABB8) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r3,r3,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8386ABC0"))) PPC_WEAK_FUNC(sub_8386ABC0);
PPC_FUNC_IMPL(__imp__sub_8386ABC0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x8386ABC8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r31,r11,14240
	ctx.r31.s64 = ctx.r11.s64 + 14240;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// bl 0x83d7554c
	ctx.lr = 0x8386ABE8;
	__imp__RtlEnterCriticalSection(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r7,r31,28
	ctx.r7.s64 = ctx.r31.s64 + 28;
loc_8386ABF0:
	// mfmsr r8
	ctx.r8.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r7
	ea = ctx.r7.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stwcx. r9,0,r7
	ea = ctx.r7.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r8,1
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8386abf0
	if (!cr0.eq) goto loc_8386ABF0;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x8386ac34
	if (cr6.eq) goto loc_8386AC34;
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// clrlwi r10,r29,17
	ctx.r10.u64 = ctx.r29.u32 & 0x7FFF;
	// mulli r10,r10,56
	ctx.r10.s64 = ctx.r10.s64 * 56;
	// lwz r11,14224(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 14224);
	// lwzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// add r30,r10,r11
	ctx.r30.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r9,r29
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r29.u32, xer);
	// beq cr6,0x8386ac68
	if (cr6.eq) goto loc_8386AC68;
loc_8386AC34:
	// li r10,-1
	ctx.r10.s64 = -1;
	// addi r7,r31,28
	ctx.r7.s64 = ctx.r31.s64 + 28;
loc_8386AC3C:
	// mfmsr r8
	ctx.r8.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r7
	ea = ctx.r7.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r11.u64 = __builtin_bswap32(reserved.u32);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stwcx. r9,0,r7
	ea = ctx.r7.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r8,1
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8386ac3c
	if (!cr0.eq) goto loc_8386AC3C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83d7553c
	ctx.lr = 0x8386AC60;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_8386AC68:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83869ec0
	ctx.lr = 0x8386AC70;
	sub_83869EC0(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83869fc0
	ctx.lr = 0x8386AC78;
	sub_83869FC0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8386acc0
	if (!cr6.eq) goto loc_8386ACC0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8386a408
	ctx.lr = 0x8386AC8C;
	sub_8386A408(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// addi r7,r31,28
	ctx.r7.s64 = ctx.r31.s64 + 28;
loc_8386AC94:
	// mfmsr r8
	ctx.r8.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r7
	ea = ctx.r7.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stwcx. r9,0,r7
	ea = ctx.r7.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r8,1
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8386ac94
	if (!cr0.eq) goto loc_8386AC94;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83d7553c
	ctx.lr = 0x8386ACB8;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_8386ACC0:
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// lwz r7,28(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// bl 0x82407cc0
	ctx.lr = 0x8386ACD4;
	sub_82407CC0(ctx, base);
	// stw r28,48(r30)
	PPC_STORE_U32(ctx.r30.u32 + 48, ctx.r28.u32);
	// li r9,-1
	ctx.r9.s64 = -1;
	// addi r7,r31,28
	ctx.r7.s64 = ctx.r31.s64 + 28;
loc_8386ACE0:
	// mfmsr r8
	ctx.r8.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r7
	ea = ctx.r7.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r11.u64 = __builtin_bswap32(reserved.u32);
	// add r10,r9,r11
	ctx.r10.u64 = ctx.r9.u64 + ctx.r11.u64;
	// stwcx. r10,0,r7
	ea = ctx.r7.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r8,1
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8386ace0
	if (!cr0.eq) goto loc_8386ACE0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83d7553c
	ctx.lr = 0x8386AD04;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8386AD0C"))) PPC_WEAK_FUNC(sub_8386AD0C);
PPC_FUNC_IMPL(__imp__sub_8386AD0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8386AD10"))) PPC_WEAK_FUNC(sub_8386AD10);
PPC_FUNC_IMPL(__imp__sub_8386AD10) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x8386AD18;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwsync 
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r29,r3,52
	ctx.r29.s64 = ctx.r3.s64 + 52;
loc_8386AD2C:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r29
	ea = ctx.r29.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r11.u64 = __builtin_bswap32(reserved.u32);
	// add r10,r30,r11
	ctx.r10.u64 = ctx.r30.u64 + ctx.r11.u64;
	// stwcx. r10,0,r29
	ea = ctx.r29.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8386ad2c
	if (!cr0.eq) goto loc_8386AD2C;
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8386ad5c
	if (cr6.eq) goto loc_8386AD5C;
	// bl 0x8386a408
	ctx.lr = 0x8386AD5C;
	sub_8386A408(ctx, base);
loc_8386AD5C:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8386ad70
	if (cr6.eq) goto loc_8386AD70;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x83864770
	ctx.lr = 0x8386AD70;
	sub_83864770(ctx, base);
loc_8386AD70:
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8386ad80
	if (cr6.eq) goto loc_8386AD80;
	// bl 0x83864610
	ctx.lr = 0x8386AD80;
	sub_83864610(ctx, base);
loc_8386AD80:
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8386ad90
	if (cr6.eq) goto loc_8386AD90;
	// bl 0x83864610
	ctx.lr = 0x8386AD90;
	sub_83864610(ctx, base);
loc_8386AD90:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8386ada4
	if (cr6.eq) goto loc_8386ADA4;
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// bl 0x83864770
	ctx.lr = 0x8386ADA4;
	sub_83864770(ctx, base);
loc_8386ADA4:
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8386adb4
	if (cr6.eq) goto loc_8386ADB4;
	// bl 0x83864610
	ctx.lr = 0x8386ADB4;
	sub_83864610(ctx, base);
loc_8386ADB4:
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8386adc4
	if (cr6.eq) goto loc_8386ADC4;
	// bl 0x83864610
	ctx.lr = 0x8386ADC4;
	sub_83864610(ctx, base);
loc_8386ADC4:
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// stw r30,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r30.u32);
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// stw r30,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r30.u32);
	// stw r30,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r30.u32);
loc_8386ADE4:
	// mfmsr r10
	ctx.r10.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r29
	ea = ctx.r29.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r11.u64 = __builtin_bswap32(reserved.u32);
	// stwcx. r30,0,r29
	ea = ctx.r29.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r30.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r10,1
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8386ade4
	if (!cr0.eq) goto loc_8386ADE4;
	// lwsync 
	// lis r9,-31743
	ctx.r9.s64 = -2080309248;
	// lis r8,-31743
	ctx.r8.s64 = -2080309248;
	// addi r10,r31,4
	ctx.r10.s64 = ctx.r31.s64 + 4;
	// lwz r11,14280(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 14280);
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r7,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r7.u32);
	// lwz r6,4(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r11,14220(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 14220);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,14220(r8)
	PPC_STORE_U32(ctx.r8.u32 + 14220, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8386AE40"))) PPC_WEAK_FUNC(sub_8386AE40);
PPC_FUNC_IMPL(__imp__sub_8386AE40) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x8386AE48;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8386ae64
	if (!cr6.eq) goto loc_8386AE64;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_8386AE64:
	// addi r3,r31,52
	ctx.r3.s64 = ctx.r31.s64 + 52;
	// bl 0x838638d0
	ctx.lr = 0x8386AE6C;
	sub_838638D0(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8386af28
	if (!cr6.eq) goto loc_8386AF28;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r30,r31,4
	ctx.r30.s64 = ctx.r31.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r6,8(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r6,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r6.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r5,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r5.u32);
	// lwz r4,0(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// bl 0x8386d028
	ctx.lr = 0x8386AEB8;
	sub_8386D028(ctx, base);
	// lis r4,-31743
	ctx.r4.s64 = -2080309248;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r28,-1
	ctx.r28.s64 = -1;
	// addi r10,r4,14228
	ctx.r10.s64 = ctx.r4.s64 + 14228;
	// lis r29,-31743
	ctx.r29.s64 = -2080309248;
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
	// stw r30,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r30.u32);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x8386af08
	if (cr6.lt) goto loc_8386AF08;
	// stw r28,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r28.u32);
	// mulli r10,r11,56
	ctx.r10.s64 = ctx.r11.s64 * 56;
	// lwz r11,14224(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 14224);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x8386ae40
	ctx.lr = 0x8386AF08;
	sub_8386AE40(ctx, base);
loc_8386AF08:
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x8386af28
	if (cr6.lt) goto loc_8386AF28;
	// stw r28,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r28.u32);
	// mulli r10,r11,56
	ctx.r10.s64 = ctx.r11.s64 * 56;
	// lwz r11,14224(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 14224);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x8386ae40
	ctx.lr = 0x8386AF28;
	sub_8386AE40(ctx, base);
loc_8386AF28:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8386AF34"))) PPC_WEAK_FUNC(sub_8386AF34);
PPC_FUNC_IMPL(__imp__sub_8386AF34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8386AF38"))) PPC_WEAK_FUNC(sub_8386AF38);
PPC_FUNC_IMPL(__imp__sub_8386AF38) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x8386AF40;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r27,r11,14240
	ctx.r27.s64 = ctx.r11.s64 + 14240;
	// li r4,4000
	ctx.r4.s64 = 4000;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x83d7562c
	ctx.lr = 0x8386AF5C;
	__imp__RtlInitializeCriticalSectionAndSpinCount(ctx, base);
	// lis r10,-31743
	ctx.r10.s64 = -2080309248;
	// lis r7,-31743
	ctx.r7.s64 = -2080309248;
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// lis r29,-31743
	ctx.r29.s64 = -2080309248;
	// addi r30,r11,14280
	ctx.r30.s64 = ctx.r11.s64 + 14280;
	// addi r8,r10,14272
	ctx.r8.s64 = ctx.r10.s64 + 14272;
	// addi r9,r7,14228
	ctx.r9.s64 = ctx.r7.s64 + 14228;
	// stw r30,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r30.u32);
	// li r31,0
	ctx.r31.s64 = 0;
	// stw r8,14272(r10)
	PPC_STORE_U32(ctx.r10.u32 + 14272, ctx.r8.u32);
	// stw r30,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r30.u32);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// stw r9,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r9.u32);
	// mulli r3,r28,56
	ctx.r3.s64 = ctx.r28.s64 * 56;
	// stw r8,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r8.u32);
	// stw r31,28(r27)
	PPC_STORE_U32(ctx.r27.u32 + 28, ctx.r31.u32);
	// stw r9,14228(r7)
	PPC_STORE_U32(ctx.r7.u32 + 14228, ctx.r9.u32);
	// stw r28,14236(r29)
	PPC_STORE_U32(ctx.r29.u32 + 14236, ctx.r28.u32);
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// bl 0x838636d0
	ctx.lr = 0x8386AFB8;
	sub_838636D0(ctx, base);
	// lis r6,-31743
	ctx.r6.s64 = -2080309248;
	// lwz r9,14236(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 14236);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// stw r3,14224(r6)
	PPC_STORE_U32(ctx.r6.u32 + 14224, ctx.r3.u32);
	// beq cr6,0x8386b054
	if (cr6.eq) goto loc_8386B054;
	// li r7,-1
	ctx.r7.s64 = -1;
loc_8386AFD8:
	// stw r10,44(r11)
	PPC_STORE_U32(ctx.r11.u32 + 44, ctx.r10.u32);
	// addi r6,r11,52
	ctx.r6.s64 = ctx.r11.s64 + 52;
	// stw r31,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
	// stw r31,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r31.u32);
	// stw r31,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r31.u32);
	// stw r31,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r31.u32);
	// stw r7,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r7.u32);
	// stw r31,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r31.u32);
	// stw r31,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r31.u32);
	// stw r31,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r31.u32);
	// stw r7,40(r11)
	PPC_STORE_U32(ctx.r11.u32 + 40, ctx.r7.u32);
	// stw r31,48(r11)
	PPC_STORE_U32(ctx.r11.u32 + 48, ctx.r31.u32);
loc_8386B008:
	// mfmsr r8
	ctx.r8.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r9,0,r6
	ea = ctx.r6.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r9.u64 = __builtin_bswap32(reserved.u32);
	// stwcx. r31,0,r6
	ea = ctx.r6.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r31.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r8,1
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8386b008
	if (!cr0.eq) goto loc_8386B008;
	// lwsync 
	// lwz r8,4(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r30,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r30.u32);
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r8,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r8.u32);
	// addi r11,r11,56
	ctx.r11.s64 = ctx.r11.s64 + 56;
	// lwz r8,4(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r9,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r9.u32);
	// lwz r8,14236(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 14236);
	// cmplw cr6,r10,r8
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, xer);
	// stw r9,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r9.u32);
	// blt cr6,0x8386afd8
	if (cr6.lt) goto loc_8386AFD8;
loc_8386B054:
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r31,14220(r11)
	PPC_STORE_U32(ctx.r11.u32 + 14220, ctx.r31.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8386B068"))) PPC_WEAK_FUNC(sub_8386B068);
PPC_FUNC_IMPL(__imp__sub_8386B068) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x8386B070;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// addi r31,r11,14240
	ctx.r31.s64 = ctx.r11.s64 + 14240;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83d7554c
	ctx.lr = 0x8386B084;
	__imp__RtlEnterCriticalSection(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r7,r31,28
	ctx.r7.s64 = ctx.r31.s64 + 28;
loc_8386B08C:
	// mfmsr r8
	ctx.r8.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r7
	ea = ctx.r7.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stwcx. r9,0,r7
	ea = ctx.r7.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r8,1
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8386b08c
	if (!cr0.eq) goto loc_8386B08C;
	// lis r28,-31743
	ctx.r28.s64 = -2080309248;
	// lis r29,-31743
	ctx.r29.s64 = -2080309248;
	// li r27,0
	ctx.r27.s64 = 0;
	// lwz r3,14224(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 14224);
	// lwz r11,14236(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 14236);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8386b0f4
	if (cr6.eq) goto loc_8386B0F4;
loc_8386B0C8:
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8386b0e0
	if (cr6.eq) goto loc_8386B0E0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8386ad10
	ctx.lr = 0x8386B0DC;
	sub_8386AD10(ctx, base);
	// lwz r11,14236(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 14236);
loc_8386B0E0:
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r30,r30,56
	ctx.r30.s64 = ctx.r30.s64 + 56;
	// cmplw cr6,r27,r11
	cr6.compare<uint32_t>(ctx.r27.u32, ctx.r11.u32, xer);
	// blt cr6,0x8386b0c8
	if (cr6.lt) goto loc_8386B0C8;
	// lwz r3,14224(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 14224);
loc_8386B0F4:
	// lis r8,-31743
	ctx.r8.s64 = -2080309248;
	// lis r7,-31743
	ctx.r7.s64 = -2080309248;
	// addi r6,r8,14272
	ctx.r6.s64 = ctx.r8.s64 + 14272;
	// lis r4,-31743
	ctx.r4.s64 = -2080309248;
	// addi r5,r7,14228
	ctx.r5.s64 = ctx.r7.s64 + 14228;
	// stw r6,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, ctx.r6.u32);
	// stw r6,14272(r8)
	PPC_STORE_U32(ctx.r8.u32 + 14272, ctx.r6.u32);
	// addi r8,r4,14280
	ctx.r8.s64 = ctx.r4.s64 + 14280;
	// stw r5,14228(r7)
	PPC_STORE_U32(ctx.r7.u32 + 14228, ctx.r5.u32);
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// stw r5,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r5.u32);
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
	// stw r8,14280(r4)
	PPC_STORE_U32(ctx.r4.u32 + 14280, ctx.r8.u32);
	// mr r9,r5
	ctx.r9.u64 = ctx.r5.u64;
	// stw r8,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r8.u32);
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// bl 0x83863770
	ctx.lr = 0x8386B140;
	sub_83863770(ctx, base);
	// lis r7,-31743
	ctx.r7.s64 = -2080309248;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,14224(r28)
	PPC_STORE_U32(ctx.r28.u32 + 14224, ctx.r11.u32);
	// addi r11,r31,28
	ctx.r11.s64 = ctx.r31.s64 + 28;
	// stw r10,14220(r7)
	PPC_STORE_U32(ctx.r7.u32 + 14220, ctx.r10.u32);
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r9,14236(r29)
	PPC_STORE_U32(ctx.r29.u32 + 14236, ctx.r9.u32);
loc_8386B164:
	// mfmsr r4
	ctx.r4.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r6,0,r11
	ea = ctx.r11.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r6.u64 = __builtin_bswap32(reserved.u32);
	// add r5,r10,r6
	ctx.r5.u64 = ctx.r10.u64 + ctx.r6.u64;
	// stwcx. r5,0,r11
	ea = ctx.r11.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r5.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r4,1
	ctx.msr = (ctx.r4.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8386b164
	if (!cr0.eq) goto loc_8386B164;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83d7553c
	ctx.lr = 0x8386B188;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8386B190"))) PPC_WEAK_FUNC(sub_8386B190);
PPC_FUNC_IMPL(__imp__sub_8386B190) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x8386B198;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// addi r29,r11,14240
	ctx.r29.s64 = ctx.r11.s64 + 14240;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83d7554c
	ctx.lr = 0x8386B1AC;
	__imp__RtlEnterCriticalSection(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r7,r29,28
	ctx.r7.s64 = ctx.r29.s64 + 28;
loc_8386B1B4:
	// mfmsr r8
	ctx.r8.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r7
	ea = ctx.r7.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stwcx. r9,0,r7
	ea = ctx.r7.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r8,1
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8386b1b4
	if (!cr0.eq) goto loc_8386B1B4;
	// bl 0x83860c48
	ctx.lr = 0x8386B1D4;
	sub_83860C48(ctx, base);
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// addi r31,r11,14228
	ctx.r31.s64 = ctx.r11.s64 + 14228;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// beq cr6,0x8386b27c
	if (cr6.eq) goto loc_8386B27C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r30,0
	ctx.r30.s64 = 0;
	// subf r10,r31,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r31.s64;
	// subfic r9,r10,0
	xer.ca = ctx.r10.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r10.s64;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 & ctx.r11.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8386b27c
	if (cr6.eq) goto loc_8386B27C;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r7,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r7.u32);
	// stw r30,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r30.u32);
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
loc_8386B228:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// addi r3,r11,-4
	ctx.r3.s64 = ctx.r11.s64 + -4;
	// bne cr6,0x8386b238
	if (!cr6.eq) goto loc_8386B238;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_8386B238:
	// bl 0x8386ad10
	ctx.lr = 0x8386B23C;
	sub_8386AD10(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// subf r10,r31,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r31.s64;
	// subfic r9,r10,0
	xer.ca = ctx.r10.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r10.s64;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 & ctx.r11.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8386b27c
	if (cr6.eq) goto loc_8386B27C;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r7,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r7.u32);
	// stw r30,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r30.u32);
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
	// bne cr6,0x8386b228
	if (!cr6.eq) goto loc_8386B228;
loc_8386B27C:
	// bl 0x83860cc8
	ctx.lr = 0x8386B280;
	sub_83860CC8(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// addi r7,r29,28
	ctx.r7.s64 = ctx.r29.s64 + 28;
loc_8386B288:
	// mfmsr r8
	ctx.r8.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r7
	ea = ctx.r7.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stwcx. r9,0,r7
	ea = ctx.r7.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r8,1
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8386b288
	if (!cr0.eq) goto loc_8386B288;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83d7553c
	ctx.lr = 0x8386B2AC;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8386B2B4"))) PPC_WEAK_FUNC(sub_8386B2B4);
PPC_FUNC_IMPL(__imp__sub_8386B2B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8386B2B8"))) PPC_WEAK_FUNC(sub_8386B2B8);
PPC_FUNC_IMPL(__imp__sub_8386B2B8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x8386B2C0;
	__savegprlr_28(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8386b444
	if (cr6.eq) goto loc_8386B444;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// bl 0x823fbe28
	ctx.lr = 0x8386B2D8;
	sub_823FBE28(ctx, base);
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// std r30,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r30.u64);
	// std r30,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r30.u64);
	// beq cr6,0x8386b2fc
	if (cr6.eq) goto loc_8386B2FC;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x823fbe28
	ctx.lr = 0x8386B2FC;
	sub_823FBE28(ctx, base);
loc_8386B2FC:
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r31,r11,14240
	ctx.r31.s64 = ctx.r11.s64 + 14240;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x838639b0
	ctx.lr = 0x8386B310;
	sub_838639B0(ctx, base);
	// lis r10,-31743
	ctx.r10.s64 = -2080309248;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r10,14280
	ctx.r3.s64 = ctx.r10.s64 + 14280;
	// bl 0x8386a560
	ctx.lr = 0x8386B320;
	sub_8386A560(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8386b418
	if (cr6.eq) goto loc_8386B418;
	// lis r10,-31743
	ctx.r10.s64 = -2080309248;
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,4
	ctx.r4.s64 = 4;
	// lwz r11,14220(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 14220);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,14220(r10)
	PPC_STORE_U32(ctx.r10.u32 + 14220, ctx.r11.u32);
	// bl 0x838644e8
	ctx.lr = 0x8386B34C;
	sub_838644E8(ctx, base);
	// stw r3,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8386b3cc
	if (cr6.eq) goto loc_8386B3CC;
	// li r29,-1
	ctx.r29.s64 = -1;
	// lwz r3,124(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// li r7,1028
	ctx.r7.s64 = 1028;
	// li r6,32
	ctx.r6.s64 = 32;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x83864558
	ctx.lr = 0x8386B374;
	sub_83864558(ctx, base);
	// stw r3,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8386b3cc
	if (cr6.eq) goto loc_8386B3CC;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// beq cr6,0x8386b3c8
	if (cr6.eq) goto loc_8386B3C8;
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x838644e8
	ctx.lr = 0x8386B398;
	sub_838644E8(ctx, base);
	// stw r3,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8386b3cc
	if (cr6.eq) goto loc_8386B3CC;
	// li r7,1028
	ctx.r7.s64 = 1028;
	// lwz r3,108(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// li r6,32
	ctx.r6.s64 = 32;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x83864558
	ctx.lr = 0x8386B3BC;
	sub_83864558(ctx, base);
	// stw r3,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8386b3cc
	if (cr6.eq) goto loc_8386B3CC;
loc_8386B3C8:
	// li r30,1
	ctx.r30.s64 = 1;
loc_8386B3CC:
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8386b450
	if (!cr6.eq) goto loc_8386B450;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8386ad10
	ctx.lr = 0x8386B3E0;
	sub_8386AD10(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r9,-1
	ctx.r9.s64 = -1;
	// addi r7,r3,28
	ctx.r7.s64 = ctx.r3.s64 + 28;
loc_8386B3EC:
	// mfmsr r8
	ctx.r8.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r7
	ea = ctx.r7.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r11.u64 = __builtin_bswap32(reserved.u32);
	// add r10,r9,r11
	ctx.r10.u64 = ctx.r9.u64 + ctx.r11.u64;
	// stwcx. r10,0,r7
	ea = ctx.r7.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r8,1
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8386b3ec
	if (!cr0.eq) goto loc_8386B3EC;
	// bl 0x83d7553c
	ctx.lr = 0x8386B40C;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_8386B418:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r9,-1
	ctx.r9.s64 = -1;
	// addi r7,r3,28
	ctx.r7.s64 = ctx.r3.s64 + 28;
loc_8386B424:
	// mfmsr r8
	ctx.r8.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r7
	ea = ctx.r7.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r11.u64 = __builtin_bswap32(reserved.u32);
	// add r10,r9,r11
	ctx.r10.u64 = ctx.r9.u64 + ctx.r11.u64;
	// stwcx. r10,0,r7
	ea = ctx.r7.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r8,1
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8386b424
	if (!cr0.eq) goto loc_8386B424;
	// bl 0x83d7553c
	ctx.lr = 0x8386B444;
	__imp__RtlLeaveCriticalSection(ctx, base);
loc_8386B444:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_8386B450:
	// li r4,6
	ctx.r4.s64 = 6;
	// lwz r5,44(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x8386cff8
	ctx.lr = 0x8386B460;
	sub_8386CFF8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x8386aa10
	ctx.lr = 0x8386B478;
	sub_8386AA10(ctx, base);
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// beq cr6,0x8386b48c
	if (cr6.eq) goto loc_8386B48C;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r31,28
	ctx.r3.s64 = ctx.r31.s64 + 28;
	// bl 0x8386aab8
	ctx.lr = 0x8386B48C;
	sub_8386AAB8(ctx, base);
loc_8386B48C:
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r8,r31,52
	ctx.r8.s64 = ctx.r31.s64 + 52;
loc_8386B494:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r8
	ea = ctx.r8.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// stwcx. r11,0,r8
	ea = ctx.r8.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8386b494
	if (!cr0.eq) goto loc_8386B494;
	// lwsync 
	// lis r7,-31743
	ctx.r7.s64 = -2080309248;
	// addi r10,r31,4
	ctx.r10.s64 = ctx.r31.s64 + 4;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r30,-1
	ctx.r30.s64 = -1;
	// addi r8,r3,28
	ctx.r8.s64 = ctx.r3.s64 + 28;
	// lwz r11,14272(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 14272);
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r7,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r7.u32);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r31,0(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
loc_8386B4E8:
	// mfmsr r4
	ctx.r4.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r6,0,r8
	ea = ctx.r8.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r6.u64 = __builtin_bswap32(reserved.u32);
	// add r5,r30,r6
	ctx.r5.u64 = ctx.r30.u64 + ctx.r6.u64;
	// stwcx. r5,0,r8
	ea = ctx.r8.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r5.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r4,1
	ctx.msr = (ctx.r4.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8386b4e8
	if (!cr0.eq) goto loc_8386B4E8;
	// bl 0x83d7553c
	ctx.lr = 0x8386B508;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8386B514"))) PPC_WEAK_FUNC(sub_8386B514);
PPC_FUNC_IMPL(__imp__sub_8386B514) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8386B518"))) PPC_WEAK_FUNC(sub_8386B518);
PPC_FUNC_IMPL(__imp__sub_8386B518) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x8386B520;
	__savegprlr_27(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8386b69c
	if (cr6.eq) goto loc_8386B69C;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// std r30,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r30.u64);
	// std r30,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r30.u64);
	// beq cr6,0x8386b554
	if (cr6.eq) goto loc_8386B554;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x823fbe28
	ctx.lr = 0x8386B554;
	sub_823FBE28(ctx, base);
loc_8386B554:
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r31,r11,14240
	ctx.r31.s64 = ctx.r11.s64 + 14240;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x838639b0
	ctx.lr = 0x8386B568;
	sub_838639B0(ctx, base);
	// lis r10,-31743
	ctx.r10.s64 = -2080309248;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r10,14280
	ctx.r3.s64 = ctx.r10.s64 + 14280;
	// bl 0x8386a560
	ctx.lr = 0x8386B578;
	sub_8386A560(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8386b670
	if (cr6.eq) goto loc_8386B670;
	// lis r10,-31743
	ctx.r10.s64 = -2080309248;
	// li r29,-1
	ctx.r29.s64 = -1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r11,14220(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 14220);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,14220(r10)
	PPC_STORE_U32(ctx.r10.u32 + 14220, ctx.r11.u32);
	// stw r29,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r29.u32);
	// stw r29,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r29.u32);
	// bl 0x8386a9d8
	ctx.lr = 0x8386B5A8;
	sub_8386A9D8(ctx, base);
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8386b628
	if (cr6.eq) goto loc_8386B628;
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8386b628
	if (cr6.eq) goto loc_8386B628;
	// lwz r11,44(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// addi r3,r3,52
	ctx.r3.s64 = ctx.r3.s64 + 52;
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// stw r30,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r30.u32);
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// bl 0x83863818
	ctx.lr = 0x8386B5DC;
	sub_83863818(ctx, base);
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, xer);
	// beq cr6,0x8386b624
	if (cr6.eq) goto loc_8386B624;
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x838644e8
	ctx.lr = 0x8386B5F4;
	sub_838644E8(ctx, base);
	// stw r3,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8386b628
	if (cr6.eq) goto loc_8386B628;
	// li r7,1028
	ctx.r7.s64 = 1028;
	// lwz r3,108(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x83864558
	ctx.lr = 0x8386B618;
	sub_83864558(ctx, base);
	// stw r3,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8386b628
	if (cr6.eq) goto loc_8386B628;
loc_8386B624:
	// li r30,1
	ctx.r30.s64 = 1;
loc_8386B628:
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8386b6a8
	if (!cr6.eq) goto loc_8386B6A8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8386ad10
	ctx.lr = 0x8386B63C;
	sub_8386AD10(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r8,r3,28
	ctx.r8.s64 = ctx.r3.s64 + 28;
loc_8386B644:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r8
	ea = ctx.r8.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r11.u64 = __builtin_bswap32(reserved.u32);
	// add r10,r29,r11
	ctx.r10.u64 = ctx.r29.u64 + ctx.r11.u64;
	// stwcx. r10,0,r8
	ea = ctx.r8.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8386b644
	if (!cr0.eq) goto loc_8386B644;
	// bl 0x83d7553c
	ctx.lr = 0x8386B664;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_8386B670:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r9,-1
	ctx.r9.s64 = -1;
	// addi r7,r3,28
	ctx.r7.s64 = ctx.r3.s64 + 28;
loc_8386B67C:
	// mfmsr r8
	ctx.r8.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r7
	ea = ctx.r7.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r11.u64 = __builtin_bswap32(reserved.u32);
	// add r10,r9,r11
	ctx.r10.u64 = ctx.r9.u64 + ctx.r11.u64;
	// stwcx. r10,0,r7
	ea = ctx.r7.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r8,1
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8386b67c
	if (!cr0.eq) goto loc_8386B67C;
	// bl 0x83d7553c
	ctx.lr = 0x8386B69C;
	__imp__RtlLeaveCriticalSection(ctx, base);
loc_8386B69C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_8386B6A8:
	// li r4,6
	ctx.r4.s64 = 6;
	// lwz r5,44(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x8386cff8
	ctx.lr = 0x8386B6B8;
	sub_8386CFF8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x8386aa10
	ctx.lr = 0x8386B6D0;
	sub_8386AA10(ctx, base);
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, xer);
	// beq cr6,0x8386b6e4
	if (cr6.eq) goto loc_8386B6E4;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r31,28
	ctx.r3.s64 = ctx.r31.s64 + 28;
	// bl 0x8386aab8
	ctx.lr = 0x8386B6E4;
	sub_8386AAB8(ctx, base);
loc_8386B6E4:
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r8,r31,52
	ctx.r8.s64 = ctx.r31.s64 + 52;
loc_8386B6EC:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r8
	ea = ctx.r8.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// stwcx. r11,0,r8
	ea = ctx.r8.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8386b6ec
	if (!cr0.eq) goto loc_8386B6EC;
	// lwsync 
	// lis r7,-31743
	ctx.r7.s64 = -2080309248;
	// addi r10,r31,4
	ctx.r10.s64 = ctx.r31.s64 + 4;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r8,r3,28
	ctx.r8.s64 = ctx.r3.s64 + 28;
	// lwz r11,14272(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 14272);
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r7,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r7.u32);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r31,0(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
loc_8386B73C:
	// mfmsr r4
	ctx.r4.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r6,0,r8
	ea = ctx.r8.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r6.u64 = __builtin_bswap32(reserved.u32);
	// add r5,r29,r6
	ctx.r5.u64 = ctx.r29.u64 + ctx.r6.u64;
	// stwcx. r5,0,r8
	ea = ctx.r8.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r5.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r4,1
	ctx.msr = (ctx.r4.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8386b73c
	if (!cr0.eq) goto loc_8386B73C;
	// bl 0x83d7553c
	ctx.lr = 0x8386B75C;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8386B768"))) PPC_WEAK_FUNC(sub_8386B768);
PPC_FUNC_IMPL(__imp__sub_8386B768) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x8386B770;
	__savegprlr_28(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8386b820
	if (cr6.eq) goto loc_8386B820;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x823fbe28
	ctx.lr = 0x8386B788;
	sub_823FBE28(ctx, base);
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// li r29,0
	ctx.r29.s64 = 0;
	// lis r10,-31743
	ctx.r10.s64 = -2080309248;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r31,r10,14240
	ctx.r31.s64 = ctx.r10.s64 + 14240;
	// std r29,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r29.u64);
	// std r29,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r29.u64);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x838639b0
	ctx.lr = 0x8386B7AC;
	sub_838639B0(ctx, base);
	// lis r9,-31743
	ctx.r9.s64 = -2080309248;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r9,14280
	ctx.r3.s64 = ctx.r9.s64 + 14280;
	// bl 0x8386a560
	ctx.lr = 0x8386B7BC;
	sub_8386A560(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8386b7f4
	if (cr6.eq) goto loc_8386B7F4;
	// lis r10,-31743
	ctx.r10.s64 = -2080309248;
	// li r28,-1
	ctx.r28.s64 = -1;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// lwz r11,14220(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 14220);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,14220(r10)
	PPC_STORE_U32(ctx.r10.u32 + 14220, ctx.r11.u32);
	// stw r28,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r28.u32);
	// stw r28,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r28.u32);
	// bne cr6,0x8386b82c
	if (!cr6.eq) goto loc_8386B82C;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// b 0x8386b854
	goto loc_8386B854;
loc_8386B7F4:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r9,-1
	ctx.r9.s64 = -1;
	// addi r7,r3,28
	ctx.r7.s64 = ctx.r3.s64 + 28;
loc_8386B800:
	// mfmsr r8
	ctx.r8.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r7
	ea = ctx.r7.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r11.u64 = __builtin_bswap32(reserved.u32);
	// add r10,r9,r11
	ctx.r10.u64 = ctx.r9.u64 + ctx.r11.u64;
	// stwcx. r10,0,r7
	ea = ctx.r7.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r8,1
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8386b800
	if (!cr0.eq) goto loc_8386B800;
	// bl 0x83d7553c
	ctx.lr = 0x8386B820;
	__imp__RtlLeaveCriticalSection(ctx, base);
loc_8386B820:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_8386B82C:
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// clrlwi r10,r30,17
	ctx.r10.u64 = ctx.r30.u32 & 0x7FFF;
	// mulli r10,r10,56
	ctx.r10.s64 = ctx.r10.s64 * 56;
	// lwz r11,14224(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 14224);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// subf r8,r9,r30
	ctx.r8.s64 = ctx.r30.s64 - ctx.r9.s64;
	// addic r7,r8,-1
	xer.ca = ctx.r8.u32 > 0;
	ctx.r7.s64 = ctx.r8.s64 + -1;
	// subfe r5,r6,r6
	temp.u8 = (~ctx.r6.u32 + ctx.r6.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r6.u32 + xer.ca < xer.ca);
	ctx.r5.u64 = ~ctx.r6.u64 + ctx.r6.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r30,r5,r11
	ctx.r30.u64 = ctx.r5.u64 & ctx.r11.u64;
loc_8386B854:
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x838644e8
	ctx.lr = 0x8386B864;
	sub_838644E8(ctx, base);
	// stw r3,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8386b8cc
	if (cr6.eq) goto loc_8386B8CC;
	// li r7,1028
	ctx.r7.s64 = 1028;
	// lwz r3,108(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x83864558
	ctx.lr = 0x8386B888;
	sub_83864558(ctx, base);
	// stw r3,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8386b8cc
	if (cr6.eq) goto loc_8386B8CC;
	// lwz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8386b8c8
	if (cr6.eq) goto loc_8386B8C8;
	// lwz r11,36(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8386b8c8
	if (cr6.eq) goto loc_8386B8C8;
	// lwz r11,44(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// addi r3,r30,52
	ctx.r3.s64 = ctx.r30.s64 + 52;
	// stw r29,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r29.u32);
	// stw r29,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r29.u32);
	// stw r29,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r29.u32);
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// bl 0x83863818
	ctx.lr = 0x8386B8C8;
	sub_83863818(ctx, base);
loc_8386B8C8:
	// li r29,1
	ctx.r29.s64 = 1;
loc_8386B8CC:
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8386b914
	if (!cr6.eq) goto loc_8386B914;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8386ad10
	ctx.lr = 0x8386B8E0;
	sub_8386AD10(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r8,r3,28
	ctx.r8.s64 = ctx.r3.s64 + 28;
loc_8386B8E8:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r8
	ea = ctx.r8.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r11.u64 = __builtin_bswap32(reserved.u32);
	// add r10,r28,r11
	ctx.r10.u64 = ctx.r28.u64 + ctx.r11.u64;
	// stwcx. r10,0,r8
	ea = ctx.r8.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8386b8e8
	if (!cr0.eq) goto loc_8386B8E8;
	// bl 0x83d7553c
	ctx.lr = 0x8386B908;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_8386B914:
	// li r4,6
	ctx.r4.s64 = 6;
	// lwz r5,44(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x8386cff8
	ctx.lr = 0x8386B924;
	sub_8386CFF8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x8386aa10
	ctx.lr = 0x8386B93C;
	sub_8386AA10(ctx, base);
	// lwz r9,32(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x8386b954
	if (!cr6.eq) goto loc_8386B954;
	// lwz r11,36(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8386b960
	if (cr6.eq) goto loc_8386B960;
loc_8386B954:
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r31,28
	ctx.r3.s64 = ctx.r31.s64 + 28;
	// bl 0x8386aab8
	ctx.lr = 0x8386B960;
	sub_8386AAB8(ctx, base);
loc_8386B960:
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r8,r31,52
	ctx.r8.s64 = ctx.r31.s64 + 52;
loc_8386B968:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r8
	ea = ctx.r8.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// stwcx. r11,0,r8
	ea = ctx.r8.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8386b968
	if (!cr0.eq) goto loc_8386B968;
	// lwsync 
	// lis r7,-31743
	ctx.r7.s64 = -2080309248;
	// addi r10,r31,4
	ctx.r10.s64 = ctx.r31.s64 + 4;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r8,r3,28
	ctx.r8.s64 = ctx.r3.s64 + 28;
	// lwz r11,14272(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 14272);
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r7,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r7.u32);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r31,0(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
loc_8386B9B8:
	// mfmsr r4
	ctx.r4.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r6,0,r8
	ea = ctx.r8.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r6.u64 = __builtin_bswap32(reserved.u32);
	// add r5,r28,r6
	ctx.r5.u64 = ctx.r28.u64 + ctx.r6.u64;
	// stwcx. r5,0,r8
	ea = ctx.r8.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r5.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r4,1
	ctx.msr = (ctx.r4.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8386b9b8
	if (!cr0.eq) goto loc_8386B9B8;
	// bl 0x83d7553c
	ctx.lr = 0x8386B9D8;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8386B9E4"))) PPC_WEAK_FUNC(sub_8386B9E4);
PPC_FUNC_IMPL(__imp__sub_8386B9E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8386B9E8"))) PPC_WEAK_FUNC(sub_8386B9E8);
PPC_FUNC_IMPL(__imp__sub_8386B9E8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x8386B9F0;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r26,r11,14240
	ctx.r26.s64 = ctx.r11.s64 + 14240;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x83d7554c
	ctx.lr = 0x8386BA08;
	__imp__RtlEnterCriticalSection(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r7,r26,28
	ctx.r7.s64 = ctx.r26.s64 + 28;
loc_8386BA10:
	// mfmsr r8
	ctx.r8.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r7
	ea = ctx.r7.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stwcx. r9,0,r7
	ea = ctx.r7.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r8,1
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8386ba10
	if (!cr0.eq) goto loc_8386BA10;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x8386ba54
	if (cr6.eq) goto loc_8386BA54;
	// lis r29,-31743
	ctx.r29.s64 = -2080309248;
	// clrlwi r11,r30,17
	ctx.r11.u64 = ctx.r30.u32 & 0x7FFF;
	// mulli r10,r11,56
	ctx.r10.s64 = ctx.r11.s64 * 56;
	// lwz r11,14224(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 14224);
	// lwzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r9,r30
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r30.u32, xer);
	// beq cr6,0x8386ba8c
	if (cr6.eq) goto loc_8386BA8C;
loc_8386BA54:
	// li r10,-1
	ctx.r10.s64 = -1;
	// addi r7,r26,28
	ctx.r7.s64 = ctx.r26.s64 + 28;
loc_8386BA5C:
	// mfmsr r8
	ctx.r8.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r7
	ea = ctx.r7.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r11.u64 = __builtin_bswap32(reserved.u32);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stwcx. r9,0,r7
	ea = ctx.r7.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r8,1
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8386ba5c
	if (!cr0.eq) goto loc_8386BA5C;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x83d7553c
	ctx.lr = 0x8386BA80;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_8386BA8C:
	// addi r3,r31,52
	ctx.r3.s64 = ctx.r31.s64 + 52;
	// bl 0x838638d0
	ctx.lr = 0x8386BA94;
	sub_838638D0(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r28,-1
	ctx.r28.s64 = -1;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8386bb4c
	if (!cr6.eq) goto loc_8386BB4C;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r30,r31,4
	ctx.r30.s64 = ctx.r31.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r6,8(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r6,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r6.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r5,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r5.u32);
	// lwz r4,0(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// bl 0x8386d028
	ctx.lr = 0x8386BAE4;
	sub_8386D028(ctx, base);
	// lis r4,-31743
	ctx.r4.s64 = -2080309248;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r10,r4,14228
	ctx.r10.s64 = ctx.r4.s64 + 14228;
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
	// stw r30,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r30.u32);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x8386bb2c
	if (cr6.lt) goto loc_8386BB2C;
	// stw r28,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r28.u32);
	// mulli r10,r11,56
	ctx.r10.s64 = ctx.r11.s64 * 56;
	// lwz r11,14224(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 14224);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x8386ae40
	ctx.lr = 0x8386BB2C;
	sub_8386AE40(ctx, base);
loc_8386BB2C:
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x8386bb4c
	if (cr6.lt) goto loc_8386BB4C;
	// stw r28,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r28.u32);
	// mulli r10,r11,56
	ctx.r10.s64 = ctx.r11.s64 * 56;
	// lwz r11,14224(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 14224);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x8386ae40
	ctx.lr = 0x8386BB4C;
	sub_8386AE40(ctx, base);
loc_8386BB4C:
	// addi r8,r26,28
	ctx.r8.s64 = ctx.r26.s64 + 28;
loc_8386BB50:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r8
	ea = ctx.r8.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r11.u64 = __builtin_bswap32(reserved.u32);
	// add r10,r28,r11
	ctx.r10.u64 = ctx.r28.u64 + ctx.r11.u64;
	// stwcx. r10,0,r8
	ea = ctx.r8.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8386bb50
	if (!cr0.eq) goto loc_8386BB50;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x83d7553c
	ctx.lr = 0x8386BB74;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8386BB80"))) PPC_WEAK_FUNC(sub_8386BB80);
PPC_FUNC_IMPL(__imp__sub_8386BB80) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
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
	// sth r4,20(r3)
	PPC_STORE_U16(ctx.r3.u32 + 20, ctx.r4.u16);
	// sth r5,22(r3)
	PPC_STORE_U16(ctx.r3.u32 + 22, ctx.r5.u16);
	// stb r6,24(r3)
	PPC_STORE_U8(ctx.r3.u32 + 24, ctx.r6.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8386BBA8"))) PPC_WEAK_FUNC(sub_8386BBA8);
PPC_FUNC_IMPL(__imp__sub_8386BBA8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x8386BBB0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,4
	ctx.r30.s64 = 4;
	// li r29,0
	ctx.r29.s64 = 0;
loc_8386BBC4:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8386bbd8
	if (cr6.eq) goto loc_8386BBD8;
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
	// bl 0x83868630
	ctx.lr = 0x8386BBD8;
	sub_83868630(ctx, base);
loc_8386BBD8:
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// bne 0x8386bbc4
	if (!cr0.eq) goto loc_8386BBC4;
	// lwz r3,16(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8386bbf8
	if (cr6.eq) goto loc_8386BBF8;
	// stw r29,16(r28)
	PPC_STORE_U32(ctx.r28.u32 + 16, ctx.r29.u32);
	// bl 0x83868630
	ctx.lr = 0x8386BBF8;
	sub_83868630(ctx, base);
loc_8386BBF8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8386BC00"))) PPC_WEAK_FUNC(sub_8386BC00);
PPC_FUNC_IMPL(__imp__sub_8386BC00) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x8386BC08;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// rlwinm r29,r4,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// lwzx r31,r29,r3
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r3.u32);
	// cmplw cr6,r31,r5
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r5.u32, xer);
	// bne cr6,0x8386bc30
	if (!cr6.eq) goto loc_8386BC30;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_8386BC30:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x8386bc50
	if (cr6.eq) goto loc_8386BC50;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// stwx r11,r29,r30
	PPC_STORE_U32(ctx.r29.u32 + ctx.r30.u32, ctx.r11.u32);
	// beq cr6,0x8386bc50
	if (cr6.eq) goto loc_8386BC50;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83868630
	ctx.lr = 0x8386BC50;
	sub_83868630(ctx, base);
loc_8386BC50:
	// stwx r28,r29,r30
	PPC_STORE_U32(ctx.r29.u32 + ctx.r30.u32, ctx.r28.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83867de0
	ctx.lr = 0x8386BC5C;
	sub_83867DE0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8386BC68"))) PPC_WEAK_FUNC(sub_8386BC68);
PPC_FUNC_IMPL(__imp__sub_8386BC68) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x8386BC70;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,16(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplw cr6,r31,r4
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r4.u32, xer);
	// bne cr6,0x8386bc94
	if (!cr6.eq) goto loc_8386BC94;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_8386BC94:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x8386bcb4
	if (cr6.eq) goto loc_8386BCB4;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// stw r11,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r11.u32);
	// beq cr6,0x8386bcb4
	if (cr6.eq) goto loc_8386BCB4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83868630
	ctx.lr = 0x8386BCB4;
	sub_83868630(ctx, base);
loc_8386BCB4:
	// stw r30,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r30.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83867de0
	ctx.lr = 0x8386BCC0;
	sub_83867DE0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8386BCCC"))) PPC_WEAK_FUNC(sub_8386BCCC);
PPC_FUNC_IMPL(__imp__sub_8386BCCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8386BCD0"))) PPC_WEAK_FUNC(sub_8386BCD0);
PPC_FUNC_IMPL(__imp__sub_8386BCD0) {
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
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r9,-31743
	ctx.r9.s64 = -2080309248;
	// add r8,r3,r11
	ctx.r8.u64 = ctx.r3.u64 + ctx.r11.u64;
	// cmplwi cr6,r4,2
	cr6.compare<uint32_t>(ctx.r4.u32, 2, xer);
	// rlwinm r10,r8,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 5) & 0xFFFFFFE0;
	// lwz r11,14540(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 14540);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r30,r11,152
	ctx.r30.s64 = ctx.r11.s64 + 152;
	// beq cr6,0x8386bd0c
	if (cr6.eq) goto loc_8386BD0C;
	// addi r30,r11,156
	ctx.r30.s64 = ctx.r11.s64 + 156;
loc_8386BD0C:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r31,0(r5)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8386bd40
	if (cr6.eq) goto loc_8386BD40;
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// addi r10,r6,-1
	ctx.r10.s64 = ctx.r6.s64 + -1;
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// and r7,r9,r10
	ctx.r7.u64 = ctx.r9.u64 & ctx.r10.u64;
	// subf r6,r7,r6
	ctx.r6.s64 = ctx.r6.s64 - ctx.r7.s64;
	// and r10,r6,r10
	ctx.r10.u64 = ctx.r6.u64 & ctx.r10.u64;
	// add r5,r31,r10
	ctx.r5.u64 = ctx.r31.u64 + ctx.r10.u64;
	// cmplw cr6,r8,r5
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r5.u32, xer);
	// bge cr6,0x8386bd64
	if (!cr6.lt) goto loc_8386BD64;
loc_8386BD40:
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// addi r3,r11,14592
	ctx.r3.s64 = ctx.r11.s64 + 14592;
	// bl 0x83d7631c
	ctx.lr = 0x8386BD4C;
	__imp__InterlockedPopEntrySList(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwsync 
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// stw r3,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
loc_8386BD64:
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lwz r8,16(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// subf r6,r31,r7
	ctx.r6.s64 = ctx.r7.s64 - ctx.r31.s64;
	// add r5,r9,r31
	ctx.r5.u64 = ctx.r9.u64 + ctx.r31.u64;
	// subf r4,r10,r6
	ctx.r4.s64 = ctx.r6.s64 - ctx.r10.s64;
	// add r3,r8,r9
	ctx.r3.u64 = ctx.r8.u64 + ctx.r9.u64;
	// stw r5,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r5.u32);
	// stw r4,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r4.u32);
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

__attribute__((alias("__imp__sub_8386BDA4"))) PPC_WEAK_FUNC(sub_8386BDA4);
PPC_FUNC_IMPL(__imp__sub_8386BDA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8386BDA8"))) PPC_WEAK_FUNC(sub_8386BDA8);
PPC_FUNC_IMPL(__imp__sub_8386BDA8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x8386BDB0;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r9,-31743
	ctx.r9.s64 = -2080309248;
	// add r8,r3,r11
	ctx.r8.u64 = ctx.r3.u64 + ctx.r11.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// rlwinm r10,r8,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 5) & 0xFFFFFFE0;
	// mr r26,r30
	ctx.r26.u64 = ctx.r30.u64;
	// lwz r11,14540(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 14540);
	// lis r28,-31743
	ctx.r28.s64 = -2080309248;
	// add r25,r10,r11
	ctx.r25.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// addi r29,r11,14592
	ctx.r29.s64 = ctx.r11.s64 + 14592;
loc_8386BDE0:
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(ctx.r26.u32, 0, xer);
	// addi r27,r25,156
	ctx.r27.s64 = ctx.r25.s64 + 156;
	// beq cr6,0x8386bdf0
	if (cr6.eq) goto loc_8386BDF0;
	// addi r27,r25,152
	ctx.r27.s64 = ctx.r25.s64 + 152;
loc_8386BDF0:
	// lwz r4,0(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8386be24
	if (cr6.eq) goto loc_8386BE24;
loc_8386BDFC:
	// lwz r11,14584(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 14584);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r31,4(r4)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r30,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, ctx.r30.u32);
	// stw r30,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r30.u32);
	// stw r11,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r11.u32);
	// bl 0x83ae3460
	ctx.lr = 0x8386BE18;
	sub_83AE3460(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// bne cr6,0x8386bdfc
	if (!cr6.eq) goto loc_8386BDFC;
loc_8386BE24:
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// stw r30,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r30.u32);
	// cmplwi cr6,r26,2
	cr6.compare<uint32_t>(ctx.r26.u32, 2, xer);
	// blt cr6,0x8386bde0
	if (cr6.lt) goto loc_8386BDE0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8386BE3C"))) PPC_WEAK_FUNC(sub_8386BE3C);
PPC_FUNC_IMPL(__imp__sub_8386BE3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8386BE40"))) PPC_WEAK_FUNC(sub_8386BE40);
PPC_FUNC_IMPL(__imp__sub_8386BE40) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r8,-31743
	ctx.r8.s64 = -2080309248;
	// add r7,r3,r11
	ctx.r7.u64 = ctx.r3.u64 + ctx.r11.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// rlwinm r10,r7,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 5) & 0xFFFFFFE0;
	// mr r7,r9
	ctx.r7.u64 = ctx.r9.u64;
	// lwz r11,14540(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 14540);
	// stw r9,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r9.u32);
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r9,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r9.u32);
loc_8386BE68:
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// bne cr6,0x8386be78
	if (!cr6.eq) goto loc_8386BE78;
	// lwz r11,152(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 152);
	// b 0x8386be7c
	goto loc_8386BE7C;
loc_8386BE78:
	// lwz r11,156(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 156);
loc_8386BE7C:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8386beb0
	if (cr6.eq) goto loc_8386BEB0;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r9,0(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r10,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
loc_8386BE94:
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8386be94
	if (!cr6.eq) goto loc_8386BE94;
loc_8386BEB0:
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// cmplwi cr6,r7,2
	cr6.compare<uint32_t>(ctx.r7.u32, 2, xer);
	// blt cr6,0x8386be68
	if (cr6.lt) goto loc_8386BE68;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8386BEC0"))) PPC_WEAK_FUNC(sub_8386BEC0);
PPC_FUNC_IMPL(__imp__sub_8386BEC0) {
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
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8386bf30
	if (cr6.eq) goto loc_8386BF30;
	// clrlwi r10,r4,17
	ctx.r10.u64 = ctx.r4.u32 & 0x7FFF;
	// rlwinm r11,r4,2,15,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0x1FFFC;
	// lis r9,-31743
	ctx.r9.s64 = -2080309248;
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r10,r8,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 5) & 0xFFFFFFE0;
	// lwz r11,14540(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 14540);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r7,r4
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r4.u32, xer);
	// bne cr6,0x8386bf30
	if (!cr6.eq) goto loc_8386BF30;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r4,148(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 148);
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82405248
	ctx.lr = 0x8386BF0C;
	sub_82405248(ctx, base);
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// addi r8,r11,14604
	ctx.r8.s64 = ctx.r11.s64 + 14604;
loc_8386BF14:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r8
	ea = ctx.r8.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwcx. r10,0,r8
	ea = ctx.r8.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8386bf14
	if (!cr0.eq) goto loc_8386BF14;
loc_8386BF30:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8386BF40"))) PPC_WEAK_FUNC(sub_8386BF40);
PPC_FUNC_IMPL(__imp__sub_8386BF40) {
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
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r30,r11,14604
	ctx.r30.s64 = ctx.r11.s64 + 14604;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
loc_8386BF64:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r8
	ea = ctx.r8.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// cmpw cr6,r10,r31
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r31.s32, xer);
	// bne cr6,0x8386bf88
	if (!cr6.eq) goto loc_8386BF88;
	// stwcx. r31,0,r8
	ea = ctx.r8.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r31.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8386bf64
	if (!cr0.eq) goto loc_8386BF64;
	// b 0x8386bf90
	goto loc_8386BF90;
loc_8386BF88:
	// stwcx. r10,0,r8
	ea = ctx.r8.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
loc_8386BF90:
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x8386bfe0
	if (cr6.eq) goto loc_8386BFE0;
loc_8386BF9C:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x832d22b8
	ctx.lr = 0x8386BFA4;
	sub_832D22B8(ctx, base);
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
loc_8386BFA8:
	// mfmsr r10
	ctx.r10.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r9
	ea = ctx.r9.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r11.u64 = __builtin_bswap32(reserved.u32);
	// cmpw cr6,r11,r31
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r31.s32, xer);
	// bne cr6,0x8386bfcc
	if (!cr6.eq) goto loc_8386BFCC;
	// stwcx. r31,0,r9
	ea = ctx.r9.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r31.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r10,1
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8386bfa8
	if (!cr0.eq) goto loc_8386BFA8;
	// b 0x8386bfd4
	goto loc_8386BFD4;
loc_8386BFCC:
	// stwcx. r11,0,r9
	ea = ctx.r9.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r10,1
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
loc_8386BFD4:
	// mr r11,r11
	ctx.r11.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x8386bf9c
	if (!cr6.eq) goto loc_8386BF9C;
loc_8386BFE0:
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

__attribute__((alias("__imp__sub_8386BFF8"))) PPC_WEAK_FUNC(sub_8386BFF8);
PPC_FUNC_IMPL(__imp__sub_8386BFF8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x8386C000;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r9,r3,140
	ctx.r9.s64 = ctx.r3.s64 + 140;
	// stw r30,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r30.u32);
loc_8386C014:
	// mfmsr r10
	ctx.r10.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r9
	ea = ctx.r9.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r11.u64 = __builtin_bswap32(reserved.u32);
	// stwcx. r30,0,r9
	ea = ctx.r9.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r30.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r10,1
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8386c014
	if (!cr0.eq) goto loc_8386C014;
	// lwsync 
	// li r5,64
	ctx.r5.s64 = 64;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// addi r3,r31,20
	ctx.r3.s64 = ctx.r31.s64 + 20;
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// bl 0x831cdcf0
	ctx.lr = 0x8386C050;
	sub_831CDCF0(ctx, base);
	// std r30,88(r31)
	PPC_STORE_U64(ctx.r31.u32 + 88, ctx.r30.u64);
	// std r30,96(r31)
	PPC_STORE_U64(ctx.r31.u32 + 96, ctx.r30.u64);
	// std r30,104(r31)
	PPC_STORE_U64(ctx.r31.u32 + 104, ctx.r30.u64);
	// std r30,112(r31)
	PPC_STORE_U64(ctx.r31.u32 + 112, ctx.r30.u64);
	// std r30,120(r31)
	PPC_STORE_U64(ctx.r31.u32 + 120, ctx.r30.u64);
	// bl 0x82416cf8
	ctx.lr = 0x8386C068;
	sub_82416CF8(ctx, base);
	// lis r8,-31743
	ctx.r8.s64 = -2080309248;
	// rlwinm r10,r3,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 5) & 0xFFFFFFE0;
	// addi r11,r8,14336
	ctx.r11.s64 = ctx.r8.s64 + 14336;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// add r30,r10,r11
	ctx.r30.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83d7554c
	ctx.lr = 0x8386C084;
	__imp__RtlEnterCriticalSection(ctx, base);
	// addi r29,r30,28
	ctx.r29.s64 = ctx.r30.s64 + 28;
	// li r5,1
	ctx.r5.s64 = 1;
loc_8386C08C:
	// mfmsr r4
	ctx.r4.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r7,0,r29
	ea = ctx.r29.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r7.u64 = __builtin_bswap32(reserved.u32);
	// add r6,r5,r7
	ctx.r6.u64 = ctx.r5.u64 + ctx.r7.u64;
	// stwcx. r6,0,r29
	ea = ctx.r29.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r6.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r4,1
	ctx.msr = (ctx.r4.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8386c08c
	if (!cr0.eq) goto loc_8386C08C;
	// lis r3,-31743
	ctx.r3.s64 = -2080309248;
	// rlwinm r11,r28,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r3,14552
	ctx.r10.s64 = ctx.r3.s64 + 14552;
	// lwzx r28,r11,r10
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x823f8210
	ctx.lr = 0x8386C0C0;
	sub_823F8210(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r4,144(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82403ee0
	ctx.lr = 0x8386C0E0;
	sub_82403EE0(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82404450
	ctx.lr = 0x8386C0E8;
	sub_82404450(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x823f8250
	ctx.lr = 0x8386C0F0;
	sub_823F8250(ctx, base);
	// li r9,-1
	ctx.r9.s64 = -1;
loc_8386C0F4:
	// mfmsr r6
	ctx.r6.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r8,0,r29
	ea = ctx.r29.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r8.u64 = __builtin_bswap32(reserved.u32);
	// add r7,r9,r8
	ctx.r7.u64 = ctx.r9.u64 + ctx.r8.u64;
	// stwcx. r7,0,r29
	ea = ctx.r29.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r7.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r6,1
	ctx.msr = (ctx.r6.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8386c0f4
	if (!cr0.eq) goto loc_8386C0F4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83d7553c
	ctx.lr = 0x8386C118;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// lis r5,-31743
	ctx.r5.s64 = -2080309248;
	// lis r4,-31743
	ctx.r4.s64 = -2080309248;
	// addi r10,r31,128
	ctx.r10.s64 = ctx.r31.s64 + 128;
	// lwz r11,14292(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 14292);
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r11,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r11.u32);
	// stw r3,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r3.u32);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r11,14332(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 14332);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,14332(r4)
	PPC_STORE_U32(ctx.r4.u32 + 14332, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8386C158"))) PPC_WEAK_FUNC(sub_8386C158);
PPC_FUNC_IMPL(__imp__sub_8386C158) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdac8
	ctx.lr = 0x8386C160;
	__savegprlr_20(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r29,r11,14300
	ctx.r29.s64 = ctx.r11.s64 + 14300;
	// li r4,4000
	ctx.r4.s64 = 4000;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83d7562c
	ctx.lr = 0x8386C17C;
	__imp__RtlInitializeCriticalSectionAndSpinCount(ctx, base);
	// lis r10,-31743
	ctx.r10.s64 = -2080309248;
	// lis r7,-31743
	ctx.r7.s64 = -2080309248;
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// addi r8,r10,14528
	ctx.r8.s64 = ctx.r10.s64 + 14528;
	// addi r9,r7,14544
	ctx.r9.s64 = ctx.r7.s64 + 14544;
	// lis r21,-31743
	ctx.r21.s64 = -2080309248;
	// stw r8,14528(r10)
	PPC_STORE_U32(ctx.r10.u32 + 14528, ctx.r8.u32);
	// addi r25,r11,14292
	ctx.r25.s64 = ctx.r11.s64 + 14292;
	// stw r9,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r9.u32);
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r8,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r8.u32);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// stw r25,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r25.u32);
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// stw r25,4(r25)
	PPC_STORE_U32(ctx.r25.u32 + 4, ctx.r25.u32);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stw r30,28(r29)
	PPC_STORE_U32(ctx.r29.u32 + 28, ctx.r30.u32);
	// stw r9,14544(r7)
	PPC_STORE_U32(ctx.r7.u32 + 14544, ctx.r9.u32);
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// stw r11,14288(r21)
	PPC_STORE_U32(ctx.r21.u32 + 14288, ctx.r11.u32);
	// beq cr6,0x8386c46c
	if (cr6.eq) goto loc_8386C46C;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lis r29,-31743
	ctx.r29.s64 = -2080309248;
	// lis r27,-31743
	ctx.r27.s64 = -2080309248;
	// lis r26,-31743
	ctx.r26.s64 = -2080309248;
	// lis r20,-31743
	ctx.r20.s64 = -2080309248;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r10,14576(r29)
	PPC_STORE_U32(ctx.r29.u32 + 14576, ctx.r10.u32);
	// li r4,4
	ctx.r4.s64 = 4;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// divwu r10,r10,r9
	ctx.r10.u32 = PPCDivide(ctx.r10.u32, ctx.r9.u32);
	// add r8,r11,r8
	ctx.r8.u64 = ctx.r11.u64 + ctx.r8.u64;
	// stw r10,14584(r26)
	PPC_STORE_U32(ctx.r26.u32 + 14584, ctx.r10.u32);
	// stw r9,14580(r27)
	PPC_STORE_U32(ctx.r27.u32 + 14580, ctx.r9.u32);
	// twllei r9,0
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// rlwinm r3,r8,5,0,26
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 5) & 0xFFFFFFE0;
	// stw r11,14588(r20)
	PPC_STORE_U32(ctx.r20.u32 + 14588, ctx.r11.u32);
	// bl 0x838636d0
	ctx.lr = 0x8386C220;
	sub_838636D0(ctx, base);
	// lis r22,-31743
	ctx.r22.s64 = -2080309248;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,14576(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 14576);
	// lis r6,8192
	ctx.r6.s64 = 536870912;
	// li r5,128
	ctx.r5.s64 = 128;
	// ori r6,r6,1028
	ctx.r6.u64 = ctx.r6.u64 | 1028;
	// stw r11,14540(r22)
	PPC_STORE_U32(ctx.r22.u32 + 14540, ctx.r11.u32);
	// li r4,-1
	ctx.r4.s64 = -1;
	// bl 0x8386ce50
	ctx.lr = 0x8386C244;
	sub_8386CE50(ctx, base);
	// lis r24,-31743
	ctx.r24.s64 = -2080309248;
	// lwz r11,14580(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 14580);
	// li r4,4
	ctx.r4.s64 = 4;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r3,14536(r24)
	PPC_STORE_U32(ctx.r24.u32 + 14536, ctx.r3.u32);
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r3,r7,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x838636d0
	ctx.lr = 0x8386C264;
	sub_838636D0(ctx, base);
	// lis r29,-31743
	ctx.r29.s64 = -2080309248;
	// lwz r11,14580(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 14580);
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// stw r3,14600(r29)
	PPC_STORE_U32(ctx.r29.u32 + 14600, ctx.r3.u32);
	// beq cr6,0x8386c2f4
	if (cr6.eq) goto loc_8386C2F4;
	// lis r10,-31743
	ctx.r10.s64 = -2080309248;
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
	// add r11,r30,r3
	ctx.r11.u64 = ctx.r30.u64 + ctx.r3.u64;
	// addi r23,r10,14592
	ctx.r23.s64 = ctx.r10.s64 + 14592;
loc_8386C28C:
	// stw r30,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r30.u32);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// lwz r11,14600(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 14600);
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// lwz r10,14584(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 14584);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// lwz r11,14600(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 14600);
	// add r10,r31,r11
	ctx.r10.u64 = ctx.r31.u64 + ctx.r11.u64;
	// stw r30,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r30.u32);
	// lwz r10,14536(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 14536);
	// lwz r11,14600(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 14600);
	// add r9,r31,r11
	ctx.r9.u64 = ctx.r31.u64 + ctx.r11.u64;
	// lwz r11,14584(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 14584);
	// mullw r11,r11,r28
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r28.s32);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r8,16(r9)
	PPC_STORE_U32(ctx.r9.u32 + 16, ctx.r8.u32);
	// lwz r11,14600(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 14600);
	// add r4,r31,r11
	ctx.r4.u64 = ctx.r31.u64 + ctx.r11.u64;
	// bl 0x83ae3460
	ctx.lr = 0x8386C2D8;
	sub_83AE3460(ctx, base);
	// lwz r11,14580(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 14580);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// lwz r10,14600(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 14600);
	// addi r31,r31,20
	ctx.r31.s64 = ctx.r31.s64 + 20;
	// cmplw cr6,r28,r11
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, xer);
	// add r11,r31,r10
	ctx.r11.u64 = ctx.r31.u64 + ctx.r10.u64;
	// blt cr6,0x8386c28c
	if (cr6.lt) goto loc_8386C28C;
loc_8386C2F4:
	// bl 0x83860d50
	ctx.lr = 0x8386C2F8;
	sub_83860D50(ctx, base);
	// lwz r11,14288(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 14288);
	// lwz r31,14540(r22)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r22.u32 + 14540);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8386c3f0
	if (cr6.eq) goto loc_8386C3F0;
loc_8386C310:
	// stw r29,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r29.u32);
	// addi r9,r31,140
	ctx.r9.s64 = ctx.r31.s64 + 140;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
loc_8386C31C:
	// mfmsr r10
	ctx.r10.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r9
	ea = ctx.r9.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r11.u64 = __builtin_bswap32(reserved.u32);
	// stwcx. r30,0,r9
	ea = ctx.r9.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r30.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r10,1
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8386c31c
	if (!cr0.eq) goto loc_8386C31C;
	// lwsync 
	// li r5,64
	ctx.r5.s64 = 64;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r30,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r30.u32);
	// addi r3,r31,20
	ctx.r3.s64 = ctx.r31.s64 + 20;
	// stw r30,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r30.u32);
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// bl 0x831cdcf0
	ctx.lr = 0x8386C360;
	sub_831CDCF0(ctx, base);
	// std r30,88(r31)
	PPC_STORE_U64(ctx.r31.u32 + 88, ctx.r30.u64);
	// lis r8,-31865
	ctx.r8.s64 = -2088304640;
	// std r30,96(r31)
	PPC_STORE_U64(ctx.r31.u32 + 96, ctx.r30.u64);
	// lis r5,-31865
	ctx.r5.s64 = -2088304640;
	// std r30,104(r31)
	PPC_STORE_U64(ctx.r31.u32 + 104, ctx.r30.u64);
	// lis r4,-31865
	ctx.r4.s64 = -2088304640;
	// std r30,112(r31)
	PPC_STORE_U64(ctx.r31.u32 + 112, ctx.r30.u64);
	// addi r6,r8,-16832
	ctx.r6.s64 = ctx.r8.s64 + -16832;
	// std r30,120(r31)
	PPC_STORE_U64(ctx.r31.u32 + 120, ctx.r30.u64);
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// addi r5,r5,-16984
	ctx.r5.s64 = ctx.r5.s64 + -16984;
	// addi r4,r4,-17200
	ctx.r4.s64 = ctx.r4.s64 + -17200;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r8,14584(r26)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r26.u32 + 14584);
	// bl 0x82403e60
	ctx.lr = 0x8386C39C;
	sub_82403E60(ctx, base);
	// stw r3,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r3.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r11,14580(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 14580);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// rlwinm r6,r11,31,1,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// bl 0x82404d80
	ctx.lr = 0x8386C3BC;
	sub_82404D80(ctx, base);
	// stw r3,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r3.u32);
	// lwz r10,4(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// addi r11,r31,128
	ctx.r11.s64 = ctx.r31.s64 + 128;
	// stw r10,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r10.u32);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// stw r25,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r25.u32);
	// addi r31,r31,160
	ctx.r31.s64 = ctx.r31.s64 + 160;
	// lwz r10,4(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lwz r10,14288(r21)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r21.u32 + 14288);
	// cmplw cr6,r29,r10
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r10.u32, xer);
	// stw r11,4(r25)
	PPC_STORE_U32(ctx.r25.u32 + 4, ctx.r11.u32);
	// blt cr6,0x8386c310
	if (cr6.lt) goto loc_8386C310;
loc_8386C3F0:
	// bl 0x83860cc8
	ctx.lr = 0x8386C3F4;
	sub_83860CC8(ctx, base);
	// lis r10,-31743
	ctx.r10.s64 = -2080309248;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
	// stw r30,14332(r10)
	PPC_STORE_U32(ctx.r10.u32 + 14332, ctx.r30.u32);
	// lwz r11,14588(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 14588);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8386c46c
	if (cr6.eq) goto loc_8386C46C;
	// lis r10,-31743
	ctx.r10.s64 = -2080309248;
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// addi r29,r10,14552
	ctx.r29.s64 = ctx.r10.s64 + 14552;
	// addi r31,r11,14336
	ctx.r31.s64 = ctx.r11.s64 + 14336;
loc_8386C420:
	// li r4,4000
	ctx.r4.s64 = 4000;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83d7562c
	ctx.lr = 0x8386C42C;
	__imp__RtlInitializeCriticalSectionAndSpinCount(ctx, base);
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,2
	ctx.r4.s64 = 2;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x823f8038
	ctx.lr = 0x8386C44C;
	sub_823F8038(ctx, base);
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x823f8250
	ctx.lr = 0x8386C454;
	sub_823F8250(ctx, base);
	// lwz r11,14588(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 14588);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r31,r31,32
	ctx.r31.s64 = ctx.r31.s64 + 32;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmplw cr6,r28,r11
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, xer);
	// blt cr6,0x8386c420
	if (cr6.lt) goto loc_8386C420;
loc_8386C46C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb18
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8386C478"))) PPC_WEAK_FUNC(sub_8386C478);
PPC_FUNC_IMPL(__imp__sub_8386C478) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad0
	ctx.lr = 0x8386C480;
	__savegprlr_22(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r24,-31743
	ctx.r24.s64 = -2080309248;
	// lwz r11,14288(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 14288);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8386c664
	if (cr6.eq) goto loc_8386C664;
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,14300
	ctx.r4.s64 = ctx.r11.s64 + 14300;
	// bl 0x838639b0
	ctx.lr = 0x8386C4A4;
	sub_838639B0(ctx, base);
	// lis r23,-31743
	ctx.r23.s64 = -2080309248;
	// lwz r11,14288(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 14288);
	// li r22,0
	ctx.r22.s64 = 0;
	// mr r30,r22
	ctx.r30.u64 = ctx.r22.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// lwz r31,14540(r23)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14540);
	// beq cr6,0x8386c51c
	if (cr6.eq) goto loc_8386C51C;
loc_8386C4C0:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8386c50c
	if (cr6.eq) goto loc_8386C50C;
	// lwz r3,148(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// bl 0x823fa9c8
	ctx.lr = 0x8386C4D4;
	sub_823FA9C8(ctx, base);
	// lwsync 
	// addi r8,r31,140
	ctx.r8.s64 = ctx.r31.s64 + 140;
loc_8386C4DC:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r8
	ea = ctx.r8.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r11.u64 = __builtin_bswap32(reserved.u32);
	// add r10,r22,r11
	ctx.r10.u64 = ctx.r22.u64 + ctx.r11.u64;
	// stwcx. r10,0,r8
	ea = ctx.r8.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8386c4dc
	if (!cr0.eq) goto loc_8386C4DC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8386bff8
	ctx.lr = 0x8386C500;
	sub_8386BFF8(ctx, base);
	// lwz r3,144(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// bl 0x823fa9c8
	ctx.lr = 0x8386C508;
	sub_823FA9C8(ctx, base);
	// lwz r11,14288(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 14288);
loc_8386C50C:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,160
	ctx.r31.s64 = ctx.r31.s64 + 160;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, xer);
	// blt cr6,0x8386c4c0
	if (cr6.lt) goto loc_8386C4C0;
loc_8386C51C:
	// lis r8,-31743
	ctx.r8.s64 = -2080309248;
	// lis r27,-31743
	ctx.r27.s64 = -2080309248;
	// addi r6,r8,14528
	ctx.r6.s64 = ctx.r8.s64 + 14528;
	// lis r7,-31743
	ctx.r7.s64 = -2080309248;
	// lis r4,-31743
	ctx.r4.s64 = -2080309248;
	// stw r6,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, ctx.r6.u32);
	// addi r5,r7,14544
	ctx.r5.s64 = ctx.r7.s64 + 14544;
	// stw r6,14528(r8)
	PPC_STORE_U32(ctx.r8.u32 + 14528, ctx.r6.u32);
	// lwz r8,14588(r27)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r27.u32 + 14588);
	// addi r3,r4,14292
	ctx.r3.s64 = ctx.r4.s64 + 14292;
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// stw r5,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r5.u32);
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
	// stw r5,14544(r7)
	PPC_STORE_U32(ctx.r7.u32 + 14544, ctx.r5.u32);
	// mr r9,r5
	ctx.r9.u64 = ctx.r5.u64;
	// stw r3,14292(r4)
	PPC_STORE_U32(ctx.r4.u32 + 14292, ctx.r3.u32);
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// stw r3,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r3.u32);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// li r26,-1
	ctx.r26.s64 = -1;
	// mr r30,r22
	ctx.r30.u64 = ctx.r22.u64;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x8386c604
	if (cr6.eq) goto loc_8386C604;
	// lis r10,-31743
	ctx.r10.s64 = -2080309248;
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// addi r10,r10,14552
	ctx.r10.s64 = ctx.r10.s64 + 14552;
	// addi r31,r11,14336
	ctx.r31.s64 = ctx.r11.s64 + 14336;
	// addi r29,r10,-4
	ctx.r29.s64 = ctx.r10.s64 + -4;
	// li r25,1
	ctx.r25.s64 = 1;
loc_8386C594:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83d7554c
	ctx.lr = 0x8386C59C;
	__imp__RtlEnterCriticalSection(ctx, base);
	// addi r28,r31,28
	ctx.r28.s64 = ctx.r31.s64 + 28;
loc_8386C5A0:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r28
	ea = ctx.r28.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r11.u64 = __builtin_bswap32(reserved.u32);
	// add r10,r25,r11
	ctx.r10.u64 = ctx.r25.u64 + ctx.r11.u64;
	// stwcx. r10,0,r28
	ea = ctx.r28.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8386c5a0
	if (!cr0.eq) goto loc_8386C5A0;
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// bl 0x823f8210
	ctx.lr = 0x8386C5C4;
	sub_823F8210(ctx, base);
	// lwzu r3,4(r29)
	ea = 4 + ctx.r29.u32;
	ctx.r3.u64 = PPC_LOAD_U32(ea);
	ctx.r29.u32 = ea;
	// bl 0x823f8188
	ctx.lr = 0x8386C5CC;
	sub_823F8188(ctx, base);
loc_8386C5CC:
	// mfmsr r6
	ctx.r6.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r8,0,r28
	ea = ctx.r28.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r8.u64 = __builtin_bswap32(reserved.u32);
	// add r7,r26,r8
	ctx.r7.u64 = ctx.r26.u64 + ctx.r8.u64;
	// stwcx. r7,0,r28
	ea = ctx.r28.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r7.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r6,1
	ctx.msr = (ctx.r6.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8386c5cc
	if (!cr0.eq) goto loc_8386C5CC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83d7553c
	ctx.lr = 0x8386C5F0;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// lwz r11,14588(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 14588);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,32
	ctx.r31.s64 = ctx.r31.s64 + 32;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, xer);
	// blt cr6,0x8386c594
	if (cr6.lt) goto loc_8386C594;
loc_8386C604:
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// lwz r3,14536(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 14536);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8386c618
	if (cr6.eq) goto loc_8386C618;
	// bl 0x8386cf00
	ctx.lr = 0x8386C618;
	sub_8386CF00(ctx, base);
loc_8386C618:
	// lwz r3,14540(r23)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14540);
	// bl 0x83863770
	ctx.lr = 0x8386C620;
	sub_83863770(ctx, base);
	// lis r6,-31743
	ctx.r6.s64 = -2080309248;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
	// stw r22,14540(r23)
	PPC_STORE_U32(ctx.r23.u32 + 14540, ctx.r22.u32);
	// mr r10,r22
	ctx.r10.u64 = ctx.r22.u64;
	// stw r22,14288(r24)
	PPC_STORE_U32(ctx.r24.u32 + 14288, ctx.r22.u32);
	// mr r9,r22
	ctx.r9.u64 = ctx.r22.u64;
	// addi r4,r3,28
	ctx.r4.s64 = ctx.r3.s64 + 28;
	// stw r22,14332(r6)
	PPC_STORE_U32(ctx.r6.u32 + 14332, ctx.r22.u32);
loc_8386C644:
	// mfmsr r5
	ctx.r5.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r8,0,r4
	ea = ctx.r4.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r8.u64 = __builtin_bswap32(reserved.u32);
	// add r7,r26,r8
	ctx.r7.u64 = ctx.r26.u64 + ctx.r8.u64;
	// stwcx. r7,0,r4
	ea = ctx.r4.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r7.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r5,1
	ctx.msr = (ctx.r5.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8386c644
	if (!cr0.eq) goto loc_8386C644;
	// bl 0x83d7553c
	ctx.lr = 0x8386C664;
	__imp__RtlLeaveCriticalSection(ctx, base);
loc_8386C664:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8386C66C"))) PPC_WEAK_FUNC(sub_8386C66C);
PPC_FUNC_IMPL(__imp__sub_8386C66C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8386C670"))) PPC_WEAK_FUNC(sub_8386C670);
PPC_FUNC_IMPL(__imp__sub_8386C670) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x8386C678;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// addi r29,r11,14300
	ctx.r29.s64 = ctx.r11.s64 + 14300;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83d7554c
	ctx.lr = 0x8386C68C;
	__imp__RtlEnterCriticalSection(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r7,r29,28
	ctx.r7.s64 = ctx.r29.s64 + 28;
loc_8386C694:
	// mfmsr r8
	ctx.r8.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r7
	ea = ctx.r7.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stwcx. r9,0,r7
	ea = ctx.r7.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r8,1
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8386c694
	if (!cr0.eq) goto loc_8386C694;
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// addi r31,r11,14544
	ctx.r31.s64 = ctx.r11.s64 + 14544;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// beq cr6,0x8386c77c
	if (cr6.eq) goto loc_8386C77C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r30,0
	ctx.r30.s64 = 0;
	// subf r10,r31,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r31.s64;
	// subfic r9,r10,0
	xer.ca = ctx.r10.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r10.s64;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 & ctx.r11.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8386c77c
	if (cr6.eq) goto loc_8386C77C;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r7,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r7.u32);
	// stw r30,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r30.u32);
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
loc_8386C704:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// addi r3,r11,-128
	ctx.r3.s64 = ctx.r11.s64 + -128;
	// bne cr6,0x8386c714
	if (!cr6.eq) goto loc_8386C714;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_8386C714:
	// lwsync 
	// addi r9,r3,140
	ctx.r9.s64 = ctx.r3.s64 + 140;
loc_8386C71C:
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
	// bne 0x8386c71c
	if (!cr0.eq) goto loc_8386C71C;
	// bl 0x8386bff8
	ctx.lr = 0x8386C73C;
	sub_8386BFF8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// subf r7,r31,r11
	ctx.r7.s64 = ctx.r11.s64 - ctx.r31.s64;
	// subfic r6,r7,0
	xer.ca = ctx.r7.u32 <= 0;
	ctx.r6.s64 = 0 - ctx.r7.s64;
	// subfe r4,r5,r5
	temp.u8 = (~ctx.r5.u32 + ctx.r5.u32 < ~ctx.r5.u32) | (~ctx.r5.u32 + ctx.r5.u32 + xer.ca < xer.ca);
	ctx.r4.u64 = ~ctx.r5.u64 + ctx.r5.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 & ctx.r11.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8386c77c
	if (cr6.eq) goto loc_8386C77C;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r7,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r7.u32);
	// stw r30,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r30.u32);
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
	// bne cr6,0x8386c704
	if (!cr6.eq) goto loc_8386C704;
loc_8386C77C:
	// li r10,-1
	ctx.r10.s64 = -1;
	// addi r7,r29,28
	ctx.r7.s64 = ctx.r29.s64 + 28;
loc_8386C784:
	// mfmsr r8
	ctx.r8.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r7
	ea = ctx.r7.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r11.u64 = __builtin_bswap32(reserved.u32);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stwcx. r9,0,r7
	ea = ctx.r7.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r8,1
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8386c784
	if (!cr0.eq) goto loc_8386C784;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83d7553c
	ctx.lr = 0x8386C7A8;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8386C7B0"))) PPC_WEAK_FUNC(sub_8386C7B0);
PPC_FUNC_IMPL(__imp__sub_8386C7B0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x8386C7B8;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r27,-31743
	ctx.r27.s64 = -2080309248;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r4,4
	ctx.r4.s64 = 4;
	// stw r11,14612(r27)
	PPC_STORE_U32(ctx.r27.u32 + 14612, ctx.r11.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x838636d0
	ctx.lr = 0x8386C7E4;
	sub_838636D0(ctx, base);
	// lis r30,-31743
	ctx.r30.s64 = -2080309248;
	// lwz r11,14612(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 14612);
	// li r26,0
	ctx.r26.s64 = 0;
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// stw r3,14608(r30)
	PPC_STORE_U32(ctx.r30.u32 + 14608, ctx.r3.u32);
	// beq cr6,0x8386c850
	if (cr6.eq) goto loc_8386C850;
	// mr r31,r26
	ctx.r31.u64 = ctx.r26.u64;
	// add r11,r26,r3
	ctx.r11.u64 = ctx.r26.u64 + ctx.r3.u64;
loc_8386C808:
	// stw r26,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r26.u32);
	// li r4,4
	ctx.r4.s64 = 4;
	// lwz r11,14608(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 14608);
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// lwz r10,4(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// lwz r9,4(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// rlwinm r3,r9,4,0,27
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// bl 0x838636d0
	ctx.lr = 0x8386C82C;
	sub_838636D0(ctx, base);
	// lwz r11,14608(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 14608);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// stwx r3,r31,r11
	PPC_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r3.u32);
	// addi r31,r31,12
	ctx.r31.s64 = ctx.r31.s64 + 12;
	// lwz r10,14608(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 14608);
	// lwz r11,14612(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 14612);
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, xer);
	// add r11,r31,r10
	ctx.r11.u64 = ctx.r31.u64 + ctx.r10.u64;
	// blt cr6,0x8386c808
	if (cr6.lt) goto loc_8386C808;
loc_8386C850:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8386C858"))) PPC_WEAK_FUNC(sub_8386C858);
PPC_FUNC_IMPL(__imp__sub_8386C858) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x8386C860;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r27,-31743
	ctx.r27.s64 = -2080309248;
	// li r28,0
	ctx.r28.s64 = 0;
	// lis r30,-31743
	ctx.r30.s64 = -2080309248;
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// lwz r11,14612(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 14612);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8386c8c4
	if (cr6.eq) goto loc_8386C8C4;
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
loc_8386C884:
	// lwz r11,14608(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 14608);
	// lwzx r3,r31,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// bl 0x83863770
	ctx.lr = 0x8386C890;
	sub_83863770(ctx, base);
	// lwz r11,14608(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 14608);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// stwx r28,r31,r11
	PPC_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r28.u32);
	// lwz r11,14608(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 14608);
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// stw r28,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r28.u32);
	// lwz r11,14608(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 14608);
	// add r10,r31,r11
	ctx.r10.u64 = ctx.r31.u64 + ctx.r11.u64;
	// stw r28,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r28.u32);
	// addi r31,r31,12
	ctx.r31.s64 = ctx.r31.s64 + 12;
	// lwz r11,14612(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 14612);
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, xer);
	// blt cr6,0x8386c884
	if (cr6.lt) goto loc_8386C884;
loc_8386C8C4:
	// lwz r3,14608(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 14608);
	// bl 0x83863770
	ctx.lr = 0x8386C8CC;
	sub_83863770(ctx, base);
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// stw r28,14608(r30)
	PPC_STORE_U32(ctx.r30.u32 + 14608, ctx.r28.u32);
	// stw r28,14612(r27)
	PPC_STORE_U32(ctx.r27.u32 + 14612, ctx.r28.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8386C8E0"))) PPC_WEAK_FUNC(sub_8386C8E0);
PPC_FUNC_IMPL(__imp__sub_8386C8E0) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r3,4,28,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 4) & 0xF;
	// rlwinm r10,r3,5,27,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 5) & 0x1E;
	// lis r8,-31743
	ctx.r8.s64 = -2080309248;
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,14608(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 14608);
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mftb r6
	ctx.r6.u64 = PPC_QUERY_TIMEBASE();
	// lwz r5,4(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// clrlwi r4,r3,4
	ctx.r4.u64 = ctx.r3.u32 & 0xFFFFFFF;
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// rlwinm r10,r5,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 4) & 0xFFFFFFF0;
	// stdx r6,r10,r3
	PPC_STORE_U64(ctx.r10.u32 + ctx.r3.u32, ctx.r6.u64);
	// lwz r10,14608(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 14608);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// rlwinm r9,r9,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// add r7,r9,r10
	ctx.r7.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r4,8(r7)
	PPC_STORE_U32(ctx.r7.u32 + 8, ctx.r4.u32);
	// lwz r10,14608(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 14608);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r6,r10,1
	ctx.r6.s64 = ctx.r10.s64 + 1;
	// stw r6,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r6.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8386C94C"))) PPC_WEAK_FUNC(sub_8386C94C);
PPC_FUNC_IMPL(__imp__sub_8386C94C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8386C950"))) PPC_WEAK_FUNC(sub_8386C950);
PPC_FUNC_IMPL(__imp__sub_8386C950) {
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
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// li r4,4000
	ctx.r4.s64 = 4000;
	// addi r30,r11,14624
	ctx.r30.s64 = ctx.r11.s64 + 14624;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83d7562c
	ctx.lr = 0x8386C978;
	__imp__RtlInitializeCriticalSectionAndSpinCount(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
	// li r4,4
	ctx.r4.s64 = 4;
	// stw r31,28(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28, ctx.r31.u32);
	// li r3,384
	ctx.r3.s64 = 384;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// bl 0x838636d0
	ctx.lr = 0x8386C990;
	sub_838636D0(ctx, base);
	// lis r8,-31743
	ctx.r8.s64 = -2080309248;
	// li r9,32
	ctx.r9.s64 = 32;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// addi r11,r3,-4
	ctx.r11.s64 = ctx.r3.s64 + -4;
	// stw r3,14620(r8)
	PPC_STORE_U32(ctx.r8.u32 + 14620, ctx.r3.u32);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_8386C9A8:
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r31,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r31.u32);
	// stwu r31,12(r11)
	ea = 12 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r31.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8386c9a8
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8386C9A8;
	// lwz r11,14620(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 14620);
	// lis r9,-31743
	ctx.r9.s64 = -2080309248;
	// lis r8,-31743
	ctx.r8.s64 = -2080309248;
	// li r10,1
	ctx.r10.s64 = 1;
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,14656(r9)
	PPC_STORE_U32(ctx.r9.u32 + 14656, ctx.r11.u32);
	// stw r10,14616(r8)
	PPC_STORE_U32(ctx.r8.u32 + 14616, ctx.r10.u32);
	// lwz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r5,7(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 7);
	// ori r4,r5,256
	ctx.r4.u64 = ctx.r5.u64 | 256;
	// stw r4,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r4.u32);
	// stw r31,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r31.u32);
	// stb r6,7(r11)
	PPC_STORE_U8(ctx.r11.u32 + 7, ctx.r6.u8);
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

__attribute__((alias("__imp__sub_8386CA0C"))) PPC_WEAK_FUNC(sub_8386CA0C);
PPC_FUNC_IMPL(__imp__sub_8386CA0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8386CA10"))) PPC_WEAK_FUNC(sub_8386CA10);
PPC_FUNC_IMPL(__imp__sub_8386CA10) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x8386CA18;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8386cb54
	if (cr6.eq) goto loc_8386CB54;
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// addi r31,r11,14624
	ctx.r31.s64 = ctx.r11.s64 + 14624;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83d7554c
	ctx.lr = 0x8386CA38;
	__imp__RtlEnterCriticalSection(ctx, base);
	// li r27,1
	ctx.r27.s64 = 1;
	// addi r8,r31,28
	ctx.r8.s64 = ctx.r31.s64 + 28;
loc_8386CA40:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r8
	ea = ctx.r8.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r11.u64 = __builtin_bswap32(reserved.u32);
	// add r10,r27,r11
	ctx.r10.u64 = ctx.r27.u64 + ctx.r11.u64;
	// stwcx. r10,0,r8
	ea = ctx.r8.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8386ca40
	if (!cr0.eq) goto loc_8386CA40;
	// rlwinm r11,r30,1,23,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0x1FE;
	// clrlwi r10,r30,24
	ctx.r10.u64 = ctx.r30.u32 & 0xFF;
	// lis r28,-31743
	ctx.r28.s64 = -2080309248;
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// li r25,-1
	ctx.r25.s64 = -1;
	// rlwinm r29,r7,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,14620(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 14620);
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// lwz r6,4(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// subf r5,r6,r30
	ctx.r5.s64 = ctx.r30.s64 - ctx.r6.s64;
	// addic r4,r5,-1
	xer.ca = ctx.r5.u32 > 0;
	ctx.r4.s64 = ctx.r5.s64 + -1;
	// subfe r10,r3,r3
	temp.u8 = (~ctx.r3.u32 + ctx.r3.u32 < ~ctx.r3.u32) | (~ctx.r3.u32 + ctx.r3.u32 + xer.ca < xer.ca);
	ctx.r10.u64 = ~ctx.r3.u64 + ctx.r3.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8386cb1c
	if (cr6.eq) goto loc_8386CB1C;
loc_8386CA98:
	// lwz r26,8(r11)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r8,r31,28
	ctx.r8.s64 = ctx.r31.s64 + 28;
loc_8386CAA0:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r8
	ea = ctx.r8.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r11.u64 = __builtin_bswap32(reserved.u32);
	// add r10,r25,r11
	ctx.r10.u64 = ctx.r25.u64 + ctx.r11.u64;
	// stwcx. r10,0,r8
	ea = ctx.r8.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8386caa0
	if (!cr0.eq) goto loc_8386CAA0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83d7553c
	ctx.lr = 0x8386CAC4;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(ctx.r26.u32, 0, xer);
	// bne cr6,0x8386cb4c
	if (!cr6.eq) goto loc_8386CB4C;
	// bl 0x832d22c0
	ctx.lr = 0x8386CAD0;
	sub_832D22C0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83d7554c
	ctx.lr = 0x8386CAD8;
	__imp__RtlEnterCriticalSection(ctx, base);
	// addi r8,r31,28
	ctx.r8.s64 = ctx.r31.s64 + 28;
loc_8386CADC:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r8
	ea = ctx.r8.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r11.u64 = __builtin_bswap32(reserved.u32);
	// add r10,r27,r11
	ctx.r10.u64 = ctx.r27.u64 + ctx.r11.u64;
	// stwcx. r10,0,r8
	ea = ctx.r8.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8386cadc
	if (!cr0.eq) goto loc_8386CADC;
	// lwz r11,14620(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 14620);
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// subf r6,r7,r30
	ctx.r6.s64 = ctx.r30.s64 - ctx.r7.s64;
	// addic r5,r6,-1
	xer.ca = ctx.r6.u32 > 0;
	ctx.r5.s64 = ctx.r6.s64 + -1;
	// subfe r3,r4,r4
	temp.u8 = (~ctx.r4.u32 + ctx.r4.u32 < ~ctx.r4.u32) | (~ctx.r4.u32 + ctx.r4.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~ctx.r4.u64 + ctx.r4.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 & ctx.r11.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8386ca98
	if (!cr6.eq) goto loc_8386CA98;
loc_8386CB1C:
	// addi r8,r31,28
	ctx.r8.s64 = ctx.r31.s64 + 28;
loc_8386CB20:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r8
	ea = ctx.r8.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r11.u64 = __builtin_bswap32(reserved.u32);
	// add r10,r25,r11
	ctx.r10.u64 = ctx.r25.u64 + ctx.r11.u64;
	// stwcx. r10,0,r8
	ea = ctx.r8.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8386cb20
	if (!cr0.eq) goto loc_8386CB20;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83d7553c
	ctx.lr = 0x8386CB44;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_8386CB4C:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x83860d78
	ctx.lr = 0x8386CB54;
	sub_83860D78(ctx, base);
loc_8386CB54:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8386CB5C"))) PPC_WEAK_FUNC(sub_8386CB5C);
PPC_FUNC_IMPL(__imp__sub_8386CB5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8386CB60"))) PPC_WEAK_FUNC(sub_8386CB60);
PPC_FUNC_IMPL(__imp__sub_8386CB60) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
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
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// addi r31,r11,14624
	ctx.r31.s64 = ctx.r11.s64 + 14624;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83d7554c
	ctx.lr = 0x8386CB84;
	__imp__RtlEnterCriticalSection(ctx, base);
	// addi r10,r31,28
	ctx.r10.s64 = ctx.r31.s64 + 28;
	// li r7,1
	ctx.r7.s64 = 1;
loc_8386CB8C:
	// mfmsr r6
	ctx.r6.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r9,0,r10
	ea = ctx.r10.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r9.u64 = __builtin_bswap32(reserved.u32);
	// add r8,r7,r9
	ctx.r8.u64 = ctx.r7.u64 + ctx.r9.u64;
	// stwcx. r8,0,r10
	ea = ctx.r10.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r8.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r6,1
	ctx.msr = (ctx.r6.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8386cb8c
	if (!cr0.eq) goto loc_8386CB8C;
	// lis r30,-31743
	ctx.r30.s64 = -2080309248;
	// lwz r3,14620(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 14620);
	// bl 0x83863770
	ctx.lr = 0x8386CBB4;
	sub_83863770(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r3,r31,28
	ctx.r3.s64 = ctx.r31.s64 + 28;
	// stw r11,14620(r30)
	PPC_STORE_U32(ctx.r30.u32 + 14620, ctx.r11.u32);
	// li r9,-1
	ctx.r9.s64 = -1;
loc_8386CBC4:
	// mfmsr r10
	ctx.r10.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r5,0,r3
	ea = ctx.r3.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r5.u64 = __builtin_bswap32(reserved.u32);
	// add r4,r9,r5
	ctx.r4.u64 = ctx.r9.u64 + ctx.r5.u64;
	// stwcx. r4,0,r3
	ea = ctx.r3.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r4.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r10,1
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8386cbc4
	if (!cr0.eq) goto loc_8386CBC4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83d7553c
	ctx.lr = 0x8386CBE8;
	__imp__RtlLeaveCriticalSection(ctx, base);
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

__attribute__((alias("__imp__sub_8386CC00"))) PPC_WEAK_FUNC(sub_8386CC00);
PPC_FUNC_IMPL(__imp__sub_8386CC00) {
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
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// addi r31,r11,14624
	ctx.r31.s64 = ctx.r11.s64 + 14624;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83d7554c
	ctx.lr = 0x8386CC24;
	__imp__RtlEnterCriticalSection(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r7,r31,28
	ctx.r7.s64 = ctx.r31.s64 + 28;
loc_8386CC2C:
	// mfmsr r8
	ctx.r8.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r7
	ea = ctx.r7.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stwcx. r9,0,r7
	ea = ctx.r7.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r8,1
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8386cc2c
	if (!cr0.eq) goto loc_8386CC2C;
	// lis r9,-31743
	ctx.r9.s64 = -2080309248;
	// lwz r11,14656(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 14656);
	// lwz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r6,31
	cr6.compare<int32_t>(ctx.r6.s32, 31, xer);
	// bge cr6,0x8386cc64
	if (!cr6.lt) goto loc_8386CC64;
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// b 0x8386cc6c
	goto loc_8386CC6C;
loc_8386CC64:
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// lwz r11,14620(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 14620);
loc_8386CC6C:
	// lis r8,-31743
	ctx.r8.s64 = -2080309248;
	// stw r11,14656(r9)
	PPC_STORE_U32(ctx.r9.u32 + 14656, ctx.r11.u32);
	// lis r10,255
	ctx.r10.s64 = 16711680;
	// ori r7,r10,65535
	ctx.r7.u64 = ctx.r10.u64 | 65535;
	// lwz r10,14616(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 14616);
	// cmplw cr6,r10,r7
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, xer);
	// bne cr6,0x8386cc90
	if (!cr6.eq) goto loc_8386CC90;
	// li r10,1
	ctx.r10.s64 = 1;
	// b 0x8386cc94
	goto loc_8386CC94;
loc_8386CC90:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
loc_8386CC94:
	// stw r10,14616(r8)
	PPC_STORE_U32(ctx.r8.u32 + 14616, ctx.r10.u32);
	// rlwinm r7,r10,8,0,23
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r3,0
	ctx.r3.s64 = 0;
	// lbz r8,7(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 7);
	// or r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 | ctx.r7.u64;
	// mr r7,r4
	ctx.r7.u64 = ctx.r4.u64;
	// stw r8,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// stw r3,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r3.u32);
	// addi r4,r31,28
	ctx.r4.s64 = ctx.r31.s64 + 28;
	// stb r7,7(r11)
	PPC_STORE_U8(ctx.r11.u32 + 7, ctx.r7.u8);
	// li r3,-1
	ctx.r3.s64 = -1;
	// lwz r11,14656(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 14656);
	// lwz r30,4(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
loc_8386CCCC:
	// mfmsr r10
	ctx.r10.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r6,0,r4
	ea = ctx.r4.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r6.u64 = __builtin_bswap32(reserved.u32);
	// add r5,r3,r6
	ctx.r5.u64 = ctx.r3.u64 + ctx.r6.u64;
	// stwcx. r5,0,r4
	ea = ctx.r4.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r5.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r10,1
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8386cccc
	if (!cr0.eq) goto loc_8386CCCC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83d7553c
	ctx.lr = 0x8386CCF0;
	__imp__RtlLeaveCriticalSection(ctx, base);
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

__attribute__((alias("__imp__sub_8386CD0C"))) PPC_WEAK_FUNC(sub_8386CD0C);
PPC_FUNC_IMPL(__imp__sub_8386CD0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8386CD10"))) PPC_WEAK_FUNC(sub_8386CD10);
PPC_FUNC_IMPL(__imp__sub_8386CD10) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x8386CD18;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r31,r11,14624
	ctx.r31.s64 = ctx.r11.s64 + 14624;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83d7554c
	ctx.lr = 0x8386CD34;
	__imp__RtlEnterCriticalSection(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r7,r31,28
	ctx.r7.s64 = ctx.r31.s64 + 28;
loc_8386CD3C:
	// mfmsr r8
	ctx.r8.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r7
	ea = ctx.r7.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stwcx. r9,0,r7
	ea = ctx.r7.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r8,1
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8386cd3c
	if (!cr0.eq) goto loc_8386CD3C;
	// clrlwi r10,r29,24
	ctx.r10.u64 = ctx.r29.u32 & 0xFF;
	// rlwinm r11,r29,1,23,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0x1FE;
	// lis r6,-31743
	ctx.r6.s64 = -2080309248;
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r10,r5,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,14620(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 14620);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// subf r3,r4,r29
	ctx.r3.s64 = ctx.r29.s64 - ctx.r4.s64;
	// addic r10,r3,-1
	xer.ca = ctx.r3.u32 > 0;
	ctx.r10.s64 = ctx.r3.s64 + -1;
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 & ctx.r11.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8386cd94
	if (cr6.eq) goto loc_8386CD94;
	// stw r30,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r30.u32);
loc_8386CD94:
	// li r10,-1
	ctx.r10.s64 = -1;
	// addi r7,r31,28
	ctx.r7.s64 = ctx.r31.s64 + 28;
loc_8386CD9C:
	// mfmsr r8
	ctx.r8.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r7
	ea = ctx.r7.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r11.u64 = __builtin_bswap32(reserved.u32);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stwcx. r9,0,r7
	ea = ctx.r7.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r8,1
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8386cd9c
	if (!cr0.eq) goto loc_8386CD9C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83d7553c
	ctx.lr = 0x8386CDC0;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8386CDC8"))) PPC_WEAK_FUNC(sub_8386CDC8);
PPC_FUNC_IMPL(__imp__sub_8386CDC8) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r30,r11,14660
	ctx.r30.s64 = ctx.r11.s64 + 14660;
	// li r4,4000
	ctx.r4.s64 = 4000;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83d7562c
	ctx.lr = 0x8386CDF4;
	__imp__RtlInitializeCriticalSectionAndSpinCount(ctx, base);
	// lis r10,-31743
	ctx.r10.s64 = -2080309248;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r9,-31743
	ctx.r9.s64 = -2080309248;
	// stw r11,28(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28, ctx.r11.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r11,14692(r10)
	PPC_STORE_U32(ctx.r10.u32 + 14692, ctx.r11.u32);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stw r11,14696(r9)
	PPC_STORE_U32(ctx.r9.u32 + 14696, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_8386CE30"))) PPC_WEAK_FUNC(sub_8386CE30);
PPC_FUNC_IMPL(__imp__sub_8386CE30) {
	PPC_FUNC_PROLOGUE();
	// lis r9,-31743
	ctx.r9.s64 = -2080309248;
	// lis r8,-31743
	ctx.r8.s64 = -2080309248;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,14692(r9)
	PPC_STORE_U32(ctx.r9.u32 + 14692, ctx.r11.u32);
	// stw r10,14696(r8)
	PPC_STORE_U32(ctx.r8.u32 + 14696, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8386CE4C"))) PPC_WEAK_FUNC(sub_8386CE4C);
PPC_FUNC_IMPL(__imp__sub_8386CE4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8386CE50"))) PPC_WEAK_FUNC(sub_8386CE50);
PPC_FUNC_IMPL(__imp__sub_8386CE50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x8386CE58;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r31,r11,14660
	ctx.r31.s64 = ctx.r11.s64 + 14660;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// bl 0x83d7554c
	ctx.lr = 0x8386CE7C;
	__imp__RtlEnterCriticalSection(ctx, base);
	// addi r10,r31,28
	ctx.r10.s64 = ctx.r31.s64 + 28;
	// li r7,1
	ctx.r7.s64 = 1;
loc_8386CE84:
	// mfmsr r6
	ctx.r6.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r9,0,r10
	ea = ctx.r10.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r9.u64 = __builtin_bswap32(reserved.u32);
	// add r8,r7,r9
	ctx.r8.u64 = ctx.r7.u64 + ctx.r9.u64;
	// stwcx. r8,0,r10
	ea = ctx.r10.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r8.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r6,1
	ctx.msr = (ctx.r6.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8386ce84
	if (!cr0.eq) goto loc_8386CE84;
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,14692(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 14692);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8386CEC0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r7,r31,28
	ctx.r7.s64 = ctx.r31.s64 + 28;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
loc_8386CECC:
	// mfmsr r6
	ctx.r6.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r9,0,r7
	ea = ctx.r7.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r9.u64 = __builtin_bswap32(reserved.u32);
	// add r8,r5,r9
	ctx.r8.u64 = ctx.r5.u64 + ctx.r9.u64;
	// stwcx. r8,0,r7
	ea = ctx.r7.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r8.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r6,1
	ctx.msr = (ctx.r6.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8386cecc
	if (!cr0.eq) goto loc_8386CECC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83d7553c
	ctx.lr = 0x8386CEF0;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8386CEFC"))) PPC_WEAK_FUNC(sub_8386CEFC);
PPC_FUNC_IMPL(__imp__sub_8386CEFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8386CF00"))) PPC_WEAK_FUNC(sub_8386CF00);
PPC_FUNC_IMPL(__imp__sub_8386CF00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCRegister reserved{};
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
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r31,r11,14660
	ctx.r31.s64 = ctx.r11.s64 + 14660;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83d7554c
	ctx.lr = 0x8386CF28;
	__imp__RtlEnterCriticalSection(ctx, base);
	// addi r10,r31,28
	ctx.r10.s64 = ctx.r31.s64 + 28;
	// li r7,1
	ctx.r7.s64 = 1;
loc_8386CF30:
	// mfmsr r6
	ctx.r6.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r9,0,r10
	ea = ctx.r10.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r9.u64 = __builtin_bswap32(reserved.u32);
	// add r8,r7,r9
	ctx.r8.u64 = ctx.r7.u64 + ctx.r9.u64;
	// stwcx. r8,0,r10
	ea = ctx.r10.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r8.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r6,1
	ctx.msr = (ctx.r6.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8386cf30
	if (!cr0.eq) goto loc_8386CF30;
	// lis r5,-31743
	ctx.r5.s64 = -2080309248;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,14696(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 14696);
	// mtctr r4
	ctr.u64 = ctx.r4.u64;
	// bctrl 
	ctx.lr = 0x8386CF60;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r10,r31,28
	ctx.r10.s64 = ctx.r31.s64 + 28;
	// li r8,-1
	ctx.r8.s64 = -1;
loc_8386CF68:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r3,0,r10
	ea = ctx.r10.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r3.u64 = __builtin_bswap32(reserved.u32);
	// add r11,r8,r3
	ctx.r11.u64 = ctx.r8.u64 + ctx.r3.u64;
	// stwcx. r11,0,r10
	ea = ctx.r10.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8386cf68
	if (!cr0.eq) goto loc_8386CF68;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83d7553c
	ctx.lr = 0x8386CF8C;
	__imp__RtlLeaveCriticalSection(ctx, base);
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

__attribute__((alias("__imp__sub_8386CFA4"))) PPC_WEAK_FUNC(sub_8386CFA4);
PPC_FUNC_IMPL(__imp__sub_8386CFA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8386CFA8"))) PPC_WEAK_FUNC(sub_8386CFA8);
PPC_FUNC_IMPL(__imp__sub_8386CFA8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// addi r10,r4,-1
	ctx.r10.s64 = ctx.r4.s64 + -1;
	// rlwinm r10,r10,25,7,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 25) & 0x1FFFFFF;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_8386CFC4:
	// dcbf r11,r3
	// addi r11,r11,128
	ctx.r11.s64 = ctx.r11.s64 + 128;
	// bdnz 0x8386cfc4
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8386CFC4;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8386CFD4"))) PPC_WEAK_FUNC(sub_8386CFD4);
PPC_FUNC_IMPL(__imp__sub_8386CFD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8386CFD8"))) PPC_WEAK_FUNC(sub_8386CFD8);
PPC_FUNC_IMPL(__imp__sub_8386CFD8) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r3,12,20,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 12) & 0xFFF;
	// clrlwi r10,r3,3
	ctx.r10.u64 = ctx.r3.u32 & 0x1FFFFFFF;
	// addi r11,r11,512
	ctx.r11.s64 = ctx.r11.s64 + 512;
	// rlwinm r11,r11,0,19,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addis r3,r10,-16384
	ctx.r3.s64 = ctx.r10.s64 + -1073741824;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8386CFF4"))) PPC_WEAK_FUNC(sub_8386CFF4);
PPC_FUNC_IMPL(__imp__sub_8386CFF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8386CFF8"))) PPC_WEAK_FUNC(sub_8386CFF8);
PPC_FUNC_IMPL(__imp__sub_8386CFF8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r10,-31743
	ctx.r10.s64 = -2080309248;
	// lwz r11,14700(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 14700);
	// cmplwi cr6,r11,8191
	cr6.compare<uint32_t>(ctx.r11.u32, 8191, xer);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// blt cr6,0x8386d010
	if (cr6.lt) goto loc_8386D010;
	// li r11,1
	ctx.r11.s64 = 1;
loc_8386D010:
	// stw r11,14700(r10)
	PPC_STORE_U32(ctx.r10.u32 + 14700, ctx.r11.u32);
	// rlwimi r11,r4,13,0,18
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r4.u32, 13) & 0xFFFFE000) | (ctx.r11.u64 & 0xFFFFFFFF00001FFF);
	// rlwimi r5,r11,15,0,16
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r11.u32, 15) & 0xFFFF8000) | (ctx.r5.u64 & 0xFFFFFFFF00007FFF);
	// stw r5,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8386D024"))) PPC_WEAK_FUNC(sub_8386D024);
PPC_FUNC_IMPL(__imp__sub_8386D024) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8386D028"))) PPC_WEAK_FUNC(sub_8386D028);
PPC_FUNC_IMPL(__imp__sub_8386D028) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r4,0,17,3
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFFFFFF0007FFF;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8386D034"))) PPC_WEAK_FUNC(sub_8386D034);
PPC_FUNC_IMPL(__imp__sub_8386D034) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8386D038"))) PPC_WEAK_FUNC(sub_8386D038);
PPC_FUNC_IMPL(__imp__sub_8386D038) {
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
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// li r4,4000
	ctx.r4.s64 = 4000;
	// addi r31,r11,14704
	ctx.r31.s64 = ctx.r11.s64 + 14704;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83d7562c
	ctx.lr = 0x8386D05C;
	__imp__RtlInitializeCriticalSectionAndSpinCount(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_8386D078"))) PPC_WEAK_FUNC(sub_8386D078);
PPC_FUNC_IMPL(__imp__sub_8386D078) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,28
	ctx.r3.s64 = ctx.r3.s64 + 28;
	// b 0x8386e010
	sub_8386E010(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8386D080"))) PPC_WEAK_FUNC(sub_8386D080);
PPC_FUNC_IMPL(__imp__sub_8386D080) {
	PPC_FUNC_PROLOGUE();
	// b 0x831d2980
	sub_831D2980(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8386D084"))) PPC_WEAK_FUNC(sub_8386D084);
PPC_FUNC_IMPL(__imp__sub_8386D084) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8386D088"))) PPC_WEAK_FUNC(sub_8386D088);
PPC_FUNC_IMPL(__imp__sub_8386D088) {
	PPC_FUNC_PROLOGUE();
	// b 0x831d2968
	sub_831D2968(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8386D08C"))) PPC_WEAK_FUNC(sub_8386D08C);
PPC_FUNC_IMPL(__imp__sub_8386D08C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8386D090"))) PPC_WEAK_FUNC(sub_8386D090);
PPC_FUNC_IMPL(__imp__sub_8386D090) {
	PPC_FUNC_PROLOGUE();
	// b 0x832d20c8
	sub_832D20C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8386D094"))) PPC_WEAK_FUNC(sub_8386D094);
PPC_FUNC_IMPL(__imp__sub_8386D094) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8386D098"))) PPC_WEAK_FUNC(sub_8386D098);
PPC_FUNC_IMPL(__imp__sub_8386D098) {
	PPC_FUNC_PROLOGUE();
	// b 0x832d21c0
	sub_832D21C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8386D09C"))) PPC_WEAK_FUNC(sub_8386D09C);
PPC_FUNC_IMPL(__imp__sub_8386D09C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8386D0A0"))) PPC_WEAK_FUNC(sub_8386D0A0);
PPC_FUNC_IMPL(__imp__sub_8386D0A0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lis r10,-31743
	ctx.r10.s64 = -2080309248;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8386d0b8
	if (!cr6.eq) goto loc_8386D0B8;
	// lis r11,-31865
	ctx.r11.s64 = -2088304640;
	// addi r11,r11,-12144
	ctx.r11.s64 = ctx.r11.s64 + -12144;
loc_8386D0B8:
	// stw r11,14736(r10)
	PPC_STORE_U32(ctx.r10.u32 + 14736, ctx.r11.u32);
	// lis r10,-31743
	ctx.r10.s64 = -2080309248;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// bne cr6,0x8386d0d8
	if (!cr6.eq) goto loc_8386D0D8;
	// lis r11,-31865
	ctx.r11.s64 = -2088304640;
	// addi r11,r11,-12136
	ctx.r11.s64 = ctx.r11.s64 + -12136;
loc_8386D0D8:
	// stw r11,14740(r10)
	PPC_STORE_U32(ctx.r10.u32 + 14740, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8386D0E0"))) PPC_WEAK_FUNC(sub_8386D0E0);
PPC_FUNC_IMPL(__imp__sub_8386D0E0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x8386D0E8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// bl 0x83866140
	ctx.lr = 0x8386D100;
	sub_83866140(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8386d114
	if (!cr6.eq) goto loc_8386D114;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_8386D114:
	// bl 0x83860c48
	ctx.lr = 0x8386D118;
	sub_83860C48(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83ae4538
	ctx.lr = 0x8386D12C;
	sub_83AE4538(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x83860cc8
	ctx.lr = 0x8386D134;
	sub_83860CC8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83867558
	ctx.lr = 0x8386D13C;
	sub_83867558(ctx, base);
	// rlwinm r11,r30,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0x1;
	// xori r3,r11,1
	ctx.r3.u64 = ctx.r11.u64 ^ 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8386D14C"))) PPC_WEAK_FUNC(sub_8386D14C);
PPC_FUNC_IMPL(__imp__sub_8386D14C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8386D150"))) PPC_WEAK_FUNC(sub_8386D150);
PPC_FUNC_IMPL(__imp__sub_8386D150) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// li r9,8
	ctx.r9.s64 = 8;
	// addi r10,r1,-36
	ctx.r10.s64 = ctx.r1.s64 + -36;
	// addi r11,r3,32
	ctx.r11.s64 = ctx.r3.s64 + 32;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_8386D160:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8386d160
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8386D160;
	// lwz r6,-28(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + -28);
	// lwz r10,-4(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -4);
	// rlwinm r11,r6,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x40;
	// lwz r7,-8(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// lwz r8,-12(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// lwz r9,-16(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// lwz r5,-20(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + -20);
	// beq cr6,0x8386d2f8
	if (cr6.eq) goto loc_8386D2F8;
	// cmplwi cr6,r5,32
	cr6.compare<uint32_t>(ctx.r5.u32, 32, xer);
	// bne cr6,0x8386d250
	if (!cr6.eq) goto loc_8386D250;
	// lis r11,255
	ctx.r11.s64 = 16711680;
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, xer);
	// bne cr6,0x8386d1e0
	if (!cr6.eq) goto loc_8386D1E0;
	// cmplwi cr6,r8,65280
	cr6.compare<uint32_t>(ctx.r8.u32, 65280, xer);
	// bne cr6,0x8386d2f8
	if (!cr6.eq) goto loc_8386D2F8;
	// cmplwi cr6,r7,255
	cr6.compare<uint32_t>(ctx.r7.u32, 255, xer);
	// bne cr6,0x8386d2f8
	if (!cr6.eq) goto loc_8386D2F8;
	// lis r11,-256
	ctx.r11.s64 = -16777216;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// bne cr6,0x8386d1cc
	if (!cr6.eq) goto loc_8386D1CC;
	// lis r3,6184
	ctx.r3.s64 = 405274624;
	// ori r3,r3,390
	ctx.r3.u64 = ctx.r3.u64 | 390;
	// blr 
	return;
loc_8386D1CC:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8386d2f8
	if (!cr6.eq) goto loc_8386D2F8;
	// lis r3,10280
	ctx.r3.s64 = 673710080;
	// ori r3,r3,390
	ctx.r3.u64 = ctx.r3.u64 | 390;
	// blr 
	return;
loc_8386D1E0:
	// cmplwi cr6,r9,255
	cr6.compare<uint32_t>(ctx.r9.u32, 255, xer);
	// bne cr6,0x8386d224
	if (!cr6.eq) goto loc_8386D224;
	// cmplw cr6,r8,r11
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, xer);
	// bne cr6,0x8386d2f8
	if (!cr6.eq) goto loc_8386D2F8;
	// cmplwi cr6,r7,65280
	cr6.compare<uint32_t>(ctx.r7.u32, 65280, xer);
	// bne cr6,0x8386d2f8
	if (!cr6.eq) goto loc_8386D2F8;
	// lis r11,-256
	ctx.r11.s64 = -16777216;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// bne cr6,0x8386d210
	if (!cr6.eq) goto loc_8386D210;
	// lis r3,6688
	ctx.r3.s64 = 438304768;
	// ori r3,r3,390
	ctx.r3.u64 = ctx.r3.u64 | 390;
	// blr 
	return;
loc_8386D210:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8386d2f8
	if (!cr6.eq) goto loc_8386D2F8;
	// lis r3,10784
	ctx.r3.s64 = 706740224;
	// ori r3,r3,390
	ctx.r3.u64 = ctx.r3.u64 | 390;
	// blr 
	return;
loc_8386D224:
	// cmpwi cr6,r9,-1
	cr6.compare<int32_t>(ctx.r9.s32, -1, xer);
	// bne cr6,0x8386d2f8
	if (!cr6.eq) goto loc_8386D2F8;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x8386d2f8
	if (!cr6.eq) goto loc_8386D2F8;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// bne cr6,0x8386d2f8
	if (!cr6.eq) goto loc_8386D2F8;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8386d2f8
	if (!cr6.eq) goto loc_8386D2F8;
	// lis r3,11682
	ctx.r3.s64 = 765591552;
	// ori r3,r3,43940
	ctx.r3.u64 = ctx.r3.u64 | 43940;
	// blr 
	return;
loc_8386D250:
	// cmplwi cr6,r5,24
	cr6.compare<uint32_t>(ctx.r5.u32, 24, xer);
	// bne cr6,0x8386d284
	if (!cr6.eq) goto loc_8386D284;
	// lis r11,255
	ctx.r11.s64 = 16711680;
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, xer);
	// bne cr6,0x8386d2f8
	if (!cr6.eq) goto loc_8386D2F8;
	// cmplwi cr6,r8,65280
	cr6.compare<uint32_t>(ctx.r8.u32, 65280, xer);
	// bne cr6,0x8386d2f8
	if (!cr6.eq) goto loc_8386D2F8;
	// cmplwi cr6,r7,255
	cr6.compare<uint32_t>(ctx.r7.u32, 255, xer);
	// bne cr6,0x8386d2f8
	if (!cr6.eq) goto loc_8386D2F8;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8386d2f8
	if (!cr6.eq) goto loc_8386D2F8;
loc_8386D27C:
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_8386D284:
	// cmplwi cr6,r5,16
	cr6.compare<uint32_t>(ctx.r5.u32, 16, xer);
	// bne cr6,0x8386d2f8
	if (!cr6.eq) goto loc_8386D2F8;
	// cmplwi cr6,r9,3840
	cr6.compare<uint32_t>(ctx.r9.u32, 3840, xer);
	// bne cr6,0x8386d2cc
	if (!cr6.eq) goto loc_8386D2CC;
	// cmplwi cr6,r8,240
	cr6.compare<uint32_t>(ctx.r8.u32, 240, xer);
	// bne cr6,0x8386d2f8
	if (!cr6.eq) goto loc_8386D2F8;
	// cmplwi cr6,r7,15
	cr6.compare<uint32_t>(ctx.r7.u32, 15, xer);
	// bne cr6,0x8386d2f8
	if (!cr6.eq) goto loc_8386D2F8;
	// cmplwi cr6,r10,61440
	cr6.compare<uint32_t>(ctx.r10.u32, 61440, xer);
	// bne cr6,0x8386d2b8
	if (!cr6.eq) goto loc_8386D2B8;
	// lis r3,6184
	ctx.r3.s64 = 405274624;
	// ori r3,r3,335
	ctx.r3.u64 = ctx.r3.u64 | 335;
	// blr 
	return;
loc_8386D2B8:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8386d2f8
	if (!cr6.eq) goto loc_8386D2F8;
	// lis r3,10280
	ctx.r3.s64 = 673710080;
	// ori r3,r3,335
	ctx.r3.u64 = ctx.r3.u64 | 335;
	// blr 
	return;
loc_8386D2CC:
	// cmplwi cr6,r9,63488
	cr6.compare<uint32_t>(ctx.r9.u32, 63488, xer);
	// bne cr6,0x8386d2f8
	if (!cr6.eq) goto loc_8386D2F8;
	// cmplwi cr6,r8,2016
	cr6.compare<uint32_t>(ctx.r8.u32, 2016, xer);
	// bne cr6,0x8386d2f8
	if (!cr6.eq) goto loc_8386D2F8;
	// cmplwi cr6,r7,31
	cr6.compare<uint32_t>(ctx.r7.u32, 31, xer);
	// bne cr6,0x8386d2f8
	if (!cr6.eq) goto loc_8386D2F8;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8386d2f8
	if (!cr6.eq) goto loc_8386D2F8;
	// lis r3,10280
	ctx.r3.s64 = 673710080;
	// ori r3,r3,324
	ctx.r3.u64 = ctx.r3.u64 | 324;
	// blr 
	return;
loc_8386D2F8:
	// clrlwi r11,r6,14
	ctx.r11.u64 = ctx.r6.u32 & 0x3FFFF;
	// rlwinm r11,r11,0,31,14
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFE0001;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8386d33c
	if (cr6.eq) goto loc_8386D33C;
	// cmplwi cr6,r5,16
	cr6.compare<uint32_t>(ctx.r5.u32, 16, xer);
	// bne cr6,0x8386d33c
	if (!cr6.eq) goto loc_8386D33C;
	// cmplwi cr6,r9,255
	cr6.compare<uint32_t>(ctx.r9.u32, 255, xer);
	// bne cr6,0x8386d33c
	if (!cr6.eq) goto loc_8386D33C;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x8386d33c
	if (!cr6.eq) goto loc_8386D33C;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// bne cr6,0x8386d33c
	if (!cr6.eq) goto loc_8386D33C;
	// cmplwi cr6,r10,65280
	cr6.compare<uint32_t>(ctx.r10.u32, 65280, xer);
	// bne cr6,0x8386d33c
	if (!cr6.eq) goto loc_8386D33C;
	// lis r3,2048
	ctx.r3.s64 = 134217728;
	// ori r3,r3,330
	ctx.r3.u64 = ctx.r3.u64 | 330;
	// blr 
	return;
loc_8386D33C:
	// rlwinm r11,r6,0,14,14
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x20000;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8386d35c
	if (cr6.eq) goto loc_8386D35C;
	// cmplwi cr6,r5,8
	cr6.compare<uint32_t>(ctx.r5.u32, 8, xer);
	// bne cr6,0x8386d35c
	if (!cr6.eq) goto loc_8386D35C;
	// lis r3,10240
	ctx.r3.s64 = 671088640;
	// ori r3,r3,258
	ctx.r3.u64 = ctx.r3.u64 | 258;
	// blr 
	return;
loc_8386D35C:
	// rlwinm r11,r6,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8386d37c
	if (cr6.eq) goto loc_8386D37C;
	// cmplwi cr6,r5,8
	cr6.compare<uint32_t>(ctx.r5.u32, 8, xer);
	// bne cr6,0x8386d37c
	if (!cr6.eq) goto loc_8386D37C;
	// lis r3,1168
	ctx.r3.s64 = 76546048;
	// ori r3,r3,258
	ctx.r3.u64 = ctx.r3.u64 | 258;
	// blr 
	return;
loc_8386D37C:
	// rlwinm r11,r6,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8386d27c
	if (cr6.eq) goto loc_8386D27C;
	// lis r10,12628
	ctx.r10.s64 = 827588608;
	// lwz r11,-24(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -24);
	// ori r9,r10,22596
	ctx.r9.u64 = ctx.r10.u64 | 22596;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// bne cr6,0x8386d3a8
	if (!cr6.eq) goto loc_8386D3A8;
	// lis r3,6688
	ctx.r3.s64 = 438304768;
	// ori r3,r3,338
	ctx.r3.u64 = ctx.r3.u64 | 338;
	// blr 
	return;
loc_8386D3A8:
	// lis r10,12884
	ctx.r10.s64 = 844365824;
	// ori r9,r10,22596
	ctx.r9.u64 = ctx.r10.u64 | 22596;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// bne cr6,0x8386d3c4
	if (!cr6.eq) goto loc_8386D3C4;
loc_8386D3B8:
	// lis r3,6688
	ctx.r3.s64 = 438304768;
	// ori r3,r3,339
	ctx.r3.u64 = ctx.r3.u64 | 339;
	// blr 
	return;
loc_8386D3C4:
	// lis r10,13140
	ctx.r10.s64 = 861143040;
	// ori r9,r10,22596
	ctx.r9.u64 = ctx.r10.u64 | 22596;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// beq cr6,0x8386d3b8
	if (cr6.eq) goto loc_8386D3B8;
	// lis r10,13396
	ctx.r10.s64 = 877920256;
	// ori r9,r10,22596
	ctx.r9.u64 = ctx.r10.u64 | 22596;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// bne cr6,0x8386d3f0
	if (!cr6.eq) goto loc_8386D3F0;
loc_8386D3E4:
	// lis r3,6688
	ctx.r3.s64 = 438304768;
	// ori r3,r3,340
	ctx.r3.u64 = ctx.r3.u64 | 340;
	// blr 
	return;
loc_8386D3F0:
	// lis r10,13652
	ctx.r10.s64 = 894697472;
	// ori r9,r10,22596
	ctx.r9.u64 = ctx.r10.u64 | 22596;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// beq cr6,0x8386d3e4
	if (cr6.eq) goto loc_8386D3E4;
	// cmplwi cr6,r11,113
	cr6.compare<uint32_t>(ctx.r11.u32, 113, xer);
	// bne cr6,0x8386d414
	if (!cr6.eq) goto loc_8386D414;
	// lis r3,6690
	ctx.r3.s64 = 438435840;
	// ori r3,r3,43872
	ctx.r3.u64 = ctx.r3.u64 | 43872;
	// blr 
	return;
loc_8386D414:
	// cmplwi cr6,r11,116
	cr6.compare<uint32_t>(ctx.r11.u32, 116, xer);
	// bne cr6,0x8386d27c
	if (!cr6.eq) goto loc_8386D27C;
	// lis r3,6690
	ctx.r3.s64 = 438435840;
	// ori r3,r3,43942
	ctx.r3.u64 = ctx.r3.u64 | 43942;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8386D428"))) PPC_WEAK_FUNC(sub_8386D428);
PPC_FUNC_IMPL(__imp__sub_8386D428) {
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
	// bl 0x8386d150
	ctx.lr = 0x8386D438;
	sub_8386D150(ctx, base);
	// lis r10,6690
	ctx.r10.s64 = 438435840;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// ori r10,r10,43872
	ctx.r10.u64 = ctx.r10.u64 | 43872;
	// cmpw cr6,r3,r10
	cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, xer);
	// bgt cr6,0x8386d5b0
	if (cr6.gt) goto loc_8386D5B0;
	// beq cr6,0x8386d59c
	if (cr6.eq) goto loc_8386D59C;
	// lis r10,6184
	ctx.r10.s64 = 405274624;
	// ori r3,r10,390
	ctx.r3.u64 = ctx.r10.u64 | 390;
	// cmpw cr6,r11,r3
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r3.s32, xer);
	// bgt cr6,0x8386d508
	if (cr6.gt) goto loc_8386D508;
	// beq cr6,0x8386d6d4
	if (cr6.eq) goto loc_8386D6D4;
	// lis r10,6184
	ctx.r10.s64 = 405274624;
	// ori r3,r10,262
	ctx.r3.u64 = ctx.r10.u64 | 262;
	// cmpw cr6,r11,r3
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r3.s32, xer);
	// bgt cr6,0x8386d4b8
	if (cr6.gt) goto loc_8386D4B8;
	// beq cr6,0x8386d6d4
	if (cr6.eq) goto loc_8386D6D4;
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(ctx.r11.s32, -1, xer);
	// beq cr6,0x8386d4a0
	if (cr6.eq) goto loc_8386D4A0;
	// lis r10,1168
	ctx.r10.s64 = 76546048;
	// ori r3,r10,258
	ctx.r3.u64 = ctx.r10.u64 | 258;
	// cmpw cr6,r11,r3
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r3.s32, xer);
	// beq cr6,0x8386d6d4
	if (cr6.eq) goto loc_8386D6D4;
	// lis r10,2048
	ctx.r10.s64 = 134217728;
	// ori r3,r10,330
	ctx.r3.u64 = ctx.r10.u64 | 330;
	// cmpw cr6,r11,r3
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r3.s32, xer);
	// beq cr6,0x8386d6d4
	if (cr6.eq) goto loc_8386D6D4;
loc_8386D4A0:
	// lis r3,32767
	ctx.r3.s64 = 2147418112;
	// ori r3,r3,65535
	ctx.r3.u64 = ctx.r3.u64 | 65535;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8386D4B8:
	// lis r10,6184
	ctx.r10.s64 = 405274624;
	// ori r3,r10,310
	ctx.r3.u64 = ctx.r10.u64 | 310;
	// subf. r11,r3,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r3.s64;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x8386d6d4
	if (cr0.eq) goto loc_8386D6D4;
	// cmplwi cr6,r11,13
	cr6.compare<uint32_t>(ctx.r11.u32, 13, xer);
	// beq cr6,0x8386d4f0
	if (cr6.eq) goto loc_8386D4F0;
	// cmplwi cr6,r11,25
	cr6.compare<uint32_t>(ctx.r11.u32, 25, xer);
	// bne cr6,0x8386d4a0
	if (!cr6.eq) goto loc_8386D4A0;
	// lis r3,6184
	ctx.r3.s64 = 405274624;
	// ori r3,r3,335
	ctx.r3.u64 = ctx.r3.u64 | 335;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8386D4F0:
	// lis r3,6184
	ctx.r3.s64 = 405274624;
	// ori r3,r3,323
	ctx.r3.u64 = ctx.r3.u64 | 323;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8386D508:
	// lis r10,6690
	ctx.r10.s64 = 438435840;
	// ori r3,r10,344
	ctx.r3.u64 = ctx.r10.u64 | 344;
	// cmpw cr6,r11,r3
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r3.s32, xer);
	// bgt cr6,0x8386d56c
	if (cr6.gt) goto loc_8386D56C;
	// beq cr6,0x8386d6d4
	if (cr6.eq) goto loc_8386D6D4;
	// lis r10,6688
	ctx.r10.s64 = 438304768;
	// ori r3,r10,338
	ctx.r3.u64 = ctx.r10.u64 | 338;
	// subf. r11,r3,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r3.s64;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x8386d6d4
	if (cr0.eq) goto loc_8386D6D4;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// beq cr6,0x8386d554
	if (cr6.eq) goto loc_8386D554;
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// bne cr6,0x8386d4a0
	if (!cr6.eq) goto loc_8386D4A0;
	// lis r3,6688
	ctx.r3.s64 = 438304768;
	// ori r3,r3,340
	ctx.r3.u64 = ctx.r3.u64 | 340;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8386D554:
	// lis r3,6688
	ctx.r3.s64 = 438304768;
	// ori r3,r3,339
	ctx.r3.u64 = ctx.r3.u64 | 339;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8386D56C:
	// lis r10,6690
	ctx.r10.s64 = 438435840;
	// ori r3,r10,407
	ctx.r3.u64 = ctx.r10.u64 | 407;
	// subf. r11,r3,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r3.s64;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x8386d6d4
	if (cr0.eq) goto loc_8386D6D4;
	// cmplwi cr6,r11,43462
	cr6.compare<uint32_t>(ctx.r11.u32, 43462, xer);
	// bne cr6,0x8386d4a0
	if (!cr6.eq) goto loc_8386D4A0;
	// lis r3,6690
	ctx.r3.s64 = 438435840;
	// ori r3,r3,43869
	ctx.r3.u64 = ctx.r3.u64 | 43869;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8386D59C:
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
loc_8386D5B0:
	// lis r10,10280
	ctx.r10.s64 = 673710080;
	// ori r3,r10,390
	ctx.r3.u64 = ctx.r10.u64 | 390;
	// cmpw cr6,r11,r3
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r3.s32, xer);
	// bgt cr6,0x8386d648
	if (cr6.gt) goto loc_8386D648;
	// beq cr6,0x8386d6d4
	if (cr6.eq) goto loc_8386D6D4;
	// lis r10,10280
	ctx.r10.s64 = 673710080;
	// ori r3,r10,262
	ctx.r3.u64 = ctx.r10.u64 | 262;
	// cmpw cr6,r11,r3
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r3.s32, xer);
	// bgt cr6,0x8386d618
	if (cr6.gt) goto loc_8386D618;
	// beq cr6,0x8386d6d4
	if (cr6.eq) goto loc_8386D6D4;
	// lis r10,6690
	ctx.r10.s64 = 438435840;
	// ori r3,r10,43942
	ctx.r3.u64 = ctx.r10.u64 | 43942;
	// cmplw cr6,r11,r3
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, xer);
	// beq cr6,0x8386d6d4
	if (cr6.eq) goto loc_8386D6D4;
	// lis r10,10240
	ctx.r10.s64 = 671088640;
	// ori r3,r10,258
	ctx.r3.u64 = ctx.r10.u64 | 258;
	// subf. r11,r3,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r3.s64;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x8386d6d4
	if (cr0.eq) goto loc_8386D6D4;
	// cmplwi cr6,r11,86
	cr6.compare<uint32_t>(ctx.r11.u32, 86, xer);
	// bne cr6,0x8386d4a0
	if (!cr6.eq) goto loc_8386D4A0;
	// lis r3,10240
	ctx.r3.s64 = 671088640;
	// ori r3,r3,344
	ctx.r3.u64 = ctx.r3.u64 | 344;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8386D618:
	// lis r10,10280
	ctx.r10.s64 = 673710080;
	// ori r3,r10,310
	ctx.r3.u64 = ctx.r10.u64 | 310;
	// subf. r11,r3,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r3.s64;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x8386d6d4
	if (cr0.eq) goto loc_8386D6D4;
	// cmplwi cr6,r11,14
	cr6.compare<uint32_t>(ctx.r11.u32, 14, xer);
	// bne cr6,0x8386d4a0
	if (!cr6.eq) goto loc_8386D4A0;
	// lis r3,10280
	ctx.r3.s64 = 673710080;
	// ori r3,r3,324
	ctx.r3.u64 = ctx.r3.u64 | 324;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8386D648:
	// lis r10,11554
	ctx.r10.s64 = 757202944;
	// ori r3,r10,43935
	ctx.r3.u64 = ctx.r10.u64 | 43935;
	// cmpw cr6,r11,r3
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r3.s32, xer);
	// bgt cr6,0x8386d6b4
	if (cr6.gt) goto loc_8386D6B4;
	// beq cr6,0x8386d6d4
	if (cr6.eq) goto loc_8386D6D4;
	// lis r10,11552
	ctx.r10.s64 = 757071872;
	// ori r3,r10,406
	ctx.r3.u64 = ctx.r10.u64 | 406;
	// subf. r11,r3,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r3.s64;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x8386d6d4
	if (cr0.eq) goto loc_8386D6D4;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// beq cr6,0x8386d69c
	if (cr6.eq) goto loc_8386D69C;
	// lis r10,2
	ctx.r10.s64 = 131072;
	// ori r9,r10,43526
	ctx.r9.u64 = ctx.r10.u64 | 43526;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// bne cr6,0x8386d4a0
	if (!cr6.eq) goto loc_8386D4A0;
	// lis r3,11554
	ctx.r3.s64 = 757202944;
	// ori r3,r3,43932
	ctx.r3.u64 = ctx.r3.u64 | 43932;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8386D69C:
	// lis r3,11552
	ctx.r3.s64 = 757071872;
	// ori r3,r3,409
	ctx.r3.u64 = ctx.r3.u64 | 409;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8386D6B4:
	// lis r10,11682
	ctx.r10.s64 = 765591552;
	// ori r3,r10,43867
	ctx.r3.u64 = ctx.r10.u64 | 43867;
	// subf. r11,r3,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r3.s64;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x8386d6d4
	if (cr0.eq) goto loc_8386D6D4;
	// cmplwi cr6,r11,73
	cr6.compare<uint32_t>(ctx.r11.u32, 73, xer);
	// bne cr6,0x8386d4a0
	if (!cr6.eq) goto loc_8386D4A0;
	// lis r3,11682
	ctx.r3.s64 = 765591552;
	// ori r3,r3,43940
	ctx.r3.u64 = ctx.r3.u64 | 43940;
loc_8386D6D4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8386D6E4"))) PPC_WEAK_FUNC(sub_8386D6E4);
PPC_FUNC_IMPL(__imp__sub_8386D6E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8386D6E8"))) PPC_WEAK_FUNC(sub_8386D6E8);
PPC_FUNC_IMPL(__imp__sub_8386D6E8) {
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
	// stw r5,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r5.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r4,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// rlwimi r10,r11,16,16,31
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF) | (ctx.r10.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r9,r11,16,0,15
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF0000) | (ctx.r9.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r8,r10,24,16,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFFFF;
	// rlwinm r7,r9,8,0,15
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFF0000;
	// or r6,r8,r7
	ctx.r6.u64 = ctx.r8.u64 | ctx.r7.u64;
	// stw r6,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r6.u32);
	// lwz r5,8(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// rlwimi r3,r5,16,16,31
	ctx.r3.u64 = (__builtin_rotateleft32(ctx.r5.u32, 16) & 0xFFFF) | (ctx.r3.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r11,r5,16,0,15
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r5.u32, 16) & 0xFFFF0000) | (ctx.r11.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r10,r3,24,16,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 24) & 0xFFFF;
	// rlwinm r9,r11,8,0,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFF0000;
	// or r30,r10,r9
	ctx.r30.u64 = ctx.r10.u64 | ctx.r9.u64;
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// lwz r8,12(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
	// mr r6,r8
	ctx.r6.u64 = ctx.r8.u64;
	// rlwimi r7,r8,16,16,31
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r8.u32, 16) & 0xFFFF) | (ctx.r7.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r6,r8,16,0,15
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r8.u32, 16) & 0xFFFF0000) | (ctx.r6.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r5,r7,24,16,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 24) & 0xFFFF;
	// rlwinm r3,r6,8,0,15
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFFFF0000;
	// or r11,r5,r3
	ctx.r11.u64 = ctx.r5.u64 | ctx.r3.u64;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// lwz r10,16(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// rlwimi r9,r10,16,16,31
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 16) & 0xFFFF) | (ctx.r9.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r8,r10,16,0,15
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r10.u32, 16) & 0xFFFF0000) | (ctx.r8.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r7,r9,24,16,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xFFFF;
	// rlwinm r6,r8,8,0,15
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFF0000;
	// or r5,r7,r6
	ctx.r5.u64 = ctx.r7.u64 | ctx.r6.u64;
	// stw r5,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r5.u32);
	// lwz r3,20(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// rlwimi r11,r3,16,16,31
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r3.u32, 16) & 0xFFFF) | (ctx.r11.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r10,r3,16,0,15
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r3.u32, 16) & 0xFFFF0000) | (ctx.r10.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r9,r11,24,16,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFF;
	// rlwinm r8,r10,8,0,15
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFF0000;
	// or r7,r9,r8
	ctx.r7.u64 = ctx.r9.u64 | ctx.r8.u64;
	// stw r7,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r7.u32);
	// lwz r6,24(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// rlwimi r5,r6,16,16,31
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r6.u32, 16) & 0xFFFF) | (ctx.r5.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r3,r6,16,0,15
	ctx.r3.u64 = (__builtin_rotateleft32(ctx.r6.u32, 16) & 0xFFFF0000) | (ctx.r3.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r11,r5,24,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 24) & 0xFFFF;
	// rlwinm r10,r3,8,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 8) & 0xFFFF0000;
	// or r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stw r9,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r9.u32);
	// lwz r8,28(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
	// mr r6,r8
	ctx.r6.u64 = ctx.r8.u64;
	// rlwimi r7,r8,16,16,31
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r8.u32, 16) & 0xFFFF) | (ctx.r7.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r6,r8,16,0,15
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r8.u32, 16) & 0xFFFF0000) | (ctx.r6.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r5,r7,24,16,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 24) & 0xFFFF;
	// rlwinm r3,r6,8,0,15
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFFFF0000;
	// or r11,r5,r3
	ctx.r11.u64 = ctx.r5.u64 | ctx.r3.u64;
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// lwz r10,76(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 76);
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// rlwimi r9,r10,16,16,31
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 16) & 0xFFFF) | (ctx.r9.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r8,r10,16,0,15
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r10.u32, 16) & 0xFFFF0000) | (ctx.r8.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r7,r9,24,16,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xFFFF;
	// rlwinm r6,r8,8,0,15
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFF0000;
	// or r5,r7,r6
	ctx.r5.u64 = ctx.r7.u64 | ctx.r6.u64;
	// stw r5,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r5.u32);
	// lwz r3,80(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 80);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// rlwimi r11,r3,16,16,31
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r3.u32, 16) & 0xFFFF) | (ctx.r11.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r10,r3,16,0,15
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r3.u32, 16) & 0xFFFF0000) | (ctx.r10.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r9,r11,24,16,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFF;
	// rlwinm r8,r10,8,0,15
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFF0000;
	// or r7,r9,r8
	ctx.r7.u64 = ctx.r9.u64 | ctx.r8.u64;
	// stw r7,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r7.u32);
	// lwz r6,84(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 84);
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// rlwimi r5,r6,16,16,31
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r6.u32, 16) & 0xFFFF) | (ctx.r5.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r3,r6,16,0,15
	ctx.r3.u64 = (__builtin_rotateleft32(ctx.r6.u32, 16) & 0xFFFF0000) | (ctx.r3.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r11,r5,24,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 24) & 0xFFFF;
	// rlwinm r10,r3,8,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 8) & 0xFFFF0000;
	// or r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stw r9,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r9.u32);
	// lwz r8,88(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 88);
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
	// mr r6,r8
	ctx.r6.u64 = ctx.r8.u64;
	// rlwimi r7,r8,16,16,31
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r8.u32, 16) & 0xFFFF) | (ctx.r7.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r6,r8,16,0,15
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r8.u32, 16) & 0xFFFF0000) | (ctx.r6.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r5,r7,24,16,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 24) & 0xFFFF;
	// rlwinm r3,r6,8,0,15
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFFFF0000;
	// or r11,r5,r3
	ctx.r11.u64 = ctx.r5.u64 | ctx.r3.u64;
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// lwz r10,92(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 92);
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// rlwimi r9,r10,16,16,31
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 16) & 0xFFFF) | (ctx.r9.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r8,r10,16,0,15
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r10.u32, 16) & 0xFFFF0000) | (ctx.r8.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r7,r9,24,16,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xFFFF;
	// rlwinm r6,r8,8,0,15
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFF0000;
	// or r5,r7,r6
	ctx.r5.u64 = ctx.r7.u64 | ctx.r6.u64;
	// stw r5,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r5.u32);
	// lwz r3,96(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 96);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// rlwimi r11,r3,16,16,31
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r3.u32, 16) & 0xFFFF) | (ctx.r11.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r10,r3,16,0,15
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r3.u32, 16) & 0xFFFF0000) | (ctx.r10.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r9,r11,24,16,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFF;
	// rlwinm r8,r10,8,0,15
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFF0000;
	// or r7,r9,r8
	ctx.r7.u64 = ctx.r9.u64 | ctx.r8.u64;
	// stw r7,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r7.u32);
	// lwz r6,100(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 100);
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// rlwimi r5,r6,16,16,31
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r6.u32, 16) & 0xFFFF) | (ctx.r5.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r3,r6,16,0,15
	ctx.r3.u64 = (__builtin_rotateleft32(ctx.r6.u32, 16) & 0xFFFF0000) | (ctx.r3.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r11,r5,24,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 24) & 0xFFFF;
	// rlwinm r10,r3,8,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 8) & 0xFFFF0000;
	// or r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stw r9,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r9.u32);
	// lwz r8,104(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 104);
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
	// mr r6,r8
	ctx.r6.u64 = ctx.r8.u64;
	// rlwimi r7,r8,16,16,31
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r8.u32, 16) & 0xFFFF) | (ctx.r7.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r6,r8,16,0,15
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r8.u32, 16) & 0xFFFF0000) | (ctx.r6.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r5,r7,24,16,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 24) & 0xFFFF;
	// rlwinm r3,r6,8,0,15
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFFFF0000;
	// or r11,r5,r3
	ctx.r11.u64 = ctx.r5.u64 | ctx.r3.u64;
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// lwz r10,108(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 108);
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// rlwimi r9,r10,16,16,31
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 16) & 0xFFFF) | (ctx.r9.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r8,r10,16,0,15
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r10.u32, 16) & 0xFFFF0000) | (ctx.r8.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r7,r9,24,16,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xFFFF;
	// rlwinm r6,r8,8,0,15
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFF0000;
	// or r5,r7,r6
	ctx.r5.u64 = ctx.r7.u64 | ctx.r6.u64;
	// stw r5,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r5.u32);
	// lwz r4,112(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 112);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// rlwimi r3,r4,16,16,31
	ctx.r3.u64 = (__builtin_rotateleft32(ctx.r4.u32, 16) & 0xFFFF) | (ctx.r3.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r11,r4,16,0,15
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r4.u32, 16) & 0xFFFF0000) | (ctx.r11.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r10,r3,24,16,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 24) & 0xFFFF;
	// rlwinm r9,r11,8,0,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFF0000;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// or r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 | ctx.r9.u64;
	// stw r8,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r8.u32);
	// bl 0x8386d428
	ctx.lr = 0x8386D974;
	sub_8386D428(ctx, base);
	// lis r7,6688
	ctx.r7.s64 = 438304768;
	// ori r6,r7,338
	ctx.r6.u64 = ctx.r7.u64 | 338;
	// cmpw cr6,r3,r6
	cr6.compare<int32_t>(ctx.r3.s32, ctx.r6.s32, xer);
	// beq cr6,0x8386d9c4
	if (cr6.eq) goto loc_8386D9C4;
	// lis r11,6688
	ctx.r11.s64 = 438304768;
	// ori r10,r11,339
	ctx.r10.u64 = ctx.r11.u64 | 339;
	// cmpw cr6,r3,r10
	cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, xer);
	// beq cr6,0x8386d9c4
	if (cr6.eq) goto loc_8386D9C4;
	// lis r11,6688
	ctx.r11.s64 = 438304768;
	// ori r10,r11,340
	ctx.r10.u64 = ctx.r11.u64 | 340;
	// cmpw cr6,r3,r10
	cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, xer);
	// beq cr6,0x8386d9c4
	if (cr6.eq) goto loc_8386D9C4;
	// rlwinm r11,r30,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8386d9e4
	if (!cr6.eq) goto loc_8386D9E4;
	// ori r11,r30,8
	ctx.r11.u64 = ctx.r30.u64 | 8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bl 0x8386e4c0
	ctx.lr = 0x8386D9C0;
	sub_8386E4C0(ctx, base);
	// b 0x8386d9e0
	goto loc_8386D9E0;
loc_8386D9C4:
	// rlwinm r11,r30,0,12,12
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x80000;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8386d9e4
	if (!cr6.eq) goto loc_8386D9E4;
	// oris r11,r30,8
	ctx.r11.u64 = ctx.r30.u64 | 524288;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bl 0x8386e550
	ctx.lr = 0x8386D9E0;
	sub_8386E550(ctx, base);
loc_8386D9E0:
	// stw r3,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r3.u32);
loc_8386D9E4:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r11,1
	ctx.r11.s64 = 1;
	// rlwinm r9,r10,0,14,14
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x20000;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x8386d9fc
	if (!cr6.eq) goto loc_8386D9FC;
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
loc_8386D9FC:
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8386da0c
	if (!cr6.eq) goto loc_8386DA0C;
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
loc_8386DA0C:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8386da30
	if (cr6.eq) goto loc_8386DA30;
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// bne cr6,0x8386da30
	if (!cr6.eq) goto loc_8386DA30;
	// rlwinm r11,r11,0,31,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
loc_8386DA30:
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

__attribute__((alias("__imp__sub_8386DA48"))) PPC_WEAK_FUNC(sub_8386DA48);
PPC_FUNC_IMPL(__imp__sub_8386DA48) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x8386DA50;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x8386d428
	ctx.lr = 0x8386DA60;
	sub_8386D428(ctx, base);
	// lwz r31,20(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x8386da78
	if (cr6.eq) goto loc_8386DA78;
	// mtctr r30
	ctr.u64 = ctx.r30.u64;
loc_8386DA70:
	// rlwinm r31,r31,31,1,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 31) & 0x7FFFFFFF;
	// bdnz 0x8386da70
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8386DA70;
loc_8386DA78:
	// cmplwi cr6,r31,1
	cr6.compare<uint32_t>(ctx.r31.u32, 1, xer);
	// bgt cr6,0x8386da84
	if (cr6.gt) goto loc_8386DA84;
	// li r31,1
	ctx.r31.s64 = 1;
loc_8386DA84:
	// lis r11,6688
	ctx.r11.s64 = 438304768;
	// ori r10,r11,338
	ctx.r10.u64 = ctx.r11.u64 | 338;
	// cmpw cr6,r3,r10
	cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, xer);
	// bne cr6,0x8386daa4
	if (!cr6.eq) goto loc_8386DAA4;
	// addi r11,r31,3
	ctx.r11.s64 = ctx.r31.s64 + 3;
	// rlwinm r3,r11,1,0,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFF8;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_8386DAA4:
	// lis r11,6688
	ctx.r11.s64 = 438304768;
	// ori r10,r11,339
	ctx.r10.u64 = ctx.r11.u64 | 339;
	// cmpw cr6,r3,r10
	cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, xer);
	// beq cr6,0x8386dae0
	if (cr6.eq) goto loc_8386DAE0;
	// lis r11,6688
	ctx.r11.s64 = 438304768;
	// ori r10,r11,340
	ctx.r10.u64 = ctx.r11.u64 | 340;
	// cmpw cr6,r3,r10
	cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, xer);
	// beq cr6,0x8386dae0
	if (cr6.eq) goto loc_8386DAE0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8386e070
	ctx.lr = 0x8386DACC;
	sub_8386E070(ctx, base);
	// mullw r11,r3,r31
	ctx.r11.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r31.s32);
	// addi r11,r11,7
	ctx.r11.s64 = ctx.r11.s64 + 7;
	// rlwinm r3,r11,29,3,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_8386DAE0:
	// addi r11,r31,3
	ctx.r11.s64 = ctx.r31.s64 + 3;
	// rlwinm r3,r11,2,0,27
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFF0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8386DAF0"))) PPC_WEAK_FUNC(sub_8386DAF0);
PPC_FUNC_IMPL(__imp__sub_8386DAF0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x8386DAF8;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,68(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// rlwinm r10,r11,0,19,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8386db44
	if (cr6.eq) goto loc_8386DB44;
	// rlwinm r11,r11,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8386db44
	if (cr6.eq) goto loc_8386DB44;
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// rlwinm r10,r11,0,22,22
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8386db3c
	if (cr6.eq) goto loc_8386DB3C;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x8386db48
	goto loc_8386DB48;
loc_8386DB3C:
	// rlwinm r11,r11,12,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0x2;
	// b 0x8386db48
	goto loc_8386DB48;
loc_8386DB44:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8386DB48:
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// blt cr6,0x8386dc14
	if (cr6.lt) goto loc_8386DC14;
	// beq cr6,0x8386dbc8
	if (cr6.eq) goto loc_8386DBC8;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// bge cr6,0x8386dc68
	if (!cr6.lt) goto loc_8386DC68;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8386db78
	if (cr6.eq) goto loc_8386DB78;
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// addi r30,r11,-1
	ctx.r30.s64 = ctx.r11.s64 + -1;
	// b 0x8386db7c
	goto loc_8386DB7C;
loc_8386DB78:
	// lwz r30,32(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
loc_8386DB7C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8386d428
	ctx.lr = 0x8386DB84;
	sub_8386D428(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8386e690
	ctx.lr = 0x8386DB90;
	sub_8386E690(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8386e658
	ctx.lr = 0x8386DB9C;
	sub_8386E658(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8386e620
	ctx.lr = 0x8386DBA8;
	sub_8386E620(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// bl 0x83867540
	ctx.lr = 0x8386DBC0;
	sub_83867540(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_8386DBC8:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8386dbe4
	if (cr6.eq) goto loc_8386DBE4;
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// addi r30,r11,-1
	ctx.r30.s64 = ctx.r11.s64 + -1;
	// b 0x8386dbe8
	goto loc_8386DBE8;
loc_8386DBE4:
	// lwz r30,32(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
loc_8386DBE8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8386d428
	ctx.lr = 0x8386DBF0;
	sub_8386D428(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8386e620
	ctx.lr = 0x8386DBFC;
	sub_8386E620(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// bl 0x83867548
	ctx.lr = 0x8386DC0C;
	sub_83867548(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_8386DC14:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8386dc30
	if (cr6.eq) goto loc_8386DC30;
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// addi r30,r11,-1
	ctx.r30.s64 = ctx.r11.s64 + -1;
	// b 0x8386dc34
	goto loc_8386DC34;
loc_8386DC30:
	// lwz r30,32(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
loc_8386DC34:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8386d428
	ctx.lr = 0x8386DC3C;
	sub_8386D428(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8386e658
	ctx.lr = 0x8386DC48;
	sub_8386E658(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8386e620
	ctx.lr = 0x8386DC54;
	sub_8386E620(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// bl 0x83867500
	ctx.lr = 0x8386DC68;
	sub_83867500(ctx, base);
loc_8386DC68:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8386DC70"))) PPC_WEAK_FUNC(sub_8386DC70);
PPC_FUNC_IMPL(__imp__sub_8386DC70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x8386DC78;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x8386d428
	ctx.lr = 0x8386DC88;
	sub_8386D428(ctx, base);
	// lwz r29,16(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x8386dca4
	if (cr6.eq) goto loc_8386DCA4;
	// mtctr r30
	ctr.u64 = ctx.r30.u64;
loc_8386DC9C:
	// rlwinm r29,r29,31,1,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 31) & 0x7FFFFFFF;
	// bdnz 0x8386dc9c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8386DC9C;
loc_8386DCA4:
	// cmplwi cr6,r29,1
	cr6.compare<uint32_t>(ctx.r29.u32, 1, xer);
	// bgt cr6,0x8386dcb0
	if (cr6.gt) goto loc_8386DCB0;
	// li r29,1
	ctx.r29.s64 = 1;
loc_8386DCB0:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8386da48
	ctx.lr = 0x8386DCBC;
	sub_8386DA48(ctx, base);
	// lis r11,6688
	ctx.r11.s64 = 438304768;
	// ori r10,r11,338
	ctx.r10.u64 = ctx.r11.u64 | 338;
	// cmpw cr6,r28,r10
	cr6.compare<int32_t>(ctx.r28.s32, ctx.r10.s32, xer);
	// beq cr6,0x8386dcf8
	if (cr6.eq) goto loc_8386DCF8;
	// lis r11,6688
	ctx.r11.s64 = 438304768;
	// ori r10,r11,339
	ctx.r10.u64 = ctx.r11.u64 | 339;
	// cmpw cr6,r28,r10
	cr6.compare<int32_t>(ctx.r28.s32, ctx.r10.s32, xer);
	// beq cr6,0x8386dcf8
	if (cr6.eq) goto loc_8386DCF8;
	// lis r11,6688
	ctx.r11.s64 = 438304768;
	// ori r10,r11,340
	ctx.r10.u64 = ctx.r11.u64 | 340;
	// cmpw cr6,r28,r10
	cr6.compare<int32_t>(ctx.r28.s32, ctx.r10.s32, xer);
	// beq cr6,0x8386dcf8
	if (cr6.eq) goto loc_8386DCF8;
	// mullw r3,r29,r3
	ctx.r3.s64 = int64_t(ctx.r29.s32) * int64_t(ctx.r3.s32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_8386DCF8:
	// addi r11,r29,3
	ctx.r11.s64 = ctx.r29.s64 + 3;
	// rlwinm r10,r11,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// mullw r3,r10,r3
	ctx.r3.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r3.s32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8386DD0C"))) PPC_WEAK_FUNC(sub_8386DD0C);
PPC_FUNC_IMPL(__imp__sub_8386DD0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8386DD10"))) PPC_WEAK_FUNC(sub_8386DD10);
PPC_FUNC_IMPL(__imp__sub_8386DD10) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad4
	ctx.lr = 0x8386DD18;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// li r26,0
	ctx.r26.s64 = 0;
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8386ddc4
	if (cr6.eq) goto loc_8386DDC4;
	// lis r11,6688
	ctx.r11.s64 = 438304768;
	// lis r10,6688
	ctx.r10.s64 = 438304768;
	// lis r9,6688
	ctx.r9.s64 = 438304768;
	// ori r27,r11,338
	ctx.r27.u64 = ctx.r11.u64 | 338;
	// ori r23,r10,339
	ctx.r23.u64 = ctx.r10.u64 | 339;
	// ori r24,r9,340
	ctx.r24.u64 = ctx.r9.u64 | 340;
loc_8386DD4C:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8386d428
	ctx.lr = 0x8386DD54;
	sub_8386D428(ctx, base);
	// lwz r30,16(r28)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x8386dd70
	if (cr6.eq) goto loc_8386DD70;
	// mtctr r31
	ctr.u64 = ctx.r31.u64;
loc_8386DD68:
	// rlwinm r30,r30,31,1,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 31) & 0x7FFFFFFF;
	// bdnz 0x8386dd68
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8386DD68;
loc_8386DD70:
	// cmplwi cr6,r30,1
	cr6.compare<uint32_t>(ctx.r30.u32, 1, xer);
	// bgt cr6,0x8386dd7c
	if (cr6.gt) goto loc_8386DD7C;
	// li r30,1
	ctx.r30.s64 = 1;
loc_8386DD7C:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8386da48
	ctx.lr = 0x8386DD88;
	sub_8386DA48(ctx, base);
	// cmpw cr6,r29,r27
	cr6.compare<int32_t>(ctx.r29.s32, ctx.r27.s32, xer);
	// beq cr6,0x8386dda8
	if (cr6.eq) goto loc_8386DDA8;
	// cmpw cr6,r29,r23
	cr6.compare<int32_t>(ctx.r29.s32, ctx.r23.s32, xer);
	// beq cr6,0x8386dda8
	if (cr6.eq) goto loc_8386DDA8;
	// cmpw cr6,r29,r24
	cr6.compare<int32_t>(ctx.r29.s32, ctx.r24.s32, xer);
	// beq cr6,0x8386dda8
	if (cr6.eq) goto loc_8386DDA8;
	// mullw r11,r30,r3
	ctx.r11.s64 = int64_t(ctx.r30.s32) * int64_t(ctx.r3.s32);
	// b 0x8386ddb4
	goto loc_8386DDB4;
loc_8386DDA8:
	// addi r11,r30,3
	ctx.r11.s64 = ctx.r30.s64 + 3;
	// rlwinm r10,r11,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// mullw r11,r10,r3
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r3.s32);
loc_8386DDB4:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// add r26,r11,r26
	ctx.r26.u64 = ctx.r11.u64 + ctx.r26.u64;
	// cmplw cr6,r31,r25
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r25.u32, xer);
	// blt cr6,0x8386dd4c
	if (cr6.lt) goto loc_8386DD4C;
loc_8386DDC4:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8386DDD0"))) PPC_WEAK_FUNC(sub_8386DDD0);
PPC_FUNC_IMPL(__imp__sub_8386DDD0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdabc
	ctx.lr = 0x8386DDD8;
	__savegprlr_17(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r18,r4
	ctx.r18.u64 = ctx.r4.u64;
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// mr r17,r5
	ctx.r17.u64 = ctx.r5.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8386de04
	if (cr6.eq) goto loc_8386DE04;
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// addi r25,r10,-1
	ctx.r25.s64 = ctx.r10.s64 + -1;
	// b 0x8386de08
	goto loc_8386DE08;
loc_8386DE04:
	// lwz r25,32(r31)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
loc_8386DE08:
	// lwz r10,68(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// rlwinm r20,r11,31,31,31
	ctx.r20.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x1;
	// rlwinm r11,r10,0,19,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1000;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8386de44
	if (cr6.eq) goto loc_8386DE44;
	// rlwinm r9,r10,0,28,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8386de44
	if (cr6.eq) goto loc_8386DE44;
	// lwz r9,72(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// rlwinm r8,r9,0,22,22
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x200;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x8386de44
	if (!cr6.eq) goto loc_8386DE44;
	// rlwinm r9,r9,0,10,10
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x200000;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x8386df94
	if (!cr6.eq) goto loc_8386DF94;
loc_8386DE44:
	// li r19,1
	ctx.r19.s64 = 1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8386de70
	if (cr6.eq) goto loc_8386DE70;
	// rlwinm r11,r10,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8386de70
	if (cr6.eq) goto loc_8386DE70;
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// rlwinm r10,r11,0,22,22
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8386de70
	if (cr6.eq) goto loc_8386DE70;
	// li r19,6
	ctx.r19.s64 = 6;
loc_8386DE70:
	// lis r10,5461
	ctx.r10.s64 = 357892096;
	// mullw r11,r19,r25
	ctx.r11.s64 = int64_t(ctx.r19.s32) * int64_t(ctx.r25.s32);
	// ori r9,r10,21845
	ctx.r9.u64 = ctx.r10.u64 | 21845;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// bgt cr6,0x8386de94
	if (cr6.gt) goto loc_8386DE94;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// b 0x8386de98
	goto loc_8386DE98;
loc_8386DE94:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_8386DE98:
	// bl 0x82416260
	ctx.lr = 0x8386DE9C;
	sub_82416260(ctx, base);
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// li r22,0
	ctx.r22.s64 = 0;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(ctx.r25.u32, 0, xer);
	// beq cr6,0x8386decc
	if (cr6.eq) goto loc_8386DECC;
loc_8386DEB0:
	// add r4,r30,r20
	ctx.r4.u64 = ctx.r30.u64 + ctx.r20.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8386dc70
	ctx.lr = 0x8386DEBC;
	sub_8386DC70(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// add r22,r3,r22
	ctx.r22.u64 = ctx.r3.u64 + ctx.r22.u64;
	// cmplw cr6,r30,r25
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r25.u32, xer);
	// blt cr6,0x8386deb0
	if (cr6.lt) goto loc_8386DEB0;
loc_8386DECC:
	// cmplwi cr6,r19,0
	cr6.compare<uint32_t>(ctx.r19.u32, 0, xer);
	// beq cr6,0x8386df64
	if (cr6.eq) goto loc_8386DF64;
	// rlwinm r11,r25,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 1) & 0xFFFFFFFE;
	// li r27,0
	ctx.r27.s64 = 0;
	// add r11,r25,r11
	ctx.r11.u64 = ctx.r25.u64 + ctx.r11.u64;
	// addi r26,r21,4
	ctx.r26.s64 = ctx.r21.s64 + 4;
	// rlwinm r24,r11,2,0,29
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r23,r19
	ctx.r23.u64 = ctx.r19.u64;
loc_8386DEEC:
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(ctx.r25.u32, 0, xer);
	// beq cr6,0x8386df58
	if (cr6.eq) goto loc_8386DF58;
	// addi r29,r26,-12
	ctx.r29.s64 = ctx.r26.s64 + -12;
	// mr r30,r20
	ctx.r30.u64 = ctx.r20.u64;
	// mr r28,r25
	ctx.r28.u64 = ctx.r25.u64;
	// add r26,r24,r26
	ctx.r26.u64 = ctx.r24.u64 + ctx.r26.u64;
loc_8386DF04:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8386da48
	ctx.lr = 0x8386DF10;
	sub_8386DA48(ctx, base);
	// stw r3,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r3.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8386dd10
	ctx.lr = 0x8386DF20;
	sub_8386DD10(ctx, base);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// add r10,r3,r10
	ctx.r10.u64 = ctx.r3.u64 + ctx.r10.u64;
	// add r9,r27,r11
	ctx.r9.u64 = ctx.r27.u64 + ctx.r11.u64;
	// addi r11,r10,4
	ctx.r11.s64 = ctx.r10.s64 + 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// stw r11,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r11.u32);
	// bl 0x8386dc70
	ctx.lr = 0x8386DF48;
	sub_8386DC70(ctx, base);
	// addic. r28,r28,-1
	xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	cr0.compare<int32_t>(ctx.r28.s32, 0, xer);
	// stwu r3,12(r29)
	ea = 12 + ctx.r29.u32;
	PPC_STORE_U32(ea, ctx.r3.u32);
	ctx.r29.u32 = ea;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// bne 0x8386df04
	if (!cr0.eq) goto loc_8386DF04;
loc_8386DF58:
	// addic. r23,r23,-1
	xer.ca = ctx.r23.u32 > 0;
	ctx.r23.s64 = ctx.r23.s64 + -1;
	cr0.compare<int32_t>(ctx.r23.s32, 0, xer);
	// add r27,r27,r22
	ctx.r27.u64 = ctx.r27.u64 + ctx.r22.u64;
	// bne 0x8386deec
	if (!cr0.eq) goto loc_8386DEEC;
loc_8386DF64:
	// mr r9,r17
	ctx.r9.u64 = ctx.r17.u64;
	// mr r8,r21
	ctx.r8.u64 = ctx.r21.u64;
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r19
	ctx.r5.u64 = ctx.r19.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x83867710
	ctx.lr = 0x8386DF84;
	sub_83867710(ctx, base);
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x82416268
	ctx.lr = 0x8386DF8C;
	sub_82416268(ctx, base);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb0c
	__restgprlr_17(ctx, base);
	return;
loc_8386DF94:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8386e4c0
	ctx.lr = 0x8386DF9C;
	sub_8386E4C0(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8386e658
	ctx.lr = 0x8386DFA8;
	sub_8386E658(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mullw r10,r3,r11
	ctx.r10.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r11.s32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8386e690
	ctx.lr = 0x8386DFBC;
	sub_8386E690(ctx, base);
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r4,0
	ctx.r4.s64 = 0;
	// mullw r8,r3,r9
	ctx.r8.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r9.s32);
	// stw r8,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r8.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8386dd10
	ctx.lr = 0x8386DFD4;
	sub_8386DD10(ctx, base);
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r7,r17
	ctx.r7.u64 = ctx.r17.u64;
	// add r11,r3,r6
	ctx.r11.u64 = ctx.r3.u64 + ctx.r6.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// li r5,1
	ctx.r5.s64 = 1;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r3,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x83867a40
	ctx.lr = 0x8386E004;
	sub_83867A40(ctx, base);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb0c
	__restgprlr_17(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8386E00C"))) PPC_WEAK_FUNC(sub_8386E00C);
PPC_FUNC_IMPL(__imp__sub_8386E00C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8386E010"))) PPC_WEAK_FUNC(sub_8386E010);
PPC_FUNC_IMPL(__imp__sub_8386E010) {
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
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31743
	ctx.r10.s64 = -2080309248;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8386e034
	if (!cr6.eq) goto loc_8386E034;
	// lis r11,-31865
	ctx.r11.s64 = -2088304640;
	// addi r11,r11,-12160
	ctx.r11.s64 = ctx.r11.s64 + -12160;
loc_8386E034:
	// stw r11,14752(r10)
	PPC_STORE_U32(ctx.r10.u32 + 14752, ctx.r11.u32);
	// lis r10,-31743
	ctx.r10.s64 = -2080309248;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8386e050
	if (!cr6.eq) goto loc_8386E050;
	// lis r11,-31865
	ctx.r11.s64 = -2088304640;
	// addi r11,r11,-12152
	ctx.r11.s64 = ctx.r11.s64 + -12152;
loc_8386E050:
	// stw r11,14748(r10)
	PPC_STORE_U32(ctx.r10.u32 + 14748, ctx.r11.u32);
	// bl 0x8386d0a0
	ctx.lr = 0x8386E058;
	sub_8386D0A0(ctx, base);
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

__attribute__((alias("__imp__sub_8386E06C"))) PPC_WEAK_FUNC(sub_8386E06C);
PPC_FUNC_IMPL(__imp__sub_8386E06C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8386E070"))) PPC_WEAK_FUNC(sub_8386E070);
PPC_FUNC_IMPL(__imp__sub_8386E070) {
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
	// bl 0x8386d150
	ctx.lr = 0x8386E080;
	sub_8386D150(ctx, base);
	// lis r11,6690
	ctx.r11.s64 = 438435840;
	// ori r11,r11,43872
	ctx.r11.u64 = ctx.r11.u64 | 43872;
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, xer);
	// bgt cr6,0x8386e2a8
	if (cr6.gt) goto loc_8386E2A8;
	// beq cr6,0x8386e200
	if (cr6.eq) goto loc_8386E200;
	// lis r11,6688
	ctx.r11.s64 = 438304768;
	// ori r11,r11,338
	ctx.r11.u64 = ctx.r11.u64 | 338;
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, xer);
	// bgt cr6,0x8386e1a8
	if (cr6.gt) goto loc_8386E1A8;
	// beq cr6,0x8386e194
	if (cr6.eq) goto loc_8386E194;
	// lis r11,6184
	ctx.r11.s64 = 405274624;
	// ori r10,r11,332
	ctx.r10.u64 = ctx.r11.u64 | 332;
	// lis r11,6184
	ctx.r11.s64 = 405274624;
	// cmplw cr6,r3,r10
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, xer);
	// bgt cr6,0x8386e134
	if (cr6.gt) goto loc_8386E134;
	// ori r10,r11,331
	ctx.r10.u64 = ctx.r11.u64 | 331;
	// cmplw cr6,r3,r10
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, xer);
	// bge cr6,0x8386e180
	if (!cr6.lt) goto loc_8386E180;
	// lis r11,1168
	ctx.r11.s64 = 76546048;
	// ori r11,r11,258
	ctx.r11.u64 = ctx.r11.u64 | 258;
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, xer);
	// bgt cr6,0x8386e100
	if (cr6.gt) goto loc_8386E100;
	// beq cr6,0x8386e304
	if (cr6.eq) goto loc_8386E304;
	// cmplwi cr6,r3,1
	cr6.compare<uint32_t>(ctx.r3.u32, 1, xer);
	// beq cr6,0x8386e180
	if (cr6.eq) goto loc_8386E180;
	// cmplwi cr6,r3,6
	cr6.compare<uint32_t>(ctx.r3.u32, 6, xer);
	// bne cr6,0x8386e4ac
	if (!cr6.eq) goto loc_8386E4AC;
loc_8386E0EC:
	// li r3,32
	ctx.r3.s64 = 32;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8386E100:
	// lis r11,2048
	ctx.r11.s64 = 134217728;
	// ori r10,r11,330
	ctx.r10.u64 = ctx.r11.u64 | 330;
	// cmplw cr6,r3,r10
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, xer);
	// beq cr6,0x8386e180
	if (cr6.eq) goto loc_8386E180;
	// lis r11,6184
	ctx.r11.s64 = 405274624;
	// ori r10,r11,323
	ctx.r10.u64 = ctx.r11.u64 | 323;
	// cmplw cr6,r3,r10
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, xer);
	// beq cr6,0x8386e180
	if (cr6.eq) goto loc_8386E180;
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
loc_8386E134:
	// ori r11,r11,438
	ctx.r11.u64 = ctx.r11.u64 | 438;
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, xer);
	// bgt cr6,0x8386e16c
	if (cr6.gt) goto loc_8386E16C;
	// beq cr6,0x8386e0ec
	if (cr6.eq) goto loc_8386E0EC;
	// addis r11,r3,-6184
	ctx.r11.s64 = ctx.r3.s64 + -405274624;
	// addic. r11,r11,-335
	xer.ca = ctx.r11.u32 > 334;
	ctx.r11.s64 = ctx.r11.s64 + -335;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x8386e180
	if (cr0.eq) goto loc_8386E180;
	// cmplwi cr6,r11,55
	cr6.compare<uint32_t>(ctx.r11.u32, 55, xer);
	// beq cr6,0x8386e0ec
	if (cr6.eq) goto loc_8386E0EC;
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
loc_8386E16C:
	// addis r11,r3,-6688
	ctx.r11.s64 = ctx.r3.s64 + -438304768;
	// addic. r11,r11,-331
	xer.ca = ctx.r11.u32 > 330;
	ctx.r11.s64 = ctx.r11.s64 + -331;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x8386e180
	if (cr0.eq) goto loc_8386E180;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x8386e4ac
	if (!cr6.eq) goto loc_8386E4AC;
loc_8386E180:
	// li r3,16
	ctx.r3.s64 = 16;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8386E194:
	// li r3,4
	ctx.r3.s64 = 4;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8386E1A8:
	// lis r11,6688
	ctx.r11.s64 = 438304768;
	// ori r11,r11,43866
	ctx.r11.u64 = ctx.r11.u64 | 43866;
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, xer);
	// bgt cr6,0x8386e23c
	if (cr6.gt) goto loc_8386E23C;
	// beq cr6,0x8386e200
	if (cr6.eq) goto loc_8386E200;
	// lis r11,6688
	ctx.r11.s64 = 438304768;
	// ori r11,r11,390
	ctx.r11.u64 = ctx.r11.u64 | 390;
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, xer);
	// bgt cr6,0x8386e214
	if (cr6.gt) goto loc_8386E214;
	// beq cr6,0x8386e0ec
	if (cr6.eq) goto loc_8386E0EC;
	// lis r11,6688
	ctx.r11.s64 = 438304768;
	// ori r10,r11,339
	ctx.r10.u64 = ctx.r11.u64 | 339;
	// cmplw cr6,r3,r10
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, xer);
	// blt cr6,0x8386e4ac
	if (cr6.lt) goto loc_8386E4AC;
	// lis r11,6688
	ctx.r11.s64 = 438304768;
	// ori r10,r11,340
	ctx.r10.u64 = ctx.r11.u64 | 340;
	// cmplw cr6,r3,r10
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, xer);
	// ble cr6,0x8386e304
	if (!cr6.gt) goto loc_8386E304;
	// lis r11,6688
	ctx.r11.s64 = 438304768;
	// ori r10,r11,346
	ctx.r10.u64 = ctx.r11.u64 | 346;
	// cmplw cr6,r3,r10
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, xer);
	// bne cr6,0x8386e4ac
	if (!cr6.eq) goto loc_8386E4AC;
loc_8386E200:
	// li r3,64
	ctx.r3.s64 = 64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8386E214:
	// addis r11,r3,-6688
	ctx.r11.s64 = ctx.r3.s64 + -438304768;
	// addic. r11,r11,-438
	xer.ca = ctx.r11.u32 > 437;
	ctx.r11.s64 = ctx.r11.s64 + -438;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x8386e0ec
	if (cr0.eq) goto loc_8386E0EC;
	// cmplwi cr6,r11,10752
	cr6.compare<uint32_t>(ctx.r11.u32, 10752, xer);
	// beq cr6,0x8386e0ec
	if (cr6.eq) goto loc_8386E0EC;
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
loc_8386E23C:
	// lis r11,6690
	ctx.r11.s64 = 438435840;
	// ori r11,r11,407
	ctx.r11.u64 = ctx.r11.u64 | 407;
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, xer);
	// bgt cr6,0x8386e284
	if (cr6.gt) goto loc_8386E284;
	// beq cr6,0x8386e0ec
	if (cr6.eq) goto loc_8386E0EC;
	// lis r11,6688
	ctx.r11.s64 = 438304768;
	// ori r10,r11,43910
	ctx.r10.u64 = ctx.r11.u64 | 43910;
	// cmplw cr6,r3,r10
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, xer);
	// beq cr6,0x8386e0ec
	if (cr6.eq) goto loc_8386E0EC;
	// lis r11,6690
	ctx.r11.s64 = 438435840;
	// ori r10,r11,344
	ctx.r10.u64 = ctx.r11.u64 | 344;
	// cmplw cr6,r3,r10
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, xer);
	// beq cr6,0x8386e180
	if (cr6.eq) goto loc_8386E180;
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
loc_8386E284:
	// lis r11,6690
	ctx.r11.s64 = 438435840;
	// ori r10,r11,417
	ctx.r10.u64 = ctx.r11.u64 | 417;
	// cmplw cr6,r3,r10
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, xer);
	// beq cr6,0x8386e0ec
	if (cr6.eq) goto loc_8386E0EC;
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
loc_8386E2A8:
	// lis r11,11552
	ctx.r11.s64 = 757071872;
	// ori r11,r11,409
	ctx.r11.u64 = ctx.r11.u64 | 409;
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, xer);
	// bgt cr6,0x8386e3d0
	if (cr6.gt) goto loc_8386E3D0;
	// beq cr6,0x8386e0ec
	if (cr6.eq) goto loc_8386E0EC;
	// lis r11,10280
	ctx.r11.s64 = 673710080;
	// ori r11,r11,390
	ctx.r11.u64 = ctx.r11.u64 | 390;
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, xer);
	// bgt cr6,0x8386e370
	if (cr6.gt) goto loc_8386E370;
	// beq cr6,0x8386e0ec
	if (cr6.eq) goto loc_8386E0EC;
	// lis r11,10240
	ctx.r11.s64 = 671088640;
	// ori r11,r11,344
	ctx.r11.u64 = ctx.r11.u64 | 344;
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, xer);
	// bgt cr6,0x8386e32c
	if (cr6.gt) goto loc_8386E32C;
	// beq cr6,0x8386e180
	if (cr6.eq) goto loc_8386E180;
	// lis r11,6690
	ctx.r11.s64 = 438435840;
	// ori r10,r11,43942
	ctx.r10.u64 = ctx.r11.u64 | 43942;
	// cmplw cr6,r3,r10
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, xer);
	// beq cr6,0x8386e318
	if (cr6.eq) goto loc_8386E318;
	// lis r11,10240
	ctx.r11.s64 = 671088640;
	// ori r10,r11,258
	ctx.r10.u64 = ctx.r11.u64 | 258;
	// cmplw cr6,r3,r10
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, xer);
	// bne cr6,0x8386e4ac
	if (!cr6.eq) goto loc_8386E4AC;
loc_8386E304:
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
loc_8386E318:
	// li r3,128
	ctx.r3.s64 = 128;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8386E32C:
	// lis r11,10280
	ctx.r11.s64 = 673710080;
	// ori r10,r11,323
	ctx.r10.u64 = ctx.r11.u64 | 323;
	// cmplw cr6,r3,r10
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, xer);
	// blt cr6,0x8386e4ac
	if (cr6.lt) goto loc_8386E4AC;
	// lis r11,10280
	ctx.r11.s64 = 673710080;
	// ori r10,r11,324
	ctx.r10.u64 = ctx.r11.u64 | 324;
	// cmplw cr6,r3,r10
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, xer);
	// ble cr6,0x8386e180
	if (!cr6.gt) goto loc_8386E180;
	// lis r11,10280
	ctx.r11.s64 = 673710080;
	// ori r10,r11,335
	ctx.r10.u64 = ctx.r11.u64 | 335;
	// cmplw cr6,r3,r10
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, xer);
	// beq cr6,0x8386e180
	if (cr6.eq) goto loc_8386E180;
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
loc_8386E370:
	// lis r11,10784
	ctx.r11.s64 = 706740224;
	// ori r11,r11,2950
	ctx.r11.u64 = ctx.r11.u64 | 2950;
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, xer);
	// bgt cr6,0x8386e3ac
	if (cr6.gt) goto loc_8386E3AC;
	// beq cr6,0x8386e0ec
	if (cr6.eq) goto loc_8386E0EC;
	// addis r11,r3,-10784
	ctx.r11.s64 = ctx.r3.s64 + -706740224;
	// addic. r11,r11,-390
	xer.ca = ctx.r11.u32 > 389;
	ctx.r11.s64 = ctx.r11.s64 + -390;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x8386e0ec
	if (cr0.eq) goto loc_8386E0EC;
	// cmplwi cr6,r11,2495
	cr6.compare<uint32_t>(ctx.r11.u32, 2495, xer);
	// beq cr6,0x8386e180
	if (cr6.eq) goto loc_8386E180;
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
loc_8386E3AC:
	// lis r11,11552
	ctx.r11.s64 = 757071872;
	// ori r10,r11,406
	ctx.r10.u64 = ctx.r11.u64 | 406;
	// cmplw cr6,r3,r10
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, xer);
	// beq cr6,0x8386e0ec
	if (cr6.eq) goto loc_8386E0EC;
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
loc_8386E3D0:
	// lis r11,11682
	ctx.r11.s64 = 765591552;
	// ori r11,r11,43870
	ctx.r11.u64 = ctx.r11.u64 | 43870;
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, xer);
	// bgt cr6,0x8386e454
	if (cr6.gt) goto loc_8386E454;
	// beq cr6,0x8386e180
	if (cr6.eq) goto loc_8386E180;
	// lis r11,11554
	ctx.r11.s64 = 757202944;
	// ori r11,r11,43935
	ctx.r11.u64 = ctx.r11.u64 | 43935;
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, xer);
	// bgt cr6,0x8386e420
	if (cr6.gt) goto loc_8386E420;
	// beq cr6,0x8386e0ec
	if (cr6.eq) goto loc_8386E0EC;
	// addis r11,r3,-11553
	ctx.r11.s64 = ctx.r3.s64 + -757137408;
	// addic. r11,r11,21686
	xer.ca = ctx.r11.u32 > 4294945609;
	ctx.r11.s64 = ctx.r11.s64 + 21686;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x8386e180
	if (cr0.eq) goto loc_8386E180;
	// cmplwi cr6,r11,79
	cr6.compare<uint32_t>(ctx.r11.u32, 79, xer);
	// beq cr6,0x8386e0ec
	if (cr6.eq) goto loc_8386E0EC;
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
loc_8386E420:
	// lis r11,11554
	ctx.r11.s64 = 757202944;
	// ori r10,r11,43941
	ctx.r10.u64 = ctx.r11.u64 | 43941;
	// cmplw cr6,r3,r10
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, xer);
	// beq cr6,0x8386e200
	if (cr6.eq) goto loc_8386E200;
	// lis r11,11680
	ctx.r11.s64 = 765460480;
	// ori r10,r11,406
	ctx.r10.u64 = ctx.r11.u64 | 406;
	// cmplw cr6,r3,r10
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, xer);
	// beq cr6,0x8386e0ec
	if (cr6.eq) goto loc_8386E0EC;
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
loc_8386E454:
	// lis r11,13364
	ctx.r11.s64 = 875823104;
	// ori r11,r11,16713
	ctx.r11.u64 = ctx.r11.u64 | 16713;
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, xer);
	// bgt cr6,0x8386e49c
	if (cr6.gt) goto loc_8386E49C;
	// beq cr6,0x8386e304
	if (cr6.eq) goto loc_8386E304;
	// lis r11,11682
	ctx.r11.s64 = 765591552;
	// ori r10,r11,43940
	ctx.r10.u64 = ctx.r11.u64 | 43940;
	// cmplw cr6,r3,r10
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, xer);
	// beq cr6,0x8386e0ec
	if (cr6.eq) goto loc_8386E0EC;
	// lis r11,12849
	ctx.r11.s64 = 842072064;
	// ori r10,r11,22105
	ctx.r10.u64 = ctx.r11.u64 | 22105;
	// cmplw cr6,r3,r10
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, xer);
	// bne cr6,0x8386e4ac
	if (!cr6.eq) goto loc_8386E4AC;
	// li r3,12
	ctx.r3.s64 = 12;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8386E49C:
	// lis r11,13364
	ctx.r11.s64 = 875823104;
	// ori r10,r11,18753
	ctx.r10.u64 = ctx.r11.u64 | 18753;
	// cmplw cr6,r3,r10
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, xer);
	// beq cr6,0x8386e304
	if (cr6.eq) goto loc_8386E304;
loc_8386E4AC:
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

__attribute__((alias("__imp__sub_8386E4C0"))) PPC_WEAK_FUNC(sub_8386E4C0);
PPC_FUNC_IMPL(__imp__sub_8386E4C0) {
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
	// bl 0x8386d150
	ctx.lr = 0x8386E4DC;
	sub_8386D150(ctx, base);
	// lis r11,6688
	ctx.r11.s64 = 438304768;
	// lwz r30,20(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// ori r10,r11,338
	ctx.r10.u64 = ctx.r11.u64 | 338;
	// cmpw cr6,r3,r10
	cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, xer);
	// beq cr6,0x8386e528
	if (cr6.eq) goto loc_8386E528;
	// lis r11,6688
	ctx.r11.s64 = 438304768;
	// ori r10,r11,339
	ctx.r10.u64 = ctx.r11.u64 | 339;
	// cmpw cr6,r3,r10
	cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, xer);
	// beq cr6,0x8386e528
	if (cr6.eq) goto loc_8386E528;
	// lis r11,6688
	ctx.r11.s64 = 438304768;
	// ori r10,r11,340
	ctx.r10.u64 = ctx.r11.u64 | 340;
	// cmpw cr6,r3,r10
	cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, xer);
	// beq cr6,0x8386e528
	if (cr6.eq) goto loc_8386E528;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8386e070
	ctx.lr = 0x8386E518;
	sub_8386E070(ctx, base);
	// mullw r11,r3,r30
	ctx.r11.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r30.s32);
	// addi r11,r11,7
	ctx.r11.s64 = ctx.r11.s64 + 7;
	// rlwinm r3,r11,29,3,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// b 0x8386e538
	goto loc_8386E538;
loc_8386E528:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8386e070
	ctx.lr = 0x8386E530;
	sub_8386E070(ctx, base);
	// mullw r11,r3,r30
	ctx.r11.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r30.s32);
	// rlwinm r3,r11,31,1,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFC;
loc_8386E538:
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

__attribute__((alias("__imp__sub_8386E550"))) PPC_WEAK_FUNC(sub_8386E550);
PPC_FUNC_IMPL(__imp__sub_8386E550) {
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
	// bl 0x8386d150
	ctx.lr = 0x8386E56C;
	sub_8386D150(ctx, base);
	// lis r10,6688
	ctx.r10.s64 = 438304768;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r30,16(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// ori r10,r10,338
	ctx.r10.u64 = ctx.r10.u64 | 338;
	// cmpw cr6,r3,r10
	cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, xer);
	// beq cr6,0x8386e5b4
	if (cr6.eq) goto loc_8386E5B4;
	// lis r9,6688
	ctx.r9.s64 = 438304768;
	// ori r8,r9,339
	ctx.r8.u64 = ctx.r9.u64 | 339;
	// cmpw cr6,r3,r8
	cr6.compare<int32_t>(ctx.r3.s32, ctx.r8.s32, xer);
	// beq cr6,0x8386e5b4
	if (cr6.eq) goto loc_8386E5B4;
	// lis r9,6688
	ctx.r9.s64 = 438304768;
	// ori r8,r9,340
	ctx.r8.u64 = ctx.r9.u64 | 340;
	// cmpw cr6,r3,r8
	cr6.compare<int32_t>(ctx.r3.s32, ctx.r8.s32, xer);
	// beq cr6,0x8386e5b4
	if (cr6.eq) goto loc_8386E5B4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8386e4c0
	ctx.lr = 0x8386E5AC;
	sub_8386E4C0(ctx, base);
	// mullw r3,r30,r3
	ctx.r3.s64 = int64_t(ctx.r30.s32) * int64_t(ctx.r3.s32);
	// b 0x8386e608
	goto loc_8386E608;
loc_8386E5B4:
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8386e5d4
	if (cr6.eq) goto loc_8386E5D4;
	// rlwinm r11,r11,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// li r9,1
	ctx.r9.s64 = 1;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// blt cr6,0x8386e5d4
	if (cr6.lt) goto loc_8386E5D4;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
loc_8386E5D4:
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x8386e5f0
	if (cr6.eq) goto loc_8386E5F0;
	// rlwinm r11,r30,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 30) & 0x3FFFFFFF;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bge cr6,0x8386e5f0
	if (!cr6.lt) goto loc_8386E5F0;
	// li r11,1
	ctx.r11.s64 = 1;
loc_8386E5F0:
	// cmpw cr6,r3,r10
	cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, xer);
	// li r10,8
	ctx.r10.s64 = 8;
	// beq cr6,0x8386e600
	if (cr6.eq) goto loc_8386E600;
	// li r10,16
	ctx.r10.s64 = 16;
loc_8386E600:
	// mullw r10,r10,r9
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// mullw r3,r11,r10
	ctx.r3.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
loc_8386E608:
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

__attribute__((alias("__imp__sub_8386E620"))) PPC_WEAK_FUNC(sub_8386E620);
PPC_FUNC_IMPL(__imp__sub_8386E620) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8386e64c
	if (cr6.eq) goto loc_8386E64C;
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// rlwinm r11,r11,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bge cr6,0x8386e644
	if (!cr6.lt) goto loc_8386E644;
	// li r11,1
	ctx.r11.s64 = 1;
loc_8386E644:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_8386E64C:
	// lwz r3,20(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8386E654"))) PPC_WEAK_FUNC(sub_8386E654);
PPC_FUNC_IMPL(__imp__sub_8386E654) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8386E658"))) PPC_WEAK_FUNC(sub_8386E658);
PPC_FUNC_IMPL(__imp__sub_8386E658) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8386e684
	if (cr6.eq) goto loc_8386E684;
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// rlwinm r11,r11,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bge cr6,0x8386e67c
	if (!cr6.lt) goto loc_8386E67C;
	// li r11,1
	ctx.r11.s64 = 1;
loc_8386E67C:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_8386E684:
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8386E68C"))) PPC_WEAK_FUNC(sub_8386E68C);
PPC_FUNC_IMPL(__imp__sub_8386E68C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8386E690"))) PPC_WEAK_FUNC(sub_8386E690);
PPC_FUNC_IMPL(__imp__sub_8386E690) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8386e6bc
	if (cr6.eq) goto loc_8386E6BC;
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// rlwinm r11,r11,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bge cr6,0x8386e6b4
	if (!cr6.lt) goto loc_8386E6B4;
	// li r11,1
	ctx.r11.s64 = 1;
loc_8386E6B4:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_8386E6BC:
	// lwz r3,28(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8386E6C4"))) PPC_WEAK_FUNC(sub_8386E6C4);
PPC_FUNC_IMPL(__imp__sub_8386E6C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8386E6C8"))) PPC_WEAK_FUNC(sub_8386E6C8);
PPC_FUNC_IMPL(__imp__sub_8386E6C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// addi r10,r11,32068
	ctx.r10.s64 = ctx.r11.s64 + 32068;
	// stw r10,564(r3)
	PPC_STORE_U32(ctx.r3.u32 + 564, ctx.r10.u32);
	// stw r10,552(r3)
	PPC_STORE_U32(ctx.r3.u32 + 552, ctx.r10.u32);
	// stw r10,540(r3)
	PPC_STORE_U32(ctx.r3.u32 + 540, ctx.r10.u32);
	// stw r10,528(r3)
	PPC_STORE_U32(ctx.r3.u32 + 528, ctx.r10.u32);
	// stw r10,504(r3)
	PPC_STORE_U32(ctx.r3.u32 + 504, ctx.r10.u32);
	// stw r10,480(r3)
	PPC_STORE_U32(ctx.r3.u32 + 480, ctx.r10.u32);
	// stw r10,464(r3)
	PPC_STORE_U32(ctx.r3.u32 + 464, ctx.r10.u32);
	// stw r10,452(r3)
	PPC_STORE_U32(ctx.r3.u32 + 452, ctx.r10.u32);
	// stw r10,440(r3)
	PPC_STORE_U32(ctx.r3.u32 + 440, ctx.r10.u32);
	// stw r10,416(r3)
	PPC_STORE_U32(ctx.r3.u32 + 416, ctx.r10.u32);
	// stw r10,392(r3)
	PPC_STORE_U32(ctx.r3.u32 + 392, ctx.r10.u32);
	// stw r10,368(r3)
	PPC_STORE_U32(ctx.r3.u32 + 368, ctx.r10.u32);
	// stw r10,344(r3)
	PPC_STORE_U32(ctx.r3.u32 + 344, ctx.r10.u32);
	// stw r10,328(r3)
	PPC_STORE_U32(ctx.r3.u32 + 328, ctx.r10.u32);
	// stw r10,316(r3)
	PPC_STORE_U32(ctx.r3.u32 + 316, ctx.r10.u32);
	// stw r10,304(r3)
	PPC_STORE_U32(ctx.r3.u32 + 304, ctx.r10.u32);
	// stw r10,292(r3)
	PPC_STORE_U32(ctx.r3.u32 + 292, ctx.r10.u32);
	// stw r10,280(r3)
	PPC_STORE_U32(ctx.r3.u32 + 280, ctx.r10.u32);
	// stw r10,268(r3)
	PPC_STORE_U32(ctx.r3.u32 + 268, ctx.r10.u32);
	// stw r10,256(r3)
	PPC_STORE_U32(ctx.r3.u32 + 256, ctx.r10.u32);
	// stw r10,244(r3)
	PPC_STORE_U32(ctx.r3.u32 + 244, ctx.r10.u32);
	// stw r10,232(r3)
	PPC_STORE_U32(ctx.r3.u32 + 232, ctx.r10.u32);
	// stw r10,220(r3)
	PPC_STORE_U32(ctx.r3.u32 + 220, ctx.r10.u32);
	// stw r10,208(r3)
	PPC_STORE_U32(ctx.r3.u32 + 208, ctx.r10.u32);
	// stw r10,196(r3)
	PPC_STORE_U32(ctx.r3.u32 + 196, ctx.r10.u32);
	// stw r10,184(r3)
	PPC_STORE_U32(ctx.r3.u32 + 184, ctx.r10.u32);
	// stw r10,160(r3)
	PPC_STORE_U32(ctx.r3.u32 + 160, ctx.r10.u32);
	// stw r10,136(r3)
	PPC_STORE_U32(ctx.r3.u32 + 136, ctx.r10.u32);
	// stw r10,112(r3)
	PPC_STORE_U32(ctx.r3.u32 + 112, ctx.r10.u32);
	// stw r10,88(r3)
	PPC_STORE_U32(ctx.r3.u32 + 88, ctx.r10.u32);
	// stw r10,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, ctx.r10.u32);
	// stw r10,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r10.u32);
	// stw r10,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r10.u32);
	// stw r10,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r10.u32);
	// stw r10,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8386E768"))) PPC_WEAK_FUNC(sub_8386E768);
PPC_FUNC_IMPL(__imp__sub_8386E768) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r10,-31743
	ctx.r10.s64 = -2080309248;
	// lwz r11,14768(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 14768);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x8386e7a4
	if (!cr6.eq) goto loc_8386E7A4;
	// lis r9,-31757
	ctx.r9.s64 = -2081226752;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r8,-31743
	ctx.r8.s64 = -2080309248;
	// stw r11,14768(r10)
	PPC_STORE_U32(ctx.r10.u32 + 14768, ctx.r11.u32);
	// lwz r11,25452(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 25452);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r3,14764(r8)
	PPC_STORE_U32(ctx.r8.u32 + 14764, ctx.r3.u32);
	// stw r11,25452(r9)
	PPC_STORE_U32(ctx.r9.u32 + 25452, ctx.r11.u32);
	// blr 
	return;
loc_8386E7A4:
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// lwz r3,14764(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 14764);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8386E7B0"))) PPC_WEAK_FUNC(sub_8386E7B0);
PPC_FUNC_IMPL(__imp__sub_8386E7B0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r10,-31743
	ctx.r10.s64 = -2080309248;
	// lwz r11,14776(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 14776);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x8386e7ec
	if (!cr6.eq) goto loc_8386E7EC;
	// lis r9,-31757
	ctx.r9.s64 = -2081226752;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r8,-31743
	ctx.r8.s64 = -2080309248;
	// stw r11,14776(r10)
	PPC_STORE_U32(ctx.r10.u32 + 14776, ctx.r11.u32);
	// lwz r11,25452(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 25452);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r3,14772(r8)
	PPC_STORE_U32(ctx.r8.u32 + 14772, ctx.r3.u32);
	// stw r11,25452(r9)
	PPC_STORE_U32(ctx.r9.u32 + 25452, ctx.r11.u32);
	// blr 
	return;
loc_8386E7EC:
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// lwz r3,14772(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 14772);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8386E7F8"))) PPC_WEAK_FUNC(sub_8386E7F8);
PPC_FUNC_IMPL(__imp__sub_8386E7F8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r10,-31743
	ctx.r10.s64 = -2080309248;
	// lwz r11,14784(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 14784);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x8386e834
	if (!cr6.eq) goto loc_8386E834;
	// lis r9,-31757
	ctx.r9.s64 = -2081226752;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r8,-31743
	ctx.r8.s64 = -2080309248;
	// stw r11,14784(r10)
	PPC_STORE_U32(ctx.r10.u32 + 14784, ctx.r11.u32);
	// lwz r11,25452(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 25452);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r3,14780(r8)
	PPC_STORE_U32(ctx.r8.u32 + 14780, ctx.r3.u32);
	// stw r11,25452(r9)
	PPC_STORE_U32(ctx.r9.u32 + 25452, ctx.r11.u32);
	// blr 
	return;
loc_8386E834:
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// lwz r3,14780(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 14780);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8386E840"))) PPC_WEAK_FUNC(sub_8386E840);
PPC_FUNC_IMPL(__imp__sub_8386E840) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r10,-31743
	ctx.r10.s64 = -2080309248;
	// lwz r11,14792(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 14792);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x8386e87c
	if (!cr6.eq) goto loc_8386E87C;
	// lis r9,-31757
	ctx.r9.s64 = -2081226752;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r8,-31743
	ctx.r8.s64 = -2080309248;
	// stw r11,14792(r10)
	PPC_STORE_U32(ctx.r10.u32 + 14792, ctx.r11.u32);
	// lwz r11,25452(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 25452);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r3,14788(r8)
	PPC_STORE_U32(ctx.r8.u32 + 14788, ctx.r3.u32);
	// stw r11,25452(r9)
	PPC_STORE_U32(ctx.r9.u32 + 25452, ctx.r11.u32);
	// blr 
	return;
loc_8386E87C:
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// lwz r3,14788(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 14788);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8386E888"))) PPC_WEAK_FUNC(sub_8386E888);
PPC_FUNC_IMPL(__imp__sub_8386E888) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r10,-31743
	ctx.r10.s64 = -2080309248;
	// lwz r11,14800(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 14800);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x8386e8c4
	if (!cr6.eq) goto loc_8386E8C4;
	// lis r9,-31757
	ctx.r9.s64 = -2081226752;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r8,-31743
	ctx.r8.s64 = -2080309248;
	// stw r11,14800(r10)
	PPC_STORE_U32(ctx.r10.u32 + 14800, ctx.r11.u32);
	// lwz r11,25452(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 25452);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r3,14796(r8)
	PPC_STORE_U32(ctx.r8.u32 + 14796, ctx.r3.u32);
	// stw r11,25452(r9)
	PPC_STORE_U32(ctx.r9.u32 + 25452, ctx.r11.u32);
	// blr 
	return;
loc_8386E8C4:
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// lwz r3,14796(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 14796);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8386E8D0"))) PPC_WEAK_FUNC(sub_8386E8D0);
PPC_FUNC_IMPL(__imp__sub_8386E8D0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r10,-31743
	ctx.r10.s64 = -2080309248;
	// lwz r11,14808(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 14808);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x8386e90c
	if (!cr6.eq) goto loc_8386E90C;
	// lis r9,-31757
	ctx.r9.s64 = -2081226752;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r8,-31743
	ctx.r8.s64 = -2080309248;
	// stw r11,14808(r10)
	PPC_STORE_U32(ctx.r10.u32 + 14808, ctx.r11.u32);
	// lwz r11,25452(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 25452);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r3,14804(r8)
	PPC_STORE_U32(ctx.r8.u32 + 14804, ctx.r3.u32);
	// stw r11,25452(r9)
	PPC_STORE_U32(ctx.r9.u32 + 25452, ctx.r11.u32);
	// blr 
	return;
loc_8386E90C:
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// lwz r3,14804(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 14804);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8386E918"))) PPC_WEAK_FUNC(sub_8386E918);
PPC_FUNC_IMPL(__imp__sub_8386E918) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r10,-31743
	ctx.r10.s64 = -2080309248;
	// lwz r11,14816(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 14816);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x8386e954
	if (!cr6.eq) goto loc_8386E954;
	// lis r9,-31757
	ctx.r9.s64 = -2081226752;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r8,-31743
	ctx.r8.s64 = -2080309248;
	// stw r11,14816(r10)
	PPC_STORE_U32(ctx.r10.u32 + 14816, ctx.r11.u32);
	// lwz r11,25452(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 25452);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r3,14812(r8)
	PPC_STORE_U32(ctx.r8.u32 + 14812, ctx.r3.u32);
	// stw r11,25452(r9)
	PPC_STORE_U32(ctx.r9.u32 + 25452, ctx.r11.u32);
	// blr 
	return;
loc_8386E954:
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// lwz r3,14812(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 14812);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8386E960"))) PPC_WEAK_FUNC(sub_8386E960);
PPC_FUNC_IMPL(__imp__sub_8386E960) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r10,-31743
	ctx.r10.s64 = -2080309248;
	// lwz r11,14824(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 14824);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x8386e99c
	if (!cr6.eq) goto loc_8386E99C;
	// lis r9,-31757
	ctx.r9.s64 = -2081226752;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r8,-31743
	ctx.r8.s64 = -2080309248;
	// stw r11,14824(r10)
	PPC_STORE_U32(ctx.r10.u32 + 14824, ctx.r11.u32);
	// lwz r11,25452(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 25452);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r3,14820(r8)
	PPC_STORE_U32(ctx.r8.u32 + 14820, ctx.r3.u32);
	// stw r11,25452(r9)
	PPC_STORE_U32(ctx.r9.u32 + 25452, ctx.r11.u32);
	// blr 
	return;
loc_8386E99C:
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// lwz r3,14820(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 14820);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8386E9A8"))) PPC_WEAK_FUNC(sub_8386E9A8);
PPC_FUNC_IMPL(__imp__sub_8386E9A8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r10,-31743
	ctx.r10.s64 = -2080309248;
	// lwz r11,14832(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 14832);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x8386e9e4
	if (!cr6.eq) goto loc_8386E9E4;
	// lis r9,-31757
	ctx.r9.s64 = -2081226752;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r8,-31743
	ctx.r8.s64 = -2080309248;
	// stw r11,14832(r10)
	PPC_STORE_U32(ctx.r10.u32 + 14832, ctx.r11.u32);
	// lwz r11,25452(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 25452);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r3,14828(r8)
	PPC_STORE_U32(ctx.r8.u32 + 14828, ctx.r3.u32);
	// stw r11,25452(r9)
	PPC_STORE_U32(ctx.r9.u32 + 25452, ctx.r11.u32);
	// blr 
	return;
loc_8386E9E4:
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// lwz r3,14828(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 14828);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8386E9F0"))) PPC_WEAK_FUNC(sub_8386E9F0);
PPC_FUNC_IMPL(__imp__sub_8386E9F0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r10,-31743
	ctx.r10.s64 = -2080309248;
	// lwz r11,14840(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 14840);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x8386ea2c
	if (!cr6.eq) goto loc_8386EA2C;
	// lis r9,-31757
	ctx.r9.s64 = -2081226752;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r8,-31743
	ctx.r8.s64 = -2080309248;
	// stw r11,14840(r10)
	PPC_STORE_U32(ctx.r10.u32 + 14840, ctx.r11.u32);
	// lwz r11,25452(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 25452);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r3,14836(r8)
	PPC_STORE_U32(ctx.r8.u32 + 14836, ctx.r3.u32);
	// stw r11,25452(r9)
	PPC_STORE_U32(ctx.r9.u32 + 25452, ctx.r11.u32);
	// blr 
	return;
loc_8386EA2C:
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// lwz r3,14836(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 14836);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8386EA38"))) PPC_WEAK_FUNC(sub_8386EA38);
PPC_FUNC_IMPL(__imp__sub_8386EA38) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r10,-31743
	ctx.r10.s64 = -2080309248;
	// lwz r11,14848(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 14848);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x8386ea74
	if (!cr6.eq) goto loc_8386EA74;
	// lis r9,-31757
	ctx.r9.s64 = -2081226752;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r8,-31743
	ctx.r8.s64 = -2080309248;
	// stw r11,14848(r10)
	PPC_STORE_U32(ctx.r10.u32 + 14848, ctx.r11.u32);
	// lwz r11,25452(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 25452);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r3,14844(r8)
	PPC_STORE_U32(ctx.r8.u32 + 14844, ctx.r3.u32);
	// stw r11,25452(r9)
	PPC_STORE_U32(ctx.r9.u32 + 25452, ctx.r11.u32);
	// blr 
	return;
loc_8386EA74:
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// lwz r3,14844(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 14844);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8386EA80"))) PPC_WEAK_FUNC(sub_8386EA80);
PPC_FUNC_IMPL(__imp__sub_8386EA80) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r10,-31743
	ctx.r10.s64 = -2080309248;
	// lwz r11,14856(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 14856);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x8386eabc
	if (!cr6.eq) goto loc_8386EABC;
	// lis r9,-31757
	ctx.r9.s64 = -2081226752;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r8,-31743
	ctx.r8.s64 = -2080309248;
	// stw r11,14856(r10)
	PPC_STORE_U32(ctx.r10.u32 + 14856, ctx.r11.u32);
	// lwz r11,25452(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 25452);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r3,14852(r8)
	PPC_STORE_U32(ctx.r8.u32 + 14852, ctx.r3.u32);
	// stw r11,25452(r9)
	PPC_STORE_U32(ctx.r9.u32 + 25452, ctx.r11.u32);
	// blr 
	return;
loc_8386EABC:
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// lwz r3,14852(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 14852);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8386EAC8"))) PPC_WEAK_FUNC(sub_8386EAC8);
PPC_FUNC_IMPL(__imp__sub_8386EAC8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r10,-31743
	ctx.r10.s64 = -2080309248;
	// lwz r11,14864(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 14864);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x8386eb04
	if (!cr6.eq) goto loc_8386EB04;
	// lis r9,-31757
	ctx.r9.s64 = -2081226752;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r8,-31743
	ctx.r8.s64 = -2080309248;
	// stw r11,14864(r10)
	PPC_STORE_U32(ctx.r10.u32 + 14864, ctx.r11.u32);
	// lwz r11,25452(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 25452);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r3,14860(r8)
	PPC_STORE_U32(ctx.r8.u32 + 14860, ctx.r3.u32);
	// stw r11,25452(r9)
	PPC_STORE_U32(ctx.r9.u32 + 25452, ctx.r11.u32);
	// blr 
	return;
loc_8386EB04:
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// lwz r3,14860(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 14860);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8386EB10"))) PPC_WEAK_FUNC(sub_8386EB10);
PPC_FUNC_IMPL(__imp__sub_8386EB10) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r10,-31743
	ctx.r10.s64 = -2080309248;
	// lwz r11,14872(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 14872);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x8386eb4c
	if (!cr6.eq) goto loc_8386EB4C;
	// lis r9,-31757
	ctx.r9.s64 = -2081226752;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r8,-31743
	ctx.r8.s64 = -2080309248;
	// stw r11,14872(r10)
	PPC_STORE_U32(ctx.r10.u32 + 14872, ctx.r11.u32);
	// lwz r11,25452(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 25452);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r3,14868(r8)
	PPC_STORE_U32(ctx.r8.u32 + 14868, ctx.r3.u32);
	// stw r11,25452(r9)
	PPC_STORE_U32(ctx.r9.u32 + 25452, ctx.r11.u32);
	// blr 
	return;
loc_8386EB4C:
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// lwz r3,14868(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 14868);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8386EB58"))) PPC_WEAK_FUNC(sub_8386EB58);
PPC_FUNC_IMPL(__imp__sub_8386EB58) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r10,-31743
	ctx.r10.s64 = -2080309248;
	// lwz r11,14880(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 14880);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x8386eb94
	if (!cr6.eq) goto loc_8386EB94;
	// lis r9,-31757
	ctx.r9.s64 = -2081226752;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r8,-31743
	ctx.r8.s64 = -2080309248;
	// stw r11,14880(r10)
	PPC_STORE_U32(ctx.r10.u32 + 14880, ctx.r11.u32);
	// lwz r11,25452(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 25452);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r3,14876(r8)
	PPC_STORE_U32(ctx.r8.u32 + 14876, ctx.r3.u32);
	// stw r11,25452(r9)
	PPC_STORE_U32(ctx.r9.u32 + 25452, ctx.r11.u32);
	// blr 
	return;
loc_8386EB94:
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// lwz r3,14876(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 14876);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8386EBA0"))) PPC_WEAK_FUNC(sub_8386EBA0);
PPC_FUNC_IMPL(__imp__sub_8386EBA0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r10,-31743
	ctx.r10.s64 = -2080309248;
	// lwz r11,14888(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 14888);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x8386ebdc
	if (!cr6.eq) goto loc_8386EBDC;
	// lis r9,-31757
	ctx.r9.s64 = -2081226752;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r8,-31743
	ctx.r8.s64 = -2080309248;
	// stw r11,14888(r10)
	PPC_STORE_U32(ctx.r10.u32 + 14888, ctx.r11.u32);
	// lwz r11,25452(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 25452);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r3,14884(r8)
	PPC_STORE_U32(ctx.r8.u32 + 14884, ctx.r3.u32);
	// stw r11,25452(r9)
	PPC_STORE_U32(ctx.r9.u32 + 25452, ctx.r11.u32);
	// blr 
	return;
loc_8386EBDC:
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// lwz r3,14884(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 14884);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8386EBE8"))) PPC_WEAK_FUNC(sub_8386EBE8);
PPC_FUNC_IMPL(__imp__sub_8386EBE8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r10,-31743
	ctx.r10.s64 = -2080309248;
	// lwz r11,14896(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 14896);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x8386ec24
	if (!cr6.eq) goto loc_8386EC24;
	// lis r9,-31757
	ctx.r9.s64 = -2081226752;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r8,-31743
	ctx.r8.s64 = -2080309248;
	// stw r11,14896(r10)
	PPC_STORE_U32(ctx.r10.u32 + 14896, ctx.r11.u32);
	// lwz r11,25452(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 25452);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r3,14892(r8)
	PPC_STORE_U32(ctx.r8.u32 + 14892, ctx.r3.u32);
	// stw r11,25452(r9)
	PPC_STORE_U32(ctx.r9.u32 + 25452, ctx.r11.u32);
	// blr 
	return;
loc_8386EC24:
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// lwz r3,14892(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 14892);
	// blr 
	return;
}

