#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_83CF3B30"))) PPC_WEAK_FUNC(sub_83CF3B30);
PPC_FUNC_IMPL(__imp__sub_83CF3B30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// addi r3,r11,-22624
	ctx.r3.s64 = ctx.r11.s64 + -22624;
	// b 0x83523150
	sub_83523150(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF3B3C"))) PPC_WEAK_FUNC(sub_83CF3B3C);
PPC_FUNC_IMPL(__imp__sub_83CF3B3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF3B40"))) PPC_WEAK_FUNC(sub_83CF3B40);
PPC_FUNC_IMPL(__imp__sub_83CF3B40) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CF3B44"))) PPC_WEAK_FUNC(sub_83CF3B44);
PPC_FUNC_IMPL(__imp__sub_83CF3B44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF3B48"))) PPC_WEAK_FUNC(sub_83CF3B48);
PPC_FUNC_IMPL(__imp__sub_83CF3B48) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CF3B4C"))) PPC_WEAK_FUNC(sub_83CF3B4C);
PPC_FUNC_IMPL(__imp__sub_83CF3B4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF3B50"))) PPC_WEAK_FUNC(sub_83CF3B50);
PPC_FUNC_IMPL(__imp__sub_83CF3B50) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CF3B54"))) PPC_WEAK_FUNC(sub_83CF3B54);
PPC_FUNC_IMPL(__imp__sub_83CF3B54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF3B58"))) PPC_WEAK_FUNC(sub_83CF3B58);
PPC_FUNC_IMPL(__imp__sub_83CF3B58) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// addi r10,r11,-22208
	ctx.r10.s64 = ctx.r11.s64 + -22208;
	// lwz r3,4(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// b 0x8259b510
	sub_8259B510(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF3B70"))) PPC_WEAK_FUNC(sub_83CF3B70);
PPC_FUNC_IMPL(__imp__sub_83CF3B70) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CF3B74"))) PPC_WEAK_FUNC(sub_83CF3B74);
PPC_FUNC_IMPL(__imp__sub_83CF3B74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF3B78"))) PPC_WEAK_FUNC(sub_83CF3B78);
PPC_FUNC_IMPL(__imp__sub_83CF3B78) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CF3B7C"))) PPC_WEAK_FUNC(sub_83CF3B7C);
PPC_FUNC_IMPL(__imp__sub_83CF3B7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF3B80"))) PPC_WEAK_FUNC(sub_83CF3B80);
PPC_FUNC_IMPL(__imp__sub_83CF3B80) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CF3B84"))) PPC_WEAK_FUNC(sub_83CF3B84);
PPC_FUNC_IMPL(__imp__sub_83CF3B84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF3B88"))) PPC_WEAK_FUNC(sub_83CF3B88);
PPC_FUNC_IMPL(__imp__sub_83CF3B88) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CF3B8C"))) PPC_WEAK_FUNC(sub_83CF3B8C);
PPC_FUNC_IMPL(__imp__sub_83CF3B8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF3B90"))) PPC_WEAK_FUNC(sub_83CF3B90);
PPC_FUNC_IMPL(__imp__sub_83CF3B90) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CF3B94"))) PPC_WEAK_FUNC(sub_83CF3B94);
PPC_FUNC_IMPL(__imp__sub_83CF3B94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF3B98"))) PPC_WEAK_FUNC(sub_83CF3B98);
PPC_FUNC_IMPL(__imp__sub_83CF3B98) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CF3B9C"))) PPC_WEAK_FUNC(sub_83CF3B9C);
PPC_FUNC_IMPL(__imp__sub_83CF3B9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF3BA0"))) PPC_WEAK_FUNC(sub_83CF3BA0);
PPC_FUNC_IMPL(__imp__sub_83CF3BA0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CF3BA4"))) PPC_WEAK_FUNC(sub_83CF3BA4);
PPC_FUNC_IMPL(__imp__sub_83CF3BA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF3BA8"))) PPC_WEAK_FUNC(sub_83CF3BA8);
PPC_FUNC_IMPL(__imp__sub_83CF3BA8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CF3BAC"))) PPC_WEAK_FUNC(sub_83CF3BAC);
PPC_FUNC_IMPL(__imp__sub_83CF3BAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF3BB0"))) PPC_WEAK_FUNC(sub_83CF3BB0);
PPC_FUNC_IMPL(__imp__sub_83CF3BB0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CF3BB4"))) PPC_WEAK_FUNC(sub_83CF3BB4);
PPC_FUNC_IMPL(__imp__sub_83CF3BB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF3BB8"))) PPC_WEAK_FUNC(sub_83CF3BB8);
PPC_FUNC_IMPL(__imp__sub_83CF3BB8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CF3BBC"))) PPC_WEAK_FUNC(sub_83CF3BBC);
PPC_FUNC_IMPL(__imp__sub_83CF3BBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF3BC0"))) PPC_WEAK_FUNC(sub_83CF3BC0);
PPC_FUNC_IMPL(__imp__sub_83CF3BC0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CF3BC4"))) PPC_WEAK_FUNC(sub_83CF3BC4);
PPC_FUNC_IMPL(__imp__sub_83CF3BC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF3BC8"))) PPC_WEAK_FUNC(sub_83CF3BC8);
PPC_FUNC_IMPL(__imp__sub_83CF3BC8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CF3BCC"))) PPC_WEAK_FUNC(sub_83CF3BCC);
PPC_FUNC_IMPL(__imp__sub_83CF3BCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF3BD0"))) PPC_WEAK_FUNC(sub_83CF3BD0);
PPC_FUNC_IMPL(__imp__sub_83CF3BD0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CF3BD4"))) PPC_WEAK_FUNC(sub_83CF3BD4);
PPC_FUNC_IMPL(__imp__sub_83CF3BD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF3BD8"))) PPC_WEAK_FUNC(sub_83CF3BD8);
PPC_FUNC_IMPL(__imp__sub_83CF3BD8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CF3BDC"))) PPC_WEAK_FUNC(sub_83CF3BDC);
PPC_FUNC_IMPL(__imp__sub_83CF3BDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF3BE0"))) PPC_WEAK_FUNC(sub_83CF3BE0);
PPC_FUNC_IMPL(__imp__sub_83CF3BE0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CF3BE4"))) PPC_WEAK_FUNC(sub_83CF3BE4);
PPC_FUNC_IMPL(__imp__sub_83CF3BE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF3BE8"))) PPC_WEAK_FUNC(sub_83CF3BE8);
PPC_FUNC_IMPL(__imp__sub_83CF3BE8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CF3BEC"))) PPC_WEAK_FUNC(sub_83CF3BEC);
PPC_FUNC_IMPL(__imp__sub_83CF3BEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF3BF0"))) PPC_WEAK_FUNC(sub_83CF3BF0);
PPC_FUNC_IMPL(__imp__sub_83CF3BF0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CF3BF4"))) PPC_WEAK_FUNC(sub_83CF3BF4);
PPC_FUNC_IMPL(__imp__sub_83CF3BF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF3BF8"))) PPC_WEAK_FUNC(sub_83CF3BF8);
PPC_FUNC_IMPL(__imp__sub_83CF3BF8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CF3BFC"))) PPC_WEAK_FUNC(sub_83CF3BFC);
PPC_FUNC_IMPL(__imp__sub_83CF3BFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF3C00"))) PPC_WEAK_FUNC(sub_83CF3C00);
PPC_FUNC_IMPL(__imp__sub_83CF3C00) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CF3C04"))) PPC_WEAK_FUNC(sub_83CF3C04);
PPC_FUNC_IMPL(__imp__sub_83CF3C04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF3C08"))) PPC_WEAK_FUNC(sub_83CF3C08);
PPC_FUNC_IMPL(__imp__sub_83CF3C08) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CF3C0C"))) PPC_WEAK_FUNC(sub_83CF3C0C);
PPC_FUNC_IMPL(__imp__sub_83CF3C0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF3C10"))) PPC_WEAK_FUNC(sub_83CF3C10);
PPC_FUNC_IMPL(__imp__sub_83CF3C10) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CF3C14"))) PPC_WEAK_FUNC(sub_83CF3C14);
PPC_FUNC_IMPL(__imp__sub_83CF3C14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF3C18"))) PPC_WEAK_FUNC(sub_83CF3C18);
PPC_FUNC_IMPL(__imp__sub_83CF3C18) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CF3C1C"))) PPC_WEAK_FUNC(sub_83CF3C1C);
PPC_FUNC_IMPL(__imp__sub_83CF3C1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF3C20"))) PPC_WEAK_FUNC(sub_83CF3C20);
PPC_FUNC_IMPL(__imp__sub_83CF3C20) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CF3C24"))) PPC_WEAK_FUNC(sub_83CF3C24);
PPC_FUNC_IMPL(__imp__sub_83CF3C24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF3C28"))) PPC_WEAK_FUNC(sub_83CF3C28);
PPC_FUNC_IMPL(__imp__sub_83CF3C28) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CF3C2C"))) PPC_WEAK_FUNC(sub_83CF3C2C);
PPC_FUNC_IMPL(__imp__sub_83CF3C2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF3C30"))) PPC_WEAK_FUNC(sub_83CF3C30);
PPC_FUNC_IMPL(__imp__sub_83CF3C30) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CF3C34"))) PPC_WEAK_FUNC(sub_83CF3C34);
PPC_FUNC_IMPL(__imp__sub_83CF3C34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF3C38"))) PPC_WEAK_FUNC(sub_83CF3C38);
PPC_FUNC_IMPL(__imp__sub_83CF3C38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// addi r3,r11,-22172
	ctx.r3.s64 = ctx.r11.s64 + -22172;
	// b 0x83523150
	sub_83523150(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF3C44"))) PPC_WEAK_FUNC(sub_83CF3C44);
PPC_FUNC_IMPL(__imp__sub_83CF3C44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF3C48"))) PPC_WEAK_FUNC(sub_83CF3C48);
PPC_FUNC_IMPL(__imp__sub_83CF3C48) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CF3C4C"))) PPC_WEAK_FUNC(sub_83CF3C4C);
PPC_FUNC_IMPL(__imp__sub_83CF3C4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF3C50"))) PPC_WEAK_FUNC(sub_83CF3C50);
PPC_FUNC_IMPL(__imp__sub_83CF3C50) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CF3C54"))) PPC_WEAK_FUNC(sub_83CF3C54);
PPC_FUNC_IMPL(__imp__sub_83CF3C54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF3C58"))) PPC_WEAK_FUNC(sub_83CF3C58);
PPC_FUNC_IMPL(__imp__sub_83CF3C58) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CF3C5C"))) PPC_WEAK_FUNC(sub_83CF3C5C);
PPC_FUNC_IMPL(__imp__sub_83CF3C5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF3C60"))) PPC_WEAK_FUNC(sub_83CF3C60);
PPC_FUNC_IMPL(__imp__sub_83CF3C60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-31780
	ctx.r10.s64 = -2082734080;
	// addi r11,r11,26316
	ctx.r11.s64 = ctx.r11.s64 + 26316;
	// stw r11,20396(r10)
	PPC_STORE_U32(ctx.r10.u32 + 20396, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CF3C74"))) PPC_WEAK_FUNC(sub_83CF3C74);
PPC_FUNC_IMPL(__imp__sub_83CF3C74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF3C78"))) PPC_WEAK_FUNC(sub_83CF3C78);
PPC_FUNC_IMPL(__imp__sub_83CF3C78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// lwz r3,-21792(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -21792);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwsync 
	// li r10,-1
	ctx.r10.s64 = -1;
	// addi r7,r3,4
	ctx.r7.s64 = ctx.r3.s64 + 4;
loc_83CF3C94:
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
	// bne 0x83cf3c94
	if (!cr0.eq) goto loc_83CF3C94;
	// mr r11,r11
	ctx.r11.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_83CF3CCC"))) PPC_WEAK_FUNC(sub_83CF3CCC);
PPC_FUNC_IMPL(__imp__sub_83CF3CCC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CF3CD0"))) PPC_WEAK_FUNC(sub_83CF3CD0);
PPC_FUNC_IMPL(__imp__sub_83CF3CD0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CF3CD4"))) PPC_WEAK_FUNC(sub_83CF3CD4);
PPC_FUNC_IMPL(__imp__sub_83CF3CD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF3CD8"))) PPC_WEAK_FUNC(sub_83CF3CD8);
PPC_FUNC_IMPL(__imp__sub_83CF3CD8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CF3CDC"))) PPC_WEAK_FUNC(sub_83CF3CDC);
PPC_FUNC_IMPL(__imp__sub_83CF3CDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF3CE0"))) PPC_WEAK_FUNC(sub_83CF3CE0);
PPC_FUNC_IMPL(__imp__sub_83CF3CE0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CF3CE4"))) PPC_WEAK_FUNC(sub_83CF3CE4);
PPC_FUNC_IMPL(__imp__sub_83CF3CE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF3CE8"))) PPC_WEAK_FUNC(sub_83CF3CE8);
PPC_FUNC_IMPL(__imp__sub_83CF3CE8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CF3CEC"))) PPC_WEAK_FUNC(sub_83CF3CEC);
PPC_FUNC_IMPL(__imp__sub_83CF3CEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF3CF0"))) PPC_WEAK_FUNC(sub_83CF3CF0);
PPC_FUNC_IMPL(__imp__sub_83CF3CF0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CF3CF4"))) PPC_WEAK_FUNC(sub_83CF3CF4);
PPC_FUNC_IMPL(__imp__sub_83CF3CF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF3CF8"))) PPC_WEAK_FUNC(sub_83CF3CF8);
PPC_FUNC_IMPL(__imp__sub_83CF3CF8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CF3CFC"))) PPC_WEAK_FUNC(sub_83CF3CFC);
PPC_FUNC_IMPL(__imp__sub_83CF3CFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF3D00"))) PPC_WEAK_FUNC(sub_83CF3D00);
PPC_FUNC_IMPL(__imp__sub_83CF3D00) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CF3D04"))) PPC_WEAK_FUNC(sub_83CF3D04);
PPC_FUNC_IMPL(__imp__sub_83CF3D04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF3D08"))) PPC_WEAK_FUNC(sub_83CF3D08);
PPC_FUNC_IMPL(__imp__sub_83CF3D08) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CF3D0C"))) PPC_WEAK_FUNC(sub_83CF3D0C);
PPC_FUNC_IMPL(__imp__sub_83CF3D0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF3D10"))) PPC_WEAK_FUNC(sub_83CF3D10);
PPC_FUNC_IMPL(__imp__sub_83CF3D10) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CF3D14"))) PPC_WEAK_FUNC(sub_83CF3D14);
PPC_FUNC_IMPL(__imp__sub_83CF3D14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF3D18"))) PPC_WEAK_FUNC(sub_83CF3D18);
PPC_FUNC_IMPL(__imp__sub_83CF3D18) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CF3D1C"))) PPC_WEAK_FUNC(sub_83CF3D1C);
PPC_FUNC_IMPL(__imp__sub_83CF3D1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF3D20"))) PPC_WEAK_FUNC(sub_83CF3D20);
PPC_FUNC_IMPL(__imp__sub_83CF3D20) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CF3D24"))) PPC_WEAK_FUNC(sub_83CF3D24);
PPC_FUNC_IMPL(__imp__sub_83CF3D24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF3D28"))) PPC_WEAK_FUNC(sub_83CF3D28);
PPC_FUNC_IMPL(__imp__sub_83CF3D28) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CF3D2C"))) PPC_WEAK_FUNC(sub_83CF3D2C);
PPC_FUNC_IMPL(__imp__sub_83CF3D2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF3D30"))) PPC_WEAK_FUNC(sub_83CF3D30);
PPC_FUNC_IMPL(__imp__sub_83CF3D30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// addi r3,r11,-21744
	ctx.r3.s64 = ctx.r11.s64 + -21744;
	// b 0x83523150
	sub_83523150(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF3D3C"))) PPC_WEAK_FUNC(sub_83CF3D3C);
PPC_FUNC_IMPL(__imp__sub_83CF3D3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF3D40"))) PPC_WEAK_FUNC(sub_83CF3D40);
PPC_FUNC_IMPL(__imp__sub_83CF3D40) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CF3D44"))) PPC_WEAK_FUNC(sub_83CF3D44);
PPC_FUNC_IMPL(__imp__sub_83CF3D44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF3D48"))) PPC_WEAK_FUNC(sub_83CF3D48);
PPC_FUNC_IMPL(__imp__sub_83CF3D48) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CF3D4C"))) PPC_WEAK_FUNC(sub_83CF3D4C);
PPC_FUNC_IMPL(__imp__sub_83CF3D4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF3D50"))) PPC_WEAK_FUNC(sub_83CF3D50);
PPC_FUNC_IMPL(__imp__sub_83CF3D50) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CF3D54"))) PPC_WEAK_FUNC(sub_83CF3D54);
PPC_FUNC_IMPL(__imp__sub_83CF3D54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF3D58"))) PPC_WEAK_FUNC(sub_83CF3D58);
PPC_FUNC_IMPL(__imp__sub_83CF3D58) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CF3D5C"))) PPC_WEAK_FUNC(sub_83CF3D5C);
PPC_FUNC_IMPL(__imp__sub_83CF3D5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF3D60"))) PPC_WEAK_FUNC(sub_83CF3D60);
PPC_FUNC_IMPL(__imp__sub_83CF3D60) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CF3D64"))) PPC_WEAK_FUNC(sub_83CF3D64);
PPC_FUNC_IMPL(__imp__sub_83CF3D64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF3D68"))) PPC_WEAK_FUNC(sub_83CF3D68);
PPC_FUNC_IMPL(__imp__sub_83CF3D68) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CF3D6C"))) PPC_WEAK_FUNC(sub_83CF3D6C);
PPC_FUNC_IMPL(__imp__sub_83CF3D6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF3D70"))) PPC_WEAK_FUNC(sub_83CF3D70);
PPC_FUNC_IMPL(__imp__sub_83CF3D70) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CF3D74"))) PPC_WEAK_FUNC(sub_83CF3D74);
PPC_FUNC_IMPL(__imp__sub_83CF3D74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF3D78"))) PPC_WEAK_FUNC(sub_83CF3D78);
PPC_FUNC_IMPL(__imp__sub_83CF3D78) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CF3D7C"))) PPC_WEAK_FUNC(sub_83CF3D7C);
PPC_FUNC_IMPL(__imp__sub_83CF3D7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF3D80"))) PPC_WEAK_FUNC(sub_83CF3D80);
PPC_FUNC_IMPL(__imp__sub_83CF3D80) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CF3D84"))) PPC_WEAK_FUNC(sub_83CF3D84);
PPC_FUNC_IMPL(__imp__sub_83CF3D84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF3D88"))) PPC_WEAK_FUNC(sub_83CF3D88);
PPC_FUNC_IMPL(__imp__sub_83CF3D88) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CF3D8C"))) PPC_WEAK_FUNC(sub_83CF3D8C);
PPC_FUNC_IMPL(__imp__sub_83CF3D8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF3D90"))) PPC_WEAK_FUNC(sub_83CF3D90);
PPC_FUNC_IMPL(__imp__sub_83CF3D90) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CF3D94"))) PPC_WEAK_FUNC(sub_83CF3D94);
PPC_FUNC_IMPL(__imp__sub_83CF3D94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF3D98"))) PPC_WEAK_FUNC(sub_83CF3D98);
PPC_FUNC_IMPL(__imp__sub_83CF3D98) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CF3D9C"))) PPC_WEAK_FUNC(sub_83CF3D9C);
PPC_FUNC_IMPL(__imp__sub_83CF3D9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF3DA0"))) PPC_WEAK_FUNC(sub_83CF3DA0);
PPC_FUNC_IMPL(__imp__sub_83CF3DA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// addi r3,r11,-21735
	ctx.r3.s64 = ctx.r11.s64 + -21735;
	// b 0x83523150
	sub_83523150(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF3DAC"))) PPC_WEAK_FUNC(sub_83CF3DAC);
PPC_FUNC_IMPL(__imp__sub_83CF3DAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF3DB0"))) PPC_WEAK_FUNC(sub_83CF3DB0);
PPC_FUNC_IMPL(__imp__sub_83CF3DB0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CF3DB4"))) PPC_WEAK_FUNC(sub_83CF3DB4);
PPC_FUNC_IMPL(__imp__sub_83CF3DB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF3DB8"))) PPC_WEAK_FUNC(sub_83CF3DB8);
PPC_FUNC_IMPL(__imp__sub_83CF3DB8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CF3DBC"))) PPC_WEAK_FUNC(sub_83CF3DBC);
PPC_FUNC_IMPL(__imp__sub_83CF3DBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF3DC0"))) PPC_WEAK_FUNC(sub_83CF3DC0);
PPC_FUNC_IMPL(__imp__sub_83CF3DC0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CF3DC4"))) PPC_WEAK_FUNC(sub_83CF3DC4);
PPC_FUNC_IMPL(__imp__sub_83CF3DC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF3DC8"))) PPC_WEAK_FUNC(sub_83CF3DC8);
PPC_FUNC_IMPL(__imp__sub_83CF3DC8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CF3DCC"))) PPC_WEAK_FUNC(sub_83CF3DCC);
PPC_FUNC_IMPL(__imp__sub_83CF3DCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF3DD0"))) PPC_WEAK_FUNC(sub_83CF3DD0);
PPC_FUNC_IMPL(__imp__sub_83CF3DD0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CF3DD4"))) PPC_WEAK_FUNC(sub_83CF3DD4);
PPC_FUNC_IMPL(__imp__sub_83CF3DD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF3DD8"))) PPC_WEAK_FUNC(sub_83CF3DD8);
PPC_FUNC_IMPL(__imp__sub_83CF3DD8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CF3DDC"))) PPC_WEAK_FUNC(sub_83CF3DDC);
PPC_FUNC_IMPL(__imp__sub_83CF3DDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF3DE0"))) PPC_WEAK_FUNC(sub_83CF3DE0);
PPC_FUNC_IMPL(__imp__sub_83CF3DE0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CF3DE4"))) PPC_WEAK_FUNC(sub_83CF3DE4);
PPC_FUNC_IMPL(__imp__sub_83CF3DE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF3DE8"))) PPC_WEAK_FUNC(sub_83CF3DE8);
PPC_FUNC_IMPL(__imp__sub_83CF3DE8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CF3DEC"))) PPC_WEAK_FUNC(sub_83CF3DEC);
PPC_FUNC_IMPL(__imp__sub_83CF3DEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF3DF0"))) PPC_WEAK_FUNC(sub_83CF3DF0);
PPC_FUNC_IMPL(__imp__sub_83CF3DF0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CF3DF4"))) PPC_WEAK_FUNC(sub_83CF3DF4);
PPC_FUNC_IMPL(__imp__sub_83CF3DF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF3DF8"))) PPC_WEAK_FUNC(sub_83CF3DF8);
PPC_FUNC_IMPL(__imp__sub_83CF3DF8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CF3DFC"))) PPC_WEAK_FUNC(sub_83CF3DFC);
PPC_FUNC_IMPL(__imp__sub_83CF3DFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF3E00"))) PPC_WEAK_FUNC(sub_83CF3E00);
PPC_FUNC_IMPL(__imp__sub_83CF3E00) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CF3E04"))) PPC_WEAK_FUNC(sub_83CF3E04);
PPC_FUNC_IMPL(__imp__sub_83CF3E04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF3E08"))) PPC_WEAK_FUNC(sub_83CF3E08);
PPC_FUNC_IMPL(__imp__sub_83CF3E08) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CF3E0C"))) PPC_WEAK_FUNC(sub_83CF3E0C);
PPC_FUNC_IMPL(__imp__sub_83CF3E0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF3E10"))) PPC_WEAK_FUNC(sub_83CF3E10);
PPC_FUNC_IMPL(__imp__sub_83CF3E10) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CF3E14"))) PPC_WEAK_FUNC(sub_83CF3E14);
PPC_FUNC_IMPL(__imp__sub_83CF3E14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF3E18"))) PPC_WEAK_FUNC(sub_83CF3E18);
PPC_FUNC_IMPL(__imp__sub_83CF3E18) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CF3E1C"))) PPC_WEAK_FUNC(sub_83CF3E1C);
PPC_FUNC_IMPL(__imp__sub_83CF3E1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF3E20"))) PPC_WEAK_FUNC(sub_83CF3E20);
PPC_FUNC_IMPL(__imp__sub_83CF3E20) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CF3E24"))) PPC_WEAK_FUNC(sub_83CF3E24);
PPC_FUNC_IMPL(__imp__sub_83CF3E24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF3E28"))) PPC_WEAK_FUNC(sub_83CF3E28);
PPC_FUNC_IMPL(__imp__sub_83CF3E28) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CF3E2C"))) PPC_WEAK_FUNC(sub_83CF3E2C);
PPC_FUNC_IMPL(__imp__sub_83CF3E2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF3E30"))) PPC_WEAK_FUNC(sub_83CF3E30);
PPC_FUNC_IMPL(__imp__sub_83CF3E30) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CF3E34"))) PPC_WEAK_FUNC(sub_83CF3E34);
PPC_FUNC_IMPL(__imp__sub_83CF3E34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF3E38"))) PPC_WEAK_FUNC(sub_83CF3E38);
PPC_FUNC_IMPL(__imp__sub_83CF3E38) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CF3E3C"))) PPC_WEAK_FUNC(sub_83CF3E3C);
PPC_FUNC_IMPL(__imp__sub_83CF3E3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF3E40"))) PPC_WEAK_FUNC(sub_83CF3E40);
PPC_FUNC_IMPL(__imp__sub_83CF3E40) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CF3E44"))) PPC_WEAK_FUNC(sub_83CF3E44);
PPC_FUNC_IMPL(__imp__sub_83CF3E44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF3E48"))) PPC_WEAK_FUNC(sub_83CF3E48);
PPC_FUNC_IMPL(__imp__sub_83CF3E48) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CF3E4C"))) PPC_WEAK_FUNC(sub_83CF3E4C);
PPC_FUNC_IMPL(__imp__sub_83CF3E4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF3E50"))) PPC_WEAK_FUNC(sub_83CF3E50);
PPC_FUNC_IMPL(__imp__sub_83CF3E50) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CF3E54"))) PPC_WEAK_FUNC(sub_83CF3E54);
PPC_FUNC_IMPL(__imp__sub_83CF3E54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF3E58"))) PPC_WEAK_FUNC(sub_83CF3E58);
PPC_FUNC_IMPL(__imp__sub_83CF3E58) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CF3E5C"))) PPC_WEAK_FUNC(sub_83CF3E5C);
PPC_FUNC_IMPL(__imp__sub_83CF3E5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF3E60"))) PPC_WEAK_FUNC(sub_83CF3E60);
PPC_FUNC_IMPL(__imp__sub_83CF3E60) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CF3E64"))) PPC_WEAK_FUNC(sub_83CF3E64);
PPC_FUNC_IMPL(__imp__sub_83CF3E64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF3E68"))) PPC_WEAK_FUNC(sub_83CF3E68);
PPC_FUNC_IMPL(__imp__sub_83CF3E68) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CF3E6C"))) PPC_WEAK_FUNC(sub_83CF3E6C);
PPC_FUNC_IMPL(__imp__sub_83CF3E6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF3E70"))) PPC_WEAK_FUNC(sub_83CF3E70);
PPC_FUNC_IMPL(__imp__sub_83CF3E70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// addi r3,r11,-21716
	ctx.r3.s64 = ctx.r11.s64 + -21716;
	// b 0x83523150
	sub_83523150(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF3E7C"))) PPC_WEAK_FUNC(sub_83CF3E7C);
PPC_FUNC_IMPL(__imp__sub_83CF3E7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF3E80"))) PPC_WEAK_FUNC(sub_83CF3E80);
PPC_FUNC_IMPL(__imp__sub_83CF3E80) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CF3E84"))) PPC_WEAK_FUNC(sub_83CF3E84);
PPC_FUNC_IMPL(__imp__sub_83CF3E84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF3E88"))) PPC_WEAK_FUNC(sub_83CF3E88);
PPC_FUNC_IMPL(__imp__sub_83CF3E88) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CF3E8C"))) PPC_WEAK_FUNC(sub_83CF3E8C);
PPC_FUNC_IMPL(__imp__sub_83CF3E8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF3E90"))) PPC_WEAK_FUNC(sub_83CF3E90);
PPC_FUNC_IMPL(__imp__sub_83CF3E90) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CF3E94"))) PPC_WEAK_FUNC(sub_83CF3E94);
PPC_FUNC_IMPL(__imp__sub_83CF3E94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF3E98"))) PPC_WEAK_FUNC(sub_83CF3E98);
PPC_FUNC_IMPL(__imp__sub_83CF3E98) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CF3E9C"))) PPC_WEAK_FUNC(sub_83CF3E9C);
PPC_FUNC_IMPL(__imp__sub_83CF3E9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF3EA0"))) PPC_WEAK_FUNC(sub_83CF3EA0);
PPC_FUNC_IMPL(__imp__sub_83CF3EA0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CF3EA4"))) PPC_WEAK_FUNC(sub_83CF3EA4);
PPC_FUNC_IMPL(__imp__sub_83CF3EA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF3EA8"))) PPC_WEAK_FUNC(sub_83CF3EA8);
PPC_FUNC_IMPL(__imp__sub_83CF3EA8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CF3EAC"))) PPC_WEAK_FUNC(sub_83CF3EAC);
PPC_FUNC_IMPL(__imp__sub_83CF3EAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF3EB0"))) PPC_WEAK_FUNC(sub_83CF3EB0);
PPC_FUNC_IMPL(__imp__sub_83CF3EB0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CF3EB4"))) PPC_WEAK_FUNC(sub_83CF3EB4);
PPC_FUNC_IMPL(__imp__sub_83CF3EB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF3EB8"))) PPC_WEAK_FUNC(sub_83CF3EB8);
PPC_FUNC_IMPL(__imp__sub_83CF3EB8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CF3EBC"))) PPC_WEAK_FUNC(sub_83CF3EBC);
PPC_FUNC_IMPL(__imp__sub_83CF3EBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF3EC0"))) PPC_WEAK_FUNC(sub_83CF3EC0);
PPC_FUNC_IMPL(__imp__sub_83CF3EC0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CF3EC4"))) PPC_WEAK_FUNC(sub_83CF3EC4);
PPC_FUNC_IMPL(__imp__sub_83CF3EC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF3EC8"))) PPC_WEAK_FUNC(sub_83CF3EC8);
PPC_FUNC_IMPL(__imp__sub_83CF3EC8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CF3ECC"))) PPC_WEAK_FUNC(sub_83CF3ECC);
PPC_FUNC_IMPL(__imp__sub_83CF3ECC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF3ED0"))) PPC_WEAK_FUNC(sub_83CF3ED0);
PPC_FUNC_IMPL(__imp__sub_83CF3ED0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CF3ED4"))) PPC_WEAK_FUNC(sub_83CF3ED4);
PPC_FUNC_IMPL(__imp__sub_83CF3ED4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF3ED8"))) PPC_WEAK_FUNC(sub_83CF3ED8);
PPC_FUNC_IMPL(__imp__sub_83CF3ED8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CF3EDC"))) PPC_WEAK_FUNC(sub_83CF3EDC);
PPC_FUNC_IMPL(__imp__sub_83CF3EDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF3EE0"))) PPC_WEAK_FUNC(sub_83CF3EE0);
PPC_FUNC_IMPL(__imp__sub_83CF3EE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// lwz r3,-21700(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -21700);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwsync 
	// li r10,-1
	ctx.r10.s64 = -1;
	// addi r7,r3,4
	ctx.r7.s64 = ctx.r3.s64 + 4;
loc_83CF3EFC:
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
	// bne 0x83cf3efc
	if (!cr0.eq) goto loc_83CF3EFC;
	// mr r11,r11
	ctx.r11.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_83CF3F34"))) PPC_WEAK_FUNC(sub_83CF3F34);
PPC_FUNC_IMPL(__imp__sub_83CF3F34) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CF3F38"))) PPC_WEAK_FUNC(sub_83CF3F38);
PPC_FUNC_IMPL(__imp__sub_83CF3F38) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CF3F3C"))) PPC_WEAK_FUNC(sub_83CF3F3C);
PPC_FUNC_IMPL(__imp__sub_83CF3F3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF3F40"))) PPC_WEAK_FUNC(sub_83CF3F40);
PPC_FUNC_IMPL(__imp__sub_83CF3F40) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CF3F44"))) PPC_WEAK_FUNC(sub_83CF3F44);
PPC_FUNC_IMPL(__imp__sub_83CF3F44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF3F48"))) PPC_WEAK_FUNC(sub_83CF3F48);
PPC_FUNC_IMPL(__imp__sub_83CF3F48) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CF3F4C"))) PPC_WEAK_FUNC(sub_83CF3F4C);
PPC_FUNC_IMPL(__imp__sub_83CF3F4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF3F50"))) PPC_WEAK_FUNC(sub_83CF3F50);
PPC_FUNC_IMPL(__imp__sub_83CF3F50) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CF3F54"))) PPC_WEAK_FUNC(sub_83CF3F54);
PPC_FUNC_IMPL(__imp__sub_83CF3F54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF3F58"))) PPC_WEAK_FUNC(sub_83CF3F58);
PPC_FUNC_IMPL(__imp__sub_83CF3F58) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CF3F5C"))) PPC_WEAK_FUNC(sub_83CF3F5C);
PPC_FUNC_IMPL(__imp__sub_83CF3F5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF3F60"))) PPC_WEAK_FUNC(sub_83CF3F60);
PPC_FUNC_IMPL(__imp__sub_83CF3F60) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CF3F64"))) PPC_WEAK_FUNC(sub_83CF3F64);
PPC_FUNC_IMPL(__imp__sub_83CF3F64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF3F68"))) PPC_WEAK_FUNC(sub_83CF3F68);
PPC_FUNC_IMPL(__imp__sub_83CF3F68) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CF3F6C"))) PPC_WEAK_FUNC(sub_83CF3F6C);
PPC_FUNC_IMPL(__imp__sub_83CF3F6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF3F70"))) PPC_WEAK_FUNC(sub_83CF3F70);
PPC_FUNC_IMPL(__imp__sub_83CF3F70) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CF3F74"))) PPC_WEAK_FUNC(sub_83CF3F74);
PPC_FUNC_IMPL(__imp__sub_83CF3F74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF3F78"))) PPC_WEAK_FUNC(sub_83CF3F78);
PPC_FUNC_IMPL(__imp__sub_83CF3F78) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CF3F7C"))) PPC_WEAK_FUNC(sub_83CF3F7C);
PPC_FUNC_IMPL(__imp__sub_83CF3F7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF3F80"))) PPC_WEAK_FUNC(sub_83CF3F80);
PPC_FUNC_IMPL(__imp__sub_83CF3F80) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CF3F84"))) PPC_WEAK_FUNC(sub_83CF3F84);
PPC_FUNC_IMPL(__imp__sub_83CF3F84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF3F88"))) PPC_WEAK_FUNC(sub_83CF3F88);
PPC_FUNC_IMPL(__imp__sub_83CF3F88) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CF3F8C"))) PPC_WEAK_FUNC(sub_83CF3F8C);
PPC_FUNC_IMPL(__imp__sub_83CF3F8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF3F90"))) PPC_WEAK_FUNC(sub_83CF3F90);
PPC_FUNC_IMPL(__imp__sub_83CF3F90) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CF3F94"))) PPC_WEAK_FUNC(sub_83CF3F94);
PPC_FUNC_IMPL(__imp__sub_83CF3F94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF3F98"))) PPC_WEAK_FUNC(sub_83CF3F98);
PPC_FUNC_IMPL(__imp__sub_83CF3F98) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CF3F9C"))) PPC_WEAK_FUNC(sub_83CF3F9C);
PPC_FUNC_IMPL(__imp__sub_83CF3F9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF3FA0"))) PPC_WEAK_FUNC(sub_83CF3FA0);
PPC_FUNC_IMPL(__imp__sub_83CF3FA0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CF3FA4"))) PPC_WEAK_FUNC(sub_83CF3FA4);
PPC_FUNC_IMPL(__imp__sub_83CF3FA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF3FA8"))) PPC_WEAK_FUNC(sub_83CF3FA8);
PPC_FUNC_IMPL(__imp__sub_83CF3FA8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CF3FAC"))) PPC_WEAK_FUNC(sub_83CF3FAC);
PPC_FUNC_IMPL(__imp__sub_83CF3FAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF3FB0"))) PPC_WEAK_FUNC(sub_83CF3FB0);
PPC_FUNC_IMPL(__imp__sub_83CF3FB0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CF3FB4"))) PPC_WEAK_FUNC(sub_83CF3FB4);
PPC_FUNC_IMPL(__imp__sub_83CF3FB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF3FB8"))) PPC_WEAK_FUNC(sub_83CF3FB8);
PPC_FUNC_IMPL(__imp__sub_83CF3FB8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CF3FBC"))) PPC_WEAK_FUNC(sub_83CF3FBC);
PPC_FUNC_IMPL(__imp__sub_83CF3FBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF3FC0"))) PPC_WEAK_FUNC(sub_83CF3FC0);
PPC_FUNC_IMPL(__imp__sub_83CF3FC0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CF3FC4"))) PPC_WEAK_FUNC(sub_83CF3FC4);
PPC_FUNC_IMPL(__imp__sub_83CF3FC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF3FC8"))) PPC_WEAK_FUNC(sub_83CF3FC8);
PPC_FUNC_IMPL(__imp__sub_83CF3FC8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CF3FCC"))) PPC_WEAK_FUNC(sub_83CF3FCC);
PPC_FUNC_IMPL(__imp__sub_83CF3FCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF3FD0"))) PPC_WEAK_FUNC(sub_83CF3FD0);
PPC_FUNC_IMPL(__imp__sub_83CF3FD0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CF3FD4"))) PPC_WEAK_FUNC(sub_83CF3FD4);
PPC_FUNC_IMPL(__imp__sub_83CF3FD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF3FD8"))) PPC_WEAK_FUNC(sub_83CF3FD8);
PPC_FUNC_IMPL(__imp__sub_83CF3FD8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CF3FDC"))) PPC_WEAK_FUNC(sub_83CF3FDC);
PPC_FUNC_IMPL(__imp__sub_83CF3FDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF3FE0"))) PPC_WEAK_FUNC(sub_83CF3FE0);
PPC_FUNC_IMPL(__imp__sub_83CF3FE0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CF3FE4"))) PPC_WEAK_FUNC(sub_83CF3FE4);
PPC_FUNC_IMPL(__imp__sub_83CF3FE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF3FE8"))) PPC_WEAK_FUNC(sub_83CF3FE8);
PPC_FUNC_IMPL(__imp__sub_83CF3FE8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CF3FEC"))) PPC_WEAK_FUNC(sub_83CF3FEC);
PPC_FUNC_IMPL(__imp__sub_83CF3FEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF3FF0"))) PPC_WEAK_FUNC(sub_83CF3FF0);
PPC_FUNC_IMPL(__imp__sub_83CF3FF0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CF3FF4"))) PPC_WEAK_FUNC(sub_83CF3FF4);
PPC_FUNC_IMPL(__imp__sub_83CF3FF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF3FF8"))) PPC_WEAK_FUNC(sub_83CF3FF8);
PPC_FUNC_IMPL(__imp__sub_83CF3FF8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CF3FFC"))) PPC_WEAK_FUNC(sub_83CF3FFC);
PPC_FUNC_IMPL(__imp__sub_83CF3FFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF4000"))) PPC_WEAK_FUNC(sub_83CF4000);
PPC_FUNC_IMPL(__imp__sub_83CF4000) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CF4004"))) PPC_WEAK_FUNC(sub_83CF4004);
PPC_FUNC_IMPL(__imp__sub_83CF4004) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF4008"))) PPC_WEAK_FUNC(sub_83CF4008);
PPC_FUNC_IMPL(__imp__sub_83CF4008) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CF400C"))) PPC_WEAK_FUNC(sub_83CF400C);
PPC_FUNC_IMPL(__imp__sub_83CF400C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF4010"))) PPC_WEAK_FUNC(sub_83CF4010);
PPC_FUNC_IMPL(__imp__sub_83CF4010) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CF4014"))) PPC_WEAK_FUNC(sub_83CF4014);
PPC_FUNC_IMPL(__imp__sub_83CF4014) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF4018"))) PPC_WEAK_FUNC(sub_83CF4018);
PPC_FUNC_IMPL(__imp__sub_83CF4018) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

