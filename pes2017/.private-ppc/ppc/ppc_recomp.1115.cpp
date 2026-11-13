#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_83D1C550"))) PPC_WEAK_FUNC(sub_83D1C550);
PPC_FUNC_IMPL(__imp__sub_83D1C550) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1C554"))) PPC_WEAK_FUNC(sub_83D1C554);
PPC_FUNC_IMPL(__imp__sub_83D1C554) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1C558"))) PPC_WEAK_FUNC(sub_83D1C558);
PPC_FUNC_IMPL(__imp__sub_83D1C558) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1C55C"))) PPC_WEAK_FUNC(sub_83D1C55C);
PPC_FUNC_IMPL(__imp__sub_83D1C55C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1C560"))) PPC_WEAK_FUNC(sub_83D1C560);
PPC_FUNC_IMPL(__imp__sub_83D1C560) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31759
	ctx.r11.s64 = -2081357824;
	// addi r3,r11,-27560
	ctx.r3.s64 = ctx.r11.s64 + -27560;
	// b 0x83523150
	sub_83523150(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83D1C56C"))) PPC_WEAK_FUNC(sub_83D1C56C);
PPC_FUNC_IMPL(__imp__sub_83D1C56C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1C570"))) PPC_WEAK_FUNC(sub_83D1C570);
PPC_FUNC_IMPL(__imp__sub_83D1C570) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1C574"))) PPC_WEAK_FUNC(sub_83D1C574);
PPC_FUNC_IMPL(__imp__sub_83D1C574) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1C578"))) PPC_WEAK_FUNC(sub_83D1C578);
PPC_FUNC_IMPL(__imp__sub_83D1C578) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1C57C"))) PPC_WEAK_FUNC(sub_83D1C57C);
PPC_FUNC_IMPL(__imp__sub_83D1C57C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1C580"))) PPC_WEAK_FUNC(sub_83D1C580);
PPC_FUNC_IMPL(__imp__sub_83D1C580) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1C584"))) PPC_WEAK_FUNC(sub_83D1C584);
PPC_FUNC_IMPL(__imp__sub_83D1C584) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1C588"))) PPC_WEAK_FUNC(sub_83D1C588);
PPC_FUNC_IMPL(__imp__sub_83D1C588) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x83D1C590;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// li r30,9
	ctx.r30.s64 = 9;
	// addi r11,r11,-7088
	ctx.r11.s64 = ctx.r11.s64 + -7088;
	// li r27,2
	ctx.r27.s64 = 2;
	// addi r31,r11,368
	ctx.r31.s64 = ctx.r11.s64 + 368;
	// li r28,15
	ctx.r28.s64 = 15;
	// li r29,0
	ctx.r29.s64 = 0;
loc_83D1C5B0:
	// addi r31,r31,-36
	ctx.r31.s64 = ctx.r31.s64 + -36;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83d1c5d0
	if (cr6.lt) goto loc_83D1C5D0;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// bl 0x825952b8
	ctx.lr = 0x83D1C5D0;
	sub_825952B8(ctx, base);
loc_83D1C5D0:
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
	// bge 0x83d1c5b0
	if (!cr0.lt) goto loc_83D1C5B0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83D1C5EC"))) PPC_WEAK_FUNC(sub_83D1C5EC);
PPC_FUNC_IMPL(__imp__sub_83D1C5EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1C5F0"))) PPC_WEAK_FUNC(sub_83D1C5F0);
PPC_FUNC_IMPL(__imp__sub_83D1C5F0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1C5F4"))) PPC_WEAK_FUNC(sub_83D1C5F4);
PPC_FUNC_IMPL(__imp__sub_83D1C5F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1C5F8"))) PPC_WEAK_FUNC(sub_83D1C5F8);
PPC_FUNC_IMPL(__imp__sub_83D1C5F8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1C5FC"))) PPC_WEAK_FUNC(sub_83D1C5FC);
PPC_FUNC_IMPL(__imp__sub_83D1C5FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1C600"))) PPC_WEAK_FUNC(sub_83D1C600);
PPC_FUNC_IMPL(__imp__sub_83D1C600) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1C604"))) PPC_WEAK_FUNC(sub_83D1C604);
PPC_FUNC_IMPL(__imp__sub_83D1C604) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1C608"))) PPC_WEAK_FUNC(sub_83D1C608);
PPC_FUNC_IMPL(__imp__sub_83D1C608) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1C60C"))) PPC_WEAK_FUNC(sub_83D1C60C);
PPC_FUNC_IMPL(__imp__sub_83D1C60C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1C610"))) PPC_WEAK_FUNC(sub_83D1C610);
PPC_FUNC_IMPL(__imp__sub_83D1C610) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1C614"))) PPC_WEAK_FUNC(sub_83D1C614);
PPC_FUNC_IMPL(__imp__sub_83D1C614) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1C618"))) PPC_WEAK_FUNC(sub_83D1C618);
PPC_FUNC_IMPL(__imp__sub_83D1C618) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1C61C"))) PPC_WEAK_FUNC(sub_83D1C61C);
PPC_FUNC_IMPL(__imp__sub_83D1C61C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1C620"))) PPC_WEAK_FUNC(sub_83D1C620);
PPC_FUNC_IMPL(__imp__sub_83D1C620) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1C624"))) PPC_WEAK_FUNC(sub_83D1C624);
PPC_FUNC_IMPL(__imp__sub_83D1C624) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1C628"))) PPC_WEAK_FUNC(sub_83D1C628);
PPC_FUNC_IMPL(__imp__sub_83D1C628) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1C62C"))) PPC_WEAK_FUNC(sub_83D1C62C);
PPC_FUNC_IMPL(__imp__sub_83D1C62C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1C630"))) PPC_WEAK_FUNC(sub_83D1C630);
PPC_FUNC_IMPL(__imp__sub_83D1C630) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1C634"))) PPC_WEAK_FUNC(sub_83D1C634);
PPC_FUNC_IMPL(__imp__sub_83D1C634) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1C638"))) PPC_WEAK_FUNC(sub_83D1C638);
PPC_FUNC_IMPL(__imp__sub_83D1C638) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1C63C"))) PPC_WEAK_FUNC(sub_83D1C63C);
PPC_FUNC_IMPL(__imp__sub_83D1C63C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1C640"))) PPC_WEAK_FUNC(sub_83D1C640);
PPC_FUNC_IMPL(__imp__sub_83D1C640) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1C644"))) PPC_WEAK_FUNC(sub_83D1C644);
PPC_FUNC_IMPL(__imp__sub_83D1C644) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1C648"))) PPC_WEAK_FUNC(sub_83D1C648);
PPC_FUNC_IMPL(__imp__sub_83D1C648) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1C64C"))) PPC_WEAK_FUNC(sub_83D1C64C);
PPC_FUNC_IMPL(__imp__sub_83D1C64C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1C650"))) PPC_WEAK_FUNC(sub_83D1C650);
PPC_FUNC_IMPL(__imp__sub_83D1C650) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31759
	ctx.r11.s64 = -2081357824;
	// addi r3,r11,-27192
	ctx.r3.s64 = ctx.r11.s64 + -27192;
	// b 0x83523150
	sub_83523150(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83D1C65C"))) PPC_WEAK_FUNC(sub_83D1C65C);
PPC_FUNC_IMPL(__imp__sub_83D1C65C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1C660"))) PPC_WEAK_FUNC(sub_83D1C660);
PPC_FUNC_IMPL(__imp__sub_83D1C660) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1C664"))) PPC_WEAK_FUNC(sub_83D1C664);
PPC_FUNC_IMPL(__imp__sub_83D1C664) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1C668"))) PPC_WEAK_FUNC(sub_83D1C668);
PPC_FUNC_IMPL(__imp__sub_83D1C668) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1C66C"))) PPC_WEAK_FUNC(sub_83D1C66C);
PPC_FUNC_IMPL(__imp__sub_83D1C66C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1C670"))) PPC_WEAK_FUNC(sub_83D1C670);
PPC_FUNC_IMPL(__imp__sub_83D1C670) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1C674"))) PPC_WEAK_FUNC(sub_83D1C674);
PPC_FUNC_IMPL(__imp__sub_83D1C674) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1C678"))) PPC_WEAK_FUNC(sub_83D1C678);
PPC_FUNC_IMPL(__imp__sub_83D1C678) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x83D1C680;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// li r30,4
	ctx.r30.s64 = 4;
	// addi r11,r11,-6552
	ctx.r11.s64 = ctx.r11.s64 + -6552;
	// li r27,2
	ctx.r27.s64 = 2;
	// addi r31,r11,188
	ctx.r31.s64 = ctx.r11.s64 + 188;
	// li r28,15
	ctx.r28.s64 = 15;
	// li r29,0
	ctx.r29.s64 = 0;
loc_83D1C6A0:
	// addi r31,r31,-36
	ctx.r31.s64 = ctx.r31.s64 + -36;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83d1c6c0
	if (cr6.lt) goto loc_83D1C6C0;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// bl 0x825952b8
	ctx.lr = 0x83D1C6C0;
	sub_825952B8(ctx, base);
loc_83D1C6C0:
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
	// bge 0x83d1c6a0
	if (!cr0.lt) goto loc_83D1C6A0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83D1C6DC"))) PPC_WEAK_FUNC(sub_83D1C6DC);
PPC_FUNC_IMPL(__imp__sub_83D1C6DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1C6E0"))) PPC_WEAK_FUNC(sub_83D1C6E0);
PPC_FUNC_IMPL(__imp__sub_83D1C6E0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1C6E4"))) PPC_WEAK_FUNC(sub_83D1C6E4);
PPC_FUNC_IMPL(__imp__sub_83D1C6E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1C6E8"))) PPC_WEAK_FUNC(sub_83D1C6E8);
PPC_FUNC_IMPL(__imp__sub_83D1C6E8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1C6EC"))) PPC_WEAK_FUNC(sub_83D1C6EC);
PPC_FUNC_IMPL(__imp__sub_83D1C6EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1C6F0"))) PPC_WEAK_FUNC(sub_83D1C6F0);
PPC_FUNC_IMPL(__imp__sub_83D1C6F0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1C6F4"))) PPC_WEAK_FUNC(sub_83D1C6F4);
PPC_FUNC_IMPL(__imp__sub_83D1C6F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1C6F8"))) PPC_WEAK_FUNC(sub_83D1C6F8);
PPC_FUNC_IMPL(__imp__sub_83D1C6F8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1C6FC"))) PPC_WEAK_FUNC(sub_83D1C6FC);
PPC_FUNC_IMPL(__imp__sub_83D1C6FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1C700"))) PPC_WEAK_FUNC(sub_83D1C700);
PPC_FUNC_IMPL(__imp__sub_83D1C700) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1C704"))) PPC_WEAK_FUNC(sub_83D1C704);
PPC_FUNC_IMPL(__imp__sub_83D1C704) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1C708"))) PPC_WEAK_FUNC(sub_83D1C708);
PPC_FUNC_IMPL(__imp__sub_83D1C708) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1C70C"))) PPC_WEAK_FUNC(sub_83D1C70C);
PPC_FUNC_IMPL(__imp__sub_83D1C70C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1C710"))) PPC_WEAK_FUNC(sub_83D1C710);
PPC_FUNC_IMPL(__imp__sub_83D1C710) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1C714"))) PPC_WEAK_FUNC(sub_83D1C714);
PPC_FUNC_IMPL(__imp__sub_83D1C714) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1C718"))) PPC_WEAK_FUNC(sub_83D1C718);
PPC_FUNC_IMPL(__imp__sub_83D1C718) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1C71C"))) PPC_WEAK_FUNC(sub_83D1C71C);
PPC_FUNC_IMPL(__imp__sub_83D1C71C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1C720"))) PPC_WEAK_FUNC(sub_83D1C720);
PPC_FUNC_IMPL(__imp__sub_83D1C720) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1C724"))) PPC_WEAK_FUNC(sub_83D1C724);
PPC_FUNC_IMPL(__imp__sub_83D1C724) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1C728"))) PPC_WEAK_FUNC(sub_83D1C728);
PPC_FUNC_IMPL(__imp__sub_83D1C728) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1C72C"))) PPC_WEAK_FUNC(sub_83D1C72C);
PPC_FUNC_IMPL(__imp__sub_83D1C72C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1C730"))) PPC_WEAK_FUNC(sub_83D1C730);
PPC_FUNC_IMPL(__imp__sub_83D1C730) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1C734"))) PPC_WEAK_FUNC(sub_83D1C734);
PPC_FUNC_IMPL(__imp__sub_83D1C734) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1C738"))) PPC_WEAK_FUNC(sub_83D1C738);
PPC_FUNC_IMPL(__imp__sub_83D1C738) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1C73C"))) PPC_WEAK_FUNC(sub_83D1C73C);
PPC_FUNC_IMPL(__imp__sub_83D1C73C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1C740"))) PPC_WEAK_FUNC(sub_83D1C740);
PPC_FUNC_IMPL(__imp__sub_83D1C740) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31759
	ctx.r11.s64 = -2081357824;
	// addi r3,r11,-26824
	ctx.r3.s64 = ctx.r11.s64 + -26824;
	// b 0x83523150
	sub_83523150(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83D1C74C"))) PPC_WEAK_FUNC(sub_83D1C74C);
PPC_FUNC_IMPL(__imp__sub_83D1C74C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1C750"))) PPC_WEAK_FUNC(sub_83D1C750);
PPC_FUNC_IMPL(__imp__sub_83D1C750) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1C754"))) PPC_WEAK_FUNC(sub_83D1C754);
PPC_FUNC_IMPL(__imp__sub_83D1C754) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1C758"))) PPC_WEAK_FUNC(sub_83D1C758);
PPC_FUNC_IMPL(__imp__sub_83D1C758) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1C75C"))) PPC_WEAK_FUNC(sub_83D1C75C);
PPC_FUNC_IMPL(__imp__sub_83D1C75C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1C760"))) PPC_WEAK_FUNC(sub_83D1C760);
PPC_FUNC_IMPL(__imp__sub_83D1C760) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1C764"))) PPC_WEAK_FUNC(sub_83D1C764);
PPC_FUNC_IMPL(__imp__sub_83D1C764) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1C768"))) PPC_WEAK_FUNC(sub_83D1C768);
PPC_FUNC_IMPL(__imp__sub_83D1C768) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x83D1C770;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// li r30,3
	ctx.r30.s64 = 3;
	// addi r11,r11,-6224
	ctx.r11.s64 = ctx.r11.s64 + -6224;
	// li r27,2
	ctx.r27.s64 = 2;
	// addi r31,r11,132
	ctx.r31.s64 = ctx.r11.s64 + 132;
	// li r28,15
	ctx.r28.s64 = 15;
	// li r29,0
	ctx.r29.s64 = 0;
loc_83D1C790:
	// addi r31,r31,-32
	ctx.r31.s64 = ctx.r31.s64 + -32;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83d1c7b0
	if (cr6.lt) goto loc_83D1C7B0;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// bl 0x825952b8
	ctx.lr = 0x83D1C7B0;
	sub_825952B8(ctx, base);
loc_83D1C7B0:
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
	// bge 0x83d1c790
	if (!cr0.lt) goto loc_83D1C790;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83D1C7CC"))) PPC_WEAK_FUNC(sub_83D1C7CC);
PPC_FUNC_IMPL(__imp__sub_83D1C7CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1C7D0"))) PPC_WEAK_FUNC(sub_83D1C7D0);
PPC_FUNC_IMPL(__imp__sub_83D1C7D0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1C7D4"))) PPC_WEAK_FUNC(sub_83D1C7D4);
PPC_FUNC_IMPL(__imp__sub_83D1C7D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1C7D8"))) PPC_WEAK_FUNC(sub_83D1C7D8);
PPC_FUNC_IMPL(__imp__sub_83D1C7D8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1C7DC"))) PPC_WEAK_FUNC(sub_83D1C7DC);
PPC_FUNC_IMPL(__imp__sub_83D1C7DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1C7E0"))) PPC_WEAK_FUNC(sub_83D1C7E0);
PPC_FUNC_IMPL(__imp__sub_83D1C7E0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1C7E4"))) PPC_WEAK_FUNC(sub_83D1C7E4);
PPC_FUNC_IMPL(__imp__sub_83D1C7E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1C7E8"))) PPC_WEAK_FUNC(sub_83D1C7E8);
PPC_FUNC_IMPL(__imp__sub_83D1C7E8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1C7EC"))) PPC_WEAK_FUNC(sub_83D1C7EC);
PPC_FUNC_IMPL(__imp__sub_83D1C7EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1C7F0"))) PPC_WEAK_FUNC(sub_83D1C7F0);
PPC_FUNC_IMPL(__imp__sub_83D1C7F0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1C7F4"))) PPC_WEAK_FUNC(sub_83D1C7F4);
PPC_FUNC_IMPL(__imp__sub_83D1C7F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1C7F8"))) PPC_WEAK_FUNC(sub_83D1C7F8);
PPC_FUNC_IMPL(__imp__sub_83D1C7F8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1C7FC"))) PPC_WEAK_FUNC(sub_83D1C7FC);
PPC_FUNC_IMPL(__imp__sub_83D1C7FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1C800"))) PPC_WEAK_FUNC(sub_83D1C800);
PPC_FUNC_IMPL(__imp__sub_83D1C800) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1C804"))) PPC_WEAK_FUNC(sub_83D1C804);
PPC_FUNC_IMPL(__imp__sub_83D1C804) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1C808"))) PPC_WEAK_FUNC(sub_83D1C808);
PPC_FUNC_IMPL(__imp__sub_83D1C808) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1C80C"))) PPC_WEAK_FUNC(sub_83D1C80C);
PPC_FUNC_IMPL(__imp__sub_83D1C80C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1C810"))) PPC_WEAK_FUNC(sub_83D1C810);
PPC_FUNC_IMPL(__imp__sub_83D1C810) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1C814"))) PPC_WEAK_FUNC(sub_83D1C814);
PPC_FUNC_IMPL(__imp__sub_83D1C814) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1C818"))) PPC_WEAK_FUNC(sub_83D1C818);
PPC_FUNC_IMPL(__imp__sub_83D1C818) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1C81C"))) PPC_WEAK_FUNC(sub_83D1C81C);
PPC_FUNC_IMPL(__imp__sub_83D1C81C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1C820"))) PPC_WEAK_FUNC(sub_83D1C820);
PPC_FUNC_IMPL(__imp__sub_83D1C820) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1C824"))) PPC_WEAK_FUNC(sub_83D1C824);
PPC_FUNC_IMPL(__imp__sub_83D1C824) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1C828"))) PPC_WEAK_FUNC(sub_83D1C828);
PPC_FUNC_IMPL(__imp__sub_83D1C828) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1C82C"))) PPC_WEAK_FUNC(sub_83D1C82C);
PPC_FUNC_IMPL(__imp__sub_83D1C82C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1C830"))) PPC_WEAK_FUNC(sub_83D1C830);
PPC_FUNC_IMPL(__imp__sub_83D1C830) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31759
	ctx.r11.s64 = -2081357824;
	// addi r3,r11,-26456
	ctx.r3.s64 = ctx.r11.s64 + -26456;
	// b 0x83523150
	sub_83523150(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83D1C83C"))) PPC_WEAK_FUNC(sub_83D1C83C);
PPC_FUNC_IMPL(__imp__sub_83D1C83C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1C840"))) PPC_WEAK_FUNC(sub_83D1C840);
PPC_FUNC_IMPL(__imp__sub_83D1C840) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1C844"))) PPC_WEAK_FUNC(sub_83D1C844);
PPC_FUNC_IMPL(__imp__sub_83D1C844) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1C848"))) PPC_WEAK_FUNC(sub_83D1C848);
PPC_FUNC_IMPL(__imp__sub_83D1C848) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1C84C"))) PPC_WEAK_FUNC(sub_83D1C84C);
PPC_FUNC_IMPL(__imp__sub_83D1C84C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1C850"))) PPC_WEAK_FUNC(sub_83D1C850);
PPC_FUNC_IMPL(__imp__sub_83D1C850) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1C854"))) PPC_WEAK_FUNC(sub_83D1C854);
PPC_FUNC_IMPL(__imp__sub_83D1C854) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1C858"))) PPC_WEAK_FUNC(sub_83D1C858);
PPC_FUNC_IMPL(__imp__sub_83D1C858) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1C85C"))) PPC_WEAK_FUNC(sub_83D1C85C);
PPC_FUNC_IMPL(__imp__sub_83D1C85C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1C860"))) PPC_WEAK_FUNC(sub_83D1C860);
PPC_FUNC_IMPL(__imp__sub_83D1C860) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1C864"))) PPC_WEAK_FUNC(sub_83D1C864);
PPC_FUNC_IMPL(__imp__sub_83D1C864) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1C868"))) PPC_WEAK_FUNC(sub_83D1C868);
PPC_FUNC_IMPL(__imp__sub_83D1C868) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1C86C"))) PPC_WEAK_FUNC(sub_83D1C86C);
PPC_FUNC_IMPL(__imp__sub_83D1C86C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1C870"))) PPC_WEAK_FUNC(sub_83D1C870);
PPC_FUNC_IMPL(__imp__sub_83D1C870) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1C874"))) PPC_WEAK_FUNC(sub_83D1C874);
PPC_FUNC_IMPL(__imp__sub_83D1C874) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1C878"))) PPC_WEAK_FUNC(sub_83D1C878);
PPC_FUNC_IMPL(__imp__sub_83D1C878) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1C87C"))) PPC_WEAK_FUNC(sub_83D1C87C);
PPC_FUNC_IMPL(__imp__sub_83D1C87C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1C880"))) PPC_WEAK_FUNC(sub_83D1C880);
PPC_FUNC_IMPL(__imp__sub_83D1C880) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1C884"))) PPC_WEAK_FUNC(sub_83D1C884);
PPC_FUNC_IMPL(__imp__sub_83D1C884) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1C888"))) PPC_WEAK_FUNC(sub_83D1C888);
PPC_FUNC_IMPL(__imp__sub_83D1C888) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1C88C"))) PPC_WEAK_FUNC(sub_83D1C88C);
PPC_FUNC_IMPL(__imp__sub_83D1C88C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1C890"))) PPC_WEAK_FUNC(sub_83D1C890);
PPC_FUNC_IMPL(__imp__sub_83D1C890) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1C894"))) PPC_WEAK_FUNC(sub_83D1C894);
PPC_FUNC_IMPL(__imp__sub_83D1C894) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1C898"))) PPC_WEAK_FUNC(sub_83D1C898);
PPC_FUNC_IMPL(__imp__sub_83D1C898) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1C89C"))) PPC_WEAK_FUNC(sub_83D1C89C);
PPC_FUNC_IMPL(__imp__sub_83D1C89C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1C8A0"))) PPC_WEAK_FUNC(sub_83D1C8A0);
PPC_FUNC_IMPL(__imp__sub_83D1C8A0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1C8A4"))) PPC_WEAK_FUNC(sub_83D1C8A4);
PPC_FUNC_IMPL(__imp__sub_83D1C8A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1C8A8"))) PPC_WEAK_FUNC(sub_83D1C8A8);
PPC_FUNC_IMPL(__imp__sub_83D1C8A8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1C8AC"))) PPC_WEAK_FUNC(sub_83D1C8AC);
PPC_FUNC_IMPL(__imp__sub_83D1C8AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1C8B0"))) PPC_WEAK_FUNC(sub_83D1C8B0);
PPC_FUNC_IMPL(__imp__sub_83D1C8B0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1C8B4"))) PPC_WEAK_FUNC(sub_83D1C8B4);
PPC_FUNC_IMPL(__imp__sub_83D1C8B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1C8B8"))) PPC_WEAK_FUNC(sub_83D1C8B8);
PPC_FUNC_IMPL(__imp__sub_83D1C8B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31759
	ctx.r11.s64 = -2081357824;
	// addi r3,r11,-26088
	ctx.r3.s64 = ctx.r11.s64 + -26088;
	// b 0x83523150
	sub_83523150(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83D1C8C4"))) PPC_WEAK_FUNC(sub_83D1C8C4);
PPC_FUNC_IMPL(__imp__sub_83D1C8C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1C8C8"))) PPC_WEAK_FUNC(sub_83D1C8C8);
PPC_FUNC_IMPL(__imp__sub_83D1C8C8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1C8CC"))) PPC_WEAK_FUNC(sub_83D1C8CC);
PPC_FUNC_IMPL(__imp__sub_83D1C8CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1C8D0"))) PPC_WEAK_FUNC(sub_83D1C8D0);
PPC_FUNC_IMPL(__imp__sub_83D1C8D0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1C8D4"))) PPC_WEAK_FUNC(sub_83D1C8D4);
PPC_FUNC_IMPL(__imp__sub_83D1C8D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1C8D8"))) PPC_WEAK_FUNC(sub_83D1C8D8);
PPC_FUNC_IMPL(__imp__sub_83D1C8D8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1C8DC"))) PPC_WEAK_FUNC(sub_83D1C8DC);
PPC_FUNC_IMPL(__imp__sub_83D1C8DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1C8E0"))) PPC_WEAK_FUNC(sub_83D1C8E0);
PPC_FUNC_IMPL(__imp__sub_83D1C8E0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1C8E4"))) PPC_WEAK_FUNC(sub_83D1C8E4);
PPC_FUNC_IMPL(__imp__sub_83D1C8E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1C8E8"))) PPC_WEAK_FUNC(sub_83D1C8E8);
PPC_FUNC_IMPL(__imp__sub_83D1C8E8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1C8EC"))) PPC_WEAK_FUNC(sub_83D1C8EC);
PPC_FUNC_IMPL(__imp__sub_83D1C8EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1C8F0"))) PPC_WEAK_FUNC(sub_83D1C8F0);
PPC_FUNC_IMPL(__imp__sub_83D1C8F0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1C8F4"))) PPC_WEAK_FUNC(sub_83D1C8F4);
PPC_FUNC_IMPL(__imp__sub_83D1C8F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1C8F8"))) PPC_WEAK_FUNC(sub_83D1C8F8);
PPC_FUNC_IMPL(__imp__sub_83D1C8F8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1C8FC"))) PPC_WEAK_FUNC(sub_83D1C8FC);
PPC_FUNC_IMPL(__imp__sub_83D1C8FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1C900"))) PPC_WEAK_FUNC(sub_83D1C900);
PPC_FUNC_IMPL(__imp__sub_83D1C900) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1C904"))) PPC_WEAK_FUNC(sub_83D1C904);
PPC_FUNC_IMPL(__imp__sub_83D1C904) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1C908"))) PPC_WEAK_FUNC(sub_83D1C908);
PPC_FUNC_IMPL(__imp__sub_83D1C908) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1C90C"))) PPC_WEAK_FUNC(sub_83D1C90C);
PPC_FUNC_IMPL(__imp__sub_83D1C90C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1C910"))) PPC_WEAK_FUNC(sub_83D1C910);
PPC_FUNC_IMPL(__imp__sub_83D1C910) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1C914"))) PPC_WEAK_FUNC(sub_83D1C914);
PPC_FUNC_IMPL(__imp__sub_83D1C914) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1C918"))) PPC_WEAK_FUNC(sub_83D1C918);
PPC_FUNC_IMPL(__imp__sub_83D1C918) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1C91C"))) PPC_WEAK_FUNC(sub_83D1C91C);
PPC_FUNC_IMPL(__imp__sub_83D1C91C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1C920"))) PPC_WEAK_FUNC(sub_83D1C920);
PPC_FUNC_IMPL(__imp__sub_83D1C920) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1C924"))) PPC_WEAK_FUNC(sub_83D1C924);
PPC_FUNC_IMPL(__imp__sub_83D1C924) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1C928"))) PPC_WEAK_FUNC(sub_83D1C928);
PPC_FUNC_IMPL(__imp__sub_83D1C928) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1C92C"))) PPC_WEAK_FUNC(sub_83D1C92C);
PPC_FUNC_IMPL(__imp__sub_83D1C92C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1C930"))) PPC_WEAK_FUNC(sub_83D1C930);
PPC_FUNC_IMPL(__imp__sub_83D1C930) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1C934"))) PPC_WEAK_FUNC(sub_83D1C934);
PPC_FUNC_IMPL(__imp__sub_83D1C934) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1C938"))) PPC_WEAK_FUNC(sub_83D1C938);
PPC_FUNC_IMPL(__imp__sub_83D1C938) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1C93C"))) PPC_WEAK_FUNC(sub_83D1C93C);
PPC_FUNC_IMPL(__imp__sub_83D1C93C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1C940"))) PPC_WEAK_FUNC(sub_83D1C940);
PPC_FUNC_IMPL(__imp__sub_83D1C940) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31759
	ctx.r11.s64 = -2081357824;
	// addi r3,r11,-25720
	ctx.r3.s64 = ctx.r11.s64 + -25720;
	// b 0x83523150
	sub_83523150(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83D1C94C"))) PPC_WEAK_FUNC(sub_83D1C94C);
PPC_FUNC_IMPL(__imp__sub_83D1C94C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1C950"))) PPC_WEAK_FUNC(sub_83D1C950);
PPC_FUNC_IMPL(__imp__sub_83D1C950) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1C954"))) PPC_WEAK_FUNC(sub_83D1C954);
PPC_FUNC_IMPL(__imp__sub_83D1C954) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1C958"))) PPC_WEAK_FUNC(sub_83D1C958);
PPC_FUNC_IMPL(__imp__sub_83D1C958) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1C95C"))) PPC_WEAK_FUNC(sub_83D1C95C);
PPC_FUNC_IMPL(__imp__sub_83D1C95C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1C960"))) PPC_WEAK_FUNC(sub_83D1C960);
PPC_FUNC_IMPL(__imp__sub_83D1C960) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1C964"))) PPC_WEAK_FUNC(sub_83D1C964);
PPC_FUNC_IMPL(__imp__sub_83D1C964) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1C968"))) PPC_WEAK_FUNC(sub_83D1C968);
PPC_FUNC_IMPL(__imp__sub_83D1C968) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1C96C"))) PPC_WEAK_FUNC(sub_83D1C96C);
PPC_FUNC_IMPL(__imp__sub_83D1C96C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1C970"))) PPC_WEAK_FUNC(sub_83D1C970);
PPC_FUNC_IMPL(__imp__sub_83D1C970) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1C974"))) PPC_WEAK_FUNC(sub_83D1C974);
PPC_FUNC_IMPL(__imp__sub_83D1C974) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1C978"))) PPC_WEAK_FUNC(sub_83D1C978);
PPC_FUNC_IMPL(__imp__sub_83D1C978) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1C97C"))) PPC_WEAK_FUNC(sub_83D1C97C);
PPC_FUNC_IMPL(__imp__sub_83D1C97C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1C980"))) PPC_WEAK_FUNC(sub_83D1C980);
PPC_FUNC_IMPL(__imp__sub_83D1C980) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1C984"))) PPC_WEAK_FUNC(sub_83D1C984);
PPC_FUNC_IMPL(__imp__sub_83D1C984) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1C988"))) PPC_WEAK_FUNC(sub_83D1C988);
PPC_FUNC_IMPL(__imp__sub_83D1C988) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1C98C"))) PPC_WEAK_FUNC(sub_83D1C98C);
PPC_FUNC_IMPL(__imp__sub_83D1C98C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1C990"))) PPC_WEAK_FUNC(sub_83D1C990);
PPC_FUNC_IMPL(__imp__sub_83D1C990) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1C994"))) PPC_WEAK_FUNC(sub_83D1C994);
PPC_FUNC_IMPL(__imp__sub_83D1C994) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1C998"))) PPC_WEAK_FUNC(sub_83D1C998);
PPC_FUNC_IMPL(__imp__sub_83D1C998) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1C99C"))) PPC_WEAK_FUNC(sub_83D1C99C);
PPC_FUNC_IMPL(__imp__sub_83D1C99C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1C9A0"))) PPC_WEAK_FUNC(sub_83D1C9A0);
PPC_FUNC_IMPL(__imp__sub_83D1C9A0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1C9A4"))) PPC_WEAK_FUNC(sub_83D1C9A4);
PPC_FUNC_IMPL(__imp__sub_83D1C9A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1C9A8"))) PPC_WEAK_FUNC(sub_83D1C9A8);
PPC_FUNC_IMPL(__imp__sub_83D1C9A8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1C9AC"))) PPC_WEAK_FUNC(sub_83D1C9AC);
PPC_FUNC_IMPL(__imp__sub_83D1C9AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1C9B0"))) PPC_WEAK_FUNC(sub_83D1C9B0);
PPC_FUNC_IMPL(__imp__sub_83D1C9B0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1C9B4"))) PPC_WEAK_FUNC(sub_83D1C9B4);
PPC_FUNC_IMPL(__imp__sub_83D1C9B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1C9B8"))) PPC_WEAK_FUNC(sub_83D1C9B8);
PPC_FUNC_IMPL(__imp__sub_83D1C9B8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1C9BC"))) PPC_WEAK_FUNC(sub_83D1C9BC);
PPC_FUNC_IMPL(__imp__sub_83D1C9BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1C9C0"))) PPC_WEAK_FUNC(sub_83D1C9C0);
PPC_FUNC_IMPL(__imp__sub_83D1C9C0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1C9C4"))) PPC_WEAK_FUNC(sub_83D1C9C4);
PPC_FUNC_IMPL(__imp__sub_83D1C9C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1C9C8"))) PPC_WEAK_FUNC(sub_83D1C9C8);
PPC_FUNC_IMPL(__imp__sub_83D1C9C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31759
	ctx.r11.s64 = -2081357824;
	// addi r3,r11,-25352
	ctx.r3.s64 = ctx.r11.s64 + -25352;
	// b 0x83523150
	sub_83523150(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83D1C9D4"))) PPC_WEAK_FUNC(sub_83D1C9D4);
PPC_FUNC_IMPL(__imp__sub_83D1C9D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1C9D8"))) PPC_WEAK_FUNC(sub_83D1C9D8);
PPC_FUNC_IMPL(__imp__sub_83D1C9D8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1C9DC"))) PPC_WEAK_FUNC(sub_83D1C9DC);
PPC_FUNC_IMPL(__imp__sub_83D1C9DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1C9E0"))) PPC_WEAK_FUNC(sub_83D1C9E0);
PPC_FUNC_IMPL(__imp__sub_83D1C9E0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1C9E4"))) PPC_WEAK_FUNC(sub_83D1C9E4);
PPC_FUNC_IMPL(__imp__sub_83D1C9E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1C9E8"))) PPC_WEAK_FUNC(sub_83D1C9E8);
PPC_FUNC_IMPL(__imp__sub_83D1C9E8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1C9EC"))) PPC_WEAK_FUNC(sub_83D1C9EC);
PPC_FUNC_IMPL(__imp__sub_83D1C9EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1C9F0"))) PPC_WEAK_FUNC(sub_83D1C9F0);
PPC_FUNC_IMPL(__imp__sub_83D1C9F0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1C9F4"))) PPC_WEAK_FUNC(sub_83D1C9F4);
PPC_FUNC_IMPL(__imp__sub_83D1C9F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1C9F8"))) PPC_WEAK_FUNC(sub_83D1C9F8);
PPC_FUNC_IMPL(__imp__sub_83D1C9F8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1C9FC"))) PPC_WEAK_FUNC(sub_83D1C9FC);
PPC_FUNC_IMPL(__imp__sub_83D1C9FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1CA00"))) PPC_WEAK_FUNC(sub_83D1CA00);
PPC_FUNC_IMPL(__imp__sub_83D1CA00) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1CA04"))) PPC_WEAK_FUNC(sub_83D1CA04);
PPC_FUNC_IMPL(__imp__sub_83D1CA04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1CA08"))) PPC_WEAK_FUNC(sub_83D1CA08);
PPC_FUNC_IMPL(__imp__sub_83D1CA08) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1CA0C"))) PPC_WEAK_FUNC(sub_83D1CA0C);
PPC_FUNC_IMPL(__imp__sub_83D1CA0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1CA10"))) PPC_WEAK_FUNC(sub_83D1CA10);
PPC_FUNC_IMPL(__imp__sub_83D1CA10) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1CA14"))) PPC_WEAK_FUNC(sub_83D1CA14);
PPC_FUNC_IMPL(__imp__sub_83D1CA14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1CA18"))) PPC_WEAK_FUNC(sub_83D1CA18);
PPC_FUNC_IMPL(__imp__sub_83D1CA18) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1CA1C"))) PPC_WEAK_FUNC(sub_83D1CA1C);
PPC_FUNC_IMPL(__imp__sub_83D1CA1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1CA20"))) PPC_WEAK_FUNC(sub_83D1CA20);
PPC_FUNC_IMPL(__imp__sub_83D1CA20) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1CA24"))) PPC_WEAK_FUNC(sub_83D1CA24);
PPC_FUNC_IMPL(__imp__sub_83D1CA24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1CA28"))) PPC_WEAK_FUNC(sub_83D1CA28);
PPC_FUNC_IMPL(__imp__sub_83D1CA28) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1CA2C"))) PPC_WEAK_FUNC(sub_83D1CA2C);
PPC_FUNC_IMPL(__imp__sub_83D1CA2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1CA30"))) PPC_WEAK_FUNC(sub_83D1CA30);
PPC_FUNC_IMPL(__imp__sub_83D1CA30) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1CA34"))) PPC_WEAK_FUNC(sub_83D1CA34);
PPC_FUNC_IMPL(__imp__sub_83D1CA34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1CA38"))) PPC_WEAK_FUNC(sub_83D1CA38);
PPC_FUNC_IMPL(__imp__sub_83D1CA38) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1CA3C"))) PPC_WEAK_FUNC(sub_83D1CA3C);
PPC_FUNC_IMPL(__imp__sub_83D1CA3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1CA40"))) PPC_WEAK_FUNC(sub_83D1CA40);
PPC_FUNC_IMPL(__imp__sub_83D1CA40) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1CA44"))) PPC_WEAK_FUNC(sub_83D1CA44);
PPC_FUNC_IMPL(__imp__sub_83D1CA44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1CA48"))) PPC_WEAK_FUNC(sub_83D1CA48);
PPC_FUNC_IMPL(__imp__sub_83D1CA48) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1CA4C"))) PPC_WEAK_FUNC(sub_83D1CA4C);
PPC_FUNC_IMPL(__imp__sub_83D1CA4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1CA50"))) PPC_WEAK_FUNC(sub_83D1CA50);
PPC_FUNC_IMPL(__imp__sub_83D1CA50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31759
	ctx.r11.s64 = -2081357824;
	// addi r3,r11,-24984
	ctx.r3.s64 = ctx.r11.s64 + -24984;
	// b 0x83523150
	sub_83523150(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83D1CA5C"))) PPC_WEAK_FUNC(sub_83D1CA5C);
PPC_FUNC_IMPL(__imp__sub_83D1CA5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1CA60"))) PPC_WEAK_FUNC(sub_83D1CA60);
PPC_FUNC_IMPL(__imp__sub_83D1CA60) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1CA64"))) PPC_WEAK_FUNC(sub_83D1CA64);
PPC_FUNC_IMPL(__imp__sub_83D1CA64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1CA68"))) PPC_WEAK_FUNC(sub_83D1CA68);
PPC_FUNC_IMPL(__imp__sub_83D1CA68) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1CA6C"))) PPC_WEAK_FUNC(sub_83D1CA6C);
PPC_FUNC_IMPL(__imp__sub_83D1CA6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1CA70"))) PPC_WEAK_FUNC(sub_83D1CA70);
PPC_FUNC_IMPL(__imp__sub_83D1CA70) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1CA74"))) PPC_WEAK_FUNC(sub_83D1CA74);
PPC_FUNC_IMPL(__imp__sub_83D1CA74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1CA78"))) PPC_WEAK_FUNC(sub_83D1CA78);
PPC_FUNC_IMPL(__imp__sub_83D1CA78) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1CA7C"))) PPC_WEAK_FUNC(sub_83D1CA7C);
PPC_FUNC_IMPL(__imp__sub_83D1CA7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1CA80"))) PPC_WEAK_FUNC(sub_83D1CA80);
PPC_FUNC_IMPL(__imp__sub_83D1CA80) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1CA84"))) PPC_WEAK_FUNC(sub_83D1CA84);
PPC_FUNC_IMPL(__imp__sub_83D1CA84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1CA88"))) PPC_WEAK_FUNC(sub_83D1CA88);
PPC_FUNC_IMPL(__imp__sub_83D1CA88) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1CA8C"))) PPC_WEAK_FUNC(sub_83D1CA8C);
PPC_FUNC_IMPL(__imp__sub_83D1CA8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1CA90"))) PPC_WEAK_FUNC(sub_83D1CA90);
PPC_FUNC_IMPL(__imp__sub_83D1CA90) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1CA94"))) PPC_WEAK_FUNC(sub_83D1CA94);
PPC_FUNC_IMPL(__imp__sub_83D1CA94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1CA98"))) PPC_WEAK_FUNC(sub_83D1CA98);
PPC_FUNC_IMPL(__imp__sub_83D1CA98) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1CA9C"))) PPC_WEAK_FUNC(sub_83D1CA9C);
PPC_FUNC_IMPL(__imp__sub_83D1CA9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1CAA0"))) PPC_WEAK_FUNC(sub_83D1CAA0);
PPC_FUNC_IMPL(__imp__sub_83D1CAA0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1CAA4"))) PPC_WEAK_FUNC(sub_83D1CAA4);
PPC_FUNC_IMPL(__imp__sub_83D1CAA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1CAA8"))) PPC_WEAK_FUNC(sub_83D1CAA8);
PPC_FUNC_IMPL(__imp__sub_83D1CAA8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1CAAC"))) PPC_WEAK_FUNC(sub_83D1CAAC);
PPC_FUNC_IMPL(__imp__sub_83D1CAAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

