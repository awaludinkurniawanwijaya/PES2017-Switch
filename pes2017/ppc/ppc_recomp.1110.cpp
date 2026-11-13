#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_83D19B9C"))) PPC_WEAK_FUNC(sub_83D19B9C);
PPC_FUNC_IMPL(__imp__sub_83D19B9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D19BA0"))) PPC_WEAK_FUNC(sub_83D19BA0);
PPC_FUNC_IMPL(__imp__sub_83D19BA0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D19BA4"))) PPC_WEAK_FUNC(sub_83D19BA4);
PPC_FUNC_IMPL(__imp__sub_83D19BA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D19BA8"))) PPC_WEAK_FUNC(sub_83D19BA8);
PPC_FUNC_IMPL(__imp__sub_83D19BA8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D19BAC"))) PPC_WEAK_FUNC(sub_83D19BAC);
PPC_FUNC_IMPL(__imp__sub_83D19BAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D19BB0"))) PPC_WEAK_FUNC(sub_83D19BB0);
PPC_FUNC_IMPL(__imp__sub_83D19BB0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D19BB4"))) PPC_WEAK_FUNC(sub_83D19BB4);
PPC_FUNC_IMPL(__imp__sub_83D19BB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D19BB8"))) PPC_WEAK_FUNC(sub_83D19BB8);
PPC_FUNC_IMPL(__imp__sub_83D19BB8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D19BBC"))) PPC_WEAK_FUNC(sub_83D19BBC);
PPC_FUNC_IMPL(__imp__sub_83D19BBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D19BC0"))) PPC_WEAK_FUNC(sub_83D19BC0);
PPC_FUNC_IMPL(__imp__sub_83D19BC0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D19BC4"))) PPC_WEAK_FUNC(sub_83D19BC4);
PPC_FUNC_IMPL(__imp__sub_83D19BC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D19BC8"))) PPC_WEAK_FUNC(sub_83D19BC8);
PPC_FUNC_IMPL(__imp__sub_83D19BC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31760
	ctx.r11.s64 = -2081423360;
	// addi r3,r11,16672
	ctx.r3.s64 = ctx.r11.s64 + 16672;
	// b 0x83523150
	sub_83523150(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83D19BD4"))) PPC_WEAK_FUNC(sub_83D19BD4);
PPC_FUNC_IMPL(__imp__sub_83D19BD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D19BD8"))) PPC_WEAK_FUNC(sub_83D19BD8);
PPC_FUNC_IMPL(__imp__sub_83D19BD8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D19BDC"))) PPC_WEAK_FUNC(sub_83D19BDC);
PPC_FUNC_IMPL(__imp__sub_83D19BDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D19BE0"))) PPC_WEAK_FUNC(sub_83D19BE0);
PPC_FUNC_IMPL(__imp__sub_83D19BE0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D19BE4"))) PPC_WEAK_FUNC(sub_83D19BE4);
PPC_FUNC_IMPL(__imp__sub_83D19BE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D19BE8"))) PPC_WEAK_FUNC(sub_83D19BE8);
PPC_FUNC_IMPL(__imp__sub_83D19BE8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D19BEC"))) PPC_WEAK_FUNC(sub_83D19BEC);
PPC_FUNC_IMPL(__imp__sub_83D19BEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D19BF0"))) PPC_WEAK_FUNC(sub_83D19BF0);
PPC_FUNC_IMPL(__imp__sub_83D19BF0) {
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
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// addi r31,r11,-13700
	ctx.r31.s64 = ctx.r11.s64 + -13700;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83d19c28
	if (cr6.lt) goto loc_83D19C28;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x83D19C28;
	sub_825952B8(ctx, base);
loc_83D19C28:
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

__attribute__((alias("__imp__sub_83D19C54"))) PPC_WEAK_FUNC(sub_83D19C54);
PPC_FUNC_IMPL(__imp__sub_83D19C54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D19C58"))) PPC_WEAK_FUNC(sub_83D19C58);
PPC_FUNC_IMPL(__imp__sub_83D19C58) {
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
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// addi r31,r11,-13672
	ctx.r31.s64 = ctx.r11.s64 + -13672;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83d19c90
	if (cr6.lt) goto loc_83D19C90;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x83D19C90;
	sub_825952B8(ctx, base);
loc_83D19C90:
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

__attribute__((alias("__imp__sub_83D19CBC"))) PPC_WEAK_FUNC(sub_83D19CBC);
PPC_FUNC_IMPL(__imp__sub_83D19CBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D19CC0"))) PPC_WEAK_FUNC(sub_83D19CC0);
PPC_FUNC_IMPL(__imp__sub_83D19CC0) {
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
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// addi r31,r11,-13644
	ctx.r31.s64 = ctx.r11.s64 + -13644;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83d19cf8
	if (cr6.lt) goto loc_83D19CF8;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x83D19CF8;
	sub_825952B8(ctx, base);
loc_83D19CF8:
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

__attribute__((alias("__imp__sub_83D19D24"))) PPC_WEAK_FUNC(sub_83D19D24);
PPC_FUNC_IMPL(__imp__sub_83D19D24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D19D28"))) PPC_WEAK_FUNC(sub_83D19D28);
PPC_FUNC_IMPL(__imp__sub_83D19D28) {
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
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// addi r31,r11,-13616
	ctx.r31.s64 = ctx.r11.s64 + -13616;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83d19d60
	if (cr6.lt) goto loc_83D19D60;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x83D19D60;
	sub_825952B8(ctx, base);
loc_83D19D60:
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

__attribute__((alias("__imp__sub_83D19D8C"))) PPC_WEAK_FUNC(sub_83D19D8C);
PPC_FUNC_IMPL(__imp__sub_83D19D8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D19D90"))) PPC_WEAK_FUNC(sub_83D19D90);
PPC_FUNC_IMPL(__imp__sub_83D19D90) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x83D19D98;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31760
	ctx.r11.s64 = -2081423360;
	// li r29,1
	ctx.r29.s64 = 1;
	// addi r11,r11,20792
	ctx.r11.s64 = ctx.r11.s64 + 20792;
	// li r27,2
	ctx.r27.s64 = 2;
	// addi r31,r11,192
	ctx.r31.s64 = ctx.r11.s64 + 192;
	// li r28,15
	ctx.r28.s64 = 15;
	// li r30,0
	ctx.r30.s64 = 0;
loc_83D19DB8:
	// lwzu r11,-68(r31)
	ea = -68 + ctx.r31.u32;
	ctx.r11.u64 = PPC_LOAD_U32(ea);
	ctx.r31.u32 = ea;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83d19dd4
	if (cr6.lt) goto loc_83D19DD4;
	// lwz r4,-20(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + -20);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// bl 0x825952b8
	ctx.lr = 0x83D19DD4;
	sub_825952B8(ctx, base);
loc_83D19DD4:
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
	// blt cr6,0x83d19dfc
	if (cr6.lt) goto loc_83D19DFC;
	// lwz r4,-48(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + -48);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// bl 0x825952b8
	ctx.lr = 0x83D19DFC;
	sub_825952B8(ctx, base);
loc_83D19DFC:
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
	// bge 0x83d19db8
	if (!cr0.lt) goto loc_83D19DB8;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83D19E18"))) PPC_WEAK_FUNC(sub_83D19E18);
PPC_FUNC_IMPL(__imp__sub_83D19E18) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x83D19E20;
	__savegprlr_27(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31760
	ctx.r11.s64 = -2081423360;
	// li r27,13
	ctx.r27.s64 = 13;
	// addi r11,r11,17040
	ctx.r11.s64 = ctx.r11.s64 + 17040;
	// li r28,2
	ctx.r28.s64 = 2;
	// addi r31,r11,4008
	ctx.r31.s64 = ctx.r11.s64 + 4008;
	// li r29,15
	ctx.r29.s64 = 15;
	// li r30,0
	ctx.r30.s64 = 0;
loc_83D19E40:
	// lwzu r11,-268(r31)
	ea = -268 + ctx.r31.u32;
	ctx.r11.u64 = PPC_LOAD_U32(ea);
	ctx.r31.u32 = ea;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83d19e5c
	if (cr6.lt) goto loc_83D19E5C;
	// lwz r4,-20(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + -20);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// bl 0x825952b8
	ctx.lr = 0x83D19E5C;
	sub_825952B8(ctx, base);
loc_83D19E5C:
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
	// stw r30,-4(r31)
	PPC_STORE_U32(ctx.r31.u32 + -4, ctx.r30.u32);
	// stb r30,-20(r31)
	PPC_STORE_U8(ctx.r31.u32 + -20, ctx.r30.u8);
	// lwz r11,-28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83d19e84
	if (cr6.lt) goto loc_83D19E84;
	// lwz r4,-48(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + -48);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// bl 0x825952b8
	ctx.lr = 0x83D19E84;
	sub_825952B8(ctx, base);
loc_83D19E84:
	// stw r29,-28(r31)
	PPC_STORE_U32(ctx.r31.u32 + -28, ctx.r29.u32);
	// stw r30,-32(r31)
	PPC_STORE_U32(ctx.r31.u32 + -32, ctx.r30.u32);
	// stb r30,-48(r31)
	PPC_STORE_U8(ctx.r31.u32 + -48, ctx.r30.u8);
	// lwz r11,-64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -64);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83d19eac
	if (cr6.lt) goto loc_83D19EAC;
	// lwz r4,-84(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + -84);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stw r28,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r28.u32);
	// bl 0x825952b8
	ctx.lr = 0x83D19EAC;
	sub_825952B8(ctx, base);
loc_83D19EAC:
	// stw r29,-64(r31)
	PPC_STORE_U32(ctx.r31.u32 + -64, ctx.r29.u32);
	// stw r30,-68(r31)
	PPC_STORE_U32(ctx.r31.u32 + -68, ctx.r30.u32);
	// stb r30,-84(r31)
	PPC_STORE_U8(ctx.r31.u32 + -84, ctx.r30.u8);
	// lwz r11,-92(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -92);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83d19ed4
	if (cr6.lt) goto loc_83D19ED4;
	// lwz r4,-112(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + -112);
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// bl 0x825952b8
	ctx.lr = 0x83D19ED4;
	sub_825952B8(ctx, base);
loc_83D19ED4:
	// stw r29,-92(r31)
	PPC_STORE_U32(ctx.r31.u32 + -92, ctx.r29.u32);
	// stw r30,-96(r31)
	PPC_STORE_U32(ctx.r31.u32 + -96, ctx.r30.u32);
	// stb r30,-112(r31)
	PPC_STORE_U8(ctx.r31.u32 + -112, ctx.r30.u8);
	// lwz r11,-128(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -128);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83d19efc
	if (cr6.lt) goto loc_83D19EFC;
	// lwz r4,-148(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + -148);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r28,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r28.u32);
	// bl 0x825952b8
	ctx.lr = 0x83D19EFC;
	sub_825952B8(ctx, base);
loc_83D19EFC:
	// stw r29,-128(r31)
	PPC_STORE_U32(ctx.r31.u32 + -128, ctx.r29.u32);
	// stw r30,-132(r31)
	PPC_STORE_U32(ctx.r31.u32 + -132, ctx.r30.u32);
	// stb r30,-148(r31)
	PPC_STORE_U8(ctx.r31.u32 + -148, ctx.r30.u8);
	// lwz r11,-156(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -156);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83d19f24
	if (cr6.lt) goto loc_83D19F24;
	// lwz r4,-176(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + -176);
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// stw r28,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r28.u32);
	// bl 0x825952b8
	ctx.lr = 0x83D19F24;
	sub_825952B8(ctx, base);
loc_83D19F24:
	// stw r29,-156(r31)
	PPC_STORE_U32(ctx.r31.u32 + -156, ctx.r29.u32);
	// stw r30,-160(r31)
	PPC_STORE_U32(ctx.r31.u32 + -160, ctx.r30.u32);
	// stb r30,-176(r31)
	PPC_STORE_U8(ctx.r31.u32 + -176, ctx.r30.u8);
	// lwz r11,-192(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -192);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83d19f4c
	if (cr6.lt) goto loc_83D19F4C;
	// lwz r4,-212(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + -212);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// stw r28,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r28.u32);
	// bl 0x825952b8
	ctx.lr = 0x83D19F4C;
	sub_825952B8(ctx, base);
loc_83D19F4C:
	// stw r29,-192(r31)
	PPC_STORE_U32(ctx.r31.u32 + -192, ctx.r29.u32);
	// stw r30,-196(r31)
	PPC_STORE_U32(ctx.r31.u32 + -196, ctx.r30.u32);
	// stb r30,-212(r31)
	PPC_STORE_U8(ctx.r31.u32 + -212, ctx.r30.u8);
	// lwz r11,-220(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -220);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83d19f74
	if (cr6.lt) goto loc_83D19F74;
	// lwz r4,-240(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + -240);
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// stw r28,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r28.u32);
	// bl 0x825952b8
	ctx.lr = 0x83D19F74;
	sub_825952B8(ctx, base);
loc_83D19F74:
	// stw r29,-220(r31)
	PPC_STORE_U32(ctx.r31.u32 + -220, ctx.r29.u32);
	// addic. r27,r27,-1
	xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	cr0.compare<int32_t>(ctx.r27.s32, 0, xer);
	// stw r30,-224(r31)
	PPC_STORE_U32(ctx.r31.u32 + -224, ctx.r30.u32);
	// stb r30,-240(r31)
	PPC_STORE_U8(ctx.r31.u32 + -240, ctx.r30.u8);
	// bge 0x83d19e40
	if (!cr0.lt) goto loc_83D19E40;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83D19F90"))) PPC_WEAK_FUNC(sub_83D19F90);
PPC_FUNC_IMPL(__imp__sub_83D19F90) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D19F94"))) PPC_WEAK_FUNC(sub_83D19F94);
PPC_FUNC_IMPL(__imp__sub_83D19F94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D19F98"))) PPC_WEAK_FUNC(sub_83D19F98);
PPC_FUNC_IMPL(__imp__sub_83D19F98) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D19F9C"))) PPC_WEAK_FUNC(sub_83D19F9C);
PPC_FUNC_IMPL(__imp__sub_83D19F9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D19FA0"))) PPC_WEAK_FUNC(sub_83D19FA0);
PPC_FUNC_IMPL(__imp__sub_83D19FA0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D19FA4"))) PPC_WEAK_FUNC(sub_83D19FA4);
PPC_FUNC_IMPL(__imp__sub_83D19FA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D19FA8"))) PPC_WEAK_FUNC(sub_83D19FA8);
PPC_FUNC_IMPL(__imp__sub_83D19FA8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D19FAC"))) PPC_WEAK_FUNC(sub_83D19FAC);
PPC_FUNC_IMPL(__imp__sub_83D19FAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D19FB0"))) PPC_WEAK_FUNC(sub_83D19FB0);
PPC_FUNC_IMPL(__imp__sub_83D19FB0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D19FB4"))) PPC_WEAK_FUNC(sub_83D19FB4);
PPC_FUNC_IMPL(__imp__sub_83D19FB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D19FB8"))) PPC_WEAK_FUNC(sub_83D19FB8);
PPC_FUNC_IMPL(__imp__sub_83D19FB8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D19FBC"))) PPC_WEAK_FUNC(sub_83D19FBC);
PPC_FUNC_IMPL(__imp__sub_83D19FBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D19FC0"))) PPC_WEAK_FUNC(sub_83D19FC0);
PPC_FUNC_IMPL(__imp__sub_83D19FC0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D19FC4"))) PPC_WEAK_FUNC(sub_83D19FC4);
PPC_FUNC_IMPL(__imp__sub_83D19FC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D19FC8"))) PPC_WEAK_FUNC(sub_83D19FC8);
PPC_FUNC_IMPL(__imp__sub_83D19FC8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D19FCC"))) PPC_WEAK_FUNC(sub_83D19FCC);
PPC_FUNC_IMPL(__imp__sub_83D19FCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D19FD0"))) PPC_WEAK_FUNC(sub_83D19FD0);
PPC_FUNC_IMPL(__imp__sub_83D19FD0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D19FD4"))) PPC_WEAK_FUNC(sub_83D19FD4);
PPC_FUNC_IMPL(__imp__sub_83D19FD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D19FD8"))) PPC_WEAK_FUNC(sub_83D19FD8);
PPC_FUNC_IMPL(__imp__sub_83D19FD8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D19FDC"))) PPC_WEAK_FUNC(sub_83D19FDC);
PPC_FUNC_IMPL(__imp__sub_83D19FDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D19FE0"))) PPC_WEAK_FUNC(sub_83D19FE0);
PPC_FUNC_IMPL(__imp__sub_83D19FE0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D19FE4"))) PPC_WEAK_FUNC(sub_83D19FE4);
PPC_FUNC_IMPL(__imp__sub_83D19FE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D19FE8"))) PPC_WEAK_FUNC(sub_83D19FE8);
PPC_FUNC_IMPL(__imp__sub_83D19FE8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D19FEC"))) PPC_WEAK_FUNC(sub_83D19FEC);
PPC_FUNC_IMPL(__imp__sub_83D19FEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D19FF0"))) PPC_WEAK_FUNC(sub_83D19FF0);
PPC_FUNC_IMPL(__imp__sub_83D19FF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31760
	ctx.r11.s64 = -2081423360;
	// addi r3,r11,20928
	ctx.r3.s64 = ctx.r11.s64 + 20928;
	// b 0x83523150
	sub_83523150(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83D19FFC"))) PPC_WEAK_FUNC(sub_83D19FFC);
PPC_FUNC_IMPL(__imp__sub_83D19FFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1A000"))) PPC_WEAK_FUNC(sub_83D1A000);
PPC_FUNC_IMPL(__imp__sub_83D1A000) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1A004"))) PPC_WEAK_FUNC(sub_83D1A004);
PPC_FUNC_IMPL(__imp__sub_83D1A004) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1A008"))) PPC_WEAK_FUNC(sub_83D1A008);
PPC_FUNC_IMPL(__imp__sub_83D1A008) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1A00C"))) PPC_WEAK_FUNC(sub_83D1A00C);
PPC_FUNC_IMPL(__imp__sub_83D1A00C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1A010"))) PPC_WEAK_FUNC(sub_83D1A010);
PPC_FUNC_IMPL(__imp__sub_83D1A010) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1A014"))) PPC_WEAK_FUNC(sub_83D1A014);
PPC_FUNC_IMPL(__imp__sub_83D1A014) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1A018"))) PPC_WEAK_FUNC(sub_83D1A018);
PPC_FUNC_IMPL(__imp__sub_83D1A018) {
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
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// addi r31,r11,-13460
	ctx.r31.s64 = ctx.r11.s64 + -13460;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83d1a050
	if (cr6.lt) goto loc_83D1A050;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x83D1A050;
	sub_825952B8(ctx, base);
loc_83D1A050:
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

__attribute__((alias("__imp__sub_83D1A07C"))) PPC_WEAK_FUNC(sub_83D1A07C);
PPC_FUNC_IMPL(__imp__sub_83D1A07C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1A080"))) PPC_WEAK_FUNC(sub_83D1A080);
PPC_FUNC_IMPL(__imp__sub_83D1A080) {
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
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// addi r31,r11,-13432
	ctx.r31.s64 = ctx.r11.s64 + -13432;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83d1a0b8
	if (cr6.lt) goto loc_83D1A0B8;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x83D1A0B8;
	sub_825952B8(ctx, base);
loc_83D1A0B8:
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

__attribute__((alias("__imp__sub_83D1A0E4"))) PPC_WEAK_FUNC(sub_83D1A0E4);
PPC_FUNC_IMPL(__imp__sub_83D1A0E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1A0E8"))) PPC_WEAK_FUNC(sub_83D1A0E8);
PPC_FUNC_IMPL(__imp__sub_83D1A0E8) {
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
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// addi r31,r11,-13404
	ctx.r31.s64 = ctx.r11.s64 + -13404;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83d1a120
	if (cr6.lt) goto loc_83D1A120;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x83D1A120;
	sub_825952B8(ctx, base);
loc_83D1A120:
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

__attribute__((alias("__imp__sub_83D1A14C"))) PPC_WEAK_FUNC(sub_83D1A14C);
PPC_FUNC_IMPL(__imp__sub_83D1A14C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1A150"))) PPC_WEAK_FUNC(sub_83D1A150);
PPC_FUNC_IMPL(__imp__sub_83D1A150) {
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
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// addi r31,r11,-13376
	ctx.r31.s64 = ctx.r11.s64 + -13376;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83d1a188
	if (cr6.lt) goto loc_83D1A188;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x83D1A188;
	sub_825952B8(ctx, base);
loc_83D1A188:
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

__attribute__((alias("__imp__sub_83D1A1B4"))) PPC_WEAK_FUNC(sub_83D1A1B4);
PPC_FUNC_IMPL(__imp__sub_83D1A1B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1A1B8"))) PPC_WEAK_FUNC(sub_83D1A1B8);
PPC_FUNC_IMPL(__imp__sub_83D1A1B8) {
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
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// addi r31,r11,-13348
	ctx.r31.s64 = ctx.r11.s64 + -13348;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83d1a1f0
	if (cr6.lt) goto loc_83D1A1F0;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x83D1A1F0;
	sub_825952B8(ctx, base);
loc_83D1A1F0:
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

__attribute__((alias("__imp__sub_83D1A21C"))) PPC_WEAK_FUNC(sub_83D1A21C);
PPC_FUNC_IMPL(__imp__sub_83D1A21C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1A220"))) PPC_WEAK_FUNC(sub_83D1A220);
PPC_FUNC_IMPL(__imp__sub_83D1A220) {
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
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// addi r31,r11,-13320
	ctx.r31.s64 = ctx.r11.s64 + -13320;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83d1a258
	if (cr6.lt) goto loc_83D1A258;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x83D1A258;
	sub_825952B8(ctx, base);
loc_83D1A258:
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

__attribute__((alias("__imp__sub_83D1A284"))) PPC_WEAK_FUNC(sub_83D1A284);
PPC_FUNC_IMPL(__imp__sub_83D1A284) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1A288"))) PPC_WEAK_FUNC(sub_83D1A288);
PPC_FUNC_IMPL(__imp__sub_83D1A288) {
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
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// addi r31,r11,-13292
	ctx.r31.s64 = ctx.r11.s64 + -13292;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83d1a2c0
	if (cr6.lt) goto loc_83D1A2C0;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x83D1A2C0;
	sub_825952B8(ctx, base);
loc_83D1A2C0:
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

__attribute__((alias("__imp__sub_83D1A2EC"))) PPC_WEAK_FUNC(sub_83D1A2EC);
PPC_FUNC_IMPL(__imp__sub_83D1A2EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1A2F0"))) PPC_WEAK_FUNC(sub_83D1A2F0);
PPC_FUNC_IMPL(__imp__sub_83D1A2F0) {
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
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// addi r31,r11,-13264
	ctx.r31.s64 = ctx.r11.s64 + -13264;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83d1a328
	if (cr6.lt) goto loc_83D1A328;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x83D1A328;
	sub_825952B8(ctx, base);
loc_83D1A328:
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

__attribute__((alias("__imp__sub_83D1A354"))) PPC_WEAK_FUNC(sub_83D1A354);
PPC_FUNC_IMPL(__imp__sub_83D1A354) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1A358"))) PPC_WEAK_FUNC(sub_83D1A358);
PPC_FUNC_IMPL(__imp__sub_83D1A358) {
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
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// addi r31,r11,-13236
	ctx.r31.s64 = ctx.r11.s64 + -13236;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83d1a390
	if (cr6.lt) goto loc_83D1A390;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x83D1A390;
	sub_825952B8(ctx, base);
loc_83D1A390:
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

__attribute__((alias("__imp__sub_83D1A3BC"))) PPC_WEAK_FUNC(sub_83D1A3BC);
PPC_FUNC_IMPL(__imp__sub_83D1A3BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1A3C0"))) PPC_WEAK_FUNC(sub_83D1A3C0);
PPC_FUNC_IMPL(__imp__sub_83D1A3C0) {
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
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// addi r31,r11,-13208
	ctx.r31.s64 = ctx.r11.s64 + -13208;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83d1a3f8
	if (cr6.lt) goto loc_83D1A3F8;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x83D1A3F8;
	sub_825952B8(ctx, base);
loc_83D1A3F8:
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

__attribute__((alias("__imp__sub_83D1A424"))) PPC_WEAK_FUNC(sub_83D1A424);
PPC_FUNC_IMPL(__imp__sub_83D1A424) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1A428"))) PPC_WEAK_FUNC(sub_83D1A428);
PPC_FUNC_IMPL(__imp__sub_83D1A428) {
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
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// addi r31,r11,-13180
	ctx.r31.s64 = ctx.r11.s64 + -13180;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83d1a460
	if (cr6.lt) goto loc_83D1A460;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x83D1A460;
	sub_825952B8(ctx, base);
loc_83D1A460:
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

__attribute__((alias("__imp__sub_83D1A48C"))) PPC_WEAK_FUNC(sub_83D1A48C);
PPC_FUNC_IMPL(__imp__sub_83D1A48C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1A490"))) PPC_WEAK_FUNC(sub_83D1A490);
PPC_FUNC_IMPL(__imp__sub_83D1A490) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x83D1A498;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31760
	ctx.r11.s64 = -2081423360;
	// li r29,1
	ctx.r29.s64 = 1;
	// addi r11,r11,20936
	ctx.r11.s64 = ctx.r11.s64 + 20936;
	// li r27,2
	ctx.r27.s64 = 2;
	// addi r31,r11,192
	ctx.r31.s64 = ctx.r11.s64 + 192;
	// li r28,15
	ctx.r28.s64 = 15;
	// li r30,0
	ctx.r30.s64 = 0;
loc_83D1A4B8:
	// lwzu r11,-68(r31)
	ea = -68 + ctx.r31.u32;
	ctx.r11.u64 = PPC_LOAD_U32(ea);
	ctx.r31.u32 = ea;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83d1a4d4
	if (cr6.lt) goto loc_83D1A4D4;
	// lwz r4,-20(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + -20);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// bl 0x825952b8
	ctx.lr = 0x83D1A4D4;
	sub_825952B8(ctx, base);
loc_83D1A4D4:
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
	// blt cr6,0x83d1a4fc
	if (cr6.lt) goto loc_83D1A4FC;
	// lwz r4,-48(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + -48);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// bl 0x825952b8
	ctx.lr = 0x83D1A4FC;
	sub_825952B8(ctx, base);
loc_83D1A4FC:
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
	// bge 0x83d1a4b8
	if (!cr0.lt) goto loc_83D1A4B8;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83D1A518"))) PPC_WEAK_FUNC(sub_83D1A518);
PPC_FUNC_IMPL(__imp__sub_83D1A518) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1A51C"))) PPC_WEAK_FUNC(sub_83D1A51C);
PPC_FUNC_IMPL(__imp__sub_83D1A51C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1A520"))) PPC_WEAK_FUNC(sub_83D1A520);
PPC_FUNC_IMPL(__imp__sub_83D1A520) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1A524"))) PPC_WEAK_FUNC(sub_83D1A524);
PPC_FUNC_IMPL(__imp__sub_83D1A524) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1A528"))) PPC_WEAK_FUNC(sub_83D1A528);
PPC_FUNC_IMPL(__imp__sub_83D1A528) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1A52C"))) PPC_WEAK_FUNC(sub_83D1A52C);
PPC_FUNC_IMPL(__imp__sub_83D1A52C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1A530"))) PPC_WEAK_FUNC(sub_83D1A530);
PPC_FUNC_IMPL(__imp__sub_83D1A530) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1A534"))) PPC_WEAK_FUNC(sub_83D1A534);
PPC_FUNC_IMPL(__imp__sub_83D1A534) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1A538"))) PPC_WEAK_FUNC(sub_83D1A538);
PPC_FUNC_IMPL(__imp__sub_83D1A538) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1A53C"))) PPC_WEAK_FUNC(sub_83D1A53C);
PPC_FUNC_IMPL(__imp__sub_83D1A53C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1A540"))) PPC_WEAK_FUNC(sub_83D1A540);
PPC_FUNC_IMPL(__imp__sub_83D1A540) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1A544"))) PPC_WEAK_FUNC(sub_83D1A544);
PPC_FUNC_IMPL(__imp__sub_83D1A544) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1A548"))) PPC_WEAK_FUNC(sub_83D1A548);
PPC_FUNC_IMPL(__imp__sub_83D1A548) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1A54C"))) PPC_WEAK_FUNC(sub_83D1A54C);
PPC_FUNC_IMPL(__imp__sub_83D1A54C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1A550"))) PPC_WEAK_FUNC(sub_83D1A550);
PPC_FUNC_IMPL(__imp__sub_83D1A550) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1A554"))) PPC_WEAK_FUNC(sub_83D1A554);
PPC_FUNC_IMPL(__imp__sub_83D1A554) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1A558"))) PPC_WEAK_FUNC(sub_83D1A558);
PPC_FUNC_IMPL(__imp__sub_83D1A558) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1A55C"))) PPC_WEAK_FUNC(sub_83D1A55C);
PPC_FUNC_IMPL(__imp__sub_83D1A55C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1A560"))) PPC_WEAK_FUNC(sub_83D1A560);
PPC_FUNC_IMPL(__imp__sub_83D1A560) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1A564"))) PPC_WEAK_FUNC(sub_83D1A564);
PPC_FUNC_IMPL(__imp__sub_83D1A564) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1A568"))) PPC_WEAK_FUNC(sub_83D1A568);
PPC_FUNC_IMPL(__imp__sub_83D1A568) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1A56C"))) PPC_WEAK_FUNC(sub_83D1A56C);
PPC_FUNC_IMPL(__imp__sub_83D1A56C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1A570"))) PPC_WEAK_FUNC(sub_83D1A570);
PPC_FUNC_IMPL(__imp__sub_83D1A570) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1A574"))) PPC_WEAK_FUNC(sub_83D1A574);
PPC_FUNC_IMPL(__imp__sub_83D1A574) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1A578"))) PPC_WEAK_FUNC(sub_83D1A578);
PPC_FUNC_IMPL(__imp__sub_83D1A578) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31760
	ctx.r11.s64 = -2081423360;
	// addi r3,r11,21440
	ctx.r3.s64 = ctx.r11.s64 + 21440;
	// b 0x83523150
	sub_83523150(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83D1A584"))) PPC_WEAK_FUNC(sub_83D1A584);
PPC_FUNC_IMPL(__imp__sub_83D1A584) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1A588"))) PPC_WEAK_FUNC(sub_83D1A588);
PPC_FUNC_IMPL(__imp__sub_83D1A588) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1A58C"))) PPC_WEAK_FUNC(sub_83D1A58C);
PPC_FUNC_IMPL(__imp__sub_83D1A58C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1A590"))) PPC_WEAK_FUNC(sub_83D1A590);
PPC_FUNC_IMPL(__imp__sub_83D1A590) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1A594"))) PPC_WEAK_FUNC(sub_83D1A594);
PPC_FUNC_IMPL(__imp__sub_83D1A594) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1A598"))) PPC_WEAK_FUNC(sub_83D1A598);
PPC_FUNC_IMPL(__imp__sub_83D1A598) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1A59C"))) PPC_WEAK_FUNC(sub_83D1A59C);
PPC_FUNC_IMPL(__imp__sub_83D1A59C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1A5A0"))) PPC_WEAK_FUNC(sub_83D1A5A0);
PPC_FUNC_IMPL(__imp__sub_83D1A5A0) {
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
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// addi r31,r11,-13024
	ctx.r31.s64 = ctx.r11.s64 + -13024;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83d1a5d8
	if (cr6.lt) goto loc_83D1A5D8;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x83D1A5D8;
	sub_825952B8(ctx, base);
loc_83D1A5D8:
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

__attribute__((alias("__imp__sub_83D1A604"))) PPC_WEAK_FUNC(sub_83D1A604);
PPC_FUNC_IMPL(__imp__sub_83D1A604) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1A608"))) PPC_WEAK_FUNC(sub_83D1A608);
PPC_FUNC_IMPL(__imp__sub_83D1A608) {
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
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// addi r31,r11,-12996
	ctx.r31.s64 = ctx.r11.s64 + -12996;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83d1a640
	if (cr6.lt) goto loc_83D1A640;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x83D1A640;
	sub_825952B8(ctx, base);
loc_83D1A640:
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

__attribute__((alias("__imp__sub_83D1A66C"))) PPC_WEAK_FUNC(sub_83D1A66C);
PPC_FUNC_IMPL(__imp__sub_83D1A66C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1A670"))) PPC_WEAK_FUNC(sub_83D1A670);
PPC_FUNC_IMPL(__imp__sub_83D1A670) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x83D1A678;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31760
	ctx.r11.s64 = -2081423360;
	// li r29,6
	ctx.r29.s64 = 6;
	// addi r11,r11,21808
	ctx.r11.s64 = ctx.r11.s64 + 21808;
	// li r27,2
	ctx.r27.s64 = 2;
	// addi r31,r11,532
	ctx.r31.s64 = ctx.r11.s64 + 532;
	// li r28,15
	ctx.r28.s64 = 15;
	// li r30,0
	ctx.r30.s64 = 0;
loc_83D1A698:
	// lwzu r11,-68(r31)
	ea = -68 + ctx.r31.u32;
	ctx.r11.u64 = PPC_LOAD_U32(ea);
	ctx.r31.u32 = ea;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83d1a6b4
	if (cr6.lt) goto loc_83D1A6B4;
	// lwz r4,-20(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + -20);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// bl 0x825952b8
	ctx.lr = 0x83D1A6B4;
	sub_825952B8(ctx, base);
loc_83D1A6B4:
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
	// blt cr6,0x83d1a6dc
	if (cr6.lt) goto loc_83D1A6DC;
	// lwz r4,-48(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + -48);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// bl 0x825952b8
	ctx.lr = 0x83D1A6DC;
	sub_825952B8(ctx, base);
loc_83D1A6DC:
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
	// bge 0x83d1a698
	if (!cr0.lt) goto loc_83D1A698;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83D1A6F8"))) PPC_WEAK_FUNC(sub_83D1A6F8);
PPC_FUNC_IMPL(__imp__sub_83D1A6F8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1A6FC"))) PPC_WEAK_FUNC(sub_83D1A6FC);
PPC_FUNC_IMPL(__imp__sub_83D1A6FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1A700"))) PPC_WEAK_FUNC(sub_83D1A700);
PPC_FUNC_IMPL(__imp__sub_83D1A700) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1A704"))) PPC_WEAK_FUNC(sub_83D1A704);
PPC_FUNC_IMPL(__imp__sub_83D1A704) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1A708"))) PPC_WEAK_FUNC(sub_83D1A708);
PPC_FUNC_IMPL(__imp__sub_83D1A708) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1A70C"))) PPC_WEAK_FUNC(sub_83D1A70C);
PPC_FUNC_IMPL(__imp__sub_83D1A70C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1A710"))) PPC_WEAK_FUNC(sub_83D1A710);
PPC_FUNC_IMPL(__imp__sub_83D1A710) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1A714"))) PPC_WEAK_FUNC(sub_83D1A714);
PPC_FUNC_IMPL(__imp__sub_83D1A714) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1A718"))) PPC_WEAK_FUNC(sub_83D1A718);
PPC_FUNC_IMPL(__imp__sub_83D1A718) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1A71C"))) PPC_WEAK_FUNC(sub_83D1A71C);
PPC_FUNC_IMPL(__imp__sub_83D1A71C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1A720"))) PPC_WEAK_FUNC(sub_83D1A720);
PPC_FUNC_IMPL(__imp__sub_83D1A720) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1A724"))) PPC_WEAK_FUNC(sub_83D1A724);
PPC_FUNC_IMPL(__imp__sub_83D1A724) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1A728"))) PPC_WEAK_FUNC(sub_83D1A728);
PPC_FUNC_IMPL(__imp__sub_83D1A728) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1A72C"))) PPC_WEAK_FUNC(sub_83D1A72C);
PPC_FUNC_IMPL(__imp__sub_83D1A72C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1A730"))) PPC_WEAK_FUNC(sub_83D1A730);
PPC_FUNC_IMPL(__imp__sub_83D1A730) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1A734"))) PPC_WEAK_FUNC(sub_83D1A734);
PPC_FUNC_IMPL(__imp__sub_83D1A734) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1A738"))) PPC_WEAK_FUNC(sub_83D1A738);
PPC_FUNC_IMPL(__imp__sub_83D1A738) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1A73C"))) PPC_WEAK_FUNC(sub_83D1A73C);
PPC_FUNC_IMPL(__imp__sub_83D1A73C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1A740"))) PPC_WEAK_FUNC(sub_83D1A740);
PPC_FUNC_IMPL(__imp__sub_83D1A740) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1A744"))) PPC_WEAK_FUNC(sub_83D1A744);
PPC_FUNC_IMPL(__imp__sub_83D1A744) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1A748"))) PPC_WEAK_FUNC(sub_83D1A748);
PPC_FUNC_IMPL(__imp__sub_83D1A748) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1A74C"))) PPC_WEAK_FUNC(sub_83D1A74C);
PPC_FUNC_IMPL(__imp__sub_83D1A74C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1A750"))) PPC_WEAK_FUNC(sub_83D1A750);
PPC_FUNC_IMPL(__imp__sub_83D1A750) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1A754"))) PPC_WEAK_FUNC(sub_83D1A754);
PPC_FUNC_IMPL(__imp__sub_83D1A754) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1A758"))) PPC_WEAK_FUNC(sub_83D1A758);
PPC_FUNC_IMPL(__imp__sub_83D1A758) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31760
	ctx.r11.s64 = -2081423360;
	// addi r3,r11,22288
	ctx.r3.s64 = ctx.r11.s64 + 22288;
	// b 0x83523150
	sub_83523150(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83D1A764"))) PPC_WEAK_FUNC(sub_83D1A764);
PPC_FUNC_IMPL(__imp__sub_83D1A764) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1A768"))) PPC_WEAK_FUNC(sub_83D1A768);
PPC_FUNC_IMPL(__imp__sub_83D1A768) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1A76C"))) PPC_WEAK_FUNC(sub_83D1A76C);
PPC_FUNC_IMPL(__imp__sub_83D1A76C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1A770"))) PPC_WEAK_FUNC(sub_83D1A770);
PPC_FUNC_IMPL(__imp__sub_83D1A770) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1A774"))) PPC_WEAK_FUNC(sub_83D1A774);
PPC_FUNC_IMPL(__imp__sub_83D1A774) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1A778"))) PPC_WEAK_FUNC(sub_83D1A778);
PPC_FUNC_IMPL(__imp__sub_83D1A778) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1A77C"))) PPC_WEAK_FUNC(sub_83D1A77C);
PPC_FUNC_IMPL(__imp__sub_83D1A77C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1A780"))) PPC_WEAK_FUNC(sub_83D1A780);
PPC_FUNC_IMPL(__imp__sub_83D1A780) {
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
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// addi r31,r11,-12840
	ctx.r31.s64 = ctx.r11.s64 + -12840;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83d1a7b8
	if (cr6.lt) goto loc_83D1A7B8;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x83D1A7B8;
	sub_825952B8(ctx, base);
loc_83D1A7B8:
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

__attribute__((alias("__imp__sub_83D1A7E4"))) PPC_WEAK_FUNC(sub_83D1A7E4);
PPC_FUNC_IMPL(__imp__sub_83D1A7E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1A7E8"))) PPC_WEAK_FUNC(sub_83D1A7E8);
PPC_FUNC_IMPL(__imp__sub_83D1A7E8) {
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
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// addi r31,r11,-12812
	ctx.r31.s64 = ctx.r11.s64 + -12812;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83d1a820
	if (cr6.lt) goto loc_83D1A820;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x83D1A820;
	sub_825952B8(ctx, base);
loc_83D1A820:
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

__attribute__((alias("__imp__sub_83D1A84C"))) PPC_WEAK_FUNC(sub_83D1A84C);
PPC_FUNC_IMPL(__imp__sub_83D1A84C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1A850"))) PPC_WEAK_FUNC(sub_83D1A850);
PPC_FUNC_IMPL(__imp__sub_83D1A850) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x83D1A858;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31760
	ctx.r11.s64 = -2081423360;
	// li r29,7
	ctx.r29.s64 = 7;
	// addi r11,r11,23272
	ctx.r11.s64 = ctx.r11.s64 + 23272;
	// li r27,2
	ctx.r27.s64 = 2;
	// addi r31,r11,600
	ctx.r31.s64 = ctx.r11.s64 + 600;
	// li r28,15
	ctx.r28.s64 = 15;
	// li r30,0
	ctx.r30.s64 = 0;
loc_83D1A878:
	// lwzu r11,-68(r31)
	ea = -68 + ctx.r31.u32;
	ctx.r11.u64 = PPC_LOAD_U32(ea);
	ctx.r31.u32 = ea;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83d1a894
	if (cr6.lt) goto loc_83D1A894;
	// lwz r4,-20(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + -20);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// bl 0x825952b8
	ctx.lr = 0x83D1A894;
	sub_825952B8(ctx, base);
loc_83D1A894:
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
	// blt cr6,0x83d1a8bc
	if (cr6.lt) goto loc_83D1A8BC;
	// lwz r4,-48(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + -48);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// bl 0x825952b8
	ctx.lr = 0x83D1A8BC;
	sub_825952B8(ctx, base);
loc_83D1A8BC:
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
	// bge 0x83d1a878
	if (!cr0.lt) goto loc_83D1A878;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83D1A8D8"))) PPC_WEAK_FUNC(sub_83D1A8D8);
PPC_FUNC_IMPL(__imp__sub_83D1A8D8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x83D1A8E0;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31760
	ctx.r11.s64 = -2081423360;
	// li r29,8
	ctx.r29.s64 = 8;
	// addi r11,r11,22656
	ctx.r11.s64 = ctx.r11.s64 + 22656;
	// li r27,2
	ctx.r27.s64 = 2;
	// addi r31,r11,668
	ctx.r31.s64 = ctx.r11.s64 + 668;
	// li r28,15
	ctx.r28.s64 = 15;
	// li r30,0
	ctx.r30.s64 = 0;
loc_83D1A900:
	// lwzu r11,-68(r31)
	ea = -68 + ctx.r31.u32;
	ctx.r11.u64 = PPC_LOAD_U32(ea);
	ctx.r31.u32 = ea;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83d1a91c
	if (cr6.lt) goto loc_83D1A91C;
	// lwz r4,-20(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + -20);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// bl 0x825952b8
	ctx.lr = 0x83D1A91C;
	sub_825952B8(ctx, base);
loc_83D1A91C:
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
	// blt cr6,0x83d1a944
	if (cr6.lt) goto loc_83D1A944;
	// lwz r4,-48(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + -48);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// bl 0x825952b8
	ctx.lr = 0x83D1A944;
	sub_825952B8(ctx, base);
loc_83D1A944:
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
	// bge 0x83d1a900
	if (!cr0.lt) goto loc_83D1A900;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83D1A960"))) PPC_WEAK_FUNC(sub_83D1A960);
PPC_FUNC_IMPL(__imp__sub_83D1A960) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1A964"))) PPC_WEAK_FUNC(sub_83D1A964);
PPC_FUNC_IMPL(__imp__sub_83D1A964) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1A968"))) PPC_WEAK_FUNC(sub_83D1A968);
PPC_FUNC_IMPL(__imp__sub_83D1A968) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1A96C"))) PPC_WEAK_FUNC(sub_83D1A96C);
PPC_FUNC_IMPL(__imp__sub_83D1A96C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1A970"))) PPC_WEAK_FUNC(sub_83D1A970);
PPC_FUNC_IMPL(__imp__sub_83D1A970) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1A974"))) PPC_WEAK_FUNC(sub_83D1A974);
PPC_FUNC_IMPL(__imp__sub_83D1A974) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1A978"))) PPC_WEAK_FUNC(sub_83D1A978);
PPC_FUNC_IMPL(__imp__sub_83D1A978) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1A97C"))) PPC_WEAK_FUNC(sub_83D1A97C);
PPC_FUNC_IMPL(__imp__sub_83D1A97C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1A980"))) PPC_WEAK_FUNC(sub_83D1A980);
PPC_FUNC_IMPL(__imp__sub_83D1A980) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1A984"))) PPC_WEAK_FUNC(sub_83D1A984);
PPC_FUNC_IMPL(__imp__sub_83D1A984) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1A988"))) PPC_WEAK_FUNC(sub_83D1A988);
PPC_FUNC_IMPL(__imp__sub_83D1A988) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1A98C"))) PPC_WEAK_FUNC(sub_83D1A98C);
PPC_FUNC_IMPL(__imp__sub_83D1A98C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1A990"))) PPC_WEAK_FUNC(sub_83D1A990);
PPC_FUNC_IMPL(__imp__sub_83D1A990) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1A994"))) PPC_WEAK_FUNC(sub_83D1A994);
PPC_FUNC_IMPL(__imp__sub_83D1A994) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1A998"))) PPC_WEAK_FUNC(sub_83D1A998);
PPC_FUNC_IMPL(__imp__sub_83D1A998) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1A99C"))) PPC_WEAK_FUNC(sub_83D1A99C);
PPC_FUNC_IMPL(__imp__sub_83D1A99C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1A9A0"))) PPC_WEAK_FUNC(sub_83D1A9A0);
PPC_FUNC_IMPL(__imp__sub_83D1A9A0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1A9A4"))) PPC_WEAK_FUNC(sub_83D1A9A4);
PPC_FUNC_IMPL(__imp__sub_83D1A9A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1A9A8"))) PPC_WEAK_FUNC(sub_83D1A9A8);
PPC_FUNC_IMPL(__imp__sub_83D1A9A8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1A9AC"))) PPC_WEAK_FUNC(sub_83D1A9AC);
PPC_FUNC_IMPL(__imp__sub_83D1A9AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1A9B0"))) PPC_WEAK_FUNC(sub_83D1A9B0);
PPC_FUNC_IMPL(__imp__sub_83D1A9B0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1A9B4"))) PPC_WEAK_FUNC(sub_83D1A9B4);
PPC_FUNC_IMPL(__imp__sub_83D1A9B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1A9B8"))) PPC_WEAK_FUNC(sub_83D1A9B8);
PPC_FUNC_IMPL(__imp__sub_83D1A9B8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1A9BC"))) PPC_WEAK_FUNC(sub_83D1A9BC);
PPC_FUNC_IMPL(__imp__sub_83D1A9BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1A9C0"))) PPC_WEAK_FUNC(sub_83D1A9C0);
PPC_FUNC_IMPL(__imp__sub_83D1A9C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31760
	ctx.r11.s64 = -2081423360;
	// addi r3,r11,23816
	ctx.r3.s64 = ctx.r11.s64 + 23816;
	// b 0x83523150
	sub_83523150(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83D1A9CC"))) PPC_WEAK_FUNC(sub_83D1A9CC);
PPC_FUNC_IMPL(__imp__sub_83D1A9CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1A9D0"))) PPC_WEAK_FUNC(sub_83D1A9D0);
PPC_FUNC_IMPL(__imp__sub_83D1A9D0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1A9D4"))) PPC_WEAK_FUNC(sub_83D1A9D4);
PPC_FUNC_IMPL(__imp__sub_83D1A9D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1A9D8"))) PPC_WEAK_FUNC(sub_83D1A9D8);
PPC_FUNC_IMPL(__imp__sub_83D1A9D8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1A9DC"))) PPC_WEAK_FUNC(sub_83D1A9DC);
PPC_FUNC_IMPL(__imp__sub_83D1A9DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1A9E0"))) PPC_WEAK_FUNC(sub_83D1A9E0);
PPC_FUNC_IMPL(__imp__sub_83D1A9E0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1A9E4"))) PPC_WEAK_FUNC(sub_83D1A9E4);
PPC_FUNC_IMPL(__imp__sub_83D1A9E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1A9E8"))) PPC_WEAK_FUNC(sub_83D1A9E8);
PPC_FUNC_IMPL(__imp__sub_83D1A9E8) {
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
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// addi r31,r11,-12576
	ctx.r31.s64 = ctx.r11.s64 + -12576;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83d1aa20
	if (cr6.lt) goto loc_83D1AA20;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x83D1AA20;
	sub_825952B8(ctx, base);
loc_83D1AA20:
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

__attribute__((alias("__imp__sub_83D1AA4C"))) PPC_WEAK_FUNC(sub_83D1AA4C);
PPC_FUNC_IMPL(__imp__sub_83D1AA4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1AA50"))) PPC_WEAK_FUNC(sub_83D1AA50);
PPC_FUNC_IMPL(__imp__sub_83D1AA50) {
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
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// addi r31,r11,-12548
	ctx.r31.s64 = ctx.r11.s64 + -12548;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83d1aa88
	if (cr6.lt) goto loc_83D1AA88;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x83D1AA88;
	sub_825952B8(ctx, base);
loc_83D1AA88:
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

__attribute__((alias("__imp__sub_83D1AAB4"))) PPC_WEAK_FUNC(sub_83D1AAB4);
PPC_FUNC_IMPL(__imp__sub_83D1AAB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1AAB8"))) PPC_WEAK_FUNC(sub_83D1AAB8);
PPC_FUNC_IMPL(__imp__sub_83D1AAB8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1AABC"))) PPC_WEAK_FUNC(sub_83D1AABC);
PPC_FUNC_IMPL(__imp__sub_83D1AABC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1AAC0"))) PPC_WEAK_FUNC(sub_83D1AAC0);
PPC_FUNC_IMPL(__imp__sub_83D1AAC0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1AAC4"))) PPC_WEAK_FUNC(sub_83D1AAC4);
PPC_FUNC_IMPL(__imp__sub_83D1AAC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1AAC8"))) PPC_WEAK_FUNC(sub_83D1AAC8);
PPC_FUNC_IMPL(__imp__sub_83D1AAC8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1AACC"))) PPC_WEAK_FUNC(sub_83D1AACC);
PPC_FUNC_IMPL(__imp__sub_83D1AACC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1AAD0"))) PPC_WEAK_FUNC(sub_83D1AAD0);
PPC_FUNC_IMPL(__imp__sub_83D1AAD0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1AAD4"))) PPC_WEAK_FUNC(sub_83D1AAD4);
PPC_FUNC_IMPL(__imp__sub_83D1AAD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1AAD8"))) PPC_WEAK_FUNC(sub_83D1AAD8);
PPC_FUNC_IMPL(__imp__sub_83D1AAD8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1AADC"))) PPC_WEAK_FUNC(sub_83D1AADC);
PPC_FUNC_IMPL(__imp__sub_83D1AADC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1AAE0"))) PPC_WEAK_FUNC(sub_83D1AAE0);
PPC_FUNC_IMPL(__imp__sub_83D1AAE0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1AAE4"))) PPC_WEAK_FUNC(sub_83D1AAE4);
PPC_FUNC_IMPL(__imp__sub_83D1AAE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1AAE8"))) PPC_WEAK_FUNC(sub_83D1AAE8);
PPC_FUNC_IMPL(__imp__sub_83D1AAE8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1AAEC"))) PPC_WEAK_FUNC(sub_83D1AAEC);
PPC_FUNC_IMPL(__imp__sub_83D1AAEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1AAF0"))) PPC_WEAK_FUNC(sub_83D1AAF0);
PPC_FUNC_IMPL(__imp__sub_83D1AAF0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1AAF4"))) PPC_WEAK_FUNC(sub_83D1AAF4);
PPC_FUNC_IMPL(__imp__sub_83D1AAF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1AAF8"))) PPC_WEAK_FUNC(sub_83D1AAF8);
PPC_FUNC_IMPL(__imp__sub_83D1AAF8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1AAFC"))) PPC_WEAK_FUNC(sub_83D1AAFC);
PPC_FUNC_IMPL(__imp__sub_83D1AAFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1AB00"))) PPC_WEAK_FUNC(sub_83D1AB00);
PPC_FUNC_IMPL(__imp__sub_83D1AB00) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1AB04"))) PPC_WEAK_FUNC(sub_83D1AB04);
PPC_FUNC_IMPL(__imp__sub_83D1AB04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1AB08"))) PPC_WEAK_FUNC(sub_83D1AB08);
PPC_FUNC_IMPL(__imp__sub_83D1AB08) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1AB0C"))) PPC_WEAK_FUNC(sub_83D1AB0C);
PPC_FUNC_IMPL(__imp__sub_83D1AB0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1AB10"))) PPC_WEAK_FUNC(sub_83D1AB10);
PPC_FUNC_IMPL(__imp__sub_83D1AB10) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1AB14"))) PPC_WEAK_FUNC(sub_83D1AB14);
PPC_FUNC_IMPL(__imp__sub_83D1AB14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1AB18"))) PPC_WEAK_FUNC(sub_83D1AB18);
PPC_FUNC_IMPL(__imp__sub_83D1AB18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31760
	ctx.r11.s64 = -2081423360;
	// addi r3,r11,24184
	ctx.r3.s64 = ctx.r11.s64 + 24184;
	// b 0x83523150
	sub_83523150(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83D1AB24"))) PPC_WEAK_FUNC(sub_83D1AB24);
PPC_FUNC_IMPL(__imp__sub_83D1AB24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1AB28"))) PPC_WEAK_FUNC(sub_83D1AB28);
PPC_FUNC_IMPL(__imp__sub_83D1AB28) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1AB2C"))) PPC_WEAK_FUNC(sub_83D1AB2C);
PPC_FUNC_IMPL(__imp__sub_83D1AB2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1AB30"))) PPC_WEAK_FUNC(sub_83D1AB30);
PPC_FUNC_IMPL(__imp__sub_83D1AB30) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1AB34"))) PPC_WEAK_FUNC(sub_83D1AB34);
PPC_FUNC_IMPL(__imp__sub_83D1AB34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1AB38"))) PPC_WEAK_FUNC(sub_83D1AB38);
PPC_FUNC_IMPL(__imp__sub_83D1AB38) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1AB3C"))) PPC_WEAK_FUNC(sub_83D1AB3C);
PPC_FUNC_IMPL(__imp__sub_83D1AB3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1AB40"))) PPC_WEAK_FUNC(sub_83D1AB40);
PPC_FUNC_IMPL(__imp__sub_83D1AB40) {
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
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// addi r31,r11,-12392
	ctx.r31.s64 = ctx.r11.s64 + -12392;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83d1ab78
	if (cr6.lt) goto loc_83D1AB78;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x83D1AB78;
	sub_825952B8(ctx, base);
loc_83D1AB78:
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

__attribute__((alias("__imp__sub_83D1ABA4"))) PPC_WEAK_FUNC(sub_83D1ABA4);
PPC_FUNC_IMPL(__imp__sub_83D1ABA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1ABA8"))) PPC_WEAK_FUNC(sub_83D1ABA8);
PPC_FUNC_IMPL(__imp__sub_83D1ABA8) {
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
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// addi r31,r11,-12364
	ctx.r31.s64 = ctx.r11.s64 + -12364;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83d1abe0
	if (cr6.lt) goto loc_83D1ABE0;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x83D1ABE0;
	sub_825952B8(ctx, base);
loc_83D1ABE0:
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

__attribute__((alias("__imp__sub_83D1AC0C"))) PPC_WEAK_FUNC(sub_83D1AC0C);
PPC_FUNC_IMPL(__imp__sub_83D1AC0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1AC10"))) PPC_WEAK_FUNC(sub_83D1AC10);
PPC_FUNC_IMPL(__imp__sub_83D1AC10) {
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
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// addi r31,r11,-12336
	ctx.r31.s64 = ctx.r11.s64 + -12336;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83d1ac48
	if (cr6.lt) goto loc_83D1AC48;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x83D1AC48;
	sub_825952B8(ctx, base);
loc_83D1AC48:
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

__attribute__((alias("__imp__sub_83D1AC74"))) PPC_WEAK_FUNC(sub_83D1AC74);
PPC_FUNC_IMPL(__imp__sub_83D1AC74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1AC78"))) PPC_WEAK_FUNC(sub_83D1AC78);
PPC_FUNC_IMPL(__imp__sub_83D1AC78) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x83D1AC80;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31760
	ctx.r11.s64 = -2081423360;
	// li r29,8
	ctx.r29.s64 = 8;
	// addi r11,r11,24192
	ctx.r11.s64 = ctx.r11.s64 + 24192;
	// li r27,2
	ctx.r27.s64 = 2;
	// addi r31,r11,668
	ctx.r31.s64 = ctx.r11.s64 + 668;
	// li r28,15
	ctx.r28.s64 = 15;
	// li r30,0
	ctx.r30.s64 = 0;
loc_83D1ACA0:
	// lwzu r11,-68(r31)
	ea = -68 + ctx.r31.u32;
	ctx.r11.u64 = PPC_LOAD_U32(ea);
	ctx.r31.u32 = ea;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83d1acbc
	if (cr6.lt) goto loc_83D1ACBC;
	// lwz r4,-20(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + -20);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// bl 0x825952b8
	ctx.lr = 0x83D1ACBC;
	sub_825952B8(ctx, base);
loc_83D1ACBC:
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
	// blt cr6,0x83d1ace4
	if (cr6.lt) goto loc_83D1ACE4;
	// lwz r4,-48(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + -48);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// bl 0x825952b8
	ctx.lr = 0x83D1ACE4;
	sub_825952B8(ctx, base);
loc_83D1ACE4:
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
	// bge 0x83d1aca0
	if (!cr0.lt) goto loc_83D1ACA0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83D1AD00"))) PPC_WEAK_FUNC(sub_83D1AD00);
PPC_FUNC_IMPL(__imp__sub_83D1AD00) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x83D1AD08;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31760
	ctx.r11.s64 = -2081423360;
	// li r28,4
	ctx.r28.s64 = 4;
	// addi r11,r11,24816
	ctx.r11.s64 = ctx.r11.s64 + 24816;
	// li r27,2
	ctx.r27.s64 = 2;
	// addi r31,r11,756
	ctx.r31.s64 = ctx.r11.s64 + 756;
	// li r29,15
	ctx.r29.s64 = 15;
	// li r30,0
	ctx.r30.s64 = 0;
loc_83D1AD28:
	// lwzu r11,-128(r31)
	ea = -128 + ctx.r31.u32;
	ctx.r11.u64 = PPC_LOAD_U32(ea);
	ctx.r31.u32 = ea;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83d1ad44
	if (cr6.lt) goto loc_83D1AD44;
	// lwz r4,-20(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + -20);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// bl 0x825952b8
	ctx.lr = 0x83D1AD44;
	sub_825952B8(ctx, base);
loc_83D1AD44:
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
	// stw r30,-4(r31)
	PPC_STORE_U32(ctx.r31.u32 + -4, ctx.r30.u32);
	// stb r30,-20(r31)
	PPC_STORE_U8(ctx.r31.u32 + -20, ctx.r30.u8);
	// lwz r11,-28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83d1ad6c
	if (cr6.lt) goto loc_83D1AD6C;
	// lwz r4,-48(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + -48);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// bl 0x825952b8
	ctx.lr = 0x83D1AD6C;
	sub_825952B8(ctx, base);
loc_83D1AD6C:
	// stw r29,-28(r31)
	PPC_STORE_U32(ctx.r31.u32 + -28, ctx.r29.u32);
	// stw r30,-32(r31)
	PPC_STORE_U32(ctx.r31.u32 + -32, ctx.r30.u32);
	// stb r30,-48(r31)
	PPC_STORE_U8(ctx.r31.u32 + -48, ctx.r30.u8);
	// lwz r11,-64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -64);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83d1ad94
	if (cr6.lt) goto loc_83D1AD94;
	// lwz r4,-84(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + -84);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r27.u32);
	// bl 0x825952b8
	ctx.lr = 0x83D1AD94;
	sub_825952B8(ctx, base);
loc_83D1AD94:
	// stw r29,-64(r31)
	PPC_STORE_U32(ctx.r31.u32 + -64, ctx.r29.u32);
	// stw r30,-68(r31)
	PPC_STORE_U32(ctx.r31.u32 + -68, ctx.r30.u32);
	// stb r30,-84(r31)
	PPC_STORE_U8(ctx.r31.u32 + -84, ctx.r30.u8);
	// lwz r11,-92(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -92);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83d1adbc
	if (cr6.lt) goto loc_83D1ADBC;
	// lwz r4,-112(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + -112);
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// stw r27,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r27.u32);
	// bl 0x825952b8
	ctx.lr = 0x83D1ADBC;
	sub_825952B8(ctx, base);
loc_83D1ADBC:
	// stw r29,-92(r31)
	PPC_STORE_U32(ctx.r31.u32 + -92, ctx.r29.u32);
	// addic. r28,r28,-1
	xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	cr0.compare<int32_t>(ctx.r28.s32, 0, xer);
	// stw r30,-96(r31)
	PPC_STORE_U32(ctx.r31.u32 + -96, ctx.r30.u32);
	// stb r30,-112(r31)
	PPC_STORE_U8(ctx.r31.u32 + -112, ctx.r30.u8);
	// bge 0x83d1ad28
	if (!cr0.lt) goto loc_83D1AD28;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83D1ADD8"))) PPC_WEAK_FUNC(sub_83D1ADD8);
PPC_FUNC_IMPL(__imp__sub_83D1ADD8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1ADDC"))) PPC_WEAK_FUNC(sub_83D1ADDC);
PPC_FUNC_IMPL(__imp__sub_83D1ADDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1ADE0"))) PPC_WEAK_FUNC(sub_83D1ADE0);
PPC_FUNC_IMPL(__imp__sub_83D1ADE0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1ADE4"))) PPC_WEAK_FUNC(sub_83D1ADE4);
PPC_FUNC_IMPL(__imp__sub_83D1ADE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1ADE8"))) PPC_WEAK_FUNC(sub_83D1ADE8);
PPC_FUNC_IMPL(__imp__sub_83D1ADE8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1ADEC"))) PPC_WEAK_FUNC(sub_83D1ADEC);
PPC_FUNC_IMPL(__imp__sub_83D1ADEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1ADF0"))) PPC_WEAK_FUNC(sub_83D1ADF0);
PPC_FUNC_IMPL(__imp__sub_83D1ADF0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1ADF4"))) PPC_WEAK_FUNC(sub_83D1ADF4);
PPC_FUNC_IMPL(__imp__sub_83D1ADF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1ADF8"))) PPC_WEAK_FUNC(sub_83D1ADF8);
PPC_FUNC_IMPL(__imp__sub_83D1ADF8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1ADFC"))) PPC_WEAK_FUNC(sub_83D1ADFC);
PPC_FUNC_IMPL(__imp__sub_83D1ADFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1AE00"))) PPC_WEAK_FUNC(sub_83D1AE00);
PPC_FUNC_IMPL(__imp__sub_83D1AE00) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1AE04"))) PPC_WEAK_FUNC(sub_83D1AE04);
PPC_FUNC_IMPL(__imp__sub_83D1AE04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1AE08"))) PPC_WEAK_FUNC(sub_83D1AE08);
PPC_FUNC_IMPL(__imp__sub_83D1AE08) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1AE0C"))) PPC_WEAK_FUNC(sub_83D1AE0C);
PPC_FUNC_IMPL(__imp__sub_83D1AE0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1AE10"))) PPC_WEAK_FUNC(sub_83D1AE10);
PPC_FUNC_IMPL(__imp__sub_83D1AE10) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1AE14"))) PPC_WEAK_FUNC(sub_83D1AE14);
PPC_FUNC_IMPL(__imp__sub_83D1AE14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1AE18"))) PPC_WEAK_FUNC(sub_83D1AE18);
PPC_FUNC_IMPL(__imp__sub_83D1AE18) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1AE1C"))) PPC_WEAK_FUNC(sub_83D1AE1C);
PPC_FUNC_IMPL(__imp__sub_83D1AE1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1AE20"))) PPC_WEAK_FUNC(sub_83D1AE20);
PPC_FUNC_IMPL(__imp__sub_83D1AE20) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1AE24"))) PPC_WEAK_FUNC(sub_83D1AE24);
PPC_FUNC_IMPL(__imp__sub_83D1AE24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1AE28"))) PPC_WEAK_FUNC(sub_83D1AE28);
PPC_FUNC_IMPL(__imp__sub_83D1AE28) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

