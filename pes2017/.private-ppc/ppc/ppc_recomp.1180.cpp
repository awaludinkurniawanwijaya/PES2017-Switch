#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_83D2F634"))) PPC_WEAK_FUNC(sub_83D2F634);
PPC_FUNC_IMPL(__imp__sub_83D2F634) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D2F638"))) PPC_WEAK_FUNC(sub_83D2F638);
PPC_FUNC_IMPL(__imp__sub_83D2F638) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D2F63C"))) PPC_WEAK_FUNC(sub_83D2F63C);
PPC_FUNC_IMPL(__imp__sub_83D2F63C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D2F640"))) PPC_WEAK_FUNC(sub_83D2F640);
PPC_FUNC_IMPL(__imp__sub_83D2F640) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D2F644"))) PPC_WEAK_FUNC(sub_83D2F644);
PPC_FUNC_IMPL(__imp__sub_83D2F644) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D2F648"))) PPC_WEAK_FUNC(sub_83D2F648);
PPC_FUNC_IMPL(__imp__sub_83D2F648) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D2F64C"))) PPC_WEAK_FUNC(sub_83D2F64C);
PPC_FUNC_IMPL(__imp__sub_83D2F64C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D2F650"))) PPC_WEAK_FUNC(sub_83D2F650);
PPC_FUNC_IMPL(__imp__sub_83D2F650) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D2F654"))) PPC_WEAK_FUNC(sub_83D2F654);
PPC_FUNC_IMPL(__imp__sub_83D2F654) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D2F658"))) PPC_WEAK_FUNC(sub_83D2F658);
PPC_FUNC_IMPL(__imp__sub_83D2F658) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D2F65C"))) PPC_WEAK_FUNC(sub_83D2F65C);
PPC_FUNC_IMPL(__imp__sub_83D2F65C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D2F660"))) PPC_WEAK_FUNC(sub_83D2F660);
PPC_FUNC_IMPL(__imp__sub_83D2F660) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31757
	ctx.r11.s64 = -2081226752;
	// addi r3,r11,-13948
	ctx.r3.s64 = ctx.r11.s64 + -13948;
	// b 0x83523150
	sub_83523150(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83D2F66C"))) PPC_WEAK_FUNC(sub_83D2F66C);
PPC_FUNC_IMPL(__imp__sub_83D2F66C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D2F670"))) PPC_WEAK_FUNC(sub_83D2F670);
PPC_FUNC_IMPL(__imp__sub_83D2F670) {
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
	// lis r11,-31775
	ctx.r11.s64 = -2082406400;
	// addi r31,r11,15080
	ctx.r31.s64 = ctx.r11.s64 + 15080;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83d2f6a8
	if (cr6.lt) goto loc_83D2F6A8;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x83D2F6A8;
	sub_825952B8(ctx, base);
loc_83D2F6A8:
	// li r11,15
	ctx.r11.s64 = 15;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// stb r9,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r9.u8);
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

__attribute__((alias("__imp__sub_83D2F6D4"))) PPC_WEAK_FUNC(sub_83D2F6D4);
PPC_FUNC_IMPL(__imp__sub_83D2F6D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D2F6D8"))) PPC_WEAK_FUNC(sub_83D2F6D8);
PPC_FUNC_IMPL(__imp__sub_83D2F6D8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D2F6DC"))) PPC_WEAK_FUNC(sub_83D2F6DC);
PPC_FUNC_IMPL(__imp__sub_83D2F6DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D2F6E0"))) PPC_WEAK_FUNC(sub_83D2F6E0);
PPC_FUNC_IMPL(__imp__sub_83D2F6E0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D2F6E4"))) PPC_WEAK_FUNC(sub_83D2F6E4);
PPC_FUNC_IMPL(__imp__sub_83D2F6E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D2F6E8"))) PPC_WEAK_FUNC(sub_83D2F6E8);
PPC_FUNC_IMPL(__imp__sub_83D2F6E8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D2F6EC"))) PPC_WEAK_FUNC(sub_83D2F6EC);
PPC_FUNC_IMPL(__imp__sub_83D2F6EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D2F6F0"))) PPC_WEAK_FUNC(sub_83D2F6F0);
PPC_FUNC_IMPL(__imp__sub_83D2F6F0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D2F6F4"))) PPC_WEAK_FUNC(sub_83D2F6F4);
PPC_FUNC_IMPL(__imp__sub_83D2F6F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D2F6F8"))) PPC_WEAK_FUNC(sub_83D2F6F8);
PPC_FUNC_IMPL(__imp__sub_83D2F6F8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D2F6FC"))) PPC_WEAK_FUNC(sub_83D2F6FC);
PPC_FUNC_IMPL(__imp__sub_83D2F6FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D2F700"))) PPC_WEAK_FUNC(sub_83D2F700);
PPC_FUNC_IMPL(__imp__sub_83D2F700) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D2F704"))) PPC_WEAK_FUNC(sub_83D2F704);
PPC_FUNC_IMPL(__imp__sub_83D2F704) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D2F708"))) PPC_WEAK_FUNC(sub_83D2F708);
PPC_FUNC_IMPL(__imp__sub_83D2F708) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D2F70C"))) PPC_WEAK_FUNC(sub_83D2F70C);
PPC_FUNC_IMPL(__imp__sub_83D2F70C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D2F710"))) PPC_WEAK_FUNC(sub_83D2F710);
PPC_FUNC_IMPL(__imp__sub_83D2F710) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D2F714"))) PPC_WEAK_FUNC(sub_83D2F714);
PPC_FUNC_IMPL(__imp__sub_83D2F714) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D2F718"))) PPC_WEAK_FUNC(sub_83D2F718);
PPC_FUNC_IMPL(__imp__sub_83D2F718) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D2F71C"))) PPC_WEAK_FUNC(sub_83D2F71C);
PPC_FUNC_IMPL(__imp__sub_83D2F71C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D2F720"))) PPC_WEAK_FUNC(sub_83D2F720);
PPC_FUNC_IMPL(__imp__sub_83D2F720) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D2F724"))) PPC_WEAK_FUNC(sub_83D2F724);
PPC_FUNC_IMPL(__imp__sub_83D2F724) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D2F728"))) PPC_WEAK_FUNC(sub_83D2F728);
PPC_FUNC_IMPL(__imp__sub_83D2F728) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D2F72C"))) PPC_WEAK_FUNC(sub_83D2F72C);
PPC_FUNC_IMPL(__imp__sub_83D2F72C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D2F730"))) PPC_WEAK_FUNC(sub_83D2F730);
PPC_FUNC_IMPL(__imp__sub_83D2F730) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D2F734"))) PPC_WEAK_FUNC(sub_83D2F734);
PPC_FUNC_IMPL(__imp__sub_83D2F734) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D2F738"))) PPC_WEAK_FUNC(sub_83D2F738);
PPC_FUNC_IMPL(__imp__sub_83D2F738) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31757
	ctx.r11.s64 = -2081226752;
	// addi r3,r11,-13936
	ctx.r3.s64 = ctx.r11.s64 + -13936;
	// b 0x83523150
	sub_83523150(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83D2F744"))) PPC_WEAK_FUNC(sub_83D2F744);
PPC_FUNC_IMPL(__imp__sub_83D2F744) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D2F748"))) PPC_WEAK_FUNC(sub_83D2F748);
PPC_FUNC_IMPL(__imp__sub_83D2F748) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D2F74C"))) PPC_WEAK_FUNC(sub_83D2F74C);
PPC_FUNC_IMPL(__imp__sub_83D2F74C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D2F750"))) PPC_WEAK_FUNC(sub_83D2F750);
PPC_FUNC_IMPL(__imp__sub_83D2F750) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D2F754"))) PPC_WEAK_FUNC(sub_83D2F754);
PPC_FUNC_IMPL(__imp__sub_83D2F754) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D2F758"))) PPC_WEAK_FUNC(sub_83D2F758);
PPC_FUNC_IMPL(__imp__sub_83D2F758) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D2F75C"))) PPC_WEAK_FUNC(sub_83D2F75C);
PPC_FUNC_IMPL(__imp__sub_83D2F75C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D2F760"))) PPC_WEAK_FUNC(sub_83D2F760);
PPC_FUNC_IMPL(__imp__sub_83D2F760) {
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
	// lis r11,-31775
	ctx.r11.s64 = -2082406400;
	// addi r31,r11,15232
	ctx.r31.s64 = ctx.r11.s64 + 15232;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83d2f798
	if (cr6.lt) goto loc_83D2F798;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x83D2F798;
	sub_825952B8(ctx, base);
loc_83D2F798:
	// li r11,15
	ctx.r11.s64 = 15;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// stb r9,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r9.u8);
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

__attribute__((alias("__imp__sub_83D2F7C4"))) PPC_WEAK_FUNC(sub_83D2F7C4);
PPC_FUNC_IMPL(__imp__sub_83D2F7C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D2F7C8"))) PPC_WEAK_FUNC(sub_83D2F7C8);
PPC_FUNC_IMPL(__imp__sub_83D2F7C8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D2F7CC"))) PPC_WEAK_FUNC(sub_83D2F7CC);
PPC_FUNC_IMPL(__imp__sub_83D2F7CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D2F7D0"))) PPC_WEAK_FUNC(sub_83D2F7D0);
PPC_FUNC_IMPL(__imp__sub_83D2F7D0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D2F7D4"))) PPC_WEAK_FUNC(sub_83D2F7D4);
PPC_FUNC_IMPL(__imp__sub_83D2F7D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D2F7D8"))) PPC_WEAK_FUNC(sub_83D2F7D8);
PPC_FUNC_IMPL(__imp__sub_83D2F7D8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D2F7DC"))) PPC_WEAK_FUNC(sub_83D2F7DC);
PPC_FUNC_IMPL(__imp__sub_83D2F7DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D2F7E0"))) PPC_WEAK_FUNC(sub_83D2F7E0);
PPC_FUNC_IMPL(__imp__sub_83D2F7E0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D2F7E4"))) PPC_WEAK_FUNC(sub_83D2F7E4);
PPC_FUNC_IMPL(__imp__sub_83D2F7E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D2F7E8"))) PPC_WEAK_FUNC(sub_83D2F7E8);
PPC_FUNC_IMPL(__imp__sub_83D2F7E8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D2F7EC"))) PPC_WEAK_FUNC(sub_83D2F7EC);
PPC_FUNC_IMPL(__imp__sub_83D2F7EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D2F7F0"))) PPC_WEAK_FUNC(sub_83D2F7F0);
PPC_FUNC_IMPL(__imp__sub_83D2F7F0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D2F7F4"))) PPC_WEAK_FUNC(sub_83D2F7F4);
PPC_FUNC_IMPL(__imp__sub_83D2F7F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D2F7F8"))) PPC_WEAK_FUNC(sub_83D2F7F8);
PPC_FUNC_IMPL(__imp__sub_83D2F7F8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D2F7FC"))) PPC_WEAK_FUNC(sub_83D2F7FC);
PPC_FUNC_IMPL(__imp__sub_83D2F7FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D2F800"))) PPC_WEAK_FUNC(sub_83D2F800);
PPC_FUNC_IMPL(__imp__sub_83D2F800) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D2F804"))) PPC_WEAK_FUNC(sub_83D2F804);
PPC_FUNC_IMPL(__imp__sub_83D2F804) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D2F808"))) PPC_WEAK_FUNC(sub_83D2F808);
PPC_FUNC_IMPL(__imp__sub_83D2F808) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D2F80C"))) PPC_WEAK_FUNC(sub_83D2F80C);
PPC_FUNC_IMPL(__imp__sub_83D2F80C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D2F810"))) PPC_WEAK_FUNC(sub_83D2F810);
PPC_FUNC_IMPL(__imp__sub_83D2F810) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D2F814"))) PPC_WEAK_FUNC(sub_83D2F814);
PPC_FUNC_IMPL(__imp__sub_83D2F814) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D2F818"))) PPC_WEAK_FUNC(sub_83D2F818);
PPC_FUNC_IMPL(__imp__sub_83D2F818) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D2F81C"))) PPC_WEAK_FUNC(sub_83D2F81C);
PPC_FUNC_IMPL(__imp__sub_83D2F81C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D2F820"))) PPC_WEAK_FUNC(sub_83D2F820);
PPC_FUNC_IMPL(__imp__sub_83D2F820) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D2F824"))) PPC_WEAK_FUNC(sub_83D2F824);
PPC_FUNC_IMPL(__imp__sub_83D2F824) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D2F828"))) PPC_WEAK_FUNC(sub_83D2F828);
PPC_FUNC_IMPL(__imp__sub_83D2F828) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31757
	ctx.r11.s64 = -2081226752;
	// addi r3,r11,-13568
	ctx.r3.s64 = ctx.r11.s64 + -13568;
	// b 0x83523150
	sub_83523150(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83D2F834"))) PPC_WEAK_FUNC(sub_83D2F834);
PPC_FUNC_IMPL(__imp__sub_83D2F834) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D2F838"))) PPC_WEAK_FUNC(sub_83D2F838);
PPC_FUNC_IMPL(__imp__sub_83D2F838) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D2F83C"))) PPC_WEAK_FUNC(sub_83D2F83C);
PPC_FUNC_IMPL(__imp__sub_83D2F83C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D2F840"))) PPC_WEAK_FUNC(sub_83D2F840);
PPC_FUNC_IMPL(__imp__sub_83D2F840) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D2F844"))) PPC_WEAK_FUNC(sub_83D2F844);
PPC_FUNC_IMPL(__imp__sub_83D2F844) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D2F848"))) PPC_WEAK_FUNC(sub_83D2F848);
PPC_FUNC_IMPL(__imp__sub_83D2F848) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D2F84C"))) PPC_WEAK_FUNC(sub_83D2F84C);
PPC_FUNC_IMPL(__imp__sub_83D2F84C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D2F850"))) PPC_WEAK_FUNC(sub_83D2F850);
PPC_FUNC_IMPL(__imp__sub_83D2F850) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D2F854"))) PPC_WEAK_FUNC(sub_83D2F854);
PPC_FUNC_IMPL(__imp__sub_83D2F854) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D2F858"))) PPC_WEAK_FUNC(sub_83D2F858);
PPC_FUNC_IMPL(__imp__sub_83D2F858) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D2F85C"))) PPC_WEAK_FUNC(sub_83D2F85C);
PPC_FUNC_IMPL(__imp__sub_83D2F85C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D2F860"))) PPC_WEAK_FUNC(sub_83D2F860);
PPC_FUNC_IMPL(__imp__sub_83D2F860) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D2F864"))) PPC_WEAK_FUNC(sub_83D2F864);
PPC_FUNC_IMPL(__imp__sub_83D2F864) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D2F868"))) PPC_WEAK_FUNC(sub_83D2F868);
PPC_FUNC_IMPL(__imp__sub_83D2F868) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D2F86C"))) PPC_WEAK_FUNC(sub_83D2F86C);
PPC_FUNC_IMPL(__imp__sub_83D2F86C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D2F870"))) PPC_WEAK_FUNC(sub_83D2F870);
PPC_FUNC_IMPL(__imp__sub_83D2F870) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D2F874"))) PPC_WEAK_FUNC(sub_83D2F874);
PPC_FUNC_IMPL(__imp__sub_83D2F874) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D2F878"))) PPC_WEAK_FUNC(sub_83D2F878);
PPC_FUNC_IMPL(__imp__sub_83D2F878) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D2F87C"))) PPC_WEAK_FUNC(sub_83D2F87C);
PPC_FUNC_IMPL(__imp__sub_83D2F87C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D2F880"))) PPC_WEAK_FUNC(sub_83D2F880);
PPC_FUNC_IMPL(__imp__sub_83D2F880) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D2F884"))) PPC_WEAK_FUNC(sub_83D2F884);
PPC_FUNC_IMPL(__imp__sub_83D2F884) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D2F888"))) PPC_WEAK_FUNC(sub_83D2F888);
PPC_FUNC_IMPL(__imp__sub_83D2F888) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D2F88C"))) PPC_WEAK_FUNC(sub_83D2F88C);
PPC_FUNC_IMPL(__imp__sub_83D2F88C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D2F890"))) PPC_WEAK_FUNC(sub_83D2F890);
PPC_FUNC_IMPL(__imp__sub_83D2F890) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D2F894"))) PPC_WEAK_FUNC(sub_83D2F894);
PPC_FUNC_IMPL(__imp__sub_83D2F894) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D2F898"))) PPC_WEAK_FUNC(sub_83D2F898);
PPC_FUNC_IMPL(__imp__sub_83D2F898) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31757
	ctx.r11.s64 = -2081226752;
	// addi r3,r11,-13552
	ctx.r3.s64 = ctx.r11.s64 + -13552;
	// b 0x83523150
	sub_83523150(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83D2F8A4"))) PPC_WEAK_FUNC(sub_83D2F8A4);
PPC_FUNC_IMPL(__imp__sub_83D2F8A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D2F8A8"))) PPC_WEAK_FUNC(sub_83D2F8A8);
PPC_FUNC_IMPL(__imp__sub_83D2F8A8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D2F8AC"))) PPC_WEAK_FUNC(sub_83D2F8AC);
PPC_FUNC_IMPL(__imp__sub_83D2F8AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D2F8B0"))) PPC_WEAK_FUNC(sub_83D2F8B0);
PPC_FUNC_IMPL(__imp__sub_83D2F8B0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D2F8B4"))) PPC_WEAK_FUNC(sub_83D2F8B4);
PPC_FUNC_IMPL(__imp__sub_83D2F8B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D2F8B8"))) PPC_WEAK_FUNC(sub_83D2F8B8);
PPC_FUNC_IMPL(__imp__sub_83D2F8B8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D2F8BC"))) PPC_WEAK_FUNC(sub_83D2F8BC);
PPC_FUNC_IMPL(__imp__sub_83D2F8BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D2F8C0"))) PPC_WEAK_FUNC(sub_83D2F8C0);
PPC_FUNC_IMPL(__imp__sub_83D2F8C0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D2F8C4"))) PPC_WEAK_FUNC(sub_83D2F8C4);
PPC_FUNC_IMPL(__imp__sub_83D2F8C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D2F8C8"))) PPC_WEAK_FUNC(sub_83D2F8C8);
PPC_FUNC_IMPL(__imp__sub_83D2F8C8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D2F8CC"))) PPC_WEAK_FUNC(sub_83D2F8CC);
PPC_FUNC_IMPL(__imp__sub_83D2F8CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D2F8D0"))) PPC_WEAK_FUNC(sub_83D2F8D0);
PPC_FUNC_IMPL(__imp__sub_83D2F8D0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D2F8D4"))) PPC_WEAK_FUNC(sub_83D2F8D4);
PPC_FUNC_IMPL(__imp__sub_83D2F8D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D2F8D8"))) PPC_WEAK_FUNC(sub_83D2F8D8);
PPC_FUNC_IMPL(__imp__sub_83D2F8D8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D2F8DC"))) PPC_WEAK_FUNC(sub_83D2F8DC);
PPC_FUNC_IMPL(__imp__sub_83D2F8DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D2F8E0"))) PPC_WEAK_FUNC(sub_83D2F8E0);
PPC_FUNC_IMPL(__imp__sub_83D2F8E0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D2F8E4"))) PPC_WEAK_FUNC(sub_83D2F8E4);
PPC_FUNC_IMPL(__imp__sub_83D2F8E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D2F8E8"))) PPC_WEAK_FUNC(sub_83D2F8E8);
PPC_FUNC_IMPL(__imp__sub_83D2F8E8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D2F8EC"))) PPC_WEAK_FUNC(sub_83D2F8EC);
PPC_FUNC_IMPL(__imp__sub_83D2F8EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D2F8F0"))) PPC_WEAK_FUNC(sub_83D2F8F0);
PPC_FUNC_IMPL(__imp__sub_83D2F8F0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D2F8F4"))) PPC_WEAK_FUNC(sub_83D2F8F4);
PPC_FUNC_IMPL(__imp__sub_83D2F8F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D2F8F8"))) PPC_WEAK_FUNC(sub_83D2F8F8);
PPC_FUNC_IMPL(__imp__sub_83D2F8F8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D2F8FC"))) PPC_WEAK_FUNC(sub_83D2F8FC);
PPC_FUNC_IMPL(__imp__sub_83D2F8FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D2F900"))) PPC_WEAK_FUNC(sub_83D2F900);
PPC_FUNC_IMPL(__imp__sub_83D2F900) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D2F904"))) PPC_WEAK_FUNC(sub_83D2F904);
PPC_FUNC_IMPL(__imp__sub_83D2F904) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D2F908"))) PPC_WEAK_FUNC(sub_83D2F908);
PPC_FUNC_IMPL(__imp__sub_83D2F908) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D2F90C"))) PPC_WEAK_FUNC(sub_83D2F90C);
PPC_FUNC_IMPL(__imp__sub_83D2F90C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D2F910"))) PPC_WEAK_FUNC(sub_83D2F910);
PPC_FUNC_IMPL(__imp__sub_83D2F910) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D2F914"))) PPC_WEAK_FUNC(sub_83D2F914);
PPC_FUNC_IMPL(__imp__sub_83D2F914) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D2F918"))) PPC_WEAK_FUNC(sub_83D2F918);
PPC_FUNC_IMPL(__imp__sub_83D2F918) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D2F91C"))) PPC_WEAK_FUNC(sub_83D2F91C);
PPC_FUNC_IMPL(__imp__sub_83D2F91C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D2F920"))) PPC_WEAK_FUNC(sub_83D2F920);
PPC_FUNC_IMPL(__imp__sub_83D2F920) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D2F924"))) PPC_WEAK_FUNC(sub_83D2F924);
PPC_FUNC_IMPL(__imp__sub_83D2F924) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D2F928"))) PPC_WEAK_FUNC(sub_83D2F928);
PPC_FUNC_IMPL(__imp__sub_83D2F928) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D2F92C"))) PPC_WEAK_FUNC(sub_83D2F92C);
PPC_FUNC_IMPL(__imp__sub_83D2F92C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D2F930"))) PPC_WEAK_FUNC(sub_83D2F930);
PPC_FUNC_IMPL(__imp__sub_83D2F930) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D2F934"))) PPC_WEAK_FUNC(sub_83D2F934);
PPC_FUNC_IMPL(__imp__sub_83D2F934) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D2F938"))) PPC_WEAK_FUNC(sub_83D2F938);
PPC_FUNC_IMPL(__imp__sub_83D2F938) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D2F93C"))) PPC_WEAK_FUNC(sub_83D2F93C);
PPC_FUNC_IMPL(__imp__sub_83D2F93C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D2F940"))) PPC_WEAK_FUNC(sub_83D2F940);
PPC_FUNC_IMPL(__imp__sub_83D2F940) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D2F944"))) PPC_WEAK_FUNC(sub_83D2F944);
PPC_FUNC_IMPL(__imp__sub_83D2F944) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D2F948"))) PPC_WEAK_FUNC(sub_83D2F948);
PPC_FUNC_IMPL(__imp__sub_83D2F948) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D2F94C"))) PPC_WEAK_FUNC(sub_83D2F94C);
PPC_FUNC_IMPL(__imp__sub_83D2F94C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D2F950"))) PPC_WEAK_FUNC(sub_83D2F950);
PPC_FUNC_IMPL(__imp__sub_83D2F950) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D2F954"))) PPC_WEAK_FUNC(sub_83D2F954);
PPC_FUNC_IMPL(__imp__sub_83D2F954) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D2F958"))) PPC_WEAK_FUNC(sub_83D2F958);
PPC_FUNC_IMPL(__imp__sub_83D2F958) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D2F95C"))) PPC_WEAK_FUNC(sub_83D2F95C);
PPC_FUNC_IMPL(__imp__sub_83D2F95C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D2F960"))) PPC_WEAK_FUNC(sub_83D2F960);
PPC_FUNC_IMPL(__imp__sub_83D2F960) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D2F964"))) PPC_WEAK_FUNC(sub_83D2F964);
PPC_FUNC_IMPL(__imp__sub_83D2F964) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D2F968"))) PPC_WEAK_FUNC(sub_83D2F968);
PPC_FUNC_IMPL(__imp__sub_83D2F968) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D2F96C"))) PPC_WEAK_FUNC(sub_83D2F96C);
PPC_FUNC_IMPL(__imp__sub_83D2F96C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D2F970"))) PPC_WEAK_FUNC(sub_83D2F970);
PPC_FUNC_IMPL(__imp__sub_83D2F970) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D2F974"))) PPC_WEAK_FUNC(sub_83D2F974);
PPC_FUNC_IMPL(__imp__sub_83D2F974) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D2F978"))) PPC_WEAK_FUNC(sub_83D2F978);
PPC_FUNC_IMPL(__imp__sub_83D2F978) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D2F97C"))) PPC_WEAK_FUNC(sub_83D2F97C);
PPC_FUNC_IMPL(__imp__sub_83D2F97C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D2F980"))) PPC_WEAK_FUNC(sub_83D2F980);
PPC_FUNC_IMPL(__imp__sub_83D2F980) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31757
	ctx.r11.s64 = -2081226752;
	// addi r3,r11,-13176
	ctx.r3.s64 = ctx.r11.s64 + -13176;
	// b 0x83523150
	sub_83523150(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83D2F98C"))) PPC_WEAK_FUNC(sub_83D2F98C);
PPC_FUNC_IMPL(__imp__sub_83D2F98C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D2F990"))) PPC_WEAK_FUNC(sub_83D2F990);
PPC_FUNC_IMPL(__imp__sub_83D2F990) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D2F994"))) PPC_WEAK_FUNC(sub_83D2F994);
PPC_FUNC_IMPL(__imp__sub_83D2F994) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D2F998"))) PPC_WEAK_FUNC(sub_83D2F998);
PPC_FUNC_IMPL(__imp__sub_83D2F998) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D2F99C"))) PPC_WEAK_FUNC(sub_83D2F99C);
PPC_FUNC_IMPL(__imp__sub_83D2F99C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D2F9A0"))) PPC_WEAK_FUNC(sub_83D2F9A0);
PPC_FUNC_IMPL(__imp__sub_83D2F9A0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D2F9A4"))) PPC_WEAK_FUNC(sub_83D2F9A4);
PPC_FUNC_IMPL(__imp__sub_83D2F9A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D2F9A8"))) PPC_WEAK_FUNC(sub_83D2F9A8);
PPC_FUNC_IMPL(__imp__sub_83D2F9A8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D2F9AC"))) PPC_WEAK_FUNC(sub_83D2F9AC);
PPC_FUNC_IMPL(__imp__sub_83D2F9AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D2F9B0"))) PPC_WEAK_FUNC(sub_83D2F9B0);
PPC_FUNC_IMPL(__imp__sub_83D2F9B0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D2F9B4"))) PPC_WEAK_FUNC(sub_83D2F9B4);
PPC_FUNC_IMPL(__imp__sub_83D2F9B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D2F9B8"))) PPC_WEAK_FUNC(sub_83D2F9B8);
PPC_FUNC_IMPL(__imp__sub_83D2F9B8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D2F9BC"))) PPC_WEAK_FUNC(sub_83D2F9BC);
PPC_FUNC_IMPL(__imp__sub_83D2F9BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D2F9C0"))) PPC_WEAK_FUNC(sub_83D2F9C0);
PPC_FUNC_IMPL(__imp__sub_83D2F9C0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D2F9C4"))) PPC_WEAK_FUNC(sub_83D2F9C4);
PPC_FUNC_IMPL(__imp__sub_83D2F9C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D2F9C8"))) PPC_WEAK_FUNC(sub_83D2F9C8);
PPC_FUNC_IMPL(__imp__sub_83D2F9C8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D2F9CC"))) PPC_WEAK_FUNC(sub_83D2F9CC);
PPC_FUNC_IMPL(__imp__sub_83D2F9CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D2F9D0"))) PPC_WEAK_FUNC(sub_83D2F9D0);
PPC_FUNC_IMPL(__imp__sub_83D2F9D0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D2F9D4"))) PPC_WEAK_FUNC(sub_83D2F9D4);
PPC_FUNC_IMPL(__imp__sub_83D2F9D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D2F9D8"))) PPC_WEAK_FUNC(sub_83D2F9D8);
PPC_FUNC_IMPL(__imp__sub_83D2F9D8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D2F9DC"))) PPC_WEAK_FUNC(sub_83D2F9DC);
PPC_FUNC_IMPL(__imp__sub_83D2F9DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D2F9E0"))) PPC_WEAK_FUNC(sub_83D2F9E0);
PPC_FUNC_IMPL(__imp__sub_83D2F9E0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D2F9E4"))) PPC_WEAK_FUNC(sub_83D2F9E4);
PPC_FUNC_IMPL(__imp__sub_83D2F9E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D2F9E8"))) PPC_WEAK_FUNC(sub_83D2F9E8);
PPC_FUNC_IMPL(__imp__sub_83D2F9E8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D2F9EC"))) PPC_WEAK_FUNC(sub_83D2F9EC);
PPC_FUNC_IMPL(__imp__sub_83D2F9EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D2F9F0"))) PPC_WEAK_FUNC(sub_83D2F9F0);
PPC_FUNC_IMPL(__imp__sub_83D2F9F0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D2F9F4"))) PPC_WEAK_FUNC(sub_83D2F9F4);
PPC_FUNC_IMPL(__imp__sub_83D2F9F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D2F9F8"))) PPC_WEAK_FUNC(sub_83D2F9F8);
PPC_FUNC_IMPL(__imp__sub_83D2F9F8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D2F9FC"))) PPC_WEAK_FUNC(sub_83D2F9FC);
PPC_FUNC_IMPL(__imp__sub_83D2F9FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D2FA00"))) PPC_WEAK_FUNC(sub_83D2FA00);
PPC_FUNC_IMPL(__imp__sub_83D2FA00) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D2FA04"))) PPC_WEAK_FUNC(sub_83D2FA04);
PPC_FUNC_IMPL(__imp__sub_83D2FA04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D2FA08"))) PPC_WEAK_FUNC(sub_83D2FA08);
PPC_FUNC_IMPL(__imp__sub_83D2FA08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31757
	ctx.r11.s64 = -2081226752;
	// addi r3,r11,-12808
	ctx.r3.s64 = ctx.r11.s64 + -12808;
	// b 0x83523150
	sub_83523150(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83D2FA14"))) PPC_WEAK_FUNC(sub_83D2FA14);
PPC_FUNC_IMPL(__imp__sub_83D2FA14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D2FA18"))) PPC_WEAK_FUNC(sub_83D2FA18);
PPC_FUNC_IMPL(__imp__sub_83D2FA18) {
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
	// lis r11,-31775
	ctx.r11.s64 = -2082406400;
	// addi r31,r11,15852
	ctx.r31.s64 = ctx.r11.s64 + 15852;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83d2fa50
	if (cr6.lt) goto loc_83D2FA50;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x83D2FA50;
	sub_825952B8(ctx, base);
loc_83D2FA50:
	// li r11,15
	ctx.r11.s64 = 15;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// stb r9,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r9.u8);
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

__attribute__((alias("__imp__sub_83D2FA7C"))) PPC_WEAK_FUNC(sub_83D2FA7C);
PPC_FUNC_IMPL(__imp__sub_83D2FA7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D2FA80"))) PPC_WEAK_FUNC(sub_83D2FA80);
PPC_FUNC_IMPL(__imp__sub_83D2FA80) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D2FA84"))) PPC_WEAK_FUNC(sub_83D2FA84);
PPC_FUNC_IMPL(__imp__sub_83D2FA84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D2FA88"))) PPC_WEAK_FUNC(sub_83D2FA88);
PPC_FUNC_IMPL(__imp__sub_83D2FA88) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D2FA8C"))) PPC_WEAK_FUNC(sub_83D2FA8C);
PPC_FUNC_IMPL(__imp__sub_83D2FA8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D2FA90"))) PPC_WEAK_FUNC(sub_83D2FA90);
PPC_FUNC_IMPL(__imp__sub_83D2FA90) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D2FA94"))) PPC_WEAK_FUNC(sub_83D2FA94);
PPC_FUNC_IMPL(__imp__sub_83D2FA94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D2FA98"))) PPC_WEAK_FUNC(sub_83D2FA98);
PPC_FUNC_IMPL(__imp__sub_83D2FA98) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D2FA9C"))) PPC_WEAK_FUNC(sub_83D2FA9C);
PPC_FUNC_IMPL(__imp__sub_83D2FA9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D2FAA0"))) PPC_WEAK_FUNC(sub_83D2FAA0);
PPC_FUNC_IMPL(__imp__sub_83D2FAA0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D2FAA4"))) PPC_WEAK_FUNC(sub_83D2FAA4);
PPC_FUNC_IMPL(__imp__sub_83D2FAA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D2FAA8"))) PPC_WEAK_FUNC(sub_83D2FAA8);
PPC_FUNC_IMPL(__imp__sub_83D2FAA8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D2FAAC"))) PPC_WEAK_FUNC(sub_83D2FAAC);
PPC_FUNC_IMPL(__imp__sub_83D2FAAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D2FAB0"))) PPC_WEAK_FUNC(sub_83D2FAB0);
PPC_FUNC_IMPL(__imp__sub_83D2FAB0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D2FAB4"))) PPC_WEAK_FUNC(sub_83D2FAB4);
PPC_FUNC_IMPL(__imp__sub_83D2FAB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D2FAB8"))) PPC_WEAK_FUNC(sub_83D2FAB8);
PPC_FUNC_IMPL(__imp__sub_83D2FAB8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D2FABC"))) PPC_WEAK_FUNC(sub_83D2FABC);
PPC_FUNC_IMPL(__imp__sub_83D2FABC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D2FAC0"))) PPC_WEAK_FUNC(sub_83D2FAC0);
PPC_FUNC_IMPL(__imp__sub_83D2FAC0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D2FAC4"))) PPC_WEAK_FUNC(sub_83D2FAC4);
PPC_FUNC_IMPL(__imp__sub_83D2FAC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D2FAC8"))) PPC_WEAK_FUNC(sub_83D2FAC8);
PPC_FUNC_IMPL(__imp__sub_83D2FAC8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D2FACC"))) PPC_WEAK_FUNC(sub_83D2FACC);
PPC_FUNC_IMPL(__imp__sub_83D2FACC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D2FAD0"))) PPC_WEAK_FUNC(sub_83D2FAD0);
PPC_FUNC_IMPL(__imp__sub_83D2FAD0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D2FAD4"))) PPC_WEAK_FUNC(sub_83D2FAD4);
PPC_FUNC_IMPL(__imp__sub_83D2FAD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D2FAD8"))) PPC_WEAK_FUNC(sub_83D2FAD8);
PPC_FUNC_IMPL(__imp__sub_83D2FAD8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D2FADC"))) PPC_WEAK_FUNC(sub_83D2FADC);
PPC_FUNC_IMPL(__imp__sub_83D2FADC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D2FAE0"))) PPC_WEAK_FUNC(sub_83D2FAE0);
PPC_FUNC_IMPL(__imp__sub_83D2FAE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31757
	ctx.r11.s64 = -2081226752;
	// addi r3,r11,-12796
	ctx.r3.s64 = ctx.r11.s64 + -12796;
	// b 0x83523150
	sub_83523150(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83D2FAEC"))) PPC_WEAK_FUNC(sub_83D2FAEC);
PPC_FUNC_IMPL(__imp__sub_83D2FAEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D2FAF0"))) PPC_WEAK_FUNC(sub_83D2FAF0);
PPC_FUNC_IMPL(__imp__sub_83D2FAF0) {
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
	// lis r11,-31775
	ctx.r11.s64 = -2082406400;
	// addi r31,r11,16004
	ctx.r31.s64 = ctx.r11.s64 + 16004;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83d2fb28
	if (cr6.lt) goto loc_83D2FB28;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x83D2FB28;
	sub_825952B8(ctx, base);
loc_83D2FB28:
	// li r11,15
	ctx.r11.s64 = 15;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// stb r9,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r9.u8);
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

__attribute__((alias("__imp__sub_83D2FB54"))) PPC_WEAK_FUNC(sub_83D2FB54);
PPC_FUNC_IMPL(__imp__sub_83D2FB54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D2FB58"))) PPC_WEAK_FUNC(sub_83D2FB58);
PPC_FUNC_IMPL(__imp__sub_83D2FB58) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D2FB5C"))) PPC_WEAK_FUNC(sub_83D2FB5C);
PPC_FUNC_IMPL(__imp__sub_83D2FB5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D2FB60"))) PPC_WEAK_FUNC(sub_83D2FB60);
PPC_FUNC_IMPL(__imp__sub_83D2FB60) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D2FB64"))) PPC_WEAK_FUNC(sub_83D2FB64);
PPC_FUNC_IMPL(__imp__sub_83D2FB64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D2FB68"))) PPC_WEAK_FUNC(sub_83D2FB68);
PPC_FUNC_IMPL(__imp__sub_83D2FB68) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D2FB6C"))) PPC_WEAK_FUNC(sub_83D2FB6C);
PPC_FUNC_IMPL(__imp__sub_83D2FB6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D2FB70"))) PPC_WEAK_FUNC(sub_83D2FB70);
PPC_FUNC_IMPL(__imp__sub_83D2FB70) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D2FB74"))) PPC_WEAK_FUNC(sub_83D2FB74);
PPC_FUNC_IMPL(__imp__sub_83D2FB74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D2FB78"))) PPC_WEAK_FUNC(sub_83D2FB78);
PPC_FUNC_IMPL(__imp__sub_83D2FB78) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D2FB7C"))) PPC_WEAK_FUNC(sub_83D2FB7C);
PPC_FUNC_IMPL(__imp__sub_83D2FB7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D2FB80"))) PPC_WEAK_FUNC(sub_83D2FB80);
PPC_FUNC_IMPL(__imp__sub_83D2FB80) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D2FB84"))) PPC_WEAK_FUNC(sub_83D2FB84);
PPC_FUNC_IMPL(__imp__sub_83D2FB84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D2FB88"))) PPC_WEAK_FUNC(sub_83D2FB88);
PPC_FUNC_IMPL(__imp__sub_83D2FB88) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D2FB8C"))) PPC_WEAK_FUNC(sub_83D2FB8C);
PPC_FUNC_IMPL(__imp__sub_83D2FB8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D2FB90"))) PPC_WEAK_FUNC(sub_83D2FB90);
PPC_FUNC_IMPL(__imp__sub_83D2FB90) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D2FB94"))) PPC_WEAK_FUNC(sub_83D2FB94);
PPC_FUNC_IMPL(__imp__sub_83D2FB94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D2FB98"))) PPC_WEAK_FUNC(sub_83D2FB98);
PPC_FUNC_IMPL(__imp__sub_83D2FB98) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D2FB9C"))) PPC_WEAK_FUNC(sub_83D2FB9C);
PPC_FUNC_IMPL(__imp__sub_83D2FB9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D2FBA0"))) PPC_WEAK_FUNC(sub_83D2FBA0);
PPC_FUNC_IMPL(__imp__sub_83D2FBA0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D2FBA4"))) PPC_WEAK_FUNC(sub_83D2FBA4);
PPC_FUNC_IMPL(__imp__sub_83D2FBA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D2FBA8"))) PPC_WEAK_FUNC(sub_83D2FBA8);
PPC_FUNC_IMPL(__imp__sub_83D2FBA8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D2FBAC"))) PPC_WEAK_FUNC(sub_83D2FBAC);
PPC_FUNC_IMPL(__imp__sub_83D2FBAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D2FBB0"))) PPC_WEAK_FUNC(sub_83D2FBB0);
PPC_FUNC_IMPL(__imp__sub_83D2FBB0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D2FBB4"))) PPC_WEAK_FUNC(sub_83D2FBB4);
PPC_FUNC_IMPL(__imp__sub_83D2FBB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D2FBB8"))) PPC_WEAK_FUNC(sub_83D2FBB8);
PPC_FUNC_IMPL(__imp__sub_83D2FBB8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D2FBBC"))) PPC_WEAK_FUNC(sub_83D2FBBC);
PPC_FUNC_IMPL(__imp__sub_83D2FBBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D2FBC0"))) PPC_WEAK_FUNC(sub_83D2FBC0);
PPC_FUNC_IMPL(__imp__sub_83D2FBC0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D2FBC4"))) PPC_WEAK_FUNC(sub_83D2FBC4);
PPC_FUNC_IMPL(__imp__sub_83D2FBC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D2FBC8"))) PPC_WEAK_FUNC(sub_83D2FBC8);
PPC_FUNC_IMPL(__imp__sub_83D2FBC8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D2FBCC"))) PPC_WEAK_FUNC(sub_83D2FBCC);
PPC_FUNC_IMPL(__imp__sub_83D2FBCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D2FBD0"))) PPC_WEAK_FUNC(sub_83D2FBD0);
PPC_FUNC_IMPL(__imp__sub_83D2FBD0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D2FBD4"))) PPC_WEAK_FUNC(sub_83D2FBD4);
PPC_FUNC_IMPL(__imp__sub_83D2FBD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D2FBD8"))) PPC_WEAK_FUNC(sub_83D2FBD8);
PPC_FUNC_IMPL(__imp__sub_83D2FBD8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D2FBDC"))) PPC_WEAK_FUNC(sub_83D2FBDC);
PPC_FUNC_IMPL(__imp__sub_83D2FBDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D2FBE0"))) PPC_WEAK_FUNC(sub_83D2FBE0);
PPC_FUNC_IMPL(__imp__sub_83D2FBE0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D2FBE4"))) PPC_WEAK_FUNC(sub_83D2FBE4);
PPC_FUNC_IMPL(__imp__sub_83D2FBE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D2FBE8"))) PPC_WEAK_FUNC(sub_83D2FBE8);
PPC_FUNC_IMPL(__imp__sub_83D2FBE8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

