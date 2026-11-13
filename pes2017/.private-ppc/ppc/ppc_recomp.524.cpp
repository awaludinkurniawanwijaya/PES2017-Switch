#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_83B63C98"))) PPC_WEAK_FUNC(sub_83B63C98);
PPC_FUNC_IMPL(__imp__sub_83B63C98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83b63cac
	if (!cr6.eq) goto loc_83B63CAC;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_83B63CAC:
	// lwz r3,40(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_83B63CC0"))) PPC_WEAK_FUNC(sub_83B63CC0);
PPC_FUNC_IMPL(__imp__sub_83B63CC0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	uint32_t ea{};
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r7,r3,48
	ctx.r7.s64 = ctx.r3.s64 + 48;
loc_83B63CC8:
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
	// bne 0x83b63cc8
	if (!cr0.eq) goto loc_83B63CC8;
	// lwsync 
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83B63CEC"))) PPC_WEAK_FUNC(sub_83B63CEC);
PPC_FUNC_IMPL(__imp__sub_83B63CEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B63CF0"))) PPC_WEAK_FUNC(sub_83B63CF0);
PPC_FUNC_IMPL(__imp__sub_83B63CF0) {
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
	ctx.lr = 0x83B63CF8;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,56(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83b63d44
	if (cr6.eq) goto loc_83B63D44;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r11.u32);
	// lwsync 
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r3,52
	ctx.r8.s64 = ctx.r3.s64 + 52;
loc_83B63D20:
	// mfmsr r7
	ctx.r7.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r9,0,r8
	ea = ctx.r8.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r9.u64 = __builtin_bswap32(reserved.u32);
	// stwcx. r10,0,r8
	ea = ctx.r8.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r7,1
	ctx.msr = (ctx.r7.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x83b63d20
	if (!cr0.eq) goto loc_83B63D20;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83B63D44:
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// blt cr6,0x83b63d64
	if (cr6.lt) goto loc_83B63D64;
	// beq cr6,0x83b63e5c
	if (cr6.eq) goto loc_83B63E5C;
	// li r3,2
	ctx.r3.s64 = 2;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83B63D64:
	// lbz r11,65(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 65);
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83b63da0
	if (cr6.eq) goto loc_83B63DA0;
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// addi r11,r31,12
	ctx.r11.s64 = ctx.r31.s64 + 12;
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x83b63d88
	if (cr6.lt) goto loc_83B63D88;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_83B63D88:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x833c9ca8
	ctx.lr = 0x83B63D90;
	sub_833C9CA8(ctx, base);
	// stw r3,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83b63da0
	if (!cr6.eq) goto loc_83B63DA0;
	// li r30,1
	ctx.r30.s64 = 1;
loc_83B63DA0:
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83b63de0
	if (!cr6.eq) goto loc_83B63DE0;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
	// lwsync 
	// addi r9,r31,52
	ctx.r9.s64 = ctx.r31.s64 + 52;
loc_83B63DBC:
	// mfmsr r8
	ctx.r8.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r9
	ea = ctx.r9.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// stwcx. r29,0,r9
	ea = ctx.r9.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r29.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r8,1
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x83b63dbc
	if (!cr0.eq) goto loc_83B63DBC;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83B63DE0:
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// addi r11,r31,12
	ctx.r11.s64 = ctx.r31.s64 + 12;
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x83b63dfc
	if (cr6.lt) goto loc_83B63DFC;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// b 0x83b63e00
	goto loc_83B63E00;
loc_83B63DFC:
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
loc_83B63E00:
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// addi r3,r31,40
	ctx.r3.s64 = ctx.r31.s64 + 40;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x83b64e90
	ctx.lr = 0x83B63E14;
	sub_83B64E90(ctx, base);
	// lwz r10,40(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83b63e54
	if (!cr6.eq) goto loc_83B63E54;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
	// lwsync 
	// addi r9,r31,52
	ctx.r9.s64 = ctx.r31.s64 + 52;
loc_83B63E30:
	// mfmsr r8
	ctx.r8.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r9
	ea = ctx.r9.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// stwcx. r29,0,r9
	ea = ctx.r9.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r29.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r8,1
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x83b63e30
	if (!cr0.eq) goto loc_83B63E30;
	// li r3,2
	ctx.r3.s64 = 2;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83B63E54:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
loc_83B63E5C:
	// lwz r3,40(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83B63E70;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x83b63e88
	if (cr6.eq) goto loc_83B63E88;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83B63E88:
	// lwz r3,40(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83B63E9C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x83b63ed8
	if (cr6.eq) goto loc_83B63ED8;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
	// lwsync 
	// addi r9,r31,52
	ctx.r9.s64 = ctx.r31.s64 + 52;
loc_83B63EB4:
	// mfmsr r8
	ctx.r8.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r9
	ea = ctx.r9.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// stwcx. r29,0,r9
	ea = ctx.r9.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r29.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r8,1
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x83b63eb4
	if (!cr0.eq) goto loc_83B63EB4;
	// li r3,2
	ctx.r3.s64 = 2;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83B63ED8:
	// lwsync 
	// addi r9,r31,52
	ctx.r9.s64 = ctx.r31.s64 + 52;
loc_83B63EE0:
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
	// bne 0x83b63ee0
	if (!cr0.eq) goto loc_83B63EE0;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B63F04"))) PPC_WEAK_FUNC(sub_83B63F04);
PPC_FUNC_IMPL(__imp__sub_83B63F04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B63F08"))) PPC_WEAK_FUNC(sub_83B63F08);
PPC_FUNC_IMPL(__imp__sub_83B63F08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83B63F10;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,40(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// lis r11,-32203
	ctx.r11.s64 = -2110455808;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r10,r11,-25600
	ctx.r10.s64 = ctx.r11.s64 + -25600;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// beq cr6,0x83b63f48
	if (cr6.eq) goto loc_83B63F48;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83B63F44;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r29,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r29.u32);
loc_83B63F48:
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83b63f5c
	if (cr6.eq) goto loc_83B63F5C;
	// bl 0x833c99c0
	ctx.lr = 0x83B63F58;
	sub_833C99C0(ctx, base);
	// stw r29,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r29.u32);
loc_83B63F5C:
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// addi r30,r31,12
	ctx.r30.s64 = ctx.r31.s64 + 12;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83b63f80
	if (cr6.lt) goto loc_83B63F80;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x83B63F80;
	sub_825952B8(ctx, base);
loc_83B63F80:
	// lis r11,-32203
	ctx.r11.s64 = -2110455808;
	// stw r29,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r29.u32);
	// li r10,15
	ctx.r10.s64 = 15;
	// addi r9,r11,-25628
	ctx.r9.s64 = ctx.r11.s64 + -25628;
	// stw r10,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r10.u32);
	// stb r29,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r29.u8);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B63FA4"))) PPC_WEAK_FUNC(sub_83B63FA4);
PPC_FUNC_IMPL(__imp__sub_83B63FA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B63FA8"))) PPC_WEAK_FUNC(sub_83B63FA8);
PPC_FUNC_IMPL(__imp__sub_83B63FA8) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwsync 
	// li r11,-1
	ctx.r11.s64 = -1;
	// addi r8,r3,48
	ctx.r8.s64 = ctx.r3.s64 + 48;
loc_83B63FC8:
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
	// bne 0x83b63fc8
	if (!cr0.eq) goto loc_83B63FC8;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// bne cr6,0x83b64038
	if (!cr6.eq) goto loc_83B64038;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83B64004;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595150
	ctx.lr = 0x83B64018;
	sub_82595150(ctx, base);
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x83B64030;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595170
	ctx.lr = 0x83B64038;
	sub_82595170(ctx, base);
loc_83B64038:
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

__attribute__((alias("__imp__sub_83B6404C"))) PPC_WEAK_FUNC(sub_83B6404C);
PPC_FUNC_IMPL(__imp__sub_83B6404C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B64050"))) PPC_WEAK_FUNC(sub_83B64050);
PPC_FUNC_IMPL(__imp__sub_83B64050) {
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
	// bl 0x83b63f08
	ctx.lr = 0x83B64070;
	sub_83B63F08(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83b64090
	if (cr6.eq) goto loc_83B64090;
	// bl 0x82595188
	ctx.lr = 0x83B64080;
	sub_82595188(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x83B64090;
	sub_825952B8(ctx, base);
loc_83B64090:
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

__attribute__((alias("__imp__sub_83B640AC"))) PPC_WEAK_FUNC(sub_83B640AC);
PPC_FUNC_IMPL(__imp__sub_83B640AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B640B0"))) PPC_WEAK_FUNC(sub_83B640B0);
PPC_FUNC_IMPL(__imp__sub_83B640B0) {
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
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// stw r10,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r10.u32);
	// li r6,-1
	ctx.r6.s64 = -1;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r11.u8);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8259cb28
	ctx.lr = 0x83B640EC;
	sub_8259CB28(ctx, base);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r9.u32);
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

__attribute__((alias("__imp__sub_83B64110"))) PPC_WEAK_FUNC(sub_83B64110);
PPC_FUNC_IMPL(__imp__sub_83B64110) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x83B64118;
	__savegprlr_27(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r28,15
	ctx.r28.s64 = 15;
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r30.u32);
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// stw r28,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r28.u32);
	// li r29,-1
	ctx.r29.s64 = -1;
	// stb r30,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r30.u8);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8259cb28
	ctx.lr = 0x83B64150;
	sub_8259CB28(ctx, base);
	// lwz r11,28(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 28);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// beq cr6,0x83b64188
	if (cr6.eq) goto loc_83B64188;
	// stw r28,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r28.u32);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r30,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r30.u8);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8259cb28
	ctx.lr = 0x83B64180;
	sub_8259CB28(ctx, base);
	// lwz r11,124(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
loc_83B64188:
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83b641a8
	if (cr6.lt) goto loc_83B641A8;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x83B641A8;
	sub_825952B8(ctx, base);
loc_83B641A8:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B641B0"))) PPC_WEAK_FUNC(sub_83B641B0);
PPC_FUNC_IMPL(__imp__sub_83B641B0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x83B641B8;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// addi r31,r6,12
	ctx.r31.s64 = ctx.r6.s64 + 12;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83b641f8
	if (!cr6.eq) goto loc_83B641F8;
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// lwz r6,4(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x8382eb60
	ctx.lr = 0x83B641EC;
	sub_8382EB60(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_83B641F8:
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r28,r10
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r10.u32, xer);
	// bne cr6,0x83b64260
	if (!cr6.eq) goto loc_83B64260;
	// lwz r10,32(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 32);
	// addi r11,r28,12
	ctx.r11.s64 = ctx.r28.s64 + 12;
	// lwz r7,28(r28)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r28.u32 + 28);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x83b64220
	if (cr6.lt) goto loc_83B64220;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_83B64220:
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827a8810
	ctx.lr = 0x83B64234;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge cr6,0x83b64460
	if (!cr6.lt) goto loc_83B64460;
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8382eb60
	ctx.lr = 0x83B64254;
	sub_8382EB60(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_83B64260:
	// cmplw cr6,r28,r11
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, xer);
	// bne cr6,0x83b642c8
	if (!cr6.eq) goto loc_83B642C8;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r7,16(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r3,r11,12
	ctx.r3.s64 = ctx.r11.s64 + 12;
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x83b64288
	if (cr6.lt) goto loc_83B64288;
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// b 0x83b6428c
	goto loc_83B6428C;
loc_83B64288:
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
loc_83B6428C:
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,16(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// bl 0x827a8810
	ctx.lr = 0x83B64298;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge cr6,0x83b64460
	if (!cr6.lt) goto loc_83B64460;
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x8382eb60
	ctx.lr = 0x83B642BC;
	sub_8382EB60(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_83B642C8:
	// lwz r11,32(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 32);
	// addi r29,r28,12
	ctx.r29.s64 = ctx.r28.s64 + 12;
	// lwz r7,28(r28)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r28.u32 + 28);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83b642e4
	if (cr6.lt) goto loc_83B642E4;
	// lwz r6,0(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// b 0x83b642e8
	goto loc_83B642E8;
loc_83B642E4:
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
loc_83B642E8:
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827a8810
	ctx.lr = 0x83B642F8;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge cr6,0x83b64390
	if (!cr6.lt) goto loc_83B64390;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82921010
	ctx.lr = 0x83B6430C;
	sub_82921010(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r7,16(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// lwz r30,80(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r3,r30,12
	ctx.r3.s64 = ctx.r30.s64 + 12;
	// blt cr6,0x83b6432c
	if (cr6.lt) goto loc_83B6432C;
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// b 0x83b64330
	goto loc_83B64330;
loc_83B6432C:
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
loc_83B64330:
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,16(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// bl 0x827a8810
	ctx.lr = 0x83B6433C;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge cr6,0x83b64390
	if (!cr6.lt) goto loc_83B64390;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lbz r10,45(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 45);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83b64378
	if (cr6.eq) goto loc_83B64378;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x8382eb60
	ctx.lr = 0x83B6436C;
	sub_8382EB60(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_83B64378:
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x8382eb60
	ctx.lr = 0x83B64384;
	sub_8382EB60(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_83B64390:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r7,16(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83b643a8
	if (cr6.lt) goto loc_83B643A8;
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// b 0x83b643ac
	goto loc_83B643AC;
loc_83B643A8:
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
loc_83B643AC:
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,16(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x827a8810
	ctx.lr = 0x83B643BC;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge cr6,0x83b64460
	if (!cr6.lt) goto loc_83B64460;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x837c05a0
	ctx.lr = 0x83B643D0;
	sub_837C05A0(ctx, base);
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// lwz r30,80(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, xer);
	// beq cr6,0x83b64414
	if (cr6.eq) goto loc_83B64414;
	// lwz r10,32(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// addi r11,r30,12
	ctx.r11.s64 = ctx.r30.s64 + 12;
	// lwz r7,28(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x83b643f8
	if (cr6.lt) goto loc_83B643F8;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_83B643F8:
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827a8810
	ctx.lr = 0x83B6440C;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge cr6,0x83b64460
	if (!cr6.lt) goto loc_83B64460;
loc_83B64414:
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lbz r10,45(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 45);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83b64448
	if (cr6.eq) goto loc_83B64448;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x8382eb60
	ctx.lr = 0x83B6443C;
	sub_8382EB60(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_83B64448:
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x8382eb60
	ctx.lr = 0x83B64454;
	sub_8382EB60(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_83B64460:
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82f3fc48
	ctx.lr = 0x83B64474;
	sub_82F3FC48(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r10,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r10.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B6448C"))) PPC_WEAK_FUNC(sub_83B6448C);
PPC_FUNC_IMPL(__imp__sub_83B6448C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B64490"))) PPC_WEAK_FUNC(sub_83B64490);
PPC_FUNC_IMPL(__imp__sub_83B64490) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x83B64498;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
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
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,48
	ctx.r4.s64 = 48;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// bl 0x82595718
	ctx.lr = 0x83B644C4;
	sub_82595718(ctx, base);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r3,12
	ctx.r4.s64 = ctx.r3.s64 + 12;
	// addi r3,r30,13
	ctx.r3.s64 = ctx.r30.s64 + 13;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
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
	// stb r11,44(r31)
	PPC_STORE_U8(ctx.r31.u32 + 44, ctx.r11.u8);
	// stb r11,45(r31)
	PPC_STORE_U8(ctx.r31.u32 + 45, ctx.r11.u8);
	// bl 0x83b64110
	ctx.lr = 0x83B644FC;
	sub_83B64110(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x83b641b0
	ctx.lr = 0x83B64510;
	sub_83B641B0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B6451C"))) PPC_WEAK_FUNC(sub_83B6451C);
PPC_FUNC_IMPL(__imp__sub_83B6451C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B64520"))) PPC_WEAK_FUNC(sub_83B64520);
PPC_FUNC_IMPL(__imp__sub_83B64520) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x83B64528;
	__savegprlr_26(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r27,0
	ctx.r27.s64 = 0;
	// li r11,15
	ctx.r11.s64 = 15;
	// stw r27,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r27.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// stb r27,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r27.u8);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r5,4(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// bl 0x8259cc28
	ctx.lr = 0x83B64558;
	sub_8259CC28(ctx, base);
	// addi r26,r30,8
	ctx.r26.s64 = ctx.r30.s64 + 8;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82596fe8
	ctx.lr = 0x83B64564;
	sub_82596FE8(ctx, base);
	// addi r28,r30,64
	ctx.r28.s64 = ctx.r30.s64 + 64;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x837e78b8
	ctx.lr = 0x83B64578;
	sub_837E78B8(ctx, base);
	// lwz r10,68(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 68);
	// lwz r29,80(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r29,r10
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r10.u32, xer);
	// beq cr6,0x83b645e4
	if (cr6.eq) goto loc_83B645E4;
	// lwz r30,40(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 40);
	// cmplwi cr6,r31,1
	cr6.compare<uint32_t>(ctx.r31.u32, 1, xer);
	// bge cr6,0x83b6459c
	if (!cr6.lt) goto loc_83B6459C;
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,65(r30)
	PPC_STORE_U8(ctx.r30.u32 + 65, ctx.r11.u8);
loc_83B6459C:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82597088
	ctx.lr = 0x83B645A4;
	sub_82597088(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83B645B8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,116(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// blt cr6,0x83b645d8
	if (cr6.lt) goto loc_83B645D8;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x83B645D8;
	sub_825952B8(ctx, base);
loc_83B645D8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_83B645E4:
	// li r11,1
	ctx.r11.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// li r4,68
	ctx.r4.s64 = 68;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82595718
	ctx.lr = 0x83B645FC;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83b64620
	if (cr6.eq) goto loc_83B64620;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x83b63bd0
	ctx.lr = 0x83B64610;
	sub_83B63BD0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83b6463c
	if (!cr6.eq) goto loc_83B6463C;
loc_83B64620:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82597088
	ctx.lr = 0x83B64628;
	sub_82597088(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8387e8e0
	ctx.lr = 0x83B64630;
	sub_8387E8E0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_83B6463C:
	// lwz r10,44(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// addi r11,r30,40
	ctx.r11.s64 = ctx.r30.s64 + 40;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83b64654
	if (!cr6.eq) goto loc_83B64654;
	// stw r31,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
	// b 0x83b64658
	goto loc_83B64658;
loc_83B64654:
	// stw r31,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r31.u32);
loc_83B64658:
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r27,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r27.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r31,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r31.u32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x83b640b0
	ctx.lr = 0x83B64674;
	sub_83B640B0(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83b64490
	ctx.lr = 0x83B64688;
	sub_83B64490(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8387e8e0
	ctx.lr = 0x83B64690;
	sub_8387E8E0(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82597088
	ctx.lr = 0x83B64698;
	sub_82597088(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83B646AC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8387e8e0
	ctx.lr = 0x83B646B4;
	sub_8387E8E0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B646C0"))) PPC_WEAK_FUNC(sub_83B646C0);
PPC_FUNC_IMPL(__imp__sub_83B646C0) {
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
	// lwz r11,4(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// lwz r10,8(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83b646f0
	if (!cr6.eq) goto loc_83B646F0;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// b 0x83b646f4
	goto loc_83B646F4;
loc_83B646F0:
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
loc_83B646F4:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83b64704
	if (!cr6.eq) goto loc_83B64704;
	// stw r11,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r11.u32);
	// b 0x83b64708
	goto loc_83B64708;
loc_83B64704:
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
loc_83B64708:
	// addi r30,r3,64
	ctx.r30.s64 = ctx.r3.s64 + 64;
	// addi r5,r31,12
	ctx.r5.s64 = ctx.r31.s64 + 12;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x83b63988
	ctx.lr = 0x83B6471C;
	sub_83B63988(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r6,92(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x838164b8
	ctx.lr = 0x83B64730;
	sub_838164B8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83B64744;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
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

__attribute__((alias("__imp__sub_83B6475C"))) PPC_WEAK_FUNC(sub_83B6475C);
PPC_FUNC_IMPL(__imp__sub_83B6475C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B64760"))) PPC_WEAK_FUNC(sub_83B64760);
PPC_FUNC_IMPL(__imp__sub_83B64760) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x83B64768;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r27,r3,8
	ctx.r27.s64 = ctx.r3.s64 + 8;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82596fe8
	ctx.lr = 0x83B6477C;
	sub_82596FE8(ctx, base);
	// lwz r11,40(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 40);
	// addi r31,r28,40
	ctx.r31.s64 = ctx.r28.s64 + 40;
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83b64810
	if (cr6.eq) goto loc_83B64810;
loc_83B64794:
	// lwz r5,0(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r11,48(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 48);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x83b647b0
	if (!cr6.eq) goto loc_83B647B0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83b646c0
	ctx.lr = 0x83B647AC;
	sub_83B646C0(ctx, base);
	// b 0x83b64800
	goto loc_83B64800;
loc_83B647B0:
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x83b647d8
	if (cr6.eq) goto loc_83B647D8;
	// lwz r11,8(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83b647d0
	if (cr6.eq) goto loc_83B647D0;
	// stw r29,8(r5)
	PPC_STORE_U32(ctx.r5.u32 + 8, ctx.r29.u32);
	// stw r29,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r29.u32);
	// b 0x83b647d4
	goto loc_83B647D4;
loc_83B647D0:
	// stw r29,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r29.u32);
loc_83B647D4:
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
loc_83B647D8:
	// lwz r10,52(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 52);
	// addi r11,r28,48
	ctx.r11.s64 = ctx.r28.s64 + 48;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83b647f0
	if (!cr6.eq) goto loc_83B647F0;
	// stw r5,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// b 0x83b647f4
	goto loc_83B647F4;
loc_83B647F0:
	// stw r5,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r5.u32);
loc_83B647F4:
	// stw r10,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r10.u32);
	// stw r29,8(r5)
	PPC_STORE_U32(ctx.r5.u32 + 8, ctx.r29.u32);
	// stw r5,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r5.u32);
loc_83B64800:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83b64794
	if (!cr6.eq) goto loc_83B64794;
loc_83B64810:
	// addi r30,r28,48
	ctx.r30.s64 = ctx.r28.s64 + 48;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83b648d4
	if (cr6.eq) goto loc_83B648D4;
loc_83B64820:
	// lwz r31,0(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// beq cr6,0x83b648b8
	if (cr6.eq) goto loc_83B648B8;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83B64844;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// beq cr6,0x83b648d4
	if (cr6.eq) goto loc_83B648D4;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83b648b8
	if (!cr6.eq) goto loc_83B648B8;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83b64880
	if (cr6.eq) goto loc_83B64880;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83b64878
	if (cr6.eq) goto loc_83B64878;
	// stw r29,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r29.u32);
	// stw r29,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r29.u32);
	// b 0x83b6487c
	goto loc_83B6487C;
loc_83B64878:
	// stw r29,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r29.u32);
loc_83B6487C:
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
loc_83B64880:
	// lwz r10,60(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 60);
	// addi r11,r28,56
	ctx.r11.s64 = ctx.r28.s64 + 56;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83b648a4
	if (!cr6.eq) goto loc_83B648A4;
	// stw r31,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// stw r29,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r29.u32);
	// stw r31,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r31.u32);
	// b 0x83b648c8
	goto loc_83B648C8;
loc_83B648A4:
	// stw r31,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r31.u32);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// stw r29,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r29.u32);
	// stw r31,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r31.u32);
	// b 0x83b648c8
	goto loc_83B648C8;
loc_83B648B8:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83b646c0
	ctx.lr = 0x83B648C8;
	sub_83B646C0(ctx, base);
loc_83B648C8:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83b64820
	if (!cr6.eq) goto loc_83B64820;
loc_83B648D4:
	// lwz r31,56(r28)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + 56);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x83b64964
	if (cr6.eq) goto loc_83B64964;
loc_83B648E0:
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// lwz r29,8(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x83b64958
	if (!cr6.eq) goto loc_83B64958;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83b64904
	if (!cr6.eq) goto loc_83B64904;
	// stw r29,56(r28)
	PPC_STORE_U32(ctx.r28.u32 + 56, ctx.r29.u32);
	// b 0x83b64908
	goto loc_83B64908;
loc_83B64904:
	// stw r29,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r29.u32);
loc_83B64908:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// bne cr6,0x83b64918
	if (!cr6.eq) goto loc_83B64918;
	// stw r11,60(r28)
	PPC_STORE_U32(ctx.r28.u32 + 60, ctx.r11.u32);
	// b 0x83b6491c
	goto loc_83B6491C;
loc_83B64918:
	// stw r11,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r11.u32);
loc_83B6491C:
	// addi r30,r28,64
	ctx.r30.s64 = ctx.r28.s64 + 64;
	// addi r5,r31,12
	ctx.r5.s64 = ctx.r31.s64 + 12;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x83b63988
	ctx.lr = 0x83B64930;
	sub_83B63988(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r6,92(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x838164b8
	ctx.lr = 0x83B64944;
	sub_838164B8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83B64958;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83B64958:
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// bne cr6,0x83b648e0
	if (!cr6.eq) goto loc_83B648E0;
loc_83B64964:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82597088
	ctx.lr = 0x83B6496C;
	sub_82597088(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B64974"))) PPC_WEAK_FUNC(sub_83B64974);
PPC_FUNC_IMPL(__imp__sub_83B64974) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B64978"))) PPC_WEAK_FUNC(sub_83B64978);
PPC_FUNC_IMPL(__imp__sub_83B64978) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83B64980;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32203
	ctx.r11.s64 = -2110455808;
	// lwz r10,40(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r9,r11,-25648
	ctx.r9.s64 = ctx.r11.s64 + -25648;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// beq cr6,0x83b64a08
	if (cr6.eq) goto loc_83B64A08;
loc_83B649A4:
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83b649d4
	if (cr6.eq) goto loc_83B649D4;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83b649cc
	if (cr6.eq) goto loc_83B649CC;
	// stw r29,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r29.u32);
	// stw r29,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r29.u32);
	// b 0x83b649d0
	goto loc_83B649D0;
loc_83B649CC:
	// stw r29,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r29.u32);
loc_83B649D0:
	// stw r10,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r10.u32);
loc_83B649D4:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83B649E8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r8,8(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x83B649FC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r7,40(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// bne cr6,0x83b649a4
	if (!cr6.eq) goto loc_83B649A4;
loc_83B64A08:
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83b64a78
	if (cr6.eq) goto loc_83B64A78;
loc_83B64A14:
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83b64a44
	if (cr6.eq) goto loc_83B64A44;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83b64a3c
	if (cr6.eq) goto loc_83B64A3C;
	// stw r29,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r29.u32);
	// stw r29,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r29.u32);
	// b 0x83b64a40
	goto loc_83B64A40;
loc_83B64A3C:
	// stw r29,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r29.u32);
loc_83B64A40:
	// stw r10,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r10.u32);
loc_83B64A44:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83B64A58;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r8,8(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x83B64A6C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r7,48(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// bne cr6,0x83b64a14
	if (!cr6.eq) goto loc_83B64A14;
loc_83B64A78:
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83b64ae8
	if (cr6.eq) goto loc_83B64AE8;
loc_83B64A84:
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83b64ab4
	if (cr6.eq) goto loc_83B64AB4;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83b64aac
	if (cr6.eq) goto loc_83B64AAC;
	// stw r29,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r29.u32);
	// stw r29,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r29.u32);
	// b 0x83b64ab0
	goto loc_83B64AB0;
loc_83B64AAC:
	// stw r29,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r29.u32);
loc_83B64AB0:
	// stw r10,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r10.u32);
loc_83B64AB4:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83B64AC8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r8,8(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x83B64ADC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r7,56(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// bne cr6,0x83b64a84
	if (!cr6.eq) goto loc_83B64A84;
loc_83B64AE8:
	// lwz r6,68(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// addi r4,r31,64
	ctx.r4.s64 = ctx.r31.s64 + 64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r5,0(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// bl 0x838164b8
	ctx.lr = 0x83B64AFC;
	sub_838164B8(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,68(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x83B64B10;
	sub_825952B8(ctx, base);
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// bl 0x82596f90
	ctx.lr = 0x83B64B18;
	sub_82596F90(ctx, base);
	// lis r10,-32203
	ctx.r10.s64 = -2110455808;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r9,r10,-32312
	ctx.r9.s64 = ctx.r10.s64 + -32312;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// bl 0x83524cd0
	ctx.lr = 0x83B64B2C;
	sub_83524CD0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B64B34"))) PPC_WEAK_FUNC(sub_83B64B34);
PPC_FUNC_IMPL(__imp__sub_83B64B34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B64B38"))) PPC_WEAK_FUNC(sub_83B64B38);
PPC_FUNC_IMPL(__imp__sub_83B64B38) {
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
	// bl 0x83b64978
	ctx.lr = 0x83B64B58;
	sub_83B64978(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83b64b78
	if (cr6.eq) goto loc_83B64B78;
	// bl 0x82595188
	ctx.lr = 0x83B64B68;
	sub_82595188(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x83B64B78;
	sub_825952B8(ctx, base);
loc_83B64B78:
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

__attribute__((alias("__imp__sub_83B64B94"))) PPC_WEAK_FUNC(sub_83B64B94);
PPC_FUNC_IMPL(__imp__sub_83B64B94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B64B98"))) PPC_WEAK_FUNC(sub_83B64B98);
PPC_FUNC_IMPL(__imp__sub_83B64B98) {
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
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83b64bcc
	if (!cr6.eq) goto loc_83B64BCC;
	// li r3,2
	ctx.r3.s64 = 2;
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
loc_83B64BCC:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// li r4,80
	ctx.r4.s64 = 80;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x83B64BEC;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83b64c00
	if (cr6.eq) goto loc_83B64C00;
	// bl 0x83b638c0
	ctx.lr = 0x83B64BF8;
	sub_83B638C0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83b64c18
	if (!cr6.eq) goto loc_83B64C18;
loc_83B64C00:
	// li r3,3
	ctx.r3.s64 = 3;
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
loc_83B64C18:
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
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

__attribute__((alias("__imp__sub_83B64C34"))) PPC_WEAK_FUNC(sub_83B64C34);
PPC_FUNC_IMPL(__imp__sub_83B64C34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B64C38"))) PPC_WEAK_FUNC(sub_83B64C38);
PPC_FUNC_IMPL(__imp__sub_83B64C38) {
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
	// lis r11,-32203
	ctx.r11.s64 = -2110455808;
	// clrlwi r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	// addi r9,r11,-25424
	ctx.r9.s64 = ctx.r11.s64 + -25424;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// beq cr6,0x83b64c6c
	if (cr6.eq) goto loc_83B64C6C;
	// bl 0x82416268
	ctx.lr = 0x83B64C68;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_83B64C6C:
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

__attribute__((alias("__imp__sub_83B64C80"))) PPC_WEAK_FUNC(sub_83B64C80);
PPC_FUNC_IMPL(__imp__sub_83B64C80) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// b 0x83103d60
	sub_83103D60(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B64C88"))) PPC_WEAK_FUNC(sub_83B64C88);
PPC_FUNC_IMPL(__imp__sub_83B64C88) {
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
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x83103d20
	ctx.lr = 0x83B64C9C;
	sub_83103D20(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// rotlwi r3,r3,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r3.u32, 0);
	// cmpld cr6,r11,r3
	cr6.compare<uint64_t>(ctx.r11.u64, ctx.r3.u64, xer);
	// beq cr6,0x83b64cb0
	if (cr6.eq) goto loc_83B64CB0;
	// li r3,0
	ctx.r3.s64 = 0;
loc_83B64CB0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83B64CC0"))) PPC_WEAK_FUNC(sub_83B64CC0);
PPC_FUNC_IMPL(__imp__sub_83B64CC0) {
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
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83b64d04
	if (cr6.eq) goto loc_83B64D04;
	// bl 0x83103c10
	ctx.lr = 0x83B64CE4;
	sub_83103C10(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83b64d04
	if (!cr6.eq) goto loc_83B64D04;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x83103d60
	ctx.lr = 0x83B64CF8;
	sub_83103D60(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// bne cr6,0x83b64d08
	if (!cr6.eq) goto loc_83B64D08;
loc_83B64D04:
	// li r3,1
	ctx.r3.s64 = 1;
loc_83B64D08:
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

__attribute__((alias("__imp__sub_83B64D1C"))) PPC_WEAK_FUNC(sub_83B64D1C);
PPC_FUNC_IMPL(__imp__sub_83B64D1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B64D20"))) PPC_WEAK_FUNC(sub_83B64D20);
PPC_FUNC_IMPL(__imp__sub_83B64D20) {
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
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83b64d68
	if (cr6.eq) goto loc_83B64D68;
	// bl 0x83103bb8
	ctx.lr = 0x83B64D44;
	sub_83103BB8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83b64d68
	if (cr6.eq) goto loc_83B64D68;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x83103c10
	ctx.lr = 0x83B64D58;
	sub_83103C10(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x83b64d6c
	if (cr6.eq) goto loc_83B64D6C;
loc_83B64D68:
	// li r11,0
	ctx.r11.s64 = 0;
loc_83B64D6C:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
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

__attribute__((alias("__imp__sub_83B64D84"))) PPC_WEAK_FUNC(sub_83B64D84);
PPC_FUNC_IMPL(__imp__sub_83B64D84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B64D88"))) PPC_WEAK_FUNC(sub_83B64D88);
PPC_FUNC_IMPL(__imp__sub_83B64D88) {
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
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lis r11,-32203
	ctx.r11.s64 = -2110455808;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r10,r11,-25400
	ctx.r10.s64 = ctx.r11.s64 + -25400;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// beq cr6,0x83b64dc0
	if (cr6.eq) goto loc_83B64DC0;
	// bl 0x83103e98
	ctx.lr = 0x83B64DC0;
	sub_83103E98(ctx, base);
loc_83B64DC0:
	// lis r11,-32203
	ctx.r11.s64 = -2110455808;
	// clrlwi r10,r30,31
	ctx.r10.u64 = ctx.r30.u32 & 0x1;
	// addi r9,r11,-25424
	ctx.r9.s64 = ctx.r11.s64 + -25424;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x83b64de4
	if (cr6.eq) goto loc_83B64DE4;
	// bl 0x82416268
	ctx.lr = 0x83B64DE0;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_83B64DE4:
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

__attribute__((alias("__imp__sub_83B64DFC"))) PPC_WEAK_FUNC(sub_83B64DFC);
PPC_FUNC_IMPL(__imp__sub_83B64DFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B64E00"))) PPC_WEAK_FUNC(sub_83B64E00);
PPC_FUNC_IMPL(__imp__sub_83B64E00) {
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
	// li r11,49
	ctx.r11.s64 = 49;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,0(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x83104938
	ctx.lr = 0x83B64E28;
	sub_83104938(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// bne cr6,0x83b64e4c
	if (!cr6.eq) goto loc_83B64E4C;
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
loc_83B64E4C:
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x83103b10
	ctx.lr = 0x83B64E54;
	sub_83103B10(ctx, base);
	// li r4,128
	ctx.r4.s64 = 128;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x83103b00
	ctx.lr = 0x83B64E60;
	sub_83103B00(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82dfa5b8
	ctx.lr = 0x83B64E6C;
	sub_82DFA5B8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x83103b08
	ctx.lr = 0x83B64E78;
	sub_83103B08(ctx, base);
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

__attribute__((alias("__imp__sub_83B64E90"))) PPC_WEAK_FUNC(sub_83B64E90);
PPC_FUNC_IMPL(__imp__sub_83B64E90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83B64E98;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83b64eb8
	if (!cr6.eq) goto loc_83B64EB8;
	// li r3,2
	ctx.r3.s64 = 2;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_83B64EB8:
	// li r11,1
	ctx.r11.s64 = 1;
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r30,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r30.u32);
	// li r4,8
	ctx.r4.s64 = 8;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x83B64ED8;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83b64f28
	if (cr6.eq) goto loc_83B64F28;
	// lis r11,-32203
	ctx.r11.s64 = -2110455808;
	// stw r30,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r30.u32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r10,r11,-25400
	ctx.r10.s64 = ctx.r11.s64 + -25400;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x83b64e00
	ctx.lr = 0x83B64EFC;
	sub_83B64E00(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x83b64f34
	if (cr6.eq) goto loc_83B64F34;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83B64F1C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_83B64F28:
	// li r3,3
	ctx.r3.s64 = 3;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_83B64F34:
	// stw r31,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r31.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B64F44"))) PPC_WEAK_FUNC(sub_83B64F44);
PPC_FUNC_IMPL(__imp__sub_83B64F44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B64F48"))) PPC_WEAK_FUNC(sub_83B64F48);
PPC_FUNC_IMPL(__imp__sub_83B64F48) {
	PPC_FUNC_PROLOGUE();
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,2
	ctx.r9.s64 = 2;
	// stb r11,46(r3)
	PPC_STORE_U8(ctx.r3.u32 + 46, ctx.r11.u8);
	// stb r10,48(r3)
	PPC_STORE_U8(ctx.r3.u32 + 48, ctx.r10.u8);
	// stb r11,51(r3)
	PPC_STORE_U8(ctx.r3.u32 + 51, ctx.r11.u8);
	// stb r9,52(r3)
	PPC_STORE_U8(ctx.r3.u32 + 52, ctx.r9.u8);
	// stb r10,50(r3)
	PPC_STORE_U8(ctx.r3.u32 + 50, ctx.r10.u8);
	// stb r11,56(r3)
	PPC_STORE_U8(ctx.r3.u32 + 56, ctx.r11.u8);
	// b 0x837f9ce0
	sub_837F9CE0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B64F70"))) PPC_WEAK_FUNC(sub_83B64F70);
PPC_FUNC_IMPL(__imp__sub_83B64F70) {
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
	// bl 0x837fb498
	ctx.lr = 0x83B64F88;
	sub_837FB498(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x83b64ff0
	if (cr6.eq) goto loc_83B64FF0;
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83b64fb0
	if (!cr6.eq) goto loc_83B64FB0;
	// lbz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83b64fb0
	if (cr6.eq) goto loc_83B64FB0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a17790
	ctx.lr = 0x83B64FB0;
	sub_82A17790(ctx, base);
loc_83B64FB0:
	// lbz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// stb r11,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r11.u8);
	// bne cr6,0x83b64fd0
	if (!cr6.eq) goto loc_83B64FD0;
	// lbz r11,33(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 33);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x83b64fd4
	if (cr6.eq) goto loc_83B64FD4;
loc_83B64FD0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_83B64FD4:
	// stb r11,13(r31)
	PPC_STORE_U8(ctx.r31.u32 + 13, ctx.r11.u8);
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// lwz r10,68(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// lbz r9,48(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 48);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// stb r9,12(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12, ctx.r9.u8);
loc_83B64FF0:
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

__attribute__((alias("__imp__sub_83B65004"))) PPC_WEAK_FUNC(sub_83B65004);
PPC_FUNC_IMPL(__imp__sub_83B65004) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B65008"))) PPC_WEAK_FUNC(sub_83B65008);
PPC_FUNC_IMPL(__imp__sub_83B65008) {
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
	// bl 0x830ff290
	ctx.lr = 0x83B65020;
	sub_830FF290(ctx, base);
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// stw r11,464(r31)
	PPC_STORE_U32(ctx.r31.u32 + 464, ctx.r11.u32);
	// bl 0x830ff290
	ctx.lr = 0x83B6502C;
	sub_830FF290(ctx, base);
	// li r4,30
	ctx.r4.s64 = 30;
	// bl 0x830ff798
	ctx.lr = 0x83B65034;
	sub_830FF798(ctx, base);
	// bl 0x830ff290
	ctx.lr = 0x83B65038;
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
	ctx.lr = 0x83B65058;
	sub_837F9838(ctx, base);
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

__attribute__((alias("__imp__sub_83B6506C"))) PPC_WEAK_FUNC(sub_83B6506C);
PPC_FUNC_IMPL(__imp__sub_83B6506C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B65070"))) PPC_WEAK_FUNC(sub_83B65070);
PPC_FUNC_IMPL(__imp__sub_83B65070) {
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
	// lwz r31,464(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 464);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x83b65098
	if (cr6.eq) goto loc_83B65098;
	// bl 0x830ff290
	ctx.lr = 0x83B65090;
	sub_830FF290(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x830ff798
	ctx.lr = 0x83B65098;
	sub_830FF798(ctx, base);
loc_83B65098:
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

__attribute__((alias("__imp__sub_83B650AC"))) PPC_WEAK_FUNC(sub_83B650AC);
PPC_FUNC_IMPL(__imp__sub_83B650AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B650B0"))) PPC_WEAK_FUNC(sub_83B650B0);
PPC_FUNC_IMPL(__imp__sub_83B650B0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r11,8(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r11,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83B650DC"))) PPC_WEAK_FUNC(sub_83B650DC);
PPC_FUNC_IMPL(__imp__sub_83B650DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B650E0"))) PPC_WEAK_FUNC(sub_83B650E0);
PPC_FUNC_IMPL(__imp__sub_83B650E0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83B650E8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32203
	ctx.r11.s64 = -2110455808;
	// lwz r30,464(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 464);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,-25232
	ctx.r10.s64 = ctx.r11.s64 + -25232;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// beq cr6,0x83b65118
	if (cr6.eq) goto loc_83B65118;
	// bl 0x830ff290
	ctx.lr = 0x83B65110;
	sub_830FF290(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x830ff798
	ctx.lr = 0x83B65118;
	sub_830FF798(ctx, base);
loc_83B65118:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83800020
	ctx.lr = 0x83B65120;
	sub_83800020(ctx, base);
	// clrlwi r11,r29,31
	ctx.r11.u64 = ctx.r29.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83b65138
	if (cr6.eq) goto loc_83B65138;
	// bl 0x82416268
	ctx.lr = 0x83B65134;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_83B65138:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B65140"))) PPC_WEAK_FUNC(sub_83B65140);
PPC_FUNC_IMPL(__imp__sub_83B65140) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83B65148;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,33
	ctx.r11.s64 = 33;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,468
	ctx.r4.s64 = 468;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x83B65168;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83b651dc
	if (cr6.eq) goto loc_83B651DC;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x837ffa08
	ctx.lr = 0x83B6517C;
	sub_837FFA08(ctx, base);
	// lis r11,-32203
	ctx.r11.s64 = -2110455808;
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r10,r11,-25232
	ctx.r10.s64 = ctx.r11.s64 + -25232;
	// stw r29,464(r31)
	PPC_STORE_U32(ctx.r31.u32 + 464, ctx.r29.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stw r30,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r30.u32);
	// bl 0x837f9790
	ctx.lr = 0x83B651A0;
	sub_837F9790(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83b651e8
	if (!cr6.eq) goto loc_83B651E8;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82595150
	ctx.lr = 0x83B651BC;
	sub_82595150(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83B651D4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82595170
	ctx.lr = 0x83B651DC;
	sub_82595170(ctx, base);
loc_83B651DC:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83B651E8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B651F4"))) PPC_WEAK_FUNC(sub_83B651F4);
PPC_FUNC_IMPL(__imp__sub_83B651F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B651F8"))) PPC_WEAK_FUNC(sub_83B651F8);
PPC_FUNC_IMPL(__imp__sub_83B651F8) {
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
	ctx.lr = 0x83B65200;
	__savegprlr_15(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r19,r3
	ctx.r19.u64 = ctx.r3.u64;
	// bl 0x837da198
	ctx.lr = 0x83B6520C;
	sub_837DA198(ctx, base);
	// lis r11,1
	ctx.r11.s64 = 65536;
	// lbz r10,11370(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 11370);
	// mr r18,r3
	ctx.r18.u64 = ctx.r3.u64;
	// ori r28,r11,1
	ctx.r28.u64 = ctx.r11.u64 | 1;
	// lwz r11,4(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83b65238
	if (cr6.eq) goto loc_83B65238;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r28
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r28.u32, xer);
	// bgt cr6,0x83b65d40
	if (cr6.gt) goto loc_83B65D40;
	// b 0x83b65248
	goto loc_83B65248;
loc_83B65238:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lis r10,1
	ctx.r10.s64 = 65536;
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// bne cr6,0x83b65d40
	if (!cr6.eq) goto loc_83B65D40;
loc_83B65248:
	// bl 0x830ff290
	ctx.lr = 0x83B6524C;
	sub_830FF290(ctx, base);
	// bl 0x830ff948
	ctx.lr = 0x83B65250;
	sub_830FF948(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// lwz r11,4(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 4);
	// beq cr6,0x83b65274
	if (cr6.eq) goto loc_83B65274;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// ori r9,r10,51
	ctx.r9.u64 = ctx.r10.u64 | 51;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x831cdb04
	__restgprlr_15(ctx, base);
	return;
loc_83B65274:
	// stw r28,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r28.u32);
	// lbz r11,11289(r18)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r18.u32 + 11289);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,9
	cr6.compare<uint32_t>(ctx.r11.u32, 9, xer);
	// bgt cr6,0x83b652e8
	if (cr6.gt) goto loc_83B652E8;
	// lis r12,-31818
	ctx.r12.s64 = -2085224448;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,21152
	ctx.r12.s64 = ctx.r12.s64 + 21152;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_83B652E0;
	case 1:
		goto loc_83B652E8;
	case 2:
		goto loc_83B652C8;
	case 3:
		goto loc_83B652D0;
	case 4:
		goto loc_83B652D8;
	case 5:
		goto loc_83B652E8;
	case 6:
		goto loc_83B652E0;
	case 7:
		goto loc_83B652E0;
	case 8:
		goto loc_83B652E0;
	case 9:
		goto loc_83B652E0;
	default:
		return;
	}
	// lwz r29,21216(r22)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r22.u32 + 21216);
	// lwz r29,21224(r22)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r22.u32 + 21224);
	// lwz r29,21192(r22)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r22.u32 + 21192);
	// lwz r29,21200(r22)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r22.u32 + 21200);
	// lwz r29,21208(r22)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r22.u32 + 21208);
	// lwz r29,21224(r22)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r22.u32 + 21224);
	// lwz r29,21216(r22)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r22.u32 + 21216);
	// lwz r29,21216(r22)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r22.u32 + 21216);
	// lwz r29,21216(r22)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r22.u32 + 21216);
	// lwz r29,21216(r22)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r22.u32 + 21216);
loc_83B652C8:
	// li r9,3
	ctx.r9.s64 = 3;
	// b 0x83b652f4
	goto loc_83B652F4;
loc_83B652D0:
	// li r9,4
	ctx.r9.s64 = 4;
	// b 0x83b652f4
	goto loc_83B652F4;
loc_83B652D8:
	// li r9,5
	ctx.r9.s64 = 5;
	// b 0x83b652f4
	goto loc_83B652F4;
loc_83B652E0:
	// li r9,2
	ctx.r9.s64 = 2;
	// b 0x83b652f4
	goto loc_83B652F4;
loc_83B652E8:
	// lbz r11,11288(r18)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r18.u32 + 11288);
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r9,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
loc_83B652F4:
	// li r31,0
	ctx.r31.s64 = 0;
	// li r30,1
	ctx.r30.s64 = 1;
	// stb r31,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r31.u8);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// stb r31,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r31.u8);
	// stb r31,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r31.u8);
	// stb r31,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r31.u8);
loc_83B65310:
	// mulli r10,r11,5532
	ctx.r10.s64 = ctx.r11.s64 * 5532;
	// add r10,r10,r18
	ctx.r10.u64 = ctx.r10.u64 + ctx.r18.u64;
	// lbz r8,5726(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 5726);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x83b6532c
	if (cr6.eq) goto loc_83B6532C;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// stbx r30,r11,r8
	PPC_STORE_U8(ctx.r11.u32 + ctx.r8.u32, ctx.r30.u8);
loc_83B6532C:
	// lwz r10,5716(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 5716);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x83b65340
	if (!cr6.eq) goto loc_83B65340;
	// addi r10,r1,82
	ctx.r10.s64 = ctx.r1.s64 + 82;
	// stbx r30,r11,r10
	PPC_STORE_U8(ctx.r11.u32 + ctx.r10.u32, ctx.r30.u8);
loc_83B65340:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// ble cr6,0x83b65310
	if (!cr6.gt) goto loc_83B65310;
	// lwz r10,128(r18)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r18.u32 + 128);
	// li r8,5
	ctx.r8.s64 = 5;
	// lwz r11,11280(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 11280);
	// lis r23,1
	ctx.r23.s64 = 65536;
	// subfc r6,r8,r10
	xer.ca = ctx.r10.u32 >= ctx.r8.u32;
	ctx.r6.s64 = ctx.r10.s64 - ctx.r8.s64;
	// lis r8,1
	ctx.r8.s64 = 65536;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// lis r4,1
	ctx.r4.s64 = 65536;
	// lis r3,1
	ctx.r3.s64 = 65536;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// lis r6,1
	ctx.r6.s64 = 65536;
	// lis r29,1
	ctx.r29.s64 = 65536;
	// lis r27,1
	ctx.r27.s64 = 65536;
	// subfe r5,r5,r5
	temp.u8 = (~ctx.r5.u32 + ctx.r5.u32 < ~ctx.r5.u32) | (~ctx.r5.u32 + ctx.r5.u32 + xer.ca < xer.ca);
	ctx.r5.u64 = ~ctx.r5.u64 + ctx.r5.u64 + xer.ca;
	xer.ca = temp.u8;
	// lis r22,1
	ctx.r22.s64 = 65536;
	// ori r17,r8,24
	ctx.r17.u64 = ctx.r8.u64 | 24;
	// ori r8,r23,29
	ctx.r8.u64 = ctx.r23.u64 | 29;
	// ori r15,r7,51
	ctx.r15.u64 = ctx.r7.u64 | 51;
	// ori r16,r4,25
	ctx.r16.u64 = ctx.r4.u64 | 25;
	// ori r21,r3,22
	ctx.r21.u64 = ctx.r3.u64 | 22;
	// ori r24,r10,20
	ctx.r24.u64 = ctx.r10.u64 | 20;
	// ori r20,r6,48
	ctx.r20.u64 = ctx.r6.u64 | 48;
	// ori r25,r29,10
	ctx.r25.u64 = ctx.r29.u64 | 10;
	// ori r26,r27,7
	ctx.r26.u64 = ctx.r27.u64 | 7;
	// ori r22,r22,6
	ctx.r22.u64 = ctx.r22.u64 | 6;
	// cmplwi cr6,r11,119
	cr6.compare<uint32_t>(ctx.r11.u32, 119, xer);
	// clrlwi r23,r5,31
	ctx.r23.u64 = ctx.r5.u32 & 0x1;
	// bgt cr6,0x83b657e4
	if (cr6.gt) goto loc_83B657E4;
	// lis r12,-31818
	ctx.r12.s64 = -2085224448;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,21468
	ctx.r12.s64 = ctx.r12.s64 + 21468;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_83B655D8;
	case 1:
		goto loc_83B655BC;
	case 2:
		goto loc_83B65630;
	case 3:
		goto loc_83B65630;
	case 4:
		goto loc_83B6560C;
	case 5:
		goto loc_83B657E4;
	case 6:
		goto loc_83B655E4;
	case 7:
		goto loc_83B655E4;
	case 8:
		goto loc_83B655E4;
	case 9:
		goto loc_83B655E4;
	case 10:
		goto loc_83B655E4;
	case 11:
		goto loc_83B655E4;
	case 12:
		goto loc_83B655E4;
	case 13:
		goto loc_83B655BC;
	case 14:
		goto loc_83B655BC;
	case 15:
		goto loc_83B655BC;
	case 16:
		goto loc_83B655BC;
	case 17:
		goto loc_83B655BC;
	case 18:
		goto loc_83B655BC;
	case 19:
		goto loc_83B655BC;
	case 20:
		goto loc_83B655F8;
	case 21:
		goto loc_83B65630;
	case 22:
		goto loc_83B65630;
	case 23:
		goto loc_83B65630;
	case 24:
		goto loc_83B65630;
	case 25:
		goto loc_83B65630;
	case 26:
		goto loc_83B65630;
	case 27:
		goto loc_83B65630;
	case 28:
		goto loc_83B65630;
	case 29:
		goto loc_83B65658;
	case 30:
		goto loc_83B6560C;
	case 31:
		goto loc_83B6560C;
	case 32:
		goto loc_83B6560C;
	case 33:
		goto loc_83B657D8;
	case 34:
		goto loc_83B657D8;
	case 35:
		goto loc_83B657E4;
	case 36:
		goto loc_83B6568C;
	case 37:
		goto loc_83B6566C;
	case 38:
		goto loc_83B6566C;
	case 39:
		goto loc_83B6566C;
	case 40:
		goto loc_83B65688;
	case 41:
		goto loc_83B6566C;
	case 42:
		goto loc_83B6566C;
	case 43:
		goto loc_83B6566C;
	case 44:
		goto loc_83B65688;
	case 45:
		goto loc_83B6566C;
	case 46:
		goto loc_83B6566C;
	case 47:
		goto loc_83B6566C;
	case 48:
		goto loc_83B65688;
	case 49:
		goto loc_83B6566C;
	case 50:
		goto loc_83B6566C;
	case 51:
		goto loc_83B6566C;
	case 52:
		goto loc_83B6566C;
	case 53:
		goto loc_83B6566C;
	case 54:
		goto loc_83B657E4;
	case 55:
		goto loc_83B657E4;
	case 56:
		goto loc_83B65694;
	case 57:
		goto loc_83B657E4;
	case 58:
		goto loc_83B657E4;
	case 59:
		goto loc_83B65694;
	case 60:
		goto loc_83B65694;
	case 61:
		goto loc_83B65694;
	case 62:
		goto loc_83B65694;
	case 63:
		goto loc_83B65694;
	case 64:
		goto loc_83B65694;
	case 65:
		goto loc_83B657E4;
	case 66:
		goto loc_83B657E4;
	case 67:
		goto loc_83B657E4;
	case 68:
		goto loc_83B657E4;
	case 69:
		goto loc_83B657E4;
	case 70:
		goto loc_83B657E4;
	case 71:
		goto loc_83B6566C;
	case 72:
		goto loc_83B65694;
	case 73:
		goto loc_83B65694;
	case 74:
		goto loc_83B65694;
	case 75:
		goto loc_83B6566C;
	case 76:
		goto loc_83B6566C;
	case 77:
		goto loc_83B6566C;
	case 78:
		goto loc_83B6566C;
	case 79:
		goto loc_83B6566C;
	case 80:
		goto loc_83B65694;
	case 81:
		goto loc_83B6566C;
	case 82:
		goto loc_83B657E4;
	case 83:
		goto loc_83B656B0;
	case 84:
		goto loc_83B656DC;
	case 85:
		goto loc_83B656DC;
	case 86:
		goto loc_83B656B0;
	case 87:
		goto loc_83B656B0;
	case 88:
		goto loc_83B656B0;
	case 89:
		goto loc_83B657E4;
	case 90:
		goto loc_83B657E4;
	case 91:
		goto loc_83B65708;
	case 92:
		goto loc_83B657E4;
	case 93:
		goto loc_83B657E4;
	case 94:
		goto loc_83B65708;
	case 95:
		goto loc_83B65708;
	case 96:
		goto loc_83B657E4;
	case 97:
		goto loc_83B657E4;
	case 98:
		goto loc_83B657E4;
	case 99:
		goto loc_83B657E4;
	case 100:
		goto loc_83B6576C;
	case 101:
		goto loc_83B65780;
	case 102:
		goto loc_83B6576C;
	case 103:
		goto loc_83B65780;
	case 104:
		goto loc_83B6576C;
	case 105:
		goto loc_83B6576C;
	case 106:
		goto loc_83B65794;
	case 107:
		goto loc_83B65794;
	case 108:
		goto loc_83B657A8;
	case 109:
		goto loc_83B657E4;
	case 110:
		goto loc_83B656DC;
	case 111:
		goto loc_83B65734;
	case 112:
		goto loc_83B656DC;
	case 113:
		goto loc_83B656DC;
	case 114:
		goto loc_83B656DC;
	case 115:
		goto loc_83B656DC;
	case 116:
		goto loc_83B65780;
	case 117:
		goto loc_83B657A8;
	case 118:
		goto loc_83B65780;
	case 119:
		goto loc_83B657BC;
	default:
		return;
	}
	// lwz r29,21976(r22)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r22.u32 + 21976);
	// lwz r29,21948(r22)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r22.u32 + 21948);
	// lwz r29,22064(r22)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r22.u32 + 22064);
	// lwz r29,22064(r22)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r22.u32 + 22064);
	// lwz r29,22028(r22)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r22.u32 + 22028);
	// lwz r29,22500(r22)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r22.u32 + 22500);
	// lwz r29,21988(r22)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r22.u32 + 21988);
	// lwz r29,21988(r22)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r22.u32 + 21988);
	// lwz r29,21988(r22)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r22.u32 + 21988);
	// lwz r29,21988(r22)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r22.u32 + 21988);
	// lwz r29,21988(r22)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r22.u32 + 21988);
	// lwz r29,21988(r22)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r22.u32 + 21988);
	// lwz r29,21988(r22)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r22.u32 + 21988);
	// lwz r29,21948(r22)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r22.u32 + 21948);
	// lwz r29,21948(r22)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r22.u32 + 21948);
	// lwz r29,21948(r22)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r22.u32 + 21948);
	// lwz r29,21948(r22)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r22.u32 + 21948);
	// lwz r29,21948(r22)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r22.u32 + 21948);
	// lwz r29,21948(r22)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r22.u32 + 21948);
	// lwz r29,21948(r22)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r22.u32 + 21948);
	// lwz r29,22008(r22)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r22.u32 + 22008);
	// lwz r29,22064(r22)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r22.u32 + 22064);
	// lwz r29,22064(r22)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r22.u32 + 22064);
	// lwz r29,22064(r22)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r22.u32 + 22064);
	// lwz r29,22064(r22)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r22.u32 + 22064);
	// lwz r29,22064(r22)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r22.u32 + 22064);
	// lwz r29,22064(r22)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r22.u32 + 22064);
	// lwz r29,22064(r22)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r22.u32 + 22064);
	// lwz r29,22064(r22)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r22.u32 + 22064);
	// lwz r29,22104(r22)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r22.u32 + 22104);
	// lwz r29,22028(r22)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r22.u32 + 22028);
	// lwz r29,22028(r22)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r22.u32 + 22028);
	// lwz r29,22028(r22)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r22.u32 + 22028);
	// lwz r29,22488(r22)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r22.u32 + 22488);
	// lwz r29,22488(r22)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r22.u32 + 22488);
	// lwz r29,22500(r22)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r22.u32 + 22500);
	// lwz r29,22156(r22)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r22.u32 + 22156);
	// lwz r29,22124(r22)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r22.u32 + 22124);
	// lwz r29,22124(r22)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r22.u32 + 22124);
	// lwz r29,22124(r22)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r22.u32 + 22124);
	// lwz r29,22152(r22)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r22.u32 + 22152);
	// lwz r29,22124(r22)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r22.u32 + 22124);
	// lwz r29,22124(r22)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r22.u32 + 22124);
	// lwz r29,22124(r22)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r22.u32 + 22124);
	// lwz r29,22152(r22)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r22.u32 + 22152);
	// lwz r29,22124(r22)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r22.u32 + 22124);
	// lwz r29,22124(r22)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r22.u32 + 22124);
	// lwz r29,22124(r22)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r22.u32 + 22124);
	// lwz r29,22152(r22)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r22.u32 + 22152);
	// lwz r29,22124(r22)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r22.u32 + 22124);
	// lwz r29,22124(r22)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r22.u32 + 22124);
	// lwz r29,22124(r22)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r22.u32 + 22124);
	// lwz r29,22124(r22)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r22.u32 + 22124);
	// lwz r29,22124(r22)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r22.u32 + 22124);
	// lwz r29,22500(r22)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r22.u32 + 22500);
	// lwz r29,22500(r22)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r22.u32 + 22500);
	// lwz r29,22164(r22)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r22.u32 + 22164);
	// lwz r29,22500(r22)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r22.u32 + 22500);
	// lwz r29,22500(r22)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r22.u32 + 22500);
	// lwz r29,22164(r22)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r22.u32 + 22164);
	// lwz r29,22164(r22)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r22.u32 + 22164);
	// lwz r29,22164(r22)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r22.u32 + 22164);
	// lwz r29,22164(r22)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r22.u32 + 22164);
	// lwz r29,22164(r22)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r22.u32 + 22164);
	// lwz r29,22164(r22)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r22.u32 + 22164);
	// lwz r29,22500(r22)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r22.u32 + 22500);
	// lwz r29,22500(r22)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r22.u32 + 22500);
	// lwz r29,22500(r22)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r22.u32 + 22500);
	// lwz r29,22500(r22)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r22.u32 + 22500);
	// lwz r29,22500(r22)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r22.u32 + 22500);
	// lwz r29,22500(r22)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r22.u32 + 22500);
	// lwz r29,22124(r22)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r22.u32 + 22124);
	// lwz r29,22164(r22)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r22.u32 + 22164);
	// lwz r29,22164(r22)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r22.u32 + 22164);
	// lwz r29,22164(r22)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r22.u32 + 22164);
	// lwz r29,22124(r22)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r22.u32 + 22124);
	// lwz r29,22124(r22)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r22.u32 + 22124);
	// lwz r29,22124(r22)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r22.u32 + 22124);
	// lwz r29,22124(r22)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r22.u32 + 22124);
	// lwz r29,22124(r22)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r22.u32 + 22124);
	// lwz r29,22164(r22)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r22.u32 + 22164);
	// lwz r29,22124(r22)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r22.u32 + 22124);
	// lwz r29,22500(r22)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r22.u32 + 22500);
	// lwz r29,22192(r22)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r22.u32 + 22192);
	// lwz r29,22236(r22)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r22.u32 + 22236);
	// lwz r29,22236(r22)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r22.u32 + 22236);
	// lwz r29,22192(r22)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r22.u32 + 22192);
	// lwz r29,22192(r22)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r22.u32 + 22192);
	// lwz r29,22192(r22)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r22.u32 + 22192);
	// lwz r29,22500(r22)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r22.u32 + 22500);
	// lwz r29,22500(r22)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r22.u32 + 22500);
	// lwz r29,22280(r22)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r22.u32 + 22280);
	// lwz r29,22500(r22)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r22.u32 + 22500);
	// lwz r29,22500(r22)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r22.u32 + 22500);
	// lwz r29,22280(r22)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r22.u32 + 22280);
	// lwz r29,22280(r22)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r22.u32 + 22280);
	// lwz r29,22500(r22)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r22.u32 + 22500);
	// lwz r29,22500(r22)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r22.u32 + 22500);
	// lwz r29,22500(r22)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r22.u32 + 22500);
	// lwz r29,22500(r22)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r22.u32 + 22500);
	// lwz r29,22380(r22)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r22.u32 + 22380);
	// lwz r29,22400(r22)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r22.u32 + 22400);
	// lwz r29,22380(r22)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r22.u32 + 22380);
	// lwz r29,22400(r22)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r22.u32 + 22400);
	// lwz r29,22380(r22)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r22.u32 + 22380);
	// lwz r29,22380(r22)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r22.u32 + 22380);
	// lwz r29,22420(r22)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r22.u32 + 22420);
	// lwz r29,22420(r22)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r22.u32 + 22420);
	// lwz r29,22440(r22)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r22.u32 + 22440);
	// lwz r29,22500(r22)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r22.u32 + 22500);
	// lwz r29,22236(r22)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r22.u32 + 22236);
	// lwz r29,22324(r22)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r22.u32 + 22324);
	// lwz r29,22236(r22)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r22.u32 + 22236);
	// lwz r29,22236(r22)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r22.u32 + 22236);
	// lwz r29,22236(r22)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r22.u32 + 22236);
	// lwz r29,22236(r22)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r22.u32 + 22236);
	// lwz r29,22400(r22)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r22.u32 + 22400);
	// lwz r29,22440(r22)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r22.u32 + 22440);
	// lwz r29,22400(r22)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r22.u32 + 22400);
	// lwz r29,22460(r22)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r22.u32 + 22460);
loc_83B655BC:
	// lwz r11,4(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 4);
	// cmplwi cr6,r9,4
	cr6.compare<uint32_t>(ctx.r9.u32, 4, xer);
	// bne cr6,0x83b655d0
	if (!cr6.eq) goto loc_83B655D0;
	// stw r16,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r16.u32);
	// b 0x83b65950
	goto loc_83B65950;
loc_83B655D0:
	// stw r21,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r21.u32);
	// b 0x83b65950
	goto loc_83B65950;
loc_83B655D8:
	// lwz r11,4(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 4);
loc_83B655DC:
	// stw r24,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r24.u32);
	// b 0x83b65950
	goto loc_83B65950;
loc_83B655E4:
	// lwz r11,4(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 4);
	// cmplwi cr6,r9,4
	cr6.compare<uint32_t>(ctx.r9.u32, 4, xer);
	// bne cr6,0x83b655dc
	if (!cr6.eq) goto loc_83B655DC;
	// stw r17,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r17.u32);
	// b 0x83b65950
	goto loc_83B65950;
loc_83B655F8:
	// lwz r11,4(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 4);
	// lis r10,1
	ctx.r10.s64 = 65536;
	// ori r9,r10,26
	ctx.r9.u64 = ctx.r10.u64 | 26;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// b 0x83b65950
	goto loc_83B65950;
loc_83B6560C:
	// lwz r11,4(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 4);
	// cmplwi cr6,r9,4
	cr6.compare<uint32_t>(ctx.r9.u32, 4, xer);
	// bne cr6,0x83b65628
	if (!cr6.eq) goto loc_83B65628;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// ori r9,r10,50
	ctx.r9.u64 = ctx.r10.u64 | 50;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// b 0x83b65950
	goto loc_83B65950;
loc_83B65628:
	// stw r20,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r20.u32);
	// b 0x83b65950
	goto loc_83B65950;
loc_83B65630:
	// lwz r11,4(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 4);
	// cmplwi cr6,r9,4
	cr6.compare<uint32_t>(ctx.r9.u32, 4, xer);
	// lis r10,1
	ctx.r10.s64 = 65536;
	// bne cr6,0x83b6564c
	if (!cr6.eq) goto loc_83B6564C;
	// ori r9,r10,40
	ctx.r9.u64 = ctx.r10.u64 | 40;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// b 0x83b65950
	goto loc_83B65950;
loc_83B6564C:
	// ori r9,r10,39
	ctx.r9.u64 = ctx.r10.u64 | 39;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// b 0x83b65950
	goto loc_83B65950;
loc_83B65658:
	// lwz r11,4(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 4);
	// lis r10,1
	ctx.r10.s64 = 65536;
	// ori r9,r10,40
	ctx.r9.u64 = ctx.r10.u64 | 40;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// b 0x83b65950
	goto loc_83B65950;
loc_83B6566C:
	// cmplwi cr6,r9,1
	cr6.compare<uint32_t>(ctx.r9.u32, 1, xer);
	// beq cr6,0x83b6568c
	if (cr6.eq) goto loc_83B6568C;
	// cmplwi cr6,r9,2
	cr6.compare<uint32_t>(ctx.r9.u32, 2, xer);
	// beq cr6,0x83b6568c
	if (cr6.eq) goto loc_83B6568C;
	// lwz r11,4(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 4);
loc_83B65680:
	// stw r25,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r25.u32);
	// b 0x83b65950
	goto loc_83B65950;
loc_83B65688:
	// cmplwi cr6,r9,4
	cr6.compare<uint32_t>(ctx.r9.u32, 4, xer);
loc_83B6568C:
	// lwz r11,4(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 4);
	// b 0x83b6594c
	goto loc_83B6594C;
loc_83B65694:
	// cmplwi cr6,r9,1
	cr6.compare<uint32_t>(ctx.r9.u32, 1, xer);
	// beq cr6,0x83b6573c
	if (cr6.eq) goto loc_83B6573C;
	// cmplwi cr6,r9,2
	cr6.compare<uint32_t>(ctx.r9.u32, 2, xer);
	// beq cr6,0x83b6573c
	if (cr6.eq) goto loc_83B6573C;
	// lwz r11,4(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 4);
loc_83B656A8:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// b 0x83b65950
	goto loc_83B65950;
loc_83B656B0:
	// cmplwi cr6,r9,1
	cr6.compare<uint32_t>(ctx.r9.u32, 1, xer);
	// beq cr6,0x83b6568c
	if (cr6.eq) goto loc_83B6568C;
	// cmplwi cr6,r9,3
	cr6.compare<uint32_t>(ctx.r9.u32, 3, xer);
	// beq cr6,0x83b6568c
	if (cr6.eq) goto loc_83B6568C;
	// lwz r11,4(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 4);
	// cmplwi cr6,r9,4
	cr6.compare<uint32_t>(ctx.r9.u32, 4, xer);
	// bne cr6,0x83b65680
	if (!cr6.eq) goto loc_83B65680;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// ori r9,r10,19
	ctx.r9.u64 = ctx.r10.u64 | 19;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// b 0x83b65950
	goto loc_83B65950;
loc_83B656DC:
	// cmplwi cr6,r9,1
	cr6.compare<uint32_t>(ctx.r9.u32, 1, xer);
	// beq cr6,0x83b6568c
	if (cr6.eq) goto loc_83B6568C;
	// cmplwi cr6,r9,3
	cr6.compare<uint32_t>(ctx.r9.u32, 3, xer);
	// beq cr6,0x83b6568c
	if (cr6.eq) goto loc_83B6568C;
	// lwz r11,4(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 4);
	// cmplwi cr6,r9,4
	cr6.compare<uint32_t>(ctx.r9.u32, 4, xer);
	// bne cr6,0x83b65680
	if (!cr6.eq) goto loc_83B65680;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// ori r9,r10,18
	ctx.r9.u64 = ctx.r10.u64 | 18;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// b 0x83b65950
	goto loc_83B65950;
loc_83B65708:
	// cmplwi cr6,r9,1
	cr6.compare<uint32_t>(ctx.r9.u32, 1, xer);
	// beq cr6,0x83b6573c
	if (cr6.eq) goto loc_83B6573C;
	// cmplwi cr6,r9,3
	cr6.compare<uint32_t>(ctx.r9.u32, 3, xer);
	// beq cr6,0x83b6573c
	if (cr6.eq) goto loc_83B6573C;
	// lwz r11,4(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 4);
	// cmplwi cr6,r9,4
	cr6.compare<uint32_t>(ctx.r9.u32, 4, xer);
	// bne cr6,0x83b656a8
	if (!cr6.eq) goto loc_83B656A8;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// ori r9,r10,38
	ctx.r9.u64 = ctx.r10.u64 | 38;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// b 0x83b65950
	goto loc_83B65950;
loc_83B65734:
	// cmplwi cr6,r9,1
	cr6.compare<uint32_t>(ctx.r9.u32, 1, xer);
	// bne cr6,0x83b65750
	if (!cr6.eq) goto loc_83B65750;
loc_83B6573C:
	// lwz r11,4(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 4);
	// lis r10,1
	ctx.r10.s64 = 65536;
	// ori r9,r10,27
	ctx.r9.u64 = ctx.r10.u64 | 27;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// b 0x83b65950
	goto loc_83B65950;
loc_83B65750:
	// lwz r11,4(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 4);
	// cmplwi cr6,r9,4
	cr6.compare<uint32_t>(ctx.r9.u32, 4, xer);
	// bne cr6,0x83b656a8
	if (!cr6.eq) goto loc_83B656A8;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// ori r9,r10,37
	ctx.r9.u64 = ctx.r10.u64 | 37;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// b 0x83b65950
	goto loc_83B65950;
loc_83B6576C:
	// lwz r11,4(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 4);
	// lis r10,1
	ctx.r10.s64 = 65536;
	// ori r9,r10,19
	ctx.r9.u64 = ctx.r10.u64 | 19;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// b 0x83b65950
	goto loc_83B65950;
loc_83B65780:
	// lwz r11,4(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 4);
	// lis r10,1
	ctx.r10.s64 = 65536;
	// ori r9,r10,18
	ctx.r9.u64 = ctx.r10.u64 | 18;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// b 0x83b65950
	goto loc_83B65950;
loc_83B65794:
	// lwz r11,4(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 4);
	// lis r10,1
	ctx.r10.s64 = 65536;
	// ori r9,r10,38
	ctx.r9.u64 = ctx.r10.u64 | 38;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// b 0x83b65950
	goto loc_83B65950;
loc_83B657A8:
	// lwz r11,4(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 4);
	// lis r10,1
	ctx.r10.s64 = 65536;
	// ori r9,r10,37
	ctx.r9.u64 = ctx.r10.u64 | 37;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// b 0x83b65950
	goto loc_83B65950;
loc_83B657BC:
	// lwz r11,4(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 4);
	// cmplwi cr6,r9,4
	cr6.compare<uint32_t>(ctx.r9.u32, 4, xer);
	// bne cr6,0x83b6594c
	if (!cr6.eq) goto loc_83B6594C;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// ori r9,r10,47
	ctx.r9.u64 = ctx.r10.u64 | 47;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// b 0x83b65950
	goto loc_83B65950;
loc_83B657D8:
	// lwz r11,4(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 4);
	// stw r15,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r15.u32);
	// b 0x83b65950
	goto loc_83B65950;
loc_83B657E4:
	// lbz r10,82(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 82);
	// lwz r11,4(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83b6585c
	if (cr6.eq) goto loc_83B6585C;
	// lbz r10,83(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 83);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83b65818
	if (cr6.eq) goto loc_83B65818;
	// cmplwi cr6,r9,4
	cr6.compare<uint32_t>(ctx.r9.u32, 4, xer);
	// bne cr6,0x83b65854
	if (!cr6.eq) goto loc_83B65854;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// ori r7,r10,47
	ctx.r7.u64 = ctx.r10.u64 | 47;
	// stw r7,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// b 0x83b65934
	goto loc_83B65934;
loc_83B65818:
	// lbz r10,81(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83b6583c
	if (cr6.eq) goto loc_83B6583C;
	// cmplwi cr6,r9,4
	cr6.compare<uint32_t>(ctx.r9.u32, 4, xer);
	// lis r10,1
	ctx.r10.s64 = 65536;
	// bne cr6,0x83b6590c
	if (!cr6.eq) goto loc_83B6590C;
	// ori r7,r10,43
	ctx.r7.u64 = ctx.r10.u64 | 43;
	// stw r7,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// b 0x83b65934
	goto loc_83B65934;
loc_83B6583C:
	// cmplwi cr6,r9,4
	cr6.compare<uint32_t>(ctx.r9.u32, 4, xer);
	// bne cr6,0x83b65854
	if (!cr6.eq) goto loc_83B65854;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// ori r7,r10,46
	ctx.r7.u64 = ctx.r10.u64 | 46;
	// stw r7,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// b 0x83b65934
	goto loc_83B65934;
loc_83B65854:
	// stw r22,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r22.u32);
	// b 0x83b65934
	goto loc_83B65934;
loc_83B6585C:
	// lbz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83b658b8
	if (cr6.eq) goto loc_83B658B8;
	// lbz r10,81(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// lis r10,1
	ctx.r10.s64 = 65536;
	// beq cr6,0x83b65898
	if (cr6.eq) goto loc_83B65898;
	// cmplwi cr6,r9,4
	cr6.compare<uint32_t>(ctx.r9.u32, 4, xer);
	// bne cr6,0x83b6588c
	if (!cr6.eq) goto loc_83B6588C;
	// ori r7,r10,44
	ctx.r7.u64 = ctx.r10.u64 | 44;
	// stw r7,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// b 0x83b65934
	goto loc_83B65934;
loc_83B6588C:
	// ori r7,r10,4
	ctx.r7.u64 = ctx.r10.u64 | 4;
	// stw r7,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// b 0x83b65934
	goto loc_83B65934;
loc_83B65898:
	// cmplwi cr6,r9,4
	cr6.compare<uint32_t>(ctx.r9.u32, 4, xer);
	// bne cr6,0x83b658ac
	if (!cr6.eq) goto loc_83B658AC;
	// ori r7,r10,42
	ctx.r7.u64 = ctx.r10.u64 | 42;
	// stw r7,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// b 0x83b65934
	goto loc_83B65934;
loc_83B658AC:
	// ori r7,r10,2
	ctx.r7.u64 = ctx.r10.u64 | 2;
	// stw r7,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// b 0x83b65934
	goto loc_83B65934;
loc_83B658B8:
	// lbz r10,83(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 83);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83b658e8
	if (cr6.eq) goto loc_83B658E8;
	// cmplwi cr6,r9,4
	cr6.compare<uint32_t>(ctx.r9.u32, 4, xer);
	// lis r10,1
	ctx.r10.s64 = 65536;
	// bne cr6,0x83b658dc
	if (!cr6.eq) goto loc_83B658DC;
	// ori r7,r10,45
	ctx.r7.u64 = ctx.r10.u64 | 45;
	// stw r7,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// b 0x83b65934
	goto loc_83B65934;
loc_83B658DC:
	// ori r7,r10,5
	ctx.r7.u64 = ctx.r10.u64 | 5;
	// stw r7,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// b 0x83b65934
	goto loc_83B65934;
loc_83B658E8:
	// lbz r10,81(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83b65918
	if (cr6.eq) goto loc_83B65918;
	// cmplwi cr6,r9,4
	cr6.compare<uint32_t>(ctx.r9.u32, 4, xer);
	// lis r10,1
	ctx.r10.s64 = 65536;
	// bne cr6,0x83b6590c
	if (!cr6.eq) goto loc_83B6590C;
	// ori r7,r10,43
	ctx.r7.u64 = ctx.r10.u64 | 43;
	// stw r7,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// b 0x83b65934
	goto loc_83B65934;
loc_83B6590C:
	// ori r7,r10,3
	ctx.r7.u64 = ctx.r10.u64 | 3;
	// stw r7,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// b 0x83b65934
	goto loc_83B65934;
loc_83B65918:
	// cmplwi cr6,r9,4
	cr6.compare<uint32_t>(ctx.r9.u32, 4, xer);
	// bne cr6,0x83b65930
	if (!cr6.eq) goto loc_83B65930;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// ori r7,r10,41
	ctx.r7.u64 = ctx.r10.u64 | 41;
	// stw r7,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// b 0x83b65934
	goto loc_83B65934;
loc_83B65930:
	// stw r28,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r28.u32);
loc_83B65934:
	// lwz r11,4(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r22
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r22.u32, xer);
	// bne cr6,0x83b65950
	if (!cr6.eq) goto loc_83B65950;
	// cmplwi cr6,r9,1
	cr6.compare<uint32_t>(ctx.r9.u32, 1, xer);
	// bne cr6,0x83b65950
	if (!cr6.eq) goto loc_83B65950;
loc_83B6594C:
	// stw r26,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r26.u32);
loc_83B65950:
	// lwz r10,4(r19)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r19.u32 + 4);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r11,r25
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r25.u32, xer);
	// beq cr6,0x83b65968
	if (cr6.eq) goto loc_83B65968;
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, xer);
	// bne cr6,0x83b659dc
	if (!cr6.eq) goto loc_83B659DC;
loc_83B65968:
	// lbz r11,11332(r18)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r18.u32 + 11332);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83b659a8
	if (cr6.eq) goto loc_83B659A8;
	// lbz r11,11333(r18)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r18.u32 + 11333);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83b659a8
	if (cr6.eq) goto loc_83B659A8;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r19,228
	ctx.r3.s64 = ctx.r19.s64 + 228;
	// bl 0x837f9708
	ctx.lr = 0x83B6598C;
	sub_837F9708(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83b659c0
	if (!cr6.eq) goto loc_83B659C0;
	// lwz r10,4(r19)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r19.u32 + 4);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// b 0x83b659c0
	goto loc_83B659C0;
loc_83B659A8:
	// lbz r11,11333(r18)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r18.u32 + 11333);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83b659c0
	if (cr6.eq) goto loc_83B659C0;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
loc_83B659C0:
	// li r4,4
	ctx.r4.s64 = 4;
	// lwz r29,4(r19)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r19.u32 + 4);
	// addi r3,r19,228
	ctx.r3.s64 = ctx.r19.s64 + 228;
	// bl 0x837f9708
	ctx.lr = 0x83B659D0;
	sub_837F9708(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// add r10,r3,r11
	ctx.r10.u64 = ctx.r3.u64 + ctx.r11.u64;
	// stw r10,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r10.u32);
loc_83B659DC:
	// clrlwi r11,r23,24
	ctx.r11.u64 = ctx.r23.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83b65ac0
	if (cr6.eq) goto loc_83B65AC0;
	// lwz r10,4(r19)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r19.u32 + 4);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r11,r24
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r24.u32, xer);
	// bne cr6,0x83b65a04
	if (!cr6.eq) goto loc_83B65A04;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// ori r9,r11,21
	ctx.r9.u64 = ctx.r11.u64 | 21;
	// b 0x83b65abc
	goto loc_83B65ABC;
loc_83B65A04:
	// cmplw cr6,r11,r21
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r21.u32, xer);
	// bne cr6,0x83b65a18
	if (!cr6.eq) goto loc_83B65A18;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// ori r9,r11,23
	ctx.r9.u64 = ctx.r11.u64 | 23;
	// b 0x83b65abc
	goto loc_83B65ABC;
loc_83B65A18:
	// cmplw cr6,r11,r20
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r20.u32, xer);
	// bne cr6,0x83b65a2c
	if (!cr6.eq) goto loc_83B65A2C;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// ori r9,r11,49
	ctx.r9.u64 = ctx.r11.u64 | 49;
	// b 0x83b65abc
	goto loc_83B65ABC;
loc_83B65A2C:
	// cmplw cr6,r11,r22
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r22.u32, xer);
	// beq cr6,0x83b65ab4
	if (cr6.eq) goto loc_83B65AB4;
	// cmplw cr6,r11,r26
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, xer);
	// beq cr6,0x83b65ab4
	if (cr6.eq) goto loc_83B65AB4;
	// cmplw cr6,r11,r25
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r25.u32, xer);
	// beq cr6,0x83b65ab4
	if (cr6.eq) goto loc_83B65AB4;
	// lis r9,1
	ctx.r9.s64 = 65536;
	// ori r8,r9,11
	ctx.r8.u64 = ctx.r9.u64 | 11;
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, xer);
	// beq cr6,0x83b65ab4
	if (cr6.eq) goto loc_83B65AB4;
	// lis r9,1
	ctx.r9.s64 = 65536;
	// ori r8,r9,12
	ctx.r8.u64 = ctx.r9.u64 | 12;
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, xer);
	// beq cr6,0x83b65ab4
	if (cr6.eq) goto loc_83B65AB4;
	// lis r9,1
	ctx.r9.s64 = 65536;
	// ori r8,r9,13
	ctx.r8.u64 = ctx.r9.u64 | 13;
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, xer);
	// beq cr6,0x83b65ab4
	if (cr6.eq) goto loc_83B65AB4;
	// lis r9,1
	ctx.r9.s64 = 65536;
	// ori r8,r9,14
	ctx.r8.u64 = ctx.r9.u64 | 14;
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, xer);
	// beq cr6,0x83b65ab4
	if (cr6.eq) goto loc_83B65AB4;
	// lis r9,1
	ctx.r9.s64 = 65536;
	// ori r8,r9,15
	ctx.r8.u64 = ctx.r9.u64 | 15;
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, xer);
	// beq cr6,0x83b65ab4
	if (cr6.eq) goto loc_83B65AB4;
	// lis r9,1
	ctx.r9.s64 = 65536;
	// ori r8,r9,16
	ctx.r8.u64 = ctx.r9.u64 | 16;
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, xer);
	// beq cr6,0x83b65ab4
	if (cr6.eq) goto loc_83B65AB4;
	// lis r9,1
	ctx.r9.s64 = 65536;
	// ori r8,r9,17
	ctx.r8.u64 = ctx.r9.u64 | 17;
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, xer);
	// bne cr6,0x83b65ac0
	if (!cr6.eq) goto loc_83B65AC0;
loc_83B65AB4:
	// lis r11,1
	ctx.r11.s64 = 65536;
	// ori r9,r11,8
	ctx.r9.u64 = ctx.r11.u64 | 8;
loc_83B65ABC:
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
loc_83B65AC0:
	// lwz r11,4(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 4);
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
	// lis r9,1
	ctx.r9.s64 = 65536;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// ori r24,r9,52
	ctx.r24.u64 = ctx.r9.u64 | 52;
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r25,r24
	ctx.r25.u64 = ctx.r24.u64;
	// subf r11,r10,r8
	ctx.r11.s64 = ctx.r8.s64 - ctx.r10.s64;
	// cmplwi cr6,r11,30
	cr6.compare<uint32_t>(ctx.r11.u32, 30, xer);
	// bgt cr6,0x83b65ba0
	if (cr6.gt) goto loc_83B65BA0;
	// lis r12,-31818
	ctx.r12.s64 = -2085224448;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,23296
	ctx.r12.s64 = ctx.r12.s64 + 23296;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_83B65B7C;
	case 1:
		goto loc_83B65B7C;
	case 2:
		goto loc_83B65B7C;
	case 3:
		goto loc_83B65B7C;
	case 4:
		goto loc_83B65B7C;
	case 5:
		goto loc_83B65B7C;
	case 6:
		goto loc_83B65B7C;
	case 7:
		goto loc_83B65B7C;
	case 8:
		goto loc_83B65B9C;
	case 9:
		goto loc_83B65B9C;
	case 10:
		goto loc_83B65BA0;
	case 11:
		goto loc_83B65BA0;
	case 12:
		goto loc_83B65BA0;
	case 13:
		goto loc_83B65BA0;
	case 14:
		goto loc_83B65BA0;
	case 15:
		goto loc_83B65BA0;
	case 16:
		goto loc_83B65B9C;
	case 17:
		goto loc_83B65BA0;
	case 18:
		goto loc_83B65BA0;
	case 19:
		goto loc_83B65B8C;
	case 20:
		goto loc_83B65B8C;
	case 21:
		goto loc_83B65B8C;
	case 22:
		goto loc_83B65B8C;
	case 23:
		goto loc_83B65B8C;
	case 24:
		goto loc_83B65B8C;
	case 25:
		goto loc_83B65B8C;
	case 26:
		goto loc_83B65B8C;
	case 27:
		goto loc_83B65B9C;
	case 28:
		goto loc_83B65B9C;
	case 29:
		goto loc_83B65BA0;
	case 30:
		goto loc_83B65B9C;
	default:
		return;
	}
	// lwz r29,23420(r22)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r22.u32 + 23420);
	// lwz r29,23420(r22)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r22.u32 + 23420);
	// lwz r29,23420(r22)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r22.u32 + 23420);
	// lwz r29,23420(r22)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r22.u32 + 23420);
	// lwz r29,23420(r22)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r22.u32 + 23420);
	// lwz r29,23420(r22)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r22.u32 + 23420);
	// lwz r29,23420(r22)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r22.u32 + 23420);
	// lwz r29,23420(r22)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r22.u32 + 23420);
	// lwz r29,23452(r22)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r22.u32 + 23452);
	// lwz r29,23452(r22)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r22.u32 + 23452);
	// lwz r29,23456(r22)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r22.u32 + 23456);
	// lwz r29,23456(r22)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r22.u32 + 23456);
	// lwz r29,23456(r22)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r22.u32 + 23456);
	// lwz r29,23456(r22)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r22.u32 + 23456);
	// lwz r29,23456(r22)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r22.u32 + 23456);
	// lwz r29,23456(r22)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r22.u32 + 23456);
	// lwz r29,23452(r22)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r22.u32 + 23452);
	// lwz r29,23456(r22)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r22.u32 + 23456);
	// lwz r29,23456(r22)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r22.u32 + 23456);
	// lwz r29,23436(r22)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r22.u32 + 23436);
	// lwz r29,23436(r22)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r22.u32 + 23436);
	// lwz r29,23436(r22)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r22.u32 + 23436);
	// lwz r29,23436(r22)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r22.u32 + 23436);
	// lwz r29,23436(r22)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r22.u32 + 23436);
	// lwz r29,23436(r22)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r22.u32 + 23436);
	// lwz r29,23436(r22)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r22.u32 + 23436);
	// lwz r29,23436(r22)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r22.u32 + 23436);
	// lwz r29,23452(r22)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r22.u32 + 23452);
	// lwz r29,23452(r22)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r22.u32 + 23452);
	// lwz r29,23456(r22)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r22.u32 + 23456);
	// lwz r29,23452(r22)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r22.u32 + 23452);
loc_83B65B7C:
	// lis r25,1
	ctx.r25.s64 = 65536;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// ori r25,r25,9
	ctx.r25.u64 = ctx.r25.u64 | 9;
	// b 0x83b65ba0
	goto loc_83B65BA0;
loc_83B65B8C:
	// lis r25,1
	ctx.r25.s64 = 65536;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// ori r25,r25,28
	ctx.r25.u64 = ctx.r25.u64 | 28;
	// b 0x83b65ba0
	goto loc_83B65BA0;
loc_83B65B9C:
	// li r6,2
	ctx.r6.s64 = 2;
loc_83B65BA0:
	// clrlwi r11,r6,24
	ctx.r11.u64 = ctx.r6.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83b65d08
	if (cr6.eq) goto loc_83B65D08;
	// lwz r10,11316(r18)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r18.u32 + 11316);
	// li r9,12
	ctx.r9.s64 = 12;
	// lwz r8,11312(r18)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r18.u32 + 11312);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// subf r7,r8,r10
	ctx.r7.s64 = ctx.r10.s64 - ctx.r8.s64;
	// divw. r3,r7,r9
	ctx.r3.s32 = PPCDivide(ctx.r7.s32, ctx.r9.s32);
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x83b65c94
	if (cr0.eq) goto loc_83B65C94;
	// lwz r5,11308(r18)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r18.u32 + 11308);
	// rotlwi r10,r8,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// mulli r11,r5,5532
	ctx.r11.s64 = ctx.r5.s64 * 5532;
	// add r11,r11,r18
	ctx.r11.u64 = ctx.r11.u64 + ctx.r18.u64;
	// addi r8,r10,4
	ctx.r8.s64 = ctx.r10.s64 + 4;
	// addi r7,r11,196
	ctx.r7.s64 = ctx.r11.s64 + 196;
loc_83B65BE0:
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
loc_83B65BE8:
	// cmplwi cr6,r9,32
	cr6.compare<uint32_t>(ctx.r9.u32, 32, xer);
	// bge cr6,0x83b65bfc
	if (!cr6.lt) goto loc_83B65BFC;
	// add r11,r10,r7
	ctx.r11.u64 = ctx.r10.u64 + ctx.r7.u64;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// b 0x83b65c00
	goto loc_83B65C00;
loc_83B65BFC:
	// addi r11,r7,4
	ctx.r11.s64 = ctx.r7.s64 + 4;
loc_83B65C00:
	// ld r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 4);
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83b65c24
	if (!cr6.eq) goto loc_83B65C24;
	// lwz r11,4(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// b 0x83b65c4c
	goto loc_83B65C4C;
loc_83B65C24:
	// lhz r29,0(r8)
	ctx.r29.u64 = PPC_LOAD_U16(ctx.r8.u32 + 0);
	// lhz r28,88(r1)
	ctx.r28.u64 = PPC_LOAD_U16(ctx.r1.u32 + 88);
	// cmplw cr6,r29,r28
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r28.u32, xer);
	// bne cr6,0x83b65c44
	if (!cr6.eq) goto loc_83B65C44;
	// lwz r29,4(r8)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, xer);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// beq cr6,0x83b65c48
	if (cr6.eq) goto loc_83B65C48;
loc_83B65C44:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_83B65C48:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_83B65C4C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83b65c6c
	if (!cr6.eq) goto loc_83B65C6C;
	// addi r10,r10,172
	ctx.r10.s64 = ctx.r10.s64 + 172;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmplwi cr6,r10,1892
	cr6.compare<uint32_t>(ctx.r10.u32, 1892, xer);
	// blt cr6,0x83b65be8
	if (cr6.lt) goto loc_83B65BE8;
	// b 0x83b65c78
	goto loc_83B65C78;
loc_83B65C6C:
	// stw r5,11356(r18)
	PPC_STORE_U32(ctx.r18.u32 + 11356, ctx.r5.u32);
	// li r6,3
	ctx.r6.s64 = 3;
	// stb r9,11360(r18)
	PPC_STORE_U8(ctx.r18.u32 + 11360, ctx.r9.u8);
loc_83B65C78:
	// clrlwi r11,r6,24
	ctx.r11.u64 = ctx.r6.u32 & 0xFF;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// bge cr6,0x83b65c94
	if (!cr6.lt) goto loc_83B65C94;
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// addi r8,r8,12
	ctx.r8.s64 = ctx.r8.s64 + 12;
	// cmplw cr6,r4,r3
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r3.u32, xer);
	// blt cr6,0x83b65be0
	if (cr6.lt) goto loc_83B65BE0;
loc_83B65C94:
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// bne cr6,0x83b65d08
	if (!cr6.eq) goto loc_83B65D08;
	// lwz r11,11308(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 11308);
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
	// mr r27,r31
	ctx.r27.u64 = ctx.r31.u64;
	// addi r10,r11,-2
	ctx.r10.s64 = ctx.r11.s64 + -2;
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
	// subfic r10,r10,0
	xer.ca = ctx.r10.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r10.s64;
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r26,r8,r11
	ctx.r26.u64 = ctx.r8.u64 & ctx.r11.u64;
	// mulli r28,r26,5532
	ctx.r28.s64 = ctx.r26.s64 * 5532;
loc_83B65CC0:
	// add r11,r31,r28
	ctx.r11.u64 = ctx.r31.u64 + ctx.r28.u64;
	// add r11,r11,r18
	ctx.r11.u64 = ctx.r11.u64 + ctx.r18.u64;
	// addi r3,r11,204
	ctx.r3.s64 = ctx.r11.s64 + 204;
	// lbz r4,212(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 212);
	// bl 0x8291a4c0
	ctx.lr = 0x83B65CD4;
	sub_8291A4C0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// clrlwi r10,r30,24
	ctx.r10.u64 = ctx.r30.u32 & 0xFF;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x83b65cec
	if (cr6.lt) goto loc_83B65CEC;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// clrlwi r27,r29,24
	ctx.r27.u64 = ctx.r29.u32 & 0xFF;
loc_83B65CEC:
	// addi r31,r31,172
	ctx.r31.s64 = ctx.r31.s64 + 172;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmplwi cr6,r31,1892
	cr6.compare<uint32_t>(ctx.r31.u32, 1892, xer);
	// blt cr6,0x83b65cc0
	if (cr6.lt) goto loc_83B65CC0;
	// stw r26,11356(r18)
	PPC_STORE_U32(ctx.r18.u32 + 11356, ctx.r26.u32);
	// li r6,3
	ctx.r6.s64 = 3;
	// stb r27,11360(r18)
	PPC_STORE_U8(ctx.r18.u32 + 11360, ctx.r27.u8);
loc_83B65D08:
	// clrlwi r11,r6,24
	ctx.r11.u64 = ctx.r6.u32 & 0xFF;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// blt cr6,0x83b65d24
	if (cr6.lt) goto loc_83B65D24;
	// cmplw cr6,r25,r24
	cr6.compare<uint32_t>(ctx.r25.u32, ctx.r24.u32, xer);
	// beq cr6,0x83b65d24
	if (cr6.eq) goto loc_83B65D24;
	// lwz r11,4(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 4);
	// stw r25,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r25.u32);
loc_83B65D24:
	// lwz r10,4(r19)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r19.u32 + 4);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r11,r17
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r17.u32, xer);
	// blt cr6,0x83b65d3c
	if (cr6.lt) goto loc_83B65D3C;
	// cmplw cr6,r11,r16
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r16.u32, xer);
	// ble cr6,0x83b65d40
	if (!cr6.gt) goto loc_83B65D40;
loc_83B65D3C:
	// stw r15,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r15.u32);
loc_83B65D40:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x831cdb04
	__restgprlr_15(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B65D48"))) PPC_WEAK_FUNC(sub_83B65D48);
PPC_FUNC_IMPL(__imp__sub_83B65D48) {
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
	ctx.lr = 0x83B65D6C;
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
	ctx.lr = 0x83B65D84;
	sub_837FE600(ctx, base);
	// lwz r9,140(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// lwz r10,136(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// addi r8,r31,136
	ctx.r8.s64 = ctx.r31.s64 + 136;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// beq cr6,0x83b65dc8
	if (cr6.eq) goto loc_83B65DC8;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// cmplw cr6,r9,r9
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r9.u32, xer);
	// beq cr6,0x83b65dc4
	if (cr6.eq) goto loc_83B65DC4;
loc_83B65DA4:
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
	// bne cr6,0x83b65da4
	if (!cr6.eq) goto loc_83B65DA4;
loc_83B65DC4:
	// stw r10,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r10.u32);
loc_83B65DC8:
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

__attribute__((alias("__imp__sub_83B65DE0"))) PPC_WEAK_FUNC(sub_83B65DE0);
PPC_FUNC_IMPL(__imp__sub_83B65DE0) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r11,47(r3)
	PPC_STORE_U8(ctx.r3.u32 + 47, ctx.r11.u8);
	// stb r10,46(r3)
	PPC_STORE_U8(ctx.r3.u32 + 46, ctx.r10.u8);
	// stb r11,49(r3)
	PPC_STORE_U8(ctx.r3.u32 + 49, ctx.r11.u8);
	// stb r11,48(r3)
	PPC_STORE_U8(ctx.r3.u32 + 48, ctx.r11.u8);
	// stb r11,50(r3)
	PPC_STORE_U8(ctx.r3.u32 + 50, ctx.r11.u8);
	// stb r11,52(r3)
	PPC_STORE_U8(ctx.r3.u32 + 52, ctx.r11.u8);
	// stb r11,56(r3)
	PPC_STORE_U8(ctx.r3.u32 + 56, ctx.r11.u8);
	// stb r10,55(r3)
	PPC_STORE_U8(ctx.r3.u32 + 55, ctx.r10.u8);
	// b 0x837f9ce0
	sub_837F9CE0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B65E0C"))) PPC_WEAK_FUNC(sub_83B65E0C);
PPC_FUNC_IMPL(__imp__sub_83B65E0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B65E10"))) PPC_WEAK_FUNC(sub_83B65E10);
PPC_FUNC_IMPL(__imp__sub_83B65E10) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83B65E18;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// clrlwi r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83b65e88
	if (!cr6.eq) goto loc_83B65E88;
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r31,r3,1120
	ctx.r31.s64 = ctx.r3.s64 + 1120;
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// stw r10,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r10.u32);
loc_83B65E40:
	// lbz r11,1(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83b65e78
	if (cr6.eq) goto loc_83B65E78;
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// addi r5,r31,-108
	ctx.r5.s64 = ctx.r31.s64 + -108;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lbz r10,-1(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + -1);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lbz r9,-2(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + -2);
	// lbz r8,-3(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + -3);
	// lbz r7,-4(r31)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + -4);
	// lwz r6,-8(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// stb r11,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, ctx.r11.u8);
	// bl 0x837fdb70
	ctx.lr = 0x83B65E78;
	sub_837FDB70(ctx, base);
loc_83B65E78:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,112
	ctx.r31.s64 = ctx.r31.s64 + 112;
	// cmplwi cr6,r30,27
	cr6.compare<uint32_t>(ctx.r30.u32, 27, xer);
	// blt cr6,0x83b65e40
	if (cr6.lt) goto loc_83B65E40;
loc_83B65E88:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B65E90"))) PPC_WEAK_FUNC(sub_83B65E90);
PPC_FUNC_IMPL(__imp__sub_83B65E90) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83B65E98;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x837ffa08
	ctx.lr = 0x83B65EAC;
	sub_837FFA08(ctx, base);
	// lis r11,-32203
	ctx.r11.s64 = -2110455808;
	// addi r29,r31,468
	ctx.r29.s64 = ctx.r31.s64 + 468;
	// addi r10,r11,-24960
	ctx.r10.s64 = ctx.r11.s64 + -24960;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x82a17f40
	ctx.lr = 0x83B65EC4;
	sub_82A17F40(ctx, base);
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// stw r9,464(r31)
	PPC_STORE_U32(ctx.r31.u32 + 464, ctx.r9.u32);
	// beq cr6,0x83b65f54
	if (cr6.eq) goto loc_83B65F54;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x825a4ce8
	ctx.lr = 0x83B65EE0;
	sub_825A4CE8(ctx, base);
	// lwz r11,496(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 496);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x83b65ef4
	if (cr6.lt) goto loc_83B65EF4;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// blt cr6,0x83b65ef8
	if (cr6.lt) goto loc_83B65EF8;
loc_83B65EF4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_83B65EF8:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// lis r11,-32203
	ctx.r11.s64 = -2110455808;
	// lfs f0,484(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 484);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,480(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 480);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,476(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 476);
	ctx.f12.f64 = double(temp.f32);
	// stfs f13,212(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 212, temp.u32);
	// lfs f13,9008(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9008);
	ctx.f13.f64 = double(temp.f32);
	// stfs f12,208(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 208, temp.u32);
	// stfs f0,216(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 216, temp.u32);
	// lfs f0,488(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 488);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// lfs f13,-25068(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -25068);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,220(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 220, temp.u32);
	// bge cr6,0x83b65f3c
	if (!cr6.lt) goto loc_83B65F3C;
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// b 0x83b65f48
	goto loc_83B65F48;
loc_83B65F3C:
	// fcmpu cr6,f0,f13
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x83b65f4c
	if (cr6.lt) goto loc_83B65F4C;
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
loc_83B65F48:
	// stfs f0,220(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 220, temp.u32);
loc_83B65F4C:
	// lbz r11,492(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 492);
	// stb r11,224(r31)
	PPC_STORE_U8(ctx.r31.u32 + 224, ctx.r11.u8);
loc_83B65F54:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B65F60"))) PPC_WEAK_FUNC(sub_83B65F60);
PPC_FUNC_IMPL(__imp__sub_83B65F60) {
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
	// lis r11,-32203
	ctx.r11.s64 = -2110455808;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,-24960
	ctx.r10.s64 = ctx.r11.s64 + -24960;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x83800020
	ctx.lr = 0x83B65F8C;
	sub_83800020(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x83b65fa4
	if (cr6.eq) goto loc_83B65FA4;
	// bl 0x82416268
	ctx.lr = 0x83B65FA0;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_83B65FA4:
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

__attribute__((alias("__imp__sub_83B65FBC"))) PPC_WEAK_FUNC(sub_83B65FBC);
PPC_FUNC_IMPL(__imp__sub_83B65FBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B65FC0"))) PPC_WEAK_FUNC(sub_83B65FC0);
PPC_FUNC_IMPL(__imp__sub_83B65FC0) {
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
	// li r11,33
	ctx.r11.s64 = 33;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,4172
	ctx.r4.s64 = 4172;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x83B65FEC;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83b66048
	if (cr6.eq) goto loc_83B66048;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x83b65e90
	ctx.lr = 0x83B65FFC;
	sub_83B65E90(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83b66048
	if (cr6.eq) goto loc_83B66048;
	// bl 0x837f9790
	ctx.lr = 0x83B6600C;
	sub_837F9790(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83b66060
	if (!cr6.eq) goto loc_83B66060;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82595150
	ctx.lr = 0x83B66028;
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
	ctx.lr = 0x83B66040;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82595170
	ctx.lr = 0x83B66048;
	sub_82595170(ctx, base);
loc_83B66048:
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
loc_83B66060:
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

__attribute__((alias("__imp__sub_83B66078"))) PPC_WEAK_FUNC(sub_83B66078);
PPC_FUNC_IMPL(__imp__sub_83B66078) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x83B66080;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// bne cr6,0x83b6615c
	if (!cr6.eq) goto loc_83B6615C;
	// lwz r11,468(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 468);
	// rotlwi r31,r11,0
	ctx.r31.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// stw r11,84(r7)
	PPC_STORE_U32(ctx.r7.u32 + 84, ctx.r11.u32);
	// lwz r10,472(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 472);
	// stw r10,8(r7)
	PPC_STORE_U32(ctx.r7.u32 + 8, ctx.r10.u32);
	// bl 0x82a4d1d8
	ctx.lr = 0x83B660AC;
	sub_82A4D1D8(ctx, base);
	// rlwinm r4,r31,16,24,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 16) & 0xFF;
	// bl 0x82a4cf38
	ctx.lr = 0x83B660B4;
	sub_82A4CF38(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_83B660BC:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83b660bc
	if (!cr6.eq) goto loc_83B660BC;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r28,88
	ctx.r3.s64 = ctx.r28.s64 + 88;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x83B660E0;
	sub_8259CC28(ctx, base);
	// addi r29,r28,116
	ctx.r29.s64 = ctx.r28.s64 + 116;
	// addi r31,r27,500
	ctx.r31.s64 = ctx.r27.s64 + 500;
	// li r30,8
	ctx.r30.s64 = 8;
loc_83B660EC:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_83B660F0:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83b660f0
	if (!cr6.eq) goto loc_83B660F0;
	// subf r11,r31,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r31.s64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x83B66118;
	sub_8259CC28(ctx, base);
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// addi r31,r31,64
	ctx.r31.s64 = ctx.r31.s64 + 64;
	// addi r29,r29,28
	ctx.r29.s64 = ctx.r29.s64 + 28;
	// bne 0x83b660ec
	if (!cr0.eq) goto loc_83B660EC;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r10,12(r28)
	PPC_STORE_U32(ctx.r28.u32 + 12, ctx.r10.u32);
	// stw r9,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r9.u32);
	// lfs f0,-24912(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -24912);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r28)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r28.u32 + 4, temp.u32);
	// lfs f0,4036(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 4036);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,340(r28)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r28.u32 + 340, temp.u32);
	// lfs f13,4040(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 4040);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,344(r28)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r28.u32 + 344, temp.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_83B6615C:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x837fa2e0
	ctx.lr = 0x83B66164;
	sub_837FA2E0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B6616C"))) PPC_WEAK_FUNC(sub_83B6616C);
PPC_FUNC_IMPL(__imp__sub_83B6616C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B66170"))) PPC_WEAK_FUNC(sub_83B66170);
PPC_FUNC_IMPL(__imp__sub_83B66170) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	uint32_t ea{};
	// cmplwi r5,8
	cr0.compare<uint32_t>(ctx.r5.u32, 8, xer);
	// blt 0x83b661c8
	if (cr0.lt) goto loc_83B661C8;
	// li r0,7
	ctx.r0.s64 = 7;
	// rlwinm r7,r5,29,3,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 29) & 0x1FFFFFFF;
	// and r0,r5,r0
	ctx.r0.u64 = ctx.r5.u64 & ctx.r0.u64;
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// ld r6,0(r4)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r4.u32 + 0);
	// ld r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// b 0x83b6619c
	goto loc_83B6619C;
loc_83B66194:
	// ldu r6,8(r4)
	ea = 8 + ctx.r4.u32;
	ctx.r6.u64 = PPC_LOAD_U64(ea);
	ctx.r4.u32 = ea;
	// ldu r5,8(r3)
	ea = 8 + ctx.r3.u32;
	ctx.r5.u64 = PPC_LOAD_U64(ea);
	ctx.r3.u32 = ea;
loc_83B6619C:
	// cmpd r5,r6
	cr0.compare<int64_t>(ctx.r5.s64, ctx.r6.s64, xer);
	// bdnzt eq,0x83b66194
	--ctr.u64;
	if (ctr.u32 != 0 && cr0.eq) goto loc_83B66194;
	// beq 0x83b661bc
	if (cr0.eq) goto loc_83B661BC;
	// li r3,-1
	ctx.r3.s64 = -1;
	// cmpld r5,r6
	cr0.compare<uint64_t>(ctx.r5.u64, ctx.r6.u64, xer);
	// bltlr 
	if (cr0.lt) return;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_83B661BC:
	// mr r5,r0
	ctx.r5.u64 = ctx.r0.u64;
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// addi r4,r4,8
	ctx.r4.s64 = ctx.r4.s64 + 8;
loc_83B661C8:
	// cmpwi r5,0
	cr0.compare<int32_t>(ctx.r5.s32, 0, xer);
	// mtctr r5
	ctr.u64 = ctx.r5.u64;
	// beq 0x83b661f8
	if (cr0.eq) goto loc_83B661F8;
	// lbz r6,0(r4)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// lbz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// b 0x83b661e8
	goto loc_83B661E8;
loc_83B661E0:
	// lbzu r6,1(r4)
	ea = 1 + ctx.r4.u32;
	ctx.r6.u64 = PPC_LOAD_U8(ea);
	ctx.r4.u32 = ea;
	// lbzu r5,1(r3)
	ea = 1 + ctx.r3.u32;
	ctx.r5.u64 = PPC_LOAD_U8(ea);
	ctx.r3.u32 = ea;
loc_83B661E8:
	// cmpw r5,r6
	cr0.compare<int32_t>(ctx.r5.s32, ctx.r6.s32, xer);
	// bdnzt eq,0x83b661e0
	--ctr.u64;
	if (ctr.u32 != 0 && cr0.eq) goto loc_83B661E0;
	// subf r3,r6,r5
	ctx.r3.s64 = ctx.r5.s64 - ctx.r6.s64;
	// blr 
	return;
loc_83B661F8:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83B66200"))) PPC_WEAK_FUNC(sub_83B66200);
PPC_FUNC_IMPL(__imp__sub_83B66200) {
	PPC_FUNC_PROLOGUE();
	// fabs f1,f1
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = ctx.f1.u64 & ~0x8000000000000000;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83B66208"))) PPC_WEAK_FUNC(sub_83B66208);
PPC_FUNC_IMPL(__imp__sub_83B66208) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83b66240
	if (!cr6.eq) goto loc_83B66240;
	// bl 0x831d3050
	ctx.lr = 0x83B6622C;
	sub_831D3050(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x831cf000
	ctx.lr = 0x83B66238;
	sub_831CF000(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83b662e4
	goto loc_83B662E4;
loc_83B66240:
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stb r30,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r30.u8);
	// bl 0x832d29d8
	ctx.lr = 0x83B66250;
	sub_832D29D8(ctx, base);
	// li r10,47
	ctx.r10.s64 = 47;
	// li r9,100
	ctx.r9.s64 = 100;
	// lhz r8,82(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + 82);
	// stb r10,5(r31)
	PPC_STORE_U8(ctx.r31.u32 + 5, ctx.r10.u8);
	// li r11,10
	ctx.r11.s64 = 10;
	// stb r10,2(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2, ctx.r10.u8);
	// lhz r6,86(r1)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r1.u32 + 86);
	// stb r30,8(r31)
	PPC_STORE_U8(ctx.r31.u32 + 8, ctx.r30.u8);
	// lhz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// divw r9,r10,r9
	ctx.r9.s32 = PPCDivide(ctx.r10.s32, ctx.r9.s32);
	// mulli r9,r9,100
	ctx.r9.s64 = ctx.r9.s64 * 100;
	// subf r5,r9,r10
	ctx.r5.s64 = ctx.r10.s64 - ctx.r9.s64;
	// divw r10,r8,r11
	ctx.r10.s32 = PPCDivide(ctx.r8.s32, ctx.r11.s32);
	// divw r9,r6,r11
	ctx.r9.s32 = PPCDivide(ctx.r6.s32, ctx.r11.s32);
	// divw r7,r5,r11
	ctx.r7.s32 = PPCDivide(ctx.r5.s32, ctx.r11.s32);
	// mulli r3,r9,10
	ctx.r3.s64 = ctx.r9.s64 * 10;
	// mulli r4,r10,10
	ctx.r4.s64 = ctx.r10.s64 * 10;
	// mulli r30,r7,10
	ctx.r30.s64 = ctx.r7.s64 * 10;
	// divw r9,r8,r11
	ctx.r9.s32 = PPCDivide(ctx.r8.s32, ctx.r11.s32);
	// divw r7,r6,r11
	ctx.r7.s32 = PPCDivide(ctx.r6.s32, ctx.r11.s32);
	// divw r10,r5,r11
	ctx.r10.s32 = PPCDivide(ctx.r5.s32, ctx.r11.s32);
	// subf r6,r3,r6
	ctx.r6.s64 = ctx.r6.s64 - ctx.r3.s64;
	// subf r8,r4,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r4.s64;
	// subf r11,r30,r5
	ctx.r11.s64 = ctx.r5.s64 - ctx.r30.s64;
	// addi r9,r9,48
	ctx.r9.s64 = ctx.r9.s64 + 48;
	// addi r8,r8,48
	ctx.r8.s64 = ctx.r8.s64 + 48;
	// addi r7,r7,48
	ctx.r7.s64 = ctx.r7.s64 + 48;
	// stb r9,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r9.u8);
	// addi r6,r6,48
	ctx.r6.s64 = ctx.r6.s64 + 48;
	// stb r8,1(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1, ctx.r8.u8);
	// addi r10,r10,48
	ctx.r10.s64 = ctx.r10.s64 + 48;
	// stb r7,3(r31)
	PPC_STORE_U8(ctx.r31.u32 + 3, ctx.r7.u8);
	// addi r11,r11,48
	ctx.r11.s64 = ctx.r11.s64 + 48;
	// stb r6,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r6.u8);
	// stb r10,6(r31)
	PPC_STORE_U8(ctx.r31.u32 + 6, ctx.r10.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r11,7(r31)
	PPC_STORE_U8(ctx.r31.u32 + 7, ctx.r11.u8);
loc_83B662E4:
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

__attribute__((alias("__imp__sub_83B662FC"))) PPC_WEAK_FUNC(sub_83B662FC);
PPC_FUNC_IMPL(__imp__sub_83B662FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B66300"))) PPC_WEAK_FUNC(sub_83B66300);
PPC_FUNC_IMPL(__imp__sub_83B66300) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83B66308;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83b66330
	if (!cr6.eq) goto loc_83B66330;
	// bl 0x831d3050
	ctx.lr = 0x83B6631C;
	sub_831D3050(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x831cf000
	ctx.lr = 0x83B66328;
	sub_831CF000(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83b663c4
	goto loc_83B663C4;
loc_83B66330:
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stb r30,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r30.u8);
	// bl 0x832d29d8
	ctx.lr = 0x83B66340;
	sub_832D29D8(ctx, base);
	// li r10,58
	ctx.r10.s64 = 58;
	// lhz r6,88(r1)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r1.u32 + 88);
	// li r11,10
	ctx.r11.s64 = 10;
	// lhz r5,90(r1)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r1.u32 + 90);
	// lhz r4,92(r1)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r1.u32 + 92);
	// stb r10,5(r31)
	PPC_STORE_U8(ctx.r31.u32 + 5, ctx.r10.u8);
	// divw r9,r5,r11
	ctx.r9.s32 = PPCDivide(ctx.r5.s32, ctx.r11.s32);
	// stb r10,2(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2, ctx.r10.u8);
	// divw r10,r6,r11
	ctx.r10.s32 = PPCDivide(ctx.r6.s32, ctx.r11.s32);
	// divw r8,r4,r11
	ctx.r8.s32 = PPCDivide(ctx.r4.s32, ctx.r11.s32);
	// stb r30,8(r31)
	PPC_STORE_U8(ctx.r31.u32 + 8, ctx.r30.u8);
	// mulli r3,r10,10
	ctx.r3.s64 = ctx.r10.s64 * 10;
	// mulli r30,r9,10
	ctx.r30.s64 = ctx.r9.s64 * 10;
	// mulli r29,r8,10
	ctx.r29.s64 = ctx.r8.s64 * 10;
	// divw r9,r6,r11
	ctx.r9.s32 = PPCDivide(ctx.r6.s32, ctx.r11.s32);
	// subf r8,r3,r6
	ctx.r8.s64 = ctx.r6.s64 - ctx.r3.s64;
	// divw r7,r5,r11
	ctx.r7.s32 = PPCDivide(ctx.r5.s32, ctx.r11.s32);
	// divw r10,r4,r11
	ctx.r10.s32 = PPCDivide(ctx.r4.s32, ctx.r11.s32);
	// subf r6,r30,r5
	ctx.r6.s64 = ctx.r5.s64 - ctx.r30.s64;
	// subf r11,r29,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r29.s64;
	// addi r9,r9,48
	ctx.r9.s64 = ctx.r9.s64 + 48;
	// addi r8,r8,48
	ctx.r8.s64 = ctx.r8.s64 + 48;
	// addi r7,r7,48
	ctx.r7.s64 = ctx.r7.s64 + 48;
	// stb r9,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r9.u8);
	// addi r6,r6,48
	ctx.r6.s64 = ctx.r6.s64 + 48;
	// stb r8,1(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1, ctx.r8.u8);
	// addi r10,r10,48
	ctx.r10.s64 = ctx.r10.s64 + 48;
	// stb r7,3(r31)
	PPC_STORE_U8(ctx.r31.u32 + 3, ctx.r7.u8);
	// addi r11,r11,48
	ctx.r11.s64 = ctx.r11.s64 + 48;
	// stb r6,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r6.u8);
	// stb r10,6(r31)
	PPC_STORE_U8(ctx.r31.u32 + 6, ctx.r10.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r11,7(r31)
	PPC_STORE_U8(ctx.r31.u32 + 7, ctx.r11.u8);
loc_83B663C4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B663CC"))) PPC_WEAK_FUNC(sub_83B663CC);
PPC_FUNC_IMPL(__imp__sub_83B663CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B663D0"))) PPC_WEAK_FUNC(sub_83B663D0);
PPC_FUNC_IMPL(__imp__sub_83B663D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_83B663F8"))) PPC_WEAK_FUNC(sub_83B663F8);
PPC_FUNC_IMPL(__imp__sub_83B663F8) {
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
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831ea798
	ctx.lr = 0x83B66420;
	sub_831EA798(ctx, base);
	// addi r11,r31,7
	ctx.r11.s64 = ctx.r31.s64 + 7;
	// li r10,0
	ctx.r10.s64 = 0;
	// rlwinm r3,r11,0,0,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// addi r11,r3,12
	ctx.r11.s64 = ctx.r3.s64 + 12;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r30,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r30.u32);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_83B66454"))) PPC_WEAK_FUNC(sub_83B66454);
PPC_FUNC_IMPL(__imp__sub_83B66454) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B66458"))) PPC_WEAK_FUNC(sub_83B66458);
PPC_FUNC_IMPL(__imp__sub_83B66458) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x83B66460;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble cr6,0x83b664ac
	if (!cr6.gt) goto loc_83B664AC;
	// li r29,0
	ctx.r29.s64 = 0;
loc_83B66484:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mtctr r27
	ctr.u64 = ctx.r27.u64;
	// lwzx r4,r11,r29
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// bctrl 
	ctx.lr = 0x83B66498;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmpw cr6,r30,r11
	cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, xer);
	// blt cr6,0x83b66484
	if (cr6.lt) goto loc_83B66484;
loc_83B664AC:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B664BC"))) PPC_WEAK_FUNC(sub_83B664BC);
PPC_FUNC_IMPL(__imp__sub_83B664BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B664C0"))) PPC_WEAK_FUNC(sub_83B664C0);
PPC_FUNC_IMPL(__imp__sub_83B664C0) {
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
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, xer);
	// blt cr6,0x83b664f8
	if (cr6.lt) goto loc_83B664F8;
	// lis r11,-32203
	ctx.r11.s64 = -2110455808;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,-24832
	ctx.r4.s64 = ctx.r11.s64 + -24832;
	// bl 0x831ea3f0
	ctx.lr = 0x83B664F0;
	sub_831EA3F0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83b66510
	goto loc_83B66510;
loc_83B664F8:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// stwx r4,r8,r9
	PPC_STORE_U32(ctx.r8.u32 + ctx.r9.u32, ctx.r4.u32);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
loc_83B66510:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83B66520"))) PPC_WEAK_FUNC(sub_83B66520);
PPC_FUNC_IMPL(__imp__sub_83B66520) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// ble cr6,0x83b66554
	if (!cr6.gt) goto loc_83B66554;
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r11,0
	ctx.r11.s64 = 0;
loc_83B66538:
	// lwzx r7,r11,r8
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// cmplw cr6,r7,r4
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r4.u32, xer);
	// beq cr6,0x83b66554
	if (cr6.eq) goto loc_83B66554;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, xer);
	// blt cr6,0x83b66538
	if (cr6.lt) goto loc_83B66538;
loc_83B66554:
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// addi r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, xer);
	// bge cr6,0x83b6658c
	if (!cr6.lt) goto loc_83B6658C;
	// subf r10,r11,r9
	ctx.r10.s64 = ctx.r9.s64 - ctx.r11.s64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_83B66574:
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r8,-4(r10)
	PPC_STORE_U32(ctx.r10.u32 + -4, ctx.r8.u32);
	// bdnz 0x83b66574
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83B66574;
loc_83B6658C:
	// addi r11,r9,-1
	ctx.r11.s64 = ctx.r9.s64 + -1;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83B66598"))) PPC_WEAK_FUNC(sub_83B66598);
PPC_FUNC_IMPL(__imp__sub_83B66598) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x83B665A0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,8(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, xer);
	// ble cr6,0x83b665e0
	if (!cr6.gt) goto loc_83B665E0;
	// li r30,0
	ctx.r30.s64 = 0;
loc_83B665C0:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mtctr r27
	ctr.u64 = ctx.r27.u64;
	// lwzx r4,r11,r30
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// bctrl 
	ctx.lr = 0x83B665D4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// bne 0x83b665c0
	if (!cr0.eq) goto loc_83B665C0;
loc_83B665E0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B665E8"))) PPC_WEAK_FUNC(sub_83B665E8);
PPC_FUNC_IMPL(__imp__sub_83B665E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83B66614;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r11,r11,7
	ctx.r11.s64 = ctx.r11.s64 + 7;
	// srawi r11,r11,3
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 3;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_83B66644"))) PPC_WEAK_FUNC(sub_83B66644);
PPC_FUNC_IMPL(__imp__sub_83B66644) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B66648"))) PPC_WEAK_FUNC(sub_83B66648);
PPC_FUNC_IMPL(__imp__sub_83B66648) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x83B66650;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r11,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r11.u32);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83B66684;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x83b666e4
	if (!cr0.eq) goto loc_83B666E4;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,7
	ctx.r11.s64 = ctx.r11.s64 + 7;
	// srawi r11,r11,3
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 3;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x831ea7a0
	ctx.lr = 0x83B666B0;
	sub_831EA7A0(ctx, base);
	// addi r11,r31,7
	ctx.r11.s64 = ctx.r31.s64 + 7;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r31,r11,0,0,28
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// addi r6,r31,4
	ctx.r6.s64 = ctx.r31.s64 + 4;
	// addi r4,r31,8
	ctx.r4.s64 = ctx.r31.s64 + 8;
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83B666D4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x83b666e4
	if (!cr0.eq) goto loc_83B666E4;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// stw r31,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r31.u32);
loc_83B666E4:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B666EC"))) PPC_WEAK_FUNC(sub_83B666EC);
PPC_FUNC_IMPL(__imp__sub_83B666EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B666F0"))) PPC_WEAK_FUNC(sub_83B666F0);
PPC_FUNC_IMPL(__imp__sub_83B666F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_83B66704"))) PPC_WEAK_FUNC(sub_83B66704);
PPC_FUNC_IMPL(__imp__sub_83B66704) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B66708"))) PPC_WEAK_FUNC(sub_83B66708);
PPC_FUNC_IMPL(__imp__sub_83B66708) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// lwz r31,196(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83B66734;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
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

__attribute__((alias("__imp__sub_83B66748"))) PPC_WEAK_FUNC(sub_83B66748);
PPC_FUNC_IMPL(__imp__sub_83B66748) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83b66760
	if (!cr6.eq) goto loc_83B66760;
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_83B66760:
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_83B6676C"))) PPC_WEAK_FUNC(sub_83B6676C);
PPC_FUNC_IMPL(__imp__sub_83B6676C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B66770"))) PPC_WEAK_FUNC(sub_83B66770);
PPC_FUNC_IMPL(__imp__sub_83B66770) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83b66788
	if (!cr6.eq) goto loc_83B66788;
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_83B66788:
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_83B66794"))) PPC_WEAK_FUNC(sub_83B66794);
PPC_FUNC_IMPL(__imp__sub_83B66794) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B66798"))) PPC_WEAK_FUNC(sub_83B66798);
PPC_FUNC_IMPL(__imp__sub_83B66798) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83b667b0
	if (!cr6.eq) goto loc_83B667B0;
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_83B667B0:
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_83B667BC"))) PPC_WEAK_FUNC(sub_83B667BC);
PPC_FUNC_IMPL(__imp__sub_83B667BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B667C0"))) PPC_WEAK_FUNC(sub_83B667C0);
PPC_FUNC_IMPL(__imp__sub_83B667C0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83b667d4
	if (!cr6.eq) goto loc_83B667D4;
	// li r3,-3
	ctx.r3.s64 = -3;
	// blr 
	return;
loc_83B667D4:
	// lis r10,-31767
	ctx.r10.s64 = -2081882112;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r10,r10,-6384
	ctx.r10.s64 = ctx.r10.s64 + -6384;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83B667E8"))) PPC_WEAK_FUNC(sub_83B667E8);
PPC_FUNC_IMPL(__imp__sub_83B667E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31738
	ctx.r11.s64 = -2079981568;
	// addi r10,r11,-364
	ctx.r10.s64 = ctx.r11.s64 + -364;
	// sth r3,-364(r11)
	PPC_STORE_U16(ctx.r11.u32 + -364, ctx.r3.u16);
	// li r3,0
	ctx.r3.s64 = 0;
	// sth r4,4(r10)
	PPC_STORE_U16(ctx.r10.u32 + 4, ctx.r4.u16);
	// sth r5,8(r10)
	PPC_STORE_U16(ctx.r10.u32 + 8, ctx.r5.u16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83B66804"))) PPC_WEAK_FUNC(sub_83B66804);
PPC_FUNC_IMPL(__imp__sub_83B66804) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B66808"))) PPC_WEAK_FUNC(sub_83B66808);
PPC_FUNC_IMPL(__imp__sub_83B66808) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r10,-32203
	ctx.r10.s64 = -2110455808;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r10,r10,-24736
	ctx.r10.s64 = ctx.r10.s64 + -24736;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83B66820"))) PPC_WEAK_FUNC(sub_83B66820);
PPC_FUNC_IMPL(__imp__sub_83B66820) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r10,428
	ctx.r10.s64 = 428;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mulli r11,r11,18
	ctx.r11.s64 = ctx.r11.s64 * 18;
	// addi r11,r11,436
	ctx.r11.s64 = ctx.r11.s64 + 436;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83B66844"))) PPC_WEAK_FUNC(sub_83B66844);
PPC_FUNC_IMPL(__imp__sub_83B66844) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B66848"))) PPC_WEAK_FUNC(sub_83B66848);
PPC_FUNC_IMPL(__imp__sub_83B66848) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83B66850;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mulli r11,r11,18
	ctx.r11.s64 = ctx.r11.s64 * 18;
	// addi r11,r11,436
	ctx.r11.s64 = ctx.r11.s64 + 436;
	// cmpw cr6,r5,r11
	cr6.compare<int32_t>(ctx.r5.s32, ctx.r11.s32, xer);
	// bge cr6,0x83b66878
	if (!cr6.lt) goto loc_83B66878;
	// li r3,-3
	ctx.r3.s64 = -3;
	// b 0x83b668bc
	goto loc_83B668BC;
loc_83B66878:
	// addi r11,r4,7
	ctx.r11.s64 = ctx.r4.s64 + 7;
	// li r4,224
	ctx.r4.s64 = 224;
	// rlwinm r31,r11,0,0,28
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r28,r31
	ctx.r28.u64 = ctx.r31.u64;
	// bl 0x831ea7a0
	ctx.lr = 0x83B66890;
	sub_831EA7A0(ctx, base);
	// addi r11,r31,224
	ctx.r11.s64 = ctx.r31.s64 + 224;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r10,r11,15
	ctx.r10.s64 = ctx.r11.s64 + 15;
	// addi r11,r11,204
	ctx.r11.s64 = ctx.r11.s64 + 204;
	// rlwinm r10,r10,0,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFF0;
	// stw r11,208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 208, ctx.r11.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mulli r11,r11,18
	ctx.r11.s64 = ctx.r11.s64 * 18;
	// stw r11,212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 212, ctx.r11.u32);
	// stw r31,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r31.u32);
loc_83B668BC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B668C4"))) PPC_WEAK_FUNC(sub_83B668C4);
PPC_FUNC_IMPL(__imp__sub_83B668C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B668C8"))) PPC_WEAK_FUNC(sub_83B668C8);
PPC_FUNC_IMPL(__imp__sub_83B668C8) {
	PPC_FUNC_PROLOGUE();
	// stw r4,216(r3)
	PPC_STORE_U32(ctx.r3.u32 + 216, ctx.r4.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83B668D4"))) PPC_WEAK_FUNC(sub_83B668D4);
PPC_FUNC_IMPL(__imp__sub_83B668D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B668D8"))) PPC_WEAK_FUNC(sub_83B668D8);
PPC_FUNC_IMPL(__imp__sub_83B668D8) {
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
	// li r4,116
	ctx.r4.s64 = 116;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// bl 0x831ea7a0
	ctx.lr = 0x83B668F8;
	sub_831EA7A0(ctx, base);
	// lis r5,-31738
	ctx.r5.s64 = -2079981568;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r6,r5,-364
	ctx.r6.s64 = ctx.r5.s64 + -364;
	// stw r11,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r11.u32);
	// li r4,-1
	ctx.r4.s64 = -1;
	// stw r11,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r11.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 216, ctx.r11.u32);
	// stw r11,220(r31)
	PPC_STORE_U32(ctx.r31.u32 + 220, ctx.r11.u32);
	// lhz r10,4(r6)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r6.u32 + 4);
	// lhz r9,8(r6)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r6.u32 + 8);
	// lhz r8,12(r6)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r6.u32 + 12);
	// lhz r7,16(r6)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r6.u32 + 16);
	// stw r4,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r4.u32);
	// sth r10,198(r31)
	PPC_STORE_U16(ctx.r31.u32 + 198, ctx.r10.u16);
	// sth r9,200(r31)
	PPC_STORE_U16(ctx.r31.u32 + 200, ctx.r9.u16);
	// sth r8,202(r31)
	PPC_STORE_U16(ctx.r31.u32 + 202, ctx.r8.u16);
	// sth r7,204(r31)
	PPC_STORE_U16(ctx.r31.u32 + 204, ctx.r7.u16);
	// lhz r6,20(r6)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r6.u32 + 20);
	// lhz r11,-364(r5)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r5.u32 + -364);
	// sth r6,206(r31)
	PPC_STORE_U16(ctx.r31.u32 + 206, ctx.r6.u16);
	// sth r11,196(r31)
	PPC_STORE_U16(ctx.r31.u32 + 196, ctx.r11.u16);
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

__attribute__((alias("__imp__sub_83B66964"))) PPC_WEAK_FUNC(sub_83B66964);
PPC_FUNC_IMPL(__imp__sub_83B66964) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B66968"))) PPC_WEAK_FUNC(sub_83B66968);
PPC_FUNC_IMPL(__imp__sub_83B66968) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r10,220(r11)
	PPC_STORE_U32(ctx.r11.u32 + 220, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83B6697C"))) PPC_WEAK_FUNC(sub_83B6697C);
PPC_FUNC_IMPL(__imp__sub_83B6697C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B66980"))) PPC_WEAK_FUNC(sub_83B66980);
PPC_FUNC_IMPL(__imp__sub_83B66980) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83B66988;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,9(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 9);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,128(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 128);
	// extsb r28,r11
	ctx.r28.s64 = ctx.r11.s8;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bge cr6,0x83b66a04
	if (!cr6.lt) goto loc_83B66A04;
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(ctx.r28.s32, 0, xer);
	// ble cr6,0x83b669e8
	if (!cr6.gt) goto loc_83B669E8;
	// subfic r8,r3,-40
	xer.ca = ctx.r3.u32 <= 4294967256;
	ctx.r8.s64 = -40 - ctx.r3.s64;
	// mtctr r28
	ctr.u64 = ctx.r28.u64;
	// addi r11,r3,136
	ctx.r11.s64 = ctx.r3.s64 + 136;
	// subfic r7,r3,-136
	xer.ca = ctx.r3.u32 <= 4294967160;
	ctx.r7.s64 = -136 - ctx.r3.s64;
loc_83B669BC:
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// add r6,r8,r11
	ctx.r6.u64 = ctx.r8.u64 + ctx.r11.u64;
	// add r10,r7,r11
	ctx.r10.u64 = ctx.r7.u64 + ctx.r11.u64;
	// lfsx f0,r6,r9
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r9.u32);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,-4(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + -4, temp.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lfs f0,100(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 100);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// bdnz 0x83b669bc
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83B669BC;
loc_83B669E8:
	// addi r6,r31,200
	ctx.r6.s64 = ctx.r31.s64 + 200;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r5,r31,198
	ctx.r5.s64 = ctx.r31.s64 + 198;
	// addi r4,r31,196
	ctx.r4.s64 = ctx.r31.s64 + 196;
	// bl 0x83a7cfb0
	ctx.lr = 0x83B669FC;
	sub_83A7CFB0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x83b66a50
	goto loc_83B66A50;
loc_83B66A04:
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(ctx.r28.s32, 0, xer);
	// ble cr6,0x83b66a34
	if (!cr6.gt) goto loc_83B66A34;
	// addi r29,r31,128
	ctx.r29.s64 = ctx.r31.s64 + 128;
loc_83B66A14:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lfs f1,4(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// lfsu f2,8(r29)
	ea = 8 + ctx.r29.u32;
	temp.u32 = PPC_LOAD_U32(ea);
	ctx.f2.f64 = double(temp.f32);
	ctx.r29.u32 = ea;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x83a7d040
	ctx.lr = 0x83B66A28;
	sub_83A7D040(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r30,r28
	cr6.compare<int32_t>(ctx.r30.s32, ctx.r28.s32, xer);
	// blt cr6,0x83b66a14
	if (cr6.lt) goto loc_83B66A14;
loc_83B66A34:
	// lhz r6,200(r31)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r31.u32 + 200);
	// lhz r5,198(r31)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r31.u32 + 198);
	// lhz r4,196(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 196);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x83a7cfa0
	ctx.lr = 0x83B66A48;
	sub_83A7CFA0(ctx, base);
	// lwz r11,128(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_83B66A50:
	// stw r11,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r11.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B66A60"))) PPC_WEAK_FUNC(sub_83B66A60);
PPC_FUNC_IMPL(__imp__sub_83B66A60) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83B66A68;
	__savegprlr_28(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// li r4,116
	ctx.r4.s64 = 116;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r31,r7
	ctx.r31.u64 = ctx.r7.u64;
	// mr r29,r8
	ctx.r29.u64 = ctx.r8.u64;
	// bl 0x831ea7a0
	ctx.lr = 0x83B66A88;
	sub_831EA7A0(ctx, base);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83a7d7f0
	ctx.lr = 0x83B66A98;
	sub_83A7D7F0(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// bgt 0x83b66aac
	if (cr0.gt) goto loc_83B66AAC;
	// stw r30,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r30.u32);
	// li r3,-2
	ctx.r3.s64 = -2;
	// b 0x83b66ba4
	goto loc_83B66BA4;
loc_83B66AAC:
	// li r4,68
	ctx.r4.s64 = 68;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831ea7a0
	ctx.lr = 0x83B66AB8;
	sub_831EA7A0(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r11,32
	ctx.r11.s64 = 32;
	// lha r9,156(r1)
	ctx.r9.s64 = int16_t(PPC_LOAD_U16(ctx.r1.u32 + 156));
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stw r10,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r10.u32);
	// stw r11,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
	// lbz r10,101(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 101);
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// lwz r8,108(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// mullw r7,r10,r11
	ctx.r7.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// lwz r6,164(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lwz r5,172(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// lwz r4,160(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// lwz r3,168(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// stw r30,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r30.u32);
	// lha r30,192(r1)
	ctx.r30.s64 = int16_t(PPC_LOAD_U16(ctx.r1.u32 + 192));
	// mulli r11,r7,9
	ctx.r11.s64 = ctx.r7.s64 * 9;
	// stw r8,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r8.u32);
	// stw r6,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r6.u32);
	// stw r5,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r5.u32);
	// stw r4,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r4.u32);
	// stw r3,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r3.u32);
	// srawi r11,r11,1
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	// mulli r10,r10,18
	ctx.r10.s64 = ctx.r10.s64 * 18;
	// stw r10,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r10.u32);
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// subfic r9,r9,0
	xer.ca = ctx.r9.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r9.s64;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// mr. r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// subfe r10,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r10.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// stw r10,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r10.u32);
	// bge 0x83b66b8c
	if (!cr0.lt) goto loc_83B66B8C;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// frsp f12,f0
	ctx.f12.f64 = double(float(ctx.f0.f64));
	// lfs f0,20048(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 20048);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// lfd f1,20040(r11)
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r11.u32 + 20040);
	// lfs f13,21212(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 21212);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fmuls f2,f0,f13
	ctx.f2.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// bl 0x831d20a0
	ctx.lr = 0x83B66B84;
	sub_831D20A0(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// b 0x83b66b94
	goto loc_83B66B94;
loc_83B66B8C:
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lfs f0,-26260(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -26260);
	ctx.f0.f64 = double(temp.f32);
loc_83B66B94:
	// li r11,0
	ctx.r11.s64 = 0;
	// stfs f0,48(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 48, temp.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
loc_83B66BA4:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B66BAC"))) PPC_WEAK_FUNC(sub_83B66BAC);
PPC_FUNC_IMPL(__imp__sub_83B66BAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B66BB0"))) PPC_WEAK_FUNC(sub_83B66BB0);
PPC_FUNC_IMPL(__imp__sub_83B66BB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdab8
	ctx.lr = 0x83B66BB8;
	__savegprlr_16(ctx, base);
	// stfd f31,-144(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -144, ctx.f31.u64);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r18,340(r1)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + 340);
	// li r17,0
	ctx.r17.s64 = 0;
	// mr r27,r9
	ctx.r27.u64 = ctx.r9.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r17,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r17.u32);
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r19,r5
	ctx.r19.u64 = ctx.r5.u64;
	// stw r17,0(r18)
	PPC_STORE_U32(ctx.r18.u32 + 0, ctx.r17.u32);
	// mr r20,r6
	ctx.r20.u64 = ctx.r6.u64;
	// stw r17,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r17.u32);
	// mr r24,r7
	ctx.r24.u64 = ctx.r7.u64;
	// lwz r11,124(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 124);
	// mr r22,r8
	ctx.r22.u64 = ctx.r8.u64;
	// mr r16,r10
	ctx.r16.u64 = ctx.r10.u64;
	// mr r9,r17
	ctx.r9.u64 = ctx.r17.u64;
	// mr r29,r17
	ctx.r29.u64 = ctx.r17.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble cr6,0x83b66c28
	if (!cr6.gt) goto loc_83B66C28;
	// add r10,r5,r7
	ctx.r10.u64 = ctx.r5.u64 + ctx.r7.u64;
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, xer);
	// bge cr6,0x83b66c18
	if (!cr6.lt) goto loc_83B66C18;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_83B66C18:
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// stw r11,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r11.u32);
	// stw r10,0(r16)
	PPC_STORE_U32(ctx.r16.u32 + 0, ctx.r10.u32);
	// b 0x83b67038
	goto loc_83B67038;
loc_83B66C28:
	// lbz r11,9(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 9);
	// extsb. r23,r11
	ctx.r23.s64 = ctx.r11.s8;
	cr0.compare<int32_t>(ctx.r23.s32, 0, xer);
	// bgt 0x83b66e90
	if (cr0.gt) goto loc_83B66E90;
	// cmpwi cr6,r19,0
	cr6.compare<int32_t>(ctx.r19.s32, 0, xer);
	// ble cr6,0x83b67038
	if (!cr6.gt) goto loc_83B67038;
	// mr r11,r17
	ctx.r11.u64 = ctx.r17.u64;
loc_83B66C40:
	// lbzx r10,r11,r26
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r26.u32);
	// cmplwi cr6,r10,128
	cr6.compare<uint32_t>(ctx.r10.u32, 128, xer);
	// bne cr6,0x83b66c68
	if (!cr6.eq) goto loc_83B66C68;
	// addi r10,r19,-1
	ctx.r10.s64 = ctx.r19.s64 + -1;
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, xer);
	// bge cr6,0x83b66c68
	if (!cr6.lt) goto loc_83B66C68;
	// add r10,r11,r26
	ctx.r10.u64 = ctx.r11.u64 + ctx.r26.u64;
	// lbz r10,1(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq 0x83b66c74
	if (cr0.eq) goto loc_83B66C74;
loc_83B66C68:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpw cr6,r11,r19
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r19.s32, xer);
	// blt cr6,0x83b66c40
	if (cr6.lt) goto loc_83B66C40;
loc_83B66C74:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble cr6,0x83b66c84
	if (!cr6.gt) goto loc_83B66C84;
	// stw r11,0(r16)
	PPC_STORE_U32(ctx.r16.u32 + 0, ctx.r11.u32);
	// b 0x83b67038
	goto loc_83B67038;
loc_83B66C84:
	// addi r30,r31,4
	ctx.r30.s64 = ctx.r31.s64 + 4;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x83a7d7f0
	ctx.lr = 0x83B66C98;
	sub_83A7D7F0(ctx, base);
	// mr. r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r25.s32, 0, xer);
	// bne 0x83b66cac
	if (!cr0.eq) goto loc_83B66CAC;
	// li r3,-2
	ctx.r3.s64 = -2;
	// stw r17,0(r16)
	PPC_STORE_U32(ctx.r16.u32 + 0, ctx.r17.u32);
	// b 0x83b6703c
	goto loc_83B6703C;
loc_83B66CAC:
	// lbz r11,9(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 9);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// extsb r26,r11
	ctx.r26.s64 = ctx.r11.s8;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x83a7cf98
	ctx.lr = 0x83B66CC0;
	sub_83A7CF98(ctx, base);
	// lbz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(ctx.r11.u32, 4, xer);
	// bne cr6,0x83b66ce8
	if (!cr6.eq) goto loc_83B66CE8;
	// lbz r11,5(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 5);
	// cmplwi cr6,r11,8
	cr6.compare<uint32_t>(ctx.r11.u32, 8, xer);
	// bne cr6,0x83b66ce8
	if (!cr6.eq) goto loc_83B66CE8;
	// lhz r29,202(r31)
	ctx.r29.u64 = PPC_LOAD_U16(ctx.r31.u32 + 202);
	// lhz r28,204(r31)
	ctx.r28.u64 = PPC_LOAD_U16(ctx.r31.u32 + 204);
	// lhz r27,206(r31)
	ctx.r27.u64 = PPC_LOAD_U16(ctx.r31.u32 + 206);
	// b 0x83b66cf4
	goto loc_83B66CF4;
loc_83B66CE8:
	// lhz r29,196(r31)
	ctx.r29.u64 = PPC_LOAD_U16(ctx.r31.u32 + 196);
	// lhz r28,198(r31)
	ctx.r28.u64 = PPC_LOAD_U16(ctx.r31.u32 + 198);
	// lhz r27,200(r31)
	ctx.r27.u64 = PPC_LOAD_U16(ctx.r31.u32 + 200);
loc_83B66CF4:
	// lwz r11,220(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 220);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x83b66d04
	if (cr6.eq) goto loc_83B66D04;
	// sth r17,64(r31)
	PPC_STORE_U16(ctx.r31.u32 + 64, ctx.r17.u16);
loc_83B66D04:
	// lwz r10,216(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 216);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// ble cr6,0x83b66de4
	if (!cr6.gt) goto loc_83B66DE4;
	// lwz r9,68(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// lwz r8,76(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// subf. r11,r9,r8
	ctx.r11.s64 = ctx.r8.s64 - ctx.r9.s64;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble 0x83b66d50
	if (!cr0.gt) goto loc_83B66D50;
	// cmpw cr6,r10,r8
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, xer);
	// blt cr6,0x83b66d50
	if (cr6.lt) goto loc_83B66D50;
	// subf r8,r9,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r9.s64;
	// twllei r11,0
	// rotlwi r10,r8,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r8.u32, 1);
	// divw r7,r8,r11
	ctx.r7.s32 = PPCDivide(ctx.r8.s32, ctx.r11.s32);
	// addi r6,r10,-1
	ctx.r6.s64 = ctx.r10.s64 + -1;
	// mullw r10,r7,r11
	ctx.r10.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r11.s32);
	// subf r10,r10,r8
	ctx.r10.s64 = ctx.r8.s64 - ctx.r10.s64;
	// andc r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 & ~ctx.r6.u64;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// twlgei r11,-1
loc_83B66D50:
	// lbz r9,9(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 9);
	// mr r11,r17
	ctx.r11.u64 = ctx.r17.u64;
	// stw r10,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r10.u32);
	// extsb. r10,r9
	ctx.r10.s64 = ctx.r9.s8;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// ble 0x83b66d8c
	if (!cr0.gt) goto loc_83B66D8C;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r10,r31,128
	ctx.r10.s64 = ctx.r31.s64 + 128;
	// lfs f0,9008(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
loc_83B66D70:
	// stfs f0,4(r10)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stfsu f0,8(r10)
	ea = 8 + ctx.r10.u32;
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ea, temp.u32);
	ctx.r10.u32 = ea;
	// lbz r9,9(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 9);
	// extsb r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, xer);
	// blt cr6,0x83b66d70
	if (cr6.lt) goto loc_83B66D70;
loc_83B66D8C:
	// extsh. r30,r27
	ctx.r30.s64 = ctx.r27.s16;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// beq 0x83b66ddc
	if (cr0.eq) goto loc_83B66DDC;
	// lis r11,-32203
	ctx.r11.s64 = -2110455808;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r4,r11,-24708
	ctx.r4.s64 = ctx.r11.s64 + -24708;
	// bl 0x831ea3f0
	ctx.lr = 0x83B66DA4;
	sub_831EA3F0(ctx, base);
	// lwz r11,216(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 216);
	// lbz r10,9(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 9);
	// srawi r11,r11,5
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1F) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 5;
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// mullw. r11,r11,r10
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble 0x83b66ddc
	if (!cr0.gt) goto loc_83B66DDC;
	// extsh r10,r28
	ctx.r10.s64 = ctx.r28.s16;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
loc_83B66DC8:
	// extsh r11,r29
	ctx.r11.s64 = ctx.r29.s16;
	// mullw r11,r11,r10
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// extsh r29,r11
	ctx.r29.s64 = ctx.r11.s16;
	// bdnz 0x83b66dc8
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83B66DC8;
loc_83B66DDC:
	// stw r17,216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 216, ctx.r17.u32);
	// b 0x83b66de8
	goto loc_83B66DE8;
loc_83B66DE4:
	// stw r17,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r17.u32);
loc_83B66DE8:
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x83a7cfa0
	ctx.lr = 0x83B66DFC;
	sub_83A7CFA0(ctx, base);
	// mr r30,r17
	ctx.r30.u64 = ctx.r17.u64;
	// cmpwi cr6,r26,0
	cr6.compare<int32_t>(ctx.r26.s32, 0, xer);
	// ble cr6,0x83b66e5c
	if (!cr6.gt) goto loc_83B66E5C;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r29,r31,40
	ctx.r29.s64 = ctx.r31.s64 + 40;
	// lfs f31,21704(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 21704);
	ctx.f31.f64 = double(temp.f32);
loc_83B66E14:
	// lha r10,-14(r29)
	ctx.r10.s64 = int16_t(PPC_LOAD_U16(ctx.r29.u32 + -14));
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lhau r11,2(r29)
	ea = 2 + ctx.r29.u32;
	ctx.r11.s64 = int16_t(PPC_LOAD_U16(ea));
	ctx.r29.u32 = ea;
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// lfd f13,96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// std r10,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// lfd f0,88(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f1,f0,f31
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// fmuls f2,f13,f31
	ctx.f2.f64 = double(float(ctx.f13.f64 * ctx.f31.f64));
	// bl 0x83a7d040
	ctx.lr = 0x83B66E50;
	sub_83A7D040(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r30,r26
	cr6.compare<int32_t>(ctx.r30.s32, ctx.r26.s32, xer);
	// blt cr6,0x83b66e14
	if (cr6.lt) goto loc_83B66E14;
loc_83B66E5C:
	// lha r4,24(r31)
	ctx.r4.s64 = int16_t(PPC_LOAD_U16(ctx.r31.u32 + 24));
	// lwz r5,12(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x83a7d060
	ctx.lr = 0x83B66E6C;
	sub_83A7D060(ctx, base);
	// cmpw cr6,r25,r19
	cr6.compare<int32_t>(ctx.r25.s32, ctx.r19.s32, xer);
	// stw r17,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r17.u32);
	// ble cr6,0x83b66e88
	if (!cr6.gt) goto loc_83B66E88;
	// subf r11,r19,r25
	ctx.r11.s64 = ctx.r25.s64 - ctx.r19.s64;
	// stw r11,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r11.u32);
	// stw r19,0(r16)
	PPC_STORE_U32(ctx.r16.u32 + 0, ctx.r19.u32);
	// b 0x83b67038
	goto loc_83B67038;
loc_83B66E88:
	// stw r25,0(r16)
	PPC_STORE_U32(ctx.r16.u32 + 0, ctx.r25.u32);
	// b 0x83b67038
	goto loc_83B67038;
loc_83B66E90:
	// cmpwi cr6,r27,32
	cr6.compare<int32_t>(ctx.r27.s32, 32, xer);
	// blt cr6,0x83b67038
	if (cr6.lt) goto loc_83B67038;
	// lha r10,64(r31)
	ctx.r10.s64 = int16_t(PPC_LOAD_U16(ctx.r31.u32 + 64));
	// lwz r11,120(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// cmpwi r10,0
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x83b66eb0
	if (!cr0.eq) goto loc_83B66EB0;
	// lwz r8,16(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// b 0x83b66eb4
	goto loc_83B66EB4;
loc_83B66EB0:
	// lwz r8,76(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
loc_83B66EB4:
	// subf r21,r11,r8
	ctx.r21.s64 = ctx.r8.s64 - ctx.r11.s64;
	// mulli r30,r23,18
	ctx.r30.s64 = ctx.r23.s64 * 18;
	// cmpw cr6,r27,r21
	cr6.compare<int32_t>(ctx.r27.s32, ctx.r21.s32, xer);
	// mr r25,r27
	ctx.r25.u64 = ctx.r27.u64;
	// blt cr6,0x83b66ecc
	if (cr6.lt) goto loc_83B66ECC;
	// mr r25,r21
	ctx.r25.u64 = ctx.r21.u64;
loc_83B66ECC:
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x83b66f38
	if (cr6.eq) goto loc_83B66F38;
	// lwz r10,68(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// mullw r11,r11,r30
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r30.s32);
	// srawi r11,r11,5
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1F) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 5;
	// addze. r11,r11
	temp.s64 = ctx.r11.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble 0x83b66f24
	if (!cr0.gt) goto loc_83B66F24;
	// add r10,r19,r24
	ctx.r10.u64 = ctx.r19.u64 + ctx.r24.u64;
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, xer);
	// bge cr6,0x83b66f38
	if (!cr6.lt) goto loc_83B66F38;
	// cmpw cr6,r19,r11
	cr6.compare<int32_t>(ctx.r19.s32, ctx.r11.s32, xer);
	// blt cr6,0x83b66f04
	if (cr6.lt) goto loc_83B66F04;
	// mr r19,r11
	ctx.r19.u64 = ctx.r11.u64;
loc_83B66F04:
	// subf r11,r19,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r19.s64;
	// cmpw cr6,r24,r11
	cr6.compare<int32_t>(ctx.r24.s32, ctx.r11.s32, xer);
	// blt cr6,0x83b66f14
	if (cr6.lt) goto loc_83B66F14;
	// mr r24,r11
	ctx.r24.u64 = ctx.r11.u64;
loc_83B66F14:
	// cmpwi cr6,r24,0
	cr6.compare<int32_t>(ctx.r24.s32, 0, xer);
	// bgt cr6,0x83b66f38
	if (cr6.gt) goto loc_83B66F38;
	// mr r24,r17
	ctx.r24.u64 = ctx.r17.u64;
	// b 0x83b66f38
	goto loc_83B66F38;
loc_83B66F24:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x83b66f38
	if (!cr6.eq) goto loc_83B66F38;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83b66980
	ctx.lr = 0x83B66F34;
	sub_83B66980(ctx, base);
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_83B66F38:
	// cmpw cr6,r19,r30
	cr6.compare<int32_t>(ctx.r19.s32, ctx.r30.s32, xer);
	// blt cr6,0x83b66f4c
	if (cr6.lt) goto loc_83B66F4C;
	// mr r6,r19
	ctx.r6.u64 = ctx.r19.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// b 0x83b66fb8
	goto loc_83B66FB8;
loc_83B66F4C:
	// add r11,r19,r24
	ctx.r11.u64 = ctx.r19.u64 + ctx.r24.u64;
	// cmpw cr6,r11,r30
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r30.s32, xer);
	// blt cr6,0x83b66fdc
	if (cr6.lt) goto loc_83B66FDC;
	// lwz r29,212(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 212);
	// lwz r28,208(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 208);
	// cmpw cr6,r29,r19
	cr6.compare<int32_t>(ctx.r29.s32, ctx.r19.s32, xer);
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// blt cr6,0x83b66f70
	if (cr6.lt) goto loc_83B66F70;
	// mr r30,r19
	ctx.r30.u64 = ctx.r19.u64;
loc_83B66F70:
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// ble cr6,0x83b66f88
	if (!cr6.gt) goto loc_83B66F88;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x831ce980
	ctx.lr = 0x83B66F88;
	sub_831CE980(ctx, base);
loc_83B66F88:
	// subf r11,r30,r29
	ctx.r11.s64 = ctx.r29.s64 - ctx.r30.s64;
	// cmpw cr6,r11,r24
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r24.s32, xer);
	// blt cr6,0x83b66f98
	if (cr6.lt) goto loc_83B66F98;
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
loc_83B66F98:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble cr6,0x83b66fb0
	if (!cr6.gt) goto loc_83B66FB0;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// add r3,r30,r28
	ctx.r3.u64 = ctx.r30.u64 + ctx.r28.u64;
	// bl 0x831ce980
	ctx.lr = 0x83B66FB0;
	sub_831CE980(ctx, base);
loc_83B66FB0:
	// lwz r6,212(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 212);
	// lwz r5,208(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 208);
loc_83B66FB8:
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r9,r22
	ctx.r9.u64 = ctx.r22.u64;
	// mr r8,r23
	ctx.r8.u64 = ctx.r23.u64;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// bl 0x83a7cca8
	ctx.lr = 0x83B66FD4;
	sub_83A7CCA8(ctx, base);
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
loc_83B66FDC:
	// lwz r11,120(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// cmpw cr6,r29,r21
	cr6.compare<int32_t>(ctx.r29.s32, ctx.r21.s32, xer);
	// bge cr6,0x83b66ff4
	if (!cr6.lt) goto loc_83B66FF4;
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// stw r11,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r11.u32);
	// b 0x83b67030
	goto loc_83B67030;
loc_83B66FF4:
	// lhz r10,64(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 64);
	// add r11,r21,r11
	ctx.r11.u64 = ctx.r21.u64 + ctx.r11.u64;
	// mr r29,r21
	ctx.r29.u64 = ctx.r21.u64;
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r11,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r11.u32);
	// bne 0x83b67018
	if (!cr0.eq) goto loc_83B67018;
	// addi r9,r9,18
	ctx.r9.s64 = ctx.r9.s64 + 18;
	// stb r17,9(r31)
	PPC_STORE_U8(ctx.r31.u32 + 9, ctx.r17.u8);
	// b 0x83b67020
	goto loc_83B67020;
loc_83B67018:
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// stw r11,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r11.u32);
loc_83B67020:
	// add r11,r19,r24
	ctx.r11.u64 = ctx.r19.u64 + ctx.r24.u64;
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, xer);
	// ble cr6,0x83b67030
	if (!cr6.gt) goto loc_83B67030;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
loc_83B67030:
	// stw r29,0(r18)
	PPC_STORE_U32(ctx.r18.u32 + 0, ctx.r29.u32);
	// stw r9,0(r16)
	PPC_STORE_U32(ctx.r16.u32 + 0, ctx.r9.u32);
loc_83B67038:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83B6703C:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// lfd f31,-144(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -144);
	// b 0x831cdb08
	__restgprlr_16(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B67048"))) PPC_WEAK_FUNC(sub_83B67048);
PPC_FUNC_IMPL(__imp__sub_83B67048) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31738
	ctx.r10.s64 = -2079981568;
	// lwz r11,-340(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -340);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,-340(r10)
	PPC_STORE_U32(ctx.r10.u32 + -340, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83B6705C"))) PPC_WEAK_FUNC(sub_83B6705C);
PPC_FUNC_IMPL(__imp__sub_83B6705C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B67060"))) PPC_WEAK_FUNC(sub_83B67060);
PPC_FUNC_IMPL(__imp__sub_83B67060) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31738
	ctx.r10.s64 = -2079981568;
	// lwz r11,-340(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -340);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,-340(r10)
	PPC_STORE_U32(ctx.r10.u32 + -340, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83B67074"))) PPC_WEAK_FUNC(sub_83B67074);
PPC_FUNC_IMPL(__imp__sub_83B67074) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B67078"))) PPC_WEAK_FUNC(sub_83B67078);
PPC_FUNC_IMPL(__imp__sub_83B67078) {
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
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x832d21f0
	ctx.lr = 0x83B6708C;
	sub_832D21F0(ctx, base);
	// ld r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// li r11,10000
	ctx.r11.s64 = 10000;
	// mulli r10,r10,9975
	ctx.r10.s64 = ctx.r10.s64 * 9975;
	// divd r3,r10,r11
	ctx.r3.s64 = PPCDivide(ctx.r10.s64, ctx.r11.s64);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83B670AC"))) PPC_WEAK_FUNC(sub_83B670AC);
PPC_FUNC_IMPL(__imp__sub_83B670AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B670B0"))) PPC_WEAK_FUNC(sub_83B670B0);
PPC_FUNC_IMPL(__imp__sub_83B670B0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmpld cr6,r4,r3
	cr6.compare<uint64_t>(ctx.r4.u64, ctx.r3.u64, xer);
	// subf r3,r3,r4
	ctx.r3.s64 = ctx.r4.s64 - ctx.r3.s64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83B670BC"))) PPC_WEAK_FUNC(sub_83B670BC);
PPC_FUNC_IMPL(__imp__sub_83B670BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B670C0"))) PPC_WEAK_FUNC(sub_83B670C0);
PPC_FUNC_IMPL(__imp__sub_83B670C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// li r11,16
	ctx.r11.s64 = 16;
	// rlwinm r10,r3,3,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0x8;
	// rlwinm r8,r3,0,28,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xE;
	// ori r9,r10,5
	ctx.r9.u64 = ctx.r10.u64 | 5;
	// ori r8,r8,1
	ctx.r8.u64 = ctx.r8.u64 | 1;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// rlwinm r11,r3,28,28,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 28) & 0xF;
	// li r10,0
	ctx.r10.s64 = 0;
loc_83B670E4:
	// mullw r11,r11,r9
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r9.s32);
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// addi r7,r1,-304
	ctx.r7.s64 = ctx.r1.s64 + -304;
	// clrlwi r11,r11,28
	ctx.r11.u64 = ctx.r11.u32 & 0xF;
	// stbx r11,r10,r7
	PPC_STORE_U8(ctx.r10.u32 + ctx.r7.u32, ctx.r11.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// bdnz 0x83b670e4
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83B670E4;
	// addi r11,r1,-304
	ctx.r11.s64 = ctx.r1.s64 + -304;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r1,-272
	ctx.r3.s64 = ctx.r1.s64 + -272;
	// subf r4,r11,r4
	ctx.r4.s64 = ctx.r4.s64 - ctx.r11.s64;
loc_83B67110:
	// addi r10,r1,-304
	ctx.r10.s64 = ctx.r1.s64 + -304;
	// li r11,16
	ctx.r11.s64 = 16;
	// add r9,r6,r10
	ctx.r9.u64 = ctx.r6.u64 + ctx.r10.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// lbzx r11,r4,r9
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + ctx.r9.u32);
	// rlwinm r8,r11,3,28,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0x8;
	// rlwinm r7,r11,0,28,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xE;
	// ori r8,r8,5
	ctx.r8.u64 = ctx.r8.u64 | 5;
	// ori r7,r7,1
	ctx.r7.u64 = ctx.r7.u64 | 1;
	// rlwinm r11,r11,28,4,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
loc_83B6713C:
	// mullw r11,r11,r8
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r8.s32);
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// addi r31,r1,-288
	ctx.r31.s64 = ctx.r1.s64 + -288;
	// clrlwi r11,r11,28
	ctx.r11.u64 = ctx.r11.u32 & 0xF;
	// stbx r11,r10,r31
	PPC_STORE_U8(ctx.r10.u32 + ctx.r31.u32, ctx.r11.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// bdnz 0x83b6713c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83B6713C;
	// li r10,16
	ctx.r10.s64 = 16;
	// lbz r9,0(r9)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// li r11,0
	ctx.r11.s64 = 0;
	// rotlwi r9,r9,4
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_83B6716C:
	// addi r10,r1,-288
	ctx.r10.s64 = ctx.r1.s64 + -288;
	// lbzx r10,r11,r10
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// stbx r10,r3,r11
	PPC_STORE_U8(ctx.r3.u32 + ctx.r11.u32, ctx.r10.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x83b6716c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83B6716C;
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// cmpwi cr6,r6,16
	cr6.compare<int32_t>(ctx.r6.s32, 16, xer);
	// blt cr6,0x83b67110
	if (cr6.lt) goto loc_83B67110;
	// li r10,256
	ctx.r10.s64 = 256;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r8,r5
	ctx.r8.u64 = ctx.r5.u64;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_83B671A8:
	// addi r11,r11,17
	ctx.r11.s64 = ctx.r11.s64 + 17;
	// addi r10,r1,-272
	ctx.r10.s64 = ctx.r1.s64 + -272;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lbzx r10,r11,r10
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// mr. r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x83b671cc
	if (cr0.eq) goto loc_83B671CC;
	// cmplwi cr6,r9,255
	cr6.compare<uint32_t>(ctx.r9.u32, 255, xer);
	// beq cr6,0x83b671cc
	if (cr6.eq) goto loc_83B671CC;
	// stbu r10,1(r8)
	ea = 1 + ctx.r8.u32;
	PPC_STORE_U8(ea, ctx.r10.u8);
	ctx.r8.u32 = ea;
loc_83B671CC:
	// bdnz 0x83b671a8
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83B671A8;
	// li r11,255
	ctx.r11.s64 = 255;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r11,255(r5)
	PPC_STORE_U8(ctx.r5.u32 + 255, ctx.r11.u8);
	// stb r10,0(r5)
	PPC_STORE_U8(ctx.r5.u32 + 0, ctx.r10.u8);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83B671E8"))) PPC_WEAK_FUNC(sub_83B671E8);
PPC_FUNC_IMPL(__imp__sub_83B671E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83B671F0;
	__savegprlr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r9,7
	ctx.r9.s64 = 7;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// addi r11,r3,-1
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// li r10,0
	ctx.r10.s64 = 0;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_83B67208:
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// clrlwi r8,r11,24
	ctx.r8.u64 = ctx.r11.u32 & 0xFF;
	// rldicl r11,r11,56,8
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u64, 56) & 0xFFFFFFFFFFFFFF;
	// stbx r8,r10,r9
	PPC_STORE_U8(ctx.r10.u32 + ctx.r9.u32, ctx.r8.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// bdnz 0x83b67208
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83B67208;
	// lbz r10,81(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lbz r9,83(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 83);
	// lbz r8,82(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 82);
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// lbz r7,84(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 84);
	// mr r30,r9
	ctx.r30.u64 = ctx.r9.u64;
	// lbz r6,85(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 85);
	// mr r29,r8
	ctx.r29.u64 = ctx.r8.u64;
	// lbz r11,86(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 86);
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// stb r10,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r10.u8);
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
	// stb r9,102(r1)
	PPC_STORE_U8(ctx.r1.u32 + 102, ctx.r9.u8);
	// xor r9,r3,r11
	ctx.r9.u64 = ctx.r3.u64 ^ ctx.r11.u64;
	// stb r8,99(r1)
	PPC_STORE_U8(ctx.r1.u32 + 99, ctx.r8.u8);
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// stb r7,105(r1)
	PPC_STORE_U8(ctx.r1.u32 + 105, ctx.r7.u8);
	// xor r8,r8,r30
	ctx.r8.u64 = ctx.r8.u64 ^ ctx.r30.u64;
	// stb r6,108(r1)
	PPC_STORE_U8(ctx.r1.u32 + 108, ctx.r6.u8);
	// xor r7,r7,r30
	ctx.r7.u64 = ctx.r7.u64 ^ ctx.r30.u64;
	// xor r6,r6,r28
	ctx.r6.u64 = ctx.r6.u64 ^ ctx.r28.u64;
	// stb r11,111(r1)
	PPC_STORE_U8(ctx.r1.u32 + 111, ctx.r11.u8);
	// xor r11,r29,r3
	ctx.r11.u64 = ctx.r29.u64 ^ ctx.r3.u64;
	// lbz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	// clrlwi r8,r8,24
	ctx.r8.u64 = ctx.r8.u32 & 0xFF;
	// stb r11,100(r1)
	PPC_STORE_U8(ctx.r1.u32 + 100, ctx.r11.u8);
	// clrlwi r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	// stb r9,97(r1)
	PPC_STORE_U8(ctx.r1.u32 + 97, ctx.r9.u8);
	// clrlwi r6,r6,24
	ctx.r6.u64 = ctx.r6.u32 & 0xFF;
	// stb r8,98(r1)
	PPC_STORE_U8(ctx.r1.u32 + 98, ctx.r8.u8);
	// xor r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 ^ ctx.r31.u64;
	// stb r7,101(r1)
	PPC_STORE_U8(ctx.r1.u32 + 101, ctx.r7.u8);
	// stb r8,103(r1)
	PPC_STORE_U8(ctx.r1.u32 + 103, ctx.r8.u8);
	// stb r6,104(r1)
	PPC_STORE_U8(ctx.r1.u32 + 104, ctx.r6.u8);
	// stb r7,106(r1)
	PPC_STORE_U8(ctx.r1.u32 + 106, ctx.r7.u8);
	// stb r10,107(r1)
	PPC_STORE_U8(ctx.r1.u32 + 107, ctx.r10.u8);
	// stb r6,109(r1)
	PPC_STORE_U8(ctx.r1.u32 + 109, ctx.r6.u8);
	// stb r9,110(r1)
	PPC_STORE_U8(ctx.r1.u32 + 110, ctx.r9.u8);
	// bl 0x83b670c0
	ctx.lr = 0x83B672C4;
	sub_83B670C0(ctx, base);
	// li r3,56
	ctx.r3.s64 = 56;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B672D0"))) PPC_WEAK_FUNC(sub_83B672D0);
PPC_FUNC_IMPL(__imp__sub_83B672D0) {
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
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// cmpldi cr6,r4,0
	cr6.compare<uint64_t>(ctx.r4.u64, 0, xer);
	// bne cr6,0x83b6730c
	if (!cr6.eq) goto loc_83B6730C;
	// li r10,256
	ctx.r10.s64 = 256;
	// li r11,0
	ctx.r11.s64 = 0;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_83B672F8:
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// stbx r10,r11,r5
	PPC_STORE_U8(ctx.r11.u32 + ctx.r5.u32, ctx.r10.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x83b672f8
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83B672F8;
	// b 0x83b673ac
	goto loc_83B673AC;
loc_83B6730C:
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// blt cr6,0x83b67390
	if (cr6.lt) goto loc_83B67390;
	// beq cr6,0x83b67334
	if (cr6.eq) goto loc_83B67334;
	// cmplwi cr6,r11,56
	cr6.compare<uint32_t>(ctx.r11.u32, 56, xer);
	// beq cr6,0x83b67328
	if (cr6.eq) goto loc_83B67328;
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x83b673b0
	goto loc_83B673B0;
loc_83B67328:
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// bl 0x83b671e8
	ctx.lr = 0x83B67330;
	sub_83B671E8(ctx, base);
	// b 0x83b673b0
	goto loc_83B673B0;
loc_83B67334:
	// li r10,254
	ctx.r10.s64 = 254;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,1
	ctx.r9.s64 = 1;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_83B67344:
	// mulli r11,r11,13
	ctx.r11.s64 = ctx.r11.s64 * 13;
	// addi r11,r11,11
	ctx.r11.s64 = ctx.r11.s64 + 11;
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x83b6735c
	if (cr0.eq) goto loc_83B6735C;
	// cmpwi cr6,r11,255
	cr6.compare<int32_t>(ctx.r11.s32, 255, xer);
	// bne cr6,0x83b67368
	if (!cr6.eq) goto loc_83B67368;
loc_83B6735C:
	// mulli r11,r11,13
	ctx.r11.s64 = ctx.r11.s64 * 13;
	// addi r11,r11,11
	ctx.r11.s64 = ctx.r11.s64 + 11;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_83B67368:
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// stbx r10,r9,r5
	PPC_STORE_U8(ctx.r9.u32 + ctx.r5.u32, ctx.r10.u8);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// bdnz 0x83b67344
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83B67344;
	// li r11,255
	ctx.r11.s64 = 255;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r11,255(r5)
	PPC_STORE_U8(ctx.r5.u32 + 255, ctx.r11.u8);
	// stb r10,0(r5)
	PPC_STORE_U8(ctx.r5.u32 + 0, ctx.r10.u8);
	// b 0x83b673b0
	goto loc_83B673B0;
loc_83B67390:
	// li r10,256
	ctx.r10.s64 = 256;
	// li r11,0
	ctx.r11.s64 = 0;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_83B6739C:
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// stbx r10,r11,r5
	PPC_STORE_U8(ctx.r11.u32 + ctx.r5.u32, ctx.r10.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x83b6739c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83B6739C;
loc_83B673AC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83B673B0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83B673C0"))) PPC_WEAK_FUNC(sub_83B673C0);
PPC_FUNC_IMPL(__imp__sub_83B673C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31738
	ctx.r10.s64 = -2079981568;
	// lis r11,-32203
	ctx.r11.s64 = -2110455808;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r11,r11,-24496
	ctx.r11.s64 = ctx.r11.s64 + -24496;
	// stw r11,-336(r10)
	PPC_STORE_U32(ctx.r10.u32 + -336, ctx.r11.u32);
	// bl 0x83a77b68
	ctx.lr = 0x83B673E4;
	sub_83A77B68(ctx, base);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,16
	ctx.r4.s64 = 16;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83a77b78
	ctx.lr = 0x83B673F4;
	sub_83A77B78(ctx, base);
	// lis r11,1883
	ctx.r11.s64 = 123404288;
	// lis r10,5530
	ctx.r10.s64 = 362414080;
	// lis r9,7954
	ctx.r9.s64 = 521273344;
	// lis r8,1353
	ctx.r8.s64 = 88670208;
	// ori r11,r11,52501
	ctx.r11.u64 = ctx.r11.u64 | 52501;
	// ori r10,r10,21989
	ctx.r10.u64 = ctx.r10.u64 | 21989;
	// ori r9,r9,15285
	ctx.r9.u64 = ctx.r9.u64 | 15285;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// ori r8,r8,4915
	ctx.r8.u64 = ctx.r8.u64 | 4915;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// stw r9,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// stw r8,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r8.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83B67434"))) PPC_WEAK_FUNC(sub_83B67434);
PPC_FUNC_IMPL(__imp__sub_83B67434) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B67438"))) PPC_WEAK_FUNC(sub_83B67438);
PPC_FUNC_IMPL(__imp__sub_83B67438) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// rlwinm r9,r11,11,0,20
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 11) & 0xFFFFF800;
	// lwz r8,4(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r7,r10,21,11,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 21) & 0x1FFFFF;
	// lwz r6,8(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// xor r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 ^ ctx.r11.u64;
	// xor r9,r7,r11
	ctx.r9.u64 = ctx.r7.u64 ^ ctx.r11.u64;
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// rlwinm r9,r9,24,8,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xFFFFFF;
	// stw r6,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r6.u32);
	// xor r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 ^ ctx.r11.u64;
	// xor r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83B6747C"))) PPC_WEAK_FUNC(sub_83B6747C);
PPC_FUNC_IMPL(__imp__sub_83B6747C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B67480"))) PPC_WEAK_FUNC(sub_83B67480);
PPC_FUNC_IMPL(__imp__sub_83B67480) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r4,2,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0x3;
	// lis r10,27655
	ctx.r10.s64 = 1812398080;
	// xor r9,r11,r4
	ctx.r9.u64 = ctx.r11.u64 ^ ctx.r4.u64;
	// ori r11,r10,35173
	ctx.r11.u64 = ctx.r10.u64 | 35173;
	// mullw r10,r9,r11
	ctx.r10.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// rlwinm r9,r10,2,30,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0x3;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// xor r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 ^ ctx.r10.u64;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// mullw r11,r10,r11
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r10,r11,2,30,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x3;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// xor r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// mullw r11,r11,r9
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r9.s32);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// rlwinm r10,r11,2,30,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x3;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// xor r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// mullw r11,r11,r9
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r9.s32);
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83B674E0"))) PPC_WEAK_FUNC(sub_83B674E0);
PPC_FUNC_IMPL(__imp__sub_83B674E0) {
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
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83B67530"))) PPC_WEAK_FUNC(sub_83B67530);
PPC_FUNC_IMPL(__imp__sub_83B67530) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r4,1
	cr6.compare<uint32_t>(ctx.r4.u32, 1, xer);
	// blt cr6,0x83b67570
	if (cr6.lt) goto loc_83B67570;
	// beq cr6,0x83b67568
	if (cr6.eq) goto loc_83B67568;
	// cmplwi cr6,r4,3
	cr6.compare<uint32_t>(ctx.r4.u32, 3, xer);
	// blt cr6,0x83b67560
	if (cr6.lt) goto loc_83B67560;
	// beq cr6,0x83b67558
	if (cr6.eq) goto loc_83B67558;
	// cmplwi cr6,r4,5
	cr6.compare<uint32_t>(ctx.r4.u32, 5, xer);
	// bge cr6,0x83b67584
	if (!cr6.lt) goto loc_83B67584;
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// b 0x83b67574
	goto loc_83B67574;
loc_83B67558:
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// b 0x83b67574
	goto loc_83B67574;
loc_83B67560:
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// b 0x83b67574
	goto loc_83B67574;
loc_83B67568:
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// b 0x83b67574
	goto loc_83B67574;
loc_83B67570:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_83B67574:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83b67584
	if (cr6.eq) goto loc_83B67584;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// blr 
	return;
loc_83B67584:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83B6758C"))) PPC_WEAK_FUNC(sub_83B6758C);
PPC_FUNC_IMPL(__imp__sub_83B6758C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B67590"))) PPC_WEAK_FUNC(sub_83B67590);
PPC_FUNC_IMPL(__imp__sub_83B67590) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r4,1
	cr6.compare<uint32_t>(ctx.r4.u32, 1, xer);
	// blt cr6,0x83b675d8
	if (cr6.lt) goto loc_83B675D8;
	// beq cr6,0x83b675d0
	if (cr6.eq) goto loc_83B675D0;
	// cmplwi cr6,r4,3
	cr6.compare<uint32_t>(ctx.r4.u32, 3, xer);
	// blt cr6,0x83b675c8
	if (cr6.lt) goto loc_83B675C8;
	// beq cr6,0x83b675c0
	if (cr6.eq) goto loc_83B675C0;
	// cmplwi cr6,r4,5
	cr6.compare<uint32_t>(ctx.r4.u32, 5, xer);
	// blt cr6,0x83b675b8
	if (cr6.lt) goto loc_83B675B8;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_83B675B8:
	// lwz r3,56(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// blr 
	return;
loc_83B675C0:
	// lwz r3,44(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// blr 
	return;
loc_83B675C8:
	// lwz r3,32(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// blr 
	return;
loc_83B675D0:
	// lwz r3,20(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// blr 
	return;
loc_83B675D8:
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83B675E0"))) PPC_WEAK_FUNC(sub_83B675E0);
PPC_FUNC_IMPL(__imp__sub_83B675E0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r4,1
	cr6.compare<uint32_t>(ctx.r4.u32, 1, xer);
	// blt cr6,0x83b67618
	if (cr6.lt) goto loc_83B67618;
	// beq cr6,0x83b67618
	if (cr6.eq) goto loc_83B67618;
	// cmplwi cr6,r4,3
	cr6.compare<uint32_t>(ctx.r4.u32, 3, xer);
	// blt cr6,0x83b67610
	if (cr6.lt) goto loc_83B67610;
	// beq cr6,0x83b67608
	if (cr6.eq) goto loc_83B67608;
	// cmplwi cr6,r4,5
	cr6.compare<uint32_t>(ctx.r4.u32, 5, xer);
	// bge cr6,0x83b67618
	if (!cr6.lt) goto loc_83B67618;
	// lwz r3,68(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// blr 
	return;
loc_83B67608:
	// lwz r3,64(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// blr 
	return;
loc_83B67610:
	// lwz r3,60(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// blr 
	return;
loc_83B67618:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83B67620"))) PPC_WEAK_FUNC(sub_83B67620);
PPC_FUNC_IMPL(__imp__sub_83B67620) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,68(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// lwz r9,64(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// lwz r10,60(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83B67638"))) PPC_WEAK_FUNC(sub_83B67638);
PPC_FUNC_IMPL(__imp__sub_83B67638) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r4,1
	cr6.compare<uint32_t>(ctx.r4.u32, 1, xer);
	// blt cr6,0x83b67674
	if (cr6.lt) goto loc_83B67674;
	// bne cr6,0x83b676bc
	if (!cr6.eq) goto loc_83B676BC;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83b676bc
	if (cr6.eq) goto loc_83B676BC;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// bne cr6,0x83b6766c
	if (!cr6.eq) goto loc_83B6766C;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// b 0x83b676a0
	goto loc_83B676A0;
loc_83B6766C:
	// stw r10,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r10.u32);
	// b 0x83b676a0
	goto loc_83B676A0;
loc_83B67674:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83b676bc
	if (cr6.eq) goto loc_83B676BC;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// bne cr6,0x83b6769c
	if (!cr6.eq) goto loc_83B6769C;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// b 0x83b676a0
	goto loc_83B676A0;
loc_83B6769C:
	// stw r10,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r10.u32);
loc_83B676A0:
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// bne cr6,0x83b676c4
	if (!cr6.eq) goto loc_83B676C4;
loc_83B676BC:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_83B676C4:
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83B676CC"))) PPC_WEAK_FUNC(sub_83B676CC);
PPC_FUNC_IMPL(__imp__sub_83B676CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B676D0"))) PPC_WEAK_FUNC(sub_83B676D0);
PPC_FUNC_IMPL(__imp__sub_83B676D0) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r4,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// stw r5,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r5.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// stw r3,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83B676F4"))) PPC_WEAK_FUNC(sub_83B676F4);
PPC_FUNC_IMPL(__imp__sub_83B676F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B676F8"))) PPC_WEAK_FUNC(sub_83B676F8);
PPC_FUNC_IMPL(__imp__sub_83B676F8) {
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
	// mr r7,r4
	ctx.r7.u64 = ctx.r4.u64;
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// cmplwi cr6,r7,1
	cr6.compare<uint32_t>(ctx.r7.u32, 1, xer);
	// blt cr6,0x83b67750
	if (cr6.lt) goto loc_83B67750;
	// beq cr6,0x83b67748
	if (cr6.eq) goto loc_83B67748;
	// cmplwi cr6,r7,3
	cr6.compare<uint32_t>(ctx.r7.u32, 3, xer);
	// blt cr6,0x83b67740
	if (cr6.lt) goto loc_83B67740;
	// beq cr6,0x83b67738
	if (cr6.eq) goto loc_83B67738;
	// cmplwi cr6,r7,5
	cr6.compare<uint32_t>(ctx.r7.u32, 5, xer);
	// bge cr6,0x83b67760
	if (!cr6.lt) goto loc_83B67760;
	// addi r3,r3,48
	ctx.r3.s64 = ctx.r3.s64 + 48;
	// b 0x83b67754
	goto loc_83B67754;
loc_83B67738:
	// addi r3,r8,36
	ctx.r3.s64 = ctx.r8.s64 + 36;
	// b 0x83b67754
	goto loc_83B67754;
loc_83B67740:
	// addi r3,r8,24
	ctx.r3.s64 = ctx.r8.s64 + 24;
	// b 0x83b67754
	goto loc_83B67754;
loc_83B67748:
	// addi r3,r8,12
	ctx.r3.s64 = ctx.r8.s64 + 12;
	// b 0x83b67754
	goto loc_83B67754;
loc_83B67750:
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
loc_83B67754:
	// bl 0x83b67638
	ctx.lr = 0x83B67758;
	sub_83B67638(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83b67768
	if (!cr6.eq) goto loc_83B67768;
loc_83B67760:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83b677d0
	goto loc_83B677D0;
loc_83B67768:
	// cmplwi cr6,r7,2
	cr6.compare<uint32_t>(ctx.r7.u32, 2, xer);
	// blt cr6,0x83b677d0
	if (cr6.lt) goto loc_83B677D0;
	// beq cr6,0x83b677b8
	if (cr6.eq) goto loc_83B677B8;
	// cmplwi cr6,r7,4
	cr6.compare<uint32_t>(ctx.r7.u32, 4, xer);
	// blt cr6,0x83b6779c
	if (cr6.lt) goto loc_83B6779C;
	// bne cr6,0x83b67760
	if (!cr6.eq) goto loc_83B67760;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,68(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 68);
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,68(r8)
	PPC_STORE_U32(ctx.r8.u32 + 68, ctx.r11.u32);
	// b 0x83b677d0
	goto loc_83B677D0;
loc_83B6779C:
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,64(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 64);
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,64(r8)
	PPC_STORE_U32(ctx.r8.u32 + 64, ctx.r11.u32);
	// b 0x83b677d0
	goto loc_83B677D0;
loc_83B677B8:
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,60(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 60);
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,60(r8)
	PPC_STORE_U32(ctx.r8.u32 + 60, ctx.r11.u32);
loc_83B677D0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83B677E0"))) PPC_WEAK_FUNC(sub_83B677E0);
PPC_FUNC_IMPL(__imp__sub_83B677E0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r5,1
	cr6.compare<uint32_t>(ctx.r5.u32, 1, xer);
	// blt cr6,0x83b67968
	if (cr6.lt) goto loc_83B67968;
	// beq cr6,0x83b67920
	if (cr6.eq) goto loc_83B67920;
	// cmplwi cr6,r5,3
	cr6.compare<uint32_t>(ctx.r5.u32, 3, xer);
	// blt cr6,0x83b678c0
	if (cr6.lt) goto loc_83B678C0;
	// beq cr6,0x83b67860
	if (cr6.eq) goto loc_83B67860;
	// cmplwi cr6,r5,5
	cr6.compare<uint32_t>(ctx.r5.u32, 5, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// lwz r9,52(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// addi r11,r3,48
	ctx.r11.s64 = ctx.r3.s64 + 48;
	// addi r10,r4,20
	ctx.r10.s64 = ctx.r4.s64 + 20;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x83b6781c
	if (!cr6.eq) goto loc_83B6781C;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x83b67834
	goto loc_83B67834;
loc_83B6781C:
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r9,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r9.u32);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r10.u32);
loc_83B67834:
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// lwz r9,8(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// subf r11,r11,r9
	ctx.r11.s64 = ctx.r9.s64 - ctx.r11.s64;
	// lwz r10,68(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,68(r3)
	PPC_STORE_U32(ctx.r3.u32 + 68, ctx.r11.u32);
	// blr 
	return;
loc_83B67860:
	// lwz r9,40(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// addi r11,r3,36
	ctx.r11.s64 = ctx.r3.s64 + 36;
	// addi r10,r4,20
	ctx.r10.s64 = ctx.r4.s64 + 20;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x83b6787c
	if (!cr6.eq) goto loc_83B6787C;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x83b67894
	goto loc_83B67894;
loc_83B6787C:
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r9,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r9.u32);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r10.u32);
loc_83B67894:
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// lwz r9,8(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// lwz r10,64(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// subf r11,r11,r9
	ctx.r11.s64 = ctx.r9.s64 - ctx.r11.s64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, ctx.r11.u32);
	// blr 
	return;
loc_83B678C0:
	// lwz r9,28(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// addi r11,r3,24
	ctx.r11.s64 = ctx.r3.s64 + 24;
	// addi r10,r4,20
	ctx.r10.s64 = ctx.r4.s64 + 20;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x83b678dc
	if (!cr6.eq) goto loc_83B678DC;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x83b678f4
	goto loc_83B678F4;
loc_83B678DC:
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r9,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r9.u32);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r10.u32);
loc_83B678F4:
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// lwz r9,8(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// lwz r10,60(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// subf r11,r11,r9
	ctx.r11.s64 = ctx.r9.s64 - ctx.r11.s64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r11.u32);
	// blr 
	return;
loc_83B67920:
	// lwz r9,16(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// addi r11,r3,12
	ctx.r11.s64 = ctx.r3.s64 + 12;
	// addi r10,r4,20
	ctx.r10.s64 = ctx.r4.s64 + 20;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x83b6793c
	if (!cr6.eq) goto loc_83B6793C;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x83b67954
	goto loc_83B67954;
loc_83B6793C:
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r9,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r9.u32);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r10.u32);
loc_83B67954:
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// blr 
	return;
loc_83B67968:
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r11,r4,20
	ctx.r11.s64 = ctx.r4.s64 + 20;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83b67980
	if (!cr6.eq) goto loc_83B67980;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x83b67998
	goto loc_83B67998;
loc_83B67980:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
loc_83B67998:
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83B679AC"))) PPC_WEAK_FUNC(sub_83B679AC);
PPC_FUNC_IMPL(__imp__sub_83B679AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B679B0"))) PPC_WEAK_FUNC(sub_83B679B0);
PPC_FUNC_IMPL(__imp__sub_83B679B0) {
	PPC_FUNC_PROLOGUE();
	// li r5,0
	ctx.r5.s64 = 0;
	// b 0x83b676f8
	sub_83B676F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B679B8"))) PPC_WEAK_FUNC(sub_83B679B8);
PPC_FUNC_IMPL(__imp__sub_83B679B8) {
	PPC_FUNC_PROLOGUE();
	// li r5,1
	ctx.r5.s64 = 1;
	// b 0x83b676f8
	sub_83B676F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B679C0"))) PPC_WEAK_FUNC(sub_83B679C0);
PPC_FUNC_IMPL(__imp__sub_83B679C0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r4,1
	cr6.compare<uint32_t>(ctx.r4.u32, 1, xer);
	// blt cr6,0x83b67a18
	if (cr6.lt) goto loc_83B67A18;
	// beq cr6,0x83b67a10
	if (cr6.eq) goto loc_83B67A10;
	// cmplwi cr6,r4,3
	cr6.compare<uint32_t>(ctx.r4.u32, 3, xer);
	// blt cr6,0x83b67a08
	if (cr6.lt) goto loc_83B67A08;
	// beq cr6,0x83b67a00
	if (cr6.eq) goto loc_83B67A00;
	// cmplwi cr6,r4,5
	cr6.compare<uint32_t>(ctx.r4.u32, 5, xer);
	// blt cr6,0x83b679e8
	if (cr6.lt) goto loc_83B679E8;
loc_83B679E0:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_83B679E8:
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
loc_83B679EC:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83b679e0
	if (cr6.eq) goto loc_83B679E0;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// blr 
	return;
loc_83B67A00:
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// b 0x83b679ec
	goto loc_83B679EC;
loc_83B67A08:
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// b 0x83b679ec
	goto loc_83B679EC;
loc_83B67A10:
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// b 0x83b679ec
	goto loc_83B679EC;
loc_83B67A18:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x83b679ec
	goto loc_83B679EC;
}

__attribute__((alias("__imp__sub_83B67A20"))) PPC_WEAK_FUNC(sub_83B67A20);
PPC_FUNC_IMPL(__imp__sub_83B67A20) {
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
	// addi r8,r3,48
	ctx.r8.s64 = ctx.r3.s64 + 48;
	// li r7,0
	ctx.r7.s64 = 0;
loc_83B67A34:
	// lwz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83b67aa8
	if (cr6.eq) goto loc_83B67AA8;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r10,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r10.u32);
	// bne cr6,0x83b67a58
	if (!cr6.eq) goto loc_83B67A58;
	// stw r7,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r7.u32);
	// b 0x83b67a5c
	goto loc_83B67A5C;
loc_83B67A58:
	// stw r7,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r7.u32);
loc_83B67A5C:
	// stw r7,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r7.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// stw r7,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r7.u32);
	// lwz r10,8(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r10.u32);
	// beq cr6,0x83b67aa8
	if (cr6.eq) goto loc_83B67AA8;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x83b67aa8
	if (cr6.eq) goto loc_83B67AA8;
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r9,8(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// lwz r10,68(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,68(r3)
	PPC_STORE_U32(ctx.r3.u32 + 68, ctx.r11.u32);
	// bl 0x83b677e0
	ctx.lr = 0x83B67AA4;
	sub_83B677E0(ctx, base);
	// b 0x83b67a34
	goto loc_83B67A34;
loc_83B67AA8:
	// addi r8,r3,36
	ctx.r8.s64 = ctx.r3.s64 + 36;
loc_83B67AAC:
	// lwz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83b67b20
	if (cr6.eq) goto loc_83B67B20;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r10,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r10.u32);
	// bne cr6,0x83b67ad0
	if (!cr6.eq) goto loc_83B67AD0;
	// stw r7,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r7.u32);
	// b 0x83b67ad4
	goto loc_83B67AD4;
loc_83B67AD0:
	// stw r7,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r7.u32);
loc_83B67AD4:
	// stw r7,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r7.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// stw r7,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r7.u32);
	// lwz r10,8(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r10.u32);
	// beq cr6,0x83b67b20
	if (cr6.eq) goto loc_83B67B20;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x83b67b20
	if (cr6.eq) goto loc_83B67B20;
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r9,8(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// lwz r10,64(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, ctx.r11.u32);
	// bl 0x83b677e0
	ctx.lr = 0x83B67B1C;
	sub_83B677E0(ctx, base);
	// b 0x83b67aac
	goto loc_83B67AAC;
loc_83B67B20:
	// addi r8,r3,24
	ctx.r8.s64 = ctx.r3.s64 + 24;
loc_83B67B24:
	// lwz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83b67b98
	if (cr6.eq) goto loc_83B67B98;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r10,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r10.u32);
	// bne cr6,0x83b67b48
	if (!cr6.eq) goto loc_83B67B48;
	// stw r7,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r7.u32);
	// b 0x83b67b4c
	goto loc_83B67B4C;
loc_83B67B48:
	// stw r7,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r7.u32);
loc_83B67B4C:
	// stw r7,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r7.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// stw r7,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r7.u32);
	// lwz r10,8(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r10.u32);
	// beq cr6,0x83b67b98
	if (cr6.eq) goto loc_83B67B98;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x83b67b98
	if (cr6.eq) goto loc_83B67B98;
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r9,8(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// lwz r10,60(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r11.u32);
	// bl 0x83b677e0
	ctx.lr = 0x83B67B94;
	sub_83B677E0(ctx, base);
	// b 0x83b67b24
	goto loc_83B67B24;
loc_83B67B98:
	// addi r8,r3,12
	ctx.r8.s64 = ctx.r3.s64 + 12;
loc_83B67B9C:
	// lwz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83b67bf8
	if (cr6.eq) goto loc_83B67BF8;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r10,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r10.u32);
	// bne cr6,0x83b67bc0
	if (!cr6.eq) goto loc_83B67BC0;
	// stw r7,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r7.u32);
	// b 0x83b67bc4
	goto loc_83B67BC4;
loc_83B67BC0:
	// stw r7,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r7.u32);
loc_83B67BC4:
	// stw r7,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r7.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// stw r7,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r7.u32);
	// lwz r10,8(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r10.u32);
	// beq cr6,0x83b67bf8
	if (cr6.eq) goto loc_83B67BF8;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x83b67bf8
	if (cr6.eq) goto loc_83B67BF8;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x83b677e0
	ctx.lr = 0x83B67BF4;
	sub_83B677E0(ctx, base);
	// b 0x83b67b9c
	goto loc_83B67B9C;
loc_83B67BF8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83B67C08"))) PPC_WEAK_FUNC(sub_83B67C08);
PPC_FUNC_IMPL(__imp__sub_83B67C08) {
	PPC_FUNC_PROLOGUE();
	// fsqrts f1,f1
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(sqrt(ctx.f1.f64)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83B67C10"))) PPC_WEAK_FUNC(sub_83B67C10);
PPC_FUNC_IMPL(__imp__sub_83B67C10) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// fmuls f9,f1,f1
	ctx.fpscr.disableFlushMode();
	ctx.f9.f64 = double(float(ctx.f1.f64 * ctx.f1.f64));
	// lis r11,-32203
	ctx.r11.s64 = -2110455808;
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// lis r9,-32203
	ctx.r9.s64 = -2110455808;
	// lis r8,-32237
	ctx.r8.s64 = -2112684032;
	// lis r7,-32254
	ctx.r7.s64 = -2113798144;
	// lfs f13,-24304(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -24304);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,-26260(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -26260);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,-24308(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -24308);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,21212(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 21212);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,-7404(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -7404);
	ctx.f10.f64 = double(temp.f32);
	// fnmsubs f13,f9,f13,f0
	ctx.f13.f64 = double(float(-(ctx.f9.f64 * ctx.f13.f64 - ctx.f0.f64)));
	// fmuls f13,f13,f9
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f9.f64));
	// fnmsubs f13,f13,f12,f0
	ctx.f13.f64 = double(float(-(ctx.f13.f64 * ctx.f12.f64 - ctx.f0.f64)));
	// fmuls f13,f13,f9
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f9.f64));
	// fnmsubs f13,f13,f11,f0
	ctx.f13.f64 = double(float(-(ctx.f13.f64 * ctx.f11.f64 - ctx.f0.f64)));
	// fmuls f13,f13,f9
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f9.f64));
	// fnmsubs f0,f13,f10,f0
	ctx.f0.f64 = double(float(-(ctx.f13.f64 * ctx.f10.f64 - ctx.f0.f64)));
	// fmuls f1,f0,f1
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f1.f64));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83B67C60"))) PPC_WEAK_FUNC(sub_83B67C60);
PPC_FUNC_IMPL(__imp__sub_83B67C60) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// fmuls f9,f1,f1
	ctx.fpscr.disableFlushMode();
	ctx.f9.f64 = double(float(ctx.f1.f64 * ctx.f1.f64));
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// lfs f13,-18208(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -18208);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,-26260(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -26260);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,14604(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 14604);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,11784(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 11784);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,-24912(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -24912);
	ctx.f10.f64 = double(temp.f32);
	// fnmsubs f13,f9,f13,f0
	ctx.f13.f64 = double(float(-(ctx.f9.f64 * ctx.f13.f64 - ctx.f0.f64)));
	// fmuls f13,f13,f9
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f9.f64));
	// fnmsubs f13,f13,f12,f0
	ctx.f13.f64 = double(float(-(ctx.f13.f64 * ctx.f12.f64 - ctx.f0.f64)));
	// fmuls f13,f13,f9
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f9.f64));
	// fnmsubs f13,f13,f11,f0
	ctx.f13.f64 = double(float(-(ctx.f13.f64 * ctx.f11.f64 - ctx.f0.f64)));
	// fmuls f13,f13,f9
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f9.f64));
	// fnmsubs f1,f13,f10,f0
	ctx.f1.f64 = double(float(-(ctx.f13.f64 * ctx.f10.f64 - ctx.f0.f64)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83B67CAC"))) PPC_WEAK_FUNC(sub_83B67CAC);
PPC_FUNC_IMPL(__imp__sub_83B67CAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B67CB0"))) PPC_WEAK_FUNC(sub_83B67CB0);
PPC_FUNC_IMPL(__imp__sub_83B67CB0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister temp{};
	// stfs f2,-16(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// lwz r11,-16(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// stfs f1,-16(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// lwz r9,-16(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// stfs f3,-16(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// lwz r10,-16(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// fsubs f0,f1,f3
	ctx.f0.f64 = double(float(ctx.f1.f64 - ctx.f3.f64));
	// stfs f0,-16(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// lwz r8,-16(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// fsubs f0,f2,f1
	ctx.f0.f64 = double(float(ctx.f2.f64 - ctx.f1.f64));
	// stfs f0,-16(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// lwz r7,-16(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// xor r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 ^ ctx.r9.u64;
	// srawi r7,r7,31
	xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7FFFFFFF) != 0);
	ctx.r7.s64 = ctx.r7.s32 >> 31;
	// srawi r8,r8,31
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7FFFFFFF) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 31;
	// and r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 & ctx.r7.u64;
	// xor r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 ^ ctx.r10.u64;
	// xor r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 ^ ctx.r11.u64;
	// and r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 & ctx.r8.u64;
	// xor r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// stw r11,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r11.u32);
	// lfs f1,-16(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83B67D0C"))) PPC_WEAK_FUNC(sub_83B67D0C);
PPC_FUNC_IMPL(__imp__sub_83B67D0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B67D10"))) PPC_WEAK_FUNC(sub_83B67D10);
PPC_FUNC_IMPL(__imp__sub_83B67D10) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister temp{};
	// fsubs f13,f1,f2
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64 - ctx.f2.f64));
	// fsubs f0,f3,f2
	ctx.f0.f64 = double(float(ctx.f3.f64 - ctx.f2.f64));
	// stfs f0,-16(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// lwz r11,-16(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// fdivs f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 / ctx.f0.f64));
	// fctiwz f12,f12
	ctx.f12.s64 = (ctx.f12.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f12.f64));
	// stfd f12,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f12.u64);
	// lwa r10,-12(r1)
	ctx.r10.s64 = int32_t(PPC_LOAD_U32(ctx.r1.u32 + -12));
	// std r10,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r10.u64);
	// lfd f12,-16(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// fnmsubs f0,f12,f0,f13
	ctx.f0.f64 = double(float(-(ctx.f12.f64 * ctx.f0.f64 - ctx.f13.f64)));
	// stfs f0,-16(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// lwz r10,-16(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// srawi r10,r10,31
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFFFFFF) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 31;
	// and r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
	// stw r11,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r11.u32);
	// lfs f13,-16(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// fadds f1,f0,f2
	ctx.f1.f64 = double(float(ctx.f0.f64 + ctx.f2.f64));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83B67D68"))) PPC_WEAK_FUNC(sub_83B67D68);
PPC_FUNC_IMPL(__imp__sub_83B67D68) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister temp{};
	// stfs f1,-16(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// lwz r11,-16(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// andis. r11,r11,48896
	ctx.r11.u64 = ctx.r11.u64 & 3204448256;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// oris r11,r11,16128
	ctx.r11.u64 = ctx.r11.u64 | 1056964608;
	// stw r11,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r11.u32);
	// lfs f0,-16(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f0,f1
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f1.f64));
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f0.u64);
	// lwa r11,-12(r1)
	ctx.r11.s64 = int32_t(PPC_LOAD_U32(ctx.r1.u32 + -12));
	// std r11,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r11.u64);
	// lfd f0,-16(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f1,f0
	ctx.f1.f64 = double(float(ctx.f0.f64));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83B67DA4"))) PPC_WEAK_FUNC(sub_83B67DA4);
PPC_FUNC_IMPL(__imp__sub_83B67DA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B67DA8"))) PPC_WEAK_FUNC(sub_83B67DA8);
PPC_FUNC_IMPL(__imp__sub_83B67DA8) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lfs f29,9008(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f29.f64 = double(temp.f32);
	// fcmpu cr6,f1,f29
	cr6.compare(ctx.f1.f64, ctx.f29.f64);
	// bge cr6,0x83b67df4
	if (!cr6.lt) goto loc_83B67DF4;
	// lis r11,-32203
	ctx.r11.s64 = -2110455808;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,-24276
	ctx.r4.s64 = ctx.r11.s64 + -24276;
	// bl 0x831ea3f0
	ctx.lr = 0x83B67DEC;
	sub_831EA3F0(ctx, base);
	// fmr f31,f29
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f29.f64;
	// b 0x83b67e18
	goto loc_83B67E18;
loc_83B67DF4:
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lfs f30,-26260(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -26260);
	ctx.f30.f64 = double(temp.f32);
	// fcmpu cr6,f31,f30
	cr6.compare(ctx.f31.f64, ctx.f30.f64);
	// ble cr6,0x83b67e18
	if (!cr6.gt) goto loc_83B67E18;
	// lis r11,-32203
	ctx.r11.s64 = -2110455808;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,-24288
	ctx.r4.s64 = ctx.r11.s64 + -24288;
	// bl 0x831ea3f0
	ctx.lr = 0x83B67E14;
	sub_831EA3F0(ctx, base);
	// fmr f31,f30
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f30.f64;
loc_83B67E18:
	// cmplwi cr6,r31,1
	cr6.compare<uint32_t>(ctx.r31.u32, 1, xer);
	// blt cr6,0x83b67e48
	if (cr6.lt) goto loc_83B67E48;
	// beq cr6,0x83b67ecc
	if (cr6.eq) goto loc_83B67ECC;
	// cmplwi cr6,r31,3
	cr6.compare<uint32_t>(ctx.r31.u32, 3, xer);
	// blt cr6,0x83b67eb8
	if (cr6.lt) goto loc_83B67EB8;
	// beq cr6,0x83b67e9c
	if (cr6.eq) goto loc_83B67E9C;
	// cmplwi cr6,r31,5
	cr6.compare<uint32_t>(ctx.r31.u32, 5, xer);
	// blt cr6,0x83b67e6c
	if (cr6.lt) goto loc_83B67E6C;
	// lis r11,-32203
	ctx.r11.s64 = -2110455808;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,-24300
	ctx.r4.s64 = ctx.r11.s64 + -24300;
	// bl 0x831ea3f0
	ctx.lr = 0x83B67E48;
	sub_831EA3F0(ctx, base);
loc_83B67E48:
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
loc_83B67E4C:
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
loc_83B67E6C:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f13,-24912(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -24912);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// fsubs f0,f31,f13
	ctx.f0.f64 = double(float(ctx.f31.f64 - ctx.f13.f64));
	// fcmpu cr6,f0,f29
	cr6.compare(ctx.f0.f64, ctx.f29.f64);
	// fmuls f12,f0,f0
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// lfs f0,-10804(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -10804);
	ctx.f0.f64 = double(temp.f32);
	// bgt cr6,0x83b67e94
	if (cr6.gt) goto loc_83B67E94;
	// fnmsubs f1,f12,f0,f13
	ctx.f1.f64 = double(float(-(ctx.f12.f64 * ctx.f0.f64 - ctx.f13.f64)));
	// b 0x83b67e4c
	goto loc_83B67E4C;
loc_83B67E94:
	// fmadds f1,f12,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f12.f64 * ctx.f0.f64 + ctx.f13.f64));
	// b 0x83b67e4c
	goto loc_83B67E4C;
loc_83B67E9C:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lfs f0,-10804(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -10804);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,21708(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 21708);
	ctx.f13.f64 = double(temp.f32);
	// fnmsubs f0,f31,f0,f13
	ctx.f0.f64 = double(float(-(ctx.f31.f64 * ctx.f0.f64 - ctx.f13.f64)));
	// fmuls f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// b 0x83b67ec4
	goto loc_83B67EC4;
loc_83B67EB8:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f0,-10804(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -10804);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f31.f64));
loc_83B67EC4:
	// fmuls f1,f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// b 0x83b67e4c
	goto loc_83B67E4C;
loc_83B67ECC:
	// fmuls f1,f31,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f31.f64 * ctx.f31.f64));
	// b 0x83b67e4c
	goto loc_83B67E4C;
}

__attribute__((alias("__imp__sub_83B67ED4"))) PPC_WEAK_FUNC(sub_83B67ED4);
PPC_FUNC_IMPL(__imp__sub_83B67ED4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B67ED8"))) PPC_WEAK_FUNC(sub_83B67ED8);
PPC_FUNC_IMPL(__imp__sub_83B67ED8) {
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
	// addi r12,r1,-16
	ctx.r12.s64 = ctx.r1.s64 + -16;
	// bl 0x831ce774
	ctx.lr = 0x83B67EEC;
	__savefpr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// fmr f30,f2
	ctx.f30.f64 = ctx.f2.f64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lfs f27,9008(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f27.f64 = double(temp.f32);
	// lfs f29,-26260(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -26260);
	ctx.f29.f64 = double(temp.f32);
	// fcmpu cr6,f1,f27
	cr6.compare(ctx.f1.f64, ctx.f27.f64);
	// bge cr6,0x83b67f2c
	if (!cr6.lt) goto loc_83B67F2C;
	// lis r11,-32203
	ctx.r11.s64 = -2110455808;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,-24216
	ctx.r4.s64 = ctx.r11.s64 + -24216;
	// bl 0x831ea3f0
	ctx.lr = 0x83B67F24;
	sub_831EA3F0(ctx, base);
	// fmr f31,f27
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f27.f64;
	// b 0x83b67f48
	goto loc_83B67F48;
loc_83B67F2C:
	// fcmpu cr6,f31,f29
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f31.f64, ctx.f29.f64);
	// ble cr6,0x83b67f48
	if (!cr6.gt) goto loc_83B67F48;
	// lis r11,-32203
	ctx.r11.s64 = -2110455808;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,-24228
	ctx.r4.s64 = ctx.r11.s64 + -24228;
	// bl 0x831ea3f0
	ctx.lr = 0x83B67F44;
	sub_831EA3F0(ctx, base);
	// fmr f31,f29
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f29.f64;
loc_83B67F48:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// fcmpu cr6,f30,f27
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f30.f64, ctx.f27.f64);
	// lfs f28,-10804(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -10804);
	ctx.f28.f64 = double(temp.f32);
	// bge cr6,0x83b67f70
	if (!cr6.lt) goto loc_83B67F70;
	// lis r11,-32203
	ctx.r11.s64 = -2110455808;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,-24240
	ctx.r4.s64 = ctx.r11.s64 + -24240;
	// bl 0x831ea3f0
	ctx.lr = 0x83B67F68;
	sub_831EA3F0(ctx, base);
	// fmr f30,f27
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f27.f64;
	// b 0x83b67f8c
	goto loc_83B67F8C;
loc_83B67F70:
	// fcmpu cr6,f30,f28
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f30.f64, ctx.f28.f64);
	// ble cr6,0x83b67f8c
	if (!cr6.gt) goto loc_83B67F8C;
	// lis r11,-32203
	ctx.r11.s64 = -2110455808;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,-24252
	ctx.r4.s64 = ctx.r11.s64 + -24252;
	// bl 0x831ea3f0
	ctx.lr = 0x83B67F88;
	sub_831EA3F0(ctx, base);
	// fmr f30,f28
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f28.f64;
loc_83B67F8C:
	// cmplwi cr6,r31,1
	cr6.compare<uint32_t>(ctx.r31.u32, 1, xer);
	// blt cr6,0x83b67fbc
	if (cr6.lt) goto loc_83B67FBC;
	// beq cr6,0x83b68104
	if (cr6.eq) goto loc_83B68104;
	// cmplwi cr6,r31,3
	cr6.compare<uint32_t>(ctx.r31.u32, 3, xer);
	// blt cr6,0x83b680dc
	if (cr6.lt) goto loc_83B680DC;
	// beq cr6,0x83b68060
	if (cr6.eq) goto loc_83B68060;
	// cmplwi cr6,r31,5
	cr6.compare<uint32_t>(ctx.r31.u32, 5, xer);
	// blt cr6,0x83b67fdc
	if (cr6.lt) goto loc_83B67FDC;
	// lis r11,-32203
	ctx.r11.s64 = -2110455808;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,-24264
	ctx.r4.s64 = ctx.r11.s64 + -24264;
	// bl 0x831ea3f0
	ctx.lr = 0x83B67FBC;
	sub_831EA3F0(ctx, base);
loc_83B67FBC:
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
loc_83B67FC0:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// addi r12,r1,-16
	ctx.r12.s64 = ctx.r1.s64 + -16;
	// bl 0x831ce7c0
	ctx.lr = 0x83B67FCC;
	__restfpr_27(ctx, base);
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_83B67FDC:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// fcmpu cr6,f30,f29
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f30.f64, ctx.f29.f64);
	// lfs f0,-24912(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -24912);
	ctx.f0.f64 = double(temp.f32);
	// bgt cr6,0x83b68020
	if (cr6.gt) goto loc_83B68020;
	// fcmpu cr6,f31,f0
	cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// bgt cr6,0x83b68008
	if (cr6.gt) goto loc_83B68008;
	// fadds f0,f30,f29
	ctx.f0.f64 = double(float(ctx.f30.f64 + ctx.f29.f64));
	// fmuls f13,f31,f30
	ctx.f13.f64 = double(float(ctx.f31.f64 * ctx.f30.f64));
	// fnmsubs f0,f13,f28,f0
	ctx.f0.f64 = double(float(-(ctx.f13.f64 * ctx.f28.f64 - ctx.f0.f64)));
loc_83B68000:
	// fmuls f1,f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// b 0x83b67fc0
	goto loc_83B67FC0;
loc_83B68008:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f0,21708(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 21708);
	ctx.f0.f64 = double(temp.f32);
	// fmsubs f0,f31,f28,f0
	ctx.f0.f64 = double(float(ctx.f31.f64 * ctx.f28.f64 - ctx.f0.f64));
	// fmadds f0,f0,f30,f29
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f30.f64 + ctx.f29.f64));
	// fmadds f1,f0,f31,f30
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f31.f64 + ctx.f30.f64));
	// b 0x83b67fc0
	goto loc_83B67FC0;
loc_83B68020:
	// fsubs f12,f31,f29
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f31.f64 - ctx.f29.f64));
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// fcmpu cr6,f31,f0
	cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// lfs f13,-4460(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -4460);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f12,f31
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// fmuls f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// bgt cr6,0x83b6804c
	if (cr6.gt) goto loc_83B6804C;
	// fnmsubs f12,f13,f30,f13
	ctx.f12.f64 = double(float(-(ctx.f13.f64 * ctx.f30.f64 - ctx.f13.f64)));
	// fsubs f12,f12,f30
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f30.f64));
	// fmuls f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// b 0x83b68128
	goto loc_83B68128;
loc_83B6804C:
	// fsubs f12,f13,f30
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f13.f64 - ctx.f30.f64));
	// fnmsubs f12,f13,f30,f12
	ctx.f12.f64 = double(float(-(ctx.f13.f64 * ctx.f30.f64 - ctx.f12.f64)));
	// fmuls f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// fnmsubs f1,f13,f0,f29
	ctx.f1.f64 = double(float(-(ctx.f13.f64 * ctx.f0.f64 - ctx.f29.f64)));
	// b 0x83b67fc0
	goto loc_83B67FC0;
loc_83B68060:
	// fcmpu cr6,f30,f29
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f30.f64, ctx.f29.f64);
	// bgt cr6,0x83b68084
	if (cr6.gt) goto loc_83B68084;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// fsubs f13,f29,f30
	ctx.f13.f64 = double(float(ctx.f29.f64 - ctx.f30.f64));
	// lfs f0,21708(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 21708);
	ctx.f0.f64 = double(temp.f32);
	// fnmsubs f0,f31,f28,f0
	ctx.f0.f64 = double(float(-(ctx.f31.f64 * ctx.f28.f64 - ctx.f0.f64)));
	// fmuls f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// fmadds f0,f0,f30,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f30.f64 + ctx.f13.f64));
	// b 0x83b68000
	goto loc_83B68000;
loc_83B68084:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lfs f0,-24912(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -24912);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// fcmpu cr6,f31,f0
	cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// bgt cr6,0x83b680b8
	if (cr6.gt) goto loc_83B680B8;
	// fsubs f12,f0,f31
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f31.f64));
	// lfs f0,-26940(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -26940);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,-11408(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -11408);
	ctx.f13.f64 = double(temp.f32);
	// fnmsubs f0,f30,f0,f13
	ctx.f0.f64 = double(float(-(ctx.f30.f64 * ctx.f0.f64 - ctx.f13.f64)));
	// fmadds f0,f0,f12,f28
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f12.f64 + ctx.f28.f64));
	// fmuls f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// b 0x83b68000
	goto loc_83B68000;
loc_83B680B8:
	// fsubs f11,f29,f31
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f29.f64 - ctx.f31.f64));
	// lfs f13,-26940(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -26940);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,-11408(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -11408);
	ctx.f12.f64 = double(temp.f32);
	// fnmsubs f13,f30,f13,f12
	ctx.f13.f64 = double(float(-(ctx.f30.f64 * ctx.f13.f64 - ctx.f12.f64)));
	// fsubs f0,f0,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f11.f64));
	// fmadds f0,f13,f0,f28
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64 + ctx.f28.f64));
	// fmuls f0,f0,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// fnmsubs f1,f0,f11,f29
	ctx.f1.f64 = double(float(-(ctx.f0.f64 * ctx.f11.f64 - ctx.f29.f64)));
	// b 0x83b67fc0
	goto loc_83B67FC0;
loc_83B680DC:
	// fcmpu cr6,f30,f29
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f30.f64, ctx.f29.f64);
	// bgt cr6,0x83b680f0
	if (cr6.gt) goto loc_83B680F0;
	// fsubs f0,f29,f31
	ctx.f0.f64 = double(float(ctx.f29.f64 - ctx.f31.f64));
	// fmadds f0,f0,f30,f29
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f30.f64 + ctx.f29.f64));
	// b 0x83b68000
	goto loc_83B68000;
loc_83B680F0:
	// fsubs f0,f28,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f28.f64 - ctx.f31.f64));
	// fmuls f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// fsubs f13,f29,f0
	ctx.f13.f64 = double(float(ctx.f29.f64 - ctx.f0.f64));
	// fmadds f13,f13,f30,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f30.f64 + ctx.f0.f64));
	// b 0x83b68128
	goto loc_83B68128;
loc_83B68104:
	// fcmpu cr6,f30,f29
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f30.f64, ctx.f29.f64);
	// bgt cr6,0x83b68118
	if (cr6.gt) goto loc_83B68118;
	// fsubs f0,f29,f30
	ctx.f0.f64 = double(float(ctx.f29.f64 - ctx.f30.f64));
	// fmadds f0,f31,f30,f0
	ctx.f0.f64 = double(float(ctx.f31.f64 * ctx.f30.f64 + ctx.f0.f64));
	// b 0x83b68000
	goto loc_83B68000;
loc_83B68118:
	// fmuls f0,f31,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f31.f64 * ctx.f31.f64));
	// fsubs f13,f30,f29
	ctx.f13.f64 = double(float(ctx.f30.f64 - ctx.f29.f64));
	// fsubs f12,f28,f30
	ctx.f12.f64 = double(float(ctx.f28.f64 - ctx.f30.f64));
	// fmadds f13,f13,f0,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64 + ctx.f12.f64));
loc_83B68128:
	// fmuls f1,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// b 0x83b67fc0
	goto loc_83B67FC0;
}

__attribute__((alias("__imp__sub_83B68130"))) PPC_WEAK_FUNC(sub_83B68130);
PPC_FUNC_IMPL(__imp__sub_83B68130) {
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
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831ea798
	ctx.lr = 0x83B68150;
	sub_831EA798(ctx, base);
	// addi r10,r31,7
	ctx.r10.s64 = ctx.r31.s64 + 7;
	// li r11,0
	ctx.r11.s64 = 0;
	// rlwinm r3,r10,0,0,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFF8;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_83B6817C"))) PPC_WEAK_FUNC(sub_83B6817C);
PPC_FUNC_IMPL(__imp__sub_83B6817C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B68180"))) PPC_WEAK_FUNC(sub_83B68180);
PPC_FUNC_IMPL(__imp__sub_83B68180) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83B68188;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r30,0
	ctx.r30.s64 = 0;
loc_83B6819C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83b681f0
	if (cr6.eq) goto loc_83B681F0;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bne cr6,0x83b681bc
	if (!cr6.eq) goto loc_83B681BC;
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
loc_83B681BC:
	// stw r30,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r30.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// beq cr6,0x83b681f0
	if (cr6.eq) goto loc_83B681F0;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x83b6819c
	if (cr6.eq) goto loc_83B6819C;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r29
	ctr.u64 = ctx.r29.u64;
	// bctrl 
	ctx.lr = 0x83B681EC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x83b6819c
	goto loc_83B6819C;
loc_83B681F0:
	// li r4,12
	ctx.r4.s64 = 12;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831ea7a0
	ctx.lr = 0x83B681FC;
	sub_831EA7A0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B68204"))) PPC_WEAK_FUNC(sub_83B68204);
PPC_FUNC_IMPL(__imp__sub_83B68204) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B68208"))) PPC_WEAK_FUNC(sub_83B68208);
PPC_FUNC_IMPL(__imp__sub_83B68208) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83B68210;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831ea798
	ctx.lr = 0x83B68230;
	sub_831EA798(ctx, base);
	// addi r10,r30,7
	ctx.r10.s64 = ctx.r30.s64 + 7;
	// li r11,0
	ctx.r11.s64 = 0;
	// rlwinm r3,r10,0,0,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFF8;
	// stw r29,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r29.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83b68258
	if (!cr6.eq) goto loc_83B68258;
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// b 0x83b68264
	goto loc_83B68264;
loc_83B68258:
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r3,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r3.u32);
loc_83B68264:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B6827C"))) PPC_WEAK_FUNC(sub_83B6827C);
PPC_FUNC_IMPL(__imp__sub_83B6827C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B68280"))) PPC_WEAK_FUNC(sub_83B68280);
PPC_FUNC_IMPL(__imp__sub_83B68280) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,0(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r8,0
	ctx.r8.s64 = 0;
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// bne cr6,0x83b682b0
	if (!cr6.eq) goto loc_83B682B0;
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// bne cr6,0x83b682f4
	if (!cr6.eq) goto loc_83B682F4;
	// stw r8,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// b 0x83b682f4
	goto loc_83B682F4;
loc_83B682B0:
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq 0x83b682f4
	if (cr0.eq) goto loc_83B682F4;
loc_83B682B8:
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r9,r4
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r4.u32, xer);
	// beq cr6,0x83b682d0
	if (cr6.eq) goto loc_83B682D0;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// cmplwi r9,0
	cr0.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne 0x83b682b8
	if (!cr0.eq) goto loc_83B682B8;
loc_83B682D0:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83b682f4
	if (cr6.eq) goto loc_83B682F4;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r9,4(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r4,r9
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, xer);
	// bne cr6,0x83b682f4
	if (!cr6.eq) goto loc_83B682F4;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
loc_83B682F4:
	// stw r8,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r8.u32);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83B68308"))) PPC_WEAK_FUNC(sub_83B68308);
PPC_FUNC_IMPL(__imp__sub_83B68308) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83B68310;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,0(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// b 0x83b68338
	goto loc_83B68338;
loc_83B68324:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mtctr r29
	ctr.u64 = ctx.r29.u64;
	// bctrl 
	ctx.lr = 0x83B68334;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r31,4(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
loc_83B68338:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// bne cr6,0x83b68324
	if (!cr6.eq) goto loc_83B68324;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B68348"))) PPC_WEAK_FUNC(sub_83B68348);
PPC_FUNC_IMPL(__imp__sub_83B68348) {
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
	// cmplwi cr6,r4,16
	cr6.compare<uint32_t>(ctx.r4.u32, 16, xer);
	// bge cr6,0x83b6836c
	if (!cr6.lt) goto loc_83B6836C;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83b683ac
	goto loc_83B683AC;
loc_83B6836C:
	// lis r11,-32203
	ctx.r11.s64 = -2110455808;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r11,-24196
	ctx.r4.s64 = ctx.r11.s64 + -24196;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83b66170
	ctx.lr = 0x83B68380;
	sub_83B66170(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x83b68390
	if (!cr0.eq) goto loc_83B68390;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x83b683ac
	goto loc_83B683AC;
loc_83B68390:
	// lis r11,-32203
	ctx.r11.s64 = -2110455808;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r11,-24204
	ctx.r4.s64 = ctx.r11.s64 + -24204;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83b66170
	ctx.lr = 0x83B683A4;
	sub_83B66170(ctx, base);
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
loc_83B683AC:
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

__attribute__((alias("__imp__sub_83B683C0"))) PPC_WEAK_FUNC(sub_83B683C0);
PPC_FUNC_IMPL(__imp__sub_83B683C0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r11,11(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 11);
	// lbz r10,10(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 10);
	// rotlwi r11,r11,8
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// lbz r9,9(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 9);
	// lbz r8,8(r3)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + 8);
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// lbz r10,5(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 5);
	// lbz r7,6(r3)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r3.u32 + 6);
	// rlwinm r6,r11,8,0,23
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// mullw r11,r10,r4
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r4.s32);
	// or r9,r6,r9
	ctx.r9.u64 = ctx.r6.u64 | ctx.r9.u64;
	// cmplwi cr6,r10,2
	cr6.compare<uint32_t>(ctx.r10.u32, 2, xer);
	// rlwinm r10,r9,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFFFF00;
	// or r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 | ctx.r8.u64;
	// mullw r10,r10,r7
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r7.s32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// bne cr6,0x83b6841c
	if (!cr6.eq) goto loc_83B6841C;
	// lbz r10,17(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 17);
	// rotlwi r10,r10,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
loc_83B68410:
	// lbz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 16);
	// or r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 | ctx.r11.u64;
	// blr 
	return;
loc_83B6841C:
	// lbz r10,5(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 5);
	// cmplwi cr6,r10,4
	cr6.compare<uint32_t>(ctx.r10.u32, 4, xer);
	// bne cr6,0x83b6844c
	if (!cr6.eq) goto loc_83B6844C;
	// lbz r10,19(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 19);
	// lbz r9,18(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 18);
	// rotlwi r10,r10,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// lbz r8,17(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 17);
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// or r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 | ctx.r8.u64;
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// b 0x83b68410
	goto loc_83B68410;
loc_83B6844C:
	// cmplwi cr6,r10,8
	cr6.compare<uint32_t>(ctx.r10.u32, 8, xer);
	// bne cr6,0x83b684a8
	if (!cr6.eq) goto loc_83B684A8;
	// lbz r10,23(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 23);
	// lbz r9,22(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 22);
	// rldicr r10,r10,8,63
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 8) & 0xFFFFFFFFFFFFFFFF;
	// lbz r8,21(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 21);
	// lbz r7,20(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 20);
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// lbz r9,19(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 19);
	// lbz r6,18(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 18);
	// rldicr r10,r10,8,55
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// lbz r5,17(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 17);
	// or r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 | ctx.r8.u64;
	// rldicr r10,r10,8,55
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// or r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 | ctx.r7.u64;
	// rldicr r10,r10,8,55
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// rldicr r10,r10,8,55
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// or r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 | ctx.r6.u64;
	// rldicr r10,r10,8,55
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// or r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 | ctx.r5.u64;
	// rldicr r10,r10,8,55
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// b 0x83b68410
	goto loc_83B68410;
loc_83B684A8:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83B684B0"))) PPC_WEAK_FUNC(sub_83B684B0);
PPC_FUNC_IMPL(__imp__sub_83B684B0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lbz r11,11(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 11);
	// li r7,0
	ctx.r7.s64 = 0;
	// lbz r10,10(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 10);
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// rotlwi r11,r11,8
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// lbz r9,9(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 9);
	// lbz r8,8(r3)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + 8);
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// or r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 | ctx.r9.u64;
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// or r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 | ctx.r8.u64;
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// blt cr6,0x83b685b0
	if (cr6.lt) goto loc_83B685B0;
	// lbz r6,6(r3)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r3.u32 + 6);
	// addi r8,r3,16
	ctx.r8.s64 = ctx.r3.s64 + 16;
loc_83B684F8:
	// clrlwi r10,r7,16
	ctx.r10.u64 = ctx.r7.u32 & 0xFFFF;
	// cmplwi cr6,r6,2
	cr6.compare<uint32_t>(ctx.r6.u32, 2, xer);
	// add r11,r10,r9
	ctx.r11.u64 = ctx.r10.u64 + ctx.r9.u64;
	// srawi r11,r11,1
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// clrlwi r3,r11,16
	ctx.r3.u64 = ctx.r11.u32 & 0xFFFF;
	// bne cr6,0x83b68530
	if (!cr6.eq) goto loc_83B68530;
	// rlwinm r11,r3,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lbz r5,1(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// rotlwi r5,r5,8
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r5.u32, 8);
loc_83B68524:
	// lbz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// or r11,r5,r11
	ctx.r11.u64 = ctx.r5.u64 | ctx.r11.u64;
	// b 0x83b68568
	goto loc_83B68568;
loc_83B68530:
	// cmplwi cr6,r6,4
	cr6.compare<uint32_t>(ctx.r6.u32, 4, xer);
	// bne cr6,0x83b68564
	if (!cr6.eq) goto loc_83B68564;
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lbz r5,3(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// lbz r31,2(r11)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// rotlwi r5,r5,8
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r5.u32, 8);
	// lbz r30,1(r11)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// or r5,r5,r31
	ctx.r5.u64 = ctx.r5.u64 | ctx.r31.u64;
	// rlwinm r5,r5,8,0,23
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 8) & 0xFFFFFF00;
	// or r5,r5,r30
	ctx.r5.u64 = ctx.r5.u64 | ctx.r30.u64;
	// rlwinm r5,r5,8,0,23
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 8) & 0xFFFFFF00;
	// b 0x83b68524
	goto loc_83B68524;
loc_83B68564:
	// li r11,0
	ctx.r11.s64 = 0;
loc_83B68568:
	// subf. r11,r11,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r11.s64;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x83b685b4
	if (cr0.eq) goto loc_83B685B4;
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, xer);
	// bge cr6,0x83b685b0
	if (!cr6.lt) goto loc_83B685B0;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bge cr6,0x83b685a4
	if (!cr6.lt) goto loc_83B685A4;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83b6859c
	if (cr6.eq) goto loc_83B6859C;
	// cmplw cr6,r3,r10
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, xer);
	// beq cr6,0x83b685b0
	if (cr6.eq) goto loc_83B685B0;
	// addis r11,r3,1
	ctx.r11.s64 = ctx.r3.s64 + 65536;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// clrlwi r3,r11,16
	ctx.r3.u64 = ctx.r11.u32 & 0xFFFF;
loc_83B6859C:
	// clrlwi r9,r3,16
	ctx.r9.u64 = ctx.r3.u32 & 0xFFFF;
	// b 0x83b684f8
	goto loc_83B684F8;
loc_83B685A4:
	// addi r11,r3,1
	ctx.r11.s64 = ctx.r3.s64 + 1;
	// clrlwi r7,r11,16
	ctx.r7.u64 = ctx.r11.u32 & 0xFFFF;
	// b 0x83b684f8
	goto loc_83B684F8;
loc_83B685B0:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_83B685B4:
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83B685C0"))) PPC_WEAK_FUNC(sub_83B685C0);
PPC_FUNC_IMPL(__imp__sub_83B685C0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x83B685C8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bge cr6,0x83b685e8
	if (!cr6.lt) goto loc_83B685E8;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83b686bc
	goto loc_83B686BC;
loc_83B685E8:
	// lbz r11,13(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 13);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lbz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rotlwi r11,r11,8
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// clrlwi r30,r11,16
	ctx.r30.u64 = ctx.r11.u32 & 0xFFFF;
	// bl 0x83b683c0
	ctx.lr = 0x83B68608;
	sub_83B683C0(ctx, base);
	// addi r11,r30,-1
	ctx.r11.s64 = ctx.r30.s64 + -1;
	// addi r4,r29,1
	ctx.r4.s64 = ctx.r29.s64 + 1;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// tdllei r30,0
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// divd r10,r11,r30
	ctx.r10.s64 = PPCDivide(ctx.r11.s64, ctx.r30.s64);
	// rotldi r11,r11,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u64, 1);
	// mulld r27,r10,r30
	ctx.r27.s64 = ctx.r10.s64 * ctx.r30.s64;
	// std r27,8(r28)
	PPC_STORE_U64(ctx.r28.u32 + 8, ctx.r27.u64);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// andc r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 & ~ctx.r11.u64;
	// tdlgei r11,-1
	// bl 0x83b683c0
	ctx.lr = 0x83B68640;
	sub_83B683C0(ctx, base);
	// rotlwi r10,r3,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r3.u32, 0);
	// rotlwi r9,r27,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r27.u32, 0);
	// addi r11,r31,16
	ctx.r11.s64 = ctx.r31.s64 + 16;
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// stw r10,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r10.u32);
	// lbz r10,6(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 6);
	// cmplwi cr6,r10,2
	cr6.compare<uint32_t>(ctx.r10.u32, 2, xer);
	// bne cr6,0x83b6867c
	if (!cr6.eq) goto loc_83B6867C;
	// rlwinm r10,r29,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lbz r10,1(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// rotlwi r10,r10,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
loc_83B68670:
	// lbz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// b 0x83b686b4
	goto loc_83B686B4;
loc_83B6867C:
	// cmplwi cr6,r10,4
	cr6.compare<uint32_t>(ctx.r10.u32, 4, xer);
	// bne cr6,0x83b686b0
	if (!cr6.eq) goto loc_83B686B0;
	// rlwinm r10,r29,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lbz r10,3(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// lbz r9,2(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// rotlwi r10,r10,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// lbz r8,1(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// or r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 | ctx.r8.u64;
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// b 0x83b68670
	goto loc_83B68670;
loc_83B686B0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_83B686B4:
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// li r3,1
	ctx.r3.s64 = 1;
loc_83B686BC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B686C4"))) PPC_WEAK_FUNC(sub_83B686C4);
PPC_FUNC_IMPL(__imp__sub_83B686C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B686C8"))) PPC_WEAK_FUNC(sub_83B686C8);
PPC_FUNC_IMPL(__imp__sub_83B686C8) {
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
	// bl 0x83b68348
	ctx.lr = 0x83B686E0;
	sub_83B68348(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x83b686f0
	if (!cr0.eq) goto loc_83B686F0;
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x83b68734
	goto loc_83B68734;
loc_83B686F0:
	// lbz r11,11(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 11);
	// lbz r10,10(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 10);
	// rotlwi r11,r11,8
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// lbz r9,9(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 9);
	// lbz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 8);
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// lbz r10,6(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 6);
	// lbz r7,5(r31)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + 5);
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// or r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 | ctx.r9.u64;
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// or r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 | ctx.r8.u64;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// mullw r10,r10,r11
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// mullw r11,r7,r9
	ctx.r11.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r9.s32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
loc_83B68734:
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

__attribute__((alias("__imp__sub_83B68748"))) PPC_WEAK_FUNC(sub_83B68748);
PPC_FUNC_IMPL(__imp__sub_83B68748) {
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
	// bl 0x83b68348
	ctx.lr = 0x83B68760;
	sub_83B68348(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x83b68790
	if (cr0.eq) goto loc_83B68790;
	// lbz r11,11(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 11);
	// lbz r10,10(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 10);
	// rotlwi r11,r11,8
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// lbz r9,9(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 9);
	// lbz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 8);
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// or r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 | ctx.r9.u64;
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// or r3,r11,r8
	ctx.r3.u64 = ctx.r11.u64 | ctx.r8.u64;
loc_83B68790:
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

__attribute__((alias("__imp__sub_83B687A4"))) PPC_WEAK_FUNC(sub_83B687A4);
PPC_FUNC_IMPL(__imp__sub_83B687A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B687A8"))) PPC_WEAK_FUNC(sub_83B687A8);
PPC_FUNC_IMPL(__imp__sub_83B687A8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83B687B0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// bl 0x83b68348
	ctx.lr = 0x83B687C4;
	sub_83B68348(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x83b687dc
	if (cr0.eq) goto loc_83B687DC;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83b685c0
	ctx.lr = 0x83B687DC;
	sub_83B685C0(ctx, base);
loc_83B687DC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B687E4"))) PPC_WEAK_FUNC(sub_83B687E4);
PPC_FUNC_IMPL(__imp__sub_83B687E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B687E8"))) PPC_WEAK_FUNC(sub_83B687E8);
PPC_FUNC_IMPL(__imp__sub_83B687E8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83B687F0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// bl 0x83b68348
	ctx.lr = 0x83B68804;
	sub_83B68348(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x83b68828
	if (cr0.eq) goto loc_83B68828;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83b684b0
	ctx.lr = 0x83B68818;
	sub_83B684B0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83b685c0
	ctx.lr = 0x83B68828;
	sub_83B685C0(ctx, base);
loc_83B68828:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B68830"))) PPC_WEAK_FUNC(sub_83B68830);
PPC_FUNC_IMPL(__imp__sub_83B68830) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x83B68838;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r4,8
	ctx.r11.s64 = ctx.r4.s64 + 8;
	// clrlwi r5,r6,16
	ctx.r5.u64 = ctx.r6.u32 & 0xFFFF;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// addi r6,r4,32
	ctx.r6.s64 = ctx.r4.s64 + 32;
	// lbz r30,11(r4)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r4.u32 + 11);
	// li r31,0
	ctx.r31.s64 = 0;
	// lbz r10,10(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 10);
	// rotlwi r10,r10,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// or r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 | ctx.r30.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// lbz r10,13(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 13);
	// lbz r30,14(r4)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r4.u32 + 14);
	// lbz r29,15(r4)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r4.u32 + 15);
	// lbz r28,12(r4)
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r4.u32 + 12);
	// rotlwi r28,r28,8
	ctx.r28.u64 = __builtin_rotateleft32(ctx.r28.u32, 8);
	// or r10,r28,r10
	ctx.r10.u64 = ctx.r28.u64 | ctx.r10.u64;
	// lwz r28,8(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// or r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 | ctx.r30.u64;
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// or r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 | ctx.r29.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r10,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r10.u32);
	// lbz r10,17(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 17);
	// lbz r30,18(r4)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r4.u32 + 18);
	// lbz r29,19(r4)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r4.u32 + 19);
	// lbz r27,16(r4)
	ctx.r27.u64 = PPC_LOAD_U8(ctx.r4.u32 + 16);
	// rotlwi r27,r27,8
	ctx.r27.u64 = __builtin_rotateleft32(ctx.r27.u32, 8);
	// or r10,r27,r10
	ctx.r10.u64 = ctx.r27.u64 | ctx.r10.u64;
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// or r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 | ctx.r30.u64;
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// or r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 | ctx.r29.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r10,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// lbz r10,25(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 25);
	// lbz r30,24(r4)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r4.u32 + 24);
	// rotlwi r30,r30,8
	ctx.r30.u64 = __builtin_rotateleft32(ctx.r30.u32, 8);
	// or r10,r30,r10
	ctx.r10.u64 = ctx.r30.u64 | ctx.r10.u64;
	// sth r10,24(r3)
	PPC_STORE_U16(ctx.r3.u32 + 24, ctx.r10.u16);
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// lbz r30,27(r4)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r4.u32 + 27);
	// lbz r29,26(r4)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r4.u32 + 26);
	// rotlwi r29,r29,8
	ctx.r29.u64 = __builtin_rotateleft32(ctx.r29.u32, 8);
	// or r30,r29,r30
	ctx.r30.u64 = ctx.r29.u64 | ctx.r30.u64;
	// cmplw cr6,r10,r5
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r5.u32, xer);
	// stw r30,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r30.u32);
	// lbz r30,29(r4)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r4.u32 + 29);
	// lbz r5,28(r4)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r4.u32 + 28);
	// rotlwi r5,r5,8
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r5.u32, 8);
	// or r5,r5,r30
	ctx.r5.u64 = ctx.r5.u64 | ctx.r30.u64;
	// lbz r30,30(r4)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r4.u32 + 30);
	// lbz r4,31(r4)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r4.u32 + 31);
	// rlwinm r5,r5,8,0,23
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 8) & 0xFFFFFF00;
	// stw r8,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r8.u32);
	// stw r28,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r28.u32);
	// or r5,r5,r30
	ctx.r5.u64 = ctx.r5.u64 | ctx.r30.u64;
	// stw r7,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r7.u32);
	// stw r9,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r9.u32);
	// rlwinm r5,r5,8,0,23
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 8) & 0xFFFFFF00;
	// or r8,r5,r4
	ctx.r8.u64 = ctx.r5.u64 | ctx.r4.u64;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// ble cr6,0x83b68954
	if (!cr6.gt) goto loc_83B68954;
	// lis r11,-32203
	ctx.r11.s64 = -2110455808;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,-24184
	ctx.r4.s64 = ctx.r11.s64 + -24184;
	// bl 0x831ea3f0
	ctx.lr = 0x83B6894C;
	sub_831EA3F0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83b68a1c
	goto loc_83B68A1C;
loc_83B68954:
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83b68a1c
	if (cr6.eq) goto loc_83B68A1C;
	// lis r7,0
	ctx.r7.s64 = 0;
	// lis r8,-31767
	ctx.r8.s64 = -2081882112;
	// li r10,0
	ctx.r10.s64 = 0;
	// ori r4,r7,65535
	ctx.r4.u64 = ctx.r7.u64 | 65535;
	// addi r5,r8,-6344
	ctx.r5.s64 = ctx.r8.s64 + -6344;
loc_83B68974:
	// lbz r8,0(r6)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r6.u32 + 0);
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// lwz r7,32(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// clrlwi r30,r8,28
	ctx.r30.u64 = ctx.r8.u32 & 0xF;
	// rlwinm. r29,r8,0,27,27
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// stbx r30,r7,r9
	PPC_STORE_U8(ctx.r7.u32 + ctx.r9.u32, ctx.r30.u8);
	// beq 0x83b68994
	if (cr0.eq) goto loc_83B68994;
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
loc_83B68994:
	// rlwinm. r7,r8,0,26,26
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x20;
	cr0.compare<int32_t>(ctx.r7.s32, 0, xer);
	// beq 0x83b689c8
	if (cr0.eq) goto loc_83B689C8;
	// lwz r8,40(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// subf r7,r11,r6
	ctx.r7.s64 = ctx.r6.s64 - ctx.r11.s64;
	// sthx r7,r10,r8
	PPC_STORE_U16(ctx.r10.u32 + ctx.r8.u32, ctx.r7.u16);
	// lwz r7,36(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// lwz r8,32(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lbzx r8,r8,r9
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r9.u32);
	// rotlwi r8,r8,1
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r8.u32, 1);
	// lhzx r8,r8,r5
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r8.u32 + ctx.r5.u32);
	// add r6,r8,r6
	ctx.r6.u64 = ctx.r8.u64 + ctx.r6.u64;
	// sthx r4,r10,r7
	PPC_STORE_U16(ctx.r10.u32 + ctx.r7.u32, ctx.r4.u16);
	// b 0x83b68a08
	goto loc_83B68A08;
loc_83B689C8:
	// lwz r7,40(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// li r30,0
	ctx.r30.s64 = 0;
	// rlwinm. r8,r8,0,25,25
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x40;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// sthx r30,r10,r7
	PPC_STORE_U16(ctx.r10.u32 + ctx.r7.u32, ctx.r30.u16);
	// lwz r8,36(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// beq 0x83b68a04
	if (cr0.eq) goto loc_83B68A04;
	// sthx r31,r10,r8
	PPC_STORE_U16(ctx.r10.u32 + ctx.r8.u32, ctx.r31.u16);
	// clrlwi r7,r31,16
	ctx.r7.u64 = ctx.r31.u32 & 0xFFFF;
	// lwz r8,32(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lbzx r8,r8,r9
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r9.u32);
	// rotlwi r8,r8,1
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r8.u32, 1);
	// lhzx r8,r8,r5
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r8.u32 + ctx.r5.u32);
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// clrlwi r31,r8,16
	ctx.r31.u64 = ctx.r8.u32 & 0xFFFF;
	// b 0x83b68a08
	goto loc_83B68A08;
loc_83B68A04:
	// sthx r4,r10,r8
	PPC_STORE_U16(ctx.r10.u32 + ctx.r8.u32, ctx.r4.u16);
loc_83B68A08:
	// lhz r8,24(r3)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r3.u32 + 24);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// cmplw cr6,r9,r8
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, xer);
	// blt cr6,0x83b68974
	if (cr6.lt) goto loc_83B68974;
loc_83B68A1C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B68A24"))) PPC_WEAK_FUNC(sub_83B68A24);
PPC_FUNC_IMPL(__imp__sub_83B68A24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B68A28"))) PPC_WEAK_FUNC(sub_83B68A28);
PPC_FUNC_IMPL(__imp__sub_83B68A28) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	// lwz r10,40(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// rlwinm r11,r5,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r10,r10,r11
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq 0x83b68a48
	if (cr0.eq) goto loc_83B68A48;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lbzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// blr 
	return;
loc_83B68A48:
	// lwz r10,36(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// lhzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r11,65535
	cr6.compare<uint32_t>(ctx.r11.u32, 65535, xer);
	// beq cr6,0x83b68a70
	if (cr6.eq) goto loc_83B68A70;
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mullw r10,r10,r4
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r4.s32);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lbzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// blr 
	return;
loc_83B68A70:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83B68A78"))) PPC_WEAK_FUNC(sub_83B68A78);
PPC_FUNC_IMPL(__imp__sub_83B68A78) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	// lwz r10,40(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// rlwinm r11,r5,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r10,r11,r10
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq 0x83b68ab4
	if (cr0.eq) goto loc_83B68AB4;
	// lwz r9,40(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lhzx r11,r11,r9
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r9.u32);
loc_83B68A98:
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r11,1(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// rotlwi r10,r10,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// clrlwi r3,r11,16
	ctx.r3.u64 = ctx.r11.u32 & 0xFFFF;
	// blr 
	return;
loc_83B68AB4:
	// lwz r10,36(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// lhzx r10,r10,r11
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,65535
	cr6.compare<uint32_t>(ctx.r10.u32, 65535, xer);
	// beq cr6,0x83b68ae0
	if (cr6.eq) goto loc_83B68AE0;
	// lwz r8,36(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// lwz r9,20(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mullw r9,r9,r4
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r4.s32);
	// lhzx r11,r8,r11
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r8.u32 + ctx.r11.u32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// b 0x83b68a98
	goto loc_83B68A98;
loc_83B68AE0:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83B68AE8"))) PPC_WEAK_FUNC(sub_83B68AE8);
PPC_FUNC_IMPL(__imp__sub_83B68AE8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	// lwz r10,40(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// rlwinm r11,r5,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r10,r11,r10
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq 0x83b68b38
	if (cr0.eq) goto loc_83B68B38;
	// lwz r9,40(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lhzx r11,r11,r9
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r9.u32);
loc_83B68B08:
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r9,1(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// rotlwi r10,r10,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// lbz r8,2(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r11,3(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// or r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 | ctx.r8.u64;
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// or r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 | ctx.r11.u64;
	// blr 
	return;
loc_83B68B38:
	// lwz r10,36(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// lhzx r10,r11,r10
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r10,65535
	cr6.compare<uint32_t>(ctx.r10.u32, 65535, xer);
	// beq cr6,0x83b68b64
	if (cr6.eq) goto loc_83B68B64;
	// lwz r8,36(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// lwz r9,20(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mullw r9,r9,r4
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r4.s32);
	// lhzx r11,r11,r8
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r8.u32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// b 0x83b68b08
	goto loc_83B68B08;
loc_83B68B64:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83B68B6C"))) PPC_WEAK_FUNC(sub_83B68B6C);
PPC_FUNC_IMPL(__imp__sub_83B68B6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B68B70"))) PPC_WEAK_FUNC(sub_83B68B70);
PPC_FUNC_IMPL(__imp__sub_83B68B70) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// lwz r10,36(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// rlwinm r11,r5,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r10,r11,r10
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r10,65535
	cr6.compare<uint32_t>(ctx.r10.u32, 65535, xer);
	// beq cr6,0x83b68ba0
	if (cr6.eq) goto loc_83B68BA0;
	// lwz r8,36(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// lwz r9,20(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mullw r9,r9,r4
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r4.s32);
	// lhzx r11,r11,r8
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r8.u32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// b 0x83b68bbc
	goto loc_83B68BBC;
loc_83B68BA0:
	// lwz r10,40(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// lhzx r10,r10,r11
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq 0x83b68bf0
	if (cr0.eq) goto loc_83B68BF0;
	// lwz r9,40(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lhzx r11,r9,r11
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r9.u32 + ctx.r11.u32);
loc_83B68BBC:
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r9,1(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// rotlwi r10,r10,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// lbz r8,2(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r11,3(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// or r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 | ctx.r8.u64;
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_83B68BF0:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,9008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r6)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83B68C00"))) PPC_WEAK_FUNC(sub_83B68C00);
PPC_FUNC_IMPL(__imp__sub_83B68C00) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	// lwz r10,40(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// rlwinm r11,r5,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r10,r11,r10
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq 0x83b68c58
	if (cr0.eq) goto loc_83B68C58;
	// lwz r8,40(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lhzx r11,r11,r8
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r8.u32);
loc_83B68C20:
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,1(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// rotlwi r9,r9,8
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 8);
	// lbz r7,2(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r11,3(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// or r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 | ctx.r8.u64;
	// rlwinm r9,r9,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFFFF00;
	// or r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 | ctx.r7.u64;
	// rlwinm r9,r9,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFFFF00;
	// or r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 | ctx.r11.u64;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// blr 
	return;
loc_83B68C58:
	// lwz r10,36(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// lhzx r10,r11,r10
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r10,65535
	cr6.compare<uint32_t>(ctx.r10.u32, 65535, xer);
	// beq cr6,0x83b68c84
	if (cr6.eq) goto loc_83B68C84;
	// lwz r7,36(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mullw r8,r10,r4
	ctx.r8.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r4.s32);
	// lhzx r11,r11,r7
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r7.u32);
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// b 0x83b68c20
	goto loc_83B68C20;
loc_83B68C84:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83B68C8C"))) PPC_WEAK_FUNC(sub_83B68C8C);
PPC_FUNC_IMPL(__imp__sub_83B68C8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B68C90"))) PPC_WEAK_FUNC(sub_83B68C90);
PPC_FUNC_IMPL(__imp__sub_83B68C90) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	// lwz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// rlwinm r10,r5,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq 0x83b68cf0
	if (cr0.eq) goto loc_83B68CF0;
	// lwz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lhzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r11.u32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lbz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// lbz r8,5(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5);
	// rotlwi r9,r9,8
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 8);
	// lbz r5,6(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 6);
	// lbz r11,7(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 7);
	// or r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 | ctx.r8.u64;
	// rlwinm r9,r9,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFFFF00;
	// or r9,r9,r5
	ctx.r9.u64 = ctx.r9.u64 | ctx.r5.u64;
	// rlwinm r9,r9,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFFFF00;
	// or r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 | ctx.r11.u64;
	// stw r11,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r11.u32);
	// lwz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// lwz r8,4(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lhzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r11.u32);
	// b 0x83b68d60
	goto loc_83B68D60;
loc_83B68CF0:
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// lhzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r11,65535
	cr6.compare<uint32_t>(ctx.r11.u32, 65535, xer);
	// beq cr6,0x83b68d9c
	if (cr6.eq) goto loc_83B68D9C;
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// lwz r8,20(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mullw r8,r8,r4
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r4.s32);
	// lhzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r11.u32);
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lbz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// lbz r8,5(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5);
	// rotlwi r9,r9,8
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 8);
	// lbz r5,6(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 6);
	// lbz r11,7(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 7);
	// or r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 | ctx.r8.u64;
	// rlwinm r9,r9,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFFFF00;
	// or r9,r9,r5
	ctx.r9.u64 = ctx.r9.u64 | ctx.r5.u64;
	// rlwinm r9,r9,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFFFF00;
	// or r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 | ctx.r11.u64;
	// stw r11,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r11.u32);
	// lwz r9,20(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// mullw r7,r9,r4
	ctx.r7.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r4.s32);
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// lwz r8,8(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lhzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r11.u32);
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
loc_83B68D60:
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lwz r9,16(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lbz r10,1(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r8,2(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r7,3(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// lbz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// rotlwi r11,r11,8
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// or r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 | ctx.r8.u64;
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// or r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 | ctx.r7.u64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_83B68D9C:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// stw r11,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83B68DAC"))) PPC_WEAK_FUNC(sub_83B68DAC);
PPC_FUNC_IMPL(__imp__sub_83B68DAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B68DB0"))) PPC_WEAK_FUNC(sub_83B68DB0);
PPC_FUNC_IMPL(__imp__sub_83B68DB0) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,36(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// rlwinm r8,r5,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// rlwinm r7,r6,24,24,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 24) & 0xFF;
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mullw r11,r11,r4
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r4.s32);
	// lhzx r10,r10,r8
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r8.u32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stb r7,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r7.u8);
	// stb r6,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r6.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83B68DE0"))) PPC_WEAK_FUNC(sub_83B68DE0);
PPC_FUNC_IMPL(__imp__sub_83B68DE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r9,36(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// rlwinm r7,r5,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// stfs f1,44(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 44, temp.u32);
	// lwz r8,8(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mullw r11,r11,r4
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r4.s32);
	// lwz r10,44(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 44);
	// lhzx r9,r9,r7
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r9.u32 + ctx.r7.u32);
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// rlwinm r9,r10,8,24,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFF;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// rlwinm r8,r10,16,24,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFF;
	// rlwinm r7,r10,24,24,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFF;
	// stb r9,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r9.u8);
	// stb r8,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r8.u8);
	// stb r7,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r7.u8);
	// stb r10,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r10.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83B68E28"))) PPC_WEAK_FUNC(sub_83B68E28);
PPC_FUNC_IMPL(__imp__sub_83B68E28) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r10,-31767
	ctx.r10.s64 = -2081882112;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r10,r10,-6264
	ctx.r10.s64 = ctx.r10.s64 + -6264;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83B68E40"))) PPC_WEAK_FUNC(sub_83B68E40);
PPC_FUNC_IMPL(__imp__sub_83B68E40) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r10,-32203
	ctx.r10.s64 = -2110455808;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r10,r10,-24008
	ctx.r10.s64 = ctx.r10.s64 + -24008;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83B68E58"))) PPC_WEAK_FUNC(sub_83B68E58);
PPC_FUNC_IMPL(__imp__sub_83B68E58) {
	PPC_FUNC_PROLOGUE();
	// li r11,36
	ctx.r11.s64 = 36;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83B68E68"))) PPC_WEAK_FUNC(sub_83B68E68);
PPC_FUNC_IMPL(__imp__sub_83B68E68) {
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
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r11,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r11.u32);
	// mr r31,r7
	ctx.r31.u64 = ctx.r7.u64;
	// mr r30,r8
	ctx.r30.u64 = ctx.r8.u64;
	// bl 0x83b6b6e8
	ctx.lr = 0x83B68E94;
	sub_83B6B6E8(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bgt 0x83b68ea4
	if (cr0.gt) goto loc_83B68EA4;
loc_83B68E9C:
	// li r3,-2
	ctx.r3.s64 = -2;
	// b 0x83b68f64
	goto loc_83B68F64;
loc_83B68EA4:
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x83b68e9c
	if (!cr6.eq) goto loc_83B68E9C;
	// li r4,68
	ctx.r4.s64 = 68;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831ea7a0
	ctx.lr = 0x83B68EBC;
	sub_831EA7A0(ctx, base);
	// li r11,5
	ctx.r11.s64 = 5;
	// lwz r9,92(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r6,168(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r8,164(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// twllei r10,0
	// lwz r7,124(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// stw r8,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r8.u32);
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// rlwinm r11,r11,29,3,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// divwu r6,r6,r11
	ctx.r6.u32 = PPCDivide(ctx.r6.u32, ctx.r11.u32);
	// mullw r9,r11,r9
	ctx.r9.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r9.s32);
	// divwu r6,r6,r10
	ctx.r6.u32 = PPCDivide(ctx.r6.u32, ctx.r10.u32);
	// mullw r9,r9,r10
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// stw r6,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r6.u32);
	// stw r9,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r9.u32);
	// twllei r11,0
	// beq cr6,0x83b68f40
	if (cr6.eq) goto loc_83B68F40;
	// lwz r9,120(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// li r4,-1
	ctx.r4.s64 = -1;
	// lwz r6,172(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	// lwz r5,176(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// add r7,r9,r7
	ctx.r7.u64 = ctx.r9.u64 + ctx.r7.u64;
	// stw r4,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r4.u32);
	// add r5,r5,r6
	ctx.r5.u64 = ctx.r5.u64 + ctx.r6.u64;
	// stw r7,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r7.u32);
	// stw r9,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r9.u32);
	// stw r6,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r6.u32);
	// stw r5,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r5.u32);
loc_83B68F40:
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r8,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r8.u32);
	// mullw r11,r11,r10
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// stw r9,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r9.u32);
	// stw r11,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
	// stw r9,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r9.u32);
	// stw r9,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r9.u32);
	// stw r8,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r8.u32);
	// li r3,0
	ctx.r3.s64 = 0;
loc_83B68F64:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lwz r12,-8(r1)
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

__attribute__((alias("__imp__sub_83B68F7C"))) PPC_WEAK_FUNC(sub_83B68F7C);
PPC_FUNC_IMPL(__imp__sub_83B68F7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B68F80"))) PPC_WEAK_FUNC(sub_83B68F80);
PPC_FUNC_IMPL(__imp__sub_83B68F80) {
	PPC_FUNC_PROLOGUE();
	// stw r4,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r4.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83B68F8C"))) PPC_WEAK_FUNC(sub_83B68F8C);
PPC_FUNC_IMPL(__imp__sub_83B68F8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B68F90"))) PPC_WEAK_FUNC(sub_83B68F90);
PPC_FUNC_IMPL(__imp__sub_83B68F90) {
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
	// li r4,28
	ctx.r4.s64 = 28;
	// bl 0x831ea7a0
	ctx.lr = 0x83B68FA4;
	sub_831EA7A0(ctx, base);
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

__attribute__((alias("__imp__sub_83B68FB8"))) PPC_WEAK_FUNC(sub_83B68FB8);
PPC_FUNC_IMPL(__imp__sub_83B68FB8) {
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
	// addi r11,r4,7
	ctx.r11.s64 = ctx.r4.s64 + 7;
	// li r4,28
	ctx.r4.s64 = 28;
	// rlwinm r30,r11,0,0,28
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831ea7a0
	ctx.lr = 0x83B68FE4;
	sub_831EA7A0(ctx, base);
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// li r3,0
	ctx.r3.s64 = 0;
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

__attribute__((alias("__imp__sub_83B69004"))) PPC_WEAK_FUNC(sub_83B69004);
PPC_FUNC_IMPL(__imp__sub_83B69004) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B69008"))) PPC_WEAK_FUNC(sub_83B69008);
PPC_FUNC_IMPL(__imp__sub_83B69008) {
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
	ctx.lr = 0x83B69010;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// rotlwi r11,r5,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r5.u32, 1);
	// lwz r28,8(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r30,16(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// lwz r29,20(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r31,0(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// divw r10,r5,r28
	ctx.r10.s32 = PPCDivide(ctx.r5.s32, ctx.r28.s32);
	// andc r27,r28,r11
	ctx.r27.u64 = ctx.r28.u64 & ~ctx.r11.u64;
	// twllei r28,0
	// subf. r11,r30,r29
	ctx.r11.s64 = ctx.r29.s64 - ctx.r30.s64;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// twlgei r27,-1
	// bgt 0x83b69078
	if (cr0.gt) goto loc_83B69078;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble cr6,0x83b6906c
	if (!cr6.gt) goto loc_83B6906C;
	// cmpw cr6,r11,r5
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r5.s32, xer);
	// bge cr6,0x83b6905c
	if (!cr6.lt) goto loc_83B6905C;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
loc_83B6905C:
	// subf r11,r5,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r5.s64;
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// stw r5,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r5.u32);
	// b 0x83b69268
	goto loc_83B69268;
loc_83B6906C:
	// li r4,28
	ctx.r4.s64 = 28;
	// bl 0x831ea7a0
	ctx.lr = 0x83B69074;
	sub_831EA7A0(ctx, base);
	// b 0x83b69268
	goto loc_83B69268;
loc_83B69078:
	// cmpw cr6,r10,r7
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r7.s32, xer);
	// blt cr6,0x83b69084
	if (cr6.lt) goto loc_83B69084;
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
loc_83B69084:
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, xer);
	// blt cr6,0x83b69090
	if (cr6.lt) goto loc_83B69090;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_83B69090:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// srawi r11,r11,3
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 3;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// beq cr6,0x83b691d8
	if (cr6.eq) goto loc_83B691D8;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// beq cr6,0x83b6915c
	if (cr6.eq) goto loc_83B6915C;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// beq cr6,0x83b690cc
	if (cr6.eq) goto loc_83B690CC;
	// lis r11,-32203
	ctx.r11.s64 = -2110455808;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,-23984
	ctx.r4.s64 = ctx.r11.s64 + -23984;
	// bl 0x831ea3f0
	ctx.lr = 0x83B690C4;
	sub_831EA3F0(ctx, base);
	// li r3,-2
	ctx.r3.s64 = -2;
	// b 0x83b6926c
	goto loc_83B6926C;
loc_83B690CC:
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, xer);
	// ble cr6,0x83b69244
	if (!cr6.gt) goto loc_83B69244;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
	// lfs f0,-5552(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -5552);
	ctx.f0.f64 = double(temp.f32);
loc_83B690E8:
	// lwz r6,0(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// ble cr6,0x83b69148
	if (!cr6.gt) goto loc_83B69148;
	// mulli r7,r31,3
	ctx.r7.s64 = ctx.r31.s64 * 3;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// addi r5,r7,-2
	ctx.r5.s64 = ctx.r7.s64 + -2;
	// addi r7,r6,-4
	ctx.r7.s64 = ctx.r6.s64 + -4;
loc_83B69108:
	// lbz r27,0(r11)
	ctx.r27.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbzu r6,1(r11)
	ea = 1 + ctx.r11.u32;
	ctx.r6.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// rlwimi r6,r27,8,16,23
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r27.u32, 8) & 0xFF00) | (ctx.r6.u64 & 0xFFFFFFFFFFFF00FF);
	// rlwinm r6,r6,8,8,23
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFFFF00;
	// lbzu r27,1(r11)
	ea = 1 + ctx.r11.u32;
	ctx.r27.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// or r6,r6,r27
	ctx.r6.u64 = ctx.r6.u64 | ctx.r27.u64;
	// add r11,r5,r11
	ctx.r11.u64 = ctx.r5.u64 + ctx.r11.u64;
	// rlwinm r6,r6,8,0,23
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFFFFFF00;
	// extsw r6,r6
	ctx.r6.s64 = ctx.r6.s32;
	// std r6,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r6.u64);
	// lfd f13,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfsu f13,4(r7)
	ea = 4 + ctx.r7.u32;
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ea, temp.u32);
	ctx.r7.u32 = ea;
	// bdnz 0x83b69108
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83B69108;
loc_83B69148:
	// addic. r29,r29,-1
	xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
	// addi r30,r30,3
	ctx.r30.s64 = ctx.r30.s64 + 3;
	// bne 0x83b690e8
	if (!cr0.eq) goto loc_83B690E8;
	// b 0x83b69244
	goto loc_83B69244;
loc_83B6915C:
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, xer);
	// ble cr6,0x83b69244
	if (!cr6.gt) goto loc_83B69244;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
	// lfs f0,23672(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 23672);
	ctx.f0.f64 = double(temp.f32);
loc_83B69178:
	// lwz r7,0(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// ble cr6,0x83b691c4
	if (!cr6.gt) goto loc_83B691C4;
	// rlwinm r11,r31,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// addi r6,r7,-4
	ctx.r6.s64 = ctx.r7.s64 + -4;
	// subf r7,r11,r5
	ctx.r7.s64 = ctx.r5.s64 - ctx.r11.s64;
loc_83B69194:
	// lhzux r4,r7,r11
	ea = ctx.r7.u32 + ctx.r11.u32;
	ctx.r4.u64 = PPC_LOAD_U16(ea);
	ctx.r7.u32 = ea;
	// rlwinm r27,r4,8,16,23
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 8) & 0xFF00;
	// rlwinm r4,r4,24,8,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 24) & 0xFFFFFF;
	// or r4,r27,r4
	ctx.r4.u64 = ctx.r27.u64 | ctx.r4.u64;
	// extsh r4,r4
	ctx.r4.s64 = ctx.r4.s16;
	// std r4,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r4.u64);
	// lfd f13,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfsu f13,4(r6)
	ea = 4 + ctx.r6.u32;
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ea, temp.u32);
	ctx.r6.u32 = ea;
	// bdnz 0x83b69194
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83B69194;
loc_83B691C4:
	// addic. r29,r29,-1
	xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// addi r5,r5,2
	ctx.r5.s64 = ctx.r5.s64 + 2;
	// bne 0x83b69178
	if (!cr0.eq) goto loc_83B69178;
	// b 0x83b69244
	goto loc_83B69244;
loc_83B691D8:
	// li r5,0
	ctx.r5.s64 = 0;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, xer);
	// ble cr6,0x83b69244
	if (!cr6.gt) goto loc_83B69244;
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// lfs f0,-6792(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -6792);
	ctx.f0.f64 = double(temp.f32);
loc_83B691F0:
	// lwz r7,0(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// add r11,r5,r4
	ctx.r11.u64 = ctx.r5.u64 + ctx.r4.u64;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// ble cr6,0x83b69234
	if (!cr6.gt) goto loc_83B69234;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// subf r11,r31,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r31.s64;
	// addi r7,r7,-4
	ctx.r7.s64 = ctx.r7.s64 + -4;
loc_83B6920C:
	// lbzux r6,r11,r31
	ea = ctx.r11.u32 + ctx.r31.u32;
	ctx.r6.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// addi r6,r6,-128
	ctx.r6.s64 = ctx.r6.s64 + -128;
	// extsw r6,r6
	ctx.r6.s64 = ctx.r6.s32;
	// std r6,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r6.u64);
	// lfd f13,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfsu f13,4(r7)
	ea = 4 + ctx.r7.u32;
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ea, temp.u32);
	ctx.r7.u32 = ea;
	// bdnz 0x83b6920c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83B6920C;
loc_83B69234:
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmpw cr6,r5,r31
	cr6.compare<int32_t>(ctx.r5.s32, ctx.r31.s32, xer);
	// blt cr6,0x83b691f0
	if (cr6.lt) goto loc_83B691F0;
loc_83B69244:
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x83b6925c
	if (!cr6.eq) goto loc_83B6925C;
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
loc_83B6925C:
	// mullw r11,r10,r28
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r28.s32);
	// stw r11,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r11.u32);
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
loc_83B69268:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83B6926C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B69274"))) PPC_WEAK_FUNC(sub_83B69274);
PPC_FUNC_IMPL(__imp__sub_83B69274) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B69278"))) PPC_WEAK_FUNC(sub_83B69278);
PPC_FUNC_IMPL(__imp__sub_83B69278) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x83B69280;
	__savegprlr_24(ctx, base);
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r25,420(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 420);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// stw r11,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r11.u32);
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// mr r27,r8
	ctx.r27.u64 = ctx.r8.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r26,r9
	ctx.r26.u64 = ctx.r9.u64;
	// mr r24,r10
	ctx.r24.u64 = ctx.r10.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x83b693ac
	if (!cr6.eq) goto loc_83B693AC;
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// bgt cr6,0x83b692d0
	if (cr6.gt) goto loc_83B692D0;
loc_83B692C8:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83b69420
	goto loc_83B69420;
loc_83B692D0:
	// cmpwi cr6,r30,44
	cr6.compare<int32_t>(ctx.r30.s32, 44, xer);
	// bge cr6,0x83b692f0
	if (!cr6.lt) goto loc_83B692F0;
	// lis r11,-32203
	ctx.r11.s64 = -2110455808;
	// addi r4,r11,-23824
	ctx.r4.s64 = ctx.r11.s64 + -23824;
loc_83B692E0:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831ea3f0
	ctx.lr = 0x83B692E8;
	sub_831EA3F0(ctx, base);
	// li r3,-2
	ctx.r3.s64 = -2;
	// b 0x83b69420
	goto loc_83B69420;
loc_83B692F0:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x83b6b6e8
	ctx.lr = 0x83B692FC;
	sub_83B6B6E8(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bgt 0x83b69310
	if (cr0.gt) goto loc_83B69310;
	// lis r11,-32203
	ctx.r11.s64 = -2110455808;
	// addi r4,r11,-23868
	ctx.r4.s64 = ctx.r11.s64 + -23868;
	// b 0x83b692e0
	goto loc_83B692E0;
loc_83B69310:
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// beq cr6,0x83b69328
	if (cr6.eq) goto loc_83B69328;
	// lis r11,-32203
	ctx.r11.s64 = -2110455808;
	// addi r4,r11,-23908
	ctx.r4.s64 = ctx.r11.s64 + -23908;
	// b 0x83b692e0
	goto loc_83B692E0;
loc_83B69328:
	// lwz r7,164(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// add r11,r30,r28
	ctx.r11.u64 = ctx.r30.u64 + ctx.r28.u64;
	// cmpw cr6,r11,r7
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r7.s32, xer);
	// bge cr6,0x83b69344
	if (!cr6.lt) goto loc_83B69344;
	// lis r11,-32203
	ctx.r11.s64 = -2110455808;
	// addi r4,r11,-23948
	ctx.r4.s64 = ctx.r11.s64 + -23948;
	// b 0x83b692e0
	goto loc_83B692E0;
loc_83B69344:
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r11,168(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// lwz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// rlwinm r5,r10,29,3,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1FFFFFFF;
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// rotlwi r8,r11,1
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// mullw r5,r5,r9
	ctx.r5.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r9.s32);
	// lwz r4,124(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// stw r5,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r5.u32);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// subf r10,r11,r6
	ctx.r10.s64 = ctx.r6.s64 - ctx.r11.s64;
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// divw r11,r11,r5
	ctx.r11.s32 = PPCDivide(ctx.r11.s32, ctx.r5.s32);
	// andc r9,r5,r8
	ctx.r9.u64 = ctx.r5.u64 & ~ctx.r8.u64;
	// subf r10,r7,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r7.s64;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// twllei r5,0
	// twlgei r9,-1
	// stw r10,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r10.u32);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x83b693a4
	if (cr6.eq) goto loc_83B693A4;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
loc_83B693A4:
	// stw r7,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r7.u32);
	// b 0x83b692c8
	goto loc_83B692C8;
loc_83B693AC:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpw cr6,r30,r11
	cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, xer);
	// bge cr6,0x83b69400
	if (!cr6.lt) goto loc_83B69400;
	// add r10,r30,r28
	ctx.r10.u64 = ctx.r30.u64 + ctx.r28.u64;
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, xer);
	// blt cr6,0x83b69400
	if (cr6.lt) goto loc_83B69400;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x831ea778
	ctx.lr = 0x83B693D8;
	sub_831EA778(ctx, base);
	// addi r11,r1,192
	ctx.r11.s64 = ctx.r1.s64 + 192;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// add r3,r30,r11
	ctx.r3.u64 = ctx.r30.u64 + ctx.r11.u64;
	// subfic r4,r30,64
	xer.ca = ctx.r30.u32 <= 64;
	ctx.r4.s64 = 64 - ctx.r30.s64;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r6,r30,r11
	ctx.r6.s64 = ctx.r11.s64 - ctx.r30.s64;
	// bl 0x831ea778
	ctx.lr = 0x83B693F4;
	sub_831EA778(ctx, base);
	// lwz r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// b 0x83b69408
	goto loc_83B69408;
loc_83B69400:
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
loc_83B69408:
	// mr r9,r25
	ctx.r9.u64 = ctx.r25.u64;
	// mr r8,r24
	ctx.r8.u64 = ctx.r24.u64;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83b69008
	ctx.lr = 0x83B69420;
	sub_83B69008(ctx, base);
loc_83B69420:
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B69428"))) PPC_WEAK_FUNC(sub_83B69428);
PPC_FUNC_IMPL(__imp__sub_83B69428) {
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
	// lis r10,-31738
	ctx.r10.s64 = -2079981568;
	// lwz r11,-332(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -332);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,-332(r10)
	PPC_STORE_U32(ctx.r10.u32 + -332, ctx.r11.u32);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x83b69454
	if (!cr6.eq) goto loc_83B69454;
	// bl 0x83a80448
	ctx.lr = 0x83B69450;
	sub_83A80448(ctx, base);
	// bl 0x83a7e080
	ctx.lr = 0x83B69454;
	sub_83A7E080(ctx, base);
loc_83B69454:
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

__attribute__((alias("__imp__sub_83B69468"))) PPC_WEAK_FUNC(sub_83B69468);
PPC_FUNC_IMPL(__imp__sub_83B69468) {
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
	// lis r10,-31738
	ctx.r10.s64 = -2079981568;
	// lwz r11,-332(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -332);
	// addic. r11,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// stw r11,-332(r10)
	PPC_STORE_U32(ctx.r10.u32 + -332, ctx.r11.u32);
	// bne 0x83b69490
	if (!cr0.eq) goto loc_83B69490;
	// bl 0x83a7e080
	ctx.lr = 0x83B6948C;
	sub_83A7E080(ctx, base);
	// bl 0x83a804c8
	ctx.lr = 0x83B69490;
	sub_83A804C8(ctx, base);
loc_83B69490:
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

__attribute__((alias("__imp__sub_83B694A4"))) PPC_WEAK_FUNC(sub_83B694A4);
PPC_FUNC_IMPL(__imp__sub_83B694A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B694A8"))) PPC_WEAK_FUNC(sub_83B694A8);
PPC_FUNC_IMPL(__imp__sub_83B694A8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// bne cr6,0x83b694b4
	if (!cr6.eq) goto loc_83B694B4;
	// addi r5,r1,-16
	ctx.r5.s64 = ctx.r1.s64 + -16;
loc_83B694B4:
	// li r11,-1
	ctx.r11.s64 = -1;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// lwz r10,72(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lwz r9,80(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// ble cr6,0x83b694fc
	if (!cr6.gt) goto loc_83B694FC;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_83B694D4:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x83b694f4
	if (cr6.eq) goto loc_83B694F4;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// cmpw cr6,r7,r10
	cr6.compare<int32_t>(ctx.r7.s32, ctx.r10.s32, xer);
	// blt cr6,0x83b694d4
	if (cr6.lt) goto loc_83B694D4;
	// b 0x83b694fc
	goto loc_83B694FC;
loc_83B694F4:
	// rlwinm r11,r7,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 5) & 0xFFFFFFE0;
	// stwx r4,r11,r9
	PPC_STORE_U32(ctx.r11.u32 + ctx.r9.u32, ctx.r4.u32);
loc_83B694FC:
	// cmpw cr6,r7,r10
	cr6.compare<int32_t>(ctx.r7.s32, ctx.r10.s32, xer);
	// bne cr6,0x83b6950c
	if (!cr6.eq) goto loc_83B6950C;
	// li r3,7
	ctx.r3.s64 = 7;
	// blr 
	return;
loc_83B6950C:
	// rlwinm r11,r7,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 5) & 0xFFFFFFE0;
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// li r6,128
	ctx.r6.s64 = 128;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// lfs f0,-26260(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -26260);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,12(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 12, temp.u32);
	// stw r3,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r3.u32);
	// stw r7,28(r9)
	PPC_STORE_U32(ctx.r9.u32 + 28, ctx.r7.u32);
	// stw r4,16(r9)
	PPC_STORE_U32(ctx.r9.u32 + 16, ctx.r4.u32);
	// stw r6,20(r9)
	PPC_STORE_U32(ctx.r9.u32 + 20, ctx.r6.u32);
	// lwz r11,64(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble cr6,0x83b69594
	if (!cr6.gt) goto loc_83B69594;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r10,68(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// lfs f0,9008(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
loc_83B69554:
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// ble cr6,0x83b69584
	if (!cr6.gt) goto loc_83B69584;
loc_83B69560:
	// mullw r10,r10,r8
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r8.s32);
	// lwz r6,8(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// stfsx f0,r10,r6
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + ctx.r6.u32, temp.u32);
	// lwz r10,68(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, xer);
	// blt cr6,0x83b69560
	if (cr6.lt) goto loc_83B69560;
loc_83B69584:
	// lwz r11,64(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// cmpw cr6,r8,r11
	cr6.compare<int32_t>(ctx.r8.s32, ctx.r11.s32, xer);
	// blt cr6,0x83b69554
	if (cr6.lt) goto loc_83B69554;
loc_83B69594:
	// stw r7,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r7.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83B695A0"))) PPC_WEAK_FUNC(sub_83B695A0);
PPC_FUNC_IMPL(__imp__sub_83B695A0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,80(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// rlwinm r10,r4,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 5) & 0xFFFFFFE0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stwx r9,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83B695B8"))) PPC_WEAK_FUNC(sub_83B695B8);
PPC_FUNC_IMPL(__imp__sub_83B695B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad4
	ctx.lr = 0x83B695C0;
	__savegprlr_23(ctx, base);
	// lwz r9,80(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// rlwinm r10,r4,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 5) & 0xFFFFFFE0;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lwz r10,16(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// cmpw cr6,r7,r10
	cr6.compare<int32_t>(ctx.r7.s32, ctx.r10.s32, xer);
	// bge cr6,0x83b695dc
	if (!cr6.lt) goto loc_83B695DC;
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
loc_83B695DC:
	// lwz r8,20(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	// subf r7,r10,r7
	ctx.r7.s64 = ctx.r7.s64 - ctx.r10.s64;
	// cmpw cr6,r7,r8
	cr6.compare<int32_t>(ctx.r7.s32, ctx.r8.s32, xer);
	// mr r4,r7
	ctx.r4.u64 = ctx.r7.u64;
	// blt cr6,0x83b695f4
	if (cr6.lt) goto loc_83B695F4;
	// mr r4,r8
	ctx.r4.u64 = ctx.r8.u64;
loc_83B695F4:
	// lwz r11,64(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// cmpw cr6,r6,r11
	cr6.compare<int32_t>(ctx.r6.s32, ctx.r11.s32, xer);
	// bge cr6,0x83b69604
	if (!cr6.lt) goto loc_83B69604;
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
loc_83B69604:
	// lfs f11,12(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// lwz r27,68(r3)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// lwz r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble cr6,0x83b6996c
	if (!cr6.gt) goto loc_83B6996C;
	// rlwinm r28,r10,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r24,r11
	ctx.r24.u64 = ctx.r11.u64;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// rlwinm r23,r27,2,0,29
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r26,r9
	ctx.r26.u64 = ctx.r9.u64;
	// lfs f10,-26260(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -26260);
	ctx.f10.f64 = double(temp.f32);
	// lfs f12,-9412(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -9412);
	ctx.f12.f64 = double(temp.f32);
loc_83B6963C:
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(ctx.r27.s32, 0, xer);
	// add r5,r28,r11
	ctx.r5.u64 = ctx.r28.u64 + ctx.r11.u64;
	// ble cr6,0x83b6995c
	if (!cr6.gt) goto loc_83B6995C;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
loc_83B69658:
	// lfs f0,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f0,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// fcmpu cr6,f0,f12
	cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// ble cr6,0x83b6994c
	if (!cr6.gt) goto loc_83B6994C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// fcmpu cr6,f0,f10
	cr6.compare(ctx.f0.f64, ctx.f10.f64);
	// li r9,0
	ctx.r9.s64 = 0;
	// add r8,r28,r11
	ctx.r8.u64 = ctx.r28.u64 + ctx.r11.u64;
	// addic. r11,r4,-7
	xer.ca = ctx.r4.u32 > 6;
	ctx.r11.s64 = ctx.r4.s64 + -7;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x83b697e8
	if (cr6.lt) goto loc_83B697E8;
	// ble 0x83b6972c
	if (!cr0.gt) goto loc_83B6972C;
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// addi r11,r8,-4
	ctx.r11.s64 = ctx.r8.s64 + -4;
	// rlwinm r9,r10,29,3,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1FFFFFFF;
	// addi r10,r5,8
	ctx.r10.s64 = ctx.r5.s64 + 8;
	// addi r7,r9,1
	ctx.r7.s64 = ctx.r9.s64 + 1;
	// subf r6,r5,r8
	ctx.r6.s64 = ctx.r8.s64 - ctx.r5.s64;
	// rlwinm r9,r7,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
loc_83B696A4:
	// lfs f9,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// lfsx f4,r6,r10
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r10.u32);
	ctx.f4.f64 = double(temp.f32);
	// lfs f13,-4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -4);
	ctx.f13.f64 = double(temp.f32);
	// fadds f2,f4,f9
	ctx.f2.f64 = double(float(ctx.f4.f64 + ctx.f9.f64));
	// lfs f8,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// lfs f3,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f3.f64 = double(temp.f32);
	// lfs f1,16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f1.f64 = double(temp.f32);
	// fadds f13,f3,f13
	ctx.f13.f64 = double(float(ctx.f3.f64 + ctx.f13.f64));
	// lfs f7,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// fadds f8,f1,f8
	ctx.f8.f64 = double(float(ctx.f1.f64 + ctx.f8.f64));
	// lfs f9,20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f9.f64 = double(temp.f32);
	// lfs f6,12(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f6.f64 = double(temp.f32);
	// fadds f3,f9,f7
	ctx.f3.f64 = double(float(ctx.f9.f64 + ctx.f7.f64));
	// lfs f4,24(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f4.f64 = double(temp.f32);
	// lfs f5,16(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	ctx.f5.f64 = double(temp.f32);
	// fadds f9,f4,f6
	ctx.f9.f64 = double(float(ctx.f4.f64 + ctx.f6.f64));
	// lfs f1,28(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f1.f64 = double(temp.f32);
	// lfs f0,-8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -8);
	ctx.f0.f64 = double(temp.f32);
	// fadds f6,f1,f5
	ctx.f6.f64 = double(float(ctx.f1.f64 + ctx.f5.f64));
	// lfs f7,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// lfs f5,20(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	ctx.f5.f64 = double(temp.f32);
	// fadds f4,f7,f0
	ctx.f4.f64 = double(float(ctx.f7.f64 + ctx.f0.f64));
	// lfs f1,32(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	ctx.f1.f64 = double(temp.f32);
	// stfs f4,4(r11)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// fadds f0,f1,f5
	ctx.f0.f64 = double(float(ctx.f1.f64 + ctx.f5.f64));
	// stfs f13,8(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stfsx f2,r6,r10
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r6.u32 + ctx.r10.u32, temp.u32);
	// addi r10,r10,32
	ctx.r10.s64 = ctx.r10.s64 + 32;
	// stfs f8,16(r11)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// stfs f3,20(r11)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// stfs f9,24(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// stfs f6,28(r11)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r11.u32 + 28, temp.u32);
	// stfsu f0,32(r11)
	ea = 32 + ctx.r11.u32;
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x83b696a4
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83B696A4;
loc_83B6972C:
	// cmpw cr6,r9,r4
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r4.s32, xer);
	// bge cr6,0x83b6994c
	if (!cr6.lt) goto loc_83B6994C;
	// subf r11,r9,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r9.s64;
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(ctx.r11.s32, 4, xer);
	// blt cr6,0x83b697b0
	if (cr6.lt) goto loc_83B697B0;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r9,1
	ctx.r10.s64 = ctx.r9.s64 + 1;
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// rlwinm r7,r10,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r11,-4
	ctx.r10.s64 = ctx.r11.s64 + -4;
	// add r11,r7,r8
	ctx.r11.u64 = ctx.r7.u64 + ctx.r8.u64;
	// addi r6,r4,-3
	ctx.r6.s64 = ctx.r4.s64 + -3;
	// subf r7,r8,r5
	ctx.r7.s64 = ctx.r5.s64 - ctx.r8.s64;
loc_83B69760:
	// lfs f0,4(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// lfs f13,-4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	ctx.f13.f64 = double(temp.f32);
	// fadds f9,f13,f0
	ctx.f9.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// lfs f8,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// stfs f9,-4(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + -4, temp.u32);
	// cmpw cr6,r9,r6
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r6.s32, xer);
	// lfsx f7,r11,r7
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	ctx.f7.f64 = double(temp.f32);
	// fadds f6,f7,f8
	ctx.f6.f64 = double(float(ctx.f7.f64 + ctx.f8.f64));
	// lfs f5,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f5.f64 = double(temp.f32);
	// stfs f6,0(r11)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfs f4,12(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f4.f64 = double(temp.f32);
	// fadds f3,f5,f4
	ctx.f3.f64 = double(float(ctx.f5.f64 + ctx.f4.f64));
	// lfs f2,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f2.f64 = double(temp.f32);
	// stfs f3,4(r11)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lfsu f0,16(r10)
	ea = 16 + ctx.r10.u32;
	temp.u32 = PPC_LOAD_U32(ea);
	ctx.f0.f64 = double(temp.f32);
	ctx.r10.u32 = ea;
	// fadds f1,f2,f0
	ctx.f1.f64 = double(float(ctx.f2.f64 + ctx.f0.f64));
	// stfs f1,8(r11)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// blt cr6,0x83b69760
	if (cr6.lt) goto loc_83B69760;
loc_83B697B0:
	// cmpw cr6,r9,r4
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r4.s32, xer);
	// bge cr6,0x83b6994c
	if (!cr6.lt) goto loc_83B6994C;
	// subf r7,r9,r4
	ctx.r7.s64 = ctx.r4.s64 - ctx.r9.s64;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r10,r8,r5
	ctx.r10.s64 = ctx.r5.s64 - ctx.r8.s64;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
loc_83B697CC:
	// lfsx f0,r11,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fadds f9,f0,f13
	ctx.f9.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// stfs f9,0(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83b697cc
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83B697CC;
	// b 0x83b6994c
	goto loc_83B6994C;
loc_83B697E8:
	// ble 0x83b69894
	if (!cr0.gt) goto loc_83B69894;
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// addi r11,r8,-4
	ctx.r11.s64 = ctx.r8.s64 + -4;
	// rlwinm r9,r10,29,3,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1FFFFFFF;
	// addi r10,r5,8
	ctx.r10.s64 = ctx.r5.s64 + 8;
	// addi r7,r9,1
	ctx.r7.s64 = ctx.r9.s64 + 1;
	// subf r6,r5,r8
	ctx.r6.s64 = ctx.r8.s64 - ctx.r5.s64;
	// rlwinm r9,r7,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
loc_83B6980C:
	// lfs f8,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// lfsx f3,r6,r10
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r10.u32);
	ctx.f3.f64 = double(temp.f32);
	// lfs f9,-4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -4);
	ctx.f9.f64 = double(temp.f32);
	// fmadds f1,f8,f0,f3
	ctx.f1.f64 = double(float(ctx.f8.f64 * ctx.f0.f64 + ctx.f3.f64));
	// lfs f2,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f2.f64 = double(temp.f32);
	// lfs f7,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// fmadds f3,f9,f0,f2
	ctx.f3.f64 = double(float(ctx.f9.f64 * ctx.f0.f64 + ctx.f2.f64));
	// lfs f8,16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f8.f64 = double(temp.f32);
	// lfs f6,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f6.f64 = double(temp.f32);
	// fmadds f9,f7,f0,f8
	ctx.f9.f64 = double(float(ctx.f7.f64 * ctx.f0.f64 + ctx.f8.f64));
	// lfs f2,20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f2.f64 = double(temp.f32);
	// lfs f5,12(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f5.f64 = double(temp.f32);
	// fmadds f7,f6,f0,f2
	ctx.f7.f64 = double(float(ctx.f6.f64 * ctx.f0.f64 + ctx.f2.f64));
	// lfs f8,24(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f8.f64 = double(temp.f32);
	// lfs f4,16(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	ctx.f4.f64 = double(temp.f32);
	// fmadds f5,f5,f0,f8
	ctx.f5.f64 = double(float(ctx.f5.f64 * ctx.f0.f64 + ctx.f8.f64));
	// lfs f6,28(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f6.f64 = double(temp.f32);
	// lfs f13,-8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -8);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f8,f4,f0,f6
	ctx.f8.f64 = double(float(ctx.f4.f64 * ctx.f0.f64 + ctx.f6.f64));
	// lfs f2,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// fmadds f4,f13,f0,f2
	ctx.f4.f64 = double(float(ctx.f13.f64 * ctx.f0.f64 + ctx.f2.f64));
	// lfs f6,20(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	ctx.f6.f64 = double(temp.f32);
	// lfs f2,32(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	ctx.f2.f64 = double(temp.f32);
	// stfs f4,4(r11)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// fmadds f13,f6,f0,f2
	ctx.f13.f64 = double(float(ctx.f6.f64 * ctx.f0.f64 + ctx.f2.f64));
	// stfs f3,8(r11)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stfsx f1,r6,r10
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r6.u32 + ctx.r10.u32, temp.u32);
	// addi r10,r10,32
	ctx.r10.s64 = ctx.r10.s64 + 32;
	// stfs f9,16(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// stfs f7,20(r11)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// stfs f5,24(r11)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// stfs f8,28(r11)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r11.u32 + 28, temp.u32);
	// stfsu f13,32(r11)
	ea = 32 + ctx.r11.u32;
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x83b6980c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83B6980C;
loc_83B69894:
	// cmpw cr6,r9,r4
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r4.s32, xer);
	// bge cr6,0x83b6994c
	if (!cr6.lt) goto loc_83B6994C;
	// subf r11,r9,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r9.s64;
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(ctx.r11.s32, 4, xer);
	// blt cr6,0x83b69918
	if (cr6.lt) goto loc_83B69918;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r9,1
	ctx.r10.s64 = ctx.r9.s64 + 1;
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// rlwinm r7,r10,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r11,-4
	ctx.r10.s64 = ctx.r11.s64 + -4;
	// add r11,r7,r8
	ctx.r11.u64 = ctx.r7.u64 + ctx.r8.u64;
	// addi r6,r4,-3
	ctx.r6.s64 = ctx.r4.s64 + -3;
	// subf r7,r8,r5
	ctx.r7.s64 = ctx.r5.s64 - ctx.r8.s64;
loc_83B698C8:
	// lfs f13,4(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// lfs f9,-4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	ctx.f9.f64 = double(temp.f32);
	// fmadds f8,f13,f0,f9
	ctx.f8.f64 = double(float(ctx.f13.f64 * ctx.f0.f64 + ctx.f9.f64));
	// stfs f8,-4(r11)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r11.u32 + -4, temp.u32);
	// lfs f7,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// cmpw cr6,r9,r6
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r6.s32, xer);
	// lfsx f6,r11,r7
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	ctx.f6.f64 = double(temp.f32);
	// fmadds f5,f6,f0,f7
	ctx.f5.f64 = double(float(ctx.f6.f64 * ctx.f0.f64 + ctx.f7.f64));
	// lfs f4,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f4.f64 = double(temp.f32);
	// stfs f5,0(r11)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfs f2,12(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f2.f64 = double(temp.f32);
	// fmadds f1,f2,f0,f4
	ctx.f1.f64 = double(float(ctx.f2.f64 * ctx.f0.f64 + ctx.f4.f64));
	// lfs f3,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f3.f64 = double(temp.f32);
	// stfs f1,4(r11)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lfsu f13,16(r10)
	ea = 16 + ctx.r10.u32;
	temp.u32 = PPC_LOAD_U32(ea);
	ctx.f13.f64 = double(temp.f32);
	ctx.r10.u32 = ea;
	// fmadds f13,f13,f0,f3
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64 + ctx.f3.f64));
	// stfs f13,8(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// blt cr6,0x83b698c8
	if (cr6.lt) goto loc_83B698C8;
loc_83B69918:
	// cmpw cr6,r9,r4
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r4.s32, xer);
	// bge cr6,0x83b6994c
	if (!cr6.lt) goto loc_83B6994C;
	// subf r7,r9,r4
	ctx.r7.s64 = ctx.r4.s64 - ctx.r9.s64;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r10,r8,r5
	ctx.r10.s64 = ctx.r5.s64 - ctx.r8.s64;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
loc_83B69934:
	// lfsx f13,r10,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	ctx.f13.f64 = double(temp.f32);
	// lfs f9,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// fmadds f8,f13,f0,f9
	ctx.f8.f64 = double(float(ctx.f13.f64 * ctx.f0.f64 + ctx.f9.f64));
	// stfs f8,0(r11)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83b69934
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83B69934;
loc_83B6994C:
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// bne 0x83b69658
	if (!cr0.eq) goto loc_83B69658;
loc_83B6995C:
	// addic. r24,r24,-1
	xer.ca = ctx.r24.u32 > 0;
	ctx.r24.s64 = ctx.r24.s64 + -1;
	cr0.compare<int32_t>(ctx.r24.s32, 0, xer);
	// addi r25,r25,4
	ctx.r25.s64 = ctx.r25.s64 + 4;
	// add r26,r23,r26
	ctx.r26.u64 = ctx.r23.u64 + ctx.r26.u64;
	// bne 0x83b6963c
	if (!cr0.eq) goto loc_83B6963C;
loc_83B6996C:
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B69970"))) PPC_WEAK_FUNC(sub_83B69970);
PPC_FUNC_IMPL(__imp__sub_83B69970) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// blt cr6,0x83b699c0
	if (cr6.lt) goto loc_83B699C0;
	// lwz r11,64(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// cmpw cr6,r5,r11
	cr6.compare<int32_t>(ctx.r5.s32, ctx.r11.s32, xer);
	// bge cr6,0x83b699c0
	if (!cr6.lt) goto loc_83B699C0;
	// cmpwi cr6,r6,0
	cr6.compare<int32_t>(ctx.r6.s32, 0, xer);
	// blt cr6,0x83b699c0
	if (cr6.lt) goto loc_83B699C0;
	// lwz r11,68(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// cmpw cr6,r6,r11
	cr6.compare<int32_t>(ctx.r6.s32, ctx.r11.s32, xer);
	// bge cr6,0x83b699c0
	if (!cr6.lt) goto loc_83B699C0;
	// lwz r10,80(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// rlwinm r9,r4,5,0,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 5) & 0xFFFFFFE0;
	// mullw r11,r11,r5
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r5.s32);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// add r9,r11,r6
	ctx.r9.u64 = ctx.r11.u64 + ctx.r6.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r7,8(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stfsx f1,r7,r8
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r7.u32 + ctx.r8.u32, temp.u32);
	// blr 
	return;
loc_83B699C0:
	// li r3,2
	ctx.r3.s64 = 2;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83B699C8"))) PPC_WEAK_FUNC(sub_83B699C8);
PPC_FUNC_IMPL(__imp__sub_83B699C8) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,80(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// rlwinm r11,r4,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 5) & 0xFFFFFFE0;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r5,16(r8)
	PPC_STORE_U32(ctx.r8.u32 + 16, ctx.r5.u32);
	// lwz r10,80(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 80);
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r6,20(r7)
	PPC_STORE_U32(ctx.r7.u32 + 20, ctx.r6.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83B699F0"))) PPC_WEAK_FUNC(sub_83B699F0);
PPC_FUNC_IMPL(__imp__sub_83B699F0) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,80(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// rlwinm r11,r4,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 5) & 0xFFFFFFE0;
	// li r3,0
	ctx.r3.s64 = 0;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r5,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83B69A08"))) PPC_WEAK_FUNC(sub_83B69A08);
PPC_FUNC_IMPL(__imp__sub_83B69A08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdac8
	ctx.lr = 0x83B69A10;
	__savegprlr_20(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31738
	ctx.r11.s64 = -2079981568;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r23,r4
	ctx.r23.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r24,r6
	ctx.r24.u64 = ctx.r6.u64;
	// lwz r11,-332(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -332);
	// mr r22,r7
	ctx.r22.u64 = ctx.r7.u64;
	// mr r21,r8
	ctx.r21.u64 = ctx.r8.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bgt cr6,0x83b69a48
	if (cr6.gt) goto loc_83B69A48;
	// li r3,5
	ctx.r3.s64 = 5;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb18
	__restgprlr_20(ctx, base);
	return;
loc_83B69A48:
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x831cdcf0
	ctx.lr = 0x83B69A58;
	sub_831CDCF0(ctx, base);
	// addi r11,r24,15
	ctx.r11.s64 = ctx.r24.s64 + 15;
	// li r20,0
	ctx.r20.s64 = 0;
	// rlwinm r11,r11,0,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF0;
	// stw r20,0(r21)
	PPC_STORE_U32(ctx.r21.u32 + 0, ctx.r20.u32);
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// addi r10,r11,99
	ctx.r10.s64 = ctx.r11.s64 + 99;
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
	// rlwinm r31,r10,0,0,27
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFF0;
	// ble cr6,0x83b69a90
	if (!cr6.gt) goto loc_83B69A90;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// mtctr r30
	ctr.u64 = ctx.r30.u64;
loc_83B69A84:
	// stwu r31,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r31.u32);
	ctx.r11.u32 = ea;
	// addi r31,r31,512
	ctx.r31.s64 = ctx.r31.s64 + 512;
	// bdnz 0x83b69a84
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83B69A84;
loc_83B69A90:
	// mr r27,r20
	ctx.r27.u64 = ctx.r20.u64;
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// ble cr6,0x83b69ad0
	if (!cr6.gt) goto loc_83B69AD0;
	// addi r26,r28,32
	ctx.r26.s64 = ctx.r28.s64 + 32;
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
loc_83B69AA4:
	// li r4,1584
	ctx.r4.s64 = 1584;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a804e8
	ctx.lr = 0x83B69AB0;
	sub_83A804E8(ctx, base);
	// stw r3,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83b69b1c
	if (cr6.eq) goto loc_83B69B1C;
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r31,r31,1584
	ctx.r31.s64 = ctx.r31.s64 + 1584;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmpw cr6,r27,r30
	cr6.compare<int32_t>(ctx.r27.s32, ctx.r30.s32, xer);
	// blt cr6,0x83b69aa4
	if (cr6.lt) goto loc_83B69AA4;
loc_83B69AD0:
	// rlwinm r11,r25,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 5) & 0xFFFFFFE0;
	// stw r31,80(r28)
	PPC_STORE_U32(ctx.r28.u32 + 80, ctx.r31.u32);
	// mullw r9,r23,r30
	ctx.r9.s64 = int64_t(ctx.r23.s32) * int64_t(ctx.r30.s32);
	// rotlwi r10,r31,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r31.u32, 0);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// cmpwi cr6,r25,0
	cr6.compare<int32_t>(ctx.r25.s32, 0, xer);
	// ble cr6,0x83b69b04
	if (!cr6.gt) goto loc_83B69B04;
	// addi r10,r10,-24
	ctx.r10.s64 = ctx.r10.s64 + -24;
	// mtctr r25
	ctr.u64 = ctx.r25.u64;
loc_83B69AF8:
	// stwu r11,32(r10)
	ea = 32 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r10.u32 = ea;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// bdnz 0x83b69af8
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83B69AF8;
loc_83B69B04:
	// subf r11,r24,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r24.s64;
	// cmplw cr6,r11,r22
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r22.u32, xer);
	// ble cr6,0x83b69b60
	if (!cr6.gt) goto loc_83B69B60;
	// li r3,8
	ctx.r3.s64 = 8;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb18
	__restgprlr_20(ctx, base);
	return;
loc_83B69B1C:
	// lwz r11,68(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 68);
	// stw r20,80(r28)
	PPC_STORE_U32(ctx.r28.u32 + 80, ctx.r20.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble cr6,0x83b69b54
	if (!cr6.gt) goto loc_83B69B54;
	// mr r31,r26
	ctx.r31.u64 = ctx.r26.u64;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
loc_83B69B34:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83b69b48
	if (cr6.eq) goto loc_83B69B48;
	// bl 0x83a80528
	ctx.lr = 0x83B69B44;
	sub_83A80528(ctx, base);
	// stw r20,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r20.u32);
loc_83B69B48:
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// bne 0x83b69b34
	if (!cr0.eq) goto loc_83B69B34;
loc_83B69B54:
	// li r3,7
	ctx.r3.s64 = 7;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb18
	__restgprlr_20(ctx, base);
	return;
loc_83B69B60:
	// stw r23,64(r28)
	PPC_STORE_U32(ctx.r28.u32 + 64, ctx.r23.u32);
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// stw r30,68(r28)
	PPC_STORE_U32(ctx.r28.u32 + 68, ctx.r30.u32);
	// stw r25,72(r28)
	PPC_STORE_U32(ctx.r28.u32 + 72, ctx.r25.u32);
	// ble cr6,0x83b69b88
	if (!cr6.gt) goto loc_83B69B88;
	// addi r31,r28,28
	ctx.r31.s64 = ctx.r28.s64 + 28;
loc_83B69B78:
	// lwzu r3,4(r31)
	ea = 4 + ctx.r31.u32;
	ctx.r3.u64 = PPC_LOAD_U32(ea);
	ctx.r31.u32 = ea;
	// bl 0x83a80528
	ctx.lr = 0x83B69B80;
	sub_83A80528(ctx, base);
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// bne 0x83b69b78
	if (!cr0.eq) goto loc_83B69B78;
loc_83B69B88:
	// stw r20,76(r28)
	PPC_STORE_U32(ctx.r28.u32 + 76, ctx.r20.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r28,0(r21)
	PPC_STORE_U32(ctx.r21.u32 + 0, ctx.r28.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb18
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B69B9C"))) PPC_WEAK_FUNC(sub_83B69B9C);
PPC_FUNC_IMPL(__imp__sub_83B69B9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B69BA0"))) PPC_WEAK_FUNC(sub_83B69BA0);
PPC_FUNC_IMPL(__imp__sub_83B69BA0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdac0
	ctx.lr = 0x83B69BA8;
	__savegprlr_18(ctx, base);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r19,0
	ctx.r19.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r19,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r19.u32);
	// mr r21,r4
	ctx.r21.u64 = ctx.r4.u64;
	// lwz r29,68(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// mr r18,r5
	ctx.r18.u64 = ctx.r5.u64;
	// lwz r11,76(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	// addi r22,r3,32
	ctx.r22.s64 = ctx.r3.s64 + 32;
	// lwz r25,72(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// mr r24,r19
	ctx.r24.u64 = ctx.r19.u64;
	// lwz r23,80(r3)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// clrlwi r20,r11,31
	ctx.r20.u64 = ctx.r11.u32 & 0x1;
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(ctx.r29.s32, 0, xer);
	// ble cr6,0x83b69c04
	if (!cr6.gt) goto loc_83B69C04;
	// addi r28,r3,-4
	ctx.r28.s64 = ctx.r3.s64 + -4;
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
loc_83B69BEC:
	// li r5,512
	ctx.r5.s64 = 512;
	// lwzu r3,4(r28)
	ea = 4 + ctx.r28.u32;
	ctx.r3.u64 = PPC_LOAD_U32(ea);
	ctx.r28.u32 = ea;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x831cdcf0
	ctx.lr = 0x83B69BFC;
	sub_831CDCF0(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// bne 0x83b69bec
	if (!cr0.eq) goto loc_83B69BEC;
loc_83B69C04:
	// mr r27,r19
	ctx.r27.u64 = ctx.r19.u64;
	// cmpwi cr6,r25,0
	cr6.compare<int32_t>(ctx.r25.s32, 0, xer);
	// ble cr6,0x83b69cf4
	if (!cr6.gt) goto loc_83B69CF4;
	// addi r26,r25,-1
	ctx.r26.s64 = ctx.r25.s64 + -1;
loc_83B69C14:
	// cmpwi cr6,r20,0
	cr6.compare<int32_t>(ctx.r20.s32, 0, xer);
	// mr r28,r27
	ctx.r28.u64 = ctx.r27.u64;
	// beq cr6,0x83b69c24
	if (cr6.eq) goto loc_83B69C24;
	// mr r28,r26
	ctx.r28.u64 = ctx.r26.u64;
loc_83B69C24:
	// rlwinm r11,r28,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 5) & 0xFFFFFFE0;
	// add r31,r11,r23
	ctx.r31.u64 = ctx.r11.u64 + ctx.r23.u64;
	// lwzx r11,r11,r23
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r23.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83b69cdc
	if (cr6.eq) goto loc_83B69CDC;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x83b69cdc
	if (!cr6.eq) goto loc_83B69CDC;
	// stw r19,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r19.u32);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x83a7e720
	ctx.lr = 0x83B69C54;
	sub_83A7E720(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83b69c94
	if (!cr6.eq) goto loc_83B69C94;
loc_83B69C5C:
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x83b69c94
	if (!cr6.eq) goto loc_83B69C94;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x83a803b8
	ctx.lr = 0x83B69C74;
	sub_83A803B8(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bgt cr6,0x83b69ca0
	if (cr6.gt) goto loc_83B69CA0;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x83a7e720
	ctx.lr = 0x83B69C8C;
	sub_83A7E720(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x83b69c5c
	if (cr6.eq) goto loc_83B69C5C;
loc_83B69C94:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble cr6,0x83b69cdc
	if (!cr6.gt) goto loc_83B69CDC;
loc_83B69CA0:
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r6,r1,92
	ctx.r6.s64 = ctx.r1.s64 + 92;
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x83a7f958
	ctx.lr = 0x83B69CB8;
	sub_83A7F958(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83b69cdc
	if (!cr6.eq) goto loc_83B69CDC;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lwz r7,88(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r6,92(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83b695b8
	ctx.lr = 0x83B69CD8;
	sub_83B695B8(ctx, base);
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
loc_83B69CDC:
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r26,r26,-1
	ctx.r26.s64 = ctx.r26.s64 + -1;
	// cmpw cr6,r27,r25
	cr6.compare<int32_t>(ctx.r27.s32, ctx.r25.s32, xer);
	// blt cr6,0x83b69c14
	if (cr6.lt) goto loc_83B69C14;
	// cmpwi cr6,r24,0
	cr6.compare<int32_t>(ctx.r24.s32, 0, xer);
	// bgt cr6,0x83b69d24
	if (cr6.gt) goto loc_83B69D24;
loc_83B69CF4:
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(ctx.r29.s32, 0, xer);
	// ble cr6,0x83b69d14
	if (!cr6.gt) goto loc_83B69D14;
	// addi r30,r22,-4
	ctx.r30.s64 = ctx.r22.s64 + -4;
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
loc_83B69D04:
	// lwzu r3,4(r30)
	ea = 4 + ctx.r30.u32;
	ctx.r3.u64 = PPC_LOAD_U32(ea);
	ctx.r30.u32 = ea;
	// bl 0x83a80528
	ctx.lr = 0x83B69D0C;
	sub_83A80528(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// bne 0x83b69d04
	if (!cr0.eq) goto loc_83B69D04;
loc_83B69D14:
	// stw r19,0(r18)
	PPC_STORE_U32(ctx.r18.u32 + 0, ctx.r19.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x831cdb10
	__restgprlr_18(ctx, base);
	return;
loc_83B69D24:
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(ctx.r29.s32, 0, xer);
	// ble cr6,0x83b69d54
	if (!cr6.gt) goto loc_83B69D54;
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
	// subf r28,r30,r21
	ctx.r28.s64 = ctx.r21.s64 - ctx.r30.s64;
	// subf r27,r30,r22
	ctx.r27.s64 = ctx.r22.s64 - ctx.r30.s64;
loc_83B69D38:
	// lwzx r5,r28,r31
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r31.u32);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwzx r3,r27,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r31.u32);
	// bl 0x83a80538
	ctx.lr = 0x83B69D48;
	sub_83A80538(ctx, base);
	// addic. r29,r29,-1
	xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// bne 0x83b69d38
	if (!cr0.eq) goto loc_83B69D38;
loc_83B69D54:
	// lwz r11,76(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 76);
	// li r10,128
	ctx.r10.s64 = 128;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// stw r9,76(r30)
	PPC_STORE_U32(ctx.r30.u32 + 76, ctx.r9.u32);
	// stw r10,0(r18)
	PPC_STORE_U32(ctx.r18.u32 + 0, ctx.r10.u32);
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x831cdb10
	__restgprlr_18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B69D74"))) PPC_WEAK_FUNC(sub_83B69D74);
PPC_FUNC_IMPL(__imp__sub_83B69D74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B69D78"))) PPC_WEAK_FUNC(sub_83B69D78);
PPC_FUNC_IMPL(__imp__sub_83B69D78) {
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
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// bne cr6,0x83b69d90
	if (!cr6.eq) goto loc_83B69D90;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
loc_83B69D90:
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r5,r7
	ctx.r5.u64 = ctx.r7.u64;
	// stw r11,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r11.u32);
	// bl 0x83b69ba0
	ctx.lr = 0x83B69DA0;
	sub_83B69BA0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83B69DB0"))) PPC_WEAK_FUNC(sub_83B69DB0);
PPC_FUNC_IMPL(__imp__sub_83B69DB0) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r10,-31767
	ctx.r10.s64 = -2081882112;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r10,r10,-6224
	ctx.r10.s64 = ctx.r10.s64 + -6224;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83B69DC8"))) PPC_WEAK_FUNC(sub_83B69DC8);
PPC_FUNC_IMPL(__imp__sub_83B69DC8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdac0
	ctx.lr = 0x83B69DD0;
	__savegprlr_18(ctx, base);
	// stfd f31,-128(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -128, ctx.f31.u64);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r7
	ctx.r31.u64 = ctx.r7.u64;
	// mr r18,r8
	ctx.r18.u64 = ctx.r8.u64;
	// cmpwi cr6,r4,64
	cr6.compare<int32_t>(ctx.r4.s32, 64, xer);
	// blt cr6,0x83b6a1f8
	if (cr6.lt) goto loc_83B6A1F8;
	// li r23,0
	ctx.r23.s64 = 0;
	// lis r12,32639
	ctx.r12.s64 = 2139029504;
	// stw r23,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r23.u32);
	// lis r11,18499
	ctx.r11.s64 = 1212350464;
	// lbz r10,2(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 2);
	// ori r12,r12,32639
	ctx.r12.u64 = ctx.r12.u64 | 32639;
	// lbz r9,3(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 3);
	// ori r11,r11,16640
	ctx.r11.u64 = ctx.r11.u64 | 16640;
	// lbz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// mr r27,r23
	ctx.r27.u64 = ctx.r23.u64;
	// lbz r7,1(r3)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1);
	// rotlwi r7,r7,8
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r7.u32, 8);
	// or r10,r7,r10
	ctx.r10.u64 = ctx.r7.u64 | ctx.r10.u64;
	// rlwinm r8,r8,24,1,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 24) & 0x7FFFFFFF;
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// mr r26,r23
	ctx.r26.u64 = ctx.r23.u64;
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// mr r24,r23
	ctx.r24.u64 = ctx.r23.u64;
	// and r10,r10,r12
	ctx.r10.u64 = ctx.r10.u64 & ctx.r12.u64;
	// mr r25,r23
	ctx.r25.u64 = ctx.r23.u64;
	// or r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 | ctx.r8.u64;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// bne cr6,0x83b6a1f8
	if (!cr6.eq) goto loc_83B6A1F8;
	// addi r11,r3,6
	ctx.r11.s64 = ctx.r3.s64 + 6;
	// lbz r9,6(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 6);
	// lbz r10,7(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 7);
	// lis r12,32639
	ctx.r12.s64 = 2139029504;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// rotlwi r9,r9,8
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 8);
	// ori r12,r12,32639
	ctx.r12.u64 = ctx.r12.u64 | 32639;
	// add r30,r9,r10
	ctx.r30.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lis r8,26221
	ctx.r8.s64 = 1718419456;
	// lbz r10,1(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r9,2(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// ori r8,r8,29696
	ctx.r8.u64 = ctx.r8.u64 | 29696;
	// rotlwi r10,r10,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// lbz r7,3(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// lbz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// rlwinm r9,r6,24,1,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 24) & 0x7FFFFFFF;
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// or r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 | ctx.r7.u64;
	// and r10,r10,r12
	ctx.r10.u64 = ctx.r10.u64 & ctx.r12.u64;
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// cmplw cr6,r10,r8
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, xer);
	// bne cr6,0x83b6a1f8
	if (!cr6.eq) goto loc_83B6A1F8;
	// lbzu r21,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r21.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// lis r10,25455
	ctx.r10.s64 = 1668218880;
	// lis r12,32639
	ctx.r12.s64 = 2139029504;
	// ori r9,r10,28016
	ctx.r9.u64 = ctx.r10.u64 | 28016;
	// ori r12,r12,32639
	ctx.r12.u64 = ctx.r12.u64 | 32639;
	// lbzu r10,1(r11)
	ea = 1 + ctx.r11.u32;
	ctx.r10.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// rotlwi r10,r10,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// lbz r8,1(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r7,2(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// lbzu r6,3(r11)
	ea = 3 + ctx.r11.u32;
	ctx.r6.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// or r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 | ctx.r8.u64;
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// rotlwi r8,r6,8
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r6.u32, 8);
	// or r22,r10,r7
	ctx.r22.u64 = ctx.r10.u64 | ctx.r7.u64;
	// lbz r6,1(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r10,2(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r7,3(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// or r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 | ctx.r6.u64;
	// lbzu r6,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r6.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// rlwinm r8,r8,8,0,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFFFF00;
	// rotlwi r6,r6,8
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r6.u32, 8);
	// or r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 | ctx.r10.u64;
	// lbz r8,1(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// lbzu r5,2(r11)
	ea = 2 + ctx.r11.u32;
	ctx.r5.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// or r28,r6,r8
	ctx.r28.u64 = ctx.r6.u64 | ctx.r8.u64;
	// or r20,r10,r7
	ctx.r20.u64 = ctx.r10.u64 | ctx.r7.u64;
	// rotlwi r10,r5,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r5.u32, 8);
	// lbz r8,1(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// lbzu r7,2(r11)
	ea = 2 + ctx.r11.u32;
	ctx.r7.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// or r19,r10,r8
	ctx.r19.u64 = ctx.r10.u64 | ctx.r8.u64;
	// rotlwi r10,r7,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r7.u32, 8);
	// lbz r8,1(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r7,2(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// or r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 | ctx.r8.u64;
	// lbz r8,3(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// or r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 | ctx.r7.u64;
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// or r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 | ctx.r8.u64;
	// and r10,r10,r12
	ctx.r10.u64 = ctx.r10.u64 & ctx.r12.u64;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bne cr6,0x83b69f5c
	if (!cr6.eq) goto loc_83B69F5C;
	// lbzu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r10.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// lbz r9,1(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// b 0x83b69f78
	goto loc_83B69F78;
loc_83B69F5C:
	// lis r9,25701
	ctx.r9.s64 = 1684340736;
	// ori r9,r9,25344
	ctx.r9.u64 = ctx.r9.u64 | 25344;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bne cr6,0x83b6a1f8
	if (!cr6.eq) goto loc_83B6A1F8;
	// lbzu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r10.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// lbz r9,1(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
loc_83B69F78:
	// rotlwi r10,r10,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// lbz r8,2(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r7,3(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// lis r12,32639
	ctx.r12.s64 = 2139029504;
	// or r29,r10,r9
	ctx.r29.u64 = ctx.r10.u64 | ctx.r9.u64;
	// lbz r10,1(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// ori r12,r12,32639
	ctx.r12.u64 = ctx.r12.u64 | 32639;
	// rotlwi r10,r10,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// lis r9,24948
	ctx.r9.s64 = 1634992128;
	// or r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 | ctx.r8.u64;
	// rlwinm r8,r6,24,1,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 24) & 0x7FFFFFFF;
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// ori r9,r9,26624
	ctx.r9.u64 = ctx.r9.u64 | 26624;
	// or r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 | ctx.r7.u64;
	// and r10,r10,r12
	ctx.r10.u64 = ctx.r10.u64 & ctx.r12.u64;
	// or r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 | ctx.r8.u64;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bne cr6,0x83b69fc8
	if (!cr6.eq) goto loc_83B69FC8;
	// addi r11,r11,6
	ctx.r11.s64 = ctx.r11.s64 + 6;
loc_83B69FC8:
	// lbz r10,1(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// lis r12,32639
	ctx.r12.s64 = 2139029504;
	// lbz r8,2(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// lis r9,27759
	ctx.r9.s64 = 1819213824;
	// rotlwi r10,r10,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// lbz r7,3(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// lbz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// ori r12,r12,32639
	ctx.r12.u64 = ctx.r12.u64 | 32639;
	// or r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 | ctx.r8.u64;
	// rlwinm r8,r6,24,1,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 24) & 0x7FFFFFFF;
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// ori r9,r9,28528
	ctx.r9.u64 = ctx.r9.u64 | 28528;
	// or r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 | ctx.r7.u64;
	// and r10,r10,r12
	ctx.r10.u64 = ctx.r10.u64 & ctx.r12.u64;
	// or r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 | ctx.r8.u64;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bne cr6,0x83b6a0b4
	if (!cr6.eq) goto loc_83B6A0B4;
	// lbzu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r10.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// li r27,-1
	ctx.r27.s64 = -1;
	// rotlwi r10,r10,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// lbz r9,1(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r8,2(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// lbz r7,3(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// lbzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// rotlwi r9,r9,8
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 8);
	// or r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 | ctx.r8.u64;
	// lbz r8,1(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// lbz r6,2(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// or r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 | ctx.r8.u64;
	// lbz r5,3(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// or r7,r10,r7
	ctx.r7.u64 = ctx.r10.u64 | ctx.r7.u64;
	// lbzu r8,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r8.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// rlwinm r10,r9,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFFFF00;
	// rotlwi r9,r8,8
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r8.u32, 8);
	// or r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 | ctx.r6.u64;
	// rlwinm r8,r7,10,0,21
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 10) & 0xFFFFFC00;
	// lbz r6,1(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// lbzu r4,2(r11)
	ea = 2 + ctx.r11.u32;
	ctx.r4.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// subf r8,r28,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r28.s64;
	// or r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 | ctx.r5.u64;
	// rotlwi r5,r4,8
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r4.u32, 8);
	// addi r4,r10,1
	ctx.r4.s64 = ctx.r10.s64 + 1;
	// addi r3,r10,1
	ctx.r3.s64 = ctx.r10.s64 + 1;
	// lbz r10,1(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// or r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 | ctx.r6.u64;
	// rlwinm r4,r4,10,0,21
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 10) & 0xFFFFFC00;
	// or r6,r5,r10
	ctx.r6.u64 = ctx.r5.u64 | ctx.r10.u64;
	// mullw r10,r7,r29
	ctx.r10.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r29.s32);
	// mullw r7,r3,r29
	ctx.r7.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r29.s32);
	// subf r6,r6,r4
	ctx.r6.s64 = ctx.r4.s64 - ctx.r6.s64;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// add r26,r10,r30
	ctx.r26.u64 = ctx.r10.u64 + ctx.r30.u64;
	// add r25,r8,r9
	ctx.r25.u64 = ctx.r8.u64 + ctx.r9.u64;
	// add r24,r7,r30
	ctx.r24.u64 = ctx.r7.u64 + ctx.r30.u64;
	// subf r23,r28,r6
	ctx.r23.s64 = ctx.r6.s64 - ctx.r28.s64;
loc_83B6A0B4:
	// lbz r10,1(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// lis r12,32639
	ctx.r12.s64 = 2139029504;
	// lbz r8,2(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// lis r9,25449
	ctx.r9.s64 = 1667825664;
	// rotlwi r10,r10,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// lbz r7,3(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// lbz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// ori r12,r12,32639
	ctx.r12.u64 = ctx.r12.u64 | 32639;
	// or r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 | ctx.r8.u64;
	// rlwinm r8,r6,24,1,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 24) & 0x7FFFFFFF;
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// ori r9,r9,28776
	ctx.r9.u64 = ctx.r9.u64 | 28776;
	// or r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 | ctx.r7.u64;
	// and r10,r10,r12
	ctx.r10.u64 = ctx.r10.u64 & ctx.r12.u64;
	// or r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 | ctx.r8.u64;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bne cr6,0x83b6a0fc
	if (!cr6.eq) goto loc_83B6A0FC;
	// addi r11,r11,6
	ctx.r11.s64 = ctx.r11.s64 + 6;
loc_83B6A0FC:
	// lbz r10,1(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// lis r12,32639
	ctx.r12.s64 = 2139029504;
	// lbz r8,2(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// lis r9,29302
	ctx.r9.s64 = 1920335872;
	// rotlwi r10,r10,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// lbz r7,3(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// lbz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// ori r12,r12,32639
	ctx.r12.u64 = ctx.r12.u64 | 32639;
	// or r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 | ctx.r8.u64;
	// rlwinm r8,r6,24,1,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 24) & 0x7FFFFFFF;
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// ori r9,r9,24832
	ctx.r9.u64 = ctx.r9.u64 | 24832;
	// or r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 | ctx.r7.u64;
	// and r10,r10,r12
	ctx.r10.u64 = ctx.r10.u64 & ctx.r12.u64;
	// or r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 | ctx.r8.u64;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bne cr6,0x83b6a174
	if (!cr6.eq) goto loc_83B6A174;
	// lbzu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r10.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// rotlwi r10,r10,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// lbz r9,1(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r8,2(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// lbz r11,3(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// or r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 | ctx.r8.u64;
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lfs f31,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f31.f64 = double(temp.f32);
	// b 0x83b6a17c
	goto loc_83B6A17C;
loc_83B6A174:
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lfs f31,-26260(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -26260);
	ctx.f31.f64 = double(temp.f32);
loc_83B6A17C:
	// li r4,68
	ctx.r4.s64 = 68;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831ea7a0
	ctx.lr = 0x83B6A188;
	sub_831EA7A0(ctx, base);
	// rlwinm r11,r20,10,0,21
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 10) & 0xFFFFFC00;
	// li r8,4
	ctx.r8.s64 = 4;
	// stfs f31,48(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 48, temp.u32);
	// subf r9,r19,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r19.s64;
	// stw r21,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r21.u32);
	// mullw r10,r22,r29
	ctx.r10.s64 = int64_t(ctx.r22.s32) * int64_t(ctx.r29.s32);
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// stw r22,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r22.u32);
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// stw r27,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r27.u32);
	// stw r26,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r26.u32);
	// stw r25,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r25.u32);
	// stw r24,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r24.u32);
	// stw r23,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r23.u32);
	// stw r30,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r30.u32);
	// stw r29,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r29.u32);
	// li r11,1024
	ctx.r11.s64 = 1024;
	// subf r9,r28,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r28.s64;
	// srawi r10,r10,7
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7F) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 7;
	// stw r11,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r9,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r9.u32);
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r8,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r8.u32);
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// stw r30,0(r18)
	PPC_STORE_U32(ctx.r18.u32 + 0, ctx.r30.u32);
	// b 0x83b6a1fc
	goto loc_83B6A1FC;
loc_83B6A1F8:
	// li r3,-2
	ctx.r3.s64 = -2;
loc_83B6A1FC:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// lfd f31,-128(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -128);
	// b 0x831cdb10
	__restgprlr_18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B6A208"))) PPC_WEAK_FUNC(sub_83B6A208);
PPC_FUNC_IMPL(__imp__sub_83B6A208) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r10,-32203
	ctx.r10.s64 = -2110455808;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r10,r10,-23728
	ctx.r10.s64 = ctx.r10.s64 + -23728;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83B6A220"))) PPC_WEAK_FUNC(sub_83B6A220);
PPC_FUNC_IMPL(__imp__sub_83B6A220) {
	PPC_FUNC_PROLOGUE();
	// li r11,4
	ctx.r11.s64 = 4;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83B6A230"))) PPC_WEAK_FUNC(sub_83B6A230);
PPC_FUNC_IMPL(__imp__sub_83B6A230) {
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
	// bl 0x83a7e0c0
	ctx.lr = 0x83B6A240;
	sub_83A7E0C0(ctx, base);
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

__attribute__((alias("__imp__sub_83B6A254"))) PPC_WEAK_FUNC(sub_83B6A254);
PPC_FUNC_IMPL(__imp__sub_83B6A254) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B6A258"))) PPC_WEAK_FUNC(sub_83B6A258);
PPC_FUNC_IMPL(__imp__sub_83B6A258) {
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
	// lwz r9,180(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r8,-32203
	ctx.r8.s64 = -2110455808;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// li r5,-5
	ctx.r5.s64 = -5;
	// addi r4,r8,-23696
	ctx.r4.s64 = ctx.r8.s64 + -23696;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
	// bl 0x831ea418
	ctx.lr = 0x83B6A288;
	sub_831EA418(ctx, base);
	// li r3,-5
	ctx.r3.s64 = -5;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83B6A29C"))) PPC_WEAK_FUNC(sub_83B6A29C);
PPC_FUNC_IMPL(__imp__sub_83B6A29C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B6A2A0"))) PPC_WEAK_FUNC(sub_83B6A2A0);
PPC_FUNC_IMPL(__imp__sub_83B6A2A0) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// bl 0x83a7e080
	ctx.lr = 0x83B6A2C8;
	sub_83A7E080(ctx, base);
	// addi r11,r31,7
	ctx.r11.s64 = ctx.r31.s64 + 7;
	// li r4,4
	ctx.r4.s64 = 4;
	// rlwinm r31,r11,0,0,28
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831ea7a0
	ctx.lr = 0x83B6A2DC;
	sub_831EA7A0(ctx, base);
	// stw r31,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r31.u32);
	// li r3,0
	ctx.r3.s64 = 0;
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

__attribute__((alias("__imp__sub_83B6A2FC"))) PPC_WEAK_FUNC(sub_83B6A2FC);
PPC_FUNC_IMPL(__imp__sub_83B6A2FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B6A300"))) PPC_WEAK_FUNC(sub_83B6A300);
PPC_FUNC_IMPL(__imp__sub_83B6A300) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83b6a314
	if (!cr6.eq) goto loc_83B6A314;
	// li r3,-3
	ctx.r3.s64 = -3;
	// blr 
	return;
loc_83B6A314:
	// lis r10,-31767
	ctx.r10.s64 = -2081882112;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r10,r10,-6184
	ctx.r10.s64 = ctx.r10.s64 + -6184;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83B6A328"))) PPC_WEAK_FUNC(sub_83B6A328);
PPC_FUNC_IMPL(__imp__sub_83B6A328) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r10,-32203
	ctx.r10.s64 = -2110455808;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r10,r10,-23684
	ctx.r10.s64 = ctx.r10.s64 + -23684;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83B6A340"))) PPC_WEAK_FUNC(sub_83B6A340);
PPC_FUNC_IMPL(__imp__sub_83B6A340) {
	PPC_FUNC_PROLOGUE();
	// li r11,6
	ctx.r11.s64 = 6;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r11.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r10,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83B6A358"))) PPC_WEAK_FUNC(sub_83B6A358);
PPC_FUNC_IMPL(__imp__sub_83B6A358) {
	PPC_FUNC_PROLOGUE();
	// li r11,24
	ctx.r11.s64 = 24;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83B6A368"))) PPC_WEAK_FUNC(sub_83B6A368);
PPC_FUNC_IMPL(__imp__sub_83B6A368) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83B6A370;
	__savegprlr_29(ctx, base);
	// lwz r29,84(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// rotlwi r7,r5,1
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r5.u32, 1);
	// addi r3,r7,-1
	ctx.r3.s64 = ctx.r7.s64 + -1;
	// stw r6,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r6.u32);
	// stw r6,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r6.u32);
	// lwz r31,4(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// divw r5,r5,r11
	ctx.r5.s32 = PPCDivide(ctx.r5.s32, ctx.r11.s32);
	// rotlwi r7,r5,1
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r5.u32, 1);
	// andc r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 & ~ctx.r3.u64;
	// addi r7,r7,-1
	ctx.r7.s64 = ctx.r7.s64 + -1;
	// divw r5,r5,r31
	ctx.r5.s32 = PPCDivide(ctx.r5.s32, ctx.r31.s32);
	// andc r7,r31,r7
	ctx.r7.u64 = ctx.r31.u64 & ~ctx.r7.u64;
	// twllei r11,0
	// twllei r31,0
	// twlgei r3,-1
	// cmpw cr6,r5,r9
	cr6.compare<int32_t>(ctx.r5.s32, ctx.r9.s32, xer);
	// twlgei r7,-1
	// blt cr6,0x83b6a3c8
	if (cr6.lt) goto loc_83B6A3C8;
	// mr r5,r9
	ctx.r5.u64 = ctx.r9.u64;
loc_83B6A3C8:
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne cr6,0x83b6a430
	if (!cr6.eq) goto loc_83B6A430;
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// ble cr6,0x83b6a474
	if (!cr6.gt) goto loc_83B6A474;
	// lis r9,-32221
	ctx.r9.s64 = -2111635456;
	// addi r31,r4,-2
	ctx.r31.s64 = ctx.r4.s64 + -2;
	// lfs f0,23672(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 23672);
	ctx.f0.f64 = double(temp.f32);
loc_83B6A3E8:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble cr6,0x83b6a420
	if (!cr6.gt) goto loc_83B6A420;
	// rlwinm r3,r6,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// addi r9,r8,-4
	ctx.r9.s64 = ctx.r8.s64 + -4;
loc_83B6A3FC:
	// lhau r7,2(r31)
	ea = 2 + ctx.r31.u32;
	ctx.r7.s64 = int16_t(PPC_LOAD_U16(ea));
	ctx.r31.u32 = ea;
	// std r7,-48(r1)
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.r7.u64);
	// lfd f13,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// lwzu r4,4(r9)
	ea = 4 + ctx.r9.u32;
	ctx.r4.u64 = PPC_LOAD_U32(ea);
	ctx.r9.u32 = ea;
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfsx f13,r4,r3
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r4.u32 + ctx.r3.u32, temp.u32);
	// bdnz 0x83b6a3fc
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83B6A3FC;
loc_83B6A420:
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// cmpw cr6,r6,r5
	cr6.compare<int32_t>(ctx.r6.s32, ctx.r5.s32, xer);
	// blt cr6,0x83b6a3e8
	if (cr6.lt) goto loc_83B6A3E8;
	// b 0x83b6a474
	goto loc_83B6A474;
loc_83B6A430:
	// cmpwi cr6,r9,1
	cr6.compare<int32_t>(ctx.r9.s32, 1, xer);
	// bne cr6,0x83b6a490
	if (!cr6.eq) goto loc_83B6A490;
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// ble cr6,0x83b6a474
	if (!cr6.gt) goto loc_83B6A474;
	// addi r3,r4,-4
	ctx.r3.s64 = ctx.r4.s64 + -4;
loc_83B6A444:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble cr6,0x83b6a468
	if (!cr6.gt) goto loc_83B6A468;
	// rlwinm r7,r6,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// addi r9,r8,-4
	ctx.r9.s64 = ctx.r8.s64 + -4;
loc_83B6A458:
	// lwzu r4,4(r9)
	ea = 4 + ctx.r9.u32;
	ctx.r4.u64 = PPC_LOAD_U32(ea);
	ctx.r9.u32 = ea;
	// lfsu f0,4(r3)
	ctx.fpscr.disableFlushMode();
	ea = 4 + ctx.r3.u32;
	temp.u32 = PPC_LOAD_U32(ea);
	ctx.f0.f64 = double(temp.f32);
	ctx.r3.u32 = ea;
	// stfsx f0,r4,r7
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + ctx.r7.u32, temp.u32);
	// bdnz 0x83b6a458
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83B6A458;
loc_83B6A468:
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// cmpw cr6,r6,r5
	cr6.compare<int32_t>(ctx.r6.s32, ctx.r5.s32, xer);
	// blt cr6,0x83b6a444
	if (cr6.lt) goto loc_83B6A444;
loc_83B6A474:
	// stw r5,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r5.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mullw r9,r9,r5
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r5.s32);
	// mullw r11,r9,r11
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// b 0x83b6a494
	goto loc_83B6A494;
loc_83B6A490:
	// li r3,-4
	ctx.r3.s64 = -4;
loc_83B6A494:
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B6A498"))) PPC_WEAK_FUNC(sub_83B6A498);
PPC_FUNC_IMPL(__imp__sub_83B6A498) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// stw r4,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// stw r5,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r5.u32);
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r6,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r6.u32);
	// beq cr6,0x83b6a4b4
	if (cr6.eq) goto loc_83B6A4B4;
	// li r11,4
	ctx.r11.s64 = 4;
loc_83B6A4B4:
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83B6A4C0"))) PPC_WEAK_FUNC(sub_83B6A4C0);
PPC_FUNC_IMPL(__imp__sub_83B6A4C0) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r4,7
	ctx.r11.s64 = ctx.r4.s64 + 7;
	// li r3,0
	ctx.r3.s64 = 0;
	// rlwinm r11,r11,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83B6A4D4"))) PPC_WEAK_FUNC(sub_83B6A4D4);
PPC_FUNC_IMPL(__imp__sub_83B6A4D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B6A4D8"))) PPC_WEAK_FUNC(sub_83B6A4D8);
PPC_FUNC_IMPL(__imp__sub_83B6A4D8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83b6a4ec
	if (!cr6.eq) goto loc_83B6A4EC;
	// li r3,-3
	ctx.r3.s64 = -3;
	// blr 
	return;
loc_83B6A4EC:
	// lis r10,-31767
	ctx.r10.s64 = -2081882112;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r10,r10,-6144
	ctx.r10.s64 = ctx.r10.s64 + -6144;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83B6A500"))) PPC_WEAK_FUNC(sub_83B6A500);
PPC_FUNC_IMPL(__imp__sub_83B6A500) {
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
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r11,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r11.u32);
	// mr r31,r7
	ctx.r31.u64 = ctx.r7.u64;
	// mr r30,r8
	ctx.r30.u64 = ctx.r8.u64;
	// bl 0x83b6b6e8
	ctx.lr = 0x83B6A52C;
	sub_83B6B6E8(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bgt 0x83b6a53c
	if (cr0.gt) goto loc_83B6A53C;
loc_83B6A534:
	// li r3,-2
	ctx.r3.s64 = -2;
	// b 0x83b6a5cc
	goto loc_83B6A5CC;
loc_83B6A53C:
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r11,358
	cr6.compare<uint32_t>(ctx.r11.u32, 358, xer);
	// bne cr6,0x83b6a534
	if (!cr6.eq) goto loc_83B6A534;
	// li r4,68
	ctx.r4.s64 = 68;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831ea7a0
	ctx.lr = 0x83B6A554;
	sub_831EA7A0(ctx, base);
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lis r8,1
	ctx.r8.s64 = 65536;
	// lwz r7,164(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// mullw r6,r11,r10
	ctx.r6.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// lwz r9,124(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// stw r7,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r7.u32);
	// ori r11,r8,1
	ctx.r11.u64 = ctx.r8.u64 | 1;
	// rlwinm r10,r6,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// beq cr6,0x83b6a5c4
	if (cr6.eq) goto loc_83B6A5C4;
	// lwz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// li r6,-1
	ctx.r6.s64 = -1;
	// lwz r10,172(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	// lwz r8,176(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r6,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r6.u32);
	// add r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 + ctx.r10.u64;
	// stw r9,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r9.u32);
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// stw r10,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r10.u32);
	// stw r8,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r8.u32);
loc_83B6A5C4:
	// stw r7,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r7.u32);
	// li r3,0
	ctx.r3.s64 = 0;
loc_83B6A5CC:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lwz r12,-8(r1)
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

__attribute__((alias("__imp__sub_83B6A5E4"))) PPC_WEAK_FUNC(sub_83B6A5E4);
PPC_FUNC_IMPL(__imp__sub_83B6A5E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B6A5E8"))) PPC_WEAK_FUNC(sub_83B6A5E8);
PPC_FUNC_IMPL(__imp__sub_83B6A5E8) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r10,-32203
	ctx.r10.s64 = -2110455808;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r10,r10,-23660
	ctx.r10.s64 = ctx.r10.s64 + -23660;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83B6A600"))) PPC_WEAK_FUNC(sub_83B6A600);
PPC_FUNC_IMPL(__imp__sub_83B6A600) {
	PPC_FUNC_PROLOGUE();
	// li r11,100
	ctx.r11.s64 = 100;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83B6A610"))) PPC_WEAK_FUNC(sub_83B6A610);
PPC_FUNC_IMPL(__imp__sub_83B6A610) {
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
	ctx.lr = 0x83B6A618;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31738
	ctx.r31.s64 = -2079981568;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// lwz r11,-328(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -328);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x83b6a64c
	if (!cr6.eq) goto loc_83B6A64C;
	// bl 0x83a431c8
	ctx.lr = 0x83B6A644;
	sub_83A431C8(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,-328(r31)
	PPC_STORE_U32(ctx.r31.u32 + -328, ctx.r11.u32);
loc_83B6A64C:
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// cmpwi cr6,r11,8
	cr6.compare<int32_t>(ctx.r11.s32, 8, xer);
	// srawi r11,r10,1
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r10.s32 >> 1;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// srawi r11,r11,1
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	// addze r30,r11
	temp.s64 = ctx.r11.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r30.s64 = temp.s64;
	// bgt cr6,0x83b6a6f4
	if (cr6.gt) goto loc_83B6A6F4;
	// cmpwi cr6,r30,4
	cr6.compare<int32_t>(ctx.r30.s32, 4, xer);
	// bgt cr6,0x83b6a6f4
	if (cr6.gt) goto loc_83B6A6F4;
	// addi r11,r29,7
	ctx.r11.s64 = ctx.r29.s64 + 7;
	// li r4,92
	ctx.r4.s64 = 92;
	// rlwinm r31,r11,0,0,28
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831ea7a0
	ctx.lr = 0x83B6A68C;
	sub_831EA7A0(ctx, base);
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,2048
	ctx.r5.s64 = 2048;
	// li r4,-1
	ctx.r4.s64 = -1;
	// rlwinm r3,r30,12,0,19
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 12) & 0xFFFFF000;
	// rlwinm r29,r30,11,0,20
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 11) & 0xFFFFF800;
	// bl 0x83a8b8a8
	ctx.lr = 0x83B6A6A4;
	sub_83A8B8A8(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x83b6a6c0
	if (!cr0.eq) goto loc_83B6A6C0;
	// lis r11,-32203
	ctx.r11.s64 = -2110455808;
	// li r5,-3
	ctx.r5.s64 = -3;
	// addi r4,r11,-23512
	ctx.r4.s64 = ctx.r11.s64 + -23512;
	// bl 0x831ea418
	ctx.lr = 0x83B6A6BC;
	sub_831EA418(ctx, base);
	// b 0x83b6a704
	goto loc_83B6A704;
loc_83B6A6C0:
	// li r10,2
	ctx.r10.s64 = 2;
	// addi r11,r31,76
	ctx.r11.s64 = ctx.r31.s64 + 76;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_83B6A6CC:
	// stwu r3,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r3.u32);
	ctx.r11.u32 = ea;
	// add r3,r3,r29
	ctx.r3.u64 = ctx.r3.u64 + ctx.r29.u64;
	// bdnz 0x83b6a6cc
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83B6A6CC;
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// stw r29,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r29.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r31,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r31.u32);
	// b 0x83b6a708
	goto loc_83B6A708;
loc_83B6A6F4:
	// lis r11,-32203
	ctx.r11.s64 = -2110455808;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,-23600
	ctx.r4.s64 = ctx.r11.s64 + -23600;
	// bl 0x831ea3f0
	ctx.lr = 0x83B6A704;
	sub_831EA3F0(ctx, base);
loc_83B6A704:
	// li r3,-5
	ctx.r3.s64 = -5;
loc_83B6A708:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B6A710"))) PPC_WEAK_FUNC(sub_83B6A710);
PPC_FUNC_IMPL(__imp__sub_83B6A710) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83B6A718;
	__savegprlr_29(ctx, base);
	// lwz r11,56(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r9,r6
	ctx.r9.u64 = ctx.r6.u64;
	// cmpw cr6,r11,r7
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r7.s32, xer);
	// blt cr6,0x83b6a73c
	if (cr6.lt) goto loc_83B6A73C;
	// subf r11,r7,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r7.s64;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,56(r10)
	PPC_STORE_U32(ctx.r10.u32 + 56, ctx.r11.u32);
	// b 0x83b6aa90
	goto loc_83B6AA90;
loc_83B6A73C:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble cr6,0x83b6a75c
	if (!cr6.gt) goto loc_83B6A75C;
	// mullw r6,r11,r5
	ctx.r6.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r5.s32);
	// rlwinm r6,r6,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// li r3,0
	ctx.r3.s64 = 0;
	// subf r7,r11,r7
	ctx.r7.s64 = ctx.r7.s64 - ctx.r11.s64;
	// add r9,r6,r9
	ctx.r9.u64 = ctx.r6.u64 + ctx.r9.u64;
	// stw r3,56(r10)
	PPC_STORE_U32(ctx.r10.u32 + 56, ctx.r3.u32);
loc_83B6A75C:
	// lwz r11,60(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// cmpw cr6,r7,r11
	cr6.compare<int32_t>(ctx.r7.s32, ctx.r11.s32, xer);
	// ble cr6,0x83b6a76c
	if (!cr6.gt) goto loc_83B6A76C;
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
loc_83B6A76C:
	// cmpwi cr6,r5,1
	cr6.compare<int32_t>(ctx.r5.s32, 1, xer);
	// bne cr6,0x83b6a878
	if (!cr6.eq) goto loc_83B6A878;
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// addic. r5,r7,-7
	xer.ca = ctx.r7.u32 > 6;
	ctx.r5.s64 = ctx.r7.s64 + -7;
	cr0.compare<int32_t>(ctx.r5.s32, 0, xer);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwzx r8,r11,r8
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// ble 0x83b6a834
	if (!cr0.gt) goto loc_83B6A834;
	// vspltisw128 v63,3
	simde_mm_store_si128((simde__m128i*)ctx.v63.u32, simde_mm_set1_epi32(int(0x3)));
	// lis r4,-32203
	ctx.r4.s64 = -2110455808;
	// vspltisw128 v62,-1
	simde_mm_store_si128((simde__m128i*)ctx.v62.u32, simde_mm_set1_epi32(int(0xFFFFFFFF)));
	// li r10,8
	ctx.r10.s64 = 8;
	// li r11,16
	ctx.r11.s64 = 16;
	// addi r4,r4,-23616
	ctx.r4.s64 = ctx.r4.s64 + -23616;
	// vcsxwfp128 v61,v63,0
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v61.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v63.u32)));
	// vcsxwfp128 v62,v62,0
	simde_mm_store_ps(ctx.v62.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v62.u32)));
loc_83B6A7A8:
	// lvlx128 v60,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v12,v62,v62
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_load_si128((simde__m128i*)ctx.v62.u8));
	// lvrx128 v59,r10,r9
	temp.u32 = ctx.r10.u32 + ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// lvx128 v63,r0,r4
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r4.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsldoi128 v60,v60,v60,8
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v60.u8), 8));
	// vmulfp128 v10,v63,v61
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v10.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v63.f32), simde_mm_load_ps(ctx.v61.f32)));
	// vor128 v13,v63,v63
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_load_si128((simde__m128i*)ctx.v63.u8));
	// vor128 v11,v62,v62
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_load_si128((simde__m128i*)ctx.v62.u8));
	// addi r6,r6,8
	ctx.r6.s64 = ctx.r6.s64 + 8;
	// lvlx128 v58,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v60,v60,v59
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v59.u8)));
	// lvrx128 v59,r10,r9
	temp.u32 = ctx.r10.u32 + ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// cmpw cr6,r6,r5
	cr6.compare<int32_t>(ctx.r6.s32, ctx.r5.s32, xer);
	// vsldoi128 v58,v58,v58,8
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v58.u8), simde_mm_load_si128((simde__m128i*)ctx.v58.u8), 8));
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// vupkd3d128 v0,v60,16
	__builtin_debugtrap();
	// vor128 v60,v58,v59
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v58.u8), simde_mm_load_si128((simde__m128i*)ctx.v59.u8)));
	// vnmsubfp v9,v0,v13,v10
	simde_mm_store_ps(ctx.v9.f32, simde_mm_xor_ps(simde_mm_sub_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v13.f32)), simde_mm_load_ps(ctx.v10.f32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x80000000)))));
	// vor v13,v10,v10
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_load_si128((simde__m128i*)ctx.v10.u8));
	// vupkd3d128 v0,v60,16
	__builtin_debugtrap();
	// vnmsubfp128 v13,v0,v63,v13
	simde_mm_store_ps(ctx.v13.f32, simde_mm_xor_ps(simde_mm_sub_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v63.f32)), simde_mm_load_ps(ctx.v13.f32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x80000000)))));
	// vcmpeqfp128 v63,v9,v9
	simde_mm_store_ps(ctx.v63.f32, simde_mm_cmpeq_ps(simde_mm_load_ps(ctx.v9.f32), simde_mm_load_ps(ctx.v9.f32)));
	// vcmpeqfp128 v60,v13,v13
	simde_mm_store_ps(ctx.v60.f32, simde_mm_cmpeq_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v13.f32)));
	// vnor128 v10,v63,v63
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_xor_si128(simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8)), simde_mm_set1_epi32(-1)));
	// vsel v10,v9,v12,v10
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v9.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v12.u8))));
	// vnor128 v0,v60,v60
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_xor_si128(simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v60.u8)), simde_mm_set1_epi32(-1)));
	// stvlx v10,0,r8
	ea = ctx.r8.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v10.u8[15 - i]);
	// stvrx v10,r8,r11
	ea = ctx.r8.u32 + ctx.r11.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		PPC_STORE_U8(ea - i - 1, ctx.v10.u8[i]);
	// addi r8,r8,16
	ctx.r8.s64 = ctx.r8.s64 + 16;
	// vsel v0,v13,v11,v0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)ctx.v11.u8))));
	// stvlx v0,0,r8
	ea = ctx.r8.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v0.u8[15 - i]);
	// stvrx v0,r8,r11
	ea = ctx.r8.u32 + ctx.r11.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		PPC_STORE_U8(ea - i - 1, ctx.v0.u8[i]);
	// addi r8,r8,16
	ctx.r8.s64 = ctx.r8.s64 + 16;
	// blt cr6,0x83b6a7a8
	if (cr6.lt) goto loc_83B6A7A8;
loc_83B6A834:
	// cmpw cr6,r6,r7
	cr6.compare<int32_t>(ctx.r6.s32, ctx.r7.s32, xer);
	// bge cr6,0x83b6aa8c
	if (!cr6.lt) goto loc_83B6AA8C;
	// addi r11,r9,-2
	ctx.r11.s64 = ctx.r9.s64 + -2;
	// subf r6,r6,r7
	ctx.r6.s64 = ctx.r7.s64 - ctx.r6.s64;
	// lis r9,-32221
	ctx.r9.s64 = -2111635456;
	// addi r10,r8,-4
	ctx.r10.s64 = ctx.r8.s64 + -4;
	// mtctr r6
	ctr.u64 = ctx.r6.u64;
	// lfs f0,23672(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 23672);
	ctx.f0.f64 = double(temp.f32);
loc_83B6A854:
	// lhau r9,2(r11)
	ea = 2 + ctx.r11.u32;
	ctx.r9.s64 = int16_t(PPC_LOAD_U16(ea));
	ctx.r11.u32 = ea;
	// std r9,-48(r1)
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.r9.u64);
	// lfd f13,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfsu f13,4(r10)
	ea = 4 + ctx.r10.u32;
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ea, temp.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x83b6a854
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83B6A854;
	// b 0x83b6aa8c
	goto loc_83B6AA8C;
loc_83B6A878:
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r10,8
	ctx.r10.s64 = 8;
	// addi r5,r11,27636
	ctx.r5.s64 = ctx.r11.s64 + 27636;
	// li r3,12
	ctx.r3.s64 = 12;
	// li r31,4
	ctx.r31.s64 = 4;
	// li r11,16
	ctx.r11.s64 = 16;
	// li r30,20
	ctx.r30.s64 = 20;
	// lvlx128 v63,r5,r10
	temp.u32 = ctx.r5.u32 + ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// rlwinm r6,r4,3,0,28
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// lvlx128 v62,r0,r5
	temp.u32 = ctx.r5.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// li r29,24
	ctx.r29.s64 = 24;
	// vrlimi128 v62,v63,4,3
	simde_mm_store_ps(ctx.v62.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v62.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v63.f32), 57), 4));
	// lvlx128 v61,r5,r3
	temp.u32 = ctx.r5.u32 + ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v63,r5,r31
	temp.u32 = ctx.r5.u32 + ctx.r31.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// li r3,28
	ctx.r3.s64 = 28;
	// vrlimi128 v63,v61,4,3
	simde_mm_store_ps(ctx.v63.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v63.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v61.f32), 57), 4));
	// lvlx128 v61,r5,r11
	temp.u32 = ctx.r5.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v60,r5,r30
	temp.u32 = ctx.r5.u32 + ctx.r30.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// add r4,r6,r8
	ctx.r4.u64 = ctx.r6.u64 + ctx.r8.u64;
	// vor128 v5,v62,v62
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_load_si128((simde__m128i*)ctx.v62.u8));
	// lvlx128 v62,r5,r29
	temp.u32 = ctx.r5.u32 + ctx.r29.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lwzx r8,r6,r8
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r8.u32);
	// addic. r31,r7,-7
	xer.ca = ctx.r7.u32 > 6;
	ctx.r31.s64 = ctx.r7.s64 + -7;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// vor128 v4,v63,v63
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_load_si128((simde__m128i*)ctx.v63.u8));
	// lvlx128 v63,r5,r3
	temp.u32 = ctx.r5.u32 + ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// li r5,0
	ctx.r5.s64 = 0;
	// vrlimi128 v5,v61,2,2
	simde_mm_store_ps(ctx.v5.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v5.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v61.f32), 78), 2));
	// lwz r6,4(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// vrlimi128 v4,v60,2,2
	simde_mm_store_ps(ctx.v4.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v4.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v60.f32), 78), 2));
	// vrlimi128 v5,v62,1,1
	simde_mm_store_ps(ctx.v5.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v5.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v62.f32), 147), 1));
	// vrlimi128 v4,v63,1,1
	simde_mm_store_ps(ctx.v4.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v4.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v63.f32), 147), 1));
	// ble 0x83b6aa2c
	if (!cr0.gt) goto loc_83B6AA2C;
	// vspltisw128 v63,3
	simde_mm_store_si128((simde__m128i*)ctx.v63.u32, simde_mm_set1_epi32(int(0x3)));
	// lis r4,-32203
	ctx.r4.s64 = -2110455808;
	// vspltisw128 v62,-1
	simde_mm_store_si128((simde__m128i*)ctx.v62.u32, simde_mm_set1_epi32(int(0xFFFFFFFF)));
	// addi r4,r4,-23616
	ctx.r4.s64 = ctx.r4.s64 + -23616;
	// vcsxwfp128 v61,v63,0
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v61.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v63.u32)));
	// vcsxwfp128 v62,v62,0
	simde_mm_store_ps(ctx.v62.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v62.u32)));
loc_83B6A910:
	// lvrx128 v59,r10,r9
	temp.u32 = ctx.r10.u32 + ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor128 v6,v62,v62
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_load_si128((simde__m128i*)ctx.v62.u8));
	// lvlx128 v60,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// lvx128 v63,r0,r4
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r4.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vor128 v10,v62,v62
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_load_si128((simde__m128i*)ctx.v62.u8));
	// vsldoi128 v60,v60,v60,8
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v60.u8), 8));
	// vmulfp128 v0,v63,v61
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v0.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v63.f32), simde_mm_load_ps(ctx.v61.f32)));
	// vor128 v9,v63,v63
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_load_si128((simde__m128i*)ctx.v63.u8));
	// addi r5,r5,8
	ctx.r5.s64 = ctx.r5.s64 + 8;
	// vor128 v8,v63,v63
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_load_si128((simde__m128i*)ctx.v63.u8));
	// lvlx128 v58,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v7,v63,v63
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)ctx.v63.u8));
	// vor128 v60,v60,v59
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v59.u8)));
	// lvrx128 v59,r10,r9
	temp.u32 = ctx.r10.u32 + ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// vsldoi128 v58,v58,v58,8
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v58.u8), simde_mm_load_si128((simde__m128i*)ctx.v58.u8), 8));
	// vor128 v12,v62,v62
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_load_si128((simde__m128i*)ctx.v62.u8));
	// cmpw cr6,r5,r31
	cr6.compare<int32_t>(ctx.r5.s32, ctx.r31.s32, xer);
	// vor128 v13,v62,v62
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_load_si128((simde__m128i*)ctx.v62.u8));
	// vupkd3d128 v11,v60,16
	__builtin_debugtrap();
	// vor128 v59,v58,v59
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v58.u8), simde_mm_load_si128((simde__m128i*)ctx.v59.u8)));
	// lvrx128 v58,r10,r9
	temp.u32 = ctx.r10.u32 + ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// lvlx128 v60,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// vnmsubfp v3,v11,v9,v0
	simde_mm_store_ps(ctx.v3.f32, simde_mm_xor_ps(simde_mm_sub_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v9.f32)), simde_mm_load_ps(ctx.v0.f32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x80000000)))));
	// vsldoi128 v60,v60,v60,8
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v60.u8), 8));
	// vupkd3d128 v11,v59,16
	__builtin_debugtrap();
	// lvlx128 v59,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v60,v60,v58
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v58.u8)));
	// lvrx128 v58,r10,r9
	temp.u32 = ctx.r10.u32 + ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vsldoi128 v59,v59,v59,8
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)ctx.v59.u8), 8));
	// vnmsubfp v9,v11,v8,v0
	simde_mm_store_ps(ctx.v9.f32, simde_mm_xor_ps(simde_mm_sub_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v8.f32)), simde_mm_load_ps(ctx.v0.f32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x80000000)))));
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// vupkd3d128 v11,v60,16
	__builtin_debugtrap();
	// vor128 v60,v59,v58
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)ctx.v58.u8)));
	// vor128 v59,v3,v3
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_load_si128((simde__m128i*)ctx.v3.u8));
	// vnmsubfp v3,v11,v7,v0
	simde_mm_store_ps(ctx.v3.f32, simde_mm_xor_ps(simde_mm_sub_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v7.f32)), simde_mm_load_ps(ctx.v0.f32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x80000000)))));
	// vupkd3d128 v11,v60,16
	__builtin_debugtrap();
	// vcmpeqfp128 v60,v59,v59
	simde_mm_store_ps(ctx.v60.f32, simde_mm_cmpeq_ps(simde_mm_load_ps(ctx.v59.f32), simde_mm_load_ps(ctx.v59.f32)));
	// vor128 v8,v59,v59
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_load_si128((simde__m128i*)ctx.v59.u8));
	// vnmsubfp128 v0,v11,v63,v0
	simde_mm_store_ps(ctx.v0.f32, simde_mm_xor_ps(simde_mm_sub_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v63.f32)), simde_mm_load_ps(ctx.v0.f32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x80000000)))));
	// vcmpeqfp128 v63,v9,v9
	simde_mm_store_ps(ctx.v63.f32, simde_mm_cmpeq_ps(simde_mm_load_ps(ctx.v9.f32), simde_mm_load_ps(ctx.v9.f32)));
	// vcmpeqfp128 v59,v3,v3
	simde_mm_store_ps(ctx.v59.f32, simde_mm_cmpeq_ps(simde_mm_load_ps(ctx.v3.f32), simde_mm_load_ps(ctx.v3.f32)));
	// vor v11,v3,v3
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_load_si128((simde__m128i*)ctx.v3.u8));
	// vnor128 v7,v60,v60
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_xor_si128(simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v60.u8)), simde_mm_set1_epi32(-1)));
	// vcmpeqfp128 v60,v0,v0
	simde_mm_store_ps(ctx.v60.f32, simde_mm_cmpeq_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v0.f32)));
	// vsel v7,v8,v6,v7
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)ctx.v8.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8))));
	// vnor128 v8,v63,v63
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_xor_si128(simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8)), simde_mm_set1_epi32(-1)));
	// vsel v8,v9,v10,v8
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v9.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v10.u8))));
	// vnor128 v10,v59,v59
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_xor_si128(simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)ctx.v59.u8)), simde_mm_set1_epi32(-1)));
	// vperm128 v63,v7,v8,v5
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8)));
	// vsel v10,v11,v12,v10
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v11.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v12.u8))));
	// vperm128 v59,v7,v8,v4
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v4.u8)));
	// vnor128 v12,v60,v60
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_xor_si128(simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v60.u8)), simde_mm_set1_epi32(-1)));
	// vsel v12,v0,v13,v12
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8))));
	// stvlx128 v63,r0,r8
	ea = ctx.r8.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v63.u8[15 - i]);
	// stvrx128 v63,r8,r11
	ea = ctx.r8.u32 + ctx.r11.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		PPC_STORE_U8(ea - i - 1, ctx.v63.u8[i]);
	// addi r8,r8,16
	ctx.r8.s64 = ctx.r8.s64 + 16;
	// vperm128 v63,v10,v12,v5
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8)));
	// vperm128 v60,v10,v12,v4
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v4.u8)));
	// stvlx128 v63,r0,r8
	ea = ctx.r8.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v63.u8[15 - i]);
	// stvrx128 v63,r8,r11
	ea = ctx.r8.u32 + ctx.r11.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		PPC_STORE_U8(ea - i - 1, ctx.v63.u8[i]);
	// addi r8,r8,16
	ctx.r8.s64 = ctx.r8.s64 + 16;
	// stvlx128 v59,r0,r6
	ea = ctx.r6.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v59.u8[15 - i]);
	// stvrx128 v59,r6,r11
	ea = ctx.r6.u32 + ctx.r11.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		PPC_STORE_U8(ea - i - 1, ctx.v59.u8[i]);
	// addi r6,r6,16
	ctx.r6.s64 = ctx.r6.s64 + 16;
	// stvlx128 v60,r0,r6
	ea = ctx.r6.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v60.u8[15 - i]);
	// stvrx128 v60,r6,r11
	ea = ctx.r6.u32 + ctx.r11.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		PPC_STORE_U8(ea - i - 1, ctx.v60.u8[i]);
	// addi r6,r6,16
	ctx.r6.s64 = ctx.r6.s64 + 16;
	// blt cr6,0x83b6a910
	if (cr6.lt) goto loc_83B6A910;
loc_83B6AA2C:
	// cmpw cr6,r5,r7
	cr6.compare<int32_t>(ctx.r5.s32, ctx.r7.s32, xer);
	// bge cr6,0x83b6aa8c
	if (!cr6.lt) goto loc_83B6AA8C;
	// addi r11,r8,-4
	ctx.r11.s64 = ctx.r8.s64 + -4;
	// subf r5,r5,r7
	ctx.r5.s64 = ctx.r7.s64 - ctx.r5.s64;
	// lis r8,-32221
	ctx.r8.s64 = -2111635456;
	// addi r10,r6,-4
	ctx.r10.s64 = ctx.r6.s64 + -4;
	// mtctr r5
	ctr.u64 = ctx.r5.u64;
	// lfs f0,23672(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 23672);
	ctx.f0.f64 = double(temp.f32);
loc_83B6AA4C:
	// lha r8,0(r9)
	ctx.r8.s64 = int16_t(PPC_LOAD_U16(ctx.r9.u32 + 0));
	// std r8,-48(r1)
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.r8.u64);
	// lfd f13,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfsu f13,4(r11)
	ea = 4 + ctx.r11.u32;
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// lhau r8,2(r9)
	ea = 2 + ctx.r9.u32;
	ctx.r8.s64 = int16_t(PPC_LOAD_U16(ea));
	ctx.r9.u32 = ea;
	// addi r9,r9,2
	ctx.r9.s64 = ctx.r9.s64 + 2;
	// std r8,-40(r1)
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.r8.u64);
	// lfd f13,-40(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfsu f13,4(r10)
	ea = 4 + ctx.r10.u32;
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ea, temp.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x83b6aa4c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83B6AA4C;
loc_83B6AA8C:
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
loc_83B6AA90:
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B6AA94"))) PPC_WEAK_FUNC(sub_83B6AA94);
PPC_FUNC_IMPL(__imp__sub_83B6AA94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B6AA98"))) PPC_WEAK_FUNC(sub_83B6AA98);
PPC_FUNC_IMPL(__imp__sub_83B6AA98) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x83B6AAA0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,68(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r28,12(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x83b6ab24
	if (cr6.eq) goto loc_83B6AB24;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a43518
	ctx.lr = 0x83B6AAC0;
	sub_83A43518(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x83a8a2c0
	ctx.lr = 0x83B6AAC8;
	sub_83A8A2C0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a43ce0
	ctx.lr = 0x83B6AAD0;
	sub_83A43CE0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x83a8a2c0
	ctx.lr = 0x83B6AAD8;
	sub_83A8A2C0(ctx, base);
	// li r27,0
	ctx.r27.s64 = 0;
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(ctx.r28.s32, 0, xer);
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
	// ble cr6,0x83b6ab00
	if (!cr6.gt) goto loc_83B6AB00;
loc_83B6AAE8:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a43a80
	ctx.lr = 0x83B6AAF4;
	sub_83A43A80(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r30,r28
	cr6.compare<int32_t>(ctx.r30.s32, ctx.r28.s32, xer);
	// blt cr6,0x83b6aae8
	if (cr6.lt) goto loc_83B6AAE8;
loc_83B6AB00:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a43700
	ctx.lr = 0x83B6AB08;
	sub_83A43700(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a43ba8
	ctx.lr = 0x83B6AB10;
	sub_83A43BA8(ctx, base);
	// lwz r3,72(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 72);
	// bl 0x83a8b910
	ctx.lr = 0x83B6AB18;
	sub_83A8B910(ctx, base);
	// stw r27,72(r29)
	PPC_STORE_U32(ctx.r29.u32 + 72, ctx.r27.u32);
	// stw r27,76(r29)
	PPC_STORE_U32(ctx.r29.u32 + 76, ctx.r27.u32);
	// stw r27,68(r29)
	PPC_STORE_U32(ctx.r29.u32 + 68, ctx.r27.u32);
loc_83B6AB24:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B6AB2C"))) PPC_WEAK_FUNC(sub_83B6AB2C);
PPC_FUNC_IMPL(__imp__sub_83B6AB2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B6AB30"))) PPC_WEAK_FUNC(sub_83B6AB30);
PPC_FUNC_IMPL(__imp__sub_83B6AB30) {
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
	// bl 0x83b6aa98
	ctx.lr = 0x83B6AB48;
	sub_83B6AA98(ctx, base);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83b6ab58
	if (cr6.eq) goto loc_83B6AB58;
	// bl 0x83a8b910
	ctx.lr = 0x83B6AB58;
	sub_83A8B910(ctx, base);
loc_83B6AB58:
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

__attribute__((alias("__imp__sub_83B6AB70"))) PPC_WEAK_FUNC(sub_83B6AB70);
PPC_FUNC_IMPL(__imp__sub_83B6AB70) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdab8
	ctx.lr = 0x83B6AB78;
	__savegprlr_16(ctx, base);
	// stwu r1,-432(r1)
	ea = -432 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r18,516(r1)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + 516);
	// li r16,0
	ctx.r16.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r16,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r16.u32);
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// mr r21,r6
	ctx.r21.u64 = ctx.r6.u64;
	// stw r16,0(r18)
	PPC_STORE_U32(ctx.r18.u32 + 0, ctx.r16.u32);
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// lwz r11,64(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// mr r19,r8
	ctx.r19.u64 = ctx.r8.u64;
	// mr r26,r9
	ctx.r26.u64 = ctx.r9.u64;
	// mr r17,r10
	ctx.r17.u64 = ctx.r10.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x83b6abc8
	if (cr6.eq) goto loc_83B6ABC8;
	// add r11,r5,r7
	ctx.r11.u64 = ctx.r5.u64 + ctx.r7.u64;
	// li r3,0
	ctx.r3.s64 = 0;
loc_83B6ABC0:
	// stw r11,0(r17)
	PPC_STORE_U32(ctx.r17.u32 + 0, ctx.r11.u32);
	// b 0x83b6b1c4
	goto loc_83B6B1C4;
loc_83B6ABC8:
	// lwz r20,68(r31)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// addi r28,r31,68
	ctx.r28.s64 = ctx.r31.s64 + 68;
	// cmplwi cr6,r20,0
	cr6.compare<uint32_t>(ctx.r20.u32, 0, xer);
	// bne cr6,0x83b6adf8
	if (!cr6.eq) goto loc_83B6ADF8;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x83b6b6e8
	ctx.lr = 0x83B6ABE8;
	sub_83B6B6E8(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bgt 0x83b6ac08
	if (cr0.gt) goto loc_83B6AC08;
	// lis r11,-32203
	ctx.r11.s64 = -2110455808;
	// addi r4,r11,-23252
	ctx.r4.s64 = ctx.r11.s64 + -23252;
loc_83B6ABF8:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831ea3f0
	ctx.lr = 0x83B6AC00;
	sub_831EA3F0(ctx, base);
	// li r3,-2
	ctx.r3.s64 = -2;
	// b 0x83b6b1c4
	goto loc_83B6B1C4;
loc_83B6AC08:
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r11,358
	cr6.compare<uint32_t>(ctx.r11.u32, 358, xer);
	// beq cr6,0x83b6ac20
	if (cr6.eq) goto loc_83B6AC20;
	// lis r11,-32203
	ctx.r11.s64 = -2110455808;
	// addi r4,r11,-23292
	ctx.r4.s64 = ctx.r11.s64 + -23292;
	// b 0x83b6abf8
	goto loc_83B6ABF8;
loc_83B6AC20:
	// lwz r11,180(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// add r10,r25,r29
	ctx.r10.u64 = ctx.r25.u64 + ctx.r29.u64;
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, xer);
	// bge cr6,0x83b6ac3c
	if (!cr6.lt) goto loc_83B6AC3C;
	// lis r11,-32203
	ctx.r11.s64 = -2110455808;
	// addi r4,r11,-23332
	ctx.r4.s64 = ctx.r11.s64 + -23332;
	// b 0x83b6abf8
	goto loc_83B6ABF8;
loc_83B6AC3C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r7,104(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmpw cr6,r7,r11
	cr6.compare<int32_t>(ctx.r7.s32, ctx.r11.s32, xer);
	// bgt cr6,0x83b6adec
	if (cr6.gt) goto loc_83B6ADEC;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r9,144(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// cmpw cr6,r9,r11
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, xer);
	// bgt cr6,0x83b6adec
	if (cr6.gt) goto loc_83B6ADEC;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,152(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, xer);
	// bgt cr6,0x83b6adec
	if (cr6.gt) goto loc_83B6ADEC;
	// lwz r11,140(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// lwz r8,192(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// lwz r6,172(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// lwz r5,160(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// lwz r4,184(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// addi r5,r5,384
	ctx.r5.s64 = ctx.r5.s64 + 384;
	// stw r10,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r10.u32);
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// stw r8,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r8.u32);
	// stw r6,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r6.u32);
	// stw r9,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r9.u32);
	// stw r4,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r4.u32);
	// stw r5,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r5.u32);
	// bne cr6,0x83b6acb0
	if (!cr6.eq) goto loc_83B6ACB0;
	// lwz r11,164(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// b 0x83b6acbc
	goto loc_83B6ACBC;
loc_83B6ACB0:
	// lwz r10,136(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r11,r11,-384
	ctx.r11.s64 = ctx.r11.s64 + -384;
loc_83B6ACBC:
	// stw r11,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
	// addic. r10,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r10.s64 = ctx.r9.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// li r8,2
	ctx.r8.s64 = 2;
	// mr r11,r16
	ctx.r11.u64 = ctx.r16.u64;
	// ble 0x83b6acec
	if (!cr0.gt) goto loc_83B6ACEC;
	// addi r10,r31,12
	ctx.r10.s64 = ctx.r31.s64 + 12;
loc_83B6ACD4:
	// stwu r8,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r10.u32 = ea;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, xer);
	// blt cr6,0x83b6acd4
	if (cr6.lt) goto loc_83B6ACD4;
loc_83B6ACEC:
	// clrlwi r10,r7,31
	ctx.r10.u64 = ctx.r7.u32 & 0x1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// li r30,1
	ctx.r30.s64 = 1;
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bne cr6,0x83b6ad0c
	if (!cr6.eq) goto loc_83B6AD0C;
	// stwx r30,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r30.u32);
	// b 0x83b6ad10
	goto loc_83B6AD10;
loc_83B6AD0C:
	// stwx r8,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r8.u32);
loc_83B6AD10:
	// li r4,48
	ctx.r4.s64 = 48;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x831ea7a0
	ctx.lr = 0x83B6AD1C;
	sub_831EA7A0(ctx, base);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r10,r16
	ctx.r10.u64 = ctx.r16.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble cr6,0x83b6ad64
	if (!cr6.gt) goto loc_83B6AD64;
	// addi r11,r1,237
	ctx.r11.s64 = ctx.r1.s64 + 237;
	// rotlwi r7,r3,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r3.u32, 0);
	// addi r9,r31,12
	ctx.r9.s64 = ctx.r31.s64 + 12;
loc_83B6AD38:
	// lwzu r8,4(r9)
	ea = 4 + ctx.r9.u32;
	ctx.r8.u64 = PPC_LOAD_U32(ea);
	ctx.r9.u32 = ea;
	// li r6,1920
	ctx.r6.s64 = 1920;
	// lwz r5,108(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// clrlwi r8,r8,24
	ctx.r8.u64 = ctx.r8.u32 & 0xFF;
	// stw r6,7(r11)
	PPC_STORE_U32(ctx.r11.u32 + 7, ctx.r6.u32);
	// cmpw cr6,r10,r7
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r7.s32, xer);
	// stb r8,11(r11)
	PPC_STORE_U8(ctx.r11.u32 + 11, ctx.r8.u8);
	// stw r5,3(r11)
	PPC_STORE_U32(ctx.r11.u32 + 3, ctx.r5.u32);
	// stbu r30,12(r11)
	ea = 12 + ctx.r11.u32;
	PPC_STORE_U8(ea, ctx.r30.u8);
	ctx.r11.u32 = ea;
	// blt cr6,0x83b6ad38
	if (cr6.lt) goto loc_83B6AD38;
loc_83B6AD64:
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// bl 0x83a431e0
	ctx.lr = 0x83B6AD6C;
	sub_83A431E0(ctx, base);
	// stw r3,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r3.u32);
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,128
	ctx.r5.s64 = 128;
	// li r4,-1
	ctx.r4.s64 = -1;
	// bl 0x83a8b8a8
	ctx.lr = 0x83B6AD80;
	sub_83A8B8A8(ctx, base);
	// mr. r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r7.s32, 0, xer);
	// stw r7,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r7.u32);
	// bne 0x83b6adac
	if (!cr0.eq) goto loc_83B6ADAC;
	// lis r11,-32203
	ctx.r11.s64 = -2110455808;
	// li r5,-3
	ctx.r5.s64 = -3;
	// addi r4,r11,-23344
	ctx.r4.s64 = ctx.r11.s64 + -23344;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831ea418
	ctx.lr = 0x83B6ADA0;
	sub_831EA418(ctx, base);
	// li r3,-5
	ctx.r3.s64 = -5;
	// stw r16,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r16.u32);
	// b 0x83b6b1c4
	goto loc_83B6B1C4;
loc_83B6ADAC:
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// lwz r8,76(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// li r5,2
	ctx.r5.s64 = 2;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// bl 0x83a43da8
	ctx.lr = 0x83B6ADC4;
	sub_83A43DA8(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// bge 0x83b6ade4
	if (!cr0.lt) goto loc_83B6ADE4;
	// lis r11,-32203
	ctx.r11.s64 = -2110455808;
	// addi r4,r11,-23388
	ctx.r4.s64 = ctx.r11.s64 + -23388;
	// bl 0x831ea3f0
	ctx.lr = 0x83B6ADDC;
	sub_831EA3F0(ctx, base);
loc_83B6ADDC:
	// li r3,-5
	ctx.r3.s64 = -5;
	// b 0x83b6b1c4
	goto loc_83B6B1C4;
loc_83B6ADE4:
	// lwz r11,180(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// b 0x83b6abc0
	goto loc_83B6ABC0;
loc_83B6ADEC:
	// lis r11,-32203
	ctx.r11.s64 = -2110455808;
	// addi r4,r11,-23452
	ctx.r4.s64 = ctx.r11.s64 + -23452;
	// b 0x83b6abf8
	goto loc_83B6ABF8;
loc_83B6ADF8:
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// add r9,r25,r29
	ctx.r9.u64 = ctx.r25.u64 + ctx.r29.u64;
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// mr r23,r11
	ctx.r23.u64 = ctx.r11.u64;
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, xer);
	// blt cr6,0x83b6ae14
	if (cr6.lt) goto loc_83B6AE14;
	// mr r23,r10
	ctx.r23.u64 = ctx.r10.u64;
loc_83B6AE14:
	// subf r11,r23,r9
	ctx.r11.s64 = ctx.r9.s64 - ctx.r23.s64;
	// lwz r28,12(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// xoris r10,r23,32768
	ctx.r10.u64 = ctx.r23.u64 ^ 2147483648;
	// mr r22,r16
	ctx.r22.u64 = ctx.r16.u64;
	// addc r11,r11,r10
	temp.u8 = ctx.r11.u32 + ctx.r10.u32 < ctx.r11.u32;
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	xer.ca = temp.u8;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r30,r11,r23
	ctx.r30.u64 = ctx.r11.u64 & ctx.r23.u64;
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// ble cr6,0x83b6aec0
	if (!cr6.gt) goto loc_83B6AEC0;
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// mr r29,r16
	ctx.r29.u64 = ctx.r16.u64;
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(ctx.r28.s32, 0, xer);
	// addi r11,r11,20
	ctx.r11.s64 = ctx.r11.s64 + 20;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r27,r11,r31
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// ble cr6,0x83b6ae78
	if (!cr6.gt) goto loc_83B6AE78;
loc_83B6AE54:
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x83a433d8
	ctx.lr = 0x83B6AE64;
	sub_83A433D8(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x83b6ae78
	if (!cr0.eq) goto loc_83B6AE78;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmpw cr6,r29,r28
	cr6.compare<int32_t>(ctx.r29.s32, ctx.r28.s32, xer);
	// blt cr6,0x83b6ae54
	if (cr6.lt) goto loc_83B6AE54;
loc_83B6AE78:
	// cmpw cr6,r29,r28
	cr6.compare<int32_t>(ctx.r29.s32, ctx.r28.s32, xer);
	// bne cr6,0x83b6aec0
	if (!cr6.eq) goto loc_83B6AEC0;
	// mr r22,r27
	ctx.r22.u64 = ctx.r27.u64;
	// cmpw cr6,r30,r25
	cr6.compare<int32_t>(ctx.r30.s32, ctx.r25.s32, xer);
	// blt cr6,0x83b6ae90
	if (cr6.lt) goto loc_83B6AE90;
	// mr r30,r25
	ctx.r30.u64 = ctx.r25.u64;
loc_83B6AE90:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x831ce980
	ctx.lr = 0x83B6AEA0;
	sub_831CE980(ctx, base);
	// cmpw cr6,r30,r23
	cr6.compare<int32_t>(ctx.r30.s32, ctx.r23.s32, xer);
	// bge cr6,0x83b6aeb8
	if (!cr6.lt) goto loc_83B6AEB8;
	// subf r5,r30,r23
	ctx.r5.s64 = ctx.r23.s64 - ctx.r30.s64;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// add r3,r30,r27
	ctx.r3.u64 = ctx.r30.u64 + ctx.r27.u64;
	// bl 0x831ce980
	ctx.lr = 0x83B6AEB8;
	sub_831CE980(ctx, base);
loc_83B6AEB8:
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, xer);
	// bne cr6,0x83b6aed0
	if (!cr6.eq) goto loc_83B6AED0;
loc_83B6AEC0:
	// cmpwi cr6,r26,0
	cr6.compare<int32_t>(ctx.r26.s32, 0, xer);
	// bgt cr6,0x83b6aed0
	if (cr6.gt) goto loc_83B6AED0;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83b6b1c4
	goto loc_83B6B1C4;
loc_83B6AED0:
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x83a43518
	ctx.lr = 0x83B6AED8;
	sub_83A43518(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x83a8a2c0
	ctx.lr = 0x83B6AEE0;
	sub_83A8A2C0(ctx, base);
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x83a43ce0
	ctx.lr = 0x83B6AEE8;
	sub_83A43CE0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x83a8a2c0
	ctx.lr = 0x83B6AEF0;
	sub_83A8A2C0(ctx, base);
	// cmplwi cr6,r22,0
	cr6.compare<uint32_t>(ctx.r22.u32, 0, xer);
	// beq cr6,0x83b6b048
	if (cr6.eq) goto loc_83B6B048;
	// mr r30,r16
	ctx.r30.u64 = ctx.r16.u64;
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(ctx.r28.s32, 0, xer);
	// ble cr6,0x83b6af24
	if (!cr6.gt) goto loc_83B6AF24;
loc_83B6AF04:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x83a43458
	ctx.lr = 0x83B6AF10;
	sub_83A43458(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x83b6af24
	if (cr0.eq) goto loc_83B6AF24;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r30,r28
	cr6.compare<int32_t>(ctx.r30.s32, ctx.r28.s32, xer);
	// blt cr6,0x83b6af04
	if (cr6.lt) goto loc_83B6AF04;
loc_83B6AF24:
	// cmpw cr6,r30,r28
	cr6.compare<int32_t>(ctx.r30.s32, ctx.r28.s32, xer);
	// bne cr6,0x83b6b048
	if (!cr6.eq) goto loc_83B6B048;
	// mr r30,r16
	ctx.r30.u64 = ctx.r16.u64;
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(ctx.r28.s32, 0, xer);
	// ble cr6,0x83b6af58
	if (!cr6.gt) goto loc_83B6AF58;
loc_83B6AF38:
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x83a43c00
	ctx.lr = 0x83B6AF4C;
	sub_83A43C00(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r30,r28
	cr6.compare<int32_t>(ctx.r30.s32, ctx.r28.s32, xer);
	// blt cr6,0x83b6af38
	if (cr6.lt) goto loc_83B6AF38;
loc_83B6AF58:
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83b6b01c
	if (!cr6.eq) goto loc_83B6B01C;
	// mr r29,r16
	ctx.r29.u64 = ctx.r16.u64;
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(ctx.r28.s32, 0, xer);
	// ble cr6,0x83b6afc0
	if (!cr6.gt) goto loc_83B6AFC0;
	// lwz r27,56(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// mr r30,r16
	ctx.r30.u64 = ctx.r16.u64;
	// lwz r25,32(r31)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// rlwinm r24,r27,23,9,31
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 23) & 0x7FFFFF;
loc_83B6AF80:
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x83a01448
	ctx.lr = 0x83B6AF94;
	sub_83A01448(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83b6afc0
	if (cr0.eq) goto loc_83B6AFC0;
	// addi r11,r1,208
	ctx.r11.s64 = ctx.r1.s64 + 208;
	// addi r10,r1,224
	ctx.r10.s64 = ctx.r1.s64 + 224;
	// rlwinm r9,r27,25,30,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 25) & 0x3;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// stwx r3,r30,r11
	PPC_STORE_U32(ctx.r30.u32 + ctx.r11.u32, ctx.r3.u32);
	// cmpw cr6,r29,r28
	cr6.compare<int32_t>(ctx.r29.s32, ctx.r28.s32, xer);
	// stwx r9,r30,r10
	PPC_STORE_U32(ctx.r30.u32 + ctx.r10.u32, ctx.r9.u32);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// blt cr6,0x83b6af80
	if (cr6.lt) goto loc_83B6AF80;
loc_83B6AFC0:
	// cmpw cr6,r29,r28
	cr6.compare<int32_t>(ctx.r29.s32, ctx.r28.s32, xer);
	// bne cr6,0x83b6b01c
	if (!cr6.eq) goto loc_83B6B01C;
	// mr r29,r16
	ctx.r29.u64 = ctx.r16.u64;
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(ctx.r28.s32, 0, xer);
	// ble cr6,0x83b6b004
	if (!cr6.gt) goto loc_83B6B004;
	// mr r30,r16
	ctx.r30.u64 = ctx.r16.u64;
loc_83B6AFD8:
	// addi r11,r1,224
	ctx.r11.s64 = ctx.r1.s64 + 224;
	// addi r10,r1,208
	ctx.r10.s64 = ctx.r1.s64 + 208;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// lwzx r6,r30,r11
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// lwzx r5,r30,r10
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r10.u32);
	// bl 0x83a43b70
	ctx.lr = 0x83B6AFF4;
	sub_83A43B70(ctx, base);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpw cr6,r29,r28
	cr6.compare<int32_t>(ctx.r29.s32, ctx.r28.s32, xer);
	// blt cr6,0x83b6afd8
	if (cr6.lt) goto loc_83B6AFD8;
loc_83B6B004:
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// srawi r10,r11,7
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7F) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 7;
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// rlwinm r10,r10,7,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 7) & 0xFFFFFF80;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// stw r11,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
loc_83B6B01C:
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// stw r23,0(r17)
	PPC_STORE_U32(ctx.r17.u32 + 0, ctx.r23.u32);
	// lwz r10,88(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// subf r11,r23,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r23.s64;
	// stw r11,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
	// not r11,r10
	ctx.r11.u64 = ~ctx.r10.u64;
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
loc_83B6B048:
	// cmpwi cr6,r26,0
	cr6.compare<int32_t>(ctx.r26.s32, 0, xer);
	// ble cr6,0x83b6b118
	if (!cr6.gt) goto loc_83B6B118;
	// mr r30,r16
	ctx.r30.u64 = ctx.r16.u64;
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(ctx.r28.s32, 0, xer);
	// ble cr6,0x83b6b084
	if (!cr6.gt) goto loc_83B6B084;
loc_83B6B05C:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x83a439d8
	ctx.lr = 0x83B6B06C;
	sub_83A439D8(ctx, base);
	// cmpw cr6,r26,r3
	cr6.compare<int32_t>(ctx.r26.s32, ctx.r3.s32, xer);
	// blt cr6,0x83b6b078
	if (cr6.lt) goto loc_83B6B078;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
loc_83B6B078:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r30,r28
	cr6.compare<int32_t>(ctx.r30.s32, ctx.r28.s32, xer);
	// blt cr6,0x83b6b05c
	if (cr6.lt) goto loc_83B6B05C;
loc_83B6B084:
	// cmpwi cr6,r26,0
	cr6.compare<int32_t>(ctx.r26.s32, 0, xer);
	// ble cr6,0x83b6b118
	if (!cr6.gt) goto loc_83B6B118;
	// mr r27,r16
	ctx.r27.u64 = ctx.r16.u64;
	// mr r30,r16
	ctx.r30.u64 = ctx.r16.u64;
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(ctx.r28.s32, 0, xer);
	// ble cr6,0x83b6b0e0
	if (!cr6.gt) goto loc_83B6B0E0;
	// addi r29,r31,12
	ctx.r29.s64 = ctx.r31.s64 + 12;
loc_83B6B0A0:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x83a43828
	ctx.lr = 0x83B6B0B4;
	sub_83A43828(ctx, base);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// mr r8,r19
	ctx.r8.u64 = ctx.r19.u64;
	// lwzu r5,4(r29)
	ea = 4 + ctx.r29.u32;
	ctx.r5.u64 = PPC_LOAD_U32(ea);
	ctx.r29.u32 = ea;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83b6a710
	ctx.lr = 0x83B6B0D0;
	sub_83B6A710(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmpw cr6,r30,r28
	cr6.compare<int32_t>(ctx.r30.s32, ctx.r28.s32, xer);
	// blt cr6,0x83b6b0a0
	if (cr6.lt) goto loc_83B6B0A0;
loc_83B6B0E0:
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// subf. r11,r27,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r27.s64;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// stw r11,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
	// bgt 0x83b6b114
	if (cr0.gt) goto loc_83B6B114;
	// mr r30,r16
	ctx.r30.u64 = ctx.r16.u64;
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(ctx.r28.s32, 0, xer);
	// ble cr6,0x83b6b114
	if (!cr6.gt) goto loc_83B6B114;
loc_83B6B0FC:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x83a43a80
	ctx.lr = 0x83B6B108;
	sub_83A43A80(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r30,r28
	cr6.compare<int32_t>(ctx.r30.s32, ctx.r28.s32, xer);
	// blt cr6,0x83b6b0fc
	if (cr6.lt) goto loc_83B6B0FC;
loc_83B6B114:
	// stw r27,0(r18)
	PPC_STORE_U32(ctx.r18.u32 + 0, ctx.r27.u32);
loc_83B6B118:
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bgt cr6,0x83b6b188
	if (cr6.gt) goto loc_83B6B188;
	// mr r30,r16
	ctx.r30.u64 = ctx.r16.u64;
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(ctx.r28.s32, 0, xer);
	// ble cr6,0x83b6b150
	if (!cr6.gt) goto loc_83B6B150;
loc_83B6B130:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x83a434b8
	ctx.lr = 0x83B6B13C;
	sub_83A434B8(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x83b6b150
	if (cr0.eq) goto loc_83B6B150;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r30,r28
	cr6.compare<int32_t>(ctx.r30.s32, ctx.r28.s32, xer);
	// blt cr6,0x83b6b130
	if (cr6.lt) goto loc_83B6B130;
loc_83B6B150:
	// cmpw cr6,r30,r28
	cr6.compare<int32_t>(ctx.r30.s32, ctx.r28.s32, xer);
	// bne cr6,0x83b6b188
	if (!cr6.eq) goto loc_83B6B188;
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83b6b170
	if (!cr6.eq) goto loc_83B6B170;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// b 0x83b6b188
	goto loc_83B6B188;
loc_83B6B170:
	// lwz r10,40(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// lwz r9,44(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// stw r16,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r16.u32);
	// stw r11,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
	// stw r10,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r10.u32);
	// stw r9,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r9.u32);
loc_83B6B188:
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x83a43700
	ctx.lr = 0x83B6B190;
	sub_83A43700(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x83a43b30
	ctx.lr = 0x83B6B19C;
	sub_83A43B30(ctx, base);
	// mr. r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r5.s32, 0, xer);
	// beq 0x83b6b1b8
	if (cr0.eq) goto loc_83B6B1B8;
	// lis r11,-32203
	ctx.r11.s64 = -2110455808;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,-23500
	ctx.r4.s64 = ctx.r11.s64 + -23500;
	// bl 0x831ea400
	ctx.lr = 0x83B6B1B4;
	sub_831EA400(ctx, base);
	// b 0x83b6addc
	goto loc_83B6ADDC;
loc_83B6B1B8:
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
loc_83B6B1C4:
	// addi r1,r1,432
	ctx.r1.s64 = ctx.r1.s64 + 432;
	// b 0x831cdb08
	__restgprlr_16(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B6B1CC"))) PPC_WEAK_FUNC(sub_83B6B1CC);
PPC_FUNC_IMPL(__imp__sub_83B6B1CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B6B1D0"))) PPC_WEAK_FUNC(sub_83B6B1D0);
PPC_FUNC_IMPL(__imp__sub_83B6B1D0) {
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
	// bl 0x83b6aa98
	ctx.lr = 0x83B6B1EC;
	sub_83B6AA98(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// li r5,16
	ctx.r5.s64 = 16;
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// bl 0x831cdcf0
	ctx.lr = 0x83B6B204;
	sub_831CDCF0(ctx, base);
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// stw r30,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r30.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r30,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r30.u32);
	// stw r30,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r30.u32);
	// stw r30,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r30.u32);
	// stw r30,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r30.u32);
	// stw r30,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r30.u32);
	// stw r30,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r30.u32);
	// stw r30,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r30.u32);
	// stw r30,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r30.u32);
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

__attribute__((alias("__imp__sub_83B6B248"))) PPC_WEAK_FUNC(sub_83B6B248);
PPC_FUNC_IMPL(__imp__sub_83B6B248) {
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
loc_83B6B264:
	// dcbt r11,r3
	// addi r11,r11,128
	ctx.r11.s64 = ctx.r11.s64 + 128;
	// bdnz 0x83b6b264
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83B6B264;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83B6B274"))) PPC_WEAK_FUNC(sub_83B6B274);
PPC_FUNC_IMPL(__imp__sub_83B6B274) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B6B278"))) PPC_WEAK_FUNC(sub_83B6B278);
PPC_FUNC_IMPL(__imp__sub_83B6B278) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r8,8(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r9,r8,4
	ctx.r9.s64 = ctx.r8.s64 + 4;
	// lwz r5,4(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lwbrx r6,r8,r10
	ctx.r6.u64 = __builtin_bswap32(PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32));
	// add r8,r6,r9
	ctx.r8.u64 = ctx.r6.u64 + ctx.r9.u64;
	// cmplw cr6,r8,r5
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r5.u32, xer);
	// ble cr6,0x83b6b2a8
	if (!cr6.gt) goto loc_83B6B2A8;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_83B6B2A8:
	// lhbrx r8,r9,r10
	ctx.r8.u64 = __builtin_bswap16(PPC_LOAD_U16(ctx.r9.u32 + ctx.r10.u32));
	// addi r9,r9,2
	ctx.r9.s64 = ctx.r9.s64 + 2;
	// stw r8,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// rotlwi r8,r8,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// lhbrx r5,r9,r10
	ctx.r5.u64 = __builtin_bswap16(PPC_LOAD_U16(ctx.r9.u32 + ctx.r10.u32));
	// addi r9,r9,2
	ctx.r9.s64 = ctx.r9.s64 + 2;
	// stw r5,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r5.u32);
	// cmplwi cr6,r8,1
	cr6.compare<uint32_t>(ctx.r8.u32, 1, xer);
	// lwbrx r5,r9,r10
	ctx.r5.u64 = __builtin_bswap32(PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32));
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// stw r5,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r5.u32);
	// lhbrx r5,r9,r10
	ctx.r5.u64 = __builtin_bswap16(PPC_LOAD_U16(ctx.r9.u32 + ctx.r10.u32));
	// addi r9,r9,2
	ctx.r9.s64 = ctx.r9.s64 + 2;
	// stw r5,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r5.u32);
	// lhbrx r5,r9,r10
	ctx.r5.u64 = __builtin_bswap16(PPC_LOAD_U16(ctx.r9.u32 + ctx.r10.u32));
	// addi r9,r9,2
	ctx.r9.s64 = ctx.r9.s64 + 2;
	// stw r5,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r5.u32);
	// beq cr6,0x83b6b3b4
	if (cr6.eq) goto loc_83B6B3B4;
	// lwbrx r5,r9,r10
	ctx.r5.u64 = __builtin_bswap32(PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32));
	// addi r9,r9,2
	ctx.r9.s64 = ctx.r9.s64 + 2;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x83b6b3b4
	if (cr6.eq) goto loc_83B6B3B4;
	// cmplwi cr6,r8,65534
	cr6.compare<uint32_t>(ctx.r8.u32, 65534, xer);
	// bne cr6,0x83b6b334
	if (!cr6.eq) goto loc_83B6B334;
	// lhbrx r8,r9,r10
	ctx.r8.u64 = __builtin_bswap16(PPC_LOAD_U16(ctx.r9.u32 + ctx.r10.u32));
	// addi r9,r9,2
	ctx.r9.s64 = ctx.r9.s64 + 2;
	// li r5,4
	ctx.r5.s64 = 4;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// stw r8,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r8.u32);
	// lwbrx r9,0,r10
	ctx.r9.u64 = __builtin_bswap32(PPC_LOAD_U32(ctx.r10.u32));
	// stw r9,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r9.u32);
	// lwbrx r10,r10,r5
	ctx.r10.u64 = __builtin_bswap32(PPC_LOAD_U32(ctx.r10.u32 + ctx.r5.u32));
	// stw r10,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r10.u32);
	// b 0x83b6b3b4
	goto loc_83B6B3B4;
loc_83B6B334:
	// cmplwi cr6,r8,358
	cr6.compare<uint32_t>(ctx.r8.u32, 358, xer);
	// bne cr6,0x83b6b3b4
	if (!cr6.eq) goto loc_83B6B3B4;
	// lhbrx r8,r9,r10
	ctx.r8.u64 = __builtin_bswap16(PPC_LOAD_U16(ctx.r9.u32 + ctx.r10.u32));
	// addi r9,r9,2
	ctx.r9.s64 = ctx.r9.s64 + 2;
	// li r5,2
	ctx.r5.s64 = 2;
	// stw r8,48(r11)
	PPC_STORE_U32(ctx.r11.u32 + 48, ctx.r8.u32);
	// lwbrx r8,r9,r10
	ctx.r8.u64 = __builtin_bswap32(PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32));
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// stw r8,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r8.u32);
	// lwbrx r8,r9,r10
	ctx.r8.u64 = __builtin_bswap32(PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32));
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// stw r8,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r8.u32);
	// lwbrx r8,r9,r10
	ctx.r8.u64 = __builtin_bswap32(PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32));
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// stw r8,56(r11)
	PPC_STORE_U32(ctx.r11.u32 + 56, ctx.r8.u32);
	// lwbrx r8,r9,r10
	ctx.r8.u64 = __builtin_bswap32(PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32));
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// stw r8,64(r11)
	PPC_STORE_U32(ctx.r11.u32 + 64, ctx.r8.u32);
	// lwbrx r8,r9,r10
	ctx.r8.u64 = __builtin_bswap32(PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32));
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// stw r8,68(r11)
	PPC_STORE_U32(ctx.r11.u32 + 68, ctx.r8.u32);
	// lwbrx r8,r9,r10
	ctx.r8.u64 = __builtin_bswap32(PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32));
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// stw r8,40(r11)
	PPC_STORE_U32(ctx.r11.u32 + 40, ctx.r8.u32);
	// lwbrx r8,r9,r10
	ctx.r8.u64 = __builtin_bswap32(PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32));
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// stw r8,44(r11)
	PPC_STORE_U32(ctx.r11.u32 + 44, ctx.r8.u32);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// stw r9,72(r11)
	PPC_STORE_U32(ctx.r11.u32 + 72, ctx.r9.u32);
	// lhbrx r10,r10,r5
	ctx.r10.u64 = __builtin_bswap16(PPC_LOAD_U16(ctx.r10.u32 + ctx.r5.u32));
	// stw r10,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r10.u32);
loc_83B6B3B4:
	// lwz r11,8(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// li r3,1
	ctx.r3.s64 = 1;
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r11,8(r7)
	PPC_STORE_U32(ctx.r7.u32 + 8, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83B6B3CC"))) PPC_WEAK_FUNC(sub_83B6B3CC);
PPC_FUNC_IMPL(__imp__sub_83B6B3CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B6B3D0"))) PPC_WEAK_FUNC(sub_83B6B3D0);
PPC_FUNC_IMPL(__imp__sub_83B6B3D0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x83B6B3D8;
	__savegprlr_27(ctx, base);
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// li r27,0
	ctx.r27.s64 = 0;
	// li r31,0
	ctx.r31.s64 = 0;
	// lwz r9,40(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// lwz r8,44(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// lwz r7,48(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// lwz r30,52(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// add r28,r8,r9
	ctx.r28.u64 = ctx.r8.u64 + ctx.r9.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// bne cr6,0x83b6b410
	if (!cr6.eq) goto loc_83B6B410;
loc_83B6B408:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83b6b52c
	goto loc_83B6B52C;
loc_83B6B410:
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x83b6b528
	if (cr6.eq) goto loc_83B6B528;
	// lwz r8,24(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// rlwinm r7,r30,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplw cr6,r7,r8
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, xer);
	// bne cr6,0x83b6b408
	if (!cr6.eq) goto loc_83B6B408;
	// li r7,0
	ctx.r7.s64 = 0;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x83b6b4e4
	if (cr6.eq) goto loc_83B6B4E4;
loc_83B6B434:
	// lbz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// lbz r8,1(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// rotlwi r6,r6,8
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r6.u32, 8);
	// lbz r5,2(r10)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r10.u32 + 2);
	// lbz r4,3(r10)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r10.u32 + 3);
	// add r8,r6,r8
	ctx.r8.u64 = ctx.r6.u64 + ctx.r8.u64;
	// rlwinm r8,r8,8,0,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFFFF00;
	// add r8,r8,r5
	ctx.r8.u64 = ctx.r8.u64 + ctx.r5.u64;
	// rlwinm r8,r8,8,0,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFFFF00;
	// add r8,r8,r4
	ctx.r8.u64 = ctx.r8.u64 + ctx.r4.u64;
	// cmplw cr6,r8,r9
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, xer);
	// bgt cr6,0x83b6b47c
	if (cr6.gt) goto loc_83B6B47C;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// mr r31,r8
	ctx.r31.u64 = ctx.r8.u64;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r7,r30
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r30.u32, xer);
	// blt cr6,0x83b6b434
	if (cr6.lt) goto loc_83B6B434;
	// b 0x83b6b488
	goto loc_83B6B488;
loc_83B6B47C:
	// subf r9,r31,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r31.s64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// stw r9,76(r11)
	PPC_STORE_U32(ctx.r11.u32 + 76, ctx.r9.u32);
loc_83B6B488:
	// cmplw cr6,r7,r30
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r30.u32, xer);
	// bge cr6,0x83b6b4e4
	if (!cr6.lt) goto loc_83B6B4E4;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
loc_83B6B494:
	// lbz r6,-2(r10)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + -2);
	// lbz r8,-1(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + -1);
	// rotlwi r9,r6,8
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r6.u32, 8);
	// lbz r5,0(r10)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// lbz r4,1(r10)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// rlwinm r9,r9,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFFFF00;
	// add r9,r9,r5
	ctx.r9.u64 = ctx.r9.u64 + ctx.r5.u64;
	// rlwinm r9,r9,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFFFF00;
	// add r9,r9,r4
	ctx.r9.u64 = ctx.r9.u64 + ctx.r4.u64;
	// cmplw cr6,r9,r28
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r28.u32, xer);
	// bge cr6,0x83b6b4d8
	if (!cr6.lt) goto loc_83B6B4D8;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r7,r30
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r30.u32, xer);
	// blt cr6,0x83b6b494
	if (cr6.lt) goto loc_83B6B494;
	// b 0x83b6b4e4
	goto loc_83B6B4E4;
loc_83B6B4D8:
	// subf r10,r28,r9
	ctx.r10.s64 = ctx.r9.s64 - ctx.r28.s64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// stw r10,80(r11)
	PPC_STORE_U32(ctx.r11.u32 + 80, ctx.r10.u32);
loc_83B6B4E4:
	// subf r8,r29,r27
	ctx.r8.s64 = ctx.r27.s64 - ctx.r29.s64;
	// lwz r6,56(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// lwz r10,84(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// lwz r7,88(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// mullw r9,r6,r29
	ctx.r9.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r29.s32);
	// mullw r8,r8,r6
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r6.s32);
	// stw r8,96(r11)
	PPC_STORE_U32(ctx.r11.u32 + 96, ctx.r8.u32);
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// add r6,r7,r10
	ctx.r6.u64 = ctx.r7.u64 + ctx.r10.u64;
	// add r8,r8,r9
	ctx.r8.u64 = ctx.r8.u64 + ctx.r9.u64;
	// stw r9,92(r11)
	PPC_STORE_U32(ctx.r11.u32 + 92, ctx.r9.u32);
	// cmplw cr6,r8,r6
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r6.u32, xer);
	// ble cr6,0x83b6b528
	if (!cr6.gt) goto loc_83B6B528;
	// subf r9,r9,r7
	ctx.r9.s64 = ctx.r7.s64 - ctx.r9.s64;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r10,96(r11)
	PPC_STORE_U32(ctx.r11.u32 + 96, ctx.r10.u32);
loc_83B6B528:
	// li r3,1
	ctx.r3.s64 = 1;
loc_83B6B52C:
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B6B530"))) PPC_WEAK_FUNC(sub_83B6B530);
PPC_FUNC_IMPL(__imp__sub_83B6B530) {
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
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// blt cr6,0x83b6b684
	if (cr6.lt) goto loc_83B6B684;
	// beq cr6,0x83b6b678
	if (cr6.eq) goto loc_83B6B678;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// blt cr6,0x83b6b640
	if (cr6.lt) goto loc_83B6B640;
	// beq cr6,0x83b6b5d8
	if (cr6.eq) goto loc_83B6B5D8;
	// cmplwi cr6,r11,5
	cr6.compare<uint32_t>(ctx.r11.u32, 5, xer);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// blt cr6,0x83b6b5a4
	if (cr6.lt) goto loc_83B6B5A4;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// beq cr6,0x83b6b588
	if (cr6.eq) goto loc_83B6B588;
	// lwbrx r10,r11,r10
	ctx.r10.u64 = __builtin_bswap32(PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32));
loc_83B6B57C:
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// b 0x83b6b6d0
	goto loc_83B6B6D0;
loc_83B6B588:
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// lwbrx r11,r10,r11
	ctx.r11.u64 = __builtin_bswap32(PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32));
	// lwz r8,16(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// stw r9,84(r8)
	PPC_STORE_U32(ctx.r8.u32 + 84, ctx.r9.u32);
	// stw r11,88(r8)
	PPC_STORE_U32(ctx.r8.u32 + 88, ctx.r11.u32);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// b 0x83b6b57c
	goto loc_83B6B57C;
loc_83B6B5A4:
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r8,r11,4
	ctx.r8.s64 = ctx.r11.s64 + 4;
	// lwz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwbrx r10,r11,r9
	ctx.r10.u64 = __builtin_bswap32(PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32));
	// add r6,r10,r8
	ctx.r6.u64 = ctx.r10.u64 + ctx.r8.u64;
	// cmplw cr6,r6,r7
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r7.u32, xer);
	// bgt cr6,0x83b6b6bc
	if (cr6.gt) goto loc_83B6B6BC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r10,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r10.u32);
	// add r10,r8,r9
	ctx.r10.u64 = ctx.r8.u64 + ctx.r9.u64;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// b 0x83b6b6cc
	goto loc_83B6B6CC;
loc_83B6B5D8:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r8,r10,4
	ctx.r8.s64 = ctx.r10.s64 + 4;
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwbrx r7,r10,r11
	ctx.r7.u64 = __builtin_bswap32(PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32));
	// add r10,r7,r8
	ctx.r10.u64 = ctx.r7.u64 + ctx.r8.u64;
	// cmplw cr6,r10,r6
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, xer);
	// bgt cr6,0x83b6b6bc
	if (cr6.gt) goto loc_83B6B6BC;
	// addi r10,r8,28
	ctx.r10.s64 = ctx.r8.s64 + 28;
	// lwbrx r8,r10,r11
	ctx.r8.u64 = __builtin_bswap32(PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32));
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x83b6b630
	if (cr6.eq) goto loc_83B6B630;
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// li r6,4
	ctx.r6.s64 = 4;
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwbrx r11,r10,r11
	ctx.r11.u64 = __builtin_bswap32(PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32));
	// subfic r10,r11,1
	xer.ca = ctx.r11.u32 <= 1;
	ctx.r10.s64 = 1 - ctx.r11.s64;
	// stw r11,40(r9)
	PPC_STORE_U32(ctx.r9.u32 + 40, ctx.r11.u32);
	// lwbrx r11,r8,r6
	ctx.r11.u64 = __builtin_bswap32(PPC_LOAD_U32(ctx.r8.u32 + ctx.r6.u32));
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,44(r9)
	PPC_STORE_U32(ctx.r9.u32 + 44, ctx.r11.u32);
loc_83B6B630:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
loc_83B6B638:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// b 0x83b6b6cc
	goto loc_83B6B6CC;
loc_83B6B640:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r9,r10,4
	ctx.r9.s64 = ctx.r10.s64 + 4;
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwbrx r10,r10,r11
	ctx.r10.u64 = __builtin_bswap32(PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32));
	// add r7,r10,r9
	ctx.r7.u64 = ctx.r10.u64 + ctx.r9.u64;
	// cmplw cr6,r7,r8
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, xer);
	// bgt cr6,0x83b6b6bc
	if (cr6.gt) goto loc_83B6B6BC;
	// lwbrx r11,r9,r11
	ctx.r11.u64 = __builtin_bswap32(PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32));
	// lwz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// stw r11,36(r9)
	PPC_STORE_U32(ctx.r9.u32 + 36, ctx.r11.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x83b6b638
	goto loc_83B6B638;
loc_83B6B678:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83b6b278
	ctx.lr = 0x83B6B680;
	sub_83B6B278(ctx, base);
	// b 0x83b6b6d4
	goto loc_83B6B6D4;
loc_83B6B684:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r9,-32203
	ctx.r9.s64 = -2110455808;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r9,-23108
	ctx.r4.s64 = ctx.r9.s64 + -23108;
	// lwz r8,16(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r3,r9,4
	ctx.r3.s64 = ctx.r9.s64 + 4;
	// lwbrx r11,r11,r10
	ctx.r11.u64 = __builtin_bswap32(PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32));
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r11,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r11.u32);
	// bl 0x83b66170
	ctx.lr = 0x83B6B6B4;
	sub_83B66170(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x83b6b6c4
	if (cr0.eq) goto loc_83B6B6C4;
loc_83B6B6BC:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83b6b6d4
	goto loc_83B6B6D4;
loc_83B6B6C4:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
loc_83B6B6CC:
	// li r3,1
	ctx.r3.s64 = 1;
loc_83B6B6D0:
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_83B6B6D4:
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

__attribute__((alias("__imp__sub_83B6B6E8"))) PPC_WEAK_FUNC(sub_83B6B6E8);
PPC_FUNC_IMPL(__imp__sub_83B6B6E8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x83B6B6F0;
	__savegprlr_25(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// li r5,100
	ctx.r5.s64 = 100;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x831cdcf0
	ctx.lr = 0x83B6B710;
	sub_831CDCF0(ctx, base);
	// li r5,28
	ctx.r5.s64 = 28;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x831cdcf0
	ctx.lr = 0x83B6B720;
	sub_831CDCF0(ctx, base);
	// lis r11,-32203
	ctx.r11.s64 = -2110455808;
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// addi r27,r11,-23140
	ctx.r27.s64 = ctx.r11.s64 + -23140;
	// stw r25,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r25.u32);
	// stw r26,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r26.u32);
loc_83B6B738:
	// clrlwi. r10,r3,31
	ctx.r10.u64 = ctx.r3.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// beq 0x83b6b748
	if (cr0.eq) goto loc_83B6B748;
	// addi r11,r3,1
	ctx.r11.s64 = ctx.r3.s64 + 1;
loc_83B6B748:
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
	// addi r28,r11,4
	ctx.r28.s64 = ctx.r11.s64 + 4;
	// add r29,r11,r10
	ctx.r29.u64 = ctx.r11.u64 + ctx.r10.u64;
	// li r30,0
	ctx.r30.s64 = 0;
loc_83B6B75C:
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83b66170
	ctx.lr = 0x83B6B76C;
	sub_83B66170(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x83b6b788
	if (cr0.eq) goto loc_83B6B788;
	// addi r31,r31,5
	ctx.r31.s64 = ctx.r31.s64 + 5;
	// addi r11,r27,30
	ctx.r11.s64 = ctx.r27.s64 + 30;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r31,r11
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, xer);
	// blt cr6,0x83b6b75c
	if (cr6.lt) goto loc_83B6B75C;
loc_83B6B788:
	// cmpwi cr6,r30,6
	cr6.compare<int32_t>(ctx.r30.s32, 6, xer);
	// bne cr6,0x83b6b7bc
	if (!cr6.eq) goto loc_83B6B7BC;
	// li r11,0
	ctx.r11.s64 = 0;
loc_83B6B794:
	// lbzx r10,r11,r29
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r29.u32);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpwi cr6,r10,32
	cr6.compare<int32_t>(ctx.r10.s32, 32, xer);
	// blt cr6,0x83b6b7b8
	if (cr6.lt) goto loc_83B6B7B8;
	// cmpwi cr6,r10,126
	cr6.compare<int32_t>(ctx.r10.s32, 126, xer);
	// bgt cr6,0x83b6b7b8
	if (cr6.gt) goto loc_83B6B7B8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(ctx.r11.s32, 4, xer);
	// blt cr6,0x83b6b794
	if (cr6.lt) goto loc_83B6B794;
loc_83B6B7B8:
	// li r30,100
	ctx.r30.s64 = 100;
loc_83B6B7BC:
	// stw r28,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r28.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// bl 0x83b6b530
	ctx.lr = 0x83B6B7CC;
	sub_83B6B530(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x83b6b864
	if (cr0.eq) goto loc_83B6B864;
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r11,r3,8
	ctx.r11.s64 = ctx.r3.s64 + 8;
	// cmplw cr6,r11,r25
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r25.u32, xer);
	// ble cr6,0x83b6b738
	if (!cr6.gt) goto loc_83B6B738;
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83b6b864
	if (cr6.eq) goto loc_83B6B864;
	// lwz r10,12(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 12);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// ble cr6,0x83b6b864
	if (!cr6.gt) goto loc_83B6B864;
	// lwz r10,8(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83b6b864
	if (cr6.eq) goto loc_83B6B864;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// beq cr6,0x83b6b878
	if (cr6.eq) goto loc_83B6B878;
	// cmplwi cr6,r11,358
	cr6.compare<uint32_t>(ctx.r11.u32, 358, xer);
	// beq cr6,0x83b6b86c
	if (cr6.eq) goto loc_83B6B86C;
	// cmplwi cr6,r11,65534
	cr6.compare<uint32_t>(ctx.r11.u32, 65534, xer);
	// bne cr6,0x83b6b864
	if (!cr6.eq) goto loc_83B6B864;
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// ble cr6,0x83b6b8c8
	if (!cr6.gt) goto loc_83B6B8C8;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r8,r10,29,3,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1FFFFFFF;
	// lwz r7,40(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// lwz r10,84(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// mullw r8,r8,r9
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r9.s32);
	// lwz r6,44(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mullw r9,r7,r8
	ctx.r9.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r8.s32);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// mullw r9,r6,r8
	ctx.r9.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r8.s32);
	// stw r10,92(r11)
	PPC_STORE_U32(ctx.r11.u32 + 92, ctx.r10.u32);
	// stw r9,96(r11)
	PPC_STORE_U32(ctx.r11.u32 + 96, ctx.r9.u32);
	// b 0x83b6b8c4
	goto loc_83B6B8C4;
loc_83B6B864:
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x83b6b8c8
	goto loc_83B6B8C8;
loc_83B6B86C:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83b6b3d0
	ctx.lr = 0x83B6B874;
	sub_83B6B3D0(ctx, base);
	// b 0x83b6b8bc
	goto loc_83B6B8BC;
loc_83B6B878:
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// ble cr6,0x83b6b8c8
	if (!cr6.gt) goto loc_83B6B8C8;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r10,r10,29,3,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1FFFFFFF;
	// lwz r7,40(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// lwz r9,84(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// mullw r8,r10,r8
	ctx.r8.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r8.s32);
	// lwz r6,44(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mullw r10,r7,r8
	ctx.r10.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r8.s32);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// mullw r9,r6,r8
	ctx.r9.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r8.s32);
	// stw r10,92(r11)
	PPC_STORE_U32(ctx.r11.u32 + 92, ctx.r10.u32);
	// stw r9,96(r11)
	PPC_STORE_U32(ctx.r11.u32 + 96, ctx.r9.u32);
loc_83B6B8BC:
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x83b6b864
	if (cr6.eq) goto loc_83B6B864;
loc_83B6B8C4:
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
loc_83B6B8C8:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B6B8D0"))) PPC_WEAK_FUNC(sub_83B6B8D0);
PPC_FUNC_IMPL(__imp__sub_83B6B8D0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83B6B8D8;
	__savegprlr_28(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// bl 0x83d75ebc
	ctx.lr = 0x83B6B8F4;
	__imp__RtlInitAnsiString(ctx, base);
	// li r11,-3
	ctx.r11.s64 = -3;
	// li r10,64
	ctx.r10.s64 = 64;
	// addi r9,r1,88
	ctx.r9.s64 = ctx.r1.s64 + 88;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// stw r10,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// lis r8,128
	ctx.r8.s64 = 8388608;
	// stw r9,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r9.u32);
	// lis r4,16
	ctx.r4.s64 = 1048576;
	// ori r8,r8,33
	ctx.r8.u64 = ctx.r8.u64 | 33;
	// li r7,3
	ctx.r7.s64 = 3;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// ori r4,r4,1
	ctx.r4.u64 = ctx.r4.u64 | 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83d75eac
	ctx.lr = 0x83B6B930;
	__imp__NtOpenFile(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge 0x83b6b958
	if (!cr0.lt) goto loc_83B6B958;
	// bl 0x8241a470
	ctx.lr = 0x83B6B93C;
	sub_8241A470(ctx, base);
	// bl 0x82417100
	ctx.lr = 0x83B6B940;
	sub_82417100(ctx, base);
	// cmplwi cr6,r3,2
	cr6.compare<uint32_t>(ctx.r3.u32, 2, xer);
	// bne cr6,0x83b6b950
	if (!cr6.eq) goto loc_83B6B950;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x8241a530
	ctx.lr = 0x83B6B950;
	sub_8241A530(ctx, base);
loc_83B6B950:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83b6b9d8
	goto loc_83B6B9D8;
loc_83B6B958:
	// li r7,3
	ctx.r7.s64 = 3;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r6,24
	ctx.r6.s64 = 24;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x83d760dc
	ctx.lr = 0x83B6B970;
	__imp__NtQueryVolumeInformationFile(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x83d7546c
	ctx.lr = 0x83B6B97C;
	__imp__NtClose(ctx, base);
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// bge cr6,0x83b6b990
	if (!cr6.lt) goto loc_83B6B990;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8241a470
	ctx.lr = 0x83B6B98C;
	sub_8241A470(ctx, base);
	// b 0x83b6b950
	goto loc_83B6B950;
loc_83B6B990:
	// lwz r10,144(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// ld r9,136(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 136);
	// mullw r11,r10,r11
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// ld r10,128(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// clrldi r8,r11,32
	ctx.r8.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// mulld r11,r9,r8
	ctx.r11.s64 = ctx.r9.s64 * ctx.r8.s64;
	// mulld r10,r10,r8
	ctx.r10.s64 = ctx.r10.s64 * ctx.r8.s64;
	// beq cr6,0x83b6b9bc
	if (cr6.eq) goto loc_83B6B9BC;
	// std r11,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r11.u64);
loc_83B6B9BC:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x83b6b9c8
	if (cr6.eq) goto loc_83B6B9C8;
	// std r10,0(r29)
	PPC_STORE_U64(ctx.r29.u32 + 0, ctx.r10.u64);
loc_83B6B9C8:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// beq cr6,0x83b6b9d4
	if (cr6.eq) goto loc_83B6B9D4;
	// std r11,0(r28)
	PPC_STORE_U64(ctx.r28.u32 + 0, ctx.r11.u64);
loc_83B6B9D4:
	// li r3,1
	ctx.r3.s64 = 1;
loc_83B6B9D8:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B6B9E0"))) PPC_WEAK_FUNC(sub_83B6B9E0);
PPC_FUNC_IMPL(__imp__sub_83B6B9E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32203
	ctx.r11.s64 = -2110455808;
	// lis r10,-32203
	ctx.r10.s64 = -2110455808;
	// addi r11,r11,-1040
	ctx.r11.s64 = ctx.r11.s64 + -1040;
	// addi r10,r10,224
	ctx.r10.s64 = ctx.r10.s64 + 224;
	// lis r9,-31767
	ctx.r9.s64 = -2081882112;
	// addi r9,r9,472
	ctx.r9.s64 = ctx.r9.s64 + 472;
	// lfs f13,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,320(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 320);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f10,16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// lfs f9,20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f10,f10,f0
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// lfs f8,24(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f9,f9,f0
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// lfs f6,32(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f8,f8,f0
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// lfs f5,36(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f6,f6,f0
	ctx.f6.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// lfs f4,40(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f5,f5,f0
	ctx.f5.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// lfs f11,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f0,f4,f0
	ctx.f0.f64 = double(float(ctx.f4.f64 * ctx.f0.f64));
	// lfs f7,28(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f7.f64 = double(temp.f32);
	// lfs f3,44(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	ctx.f3.f64 = double(temp.f32);
	// stfs f13,4(r9)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r9.u32 + 4, temp.u32);
	// stfs f12,8(r9)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r9.u32 + 8, temp.u32);
	// stfs f11,12(r9)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r9.u32 + 12, temp.u32);
	// stfs f10,16(r9)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r9.u32 + 16, temp.u32);
	// stfs f9,20(r9)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r9.u32 + 20, temp.u32);
	// stfs f8,24(r9)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r9.u32 + 24, temp.u32);
	// stfs f7,28(r9)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r9.u32 + 28, temp.u32);
	// stfs f6,32(r9)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r9.u32 + 32, temp.u32);
	// stfs f5,36(r9)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r9.u32 + 36, temp.u32);
	// stfs f0,40(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 40, temp.u32);
	// stfs f3,44(r9)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r9.u32 + 44, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83B6BA78"))) PPC_WEAK_FUNC(sub_83B6BA78);
PPC_FUNC_IMPL(__imp__sub_83B6BA78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32203
	ctx.r11.s64 = -2110455808;
	// lis r10,-32203
	ctx.r10.s64 = -2110455808;
	// addi r11,r11,-992
	ctx.r11.s64 = ctx.r11.s64 + -992;
	// addi r10,r10,224
	ctx.r10.s64 = ctx.r10.s64 + 224;
	// lis r9,-31767
	ctx.r9.s64 = -2081882112;
	// addi r9,r9,328
	ctx.r9.s64 = ctx.r9.s64 + 328;
	// lfs f13,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,320(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 320);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f10,16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// lfs f9,20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f10,f10,f0
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// lfs f8,24(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f9,f9,f0
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// lfs f6,32(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f8,f8,f0
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// lfs f5,36(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f6,f6,f0
	ctx.f6.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// lfs f4,40(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f5,f5,f0
	ctx.f5.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// lfs f11,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f0,f4,f0
	ctx.f0.f64 = double(float(ctx.f4.f64 * ctx.f0.f64));
	// lfs f7,28(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f7.f64 = double(temp.f32);
	// lfs f3,44(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	ctx.f3.f64 = double(temp.f32);
	// stfs f13,4(r9)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r9.u32 + 4, temp.u32);
	// stfs f12,8(r9)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r9.u32 + 8, temp.u32);
	// stfs f11,12(r9)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r9.u32 + 12, temp.u32);
	// stfs f10,16(r9)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r9.u32 + 16, temp.u32);
	// stfs f9,20(r9)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r9.u32 + 20, temp.u32);
	// stfs f8,24(r9)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r9.u32 + 24, temp.u32);
	// stfs f7,28(r9)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r9.u32 + 28, temp.u32);
	// stfs f6,32(r9)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r9.u32 + 32, temp.u32);
	// stfs f5,36(r9)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r9.u32 + 36, temp.u32);
	// stfs f0,40(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 40, temp.u32);
	// stfs f3,44(r9)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r9.u32 + 44, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83B6BB10"))) PPC_WEAK_FUNC(sub_83B6BB10);
PPC_FUNC_IMPL(__imp__sub_83B6BB10) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32203
	ctx.r11.s64 = -2110455808;
	// lis r10,-32203
	ctx.r10.s64 = -2110455808;
	// addi r11,r11,-1040
	ctx.r11.s64 = ctx.r11.s64 + -1040;
	// addi r10,r10,224
	ctx.r10.s64 = ctx.r10.s64 + 224;
	// lis r9,-31767
	ctx.r9.s64 = -2081882112;
	// addi r9,r9,376
	ctx.r9.s64 = ctx.r9.s64 + 376;
	// lfs f13,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,560(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 560);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f10,16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// lfs f9,20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f10,f10,f0
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// lfs f8,24(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f9,f9,f0
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// lfs f6,32(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f8,f8,f0
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// lfs f5,36(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f6,f6,f0
	ctx.f6.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// lfs f4,40(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f5,f5,f0
	ctx.f5.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// lfs f11,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f0,f4,f0
	ctx.f0.f64 = double(float(ctx.f4.f64 * ctx.f0.f64));
	// lfs f7,28(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f7.f64 = double(temp.f32);
	// lfs f3,44(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	ctx.f3.f64 = double(temp.f32);
	// stfs f13,4(r9)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r9.u32 + 4, temp.u32);
	// stfs f12,8(r9)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r9.u32 + 8, temp.u32);
	// stfs f11,12(r9)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r9.u32 + 12, temp.u32);
	// stfs f10,16(r9)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r9.u32 + 16, temp.u32);
	// stfs f9,20(r9)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r9.u32 + 20, temp.u32);
	// stfs f8,24(r9)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r9.u32 + 24, temp.u32);
	// stfs f7,28(r9)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r9.u32 + 28, temp.u32);
	// stfs f6,32(r9)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r9.u32 + 32, temp.u32);
	// stfs f5,36(r9)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r9.u32 + 36, temp.u32);
	// stfs f0,40(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 40, temp.u32);
	// stfs f3,44(r9)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r9.u32 + 44, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83B6BBA8"))) PPC_WEAK_FUNC(sub_83B6BBA8);
PPC_FUNC_IMPL(__imp__sub_83B6BBA8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32203
	ctx.r11.s64 = -2110455808;
	// lis r10,-32203
	ctx.r10.s64 = -2110455808;
	// addi r11,r11,-992
	ctx.r11.s64 = ctx.r11.s64 + -992;
	// addi r10,r10,224
	ctx.r10.s64 = ctx.r10.s64 + 224;
	// lis r9,-31767
	ctx.r9.s64 = -2081882112;
	// addi r9,r9,424
	ctx.r9.s64 = ctx.r9.s64 + 424;
	// lfs f13,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,560(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 560);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f10,16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// lfs f9,20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f10,f10,f0
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// lfs f8,24(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f9,f9,f0
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// lfs f6,32(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f8,f8,f0
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// lfs f5,36(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f6,f6,f0
	ctx.f6.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// lfs f4,40(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f5,f5,f0
	ctx.f5.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// lfs f11,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f0,f4,f0
	ctx.f0.f64 = double(float(ctx.f4.f64 * ctx.f0.f64));
	// lfs f7,28(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f7.f64 = double(temp.f32);
	// lfs f3,44(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	ctx.f3.f64 = double(temp.f32);
	// stfs f13,4(r9)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r9.u32 + 4, temp.u32);
	// stfs f12,8(r9)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r9.u32 + 8, temp.u32);
	// stfs f11,12(r9)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r9.u32 + 12, temp.u32);
	// stfs f10,16(r9)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r9.u32 + 16, temp.u32);
	// stfs f9,20(r9)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r9.u32 + 20, temp.u32);
	// stfs f8,24(r9)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r9.u32 + 24, temp.u32);
	// stfs f7,28(r9)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r9.u32 + 28, temp.u32);
	// stfs f6,32(r9)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r9.u32 + 32, temp.u32);
	// stfs f5,36(r9)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r9.u32 + 36, temp.u32);
	// stfs f0,40(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 40, temp.u32);
	// stfs f3,44(r9)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r9.u32 + 44, temp.u32);
	// blr 
	return;
}

