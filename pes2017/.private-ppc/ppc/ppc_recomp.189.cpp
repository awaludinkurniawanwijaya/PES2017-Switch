#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_82D89300"))) PPC_WEAK_FUNC(sub_82D89300);
PPC_FUNC_IMPL(__imp__sub_82D89300) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82d89310
	if (cr6.lt) goto loc_82D89310;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_82D89310:
	// b 0x82e520e0
	sub_82E520E0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D89314"))) PPC_WEAK_FUNC(sub_82D89314);
PPC_FUNC_IMPL(__imp__sub_82D89314) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D89318"))) PPC_WEAK_FUNC(sub_82D89318);
PPC_FUNC_IMPL(__imp__sub_82D89318) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82d89328
	if (cr6.lt) goto loc_82D89328;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_82D89328:
	// b 0x82e522d8
	sub_82E522D8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D8932C"))) PPC_WEAK_FUNC(sub_82D8932C);
PPC_FUNC_IMPL(__imp__sub_82D8932C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D89330"))) PPC_WEAK_FUNC(sub_82D89330);
PPC_FUNC_IMPL(__imp__sub_82D89330) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82d89340
	if (cr6.lt) goto loc_82D89340;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_82D89340:
	// b 0x82e52848
	sub_82E52848(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D89344"))) PPC_WEAK_FUNC(sub_82D89344);
PPC_FUNC_IMPL(__imp__sub_82D89344) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D89348"))) PPC_WEAK_FUNC(sub_82D89348);
PPC_FUNC_IMPL(__imp__sub_82D89348) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82d89358
	if (cr6.lt) goto loc_82D89358;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_82D89358:
	// b 0x82e52bd0
	sub_82E52BD0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D8935C"))) PPC_WEAK_FUNC(sub_82D8935C);
PPC_FUNC_IMPL(__imp__sub_82D8935C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D89360"))) PPC_WEAK_FUNC(sub_82D89360);
PPC_FUNC_IMPL(__imp__sub_82D89360) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82d89370
	if (cr6.lt) goto loc_82D89370;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_82D89370:
	// b 0x82e52df0
	sub_82E52DF0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D89374"))) PPC_WEAK_FUNC(sub_82D89374);
PPC_FUNC_IMPL(__imp__sub_82D89374) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D89378"))) PPC_WEAK_FUNC(sub_82D89378);
PPC_FUNC_IMPL(__imp__sub_82D89378) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82d89388
	if (cr6.lt) goto loc_82D89388;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_82D89388:
	// b 0x82e53050
	sub_82E53050(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D8938C"))) PPC_WEAK_FUNC(sub_82D8938C);
PPC_FUNC_IMPL(__imp__sub_82D8938C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D89390"))) PPC_WEAK_FUNC(sub_82D89390);
PPC_FUNC_IMPL(__imp__sub_82D89390) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82d893a0
	if (cr6.lt) goto loc_82D893A0;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_82D893A0:
	// b 0x82e531b8
	sub_82E531B8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D893A4"))) PPC_WEAK_FUNC(sub_82D893A4);
PPC_FUNC_IMPL(__imp__sub_82D893A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D893A8"))) PPC_WEAK_FUNC(sub_82D893A8);
PPC_FUNC_IMPL(__imp__sub_82D893A8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82d893b8
	if (cr6.lt) goto loc_82D893B8;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_82D893B8:
	// b 0x82e533e0
	sub_82E533E0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D893BC"))) PPC_WEAK_FUNC(sub_82D893BC);
PPC_FUNC_IMPL(__imp__sub_82D893BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D893C0"))) PPC_WEAK_FUNC(sub_82D893C0);
PPC_FUNC_IMPL(__imp__sub_82D893C0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82d893d0
	if (cr6.lt) goto loc_82D893D0;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_82D893D0:
	// b 0x82e53790
	sub_82E53790(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D893D4"))) PPC_WEAK_FUNC(sub_82D893D4);
PPC_FUNC_IMPL(__imp__sub_82D893D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D893D8"))) PPC_WEAK_FUNC(sub_82D893D8);
PPC_FUNC_IMPL(__imp__sub_82D893D8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82d893e8
	if (cr6.lt) goto loc_82D893E8;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_82D893E8:
	// b 0x82e538f8
	sub_82E538F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D893EC"))) PPC_WEAK_FUNC(sub_82D893EC);
PPC_FUNC_IMPL(__imp__sub_82D893EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D893F0"))) PPC_WEAK_FUNC(sub_82D893F0);
PPC_FUNC_IMPL(__imp__sub_82D893F0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82d89400
	if (cr6.lt) goto loc_82D89400;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_82D89400:
	// b 0x82e53fb8
	sub_82E53FB8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D89404"))) PPC_WEAK_FUNC(sub_82D89404);
PPC_FUNC_IMPL(__imp__sub_82D89404) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D89408"))) PPC_WEAK_FUNC(sub_82D89408);
PPC_FUNC_IMPL(__imp__sub_82D89408) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82d89418
	if (cr6.lt) goto loc_82D89418;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_82D89418:
	// b 0x82dfa7e8
	sub_82DFA7E8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D8941C"))) PPC_WEAK_FUNC(sub_82D8941C);
PPC_FUNC_IMPL(__imp__sub_82D8941C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D89420"))) PPC_WEAK_FUNC(sub_82D89420);
PPC_FUNC_IMPL(__imp__sub_82D89420) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82d89430
	if (cr6.lt) goto loc_82D89430;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_82D89430:
	// b 0x82e54660
	sub_82E54660(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D89434"))) PPC_WEAK_FUNC(sub_82D89434);
PPC_FUNC_IMPL(__imp__sub_82D89434) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D89438"))) PPC_WEAK_FUNC(sub_82D89438);
PPC_FUNC_IMPL(__imp__sub_82D89438) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82d89448
	if (cr6.lt) goto loc_82D89448;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_82D89448:
	// b 0x82e54888
	sub_82E54888(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D8944C"))) PPC_WEAK_FUNC(sub_82D8944C);
PPC_FUNC_IMPL(__imp__sub_82D8944C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D89450"))) PPC_WEAK_FUNC(sub_82D89450);
PPC_FUNC_IMPL(__imp__sub_82D89450) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82d89460
	if (cr6.lt) goto loc_82D89460;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_82D89460:
	// b 0x82e54aa0
	sub_82E54AA0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D89464"))) PPC_WEAK_FUNC(sub_82D89464);
PPC_FUNC_IMPL(__imp__sub_82D89464) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D89468"))) PPC_WEAK_FUNC(sub_82D89468);
PPC_FUNC_IMPL(__imp__sub_82D89468) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82d89478
	if (cr6.lt) goto loc_82D89478;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_82D89478:
	// b 0x82e54c70
	sub_82E54C70(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D8947C"))) PPC_WEAK_FUNC(sub_82D8947C);
PPC_FUNC_IMPL(__imp__sub_82D8947C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D89480"))) PPC_WEAK_FUNC(sub_82D89480);
PPC_FUNC_IMPL(__imp__sub_82D89480) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82d89490
	if (cr6.lt) goto loc_82D89490;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_82D89490:
	// b 0x82e552e0
	sub_82E552E0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D89494"))) PPC_WEAK_FUNC(sub_82D89494);
PPC_FUNC_IMPL(__imp__sub_82D89494) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D89498"))) PPC_WEAK_FUNC(sub_82D89498);
PPC_FUNC_IMPL(__imp__sub_82D89498) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82d894a8
	if (cr6.lt) goto loc_82D894A8;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_82D894A8:
	// b 0x82e55640
	sub_82E55640(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D894AC"))) PPC_WEAK_FUNC(sub_82D894AC);
PPC_FUNC_IMPL(__imp__sub_82D894AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D894B0"))) PPC_WEAK_FUNC(sub_82D894B0);
PPC_FUNC_IMPL(__imp__sub_82D894B0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82d894c0
	if (cr6.lt) goto loc_82D894C0;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_82D894C0:
	// b 0x82e55d48
	sub_82E55D48(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D894C4"))) PPC_WEAK_FUNC(sub_82D894C4);
PPC_FUNC_IMPL(__imp__sub_82D894C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D894C8"))) PPC_WEAK_FUNC(sub_82D894C8);
PPC_FUNC_IMPL(__imp__sub_82D894C8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82d894d8
	if (cr6.lt) goto loc_82D894D8;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_82D894D8:
	// b 0x82e565a8
	sub_82E565A8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D894DC"))) PPC_WEAK_FUNC(sub_82D894DC);
PPC_FUNC_IMPL(__imp__sub_82D894DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D894E0"))) PPC_WEAK_FUNC(sub_82D894E0);
PPC_FUNC_IMPL(__imp__sub_82D894E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82D894E8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82d89504
	if (!cr6.eq) goto loc_82D89504;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_82D89504:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r31,r11,22128
	ctx.r31.s64 = ctx.r11.s64 + 22128;
	// li r28,0
	ctx.r28.s64 = 0;
loc_82D89514:
	// lwz r6,8(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
loc_82D8951C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82d8951c
	if (!cr6.eq) goto loc_82D8951C;
	// subf r11,r6,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r6.s64;
	// lwz r5,16(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// rotlwi r7,r11,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x827a8810
	ctx.lr = 0x82D89548;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82d8956c
	if (!cr6.eq) goto loc_82D8956C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D89560;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82d89584
	if (!cr6.eq) goto loc_82D89584;
loc_82D8956C:
	// addi r28,r28,12
	ctx.r28.s64 = ctx.r28.s64 + 12;
	// addi r31,r31,12
	ctx.r31.s64 = ctx.r31.s64 + 12;
	// cmplwi cr6,r28,3924
	cr6.compare<uint32_t>(ctx.r28.u32, 3924, xer);
	// blt cr6,0x82d89514
	if (cr6.lt) goto loc_82D89514;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x82d89590
	if (cr6.eq) goto loc_82D89590;
loc_82D89584:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x83103100
	ctx.lr = 0x82D89590;
	sub_83103100(ctx, base);
loc_82D89590:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D8959C"))) PPC_WEAK_FUNC(sub_82D8959C);
PPC_FUNC_IMPL(__imp__sub_82D8959C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D895A0"))) PPC_WEAK_FUNC(sub_82D895A0);
PPC_FUNC_IMPL(__imp__sub_82D895A0) {
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
	// bl 0x82e8bae0
	ctx.lr = 0x82D895B4;
	sub_82E8BAE0(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r5,9
	ctx.r5.s64 = 9;
	// addi r4,r11,26252
	ctx.r4.s64 = ctx.r11.s64 + 26252;
	// addi r3,r3,344
	ctx.r3.s64 = ctx.r3.s64 + 344;
	// bl 0x824208c8
	ctx.lr = 0x82D895CC;
	sub_824208C8(ctx, base);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r10,26244
	ctx.r4.s64 = ctx.r10.s64 + 26244;
	// addi r3,r31,316
	ctx.r3.s64 = ctx.r31.s64 + 316;
	// bl 0x824208c8
	ctx.lr = 0x82D895E0;
	sub_824208C8(ctx, base);
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

__attribute__((alias("__imp__sub_82D895F8"))) PPC_WEAK_FUNC(sub_82D895F8);
PPC_FUNC_IMPL(__imp__sub_82D895F8) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82e8bae8
	ctx.lr = 0x82D89610;
	sub_82E8BAE8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82e6e978
	ctx.lr = 0x82D89618;
	sub_82E6E978(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x82d89688
	if (cr6.eq) goto loc_82D89688;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d89688
	if (cr6.eq) goto loc_82D89688;
	// lwz r10,368(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 368);
	// addi r11,r31,348
	ctx.r11.s64 = ctx.r31.s64 + 348;
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82d89640
	if (cr6.lt) goto loc_82D89640;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82D89640:
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x837b0c10
	ctx.lr = 0x82D8964C;
	sub_837B0C10(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,15
	ctx.r10.s64 = 15;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// li r6,-1
	ctx.r6.s64 = -1;
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8259cb28
	ctx.lr = 0x82D89674;
	sub_8259CB28(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,24(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// bl 0x82e8c418
	ctx.lr = 0x82D89680;
	sub_82E8C418(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8387e8e0
	ctx.lr = 0x82D89688;
	sub_8387E8E0(ctx, base);
loc_82D89688:
	// li r3,1
	ctx.r3.s64 = 1;
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

__attribute__((alias("__imp__sub_82D896A4"))) PPC_WEAK_FUNC(sub_82D896A4);
PPC_FUNC_IMPL(__imp__sub_82D896A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D896A8"))) PPC_WEAK_FUNC(sub_82D896A8);
PPC_FUNC_IMPL(__imp__sub_82D896A8) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82e6e978
	ctx.lr = 0x82D896BC;
	sub_82E6E978(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d896e4
	if (cr6.eq) goto loc_82D896E4;
	// lis r11,-32203
	ctx.r11.s64 = -2110455808;
	// lwz r31,24(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-22544
	ctx.r4.s64 = ctx.r11.s64 + -22544;
	// bl 0x837b0c10
	ctx.lr = 0x82D896D8;
	sub_837B0C10(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e8c418
	ctx.lr = 0x82D896E4;
	sub_82E8C418(ctx, base);
loc_82D896E4:
	// li r3,1
	ctx.r3.s64 = 1;
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

__attribute__((alias("__imp__sub_82D896FC"))) PPC_WEAK_FUNC(sub_82D896FC);
PPC_FUNC_IMPL(__imp__sub_82D896FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D89700"))) PPC_WEAK_FUNC(sub_82D89700);
PPC_FUNC_IMPL(__imp__sub_82D89700) {
	PPC_FUNC_PROLOGUE();
	// li r3,2
	ctx.r3.s64 = 2;
	// b 0x82d74148
	sub_82D74148(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D89708"))) PPC_WEAK_FUNC(sub_82D89708);
PPC_FUNC_IMPL(__imp__sub_82D89708) {
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
	// bl 0x82d86078
	ctx.lr = 0x82D89718;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d8972c
	if (cr6.eq) goto loc_82D8972C;
	// lwz r11,64(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,652(r11)
	PPC_STORE_U8(ctx.r11.u32 + 652, ctx.r10.u8);
loc_82D8972C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D8973C"))) PPC_WEAK_FUNC(sub_82D8973C);
PPC_FUNC_IMPL(__imp__sub_82D8973C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D89740"))) PPC_WEAK_FUNC(sub_82D89740);
PPC_FUNC_IMPL(__imp__sub_82D89740) {
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
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x82d74148
	ctx.lr = 0x82D8975C;
	sub_82D74148(ctx, base);
	// bl 0x82d86078
	ctx.lr = 0x82D89760;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d89798
	if (cr6.eq) goto loc_82D89798;
	// lwz r31,64(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82dc0a30
	ctx.lr = 0x82D89774;
	sub_82DC0A30(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// stb r30,652(r31)
	PPC_STORE_U8(ctx.r31.u32 + 652, ctx.r30.u8);
	// bl 0x82e8c8a8
	ctx.lr = 0x82D89780;
	sub_82E8C8A8(ctx, base);
	// li r5,84
	ctx.r5.s64 = 84;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,541
	ctx.r3.s64 = ctx.r31.s64 + 541;
	// bl 0x831cdcf0
	ctx.lr = 0x82D89790;
	sub_831CDCF0(ctx, base);
	// stw r30,628(r31)
	PPC_STORE_U32(ctx.r31.u32 + 628, ctx.r30.u32);
	// stb r30,651(r31)
	PPC_STORE_U8(ctx.r31.u32 + 651, ctx.r30.u8);
loc_82D89798:
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

__attribute__((alias("__imp__sub_82D897B0"))) PPC_WEAK_FUNC(sub_82D897B0);
PPC_FUNC_IMPL(__imp__sub_82D897B0) {
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
	// bl 0x82d86078
	ctx.lr = 0x82D897C0;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82d897d8
	if (!cr6.eq) goto loc_82D897D8;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82D897D8:
	// lwz r11,64(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// lbz r3,652(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 652);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D897F0"))) PPC_WEAK_FUNC(sub_82D897F0);
PPC_FUNC_IMPL(__imp__sub_82D897F0) {
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
	// bl 0x82d86078
	ctx.lr = 0x82D89800;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82d89818
	if (!cr6.eq) goto loc_82D89818;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82D89818:
	// lwz r11,64(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// lbz r3,651(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 651);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D89830"))) PPC_WEAK_FUNC(sub_82D89830);
PPC_FUNC_IMPL(__imp__sub_82D89830) {
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
	// bl 0x82d86078
	ctx.lr = 0x82D89840;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d89854
	if (cr6.eq) goto loc_82D89854;
	// lwz r11,64(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,655(r11)
	PPC_STORE_U8(ctx.r11.u32 + 655, ctx.r10.u8);
loc_82D89854:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D89864"))) PPC_WEAK_FUNC(sub_82D89864);
PPC_FUNC_IMPL(__imp__sub_82D89864) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D89868"))) PPC_WEAK_FUNC(sub_82D89868);
PPC_FUNC_IMPL(__imp__sub_82D89868) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82d74148
	sub_82D74148(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D89870"))) PPC_WEAK_FUNC(sub_82D89870);
PPC_FUNC_IMPL(__imp__sub_82D89870) {
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
	// bl 0x82d86078
	ctx.lr = 0x82D89880;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82d89890
	if (!cr6.eq) goto loc_82D89890;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82d89898
	goto loc_82D89898;
loc_82D89890:
	// lwz r11,64(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// lbz r11,652(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 652);
loc_82D89898:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82d898b8
	if (!cr6.eq) goto loc_82D898B8;
loc_82D898A4:
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82D898B8:
	// bl 0x82d86078
	ctx.lr = 0x82D898BC;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d898a4
	if (cr6.eq) goto loc_82D898A4;
	// lwz r11,64(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// lwz r3,628(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 628);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D898DC"))) PPC_WEAK_FUNC(sub_82D898DC);
PPC_FUNC_IMPL(__imp__sub_82D898DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D898E0"))) PPC_WEAK_FUNC(sub_82D898E0);
PPC_FUNC_IMPL(__imp__sub_82D898E0) {
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
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d899a8
	if (cr6.eq) goto loc_82D899A8;
	// bl 0x82d86078
	ctx.lr = 0x82D89900;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d89914
	if (cr6.eq) goto loc_82D89914;
	// lwz r11,64(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,655(r11)
	PPC_STORE_U8(ctx.r11.u32 + 655, ctx.r10.u8);
loc_82D89914:
	// bl 0x82e8c8d8
	ctx.lr = 0x82D89918;
	sub_82E8C8D8(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x82d89950
	if (!cr6.eq) goto loc_82D89950;
	// bl 0x82e8c880
	ctx.lr = 0x82D89924;
	sub_82E8C880(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x83105d48
	ctx.lr = 0x82D8992C;
	sub_83105D48(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82D89940;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82d89950
	if (!cr6.eq) goto loc_82D89950;
	// bl 0x82e8c8a8
	ctx.lr = 0x82D89950;
	sub_82E8C8A8(ctx, base);
loc_82D89950:
	// bl 0x82d86078
	ctx.lr = 0x82D89954;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82d89964
	if (!cr6.eq) goto loc_82D89964;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82d8996c
	goto loc_82D8996C;
loc_82D89964:
	// lwz r11,64(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// lbz r11,652(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 652);
loc_82D8996C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d89a28
	if (cr6.eq) goto loc_82D89A28;
	// bl 0x82d89870
	ctx.lr = 0x82D8997C;
	sub_82D89870(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x83105d48
	ctx.lr = 0x82D89984;
	sub_83105D48(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82D89998;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82d89a28
	if (!cr6.eq) goto loc_82D89A28;
	// b 0x82d89a24
	goto loc_82D89A24;
loc_82D899A8:
	// bl 0x82d86078
	ctx.lr = 0x82D899AC;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82d899bc
	if (!cr6.eq) goto loc_82D899BC;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82d899c4
	goto loc_82D899C4;
loc_82D899BC:
	// lwz r11,64(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// lbz r11,655(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 655);
loc_82D899C4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d899fc
	if (cr6.eq) goto loc_82D899FC;
	// bl 0x82d86078
	ctx.lr = 0x82D899D4;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d89a28
	if (cr6.eq) goto loc_82D89A28;
	// lwz r11,64(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,655(r11)
	PPC_STORE_U8(ctx.r11.u32 + 655, ctx.r10.u8);
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
loc_82D899FC:
	// bl 0x82d86078
	ctx.lr = 0x82D89A00;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82d89a10
	if (!cr6.eq) goto loc_82D89A10;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82d89a18
	goto loc_82D89A18;
loc_82D89A10:
	// lwz r11,64(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// lbz r11,652(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 652);
loc_82D89A18:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d89a28
	if (cr6.eq) goto loc_82D89A28;
loc_82D89A24:
	// bl 0x82d89740
	ctx.lr = 0x82D89A28;
	sub_82D89740(ctx, base);
loc_82D89A28:
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

__attribute__((alias("__imp__sub_82D89A3C"))) PPC_WEAK_FUNC(sub_82D89A3C);
PPC_FUNC_IMPL(__imp__sub_82D89A3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D89A40"))) PPC_WEAK_FUNC(sub_82D89A40);
PPC_FUNC_IMPL(__imp__sub_82D89A40) {
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
	// bl 0x82d86078
	ctx.lr = 0x82D89A50;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82d89a6c
	if (!cr6.eq) goto loc_82D89A6C;
loc_82D89A58:
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
loc_82D89A6C:
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lbz r10,76(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 76);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82d89a58
	if (cr6.eq) goto loc_82D89A58;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addic r9,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// subfe r3,r9,r10
	temp.u8 = (~ctx.r9.u32 + ctx.r10.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~ctx.r9.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D89A9C"))) PPC_WEAK_FUNC(sub_82D89A9C);
PPC_FUNC_IMPL(__imp__sub_82D89A9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D89AA0"))) PPC_WEAK_FUNC(sub_82D89AA0);
PPC_FUNC_IMPL(__imp__sub_82D89AA0) {
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
	// bl 0x82d86078
	ctx.lr = 0x82D89AB0;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82d89acc
	if (!cr6.eq) goto loc_82D89ACC;
loc_82D89AB8:
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
loc_82D89ACC:
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lbz r10,76(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 76);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82d89ab8
	if (cr6.eq) goto loc_82D89AB8;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// addic r9,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// subfe r3,r9,r10
	temp.u8 = (~ctx.r9.u32 + ctx.r10.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~ctx.r9.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D89AFC"))) PPC_WEAK_FUNC(sub_82D89AFC);
PPC_FUNC_IMPL(__imp__sub_82D89AFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D89B00"))) PPC_WEAK_FUNC(sub_82D89B00);
PPC_FUNC_IMPL(__imp__sub_82D89B00) {
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
	// bl 0x82d86078
	ctx.lr = 0x82D89B10;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82d89b2c
	if (!cr6.eq) goto loc_82D89B2C;
loc_82D89B18:
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
loc_82D89B2C:
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lbz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82d89b18
	if (cr6.eq) goto loc_82D89B18;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addic r9,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// subfe r3,r9,r10
	temp.u8 = (~ctx.r9.u32 + ctx.r10.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~ctx.r9.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D89B5C"))) PPC_WEAK_FUNC(sub_82D89B5C);
PPC_FUNC_IMPL(__imp__sub_82D89B5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D89B60"))) PPC_WEAK_FUNC(sub_82D89B60);
PPC_FUNC_IMPL(__imp__sub_82D89B60) {
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
	// bl 0x82d86078
	ctx.lr = 0x82D89B70;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82d89b8c
	if (!cr6.eq) goto loc_82D89B8C;
loc_82D89B78:
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
loc_82D89B8C:
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lbz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82d89b78
	if (cr6.eq) goto loc_82D89B78;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// addic r9,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// subfe r3,r9,r10
	temp.u8 = (~ctx.r9.u32 + ctx.r10.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~ctx.r9.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D89BBC"))) PPC_WEAK_FUNC(sub_82D89BBC);
PPC_FUNC_IMPL(__imp__sub_82D89BBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D89BC0"))) PPC_WEAK_FUNC(sub_82D89BC0);
PPC_FUNC_IMPL(__imp__sub_82D89BC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82D89BC8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82d89870
	ctx.lr = 0x82D89BD0;
	sub_82D89870(ctx, base);
	// li r11,4
	ctx.r11.s64 = 4;
	// li r29,1
	ctx.r29.s64 = 1;
	// subfc r10,r11,r3
	xer.ca = ctx.r3.u32 >= ctx.r11.u32;
	ctx.r10.s64 = ctx.r3.s64 - ctx.r11.s64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r7,r8,r3
	ctx.r7.u64 = ctx.r8.u64 & ctx.r3.u64;
	// slw r3,r29,r7
	ctx.r3.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r29.u32 << (ctx.r7.u8 & 0x3F));
	// bl 0x8353b200
	ctx.lr = 0x82D89BF0;
	sub_8353B200(ctx, base);
	// bl 0x8310cc00
	ctx.lr = 0x82D89BF4;
	sub_8310CC00(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x83105d48
	ctx.lr = 0x82D89BFC;
	sub_83105D48(ctx, base);
	// lwz r6,0(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r5,24(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 24);
	// mtctr r5
	ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x82D89C10;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r28,r30,120
	ctx.r28.s64 = ctx.r30.s64 + 120;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82596fe8
	ctx.lr = 0x82D89C1C;
	sub_82596FE8(ctx, base);
	// lwz r3,20(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// slw r4,r29,r31
	ctx.r4.u64 = ctx.r31.u8 & 0x20 ? 0 : (ctx.r29.u32 << (ctx.r31.u8 & 0x3F));
	// and r11,r3,r4
	ctx.r11.u64 = ctx.r3.u64 & ctx.r4.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82d89c34
	if (!cr6.eq) goto loc_82D89C34;
	// lwz r31,28(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
loc_82D89C34:
	// stw r31,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r31.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82597088
	ctx.lr = 0x82D89C40;
	sub_82597088(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D89C48"))) PPC_WEAK_FUNC(sub_82D89C48);
PPC_FUNC_IMPL(__imp__sub_82D89C48) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,15
	ctx.r10.s64 = 15;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// stb r11,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r11.u8);
	// beq cr6,0x82d89cac
	if (cr6.eq) goto loc_82D89CAC;
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// beq cr6,0x82d89ca4
	if (cr6.eq) goto loc_82D89CA4;
	// cmpwi cr6,r3,3
	cr6.compare<int32_t>(ctx.r3.s32, 3, xer);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// beq cr6,0x82d89c94
	if (cr6.eq) goto loc_82D89C94;
	// lis r4,200
	ctx.r4.s64 = 13107200;
	// ori r4,r4,232
	ctx.r4.u64 = ctx.r4.u64 | 232;
	// bl 0x82d04220
	ctx.lr = 0x82D89C90;
	sub_82D04220(ctx, base);
	// b 0x82d89cc0
	goto loc_82D89CC0;
loc_82D89C94:
	// lis r4,508
	ctx.r4.s64 = 33292288;
	// ori r4,r4,165
	ctx.r4.u64 = ctx.r4.u64 | 165;
	// bl 0x82d04220
	ctx.lr = 0x82D89CA0;
	sub_82D04220(ctx, base);
	// b 0x82d89cc0
	goto loc_82D89CC0;
loc_82D89CA4:
	// li r5,1
	ctx.r5.s64 = 1;
	// b 0x82d89cb0
	goto loc_82D89CB0;
loc_82D89CAC:
	// li r5,2
	ctx.r5.s64 = 2;
loc_82D89CB0:
	// lis r4,508
	ctx.r4.s64 = 33292288;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// ori r4,r4,166
	ctx.r4.u64 = ctx.r4.u64 | 166;
	// bl 0x82d042a8
	ctx.lr = 0x82D89CC0;
	sub_82D042A8(ctx, base);
loc_82D89CC0:
	// lis r11,-31757
	ctx.r11.s64 = -2081226752;
	// lwz r3,8464(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8464);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d89cd8
	if (cr6.eq) goto loc_82D89CD8;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x82e569f8
	ctx.lr = 0x82D89CD8;
	sub_82E569F8(ctx, base);
loc_82D89CD8:
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82d89cf8
	if (cr6.lt) goto loc_82D89CF8;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82D89CF8;
	sub_825952B8(ctx, base);
loc_82D89CF8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D89D08"))) PPC_WEAK_FUNC(sub_82D89D08);
PPC_FUNC_IMPL(__imp__sub_82D89D08) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82d86078
	ctx.lr = 0x82D89D1C;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82d89d98
	if (!cr6.eq) goto loc_82D89D98;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,15
	ctx.r10.s64 = 15;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// lis r4,200
	ctx.r4.s64 = 13107200;
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stb r11,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r11.u8);
	// ori r4,r4,232
	ctx.r4.u64 = ctx.r4.u64 | 232;
	// bl 0x82d04220
	ctx.lr = 0x82D89D48;
	sub_82D04220(ctx, base);
	// lis r9,-31757
	ctx.r9.s64 = -2081226752;
	// lwz r3,8464(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8464);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d89d60
	if (cr6.eq) goto loc_82D89D60;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x82e569f8
	ctx.lr = 0x82D89D60;
	sub_82E569F8(ctx, base);
loc_82D89D60:
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82d89d80
	if (cr6.lt) goto loc_82D89D80;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82D89D80;
	sub_825952B8(ctx, base);
loc_82D89D80:
	// li r3,0
	ctx.r3.s64 = 0;
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
loc_82D89D98:
	// lwz r31,64(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// bl 0x83105d48
	ctx.lr = 0x82D89DA0;
	sub_83105D48(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d89dc4
	if (cr6.eq) goto loc_82D89DC4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82D89DB8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,2
	cr6.compare<uint32_t>(ctx.r3.u32, 2, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bge cr6,0x82d89dc8
	if (!cr6.lt) goto loc_82D89DC8;
loc_82D89DC4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82D89DC8:
	// stw r11,656(r31)
	PPC_STORE_U32(ctx.r31.u32 + 656, ctx.r11.u32);
	// li r3,1
	ctx.r3.s64 = 1;
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

__attribute__((alias("__imp__sub_82D89DE4"))) PPC_WEAK_FUNC(sub_82D89DE4);
PPC_FUNC_IMPL(__imp__sub_82D89DE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D89DE8"))) PPC_WEAK_FUNC(sub_82D89DE8);
PPC_FUNC_IMPL(__imp__sub_82D89DE8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82d86078
	ctx.lr = 0x82D89DF8;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82d89e70
	if (!cr6.eq) goto loc_82D89E70;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,15
	ctx.r10.s64 = 15;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// lis r4,200
	ctx.r4.s64 = 13107200;
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stb r11,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r11.u8);
	// ori r4,r4,232
	ctx.r4.u64 = ctx.r4.u64 | 232;
	// bl 0x82d04220
	ctx.lr = 0x82D89E24;
	sub_82D04220(ctx, base);
	// lis r9,-31757
	ctx.r9.s64 = -2081226752;
	// lwz r3,8464(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8464);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d89e3c
	if (cr6.eq) goto loc_82D89E3C;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x82e569f8
	ctx.lr = 0x82D89E3C;
	sub_82E569F8(ctx, base);
loc_82D89E3C:
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82d89e5c
	if (cr6.lt) goto loc_82D89E5C;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82D89E5C;
	sub_825952B8(ctx, base);
loc_82D89E5C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82D89E70:
	// lwz r11,64(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// lwz r10,248(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 248);
	// cmpwi cr6,r10,1
	cr6.compare<int32_t>(ctx.r10.s32, 1, xer);
	// bne cr6,0x82d89e94
	if (!cr6.eq) goto loc_82D89E94;
	// bl 0x82d89d08
	ctx.lr = 0x82D89E84;
	sub_82D89D08(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82D89E94:
	// bl 0x82d89d08
	ctx.lr = 0x82D89E98;
	sub_82D89D08(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D89EA8"))) PPC_WEAK_FUNC(sub_82D89EA8);
PPC_FUNC_IMPL(__imp__sub_82D89EA8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad4
	ctx.lr = 0x82D89EB0;
	__savegprlr_23(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// bl 0x830ff290
	ctx.lr = 0x82D89EBC;
	sub_830FF290(ctx, base);
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmplwi cr6,r11,46
	cr6.compare<uint32_t>(ctx.r11.u32, 46, xer);
	// beq cr6,0x82d89f08
	if (cr6.eq) goto loc_82D89F08;
	// bl 0x830ff290
	ctx.lr = 0x82D89ECC;
	sub_830FF290(ctx, base);
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmplwi cr6,r11,47
	cr6.compare<uint32_t>(ctx.r11.u32, 47, xer);
	// beq cr6,0x82d89f08
	if (cr6.eq) goto loc_82D89F08;
	// bl 0x830ff290
	ctx.lr = 0x82D89EDC;
	sub_830FF290(ctx, base);
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmplwi cr6,r11,60
	cr6.compare<uint32_t>(ctx.r11.u32, 60, xer);
	// beq cr6,0x82d89f08
	if (cr6.eq) goto loc_82D89F08;
	// lis r11,-31775
	ctx.r11.s64 = -2082406400;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// addi r10,r11,-14928
	ctx.r10.s64 = ctx.r11.s64 + -14928;
	// lwz r4,40(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	// bl 0x837b0c10
	ctx.lr = 0x82D89EFC;
	sub_837B0C10(ctx, base);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
loc_82D89F08:
	// li r30,0
	ctx.r30.s64 = 0;
	// li r24,15
	ctx.r24.s64 = 15;
	// stw r30,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r30.u32);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// stb r30,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r30.u8);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r24,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r24.u32);
	// addi r4,r11,26315
	ctx.r4.s64 = ctx.r11.s64 + 26315;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x8259cc28
	ctx.lr = 0x82D89F30;
	sub_8259CC28(ctx, base);
	// bl 0x82d86078
	ctx.lr = 0x82D89F34;
	sub_82D86078(ctx, base);
	// lwz r25,64(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r26,r30
	ctx.r26.u64 = ctx.r30.u64;
	// mr r27,r30
	ctx.r27.u64 = ctx.r30.u64;
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
	// lwz r11,248(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 248);
	// li r28,70
	ctx.r28.s64 = 70;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x82d89ff4
	if (!cr6.eq) goto loc_82D89FF4;
	// bl 0x82d89a40
	ctx.lr = 0x82D89F5C;
	sub_82D89A40(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d89f74
	if (cr6.eq) goto loc_82D89F74;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r26,8(r10)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
loc_82D89F74:
	// bl 0x82d89aa0
	ctx.lr = 0x82D89F78;
	sub_82D89AA0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d89f90
	if (cr6.eq) goto loc_82D89F90;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r27,16(r10)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
loc_82D89F90:
	// bl 0x839e7b00
	ctx.lr = 0x82D89F94;
	sub_839E7B00(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d89fac
	if (cr6.eq) goto loc_82D89FAC;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r29,24(r10)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
loc_82D89FAC:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lbz r10,76(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 76);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82d89fc4
	if (cr6.eq) goto loc_82D89FC4;
	// bl 0x830ff290
	ctx.lr = 0x82D89FC0;
	sub_830FF290(ctx, base);
	// lwz r28,32(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
loc_82D89FC4:
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// addi r3,r11,144
	ctx.r3.s64 = ctx.r11.s64 + 144;
	// bl 0x82dbf430
	ctx.lr = 0x82D89FE0;
	sub_82DBF430(ctx, base);
	// lwz r8,88(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r9,92(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// li r11,46
	ctx.r11.s64 = 46;
	// lwz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// b 0x82d8a138
	goto loc_82D8A138;
loc_82D89FF4:
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x82d8a098
	if (!cr6.eq) goto loc_82D8A098;
	// bl 0x82d89b00
	ctx.lr = 0x82D8A000;
	sub_82D89B00(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d8a018
	if (cr6.eq) goto loc_82D8A018;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r26,8(r10)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
loc_82D8A018:
	// bl 0x82d89b60
	ctx.lr = 0x82D8A01C;
	sub_82D89B60(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d8a034
	if (cr6.eq) goto loc_82D8A034;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r27,16(r10)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
loc_82D8A034:
	// bl 0x839e7c98
	ctx.lr = 0x82D8A038;
	sub_839E7C98(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d8a050
	if (cr6.eq) goto loc_82D8A050;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r29,24(r10)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
loc_82D8A050:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lbz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82d8a068
	if (cr6.eq) goto loc_82D8A068;
	// bl 0x830ff290
	ctx.lr = 0x82D8A064;
	sub_830FF290(ctx, base);
	// lwz r28,32(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
loc_82D8A068:
	// stw r30,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r30.u32);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// stw r30,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r30.u32);
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r30.u32);
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// addi r3,r11,144
	ctx.r3.s64 = ctx.r11.s64 + 144;
	// bl 0x82dbf468
	ctx.lr = 0x82D8A084;
	sub_82DBF468(ctx, base);
	// lwz r8,104(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r9,108(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// li r11,47
	ctx.r11.s64 = 47;
	// lwz r10,112(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// b 0x82d8a138
	goto loc_82D8A138;
loc_82D8A098:
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bne cr6,0x82d8a25c
	if (!cr6.eq) goto loc_82D8A25C;
	// bl 0x82d89a40
	ctx.lr = 0x82D8A0A4;
	sub_82D89A40(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d8a0bc
	if (cr6.eq) goto loc_82D8A0BC;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r26,8(r10)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
loc_82D8A0BC:
	// bl 0x82d89aa0
	ctx.lr = 0x82D8A0C0;
	sub_82D89AA0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d8a0d8
	if (cr6.eq) goto loc_82D8A0D8;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r27,16(r10)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
loc_82D8A0D8:
	// bl 0x839e7b00
	ctx.lr = 0x82D8A0DC;
	sub_839E7B00(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d8a0f4
	if (cr6.eq) goto loc_82D8A0F4;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r29,24(r10)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
loc_82D8A0F4:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lbz r10,76(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 76);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82d8a10c
	if (cr6.eq) goto loc_82D8A10C;
	// bl 0x830ff290
	ctx.lr = 0x82D8A108;
	sub_830FF290(ctx, base);
	// lwz r28,32(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
loc_82D8A10C:
	// stw r30,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r30.u32);
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// stw r30,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r30.u32);
	// stw r30,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r30.u32);
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// addi r3,r11,144
	ctx.r3.s64 = ctx.r11.s64 + 144;
	// bl 0x82dbf4a0
	ctx.lr = 0x82D8A128;
	sub_82DBF4A0(ctx, base);
	// lwz r8,120(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// lwz r9,124(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// li r11,60
	ctx.r11.s64 = 60;
	// lwz r10,128(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
loc_82D8A138:
	// cmplw cr6,r28,r11
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, xer);
	// bne cr6,0x82d8a2bc
	if (!cr6.eq) goto loc_82D8A2BC;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x82d8a16c
	if (cr6.eq) goto loc_82D8A16C;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82d8a16c
	if (cr6.eq) goto loc_82D8A16C;
	// cmplw cr6,r29,r10
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r10.u32, xer);
	// bne cr6,0x82d8a16c
	if (!cr6.eq) goto loc_82D8A16C;
	// lis r11,-31775
	ctx.r11.s64 = -2082406400;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// lwz r4,-14928(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -14928);
	// bl 0x8259d6c0
	ctx.lr = 0x82D8A168;
	sub_8259D6C0(ctx, base);
	// b 0x82d8a2f0
	goto loc_82D8A2F0;
loc_82D8A16C:
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, xer);
	// beq cr6,0x82d8a1e4
	if (cr6.eq) goto loc_82D8A1E4;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82d8a1e4
	if (cr6.eq) goto loc_82D8A1E4;
	// cmplw cr6,r27,r9
	cr6.compare<uint32_t>(ctx.r27.u32, ctx.r9.u32, xer);
	// bne cr6,0x82d8a1e4
	if (!cr6.eq) goto loc_82D8A1E4;
	// lwz r11,248(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 248);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// blt cr6,0x82d8a1cc
	if (cr6.lt) goto loc_82D8A1CC;
	// beq cr6,0x82d8a1b4
	if (cr6.eq) goto loc_82D8A1B4;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// bge cr6,0x82d8a2f0
	if (!cr6.lt) goto loc_82D8A2F0;
	// lis r11,-31775
	ctx.r11.s64 = -2082406400;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// addi r10,r11,-14928
	ctx.r10.s64 = ctx.r11.s64 + -14928;
	// lwz r4,28(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	// bl 0x8259d6c0
	ctx.lr = 0x82D8A1B0;
	sub_8259D6C0(ctx, base);
	// b 0x82d8a2f0
	goto loc_82D8A2F0;
loc_82D8A1B4:
	// lis r11,-31775
	ctx.r11.s64 = -2082406400;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// addi r10,r11,-14928
	ctx.r10.s64 = ctx.r11.s64 + -14928;
	// lwz r4,16(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// bl 0x8259d6c0
	ctx.lr = 0x82D8A1C8;
	sub_8259D6C0(ctx, base);
	// b 0x82d8a2f0
	goto loc_82D8A2F0;
loc_82D8A1CC:
	// lis r11,-31775
	ctx.r11.s64 = -2082406400;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// addi r10,r11,-14928
	ctx.r10.s64 = ctx.r11.s64 + -14928;
	// lwz r4,4(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// bl 0x8259d6c0
	ctx.lr = 0x82D8A1E0;
	sub_8259D6C0(ctx, base);
	// b 0x82d8a2f0
	goto loc_82D8A2F0;
loc_82D8A1E4:
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(ctx.r26.u32, 0, xer);
	// beq cr6,0x82d8a25c
	if (cr6.eq) goto loc_82D8A25C;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x82d8a25c
	if (cr6.eq) goto loc_82D8A25C;
	// cmplw cr6,r26,r8
	cr6.compare<uint32_t>(ctx.r26.u32, ctx.r8.u32, xer);
	// bne cr6,0x82d8a25c
	if (!cr6.eq) goto loc_82D8A25C;
	// lwz r11,248(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 248);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// blt cr6,0x82d8a244
	if (cr6.lt) goto loc_82D8A244;
	// beq cr6,0x82d8a22c
	if (cr6.eq) goto loc_82D8A22C;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// bge cr6,0x82d8a2f0
	if (!cr6.lt) goto loc_82D8A2F0;
	// lis r11,-31775
	ctx.r11.s64 = -2082406400;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// addi r10,r11,-14928
	ctx.r10.s64 = ctx.r11.s64 + -14928;
	// lwz r4,32(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// bl 0x8259d6c0
	ctx.lr = 0x82D8A228;
	sub_8259D6C0(ctx, base);
	// b 0x82d8a2f0
	goto loc_82D8A2F0;
loc_82D8A22C:
	// lis r11,-31775
	ctx.r11.s64 = -2082406400;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// addi r10,r11,-14928
	ctx.r10.s64 = ctx.r11.s64 + -14928;
	// lwz r4,20(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// bl 0x8259d6c0
	ctx.lr = 0x82D8A240;
	sub_8259D6C0(ctx, base);
	// b 0x82d8a2f0
	goto loc_82D8A2F0;
loc_82D8A244:
	// lis r11,-31775
	ctx.r11.s64 = -2082406400;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// addi r10,r11,-14928
	ctx.r10.s64 = ctx.r11.s64 + -14928;
	// lwz r4,8(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// bl 0x8259d6c0
	ctx.lr = 0x82D8A258;
	sub_8259D6C0(ctx, base);
	// b 0x82d8a2f0
	goto loc_82D8A2F0;
loc_82D8A25C:
	// lwz r11,248(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 248);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// blt cr6,0x82d8a2a4
	if (cr6.lt) goto loc_82D8A2A4;
	// beq cr6,0x82d8a28c
	if (cr6.eq) goto loc_82D8A28C;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// bge cr6,0x82d8a2f0
	if (!cr6.lt) goto loc_82D8A2F0;
	// lis r11,-31775
	ctx.r11.s64 = -2082406400;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// addi r10,r11,-14928
	ctx.r10.s64 = ctx.r11.s64 + -14928;
	// lwz r4,36(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	// bl 0x8259d6c0
	ctx.lr = 0x82D8A288;
	sub_8259D6C0(ctx, base);
	// b 0x82d8a2f0
	goto loc_82D8A2F0;
loc_82D8A28C:
	// lis r11,-31775
	ctx.r11.s64 = -2082406400;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// addi r10,r11,-14928
	ctx.r10.s64 = ctx.r11.s64 + -14928;
	// lwz r4,24(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// bl 0x8259d6c0
	ctx.lr = 0x82D8A2A0;
	sub_8259D6C0(ctx, base);
	// b 0x82d8a2f0
	goto loc_82D8A2F0;
loc_82D8A2A4:
	// lis r11,-31775
	ctx.r11.s64 = -2082406400;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// addi r10,r11,-14928
	ctx.r10.s64 = ctx.r11.s64 + -14928;
	// lwz r4,12(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// bl 0x8259d6c0
	ctx.lr = 0x82D8A2B8;
	sub_8259D6C0(ctx, base);
	// b 0x82d8a2f0
	goto loc_82D8A2F0;
loc_82D8A2BC:
	// lis r11,-31775
	ctx.r11.s64 = -2082406400;
	// addi r10,r11,-14928
	ctx.r10.s64 = ctx.r11.s64 + -14928;
	// lwz r4,40(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82D8A2CC:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82d8a2cc
	if (!cr6.eq) goto loc_82D8A2CC;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x82D8A2F0;
	sub_8259CC28(ctx, base);
loc_82D8A2F0:
	// stw r24,20(r23)
	PPC_STORE_U32(ctx.r23.u32 + 20, ctx.r24.u32);
	// li r6,-1
	ctx.r6.s64 = -1;
	// stw r30,16(r23)
	PPC_STORE_U32(ctx.r23.u32 + 16, ctx.r30.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r30,0(r23)
	PPC_STORE_U8(ctx.r23.u32 + 0, ctx.r30.u8);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x8259cb28
	ctx.lr = 0x82D8A310;
	sub_8259CB28(ctx, base);
	// lwz r11,164(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82d8a330
	if (cr6.lt) goto loc_82D8A330;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,144(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82D8A330;
	sub_825952B8(ctx, base);
loc_82D8A330:
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D8A33C"))) PPC_WEAK_FUNC(sub_82D8A33C);
PPC_FUNC_IMPL(__imp__sub_82D8A33C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D8A340"))) PPC_WEAK_FUNC(sub_82D8A340);
PPC_FUNC_IMPL(__imp__sub_82D8A340) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82D8A348;
	__savegprlr_27(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x82d740b0
	ctx.lr = 0x82D8A354;
	sub_82D740B0(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82d74810
	ctx.lr = 0x82D8A35C;
	sub_82D74810(ctx, base);
	// li r27,2
	ctx.r27.s64 = 2;
	// li r28,1
	ctx.r28.s64 = 1;
	// stw r27,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r27.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stb r28,132(r1)
	PPC_STORE_U8(ctx.r1.u32 + 132, ctx.r28.u8);
	// bl 0x82d89ea8
	ctx.lr = 0x82D8A374;
	sub_82D89EA8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// bl 0x8259cb28
	ctx.lr = 0x82D8A388;
	sub_8259CB28(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82d8a3a4
	if (cr6.lt) goto loc_82D8A3A4;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x825952b8
	ctx.lr = 0x82D8A3A4;
	sub_825952B8(ctx, base);
loc_82D8A3A4:
	// lis r11,-32039
	ctx.r11.s64 = -2099707904;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r10,15
	ctx.r10.s64 = 15;
	// addi r9,r11,-25112
	ctx.r9.s64 = ctx.r11.s64 + -25112;
	// stw r29,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r29.u32);
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// stb r29,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r29.u8);
	// stw r9,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r9.u32);
	// bl 0x82d86078
	ctx.lr = 0x82D8A3C8;
	sub_82D86078(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d8a480
	if (cr6.eq) goto loc_82D8A480;
	// lwz r3,64(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// bl 0x82dc0a30
	ctx.lr = 0x82D8A3DC;
	sub_82DC0A30(ctx, base);
	// lis r11,-31775
	ctx.r11.s64 = -2082406400;
	// addi r31,r11,-14928
	ctx.r31.s64 = ctx.r11.s64 + -14928;
	// lwz r6,-14928(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + -14928);
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
loc_82D8A3EC:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82d8a3ec
	if (!cr6.eq) goto loc_82D8A3EC;
	// subf r11,r6,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r6.s64;
	// lwz r5,152(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// rotlwi r7,r11,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x827a8810
	ctx.lr = 0x82D8A418;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82d8a430
	if (!cr6.eq) goto loc_82D8A430;
	// lwz r3,64(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	// stb r28,648(r3)
	PPC_STORE_U8(ctx.r3.u32 + 648, ctx.r28.u8);
	// stb r29,650(r3)
	PPC_STORE_U8(ctx.r3.u32 + 650, ctx.r29.u8);
	// bl 0x83102db0
	ctx.lr = 0x82D8A430;
	sub_83102DB0(ctx, base);
loc_82D8A430:
	// lwz r6,40(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
loc_82D8A438:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82d8a438
	if (!cr6.eq) goto loc_82D8A438;
	// subf r11,r6,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r6.s64;
	// lwz r5,152(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// rotlwi r7,r11,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x827a8810
	ctx.lr = 0x82D8A464;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82d8a474
	if (cr6.eq) goto loc_82D8A474;
	// lwz r11,64(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	// stb r28,649(r11)
	PPC_STORE_U8(ctx.r11.u32 + 649, ctx.r28.u8);
loc_82D8A474:
	// lwz r3,64(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	// stb r29,650(r3)
	PPC_STORE_U8(ctx.r3.u32 + 650, ctx.r29.u8);
	// bl 0x83102db0
	ctx.lr = 0x82D8A480;
	sub_83102DB0(ctx, base);
loc_82D8A480:
	// lis r11,-32039
	ctx.r11.s64 = -2099707904;
	// addi r10,r11,-26880
	ctx.r10.s64 = ctx.r11.s64 + -26880;
	// stw r10,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r10.u32);
	// bl 0x82d86078
	ctx.lr = 0x82D8A490;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d8a4a0
	if (cr6.eq) goto loc_82D8A4A0;
	// lwz r11,64(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// stb r28,652(r11)
	PPC_STORE_U8(ctx.r11.u32 + 652, ctx.r28.u8);
loc_82D8A4A0:
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82d73dd8
	ctx.lr = 0x82D8A4A8;
	sub_82D73DD8(ctx, base);
	// lwz r11,156(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82d8a4c4
	if (cr6.lt) goto loc_82D8A4C4;
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,136(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// bl 0x825952b8
	ctx.lr = 0x82D8A4C4;
	sub_825952B8(ctx, base);
loc_82D8A4C4:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D8A4CC"))) PPC_WEAK_FUNC(sub_82D8A4CC);
PPC_FUNC_IMPL(__imp__sub_82D8A4CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D8A4D0"))) PPC_WEAK_FUNC(sub_82D8A4D0);
PPC_FUNC_IMPL(__imp__sub_82D8A4D0) {
	PPC_FUNC_PROLOGUE();
	// b 0x82d8a340
	sub_82D8A340(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D8A4D4"))) PPC_WEAK_FUNC(sub_82D8A4D4);
PPC_FUNC_IMPL(__imp__sub_82D8A4D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D8A4D8"))) PPC_WEAK_FUNC(sub_82D8A4D8);
PPC_FUNC_IMPL(__imp__sub_82D8A4D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82D8A4E0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r7,0(r4)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// li r10,28
	ctx.r10.s64 = 28;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r9,r4,4
	ctx.r9.s64 = ctx.r4.s64 + 4;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r7,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r7.u8);
	// addi r8,r3,4
	ctx.r8.s64 = ctx.r3.s64 + 4;
	// lbz r6,1(r4)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r4.u32 + 1);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// stb r6,1(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1, ctx.r6.u8);
	// lbz r5,2(r4)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r4.u32 + 2);
	// stb r5,2(r3)
	PPC_STORE_U8(ctx.r3.u32 + 2, ctx.r5.u8);
	// lbz r4,3(r4)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r4.u32 + 3);
	// stb r4,3(r3)
	PPC_STORE_U8(ctx.r3.u32 + 3, ctx.r4.u8);
loc_82D8A520:
	// lbzx r10,r9,r11
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r11.u32);
	// stbx r10,r8,r11
	PPC_STORE_U8(ctx.r8.u32 + ctx.r11.u32, ctx.r10.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x82d8a520
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82D8A520;
	// lbz r7,32(r30)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r30.u32 + 32);
	// li r10,46
	ctx.r10.s64 = 46;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r30,52
	ctx.r9.s64 = ctx.r30.s64 + 52;
	// addi r8,r31,52
	ctx.r8.s64 = ctx.r31.s64 + 52;
	// stb r7,32(r31)
	PPC_STORE_U8(ctx.r31.u32 + 32, ctx.r7.u8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// lbz r6,33(r30)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r30.u32 + 33);
	// stb r6,33(r31)
	PPC_STORE_U8(ctx.r31.u32 + 33, ctx.r6.u8);
	// lbz r5,34(r30)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r30.u32 + 34);
	// stb r5,34(r31)
	PPC_STORE_U8(ctx.r31.u32 + 34, ctx.r5.u8);
	// lbz r4,35(r30)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r30.u32 + 35);
	// stb r4,35(r31)
	PPC_STORE_U8(ctx.r31.u32 + 35, ctx.r4.u8);
	// lbz r3,36(r30)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r30.u32 + 36);
	// stb r3,36(r31)
	PPC_STORE_U8(ctx.r31.u32 + 36, ctx.r3.u8);
	// lbz r10,37(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 37);
	// stb r10,37(r31)
	PPC_STORE_U8(ctx.r31.u32 + 37, ctx.r10.u8);
	// lbz r7,38(r30)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r30.u32 + 38);
	// stb r7,38(r31)
	PPC_STORE_U8(ctx.r31.u32 + 38, ctx.r7.u8);
	// lbz r6,39(r30)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r30.u32 + 39);
	// stb r6,39(r31)
	PPC_STORE_U8(ctx.r31.u32 + 39, ctx.r6.u8);
	// lbz r5,40(r30)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r30.u32 + 40);
	// stb r5,40(r31)
	PPC_STORE_U8(ctx.r31.u32 + 40, ctx.r5.u8);
	// lbz r4,41(r30)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r30.u32 + 41);
	// stb r4,41(r31)
	PPC_STORE_U8(ctx.r31.u32 + 41, ctx.r4.u8);
	// lhz r3,44(r30)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r30.u32 + 44);
	// sth r3,44(r31)
	PPC_STORE_U16(ctx.r31.u32 + 44, ctx.r3.u16);
	// lwz r10,48(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// stw r10,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r10.u32);
loc_82D8A5A4:
	// lbzx r10,r9,r11
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r11.u32);
	// stbx r10,r8,r11
	PPC_STORE_U8(ctx.r8.u32 + ctx.r11.u32, ctx.r10.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x82d8a5a4
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82D8A5A4;
	// lhz r11,98(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 98);
	// addi r29,r31,104
	ctx.r29.s64 = ctx.r31.s64 + 104;
	// lwz r10,100(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// subf r27,r31,r30
	ctx.r27.s64 = ctx.r30.s64 - ctx.r31.s64;
	// li r28,3
	ctx.r28.s64 = 3;
	// sth r11,98(r31)
	PPC_STORE_U16(ctx.r31.u32 + 98, ctx.r11.u16);
	// lwz r9,100(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 100);
	// rlwimi r9,r10,0,7,31
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0x1FFFFFF) | (ctx.r9.u64 & 0xFFFFFFFFFE000000);
	// stw r9,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r9.u32);
	// rotlwi r8,r9,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// lwz r7,100(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 100);
	// rlwimi r8,r7,0,7,13
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r7.u32, 0) & 0x1FC0000) | (ctx.r8.u64 & 0xFFFFFFFFFE03FFFF);
	// stw r8,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r8.u32);
	// rotlwi r6,r8,0
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// lwz r5,100(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 100);
	// rlwimi r6,r5,0,14,14
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r5.u32, 0) & 0x20000) | (ctx.r6.u64 & 0xFFFFFFFFFFFDFFFF);
	// rotlwi r3,r6,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r6.u32, 0);
	// stw r6,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r6.u32);
	// lwz r4,100(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 100);
	// rlwimi r3,r4,0,15,15
	ctx.r3.u64 = (__builtin_rotateleft32(ctx.r4.u32, 0) & 0x10000) | (ctx.r3.u64 & 0xFFFFFFFFFFFEFFFF);
	// stw r3,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r3.u32);
	// lwz r11,100(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 100);
	// sth r11,102(r31)
	PPC_STORE_U16(ctx.r31.u32 + 102, ctx.r11.u16);
loc_82D8A610:
	// add r4,r27,r29
	ctx.r4.u64 = ctx.r27.u64 + ctx.r29.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82abfda0
	ctx.lr = 0x82D8A61C;
	sub_82ABFDA0(ctx, base);
	// addic. r28,r28,-1
	xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	cr0.compare<int32_t>(ctx.r28.s32, 0, xer);
	// addi r29,r29,160
	ctx.r29.s64 = ctx.r29.s64 + 160;
	// bne 0x82d8a610
	if (!cr0.eq) goto loc_82D8A610;
	// addi r4,r30,584
	ctx.r4.s64 = ctx.r30.s64 + 584;
	// addi r3,r31,584
	ctx.r3.s64 = ctx.r31.s64 + 584;
	// li r5,47
	ctx.r5.s64 = 47;
	// bl 0x831ce980
	ctx.lr = 0x82D8A638;
	sub_831CE980(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D8A644"))) PPC_WEAK_FUNC(sub_82D8A644);
PPC_FUNC_IMPL(__imp__sub_82D8A644) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D8A648"))) PPC_WEAK_FUNC(sub_82D8A648);
PPC_FUNC_IMPL(__imp__sub_82D8A648) {
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
	// bl 0x8353c978
	ctx.lr = 0x82D8A660;
	sub_8353C978(ctx, base);
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// beq cr6,0x82d8a67c
	if (cr6.eq) goto loc_82D8A67C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8353c978
	ctx.lr = 0x82D8A670;
	sub_8353C978(ctx, base);
	// cmpwi cr6,r3,3
	cr6.compare<int32_t>(ctx.r3.s32, 3, xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// bne cr6,0x82d8a680
	if (!cr6.eq) goto loc_82D8A680;
loc_82D8A67C:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82D8A680:
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

__attribute__((alias("__imp__sub_82D8A694"))) PPC_WEAK_FUNC(sub_82D8A694);
PPC_FUNC_IMPL(__imp__sub_82D8A694) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D8A698"))) PPC_WEAK_FUNC(sub_82D8A698);
PPC_FUNC_IMPL(__imp__sub_82D8A698) {
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
	// bl 0x830ff290
	ctx.lr = 0x82D8A6A8;
	sub_830FF290(ctx, base);
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmplwi cr6,r11,52
	cr6.compare<uint32_t>(ctx.r11.u32, 52, xer);
	// beq cr6,0x82d8a738
	if (cr6.eq) goto loc_82D8A738;
	// bl 0x830ff290
	ctx.lr = 0x82D8A6B8;
	sub_830FF290(ctx, base);
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmplwi cr6,r11,53
	cr6.compare<uint32_t>(ctx.r11.u32, 53, xer);
	// beq cr6,0x82d8a738
	if (cr6.eq) goto loc_82D8A738;
	// bl 0x830ff290
	ctx.lr = 0x82D8A6C8;
	sub_830FF290(ctx, base);
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmplwi cr6,r11,54
	cr6.compare<uint32_t>(ctx.r11.u32, 54, xer);
	// beq cr6,0x82d8a738
	if (cr6.eq) goto loc_82D8A738;
	// bl 0x830ff290
	ctx.lr = 0x82D8A6D8;
	sub_830FF290(ctx, base);
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmplwi cr6,r11,55
	cr6.compare<uint32_t>(ctx.r11.u32, 55, xer);
	// beq cr6,0x82d8a738
	if (cr6.eq) goto loc_82D8A738;
	// bl 0x830ff290
	ctx.lr = 0x82D8A6E8;
	sub_830FF290(ctx, base);
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmplwi cr6,r11,56
	cr6.compare<uint32_t>(ctx.r11.u32, 56, xer);
	// beq cr6,0x82d8a738
	if (cr6.eq) goto loc_82D8A738;
	// bl 0x830ff290
	ctx.lr = 0x82D8A6F8;
	sub_830FF290(ctx, base);
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmplwi cr6,r11,57
	cr6.compare<uint32_t>(ctx.r11.u32, 57, xer);
	// beq cr6,0x82d8a738
	if (cr6.eq) goto loc_82D8A738;
	// bl 0x830ff290
	ctx.lr = 0x82D8A708;
	sub_830FF290(ctx, base);
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmplwi cr6,r11,58
	cr6.compare<uint32_t>(ctx.r11.u32, 58, xer);
	// beq cr6,0x82d8a738
	if (cr6.eq) goto loc_82D8A738;
	// bl 0x830ff290
	ctx.lr = 0x82D8A718;
	sub_830FF290(ctx, base);
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmplwi cr6,r11,59
	cr6.compare<uint32_t>(ctx.r11.u32, 59, xer);
	// beq cr6,0x82d8a738
	if (cr6.eq) goto loc_82D8A738;
	// bl 0x830ff290
	ctx.lr = 0x82D8A728;
	sub_830FF290(ctx, base);
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r11,61
	cr6.compare<uint32_t>(ctx.r11.u32, 61, xer);
	// bne cr6,0x82d8a73c
	if (!cr6.eq) goto loc_82D8A73C;
loc_82D8A738:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82D8A73C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D8A74C"))) PPC_WEAK_FUNC(sub_82D8A74C);
PPC_FUNC_IMPL(__imp__sub_82D8A74C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D8A750"))) PPC_WEAK_FUNC(sub_82D8A750);
PPC_FUNC_IMPL(__imp__sub_82D8A750) {
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
	// bl 0x830ff290
	ctx.lr = 0x82D8A760;
	sub_830FF290(ctx, base);
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmplwi cr6,r11,52
	cr6.compare<uint32_t>(ctx.r11.u32, 52, xer);
	// beq cr6,0x82d8a780
	if (cr6.eq) goto loc_82D8A780;
	// bl 0x830ff290
	ctx.lr = 0x82D8A770;
	sub_830FF290(ctx, base);
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r11,53
	cr6.compare<uint32_t>(ctx.r11.u32, 53, xer);
	// bne cr6,0x82d8a784
	if (!cr6.eq) goto loc_82D8A784;
loc_82D8A780:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82D8A784:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D8A794"))) PPC_WEAK_FUNC(sub_82D8A794);
PPC_FUNC_IMPL(__imp__sub_82D8A794) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D8A798"))) PPC_WEAK_FUNC(sub_82D8A798);
PPC_FUNC_IMPL(__imp__sub_82D8A798) {
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
	// bl 0x830ff290
	ctx.lr = 0x82D8A7A8;
	sub_830FF290(ctx, base);
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// addi r11,r11,-58
	ctx.r11.s64 = ctx.r11.s64 + -58;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D8A7C8"))) PPC_WEAK_FUNC(sub_82D8A7C8);
PPC_FUNC_IMPL(__imp__sub_82D8A7C8) {
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
	// bl 0x830ff290
	ctx.lr = 0x82D8A7D8;
	sub_830FF290(ctx, base);
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmplwi cr6,r11,54
	cr6.compare<uint32_t>(ctx.r11.u32, 54, xer);
	// beq cr6,0x82d8a808
	if (cr6.eq) goto loc_82D8A808;
	// bl 0x830ff290
	ctx.lr = 0x82D8A7E8;
	sub_830FF290(ctx, base);
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmplwi cr6,r11,55
	cr6.compare<uint32_t>(ctx.r11.u32, 55, xer);
	// beq cr6,0x82d8a808
	if (cr6.eq) goto loc_82D8A808;
	// bl 0x830ff290
	ctx.lr = 0x82D8A7F8;
	sub_830FF290(ctx, base);
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r11,56
	cr6.compare<uint32_t>(ctx.r11.u32, 56, xer);
	// bne cr6,0x82d8a80c
	if (!cr6.eq) goto loc_82D8A80C;
loc_82D8A808:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82D8A80C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D8A81C"))) PPC_WEAK_FUNC(sub_82D8A81C);
PPC_FUNC_IMPL(__imp__sub_82D8A81C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D8A820"))) PPC_WEAK_FUNC(sub_82D8A820);
PPC_FUNC_IMPL(__imp__sub_82D8A820) {
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
	// bl 0x82d8a698
	ctx.lr = 0x82D8A830;
	sub_82D8A698(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82d8a850
	if (!cr6.eq) goto loc_82D8A850;
loc_82D8A83C:
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
loc_82D8A850:
	// bl 0x82d86078
	ctx.lr = 0x82D8A854;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d8a83c
	if (cr6.eq) goto loc_82D8A83C;
	// lwz r3,116(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// bl 0x831f8200
	ctx.lr = 0x82D8A864;
	sub_831F8200(ctx, base);
	// bl 0x82dd3a30
	ctx.lr = 0x82D8A868;
	sub_82DD3A30(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d8a83c
	if (cr6.eq) goto loc_82D8A83C;
	// bl 0x830ff290
	ctx.lr = 0x82D8A878;
	sub_830FF290(ctx, base);
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// addi r11,r11,-61
	ctx.r11.s64 = ctx.r11.s64 + -61;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D8A898"))) PPC_WEAK_FUNC(sub_82D8A898);
PPC_FUNC_IMPL(__imp__sub_82D8A898) {
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
	// bl 0x82d8a820
	ctx.lr = 0x82D8A8A8;
	sub_82D8A820(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82d8a8c8
	if (!cr6.eq) goto loc_82D8A8C8;
loc_82D8A8B4:
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
loc_82D8A8C8:
	// bl 0x82d86078
	ctx.lr = 0x82D8A8CC;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d8a8b4
	if (cr6.eq) goto loc_82D8A8B4;
	// lwz r3,116(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// bl 0x83815cb0
	ctx.lr = 0x82D8A8DC;
	sub_83815CB0(ctx, base);
	// bl 0x825832d8
	ctx.lr = 0x82D8A8E0;
	sub_825832D8(ctx, base);
	// bl 0x831238b0
	ctx.lr = 0x82D8A8E4;
	sub_831238B0(ctx, base);
	// addi r11,r3,-2
	ctx.r11.s64 = ctx.r3.s64 + -2;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D8A900"))) PPC_WEAK_FUNC(sub_82D8A900);
PPC_FUNC_IMPL(__imp__sub_82D8A900) {
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
	// bl 0x82d8a698
	ctx.lr = 0x82D8A910;
	sub_82D8A698(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82d8a930
	if (!cr6.eq) goto loc_82D8A930;
loc_82D8A91C:
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
loc_82D8A930:
	// bl 0x82d86078
	ctx.lr = 0x82D8A934;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d8a91c
	if (cr6.eq) goto loc_82D8A91C;
	// lwz r3,116(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// bl 0x831f8200
	ctx.lr = 0x82D8A944;
	sub_831F8200(ctx, base);
	// bl 0x82dd3a30
	ctx.lr = 0x82D8A948;
	sub_82DD3A30(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d8a91c
	if (cr6.eq) goto loc_82D8A91C;
	// bl 0x830ff290
	ctx.lr = 0x82D8A958;
	sub_830FF290(ctx, base);
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// addi r11,r11,-59
	ctx.r11.s64 = ctx.r11.s64 + -59;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D8A978"))) PPC_WEAK_FUNC(sub_82D8A978);
PPC_FUNC_IMPL(__imp__sub_82D8A978) {
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
	// bl 0x82d8a820
	ctx.lr = 0x82D8A988;
	sub_82D8A820(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82d8a9a8
	if (!cr6.eq) goto loc_82D8A9A8;
loc_82D8A994:
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
loc_82D8A9A8:
	// bl 0x82d86078
	ctx.lr = 0x82D8A9AC;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d8a994
	if (cr6.eq) goto loc_82D8A994;
	// lwz r3,116(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// bl 0x83815cb0
	ctx.lr = 0x82D8A9BC;
	sub_83815CB0(ctx, base);
	// bl 0x825832d8
	ctx.lr = 0x82D8A9C0;
	sub_825832D8(ctx, base);
	// bl 0x8353c978
	ctx.lr = 0x82D8A9C4;
	sub_8353C978(ctx, base);
	// addi r11,r3,-1
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D8A9E0"))) PPC_WEAK_FUNC(sub_82D8A9E0);
PPC_FUNC_IMPL(__imp__sub_82D8A9E0) {
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
	// bl 0x82d8a820
	ctx.lr = 0x82D8A9F4;
	sub_82D8A820(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82d8aa18
	if (!cr6.eq) goto loc_82D8AA18;
loc_82D8AA00:
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
loc_82D8AA18:
	// bl 0x82d86078
	ctx.lr = 0x82D8AA1C;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d8aa00
	if (cr6.eq) goto loc_82D8AA00;
	// lwz r3,116(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// bl 0x83815cb0
	ctx.lr = 0x82D8AA2C;
	sub_83815CB0(ctx, base);
	// bl 0x825832d8
	ctx.lr = 0x82D8AA30;
	sub_825832D8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8353c978
	ctx.lr = 0x82D8AA38;
	sub_8353C978(ctx, base);
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// beq cr6,0x82d8aa54
	if (cr6.eq) goto loc_82D8AA54;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8353c978
	ctx.lr = 0x82D8AA48;
	sub_8353C978(ctx, base);
	// cmpwi cr6,r3,3
	cr6.compare<int32_t>(ctx.r3.s32, 3, xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// bne cr6,0x82d8aa58
	if (!cr6.eq) goto loc_82D8AA58;
loc_82D8AA54:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82D8AA58:
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

__attribute__((alias("__imp__sub_82D8AA6C"))) PPC_WEAK_FUNC(sub_82D8AA6C);
PPC_FUNC_IMPL(__imp__sub_82D8AA6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D8AA70"))) PPC_WEAK_FUNC(sub_82D8AA70);
PPC_FUNC_IMPL(__imp__sub_82D8AA70) {
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
	// bl 0x82d8a900
	ctx.lr = 0x82D8AA80;
	sub_82D8A900(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82d8aaa0
	if (!cr6.eq) goto loc_82D8AAA0;
loc_82D8AA8C:
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
loc_82D8AAA0:
	// bl 0x82d86078
	ctx.lr = 0x82D8AAA4;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d8aa8c
	if (cr6.eq) goto loc_82D8AA8C;
	// lwz r3,116(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// bl 0x83815cb0
	ctx.lr = 0x82D8AAB4;
	sub_83815CB0(ctx, base);
	// bl 0x825832d8
	ctx.lr = 0x82D8AAB8;
	sub_825832D8(ctx, base);
	// bl 0x8353c978
	ctx.lr = 0x82D8AABC;
	sub_8353C978(ctx, base);
	// addi r11,r3,-1
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D8AAD8"))) PPC_WEAK_FUNC(sub_82D8AAD8);
PPC_FUNC_IMPL(__imp__sub_82D8AAD8) {
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
	// bl 0x82d8a900
	ctx.lr = 0x82D8AAEC;
	sub_82D8A900(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82d8ab10
	if (!cr6.eq) goto loc_82D8AB10;
loc_82D8AAF8:
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
loc_82D8AB10:
	// bl 0x82d86078
	ctx.lr = 0x82D8AB14;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d8aaf8
	if (cr6.eq) goto loc_82D8AAF8;
	// lwz r3,116(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// bl 0x83815cb0
	ctx.lr = 0x82D8AB24;
	sub_83815CB0(ctx, base);
	// bl 0x825832d8
	ctx.lr = 0x82D8AB28;
	sub_825832D8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8353c978
	ctx.lr = 0x82D8AB30;
	sub_8353C978(ctx, base);
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// beq cr6,0x82d8ab4c
	if (cr6.eq) goto loc_82D8AB4C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8353c978
	ctx.lr = 0x82D8AB40;
	sub_8353C978(ctx, base);
	// cmpwi cr6,r3,3
	cr6.compare<int32_t>(ctx.r3.s32, 3, xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// bne cr6,0x82d8ab50
	if (!cr6.eq) goto loc_82D8AB50;
loc_82D8AB4C:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82D8AB50:
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

__attribute__((alias("__imp__sub_82D8AB64"))) PPC_WEAK_FUNC(sub_82D8AB64);
PPC_FUNC_IMPL(__imp__sub_82D8AB64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D8AB68"))) PPC_WEAK_FUNC(sub_82D8AB68);
PPC_FUNC_IMPL(__imp__sub_82D8AB68) {
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
	// li r30,0
	ctx.r30.s64 = 0;
	// bl 0x82d8a698
	ctx.lr = 0x82D8AB84;
	sub_82D8A698(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d8ac24
	if (cr6.eq) goto loc_82D8AC24;
	// bl 0x82d8a820
	ctx.lr = 0x82D8AB94;
	sub_82D8A820(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82d8abd8
	if (!cr6.eq) goto loc_82D8ABD8;
	// bl 0x82d8a900
	ctx.lr = 0x82D8ABA4;
	sub_82D8A900(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82d8abd8
	if (!cr6.eq) goto loc_82D8ABD8;
	// bl 0x82d96138
	ctx.lr = 0x82D8ABB4;
	sub_82D96138(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82d8ac04
	if (!cr6.eq) goto loc_82D8AC04;
	// bl 0x83572958
	ctx.lr = 0x82D8ABC4;
	sub_83572958(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d8ac24
	if (cr6.eq) goto loc_82D8AC24;
	// li r3,5
	ctx.r3.s64 = 5;
	// b 0x82d8ac28
	goto loc_82D8AC28;
loc_82D8ABD8:
	// bl 0x82d86078
	ctx.lr = 0x82D8ABDC;
	sub_82D86078(ctx, base);
	// lwz r3,116(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// bl 0x83815cb0
	ctx.lr = 0x82D8ABE4;
	sub_83815CB0(ctx, base);
	// bl 0x825832d8
	ctx.lr = 0x82D8ABE8;
	sub_825832D8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8353c978
	ctx.lr = 0x82D8ABF0;
	sub_8353C978(ctx, base);
	// addi r11,r3,-1
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82d8ac0c
	if (cr6.eq) goto loc_82D8AC0C;
loc_82D8AC04:
	// li r3,2
	ctx.r3.s64 = 2;
	// b 0x82d8ac28
	goto loc_82D8AC28;
loc_82D8AC0C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d8a648
	ctx.lr = 0x82D8AC14;
	sub_82D8A648(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// li r3,5
	ctx.r3.s64 = 5;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82d8ac28
	if (!cr6.eq) goto loc_82D8AC28;
loc_82D8AC24:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_82D8AC28:
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

__attribute__((alias("__imp__sub_82D8AC40"))) PPC_WEAK_FUNC(sub_82D8AC40);
PPC_FUNC_IMPL(__imp__sub_82D8AC40) {
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
	// bl 0x830ff290
	ctx.lr = 0x82D8AC58;
	sub_830FF290(ctx, base);
	// li r11,52
	ctx.r11.s64 = 52;
	// stw r11,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
	// bl 0x82d86078
	ctx.lr = 0x82D8AC64;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d8aca8
	if (cr6.eq) goto loc_82D8ACA8;
	// lwz r3,116(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// bl 0x825832f0
	ctx.lr = 0x82D8AC74;
	sub_825832F0(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82da7598
	ctx.lr = 0x82D8AC88;
	sub_82DA7598(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r31,108(r3)
	PPC_STORE_U8(ctx.r3.u32 + 108, ctx.r31.u8);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82da7598
	ctx.lr = 0x82D8ACA0;
	sub_82DA7598(ctx, base);
	// stb r31,108(r3)
	PPC_STORE_U8(ctx.r3.u32 + 108, ctx.r31.u8);
	// stb r31,8(r30)
	PPC_STORE_U8(ctx.r30.u32 + 8, ctx.r31.u8);
loc_82D8ACA8:
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

__attribute__((alias("__imp__sub_82D8ACC0"))) PPC_WEAK_FUNC(sub_82D8ACC0);
PPC_FUNC_IMPL(__imp__sub_82D8ACC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// li r11,11
	ctx.r11.s64 = 11;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,0
	ctx.r9.s64 = 0;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
loc_82D8ACD0:
	// clrlwi r11,r9,24
	ctx.r11.u64 = ctx.r9.u32 & 0xFF;
	// cmplwi cr6,r11,11
	cr6.compare<uint32_t>(ctx.r11.u32, 11, xer);
	// bge cr6,0x82d8ace8
	if (!cr6.lt) goto loc_82D8ACE8;
	// lbzx r8,r11,r3
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r3.u32);
	// cmpwi cr6,r8,13
	cr6.compare<int32_t>(ctx.r8.s32, 13, xer);
	// blt cr6,0x82d8acec
	if (cr6.lt) goto loc_82D8ACEC;
loc_82D8ACE8:
	// li r10,0
	ctx.r10.s64 = 0;
loc_82D8ACEC:
	// cmplwi cr6,r11,11
	cr6.compare<uint32_t>(ctx.r11.u32, 11, xer);
	// bge cr6,0x82d8ad04
	if (!cr6.lt) goto loc_82D8AD04;
	// add r8,r11,r3
	ctx.r8.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lbz r7,33(r8)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r8.u32 + 33);
	// cmpwi cr6,r7,13
	cr6.compare<int32_t>(ctx.r7.s32, 13, xer);
	// blt cr6,0x82d8ad08
	if (cr6.lt) goto loc_82D8AD08;
loc_82D8AD04:
	// li r10,0
	ctx.r10.s64 = 0;
loc_82D8AD08:
	// cmplwi cr6,r11,11
	cr6.compare<uint32_t>(ctx.r11.u32, 11, xer);
	// bge cr6,0x82d8ad20
	if (!cr6.lt) goto loc_82D8AD20;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lbz r8,66(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 66);
	// cmpwi cr6,r8,13
	cr6.compare<int32_t>(ctx.r8.s32, 13, xer);
	// blt cr6,0x82d8ad24
	if (cr6.lt) goto loc_82D8AD24;
loc_82D8AD20:
	// li r10,0
	ctx.r10.s64 = 0;
loc_82D8AD24:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// bdnz 0x82d8acd0
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82D8ACD0;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D8AD34"))) PPC_WEAK_FUNC(sub_82D8AD34);
PPC_FUNC_IMPL(__imp__sub_82D8AD34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D8AD38"))) PPC_WEAK_FUNC(sub_82D8AD38);
PPC_FUNC_IMPL(__imp__sub_82D8AD38) {
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
	// bl 0x82d86078
	ctx.lr = 0x82D8AD4C;
	sub_82D86078(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d8ad74
	if (cr6.eq) goto loc_82D8AD74;
	// lwz r3,116(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// bl 0x8290b4c8
	ctx.lr = 0x82D8AD60;
	sub_8290B4C8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d8ad74
	if (cr6.eq) goto loc_82D8AD74;
	// lwz r3,116(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// bl 0x82d9bee0
	ctx.lr = 0x82D8AD74;
	sub_82D9BEE0(ctx, base);
loc_82D8AD74:
	// bl 0x82e57440
	ctx.lr = 0x82D8AD78;
	sub_82E57440(ctx, base);
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

__attribute__((alias("__imp__sub_82D8AD90"))) PPC_WEAK_FUNC(sub_82D8AD90);
PPC_FUNC_IMPL(__imp__sub_82D8AD90) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// li r11,65
	ctx.r11.s64 = 65;
	// li r10,67
	ctx.r10.s64 = 67;
	// li r9,69
	ctx.r9.s64 = 69;
	// stw r11,-144(r1)
	PPC_STORE_U32(ctx.r1.u32 + -144, ctx.r11.u32);
	// stw r10,-140(r1)
	PPC_STORE_U32(ctx.r1.u32 + -140, ctx.r10.u32);
	// li r11,84
	ctx.r11.s64 = 84;
	// stw r9,-136(r1)
	PPC_STORE_U32(ctx.r1.u32 + -136, ctx.r9.u32);
	// li r8,71
	ctx.r8.s64 = 71;
	// li r7,73
	ctx.r7.s64 = 73;
	// stw r11,-112(r1)
	PPC_STORE_U32(ctx.r1.u32 + -112, ctx.r11.u32);
	// li r6,75
	ctx.r6.s64 = 75;
	// stw r8,-132(r1)
	PPC_STORE_U32(ctx.r1.u32 + -132, ctx.r8.u32);
	// li r5,78
	ctx.r5.s64 = 78;
	// stw r7,-128(r1)
	PPC_STORE_U32(ctx.r1.u32 + -128, ctx.r7.u32);
	// li r4,81
	ctx.r4.s64 = 81;
	// stw r6,-124(r1)
	PPC_STORE_U32(ctx.r1.u32 + -124, ctx.r6.u32);
	// li r10,87
	ctx.r10.s64 = 87;
	// stw r5,-120(r1)
	PPC_STORE_U32(ctx.r1.u32 + -120, ctx.r5.u32);
	// li r9,90
	ctx.r9.s64 = 90;
	// stw r4,-116(r1)
	PPC_STORE_U32(ctx.r1.u32 + -116, ctx.r4.u32);
	// stw r10,-108(r1)
	PPC_STORE_U32(ctx.r1.u32 + -108, ctx.r10.u32);
	// li r11,114
	ctx.r11.s64 = 114;
	// stw r9,-104(r1)
	PPC_STORE_U32(ctx.r1.u32 + -104, ctx.r9.u32);
	// li r8,94
	ctx.r8.s64 = 94;
	// li r7,98
	ctx.r7.s64 = 98;
	// stw r11,-80(r1)
	PPC_STORE_U32(ctx.r1.u32 + -80, ctx.r11.u32);
	// li r6,102
	ctx.r6.s64 = 102;
	// stw r8,-100(r1)
	PPC_STORE_U32(ctx.r1.u32 + -100, ctx.r8.u32);
	// li r5,106
	ctx.r5.s64 = 106;
	// stw r7,-96(r1)
	PPC_STORE_U32(ctx.r1.u32 + -96, ctx.r7.u32);
	// li r4,110
	ctx.r4.s64 = 110;
	// stw r6,-92(r1)
	PPC_STORE_U32(ctx.r1.u32 + -92, ctx.r6.u32);
	// li r10,118
	ctx.r10.s64 = 118;
	// stw r5,-88(r1)
	PPC_STORE_U32(ctx.r1.u32 + -88, ctx.r5.u32);
	// li r9,122
	ctx.r9.s64 = 122;
	// stw r4,-84(r1)
	PPC_STORE_U32(ctx.r1.u32 + -84, ctx.r4.u32);
	// stw r10,-76(r1)
	PPC_STORE_U32(ctx.r1.u32 + -76, ctx.r10.u32);
	// li r11,170
	ctx.r11.s64 = 170;
	// stw r9,-72(r1)
	PPC_STORE_U32(ctx.r1.u32 + -72, ctx.r9.u32);
	// li r8,126
	ctx.r8.s64 = 126;
	// li r7,130
	ctx.r7.s64 = 130;
	// stw r11,-48(r1)
	PPC_STORE_U32(ctx.r1.u32 + -48, ctx.r11.u32);
	// li r6,140
	ctx.r6.s64 = 140;
	// stw r8,-68(r1)
	PPC_STORE_U32(ctx.r1.u32 + -68, ctx.r8.u32);
	// li r5,150
	ctx.r5.s64 = 150;
	// stw r7,-64(r1)
	PPC_STORE_U32(ctx.r1.u32 + -64, ctx.r7.u32);
	// li r4,160
	ctx.r4.s64 = 160;
	// stw r6,-60(r1)
	PPC_STORE_U32(ctx.r1.u32 + -60, ctx.r6.u32);
	// li r10,180
	ctx.r10.s64 = 180;
	// stw r5,-56(r1)
	PPC_STORE_U32(ctx.r1.u32 + -56, ctx.r5.u32);
	// li r9,190
	ctx.r9.s64 = 190;
	// stw r4,-52(r1)
	PPC_STORE_U32(ctx.r1.u32 + -52, ctx.r4.u32);
	// li r11,300
	ctx.r11.s64 = 300;
	// stw r10,-44(r1)
	PPC_STORE_U32(ctx.r1.u32 + -44, ctx.r10.u32);
	// stw r9,-40(r1)
	PPC_STORE_U32(ctx.r1.u32 + -40, ctx.r9.u32);
	// li r8,200
	ctx.r8.s64 = 200;
	// li r7,220
	ctx.r7.s64 = 220;
	// stw r11,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r11.u32);
	// li r6,240
	ctx.r6.s64 = 240;
	// stw r8,-36(r1)
	PPC_STORE_U32(ctx.r1.u32 + -36, ctx.r8.u32);
	// li r5,260
	ctx.r5.s64 = 260;
	// stw r7,-32(r1)
	PPC_STORE_U32(ctx.r1.u32 + -32, ctx.r7.u32);
	// li r4,280
	ctx.r4.s64 = 280;
	// stw r6,-28(r1)
	PPC_STORE_U32(ctx.r1.u32 + -28, ctx.r6.u32);
	// li r10,320
	ctx.r10.s64 = 320;
	// stw r5,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, ctx.r5.u32);
	// li r9,340
	ctx.r9.s64 = 340;
	// stw r4,-20(r1)
	PPC_STORE_U32(ctx.r1.u32 + -20, ctx.r4.u32);
	// stw r10,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r10.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r9,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r9.u32);
	// cmplwi cr6,r3,65
	cr6.compare<uint32_t>(ctx.r3.u32, 65, xer);
	// ble cr6,0x82d8aec4
	if (!cr6.gt) goto loc_82D8AEC4;
	// addi r11,r3,-65
	ctx.r11.s64 = ctx.r3.s64 + -65;
	// cmplwi cr6,r11,35
	cr6.compare<uint32_t>(ctx.r11.u32, 35, xer);
	// blt cr6,0x82d8aec4
	if (cr6.lt) goto loc_82D8AEC4;
	// li r11,34
	ctx.r11.s64 = 34;
loc_82D8AEC4:
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,-144
	ctx.r10.s64 = ctx.r1.s64 + -144;
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D8AED4"))) PPC_WEAK_FUNC(sub_82D8AED4);
PPC_FUNC_IMPL(__imp__sub_82D8AED4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D8AED8"))) PPC_WEAK_FUNC(sub_82D8AED8);
PPC_FUNC_IMPL(__imp__sub_82D8AED8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r11,32767
	ctx.r11.s64 = 2147418112;
	// li r10,0
	ctx.r10.s64 = 0;
	// ori r5,r11,65535
	ctx.r5.u64 = ctx.r11.u64 | 65535;
	// li r9,1149
	ctx.r9.s64 = 1149;
	// stw r10,-32(r1)
	PPC_STORE_U32(ctx.r1.u32 + -32, ctx.r10.u32);
	// li r8,1399
	ctx.r8.s64 = 1399;
	// stw r5,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r5.u32);
	// li r7,1649
	ctx.r7.s64 = 1649;
	// stw r9,-28(r1)
	PPC_STORE_U32(ctx.r1.u32 + -28, ctx.r9.u32);
	// li r6,1799
	ctx.r6.s64 = 1799;
	// stw r8,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, ctx.r8.u32);
	// stw r7,-20(r1)
	PPC_STORE_U32(ctx.r1.u32 + -20, ctx.r7.u32);
	// addi r11,r1,-32
	ctx.r11.s64 = ctx.r1.s64 + -32;
	// stw r6,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r6.u32);
loc_82D8AF10:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r3,r9
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r9.u32, xer);
	// ble cr6,0x82d8af34
	if (!cr6.gt) goto loc_82D8AF34;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplwi cr6,r10,6
	cr6.compare<uint32_t>(ctx.r10.u32, 6, xer);
	// blt cr6,0x82d8af10
	if (cr6.lt) goto loc_82D8AF10;
	// li r3,5
	ctx.r3.s64 = 5;
	// blr 
	return;
loc_82D8AF34:
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D8AF3C"))) PPC_WEAK_FUNC(sub_82D8AF3C);
PPC_FUNC_IMPL(__imp__sub_82D8AF3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D8AF40"))) PPC_WEAK_FUNC(sub_82D8AF40);
PPC_FUNC_IMPL(__imp__sub_82D8AF40) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82D8AF48;
	__savegprlr_26(ctx, base);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// bl 0x82d86078
	ctx.lr = 0x82D8AF58;
	sub_82D86078(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82d8af70
	if (!cr6.eq) goto loc_82D8AF70;
loc_82D8AF64:
	// li r3,1260
	ctx.r3.s64 = 1260;
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_82D8AF70:
	// lwz r3,116(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d8af64
	if (cr6.eq) goto loc_82D8AF64;
	// bl 0x8290b4c8
	ctx.lr = 0x82D8AF80;
	sub_8290B4C8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d8af64
	if (cr6.eq) goto loc_82D8AF64;
	// lwz r3,116(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// bl 0x825832d8
	ctx.lr = 0x82D8AF94;
	sub_825832D8(ctx, base);
	// bl 0x82d99c10
	ctx.lr = 0x82D8AF98;
	sub_82D99C10(ctx, base);
	// bl 0x825832f0
	ctx.lr = 0x82D8AF9C;
	sub_825832F0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d8af64
	if (cr6.eq) goto loc_82D8AF64;
	// li r5,124
	ctx.r5.s64 = 124;
	// stw r27,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r27.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// bl 0x831cdcf0
	ctx.lr = 0x82D8AFBC;
	sub_831CDCF0(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d98830
	ctx.lr = 0x82D8AFC4;
	sub_82D98830(ctx, base);
	// cmplwi cr6,r3,18
	cr6.compare<uint32_t>(ctx.r3.u32, 18, xer);
	// ble cr6,0x82d8afd8
	if (!cr6.gt) goto loc_82D8AFD8;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_82D8AFD8:
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
	// addi r30,r1,96
	ctx.r30.s64 = ctx.r1.s64 + 96;
	// li r29,13
	ctx.r29.s64 = 13;
loc_82D8AFE4:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d987f8
	ctx.lr = 0x82D8AFF0;
	sub_82D987F8(ctx, base);
	// bl 0x82d983f8
	ctx.lr = 0x82D8AFF4;
	sub_82D983F8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d8b028
	if (cr6.eq) goto loc_82D8B028;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// li r6,2
	ctx.r6.s64 = 2;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r4,96(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// sth r27,88(r1)
	PPC_STORE_U16(ctx.r1.u32 + 88, ctx.r27.u16);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// ld r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x83179518
	ctx.lr = 0x82D8B020;
	sub_83179518(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
loc_82D8B028:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplwi cr6,r31,18
	cr6.compare<uint32_t>(ctx.r31.u32, 18, xer);
	// blt cr6,0x82d8afe4
	if (cr6.lt) goto loc_82D8AFE4;
	// lbz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d8b05c
	if (cr6.eq) goto loc_82D8B05C;
	// lis r11,-31979
	ctx.r11.s64 = -2095775744;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r6,r11,-20040
	ctx.r6.s64 = ctx.r11.s64 + -20040;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x831d88b0
	ctx.lr = 0x82D8B05C;
	sub_831D88B0(ctx, base);
loc_82D8B05C:
	// lbz r10,0(r26)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r26.u32 + 0);
	// li r11,18
	ctx.r11.s64 = 18;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82d8b070
	if (cr6.eq) goto loc_82D8B070;
	// li r11,11
	ctx.r11.s64 = 11;
loc_82D8B070:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d8b098
	if (cr6.eq) goto loc_82D8B098;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
loc_82D8B080:
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x82d8b090
	if (cr6.eq) goto loc_82D8B090;
	// add r27,r11,r27
	ctx.r27.u64 = ctx.r11.u64 + ctx.r27.u64;
loc_82D8B090:
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x82d8b080
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82D8B080;
loc_82D8B098:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D8B0A4"))) PPC_WEAK_FUNC(sub_82D8B0A4);
PPC_FUNC_IMPL(__imp__sub_82D8B0A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D8B0A8"))) PPC_WEAK_FUNC(sub_82D8B0A8);
PPC_FUNC_IMPL(__imp__sub_82D8B0A8) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x82d8af40
	ctx.lr = 0x82D8B0D4;
	sub_82D8AF40(ctx, base);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r10,6
	cr6.compare<int32_t>(ctx.r10.s32, 6, xer);
	// bne cr6,0x82d8b120
	if (!cr6.eq) goto loc_82D8B120;
	// li r11,11
	ctx.r11.s64 = 11;
	// divw r11,r3,r11
	ctx.r11.s32 = PPCDivide(ctx.r3.s32, ctx.r11.s32);
	// cmpwi cr6,r11,99
	cr6.compare<int32_t>(ctx.r11.s32, 99, xer);
	// blt cr6,0x82d8b110
	if (cr6.lt) goto loc_82D8B110;
	// li r11,99
	ctx.r11.s64 = 99;
loc_82D8B0F4:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
loc_82D8B0F8:
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
loc_82D8B110:
	// cmpwi cr6,r11,40
	cr6.compare<int32_t>(ctx.r11.s32, 40, xer);
	// bge cr6,0x82d8b0f4
	if (!cr6.lt) goto loc_82D8B0F4;
	// li r11,40
	ctx.r11.s64 = 40;
	// b 0x82d8b0f4
	goto loc_82D8B0F4;
loc_82D8B120:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// beq cr6,0x82d8b17c
	if (cr6.eq) goto loc_82D8B17C;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// extsw r11,r3
	ctx.r11.s64 = ctx.r3.s32;
	// beq cr6,0x82d8b160
	if (cr6.eq) goto loc_82D8B160;
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// lfs f0,-27168(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -27168);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,-24912(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -24912);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f0,f12,f0,f13
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f0.f64 + ctx.f13.f64));
	// b 0x82d8b1a0
	goto loc_82D8B1A0;
loc_82D8B160:
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lfs f0,-27168(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -27168);
	ctx.f0.f64 = double(temp.f32);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmuls f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// b 0x82d8b1a0
	goto loc_82D8B1A0;
loc_82D8B17C:
	// extsw r11,r3
	ctx.r11.s64 = ctx.r3.s32;
	// lfs f0,-27168(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -27168);
	ctx.f0.f64 = double(temp.f32);
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lfd f13,88(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fmuls f1,f11,f0
	ctx.f1.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// bl 0x831d18f0
	ctx.lr = 0x82D8B19C;
	sub_831D18F0(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
loc_82D8B1A0:
	// fctiwz f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f0.u64);
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmpwi cr6,r11,9
	cr6.compare<int32_t>(ctx.r11.s32, 9, xer);
	// ble cr6,0x82d8b1cc
	if (!cr6.gt) goto loc_82D8B1CC;
	// li r11,9
	ctx.r11.s64 = 9;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// clrlwi r3,r10,24
	ctx.r3.u64 = ctx.r10.u32 & 0xFF;
	// b 0x82d8b0f8
	goto loc_82D8B0F8;
loc_82D8B1CC:
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bge cr6,0x82d8b1d8
	if (!cr6.lt) goto loc_82D8B1D8;
	// li r11,1
	ctx.r11.s64 = 1;
loc_82D8B1D8:
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// clrlwi r3,r10,24
	ctx.r3.u64 = ctx.r10.u32 & 0xFF;
	// b 0x82d8b0f8
	goto loc_82D8B0F8;
}

__attribute__((alias("__imp__sub_82D8B1EC"))) PPC_WEAK_FUNC(sub_82D8B1EC);
PPC_FUNC_IMPL(__imp__sub_82D8B1EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D8B1F0"))) PPC_WEAK_FUNC(sub_82D8B1F0);
PPC_FUNC_IMPL(__imp__sub_82D8B1F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad4
	ctx.lr = 0x82D8B1F8;
	__savegprlr_23(ctx, base);
	// stwu r1,-432(r1)
	ea = -432 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// blt cr6,0x82d8b218
	if (cr6.lt) goto loc_82D8B218;
loc_82D8B20C:
	// li r3,50
	ctx.r3.s64 = 50;
	// addi r1,r1,432
	ctx.r1.s64 = ctx.r1.s64 + 432;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
loc_82D8B218:
	// bl 0x82d86078
	ctx.lr = 0x82D8B21C;
	sub_82D86078(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d8b20c
	if (cr6.eq) goto loc_82D8B20C;
	// lwz r3,116(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d8b20c
	if (cr6.eq) goto loc_82D8B20C;
	// bl 0x8290b4c8
	ctx.lr = 0x82D8B238;
	sub_8290B4C8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d8b20c
	if (cr6.eq) goto loc_82D8B20C;
	// lwz r3,116(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// bl 0x825832d8
	ctx.lr = 0x82D8B24C;
	sub_825832D8(ctx, base);
	// bl 0x82d99c10
	ctx.lr = 0x82D8B250;
	sub_82D99C10(ctx, base);
	// bl 0x825832f0
	ctx.lr = 0x82D8B254;
	sub_825832F0(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d8b20c
	if (cr6.eq) goto loc_82D8B20C;
	// bl 0x831156e8
	ctx.lr = 0x82D8B264;
	sub_831156E8(ctx, base);
	// li r10,32
	ctx.r10.s64 = 32;
	// lwz r25,48(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// addi r11,r1,220
	ctx.r11.s64 = ctx.r1.s64 + 220;
	// li r30,0
	ctx.r30.s64 = 0;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_82D8B278:
	// stw r30,-124(r11)
	PPC_STORE_U32(ctx.r11.u32 + -124, ctx.r30.u32);
	// stwu r30,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r30.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82d8b278
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82D8B278;
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
	// addi r28,r1,96
	ctx.r28.s64 = ctx.r1.s64 + 96;
	// li r26,13
	ctx.r26.s64 = 13;
	// li r27,12
	ctx.r27.s64 = 12;
loc_82D8B294:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82d987f8
	ctx.lr = 0x82D8B2A0;
	sub_82D987F8(ctx, base);
	// bl 0x82d983f8
	ctx.lr = 0x82D8B2A4;
	sub_82D983F8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d8b32c
	if (cr6.eq) goto loc_82D8B32C;
	// sth r30,88(r1)
	PPC_STORE_U16(ctx.r1.u32 + 88, ctx.r30.u16);
	// li r6,2
	ctx.r6.s64 = 2;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// stw r26,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r26.u32);
	// lwz r4,96(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// ld r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x83179518
	ctx.lr = 0x82D8B2D0;
	sub_83179518(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// ld r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x8311bf98
	ctx.lr = 0x82D8B2E0;
	sub_8311BF98(ctx, base);
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x83120738
	ctx.lr = 0x82D8B2F0;
	sub_83120738(ctx, base);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82d8b310
	if (!cr6.eq) goto loc_82D8B310;
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x82d8b310
	if (!cr6.eq) goto loc_82D8B310;
	// clrlwi r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	// stw r11,128(r28)
	PPC_STORE_U32(ctx.r28.u32 + 128, ctx.r11.u32);
loc_82D8B310:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x83158e68
	ctx.lr = 0x82D8B318;
	sub_83158E68(ctx, base);
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// cmpw cr6,r11,r3
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r3.s32, xer);
	// bne cr6,0x82d8b32c
	if (!cr6.eq) goto loc_82D8B32C;
	// clrlwi r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
loc_82D8B32C:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// cmplwi cr6,r29,18
	cr6.compare<uint32_t>(ctx.r29.u32, 18, xer);
	// blt cr6,0x82d8b294
	if (cr6.lt) goto loc_82D8B294;
	// lis r11,-31979
	ctx.r11.s64 = -2095775744;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r6,r11,-20040
	ctx.r6.s64 = ctx.r11.s64 + -20040;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x831d88b0
	ctx.lr = 0x82D8B354;
	sub_831D88B0(ctx, base);
	// lis r10,-31979
	ctx.r10.s64 = -2095775744;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r6,r10,-20040
	ctx.r6.s64 = ctx.r10.s64 + -20040;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x831d88b0
	ctx.lr = 0x82D8B36C;
	sub_831D88B0(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,0(r23)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// bl 0x8314b1d8
	ctx.lr = 0x82D8B378;
	sub_8314B1D8(ctx, base);
	// addi r1,r1,432
	ctx.r1.s64 = ctx.r1.s64 + 432;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D8B380"))) PPC_WEAK_FUNC(sub_82D8B380);
PPC_FUNC_IMPL(__imp__sub_82D8B380) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad0
	ctx.lr = 0x82D8B388;
	__savegprlr_22(ctx, base);
	// stwu r1,-432(r1)
	ea = -432 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x82d86078
	ctx.lr = 0x82D8B398;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d8b604
	if (cr6.eq) goto loc_82D8B604;
	// lwz r3,116(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// bl 0x825832d8
	ctx.lr = 0x82D8B3A8;
	sub_825832D8(ctx, base);
	// bl 0x83102db0
	ctx.lr = 0x82D8B3AC;
	sub_83102DB0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82d9a8a8
	ctx.lr = 0x82D8B3B8;
	sub_82D9A8A8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d8b604
	if (cr6.eq) goto loc_82D8B604;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d9a868
	ctx.lr = 0x82D8B3D0;
	sub_82D9A868(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d8b604
	if (cr6.eq) goto loc_82D8B604;
	// li r23,0
	ctx.r23.s64 = 0;
	// lwz r30,96(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// sth r23,88(r1)
	PPC_STORE_U16(ctx.r1.u32 + 88, ctx.r23.u16);
	// bl 0x831156e8
	ctx.lr = 0x82D8B3F0;
	sub_831156E8(ctx, base);
	// ld r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// lwz r3,48(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// bl 0x8311bf98
	ctx.lr = 0x82D8B3FC;
	sub_8311BF98(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// li r5,224
	ctx.r5.s64 = 224;
	// bl 0x831ce980
	ctx.lr = 0x82D8B40C;
	sub_831CE980(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83179380
	ctx.lr = 0x82D8B418;
	sub_83179380(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d8b604
	if (cr6.eq) goto loc_82D8B604;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82da0a90
	ctx.lr = 0x82D8B42C;
	sub_82DA0A90(ctx, base);
	// lis r11,-31775
	ctx.r11.s64 = -2082406400;
	// stw r31,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r31.u32);
	// li r22,1
	ctx.r22.s64 = 1;
	// addi r11,r11,-14692
	ctx.r11.s64 = ctx.r11.s64 + -14692;
	// stw r30,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r30.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82d8b45c
	if (!cr6.eq) goto loc_82D8B45C;
	// lwz r11,160(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r10,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// b 0x82d8b484
	goto loc_82D8B484;
loc_82D8B45C:
	// lhz r8,156(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + 156);
	// lhz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// cmplw cr6,r8,r7
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, xer);
	// bne cr6,0x82d8b47c
	if (!cr6.eq) goto loc_82D8B47C;
	// lwz r11,160(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
	// beq cr6,0x82d8b480
	if (cr6.eq) goto loc_82D8B480;
loc_82D8B47C:
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
loc_82D8B480:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_82D8B484:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82d8b604
	if (!cr6.eq) goto loc_82D8B604;
	// li r11,12
	ctx.r11.s64 = 12;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x83120738
	ctx.lr = 0x82D8B4A8;
	sub_83120738(ctx, base);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r31,r23
	ctx.r31.u64 = ctx.r23.u64;
	// addi r30,r29,8
	ctx.r30.s64 = ctx.r29.s64 + 8;
	// stw r10,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r10.u32);
loc_82D8B4B8:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82a66ea0
	ctx.lr = 0x82D8B4C4;
	sub_82A66EA0(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// stwu r3,4(r30)
	ea = 4 + ctx.r30.u32;
	PPC_STORE_U32(ea, ctx.r3.u32);
	ctx.r30.u32 = ea;
	// cmplwi cr6,r31,13
	cr6.compare<uint32_t>(ctx.r31.u32, 13, xer);
	// blt cr6,0x82d8b4b8
	if (cr6.lt) goto loc_82D8B4B8;
	// stw r23,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r23.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,40
	ctx.r4.s64 = 40;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x83120738
	ctx.lr = 0x82D8B4E8;
	sub_83120738(ctx, base);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r11,13
	ctx.r11.s64 = 13;
	// li r5,2
	ctx.r5.s64 = 2;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stw r10,64(r29)
	PPC_STORE_U32(ctx.r29.u32 + 64, ctx.r10.u32);
	// bl 0x8314b1c8
	ctx.lr = 0x82D8B508;
	sub_8314B1C8(ctx, base);
	// stb r3,68(r29)
	PPC_STORE_U8(ctx.r29.u32 + 68, ctx.r3.u8);
	// mr r31,r23
	ctx.r31.u64 = ctx.r23.u64;
	// addi r28,r29,69
	ctx.r28.s64 = ctx.r29.s64 + 69;
	// li r30,6
	ctx.r30.s64 = 6;
	// li r24,2
	ctx.r24.s64 = 2;
	// li r25,3
	ctx.r25.s64 = 3;
	// li r26,4
	ctx.r26.s64 = 4;
	// li r27,5
	ctx.r27.s64 = 5;
loc_82D8B528:
	// cmplwi cr6,r31,5
	cr6.compare<uint32_t>(ctx.r31.u32, 5, xer);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// bgt cr6,0x82d8b57c
	if (cr6.gt) goto loc_82D8B57C;
	// mtctr r31
	ctr.u64 = ctx.r31.u64;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, xer);
	// bdzf 4*cr6+eq,0x82d8b558
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82D8B558;
	// bdzf 4*cr6+eq,0x82d8b560
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82D8B560;
	// bdzf 4*cr6+eq,0x82d8b568
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82D8B568;
	// bdzf 4*cr6+eq,0x82d8b570
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82D8B570;
	// bne cr6,0x82d8b578
	if (!cr6.eq) goto loc_82D8B578;
	// stw r23,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r23.u32);
	// b 0x82d8b57c
	goto loc_82D8B57C;
loc_82D8B558:
	// stw r22,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r22.u32);
	// b 0x82d8b57c
	goto loc_82D8B57C;
loc_82D8B560:
	// stw r24,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r24.u32);
	// b 0x82d8b57c
	goto loc_82D8B57C;
loc_82D8B568:
	// stw r25,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r25.u32);
	// b 0x82d8b57c
	goto loc_82D8B57C;
loc_82D8B570:
	// stw r26,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r26.u32);
	// b 0x82d8b57c
	goto loc_82D8B57C;
loc_82D8B578:
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
loc_82D8B57C:
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8315ecb0
	ctx.lr = 0x82D8B58C;
	sub_8315ECB0(ctx, base);
	// stbx r3,r28,r31
	PPC_STORE_U8(ctx.r28.u32 + ctx.r31.u32, ctx.r3.u8);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplwi cr6,r31,6
	cr6.compare<uint32_t>(ctx.r31.u32, 6, xer);
	// blt cr6,0x82d8b528
	if (cr6.lt) goto loc_82D8B528;
	// stw r23,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r23.u32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// li r4,58
	ctx.r4.s64 = 58;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x83120738
	ctx.lr = 0x82D8B5B0;
	sub_83120738(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d8b5c4
	if (cr6.eq) goto loc_82D8B5C4;
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// stw r11,76(r29)
	PPC_STORE_U32(ctx.r29.u32 + 76, ctx.r11.u32);
loc_82D8B5C4:
	// lwz r11,300(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 300);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// stw r23,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r23.u32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// rlwinm r10,r11,16,16,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// sth r10,80(r29)
	PPC_STORE_U16(ctx.r29.u32 + 80, ctx.r10.u16);
	// bl 0x831235b8
	ctx.lr = 0x82D8B5E4;
	sub_831235B8(ctx, base);
	// lwz r9,84(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 84);
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwimi r8,r9,0,14,31
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0x3FFFF) | (ctx.r8.u64 & 0xFFFFFFFFFFFC0000);
	// rotlwi r6,r8,0
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// stw r8,84(r29)
	PPC_STORE_U32(ctx.r29.u32 + 84, ctx.r8.u32);
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwimi r7,r6,0,0,13
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r6.u32, 0) & 0xFFFC0000) | (ctx.r7.u64 & 0xFFFFFFFF0003FFFF);
	// stw r7,84(r29)
	PPC_STORE_U32(ctx.r29.u32 + 84, ctx.r7.u32);
loc_82D8B604:
	// addi r1,r1,432
	ctx.r1.s64 = ctx.r1.s64 + 432;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D8B60C"))) PPC_WEAK_FUNC(sub_82D8B60C);
PPC_FUNC_IMPL(__imp__sub_82D8B60C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D8B610"))) PPC_WEAK_FUNC(sub_82D8B610);
PPC_FUNC_IMPL(__imp__sub_82D8B610) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82D8B618;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82d86078
	ctx.lr = 0x82D8B620;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82d8b634
	if (!cr6.eq) goto loc_82D8B634;
loc_82D8B628:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82D8B634:
	// lwz r3,116(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// bl 0x825832d8
	ctx.lr = 0x82D8B63C;
	sub_825832D8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x82d99c10
	ctx.lr = 0x82D8B644;
	sub_82D99C10(ctx, base);
	// bl 0x825832f0
	ctx.lr = 0x82D8B648;
	sub_825832F0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d8b628
	if (cr6.eq) goto loc_82D8B628;
	// li r31,0
	ctx.r31.s64 = 0;
loc_82D8B658:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d98848
	ctx.lr = 0x82D8B664;
	sub_82D98848(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d8b628
	if (cr6.eq) goto loc_82D8B628;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83102db0
	ctx.lr = 0x82D8B678;
	sub_83102DB0(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82d9a660
	ctx.lr = 0x82D8B684;
	sub_82D9A660(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplwi cr6,r31,3
	cr6.compare<uint32_t>(ctx.r31.u32, 3, xer);
	// blt cr6,0x82d8b658
	if (cr6.lt) goto loc_82D8B658;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D8B69C"))) PPC_WEAK_FUNC(sub_82D8B69C);
PPC_FUNC_IMPL(__imp__sub_82D8B69C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D8B6A0"))) PPC_WEAK_FUNC(sub_82D8B6A0);
PPC_FUNC_IMPL(__imp__sub_82D8B6A0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// stb r11,99(r3)
	PPC_STORE_U8(ctx.r3.u32 + 99, ctx.r11.u8);
	// lwz r9,4(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stb r9,100(r3)
	PPC_STORE_U8(ctx.r3.u32 + 100, ctx.r9.u8);
	// lwz r7,8(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// stb r7,101(r3)
	PPC_STORE_U8(ctx.r3.u32 + 101, ctx.r7.u8);
	// lwz r5,12(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// stb r5,102(r3)
	PPC_STORE_U8(ctx.r3.u32 + 102, ctx.r5.u8);
	// lwz r10,16(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// stb r10,103(r3)
	PPC_STORE_U8(ctx.r3.u32 + 103, ctx.r10.u8);
	// lwz r8,20(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// stb r8,104(r3)
	PPC_STORE_U8(ctx.r3.u32 + 104, ctx.r8.u8);
	// lwz r6,24(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	// stb r6,105(r3)
	PPC_STORE_U8(ctx.r3.u32 + 105, ctx.r6.u8);
	// lwz r11,28(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,11
	cr6.compare<uint32_t>(ctx.r11.u32, 11, xer);
	// bge cr6,0x82d8b6ec
	if (!cr6.lt) goto loc_82D8B6EC;
	// stb r11,140(r3)
	PPC_STORE_U8(ctx.r3.u32 + 140, ctx.r11.u8);
loc_82D8B6EC:
	// lwz r11,32(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82d8b6fc
	if (!cr6.eq) goto loc_82D8B6FC;
	// li r11,2
	ctx.r11.s64 = 2;
loc_82D8B6FC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(ctx.r11.u32, 4, xer);
	// bge cr6,0x82d8b70c
	if (!cr6.lt) goto loc_82D8B70C;
	// stb r11,141(r3)
	PPC_STORE_U8(ctx.r3.u32 + 141, ctx.r11.u8);
loc_82D8B70C:
	// lwz r11,36(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 36);
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,11
	cr6.compare<uint32_t>(ctx.r11.u32, 11, xer);
	// bge cr6,0x82d8b720
	if (!cr6.lt) goto loc_82D8B720;
	// stb r11,142(r3)
	PPC_STORE_U8(ctx.r3.u32 + 142, ctx.r11.u8);
loc_82D8B720:
	// lwz r11,40(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 40);
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,11
	cr6.compare<uint32_t>(ctx.r11.u32, 11, xer);
	// bge cr6,0x82d8b734
	if (!cr6.lt) goto loc_82D8B734;
	// stb r11,143(r3)
	PPC_STORE_U8(ctx.r3.u32 + 143, ctx.r11.u8);
loc_82D8B734:
	// lwz r11,44(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82d8b744
	if (!cr6.eq) goto loc_82D8B744;
	// li r11,2
	ctx.r11.s64 = 2;
loc_82D8B744:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(ctx.r11.u32, 4, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// stb r11,144(r3)
	PPC_STORE_U8(ctx.r3.u32 + 144, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D8B758"))) PPC_WEAK_FUNC(sub_82D8B758);
PPC_FUNC_IMPL(__imp__sub_82D8B758) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r3,13
	ctx.r3.s64 = 13;
	// cmplwi cr6,r11,83
	cr6.compare<uint32_t>(ctx.r11.u32, 83, xer);
	// bgtlr cr6
	if (cr6.gt) return;
	// lis r12,-32039
	ctx.r12.s64 = -2099707904;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-18560
	ctx.r12.s64 = ctx.r12.s64 + -18560;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_82D8B8D0;
	case 1:
		goto loc_82D8B8D0;
	case 2:
		goto loc_82D8B8D0;
	case 3:
		goto loc_82D8B8D0;
	case 4:
		goto loc_82D8B8D0;
	case 5:
		goto loc_82D8B8D0;
	case 6:
		goto loc_82D8B8D0;
	case 7:
		goto loc_82D8B8D0;
	case 8:
		goto loc_82D8B8D0;
	case 9:
		goto loc_82D8B8D0;
	case 10:
		goto loc_82D8B8D0;
	case 11:
		goto loc_82D8B8D0;
	case 12:
		goto loc_82D8B8D0;
	case 13:
		goto loc_82D8B8D8;
	case 14:
		goto loc_82D8B8D8;
	case 15:
		goto loc_82D8B8D8;
	case 16:
		goto loc_82D8B8D8;
	case 17:
		goto loc_82D8B8E0;
	case 18:
		goto loc_82D8B8E0;
	case 19:
		goto loc_82D8B8E0;
	case 20:
		goto loc_82D8B8E0;
	case 21:
		goto loc_82D8B8E0;
	case 22:
		goto loc_82D8B8E0;
	case 23:
		goto loc_82D8B8E0;
	case 24:
		goto loc_82D8B8E0;
	case 25:
		goto loc_82D8B8E0;
	case 26:
		goto loc_82D8B8E0;
	case 27:
		goto loc_82D8B8E0;
	case 28:
		goto loc_82D8B8E0;
	case 29:
		goto loc_82D8B8E0;
	case 30:
		goto loc_82D8B8E8;
	case 31:
		goto loc_82D8B8E8;
	case 32:
		goto loc_82D8B8E8;
	case 33:
		goto loc_82D8B8F0;
	case 34:
		goto loc_82D8B8F0;
	case 35:
		goto loc_82D8B8F0;
	case 36:
		goto loc_82D8B8F0;
	case 37:
		goto loc_82D8B8F0;
	case 38:
		goto loc_82D8B8F0;
	case 39:
		goto loc_82D8B8F0;
	case 40:
		goto loc_82D8B8F0;
	case 41:
		goto loc_82D8B8F0;
	case 42:
		goto loc_82D8B8F0;
	case 43:
		goto loc_82D8B8F0;
	case 44:
		goto loc_82D8B8F0;
	case 45:
		goto loc_82D8B8F0;
	case 46:
		goto loc_82D8B8F0;
	case 47:
		goto loc_82D8B8F0;
	case 48:
		goto loc_82D8B8F0;
	case 49:
		goto loc_82D8B8F0;
	case 50:
		goto loc_82D8B8F0;
	case 51:
		goto loc_82D8B8F0;
	case 52:
		goto loc_82D8B8F0;
	case 53:
		goto loc_82D8B8F0;
	case 54:
		goto loc_82D8B8F0;
	case 55:
		goto loc_82D8B8F0;
	case 56:
		goto loc_82D8B8F8;
	case 57:
		goto loc_82D8B8F8;
	case 58:
		goto loc_82D8B900;
	case 59:
		goto loc_82D8B900;
	case 60:
		goto loc_82D8B900;
	case 61:
		goto loc_82D8B900;
	case 62:
		goto loc_82D8B900;
	case 63:
		goto loc_82D8B900;
	case 64:
		goto loc_82D8B900;
	case 65:
		goto loc_82D8B900;
	case 66:
		goto loc_82D8B900;
	case 67:
		goto loc_82D8B900;
	case 68:
		goto loc_82D8B900;
	case 69:
		goto loc_82D8B900;
	case 70:
		goto loc_82D8B900;
	case 71:
		goto loc_82D8B900;
	case 72:
		goto loc_82D8B908;
	case 73:
		goto loc_82D8B910;
	case 74:
		goto loc_82D8B918;
	case 75:
		goto loc_82D8B920;
	case 76:
		goto loc_82D8B928;
	case 77:
		goto loc_82D8B930;
	case 78:
		goto loc_82D8B930;
	case 79:
		goto loc_82D8B930;
	case 80:
		goto loc_82D8B930;
	case 81:
		goto loc_82D8B930;
	case 82:
		goto loc_82D8B930;
	case 83:
		goto loc_82D8B930;
	default:
		return;
	}
	// lwz r22,-18224(r24)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r24.u32 + -18224);
	// lwz r22,-18224(r24)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r24.u32 + -18224);
	// lwz r22,-18224(r24)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r24.u32 + -18224);
	// lwz r22,-18224(r24)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r24.u32 + -18224);
	// lwz r22,-18224(r24)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r24.u32 + -18224);
	// lwz r22,-18224(r24)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r24.u32 + -18224);
	// lwz r22,-18224(r24)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r24.u32 + -18224);
	// lwz r22,-18224(r24)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r24.u32 + -18224);
	// lwz r22,-18224(r24)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r24.u32 + -18224);
	// lwz r22,-18224(r24)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r24.u32 + -18224);
	// lwz r22,-18224(r24)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r24.u32 + -18224);
	// lwz r22,-18224(r24)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r24.u32 + -18224);
	// lwz r22,-18224(r24)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r24.u32 + -18224);
	// lwz r22,-18216(r24)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r24.u32 + -18216);
	// lwz r22,-18216(r24)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r24.u32 + -18216);
	// lwz r22,-18216(r24)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r24.u32 + -18216);
	// lwz r22,-18216(r24)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r24.u32 + -18216);
	// lwz r22,-18208(r24)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r24.u32 + -18208);
	// lwz r22,-18208(r24)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r24.u32 + -18208);
	// lwz r22,-18208(r24)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r24.u32 + -18208);
	// lwz r22,-18208(r24)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r24.u32 + -18208);
	// lwz r22,-18208(r24)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r24.u32 + -18208);
	// lwz r22,-18208(r24)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r24.u32 + -18208);
	// lwz r22,-18208(r24)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r24.u32 + -18208);
	// lwz r22,-18208(r24)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r24.u32 + -18208);
	// lwz r22,-18208(r24)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r24.u32 + -18208);
	// lwz r22,-18208(r24)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r24.u32 + -18208);
	// lwz r22,-18208(r24)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r24.u32 + -18208);
	// lwz r22,-18208(r24)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r24.u32 + -18208);
	// lwz r22,-18208(r24)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r24.u32 + -18208);
	// lwz r22,-18200(r24)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r24.u32 + -18200);
	// lwz r22,-18200(r24)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r24.u32 + -18200);
	// lwz r22,-18200(r24)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r24.u32 + -18200);
	// lwz r22,-18192(r24)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r24.u32 + -18192);
	// lwz r22,-18192(r24)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r24.u32 + -18192);
	// lwz r22,-18192(r24)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r24.u32 + -18192);
	// lwz r22,-18192(r24)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r24.u32 + -18192);
	// lwz r22,-18192(r24)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r24.u32 + -18192);
	// lwz r22,-18192(r24)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r24.u32 + -18192);
	// lwz r22,-18192(r24)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r24.u32 + -18192);
	// lwz r22,-18192(r24)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r24.u32 + -18192);
	// lwz r22,-18192(r24)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r24.u32 + -18192);
	// lwz r22,-18192(r24)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r24.u32 + -18192);
	// lwz r22,-18192(r24)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r24.u32 + -18192);
	// lwz r22,-18192(r24)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r24.u32 + -18192);
	// lwz r22,-18192(r24)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r24.u32 + -18192);
	// lwz r22,-18192(r24)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r24.u32 + -18192);
	// lwz r22,-18192(r24)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r24.u32 + -18192);
	// lwz r22,-18192(r24)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r24.u32 + -18192);
	// lwz r22,-18192(r24)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r24.u32 + -18192);
	// lwz r22,-18192(r24)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r24.u32 + -18192);
	// lwz r22,-18192(r24)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r24.u32 + -18192);
	// lwz r22,-18192(r24)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r24.u32 + -18192);
	// lwz r22,-18192(r24)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r24.u32 + -18192);
	// lwz r22,-18192(r24)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r24.u32 + -18192);
	// lwz r22,-18192(r24)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r24.u32 + -18192);
	// lwz r22,-18184(r24)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r24.u32 + -18184);
	// lwz r22,-18184(r24)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r24.u32 + -18184);
	// lwz r22,-18176(r24)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r24.u32 + -18176);
	// lwz r22,-18176(r24)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r24.u32 + -18176);
	// lwz r22,-18176(r24)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r24.u32 + -18176);
	// lwz r22,-18176(r24)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r24.u32 + -18176);
	// lwz r22,-18176(r24)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r24.u32 + -18176);
	// lwz r22,-18176(r24)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r24.u32 + -18176);
	// lwz r22,-18176(r24)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r24.u32 + -18176);
	// lwz r22,-18176(r24)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r24.u32 + -18176);
	// lwz r22,-18176(r24)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r24.u32 + -18176);
	// lwz r22,-18176(r24)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r24.u32 + -18176);
	// lwz r22,-18176(r24)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r24.u32 + -18176);
	// lwz r22,-18176(r24)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r24.u32 + -18176);
	// lwz r22,-18176(r24)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r24.u32 + -18176);
	// lwz r22,-18176(r24)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r24.u32 + -18176);
	// lwz r22,-18168(r24)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r24.u32 + -18168);
	// lwz r22,-18160(r24)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r24.u32 + -18160);
	// lwz r22,-18152(r24)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r24.u32 + -18152);
	// lwz r22,-18144(r24)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r24.u32 + -18144);
	// lwz r22,-18136(r24)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r24.u32 + -18136);
	// lwz r22,-18128(r24)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r24.u32 + -18128);
	// lwz r22,-18128(r24)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r24.u32 + -18128);
	// lwz r22,-18128(r24)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r24.u32 + -18128);
	// lwz r22,-18128(r24)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r24.u32 + -18128);
	// lwz r22,-18128(r24)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r24.u32 + -18128);
	// lwz r22,-18128(r24)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r24.u32 + -18128);
	// lwz r22,-18128(r24)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r24.u32 + -18128);
loc_82D8B8D0:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82D8B8D8:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_82D8B8E0:
	// li r3,2
	ctx.r3.s64 = 2;
	// blr 
	return;
loc_82D8B8E8:
	// li r3,3
	ctx.r3.s64 = 3;
	// blr 
	return;
loc_82D8B8F0:
	// li r3,4
	ctx.r3.s64 = 4;
	// blr 
	return;
loc_82D8B8F8:
	// li r3,5
	ctx.r3.s64 = 5;
	// blr 
	return;
loc_82D8B900:
	// li r3,6
	ctx.r3.s64 = 6;
	// blr 
	return;
loc_82D8B908:
	// li r3,7
	ctx.r3.s64 = 7;
	// blr 
	return;
loc_82D8B910:
	// li r3,8
	ctx.r3.s64 = 8;
	// blr 
	return;
loc_82D8B918:
	// li r3,9
	ctx.r3.s64 = 9;
	// blr 
	return;
loc_82D8B920:
	// li r3,10
	ctx.r3.s64 = 10;
	// blr 
	return;
loc_82D8B928:
	// li r3,11
	ctx.r3.s64 = 11;
	// blr 
	return;
loc_82D8B930:
	// li r3,12
	ctx.r3.s64 = 12;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D8B938"))) PPC_WEAK_FUNC(sub_82D8B938);
PPC_FUNC_IMPL(__imp__sub_82D8B938) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82D8B940;
	__savegprlr_26(ctx, base);
	// lis r11,25
	ctx.r11.s64 = 1638400;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r8,560
	ctx.r8.s64 = 36700160;
	// ori r11,r11,507
	ctx.r11.u64 = ctx.r11.u64 | 507;
	// ori r8,r8,609
	ctx.r8.u64 = ctx.r8.u64 | 609;
	// lis r7,33
	ctx.r7.s64 = 2162688;
	// stw r11,-156(r1)
	PPC_STORE_U32(ctx.r1.u32 + -156, ctx.r11.u32);
	// lis r6,35
	ctx.r6.s64 = 2293760;
	// stw r8,-148(r1)
	PPC_STORE_U32(ctx.r1.u32 + -148, ctx.r8.u32);
	// li r11,2
	ctx.r11.s64 = 2;
	// ori r7,r7,5
	ctx.r7.u64 = ctx.r7.u64 | 5;
	// ori r6,r6,5
	ctx.r6.u64 = ctx.r6.u64 | 5;
	// stw r11,-144(r1)
	PPC_STORE_U32(ctx.r1.u32 + -144, ctx.r11.u32);
	// li r8,3
	ctx.r8.s64 = 3;
	// stw r7,-140(r1)
	PPC_STORE_U32(ctx.r1.u32 + -140, ctx.r7.u32);
	// lis r5,33
	ctx.r5.s64 = 2162688;
	// stw r6,-132(r1)
	PPC_STORE_U32(ctx.r1.u32 + -132, ctx.r6.u32);
	// lis r4,35
	ctx.r4.s64 = 2293760;
	// stw r8,-136(r1)
	PPC_STORE_U32(ctx.r1.u32 + -136, ctx.r8.u32);
	// lis r3,560
	ctx.r3.s64 = 36700160;
	// li r11,4
	ctx.r11.s64 = 4;
	// ori r8,r5,8
	ctx.r8.u64 = ctx.r5.u64 | 8;
	// ori r6,r4,30
	ctx.r6.u64 = ctx.r4.u64 | 30;
	// stw r11,-128(r1)
	PPC_STORE_U32(ctx.r1.u32 + -128, ctx.r11.u32);
	// li r7,5
	ctx.r7.s64 = 5;
	// stw r8,-124(r1)
	PPC_STORE_U32(ctx.r1.u32 + -124, ctx.r8.u32);
	// lis r31,29
	ctx.r31.s64 = 1900544;
	// stw r6,-116(r1)
	PPC_STORE_U32(ctx.r1.u32 + -116, ctx.r6.u32);
	// lis r30,560
	ctx.r30.s64 = 36700160;
	// stw r7,-120(r1)
	PPC_STORE_U32(ctx.r1.u32 + -120, ctx.r7.u32);
	// ori r4,r3,426
	ctx.r4.u64 = ctx.r3.u64 | 426;
	// li r3,7
	ctx.r3.s64 = 7;
	// ori r11,r31,336
	ctx.r11.u64 = ctx.r31.u64 | 336;
	// stw r4,-108(r1)
	PPC_STORE_U32(ctx.r1.u32 + -108, ctx.r4.u32);
	// li r5,6
	ctx.r5.s64 = 6;
	// stw r3,-104(r1)
	PPC_STORE_U32(ctx.r1.u32 + -104, ctx.r3.u32);
	// li r8,8
	ctx.r8.s64 = 8;
	// stw r11,-100(r1)
	PPC_STORE_U32(ctx.r1.u32 + -100, ctx.r11.u32);
	// ori r7,r30,345
	ctx.r7.u64 = ctx.r30.u64 | 345;
	// stw r5,-112(r1)
	PPC_STORE_U32(ctx.r1.u32 + -112, ctx.r5.u32);
	// li r6,9
	ctx.r6.s64 = 9;
	// stw r8,-96(r1)
	PPC_STORE_U32(ctx.r1.u32 + -96, ctx.r8.u32);
	// lis r29,560
	ctx.r29.s64 = 36700160;
	// stw r7,-92(r1)
	PPC_STORE_U32(ctx.r1.u32 + -92, ctx.r7.u32);
	// lis r28,35
	ctx.r28.s64 = 2293760;
	// stw r6,-88(r1)
	PPC_STORE_U32(ctx.r1.u32 + -88, ctx.r6.u32);
	// lis r27,560
	ctx.r27.s64 = 36700160;
	// lis r3,35
	ctx.r3.s64 = 2293760;
	// li r11,11
	ctx.r11.s64 = 11;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r3,-76(r1)
	PPC_STORE_U32(ctx.r1.u32 + -76, ctx.r3.u32);
	// li r26,1
	ctx.r26.s64 = 1;
	// stw r11,-72(r1)
	PPC_STORE_U32(ctx.r1.u32 + -72, ctx.r11.u32);
	// ori r5,r29,364
	ctx.r5.u64 = ctx.r29.u64 | 364;
	// stw r10,-160(r1)
	PPC_STORE_U32(ctx.r1.u32 + -160, ctx.r10.u32);
	// li r4,10
	ctx.r4.s64 = 10;
	// stw r26,-152(r1)
	PPC_STORE_U32(ctx.r1.u32 + -152, ctx.r26.u32);
	// ori r8,r28,365
	ctx.r8.u64 = ctx.r28.u64 | 365;
	// stw r5,-84(r1)
	PPC_STORE_U32(ctx.r1.u32 + -84, ctx.r5.u32);
	// li r7,12
	ctx.r7.s64 = 12;
	// stw r4,-80(r1)
	PPC_STORE_U32(ctx.r1.u32 + -80, ctx.r4.u32);
	// ori r6,r27,428
	ctx.r6.u64 = ctx.r27.u64 | 428;
	// stw r8,-68(r1)
	PPC_STORE_U32(ctx.r1.u32 + -68, ctx.r8.u32);
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// stw r7,-64(r1)
	PPC_STORE_U32(ctx.r1.u32 + -64, ctx.r7.u32);
	// stw r6,-60(r1)
	PPC_STORE_U32(ctx.r1.u32 + -60, ctx.r6.u32);
	// addi r11,r1,-160
	ctx.r11.s64 = ctx.r1.s64 + -160;
loc_82D8BA4C:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r9,r8
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, xer);
	// beq cr6,0x82d8ba6c
	if (cr6.eq) goto loc_82D8BA6C;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmplwi cr6,r10,13
	cr6.compare<uint32_t>(ctx.r10.u32, 13, xer);
	// blt cr6,0x82d8ba4c
	if (cr6.lt) goto loc_82D8BA4C;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_82D8BA6C:
	// rlwinm r11,r10,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r10,r1,-156
	ctx.r10.s64 = ctx.r1.s64 + -156;
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D8BA7C"))) PPC_WEAK_FUNC(sub_82D8BA7C);
PPC_FUNC_IMPL(__imp__sub_82D8BA7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D8BA80"))) PPC_WEAK_FUNC(sub_82D8BA80);
PPC_FUNC_IMPL(__imp__sub_82D8BA80) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// addi r11,r11,27660
	ctx.r11.s64 = ctx.r11.s64 + 27660;
	// addi r10,r11,-96
	ctx.r10.s64 = ctx.r11.s64 + -96;
	// addi r9,r11,-80
	ctx.r9.s64 = ctx.r11.s64 + -80;
	// addi r8,r11,-64
	ctx.r8.s64 = ctx.r11.s64 + -64;
	// stw r10,-32(r1)
	PPC_STORE_U32(ctx.r1.u32 + -32, ctx.r10.u32);
	// addi r7,r11,-48
	ctx.r7.s64 = ctx.r11.s64 + -48;
	// stw r9,-28(r1)
	PPC_STORE_U32(ctx.r1.u32 + -28, ctx.r9.u32);
	// addi r6,r11,-32
	ctx.r6.s64 = ctx.r11.s64 + -32;
	// stw r8,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, ctx.r8.u32);
	// stw r7,-20(r1)
	PPC_STORE_U32(ctx.r1.u32 + -20, ctx.r7.u32);
	// stw r6,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r6.u32);
	// bne cr6,0x82d8bac0
	if (!cr6.eq) goto loc_82D8BAC0;
	// addi r3,r11,-16
	ctx.r3.s64 = ctx.r11.s64 + -16;
	// blr 
	return;
loc_82D8BAC0:
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// bne cr6,0x82d8bad0
	if (!cr6.eq) goto loc_82D8BAD0;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82D8BAD0:
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82d8bafc
	if (!cr6.eq) goto loc_82D8BAFC;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82d8bafc
	if (cr6.eq) goto loc_82D8BAFC;
	// cmplwi cr6,r4,5
	cr6.compare<uint32_t>(ctx.r4.u32, 5, xer);
	// bgt cr6,0x82d8bafc
	if (cr6.gt) goto loc_82D8BAFC;
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,-32
	ctx.r10.s64 = ctx.r1.s64 + -32;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r3,-4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// blr 
	return;
loc_82D8BAFC:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D8BB04"))) PPC_WEAK_FUNC(sub_82D8BB04);
PPC_FUNC_IMPL(__imp__sub_82D8BB04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D8BB08"))) PPC_WEAK_FUNC(sub_82D8BB08);
PPC_FUNC_IMPL(__imp__sub_82D8BB08) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,108(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 108);
	// li r3,0
	ctx.r3.s64 = 0;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// bltlr cr6
	if (cr6.lt) return;
	// cmpwi cr6,r11,5
	cr6.compare<int32_t>(ctx.r11.s32, 5, xer);
	// bgtlr cr6
	if (cr6.gt) return;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D8BB28"))) PPC_WEAK_FUNC(sub_82D8BB28);
PPC_FUNC_IMPL(__imp__sub_82D8BB28) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82D8BB30;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// bl 0x82d86078
	ctx.lr = 0x82D8BB40;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82d8bb54
	if (!cr6.eq) goto loc_82D8BB54;
loc_82D8BB48:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82D8BB54:
	// lwz r31,116(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8290b4c8
	ctx.lr = 0x82D8BB60;
	sub_8290B4C8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d8bb48
	if (cr6.eq) goto loc_82D8BB48;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831f8200
	ctx.lr = 0x82D8BB74;
	sub_831F8200(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble cr6,0x82d8bb8c
	if (!cr6.gt) goto loc_82D8BB8C;
	// cmpwi cr6,r11,5
	cr6.compare<int32_t>(ctx.r11.s32, 5, xer);
	// bgt cr6,0x82d8bb8c
	if (cr6.gt) goto loc_82D8BB8C;
	// li r29,1
	ctx.r29.s64 = 1;
loc_82D8BB8C:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x82d8bb98
	if (cr6.eq) goto loc_82D8BB98;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
loc_82D8BB98:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D8BBA4"))) PPC_WEAK_FUNC(sub_82D8BBA4);
PPC_FUNC_IMPL(__imp__sub_82D8BBA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D8BBA8"))) PPC_WEAK_FUNC(sub_82D8BBA8);
PPC_FUNC_IMPL(__imp__sub_82D8BBA8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82D8BBB0;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// bl 0x82d86078
	ctx.lr = 0x82D8BBC4;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82d8bbd8
	if (!cr6.eq) goto loc_82D8BBD8;
loc_82D8BBCC:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82D8BBD8:
	// lwz r3,116(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// bl 0x825832d8
	ctx.lr = 0x82D8BBE0;
	sub_825832D8(ctx, base);
	// bl 0x82d99c10
	ctx.lr = 0x82D8BBE4;
	sub_82D99C10(ctx, base);
	// bl 0x825832f0
	ctx.lr = 0x82D8BBE8;
	sub_825832F0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d8bbcc
	if (cr6.eq) goto loc_82D8BBCC;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d98938
	ctx.lr = 0x82D8BBF8;
	sub_82D98938(ctx, base);
	// fctidz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f1.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f1.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// bgt cr6,0x82d8bc18
	if (cr6.gt) goto loc_82D8BC18;
	// cmplw cr6,r11,r30
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, xer);
	// bgt cr6,0x82d8bc18
	if (cr6.gt) goto loc_82D8BC18;
	// li r29,1
	ctx.r29.s64 = 1;
loc_82D8BC18:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D8BC24"))) PPC_WEAK_FUNC(sub_82D8BC24);
PPC_FUNC_IMPL(__imp__sub_82D8BC24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D8BC28"))) PPC_WEAK_FUNC(sub_82D8BC28);
PPC_FUNC_IMPL(__imp__sub_82D8BC28) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82D8BC30;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// bl 0x82d86078
	ctx.lr = 0x82D8BC44;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82d8bc58
	if (!cr6.eq) goto loc_82D8BC58;
loc_82D8BC4C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82D8BC58:
	// lwz r3,116(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// bl 0x825832d8
	ctx.lr = 0x82D8BC60;
	sub_825832D8(ctx, base);
	// bl 0x82d99c10
	ctx.lr = 0x82D8BC64;
	sub_82D99C10(ctx, base);
	// bl 0x825832f0
	ctx.lr = 0x82D8BC68;
	sub_825832F0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d8bc4c
	if (cr6.eq) goto loc_82D8BC4C;
	// bl 0x82d999a0
	ctx.lr = 0x82D8BC74;
	sub_82D999A0(ctx, base);
	// cmplw cr6,r31,r3
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r3.u32, xer);
	// bgt cr6,0x82d8bc88
	if (cr6.gt) goto loc_82D8BC88;
	// cmplw cr6,r3,r30
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r30.u32, xer);
	// bgt cr6,0x82d8bc88
	if (cr6.gt) goto loc_82D8BC88;
	// li r29,1
	ctx.r29.s64 = 1;
loc_82D8BC88:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D8BC94"))) PPC_WEAK_FUNC(sub_82D8BC94);
PPC_FUNC_IMPL(__imp__sub_82D8BC94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D8BC98"))) PPC_WEAK_FUNC(sub_82D8BC98);
PPC_FUNC_IMPL(__imp__sub_82D8BC98) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x82D8BCA0;
	__savegprlr_25(ctx, base);
	// stwu r1,-384(r1)
	ea = -384 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r26,0
	ctx.r26.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r28,r26
	ctx.r28.u64 = ctx.r26.u64;
	// bl 0x831156e8
	ctx.lr = 0x82D8BCB8;
	sub_831156E8(ctx, base);
	// lwz r29,48(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// bl 0x82d86078
	ctx.lr = 0x82D8BCC0;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82d8bcd4
	if (!cr6.eq) goto loc_82D8BCD4;
loc_82D8BCC8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_82D8BCD4:
	// lwz r3,116(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// bl 0x825832d8
	ctx.lr = 0x82D8BCDC;
	sub_825832D8(ctx, base);
	// bl 0x82d99c10
	ctx.lr = 0x82D8BCE0;
	sub_82D99C10(ctx, base);
	// bl 0x825832f0
	ctx.lr = 0x82D8BCE4;
	sub_825832F0(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d8bcc8
	if (cr6.eq) goto loc_82D8BCC8;
	// mr r31,r26
	ctx.r31.u64 = ctx.r26.u64;
loc_82D8BCF4:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82d987f8
	ctx.lr = 0x82D8BD00;
	sub_82D987F8(ctx, base);
	// bl 0x82d983f8
	ctx.lr = 0x82D8BD04;
	sub_82D983F8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d8bd54
	if (cr6.eq) goto loc_82D8BD54;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// sth r26,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r26.u16);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x8311bf98
	ctx.lr = 0x82D8BD24;
	sub_8311BF98(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// li r5,224
	ctx.r5.s64 = 224;
	// bl 0x831ce980
	ctx.lr = 0x82D8BD34;
	sub_831CE980(ctx, base);
	// lwz r9,284(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 284);
	// clrlwi r10,r30,16
	ctx.r10.u64 = ctx.r30.u32 & 0xFFFF;
	// rlwinm r8,r9,16,16,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0xFFFF;
	// cmplw cr6,r8,r10
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, xer);
	// bne cr6,0x82d8bd54
	if (!cr6.eq) goto loc_82D8BD54;
	// clrlwi r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r28,r11,24
	ctx.r28.u64 = ctx.r11.u32 & 0xFF;
loc_82D8BD54:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplwi cr6,r31,18
	cr6.compare<uint32_t>(ctx.r31.u32, 18, xer);
	// blt cr6,0x82d8bcf4
	if (cr6.lt) goto loc_82D8BCF4;
	// clrlwi r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	// clrlwi r10,r25,24
	ctx.r10.u64 = ctx.r25.u32 & 0xFF;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// bgt cr6,0x82d8bd74
	if (cr6.gt) goto loc_82D8BD74;
	// li r26,1
	ctx.r26.s64 = 1;
loc_82D8BD74:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D8BD80"))) PPC_WEAK_FUNC(sub_82D8BD80);
PPC_FUNC_IMPL(__imp__sub_82D8BD80) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x82D8BD88;
	__savegprlr_25(ctx, base);
	// stwu r1,-400(r1)
	ea = -400 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	ctx.r31.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r27,r31
	ctx.r27.u64 = ctx.r31.u64;
	// bl 0x831156e8
	ctx.lr = 0x82D8BDA0;
	sub_831156E8(ctx, base);
	// lwz r29,48(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// bl 0x82d86078
	ctx.lr = 0x82D8BDA8;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82d8bdbc
	if (!cr6.eq) goto loc_82D8BDBC;
loc_82D8BDB0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_82D8BDBC:
	// lwz r3,116(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// bl 0x825832d8
	ctx.lr = 0x82D8BDC4;
	sub_825832D8(ctx, base);
	// bl 0x82d99c10
	ctx.lr = 0x82D8BDC8;
	sub_82D99C10(ctx, base);
	// bl 0x825832f0
	ctx.lr = 0x82D8BDCC;
	sub_825832F0(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d8bdb0
	if (cr6.eq) goto loc_82D8BDB0;
	// mr r28,r31
	ctx.r28.u64 = ctx.r31.u64;
loc_82D8BDDC:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82d987f8
	ctx.lr = 0x82D8BDE8;
	sub_82D987F8(ctx, base);
	// bl 0x82d983f8
	ctx.lr = 0x82D8BDEC;
	sub_82D983F8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d8be74
	if (cr6.eq) goto loc_82D8BE74;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// sth r31,88(r1)
	PPC_STORE_U16(ctx.r1.u32 + 88, ctx.r31.u16);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// ld r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x8311bf98
	ctx.lr = 0x82D8BE0C;
	sub_8311BF98(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// li r5,224
	ctx.r5.s64 = 224;
	// bl 0x831ce980
	ctx.lr = 0x82D8BE1C;
	sub_831CE980(ctx, base);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x831235b8
	ctx.lr = 0x82D8BE30;
	sub_831235B8(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// xor r10,r11,r30
	ctx.r10.u64 = ctx.r11.u64 ^ ctx.r30.u64;
	// rlwinm r9,r10,0,0,13
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFC0000;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82d8be58
	if (!cr6.eq) goto loc_82D8BE58;
	// xor r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r30.u64;
	// clrlwi r10,r11,14
	ctx.r10.u64 = ctx.r11.u32 & 0x3FFFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82d8be5c
	if (cr6.eq) goto loc_82D8BE5C;
loc_82D8BE58:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_82D8BE5C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d8be74
	if (cr6.eq) goto loc_82D8BE74;
	// clrlwi r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r27,r11,24
	ctx.r27.u64 = ctx.r11.u32 & 0xFF;
loc_82D8BE74:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// cmplwi cr6,r28,18
	cr6.compare<uint32_t>(ctx.r28.u32, 18, xer);
	// blt cr6,0x82d8bddc
	if (cr6.lt) goto loc_82D8BDDC;
	// clrlwi r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	// clrlwi r10,r25,24
	ctx.r10.u64 = ctx.r25.u32 & 0xFF;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// bgt cr6,0x82d8be94
	if (cr6.gt) goto loc_82D8BE94;
	// li r31,1
	ctx.r31.s64 = 1;
loc_82D8BE94:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D8BEA0"))) PPC_WEAK_FUNC(sub_82D8BEA0);
PPC_FUNC_IMPL(__imp__sub_82D8BEA0) {
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
	// bl 0x82d86078
	ctx.lr = 0x82D8BEB4;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d8bef4
	if (cr6.eq) goto loc_82D8BEF4;
	// lwz r31,116(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8290b4c8
	ctx.lr = 0x82D8BEC8;
	sub_8290B4C8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d8bef4
	if (cr6.eq) goto loc_82D8BEF4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825832f0
	ctx.lr = 0x82D8BEDC;
	sub_825832F0(ctx, base);
	// lbz r3,5776(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 5776);
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
loc_82D8BEF4:
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

__attribute__((alias("__imp__sub_82D8BF0C"))) PPC_WEAK_FUNC(sub_82D8BF0C);
PPC_FUNC_IMPL(__imp__sub_82D8BF0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D8BF10"))) PPC_WEAK_FUNC(sub_82D8BF10);
PPC_FUNC_IMPL(__imp__sub_82D8BF10) {
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
	// bl 0x82d8a698
	ctx.lr = 0x82D8BF20;
	sub_82D8A698(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82d8bf40
	if (!cr6.eq) goto loc_82D8BF40;
loc_82D8BF2C:
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
loc_82D8BF40:
	// bl 0x82d86078
	ctx.lr = 0x82D8BF44;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d8bf2c
	if (cr6.eq) goto loc_82D8BF2C;
	// lwz r3,116(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// bl 0x831f8200
	ctx.lr = 0x82D8BF54;
	sub_831F8200(ctx, base);
	// lwz r9,756(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 756);
	// li r10,-1
	ctx.r10.s64 = -1;
	// lwz r8,760(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 760);
	// subfc r11,r8,r9
	xer.ca = ctx.r9.u32 >= ctx.r8.u32;
	ctx.r11.s64 = ctx.r9.s64 - ctx.r8.s64;
	// subfze r3,r10
	temp.u8 = ~ctx.r10.u32 + xer.ca < xer.ca;
	ctx.r3.u64 = ~ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D8BF78"))) PPC_WEAK_FUNC(sub_82D8BF78);
PPC_FUNC_IMPL(__imp__sub_82D8BF78) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
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
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// sth r11,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r11.u16);
	// ld r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x831790b0
	ctx.lr = 0x82D8BF9C;
	sub_831790B0(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// li r9,5
	ctx.r9.s64 = 5;
	// subfc r8,r9,r10
	xer.ca = ctx.r10.u32 >= ctx.r9.u32;
	ctx.r8.s64 = ctx.r10.s64 - ctx.r9.s64;
	// subfe r6,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + xer.ca < xer.ca);
	ctx.r6.u64 = ~ctx.r7.u64 + ctx.r7.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r3,r6,r10
	ctx.r3.u64 = ctx.r6.u64 & ctx.r10.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D8BFC0"))) PPC_WEAK_FUNC(sub_82D8BFC0);
PPC_FUNC_IMPL(__imp__sub_82D8BFC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// addi r11,r3,-1
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// bgt cr6,0x82d8c01c
	if (cr6.gt) goto loc_82D8C01C;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x82d8bff0
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82D8BFF0;
	// bdzf 4*cr6+eq,0x82d8c000
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82D8C000;
	// bne cr6,0x82d8c010
	if (!cr6.eq) goto loc_82D8C010;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,27732
	ctx.r11.s64 = ctx.r11.s64 + 27732;
	// addi r3,r11,-36
	ctx.r3.s64 = ctx.r11.s64 + -36;
	// blr 
	return;
loc_82D8BFF0:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,27732
	ctx.r11.s64 = ctx.r11.s64 + 27732;
	// addi r3,r11,-24
	ctx.r3.s64 = ctx.r11.s64 + -24;
	// blr 
	return;
loc_82D8C000:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,27732
	ctx.r11.s64 = ctx.r11.s64 + 27732;
	// addi r3,r11,-12
	ctx.r3.s64 = ctx.r11.s64 + -12;
	// blr 
	return;
loc_82D8C010:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,27732
	ctx.r3.s64 = ctx.r11.s64 + 27732;
	// blr 
	return;
loc_82D8C01C:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,27732
	ctx.r11.s64 = ctx.r11.s64 + 27732;
	// addi r3,r11,-48
	ctx.r3.s64 = ctx.r11.s64 + -48;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D8C02C"))) PPC_WEAK_FUNC(sub_82D8C02C);
PPC_FUNC_IMPL(__imp__sub_82D8C02C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D8C030"))) PPC_WEAK_FUNC(sub_82D8C030);
PPC_FUNC_IMPL(__imp__sub_82D8C030) {
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
	// bl 0x82d86078
	ctx.lr = 0x82D8C04C;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82d8c05c
	if (!cr6.eq) goto loc_82D8C05C;
loc_82D8C054:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82d8c0ac
	goto loc_82D8C0AC;
loc_82D8C05C:
	// lwz r3,116(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// bl 0x82dab6d0
	ctx.lr = 0x82D8C064;
	sub_82DAB6D0(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// bl 0x831156e8
	ctx.lr = 0x82D8C06C;
	sub_831156E8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d8c054
	if (cr6.eq) goto loc_82D8C054;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// sth r30,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r30.u16);
	// lwz r3,48(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x8311c260
	ctx.lr = 0x82D8C088;
	sub_8311C260(ctx, base);
	// lwz r11,100(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// rlwinm r10,r11,16,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0x1;
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// bne cr6,0x82d8c0a8
	if (!cr6.eq) goto loc_82D8C0A8;
	// rlwinm r11,r11,15,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 15) & 0x1;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x82d8c0a8
	if (!cr6.eq) goto loc_82D8C0A8;
	// li r30,1
	ctx.r30.s64 = 1;
loc_82D8C0A8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_82D8C0AC:
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

__attribute__((alias("__imp__sub_82D8C0C4"))) PPC_WEAK_FUNC(sub_82D8C0C4);
PPC_FUNC_IMPL(__imp__sub_82D8C0C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D8C0C8"))) PPC_WEAK_FUNC(sub_82D8C0C8);
PPC_FUNC_IMPL(__imp__sub_82D8C0C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// addi r11,r3,-17
	ctx.r11.s64 = ctx.r3.s64 + -17;
	// cmplwi cr6,r11,11
	cr6.compare<uint32_t>(ctx.r11.u32, 11, xer);
	// bgt cr6,0x82d8c1dc
	if (cr6.gt) goto loc_82D8C1DC;
	// lis r12,-32039
	ctx.r12.s64 = -2099707904;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-16148
	ctx.r12.s64 = ctx.r12.s64 + -16148;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_82D8C11C;
	case 1:
		goto loc_82D8C12C;
	case 2:
		goto loc_82D8C13C;
	case 3:
		goto loc_82D8C14C;
	case 4:
		goto loc_82D8C15C;
	case 5:
		goto loc_82D8C16C;
	case 6:
		goto loc_82D8C17C;
	case 7:
		goto loc_82D8C18C;
	case 8:
		goto loc_82D8C19C;
	case 9:
		goto loc_82D8C1AC;
	case 10:
		goto loc_82D8C1BC;
	case 11:
		goto loc_82D8C1CC;
	default:
		return;
	}
	// lwz r22,-16100(r24)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r24.u32 + -16100);
	// lwz r22,-16084(r24)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r24.u32 + -16084);
	// lwz r22,-16068(r24)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r24.u32 + -16068);
	// lwz r22,-16052(r24)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r24.u32 + -16052);
	// lwz r22,-16036(r24)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r24.u32 + -16036);
	// lwz r22,-16020(r24)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r24.u32 + -16020);
	// lwz r22,-16004(r24)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r24.u32 + -16004);
	// lwz r22,-15988(r24)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r24.u32 + -15988);
	// lwz r22,-15972(r24)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r24.u32 + -15972);
	// lwz r22,-15956(r24)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r24.u32 + -15956);
	// lwz r22,-15940(r24)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r24.u32 + -15940);
	// lwz r22,-15924(r24)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r24.u32 + -15924);
loc_82D8C11C:
	// li r11,12
	ctx.r11.s64 = 12;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_82D8C12C:
	// li r11,11
	ctx.r11.s64 = 11;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_82D8C13C:
	// li r11,9
	ctx.r11.s64 = 9;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_82D8C14C:
	// li r11,10
	ctx.r11.s64 = 10;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_82D8C15C:
	// li r11,8
	ctx.r11.s64 = 8;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_82D8C16C:
	// li r11,4
	ctx.r11.s64 = 4;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_82D8C17C:
	// li r11,5
	ctx.r11.s64 = 5;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_82D8C18C:
	// li r11,6
	ctx.r11.s64 = 6;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_82D8C19C:
	// li r11,7
	ctx.r11.s64 = 7;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_82D8C1AC:
	// li r11,1
	ctx.r11.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_82D8C1BC:
	// li r11,2
	ctx.r11.s64 = 2;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_82D8C1CC:
	// li r11,3
	ctx.r11.s64 = 3;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_82D8C1DC:
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r3,0
	ctx.r3.s64 = 0;
	// cmpwi cr6,r11,13
	cr6.compare<int32_t>(ctx.r11.s32, 13, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D8C1F4"))) PPC_WEAK_FUNC(sub_82D8C1F4);
PPC_FUNC_IMPL(__imp__sub_82D8C1F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D8C1F8"))) PPC_WEAK_FUNC(sub_82D8C1F8);
PPC_FUNC_IMPL(__imp__sub_82D8C1F8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// cmpwi cr6,r3,6
	cr6.compare<int32_t>(ctx.r3.s32, 6, xer);
	// addi r11,r11,27820
	ctx.r11.s64 = ctx.r11.s64 + 27820;
	// addi r10,r11,-76
	ctx.r10.s64 = ctx.r11.s64 + -76;
	// stw r11,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r11.u32);
	// addi r9,r11,-60
	ctx.r9.s64 = ctx.r11.s64 + -60;
	// addi r8,r11,-44
	ctx.r8.s64 = ctx.r11.s64 + -44;
	// stw r10,-32(r1)
	PPC_STORE_U32(ctx.r1.u32 + -32, ctx.r10.u32);
	// addi r7,r11,-32
	ctx.r7.s64 = ctx.r11.s64 + -32;
	// stw r9,-28(r1)
	PPC_STORE_U32(ctx.r1.u32 + -28, ctx.r9.u32);
	// addi r6,r11,-16
	ctx.r6.s64 = ctx.r11.s64 + -16;
	// stw r8,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, ctx.r8.u32);
	// stw r7,-20(r1)
	PPC_STORE_U32(ctx.r1.u32 + -20, ctx.r7.u32);
	// stw r6,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r6.u32);
	// blt cr6,0x82d8c23c
	if (cr6.lt) goto loc_82D8C23C;
	// addi r3,r11,-76
	ctx.r3.s64 = ctx.r11.s64 + -76;
	// blr 
	return;
loc_82D8C23C:
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,-32
	ctx.r10.s64 = ctx.r1.s64 + -32;
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D8C24C"))) PPC_WEAK_FUNC(sub_82D8C24C);
PPC_FUNC_IMPL(__imp__sub_82D8C24C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D8C250"))) PPC_WEAK_FUNC(sub_82D8C250);
PPC_FUNC_IMPL(__imp__sub_82D8C250) {
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
	// li r31,8
	ctx.r31.s64 = 8;
	// bl 0x82d8a698
	ctx.lr = 0x82D8C268;
	sub_82D8A698(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d8c374
	if (cr6.eq) goto loc_82D8C374;
	// bl 0x830ff290
	ctx.lr = 0x82D8C278;
	sub_830FF290(ctx, base);
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmplwi cr6,r11,52
	cr6.compare<uint32_t>(ctx.r11.u32, 52, xer);
	// beq cr6,0x82d8c298
	if (cr6.eq) goto loc_82D8C298;
	// bl 0x830ff290
	ctx.lr = 0x82D8C288;
	sub_830FF290(ctx, base);
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmplwi cr6,r11,53
	cr6.compare<uint32_t>(ctx.r11.u32, 53, xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x82d8c29c
	if (!cr6.eq) goto loc_82D8C29C;
loc_82D8C298:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82D8C29C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d8c2b0
	if (cr6.eq) goto loc_82D8C2B0;
	// li r31,0
	ctx.r31.s64 = 0;
	// b 0x82d8c374
	goto loc_82D8C374;
loc_82D8C2B0:
	// bl 0x830ff290
	ctx.lr = 0x82D8C2B4;
	sub_830FF290(ctx, base);
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// addi r11,r11,-58
	ctx.r11.s64 = ctx.r11.s64 + -58;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82d8c2d4
	if (cr6.eq) goto loc_82D8C2D4;
	// li r31,1
	ctx.r31.s64 = 1;
	// b 0x82d8c374
	goto loc_82D8C374;
loc_82D8C2D4:
	// bl 0x82d8a7c8
	ctx.lr = 0x82D8C2D8;
	sub_82D8A7C8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d8c300
	if (cr6.eq) goto loc_82D8C300;
	// bl 0x82d95fe0
	ctx.lr = 0x82D8C2E8;
	sub_82D95FE0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xori r11,r9,1
	ctx.r11.u64 = ctx.r9.u64 ^ 1;
	// addi r31,r11,2
	ctx.r31.s64 = ctx.r11.s64 + 2;
	// b 0x82d8c374
	goto loc_82D8C374;
loc_82D8C300:
	// bl 0x830ff290
	ctx.lr = 0x82D8C304;
	sub_830FF290(ctx, base);
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// addi r11,r11,-57
	ctx.r11.s64 = ctx.r11.s64 + -57;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82d8c324
	if (cr6.eq) goto loc_82D8C324;
	// li r31,4
	ctx.r31.s64 = 4;
	// b 0x82d8c374
	goto loc_82D8C374;
loc_82D8C324:
	// bl 0x82d8a900
	ctx.lr = 0x82D8C328;
	sub_82D8A900(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d8c33c
	if (cr6.eq) goto loc_82D8C33C;
	// li r31,5
	ctx.r31.s64 = 5;
	// b 0x82d8c374
	goto loc_82D8C374;
loc_82D8C33C:
	// bl 0x82d8a820
	ctx.lr = 0x82D8C340;
	sub_82D8A820(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d8c354
	if (cr6.eq) goto loc_82D8C354;
	// li r31,6
	ctx.r31.s64 = 6;
	// b 0x82d8c374
	goto loc_82D8C374;
loc_82D8C354:
	// bl 0x830ff290
	ctx.lr = 0x82D8C358;
	sub_830FF290(ctx, base);
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// addi r11,r11,-60
	ctx.r11.s64 = ctx.r11.s64 + -60;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82d8c374
	if (cr6.eq) goto loc_82D8C374;
	// li r31,7
	ctx.r31.s64 = 7;
loc_82D8C374:
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

__attribute__((alias("__imp__sub_82D8C38C"))) PPC_WEAK_FUNC(sub_82D8C38C);
PPC_FUNC_IMPL(__imp__sub_82D8C38C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D8C390"))) PPC_WEAK_FUNC(sub_82D8C390);
PPC_FUNC_IMPL(__imp__sub_82D8C390) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82D8C398;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r4,-1
	ctx.r11.s64 = ctx.r4.s64 + -1;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// srawi r10,r11,1
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// cmpw cr6,r5,r4
	cr6.compare<int32_t>(ctx.r5.s32, ctx.r4.s32, xer);
	// addze r31,r10
	temp.s64 = ctx.r10.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r31.s64 = temp.s64;
	// bge cr6,0x82d8c40c
	if (!cr6.lt) goto loc_82D8C40C;
loc_82D8C3C0:
	// mulli r11,r31,84
	ctx.r11.s64 = ctx.r31.s64 * 84;
	// add r29,r11,r28
	ctx.r29.u64 = ctx.r11.u64 + ctx.r28.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831485a8
	ctx.lr = 0x82D8C3D4;
	sub_831485A8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d8c40c
	if (cr6.eq) goto loc_82D8C40C;
	// mulli r11,r30,84
	ctx.r11.s64 = ctx.r30.s64 * 84;
	// add r3,r11,r28
	ctx.r3.u64 = ctx.r11.u64 + ctx.r28.u64;
	// li r5,84
	ctx.r5.s64 = 84;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x831ce980
	ctx.lr = 0x82D8C3F4;
	sub_831CE980(ctx, base);
	// addi r11,r31,-1
	ctx.r11.s64 = ctx.r31.s64 + -1;
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
	// srawi r10,r11,1
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
	// cmpw cr6,r27,r31
	cr6.compare<int32_t>(ctx.r27.s32, ctx.r31.s32, xer);
	// addze r31,r10
	temp.s64 = ctx.r10.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r31.s64 = temp.s64;
	// blt cr6,0x82d8c3c0
	if (cr6.lt) goto loc_82D8C3C0;
loc_82D8C40C:
	// mulli r11,r30,84
	ctx.r11.s64 = ctx.r30.s64 * 84;
	// add r3,r11,r28
	ctx.r3.u64 = ctx.r11.u64 + ctx.r28.u64;
	// li r5,84
	ctx.r5.s64 = 84;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x831ce980
	ctx.lr = 0x82D8C420;
	sub_831CE980(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D8C428"))) PPC_WEAK_FUNC(sub_82D8C428);
PPC_FUNC_IMPL(__imp__sub_82D8C428) {
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
	// li r9,32
	ctx.r9.s64 = 32;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r3,261
	ctx.r10.s64 = ctx.r3.s64 + 261;
	// stb r11,248(r3)
	PPC_STORE_U8(ctx.r3.u32 + 248, ctx.r11.u8);
	// stb r11,249(r3)
	PPC_STORE_U8(ctx.r3.u32 + 249, ctx.r11.u8);
	// stb r11,250(r3)
	PPC_STORE_U8(ctx.r3.u32 + 250, ctx.r11.u8);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// stb r11,251(r3)
	PPC_STORE_U8(ctx.r3.u32 + 251, ctx.r11.u8);
	// stb r11,252(r3)
	PPC_STORE_U8(ctx.r3.u32 + 252, ctx.r11.u8);
	// stb r11,253(r3)
	PPC_STORE_U8(ctx.r3.u32 + 253, ctx.r11.u8);
	// stb r11,254(r3)
	PPC_STORE_U8(ctx.r3.u32 + 254, ctx.r11.u8);
	// stb r11,255(r3)
	PPC_STORE_U8(ctx.r3.u32 + 255, ctx.r11.u8);
	// stb r11,256(r3)
	PPC_STORE_U8(ctx.r3.u32 + 256, ctx.r11.u8);
	// stb r11,257(r3)
	PPC_STORE_U8(ctx.r3.u32 + 257, ctx.r11.u8);
	// stb r11,258(r3)
	PPC_STORE_U8(ctx.r3.u32 + 258, ctx.r11.u8);
	// stb r11,259(r3)
	PPC_STORE_U8(ctx.r3.u32 + 259, ctx.r11.u8);
	// stb r11,260(r3)
	PPC_STORE_U8(ctx.r3.u32 + 260, ctx.r11.u8);
	// stb r11,261(r3)
	PPC_STORE_U8(ctx.r3.u32 + 261, ctx.r11.u8);
loc_82D8C484:
	// stb r11,1(r10)
	PPC_STORE_U8(ctx.r10.u32 + 1, ctx.r11.u8);
	// stb r11,2(r10)
	PPC_STORE_U8(ctx.r10.u32 + 2, ctx.r11.u8);
	// stb r11,3(r10)
	PPC_STORE_U8(ctx.r10.u32 + 3, ctx.r11.u8);
	// stb r11,4(r10)
	PPC_STORE_U8(ctx.r10.u32 + 4, ctx.r11.u8);
	// stb r11,5(r10)
	PPC_STORE_U8(ctx.r10.u32 + 5, ctx.r11.u8);
	// stb r11,6(r10)
	PPC_STORE_U8(ctx.r10.u32 + 6, ctx.r11.u8);
	// stb r11,7(r10)
	PPC_STORE_U8(ctx.r10.u32 + 7, ctx.r11.u8);
	// stb r11,8(r10)
	PPC_STORE_U8(ctx.r10.u32 + 8, ctx.r11.u8);
	// stb r11,9(r10)
	PPC_STORE_U8(ctx.r10.u32 + 9, ctx.r11.u8);
	// stb r11,10(r10)
	PPC_STORE_U8(ctx.r10.u32 + 10, ctx.r11.u8);
	// stb r11,11(r10)
	PPC_STORE_U8(ctx.r10.u32 + 11, ctx.r11.u8);
	// stb r11,12(r10)
	PPC_STORE_U8(ctx.r10.u32 + 12, ctx.r11.u8);
	// stb r11,13(r10)
	PPC_STORE_U8(ctx.r10.u32 + 13, ctx.r11.u8);
	// stbu r11,14(r10)
	ea = 14 + ctx.r10.u32;
	PPC_STORE_U8(ea, ctx.r11.u8);
	ctx.r10.u32 = ea;
	// bdnz 0x82d8c484
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82D8C484;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83148418
	ctx.lr = 0x82D8C4C8;
	sub_83148418(ctx, base);
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

__attribute__((alias("__imp__sub_82D8C4E0"))) PPC_WEAK_FUNC(sub_82D8C4E0);
PPC_FUNC_IMPL(__imp__sub_82D8C4E0) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x82D8C4E8;
	__savegprlr_25(ctx, base);
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r9,8(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// lwz r7,12(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// lwz r6,16(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// lwz r5,0(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// stw r10,-80(r1)
	PPC_STORE_U32(ctx.r1.u32 + -80, ctx.r10.u32);
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// stw r9,-76(r1)
	PPC_STORE_U32(ctx.r1.u32 + -76, ctx.r9.u32);
	// mr r9,r6
	ctx.r9.u64 = ctx.r6.u64;
	// lwz r8,20(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// lwz r7,24(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	// lwz r6,28(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// lwz r31,32(r4)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r4.u32 + 32);
	// lwz r30,36(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 36);
	// lwz r29,40(r4)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r4.u32 + 40);
	// lwz r28,44(r4)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r4.u32 + 44);
	// lwz r27,48(r4)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r4.u32 + 48);
	// lwz r4,52(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 52);
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r11.u8);
	// stb r11,1(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1, ctx.r11.u8);
	// stb r11,2(r3)
	PPC_STORE_U8(ctx.r3.u32 + 2, ctx.r11.u8);
	// stb r11,3(r3)
	PPC_STORE_U8(ctx.r3.u32 + 3, ctx.r11.u8);
	// stb r11,4(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4, ctx.r11.u8);
	// stb r11,5(r3)
	PPC_STORE_U8(ctx.r3.u32 + 5, ctx.r11.u8);
	// stb r11,6(r3)
	PPC_STORE_U8(ctx.r3.u32 + 6, ctx.r11.u8);
	// stb r11,7(r3)
	PPC_STORE_U8(ctx.r3.u32 + 7, ctx.r11.u8);
	// stb r11,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, ctx.r11.u8);
	// lwz r26,-80(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + -80);
	// lwz r25,-76(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + -76);
	// stb r11,9(r3)
	PPC_STORE_U8(ctx.r3.u32 + 9, ctx.r11.u8);
	// stb r11,10(r3)
	PPC_STORE_U8(ctx.r3.u32 + 10, ctx.r11.u8);
	// stb r11,11(r3)
	PPC_STORE_U8(ctx.r3.u32 + 11, ctx.r11.u8);
	// stb r11,12(r3)
	PPC_STORE_U8(ctx.r3.u32 + 12, ctx.r11.u8);
	// stb r11,13(r3)
	PPC_STORE_U8(ctx.r3.u32 + 13, ctx.r11.u8);
	// stb r5,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r5.u8);
	// stb r26,1(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1, ctx.r26.u8);
	// stb r25,2(r3)
	PPC_STORE_U8(ctx.r3.u32 + 2, ctx.r25.u8);
	// stb r10,3(r3)
	PPC_STORE_U8(ctx.r3.u32 + 3, ctx.r10.u8);
	// stb r9,4(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4, ctx.r9.u8);
	// stb r8,5(r3)
	PPC_STORE_U8(ctx.r3.u32 + 5, ctx.r8.u8);
	// stb r7,6(r3)
	PPC_STORE_U8(ctx.r3.u32 + 6, ctx.r7.u8);
	// stb r6,7(r3)
	PPC_STORE_U8(ctx.r3.u32 + 7, ctx.r6.u8);
	// stb r31,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, ctx.r31.u8);
	// stb r30,9(r3)
	PPC_STORE_U8(ctx.r3.u32 + 9, ctx.r30.u8);
	// stb r29,10(r3)
	PPC_STORE_U8(ctx.r3.u32 + 10, ctx.r29.u8);
	// stb r28,11(r3)
	PPC_STORE_U8(ctx.r3.u32 + 11, ctx.r28.u8);
	// stb r27,12(r3)
	PPC_STORE_U8(ctx.r3.u32 + 12, ctx.r27.u8);
	// stb r4,13(r3)
	PPC_STORE_U8(ctx.r3.u32 + 13, ctx.r4.u8);
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D8C5B0"))) PPC_WEAK_FUNC(sub_82D8C5B0);
PPC_FUNC_IMPL(__imp__sub_82D8C5B0) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x82D8C5B8;
	__savegprlr_25(ctx, base);
	// lwz r8,8(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r6,12(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// lwz r9,4(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// xori r30,r8,1
	ctx.r30.u64 = ctx.r8.u64 ^ 1;
	// lwz r31,16(r4)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// xori r28,r6,1
	ctx.r28.u64 = ctx.r6.u64 ^ 1;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// xori r5,r9,1
	ctx.r5.u64 = ctx.r9.u64 ^ 1;
	// lwz r29,20(r4)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// xori r27,r31,1
	ctx.r27.u64 = ctx.r31.u64 ^ 1;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r11.u8);
	// xori r7,r10,1
	ctx.r7.u64 = ctx.r10.u64 ^ 1;
	// stb r11,1(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1, ctx.r11.u8);
	// xori r26,r29,1
	ctx.r26.u64 = ctx.r29.u64 ^ 1;
	// stb r11,2(r3)
	PPC_STORE_U8(ctx.r3.u32 + 2, ctx.r11.u8);
	// mulli r7,r7,99
	ctx.r7.s64 = ctx.r7.s64 * 99;
	// stb r11,3(r3)
	PPC_STORE_U8(ctx.r3.u32 + 3, ctx.r11.u8);
	// stb r11,4(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4, ctx.r11.u8);
	// stb r11,5(r3)
	PPC_STORE_U8(ctx.r3.u32 + 5, ctx.r11.u8);
	// stb r11,6(r3)
	PPC_STORE_U8(ctx.r3.u32 + 6, ctx.r11.u8);
	// stb r11,7(r3)
	PPC_STORE_U8(ctx.r3.u32 + 7, ctx.r11.u8);
	// stb r11,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, ctx.r11.u8);
	// stb r11,9(r3)
	PPC_STORE_U8(ctx.r3.u32 + 9, ctx.r11.u8);
	// stb r11,10(r3)
	PPC_STORE_U8(ctx.r3.u32 + 10, ctx.r11.u8);
	// mulli r10,r10,99
	ctx.r10.s64 = ctx.r10.s64 * 99;
	// stb r11,11(r3)
	PPC_STORE_U8(ctx.r3.u32 + 11, ctx.r11.u8);
	// stb r11,12(r3)
	PPC_STORE_U8(ctx.r3.u32 + 12, ctx.r11.u8);
	// stb r11,13(r3)
	PPC_STORE_U8(ctx.r3.u32 + 13, ctx.r11.u8);
	// lwz r4,24(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	// stb r7,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r7.u8);
	// stb r10,1(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1, ctx.r10.u8);
	// mulli r11,r9,99
	ctx.r11.s64 = ctx.r9.s64 * 99;
	// stb r11,3(r3)
	PPC_STORE_U8(ctx.r3.u32 + 3, ctx.r11.u8);
	// mulli r9,r30,99
	ctx.r9.s64 = ctx.r30.s64 * 99;
	// stb r9,4(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4, ctx.r9.u8);
	// xori r25,r4,1
	ctx.r25.u64 = ctx.r4.u64 ^ 1;
	// mulli r30,r28,99
	ctx.r30.s64 = ctx.r28.s64 * 99;
	// stb r30,6(r3)
	PPC_STORE_U8(ctx.r3.u32 + 6, ctx.r30.u8);
	// mulli r28,r27,99
	ctx.r28.s64 = ctx.r27.s64 * 99;
	// stb r28,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, ctx.r28.u8);
	// mulli r27,r26,99
	ctx.r27.s64 = ctx.r26.s64 * 99;
	// stb r27,10(r3)
	PPC_STORE_U8(ctx.r3.u32 + 10, ctx.r27.u8);
	// mulli r5,r5,99
	ctx.r5.s64 = ctx.r5.s64 * 99;
	// stb r5,2(r3)
	PPC_STORE_U8(ctx.r3.u32 + 2, ctx.r5.u8);
	// mulli r8,r8,99
	ctx.r8.s64 = ctx.r8.s64 * 99;
	// stb r8,5(r3)
	PPC_STORE_U8(ctx.r3.u32 + 5, ctx.r8.u8);
	// mulli r6,r6,99
	ctx.r6.s64 = ctx.r6.s64 * 99;
	// stb r6,7(r3)
	PPC_STORE_U8(ctx.r3.u32 + 7, ctx.r6.u8);
	// mulli r31,r31,99
	ctx.r31.s64 = ctx.r31.s64 * 99;
	// stb r31,9(r3)
	PPC_STORE_U8(ctx.r3.u32 + 9, ctx.r31.u8);
	// mulli r29,r29,99
	ctx.r29.s64 = ctx.r29.s64 * 99;
	// stb r29,11(r3)
	PPC_STORE_U8(ctx.r3.u32 + 11, ctx.r29.u8);
	// mulli r26,r25,99
	ctx.r26.s64 = ctx.r25.s64 * 99;
	// stb r26,12(r3)
	PPC_STORE_U8(ctx.r3.u32 + 12, ctx.r26.u8);
	// mulli r4,r4,99
	ctx.r4.s64 = ctx.r4.s64 * 99;
	// stb r4,13(r3)
	PPC_STORE_U8(ctx.r3.u32 + 13, ctx.r4.u8);
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D8C6A0"))) PPC_WEAK_FUNC(sub_82D8C6A0);
PPC_FUNC_IMPL(__imp__sub_82D8C6A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x82D8C6A8;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r5,47
	ctx.r5.s64 = 47;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x831ce980
	ctx.lr = 0x82D8C6C0;
	sub_831CE980(ctx, base);
	// li r9,0
	ctx.r9.s64 = 0;
	// lbz r5,32(r30)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r30.u32 + 32);
	// lbz r4,33(r30)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r30.u32 + 33);
	// addi r6,r30,38
	ctx.r6.s64 = ctx.r30.s64 + 38;
	// lbz r3,34(r30)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r30.u32 + 34);
	// li r7,255
	ctx.r7.s64 = 255;
	// lbz r28,35(r30)
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r30.u32 + 35);
	// cmplwi cr6,r9,32
	cr6.compare<uint32_t>(ctx.r9.u32, 32, xer);
	// lbz r27,36(r30)
	ctx.r27.u64 = PPC_LOAD_U8(ctx.r30.u32 + 36);
	// lbz r26,37(r30)
	ctx.r26.u64 = PPC_LOAD_U8(ctx.r30.u32 + 37);
	// lbz r25,41(r30)
	ctx.r25.u64 = PPC_LOAD_U8(ctx.r30.u32 + 41);
	// bge cr6,0x82d8c6f8
	if (!cr6.lt) goto loc_82D8C6F8;
loc_82D8C6F0:
	// lbzx r8,r9,r30
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r30.u32);
	// b 0x82d8c6fc
	goto loc_82D8C6FC;
loc_82D8C6F8:
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
loc_82D8C6FC:
	// cmpw cr6,r5,r8
	cr6.compare<int32_t>(ctx.r5.s32, ctx.r8.s32, xer);
	// bne cr6,0x82d8c718
	if (!cr6.eq) goto loc_82D8C718;
	// cmplwi cr6,r9,11
	cr6.compare<uint32_t>(ctx.r9.u32, 11, xer);
	// blt cr6,0x82d8c714
	if (cr6.lt) goto loc_82D8C714;
	// stb r7,32(r31)
	PPC_STORE_U8(ctx.r31.u32 + 32, ctx.r7.u8);
	// b 0x82d8c718
	goto loc_82D8C718;
loc_82D8C714:
	// stb r9,32(r31)
	PPC_STORE_U8(ctx.r31.u32 + 32, ctx.r9.u8);
loc_82D8C718:
	// cmpw cr6,r4,r8
	cr6.compare<int32_t>(ctx.r4.s32, ctx.r8.s32, xer);
	// bne cr6,0x82d8c734
	if (!cr6.eq) goto loc_82D8C734;
	// cmplwi cr6,r9,11
	cr6.compare<uint32_t>(ctx.r9.u32, 11, xer);
	// blt cr6,0x82d8c730
	if (cr6.lt) goto loc_82D8C730;
	// stb r7,33(r31)
	PPC_STORE_U8(ctx.r31.u32 + 33, ctx.r7.u8);
	// b 0x82d8c734
	goto loc_82D8C734;
loc_82D8C730:
	// stb r9,33(r31)
	PPC_STORE_U8(ctx.r31.u32 + 33, ctx.r9.u8);
loc_82D8C734:
	// cmpw cr6,r3,r8
	cr6.compare<int32_t>(ctx.r3.s32, ctx.r8.s32, xer);
	// bne cr6,0x82d8c750
	if (!cr6.eq) goto loc_82D8C750;
	// cmplwi cr6,r9,11
	cr6.compare<uint32_t>(ctx.r9.u32, 11, xer);
	// blt cr6,0x82d8c74c
	if (cr6.lt) goto loc_82D8C74C;
	// stb r7,34(r31)
	PPC_STORE_U8(ctx.r31.u32 + 34, ctx.r7.u8);
	// b 0x82d8c750
	goto loc_82D8C750;
loc_82D8C74C:
	// stb r9,34(r31)
	PPC_STORE_U8(ctx.r31.u32 + 34, ctx.r9.u8);
loc_82D8C750:
	// cmpw cr6,r28,r8
	cr6.compare<int32_t>(ctx.r28.s32, ctx.r8.s32, xer);
	// bne cr6,0x82d8c76c
	if (!cr6.eq) goto loc_82D8C76C;
	// cmplwi cr6,r9,11
	cr6.compare<uint32_t>(ctx.r9.u32, 11, xer);
	// blt cr6,0x82d8c768
	if (cr6.lt) goto loc_82D8C768;
	// stb r7,35(r31)
	PPC_STORE_U8(ctx.r31.u32 + 35, ctx.r7.u8);
	// b 0x82d8c76c
	goto loc_82D8C76C;
loc_82D8C768:
	// stb r9,35(r31)
	PPC_STORE_U8(ctx.r31.u32 + 35, ctx.r9.u8);
loc_82D8C76C:
	// cmpw cr6,r27,r8
	cr6.compare<int32_t>(ctx.r27.s32, ctx.r8.s32, xer);
	// bne cr6,0x82d8c788
	if (!cr6.eq) goto loc_82D8C788;
	// cmplwi cr6,r9,11
	cr6.compare<uint32_t>(ctx.r9.u32, 11, xer);
	// blt cr6,0x82d8c784
	if (cr6.lt) goto loc_82D8C784;
	// stb r7,36(r31)
	PPC_STORE_U8(ctx.r31.u32 + 36, ctx.r7.u8);
	// b 0x82d8c788
	goto loc_82D8C788;
loc_82D8C784:
	// stb r9,36(r31)
	PPC_STORE_U8(ctx.r31.u32 + 36, ctx.r9.u8);
loc_82D8C788:
	// cmpw cr6,r26,r8
	cr6.compare<int32_t>(ctx.r26.s32, ctx.r8.s32, xer);
	// bne cr6,0x82d8c7a4
	if (!cr6.eq) goto loc_82D8C7A4;
	// cmplwi cr6,r9,11
	cr6.compare<uint32_t>(ctx.r9.u32, 11, xer);
	// blt cr6,0x82d8c7a0
	if (cr6.lt) goto loc_82D8C7A0;
	// stb r7,37(r31)
	PPC_STORE_U8(ctx.r31.u32 + 37, ctx.r7.u8);
	// b 0x82d8c7a4
	goto loc_82D8C7A4;
loc_82D8C7A0:
	// stb r9,37(r31)
	PPC_STORE_U8(ctx.r31.u32 + 37, ctx.r9.u8);
loc_82D8C7A4:
	// cmpw cr6,r25,r8
	cr6.compare<int32_t>(ctx.r25.s32, ctx.r8.s32, xer);
	// bne cr6,0x82d8c7c0
	if (!cr6.eq) goto loc_82D8C7C0;
	// cmplwi cr6,r9,11
	cr6.compare<uint32_t>(ctx.r9.u32, 11, xer);
	// blt cr6,0x82d8c7bc
	if (cr6.lt) goto loc_82D8C7BC;
	// stb r7,41(r31)
	PPC_STORE_U8(ctx.r31.u32 + 41, ctx.r7.u8);
	// b 0x82d8c7c0
	goto loc_82D8C7C0;
loc_82D8C7BC:
	// stb r9,41(r31)
	PPC_STORE_U8(ctx.r31.u32 + 41, ctx.r9.u8);
loc_82D8C7C0:
	// li r11,3
	ctx.r11.s64 = 3;
	// li r10,0
	ctx.r10.s64 = 0;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
loc_82D8C7CC:
	// lbzx r11,r6,r10
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r6.u32 + ctx.r10.u32);
	// cmpw cr6,r11,r8
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, xer);
	// bne cr6,0x82d8c810
	if (!cr6.eq) goto loc_82D8C810;
	// cmplwi cr6,r9,11
	cr6.compare<uint32_t>(ctx.r9.u32, 11, xer);
	// bge cr6,0x82d8c808
	if (!cr6.lt) goto loc_82D8C808;
	// clrlwi r11,r9,24
	ctx.r11.u64 = ctx.r9.u32 & 0xFF;
	// cmplwi cr6,r11,11
	cr6.compare<uint32_t>(ctx.r11.u32, 11, xer);
	// bge cr6,0x82d8c808
	if (!cr6.lt) goto loc_82D8C808;
	// lbzx r11,r11,r29
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r29.u32);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// beq cr6,0x82d8c810
	if (cr6.eq) goto loc_82D8C810;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// beq cr6,0x82d8c810
	if (cr6.eq) goto loc_82D8C810;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// beq cr6,0x82d8c810
	if (cr6.eq) goto loc_82D8C810;
loc_82D8C808:
	// add r11,r10,r31
	ctx.r11.u64 = ctx.r10.u64 + ctx.r31.u64;
	// stb r7,38(r11)
	PPC_STORE_U8(ctx.r11.u32 + 38, ctx.r7.u8);
loc_82D8C810:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// bdnz 0x82d8c7cc
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82D8C7CC;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmplwi cr6,r9,32
	cr6.compare<uint32_t>(ctx.r9.u32, 32, xer);
	// blt cr6,0x82d8c6f0
	if (cr6.lt) goto loc_82D8C6F0;
	// li r10,32
	ctx.r10.s64 = 32;
	// li r11,0
	ctx.r11.s64 = 0;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_82D8C830:
	// cmplwi cr6,r11,18
	cr6.compare<uint32_t>(ctx.r11.u32, 18, xer);
	// blt cr6,0x82d8c848
	if (cr6.lt) goto loc_82D8C848;
	// cmplwi cr6,r11,32
	cr6.compare<uint32_t>(ctx.r11.u32, 32, xer);
	// bge cr6,0x82d8c854
	if (!cr6.lt) goto loc_82D8C854;
	// stbx r7,r11,r31
	PPC_STORE_U8(ctx.r11.u32 + ctx.r31.u32, ctx.r7.u8);
	// b 0x82d8c854
	goto loc_82D8C854;
loc_82D8C848:
	// cmplwi cr6,r11,32
	cr6.compare<uint32_t>(ctx.r11.u32, 32, xer);
	// bge cr6,0x82d8c854
	if (!cr6.lt) goto loc_82D8C854;
	// stbx r11,r11,r31
	PPC_STORE_U8(ctx.r11.u32 + ctx.r31.u32, ctx.r11.u8);
loc_82D8C854:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x82d8c830
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82D8C830;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D8C868"))) PPC_WEAK_FUNC(sub_82D8C868);
PPC_FUNC_IMPL(__imp__sub_82D8C868) {
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
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// sth r11,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r11.u16);
	// ld r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x831790b0
	ctx.lr = 0x82D8C88C;
	sub_831790B0(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// li r9,5
	ctx.r9.s64 = 5;
	// subfc r8,r9,r10
	xer.ca = ctx.r10.u32 >= ctx.r9.u32;
	ctx.r8.s64 = ctx.r10.s64 - ctx.r9.s64;
	// subfe r6,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + xer.ca < xer.ca);
	ctx.r6.u64 = ~ctx.r7.u64 + ctx.r7.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r11,r6,r10
	ctx.r11.u64 = ctx.r6.u64 & ctx.r10.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// bgt cr6,0x82d8c92c
	if (cr6.gt) goto loc_82D8C92C;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x82d8c8dc
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82D8C8DC;
	// bdzf 4*cr6+eq,0x82d8c8f8
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82D8C8F8;
	// bne cr6,0x82d8c914
	if (!cr6.eq) goto loc_82D8C914;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,27732
	ctx.r11.s64 = ctx.r11.s64 + 27732;
	// addi r3,r11,-36
	ctx.r3.s64 = ctx.r11.s64 + -36;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82D8C8DC:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,27732
	ctx.r11.s64 = ctx.r11.s64 + 27732;
	// addi r3,r11,-24
	ctx.r3.s64 = ctx.r11.s64 + -24;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82D8C8F8:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,27732
	ctx.r11.s64 = ctx.r11.s64 + 27732;
	// addi r3,r11,-12
	ctx.r3.s64 = ctx.r11.s64 + -12;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82D8C914:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,27732
	ctx.r3.s64 = ctx.r11.s64 + 27732;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82D8C92C:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,27732
	ctx.r11.s64 = ctx.r11.s64 + 27732;
	// addi r3,r11,-48
	ctx.r3.s64 = ctx.r11.s64 + -48;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D8C948"))) PPC_WEAK_FUNC(sub_82D8C948);
PPC_FUNC_IMPL(__imp__sub_82D8C948) {
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
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82d8c99c
	if (cr6.eq) goto loc_82D8C99C;
	// lis r11,780
	ctx.r11.s64 = 51118080;
	// ori r10,r11,12483
	ctx.r10.u64 = ctx.r11.u64 | 12483;
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// bgt cr6,0x82d8c980
	if (cr6.gt) goto loc_82D8C980;
	// mulli r3,r4,84
	ctx.r3.s64 = ctx.r4.s64 * 84;
	// bl 0x82416260
	ctx.lr = 0x82D8C978;
	sub_82416260(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82d8c99c
	if (!cr6.eq) goto loc_82D8C99C;
loc_82D8C980:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,15364
	ctx.r9.s64 = ctx.r11.s64 + 15364;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// bl 0x8246b850
	ctx.lr = 0x82D8C99C;
	sub_8246B850(ctx, base);
loc_82D8C99C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D8C9AC"))) PPC_WEAK_FUNC(sub_82D8C9AC);
PPC_FUNC_IMPL(__imp__sub_82D8C9AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D8C9B0"))) PPC_WEAK_FUNC(sub_82D8C9B0);
PPC_FUNC_IMPL(__imp__sub_82D8C9B0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// ble cr6,0x82d8ca1c
	if (!cr6.gt) goto loc_82D8CA1C;
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// stw r3,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r3.u32);
	// addi r9,r3,8
	ctx.r9.s64 = ctx.r3.s64 + 8;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// addi r8,r10,27920
	ctx.r8.s64 = ctx.r10.s64 + 27920;
	// li r7,8
	ctx.r7.s64 = 8;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// li r6,28
	ctx.r6.s64 = 28;
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// stw r7,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r7.u32);
	// lis r5,11
	ctx.r5.s64 = 720896;
	// stw r6,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r6.u32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// ori r5,r5,1
	ctx.r5.u64 = ctx.r5.u64 | 1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8247b270
	ctx.lr = 0x82D8CA0C;
	sub_8247B270(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82D8CA1C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D8CA30"))) PPC_WEAK_FUNC(sub_82D8CA30);
PPC_FUNC_IMPL(__imp__sub_82D8CA30) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82D8CA38;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r4,1
	ctx.r11.s64 = ctx.r4.s64 + 1;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// rlwinm r31,r11,1,0,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// cmpw cr6,r31,r5
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r5.s32, xer);
	// bge cr6,0x82d8cab0
	if (!cr6.lt) goto loc_82D8CAB0;
loc_82D8CA60:
	// mulli r11,r31,84
	ctx.r11.s64 = ctx.r31.s64 * 84;
	// add r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r4,r3,-84
	ctx.r4.s64 = ctx.r3.s64 + -84;
	// bl 0x831485a8
	ctx.lr = 0x82D8CA70;
	sub_831485A8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d8ca80
	if (cr6.eq) goto loc_82D8CA80;
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
loc_82D8CA80:
	// mulli r10,r31,84
	ctx.r10.s64 = ctx.r31.s64 * 84;
	// mulli r11,r29,84
	ctx.r11.s64 = ctx.r29.s64 * 84;
	// add r4,r10,r30
	ctx.r4.u64 = ctx.r10.u64 + ctx.r30.u64;
	// add r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 + ctx.r30.u64;
	// li r5,84
	ctx.r5.s64 = 84;
	// bl 0x831ce980
	ctx.lr = 0x82D8CA98;
	sub_831CE980(ctx, base);
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
	// rlwinm r31,r11,1,0,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r31,r28
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r28.s32, xer);
	// blt cr6,0x82d8ca60
	if (cr6.lt) goto loc_82D8CA60;
	// cmpw cr6,r31,r28
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r28.s32, xer);
loc_82D8CAB0:
	// bne cr6,0x82d8cad4
	if (!cr6.eq) goto loc_82D8CAD4;
	// mulli r11,r28,84
	ctx.r11.s64 = ctx.r28.s64 * 84;
	// add r10,r11,r30
	ctx.r10.u64 = ctx.r11.u64 + ctx.r30.u64;
	// mulli r11,r29,84
	ctx.r11.s64 = ctx.r29.s64 * 84;
	// addi r4,r10,-84
	ctx.r4.s64 = ctx.r10.s64 + -84;
	// add r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 + ctx.r30.u64;
	// li r5,84
	ctx.r5.s64 = 84;
	// bl 0x831ce980
	ctx.lr = 0x82D8CAD0;
	sub_831CE980(ctx, base);
	// addi r29,r28,-1
	ctx.r29.s64 = ctx.r28.s64 + -1;
loc_82D8CAD4:
	// addi r11,r29,-1
	ctx.r11.s64 = ctx.r29.s64 + -1;
	// cmpw cr6,r27,r29
	cr6.compare<int32_t>(ctx.r27.s32, ctx.r29.s32, xer);
	// srawi r10,r11,1
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
	// addze r31,r10
	temp.s64 = ctx.r10.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r31.s64 = temp.s64;
	// bge cr6,0x82d8cb34
	if (!cr6.lt) goto loc_82D8CB34;
loc_82D8CAE8:
	// mulli r11,r31,84
	ctx.r11.s64 = ctx.r31.s64 * 84;
	// add r28,r11,r30
	ctx.r28.u64 = ctx.r11.u64 + ctx.r30.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x831485a8
	ctx.lr = 0x82D8CAFC;
	sub_831485A8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d8cb34
	if (cr6.eq) goto loc_82D8CB34;
	// mulli r11,r29,84
	ctx.r11.s64 = ctx.r29.s64 * 84;
	// add r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 + ctx.r30.u64;
	// li r5,84
	ctx.r5.s64 = 84;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x831ce980
	ctx.lr = 0x82D8CB1C;
	sub_831CE980(ctx, base);
	// addi r11,r31,-1
	ctx.r11.s64 = ctx.r31.s64 + -1;
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
	// srawi r10,r11,1
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
	// cmpw cr6,r27,r31
	cr6.compare<int32_t>(ctx.r27.s32, ctx.r31.s32, xer);
	// addze r31,r10
	temp.s64 = ctx.r10.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r31.s64 = temp.s64;
	// blt cr6,0x82d8cae8
	if (cr6.lt) goto loc_82D8CAE8;
loc_82D8CB34:
	// mulli r11,r29,84
	ctx.r11.s64 = ctx.r29.s64 * 84;
	// add r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 + ctx.r30.u64;
	// li r5,84
	ctx.r5.s64 = 84;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x831ce980
	ctx.lr = 0x82D8CB48;
	sub_831CE980(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D8CB50"))) PPC_WEAK_FUNC(sub_82D8CB50);
PPC_FUNC_IMPL(__imp__sub_82D8CB50) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82D8CB58;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r5,632
	ctx.r5.s64 = 632;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x831cdcf0
	ctx.lr = 0x82D8CB6C;
	sub_831CDCF0(ctx, base);
	// lis r9,-31775
	ctx.r9.s64 = -2082406400;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r8,r9,-14628
	ctx.r8.s64 = ctx.r9.s64 + -14628;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// lhz r9,-14628(r9)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r9.u32 + -14628);
	// sth r9,44(r31)
	PPC_STORE_U16(ctx.r31.u32 + 44, ctx.r9.u16);
	// lwz r9,4(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// stw r9,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r9.u32);
loc_82D8CB90:
	// cmplwi cr6,r10,32
	cr6.compare<uint32_t>(ctx.r10.u32, 32, xer);
	// bge cr6,0x82d8cba0
	if (!cr6.lt) goto loc_82D8CBA0;
	// add r9,r10,r31
	ctx.r9.u64 = ctx.r10.u64 + ctx.r31.u64;
	// stb r11,584(r9)
	PPC_STORE_U8(ctx.r9.u32 + 584, ctx.r11.u8);
loc_82D8CBA0:
	// addi r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 1;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,32
	cr6.compare<uint32_t>(ctx.r11.u32, 32, xer);
	// blt cr6,0x82d8cb90
	if (cr6.lt) goto loc_82D8CB90;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// add r10,r29,r31
	ctx.r10.u64 = ctx.r29.u64 + ctx.r31.u64;
	// li r9,255
	ctx.r9.s64 = 255;
loc_82D8CBC0:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stb r9,622(r10)
	PPC_STORE_U8(ctx.r10.u32 + 622, ctx.r9.u8);
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// add r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 + ctx.r31.u64;
	// blt cr6,0x82d8cbc0
	if (cr6.lt) goto loc_82D8CBC0;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// add r10,r29,r31
	ctx.r10.u64 = ctx.r29.u64 + ctx.r31.u64;
	// li r9,9
	ctx.r9.s64 = 9;
loc_82D8CBE4:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stb r9,616(r10)
	PPC_STORE_U8(ctx.r10.u32 + 616, ctx.r9.u8);
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,6
	cr6.compare<uint32_t>(ctx.r11.u32, 6, xer);
	// add r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 + ctx.r31.u64;
	// blt cr6,0x82d8cbe4
	if (cr6.lt) goto loc_82D8CBE4;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
loc_82D8CC00:
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r3,r11,104
	ctx.r3.s64 = ctx.r11.s64 + 104;
	// bl 0x82ac0800
	ctx.lr = 0x82D8CC18;
	sub_82AC0800(ctx, base);
	// addi r10,r30,1
	ctx.r10.s64 = ctx.r30.s64 + 1;
	// clrlwi r30,r10,24
	ctx.r30.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r30,3
	cr6.compare<uint32_t>(ctx.r30.u32, 3, xer);
	// blt cr6,0x82d8cc00
	if (cr6.lt) goto loc_82D8CC00;
	// lis r11,2047
	ctx.r11.s64 = 134152192;
	// lwz r9,100(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// li r10,50
	ctx.r10.s64 = 50;
	// stb r29,38(r31)
	PPC_STORE_U8(ctx.r31.u32 + 38, ctx.r29.u8);
	// ori r8,r11,64133
	ctx.r8.u64 = ctx.r11.u64 | 64133;
	// stb r29,40(r31)
	PPC_STORE_U8(ctx.r31.u32 + 40, ctx.r29.u8);
	// li r11,2
	ctx.r11.s64 = 2;
	// stb r10,32(r31)
	PPC_STORE_U8(ctx.r31.u32 + 32, ctx.r10.u8);
	// rlwimi r9,r8,21,16,13
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r8.u32, 21) & 0xFFFFFFFFFFFCFFFF) | (ctx.r9.u64 & 0x30000);
	// stb r10,33(r31)
	PPC_STORE_U8(ctx.r31.u32 + 33, ctx.r10.u8);
	// stb r10,34(r31)
	PPC_STORE_U8(ctx.r31.u32 + 34, ctx.r10.u8);
	// stb r10,35(r31)
	PPC_STORE_U8(ctx.r31.u32 + 35, ctx.r10.u8);
	// stb r11,36(r31)
	PPC_STORE_U8(ctx.r31.u32 + 36, ctx.r11.u8);
	// stb r11,37(r31)
	PPC_STORE_U8(ctx.r31.u32 + 37, ctx.r11.u8);
	// stb r11,39(r31)
	PPC_STORE_U8(ctx.r31.u32 + 39, ctx.r11.u8);
	// stb r11,41(r31)
	PPC_STORE_U8(ctx.r31.u32 + 41, ctx.r11.u8);
	// stw r9,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r9.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D8CC74"))) PPC_WEAK_FUNC(sub_82D8CC74);
PPC_FUNC_IMPL(__imp__sub_82D8CC74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D8CC78"))) PPC_WEAK_FUNC(sub_82D8CC78);
PPC_FUNC_IMPL(__imp__sub_82D8CC78) {
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
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r31,0
	ctx.r31.s64 = 0;
loc_82D8CC94:
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// add r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 + ctx.r30.u64;
	// bl 0x82ac0800
	ctx.lr = 0x82D8CCA8;
	sub_82AC0800(ctx, base);
	// addi r10,r31,1
	ctx.r10.s64 = ctx.r31.s64 + 1;
	// clrlwi r31,r10,24
	ctx.r31.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r31,3
	cr6.compare<uint32_t>(ctx.r31.u32, 3, xer);
	// blt cr6,0x82d8cc94
	if (cr6.lt) goto loc_82D8CC94;
	// addi r31,r30,480
	ctx.r31.s64 = ctx.r30.s64 + 480;
	// li r5,47
	ctx.r5.s64 = 47;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831cdcf0
	ctx.lr = 0x82D8CCCC;
	sub_831CDCF0(ctx, base);
	// li r10,32
	ctx.r10.s64 = 32;
	// addi r11,r31,-1
	ctx.r11.s64 = ctx.r31.s64 + -1;
	// li r9,255
	ctx.r9.s64 = 255;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_82D8CCDC:
	// stbu r9,1(r11)
	ea = 1 + ctx.r11.u32;
	PPC_STORE_U8(ea, ctx.r9.u8);
	ctx.r11.u32 = ea;
	// bdnz 0x82d8ccdc
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82D8CCDC;
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

__attribute__((alias("__imp__sub_82D8CCFC"))) PPC_WEAK_FUNC(sub_82D8CCFC);
PPC_FUNC_IMPL(__imp__sub_82D8CCFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D8CD00"))) PPC_WEAK_FUNC(sub_82D8CD00);
PPC_FUNC_IMPL(__imp__sub_82D8CD00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82D8CD08;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31775
	ctx.r10.s64 = -2082406400;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r5,70
	ctx.r5.s64 = 70;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// lwz r11,-14644(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -14644);
	// rlwimi r9,r11,0,0,13
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0xFFFC0000) | (ctx.r9.u64 & 0xFFFFFFFF0003FFFF);
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// stw r9,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r9.u32);
	// lwz r11,-14644(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -14644);
	// rlwimi r8,r11,0,14,31
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0x3FFFF) | (ctx.r8.u64 & 0xFFFFFFFFFFFC0000);
	// stw r8,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r8.u32);
	// bl 0x831cdcf0
	ctx.lr = 0x82D8CD44;
	sub_831CDCF0(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
	// li r7,-1
	ctx.r7.s64 = -1;
	// sth r31,74(r30)
	PPC_STORE_U16(ctx.r30.u32 + 74, ctx.r31.u16);
	// addi r28,r30,80
	ctx.r28.s64 = ctx.r30.s64 + 80;
	// sth r31,76(r30)
	PPC_STORE_U16(ctx.r30.u32 + 76, ctx.r31.u16);
	// li r29,3
	ctx.r29.s64 = 3;
	// sth r7,78(r30)
	PPC_STORE_U16(ctx.r30.u32 + 78, ctx.r7.u16);
loc_82D8CD60:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82ac0800
	ctx.lr = 0x82D8CD68;
	sub_82AC0800(ctx, base);
	// addic. r29,r29,-1
	xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// addi r28,r28,160
	ctx.r28.s64 = ctx.r28.s64 + 160;
	// bne 0x82d8cd60
	if (!cr0.eq) goto loc_82D8CD60;
	// addi r29,r30,560
	ctx.r29.s64 = ctx.r30.s64 + 560;
	// li r5,47
	ctx.r5.s64 = 47;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831cdcf0
	ctx.lr = 0x82D8CD88;
	sub_831CDCF0(ctx, base);
	// li r10,32
	ctx.r10.s64 = 32;
	// addi r11,r29,-1
	ctx.r11.s64 = ctx.r29.s64 + -1;
	// li r9,255
	ctx.r9.s64 = 255;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_82D8CD98:
	// stbu r9,1(r11)
	ea = 1 + ctx.r11.u32;
	PPC_STORE_U8(ea, ctx.r9.u8);
	ctx.r11.u32 = ea;
	// bdnz 0x82d8cd98
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82D8CD98;
	// lis r10,-31775
	ctx.r10.s64 = -2082406400;
	// li r9,32
	ctx.r9.s64 = 32;
	// addi r8,r10,-14628
	ctx.r8.s64 = ctx.r10.s64 + -14628;
	// addi r11,r30,632
	ctx.r11.s64 = ctx.r30.s64 + 632;
	// li r6,100
	ctx.r6.s64 = 100;
	// lhz r10,-14628(r10)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r10.u32 + -14628);
	// li r7,5
	ctx.r7.s64 = 5;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// lis r9,-31775
	ctx.r9.s64 = -2082406400;
	// sth r10,608(r30)
	PPC_STORE_U16(ctx.r30.u32 + 608, ctx.r10.u16);
	// lwz r10,4(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r10,612(r30)
	PPC_STORE_U32(ctx.r30.u32 + 612, ctx.r10.u32);
	// stw r31,616(r30)
	PPC_STORE_U32(ctx.r30.u32 + 616, ctx.r31.u32);
	// stw r31,620(r30)
	PPC_STORE_U32(ctx.r30.u32 + 620, ctx.r31.u32);
	// stw r31,624(r30)
	PPC_STORE_U32(ctx.r30.u32 + 624, ctx.r31.u32);
	// sth r31,628(r30)
	PPC_STORE_U16(ctx.r30.u32 + 628, ctx.r31.u16);
	// stb r31,630(r30)
	PPC_STORE_U8(ctx.r30.u32 + 630, ctx.r31.u8);
	// stw r31,632(r30)
	PPC_STORE_U32(ctx.r30.u32 + 632, ctx.r31.u32);
loc_82D8CDEC:
	// ld r10,-14692(r9)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r9.u32 + -14692);
	// stb r31,12(r11)
	PPC_STORE_U8(ctx.r11.u32 + 12, ctx.r31.u8);
	// stb r31,13(r11)
	PPC_STORE_U8(ctx.r11.u32 + 13, ctx.r31.u8);
	// std r10,4(r11)
	PPC_STORE_U64(ctx.r11.u32 + 4, ctx.r10.u64);
	// stb r31,14(r11)
	PPC_STORE_U8(ctx.r11.u32 + 14, ctx.r31.u8);
	// stb r31,15(r11)
	PPC_STORE_U8(ctx.r11.u32 + 15, ctx.r31.u8);
	// stb r31,16(r11)
	PPC_STORE_U8(ctx.r11.u32 + 16, ctx.r31.u8);
	// stb r31,17(r11)
	PPC_STORE_U8(ctx.r11.u32 + 17, ctx.r31.u8);
	// stb r31,18(r11)
	PPC_STORE_U8(ctx.r11.u32 + 18, ctx.r31.u8);
	// stb r31,19(r11)
	PPC_STORE_U8(ctx.r11.u32 + 19, ctx.r31.u8);
	// stb r31,20(r11)
	PPC_STORE_U8(ctx.r11.u32 + 20, ctx.r31.u8);
	// stb r31,21(r11)
	PPC_STORE_U8(ctx.r11.u32 + 21, ctx.r31.u8);
	// stb r31,22(r11)
	PPC_STORE_U8(ctx.r11.u32 + 22, ctx.r31.u8);
	// stb r31,23(r11)
	PPC_STORE_U8(ctx.r11.u32 + 23, ctx.r31.u8);
	// stb r31,24(r11)
	PPC_STORE_U8(ctx.r11.u32 + 24, ctx.r31.u8);
	// stb r31,25(r11)
	PPC_STORE_U8(ctx.r11.u32 + 25, ctx.r31.u8);
	// stb r31,26(r11)
	PPC_STORE_U8(ctx.r11.u32 + 26, ctx.r31.u8);
	// stb r31,27(r11)
	PPC_STORE_U8(ctx.r11.u32 + 27, ctx.r31.u8);
	// stw r31,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r31.u32);
	// stb r31,32(r11)
	PPC_STORE_U8(ctx.r11.u32 + 32, ctx.r31.u8);
	// stb r31,33(r11)
	PPC_STORE_U8(ctx.r11.u32 + 33, ctx.r31.u8);
	// stb r6,34(r11)
	PPC_STORE_U8(ctx.r11.u32 + 34, ctx.r6.u8);
	// stb r7,35(r11)
	PPC_STORE_U8(ctx.r11.u32 + 35, ctx.r7.u8);
	// stbu r8,36(r11)
	ea = 36 + ctx.r11.u32;
	PPC_STORE_U8(ea, ctx.r8.u8);
	ctx.r11.u32 = ea;
	// bdnz 0x82d8cdec
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82D8CDEC;
	// stb r31,1788(r30)
	PPC_STORE_U8(ctx.r30.u32 + 1788, ctx.r31.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D8CE5C"))) PPC_WEAK_FUNC(sub_82D8CE5C);
PPC_FUNC_IMPL(__imp__sub_82D8CE5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D8CE60"))) PPC_WEAK_FUNC(sub_82D8CE60);
PPC_FUNC_IMPL(__imp__sub_82D8CE60) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82D8CE68;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,-1
	ctx.r11.s64 = -1;
	// li r10,-1
	ctx.r10.s64 = -1;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// sth r11,44(r3)
	PPC_STORE_U16(ctx.r3.u32 + 44, ctx.r11.u16);
	// addi r30,r3,104
	ctx.r30.s64 = ctx.r3.s64 + 104;
	// stw r10,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r10.u32);
	// li r31,2
	ctx.r31.s64 = 2;
loc_82D8CE88:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ac0af0
	ctx.lr = 0x82D8CE90;
	sub_82AC0AF0(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// addi r30,r30,160
	ctx.r30.s64 = ctx.r30.s64 + 160;
	// bge 0x82d8ce88
	if (!cr0.lt) goto loc_82D8CE88;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D8CEA8"))) PPC_WEAK_FUNC(sub_82D8CEA8);
PPC_FUNC_IMPL(__imp__sub_82D8CEA8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82D8CEB0;
	__savegprlr_29(ctx, base);
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r4,r3,480
	ctx.r4.s64 = ctx.r3.s64 + 480;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r5,47
	ctx.r5.s64 = 47;
	// li r30,1
	ctx.r30.s64 = 1;
	// bl 0x831ce980
	ctx.lr = 0x82D8CECC;
	sub_831CE980(ctx, base);
	// lbz r8,126(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 126);
	// li r10,6
	ctx.r10.s64 = 6;
	// li r11,1
	ctx.r11.s64 = 1;
	// subfc r7,r10,r8
	xer.ca = ctx.r8.u32 >= ctx.r10.u32;
	ctx.r7.s64 = ctx.r8.s64 - ctx.r10.s64;
	// li r31,0
	ctx.r31.s64 = 0;
	// subfe r5,r6,r6
	temp.u8 = (~ctx.r6.u32 + ctx.r6.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r6.u32 + xer.ca < xer.ca);
	ctx.r5.u64 = ~ctx.r6.u64 + ctx.r6.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r4,r5,r11
	ctx.r4.u64 = ctx.r5.u64 & ctx.r11.u64;
	// clrlwi r3,r4,24
	ctx.r3.u64 = ctx.r4.u32 & 0xFF;
	// subfic r11,r3,0
	xer.ca = ctx.r3.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r3.s64;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r30,r9,r30
	ctx.r30.u64 = ctx.r9.u64 & ctx.r30.u64;
loc_82D8CEF8:
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82ac0af0
	ctx.lr = 0x82D8CF00;
	sub_82AC0AF0(ctx, base);
	// clrlwi r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// bge cr6,0x82d8cf24
	if (!cr6.lt) goto loc_82D8CF24;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// add r4,r11,r29
	ctx.r4.u64 = ctx.r11.u64 + ctx.r29.u64;
	// bl 0x82abfda0
	ctx.lr = 0x82D8CF24;
	sub_82ABFDA0(ctx, base);
loc_82D8CF24:
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82d8acc0
	ctx.lr = 0x82D8CF2C;
	sub_82D8ACC0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// subfic r10,r11,0
	xer.ca = ctx.r11.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r11.s64;
	// cmplwi cr6,r31,3
	cr6.compare<uint32_t>(ctx.r31.u32, 3, xer);
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r30,r8,r30
	ctx.r30.u64 = ctx.r8.u64 & ctx.r30.u64;
	// blt cr6,0x82d8cef8
	if (cr6.lt) goto loc_82D8CEF8;
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82d8cf68
	if (!cr6.eq) goto loc_82D8CF68;
	// bl 0x82e6e978
	ctx.lr = 0x82D8CF58;
	sub_82E6E978(ctx, base);
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r10,1
	ctx.r10.s64 = 1;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stb r10,13968(r9)
	PPC_STORE_U8(ctx.r9.u32 + 13968, ctx.r10.u8);
loc_82D8CF68:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D8CF74"))) PPC_WEAK_FUNC(sub_82D8CF74);
PPC_FUNC_IMPL(__imp__sub_82D8CF74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D8CF78"))) PPC_WEAK_FUNC(sub_82D8CF78);
PPC_FUNC_IMPL(__imp__sub_82D8CF78) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82D8CF80;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d8d080
	if (cr6.eq) goto loc_82D8D080;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x82ac0800
	ctx.lr = 0x82D8CFA0;
	sub_82AC0800(ctx, base);
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, xer);
	// bne cr6,0x82d8cfb4
	if (!cr6.eq) goto loc_82D8CFB4;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,33
	ctx.r9.s64 = 33;
	// b 0x82d8cfc4
	goto loc_82D8CFC4;
loc_82D8CFB4:
	// cmpwi cr6,r31,1
	cr6.compare<int32_t>(ctx.r31.s32, 1, xer);
	// bne cr6,0x82d8d080
	if (!cr6.eq) goto loc_82D8D080;
	// li r11,33
	ctx.r11.s64 = 33;
	// li r9,66
	ctx.r9.s64 = 66;
loc_82D8CFC4:
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x82d8d074
	if (!cr6.lt) goto loc_82D8D074;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r29,r11,r9
	ctx.r29.s64 = ctx.r9.s64 - ctx.r11.s64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r31,r11,-8
	ctx.r31.s64 = ctx.r11.s64 + -8;
loc_82D8CFE4:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r6,r11,6,30,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0x3;
	// rlwinm r4,r11,4,28,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xF;
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// cmplwi cr6,r6,1
	cr6.compare<uint32_t>(ctx.r6.u32, 1, xer);
	// blt cr6,0x82d8d040
	if (cr6.lt) goto loc_82D8D040;
	// cmplwi cr6,r6,1
	cr6.compare<uint32_t>(ctx.r6.u32, 1, xer);
	// beq cr6,0x82d8d028
	if (cr6.eq) goto loc_82D8D028;
	// cmplwi cr6,r6,3
	cr6.compare<uint32_t>(ctx.r6.u32, 3, xer);
	// bge cr6,0x82d8d050
	if (!cr6.lt) goto loc_82D8D050;
	// clrlwi r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	// cmplwi cr6,r11,11
	cr6.compare<uint32_t>(ctx.r11.u32, 11, xer);
	// bge cr6,0x82d8d050
	if (!cr6.lt) goto loc_82D8D050;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// stb r10,66(r11)
	PPC_STORE_U8(ctx.r11.u32 + 66, ctx.r10.u8);
	// b 0x82d8d050
	goto loc_82D8D050;
loc_82D8D028:
	// clrlwi r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	// cmplwi cr6,r11,11
	cr6.compare<uint32_t>(ctx.r11.u32, 11, xer);
	// bge cr6,0x82d8d050
	if (!cr6.lt) goto loc_82D8D050;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// stb r10,33(r11)
	PPC_STORE_U8(ctx.r11.u32 + 33, ctx.r10.u8);
	// b 0x82d8d050
	goto loc_82D8D050;
loc_82D8D040:
	// clrlwi r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	// cmplwi cr6,r11,11
	cr6.compare<uint32_t>(ctx.r11.u32, 11, xer);
	// bge cr6,0x82d8d050
	if (!cr6.lt) goto loc_82D8D050;
	// stbx r10,r11,r28
	PPC_STORE_U8(ctx.r11.u32 + ctx.r28.u32, ctx.r10.u8);
loc_82D8D050:
	// lbz r10,14(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 14);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwzu r11,12(r31)
	ea = 12 + ctx.r31.u32;
	ctx.r11.u64 = PPC_LOAD_U32(ea);
	ctx.r31.u32 = ea;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stb r10,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r10.u8);
	// stb r11,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r11.u8);
	// bl 0x82ac0388
	ctx.lr = 0x82D8D06C;
	sub_82AC0388(ctx, base);
	// addic. r29,r29,-1
	xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// bne 0x82d8cfe4
	if (!cr0.eq) goto loc_82D8CFE4;
loc_82D8D074:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82D8D080:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D8D08C"))) PPC_WEAK_FUNC(sub_82D8D08C);
PPC_FUNC_IMPL(__imp__sub_82D8D08C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D8D090"))) PPC_WEAK_FUNC(sub_82D8D090);
PPC_FUNC_IMPL(__imp__sub_82D8D090) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82D8D098;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// bl 0x82d8cea8
	ctx.lr = 0x82D8D0B4;
	sub_82D8CEA8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82d8d0cc
	if (!cr6.eq) goto loc_82D8D0CC;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82D8D0CC:
	// li r11,528
	ctx.r11.s64 = 528;
	// cmplwi cr6,r31,528
	cr6.compare<uint32_t>(ctx.r31.u32, 528, xer);
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// bgt cr6,0x82d8d0f0
	if (cr6.gt) goto loc_82D8D0F0;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82D8D0F0:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831cdcf0
	ctx.lr = 0x82D8D100;
	sub_831CDCF0(ctx, base);
	// li r5,528
	ctx.r5.s64 = 528;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831ce980
	ctx.lr = 0x82D8D110;
	sub_831CE980(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D8D11C"))) PPC_WEAK_FUNC(sub_82D8D11C);
PPC_FUNC_IMPL(__imp__sub_82D8D11C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D8D120"))) PPC_WEAK_FUNC(sub_82D8D120);
PPC_FUNC_IMPL(__imp__sub_82D8D120) {
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
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// cmplwi cr6,r4,528
	cr6.compare<uint32_t>(ctx.r4.u32, 528, xer);
	// beq cr6,0x82d8d14c
	if (cr6.eq) goto loc_82D8D14C;
loc_82D8D144:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82d8d180
	goto loc_82D8D180;
loc_82D8D14C:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x82d8d144
	if (cr6.eq) goto loc_82D8D144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d8cc78
	ctx.lr = 0x82D8D15C;
	sub_82D8CC78(ctx, base);
	// li r5,528
	ctx.r5.s64 = 528;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831ce980
	ctx.lr = 0x82D8D16C;
	sub_831CE980(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d8cea8
	ctx.lr = 0x82D8D174;
	sub_82D8CEA8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r3,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
loc_82D8D180:
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

__attribute__((alias("__imp__sub_82D8D198"))) PPC_WEAK_FUNC(sub_82D8D198);
PPC_FUNC_IMPL(__imp__sub_82D8D198) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82D8D1A0;
	__savegprlr_28(ctx, base);
	// stwu r1,-768(r1)
	ea = -768 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,-1
	ctx.r11.s64 = -1;
	// li r10,-1
	ctx.r10.s64 = -1;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// sth r11,140(r1)
	PPC_STORE_U16(ctx.r1.u32 + 140, ctx.r11.u16);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// stw r10,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r10.u32);
	// addi r30,r1,200
	ctx.r30.s64 = ctx.r1.s64 + 200;
	// li r31,2
	ctx.r31.s64 = 2;
loc_82D8D1C4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ac0af0
	ctx.lr = 0x82D8D1CC;
	sub_82AC0AF0(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// addi r30,r30,160
	ctx.r30.s64 = ctx.r30.s64 + 160;
	// bge 0x82d8d1c4
	if (!cr0.lt) goto loc_82D8D1C4;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82d8cb50
	ctx.lr = 0x82D8D1E0;
	sub_82D8CB50(ctx, base);
	// bl 0x831156e8
	ctx.lr = 0x82D8D1E4;
	sub_831156E8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d8d23c
	if (cr6.eq) goto loc_82D8D23C;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r3,48(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// sth r10,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r10.u16);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x8311c260
	ctx.lr = 0x82D8D208;
	sub_8311C260(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82d8a4d8
	ctx.lr = 0x82D8D214;
	sub_82D8A4D8(ctx, base);
	// addi r31,r29,64
	ctx.r31.s64 = ctx.r29.s64 + 64;
	// addi r3,r1,200
	ctx.r3.s64 = ctx.r1.s64 + 200;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82abfda0
	ctx.lr = 0x82D8D224;
	sub_82ABFDA0(ctx, base);
	// addi r4,r29,224
	ctx.r4.s64 = ctx.r29.s64 + 224;
	// addi r3,r1,360
	ctx.r3.s64 = ctx.r1.s64 + 360;
	// bl 0x82abfda0
	ctx.lr = 0x82D8D230;
	sub_82ABFDA0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,520
	ctx.r3.s64 = ctx.r1.s64 + 520;
	// bl 0x82abfda0
	ctx.lr = 0x82D8D23C;
	sub_82ABFDA0(ctx, base);
loc_82D8D23C:
	// li r5,632
	ctx.r5.s64 = 632;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x831ce980
	ctx.lr = 0x82D8D24C;
	sub_831CE980(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,768
	ctx.r1.s64 = ctx.r1.s64 + 768;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D8D258"))) PPC_WEAK_FUNC(sub_82D8D258);
PPC_FUNC_IMPL(__imp__sub_82D8D258) {
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
	// stwu r1,-352(r1)
	ea = -352 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82b00d00
	ctx.lr = 0x82D8D27C;
	sub_82B00D00(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82b00b98
	ctx.lr = 0x82D8D284;
	sub_82B00B98(ctx, base);
	// bl 0x831156e8
	ctx.lr = 0x82D8D288;
	sub_831156E8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d8d2b8
	if (cr6.eq) goto loc_82D8D2B8;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r3,48(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// sth r10,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r10.u16);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x8311bf98
	ctx.lr = 0x82D8D2AC;
	sub_8311BF98(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82b1e0e8
	ctx.lr = 0x82D8D2B8;
	sub_82B1E0E8(ctx, base);
loc_82D8D2B8:
	// li r5,224
	ctx.r5.s64 = 224;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831ce980
	ctx.lr = 0x82D8D2C8;
	sub_831CE980(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
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

__attribute__((alias("__imp__sub_82D8D2E4"))) PPC_WEAK_FUNC(sub_82D8D2E4);
PPC_FUNC_IMPL(__imp__sub_82D8D2E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D8D2E8"))) PPC_WEAK_FUNC(sub_82D8D2E8);
PPC_FUNC_IMPL(__imp__sub_82D8D2E8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82D8D2F0;
	__savegprlr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// stw r3,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r3.u32);
	// addi r30,r3,8
	ctx.r30.s64 = ctx.r3.s64 + 8;
	// addi r29,r3,4
	ctx.r29.s64 = ctx.r3.s64 + 4;
	// addi r10,r11,27920
	ctx.r10.s64 = ctx.r11.s64 + 27920;
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// li r9,8
	ctx.r9.s64 = 8;
	// stw r29,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r29.u32);
	// li r8,28
	ctx.r8.s64 = 28;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r9,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r9.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r8,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r8.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8247b7d8
	ctx.lr = 0x82D8D334;
	sub_8247B7D8(ctx, base);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
	// beq cr6,0x82d8d35c
	if (cr6.eq) goto loc_82D8D35C;
	// lis r4,11
	ctx.r4.s64 = 720896;
	// ori r4,r4,1
	ctx.r4.u64 = ctx.r4.u64 | 1;
	// bl 0x8247b268
	ctx.lr = 0x82D8D354;
	sub_8247B268(ctx, base);
	// stw r28,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r28.u32);
	// stw r28,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r28.u32);
loc_82D8D35C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D8D364"))) PPC_WEAK_FUNC(sub_82D8D364);
PPC_FUNC_IMPL(__imp__sub_82D8D364) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D8D368"))) PPC_WEAK_FUNC(sub_82D8D368);
PPC_FUNC_IMPL(__imp__sub_82D8D368) {
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
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
loc_82D8D380:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82d8d380
	if (!cr6.eq) goto loc_82D8D380;
	// subf r11,r6,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r6.s64;
	// lwz r5,16(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r7,r11,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x827a8810
	ctx.lr = 0x82D8D3A8;
	sub_827A8810(ctx, base);
	// cntlzw r10,r3
	ctx.r10.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D8D3C0"))) PPC_WEAK_FUNC(sub_82D8D3C0);
PPC_FUNC_IMPL(__imp__sub_82D8D3C0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x82D8D3C8;
	__savegprlr_25(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// subf r11,r3,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r3.s64;
	// li r10,84
	ctx.r10.s64 = 84;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// divw r28,r11,r10
	ctx.r28.s32 = PPCDivide(ctx.r11.s32, ctx.r10.s32);
	// srawi r9,r28,1
	xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r28.s32 >> 1;
	// addze. r27,r9
	temp.s64 = ctx.r9.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r27.s64 = temp.s64;
	cr0.compare<int32_t>(ctx.r27.s32, 0, xer);
	// ble 0x82d8d4b4
	if (!cr0.gt) goto loc_82D8D4B4;
	// addi r10,r27,1
	ctx.r10.s64 = ctx.r27.s64 + 1;
	// mulli r11,r27,84
	ctx.r11.s64 = ctx.r27.s64 * 84;
	// rlwinm r26,r10,1,0,30
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r25,r11,r3
	ctx.r25.u64 = ctx.r11.u64 + ctx.r3.u64;
loc_82D8D3F8:
	// addi r25,r25,-84
	ctx.r25.s64 = ctx.r25.s64 + -84;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r5,84
	ctx.r5.s64 = 84;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r27,r27,-1
	ctx.r27.s64 = ctx.r27.s64 + -1;
	// addi r26,r26,-2
	ctx.r26.s64 = ctx.r26.s64 + -2;
	// bl 0x831ce980
	ctx.lr = 0x82D8D414;
	sub_831CE980(ctx, base);
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
	// mr r31,r26
	ctx.r31.u64 = ctx.r26.u64;
	// cmpw cr6,r26,r28
	cr6.compare<int32_t>(ctx.r26.s32, ctx.r28.s32, xer);
	// bge cr6,0x82d8d470
	if (!cr6.lt) goto loc_82D8D470;
loc_82D8D424:
	// mulli r11,r31,84
	ctx.r11.s64 = ctx.r31.s64 * 84;
	// add r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r4,r3,-84
	ctx.r4.s64 = ctx.r3.s64 + -84;
	// bl 0x831485a8
	ctx.lr = 0x82D8D434;
	sub_831485A8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d8d444
	if (cr6.eq) goto loc_82D8D444;
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
loc_82D8D444:
	// mulli r10,r31,84
	ctx.r10.s64 = ctx.r31.s64 * 84;
	// mulli r11,r29,84
	ctx.r11.s64 = ctx.r29.s64 * 84;
	// add r4,r10,r30
	ctx.r4.u64 = ctx.r10.u64 + ctx.r30.u64;
	// add r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 + ctx.r30.u64;
	// li r5,84
	ctx.r5.s64 = 84;
	// bl 0x831ce980
	ctx.lr = 0x82D8D45C;
	sub_831CE980(ctx, base);
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
	// rlwinm r31,r11,1,0,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r31,r28
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r28.s32, xer);
	// blt cr6,0x82d8d424
	if (cr6.lt) goto loc_82D8D424;
loc_82D8D470:
	// cmpw cr6,r31,r28
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r28.s32, xer);
	// bne cr6,0x82d8d498
	if (!cr6.eq) goto loc_82D8D498;
	// mulli r11,r28,84
	ctx.r11.s64 = ctx.r28.s64 * 84;
	// add r10,r11,r30
	ctx.r10.u64 = ctx.r11.u64 + ctx.r30.u64;
	// mulli r11,r29,84
	ctx.r11.s64 = ctx.r29.s64 * 84;
	// addi r4,r10,-84
	ctx.r4.s64 = ctx.r10.s64 + -84;
	// add r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 + ctx.r30.u64;
	// li r5,84
	ctx.r5.s64 = 84;
	// bl 0x831ce980
	ctx.lr = 0x82D8D494;
	sub_831CE980(ctx, base);
	// addi r29,r28,-1
	ctx.r29.s64 = ctx.r28.s64 + -1;
loc_82D8D498:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d8c390
	ctx.lr = 0x82D8D4AC;
	sub_82D8C390(ctx, base);
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(ctx.r27.s32, 0, xer);
	// bgt cr6,0x82d8d3f8
	if (cr6.gt) goto loc_82D8D3F8;
loc_82D8D4B4:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D8D4BC"))) PPC_WEAK_FUNC(sub_82D8D4BC);
PPC_FUNC_IMPL(__imp__sub_82D8D4BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D8D4C0"))) PPC_WEAK_FUNC(sub_82D8D4C0);
PPC_FUNC_IMPL(__imp__sub_82D8D4C0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82D8D4C8;
	__savegprlr_29(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x831485a8
	ctx.lr = 0x82D8D4E4;
	sub_831485A8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d8d520
	if (cr6.eq) goto loc_82D8D520;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r5,84
	ctx.r5.s64 = 84;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x831ce980
	ctx.lr = 0x82D8D500;
	sub_831CE980(ctx, base);
	// li r5,84
	ctx.r5.s64 = 84;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831ce980
	ctx.lr = 0x82D8D510;
	sub_831CE980(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r5,84
	ctx.r5.s64 = 84;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831ce980
	ctx.lr = 0x82D8D520;
	sub_831CE980(ctx, base);
loc_82D8D520:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831485a8
	ctx.lr = 0x82D8D52C;
	sub_831485A8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d8d568
	if (cr6.eq) goto loc_82D8D568;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r5,84
	ctx.r5.s64 = 84;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x831ce980
	ctx.lr = 0x82D8D548;
	sub_831CE980(ctx, base);
	// li r5,84
	ctx.r5.s64 = 84;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831ce980
	ctx.lr = 0x82D8D558;
	sub_831CE980(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r5,84
	ctx.r5.s64 = 84;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831ce980
	ctx.lr = 0x82D8D568;
	sub_831CE980(ctx, base);
loc_82D8D568:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831485a8
	ctx.lr = 0x82D8D574;
	sub_831485A8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d8d5b0
	if (cr6.eq) goto loc_82D8D5B0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r5,84
	ctx.r5.s64 = 84;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x831ce980
	ctx.lr = 0x82D8D590;
	sub_831CE980(ctx, base);
	// li r5,84
	ctx.r5.s64 = 84;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831ce980
	ctx.lr = 0x82D8D5A0;
	sub_831CE980(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r5,84
	ctx.r5.s64 = 84;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831ce980
	ctx.lr = 0x82D8D5B0;
	sub_831CE980(ctx, base);
loc_82D8D5B0:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D8D5B8"))) PPC_WEAK_FUNC(sub_82D8D5B8);
PPC_FUNC_IMPL(__imp__sub_82D8D5B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82D8D5C0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,-1
	ctx.r30.s64 = -1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r28,r3,80
	ctx.r28.s64 = ctx.r3.s64 + 80;
	// stw r30,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r30.u32);
	// li r29,2
	ctx.r29.s64 = 2;
loc_82D8D5D8:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82ac0af0
	ctx.lr = 0x82D8D5E0;
	sub_82AC0AF0(ctx, base);
	// addic. r29,r29,-1
	xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// addi r28,r28,160
	ctx.r28.s64 = ctx.r28.s64 + 160;
	// bge 0x82d8d5d8
	if (!cr0.lt) goto loc_82D8D5D8;
	// lis r11,0
	ctx.r11.s64 = 0;
	// stw r30,612(r31)
	PPC_STORE_U32(ctx.r31.u32 + 612, ctx.r30.u32);
	// lis r9,-31775
	ctx.r9.s64 = -2082406400;
	// ori r8,r11,65535
	ctx.r8.u64 = ctx.r11.u64 | 65535;
	// addi r5,r9,-14628
	ctx.r5.s64 = ctx.r9.s64 + -14628;
	// sth r8,608(r31)
	PPC_STORE_U16(ctx.r31.u32 + 608, ctx.r8.u16);
	// addi r10,r31,636
	ctx.r10.s64 = ctx.r31.s64 + 636;
	// li r7,32
	ctx.r7.s64 = 32;
	// lhz r6,-14628(r9)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r9.u32 + -14628);
	// addi r11,r31,608
	ctx.r11.s64 = ctx.r31.s64 + 608;
	// sth r6,608(r31)
	PPC_STORE_U16(ctx.r31.u32 + 608, ctx.r6.u16);
	// addi r11,r10,-4
	ctx.r11.s64 = ctx.r10.s64 + -4;
	// addi r9,r10,-36
	ctx.r9.s64 = ctx.r10.s64 + -36;
	// lwz r10,4(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// stw r10,612(r31)
	PPC_STORE_U32(ctx.r31.u32 + 612, ctx.r10.u32);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// lis r6,-31775
	ctx.r6.s64 = -2082406400;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r3,100
	ctx.r3.s64 = 100;
	// li r4,5
	ctx.r4.s64 = 5;
	// li r5,1
	ctx.r5.s64 = 1;
loc_82D8D640:
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// sth r8,36(r9)
	PPC_STORE_U16(ctx.r9.u32 + 36, ctx.r8.u16);
	// stb r10,14(r11)
	PPC_STORE_U8(ctx.r11.u32 + 14, ctx.r10.u8);
	// stb r10,15(r11)
	PPC_STORE_U8(ctx.r11.u32 + 15, ctx.r10.u8);
	// stb r10,16(r11)
	PPC_STORE_U8(ctx.r11.u32 + 16, ctx.r10.u8);
	// stb r10,17(r11)
	PPC_STORE_U8(ctx.r11.u32 + 17, ctx.r10.u8);
	// stb r10,18(r11)
	PPC_STORE_U8(ctx.r11.u32 + 18, ctx.r10.u8);
	// stb r10,19(r11)
	PPC_STORE_U8(ctx.r11.u32 + 19, ctx.r10.u8);
	// stb r10,20(r11)
	PPC_STORE_U8(ctx.r11.u32 + 20, ctx.r10.u8);
	// stb r10,21(r11)
	PPC_STORE_U8(ctx.r11.u32 + 21, ctx.r10.u8);
	// stb r10,22(r11)
	PPC_STORE_U8(ctx.r11.u32 + 22, ctx.r10.u8);
	// stb r10,23(r11)
	PPC_STORE_U8(ctx.r11.u32 + 23, ctx.r10.u8);
	// stb r10,24(r11)
	PPC_STORE_U8(ctx.r11.u32 + 24, ctx.r10.u8);
	// stb r10,25(r11)
	PPC_STORE_U8(ctx.r11.u32 + 25, ctx.r10.u8);
	// stb r10,26(r11)
	PPC_STORE_U8(ctx.r11.u32 + 26, ctx.r10.u8);
	// stb r10,27(r11)
	PPC_STORE_U8(ctx.r11.u32 + 27, ctx.r10.u8);
	// ld r7,-14692(r6)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r6.u32 + -14692);
	// stb r10,12(r11)
	PPC_STORE_U8(ctx.r11.u32 + 12, ctx.r10.u8);
	// stb r10,13(r11)
	PPC_STORE_U8(ctx.r11.u32 + 13, ctx.r10.u8);
	// stdu r7,36(r9)
	ea = 36 + ctx.r9.u32;
	PPC_STORE_U64(ea, ctx.r7.u64);
	ctx.r9.u32 = ea;
	// stb r10,14(r11)
	PPC_STORE_U8(ctx.r11.u32 + 14, ctx.r10.u8);
	// stb r10,15(r11)
	PPC_STORE_U8(ctx.r11.u32 + 15, ctx.r10.u8);
	// stb r10,16(r11)
	PPC_STORE_U8(ctx.r11.u32 + 16, ctx.r10.u8);
	// stb r10,17(r11)
	PPC_STORE_U8(ctx.r11.u32 + 17, ctx.r10.u8);
	// stb r10,18(r11)
	PPC_STORE_U8(ctx.r11.u32 + 18, ctx.r10.u8);
	// stb r10,19(r11)
	PPC_STORE_U8(ctx.r11.u32 + 19, ctx.r10.u8);
	// stb r10,20(r11)
	PPC_STORE_U8(ctx.r11.u32 + 20, ctx.r10.u8);
	// stb r10,21(r11)
	PPC_STORE_U8(ctx.r11.u32 + 21, ctx.r10.u8);
	// stb r10,22(r11)
	PPC_STORE_U8(ctx.r11.u32 + 22, ctx.r10.u8);
	// stb r10,23(r11)
	PPC_STORE_U8(ctx.r11.u32 + 23, ctx.r10.u8);
	// stb r10,24(r11)
	PPC_STORE_U8(ctx.r11.u32 + 24, ctx.r10.u8);
	// stb r10,25(r11)
	PPC_STORE_U8(ctx.r11.u32 + 25, ctx.r10.u8);
	// stb r10,26(r11)
	PPC_STORE_U8(ctx.r11.u32 + 26, ctx.r10.u8);
	// stb r10,27(r11)
	PPC_STORE_U8(ctx.r11.u32 + 27, ctx.r10.u8);
	// stw r10,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r10.u32);
	// stb r10,32(r11)
	PPC_STORE_U8(ctx.r11.u32 + 32, ctx.r10.u8);
	// stb r10,33(r11)
	PPC_STORE_U8(ctx.r11.u32 + 33, ctx.r10.u8);
	// stb r3,34(r11)
	PPC_STORE_U8(ctx.r11.u32 + 34, ctx.r3.u8);
	// stb r4,35(r11)
	PPC_STORE_U8(ctx.r11.u32 + 35, ctx.r4.u8);
	// stbu r5,36(r11)
	ea = 36 + ctx.r11.u32;
	PPC_STORE_U8(ea, ctx.r5.u8);
	ctx.r11.u32 = ea;
	// bdnz 0x82d8d640
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82D8D640;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d8cd00
	ctx.lr = 0x82D8D6EC;
	sub_82D8CD00(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D8D6F8"))) PPC_WEAK_FUNC(sub_82D8D6F8);
PPC_FUNC_IMPL(__imp__sub_82D8D6F8) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x835fbad8
	ctx.lr = 0x82D8D714;
	sub_835FBAD8(ctx, base);
	// bl 0x8252e3c0
	ctx.lr = 0x82D8D718;
	sub_8252E3C0(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82D8D720:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82d8d720
	if (!cr6.eq) goto loc_82D8D720;
	// subf r11,r6,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r6.s64;
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rotlwi r7,r11,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x827a8810
	ctx.lr = 0x82D8D74C;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82d8d768
	if (!cr6.eq) goto loc_82D8D768;
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
loc_82D8D768:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x835fbad8
	ctx.lr = 0x82D8D770;
	sub_835FBAD8(ctx, base);
	// bl 0x8252e3c0
	ctx.lr = 0x82D8D774;
	sub_8252E3C0(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82D8D77C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82d8d77c
	if (!cr6.eq) goto loc_82D8D77C;
	// subf r11,r6,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r6.s64;
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rotlwi r7,r11,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x827a8810
	ctx.lr = 0x82D8D7A8;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82d8d7c8
	if (!cr6.eq) goto loc_82D8D7C8;
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
loc_82D8D7C8:
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x835fbad8
	ctx.lr = 0x82D8D7D0;
	sub_835FBAD8(ctx, base);
	// bl 0x8252e3c0
	ctx.lr = 0x82D8D7D4;
	sub_8252E3C0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82450880
	ctx.lr = 0x82D8D7E0;
	sub_82450880(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d8d804
	if (cr6.eq) goto loc_82D8D804;
	// li r3,2
	ctx.r3.s64 = 2;
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
loc_82D8D804:
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x835fbad8
	ctx.lr = 0x82D8D80C;
	sub_835FBAD8(ctx, base);
	// bl 0x8252e3c0
	ctx.lr = 0x82D8D810;
	sub_8252E3C0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82450880
	ctx.lr = 0x82D8D81C;
	sub_82450880(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d8d840
	if (cr6.eq) goto loc_82D8D840;
	// li r3,3
	ctx.r3.s64 = 3;
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
loc_82D8D840:
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x835fbad8
	ctx.lr = 0x82D8D848;
	sub_835FBAD8(ctx, base);
	// bl 0x8252e3c0
	ctx.lr = 0x82D8D84C;
	sub_8252E3C0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82450880
	ctx.lr = 0x82D8D858;
	sub_82450880(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d8d87c
	if (cr6.eq) goto loc_82D8D87C;
	// li r3,4
	ctx.r3.s64 = 4;
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
loc_82D8D87C:
	// li r3,5
	ctx.r3.s64 = 5;
	// bl 0x835fbad8
	ctx.lr = 0x82D8D884;
	sub_835FBAD8(ctx, base);
	// bl 0x8252e3c0
	ctx.lr = 0x82D8D888;
	sub_8252E3C0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82450880
	ctx.lr = 0x82D8D894;
	sub_82450880(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d8d8b8
	if (cr6.eq) goto loc_82D8D8B8;
	// li r3,5
	ctx.r3.s64 = 5;
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
loc_82D8D8B8:
	// li r3,6
	ctx.r3.s64 = 6;
	// bl 0x835fbad8
	ctx.lr = 0x82D8D8C0;
	sub_835FBAD8(ctx, base);
	// bl 0x8252e3c0
	ctx.lr = 0x82D8D8C4;
	sub_8252E3C0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82450880
	ctx.lr = 0x82D8D8D0;
	sub_82450880(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d8d8f4
	if (cr6.eq) goto loc_82D8D8F4;
	// li r3,6
	ctx.r3.s64 = 6;
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
loc_82D8D8F4:
	// li r3,7
	ctx.r3.s64 = 7;
	// bl 0x835fbad8
	ctx.lr = 0x82D8D8FC;
	sub_835FBAD8(ctx, base);
	// bl 0x8252e3c0
	ctx.lr = 0x82D8D900;
	sub_8252E3C0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82450880
	ctx.lr = 0x82D8D90C;
	sub_82450880(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d8d930
	if (cr6.eq) goto loc_82D8D930;
	// li r3,7
	ctx.r3.s64 = 7;
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
loc_82D8D930:
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x835fbad8
	ctx.lr = 0x82D8D938;
	sub_835FBAD8(ctx, base);
	// bl 0x8252e3c0
	ctx.lr = 0x82D8D93C;
	sub_8252E3C0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82450880
	ctx.lr = 0x82D8D948;
	sub_82450880(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d8d96c
	if (cr6.eq) goto loc_82D8D96C;
	// li r3,8
	ctx.r3.s64 = 8;
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
loc_82D8D96C:
	// li r3,9
	ctx.r3.s64 = 9;
	// bl 0x835fbad8
	ctx.lr = 0x82D8D974;
	sub_835FBAD8(ctx, base);
	// bl 0x8252e3c0
	ctx.lr = 0x82D8D978;
	sub_8252E3C0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82450880
	ctx.lr = 0x82D8D984;
	sub_82450880(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d8d9a8
	if (cr6.eq) goto loc_82D8D9A8;
	// li r3,9
	ctx.r3.s64 = 9;
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
loc_82D8D9A8:
	// li r3,10
	ctx.r3.s64 = 10;
	// bl 0x835fbad8
	ctx.lr = 0x82D8D9B0;
	sub_835FBAD8(ctx, base);
	// bl 0x8252e3c0
	ctx.lr = 0x82D8D9B4;
	sub_8252E3C0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82450880
	ctx.lr = 0x82D8D9C0;
	sub_82450880(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d8d9e4
	if (cr6.eq) goto loc_82D8D9E4;
	// li r3,10
	ctx.r3.s64 = 10;
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
loc_82D8D9E4:
	// li r3,11
	ctx.r3.s64 = 11;
	// bl 0x835fbad8
	ctx.lr = 0x82D8D9EC;
	sub_835FBAD8(ctx, base);
	// bl 0x8252e3c0
	ctx.lr = 0x82D8D9F0;
	sub_8252E3C0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82450880
	ctx.lr = 0x82D8D9FC;
	sub_82450880(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d8da20
	if (cr6.eq) goto loc_82D8DA20;
	// li r3,11
	ctx.r3.s64 = 11;
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
loc_82D8DA20:
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x835fbad8
	ctx.lr = 0x82D8DA28;
	sub_835FBAD8(ctx, base);
	// bl 0x8252e3c0
	ctx.lr = 0x82D8DA2C;
	sub_8252E3C0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82450880
	ctx.lr = 0x82D8DA38;
	sub_82450880(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// li r10,12
	ctx.r10.s64 = 12;
	// subfic r9,r11,0
	xer.ca = ctx.r11.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r11.s64;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r3,r7,r10
	ctx.r3.u64 = ctx.r7.u64 & ctx.r10.u64;
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

__attribute__((alias("__imp__sub_82D8DA60"))) PPC_WEAK_FUNC(sub_82D8DA60);
PPC_FUNC_IMPL(__imp__sub_82D8DA60) {
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
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x835fccc8
	ctx.lr = 0x82D8DA7C;
	sub_835FCCC8(ctx, base);
	// bl 0x8252e3c0
	ctx.lr = 0x82D8DA80;
	sub_8252E3C0(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82D8DA88:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82d8da88
	if (!cr6.eq) goto loc_82D8DA88;
	// subf r11,r6,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r6.s64;
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rotlwi r7,r11,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x827a8810
	ctx.lr = 0x82D8DAB4;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82d8dad0
	if (!cr6.eq) goto loc_82D8DAD0;
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
loc_82D8DAD0:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x835fccc8
	ctx.lr = 0x82D8DAD8;
	sub_835FCCC8(ctx, base);
	// bl 0x8252e3c0
	ctx.lr = 0x82D8DADC;
	sub_8252E3C0(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82D8DAE4:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82d8dae4
	if (!cr6.eq) goto loc_82D8DAE4;
	// subf r11,r6,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r6.s64;
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rotlwi r7,r11,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x827a8810
	ctx.lr = 0x82D8DB10;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82d8db30
	if (!cr6.eq) goto loc_82D8DB30;
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
loc_82D8DB30:
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x835fccc8
	ctx.lr = 0x82D8DB38;
	sub_835FCCC8(ctx, base);
	// bl 0x8252e3c0
	ctx.lr = 0x82D8DB3C;
	sub_8252E3C0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82450880
	ctx.lr = 0x82D8DB48;
	sub_82450880(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d8db6c
	if (cr6.eq) goto loc_82D8DB6C;
	// li r3,2
	ctx.r3.s64 = 2;
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
loc_82D8DB6C:
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x835fccc8
	ctx.lr = 0x82D8DB74;
	sub_835FCCC8(ctx, base);
	// bl 0x8252e3c0
	ctx.lr = 0x82D8DB78;
	sub_8252E3C0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82450880
	ctx.lr = 0x82D8DB84;
	sub_82450880(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d8dba8
	if (cr6.eq) goto loc_82D8DBA8;
	// li r3,3
	ctx.r3.s64 = 3;
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
loc_82D8DBA8:
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x835fccc8
	ctx.lr = 0x82D8DBB0;
	sub_835FCCC8(ctx, base);
	// bl 0x8252e3c0
	ctx.lr = 0x82D8DBB4;
	sub_8252E3C0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82450880
	ctx.lr = 0x82D8DBC0;
	sub_82450880(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d8dbe4
	if (cr6.eq) goto loc_82D8DBE4;
	// li r3,4
	ctx.r3.s64 = 4;
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
loc_82D8DBE4:
	// li r3,5
	ctx.r3.s64 = 5;
	// bl 0x835fccc8
	ctx.lr = 0x82D8DBEC;
	sub_835FCCC8(ctx, base);
	// bl 0x8252e3c0
	ctx.lr = 0x82D8DBF0;
	sub_8252E3C0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82450880
	ctx.lr = 0x82D8DBFC;
	sub_82450880(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r10,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// addi r3,r11,5
	ctx.r3.s64 = ctx.r11.s64 + 5;
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

__attribute__((alias("__imp__sub_82D8DC20"))) PPC_WEAK_FUNC(sub_82D8DC20);
PPC_FUNC_IMPL(__imp__sub_82D8DC20) {
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
	// li r3,0
	ctx.r3.s64 = 0;
	// li r30,0
	ctx.r30.s64 = 0;
	// bl 0x835fb8a8
	ctx.lr = 0x82D8DC44;
	sub_835FB8A8(ctx, base);
	// bl 0x8252e3c0
	ctx.lr = 0x82D8DC48;
	sub_8252E3C0(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82D8DC50:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82d8dc50
	if (!cr6.eq) goto loc_82D8DC50;
	// subf r11,r6,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r6.s64;
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rotlwi r7,r11,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x827a8810
	ctx.lr = 0x82D8DC7C;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82d8dc8c
	if (!cr6.eq) goto loc_82D8DC8C;
	// li r30,0
	ctx.r30.s64 = 0;
	// b 0x82d8df98
	goto loc_82D8DF98;
loc_82D8DC8C:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x835fb8a8
	ctx.lr = 0x82D8DC94;
	sub_835FB8A8(ctx, base);
	// bl 0x8252e3c0
	ctx.lr = 0x82D8DC98;
	sub_8252E3C0(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82D8DCA0:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82d8dca0
	if (!cr6.eq) goto loc_82D8DCA0;
	// subf r11,r6,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r6.s64;
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rotlwi r7,r11,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x827a8810
	ctx.lr = 0x82D8DCCC;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82d8dcdc
	if (!cr6.eq) goto loc_82D8DCDC;
	// li r30,1
	ctx.r30.s64 = 1;
	// b 0x82d8df98
	goto loc_82D8DF98;
loc_82D8DCDC:
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x835fb8a8
	ctx.lr = 0x82D8DCE4;
	sub_835FB8A8(ctx, base);
	// bl 0x8252e3c0
	ctx.lr = 0x82D8DCE8;
	sub_8252E3C0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82450880
	ctx.lr = 0x82D8DCF4;
	sub_82450880(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d8dd08
	if (cr6.eq) goto loc_82D8DD08;
	// li r30,2
	ctx.r30.s64 = 2;
	// b 0x82d8df98
	goto loc_82D8DF98;
loc_82D8DD08:
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x835fb8a8
	ctx.lr = 0x82D8DD10;
	sub_835FB8A8(ctx, base);
	// bl 0x8252e3c0
	ctx.lr = 0x82D8DD14;
	sub_8252E3C0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82450880
	ctx.lr = 0x82D8DD20;
	sub_82450880(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d8dd34
	if (cr6.eq) goto loc_82D8DD34;
	// li r30,3
	ctx.r30.s64 = 3;
	// b 0x82d8df98
	goto loc_82D8DF98;
loc_82D8DD34:
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x835fb8a8
	ctx.lr = 0x82D8DD3C;
	sub_835FB8A8(ctx, base);
	// bl 0x8252e3c0
	ctx.lr = 0x82D8DD40;
	sub_8252E3C0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82450880
	ctx.lr = 0x82D8DD4C;
	sub_82450880(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d8dd60
	if (cr6.eq) goto loc_82D8DD60;
	// li r30,4
	ctx.r30.s64 = 4;
	// b 0x82d8df98
	goto loc_82D8DF98;
loc_82D8DD60:
	// li r3,5
	ctx.r3.s64 = 5;
	// bl 0x835fb8a8
	ctx.lr = 0x82D8DD68;
	sub_835FB8A8(ctx, base);
	// bl 0x8252e3c0
	ctx.lr = 0x82D8DD6C;
	sub_8252E3C0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82450880
	ctx.lr = 0x82D8DD78;
	sub_82450880(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d8dd8c
	if (cr6.eq) goto loc_82D8DD8C;
	// li r30,5
	ctx.r30.s64 = 5;
	// b 0x82d8df98
	goto loc_82D8DF98;
loc_82D8DD8C:
	// li r3,6
	ctx.r3.s64 = 6;
	// bl 0x835fb8a8
	ctx.lr = 0x82D8DD94;
	sub_835FB8A8(ctx, base);
	// bl 0x8252e3c0
	ctx.lr = 0x82D8DD98;
	sub_8252E3C0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82450880
	ctx.lr = 0x82D8DDA4;
	sub_82450880(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d8ddb8
	if (cr6.eq) goto loc_82D8DDB8;
	// li r30,6
	ctx.r30.s64 = 6;
	// b 0x82d8df98
	goto loc_82D8DF98;
loc_82D8DDB8:
	// li r3,7
	ctx.r3.s64 = 7;
	// bl 0x835fb8a8
	ctx.lr = 0x82D8DDC0;
	sub_835FB8A8(ctx, base);
	// bl 0x8252e3c0
	ctx.lr = 0x82D8DDC4;
	sub_8252E3C0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82450880
	ctx.lr = 0x82D8DDD0;
	sub_82450880(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d8dde4
	if (cr6.eq) goto loc_82D8DDE4;
	// li r30,7
	ctx.r30.s64 = 7;
	// b 0x82d8df98
	goto loc_82D8DF98;
loc_82D8DDE4:
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x835fb8a8
	ctx.lr = 0x82D8DDEC;
	sub_835FB8A8(ctx, base);
	// bl 0x8252e3c0
	ctx.lr = 0x82D8DDF0;
	sub_8252E3C0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82450880
	ctx.lr = 0x82D8DDFC;
	sub_82450880(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d8de10
	if (cr6.eq) goto loc_82D8DE10;
	// li r30,8
	ctx.r30.s64 = 8;
	// b 0x82d8df98
	goto loc_82D8DF98;
loc_82D8DE10:
	// li r3,9
	ctx.r3.s64 = 9;
	// bl 0x835fb8a8
	ctx.lr = 0x82D8DE18;
	sub_835FB8A8(ctx, base);
	// bl 0x8252e3c0
	ctx.lr = 0x82D8DE1C;
	sub_8252E3C0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82450880
	ctx.lr = 0x82D8DE28;
	sub_82450880(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d8de3c
	if (cr6.eq) goto loc_82D8DE3C;
	// li r30,9
	ctx.r30.s64 = 9;
	// b 0x82d8df98
	goto loc_82D8DF98;
loc_82D8DE3C:
	// li r3,10
	ctx.r3.s64 = 10;
	// bl 0x835fb8a8
	ctx.lr = 0x82D8DE44;
	sub_835FB8A8(ctx, base);
	// bl 0x8252e3c0
	ctx.lr = 0x82D8DE48;
	sub_8252E3C0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82450880
	ctx.lr = 0x82D8DE54;
	sub_82450880(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d8de68
	if (cr6.eq) goto loc_82D8DE68;
	// li r30,10
	ctx.r30.s64 = 10;
	// b 0x82d8df98
	goto loc_82D8DF98;
loc_82D8DE68:
	// li r3,11
	ctx.r3.s64 = 11;
	// bl 0x835fb8a8
	ctx.lr = 0x82D8DE70;
	sub_835FB8A8(ctx, base);
	// bl 0x8252e3c0
	ctx.lr = 0x82D8DE74;
	sub_8252E3C0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82450880
	ctx.lr = 0x82D8DE80;
	sub_82450880(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d8de94
	if (cr6.eq) goto loc_82D8DE94;
	// li r30,11
	ctx.r30.s64 = 11;
	// b 0x82d8df98
	goto loc_82D8DF98;
loc_82D8DE94:
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x835fb8a8
	ctx.lr = 0x82D8DE9C;
	sub_835FB8A8(ctx, base);
	// bl 0x8252e3c0
	ctx.lr = 0x82D8DEA0;
	sub_8252E3C0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82450880
	ctx.lr = 0x82D8DEAC;
	sub_82450880(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d8dec0
	if (cr6.eq) goto loc_82D8DEC0;
	// li r30,12
	ctx.r30.s64 = 12;
	// b 0x82d8df98
	goto loc_82D8DF98;
loc_82D8DEC0:
	// li r3,13
	ctx.r3.s64 = 13;
	// bl 0x835fb8a8
	ctx.lr = 0x82D8DEC8;
	sub_835FB8A8(ctx, base);
	// bl 0x8252e3c0
	ctx.lr = 0x82D8DECC;
	sub_8252E3C0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82450880
	ctx.lr = 0x82D8DED8;
	sub_82450880(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d8deec
	if (cr6.eq) goto loc_82D8DEEC;
	// li r30,13
	ctx.r30.s64 = 13;
	// b 0x82d8df98
	goto loc_82D8DF98;
loc_82D8DEEC:
	// li r3,14
	ctx.r3.s64 = 14;
	// bl 0x835fb8a8
	ctx.lr = 0x82D8DEF4;
	sub_835FB8A8(ctx, base);
	// bl 0x8252e3c0
	ctx.lr = 0x82D8DEF8;
	sub_8252E3C0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82450880
	ctx.lr = 0x82D8DF04;
	sub_82450880(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d8df18
	if (cr6.eq) goto loc_82D8DF18;
	// li r30,14
	ctx.r30.s64 = 14;
	// b 0x82d8df98
	goto loc_82D8DF98;
loc_82D8DF18:
	// li r3,15
	ctx.r3.s64 = 15;
	// bl 0x835fb8a8
	ctx.lr = 0x82D8DF20;
	sub_835FB8A8(ctx, base);
	// bl 0x8252e3c0
	ctx.lr = 0x82D8DF24;
	sub_8252E3C0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82450880
	ctx.lr = 0x82D8DF30;
	sub_82450880(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d8df44
	if (cr6.eq) goto loc_82D8DF44;
	// li r30,15
	ctx.r30.s64 = 15;
	// b 0x82d8df98
	goto loc_82D8DF98;
loc_82D8DF44:
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x835fb8a8
	ctx.lr = 0x82D8DF4C;
	sub_835FB8A8(ctx, base);
	// bl 0x8252e3c0
	ctx.lr = 0x82D8DF50;
	sub_8252E3C0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82450880
	ctx.lr = 0x82D8DF5C;
	sub_82450880(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d8df70
	if (cr6.eq) goto loc_82D8DF70;
	// li r30,16
	ctx.r30.s64 = 16;
	// b 0x82d8df98
	goto loc_82D8DF98;
loc_82D8DF70:
	// li r3,17
	ctx.r3.s64 = 17;
	// bl 0x835fb8a8
	ctx.lr = 0x82D8DF78;
	sub_835FB8A8(ctx, base);
	// bl 0x8252e3c0
	ctx.lr = 0x82D8DF7C;
	sub_8252E3C0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82450880
	ctx.lr = 0x82D8DF88;
	sub_82450880(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d8df98
	if (cr6.eq) goto loc_82D8DF98;
	// li r30,17
	ctx.r30.s64 = 17;
loc_82D8DF98:
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

__attribute__((alias("__imp__sub_82D8DFB4"))) PPC_WEAK_FUNC(sub_82D8DFB4);
PPC_FUNC_IMPL(__imp__sub_82D8DFB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D8DFB8"))) PPC_WEAK_FUNC(sub_82D8DFB8);
PPC_FUNC_IMPL(__imp__sub_82D8DFB8) {
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
	// li r3,0
	ctx.r3.s64 = 0;
	// li r30,0
	ctx.r30.s64 = 0;
	// bl 0x835fc7f8
	ctx.lr = 0x82D8DFDC;
	sub_835FC7F8(ctx, base);
	// bl 0x8252e3c0
	ctx.lr = 0x82D8DFE0;
	sub_8252E3C0(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82D8DFE8:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82d8dfe8
	if (!cr6.eq) goto loc_82D8DFE8;
	// subf r11,r6,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r6.s64;
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rotlwi r7,r11,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x827a8810
	ctx.lr = 0x82D8E014;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82d8e098
	if (cr6.eq) goto loc_82D8E098;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x835fc7f8
	ctx.lr = 0x82D8E024;
	sub_835FC7F8(ctx, base);
	// bl 0x8252e3c0
	ctx.lr = 0x82D8E028;
	sub_8252E3C0(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82D8E030:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82d8e030
	if (!cr6.eq) goto loc_82D8E030;
	// subf r11,r6,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r6.s64;
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rotlwi r7,r11,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x827a8810
	ctx.lr = 0x82D8E05C;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82d8e06c
	if (!cr6.eq) goto loc_82D8E06C;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82d8e098
	goto loc_82D8E098;
loc_82D8E06C:
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x835fc7f8
	ctx.lr = 0x82D8E074;
	sub_835FC7F8(ctx, base);
	// bl 0x8252e3c0
	ctx.lr = 0x82D8E078;
	sub_8252E3C0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82450880
	ctx.lr = 0x82D8E084;
	sub_82450880(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// li r3,2
	ctx.r3.s64 = 2;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82d8e098
	if (!cr6.eq) goto loc_82D8E098;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_82D8E098:
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

__attribute__((alias("__imp__sub_82D8E0B0"))) PPC_WEAK_FUNC(sub_82D8E0B0);
PPC_FUNC_IMPL(__imp__sub_82D8E0B0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82D8E0B8;
	__savegprlr_27(ctx, base);
	// stwu r1,-880(r1)
	ea = -880 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// bl 0x82d8d120
	ctx.lr = 0x82D8E0D4;
	sub_82D8D120(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d8e0ec
	if (cr6.eq) goto loc_82D8E0EC;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,880
	ctx.r1.s64 = ctx.r1.s64 + 880;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_82D8E0EC:
	// bl 0x831156e8
	ctx.lr = 0x82D8E0F0;
	sub_831156E8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d8e2b4
	if (cr6.eq) goto loc_82D8E2B4;
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d8e11c
	if (cr6.eq) goto loc_82D8E11C;
	// bl 0x83115808
	ctx.lr = 0x82D8E10C;
	sub_83115808(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x82d8e120
	if (!cr6.eq) goto loc_82D8E120;
loc_82D8E11C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82D8E120:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d8e2b4
	if (cr6.eq) goto loc_82D8E2B4;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// sth r11,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r11.u16);
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x8311c260
	ctx.lr = 0x82D8E144;
	sub_8311C260(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d8cc78
	ctx.lr = 0x82D8E150;
	sub_82D8CC78(ctx, base);
	// addi r4,r31,584
	ctx.r4.s64 = ctx.r31.s64 + 584;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// li r5,47
	ctx.r5.s64 = 47;
	// bl 0x831ce980
	ctx.lr = 0x82D8E160;
	sub_831CE980(ctx, base);
	// addi r28,r29,480
	ctx.r28.s64 = ctx.r29.s64 + 480;
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// li r5,47
	ctx.r5.s64 = 47;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x831ce980
	ctx.lr = 0x82D8E174;
	sub_831CE980(ctx, base);
	// addi r4,r31,104
	ctx.r4.s64 = ctx.r31.s64 + 104;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// li r5,160
	ctx.r5.s64 = 160;
	// bl 0x831ce980
	ctx.lr = 0x82D8E184;
	sub_831CE980(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82abfda0
	ctx.lr = 0x82D8E190;
	sub_82ABFDA0(ctx, base);
	// addi r4,r31,264
	ctx.r4.s64 = ctx.r31.s64 + 264;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// li r5,160
	ctx.r5.s64 = 160;
	// bl 0x831ce980
	ctx.lr = 0x82D8E1A0;
	sub_831CE980(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r29,160
	ctx.r3.s64 = ctx.r29.s64 + 160;
	// bl 0x82abfda0
	ctx.lr = 0x82D8E1AC;
	sub_82ABFDA0(ctx, base);
	// addi r4,r31,424
	ctx.r4.s64 = ctx.r31.s64 + 424;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// li r5,160
	ctx.r5.s64 = 160;
	// bl 0x831ce980
	ctx.lr = 0x82D8E1BC;
	sub_831CE980(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r29,320
	ctx.r3.s64 = ctx.r29.s64 + 320;
	// bl 0x82abfda0
	ctx.lr = 0x82D8E1C8;
	sub_82ABFDA0(ctx, base);
	// cmplwi cr6,r30,528
	cr6.compare<uint32_t>(ctx.r30.u32, 528, xer);
	// bne cr6,0x82d8e2b4
	if (!cr6.eq) goto loc_82D8E2B4;
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, xer);
	// beq cr6,0x82d8e2b4
	if (cr6.eq) goto loc_82D8E2B4;
	// addi r30,r1,304
	ctx.r30.s64 = ctx.r1.s64 + 304;
	// li r31,2
	ctx.r31.s64 = 2;
loc_82D8E1E0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ac0af0
	ctx.lr = 0x82D8E1E8;
	sub_82AC0AF0(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// addi r30,r30,160
	ctx.r30.s64 = ctx.r30.s64 + 160;
	// bge 0x82d8e1e0
	if (!cr0.lt) goto loc_82D8E1E0;
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// bl 0x82d8cc78
	ctx.lr = 0x82D8E1FC;
	sub_82D8CC78(ctx, base);
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// li r5,528
	ctx.r5.s64 = 528;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x831ce980
	ctx.lr = 0x82D8E20C;
	sub_831CE980(ctx, base);
	// lbz r8,830(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 830);
	// li r10,6
	ctx.r10.s64 = 6;
	// li r11,1
	ctx.r11.s64 = 1;
	// subfc r7,r10,r8
	xer.ca = ctx.r8.u32 >= ctx.r10.u32;
	ctx.r7.s64 = ctx.r8.s64 - ctx.r10.s64;
	// subfe r5,r6,r6
	temp.u8 = (~ctx.r6.u32 + ctx.r6.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r6.u32 + xer.ca < xer.ca);
	ctx.r5.u64 = ~ctx.r6.u64 + ctx.r6.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r4,r5,r11
	ctx.r4.u64 = ctx.r5.u64 & ctx.r11.u64;
	// clrlwi r3,r4,24
	ctx.r3.u64 = ctx.r4.u32 & 0xFF;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d8e240
	if (cr6.eq) goto loc_82D8E240;
	// addi r4,r1,784
	ctx.r4.s64 = ctx.r1.s64 + 784;
	// li r5,47
	ctx.r5.s64 = 47;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x831ce980
	ctx.lr = 0x82D8E240;
	sub_831CE980(ctx, base);
loc_82D8E240:
	// li r30,0
	ctx.r30.s64 = 0;
loc_82D8E244:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82ac0af0
	ctx.lr = 0x82D8E24C;
	sub_82AC0AF0(ctx, base);
	// clrlwi r31,r30,24
	ctx.r31.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r31,3
	cr6.compare<uint32_t>(ctx.r31.u32, 3, xer);
	// bge cr6,0x82d8e274
	if (!cr6.lt) goto loc_82D8E274;
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,304
	ctx.r10.s64 = ctx.r1.s64 + 304;
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x82abfda0
	ctx.lr = 0x82D8E274;
	sub_82ABFDA0(ctx, base);
loc_82D8E274:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82d8acc0
	ctx.lr = 0x82D8E27C;
	sub_82D8ACC0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d8e2a8
	if (cr6.eq) goto loc_82D8E2A8;
	// cmplwi cr6,r31,3
	cr6.compare<uint32_t>(ctx.r31.u32, 3, xer);
	// bge cr6,0x82d8e2a8
	if (!cr6.lt) goto loc_82D8E2A8;
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + ctx.r29.u64;
	// bl 0x82abfda0
	ctx.lr = 0x82D8E2A8;
	sub_82ABFDA0(ctx, base);
loc_82D8E2A8:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplwi cr6,r30,3
	cr6.compare<uint32_t>(ctx.r30.u32, 3, xer);
	// blt cr6,0x82d8e244
	if (cr6.lt) goto loc_82D8E244;
loc_82D8E2B4:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,880
	ctx.r1.s64 = ctx.r1.s64 + 880;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D8E2C0"))) PPC_WEAK_FUNC(sub_82D8E2C0);
PPC_FUNC_IMPL(__imp__sub_82D8E2C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82D8E2C8;
	__savegprlr_27(ctx, base);
	// stwu r1,-1520(r1)
	ea = -1520 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// bl 0x82d86078
	ctx.lr = 0x82D8E2D4;
	sub_82D86078(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d8e460
	if (cr6.eq) goto loc_82D8E460;
	// lwz r3,116(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d8e460
	if (cr6.eq) goto loc_82D8E460;
	// bl 0x8290b4c8
	ctx.lr = 0x82D8E2F0;
	sub_8290B4C8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d8e460
	if (cr6.eq) goto loc_82D8E460;
	// lwz r3,116(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// bl 0x825832d8
	ctx.lr = 0x82D8E304;
	sub_825832D8(ctx, base);
	// bl 0x82d99c10
	ctx.lr = 0x82D8E308;
	sub_82D99C10(ctx, base);
	// bl 0x825832f0
	ctx.lr = 0x82D8E30C;
	sub_825832F0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d8e460
	if (cr6.eq) goto loc_82D8E460;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d98848
	ctx.lr = 0x82D8E320;
	sub_82D98848(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d8e460
	if (cr6.eq) goto loc_82D8E460;
	// addi r30,r1,304
	ctx.r30.s64 = ctx.r1.s64 + 304;
	// li r31,2
	ctx.r31.s64 = 2;
loc_82D8E334:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ac0af0
	ctx.lr = 0x82D8E33C;
	sub_82AC0AF0(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// addi r30,r30,160
	ctx.r30.s64 = ctx.r30.s64 + 160;
	// bge 0x82d8e334
	if (!cr0.lt) goto loc_82D8E334;
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// bl 0x82d8cc78
	ctx.lr = 0x82D8E350;
	sub_82D8CC78(ctx, base);
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// bl 0x82d8cc78
	ctx.lr = 0x82D8E358;
	sub_82D8CC78(ctx, base);
	// bl 0x831156e8
	ctx.lr = 0x82D8E35C;
	sub_831156E8(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r31,0
	ctx.r31.s64 = 0;
	// lwz r3,48(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// sth r31,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r31.u16);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x8311c260
	ctx.lr = 0x82D8E378;
	sub_8311C260(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,832
	ctx.r3.s64 = ctx.r1.s64 + 832;
	// li r5,632
	ctx.r5.s64 = 632;
	// bl 0x831ce980
	ctx.lr = 0x82D8E388;
	sub_831CE980(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,1416
	ctx.r4.s64 = ctx.r1.s64 + 1416;
	// li r5,47
	ctx.r5.s64 = 47;
	// bl 0x831ce980
	ctx.lr = 0x82D8E398;
	sub_831CE980(ctx, base);
	// li r10,32
	ctx.r10.s64 = 32;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// li r10,255
	ctx.r10.s64 = 255;
loc_82D8E3A8:
	// cmplwi cr6,r11,18
	cr6.compare<uint32_t>(ctx.r11.u32, 18, xer);
	// blt cr6,0x82d8e3c4
	if (cr6.lt) goto loc_82D8E3C4;
	// cmplwi cr6,r11,32
	cr6.compare<uint32_t>(ctx.r11.u32, 32, xer);
	// bge cr6,0x82d8e3d4
	if (!cr6.lt) goto loc_82D8E3D4;
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// stbx r10,r11,r9
	PPC_STORE_U8(ctx.r11.u32 + ctx.r9.u32, ctx.r10.u8);
	// b 0x82d8e3d4
	goto loc_82D8E3D4;
loc_82D8E3C4:
	// cmplwi cr6,r11,32
	cr6.compare<uint32_t>(ctx.r11.u32, 32, xer);
	// bge cr6,0x82d8e3d4
	if (!cr6.lt) goto loc_82D8E3D4;
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// stbx r11,r11,r9
	PPC_STORE_U8(ctx.r11.u32 + ctx.r9.u32, ctx.r11.u8);
loc_82D8E3D4:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x82d8e3a8
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82D8E3A8;
	// addi r3,r1,784
	ctx.r3.s64 = ctx.r1.s64 + 784;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// li r5,47
	ctx.r5.s64 = 47;
	// bl 0x831ce980
	ctx.lr = 0x82D8E3EC;
	sub_831CE980(ctx, base);
loc_82D8E3EC:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82ac0af0
	ctx.lr = 0x82D8E3F4;
	sub_82AC0AF0(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d98930
	ctx.lr = 0x82D8E3FC;
	sub_82D98930(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,3
	cr6.compare<uint32_t>(ctx.r31.u32, 3, xer);
	// bge cr6,0x82d8e430
	if (!cr6.lt) goto loc_82D8E430;
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// rlwinm r30,r11,5,0,26
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// add r4,r30,r10
	ctx.r4.u64 = ctx.r30.u64 + ctx.r10.u64;
	// bl 0x82abfda0
	ctx.lr = 0x82D8E420;
	sub_82ABFDA0(ctx, base);
	// addi r11,r1,304
	ctx.r11.s64 = ctx.r1.s64 + 304;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// add r3,r30,r11
	ctx.r3.u64 = ctx.r30.u64 + ctx.r11.u64;
	// bl 0x82abfda0
	ctx.lr = 0x82D8E430;
	sub_82ABFDA0(ctx, base);
loc_82D8E430:
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// clrlwi r31,r11,24
	ctx.r31.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r31,3
	cr6.compare<uint32_t>(ctx.r31.u32, 3, xer);
	// blt cr6,0x82d8e3ec
	if (cr6.lt) goto loc_82D8E3EC;
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// bl 0x82d8cea8
	ctx.lr = 0x82D8E448;
	sub_82D8CEA8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d8e460
	if (cr6.eq) goto loc_82D8E460;
	// addi r4,r1,304
	ctx.r4.s64 = ctx.r1.s64 + 304;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82ce7a90
	ctx.lr = 0x82D8E460;
	sub_82CE7A90(ctx, base);
loc_82D8E460:
	// addi r1,r1,1520
	ctx.r1.s64 = ctx.r1.s64 + 1520;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D8E468"))) PPC_WEAK_FUNC(sub_82D8E468);
PPC_FUNC_IMPL(__imp__sub_82D8E468) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x82D8E470;
	__savegprlr_25(ctx, base);
	// stwu r1,-688(r1)
	ea = -688 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x82d86078
	ctx.lr = 0x82D8E480;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d8e698
	if (cr6.eq) goto loc_82D8E698;
	// lwz r3,116(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// bl 0x825832d8
	ctx.lr = 0x82D8E490;
	sub_825832D8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x83102db0
	ctx.lr = 0x82D8E498;
	sub_83102DB0(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d99c08
	ctx.lr = 0x82D8E4A4;
	sub_82D99C08(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r30,0
	ctx.r30.s64 = 0;
loc_82D8E4B0:
	// lwz r11,80(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 80);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// lwz r11,88(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 88);
	// bge cr6,0x82d8e4c8
	if (!cr6.lt) goto loc_82D8E4C8;
	// lwzx r4,r11,r30
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// b 0x82d8e4cc
	goto loc_82D8E4CC;
loc_82D8E4C8:
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82D8E4CC:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82d9a978
	ctx.lr = 0x82D8E4D4;
	sub_82D9A978(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(ctx.r11.s32, -1, xer);
	// bne cr6,0x82d8e4f8
	if (!cr6.eq) goto loc_82D8E4F8;
	// lwz r11,88(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 88);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82d9a978
	ctx.lr = 0x82D8E4F4;
	sub_82D9A978(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_82D8E4F8:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82d995f8
	ctx.lr = 0x82D8E504;
	sub_82D995F8(ctx, base);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplwi cr6,r30,12
	cr6.compare<uint32_t>(ctx.r30.u32, 12, xer);
	// blt cr6,0x82d8e4b0
	if (cr6.lt) goto loc_82D8E4B0;
	// lwz r11,32(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// ble cr6,0x82d8e5ac
	if (!cr6.gt) goto loc_82D8E5AC;
	// li r28,0
	ctx.r28.s64 = 0;
loc_82D8E528:
	// lwz r11,40(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 40);
	// add r30,r11,r28
	ctx.r30.u64 = ctx.r11.u64 + ctx.r28.u64;
	// lwzx r4,r11,r28
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r28.u32);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x82d8e568
	if (!cr6.eq) goto loc_82D8E568;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82d987f8
	ctx.lr = 0x82D8E548;
	sub_82D987F8(ctx, base);
	// bl 0x83133f38
	ctx.lr = 0x82D8E54C;
	sub_83133F38(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82d8e598
	if (!cr6.eq) goto loc_82D8E598;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82d994b0
	ctx.lr = 0x82D8E564;
	sub_82D994B0(ctx, base);
	// b 0x82d8e598
	goto loc_82D8E598;
loc_82D8E568:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82d9a868
	ctx.lr = 0x82D8E570;
	sub_82D9A868(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82d996b0
	ctx.lr = 0x82D8E580;
	sub_82D996B0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82d987f8
	ctx.lr = 0x82D8E58C;
	sub_82D987F8(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// clrlwi r4,r11,24
	ctx.r4.u64 = ctx.r11.u32 & 0xFF;
	// bl 0x82d98518
	ctx.lr = 0x82D8E598;
	sub_82D98518(ctx, base);
loc_82D8E598:
	// lwz r11,32(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r28,r28,12
	ctx.r28.s64 = ctx.r28.s64 + 12;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// blt cr6,0x82d8e528
	if (cr6.lt) goto loc_82D8E528;
loc_82D8E5AC:
	// bl 0x831156e8
	ctx.lr = 0x82D8E5B0;
	sub_831156E8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d8e698
	if (cr6.eq) goto loc_82D8E698;
	// lwz r11,88(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 88);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r3,48(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// sth r10,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r10.u16);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x8311c260
	ctx.lr = 0x82D8E5D8;
	sub_8311C260(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r30,r1,96
	ctx.r30.s64 = ctx.r1.s64 + 96;
	// li r31,2
	ctx.r31.s64 = 2;
loc_82D8E5E4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ac0af0
	ctx.lr = 0x82D8E5EC;
	sub_82AC0AF0(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// addi r30,r30,160
	ctx.r30.s64 = ctx.r30.s64 + 160;
	// bge 0x82d8e5e4
	if (!cr0.lt) goto loc_82D8E5E4;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82d8cc78
	ctx.lr = 0x82D8E600;
	sub_82D8CC78(ctx, base);
	// addi r4,r28,584
	ctx.r4.s64 = ctx.r28.s64 + 584;
	// addi r3,r1,576
	ctx.r3.s64 = ctx.r1.s64 + 576;
	// li r5,47
	ctx.r5.s64 = 47;
	// bl 0x831ce980
	ctx.lr = 0x82D8E610;
	sub_831CE980(ctx, base);
	// lwz r11,88(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 88);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82d9a978
	ctx.lr = 0x82D8E620;
	sub_82D9A978(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r31,r30,64
	ctx.r31.s64 = ctx.r30.s64 + 64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82abfda0
	ctx.lr = 0x82D8E634;
	sub_82ABFDA0(ctx, base);
	// addi r4,r30,224
	ctx.r4.s64 = ctx.r30.s64 + 224;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x82abfda0
	ctx.lr = 0x82D8E640;
	sub_82ABFDA0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,416
	ctx.r3.s64 = ctx.r1.s64 + 416;
	// bl 0x82abfda0
	ctx.lr = 0x82D8E64C;
	sub_82ABFDA0(ctx, base);
	// lwz r11,96(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 96);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d8e68c
	if (cr6.eq) goto loc_82D8E68C;
	// addi r31,r29,100
	ctx.r31.s64 = ctx.r29.s64 + 100;
	// cmplwi cr6,r11,528
	cr6.compare<uint32_t>(ctx.r11.u32, 528, xer);
	// bne cr6,0x82d8e68c
	if (!cr6.eq) goto loc_82D8E68C;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x82d8e68c
	if (cr6.eq) goto loc_82D8E68C;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82d8cc78
	ctx.lr = 0x82D8E674;
	sub_82D8CC78(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// li r5,528
	ctx.r5.s64 = 528;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x831ce980
	ctx.lr = 0x82D8E684;
	sub_831CE980(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82d8cea8
	ctx.lr = 0x82D8E68C;
	sub_82D8CEA8(ctx, base);
loc_82D8E68C:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82d99658
	ctx.lr = 0x82D8E698;
	sub_82D99658(ctx, base);
loc_82D8E698:
	// addi r1,r1,688
	ctx.r1.s64 = ctx.r1.s64 + 688;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D8E6A0"))) PPC_WEAK_FUNC(sub_82D8E6A0);
PPC_FUNC_IMPL(__imp__sub_82D8E6A0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdac4
	ctx.lr = 0x82D8E6A8;
	__savegprlr_19(ctx, base);
	// stwu r1,-864(r1)
	ea = -864 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,20(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// stw r10,16(r4)
	PPC_STORE_U32(ctx.r4.u32 + 16, ctx.r10.u32);
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82d8e6d4
	if (cr6.lt) goto loc_82D8E6D4;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// b 0x82d8e6d8
	goto loc_82D8E6D8;
loc_82D8E6D4:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_82D8E6D8:
	// lis r9,108
	ctx.r9.s64 = 7077888;
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// lis r8,560
	ctx.r8.s64 = 36700160;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// ori r9,r9,127
	ctx.r9.u64 = ctx.r9.u64 | 127;
	// ori r8,r8,217
	ctx.r8.u64 = ctx.r8.u64 | 217;
	// lis r7,560
	ctx.r7.s64 = 36700160;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// lis r6,560
	ctx.r6.s64 = 36700160;
	// ori r7,r7,218
	ctx.r7.u64 = ctx.r7.u64 | 218;
	// li r9,2
	ctx.r9.s64 = 2;
	// li r8,3
	ctx.r8.s64 = 3;
	// stw r7,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r7.u32);
	// lis r5,560
	ctx.r5.s64 = 36700160;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// ori r6,r6,219
	ctx.r6.u64 = ctx.r6.u64 | 219;
	// stw r8,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r8.u32);
	// lis r4,560
	ctx.r4.s64 = 36700160;
	// ori r8,r5,220
	ctx.r8.u64 = ctx.r5.u64 | 220;
	// stw r6,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r6.u32);
	// lis r11,560
	ctx.r11.s64 = 36700160;
	// li r9,4
	ctx.r9.s64 = 4;
	// stw r8,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r8.u32);
	// li r7,5
	ctx.r7.s64 = 5;
	// lis r31,560
	ctx.r31.s64 = 36700160;
	// stw r9,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r9.u32);
	// lis r30,560
	ctx.r30.s64 = 36700160;
	// stw r7,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r7.u32);
	// ori r6,r4,221
	ctx.r6.u64 = ctx.r4.u64 | 221;
	// ori r4,r11,222
	ctx.r4.u64 = ctx.r11.u64 | 222;
	// li r5,6
	ctx.r5.s64 = 6;
	// stw r6,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r6.u32);
	// li r11,7
	ctx.r11.s64 = 7;
	// stw r4,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r4.u32);
	// ori r9,r31,223
	ctx.r9.u64 = ctx.r31.u64 | 223;
	// stw r5,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r5.u32);
	// li r8,8
	ctx.r8.s64 = 8;
	// stw r11,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r11.u32);
	// ori r7,r30,224
	ctx.r7.u64 = ctx.r30.u64 | 224;
	// stw r9,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r9.u32);
	// lis r28,560
	ctx.r28.s64 = 36700160;
	// stw r8,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r8.u32);
	// lis r25,560
	ctx.r25.s64 = 36700160;
	// stw r7,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r7.u32);
	// lis r24,560
	ctx.r24.s64 = 36700160;
	// li r6,9
	ctx.r6.s64 = 9;
	// ori r5,r28,225
	ctx.r5.u64 = ctx.r28.u64 | 225;
	// li r4,10
	ctx.r4.s64 = 10;
	// stw r6,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r6.u32);
	// ori r11,r25,227
	ctx.r11.u64 = ctx.r25.u64 | 227;
	// stw r5,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r5.u32);
	// li r9,11
	ctx.r9.s64 = 11;
	// stw r4,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r4.u32);
	// ori r8,r24,228
	ctx.r8.u64 = ctx.r24.u64 | 228;
	// stw r11,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r11.u32);
	// li r7,12
	ctx.r7.s64 = 12;
	// stw r9,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r9.u32);
	// lis r23,560
	ctx.r23.s64 = 36700160;
	// stw r8,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r8.u32);
	// lis r22,560
	ctx.r22.s64 = 36700160;
	// stw r7,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r7.u32);
	// lis r21,560
	ctx.r21.s64 = 36700160;
	// ori r6,r23,229
	ctx.r6.u64 = ctx.r23.u64 | 229;
	// li r5,13
	ctx.r5.s64 = 13;
	// ori r4,r22,230
	ctx.r4.u64 = ctx.r22.u64 | 230;
	// stw r6,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r6.u32);
	// li r20,1
	ctx.r20.s64 = 1;
	// stw r5,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r5.u32);
	// li r11,14
	ctx.r11.s64 = 14;
	// stw r4,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r4.u32);
	// ori r9,r21,231
	ctx.r9.u64 = ctx.r21.u64 | 231;
	// stw r20,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r20.u32);
	// li r8,15
	ctx.r8.s64 = 15;
	// stw r11,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r11.u32);
	// lis r7,560
	ctx.r7.s64 = 36700160;
	// stw r9,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r9.u32);
	// li r6,16
	ctx.r6.s64 = 16;
	// stw r8,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r8.u32);
	// ori r5,r7,232
	ctx.r5.u64 = ctx.r7.u64 | 232;
	// lis r4,560
	ctx.r4.s64 = 36700160;
	// lis r11,560
	ctx.r11.s64 = 36700160;
	// stw r6,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r6.u32);
	// ori r4,r4,233
	ctx.r4.u64 = ctx.r4.u64 | 233;
	// stw r5,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r5.u32);
	// ori r11,r11,238
	ctx.r11.u64 = ctx.r11.u64 | 238;
	// lis r9,560
	ctx.r9.s64 = 36700160;
	// stw r4,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r4.u32);
	// lis r8,560
	ctx.r8.s64 = 36700160;
	// stw r11,220(r1)
	PPC_STORE_U32(ctx.r1.u32 + 220, ctx.r11.u32);
	// ori r9,r9,239
	ctx.r9.u64 = ctx.r9.u64 | 239;
	// ori r8,r8,240
	ctx.r8.u64 = ctx.r8.u64 | 240;
	// li r4,18
	ctx.r4.s64 = 18;
	// stw r9,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r9.u32);
	// li r11,19
	ctx.r11.s64 = 19;
	// stw r8,236(r1)
	PPC_STORE_U32(ctx.r1.u32 + 236, ctx.r8.u32);
	// lis r7,560
	ctx.r7.s64 = 36700160;
	// stw r4,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r4.u32);
	// lis r6,560
	ctx.r6.s64 = 36700160;
	// stw r11,232(r1)
	PPC_STORE_U32(ctx.r1.u32 + 232, ctx.r11.u32);
	// lis r5,560
	ctx.r5.s64 = 36700160;
	// ori r11,r7,241
	ctx.r11.u64 = ctx.r7.u64 | 241;
	// ori r8,r6,242
	ctx.r8.u64 = ctx.r6.u64 | 242;
	// li r4,20
	ctx.r4.s64 = 20;
	// stw r11,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r11.u32);
	// li r9,21
	ctx.r9.s64 = 21;
	// stw r8,252(r1)
	PPC_STORE_U32(ctx.r1.u32 + 252, ctx.r8.u32);
	// lis r31,560
	ctx.r31.s64 = 36700160;
	// stw r4,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r4.u32);
	// lis r30,560
	ctx.r30.s64 = 36700160;
	// stw r9,248(r1)
	PPC_STORE_U32(ctx.r1.u32 + 248, ctx.r9.u32);
	// ori r6,r5,246
	ctx.r6.u64 = ctx.r5.u64 | 246;
	// li r7,22
	ctx.r7.s64 = 22;
	// li r5,23
	ctx.r5.s64 = 23;
	// stw r6,260(r1)
	PPC_STORE_U32(ctx.r1.u32 + 260, ctx.r6.u32);
	// ori r4,r31,245
	ctx.r4.u64 = ctx.r31.u64 | 245;
	// stw r7,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, ctx.r7.u32);
	// li r11,24
	ctx.r11.s64 = 24;
	// stw r5,264(r1)
	PPC_STORE_U32(ctx.r1.u32 + 264, ctx.r5.u32);
	// ori r9,r30,243
	ctx.r9.u64 = ctx.r30.u64 | 243;
	// stw r4,268(r1)
	PPC_STORE_U32(ctx.r1.u32 + 268, ctx.r4.u32);
	// li r8,25
	ctx.r8.s64 = 25;
	// stw r11,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r11.u32);
	// lis r28,560
	ctx.r28.s64 = 36700160;
	// stw r9,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r9.u32);
	// lis r25,560
	ctx.r25.s64 = 36700160;
	// stw r8,280(r1)
	PPC_STORE_U32(ctx.r1.u32 + 280, ctx.r8.u32);
	// lis r24,560
	ctx.r24.s64 = 36700160;
	// lis r23,560
	ctx.r23.s64 = 36700160;
	// ori r7,r28,244
	ctx.r7.u64 = ctx.r28.u64 | 244;
	// li r6,26
	ctx.r6.s64 = 26;
	// ori r5,r25,249
	ctx.r5.u64 = ctx.r25.u64 | 249;
	// stw r7,284(r1)
	PPC_STORE_U32(ctx.r1.u32 + 284, ctx.r7.u32);
	// li r4,27
	ctx.r4.s64 = 27;
	// stw r6,288(r1)
	PPC_STORE_U32(ctx.r1.u32 + 288, ctx.r6.u32);
	// ori r11,r24,247
	ctx.r11.u64 = ctx.r24.u64 | 247;
	// stw r5,292(r1)
	PPC_STORE_U32(ctx.r1.u32 + 292, ctx.r5.u32);
	// li r9,28
	ctx.r9.s64 = 28;
	// stw r4,296(r1)
	PPC_STORE_U32(ctx.r1.u32 + 296, ctx.r4.u32);
	// ori r8,r23,248
	ctx.r8.u64 = ctx.r23.u64 | 248;
	// stw r11,300(r1)
	PPC_STORE_U32(ctx.r1.u32 + 300, ctx.r11.u32);
	// lis r22,560
	ctx.r22.s64 = 36700160;
	// stw r9,304(r1)
	PPC_STORE_U32(ctx.r1.u32 + 304, ctx.r9.u32);
	// lis r21,560
	ctx.r21.s64 = 36700160;
	// stw r8,308(r1)
	PPC_STORE_U32(ctx.r1.u32 + 308, ctx.r8.u32);
	// li r7,29
	ctx.r7.s64 = 29;
	// ori r6,r22,250
	ctx.r6.u64 = ctx.r22.u64 | 250;
	// li r5,30
	ctx.r5.s64 = 30;
	// stw r7,312(r1)
	PPC_STORE_U32(ctx.r1.u32 + 312, ctx.r7.u32);
	// li r20,17
	ctx.r20.s64 = 17;
	// stw r6,316(r1)
	PPC_STORE_U32(ctx.r1.u32 + 316, ctx.r6.u32);
	// ori r4,r21,251
	ctx.r4.u64 = ctx.r21.u64 | 251;
	// stw r5,320(r1)
	PPC_STORE_U32(ctx.r1.u32 + 320, ctx.r5.u32);
	// li r11,31
	ctx.r11.s64 = 31;
	// stw r20,216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 216, ctx.r20.u32);
	// lis r9,560
	ctx.r9.s64 = 36700160;
	// stw r4,324(r1)
	PPC_STORE_U32(ctx.r1.u32 + 324, ctx.r4.u32);
	// lis r8,560
	ctx.r8.s64 = 36700160;
	// stw r11,328(r1)
	PPC_STORE_U32(ctx.r1.u32 + 328, ctx.r11.u32);
	// ori r7,r9,252
	ctx.r7.u64 = ctx.r9.u64 | 252;
	// li r6,32
	ctx.r6.s64 = 32;
	// ori r5,r8,253
	ctx.r5.u64 = ctx.r8.u64 | 253;
	// lis r4,560
	ctx.r4.s64 = 36700160;
	// stw r7,332(r1)
	PPC_STORE_U32(ctx.r1.u32 + 332, ctx.r7.u32);
	// lis r11,560
	ctx.r11.s64 = 36700160;
	// stw r6,336(r1)
	PPC_STORE_U32(ctx.r1.u32 + 336, ctx.r6.u32);
	// ori r4,r4,254
	ctx.r4.u64 = ctx.r4.u64 | 254;
	// stw r5,340(r1)
	PPC_STORE_U32(ctx.r1.u32 + 340, ctx.r5.u32);
	// ori r11,r11,263
	ctx.r11.u64 = ctx.r11.u64 | 263;
	// stw r4,348(r1)
	PPC_STORE_U32(ctx.r1.u32 + 348, ctx.r4.u32);
	// lis r8,560
	ctx.r8.s64 = 36700160;
	// stw r11,356(r1)
	PPC_STORE_U32(ctx.r1.u32 + 356, ctx.r11.u32);
	// li r4,35
	ctx.r4.s64 = 35;
	// li r11,36
	ctx.r11.s64 = 36;
	// lis r7,560
	ctx.r7.s64 = 36700160;
	// stw r4,360(r1)
	PPC_STORE_U32(ctx.r1.u32 + 360, ctx.r4.u32);
	// lis r9,560
	ctx.r9.s64 = 36700160;
	// stw r11,368(r1)
	PPC_STORE_U32(ctx.r1.u32 + 368, ctx.r11.u32);
	// ori r8,r8,256
	ctx.r8.u64 = ctx.r8.u64 | 256;
	// lis r6,560
	ctx.r6.s64 = 36700160;
	// ori r11,r7,255
	ctx.r11.u64 = ctx.r7.u64 | 255;
	// stw r8,372(r1)
	PPC_STORE_U32(ctx.r1.u32 + 372, ctx.r8.u32);
	// ori r9,r9,271
	ctx.r9.u64 = ctx.r9.u64 | 271;
	// lis r5,560
	ctx.r5.s64 = 36700160;
	// stw r11,380(r1)
	PPC_STORE_U32(ctx.r1.u32 + 380, ctx.r11.u32);
	// li r4,37
	ctx.r4.s64 = 37;
	// stw r9,364(r1)
	PPC_STORE_U32(ctx.r1.u32 + 364, ctx.r9.u32);
	// lis r31,560
	ctx.r31.s64 = 36700160;
	// ori r8,r6,259
	ctx.r8.u64 = ctx.r6.u64 | 259;
	// stw r4,376(r1)
	PPC_STORE_U32(ctx.r1.u32 + 376, ctx.r4.u32);
	// ori r6,r5,257
	ctx.r6.u64 = ctx.r5.u64 | 257;
	// li r7,39
	ctx.r7.s64 = 39;
	// stw r8,388(r1)
	PPC_STORE_U32(ctx.r1.u32 + 388, ctx.r8.u32);
	// li r9,38
	ctx.r9.s64 = 38;
	// stw r6,396(r1)
	PPC_STORE_U32(ctx.r1.u32 + 396, ctx.r6.u32);
	// li r5,40
	ctx.r5.s64 = 40;
	// stw r7,392(r1)
	PPC_STORE_U32(ctx.r1.u32 + 392, ctx.r7.u32);
	// ori r4,r31,258
	ctx.r4.u64 = ctx.r31.u64 | 258;
	// stw r9,384(r1)
	PPC_STORE_U32(ctx.r1.u32 + 384, ctx.r9.u32);
	// li r11,41
	ctx.r11.s64 = 41;
	// stw r5,400(r1)
	PPC_STORE_U32(ctx.r1.u32 + 400, ctx.r5.u32);
	// lis r28,560
	ctx.r28.s64 = 36700160;
	// stw r4,404(r1)
	PPC_STORE_U32(ctx.r1.u32 + 404, ctx.r4.u32);
	// lis r30,560
	ctx.r30.s64 = 36700160;
	// stw r11,408(r1)
	PPC_STORE_U32(ctx.r1.u32 + 408, ctx.r11.u32);
	// lis r25,560
	ctx.r25.s64 = 36700160;
	// lis r24,560
	ctx.r24.s64 = 36700160;
	// li r8,42
	ctx.r8.s64 = 42;
	// ori r7,r28,264
	ctx.r7.u64 = ctx.r28.u64 | 264;
	// ori r9,r30,262
	ctx.r9.u64 = ctx.r30.u64 | 262;
	// stw r8,416(r1)
	PPC_STORE_U32(ctx.r1.u32 + 416, ctx.r8.u32);
	// li r6,43
	ctx.r6.s64 = 43;
	// stw r7,420(r1)
	PPC_STORE_U32(ctx.r1.u32 + 420, ctx.r7.u32);
	// ori r5,r25,260
	ctx.r5.u64 = ctx.r25.u64 | 260;
	// stw r9,412(r1)
	PPC_STORE_U32(ctx.r1.u32 + 412, ctx.r9.u32);
	// li r4,44
	ctx.r4.s64 = 44;
	// stw r6,424(r1)
	PPC_STORE_U32(ctx.r1.u32 + 424, ctx.r6.u32);
	// ori r11,r24,261
	ctx.r11.u64 = ctx.r24.u64 | 261;
	// stw r5,428(r1)
	PPC_STORE_U32(ctx.r1.u32 + 428, ctx.r5.u32);
	// lis r23,560
	ctx.r23.s64 = 36700160;
	// stw r4,432(r1)
	PPC_STORE_U32(ctx.r1.u32 + 432, ctx.r4.u32);
	// lis r22,560
	ctx.r22.s64 = 36700160;
	// stw r11,436(r1)
	PPC_STORE_U32(ctx.r1.u32 + 436, ctx.r11.u32);
	// lis r21,560
	ctx.r21.s64 = 36700160;
	// ori r8,r23,266
	ctx.r8.u64 = ctx.r23.u64 | 266;
	// li r7,46
	ctx.r7.s64 = 46;
	// li r20,33
	ctx.r20.s64 = 33;
	// stw r8,444(r1)
	PPC_STORE_U32(ctx.r1.u32 + 444, ctx.r8.u32);
	// li r19,34
	ctx.r19.s64 = 34;
	// stw r7,448(r1)
	PPC_STORE_U32(ctx.r1.u32 + 448, ctx.r7.u32);
	// li r9,45
	ctx.r9.s64 = 45;
	// stw r20,344(r1)
	PPC_STORE_U32(ctx.r1.u32 + 344, ctx.r20.u32);
	// ori r6,r22,598
	ctx.r6.u64 = ctx.r22.u64 | 598;
	// stw r19,352(r1)
	PPC_STORE_U32(ctx.r1.u32 + 352, ctx.r19.u32);
	// li r5,47
	ctx.r5.s64 = 47;
	// stw r9,440(r1)
	PPC_STORE_U32(ctx.r1.u32 + 440, ctx.r9.u32);
	// ori r4,r21,268
	ctx.r4.u64 = ctx.r21.u64 | 268;
	// stw r6,452(r1)
	PPC_STORE_U32(ctx.r1.u32 + 452, ctx.r6.u32);
	// lis r11,560
	ctx.r11.s64 = 36700160;
	// stw r5,456(r1)
	PPC_STORE_U32(ctx.r1.u32 + 456, ctx.r5.u32);
	// li r8,48
	ctx.r8.s64 = 48;
	// stw r4,460(r1)
	PPC_STORE_U32(ctx.r1.u32 + 460, ctx.r4.u32);
	// ori r7,r11,265
	ctx.r7.u64 = ctx.r11.u64 | 265;
	// lis r6,560
	ctx.r6.s64 = 36700160;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r5,560
	ctx.r5.s64 = 36700160;
	// stw r8,464(r1)
	PPC_STORE_U32(ctx.r1.u32 + 464, ctx.r8.u32);
	// ori r6,r6,267
	ctx.r6.u64 = ctx.r6.u64 | 267;
	// stw r7,468(r1)
	PPC_STORE_U32(ctx.r1.u32 + 468, ctx.r7.u32);
	// ori r5,r5,269
	ctx.r5.u64 = ctx.r5.u64 | 269;
	// stw r6,476(r1)
	PPC_STORE_U32(ctx.r1.u32 + 476, ctx.r6.u32);
	// lis r3,560
	ctx.r3.s64 = 36700160;
	// stw r5,484(r1)
	PPC_STORE_U32(ctx.r1.u32 + 484, ctx.r5.u32);
	// li r6,51
	ctx.r6.s64 = 51;
	// li r5,52
	ctx.r5.s64 = 52;
	// lis r4,560
	ctx.r4.s64 = 36700160;
	// stw r6,488(r1)
	PPC_STORE_U32(ctx.r1.u32 + 488, ctx.r6.u32);
	// lis r11,560
	ctx.r11.s64 = 36700160;
	// stw r5,496(r1)
	PPC_STORE_U32(ctx.r1.u32 + 496, ctx.r5.u32);
	// ori r3,r3,476
	ctx.r3.u64 = ctx.r3.u64 | 476;
	// ori r4,r4,270
	ctx.r4.u64 = ctx.r4.u64 | 270;
	// lis r8,560
	ctx.r8.s64 = 36700160;
	// stw r3,500(r1)
	PPC_STORE_U32(ctx.r1.u32 + 500, ctx.r3.u32);
	// ori r5,r11,477
	ctx.r5.u64 = ctx.r11.u64 | 477;
	// stw r4,492(r1)
	PPC_STORE_U32(ctx.r1.u32 + 492, ctx.r4.u32);
	// lis r7,560
	ctx.r7.s64 = 36700160;
	// li r6,53
	ctx.r6.s64 = 53;
	// stw r5,508(r1)
	PPC_STORE_U32(ctx.r1.u32 + 508, ctx.r5.u32);
	// lis r31,560
	ctx.r31.s64 = 36700160;
	// ori r3,r8,478
	ctx.r3.u64 = ctx.r8.u64 | 478;
	// stw r6,504(r1)
	PPC_STORE_U32(ctx.r1.u32 + 504, ctx.r6.u32);
	// ori r8,r7,479
	ctx.r8.u64 = ctx.r7.u64 | 479;
	// li r4,54
	ctx.r4.s64 = 54;
	// stw r3,516(r1)
	PPC_STORE_U32(ctx.r1.u32 + 516, ctx.r3.u32);
	// li r11,55
	ctx.r11.s64 = 55;
	// stw r8,524(r1)
	PPC_STORE_U32(ctx.r1.u32 + 524, ctx.r8.u32);
	// ori r6,r31,273
	ctx.r6.u64 = ctx.r31.u64 | 273;
	// stw r4,512(r1)
	PPC_STORE_U32(ctx.r1.u32 + 512, ctx.r4.u32);
	// li r7,56
	ctx.r7.s64 = 56;
	// stw r11,520(r1)
	PPC_STORE_U32(ctx.r1.u32 + 520, ctx.r11.u32);
	// li r5,57
	ctx.r5.s64 = 57;
	// stw r6,532(r1)
	PPC_STORE_U32(ctx.r1.u32 + 532, ctx.r6.u32);
	// lis r30,560
	ctx.r30.s64 = 36700160;
	// stw r7,528(r1)
	PPC_STORE_U32(ctx.r1.u32 + 528, ctx.r7.u32);
	// lis r28,560
	ctx.r28.s64 = 36700160;
	// stw r5,536(r1)
	PPC_STORE_U32(ctx.r1.u32 + 536, ctx.r5.u32);
	// lis r25,560
	ctx.r25.s64 = 36700160;
	// lis r24,560
	ctx.r24.s64 = 36700160;
	// ori r4,r30,274
	ctx.r4.u64 = ctx.r30.u64 | 274;
	// li r3,58
	ctx.r3.s64 = 58;
	// ori r11,r28,275
	ctx.r11.u64 = ctx.r28.u64 | 275;
	// stw r4,540(r1)
	PPC_STORE_U32(ctx.r1.u32 + 540, ctx.r4.u32);
	// li r8,59
	ctx.r8.s64 = 59;
	// stw r3,544(r1)
	PPC_STORE_U32(ctx.r1.u32 + 544, ctx.r3.u32);
	// ori r7,r25,276
	ctx.r7.u64 = ctx.r25.u64 | 276;
	// stw r11,548(r1)
	PPC_STORE_U32(ctx.r1.u32 + 548, ctx.r11.u32);
	// li r6,60
	ctx.r6.s64 = 60;
	// stw r8,552(r1)
	PPC_STORE_U32(ctx.r1.u32 + 552, ctx.r8.u32);
	// ori r5,r24,277
	ctx.r5.u64 = ctx.r24.u64 | 277;
	// stw r7,556(r1)
	PPC_STORE_U32(ctx.r1.u32 + 556, ctx.r7.u32);
	// lis r23,560
	ctx.r23.s64 = 36700160;
	// stw r6,560(r1)
	PPC_STORE_U32(ctx.r1.u32 + 560, ctx.r6.u32);
	// lis r22,560
	ctx.r22.s64 = 36700160;
	// stw r5,564(r1)
	PPC_STORE_U32(ctx.r1.u32 + 564, ctx.r5.u32);
	// li r4,61
	ctx.r4.s64 = 61;
	// ori r3,r23,278
	ctx.r3.u64 = ctx.r23.u64 | 278;
	// li r11,62
	ctx.r11.s64 = 62;
	// stw r4,568(r1)
	PPC_STORE_U32(ctx.r1.u32 + 568, ctx.r4.u32);
	// li r21,49
	ctx.r21.s64 = 49;
	// stw r3,572(r1)
	PPC_STORE_U32(ctx.r1.u32 + 572, ctx.r3.u32);
	// li r20,50
	ctx.r20.s64 = 50;
	// stw r11,576(r1)
	PPC_STORE_U32(ctx.r1.u32 + 576, ctx.r11.u32);
	// ori r8,r22,279
	ctx.r8.u64 = ctx.r22.u64 | 279;
	// stw r21,472(r1)
	PPC_STORE_U32(ctx.r1.u32 + 472, ctx.r21.u32);
	// li r7,63
	ctx.r7.s64 = 63;
	// stw r20,480(r1)
	PPC_STORE_U32(ctx.r1.u32 + 480, ctx.r20.u32);
	// lis r6,560
	ctx.r6.s64 = 36700160;
	// stw r8,580(r1)
	PPC_STORE_U32(ctx.r1.u32 + 580, ctx.r8.u32);
	// lis r5,560
	ctx.r5.s64 = 36700160;
	// stw r7,584(r1)
	PPC_STORE_U32(ctx.r1.u32 + 584, ctx.r7.u32);
	// li r31,-1
	ctx.r31.s64 = -1;
	// ori r4,r6,280
	ctx.r4.u64 = ctx.r6.u64 | 280;
	// li r3,64
	ctx.r3.s64 = 64;
	// ori r11,r5,281
	ctx.r11.u64 = ctx.r5.u64 | 281;
	// lis r8,560
	ctx.r8.s64 = 36700160;
	// stw r3,592(r1)
	PPC_STORE_U32(ctx.r1.u32 + 592, ctx.r3.u32);
	// lis r7,560
	ctx.r7.s64 = 36700160;
	// stw r4,588(r1)
	PPC_STORE_U32(ctx.r1.u32 + 588, ctx.r4.u32);
	// ori r8,r8,282
	ctx.r8.u64 = ctx.r8.u64 | 282;
	// stw r11,596(r1)
	PPC_STORE_U32(ctx.r1.u32 + 596, ctx.r11.u32);
	// ori r7,r7,283
	ctx.r7.u64 = ctx.r7.u64 | 283;
	// stw r31,660(r1)
	PPC_STORE_U32(ctx.r1.u32 + 660, ctx.r31.u32);
	// stw r8,604(r1)
	PPC_STORE_U32(ctx.r1.u32 + 604, ctx.r8.u32);
	// lis r5,560
	ctx.r5.s64 = 36700160;
	// li r8,67
	ctx.r8.s64 = 67;
	// stw r7,612(r1)
	PPC_STORE_U32(ctx.r1.u32 + 612, ctx.r7.u32);
	// lis r6,560
	ctx.r6.s64 = 36700160;
	// stw r31,676(r1)
	PPC_STORE_U32(ctx.r1.u32 + 676, ctx.r31.u32);
	// ori r5,r5,285
	ctx.r5.u64 = ctx.r5.u64 | 285;
	// stw r8,616(r1)
	PPC_STORE_U32(ctx.r1.u32 + 616, ctx.r8.u32);
	// ori r6,r6,284
	ctx.r6.u64 = ctx.r6.u64 | 284;
	// stw r31,684(r1)
	PPC_STORE_U32(ctx.r1.u32 + 684, ctx.r31.u32);
	// lis r3,560
	ctx.r3.s64 = 36700160;
	// stw r5,628(r1)
	PPC_STORE_U32(ctx.r1.u32 + 628, ctx.r5.u32);
	// li r7,68
	ctx.r7.s64 = 68;
	// stw r6,620(r1)
	PPC_STORE_U32(ctx.r1.u32 + 620, ctx.r6.u32);
	// lis r4,560
	ctx.r4.s64 = 36700160;
	// lis r11,560
	ctx.r11.s64 = 36700160;
	// stw r7,624(r1)
	PPC_STORE_U32(ctx.r1.u32 + 624, ctx.r7.u32);
	// li r8,69
	ctx.r8.s64 = 69;
	// ori r5,r3,287
	ctx.r5.u64 = ctx.r3.u64 | 287;
	// ori r7,r4,286
	ctx.r7.u64 = ctx.r4.u64 | 286;
	// stw r8,632(r1)
	PPC_STORE_U32(ctx.r1.u32 + 632, ctx.r8.u32);
	// ori r3,r11,288
	ctx.r3.u64 = ctx.r11.u64 | 288;
	// stw r5,644(r1)
	PPC_STORE_U32(ctx.r1.u32 + 644, ctx.r5.u32);
	// li r6,70
	ctx.r6.s64 = 70;
	// stw r7,636(r1)
	PPC_STORE_U32(ctx.r1.u32 + 636, ctx.r7.u32);
	// li r4,71
	ctx.r4.s64 = 71;
	// stw r3,652(r1)
	PPC_STORE_U32(ctx.r1.u32 + 652, ctx.r3.u32);
	// li r11,72
	ctx.r11.s64 = 72;
	// stw r6,640(r1)
	PPC_STORE_U32(ctx.r1.u32 + 640, ctx.r6.u32);
	// li r8,73
	ctx.r8.s64 = 73;
	// stw r4,648(r1)
	PPC_STORE_U32(ctx.r1.u32 + 648, ctx.r4.u32);
	// lis r30,560
	ctx.r30.s64 = 36700160;
	// stw r11,656(r1)
	PPC_STORE_U32(ctx.r1.u32 + 656, ctx.r11.u32);
	// lis r28,560
	ctx.r28.s64 = 36700160;
	// stw r8,664(r1)
	PPC_STORE_U32(ctx.r1.u32 + 664, ctx.r8.u32);
	// lis r25,560
	ctx.r25.s64 = 36700160;
	// ori r7,r30,540
	ctx.r7.u64 = ctx.r30.u64 | 540;
	// li r6,74
	ctx.r6.s64 = 74;
	// li r5,75
	ctx.r5.s64 = 75;
	// stw r7,668(r1)
	PPC_STORE_U32(ctx.r1.u32 + 668, ctx.r7.u32);
	// li r4,76
	ctx.r4.s64 = 76;
	// stw r6,672(r1)
	PPC_STORE_U32(ctx.r1.u32 + 672, ctx.r6.u32);
	// ori r3,r28,345
	ctx.r3.u64 = ctx.r28.u64 | 345;
	// stw r5,680(r1)
	PPC_STORE_U32(ctx.r1.u32 + 680, ctx.r5.u32);
	// li r11,77
	ctx.r11.s64 = 77;
	// stw r4,688(r1)
	PPC_STORE_U32(ctx.r1.u32 + 688, ctx.r4.u32);
	// ori r8,r25,234
	ctx.r8.u64 = ctx.r25.u64 | 234;
	// stw r3,692(r1)
	PPC_STORE_U32(ctx.r1.u32 + 692, ctx.r3.u32);
	// lis r24,560
	ctx.r24.s64 = 36700160;
	// stw r11,696(r1)
	PPC_STORE_U32(ctx.r1.u32 + 696, ctx.r11.u32);
	// lis r23,560
	ctx.r23.s64 = 36700160;
	// stw r8,700(r1)
	PPC_STORE_U32(ctx.r1.u32 + 700, ctx.r8.u32);
	// lis r22,560
	ctx.r22.s64 = 36700160;
	// li r7,78
	ctx.r7.s64 = 78;
	// ori r6,r24,235
	ctx.r6.u64 = ctx.r24.u64 | 235;
	// li r5,79
	ctx.r5.s64 = 79;
	// stw r7,704(r1)
	PPC_STORE_U32(ctx.r1.u32 + 704, ctx.r7.u32);
	// li r21,65
	ctx.r21.s64 = 65;
	// stw r6,708(r1)
	PPC_STORE_U32(ctx.r1.u32 + 708, ctx.r6.u32);
	// li r20,66
	ctx.r20.s64 = 66;
	// stw r5,712(r1)
	PPC_STORE_U32(ctx.r1.u32 + 712, ctx.r5.u32);
	// ori r4,r23,236
	ctx.r4.u64 = ctx.r23.u64 | 236;
	// stw r21,600(r1)
	PPC_STORE_U32(ctx.r1.u32 + 600, ctx.r21.u32);
	// li r3,80
	ctx.r3.s64 = 80;
	// stw r20,608(r1)
	PPC_STORE_U32(ctx.r1.u32 + 608, ctx.r20.u32);
	// ori r11,r22,237
	ctx.r11.u64 = ctx.r22.u64 | 237;
	// stw r4,716(r1)
	PPC_STORE_U32(ctx.r1.u32 + 716, ctx.r4.u32);
	// lis r8,560
	ctx.r8.s64 = 36700160;
	// stw r3,720(r1)
	PPC_STORE_U32(ctx.r1.u32 + 720, ctx.r3.u32);
	// li r7,81
	ctx.r7.s64 = 81;
	// stw r11,724(r1)
	PPC_STORE_U32(ctx.r1.u32 + 724, ctx.r11.u32);
	// ori r6,r8,475
	ctx.r6.u64 = ctx.r8.u64 | 475;
	// li r5,82
	ctx.r5.s64 = 82;
	// lis r4,560
	ctx.r4.s64 = 36700160;
	// stw r7,728(r1)
	PPC_STORE_U32(ctx.r1.u32 + 728, ctx.r7.u32);
	// lis r3,560
	ctx.r3.s64 = 36700160;
	// stw r6,732(r1)
	PPC_STORE_U32(ctx.r1.u32 + 732, ctx.r6.u32);
	// ori r11,r4,473
	ctx.r11.u64 = ctx.r4.u64 | 473;
	// stw r5,736(r1)
	PPC_STORE_U32(ctx.r1.u32 + 736, ctx.r5.u32);
	// li r8,83
	ctx.r8.s64 = 83;
	// ori r7,r3,474
	ctx.r7.u64 = ctx.r3.u64 | 474;
	// stw r11,740(r1)
	PPC_STORE_U32(ctx.r1.u32 + 740, ctx.r11.u32);
	// stw r8,744(r1)
	PPC_STORE_U32(ctx.r1.u32 + 744, ctx.r8.u32);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// stw r7,748(r1)
	PPC_STORE_U32(ctx.r1.u32 + 748, ctx.r7.u32);
loc_82D8ED5C:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r9,r8
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, xer);
	// beq cr6,0x82d8ed80
	if (cr6.eq) goto loc_82D8ED80;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmplwi cr6,r10,84
	cr6.compare<uint32_t>(ctx.r10.u32, 84, xer);
	// blt cr6,0x82d8ed5c
	if (cr6.lt) goto loc_82D8ED5C;
	// addi r1,r1,864
	ctx.r1.s64 = ctx.r1.s64 + 864;
	// b 0x831cdb14
	__restgprlr_19(ctx, base);
	return;
loc_82D8ED80:
	// rlwinm r11,r10,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r10,r1,84
	ctx.r10.s64 = ctx.r1.s64 + 84;
	// lwzx r4,r11,r10
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmpwi cr6,r4,-1
	cr6.compare<int32_t>(ctx.r4.s32, -1, xer);
	// bne cr6,0x82d8ee30
	if (!cr6.eq) goto loc_82D8EE30;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lwzx r28,r11,r10
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmpwi cr6,r28,72
	cr6.compare<int32_t>(ctx.r28.s32, 72, xer);
	// bne cr6,0x82d8edb8
	if (!cr6.eq) goto loc_82D8EDB8;
	// lis r4,560
	ctx.r4.s64 = 36700160;
	// li r5,185
	ctx.r5.s64 = 185;
	// ori r4,r4,480
	ctx.r4.u64 = ctx.r4.u64 | 480;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d042a8
	ctx.lr = 0x82D8EDB8;
	sub_82D042A8(ctx, base);
loc_82D8EDB8:
	// cmpwi cr6,r28,74
	cr6.compare<int32_t>(ctx.r28.s32, 74, xer);
	// bne cr6,0x82d8edfc
	if (!cr6.eq) goto loc_82D8EDFC;
	// lis r11,3
	ctx.r11.s64 = 196608;
	// clrlwi r30,r27,14
	ctx.r30.u64 = ctx.r27.u32 & 0x3FFFF;
	// ori r10,r11,65535
	ctx.r10.u64 = ctx.r11.u64 | 65535;
	// cmplw cr6,r27,r10
	cr6.compare<uint32_t>(ctx.r27.u32, ctx.r10.u32, xer);
	// ble cr6,0x82d8edd8
	if (!cr6.gt) goto loc_82D8EDD8;
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
loc_82D8EDD8:
	// bl 0x831156e8
	ctx.lr = 0x82D8EDDC;
	sub_831156E8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,48(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// bl 0x8311c148
	ctx.lr = 0x82D8EDE8;
	sub_8311C148(ctx, base);
	// lis r4,560
	ctx.r4.s64 = 36700160;
	// addi r5,r3,4
	ctx.r5.s64 = ctx.r3.s64 + 4;
	// ori r4,r4,597
	ctx.r4.u64 = ctx.r4.u64 | 597;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d042a8
	ctx.lr = 0x82D8EDFC;
	sub_82D042A8(ctx, base);
loc_82D8EDFC:
	// cmpwi cr6,r28,75
	cr6.compare<int32_t>(ctx.r28.s32, 75, xer);
	// bne cr6,0x82d8ee40
	if (!cr6.eq) goto loc_82D8EE40;
	// bl 0x831156e8
	ctx.lr = 0x82D8EE08;
	sub_831156E8(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lwz r3,48(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// bl 0x8311c628
	ctx.lr = 0x82D8EE14;
	sub_8311C628(ctx, base);
	// lis r4,560
	ctx.r4.s64 = 36700160;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// ori r4,r4,596
	ctx.r4.u64 = ctx.r4.u64 | 596;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d042a8
	ctx.lr = 0x82D8EE28;
	sub_82D042A8(ctx, base);
	// addi r1,r1,864
	ctx.r1.s64 = ctx.r1.s64 + 864;
	// b 0x831cdb14
	__restgprlr_19(ctx, base);
	return;
loc_82D8EE30:
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82d8ee40
	if (cr6.eq) goto loc_82D8EE40;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d04220
	ctx.lr = 0x82D8EE40;
	sub_82D04220(ctx, base);
loc_82D8EE40:
	// addi r1,r1,864
	ctx.r1.s64 = ctx.r1.s64 + 864;
	// b 0x831cdb14
	__restgprlr_19(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D8EE48"))) PPC_WEAK_FUNC(sub_82D8EE48);
PPC_FUNC_IMPL(__imp__sub_82D8EE48) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdab0
	ctx.lr = 0x82D8EE50;
	__savegprlr_14(ctx, base);
	// stwu r1,-1632(r1)
	ea = -1632 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stb r7,1687(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1687, ctx.r7.u8);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r10,20(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r3,1652(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1652, ctx.r3.u32);
	// stw r4,1660(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1660, ctx.r4.u32);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// stw r5,1668(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1668, ctx.r5.u32);
	// stw r6,1676(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1676, ctx.r6.u32);
	// stw r7,16(r4)
	PPC_STORE_U32(ctx.r4.u32 + 16, ctx.r7.u32);
	// blt cr6,0x82d8ee84
	if (cr6.lt) goto loc_82D8EE84;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82D8EE84:
	// lis r10,108
	ctx.r10.s64 = 7077888;
	// stb r7,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r7.u8);
	// lis r9,560
	ctx.r9.s64 = 36700160;
	// stw r7,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r7.u32);
	// ori r8,r10,177
	ctx.r8.u64 = ctx.r10.u64 | 177;
	// ori r10,r9,516
	ctx.r10.u64 = ctx.r9.u64 | 516;
	// lis r6,560
	ctx.r6.s64 = 36700160;
	// stw r8,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r8.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r10,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r10.u32);
	// lis r5,560
	ctx.r5.s64 = 36700160;
	// ori r6,r6,517
	ctx.r6.u64 = ctx.r6.u64 | 517;
	// stw r9,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r9.u32);
	// lis r4,560
	ctx.r4.s64 = 36700160;
	// lis r3,560
	ctx.r3.s64 = 36700160;
	// stw r6,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r6.u32);
	// ori r9,r5,518
	ctx.r9.u64 = ctx.r5.u64 | 518;
	// ori r5,r4,519
	ctx.r5.u64 = ctx.r4.u64 | 519;
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r9,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r9.u32);
	// ori r3,r3,520
	ctx.r3.u64 = ctx.r3.u64 | 520;
	// stw r5,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r5.u32);
	// lis r11,560
	ctx.r11.s64 = 36700160;
	// stw r10,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r10.u32);
	// li r6,3
	ctx.r6.s64 = 3;
	// stw r3,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r3.u32);
	// li r4,4
	ctx.r4.s64 = 4;
	// lis r31,560
	ctx.r31.s64 = 36700160;
	// stw r6,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r6.u32);
	// lis r30,560
	ctx.r30.s64 = 36700160;
	// stw r4,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r4.u32);
	// ori r9,r11,521
	ctx.r9.u64 = ctx.r11.u64 | 521;
	// li r10,5
	ctx.r10.s64 = 5;
	// li r6,6
	ctx.r6.s64 = 6;
	// stw r9,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r9.u32);
	// ori r5,r31,522
	ctx.r5.u64 = ctx.r31.u64 | 522;
	// stw r10,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r10.u32);
	// li r4,7
	ctx.r4.s64 = 7;
	// stw r6,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r6.u32);
	// ori r3,r30,523
	ctx.r3.u64 = ctx.r30.u64 | 523;
	// stw r5,220(r1)
	PPC_STORE_U32(ctx.r1.u32 + 220, ctx.r5.u32);
	// li r11,8
	ctx.r11.s64 = 8;
	// stw r4,216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 216, ctx.r4.u32);
	// lis r29,560
	ctx.r29.s64 = 36700160;
	// stw r3,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r3.u32);
	// lis r28,29
	ctx.r28.s64 = 1900544;
	// stw r11,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r11.u32);
	// lis r27,29
	ctx.r27.s64 = 1900544;
	// lis r26,29
	ctx.r26.s64 = 1900544;
	// ori r10,r29,524
	ctx.r10.u64 = ctx.r29.u64 | 524;
	// li r9,9
	ctx.r9.s64 = 9;
	// ori r6,r28,584
	ctx.r6.u64 = ctx.r28.u64 | 584;
	// stw r10,236(r1)
	PPC_STORE_U32(ctx.r1.u32 + 236, ctx.r10.u32);
	// li r5,10
	ctx.r5.s64 = 10;
	// stw r9,232(r1)
	PPC_STORE_U32(ctx.r1.u32 + 232, ctx.r9.u32);
	// ori r4,r27,589
	ctx.r4.u64 = ctx.r27.u64 | 589;
	// stw r6,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r6.u32);
	// li r3,11
	ctx.r3.s64 = 11;
	// stw r5,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r5.u32);
	// ori r11,r26,590
	ctx.r11.u64 = ctx.r26.u64 | 590;
	// stw r4,252(r1)
	PPC_STORE_U32(ctx.r1.u32 + 252, ctx.r4.u32);
	// lis r25,102
	ctx.r25.s64 = 6684672;
	// stw r3,248(r1)
	PPC_STORE_U32(ctx.r1.u32 + 248, ctx.r3.u32);
	// lis r24,102
	ctx.r24.s64 = 6684672;
	// stw r11,260(r1)
	PPC_STORE_U32(ctx.r1.u32 + 260, ctx.r11.u32);
	// lis r23,560
	ctx.r23.s64 = 36700160;
	// li r10,12
	ctx.r10.s64 = 12;
	// ori r9,r25,143
	ctx.r9.u64 = ctx.r25.u64 | 143;
	// li r6,13
	ctx.r6.s64 = 13;
	// stw r10,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, ctx.r10.u32);
	// ori r5,r24,127
	ctx.r5.u64 = ctx.r24.u64 | 127;
	// stw r9,268(r1)
	PPC_STORE_U32(ctx.r1.u32 + 268, ctx.r9.u32);
	// li r4,14
	ctx.r4.s64 = 14;
	// stw r6,264(r1)
	PPC_STORE_U32(ctx.r1.u32 + 264, ctx.r6.u32);
	// ori r3,r23,481
	ctx.r3.u64 = ctx.r23.u64 | 481;
	// stw r5,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r5.u32);
	// li r11,15
	ctx.r11.s64 = 15;
	// stw r4,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r4.u32);
	// stw r3,284(r1)
	PPC_STORE_U32(ctx.r1.u32 + 284, ctx.r3.u32);
	// lis r10,102
	ctx.r10.s64 = 6684672;
	// stw r11,280(r1)
	PPC_STORE_U32(ctx.r1.u32 + 280, ctx.r11.u32);
	// lis r9,101
	ctx.r9.s64 = 6619136;
	// ori r10,r10,129
	ctx.r10.u64 = ctx.r10.u64 | 129;
	// ori r9,r9,31
	ctx.r9.u64 = ctx.r9.u64 | 31;
	// lis r6,101
	ctx.r6.s64 = 6619136;
	// stw r10,292(r1)
	PPC_STORE_U32(ctx.r1.u32 + 292, ctx.r10.u32);
	// lis r5,101
	ctx.r5.s64 = 6619136;
	// stw r9,300(r1)
	PPC_STORE_U32(ctx.r1.u32 + 300, ctx.r9.u32);
	// li r9,78
	ctx.r9.s64 = 78;
	// ori r6,r6,17
	ctx.r6.u64 = ctx.r6.u64 | 17;
	// ori r5,r5,3
	ctx.r5.u64 = ctx.r5.u64 | 3;
	// stw r9,304(r1)
	PPC_STORE_U32(ctx.r1.u32 + 304, ctx.r9.u32);
	// lis r4,101
	ctx.r4.s64 = 6619136;
	// stw r6,308(r1)
	PPC_STORE_U32(ctx.r1.u32 + 308, ctx.r6.u32);
	// li r10,77
	ctx.r10.s64 = 77;
	// stw r5,316(r1)
	PPC_STORE_U32(ctx.r1.u32 + 316, ctx.r5.u32);
	// lis r3,101
	ctx.r3.s64 = 6619136;
	// ori r9,r4,1
	ctx.r9.u64 = ctx.r4.u64 | 1;
	// stw r10,296(r1)
	PPC_STORE_U32(ctx.r1.u32 + 296, ctx.r10.u32);
	// ori r5,r3,33
	ctx.r5.u64 = ctx.r3.u64 | 33;
	// lis r11,101
	ctx.r11.s64 = 6619136;
	// stw r9,324(r1)
	PPC_STORE_U32(ctx.r1.u32 + 324, ctx.r9.u32);
	// li r10,79
	ctx.r10.s64 = 79;
	// stw r5,332(r1)
	PPC_STORE_U32(ctx.r1.u32 + 332, ctx.r5.u32);
	// li r6,80
	ctx.r6.s64 = 80;
	// li r4,17
	ctx.r4.s64 = 17;
	// stw r10,312(r1)
	PPC_STORE_U32(ctx.r1.u32 + 312, ctx.r10.u32);
	// lis r31,101
	ctx.r31.s64 = 6619136;
	// stw r6,320(r1)
	PPC_STORE_U32(ctx.r1.u32 + 320, ctx.r6.u32);
	// lis r30,101
	ctx.r30.s64 = 6619136;
	// stw r4,328(r1)
	PPC_STORE_U32(ctx.r1.u32 + 328, ctx.r4.u32);
	// lis r29,101
	ctx.r29.s64 = 6619136;
	// ori r3,r11,50
	ctx.r3.u64 = ctx.r11.u64 | 50;
	// li r9,19
	ctx.r9.s64 = 19;
	// li r11,18
	ctx.r11.s64 = 18;
	// stw r3,340(r1)
	PPC_STORE_U32(ctx.r1.u32 + 340, ctx.r3.u32);
	// ori r10,r31,37
	ctx.r10.u64 = ctx.r31.u64 | 37;
	// stw r9,344(r1)
	PPC_STORE_U32(ctx.r1.u32 + 344, ctx.r9.u32);
	// ori r6,r30,39
	ctx.r6.u64 = ctx.r30.u64 | 39;
	// stw r11,336(r1)
	PPC_STORE_U32(ctx.r1.u32 + 336, ctx.r11.u32);
	// li r5,20
	ctx.r5.s64 = 20;
	// stw r10,348(r1)
	PPC_STORE_U32(ctx.r1.u32 + 348, ctx.r10.u32);
	// ori r4,r29,29
	ctx.r4.u64 = ctx.r29.u64 | 29;
	// stw r6,356(r1)
	PPC_STORE_U32(ctx.r1.u32 + 356, ctx.r6.u32);
	// lis r27,101
	ctx.r27.s64 = 6619136;
	// stw r5,352(r1)
	PPC_STORE_U32(ctx.r1.u32 + 352, ctx.r5.u32);
	// lis r28,101
	ctx.r28.s64 = 6619136;
	// stw r4,364(r1)
	PPC_STORE_U32(ctx.r1.u32 + 364, ctx.r4.u32);
	// lis r26,101
	ctx.r26.s64 = 6619136;
	// ori r9,r27,27
	ctx.r9.u64 = ctx.r27.u64 | 27;
	// li r3,21
	ctx.r3.s64 = 21;
	// ori r11,r28,25
	ctx.r11.u64 = ctx.r28.u64 | 25;
	// stw r9,380(r1)
	PPC_STORE_U32(ctx.r1.u32 + 380, ctx.r9.u32);
	// li r10,24
	ctx.r10.s64 = 24;
	// stw r3,360(r1)
	PPC_STORE_U32(ctx.r1.u32 + 360, ctx.r3.u32);
	// li r6,25
	ctx.r6.s64 = 25;
	// stw r11,372(r1)
	PPC_STORE_U32(ctx.r1.u32 + 372, ctx.r11.u32);
	// ori r5,r26,21
	ctx.r5.u64 = ctx.r26.u64 | 21;
	// stw r10,368(r1)
	PPC_STORE_U32(ctx.r1.u32 + 368, ctx.r10.u32);
	// li r4,23
	ctx.r4.s64 = 23;
	// stw r6,376(r1)
	PPC_STORE_U32(ctx.r1.u32 + 376, ctx.r6.u32);
	// lis r25,101
	ctx.r25.s64 = 6619136;
	// stw r5,388(r1)
	PPC_STORE_U32(ctx.r1.u32 + 388, ctx.r5.u32);
	// lis r24,101
	ctx.r24.s64 = 6619136;
	// stw r4,384(r1)
	PPC_STORE_U32(ctx.r1.u32 + 384, ctx.r4.u32);
	// lis r23,101
	ctx.r23.s64 = 6619136;
	// li r9,27
	ctx.r9.s64 = 27;
	// li r22,16
	ctx.r22.s64 = 16;
	// ori r3,r25,19
	ctx.r3.u64 = ctx.r25.u64 | 19;
	// stw r9,400(r1)
	PPC_STORE_U32(ctx.r1.u32 + 400, ctx.r9.u32);
	// li r11,22
	ctx.r11.s64 = 22;
	// stw r22,288(r1)
	PPC_STORE_U32(ctx.r1.u32 + 288, ctx.r22.u32);
	// ori r10,r24,13
	ctx.r10.u64 = ctx.r24.u64 | 13;
	// stw r3,396(r1)
	PPC_STORE_U32(ctx.r1.u32 + 396, ctx.r3.u32);
	// ori r6,r23,15
	ctx.r6.u64 = ctx.r23.u64 | 15;
	// stw r11,392(r1)
	PPC_STORE_U32(ctx.r1.u32 + 392, ctx.r11.u32);
	// li r5,28
	ctx.r5.s64 = 28;
	// stw r10,404(r1)
	PPC_STORE_U32(ctx.r1.u32 + 404, ctx.r10.u32);
	// lis r4,560
	ctx.r4.s64 = 36700160;
	// stw r6,412(r1)
	PPC_STORE_U32(ctx.r1.u32 + 412, ctx.r6.u32);
	// stw r5,408(r1)
	PPC_STORE_U32(ctx.r1.u32 + 408, ctx.r5.u32);
	// ori r9,r4,250
	ctx.r9.u64 = ctx.r4.u64 | 250;
	// lis r11,560
	ctx.r11.s64 = 36700160;
	// stw r9,428(r1)
	PPC_STORE_U32(ctx.r1.u32 + 428, ctx.r9.u32);
	// lis r3,101
	ctx.r3.s64 = 6619136;
	// ori r11,r11,482
	ctx.r11.u64 = ctx.r11.u64 | 482;
	// ori r3,r3,7
	ctx.r3.u64 = ctx.r3.u64 | 7;
	// lis r10,560
	ctx.r10.s64 = 36700160;
	// stw r11,436(r1)
	PPC_STORE_U32(ctx.r1.u32 + 436, ctx.r11.u32);
	// lis r6,560
	ctx.r6.s64 = 36700160;
	// stw r3,420(r1)
	PPC_STORE_U32(ctx.r1.u32 + 420, ctx.r3.u32);
	// li r11,31
	ctx.r11.s64 = 31;
	// ori r10,r10,483
	ctx.r10.u64 = ctx.r10.u64 | 483;
	// ori r6,r6,484
	ctx.r6.u64 = ctx.r6.u64 | 484;
	// stw r11,440(r1)
	PPC_STORE_U32(ctx.r1.u32 + 440, ctx.r11.u32);
	// lis r5,36
	ctx.r5.s64 = 2359296;
	// stw r10,444(r1)
	PPC_STORE_U32(ctx.r1.u32 + 444, ctx.r10.u32);
	// li r3,30
	ctx.r3.s64 = 30;
	// stw r6,452(r1)
	PPC_STORE_U32(ctx.r1.u32 + 452, ctx.r6.u32);
	// lis r4,36
	ctx.r4.s64 = 2359296;
	// ori r11,r5,113
	ctx.r11.u64 = ctx.r5.u64 | 113;
	// stw r3,432(r1)
	PPC_STORE_U32(ctx.r1.u32 + 432, ctx.r3.u32);
	// ori r6,r4,114
	ctx.r6.u64 = ctx.r4.u64 | 114;
	// li r3,32
	ctx.r3.s64 = 32;
	// stw r11,460(r1)
	PPC_STORE_U32(ctx.r1.u32 + 460, ctx.r11.u32);
	// li r10,33
	ctx.r10.s64 = 33;
	// stw r6,468(r1)
	PPC_STORE_U32(ctx.r1.u32 + 468, ctx.r6.u32);
	// li r5,34
	ctx.r5.s64 = 34;
	// stw r3,448(r1)
	PPC_STORE_U32(ctx.r1.u32 + 448, ctx.r3.u32);
	// lis r31,36
	ctx.r31.s64 = 2359296;
	// stw r10,456(r1)
	PPC_STORE_U32(ctx.r1.u32 + 456, ctx.r10.u32);
	// lis r30,35
	ctx.r30.s64 = 2293760;
	// stw r5,464(r1)
	PPC_STORE_U32(ctx.r1.u32 + 464, ctx.r5.u32);
	// lis r29,36
	ctx.r29.s64 = 2359296;
	// ori r4,r31,115
	ctx.r4.u64 = ctx.r31.u64 | 115;
	// li r3,35
	ctx.r3.s64 = 35;
	// ori r11,r30,179
	ctx.r11.u64 = ctx.r30.u64 | 179;
	// stw r4,476(r1)
	PPC_STORE_U32(ctx.r1.u32 + 476, ctx.r4.u32);
	// li r10,36
	ctx.r10.s64 = 36;
	// stw r3,472(r1)
	PPC_STORE_U32(ctx.r1.u32 + 472, ctx.r3.u32);
	// ori r6,r29,116
	ctx.r6.u64 = ctx.r29.u64 | 116;
	// stw r11,484(r1)
	PPC_STORE_U32(ctx.r1.u32 + 484, ctx.r11.u32);
	// li r5,37
	ctx.r5.s64 = 37;
	// stw r10,480(r1)
	PPC_STORE_U32(ctx.r1.u32 + 480, ctx.r10.u32);
	// lis r28,36
	ctx.r28.s64 = 2359296;
	// stw r6,492(r1)
	PPC_STORE_U32(ctx.r1.u32 + 492, ctx.r6.u32);
	// lis r27,36
	ctx.r27.s64 = 2359296;
	// stw r5,488(r1)
	PPC_STORE_U32(ctx.r1.u32 + 488, ctx.r5.u32);
	// lis r26,36
	ctx.r26.s64 = 2359296;
	// ori r4,r28,117
	ctx.r4.u64 = ctx.r28.u64 | 117;
	// li r3,38
	ctx.r3.s64 = 38;
	// ori r11,r27,147
	ctx.r11.u64 = ctx.r27.u64 | 147;
	// stw r4,500(r1)
	PPC_STORE_U32(ctx.r1.u32 + 500, ctx.r4.u32);
	// li r10,39
	ctx.r10.s64 = 39;
	// stw r3,496(r1)
	PPC_STORE_U32(ctx.r1.u32 + 496, ctx.r3.u32);
	// ori r6,r26,146
	ctx.r6.u64 = ctx.r26.u64 | 146;
	// stw r11,508(r1)
	PPC_STORE_U32(ctx.r1.u32 + 508, ctx.r11.u32);
	// li r5,40
	ctx.r5.s64 = 40;
	// stw r10,504(r1)
	PPC_STORE_U32(ctx.r1.u32 + 504, ctx.r10.u32);
	// lis r25,36
	ctx.r25.s64 = 2359296;
	// stw r6,516(r1)
	PPC_STORE_U32(ctx.r1.u32 + 516, ctx.r6.u32);
	// lis r24,36
	ctx.r24.s64 = 2359296;
	// stw r5,512(r1)
	PPC_STORE_U32(ctx.r1.u32 + 512, ctx.r5.u32);
	// lis r23,36
	ctx.r23.s64 = 2359296;
	// li r22,26
	ctx.r22.s64 = 26;
	// li r21,29
	ctx.r21.s64 = 29;
	// ori r4,r25,38
	ctx.r4.u64 = ctx.r25.u64 | 38;
	// stw r22,416(r1)
	PPC_STORE_U32(ctx.r1.u32 + 416, ctx.r22.u32);
	// li r3,41
	ctx.r3.s64 = 41;
	// stw r21,424(r1)
	PPC_STORE_U32(ctx.r1.u32 + 424, ctx.r21.u32);
	// ori r11,r24,120
	ctx.r11.u64 = ctx.r24.u64 | 120;
	// stw r4,524(r1)
	PPC_STORE_U32(ctx.r1.u32 + 524, ctx.r4.u32);
	// li r10,42
	ctx.r10.s64 = 42;
	// stw r3,520(r1)
	PPC_STORE_U32(ctx.r1.u32 + 520, ctx.r3.u32);
	// ori r6,r23,108
	ctx.r6.u64 = ctx.r23.u64 | 108;
	// stw r11,532(r1)
	PPC_STORE_U32(ctx.r1.u32 + 532, ctx.r11.u32);
	// li r5,43
	ctx.r5.s64 = 43;
	// stw r10,528(r1)
	PPC_STORE_U32(ctx.r1.u32 + 528, ctx.r10.u32);
	// stw r6,540(r1)
	PPC_STORE_U32(ctx.r1.u32 + 540, ctx.r6.u32);
	// li r15,56
	ctx.r15.s64 = 56;
	// stw r5,536(r1)
	PPC_STORE_U32(ctx.r1.u32 + 536, ctx.r5.u32);
	// li r16,57
	ctx.r16.s64 = 57;
	// li r17,58
	ctx.r17.s64 = 58;
	// lis r4,36
	ctx.r4.s64 = 2359296;
	// stw r15,640(r1)
	PPC_STORE_U32(ctx.r1.u32 + 640, ctx.r15.u32);
	// lis r3,36
	ctx.r3.s64 = 2359296;
	// stw r16,648(r1)
	PPC_STORE_U32(ctx.r1.u32 + 648, ctx.r16.u32);
	// ori r4,r4,44
	ctx.r4.u64 = ctx.r4.u64 | 44;
	// stw r17,656(r1)
	PPC_STORE_U32(ctx.r1.u32 + 656, ctx.r17.u32);
	// ori r3,r3,94
	ctx.r3.u64 = ctx.r3.u64 | 94;
	// lis r11,36
	ctx.r11.s64 = 2359296;
	// stw r4,548(r1)
	PPC_STORE_U32(ctx.r1.u32 + 548, ctx.r4.u32);
	// lis r10,36
	ctx.r10.s64 = 2359296;
	// stw r3,556(r1)
	PPC_STORE_U32(ctx.r1.u32 + 556, ctx.r3.u32);
	// ori r11,r11,149
	ctx.r11.u64 = ctx.r11.u64 | 149;
	// ori r10,r10,150
	ctx.r10.u64 = ctx.r10.u64 | 150;
	// li r4,45
	ctx.r4.s64 = 45;
	// stw r11,564(r1)
	PPC_STORE_U32(ctx.r1.u32 + 564, ctx.r11.u32);
	// li r3,46
	ctx.r3.s64 = 46;
	// stw r10,572(r1)
	PPC_STORE_U32(ctx.r1.u32 + 572, ctx.r10.u32);
	// lis r6,36
	ctx.r6.s64 = 2359296;
	// stw r4,552(r1)
	PPC_STORE_U32(ctx.r1.u32 + 552, ctx.r4.u32);
	// lis r5,36
	ctx.r5.s64 = 2359296;
	// stw r3,560(r1)
	PPC_STORE_U32(ctx.r1.u32 + 560, ctx.r3.u32);
	// li r11,48
	ctx.r11.s64 = 48;
	// ori r3,r6,107
	ctx.r3.u64 = ctx.r6.u64 | 107;
	// ori r10,r5,106
	ctx.r10.u64 = ctx.r5.u64 | 106;
	// stw r11,576(r1)
	PPC_STORE_U32(ctx.r1.u32 + 576, ctx.r11.u32);
	// li r4,47
	ctx.r4.s64 = 47;
	// stw r3,580(r1)
	PPC_STORE_U32(ctx.r1.u32 + 580, ctx.r3.u32);
	// lis r31,36
	ctx.r31.s64 = 2359296;
	// stw r10,588(r1)
	PPC_STORE_U32(ctx.r1.u32 + 588, ctx.r10.u32);
	// lis r30,36
	ctx.r30.s64 = 2359296;
	// stw r4,568(r1)
	PPC_STORE_U32(ctx.r1.u32 + 568, ctx.r4.u32);
	// lis r29,28
	ctx.r29.s64 = 1835008;
	// li r11,51
	ctx.r11.s64 = 51;
	// li r6,49
	ctx.r6.s64 = 49;
	// ori r5,r31,40
	ctx.r5.u64 = ctx.r31.u64 | 40;
	// stw r11,600(r1)
	PPC_STORE_U32(ctx.r1.u32 + 600, ctx.r11.u32);
	// li r4,50
	ctx.r4.s64 = 50;
	// stw r6,584(r1)
	PPC_STORE_U32(ctx.r1.u32 + 584, ctx.r6.u32);
	// ori r3,r30,6
	ctx.r3.u64 = ctx.r30.u64 | 6;
	// stw r5,596(r1)
	PPC_STORE_U32(ctx.r1.u32 + 596, ctx.r5.u32);
	// ori r10,r29,149
	ctx.r10.u64 = ctx.r29.u64 | 149;
	// stw r4,592(r1)
	PPC_STORE_U32(ctx.r1.u32 + 592, ctx.r4.u32);
	// lis r28,28
	ctx.r28.s64 = 1835008;
	// stw r3,604(r1)
	PPC_STORE_U32(ctx.r1.u32 + 604, ctx.r3.u32);
	// lis r27,28
	ctx.r27.s64 = 1835008;
	// stw r10,612(r1)
	PPC_STORE_U32(ctx.r1.u32 + 612, ctx.r10.u32);
	// lis r26,28
	ctx.r26.s64 = 1835008;
	// li r11,54
	ctx.r11.s64 = 54;
	// li r6,52
	ctx.r6.s64 = 52;
	// ori r5,r28,150
	ctx.r5.u64 = ctx.r28.u64 | 150;
	// stw r11,624(r1)
	PPC_STORE_U32(ctx.r1.u32 + 624, ctx.r11.u32);
	// li r4,53
	ctx.r4.s64 = 53;
	// stw r6,608(r1)
	PPC_STORE_U32(ctx.r1.u32 + 608, ctx.r6.u32);
	// ori r3,r27,151
	ctx.r3.u64 = ctx.r27.u64 | 151;
	// stw r5,620(r1)
	PPC_STORE_U32(ctx.r1.u32 + 620, ctx.r5.u32);
	// ori r10,r26,152
	ctx.r10.u64 = ctx.r26.u64 | 152;
	// stw r4,616(r1)
	PPC_STORE_U32(ctx.r1.u32 + 616, ctx.r4.u32);
	// lis r22,560
	ctx.r22.s64 = 36700160;
	// stw r3,628(r1)
	PPC_STORE_U32(ctx.r1.u32 + 628, ctx.r3.u32);
	// lis r25,35
	ctx.r25.s64 = 2293760;
	// stw r10,636(r1)
	PPC_STORE_U32(ctx.r1.u32 + 636, ctx.r10.u32);
	// lis r24,35
	ctx.r24.s64 = 2293760;
	// lis r23,560
	ctx.r23.s64 = 36700160;
	// ori r11,r22,527
	ctx.r11.u64 = ctx.r22.u64 | 527;
	// li r18,59
	ctx.r18.s64 = 59;
	// li r21,44
	ctx.r21.s64 = 44;
	// stw r11,668(r1)
	PPC_STORE_U32(ctx.r1.u32 + 668, ctx.r11.u32);
	// li r6,55
	ctx.r6.s64 = 55;
	// stw r18,664(r1)
	PPC_STORE_U32(ctx.r1.u32 + 664, ctx.r18.u32);
	// ori r5,r25,33
	ctx.r5.u64 = ctx.r25.u64 | 33;
	// stw r21,544(r1)
	PPC_STORE_U32(ctx.r1.u32 + 544, ctx.r21.u32);
	// ori r4,r24,36
	ctx.r4.u64 = ctx.r24.u64 | 36;
	// stw r6,632(r1)
	PPC_STORE_U32(ctx.r1.u32 + 632, ctx.r6.u32);
	// ori r3,r23,526
	ctx.r3.u64 = ctx.r23.u64 | 526;
	// stw r5,644(r1)
	PPC_STORE_U32(ctx.r1.u32 + 644, ctx.r5.u32);
	// lis r10,103
	ctx.r10.s64 = 6750208;
	// stw r4,652(r1)
	PPC_STORE_U32(ctx.r1.u32 + 652, ctx.r4.u32);
	// stw r3,660(r1)
	PPC_STORE_U32(ctx.r1.u32 + 660, ctx.r3.u32);
	// li r19,60
	ctx.r19.s64 = 60;
	// ori r11,r10,1
	ctx.r11.u64 = ctx.r10.u64 | 1;
	// li r20,61
	ctx.r20.s64 = 61;
	// lis r5,560
	ctx.r5.s64 = 36700160;
	// stw r11,788(r1)
	PPC_STORE_U32(ctx.r1.u32 + 788, ctx.r11.u32);
	// lis r10,560
	ctx.r10.s64 = 36700160;
	// stw r11,796(r1)
	PPC_STORE_U32(ctx.r1.u32 + 796, ctx.r11.u32);
	// stw r5,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r5.u32);
	// lis r4,560
	ctx.r4.s64 = 36700160;
	// lis r31,560
	ctx.r31.s64 = 36700160;
	// stw r10,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// lis r30,560
	ctx.r30.s64 = 36700160;
	// stw r4,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r4.u32);
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// lis r3,560
	ctx.r3.s64 = 36700160;
	// stw r30,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r30.u32);
	// lis r6,560
	ctx.r6.s64 = 36700160;
	// ori r3,r3,528
	ctx.r3.u64 = ctx.r3.u64 | 528;
	// stw r8,804(r1)
	PPC_STORE_U32(ctx.r1.u32 + 804, ctx.r8.u32);
	// lis r11,560
	ctx.r11.s64 = 36700160;
	// stw r19,672(r1)
	PPC_STORE_U32(ctx.r1.u32 + 672, ctx.r19.u32);
	// ori r10,r6,540
	ctx.r10.u64 = ctx.r6.u64 | 540;
	// stw r3,676(r1)
	PPC_STORE_U32(ctx.r1.u32 + 676, ctx.r3.u32);
	// li r6,75
	ctx.r6.s64 = 75;
	// stw r20,680(r1)
	PPC_STORE_U32(ctx.r1.u32 + 680, ctx.r20.u32);
	// ori r11,r11,531
	ctx.r11.u64 = ctx.r11.u64 | 531;
	// stw r7,800(r1)
	PPC_STORE_U32(ctx.r1.u32 + 800, ctx.r7.u32);
	// lis r8,560
	ctx.r8.s64 = 36700160;
	// stw r6,792(r1)
	PPC_STORE_U32(ctx.r1.u32 + 792, ctx.r6.u32);
	// lis r29,560
	ctx.r29.s64 = 36700160;
	// std r6,1456(r1)
	PPC_STORE_U64(ctx.r1.u32 + 1456, ctx.r6.u64);
	// ori r8,r8,533
	ctx.r8.u64 = ctx.r8.u64 | 533;
	// stw r11,700(r1)
	PPC_STORE_U32(ctx.r1.u32 + 700, ctx.r11.u32);
	// lis r28,560
	ctx.r28.s64 = 36700160;
	// stw r29,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r29.u32);
	// lis r27,560
	ctx.r27.s64 = 36700160;
	// stw r8,716(r1)
	PPC_STORE_U32(ctx.r1.u32 + 716, ctx.r8.u32);
	// lis r26,560
	ctx.r26.s64 = 36700160;
	// stw r28,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r28.u32);
	// lis r14,560
	ctx.r14.s64 = 36700160;
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r27.u32);
	// stw r26,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r26.u32);
	// li r21,62
	ctx.r21.s64 = 62;
	// li r22,63
	ctx.r22.s64 = 63;
	// stw r10,780(r1)
	PPC_STORE_U32(ctx.r1.u32 + 780, ctx.r10.u32);
	// li r23,64
	ctx.r23.s64 = 64;
	// stw r21,688(r1)
	PPC_STORE_U32(ctx.r1.u32 + 688, ctx.r21.u32);
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r24,65
	ctx.r24.s64 = 65;
	// lwz r6,112(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// li r25,66
	ctx.r25.s64 = 66;
	// ori r3,r3,532
	ctx.r3.u64 = ctx.r3.u64 | 532;
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// li r26,67
	ctx.r26.s64 = 67;
	// stw r22,696(r1)
	PPC_STORE_U32(ctx.r1.u32 + 696, ctx.r22.u32);
	// stw r3,708(r1)
	PPC_STORE_U32(ctx.r1.u32 + 708, ctx.r3.u32);
	// li r27,68
	ctx.r27.s64 = 68;
	// lwz r3,144(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// li r28,69
	ctx.r28.s64 = 69;
	// lwz r8,136(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// li r29,70
	ctx.r29.s64 = 70;
	// li r30,71
	ctx.r30.s64 = 71;
	// stw r23,704(r1)
	PPC_STORE_U32(ctx.r1.u32 + 704, ctx.r23.u32);
	// li r31,72
	ctx.r31.s64 = 72;
	// stw r24,712(r1)
	PPC_STORE_U32(ctx.r1.u32 + 712, ctx.r24.u32);
	// li r4,73
	ctx.r4.s64 = 73;
	// stw r25,720(r1)
	PPC_STORE_U32(ctx.r1.u32 + 720, ctx.r25.u32);
	// li r5,74
	ctx.r5.s64 = 74;
	// stw r26,728(r1)
	PPC_STORE_U32(ctx.r1.u32 + 728, ctx.r26.u32);
	// ori r14,r14,529
	ctx.r14.u64 = ctx.r14.u64 | 529;
	// stw r27,736(r1)
	PPC_STORE_U32(ctx.r1.u32 + 736, ctx.r27.u32);
	// ori r6,r6,530
	ctx.r6.u64 = ctx.r6.u64 | 530;
	// stw r28,744(r1)
	PPC_STORE_U32(ctx.r1.u32 + 744, ctx.r28.u32);
	// ori r11,r11,534
	ctx.r11.u64 = ctx.r11.u64 | 534;
	// stw r29,752(r1)
	PPC_STORE_U32(ctx.r1.u32 + 752, ctx.r29.u32);
	// stw r30,760(r1)
	PPC_STORE_U32(ctx.r1.u32 + 760, ctx.r30.u32);
	// ori r3,r3,535
	ctx.r3.u64 = ctx.r3.u64 | 535;
	// stw r31,768(r1)
	PPC_STORE_U32(ctx.r1.u32 + 768, ctx.r31.u32);
	// ori r8,r8,536
	ctx.r8.u64 = ctx.r8.u64 | 536;
	// stw r4,776(r1)
	PPC_STORE_U32(ctx.r1.u32 + 776, ctx.r4.u32);
	// stw r5,784(r1)
	PPC_STORE_U32(ctx.r1.u32 + 784, ctx.r5.u32);
	// stw r14,684(r1)
	PPC_STORE_U32(ctx.r1.u32 + 684, ctx.r14.u32);
	// stw r6,692(r1)
	PPC_STORE_U32(ctx.r1.u32 + 692, ctx.r6.u32);
	// stw r11,724(r1)
	PPC_STORE_U32(ctx.r1.u32 + 724, ctx.r11.u32);
	// lwz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// lis r14,560
	ctx.r14.s64 = 36700160;
	// stw r3,732(r1)
	PPC_STORE_U32(ctx.r1.u32 + 732, ctx.r3.u32);
	// lis r6,560
	ctx.r6.s64 = 36700160;
	// ori r11,r11,537
	ctx.r11.u64 = ctx.r11.u64 | 537;
	// lwz r3,128(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// stw r8,740(r1)
	PPC_STORE_U32(ctx.r1.u32 + 740, ctx.r8.u32);
	// stw r11,748(r1)
	PPC_STORE_U32(ctx.r1.u32 + 748, ctx.r11.u32);
	// ori r3,r3,538
	ctx.r3.u64 = ctx.r3.u64 | 538;
	// lwz r8,88(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// ori r8,r8,539
	ctx.r8.u64 = ctx.r8.u64 | 539;
	// stw r3,756(r1)
	PPC_STORE_U32(ctx.r1.u32 + 756, ctx.r3.u32);
	// ori r11,r11,427
	ctx.r11.u64 = ctx.r11.u64 | 427;
	// std r7,1464(r1)
	PPC_STORE_U64(ctx.r1.u32 + 1464, ctx.r7.u64);
	// lis r3,560
	ctx.r3.s64 = 36700160;
	// stw r8,764(r1)
	PPC_STORE_U32(ctx.r1.u32 + 764, ctx.r8.u32);
	// stw r11,772(r1)
	PPC_STORE_U32(ctx.r1.u32 + 772, ctx.r11.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// lis r11,560
	ctx.r11.s64 = 36700160;
	// std r5,1448(r1)
	PPC_STORE_U64(ctx.r1.u32 + 1448, ctx.r5.u64);
	// ori r3,r3,217
	ctx.r3.u64 = ctx.r3.u64 | 217;
	// stw r8,808(r1)
	PPC_STORE_U32(ctx.r1.u32 + 808, ctx.r8.u32);
	// ori r11,r11,218
	ctx.r11.u64 = ctx.r11.u64 | 218;
	// std r4,1440(r1)
	PPC_STORE_U64(ctx.r1.u32 + 1440, ctx.r4.u64);
	// stw r3,812(r1)
	PPC_STORE_U32(ctx.r1.u32 + 812, ctx.r3.u32);
	// lis r8,560
	ctx.r8.s64 = 36700160;
	// lis r3,560
	ctx.r3.s64 = 36700160;
	// stw r11,820(r1)
	PPC_STORE_U32(ctx.r1.u32 + 820, ctx.r11.u32);
	// ori r8,r8,219
	ctx.r8.u64 = ctx.r8.u64 | 219;
	// std r31,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r31.u64);
	// li r11,3
	ctx.r11.s64 = 3;
	// std r30,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r30.u64);
	// ori r3,r3,220
	ctx.r3.u64 = ctx.r3.u64 | 220;
	// stw r8,828(r1)
	PPC_STORE_U32(ctx.r1.u32 + 828, ctx.r8.u32);
	// stw r11,824(r1)
	PPC_STORE_U32(ctx.r1.u32 + 824, ctx.r11.u32);
	// li r8,4
	ctx.r8.s64 = 4;
	// stw r3,836(r1)
	PPC_STORE_U32(ctx.r1.u32 + 836, ctx.r3.u32);
	// ori r11,r14,221
	ctx.r11.u64 = ctx.r14.u64 | 221;
	// li r3,5
	ctx.r3.s64 = 5;
	// stw r8,832(r1)
	PPC_STORE_U32(ctx.r1.u32 + 832, ctx.r8.u32);
	// lis r7,560
	ctx.r7.s64 = 36700160;
	// stw r11,844(r1)
	PPC_STORE_U32(ctx.r1.u32 + 844, ctx.r11.u32);
	// stw r3,840(r1)
	PPC_STORE_U32(ctx.r1.u32 + 840, ctx.r3.u32);
	// ori r8,r6,222
	ctx.r8.u64 = ctx.r6.u64 | 222;
	// li r11,6
	ctx.r11.s64 = 6;
	// std r24,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r24.u64);
	// ori r3,r7,223
	ctx.r3.u64 = ctx.r7.u64 | 223;
	// stw r8,852(r1)
	PPC_STORE_U32(ctx.r1.u32 + 852, ctx.r8.u32);
	// lis r5,560
	ctx.r5.s64 = 36700160;
	// stw r11,848(r1)
	PPC_STORE_U32(ctx.r1.u32 + 848, ctx.r11.u32);
	// li r8,7
	ctx.r8.s64 = 7;
	// stw r3,860(r1)
	PPC_STORE_U32(ctx.r1.u32 + 860, ctx.r3.u32);
	// ori r11,r5,224
	ctx.r11.u64 = ctx.r5.u64 | 224;
	// std r29,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r29.u64);
	// li r3,8
	ctx.r3.s64 = 8;
	// stw r8,856(r1)
	PPC_STORE_U32(ctx.r1.u32 + 856, ctx.r8.u32);
	// lis r4,560
	ctx.r4.s64 = 36700160;
	// stw r11,868(r1)
	PPC_STORE_U32(ctx.r1.u32 + 868, ctx.r11.u32);
	// lis r31,560
	ctx.r31.s64 = 36700160;
	// stw r3,864(r1)
	PPC_STORE_U32(ctx.r1.u32 + 864, ctx.r3.u32);
	// ori r8,r4,225
	ctx.r8.u64 = ctx.r4.u64 | 225;
	// std r28,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.r28.u64);
	// li r11,9
	ctx.r11.s64 = 9;
	// std r27,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, ctx.r27.u64);
	// lis r30,560
	ctx.r30.s64 = 36700160;
	// std r26,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, ctx.r26.u64);
	// li r24,2
	ctx.r24.s64 = 2;
	// std r25,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r25.u64);
	// ori r3,r31,227
	ctx.r3.u64 = ctx.r31.u64 | 227;
	// stw r8,876(r1)
	PPC_STORE_U32(ctx.r1.u32 + 876, ctx.r8.u32);
	// stw r11,872(r1)
	PPC_STORE_U32(ctx.r1.u32 + 872, ctx.r11.u32);
	// lis r29,560
	ctx.r29.s64 = 36700160;
	// lis r28,560
	ctx.r28.s64 = 36700160;
	// stw r24,816(r1)
	PPC_STORE_U32(ctx.r1.u32 + 816, ctx.r24.u32);
	// lis r27,560
	ctx.r27.s64 = 36700160;
	// stw r3,884(r1)
	PPC_STORE_U32(ctx.r1.u32 + 884, ctx.r3.u32);
	// lis r26,560
	ctx.r26.s64 = 36700160;
	// lis r25,560
	ctx.r25.s64 = 36700160;
	// li r8,10
	ctx.r8.s64 = 10;
	// ori r11,r30,228
	ctx.r11.u64 = ctx.r30.u64 | 228;
	// stw r8,880(r1)
	PPC_STORE_U32(ctx.r1.u32 + 880, ctx.r8.u32);
	// li r3,11
	ctx.r3.s64 = 11;
	// stw r11,892(r1)
	PPC_STORE_U32(ctx.r1.u32 + 892, ctx.r11.u32);
	// ori r8,r29,229
	ctx.r8.u64 = ctx.r29.u64 | 229;
	// li r11,12
	ctx.r11.s64 = 12;
	// stw r3,888(r1)
	PPC_STORE_U32(ctx.r1.u32 + 888, ctx.r3.u32);
	// stw r8,900(r1)
	PPC_STORE_U32(ctx.r1.u32 + 900, ctx.r8.u32);
	// ori r3,r28,230
	ctx.r3.u64 = ctx.r28.u64 | 230;
	// stw r11,896(r1)
	PPC_STORE_U32(ctx.r1.u32 + 896, ctx.r11.u32);
	// li r8,13
	ctx.r8.s64 = 13;
	// ori r11,r27,231
	ctx.r11.u64 = ctx.r27.u64 | 231;
	// stw r3,908(r1)
	PPC_STORE_U32(ctx.r1.u32 + 908, ctx.r3.u32);
	// stw r8,904(r1)
	PPC_STORE_U32(ctx.r1.u32 + 904, ctx.r8.u32);
	// li r3,14
	ctx.r3.s64 = 14;
	// stw r11,916(r1)
	PPC_STORE_U32(ctx.r1.u32 + 916, ctx.r11.u32);
	// ori r8,r26,232
	ctx.r8.u64 = ctx.r26.u64 | 232;
	// li r11,15
	ctx.r11.s64 = 15;
	// stw r3,912(r1)
	PPC_STORE_U32(ctx.r1.u32 + 912, ctx.r3.u32);
	// stw r8,924(r1)
	PPC_STORE_U32(ctx.r1.u32 + 924, ctx.r8.u32);
	// ori r3,r25,233
	ctx.r3.u64 = ctx.r25.u64 | 233;
	// stw r11,920(r1)
	PPC_STORE_U32(ctx.r1.u32 + 920, ctx.r11.u32);
	// li r8,16
	ctx.r8.s64 = 16;
	// lis r11,560
	ctx.r11.s64 = 36700160;
	// stw r3,932(r1)
	PPC_STORE_U32(ctx.r1.u32 + 932, ctx.r3.u32);
	// stw r8,928(r1)
	PPC_STORE_U32(ctx.r1.u32 + 928, ctx.r8.u32);
	// li r3,77
	ctx.r3.s64 = 77;
	// ori r11,r11,234
	ctx.r11.u64 = ctx.r11.u64 | 234;
	// stw r9,1068(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1068, ctx.r9.u32);
	// lis r8,560
	ctx.r8.s64 = 36700160;
	// stw r3,936(r1)
	PPC_STORE_U32(ctx.r1.u32 + 936, ctx.r3.u32);
	// stw r11,940(r1)
	PPC_STORE_U32(ctx.r1.u32 + 940, ctx.r11.u32);
	// lis r3,560
	ctx.r3.s64 = 36700160;
	// ori r8,r8,235
	ctx.r8.u64 = ctx.r8.u64 | 235;
	// lis r11,560
	ctx.r11.s64 = 36700160;
	// stw r8,948(r1)
	PPC_STORE_U32(ctx.r1.u32 + 948, ctx.r8.u32);
	// ori r3,r3,236
	ctx.r3.u64 = ctx.r3.u64 | 236;
	// ori r11,r11,237
	ctx.r11.u64 = ctx.r11.u64 | 237;
	// lis r8,560
	ctx.r8.s64 = 36700160;
	// stw r3,956(r1)
	PPC_STORE_U32(ctx.r1.u32 + 956, ctx.r3.u32);
	// lis r9,560
	ctx.r9.s64 = 36700160;
	// stw r11,964(r1)
	PPC_STORE_U32(ctx.r1.u32 + 964, ctx.r11.u32);
	// ori r8,r8,238
	ctx.r8.u64 = ctx.r8.u64 | 238;
	// li r3,80
	ctx.r3.s64 = 80;
	// ori r9,r9,239
	ctx.r9.u64 = ctx.r9.u64 | 239;
	// stw r8,972(r1)
	PPC_STORE_U32(ctx.r1.u32 + 972, ctx.r8.u32);
	// li r11,17
	ctx.r11.s64 = 17;
	// stw r3,960(r1)
	PPC_STORE_U32(ctx.r1.u32 + 960, ctx.r3.u32);
	// lis r14,560
	ctx.r14.s64 = 36700160;
	// stw r9,980(r1)
	PPC_STORE_U32(ctx.r1.u32 + 980, ctx.r9.u32);
	// lis r7,560
	ctx.r7.s64 = 36700160;
	// stw r11,968(r1)
	PPC_STORE_U32(ctx.r1.u32 + 968, ctx.r11.u32);
	// li r8,18
	ctx.r8.s64 = 18;
	// ori r3,r14,240
	ctx.r3.u64 = ctx.r14.u64 | 240;
	// li r11,19
	ctx.r11.s64 = 19;
	// stw r8,976(r1)
	PPC_STORE_U32(ctx.r1.u32 + 976, ctx.r8.u32);
	// ori r9,r7,241
	ctx.r9.u64 = ctx.r7.u64 | 241;
	// stw r3,988(r1)
	PPC_STORE_U32(ctx.r1.u32 + 988, ctx.r3.u32);
	// lis r6,560
	ctx.r6.s64 = 36700160;
	// stw r11,984(r1)
	PPC_STORE_U32(ctx.r1.u32 + 984, ctx.r11.u32);
	// lis r5,560
	ctx.r5.s64 = 36700160;
	// stw r9,996(r1)
	PPC_STORE_U32(ctx.r1.u32 + 996, ctx.r9.u32);
	// li r8,20
	ctx.r8.s64 = 20;
	// ori r3,r6,242
	ctx.r3.u64 = ctx.r6.u64 | 242;
	// lis r4,560
	ctx.r4.s64 = 36700160;
	// stw r8,992(r1)
	PPC_STORE_U32(ctx.r1.u32 + 992, ctx.r8.u32);
	// li r26,78
	ctx.r26.s64 = 78;
	// stw r3,1004(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1004, ctx.r3.u32);
	// li r25,79
	ctx.r25.s64 = 79;
	// li r11,21
	ctx.r11.s64 = 21;
	// stw r26,944(r1)
	PPC_STORE_U32(ctx.r1.u32 + 944, ctx.r26.u32);
	// ori r9,r5,243
	ctx.r9.u64 = ctx.r5.u64 | 243;
	// stw r25,952(r1)
	PPC_STORE_U32(ctx.r1.u32 + 952, ctx.r25.u32);
	// lis r31,560
	ctx.r31.s64 = 36700160;
	// stw r11,1000(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1000, ctx.r11.u32);
	// lis r30,560
	ctx.r30.s64 = 36700160;
	// stw r9,1012(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1012, ctx.r9.u32);
	// lis r29,560
	ctx.r29.s64 = 36700160;
	// lis r28,560
	ctx.r28.s64 = 36700160;
	// lis r27,560
	ctx.r27.s64 = 36700160;
	// li r8,24
	ctx.r8.s64 = 24;
	// ori r3,r4,244
	ctx.r3.u64 = ctx.r4.u64 | 244;
	// ori r9,r31,245
	ctx.r9.u64 = ctx.r31.u64 | 245;
	// stw r8,1008(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1008, ctx.r8.u32);
	// li r11,25
	ctx.r11.s64 = 25;
	// stw r3,1020(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1020, ctx.r3.u32);
	// stw r9,1028(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1028, ctx.r9.u32);
	// ori r9,r29,247
	ctx.r9.u64 = ctx.r29.u64 | 247;
	// stw r11,1016(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1016, ctx.r11.u32);
	// li r8,23
	ctx.r8.s64 = 23;
	// stw r9,1044(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1044, ctx.r9.u32);
	// ori r9,r27,249
	ctx.r9.u64 = ctx.r27.u64 | 249;
	// li r11,22
	ctx.r11.s64 = 22;
	// stw r8,1024(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1024, ctx.r8.u32);
	// stw r9,1060(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1060, ctx.r9.u32);
	// li r9,30
	ctx.r9.s64 = 30;
	// stw r11,1032(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1032, ctx.r11.u32);
	// li r8,27
	ctx.r8.s64 = 27;
	// stw r9,1072(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1072, ctx.r9.u32);
	// lis r9,560
	ctx.r9.s64 = 36700160;
	// li r11,28
	ctx.r11.s64 = 28;
	// stw r8,1040(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1040, ctx.r8.u32);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// li r8,26
	ctx.r8.s64 = 26;
	// stw r11,1048(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1048, ctx.r11.u32);
	// lis r11,560
	ctx.r11.s64 = 36700160;
	// stw r8,1056(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1056, ctx.r8.u32);
	// ori r3,r30,246
	ctx.r3.u64 = ctx.r30.u64 | 246;
	// ori r8,r11,251
	ctx.r8.u64 = ctx.r11.u64 | 251;
	// lis r11,560
	ctx.r11.s64 = 36700160;
	// stw r3,1036(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1036, ctx.r3.u32);
	// ori r3,r28,248
	ctx.r3.u64 = ctx.r28.u64 | 248;
	// stw r8,1076(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1076, ctx.r8.u32);
	// ori r11,r11,252
	ctx.r11.u64 = ctx.r11.u64 | 252;
	// stw r3,1052(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1052, ctx.r3.u32);
	// li r3,29
	ctx.r3.s64 = 29;
	// stw r11,1084(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1084, ctx.r11.u32);
	// li r11,32
	ctx.r11.s64 = 32;
	// lis r14,560
	ctx.r14.s64 = 36700160;
	// stw r3,1064(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1064, ctx.r3.u32);
	// stw r11,1088(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1088, ctx.r11.u32);
	// lis r8,560
	ctx.r8.s64 = 36700160;
	// ori r14,r14,253
	ctx.r14.u64 = ctx.r14.u64 | 253;
	// lwz r3,1652(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1652);
	// ori r8,r8,254
	ctx.r8.u64 = ctx.r8.u64 | 254;
	// stw r14,1092(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1092, ctx.r14.u32);
	// li r14,33
	ctx.r14.s64 = 33;
	// lis r7,560
	ctx.r7.s64 = 36700160;
	// stw r8,1100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1100, ctx.r8.u32);
	// li r8,34
	ctx.r8.s64 = 34;
	// stw r14,1096(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1096, ctx.r14.u32);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// ori r14,r7,271
	ctx.r14.u64 = ctx.r7.u64 | 271;
	// lis r3,560
	ctx.r3.s64 = 36700160;
	// stw r8,1104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1104, ctx.r8.u32);
	// lis r6,560
	ctx.r6.s64 = 36700160;
	// stw r14,1116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1116, ctx.r14.u32);
	// li r8,36
	ctx.r8.s64 = 36;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// ori r3,r3,255
	ctx.r3.u64 = ctx.r3.u64 | 255;
	// lis r5,560
	ctx.r5.s64 = 36700160;
	// stw r8,1120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1120, ctx.r8.u32);
	// ori r11,r11,263
	ctx.r11.u64 = ctx.r11.u64 | 263;
	// stw r3,1132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1132, ctx.r3.u32);
	// lis r4,560
	ctx.r4.s64 = 36700160;
	// stw r11,1108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1108, ctx.r11.u32);
	// li r11,35
	ctx.r11.s64 = 35;
	// li r25,31
	ctx.r25.s64 = 31;
	// stw r11,1112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1112, ctx.r11.u32);
	// li r11,37
	ctx.r11.s64 = 37;
	// ori r14,r6,256
	ctx.r14.u64 = ctx.r6.u64 | 256;
	// stw r25,1080(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1080, ctx.r25.u32);
	// stw r11,1128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1128, ctx.r11.u32);
	// lis r31,560
	ctx.r31.s64 = 36700160;
	// lis r30,560
	ctx.r30.s64 = 36700160;
	// stw r14,1124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1124, ctx.r14.u32);
	// lis r29,560
	ctx.r29.s64 = 36700160;
	// lis r28,560
	ctx.r28.s64 = 36700160;
	// lis r27,560
	ctx.r27.s64 = 36700160;
	// lis r26,560
	ctx.r26.s64 = 36700160;
	// ori r8,r5,259
	ctx.r8.u64 = ctx.r5.u64 | 259;
	// li r3,38
	ctx.r3.s64 = 38;
	// ori r11,r4,257
	ctx.r11.u64 = ctx.r4.u64 | 257;
	// stw r8,1140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1140, ctx.r8.u32);
	// li r8,39
	ctx.r8.s64 = 39;
	// stw r3,1136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1136, ctx.r3.u32);
	// ori r3,r31,258
	ctx.r3.u64 = ctx.r31.u64 | 258;
	// stw r11,1148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1148, ctx.r11.u32);
	// li r11,40
	ctx.r11.s64 = 40;
	// stw r8,1144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1144, ctx.r8.u32);
	// ori r8,r30,262
	ctx.r8.u64 = ctx.r30.u64 | 262;
	// stw r3,1156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1156, ctx.r3.u32);
	// li r3,41
	ctx.r3.s64 = 41;
	// stw r11,1152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1152, ctx.r11.u32);
	// ori r11,r29,264
	ctx.r11.u64 = ctx.r29.u64 | 264;
	// stw r8,1164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1164, ctx.r8.u32);
	// li r8,42
	ctx.r8.s64 = 42;
	// stw r3,1160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1160, ctx.r3.u32);
	// ori r3,r28,260
	ctx.r3.u64 = ctx.r28.u64 | 260;
	// stw r11,1172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1172, ctx.r11.u32);
	// li r11,43
	ctx.r11.s64 = 43;
	// stw r8,1168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1168, ctx.r8.u32);
	// ori r8,r27,261
	ctx.r8.u64 = ctx.r27.u64 | 261;
	// stw r3,1180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1180, ctx.r3.u32);
	// li r3,44
	ctx.r3.s64 = 44;
	// stw r11,1176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1176, ctx.r11.u32);
	// ori r11,r26,266
	ctx.r11.u64 = ctx.r26.u64 | 266;
	// stw r8,1188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1188, ctx.r8.u32);
	// li r8,45
	ctx.r8.s64 = 45;
	// stw r3,1184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1184, ctx.r3.u32);
	// lis r3,560
	ctx.r3.s64 = 36700160;
	// stw r11,1196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1196, ctx.r11.u32);
	// li r11,46
	ctx.r11.s64 = 46;
	// stw r8,1192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1192, ctx.r8.u32);
	// ori r8,r3,598
	ctx.r8.u64 = ctx.r3.u64 | 598;
	// lis r3,560
	ctx.r3.s64 = 36700160;
	// stw r11,1200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1200, ctx.r11.u32);
	// lis r11,560
	ctx.r11.s64 = 36700160;
	// stw r8,1204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1204, ctx.r8.u32);
	// ori r3,r3,268
	ctx.r3.u64 = ctx.r3.u64 | 268;
	// stw r15,1280(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1280, ctx.r15.u32);
	// ori r11,r11,265
	ctx.r11.u64 = ctx.r11.u64 | 265;
	// stw r16,1288(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1288, ctx.r16.u32);
	// stw r3,1212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1212, ctx.r3.u32);
	// li r3,48
	ctx.r3.s64 = 48;
	// lis r8,560
	ctx.r8.s64 = 36700160;
	// stw r11,1220(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1220, ctx.r11.u32);
	// lis r15,560
	ctx.r15.s64 = 36700160;
	// stw r3,1216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1216, ctx.r3.u32);
	// ori r8,r8,267
	ctx.r8.u64 = ctx.r8.u64 | 267;
	// stw r17,1296(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1296, ctx.r17.u32);
	// li r11,49
	ctx.r11.s64 = 49;
	// stw r18,1304(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1304, ctx.r18.u32);
	// ori r3,r15,269
	ctx.r3.u64 = ctx.r15.u64 | 269;
	// stw r8,1228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1228, ctx.r8.u32);
	// lis r16,560
	ctx.r16.s64 = 36700160;
	// stw r11,1224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1224, ctx.r11.u32);
	// li r8,50
	ctx.r8.s64 = 50;
	// stw r3,1236(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1236, ctx.r3.u32);
	// ori r11,r16,270
	ctx.r11.u64 = ctx.r16.u64 | 270;
	// stw r19,1312(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1312, ctx.r19.u32);
	// lis r17,560
	ctx.r17.s64 = 36700160;
	// stw r20,1320(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1320, ctx.r20.u32);
	// li r30,47
	ctx.r30.s64 = 47;
	// stw r21,1328(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1328, ctx.r21.u32);
	// li r3,51
	ctx.r3.s64 = 51;
	// stw r22,1336(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1336, ctx.r22.u32);
	// stw r8,1232(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1232, ctx.r8.u32);
	// lis r18,560
	ctx.r18.s64 = 36700160;
	// stw r11,1244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1244, ctx.r11.u32);
	// lis r19,560
	ctx.r19.s64 = 36700160;
	// lis r20,560
	ctx.r20.s64 = 36700160;
	// stw r30,1208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1208, ctx.r30.u32);
	// lis r21,560
	ctx.r21.s64 = 36700160;
	// stw r3,1240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1240, ctx.r3.u32);
	// lis r22,560
	ctx.r22.s64 = 36700160;
	// lis r14,560
	ctx.r14.s64 = 36700160;
	// lis r7,560
	ctx.r7.s64 = 36700160;
	// lis r6,560
	ctx.r6.s64 = 36700160;
	// lis r5,560
	ctx.r5.s64 = 36700160;
	// lis r4,560
	ctx.r4.s64 = 36700160;
	// lis r31,560
	ctx.r31.s64 = 36700160;
	// ori r8,r17,476
	ctx.r8.u64 = ctx.r17.u64 | 476;
	// li r11,52
	ctx.r11.s64 = 52;
	// stw r8,1252(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1252, ctx.r8.u32);
	// li r8,53
	ctx.r8.s64 = 53;
	// stw r11,1248(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1248, ctx.r11.u32);
	// ori r3,r18,477
	ctx.r3.u64 = ctx.r18.u64 | 477;
	// ori r11,r19,478
	ctx.r11.u64 = ctx.r19.u64 | 478;
	// stw r8,1256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1256, ctx.r8.u32);
	// stw r3,1260(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1260, ctx.r3.u32);
	// ori r8,r20,479
	ctx.r8.u64 = ctx.r20.u64 | 479;
	// stw r11,1268(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1268, ctx.r11.u32);
	// li r3,54
	ctx.r3.s64 = 54;
	// li r11,55
	ctx.r11.s64 = 55;
	// stw r8,1276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1276, ctx.r8.u32);
	// stw r3,1264(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1264, ctx.r3.u32);
	// ori r8,r22,274
	ctx.r8.u64 = ctx.r22.u64 | 274;
	// stw r11,1272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1272, ctx.r11.u32);
	// ori r3,r21,273
	ctx.r3.u64 = ctx.r21.u64 | 273;
	// ori r11,r14,275
	ctx.r11.u64 = ctx.r14.u64 | 275;
	// stw r8,1292(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1292, ctx.r8.u32);
	// stw r3,1284(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1284, ctx.r3.u32);
	// ori r8,r6,277
	ctx.r8.u64 = ctx.r6.u64 | 277;
	// stw r11,1300(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1300, ctx.r11.u32);
	// ori r3,r7,276
	ctx.r3.u64 = ctx.r7.u64 | 276;
	// ori r11,r5,278
	ctx.r11.u64 = ctx.r5.u64 | 278;
	// stw r8,1316(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1316, ctx.r8.u32);
	// stw r3,1308(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1308, ctx.r3.u32);
	// ori r8,r31,280
	ctx.r8.u64 = ctx.r31.u64 | 280;
	// stw r11,1324(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1324, ctx.r11.u32);
	// ori r3,r4,279
	ctx.r3.u64 = ctx.r4.u64 | 279;
	// ld r24,88(r1)
	ctx.r24.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// lis r11,560
	ctx.r11.s64 = 36700160;
	// ld r25,128(r1)
	ctx.r25.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// ld r26,120(r1)
	ctx.r26.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// ld r27,136(r1)
	ctx.r27.u64 = PPC_LOAD_U64(ctx.r1.u32 + 136);
	// stw r8,1340(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1340, ctx.r8.u32);
	// ori r8,r11,281
	ctx.r8.u64 = ctx.r11.u64 | 281;
	// ld r4,1440(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 1440);
	// lis r11,560
	ctx.r11.s64 = 36700160;
	// stw r3,1332(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1332, ctx.r3.u32);
	// lis r3,560
	ctx.r3.s64 = 36700160;
	// stw r10,1420(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1420, ctx.r10.u32);
	// lis r10,560
	ctx.r10.s64 = 36700160;
	// ld r28,144(r1)
	ctx.r28.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// ori r3,r3,282
	ctx.r3.u64 = ctx.r3.u64 | 282;
	// ld r29,104(r1)
	ctx.r29.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// ori r11,r11,283
	ctx.r11.u64 = ctx.r11.u64 | 283;
	// stw r8,1348(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1348, ctx.r8.u32);
	// ori r10,r10,284
	ctx.r10.u64 = ctx.r10.u64 | 284;
	// stw r24,1352(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1352, ctx.r24.u32);
	// lis r8,560
	ctx.r8.s64 = 36700160;
	// lis r24,560
	ctx.r24.s64 = 36700160;
	// stw r25,1360(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1360, ctx.r25.u32);
	// stw r26,1368(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1368, ctx.r26.u32);
	// lis r25,560
	ctx.r25.s64 = 36700160;
	// stw r27,1376(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1376, ctx.r27.u32);
	// lis r26,560
	ctx.r26.s64 = 36700160;
	// ld r30,96(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// lis r27,560
	ctx.r27.s64 = 36700160;
	// ld r31,112(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// ori r8,r8,285
	ctx.r8.u64 = ctx.r8.u64 | 285;
	// stw r4,1416(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1416, ctx.r4.u32);
	// ori r4,r24,286
	ctx.r4.u64 = ctx.r24.u64 | 286;
	// stw r28,1384(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1384, ctx.r28.u32);
	// lis r28,560
	ctx.r28.s64 = 36700160;
	// stw r29,1392(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1392, ctx.r29.u32);
	// lis r29,560
	ctx.r29.s64 = 36700160;
	// stw r3,1356(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1356, ctx.r3.u32);
	// ori r3,r25,287
	ctx.r3.u64 = ctx.r25.u64 | 287;
	// stw r11,1364(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1364, ctx.r11.u32);
	// ori r11,r26,288
	ctx.r11.u64 = ctx.r26.u64 | 288;
	// stw r10,1372(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1372, ctx.r10.u32);
	// ori r10,r27,480
	ctx.r10.u64 = ctx.r27.u64 | 480;
	// stw r8,1380(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1380, ctx.r8.u32);
	// ori r8,r28,597
	ctx.r8.u64 = ctx.r28.u64 | 597;
	// stw r4,1388(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1388, ctx.r4.u32);
	// ori r4,r29,596
	ctx.r4.u64 = ctx.r29.u64 | 596;
	// stw r23,1344(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1344, ctx.r23.u32);
	// stw r30,1400(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1400, ctx.r30.u32);
	// stw r31,1408(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1408, ctx.r31.u32);
	// stw r3,1396(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1396, ctx.r3.u32);
	// stw r11,1404(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1404, ctx.r11.u32);
	// stw r10,1412(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1412, ctx.r10.u32);
	// ld r5,1448(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 1448);
	// addi r10,r1,160
	ctx.r10.s64 = ctx.r1.s64 + 160;
	// ld r6,1456(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 1456);
	// ld r7,1464(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 1464);
	// stw r8,1428(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1428, ctx.r8.u32);
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// stw r4,1436(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1436, ctx.r4.u32);
	// stw r5,1424(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1424, ctx.r5.u32);
	// stw r6,1432(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1432, ctx.r6.u32);
loc_82D8FB50:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpw cr6,r9,r8
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, xer);
	// beq cr6,0x82d8fb74
	if (cr6.eq) goto loc_82D8FB74;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// cmplwi cr6,r11,80
	cr6.compare<uint32_t>(ctx.r11.u32, 80, xer);
	// blt cr6,0x82d8fb50
	if (cr6.lt) goto loc_82D8FB50;
	// addi r1,r1,1632
	ctx.r1.s64 = ctx.r1.s64 + 1632;
	// b 0x831cdb00
	__restgprlr_14(ctx, base);
	return;
loc_82D8FB74:
	// rlwinm r31,r11,3,0,28
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lbz r27,1687(r1)
	ctx.r27.u64 = PPC_LOAD_U8(ctx.r1.u32 + 1687);
	// addi r11,r1,160
	ctx.r11.s64 = ctx.r1.s64 + 160;
	// lwz r29,1660(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1660);
	// lwzx r28,r31,r11
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// cmpwi cr6,r28,72
	cr6.compare<int32_t>(ctx.r28.s32, 72, xer);
	// bne cr6,0x82d8fbb4
	if (!cr6.eq) goto loc_82D8FBB4;
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, xer);
	// li r5,185
	ctx.r5.s64 = 185;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r11,r1,804
	ctx.r11.s64 = ctx.r1.s64 + 804;
	// beq cr6,0x82d8fba8
	if (cr6.eq) goto loc_82D8FBA8;
	// addi r11,r1,164
	ctx.r11.s64 = ctx.r1.s64 + 164;
loc_82D8FBA8:
	// lwzx r4,r31,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// bl 0x82d042a8
	ctx.lr = 0x82D8FBB0;
	sub_82D042A8(ctx, base);
	// li r7,1
	ctx.r7.s64 = 1;
loc_82D8FBB4:
	// cmpwi cr6,r28,74
	cr6.compare<int32_t>(ctx.r28.s32, 74, xer);
	// bne cr6,0x82d8fc18
	if (!cr6.eq) goto loc_82D8FC18;
	// lwz r11,1668(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1668);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d8fc18
	if (cr6.eq) goto loc_82D8FC18;
	// lis r10,3
	ctx.r10.s64 = 196608;
	// clrlwi r30,r11,14
	ctx.r30.u64 = ctx.r11.u32 & 0x3FFFF;
	// ori r9,r10,65535
	ctx.r9.u64 = ctx.r10.u64 | 65535;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// ble cr6,0x82d8fbe0
	if (!cr6.gt) goto loc_82D8FBE0;
	// li r30,-1
	ctx.r30.s64 = -1;
loc_82D8FBE0:
	// bl 0x831156e8
	ctx.lr = 0x82D8FBE4;
	sub_831156E8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,48(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// bl 0x8311c148
	ctx.lr = 0x82D8FBF0;
	sub_8311C148(ctx, base);
	// clrlwi r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	// addi r5,r3,4
	ctx.r5.s64 = ctx.r3.s64 + 4;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r11,r1,804
	ctx.r11.s64 = ctx.r1.s64 + 804;
	// beq cr6,0x82d8fc0c
	if (cr6.eq) goto loc_82D8FC0C;
	// addi r11,r1,164
	ctx.r11.s64 = ctx.r1.s64 + 164;
loc_82D8FC0C:
	// lwzx r4,r31,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// bl 0x82d042a8
	ctx.lr = 0x82D8FC14;
	sub_82D042A8(ctx, base);
	// li r7,1
	ctx.r7.s64 = 1;
loc_82D8FC18:
	// cmpwi cr6,r28,75
	cr6.compare<int32_t>(ctx.r28.s32, 75, xer);
	// bne cr6,0x82d8fc64
	if (!cr6.eq) goto loc_82D8FC64;
	// lwz r30,1676(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1676);
	// cmplwi cr6,r30,65535
	cr6.compare<uint32_t>(ctx.r30.u32, 65535, xer);
	// beq cr6,0x82d8fc64
	if (cr6.eq) goto loc_82D8FC64;
	// bl 0x831156e8
	ctx.lr = 0x82D8FC30;
	sub_831156E8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,48(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// bl 0x8311c628
	ctx.lr = 0x82D8FC3C;
	sub_8311C628(ctx, base);
	// clrlwi r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r11,r1,804
	ctx.r11.s64 = ctx.r1.s64 + 804;
	// beq cr6,0x82d8fc58
	if (cr6.eq) goto loc_82D8FC58;
	// addi r11,r1,164
	ctx.r11.s64 = ctx.r1.s64 + 164;
loc_82D8FC58:
	// lwzx r4,r31,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// bl 0x82d042a8
	ctx.lr = 0x82D8FC60;
	sub_82D042A8(ctx, base);
	// li r7,1
	ctx.r7.s64 = 1;
loc_82D8FC64:
	// clrlwi r11,r7,24
	ctx.r11.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82d8fc90
	if (!cr6.eq) goto loc_82D8FC90;
	// clrlwi r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// addi r11,r1,804
	ctx.r11.s64 = ctx.r1.s64 + 804;
	// beq cr6,0x82d8fc88
	if (cr6.eq) goto loc_82D8FC88;
	// addi r11,r1,164
	ctx.r11.s64 = ctx.r1.s64 + 164;
loc_82D8FC88:
	// lwzx r4,r31,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// bl 0x82d04220
	ctx.lr = 0x82D8FC90;
	sub_82D04220(ctx, base);
loc_82D8FC90:
	// addi r1,r1,1632
	ctx.r1.s64 = ctx.r1.s64 + 1632;
	// b 0x831cdb00
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D8FC98"))) PPC_WEAK_FUNC(sub_82D8FC98);
PPC_FUNC_IMPL(__imp__sub_82D8FC98) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82D8FCA0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// subf r11,r3,r5
	ctx.r11.s64 = ctx.r5.s64 - ctx.r3.s64;
	// li r10,84
	ctx.r10.s64 = 84;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// divw r11,r11,r10
	ctx.r11.s32 = PPCDivide(ctx.r11.s32, ctx.r10.s32);
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// cmpwi cr6,r11,40
	cr6.compare<int32_t>(ctx.r11.s32, 40, xer);
	// ble cr6,0x82d8fd20
	if (!cr6.gt) goto loc_82D8FD20;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// srawi r10,r11,3
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 3;
	// addze r11,r10
	temp.s64 = ctx.r10.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r11.s64 = temp.s64;
	// mulli r31,r11,84
	ctx.r31.s64 = ctx.r11.s64 * 84;
	// mulli r27,r11,168
	ctx.r27.s64 = ctx.r11.s64 * 168;
	// add r28,r31,r3
	ctx.r28.u64 = ctx.r31.u64 + ctx.r3.u64;
	// add r5,r27,r3
	ctx.r5.u64 = ctx.r27.u64 + ctx.r3.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82d8d4c0
	ctx.lr = 0x82D8FCE4;
	sub_82D8D4C0(ctx, base);
	// add r5,r31,r30
	ctx.r5.u64 = ctx.r31.u64 + ctx.r30.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// subf r3,r31,r30
	ctx.r3.s64 = ctx.r30.s64 - ctx.r31.s64;
	// bl 0x82d8d4c0
	ctx.lr = 0x82D8FCF4;
	sub_82D8D4C0(ctx, base);
	// subf r31,r31,r29
	ctx.r31.s64 = ctx.r29.s64 - ctx.r31.s64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// subf r3,r27,r29
	ctx.r3.s64 = ctx.r29.s64 - ctx.r27.s64;
	// bl 0x82d8d4c0
	ctx.lr = 0x82D8FD08;
	sub_82D8D4C0(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82d8d4c0
	ctx.lr = 0x82D8FD18;
	sub_82D8D4C0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_82D8FD20:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82d8d4c0
	ctx.lr = 0x82D8FD2C;
	sub_82D8D4C0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D8FD34"))) PPC_WEAK_FUNC(sub_82D8FD34);
PPC_FUNC_IMPL(__imp__sub_82D8FD34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D8FD38"))) PPC_WEAK_FUNC(sub_82D8FD38);
PPC_FUNC_IMPL(__imp__sub_82D8FD38) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82D8FD40;
	__savegprlr_26(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// cmplw cr6,r3,r4
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, xer);
	// beq cr6,0x82d8fe2c
	if (cr6.eq) goto loc_82D8FE2C;
	// addi r30,r3,84
	ctx.r30.s64 = ctx.r3.s64 + 84;
	// cmplw cr6,r30,r4
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r4.u32, xer);
	// beq cr6,0x82d8fe2c
	if (cr6.eq) goto loc_82D8FE2C;
	// addi r27,r30,-84
	ctx.r27.s64 = ctx.r30.s64 + -84;
loc_82D8FD64:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r5,84
	ctx.r5.s64 = 84;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
	// bl 0x831ce980
	ctx.lr = 0x82D8FD78;
	sub_831CE980(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x831485a8
	ctx.lr = 0x82D8FD84;
	sub_831485A8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d8fdc0
	if (cr6.eq) goto loc_82D8FDC0;
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
	// cmplw cr6,r28,r30
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r30.u32, xer);
	// beq cr6,0x82d8fdb8
	if (cr6.eq) goto loc_82D8FDB8;
loc_82D8FD9C:
	// addi r31,r31,-84
	ctx.r31.s64 = ctx.r31.s64 + -84;
	// li r5,84
	ctx.r5.s64 = 84;
	// addi r3,r31,84
	ctx.r3.s64 = ctx.r31.s64 + 84;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x831ce980
	ctx.lr = 0x82D8FDB0;
	sub_831CE980(ctx, base);
	// cmplw cr6,r31,r28
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r28.u32, xer);
	// bne cr6,0x82d8fd9c
	if (!cr6.eq) goto loc_82D8FD9C;
loc_82D8FDB8:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// b 0x82d8fe10
	goto loc_82D8FE10;
loc_82D8FDC0:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
	// bl 0x831485a8
	ctx.lr = 0x82D8FDD0;
	sub_831485A8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d8fe0c
	if (cr6.eq) goto loc_82D8FE0C;
loc_82D8FDDC:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r5,84
	ctx.r5.s64 = 84;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831ce980
	ctx.lr = 0x82D8FDEC;
	sub_831CE980(ctx, base);
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
	// addi r31,r31,-84
	ctx.r31.s64 = ctx.r31.s64 + -84;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x831485a8
	ctx.lr = 0x82D8FE00;
	sub_831485A8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82d8fddc
	if (!cr6.eq) goto loc_82D8FDDC;
loc_82D8FE0C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_82D8FE10:
	// li r5,84
	ctx.r5.s64 = 84;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x831ce980
	ctx.lr = 0x82D8FE1C;
	sub_831CE980(ctx, base);
	// addi r30,r30,84
	ctx.r30.s64 = ctx.r30.s64 + 84;
	// addi r27,r27,84
	ctx.r27.s64 = ctx.r27.s64 + 84;
	// cmplw cr6,r30,r26
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r26.u32, xer);
	// bne cr6,0x82d8fd64
	if (!cr6.eq) goto loc_82D8FD64;
loc_82D8FE2C:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D8FE34"))) PPC_WEAK_FUNC(sub_82D8FE34);
PPC_FUNC_IMPL(__imp__sub_82D8FE34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D8FE38"))) PPC_WEAK_FUNC(sub_82D8FE38);
PPC_FUNC_IMPL(__imp__sub_82D8FE38) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82D8FE40;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r3,r3,2800
	ctx.r3.s64 = ctx.r3.s64 + 2800;
	// bl 0x82da8c38
	ctx.lr = 0x82D8FE50;
	sub_82DA8C38(ctx, base);
	// addi r31,r29,2140
	ctx.r31.s64 = ctx.r29.s64 + 2140;
	// li r30,31
	ctx.r30.s64 = 31;
loc_82D8FE58:
	// addi r31,r31,-48
	ctx.r31.s64 = ctx.r31.s64 + -48;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83102db0
	ctx.lr = 0x82D8FE64;
	sub_83102DB0(ctx, base);
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// bge 0x82d8fe58
	if (!cr0.lt) goto loc_82D8FE58;
	// lwz r11,60(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 60);
	// addi r31,r29,40
	ctx.r31.s64 = ctx.r29.s64 + 40;
	// li r27,2
	ctx.r27.s64 = 2;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82d8fe90
	if (cr6.lt) goto loc_82D8FE90;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x825952b8
	ctx.lr = 0x82D8FE90;
	sub_825952B8(ctx, base);
loc_82D8FE90:
	// addi r30,r29,12
	ctx.r30.s64 = ctx.r29.s64 + 12;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r28,15
	ctx.r28.s64 = 15;
	// stw r29,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r29.u32);
	// stw r28,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r28.u32);
	// stb r29,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r29.u8);
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82d8fec4
	if (cr6.lt) goto loc_82D8FEC4;
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x825952b8
	ctx.lr = 0x82D8FEC4;
	sub_825952B8(ctx, base);
loc_82D8FEC4:
	// stw r28,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r28.u32);
	// stw r29,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r29.u32);
	// stb r29,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r29.u8);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D8FED8"))) PPC_WEAK_FUNC(sub_82D8FED8);
PPC_FUNC_IMPL(__imp__sub_82D8FED8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82D8FEE0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r31,r3,128
	ctx.r31.s64 = ctx.r3.s64 + 128;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// bl 0x824238b8
	ctx.lr = 0x82D8FEF4;
	sub_824238B8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824238b8
	ctx.lr = 0x82D8FEFC;
	sub_824238B8(ctx, base);
	// lwz r11,116(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 116);
	// addi r30,r28,96
	ctx.r30.s64 = ctx.r28.s64 + 96;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82d8ff14
	if (cr6.lt) goto loc_82D8FF14;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x82D8FF14;
	sub_8386D088(ctx, base);
loc_82D8FF14:
	// li r31,0
	ctx.r31.s64 = 0;
	// li r27,15
	ctx.r27.s64 = 15;
	// stw r31,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r31.u32);
	// addi r29,r28,60
	ctx.r29.s64 = ctx.r28.s64 + 60;
	// stw r27,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r27.u32);
	// stb r31,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r31.u8);
	// lwz r11,80(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 80);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82d8ff40
	if (cr6.lt) goto loc_82D8FF40;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x82D8FF40;
	sub_8386D088(ctx, base);
loc_82D8FF40:
	// stw r27,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r27.u32);
	// addi r30,r28,32
	ctx.r30.s64 = ctx.r28.s64 + 32;
	// stw r31,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r31.u32);
	// stb r31,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r31.u8);
	// lwz r11,52(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 52);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82d8ff64
	if (cr6.lt) goto loc_82D8FF64;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x82D8FF64;
	sub_8386D088(ctx, base);
loc_82D8FF64:
	// stw r27,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r27.u32);
	// addi r29,r28,4
	ctx.r29.s64 = ctx.r28.s64 + 4;
	// stw r31,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r31.u32);
	// stb r31,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r31.u8);
	// lwz r11,24(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 24);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82d8ff88
	if (cr6.lt) goto loc_82D8FF88;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x82D8FF88;
	sub_8386D088(ctx, base);
loc_82D8FF88:
	// stw r27,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r27.u32);
	// stw r31,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r31.u32);
	// stb r31,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r31.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D8FF9C"))) PPC_WEAK_FUNC(sub_82D8FF9C);
PPC_FUNC_IMPL(__imp__sub_82D8FF9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D8FFA0"))) PPC_WEAK_FUNC(sub_82D8FFA0);
PPC_FUNC_IMPL(__imp__sub_82D8FFA0) {
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
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x82d8ffe0
	if (cr6.lt) goto loc_82D8FFE0;
	// addi r4,r11,2
	ctx.r4.s64 = ctx.r11.s64 + 2;
	// bl 0x82d8c9b0
	ctx.lr = 0x82D8FFD4;
	sub_82D8C9B0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d90024
	if (cr6.eq) goto loc_82D90024;
loc_82D8FFE0:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mulli r11,r11,28
	ctx.r11.s64 = ctx.r11.s64 * 28;
	// add. r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x82d90018
	if (cr0.eq) goto loc_82D90018;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,15
	ctx.r10.s64 = 15;
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// li r6,-1
	ctx.r6.s64 = -1;
	// stw r10,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r10.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r11.u8);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82420558
	ctx.lr = 0x82D90018;
	sub_82420558(ctx, base);
loc_82D90018:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_82D90024:
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

__attribute__((alias("__imp__sub_82D90040"))) PPC_WEAK_FUNC(sub_82D90040);
PPC_FUNC_IMPL(__imp__sub_82D90040) {
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
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x82d9009c
	if (cr6.eq) goto loc_82D9009C;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,15
	ctx.r10.s64 = 15;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// li r6,-1
	ctx.r6.s64 = -1;
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r11,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r11.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82420558
	ctx.lr = 0x82D90084;
	sub_82420558(ctx, base);
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
loc_82D9009C:
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

__attribute__((alias("__imp__sub_82D900B4"))) PPC_WEAK_FUNC(sub_82D900B4);
PPC_FUNC_IMPL(__imp__sub_82D900B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D900B8"))) PPC_WEAK_FUNC(sub_82D900B8);
PPC_FUNC_IMPL(__imp__sub_82D900B8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82D900C0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// cmplw cr6,r3,r4
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, xer);
	// beq cr6,0x82d90100
	if (cr6.eq) goto loc_82D90100;
	// subf r30,r5,r3
	ctx.r30.s64 = ctx.r3.s64 - ctx.r5.s64;
loc_82D900D8:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x82d900f0
	if (cr6.eq) goto loc_82D900F0;
	// add r4,r30,r31
	ctx.r4.u64 = ctx.r30.u64 + ctx.r31.u64;
	// li r5,84
	ctx.r5.s64 = 84;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831ce980
	ctx.lr = 0x82D900F0;
	sub_831CE980(ctx, base);
loc_82D900F0:
	// addi r31,r31,84
	ctx.r31.s64 = ctx.r31.s64 + 84;
	// add r11,r30,r31
	ctx.r11.u64 = ctx.r30.u64 + ctx.r31.u64;
	// cmplw cr6,r11,r29
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, xer);
	// bne cr6,0x82d900d8
	if (!cr6.eq) goto loc_82D900D8;
loc_82D90100:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D9010C"))) PPC_WEAK_FUNC(sub_82D9010C);
PPC_FUNC_IMPL(__imp__sub_82D9010C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D90110"))) PPC_WEAK_FUNC(sub_82D90110);
PPC_FUNC_IMPL(__imp__sub_82D90110) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad4
	ctx.lr = 0x82D90118;
	__savegprlr_23(ctx, base);
	// stwu r1,-832(r1)
	ea = -832 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// subf r11,r4,r5
	ctx.r11.s64 = ctx.r5.s64 - ctx.r4.s64;
	// li r10,84
	ctx.r10.s64 = 84;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// divw r9,r11,r10
	ctx.r9.s32 = PPCDivide(ctx.r11.s32, ctx.r10.s32);
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// srawi r8,r9,1
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 1;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// addze r7,r8
	temp.s64 = ctx.r8.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r7.s64 = temp.s64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mulli r11,r7,84
	ctx.r11.s64 = ctx.r7.s64 * 84;
	// add r31,r11,r4
	ctx.r31.u64 = ctx.r11.u64 + ctx.r4.u64;
	// addi r5,r5,-84
	ctx.r5.s64 = ctx.r5.s64 + -84;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82d8fc98
	ctx.lr = 0x82D90154;
	sub_82D8FC98(ctx, base);
	// addi r27,r31,84
	ctx.r27.s64 = ctx.r31.s64 + 84;
	// cmplw cr6,r26,r31
	cr6.compare<uint32_t>(ctx.r26.u32, ctx.r31.u32, xer);
	// bge cr6,0x82d901a0
	if (!cr6.lt) goto loc_82D901A0;
loc_82D90160:
	// addi r30,r31,-84
	ctx.r30.s64 = ctx.r31.s64 + -84;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831485a8
	ctx.lr = 0x82D90170;
	sub_831485A8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82d901a0
	if (!cr6.eq) goto loc_82D901A0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831485a8
	ctx.lr = 0x82D90188;
	sub_831485A8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82d901a0
	if (!cr6.eq) goto loc_82D901A0;
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
	// cmplw cr6,r26,r30
	cr6.compare<uint32_t>(ctx.r26.u32, ctx.r30.u32, xer);
	// blt cr6,0x82d90160
	if (cr6.lt) goto loc_82D90160;
loc_82D901A0:
	// cmplw cr6,r27,r25
	cr6.compare<uint32_t>(ctx.r27.u32, ctx.r25.u32, xer);
	// bge cr6,0x82d901e4
	if (!cr6.lt) goto loc_82D901E4;
loc_82D901A8:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x831485a8
	ctx.lr = 0x82D901B4;
	sub_831485A8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82d901e4
	if (!cr6.eq) goto loc_82D901E4;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831485a8
	ctx.lr = 0x82D901CC;
	sub_831485A8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82d901e4
	if (!cr6.eq) goto loc_82D901E4;
	// addi r27,r27,84
	ctx.r27.s64 = ctx.r27.s64 + 84;
	// cmplw cr6,r27,r25
	cr6.compare<uint32_t>(ctx.r27.u32, ctx.r25.u32, xer);
	// blt cr6,0x82d901a8
	if (cr6.lt) goto loc_82D901A8;
loc_82D901E4:
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
	// mr r28,r31
	ctx.r28.u64 = ctx.r31.u64;
loc_82D901EC:
	// cmplw cr6,r29,r25
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r25.u32, xer);
	// bge cr6,0x82d90268
	if (!cr6.lt) goto loc_82D90268;
loc_82D901F4:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831485a8
	ctx.lr = 0x82D90200;
	sub_831485A8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82d9025c
	if (!cr6.eq) goto loc_82D9025C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831485a8
	ctx.lr = 0x82D90218;
	sub_831485A8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82d90268
	if (!cr6.eq) goto loc_82D90268;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// li r5,84
	ctx.r5.s64 = 84;
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
	// addi r27,r27,84
	ctx.r27.s64 = ctx.r27.s64 + 84;
	// bl 0x831ce980
	ctx.lr = 0x82D9023C;
	sub_831CE980(ctx, base);
	// li r5,84
	ctx.r5.s64 = 84;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831ce980
	ctx.lr = 0x82D9024C;
	sub_831CE980(ctx, base);
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// li r5,84
	ctx.r5.s64 = 84;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831ce980
	ctx.lr = 0x82D9025C;
	sub_831CE980(ctx, base);
loc_82D9025C:
	// addi r29,r29,84
	ctx.r29.s64 = ctx.r29.s64 + 84;
	// cmplw cr6,r29,r25
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r25.u32, xer);
	// blt cr6,0x82d901f4
	if (cr6.lt) goto loc_82D901F4;
loc_82D90268:
	// cmplw cr6,r28,r26
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r26.u32, xer);
	// ble cr6,0x82d902f0
	if (!cr6.gt) goto loc_82D902F0;
	// addi r30,r28,-84
	ctx.r30.s64 = ctx.r28.s64 + -84;
loc_82D90274:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831485a8
	ctx.lr = 0x82D90280;
	sub_831485A8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82d902d8
	if (!cr6.eq) goto loc_82D902D8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831485a8
	ctx.lr = 0x82D90298;
	sub_831485A8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82d902ec
	if (!cr6.eq) goto loc_82D902EC;
	// addi r31,r31,-84
	ctx.r31.s64 = ctx.r31.s64 + -84;
	// addi r3,r1,560
	ctx.r3.s64 = ctx.r1.s64 + 560;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r5,84
	ctx.r5.s64 = 84;
	// bl 0x831ce980
	ctx.lr = 0x82D902B8;
	sub_831CE980(ctx, base);
	// li r5,84
	ctx.r5.s64 = 84;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831ce980
	ctx.lr = 0x82D902C8;
	sub_831CE980(ctx, base);
	// addi r4,r1,560
	ctx.r4.s64 = ctx.r1.s64 + 560;
	// li r5,84
	ctx.r5.s64 = 84;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831ce980
	ctx.lr = 0x82D902D8;
	sub_831CE980(ctx, base);
loc_82D902D8:
	// addi r11,r28,-84
	ctx.r11.s64 = ctx.r28.s64 + -84;
	// addi r30,r30,-84
	ctx.r30.s64 = ctx.r30.s64 + -84;
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
	// cmplw cr6,r26,r11
	cr6.compare<uint32_t>(ctx.r26.u32, ctx.r11.u32, xer);
	// blt cr6,0x82d90274
	if (cr6.lt) goto loc_82D90274;
loc_82D902EC:
	// cmplw cr6,r28,r26
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r26.u32, xer);
loc_82D902F0:
	// bne cr6,0x82d9037c
	if (!cr6.eq) goto loc_82D9037C;
	// cmplw cr6,r29,r25
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r25.u32, xer);
	// beq cr6,0x82d90440
	if (cr6.eq) goto loc_82D90440;
	// cmplw cr6,r27,r29
	cr6.compare<uint32_t>(ctx.r27.u32, ctx.r29.u32, xer);
	// beq cr6,0x82d90334
	if (cr6.eq) goto loc_82D90334;
	// addi r3,r1,368
	ctx.r3.s64 = ctx.r1.s64 + 368;
	// li r5,84
	ctx.r5.s64 = 84;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x831ce980
	ctx.lr = 0x82D90314;
	sub_831CE980(ctx, base);
	// li r5,84
	ctx.r5.s64 = 84;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831ce980
	ctx.lr = 0x82D90324;
	sub_831CE980(ctx, base);
	// addi r4,r1,368
	ctx.r4.s64 = ctx.r1.s64 + 368;
	// li r5,84
	ctx.r5.s64 = 84;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x831ce980
	ctx.lr = 0x82D90334;
	sub_831CE980(ctx, base);
loc_82D90334:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r5,84
	ctx.r5.s64 = 84;
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
	// mr r23,r29
	ctx.r23.u64 = ctx.r29.u64;
	// addi r27,r27,84
	ctx.r27.s64 = ctx.r27.s64 + 84;
	// addi r31,r31,84
	ctx.r31.s64 = ctx.r31.s64 + 84;
	// addi r29,r29,84
	ctx.r29.s64 = ctx.r29.s64 + 84;
	// bl 0x831ce980
	ctx.lr = 0x82D90358;
	sub_831CE980(ctx, base);
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// li r5,84
	ctx.r5.s64 = 84;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831ce980
	ctx.lr = 0x82D90368;
	sub_831CE980(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r5,84
	ctx.r5.s64 = 84;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x831ce980
	ctx.lr = 0x82D90378;
	sub_831CE980(ctx, base);
	// b 0x82d901ec
	goto loc_82D901EC;
loc_82D9037C:
	// cmplw cr6,r29,r25
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r25.u32, xer);
	// bne cr6,0x82d90400
	if (!cr6.eq) goto loc_82D90400;
	// addi r11,r28,-84
	ctx.r11.s64 = ctx.r28.s64 + -84;
	// addi r31,r31,-84
	ctx.r31.s64 = ctx.r31.s64 + -84;
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
	// cmplw cr6,r11,r31
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, xer);
	// beq cr6,0x82d903c8
	if (cr6.eq) goto loc_82D903C8;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// li r5,84
	ctx.r5.s64 = 84;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// bl 0x831ce980
	ctx.lr = 0x82D903A8;
	sub_831CE980(ctx, base);
	// li r5,84
	ctx.r5.s64 = 84;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x831ce980
	ctx.lr = 0x82D903B8;
	sub_831CE980(ctx, base);
	// addi r4,r1,272
	ctx.r4.s64 = ctx.r1.s64 + 272;
	// li r5,84
	ctx.r5.s64 = 84;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831ce980
	ctx.lr = 0x82D903C8;
	sub_831CE980(ctx, base);
loc_82D903C8:
	// addi r3,r1,464
	ctx.r3.s64 = ctx.r1.s64 + 464;
	// li r5,84
	ctx.r5.s64 = 84;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r27,r27,-84
	ctx.r27.s64 = ctx.r27.s64 + -84;
	// bl 0x831ce980
	ctx.lr = 0x82D903DC;
	sub_831CE980(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r5,84
	ctx.r5.s64 = 84;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831ce980
	ctx.lr = 0x82D903EC;
	sub_831CE980(ctx, base);
	// addi r4,r1,464
	ctx.r4.s64 = ctx.r1.s64 + 464;
	// li r5,84
	ctx.r5.s64 = 84;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x831ce980
	ctx.lr = 0x82D903FC;
	sub_831CE980(ctx, base);
	// b 0x82d901ec
	goto loc_82D901EC;
loc_82D90400:
	// addi r30,r28,-84
	ctx.r30.s64 = ctx.r28.s64 + -84;
	// addi r3,r1,656
	ctx.r3.s64 = ctx.r1.s64 + 656;
	// li r5,84
	ctx.r5.s64 = 84;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
	// bl 0x831ce980
	ctx.lr = 0x82D90418;
	sub_831CE980(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r5,84
	ctx.r5.s64 = 84;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831ce980
	ctx.lr = 0x82D90428;
	sub_831CE980(ctx, base);
	// addi r4,r1,656
	ctx.r4.s64 = ctx.r1.s64 + 656;
	// li r5,84
	ctx.r5.s64 = 84;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831ce980
	ctx.lr = 0x82D90438;
	sub_831CE980(ctx, base);
	// addi r29,r29,84
	ctx.r29.s64 = ctx.r29.s64 + 84;
	// b 0x82d901ec
	goto loc_82D901EC;
loc_82D90440:
	// stw r31,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r31.u32);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// stw r27,4(r24)
	PPC_STORE_U32(ctx.r24.u32 + 4, ctx.r27.u32);
	// addi r1,r1,832
	ctx.r1.s64 = ctx.r1.s64 + 832;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D90454"))) PPC_WEAK_FUNC(sub_82D90454);
PPC_FUNC_IMPL(__imp__sub_82D90454) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D90458"))) PPC_WEAK_FUNC(sub_82D90458);
PPC_FUNC_IMPL(__imp__sub_82D90458) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82D90460;
	__savegprlr_28(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r28,84
	ctx.r28.s64 = 84;
	// subf r29,r3,r4
	ctx.r29.s64 = ctx.r4.s64 - ctx.r3.s64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// divw r11,r29,r28
	ctx.r11.s32 = PPCDivide(ctx.r29.s32, ctx.r28.s32);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// ble cr6,0x82d904d4
	if (!cr6.gt) goto loc_82D904D4;
	// addi r31,r4,-84
	ctx.r31.s64 = ctx.r4.s64 + -84;
loc_82D90480:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r5,84
	ctx.r5.s64 = 84;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x831ce980
	ctx.lr = 0x82D90490;
	sub_831CE980(ctx, base);
	// li r5,84
	ctx.r5.s64 = 84;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831ce980
	ctx.lr = 0x82D904A0;
	sub_831CE980(ctx, base);
	// addi r11,r29,-84
	ctx.r11.s64 = ctx.r29.s64 + -84;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// divw r5,r11,r28
	ctx.r5.s32 = PPCDivide(ctx.r11.s32, ctx.r28.s32);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d8ca30
	ctx.lr = 0x82D904B8;
	sub_82D8CA30(ctx, base);
	// addi r31,r31,-84
	ctx.r31.s64 = ctx.r31.s64 + -84;
	// subf r11,r30,r31
	ctx.r11.s64 = ctx.r31.s64 - ctx.r30.s64;
	// addi r11,r11,84
	ctx.r11.s64 = ctx.r11.s64 + 84;
	// divw r10,r11,r28
	ctx.r10.s32 = PPCDivide(ctx.r11.s32, ctx.r28.s32);
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// cmpwi cr6,r10,1
	cr6.compare<int32_t>(ctx.r10.s32, 1, xer);
	// bgt cr6,0x82d90480
	if (cr6.gt) goto loc_82D90480;
loc_82D904D4:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D904DC"))) PPC_WEAK_FUNC(sub_82D904DC);
PPC_FUNC_IMPL(__imp__sub_82D904DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D904E0"))) PPC_WEAK_FUNC(sub_82D904E0);
PPC_FUNC_IMPL(__imp__sub_82D904E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82D904E8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r27,15
	ctx.r27.s64 = 15;
	// li r28,-1
	ctx.r28.s64 = -1;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// stw r27,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r27.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r29,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r29.u32);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// stb r29,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r29.u8);
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
	// bl 0x82420558
	ctx.lr = 0x82D90528;
	sub_82420558(ctx, base);
	// stw r27,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r27.u32);
	// stw r29,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r29.u32);
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// stb r29,32(r31)
	PPC_STORE_U8(ctx.r31.u32 + 32, ctx.r29.u8);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r30,32
	ctx.r4.s64 = ctx.r30.s64 + 32;
	// bl 0x82420558
	ctx.lr = 0x82D90548;
	sub_82420558(ctx, base);
	// stw r27,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r27.u32);
	// stw r29,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r29.u32);
	// addi r3,r31,60
	ctx.r3.s64 = ctx.r31.s64 + 60;
	// stb r29,60(r31)
	PPC_STORE_U8(ctx.r31.u32 + 60, ctx.r29.u8);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r30,60
	ctx.r4.s64 = ctx.r30.s64 + 60;
	// bl 0x82420558
	ctx.lr = 0x82D90568;
	sub_82420558(ctx, base);
	// lwz r10,88(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 88);
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r30,96
	ctx.r4.s64 = ctx.r30.s64 + 96;
	// stw r10,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r10.u32);
	// lwz r9,92(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 92);
	// stw r9,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r9.u32);
	// stw r27,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r27.u32);
	// stw r29,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r29.u32);
	// stb r29,96(r31)
	PPC_STORE_U8(ctx.r31.u32 + 96, ctx.r29.u8);
	// bl 0x82420558
	ctx.lr = 0x82D90598;
	sub_82420558(ctx, base);
	// stw r29,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r29.u32);
	// stw r29,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r29.u32);
	// addi r27,r31,128
	ctx.r27.s64 = ctx.r31.s64 + 128;
	// std r29,136(r31)
	PPC_STORE_U64(ctx.r31.u32 + 136, ctx.r29.u64);
	// addi r28,r30,128
	ctx.r28.s64 = ctx.r30.s64 + 128;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x824baf50
	ctx.lr = 0x82D905B8;
	sub_824BAF50(ctx, base);
	// stw r29,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r29.u32);
	// stw r29,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r29.u32);
	// addi r3,r27,16
	ctx.r3.s64 = ctx.r27.s64 + 16;
	// std r29,152(r31)
	PPC_STORE_U64(ctx.r31.u32 + 152, ctx.r29.u64);
	// addi r4,r28,16
	ctx.r4.s64 = ctx.r28.s64 + 16;
	// bl 0x824baf50
	ctx.lr = 0x82D905D0;
	sub_824BAF50(ctx, base);
	// lwz r8,160(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 160);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r8,160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 160, ctx.r8.u32);
	// lwz r7,164(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 164);
	// stw r7,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r7.u32);
	// lwz r6,168(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 168);
	// stw r6,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r6.u32);
	// lwz r5,172(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 172);
	// stw r5,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r5.u32);
	// lwz r4,176(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 176);
	// stw r4,176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 176, ctx.r4.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D90604"))) PPC_WEAK_FUNC(sub_82D90604);
PPC_FUNC_IMPL(__imp__sub_82D90604) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D90608"))) PPC_WEAK_FUNC(sub_82D90608);
PPC_FUNC_IMPL(__imp__sub_82D90608) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdacc
	ctx.lr = 0x82D90610;
	__savegprlr_21(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// bl 0x82da0a90
	ctx.lr = 0x82D90620;
	sub_82DA0A90(ctx, base);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r3,r28,8
	ctx.r3.s64 = ctx.r28.s64 + 8;
	// stw r11,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r11.u32);
	// lwz r10,4(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// stw r10,4(r25)
	PPC_STORE_U32(ctx.r25.u32 + 4, ctx.r10.u32);
	// bl 0x82d8d6f8
	ctx.lr = 0x82D90638;
	sub_82D8D6F8(ctx, base);
	// stw r3,8(r25)
	PPC_STORE_U32(ctx.r25.u32 + 8, ctx.r3.u32);
	// lwz r10,48(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 48);
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r9,40(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 40);
	// mulli r11,r9,28
	ctx.r11.s64 = ctx.r9.s64 * 28;
	// extsw r31,r10
	ctx.r31.s64 = ctx.r10.s32;
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r29,r28,40
	ctx.r29.s64 = ctx.r28.s64 + 40;
	// mr r23,r30
	ctx.r23.u64 = ctx.r30.u64;
	// li r21,1
	ctx.r21.s64 = 1;
	// cmplw cr6,r31,r8
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r8.u32, xer);
	// beq cr6,0x82d907a4
	if (cr6.eq) goto loc_82D907A4;
	// addi r27,r25,12
	ctx.r27.s64 = ctx.r25.s64 + 12;
	// li r26,15
	ctx.r26.s64 = 15;
	// li r24,-1
	ctx.r24.s64 = -1;
	// li r22,2
	ctx.r22.s64 = 2;
loc_82D90678:
	// stw r26,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r26.u32);
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r30,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r30.u8);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82420558
	ctx.lr = 0x82D90698;
	sub_82420558(ctx, base);
	// stw r30,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r30.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x835fc8d8
	ctx.lr = 0x82D906A4;
	sub_835FC8D8(ctx, base);
	// bl 0x8252e3c0
	ctx.lr = 0x82D906A8;
	sub_8252E3C0(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82D906B0:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82d906b0
	if (!cr6.eq) goto loc_82D906B0;
	// subf r11,r6,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r6.s64;
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rotlwi r7,r11,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x827a8810
	ctx.lr = 0x82D906DC;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82d906ec
	if (!cr6.eq) goto loc_82D906EC;
	// stw r21,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r21.u32);
	// b 0x82d90738
	goto loc_82D90738;
loc_82D906EC:
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x835fc8d8
	ctx.lr = 0x82D906F4;
	sub_835FC8D8(ctx, base);
	// bl 0x8252e3c0
	ctx.lr = 0x82D906F8;
	sub_8252E3C0(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82D90700:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82d90700
	if (!cr6.eq) goto loc_82D90700;
	// subf r11,r6,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r6.s64;
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rotlwi r7,r11,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x827a8810
	ctx.lr = 0x82D9072C;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82d90738
	if (!cr6.eq) goto loc_82D90738;
	// stw r22,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r22.u32);
loc_82D90738:
	// addi r23,r23,1
	ctx.r23.s64 = ctx.r23.s64 + 1;
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// cmplwi cr6,r23,13
	cr6.compare<uint32_t>(ctx.r23.u32, 13, xer);
	// bge cr6,0x82d90788
	if (!cr6.lt) goto loc_82D90788;
	// addi r31,r31,28
	ctx.r31.s64 = ctx.r31.s64 + 28;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82d90760
	if (cr6.lt) goto loc_82D90760;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8386d088
	ctx.lr = 0x82D90760;
	sub_8386D088(ctx, base);
loc_82D90760:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r10,8(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// mulli r11,r11,28
	ctx.r11.s64 = ctx.r11.s64 * 28;
	// stw r26,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r26.u32);
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// stb r30,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r30.u8);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplw cr6,r31,r10
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, xer);
	// bne cr6,0x82d90678
	if (!cr6.eq) goto loc_82D90678;
	// b 0x82d907a4
	goto loc_82D907A4;
loc_82D90788:
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82d90798
	if (cr6.lt) goto loc_82D90798;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8386d088
	ctx.lr = 0x82D90798;
	sub_8386D088(ctx, base);
loc_82D90798:
	// stw r26,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r26.u32);
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// stb r30,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r30.u8);
loc_82D907A4:
	// stw r30,64(r25)
	PPC_STORE_U32(ctx.r25.u32 + 64, ctx.r30.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x835fbc98
	ctx.lr = 0x82D907B0;
	sub_835FBC98(ctx, base);
	// bl 0x8252e3c0
	ctx.lr = 0x82D907B4;
	sub_8252E3C0(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r3,r28,56
	ctx.r3.s64 = ctx.r28.s64 + 56;
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
loc_82D907C0:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82d907c0
	if (!cr6.eq) goto loc_82D907C0;
	// subf r11,r6,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r6.s64;
	// lwz r5,16(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r7,r11,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x827a8810
	ctx.lr = 0x82D907E8;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82d907f4
	if (!cr6.eq) goto loc_82D907F4;
	// stw r21,64(r25)
	PPC_STORE_U32(ctx.r25.u32 + 64, ctx.r21.u32);
loc_82D907F4:
	// lwz r11,84(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 84);
	// addi r10,r28,88
	ctx.r10.s64 = ctx.r28.s64 + 88;
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// stb r11,68(r25)
	PPC_STORE_U8(ctx.r25.u32 + 68, ctx.r11.u8);
	// lwz r7,96(r28)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r28.u32 + 96);
	// lwz r6,88(r28)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r28.u32 + 88);
	// rlwinm r8,r6,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// extsw r11,r7
	ctx.r11.s64 = ctx.r7.s32;
	// add r5,r8,r7
	ctx.r5.u64 = ctx.r8.u64 + ctx.r7.u64;
	// cmplw cr6,r11,r5
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, xer);
	// beq cr6,0x82d90854
	if (cr6.eq) goto loc_82D90854;
	// addi r6,r25,69
	ctx.r6.s64 = ctx.r25.s64 + 69;
loc_82D90824:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stbx r8,r6,r9
	PPC_STORE_U8(ctx.r6.u32 + ctx.r9.u32, ctx.r8.u8);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmplwi cr6,r9,6
	cr6.compare<uint32_t>(ctx.r9.u32, 6, xer);
	// bge cr6,0x82d90854
	if (!cr6.lt) goto loc_82D90854;
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r7,8(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r8,r7
	ctx.r7.u64 = ctx.r8.u64 + ctx.r7.u64;
	// cmplw cr6,r11,r7
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, xer);
	// bne cr6,0x82d90824
	if (!cr6.eq) goto loc_82D90824;
loc_82D90854:
	// addi r3,r28,104
	ctx.r3.s64 = ctx.r28.s64 + 104;
	// bl 0x82d8dc20
	ctx.lr = 0x82D9085C;
	sub_82D8DC20(ctx, base);
	// stw r3,76(r25)
	PPC_STORE_U32(ctx.r25.u32 + 76, ctx.r3.u32);
	// lwz r11,132(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 132);
	// sth r11,80(r25)
	PPC_STORE_U16(ctx.r25.u32 + 80, ctx.r11.u16);
	// lwz r9,136(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 136);
	// clrlwi r8,r9,14
	ctx.r8.u64 = ctx.r9.u32 & 0x3FFFF;
	// stw r8,84(r25)
	PPC_STORE_U32(ctx.r25.u32 + 84, ctx.r8.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb1c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D9087C"))) PPC_WEAK_FUNC(sub_82D9087C);
PPC_FUNC_IMPL(__imp__sub_82D9087C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D90880"))) PPC_WEAK_FUNC(sub_82D90880);
PPC_FUNC_IMPL(__imp__sub_82D90880) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// b 0x82420558
	sub_82420558(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D90894"))) PPC_WEAK_FUNC(sub_82D90894);
PPC_FUNC_IMPL(__imp__sub_82D90894) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D90898"))) PPC_WEAK_FUNC(sub_82D90898);
PPC_FUNC_IMPL(__imp__sub_82D90898) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82D908A0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r29,15
	ctx.r29.s64 = 15;
	// stw r30,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r30.u32);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// stw r29,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r29.u32);
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// stw r30,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r30.u32);
	// addi r28,r11,27936
	ctx.r28.s64 = ctx.r11.s64 + 27936;
	// stb r30,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r30.u8);
	// li r5,12
	ctx.r5.s64 = 12;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x824208c8
	ctx.lr = 0x82D908D8;
	sub_824208C8(ctx, base);
	// stw r29,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r29.u32);
	// stw r30,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r30.u32);
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// stb r30,32(r31)
	PPC_STORE_U8(ctx.r31.u32 + 32, ctx.r30.u8);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x824208c8
	ctx.lr = 0x82D908F4;
	sub_824208C8(ctx, base);
	// stw r29,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r29.u32);
	// stw r30,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r30.u32);
	// addi r3,r31,60
	ctx.r3.s64 = ctx.r31.s64 + 60;
	// stb r30,60(r31)
	PPC_STORE_U8(ctx.r31.u32 + 60, ctx.r30.u8);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x824208c8
	ctx.lr = 0x82D90910;
	sub_824208C8(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r30,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r30.u32);
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// stw r10,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r10.u32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stw r29,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r29.u32);
	// li r5,12
	ctx.r5.s64 = 12;
	// stw r30,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r30.u32);
	// stb r30,96(r31)
	PPC_STORE_U8(ctx.r31.u32 + 96, ctx.r30.u8);
	// bl 0x824208c8
	ctx.lr = 0x82D90938;
	sub_824208C8(ctx, base);
	// stw r30,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r30.u32);
	// stw r30,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r30.u32);
	// addi r29,r31,128
	ctx.r29.s64 = ctx.r31.s64 + 128;
	// std r30,136(r31)
	PPC_STORE_U64(ctx.r31.u32 + 136, ctx.r30.u64);
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82423930
	ctx.lr = 0x82D90954;
	sub_82423930(ctx, base);
	// stw r30,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r30.u32);
	// stw r30,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r30.u32);
	// addi r3,r29,16
	ctx.r3.s64 = ctx.r29.s64 + 16;
	// std r30,152(r31)
	PPC_STORE_U64(ctx.r31.u32 + 152, ctx.r30.u64);
	// li r4,5
	ctx.r4.s64 = 5;
	// bl 0x82423930
	ctx.lr = 0x82D9096C;
	sub_82423930(ctx, base);
	// stw r30,160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 160, ctx.r30.u32);
	// stw r30,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r30.u32);
	// stw r30,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r30.u32);
	// stw r30,176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 176, ctx.r30.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D9098C"))) PPC_WEAK_FUNC(sub_82D9098C);
PPC_FUNC_IMPL(__imp__sub_82D9098C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D90990"))) PPC_WEAK_FUNC(sub_82D90990);
PPC_FUNC_IMPL(__imp__sub_82D90990) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82D90998;
	__savegprlr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
	// li r29,15
	ctx.r29.s64 = 15;
loc_82D909AC:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8241c348
	ctx.lr = 0x82D909B4;
	sub_8241C348(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// stb r30,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r30.u8);
loc_82D909C8:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82d909c8
	if (!cr6.eq) goto loc_82D909C8;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x82D909EC;
	sub_824208C8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x835f9ed8
	ctx.lr = 0x82D909F4;
	sub_835F9ED8(ctx, base);
	// bl 0x8252e3c0
	ctx.lr = 0x82D909F8;
	sub_8252E3C0(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82D90A00:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82d90a00
	if (!cr6.eq) goto loc_82D90A00;
	// subf r11,r6,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r6.s64;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// rotlwi r7,r11,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x827a8810
	ctx.lr = 0x82D90A2C;
	sub_827A8810(ctx, base);
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82d90a6c
	if (cr6.eq) goto loc_82D90A6C;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82d90a48
	if (cr6.lt) goto loc_82D90A48;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8386d088
	ctx.lr = 0x82D90A48;
	sub_8386D088(ctx, base);
loc_82D90A48:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// cmpwi cr6,r31,84
	cr6.compare<int32_t>(ctx.r31.s32, 84, xer);
	// stb r30,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r30.u8);
	// blt cr6,0x82d909ac
	if (cr6.lt) goto loc_82D909AC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82D90A6C:
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82d90a7c
	if (cr6.lt) goto loc_82D90A7C;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8386d088
	ctx.lr = 0x82D90A7C;
	sub_8386D088(ctx, base);
loc_82D90A7C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D90A88"))) PPC_WEAK_FUNC(sub_82D90A88);
PPC_FUNC_IMPL(__imp__sub_82D90A88) {
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x835f9ed8
	ctx.lr = 0x82D90AA4;
	sub_835F9ED8(ctx, base);
	// bl 0x8252e3c0
	ctx.lr = 0x82D90AA8;
	sub_8252E3C0(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r11,15
	ctx.r11.s64 = 15;
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stb r10,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r10.u8);
loc_82D90AC4:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82d90ac4
	if (!cr6.eq) goto loc_82D90AC4;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x82D90AE8;
	sub_824208C8(ctx, base);
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

__attribute__((alias("__imp__sub_82D90B00"))) PPC_WEAK_FUNC(sub_82D90B00);
PPC_FUNC_IMPL(__imp__sub_82D90B00) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82D90B08;
	__savegprlr_27(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x82d90898
	ctx.lr = 0x82D90B18;
	sub_82D90898(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r4,r29,4
	ctx.r4.s64 = ctx.r29.s64 + 4;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r10,24(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82d90b34
	if (cr6.lt) goto loc_82D90B34;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_82D90B34:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82D90B38:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82d90b38
	if (!cr6.eq) goto loc_82D90B38;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x82D90B5C;
	sub_824208C8(ctx, base);
	// lwz r10,52(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 52);
	// addi r4,r29,32
	ctx.r4.s64 = ctx.r29.s64 + 32;
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82d90b70
	if (cr6.lt) goto loc_82D90B70;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_82D90B70:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82D90B74:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82d90b74
	if (!cr6.eq) goto loc_82D90B74;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x82D90B98;
	sub_824208C8(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,60(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 60);
	// bl 0x82d90a88
	ctx.lr = 0x82D90BA4;
	sub_82D90A88(ctx, base);
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82d90bb8
	if (cr6.lt) goto loc_82D90BB8;
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82d90bbc
	goto loc_82D90BBC;
loc_82D90BB8:
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_82D90BBC:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82D90BC0:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82d90bc0
	if (!cr6.eq) goto loc_82D90BC0;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r31,60
	ctx.r3.s64 = ctx.r31.s64 + 60;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x82D90BE4;
	sub_824208C8(ctx, base);
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82d90bf8
	if (cr6.lt) goto loc_82D90BF8;
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x8386d088
	ctx.lr = 0x82D90BF8;
	sub_8386D088(ctx, base);
loc_82D90BF8:
	// lwz r11,88(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 88);
	// li r30,0
	ctx.r30.s64 = 0;
	// li r10,15
	ctx.r10.s64 = 15;
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r30.u32);
	// mr r27,r30
	ctx.r27.u64 = ctx.r30.u64;
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// stb r30,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r30.u8);
	// stw r11,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r11.u32);
	// lwz r9,92(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 92);
	// stw r9,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r9.u32);
	// lwz r8,96(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 96);
	// stw r8,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r8.u32);
	// lwz r7,100(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 100);
	// stw r7,176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 176, ctx.r7.u32);
	// lwz r11,72(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 72);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x82d90c80
	if (!cr6.eq) goto loc_82D90C80;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x835fc7f8
	ctx.lr = 0x82D90C44;
	sub_835FC7F8(ctx, base);
	// bl 0x8252e3c0
	ctx.lr = 0x82D90C48;
	sub_8252E3C0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82D90C50:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82d90c50
	if (!cr6.eq) goto loc_82D90C50;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x82D90C74;
	sub_824208C8(ctx, base);
	// li r27,1
	ctx.r27.s64 = 1;
	// stw r30,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r30.u32);
	// b 0x82d90d0c
	goto loc_82D90D0C;
loc_82D90C80:
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bne cr6,0x82d90ccc
	if (!cr6.eq) goto loc_82D90CCC;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x835fc7f8
	ctx.lr = 0x82D90C90;
	sub_835FC7F8(ctx, base);
	// bl 0x8252e3c0
	ctx.lr = 0x82D90C94;
	sub_8252E3C0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82D90C9C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82d90c9c
	if (!cr6.eq) goto loc_82D90C9C;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x82D90CC0;
	sub_824208C8(ctx, base);
	// li r27,1
	ctx.r27.s64 = 1;
	// stw r30,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r30.u32);
	// b 0x82d90d0c
	goto loc_82D90D0C;
loc_82D90CCC:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x835fc7f8
	ctx.lr = 0x82D90CD4;
	sub_835FC7F8(ctx, base);
	// bl 0x8252e3c0
	ctx.lr = 0x82D90CD8;
	sub_8252E3C0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82D90CE0:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82d90ce0
	if (!cr6.eq) goto loc_82D90CE0;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x82D90D04;
	sub_824208C8(ctx, base);
	// lwz r10,64(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 64);
	// stw r10,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r10.u32);
loc_82D90D0C:
	// addi r28,r31,128
	ctx.r28.s64 = ctx.r31.s64 + 128;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x824238b8
	ctx.lr = 0x82D90D18;
	sub_824238B8(ctx, base);
	// bl 0x82d86078
	ctx.lr = 0x82D90D1C;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d90d68
	if (cr6.eq) goto loc_82D90D68;
	// clrlwi r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d90d68
	if (cr6.eq) goto loc_82D90D68;
	// lwz r3,116(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// bl 0x8307e040
	ctx.lr = 0x82D90D38;
	sub_8307E040(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
loc_82D90D3C:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82da51b0
	ctx.lr = 0x82D90D4C;
	sub_82DA51B0(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82437de0
	ctx.lr = 0x82D90D5C;
	sub_82437DE0(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplwi cr6,r30,5
	cr6.compare<uint32_t>(ctx.r30.u32, 5, xer);
	// blt cr6,0x82d90d3c
	if (cr6.lt) goto loc_82D90D3C;
loc_82D90D68:
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r11.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D90D7C"))) PPC_WEAK_FUNC(sub_82D90D7C);
PPC_FUNC_IMPL(__imp__sub_82D90D7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D90D80"))) PPC_WEAK_FUNC(sub_82D90D80);
PPC_FUNC_IMPL(__imp__sub_82D90D80) {
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
	// bl 0x82da0b78
	ctx.lr = 0x82D90DA0;
	sub_82DA0B78(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r4,r30,8
	ctx.r4.s64 = ctx.r30.s64 + 8;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82d90608
	ctx.lr = 0x82D90DB4;
	sub_82D90608(ctx, base);
	// lwz r10,152(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 152);
	// stw r10,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_82D90DD4"))) PPC_WEAK_FUNC(sub_82D90DD4);
PPC_FUNC_IMPL(__imp__sub_82D90DD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D90DD8"))) PPC_WEAK_FUNC(sub_82D90DD8);
PPC_FUNC_IMPL(__imp__sub_82D90DD8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdac8
	ctx.lr = 0x82D90DE0;
	__savegprlr_20(ctx, base);
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// mr r20,r4
	ctx.r20.u64 = ctx.r4.u64;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// lwz r3,8(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// cmpwi cr6,r3,13
	cr6.compare<int32_t>(ctx.r3.s32, 13, xer);
	// bge cr6,0x82d90e3c
	if (!cr6.lt) goto loc_82D90E3C;
	// bl 0x835fbad8
	ctx.lr = 0x82D90E0C;
	sub_835FBAD8(ctx, base);
	// bl 0x8252e3c0
	ctx.lr = 0x82D90E10;
	sub_8252E3C0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82D90E18:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82d90e18
	if (!cr6.eq) goto loc_82D90E18;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r21,8
	ctx.r3.s64 = ctx.r21.s64 + 8;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x82D90E3C;
	sub_824208C8(ctx, base);
loc_82D90E3C:
	// addi r27,r21,40
	ctx.r27.s64 = ctx.r21.s64 + 40;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82d8d2e8
	ctx.lr = 0x82D90E48;
	sub_82D8D2E8(ctx, base);
	// addi r31,r20,12
	ctx.r31.s64 = ctx.r20.s64 + 12;
	// li r28,13
	ctx.r28.s64 = 13;
	// li r30,15
	ctx.r30.s64 = 15;
	// li r29,0
	ctx.r29.s64 = 0;
loc_82D90E58:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x835fc8d8
	ctx.lr = 0x82D90E60;
	sub_835FC8D8(ctx, base);
	// bl 0x8252e3c0
	ctx.lr = 0x82D90E64;
	sub_8252E3C0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r30,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r30.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r29,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r29.u32);
	// stb r29,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, ctx.r29.u8);
loc_82D90E78:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82d90e78
	if (!cr6.eq) goto loc_82D90E78;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x82D90E9C;
	sub_824208C8(ctx, base);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82d8ffa0
	ctx.lr = 0x82D90EA8;
	sub_82D8FFA0(ctx, base);
	// lwz r10,180(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82d90ebc
	if (cr6.lt) goto loc_82D90EBC;
	// lwz r3,160(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// bl 0x8386d088
	ctx.lr = 0x82D90EBC;
	sub_8386D088(ctx, base);
loc_82D90EBC:
	// addic. r28,r28,-1
	xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	cr0.compare<int32_t>(ctx.r28.s32, 0, xer);
	// stw r30,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r30.u32);
	// stw r29,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r29.u32);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// stb r29,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, ctx.r29.u8);
	// bne 0x82d90e58
	if (!cr0.eq) goto loc_82D90E58;
	// lwz r11,64(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 64);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x82d90f08
	if (!cr6.eq) goto loc_82D90F08;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x835fbc98
	ctx.lr = 0x82D90EE8;
	sub_835FBC98(ctx, base);
	// bl 0x8252e3c0
	ctx.lr = 0x82D90EEC;
	sub_8252E3C0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82D90EF4:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82d90ef4
	if (!cr6.eq) goto loc_82D90EF4;
	// b 0x82d90f2c
	goto loc_82D90F2C;
loc_82D90F08:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x835fbc98
	ctx.lr = 0x82D90F10;
	sub_835FBC98(ctx, base);
	// bl 0x8252e3c0
	ctx.lr = 0x82D90F14;
	sub_8252E3C0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82D90F1C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82d90f1c
	if (!cr6.eq) goto loc_82D90F1C;
loc_82D90F2C:
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r21,56
	ctx.r3.s64 = ctx.r21.s64 + 56;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x82D90F40;
	sub_824208C8(ctx, base);
	// lbz r10,68(r20)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r20.u32 + 68);
	// addi r31,r21,88
	ctx.r31.s64 = ctx.r21.s64 + 88;
	// lis r11,-32204
	ctx.r11.s64 = -2110521344;
	// li r27,4
	ctx.r27.s64 = 4;
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// addi r26,r11,26164
	ctx.r26.s64 = ctx.r11.s64 + 26164;
	// addi r30,r31,8
	ctx.r30.s64 = ctx.r31.s64 + 8;
	// stw r27,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r27.u32);
	// addi r28,r31,4
	ctx.r28.s64 = ctx.r31.s64 + 4;
	// stw r26,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r26.u32);
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r10,84(r21)
	PPC_STORE_U32(ctx.r21.u32 + 84, ctx.r10.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r28,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r28.u32);
	// mr r23,r29
	ctx.r23.u64 = ctx.r29.u64;
	// stw r27,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r27.u32);
	// bl 0x8247b7d8
	ctx.lr = 0x82D90F88;
	sub_8247B7D8(ctx, base);
	// lwz r3,96(r21)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r21.u32 + 96);
	// lis r9,11
	ctx.r9.s64 = 720896;
	// stw r29,88(r21)
	PPC_STORE_U32(ctx.r21.u32 + 88, ctx.r29.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// ori r24,r9,1
	ctx.r24.u64 = ctx.r9.u64 | 1;
	// beq cr6,0x82d90fb0
	if (cr6.eq) goto loc_82D90FB0;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// bl 0x8247b268
	ctx.lr = 0x82D90FA8;
	sub_8247B268(ctx, base);
	// stw r29,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r29.u32);
	// stw r29,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r29.u32);
loc_82D90FB0:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r22,r20,69
	ctx.r22.s64 = ctx.r20.s64 + 69;
	// addi r29,r11,8980
	ctx.r29.s64 = ctx.r11.s64 + 8980;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
loc_82D90FC0:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lbzx r25,r22,r23
	ctx.r25.u64 = PPC_LOAD_U8(ctx.r22.u32 + ctx.r23.u32);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x82d91020
	if (cr6.lt) goto loc_82D91020;
	// addi r4,r11,2
	ctx.r4.s64 = ctx.r11.s64 + 2;
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// ble cr6,0x82d91010
	if (!cr6.gt) goto loc_82D91010;
	// stw r30,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r30.u32);
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// stw r31,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r31.u32);
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// stw r28,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r28.u32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stw r27,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r27.u32);
	// stw r27,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r27.u32);
	// stw r26,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r26.u32);
	// bl 0x8247b270
	ctx.lr = 0x82D91008;
	sub_8247B270(ctx, base);
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// b 0x82d91014
	goto loc_82D91014;
loc_82D91010:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82D91014:
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d91044
	if (cr6.eq) goto loc_82D91044;
loc_82D91020:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x82d91038
	if (cr0.eq) goto loc_82D91038;
	// stw r25,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r25.u32);
loc_82D91038:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_82D91044:
	// addi r23,r23,1
	ctx.r23.s64 = ctx.r23.s64 + 1;
	// cmplwi cr6,r23,6
	cr6.compare<uint32_t>(ctx.r23.u32, 6, xer);
	// blt cr6,0x82d90fc0
	if (cr6.lt) goto loc_82D90FC0;
	// lwz r3,76(r20)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r20.u32 + 76);
	// bl 0x835fb8a8
	ctx.lr = 0x82D91058;
	sub_835FB8A8(ctx, base);
	// bl 0x8252e3c0
	ctx.lr = 0x82D9105C;
	sub_8252E3C0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82D91064:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82d91064
	if (!cr6.eq) goto loc_82D91064;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r21,104
	ctx.r3.s64 = ctx.r21.s64 + 104;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x82D91088;
	sub_824208C8(ctx, base);
	// lhz r10,80(r20)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r20.u32 + 80);
	// stw r10,132(r21)
	PPC_STORE_U32(ctx.r21.u32 + 132, ctx.r10.u32);
	// lwz r9,84(r20)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r20.u32 + 84);
	// clrlwi r8,r9,14
	ctx.r8.u64 = ctx.r9.u32 & 0x3FFFF;
	// stw r8,136(r21)
	PPC_STORE_U32(ctx.r21.u32 + 136, ctx.r8.u32);
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x831cdb18
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D910A4"))) PPC_WEAK_FUNC(sub_82D910A4);
PPC_FUNC_IMPL(__imp__sub_82D910A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D910A8"))) PPC_WEAK_FUNC(sub_82D910A8);
PPC_FUNC_IMPL(__imp__sub_82D910A8) {
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
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82da0b18
	ctx.lr = 0x82D910CC;
	sub_82DA0B18(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82d8b380
	ctx.lr = 0x82D910D8;
	sub_82D8B380(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d90dd8
	ctx.lr = 0x82D910E4;
	sub_82D90DD8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83102db0
	ctx.lr = 0x82D910EC;
	sub_83102DB0(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
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

__attribute__((alias("__imp__sub_82D91104"))) PPC_WEAK_FUNC(sub_82D91104);
PPC_FUNC_IMPL(__imp__sub_82D91104) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D91108"))) PPC_WEAK_FUNC(sub_82D91108);
PPC_FUNC_IMPL(__imp__sub_82D91108) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82D91110;
	__savegprlr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
	// li r29,15
	ctx.r29.s64 = 15;
loc_82D91124:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8241c348
	ctx.lr = 0x82D9112C;
	sub_8241C348(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// stb r30,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r30.u8);
loc_82D91140:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82d91140
	if (!cr6.eq) goto loc_82D91140;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x82D91164;
	sub_824208C8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x835fb918
	ctx.lr = 0x82D9116C;
	sub_835FB918(ctx, base);
	// bl 0x8252e3c0
	ctx.lr = 0x82D91170;
	sub_8252E3C0(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82D91178:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82d91178
	if (!cr6.eq) goto loc_82D91178;
	// subf r11,r6,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r6.s64;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// rotlwi r7,r11,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x827a8810
	ctx.lr = 0x82D911A4;
	sub_827A8810(ctx, base);
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82d911e4
	if (cr6.eq) goto loc_82D911E4;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82d911c0
	if (cr6.lt) goto loc_82D911C0;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8386d088
	ctx.lr = 0x82D911C0;
	sub_8386D088(ctx, base);
loc_82D911C0:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// cmpwi cr6,r31,6
	cr6.compare<int32_t>(ctx.r31.s32, 6, xer);
	// stb r30,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r30.u8);
	// blt cr6,0x82d91124
	if (cr6.lt) goto loc_82D91124;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82D911E4:
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82d911f4
	if (cr6.lt) goto loc_82D911F4;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8386d088
	ctx.lr = 0x82D911F4;
	sub_8386D088(ctx, base);
loc_82D911F4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D91200"))) PPC_WEAK_FUNC(sub_82D91200);
PPC_FUNC_IMPL(__imp__sub_82D91200) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82D91208;
	__savegprlr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
	// li r29,15
	ctx.r29.s64 = 15;
loc_82D9121C:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8241c348
	ctx.lr = 0x82D91224;
	sub_8241C348(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// stb r30,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r30.u8);
loc_82D91238:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82d91238
	if (!cr6.eq) goto loc_82D91238;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x82D9125C;
	sub_824208C8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x835fa808
	ctx.lr = 0x82D91264;
	sub_835FA808(ctx, base);
	// bl 0x8252e3c0
	ctx.lr = 0x82D91268;
	sub_8252E3C0(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82D91270:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82d91270
	if (!cr6.eq) goto loc_82D91270;
	// subf r11,r6,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r6.s64;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// rotlwi r7,r11,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x827a8810
	ctx.lr = 0x82D9129C;
	sub_827A8810(ctx, base);
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82d912dc
	if (cr6.eq) goto loc_82D912DC;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82d912b8
	if (cr6.lt) goto loc_82D912B8;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8386d088
	ctx.lr = 0x82D912B8;
	sub_8386D088(ctx, base);
loc_82D912B8:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// cmpwi cr6,r31,6
	cr6.compare<int32_t>(ctx.r31.s32, 6, xer);
	// stb r30,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r30.u8);
	// blt cr6,0x82d9121c
	if (cr6.lt) goto loc_82D9121C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82D912DC:
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82d912ec
	if (cr6.lt) goto loc_82D912EC;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8386d088
	ctx.lr = 0x82D912EC;
	sub_8386D088(ctx, base);
loc_82D912EC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D912F8"))) PPC_WEAK_FUNC(sub_82D912F8);
PPC_FUNC_IMPL(__imp__sub_82D912F8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82D91300;
	__savegprlr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
	// li r29,15
	ctx.r29.s64 = 15;
loc_82D91314:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8241c348
	ctx.lr = 0x82D9131C;
	sub_8241C348(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// stb r30,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r30.u8);
loc_82D91330:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82d91330
	if (!cr6.eq) goto loc_82D91330;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x82D91354;
	sub_824208C8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x835fa648
	ctx.lr = 0x82D9135C;
	sub_835FA648(ctx, base);
	// bl 0x8252e3c0
	ctx.lr = 0x82D91360;
	sub_8252E3C0(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82D91368:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82d91368
	if (!cr6.eq) goto loc_82D91368;
	// subf r11,r6,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r6.s64;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// rotlwi r7,r11,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x827a8810
	ctx.lr = 0x82D91394;
	sub_827A8810(ctx, base);
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82d913d4
	if (cr6.eq) goto loc_82D913D4;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82d913b0
	if (cr6.lt) goto loc_82D913B0;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8386d088
	ctx.lr = 0x82D913B0;
	sub_8386D088(ctx, base);
loc_82D913B0:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// cmpwi cr6,r31,6
	cr6.compare<int32_t>(ctx.r31.s32, 6, xer);
	// stb r30,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r30.u8);
	// blt cr6,0x82d91314
	if (cr6.lt) goto loc_82D91314;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82D913D4:
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82d913e4
	if (cr6.lt) goto loc_82D913E4;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8386d088
	ctx.lr = 0x82D913E4;
	sub_8386D088(ctx, base);
loc_82D913E4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D913F0"))) PPC_WEAK_FUNC(sub_82D913F0);
PPC_FUNC_IMPL(__imp__sub_82D913F0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82D913F8;
	__savegprlr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
	// li r29,15
	ctx.r29.s64 = 15;
loc_82D9140C:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8241c348
	ctx.lr = 0x82D91414;
	sub_8241C348(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// stb r30,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r30.u8);
loc_82D91428:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82d91428
	if (!cr6.eq) goto loc_82D91428;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x82D9144C;
	sub_824208C8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x835faa38
	ctx.lr = 0x82D91454;
	sub_835FAA38(ctx, base);
	// bl 0x8252e3c0
	ctx.lr = 0x82D91458;
	sub_8252E3C0(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82D91460:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82d91460
	if (!cr6.eq) goto loc_82D91460;
	// subf r11,r6,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r6.s64;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// rotlwi r7,r11,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x827a8810
	ctx.lr = 0x82D9148C;
	sub_827A8810(ctx, base);
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82d914cc
	if (cr6.eq) goto loc_82D914CC;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82d914a8
	if (cr6.lt) goto loc_82D914A8;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8386d088
	ctx.lr = 0x82D914A8;
	sub_8386D088(ctx, base);
loc_82D914A8:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// cmpwi cr6,r31,3
	cr6.compare<int32_t>(ctx.r31.s32, 3, xer);
	// stb r30,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r30.u8);
	// blt cr6,0x82d9140c
	if (cr6.lt) goto loc_82D9140C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82D914CC:
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82d914dc
	if (cr6.lt) goto loc_82D914DC;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8386d088
	ctx.lr = 0x82D914DC;
	sub_8386D088(ctx, base);
loc_82D914DC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D914E8"))) PPC_WEAK_FUNC(sub_82D914E8);
PPC_FUNC_IMPL(__imp__sub_82D914E8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82D914F0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,780
	ctx.r11.s64 = 51118080;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// ori r10,r11,12483
	ctx.r10.u64 = ctx.r11.u64 | 12483;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// ble cr6,0x82d91518
	if (!cr6.gt) goto loc_82D91518;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,12056
	ctx.r3.s64 = ctx.r11.s64 + 12056;
	// bl 0x831cc150
	ctx.lr = 0x82D91518;
	sub_831CC150(ctx, base);
loc_82D91518:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r27,84
	ctx.r27.s64 = 84;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r8,r9,r27
	ctx.r8.s32 = PPCDivide(ctx.r9.s32, ctx.r27.s32);
	// cmplw cr6,r8,r28
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r28.u32, xer);
	// bge cr6,0x82d91594
	if (!cr6.lt) goto loc_82D91594;
	// addi r29,r31,12
	ctx.r29.s64 = ctx.r31.s64 + 12;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d8c948
	ctx.lr = 0x82D91544;
	sub_82D8C948(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82d900b8
	ctx.lr = 0x82D9155C;
	sub_82D900B8(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// subf r10,r3,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r3.s64;
	// divw r29,r10,r27
	ctx.r29.s32 = PPCDivide(ctx.r10.s32, ctx.r27.s32);
	// beq cr6,0x82d91578
	if (cr6.eq) goto loc_82D91578;
	// bl 0x82416268
	ctx.lr = 0x82D91578;
	sub_82416268(ctx, base);
loc_82D91578:
	// mulli r10,r28,84
	ctx.r10.s64 = ctx.r28.s64 * 84;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// mulli r11,r29,84
	ctx.r11.s64 = ctx.r29.s64 * 84;
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + ctx.r30.u64;
	// add r9,r11,r30
	ctx.r9.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
loc_82D91594:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D9159C"))) PPC_WEAK_FUNC(sub_82D9159C);
PPC_FUNC_IMPL(__imp__sub_82D9159C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D915A0"))) PPC_WEAK_FUNC(sub_82D915A0);
PPC_FUNC_IMPL(__imp__sub_82D915A0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82D915A8;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r26,84
	ctx.r26.s64 = 84;
	// subf r11,r3,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r3.s64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// divw r11,r11,r26
	ctx.r11.s32 = PPCDivide(ctx.r11.s32, ctx.r26.s32);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// cmpwi cr6,r11,32
	cr6.compare<int32_t>(ctx.r11.s32, 32, xer);
	// ble cr6,0x82d91650
	if (!cr6.gt) goto loc_82D91650;
loc_82D915CC:
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(ctx.r29.s32, 0, xer);
	// ble cr6,0x82d91670
	if (!cr6.gt) goto loc_82D91670;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82d90110
	ctx.lr = 0x82D915E4;
	sub_82D90110(ctx, base);
	// srawi r11,r29,1
	xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r29.s32 >> 1;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// srawi r10,r11,1
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// add r29,r10,r11
	ctx.r29.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r28,84(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r27,80(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// subf r9,r28,r31
	ctx.r9.s64 = ctx.r31.s64 - ctx.r28.s64;
	// subf r8,r30,r27
	ctx.r8.s64 = ctx.r27.s64 - ctx.r30.s64;
	// divw r7,r9,r26
	ctx.r7.s32 = PPCDivide(ctx.r9.s32, ctx.r26.s32);
	// divw r6,r8,r26
	ctx.r6.s32 = PPCDivide(ctx.r8.s32, ctx.r26.s32);
	// cmpw cr6,r6,r7
	cr6.compare<int32_t>(ctx.r6.s32, ctx.r7.s32, xer);
	// bge cr6,0x82d91630
	if (!cr6.lt) goto loc_82D91630;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d915a0
	ctx.lr = 0x82D91628;
	sub_82D915A0(ctx, base);
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
	// b 0x82d91640
	goto loc_82D91640;
loc_82D91630:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d915a0
	ctx.lr = 0x82D9163C;
	sub_82D915A0(ctx, base);
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
loc_82D91640:
	// subf r11,r30,r31
	ctx.r11.s64 = ctx.r31.s64 - ctx.r30.s64;
	// divw r11,r11,r26
	ctx.r11.s32 = PPCDivide(ctx.r11.s32, ctx.r26.s32);
	// cmpwi cr6,r11,32
	cr6.compare<int32_t>(ctx.r11.s32, 32, xer);
	// bgt cr6,0x82d915cc
	if (cr6.gt) goto loc_82D915CC;
loc_82D91650:
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// ble cr6,0x82d91668
	if (!cr6.gt) goto loc_82D91668;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d8fd38
	ctx.lr = 0x82D91668;
	sub_82D8FD38(ctx, base);
loc_82D91668:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_82D91670:
	// cmpwi cr6,r11,32
	cr6.compare<int32_t>(ctx.r11.s32, 32, xer);
	// ble cr6,0x82d91650
	if (!cr6.gt) goto loc_82D91650;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// ble cr6,0x82d91694
	if (!cr6.gt) goto loc_82D91694;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d8d3c0
	ctx.lr = 0x82D91694;
	sub_82D8D3C0(ctx, base);
loc_82D91694:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d90458
	ctx.lr = 0x82D916A0;
	sub_82D90458(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D916A8"))) PPC_WEAK_FUNC(sub_82D916A8);
PPC_FUNC_IMPL(__imp__sub_82D916A8) {
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
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r8,4(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lis r9,0
	ctx.r9.s64 = 0;
	// lwz r7,8(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r6,84
	ctx.r6.s64 = 84;
	// ori r5,r9,65535
	ctx.r5.u64 = ctx.r9.u64 | 65535;
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// li r4,6
	ctx.r4.s64 = 6;
	// stw r6,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r6.u32);
	// stw r5,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r5.u32);
	// addi r3,r30,12
	ctx.r3.s64 = ctx.r30.s64 + 12;
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// stw r4,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r4.u32);
	// stb r11,48(r31)
	PPC_STORE_U8(ctx.r31.u32 + 48, ctx.r11.u8);
	// stb r11,49(r31)
	PPC_STORE_U8(ctx.r31.u32 + 49, ctx.r11.u8);
	// stb r11,50(r31)
	PPC_STORE_U8(ctx.r31.u32 + 50, ctx.r11.u8);
	// stb r11,51(r31)
	PPC_STORE_U8(ctx.r31.u32 + 51, ctx.r11.u8);
	// stb r11,52(r31)
	PPC_STORE_U8(ctx.r31.u32 + 52, ctx.r11.u8);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stw r8,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r8.u32);
	// stw r7,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r7.u32);
	// bl 0x82d90990
	ctx.lr = 0x82D91730;
	sub_82D90990(ctx, base);
	// lwz r11,40(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// lwz r10,44(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// lwz r9,48(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// lwz r8,52(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// lwz r7,56(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// lwz r6,60(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	// lwz r5,120(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 120);
	// stw r3,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
	// addi r3,r30,64
	ctx.r3.s64 = ctx.r30.s64 + 64;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// stw r9,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r9.u32);
	// stw r8,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r8.u32);
	// stw r7,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r7.u32);
	// stw r6,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r6.u32);
	// stw r5,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r5.u32);
	// bl 0x82d91108
	ctx.lr = 0x82D91774;
	sub_82D91108(ctx, base);
	// stw r3,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r3.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x835fcbe8
	ctx.lr = 0x82D91780;
	sub_835FCBE8(ctx, base);
	// bl 0x8252e3c0
	ctx.lr = 0x82D91784;
	sub_8252E3C0(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r3,r30,92
	ctx.r3.s64 = ctx.r30.s64 + 92;
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
loc_82D91790:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82d91790
	if (!cr6.eq) goto loc_82D91790;
	// subf r11,r6,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r6.s64;
	// lwz r5,16(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r7,r11,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x827a8810
	ctx.lr = 0x82D917B8;
	sub_827A8810(ctx, base);
	// addi r10,r3,0
	ctx.r10.s64 = ctx.r3.s64 + 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r8,r9,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// stb r8,48(r31)
	PPC_STORE_U8(ctx.r31.u32 + 48, ctx.r8.u8);
	// bl 0x835fcbe8
	ctx.lr = 0x82D917D0;
	sub_835FCBE8(ctx, base);
	// bl 0x8252e3c0
	ctx.lr = 0x82D917D4;
	sub_8252E3C0(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r3,r30,124
	ctx.r3.s64 = ctx.r30.s64 + 124;
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
loc_82D917E0:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82d917e0
	if (!cr6.eq) goto loc_82D917E0;
	// subf r11,r6,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r6.s64;
	// lwz r5,16(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r7,r11,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x827a8810
	ctx.lr = 0x82D91808;
	sub_827A8810(ctx, base);
	// addi r10,r3,0
	ctx.r10.s64 = ctx.r3.s64 + 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r8,r9,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// stb r8,49(r31)
	PPC_STORE_U8(ctx.r31.u32 + 49, ctx.r8.u8);
	// bl 0x835fcbe8
	ctx.lr = 0x82D91820;
	sub_835FCBE8(ctx, base);
	// bl 0x8252e3c0
	ctx.lr = 0x82D91824;
	sub_8252E3C0(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r3,r30,152
	ctx.r3.s64 = ctx.r30.s64 + 152;
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
loc_82D91830:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82d91830
	if (!cr6.eq) goto loc_82D91830;
	// subf r11,r6,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r6.s64;
	// lwz r5,16(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r7,r11,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x827a8810
	ctx.lr = 0x82D91858;
	sub_827A8810(ctx, base);
	// addi r10,r3,0
	ctx.r10.s64 = ctx.r3.s64 + 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r8,r9,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// stb r8,50(r31)
	PPC_STORE_U8(ctx.r31.u32 + 50, ctx.r8.u8);
	// bl 0x835fcbe8
	ctx.lr = 0x82D91870;
	sub_835FCBE8(ctx, base);
	// bl 0x8252e3c0
	ctx.lr = 0x82D91874;
	sub_8252E3C0(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r3,r30,180
	ctx.r3.s64 = ctx.r30.s64 + 180;
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
loc_82D91880:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82d91880
	if (!cr6.eq) goto loc_82D91880;
	// subf r11,r6,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r6.s64;
	// lwz r5,16(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r7,r11,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x827a8810
	ctx.lr = 0x82D918A8;
	sub_827A8810(ctx, base);
	// addi r10,r3,0
	ctx.r10.s64 = ctx.r3.s64 + 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r8,r9,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// stb r8,51(r31)
	PPC_STORE_U8(ctx.r31.u32 + 51, ctx.r8.u8);
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

__attribute__((alias("__imp__sub_82D918D4"))) PPC_WEAK_FUNC(sub_82D918D4);
PPC_FUNC_IMPL(__imp__sub_82D918D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D918D8"))) PPC_WEAK_FUNC(sub_82D918D8);
PPC_FUNC_IMPL(__imp__sub_82D918D8) {
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
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r8,4(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lis r9,0
	ctx.r9.s64 = 0;
	// lwz r7,8(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r6,84
	ctx.r6.s64 = 84;
	// ori r5,r9,65535
	ctx.r5.u64 = ctx.r9.u64 | 65535;
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// li r4,6
	ctx.r4.s64 = 6;
	// stw r6,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r6.u32);
	// stw r5,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r5.u32);
	// addi r3,r30,12
	ctx.r3.s64 = ctx.r30.s64 + 12;
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// stw r4,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r4.u32);
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// stb r11,52(r31)
	PPC_STORE_U8(ctx.r31.u32 + 52, ctx.r11.u8);
	// stb r11,53(r31)
	PPC_STORE_U8(ctx.r31.u32 + 53, ctx.r11.u8);
	// stb r11,54(r31)
	PPC_STORE_U8(ctx.r31.u32 + 54, ctx.r11.u8);
	// stw r11,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
	// stb r11,60(r31)
	PPC_STORE_U8(ctx.r31.u32 + 60, ctx.r11.u8);
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// stb r11,68(r31)
	PPC_STORE_U8(ctx.r31.u32 + 68, ctx.r11.u8);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stw r8,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r8.u32);
	// stw r7,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r7.u32);
	// bl 0x82d90990
	ctx.lr = 0x82D9196C;
	sub_82D90990(ctx, base);
	// lwz r11,40(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// lwz r10,44(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// lwz r9,48(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// lwz r8,52(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// lwz r7,56(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// stw r3,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
	// addi r3,r30,60
	ctx.r3.s64 = ctx.r30.s64 + 60;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// stw r9,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r9.u32);
	// stw r8,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r8.u32);
	// stw r7,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r7.u32);
	// bl 0x82d91108
	ctx.lr = 0x82D919A0;
	sub_82D91108(ctx, base);
	// lwz r6,88(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 88);
	// lwz r5,92(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 92);
	// lwz r4,96(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	// stw r3,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r3.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r6,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r6.u32);
	// stw r5,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r5.u32);
	// stw r4,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r4.u32);
	// bl 0x835fcbe8
	ctx.lr = 0x82D919C4;
	sub_835FCBE8(ctx, base);
	// bl 0x8252e3c0
	ctx.lr = 0x82D919C8;
	sub_8252E3C0(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r3,r30,100
	ctx.r3.s64 = ctx.r30.s64 + 100;
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
loc_82D919D4:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82d919d4
	if (!cr6.eq) goto loc_82D919D4;
	// subf r11,r6,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r6.s64;
	// lwz r5,16(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r7,r11,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x827a8810
	ctx.lr = 0x82D919FC;
	sub_827A8810(ctx, base);
	// addi r10,r3,0
	ctx.r10.s64 = ctx.r3.s64 + 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r8,r9,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// stb r8,52(r31)
	PPC_STORE_U8(ctx.r31.u32 + 52, ctx.r8.u8);
	// bl 0x835fcbe8
	ctx.lr = 0x82D91A14;
	sub_835FCBE8(ctx, base);
	// bl 0x8252e3c0
	ctx.lr = 0x82D91A18;
	sub_8252E3C0(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r3,r30,128
	ctx.r3.s64 = ctx.r30.s64 + 128;
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
loc_82D91A24:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82d91a24
	if (!cr6.eq) goto loc_82D91A24;
	// subf r11,r6,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r6.s64;
	// lwz r5,16(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r7,r11,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x827a8810
	ctx.lr = 0x82D91A4C;
	sub_827A8810(ctx, base);
	// addi r10,r3,0
	ctx.r10.s64 = ctx.r3.s64 + 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r8,r9,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// stb r8,53(r31)
	PPC_STORE_U8(ctx.r31.u32 + 53, ctx.r8.u8);
	// bl 0x835fcbe8
	ctx.lr = 0x82D91A64;
	sub_835FCBE8(ctx, base);
	// bl 0x8252e3c0
	ctx.lr = 0x82D91A68;
	sub_8252E3C0(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r3,r30,156
	ctx.r3.s64 = ctx.r30.s64 + 156;
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
loc_82D91A74:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82d91a74
	if (!cr6.eq) goto loc_82D91A74;
	// subf r11,r6,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r6.s64;
	// lwz r5,16(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r7,r11,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x827a8810
	ctx.lr = 0x82D91A9C;
	sub_827A8810(ctx, base);
	// addi r10,r3,0
	ctx.r10.s64 = ctx.r3.s64 + 0;
	// lwz r9,184(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 184);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cntlzw r8,r10
	ctx.r8.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r7,r8,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// stb r7,54(r31)
	PPC_STORE_U8(ctx.r31.u32 + 54, ctx.r7.u8);
	// stw r9,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r9.u32);
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

__attribute__((alias("__imp__sub_82D91AD0"))) PPC_WEAK_FUNC(sub_82D91AD0);
PPC_FUNC_IMPL(__imp__sub_82D91AD0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdac8
	ctx.lr = 0x82D91AD8;
	__savegprlr_20(ctx, base);
	// stwu r1,-2864(r1)
	ea = -2864 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82d86078
	ctx.lr = 0x82D91AE0;
	sub_82D86078(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82d91af8
	if (!cr6.eq) goto loc_82D91AF8;
loc_82D91AEC:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,2864
	ctx.r1.s64 = ctx.r1.s64 + 2864;
	// b 0x831cdb18
	__restgprlr_20(ctx, base);
	return;
loc_82D91AF8:
	// lwz r3,116(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d91aec
	if (cr6.eq) goto loc_82D91AEC;
	// bl 0x8290b4c8
	ctx.lr = 0x82D91B08;
	sub_8290B4C8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d91aec
	if (cr6.eq) goto loc_82D91AEC;
	// lwz r3,116(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// bl 0x825832d8
	ctx.lr = 0x82D91B1C;
	sub_825832D8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,432
	ctx.r3.s64 = ctx.r1.s64 + 432;
	// bl 0x82d8d5b8
	ctx.lr = 0x82D91B28;
	sub_82D8D5B8(ctx, base);
	// lis r11,3
	ctx.r11.s64 = 196608;
	// lwz r9,2188(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2188);
	// ori r10,r11,65535
	ctx.r10.u64 = ctx.r11.u64 | 65535;
	// clrlwi r11,r9,14
	ctx.r11.u64 = ctx.r9.u32 & 0x3FFFF;
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// ble cr6,0x82d91b44
	if (!cr6.gt) goto loc_82D91B44;
	// li r11,-1
	ctx.r11.s64 = -1;
loc_82D91B44:
	// stw r11,432(r1)
	PPC_STORE_U32(ctx.r1.u32 + 432, ctx.r11.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82aba208
	ctx.lr = 0x82D91B54;
	sub_82ABA208(ctx, base);
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82d91b68
	if (cr6.lt) goto loc_82D91B68;
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82d91b6c
	goto loc_82D91B6C;
loc_82D91B68:
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
loc_82D91B6C:
	// li r4,70
	ctx.r4.s64 = 70;
	// addi r3,r1,436
	ctx.r3.s64 = ctx.r1.s64 + 436;
	// bl 0x831ce7d8
	ctx.lr = 0x82D91B78;
	sub_831CE7D8(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8387e8e0
	ctx.lr = 0x82D91B80;
	sub_8387E8E0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82cabb48
	ctx.lr = 0x82D91B8C;
	sub_82CABB48(ctx, base);
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82d91ba0
	if (cr6.lt) goto loc_82D91BA0;
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82d91ba4
	goto loc_82D91BA4;
loc_82D91BA0:
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
loc_82D91BA4:
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r1,506
	ctx.r3.s64 = ctx.r1.s64 + 506;
	// bl 0x831ce7d8
	ctx.lr = 0x82D91BB0;
	sub_831CE7D8(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8387e8e0
	ctx.lr = 0x82D91BB8;
	sub_8387E8E0(ctx, base);
	// lhz r11,2248(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 2248);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// sth r11,510(r1)
	PPC_STORE_U16(ctx.r1.u32 + 510, ctx.r11.u16);
	// bl 0x82d99c10
	ctx.lr = 0x82D91BC8;
	sub_82D99C10(ctx, base);
	// bl 0x825832f0
	ctx.lr = 0x82D91BCC;
	sub_825832F0(ctx, base);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d91aec
	if (cr6.eq) goto loc_82D91AEC;
	// bl 0x82d98830
	ctx.lr = 0x82D91BDC;
	sub_82D98830(ctx, base);
	// stw r3,1064(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1064, ctx.r3.u32);
	// bl 0x82d8a820
	ctx.lr = 0x82D91BE4;
	sub_82D8A820(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82d91c00
	if (!cr6.eq) goto loc_82D91C00;
	// bl 0x82d8a900
	ctx.lr = 0x82D91BF4;
	sub_82D8A900(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d91c0c
	if (cr6.eq) goto loc_82D91C0C;
loc_82D91C00:
	// li r11,18
	ctx.r11.s64 = 18;
	// stw r11,1064(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1064, ctx.r11.u32);
	// b 0x82d91c18
	goto loc_82D91C18;
loc_82D91C0C:
	// lwz r11,1064(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1064);
	// cmplwi cr6,r11,18
	cr6.compare<uint32_t>(ctx.r11.u32, 18, xer);
	// bgt cr6,0x82d91aec
	if (cr6.gt) goto loc_82D91AEC;
loc_82D91C18:
	// li r10,32
	ctx.r10.s64 = 32;
	// li r20,255
	ctx.r20.s64 = 255;
	// addi r11,r1,140
	ctx.r11.s64 = ctx.r1.s64 + 140;
	// mr r9,r20
	ctx.r9.u64 = ctx.r20.u64;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_82D91C2C:
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82d91c2c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82D91C2C;
	// li r21,0
	ctx.r21.s64 = 0;
	// addi r26,r1,144
	ctx.r26.s64 = ctx.r1.s64 + 144;
	// mr r27,r21
	ctx.r27.u64 = ctx.r21.u64;
	// mr r28,r21
	ctx.r28.u64 = ctx.r21.u64;
	// addi r31,r1,1080
	ctx.r31.s64 = ctx.r1.s64 + 1080;
	// li r25,90
	ctx.r25.s64 = 90;
	// li r23,100
	ctx.r23.s64 = 100;
	// li r24,1
	ctx.r24.s64 = 1;
loc_82D91C54:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82d987f8
	ctx.lr = 0x82D91C60;
	sub_82D987F8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x82d983f8
	ctx.lr = 0x82D91C68;
	sub_82D983F8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d91d8c
	if (cr6.eq) goto loc_82D91D8C;
	// bl 0x82d8a820
	ctx.lr = 0x82D91C78;
	sub_82D8A820(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82d91c94
	if (!cr6.eq) goto loc_82D91C94;
	// bl 0x82d8a900
	ctx.lr = 0x82D91C88;
	sub_82D8A900(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d91c9c
	if (cr6.eq) goto loc_82D91C9C;
loc_82D91C94:
	// cmplwi cr6,r27,18
	cr6.compare<uint32_t>(ctx.r27.u32, 18, xer);
	// bge cr6,0x82d91d9c
	if (!cr6.lt) goto loc_82D91D9C;
loc_82D91C9C:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// sth r21,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r21.u16);
	// addi r29,r31,-12
	ctx.r29.s64 = ctx.r31.s64 + -12;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// ld r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r10,-12(r31)
	PPC_STORE_U64(ctx.r31.u32 + -12, ctx.r10.u64);
	// bl 0x82a47dc0
	ctx.lr = 0x82D91CBC;
	sub_82A47DC0(ctx, base);
	// stb r3,-3(r31)
	PPC_STORE_U8(ctx.r31.u32 + -3, ctx.r3.u8);
	// lwz r9,40(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// divwu r8,r9,r25
	ctx.r8.u32 = PPCDivide(ctx.r9.u32, ctx.r25.u32);
	// addic r7,r8,-1
	xer.ca = ctx.r8.u32 > 0;
	ctx.r7.s64 = ctx.r8.s64 + -1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// subfe r6,r7,r8
	temp.u8 = (~ctx.r7.u32 + ctx.r8.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r6.u64 = ~ctx.r7.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// stb r6,20(r31)
	PPC_STORE_U8(ctx.r31.u32 + 20, ctx.r6.u8);
	// lwz r5,36(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// subfic r4,r5,100
	xer.ca = ctx.r5.u32 <= 100;
	ctx.r4.s64 = 100 - ctx.r5.s64;
	// stb r4,18(r31)
	PPC_STORE_U8(ctx.r31.u32 + 18, ctx.r4.u8);
	// lbz r10,52(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 52);
	// stb r10,-2(r31)
	PPC_STORE_U8(ctx.r31.u32 + -2, ctx.r10.u8);
	// lbz r9,53(r30)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + 53);
	// stb r9,-1(r31)
	PPC_STORE_U8(ctx.r31.u32 + -1, ctx.r9.u8);
	// lbz r8,54(r30)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r30.u32 + 54);
	// stb r8,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r8.u8);
	// lbz r7,55(r30)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r30.u32 + 55);
	// stb r7,1(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1, ctx.r7.u8);
	// lbz r6,56(r30)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r30.u32 + 56);
	// stb r6,2(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2, ctx.r6.u8);
	// lbz r5,57(r30)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r30.u32 + 57);
	// stb r5,3(r31)
	PPC_STORE_U8(ctx.r31.u32 + 3, ctx.r5.u8);
	// lbz r4,58(r30)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r30.u32 + 58);
	// stb r4,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r4.u8);
	// lbz r11,59(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 59);
	// stb r11,5(r31)
	PPC_STORE_U8(ctx.r31.u32 + 5, ctx.r11.u8);
	// lbz r10,60(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 60);
	// stb r10,6(r31)
	PPC_STORE_U8(ctx.r31.u32 + 6, ctx.r10.u8);
	// lbz r9,61(r30)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + 61);
	// stb r9,7(r31)
	PPC_STORE_U8(ctx.r31.u32 + 7, ctx.r9.u8);
	// lbz r8,62(r30)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r30.u32 + 62);
	// stb r8,8(r31)
	PPC_STORE_U8(ctx.r31.u32 + 8, ctx.r8.u8);
	// lbz r7,63(r30)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r30.u32 + 63);
	// stb r7,9(r31)
	PPC_STORE_U8(ctx.r31.u32 + 9, ctx.r7.u8);
	// lbz r6,64(r30)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r30.u32 + 64);
	// stb r6,10(r31)
	PPC_STORE_U8(ctx.r31.u32 + 10, ctx.r6.u8);
	// lbz r5,65(r30)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r30.u32 + 65);
	// stb r5,11(r31)
	PPC_STORE_U8(ctx.r31.u32 + 11, ctx.r5.u8);
	// lwz r4,32(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// stw r4,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r4.u32);
	// bl 0x82d9dcf0
	ctx.lr = 0x82D91D60;
	sub_82D9DCF0(ctx, base);
	// stb r3,-4(r31)
	PPC_STORE_U8(ctx.r31.u32 + -4, ctx.r3.u8);
	// bl 0x830ff290
	ctx.lr = 0x82D91D68;
	sub_830FF290(ctx, base);
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmplwi cr6,r11,60
	cr6.compare<uint32_t>(ctx.r11.u32, 60, xer);
	// bne cr6,0x82d91d80
	if (!cr6.eq) goto loc_82D91D80;
	// stb r23,18(r31)
	PPC_STORE_U8(ctx.r31.u32 + 18, ctx.r23.u8);
	// stw r21,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r21.u32);
	// stb r24,20(r31)
	PPC_STORE_U8(ctx.r31.u32 + 20, ctx.r24.u8);
loc_82D91D80:
	// stw r27,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r27.u32);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r31,r31,36
	ctx.r31.s64 = ctx.r31.s64 + 36;
loc_82D91D8C:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// cmplwi cr6,r28,18
	cr6.compare<uint32_t>(ctx.r28.u32, 18, xer);
	// blt cr6,0x82d91c54
	if (cr6.lt) goto loc_82D91C54;
loc_82D91D9C:
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82d98c30
	ctx.lr = 0x82D91DA4;
	sub_82D98C30(ctx, base);
	// stb r3,2220(r1)
	PPC_STORE_U8(ctx.r1.u32 + 2220, ctx.r3.u8);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82d98930
	ctx.lr = 0x82D91DB0;
	sub_82D98930(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,2224
	ctx.r3.s64 = ctx.r1.s64 + 2224;
	// li r5,528
	ctx.r5.s64 = 528;
	// bl 0x831ce980
	ctx.lr = 0x82D91DC0;
	sub_831CE980(ctx, base);
	// addi r3,r1,2224
	ctx.r3.s64 = ctx.r1.s64 + 2224;
	// bl 0x82d8cea8
	ctx.lr = 0x82D91DC8;
	sub_82D8CEA8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d91aec
	if (cr6.eq) goto loc_82D91AEC;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82d98848
	ctx.lr = 0x82D91DE0;
	sub_82D98848(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d91aec
	if (cr6.eq) goto loc_82D91AEC;
	// mr r31,r21
	ctx.r31.u64 = ctx.r21.u64;
	// addi r29,r1,1044
	ctx.r29.s64 = ctx.r1.s64 + 1044;
	// addi r30,r1,512
	ctx.r30.s64 = ctx.r1.s64 + 512;
loc_82D91DF8:
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x82ac0af0
	ctx.lr = 0x82D91E00;
	sub_82AC0AF0(ctx, base);
	// clrlwi r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// bge cr6,0x82d91e28
	if (!cr6.lt) goto loc_82D91E28;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r1,2224
	ctx.r9.s64 = ctx.r1.s64 + 2224;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// add r4,r11,r9
	ctx.r4.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bl 0x82abfda0
	ctx.lr = 0x82D91E28;
	sub_82ABFDA0(ctx, base);
loc_82D91E28:
	// addi r4,r1,272
	ctx.r4.s64 = ctx.r1.s64 + 272;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82abfda0
	ctx.lr = 0x82D91E34;
	sub_82ABFDA0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82d98848
	ctx.lr = 0x82D91E40;
	sub_82D98848(ctx, base);
	// lwz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// addi r11,r1,1060
	ctx.r11.s64 = ctx.r1.s64 + 1060;
	// addi r30,r30,160
	ctx.r30.s64 = ctx.r30.s64 + 160;
	// stwu r10,4(r29)
	ea = 4 + ctx.r29.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r29.u32 = ea;
	// lbz r9,396(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 396);
	// stbx r9,r31,r11
	PPC_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r9.u8);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplwi cr6,r31,3
	cr6.compare<uint32_t>(ctx.r31.u32, 3, xer);
	// blt cr6,0x82d91df8
	if (cr6.lt) goto loc_82D91DF8;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,2704
	ctx.r4.s64 = ctx.r1.s64 + 2704;
	// li r5,47
	ctx.r5.s64 = 47;
	// bl 0x831ce980
	ctx.lr = 0x82D91E74;
	sub_831CE980(ctx, base);
	// li r10,32
	ctx.r10.s64 = 32;
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
	// addi r9,r1,144
	ctx.r9.s64 = ctx.r1.s64 + 144;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_82D91E84:
	// cmplwi cr6,r11,18
	cr6.compare<uint32_t>(ctx.r11.u32, 18, xer);
	// blt cr6,0x82d91ea0
	if (cr6.lt) goto loc_82D91EA0;
	// cmplwi cr6,r11,32
	cr6.compare<uint32_t>(ctx.r11.u32, 32, xer);
	// bge cr6,0x82d91eb4
	if (!cr6.lt) goto loc_82D91EB4;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// stbx r20,r11,r10
	PPC_STORE_U8(ctx.r11.u32 + ctx.r10.u32, ctx.r20.u8);
	// b 0x82d91eb4
	goto loc_82D91EB4;
loc_82D91EA0:
	// cmplwi cr6,r11,32
	cr6.compare<uint32_t>(ctx.r11.u32, 32, xer);
	// bge cr6,0x82d91eb4
	if (!cr6.lt) goto loc_82D91EB4;
	// lwz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// stbx r10,r11,r8
	PPC_STORE_U8(ctx.r11.u32 + ctx.r8.u32, ctx.r10.u8);
loc_82D91EB4:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bdnz 0x82d91e84
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82D91E84;
	// addi r3,r1,992
	ctx.r3.s64 = ctx.r1.s64 + 992;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// li r5,47
	ctx.r5.s64 = 47;
	// bl 0x831ce980
	ctx.lr = 0x82D91ED0;
	sub_831CE980(ctx, base);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// sth r21,1040(r1)
	PPC_STORE_U16(ctx.r1.u32 + 1040, ctx.r21.u16);
	// stw r11,1044(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1044, ctx.r11.u32);
	// bl 0x831156e8
	ctx.lr = 0x82D91EE0;
	sub_831156E8(ctx, base);
	// lwz r10,48(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// addi r4,r1,432
	ctx.r4.s64 = ctx.r1.s64 + 432;
	// addis r3,r10,222
	ctx.r3.s64 = ctx.r10.s64 + 14548992;
	// addi r3,r3,-12208
	ctx.r3.s64 = ctx.r3.s64 + -12208;
	// bl 0x83132ae0
	ctx.lr = 0x82D91EF4;
	sub_83132AE0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,2864
	ctx.r1.s64 = ctx.r1.s64 + 2864;
	// b 0x831cdb18
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D91F00"))) PPC_WEAK_FUNC(sub_82D91F00);
PPC_FUNC_IMPL(__imp__sub_82D91F00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82D91F08;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r27,15
	ctx.r27.s64 = 15;
	// li r28,-1
	ctx.r28.s64 = -1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r3,r3,12
	ctx.r3.s64 = ctx.r3.s64 + 12;
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r9,8(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r4,r4,12
	ctx.r4.s64 = ctx.r4.s64 + 12;
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// stw r27,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r27.u32);
	// stw r29,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r29.u32);
	// stb r29,12(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12, ctx.r29.u8);
	// bl 0x8259cb28
	ctx.lr = 0x82D91F58;
	sub_8259CB28(ctx, base);
	// stw r27,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r27.u32);
	// stw r29,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r29.u32);
	// addi r3,r31,40
	ctx.r3.s64 = ctx.r31.s64 + 40;
	// stb r29,40(r31)
	PPC_STORE_U8(ctx.r31.u32 + 40, ctx.r29.u8);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r30,40
	ctx.r4.s64 = ctx.r30.s64 + 40;
	// bl 0x8259cb28
	ctx.lr = 0x82D91F78;
	sub_8259CB28(ctx, base);
	// lhz r8,68(r30)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r30.u32 + 68);
	// addi r4,r30,76
	ctx.r4.s64 = ctx.r30.s64 + 76;
	// addi r3,r31,76
	ctx.r3.s64 = ctx.r31.s64 + 76;
	// li r5,528
	ctx.r5.s64 = 528;
	// sth r8,68(r31)
	PPC_STORE_U16(ctx.r31.u32 + 68, ctx.r8.u16);
	// lwz r7,72(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 72);
	// stw r7,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r7.u32);
	// bl 0x831ce980
	ctx.lr = 0x82D91F98;
	sub_831CE980(ctx, base);
	// addi r3,r31,604
	ctx.r3.s64 = ctx.r31.s64 + 604;
	// addi r4,r30,604
	ctx.r4.s64 = ctx.r30.s64 + 604;
	// li r5,1536
	ctx.r5.s64 = 1536;
	// bl 0x831ce980
	ctx.lr = 0x82D91FA8;
	sub_831CE980(ctx, base);
	// addi r9,r30,2140
	ctx.r9.s64 = ctx.r30.s64 + 2140;
	// li r8,32
	ctx.r8.s64 = 32;
	// subf r11,r30,r9
	ctx.r11.s64 = ctx.r9.s64 - ctx.r30.s64;
	// addi r10,r9,-3
	ctx.r10.s64 = ctx.r9.s64 + -3;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// subf r7,r31,r30
	ctx.r7.s64 = ctx.r30.s64 - ctx.r31.s64;
	// addi r11,r11,6
	ctx.r11.s64 = ctx.r11.s64 + 6;
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// addi r9,r9,-20
	ctx.r9.s64 = ctx.r9.s64 + -20;
loc_82D91FCC:
	// lwzu r8,20(r9)
	ea = 20 + ctx.r9.u32;
	ctx.r8.u64 = PPC_LOAD_U32(ea);
	ctx.r9.u32 = ea;
	// stw r8,-6(r11)
	PPC_STORE_U32(ctx.r11.u32 + -6, ctx.r8.u32);
	// lbz r8,7(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 7);
	// stb r8,-2(r11)
	PPC_STORE_U8(ctx.r11.u32 + -2, ctx.r8.u8);
	// lbz r6,8(r10)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + 8);
	// stb r6,-1(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1, ctx.r6.u8);
	// lbzx r5,r7,r11
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r7.u32 + ctx.r11.u32);
	// stb r5,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r5.u8);
	// lbz r4,10(r10)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r10.u32 + 10);
	// stb r4,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r4.u8);
	// lbz r3,11(r10)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r10.u32 + 11);
	// stb r3,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r3.u8);
	// lbz r8,12(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 12);
	// stb r8,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r8.u8);
	// lbz r6,13(r10)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + 13);
	// stb r6,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r6.u8);
	// lbz r5,14(r10)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r10.u32 + 14);
	// stb r5,5(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5, ctx.r5.u8);
	// lbz r4,15(r10)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r10.u32 + 15);
	// stb r4,6(r11)
	PPC_STORE_U8(ctx.r11.u32 + 6, ctx.r4.u8);
	// lbz r3,16(r10)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r10.u32 + 16);
	// stb r3,7(r11)
	PPC_STORE_U8(ctx.r11.u32 + 7, ctx.r3.u8);
	// lbz r8,17(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 17);
	// stb r8,8(r11)
	PPC_STORE_U8(ctx.r11.u32 + 8, ctx.r8.u8);
	// lbz r6,18(r10)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + 18);
	// stb r6,9(r11)
	PPC_STORE_U8(ctx.r11.u32 + 9, ctx.r6.u8);
	// lbz r5,19(r10)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r10.u32 + 19);
	// stb r5,10(r11)
	PPC_STORE_U8(ctx.r11.u32 + 10, ctx.r5.u8);
	// lbzu r8,20(r10)
	ea = 20 + ctx.r10.u32;
	ctx.r8.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// stb r8,11(r11)
	PPC_STORE_U8(ctx.r11.u32 + 11, ctx.r8.u8);
	// addi r11,r11,20
	ctx.r11.s64 = ctx.r11.s64 + 20;
	// bdnz 0x82d91fcc
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82D91FCC;
	// lwz r11,2780(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2780);
	// addi r4,r30,2800
	ctx.r4.s64 = ctx.r30.s64 + 2800;
	// addi r3,r31,2800
	ctx.r3.s64 = ctx.r31.s64 + 2800;
	// stw r11,2780(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2780, ctx.r11.u32);
	// lwz r10,2784(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2784);
	// stw r10,2784(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2784, ctx.r10.u32);
	// lwz r9,2788(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2788);
	// stw r9,2788(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2788, ctx.r9.u32);
	// lwz r8,2792(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2792);
	// stw r8,2792(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2792, ctx.r8.u32);
	// lwz r7,2796(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2796);
	// stw r7,2796(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2796, ctx.r7.u32);
	// bl 0x82da8fd0
	ctx.lr = 0x82D92080;
	sub_82DA8FD0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D9208C"))) PPC_WEAK_FUNC(sub_82D9208C);
PPC_FUNC_IMPL(__imp__sub_82D9208C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D92090"))) PPC_WEAK_FUNC(sub_82D92090);
PPC_FUNC_IMPL(__imp__sub_82D92090) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x82D92098;
	__savegprlr_24(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r4,r4,52
	ctx.r4.s64 = ctx.r4.s64 + 52;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r10,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r10.u32);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r9,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r9.u32);
	// lwz r8,12(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stw r8,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r8.u32);
	// lwz r7,24(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// stw r7,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r7.u32);
	// lwz r6,28(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// stw r6,28(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28, ctx.r6.u32);
	// lwz r5,32(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// stw r5,32(r30)
	PPC_STORE_U32(ctx.r30.u32 + 32, ctx.r5.u32);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// stw r11,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r11.u32);
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// stw r10,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r10.u32);
	// lwz r9,36(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// stw r9,36(r30)
	PPC_STORE_U32(ctx.r30.u32 + 36, ctx.r9.u32);
	// lwz r8,40(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// stw r8,40(r30)
	PPC_STORE_U32(ctx.r30.u32 + 40, ctx.r8.u32);
	// lwz r7,44(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// stw r7,44(r30)
	PPC_STORE_U32(ctx.r30.u32 + 44, ctx.r7.u32);
	// lwz r6,48(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// stw r6,48(r30)
	PPC_STORE_U32(ctx.r30.u32 + 48, ctx.r6.u32);
	// bl 0x82d8c4e0
	ctx.lr = 0x82D92118;
	sub_82D8C4E0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r25,r30,52
	ctx.r25.s64 = ctx.r30.s64 + 52;
	// addi r29,r31,108
	ctx.r29.s64 = ctx.r31.s64 + 108;
	// lbz r4,0(r5)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r5.u32 + 0);
	// stb r4,52(r30)
	PPC_STORE_U8(ctx.r30.u32 + 52, ctx.r4.u8);
	// lbz r11,1(r5)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r5.u32 + 1);
	// stb r11,53(r30)
	PPC_STORE_U8(ctx.r30.u32 + 53, ctx.r11.u8);
	// lbz r10,2(r5)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r5.u32 + 2);
	// stb r10,54(r30)
	PPC_STORE_U8(ctx.r30.u32 + 54, ctx.r10.u8);
	// lbz r9,3(r5)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r5.u32 + 3);
	// stb r9,55(r30)
	PPC_STORE_U8(ctx.r30.u32 + 55, ctx.r9.u8);
	// lbz r8,4(r5)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r5.u32 + 4);
	// stb r8,56(r30)
	PPC_STORE_U8(ctx.r30.u32 + 56, ctx.r8.u8);
	// lbz r7,5(r5)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r5.u32 + 5);
	// stb r7,57(r30)
	PPC_STORE_U8(ctx.r30.u32 + 57, ctx.r7.u8);
	// lbz r6,6(r5)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r5.u32 + 6);
	// stb r6,58(r30)
	PPC_STORE_U8(ctx.r30.u32 + 58, ctx.r6.u8);
	// lbz r4,7(r5)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r5.u32 + 7);
	// stb r4,59(r30)
	PPC_STORE_U8(ctx.r30.u32 + 59, ctx.r4.u8);
	// lbz r11,8(r5)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r5.u32 + 8);
	// stb r11,60(r30)
	PPC_STORE_U8(ctx.r30.u32 + 60, ctx.r11.u8);
	// lbz r10,9(r5)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r5.u32 + 9);
	// stb r10,61(r30)
	PPC_STORE_U8(ctx.r30.u32 + 61, ctx.r10.u8);
	// lbz r9,10(r5)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r5.u32 + 10);
	// stb r9,62(r30)
	PPC_STORE_U8(ctx.r30.u32 + 62, ctx.r9.u8);
	// lbz r8,11(r5)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r5.u32 + 11);
	// stb r8,63(r30)
	PPC_STORE_U8(ctx.r30.u32 + 63, ctx.r8.u8);
	// lbz r7,12(r5)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r5.u32 + 12);
	// stb r7,64(r30)
	PPC_STORE_U8(ctx.r30.u32 + 64, ctx.r7.u8);
	// lbz r6,13(r5)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r5.u32 + 13);
	// stb r6,65(r30)
	PPC_STORE_U8(ctx.r30.u32 + 65, ctx.r6.u8);
	// bl 0x835fcbe8
	ctx.lr = 0x82D9219C;
	sub_835FCBE8(ctx, base);
	// bl 0x8252e3c0
	ctx.lr = 0x82D921A0;
	sub_8252E3C0(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82D921A8:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82d921a8
	if (!cr6.eq) goto loc_82D921A8;
	// subf r11,r6,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r6.s64;
	// lwz r5,16(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// rotlwi r7,r11,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x827a8810
	ctx.lr = 0x82D921D4;
	sub_827A8810(ctx, base);
	// cntlzw r10,r3
	ctx.r10.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// addi r29,r31,172
	ctx.r29.s64 = ctx.r31.s64 + 172;
	// stb r9,66(r30)
	PPC_STORE_U8(ctx.r30.u32 + 66, ctx.r9.u8);
	// lwz r8,136(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// stw r8,68(r30)
	PPC_STORE_U32(ctx.r30.u32 + 68, ctx.r8.u32);
	// lwz r7,140(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// stw r7,72(r30)
	PPC_STORE_U32(ctx.r30.u32 + 72, ctx.r7.u32);
	// lwz r6,144(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// stw r6,76(r30)
	PPC_STORE_U32(ctx.r30.u32 + 76, ctx.r6.u32);
	// lwz r5,148(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// stw r5,92(r30)
	PPC_STORE_U32(ctx.r30.u32 + 92, ctx.r5.u32);
	// bl 0x835fcbe8
	ctx.lr = 0x82D9220C;
	sub_835FCBE8(ctx, base);
	// bl 0x8252e3c0
	ctx.lr = 0x82D92210;
	sub_8252E3C0(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82D92218:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82d92218
	if (!cr6.eq) goto loc_82D92218;
	// subf r11,r6,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r6.s64;
	// lwz r5,16(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// rotlwi r7,r11,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x827a8810
	ctx.lr = 0x82D92244;
	sub_827A8810(ctx, base);
	// cntlzw r10,r3
	ctx.r10.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// li r26,0
	ctx.r26.s64 = 0;
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// mr r28,r26
	ctx.r28.u64 = ctx.r26.u64;
	// stb r9,116(r30)
	PPC_STORE_U8(ctx.r30.u32 + 116, ctx.r9.u8);
	// lwz r8,200(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 200);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// ble cr6,0x82d922a0
	if (!cr6.gt) goto loc_82D922A0;
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
	// addi r27,r30,116
	ctx.r27.s64 = ctx.r30.s64 + 116;
loc_82D9226C:
	// lwz r11,208(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 208);
	// add r3,r29,r11
	ctx.r3.u64 = ctx.r29.u64 + ctx.r11.u64;
	// bl 0x82d913f0
	ctx.lr = 0x82D92278;
	sub_82D913F0(ctx, base);
	// stw r3,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r3.u32);
	// lwz r11,208(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 208);
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// stwu r10,8(r27)
	ea = 8 + ctx.r27.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r27.u32 = ea;
	// addi r29,r29,32
	ctx.r29.s64 = ctx.r29.s64 + 32;
	// lwz r9,200(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 200);
	// cmplw cr6,r28,r9
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r9.u32, xer);
	// blt cr6,0x82d9226c
	if (cr6.lt) goto loc_82D9226C;
loc_82D922A0:
	// lwz r11,152(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	// stw r11,96(r30)
	PPC_STORE_U32(ctx.r30.u32 + 96, ctx.r11.u32);
	// lwz r10,160(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	// stw r10,104(r30)
	PPC_STORE_U32(ctx.r30.u32 + 104, ctx.r10.u32);
	// lwz r9,164(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	// stw r9,108(r30)
	PPC_STORE_U32(ctx.r30.u32 + 108, ctx.r9.u32);
	// lwz r8,168(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 168);
	// stw r8,112(r30)
	PPC_STORE_U32(ctx.r30.u32 + 112, ctx.r8.u32);
	// lwz r7,156(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	// stw r7,100(r30)
	PPC_STORE_U32(ctx.r30.u32 + 100, ctx.r7.u32);
	// bl 0x82d86078
	ctx.lr = 0x82D922CC;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d924ac
	if (cr6.eq) goto loc_82D924AC;
	// lwz r3,116(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// bl 0x825832d8
	ctx.lr = 0x82D922DC;
	sub_825832D8(ctx, base);
	// bl 0x82d99c10
	ctx.lr = 0x82D922E0;
	sub_82D99C10(ctx, base);
	// bl 0x825832f0
	ctx.lr = 0x82D922E4;
	sub_825832F0(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d924ac
	if (cr6.eq) goto loc_82D924AC;
	// bl 0x831156e8
	ctx.lr = 0x82D922F4;
	sub_831156E8(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// sth r26,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r26.u16);
	// lwz r3,48(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x8311bf98
	ctx.lr = 0x82D9230C;
	sub_8311BF98(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r31,r26
	ctx.r31.u64 = ctx.r26.u64;
	// li r27,12
	ctx.r27.s64 = 12;
loc_82D92318:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82d98848
	ctx.lr = 0x82D92324;
	sub_82D98848(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d924ac
	if (cr6.eq) goto loc_82D924AC;
	// stb r26,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r26.u8);
	// cmplwi cr6,r31,1
	cr6.compare<uint32_t>(ctx.r31.u32, 1, xer);
	// stb r26,97(r1)
	PPC_STORE_U8(ctx.r1.u32 + 97, ctx.r26.u8);
	// stb r26,98(r1)
	PPC_STORE_U8(ctx.r1.u32 + 98, ctx.r26.u8);
	// stb r26,99(r1)
	PPC_STORE_U8(ctx.r1.u32 + 99, ctx.r26.u8);
	// stb r26,100(r1)
	PPC_STORE_U8(ctx.r1.u32 + 100, ctx.r26.u8);
	// stb r26,101(r1)
	PPC_STORE_U8(ctx.r1.u32 + 101, ctx.r26.u8);
	// stb r26,102(r1)
	PPC_STORE_U8(ctx.r1.u32 + 102, ctx.r26.u8);
	// stb r26,103(r1)
	PPC_STORE_U8(ctx.r1.u32 + 103, ctx.r26.u8);
	// stb r26,104(r1)
	PPC_STORE_U8(ctx.r1.u32 + 104, ctx.r26.u8);
	// stb r26,105(r1)
	PPC_STORE_U8(ctx.r1.u32 + 105, ctx.r26.u8);
	// stb r26,106(r1)
	PPC_STORE_U8(ctx.r1.u32 + 106, ctx.r26.u8);
	// stb r26,107(r1)
	PPC_STORE_U8(ctx.r1.u32 + 107, ctx.r26.u8);
	// stb r26,108(r1)
	PPC_STORE_U8(ctx.r1.u32 + 108, ctx.r26.u8);
	// stb r26,109(r1)
	PPC_STORE_U8(ctx.r1.u32 + 109, ctx.r26.u8);
	// bne cr6,0x82d923e0
	if (!cr6.eq) goto loc_82D923E0;
	// lbz r11,50(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 50);
	// stb r11,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r11.u8);
	// lbz r10,51(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 51);
	// stb r10,97(r1)
	PPC_STORE_U8(ctx.r1.u32 + 97, ctx.r10.u8);
	// lbz r9,52(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 52);
	// stb r9,98(r1)
	PPC_STORE_U8(ctx.r1.u32 + 98, ctx.r9.u8);
	// lbz r8,53(r3)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + 53);
	// stb r8,99(r1)
	PPC_STORE_U8(ctx.r1.u32 + 99, ctx.r8.u8);
	// lbz r7,54(r3)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r3.u32 + 54);
	// stb r7,100(r1)
	PPC_STORE_U8(ctx.r1.u32 + 100, ctx.r7.u8);
	// lbz r6,55(r3)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r3.u32 + 55);
	// stb r6,101(r1)
	PPC_STORE_U8(ctx.r1.u32 + 101, ctx.r6.u8);
	// lbz r5,56(r3)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r3.u32 + 56);
	// stb r5,102(r1)
	PPC_STORE_U8(ctx.r1.u32 + 102, ctx.r5.u8);
	// lbz r4,57(r3)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r3.u32 + 57);
	// stb r4,103(r1)
	PPC_STORE_U8(ctx.r1.u32 + 103, ctx.r4.u8);
	// lbz r3,58(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 58);
	// stb r3,104(r1)
	PPC_STORE_U8(ctx.r1.u32 + 104, ctx.r3.u8);
	// lbz r11,59(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 59);
	// stb r11,105(r1)
	PPC_STORE_U8(ctx.r1.u32 + 105, ctx.r11.u8);
	// lbz r10,60(r29)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r29.u32 + 60);
	// stb r10,106(r1)
	PPC_STORE_U8(ctx.r1.u32 + 106, ctx.r10.u8);
	// lbz r9,61(r29)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r29.u32 + 61);
	// stb r9,107(r1)
	PPC_STORE_U8(ctx.r1.u32 + 107, ctx.r9.u8);
	// lbz r8,62(r29)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r29.u32 + 62);
	// stb r8,108(r1)
	PPC_STORE_U8(ctx.r1.u32 + 108, ctx.r8.u8);
	// lbz r7,63(r29)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r29.u32 + 63);
	// b 0x82d9244c
	goto loc_82D9244C;
loc_82D923E0:
	// lbz r11,36(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 36);
	// stb r11,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r11.u8);
	// lbz r10,37(r29)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r29.u32 + 37);
	// stb r10,97(r1)
	PPC_STORE_U8(ctx.r1.u32 + 97, ctx.r10.u8);
	// lbz r9,38(r29)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r29.u32 + 38);
	// stb r9,98(r1)
	PPC_STORE_U8(ctx.r1.u32 + 98, ctx.r9.u8);
	// lbz r8,39(r29)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r29.u32 + 39);
	// stb r8,99(r1)
	PPC_STORE_U8(ctx.r1.u32 + 99, ctx.r8.u8);
	// lbz r7,40(r29)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r29.u32 + 40);
	// stb r7,100(r1)
	PPC_STORE_U8(ctx.r1.u32 + 100, ctx.r7.u8);
	// lbz r6,41(r29)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r29.u32 + 41);
	// stb r6,101(r1)
	PPC_STORE_U8(ctx.r1.u32 + 101, ctx.r6.u8);
	// lbz r5,42(r29)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r29.u32 + 42);
	// stb r5,102(r1)
	PPC_STORE_U8(ctx.r1.u32 + 102, ctx.r5.u8);
	// lbz r4,43(r29)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r29.u32 + 43);
	// stb r4,103(r1)
	PPC_STORE_U8(ctx.r1.u32 + 103, ctx.r4.u8);
	// lbz r3,44(r29)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r29.u32 + 44);
	// stb r3,104(r1)
	PPC_STORE_U8(ctx.r1.u32 + 104, ctx.r3.u8);
	// lbz r11,45(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 45);
	// stb r11,105(r1)
	PPC_STORE_U8(ctx.r1.u32 + 105, ctx.r11.u8);
	// lbz r10,46(r29)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r29.u32 + 46);
	// stb r10,106(r1)
	PPC_STORE_U8(ctx.r1.u32 + 106, ctx.r10.u8);
	// lbz r9,47(r29)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r29.u32 + 47);
	// stb r9,107(r1)
	PPC_STORE_U8(ctx.r1.u32 + 107, ctx.r9.u8);
	// lbz r8,48(r29)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r29.u32 + 48);
	// stb r8,108(r1)
	PPC_STORE_U8(ctx.r1.u32 + 108, ctx.r8.u8);
	// lbz r7,49(r29)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r29.u32 + 49);
loc_82D9244C:
	// stb r7,109(r1)
	PPC_STORE_U8(ctx.r1.u32 + 109, ctx.r7.u8);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83120738
	ctx.lr = 0x82D92464;
	sub_83120738(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// sth r26,88(r1)
	PPC_STORE_U16(ctx.r1.u32 + 88, ctx.r26.u16);
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r9,16(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// bl 0x831c4378
	ctx.lr = 0x82D92490;
	sub_831C4378(ctx, base);
	// addi r10,r31,20
	ctx.r10.s64 = ctx.r31.s64 + 20;
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplwi cr6,r31,3
	cr6.compare<uint32_t>(ctx.r31.u32, 3, xer);
	// stwx r9,r8,r30
	PPC_STORE_U32(ctx.r8.u32 + ctx.r30.u32, ctx.r9.u32);
	// blt cr6,0x82d92318
	if (cr6.lt) goto loc_82D92318;
loc_82D924AC:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D924B4"))) PPC_WEAK_FUNC(sub_82D924B4);
PPC_FUNC_IMPL(__imp__sub_82D924B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D924B8"))) PPC_WEAK_FUNC(sub_82D924B8);
PPC_FUNC_IMPL(__imp__sub_82D924B8) {
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
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bl 0x82d90dd8
	ctx.lr = 0x82D924E8;
	sub_82D90DD8(ctx, base);
	// lwz r10,92(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// stw r10,152(r30)
	PPC_STORE_U32(ctx.r30.u32 + 152, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_82D92508"))) PPC_WEAK_FUNC(sub_82D92508);
PPC_FUNC_IMPL(__imp__sub_82D92508) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,780
	ctx.r10.s64 = 51118080;
	// lwz r7,4(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r9,84
	ctx.r9.s64 = 84;
	// ori r8,r10,12483
	ctx.r8.u64 = ctx.r10.u64 | 12483;
	// subf r6,r11,r7
	ctx.r6.s64 = ctx.r7.s64 - ctx.r11.s64;
	// subf r5,r4,r8
	ctx.r5.s64 = ctx.r8.s64 - ctx.r4.s64;
	// divw r10,r6,r9
	ctx.r10.s32 = PPCDivide(ctx.r6.s32, ctx.r9.s32);
	// cmplw cr6,r5,r10
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r10.u32, xer);
	// bge cr6,0x82d9253c
	if (!cr6.lt) goto loc_82D9253C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,12056
	ctx.r3.s64 = ctx.r11.s64 + 12056;
	// b 0x831cc150
	sub_831CC150(ctx, base);
	return;
loc_82D9253C:
	// lwz r7,8(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// subf r6,r11,r7
	ctx.r6.s64 = ctx.r7.s64 - ctx.r11.s64;
	// divw r11,r6,r9
	ctx.r11.s32 = PPCDivide(ctx.r6.s32, ctx.r9.s32);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// blelr cr6
	if (!cr6.gt) return;
	// rlwinm r9,r11,31,1,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// li r4,0
	ctx.r4.s64 = 0;
	// subf r8,r9,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r9.s64;
	// cmplw cr6,r8,r11
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, xer);
	// blt cr6,0x82d9256c
	if (cr6.lt) goto loc_82D9256C;
	// add r4,r9,r11
	ctx.r4.u64 = ctx.r9.u64 + ctx.r11.u64;
loc_82D9256C:
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// bge cr6,0x82d92578
	if (!cr6.lt) goto loc_82D92578;
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
loc_82D92578:
	// b 0x82d914e8
	sub_82D914E8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D9257C"))) PPC_WEAK_FUNC(sub_82D9257C);
PPC_FUNC_IMPL(__imp__sub_82D9257C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D92580"))) PPC_WEAK_FUNC(sub_82D92580);
PPC_FUNC_IMPL(__imp__sub_82D92580) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82D92588;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x82b5a7e0
	ctx.lr = 0x82D92598;
	sub_82B5A7E0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r31,4
	ctx.r4.s64 = ctx.r31.s64 + 4;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82d925b4
	if (cr6.lt) goto loc_82D925B4;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_82D925B4:
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82D925BC:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82d925bc
	if (!cr6.eq) goto loc_82D925BC;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x82D925DC;
	sub_8259CC28(ctx, base);
	// lwz r10,52(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// addi r4,r31,32
	ctx.r4.s64 = ctx.r31.s64 + 32;
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82d925f0
	if (cr6.lt) goto loc_82D925F0;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_82D925F0:
	// addi r3,r30,32
	ctx.r3.s64 = ctx.r30.s64 + 32;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82D925F8:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82d925f8
	if (!cr6.eq) goto loc_82D925F8;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x82D92618;
	sub_8259CC28(ctx, base);
	// addi r3,r31,60
	ctx.r3.s64 = ctx.r31.s64 + 60;
	// bl 0x82d90990
	ctx.lr = 0x82D92620;
	sub_82D90990(ctx, base);
	// stw r3,60(r30)
	PPC_STORE_U32(ctx.r30.u32 + 60, ctx.r3.u32);
	// lwz r10,92(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// stw r10,68(r30)
	PPC_STORE_U32(ctx.r30.u32 + 68, ctx.r10.u32);
	// bl 0x82d8dfb8
	ctx.lr = 0x82D92634;
	sub_82D8DFB8(ctx, base);
	// stw r3,72(r30)
	PPC_STORE_U32(ctx.r30.u32 + 72, ctx.r3.u32);
	// lwz r9,160(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	// li r29,0
	ctx.r29.s64 = 0;
	// stw r9,76(r30)
	PPC_STORE_U32(ctx.r30.u32 + 76, ctx.r9.u32);
	// stw r29,80(r30)
	PPC_STORE_U32(ctx.r30.u32 + 80, ctx.r29.u32);
	// stw r29,84(r30)
	PPC_STORE_U32(ctx.r30.u32 + 84, ctx.r29.u32);
	// lwz r8,164(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	// stw r8,88(r30)
	PPC_STORE_U32(ctx.r30.u32 + 88, ctx.r8.u32);
	// lwz r7,168(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 168);
	// stw r7,92(r30)
	PPC_STORE_U32(ctx.r30.u32 + 92, ctx.r7.u32);
	// lwz r6,172(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// stw r6,96(r30)
	PPC_STORE_U32(ctx.r30.u32 + 96, ctx.r6.u32);
	// lwz r5,176(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 176);
	// stw r5,100(r30)
	PPC_STORE_U32(ctx.r30.u32 + 100, ctx.r5.u32);
	// bl 0x82d86078
	ctx.lr = 0x82D92670;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d92700
	if (cr6.eq) goto loc_82D92700;
	// lwz r11,72(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 72);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// beq cr6,0x82d9268c
	if (cr6.eq) goto loc_82D9268C;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bne cr6,0x82d92700
	if (!cr6.eq) goto loc_82D92700;
loc_82D9268C:
	// lwz r3,116(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// bl 0x8307e040
	ctx.lr = 0x82D92694;
	sub_8307E040(ctx, base);
	// lwz r11,128(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d926ec
	if (cr6.eq) goto loc_82D926EC;
	// mr r28,r29
	ctx.r28.u64 = ctx.r29.u64;
loc_82D926A8:
	// lwz r11,136(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwzx r6,r11,r28
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r28.u32);
	// bl 0x82da5470
	ctx.lr = 0x82D926C0;
	sub_82DA5470(ctx, base);
	// lwz r10,152(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwzx r6,r28,r10
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r10.u32);
	// bl 0x82da54c8
	ctx.lr = 0x82D926D8;
	sub_82DA54C8(ctx, base);
	// lwz r9,128(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// cmplw cr6,r29,r9
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r9.u32, xer);
	// blt cr6,0x82d926a8
	if (cr6.lt) goto loc_82D926A8;
loc_82D926EC:
	// li r11,-1
	ctx.r11.s64 = -1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,64(r30)
	PPC_STORE_U32(ctx.r30.u32 + 64, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_82D92700:
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,64(r30)
	PPC_STORE_U32(ctx.r30.u32 + 64, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D92714"))) PPC_WEAK_FUNC(sub_82D92714);
PPC_FUNC_IMPL(__imp__sub_82D92714) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D92718"))) PPC_WEAK_FUNC(sub_82D92718);
PPC_FUNC_IMPL(__imp__sub_82D92718) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x82D92720;
	__savegprlr_25(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lwz r10,24(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 24);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82d92748
	if (cr6.lt) goto loc_82D92748;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_82D92748:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82D9274C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82d9274c
	if (!cr6.eq) goto loc_82D9274C;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r26,4
	ctx.r3.s64 = ctx.r26.s64 + 4;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x82D92770;
	sub_8259CC28(ctx, base);
	// lwz r10,80(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 80);
	// addi r4,r25,60
	ctx.r4.s64 = ctx.r25.s64 + 60;
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82d92784
	if (cr6.lt) goto loc_82D92784;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_82D92784:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82D92788:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82d92788
	if (!cr6.eq) goto loc_82D92788;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r26,60
	ctx.r3.s64 = ctx.r26.s64 + 60;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x82D927AC;
	sub_8259CC28(ctx, base);
	// lwz r10,52(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 52);
	// addi r4,r25,32
	ctx.r4.s64 = ctx.r25.s64 + 32;
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82d927c0
	if (cr6.lt) goto loc_82D927C0;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_82D927C0:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82D927C4:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82d927c4
	if (!cr6.eq) goto loc_82D927C4;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r26,32
	ctx.r3.s64 = ctx.r26.s64 + 32;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x82D927E8;
	sub_8259CC28(ctx, base);
	// lwz r10,88(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 88);
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r30,r25,132
	ctx.r30.s64 = ctx.r25.s64 + 132;
	// mr r28,r29
	ctx.r28.u64 = ctx.r29.u64;
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
	// stw r10,88(r26)
	PPC_STORE_U32(ctx.r26.u32 + 88, ctx.r10.u32);
	// li r27,15
	ctx.r27.s64 = 15;
loc_82D92804:
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82d92818
	if (cr6.lt) goto loc_82D92818;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// b 0x82d9281c
	goto loc_82D9281C;
loc_82D92818:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_82D9281C:
	// stw r27,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r27.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r29,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r29.u32);
	// stb r29,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r29.u8);
loc_82D9282C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82d9282c
	if (!cr6.eq) goto loc_82D9282C;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x82D92850;
	sub_824208C8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x835fb448
	ctx.lr = 0x82D92858;
	sub_835FB448(ctx, base);
	// bl 0x8252e3c0
	ctx.lr = 0x82D9285C;
	sub_8252E3C0(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82D92864:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82d92864
	if (!cr6.eq) goto loc_82D92864;
	// subf r11,r6,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r6.s64;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// rotlwi r7,r11,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x827a8810
	ctx.lr = 0x82D92890;
	sub_827A8810(ctx, base);
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82d928c8
	if (cr6.eq) goto loc_82D928C8;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82d928ac
	if (cr6.lt) goto loc_82D928AC;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8386d088
	ctx.lr = 0x82D928AC;
	sub_8386D088(ctx, base);
loc_82D928AC:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// stw r27,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r27.u32);
	// stw r29,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r29.u32);
	// cmpwi cr6,r31,8
	cr6.compare<int32_t>(ctx.r31.s32, 8, xer);
	// stb r29,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r29.u8);
	// blt cr6,0x82d92804
	if (cr6.lt) goto loc_82D92804;
	// b 0x82d928e8
	goto loc_82D928E8;
loc_82D928C8:
	// mr r28,r31
	ctx.r28.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82d928dc
	if (cr6.lt) goto loc_82D928DC;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8386d088
	ctx.lr = 0x82D928DC;
	sub_8386D088(ctx, base);
loc_82D928DC:
	// stw r27,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r27.u32);
	// stw r29,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r29.u32);
	// stb r29,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r29.u8);
loc_82D928E8:
	// cmpwi cr6,r28,5
	cr6.compare<int32_t>(ctx.r28.s32, 5, xer);
	// stw r28,108(r26)
	PPC_STORE_U32(ctx.r26.u32 + 108, ctx.r28.u32);
	// bne cr6,0x82d928fc
	if (!cr6.eq) goto loc_82D928FC;
	// lwz r11,92(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 92);
	// b 0x82d92900
	goto loc_82D92900;
loc_82D928FC:
	// li r11,-1
	ctx.r11.s64 = -1;
loc_82D92900:
	// stw r11,92(r26)
	PPC_STORE_U32(ctx.r26.u32 + 92, ctx.r11.u32);
	// addi r3,r25,96
	ctx.r3.s64 = ctx.r25.s64 + 96;
	// bl 0x82d90990
	ctx.lr = 0x82D9290C;
	sub_82D90990(ctx, base);
	// stw r3,96(r26)
	PPC_STORE_U32(ctx.r26.u32 + 96, ctx.r3.u32);
	// lwz r11,236(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 236);
	// stw r11,100(r26)
	PPC_STORE_U32(ctx.r26.u32 + 100, ctx.r11.u32);
	// lwz r10,108(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 108);
	// lwz r9,240(r25)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r25.u32 + 240);
	// cmpwi cr6,r10,6
	cr6.compare<int32_t>(ctx.r10.s32, 6, xer);
	// stw r9,104(r26)
	PPC_STORE_U32(ctx.r26.u32 + 104, ctx.r9.u32);
	// bne cr6,0x82d92940
	if (!cr6.eq) goto loc_82D92940;
	// lwz r11,124(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 124);
	// stw r11,120(r26)
	PPC_STORE_U32(ctx.r26.u32 + 120, ctx.r11.u32);
	// lwz r10,128(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 128);
	// stw r10,124(r26)
	PPC_STORE_U32(ctx.r26.u32 + 124, ctx.r10.u32);
	// b 0x82d92948
	goto loc_82D92948;
loc_82D92940:
	// stw r29,120(r26)
	PPC_STORE_U32(ctx.r26.u32 + 120, ctx.r29.u32);
	// stw r29,124(r26)
	PPC_STORE_U32(ctx.r26.u32 + 124, ctx.r29.u32);
loc_82D92948:
	// lwz r11,228(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 228);
	// addi r30,r25,160
	ctx.r30.s64 = ctx.r25.s64 + 160;
	// mr r28,r29
	ctx.r28.u64 = ctx.r29.u64;
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
	// stw r11,112(r26)
	PPC_STORE_U32(ctx.r26.u32 + 112, ctx.r11.u32);
	// lwz r10,232(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 232);
	// stw r10,116(r26)
	PPC_STORE_U32(ctx.r26.u32 + 116, ctx.r10.u32);
loc_82D92964:
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82d92978
	if (cr6.lt) goto loc_82D92978;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// b 0x82d9297c
	goto loc_82D9297C;
loc_82D92978:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_82D9297C:
	// stw r27,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r27.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r29,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r29.u32);
	// stb r29,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r29.u8);
loc_82D9298C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82d9298c
	if (!cr6.eq) goto loc_82D9298C;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x82D929B0;
	sub_824208C8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x835fc1d8
	ctx.lr = 0x82D929B8;
	sub_835FC1D8(ctx, base);
	// bl 0x8252e3c0
	ctx.lr = 0x82D929BC;
	sub_8252E3C0(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82D929C4:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82d929c4
	if (!cr6.eq) goto loc_82D929C4;
	// subf r11,r6,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r6.s64;
	// lwz r5,128(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// rotlwi r7,r11,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x827a8810
	ctx.lr = 0x82D929F0;
	sub_827A8810(ctx, base);
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82d92a28
	if (cr6.eq) goto loc_82D92A28;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82d92a0c
	if (cr6.lt) goto loc_82D92A0C;
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x8386d088
	ctx.lr = 0x82D92A0C;
	sub_8386D088(ctx, base);
loc_82D92A0C:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// stw r27,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r27.u32);
	// stw r29,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r29.u32);
	// cmpwi cr6,r31,8
	cr6.compare<int32_t>(ctx.r31.s32, 8, xer);
	// stb r29,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r29.u8);
	// blt cr6,0x82d92964
	if (cr6.lt) goto loc_82D92964;
	// b 0x82d92a48
	goto loc_82D92A48;
loc_82D92A28:
	// mr r28,r31
	ctx.r28.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82d92a3c
	if (cr6.lt) goto loc_82D92A3C;
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x8386d088
	ctx.lr = 0x82D92A3C;
	sub_8386D088(ctx, base);
loc_82D92A3C:
	// stw r27,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r27.u32);
	// stw r29,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r29.u32);
	// stb r29,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r29.u8);
loc_82D92A48:
	// addi r30,r25,188
	ctx.r30.s64 = ctx.r25.s64 + 188;
	// stw r28,128(r26)
	PPC_STORE_U32(ctx.r26.u32 + 128, ctx.r28.u32);
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
loc_82D92A54:
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82d92a68
	if (cr6.lt) goto loc_82D92A68;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// b 0x82d92a6c
	goto loc_82D92A6C;
loc_82D92A68:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_82D92A6C:
	// stw r27,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r27.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r29,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r29.u32);
	// stb r29,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r29.u8);
loc_82D92A7C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82d92a7c
	if (!cr6.eq) goto loc_82D92A7C;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x82D92AA0;
	sub_824208C8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x835fcc58
	ctx.lr = 0x82D92AA8;
	sub_835FCC58(ctx, base);
	// bl 0x8252e3c0
	ctx.lr = 0x82D92AAC;
	sub_8252E3C0(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82D92AB4:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82d92ab4
	if (!cr6.eq) goto loc_82D92AB4;
	// subf r11,r6,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r6.s64;
	// lwz r5,160(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// rotlwi r7,r11,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x827a8810
	ctx.lr = 0x82D92AE0;
	sub_827A8810(ctx, base);
	// lwz r11,164(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82d92b18
	if (cr6.eq) goto loc_82D92B18;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82d92afc
	if (cr6.lt) goto loc_82D92AFC;
	// lwz r3,144(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// bl 0x8386d088
	ctx.lr = 0x82D92AFC;
	sub_8386D088(ctx, base);
loc_82D92AFC:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// stw r27,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r27.u32);
	// stw r29,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r29.u32);
	// cmpwi cr6,r31,4
	cr6.compare<int32_t>(ctx.r31.s32, 4, xer);
	// stb r29,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r29.u8);
	// blt cr6,0x82d92a54
	if (cr6.lt) goto loc_82D92A54;
	// b 0x82d92b2c
	goto loc_82D92B2C;
loc_82D92B18:
	// mr r28,r31
	ctx.r28.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82d92b2c
	if (cr6.lt) goto loc_82D92B2C;
	// lwz r3,144(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// bl 0x8386d088
	ctx.lr = 0x82D92B2C;
	sub_8386D088(ctx, base);
loc_82D92B2C:
	// stw r28,132(r26)
	PPC_STORE_U32(ctx.r26.u32 + 132, ctx.r28.u32);
	// lwz r11,220(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 220);
	// stw r11,140(r26)
	PPC_STORE_U32(ctx.r26.u32 + 140, ctx.r11.u32);
	// lwz r10,224(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 224);
	// stw r10,144(r26)
	PPC_STORE_U32(ctx.r26.u32 + 144, ctx.r10.u32);
	// lwz r9,216(r25)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r25.u32 + 216);
	// stw r9,136(r26)
	PPC_STORE_U32(ctx.r26.u32 + 136, ctx.r9.u32);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D92B50"))) PPC_WEAK_FUNC(sub_82D92B50);
PPC_FUNC_IMPL(__imp__sub_82D92B50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdac4
	ctx.lr = 0x82D92B58;
	__savegprlr_19(ctx, base);
	// stwu r1,-3744(r1)
	ea = -3744 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x82d86078
	ctx.lr = 0x82D92B64;
	sub_82D86078(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d92e50
	if (cr6.eq) goto loc_82D92E50;
	// lwz r3,116(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d92e50
	if (cr6.eq) goto loc_82D92E50;
	// bl 0x8290b4c8
	ctx.lr = 0x82D92B80;
	sub_8290B4C8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d92e50
	if (cr6.eq) goto loc_82D92E50;
	// lwz r3,116(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// bl 0x825832f0
	ctx.lr = 0x82D92B94;
	sub_825832F0(ctx, base);
	// bl 0x82da75d8
	ctx.lr = 0x82D92B98;
	sub_82DA75D8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,784
	ctx.r3.s64 = ctx.r1.s64 + 784;
	// bl 0x82d91f00
	ctx.lr = 0x82D92BA4;
	sub_82D91F00(ctx, base);
	// lis r10,3
	ctx.r10.s64 = 196608;
	// lwz r11,856(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 856);
	// ori r9,r10,65535
	ctx.r9.u64 = ctx.r10.u64 | 65535;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// clrlwi r11,r11,14
	ctx.r11.u64 = ctx.r11.u32 & 0x3FFFF;
	// ble cr6,0x82d92bc0
	if (!cr6.gt) goto loc_82D92BC0;
	// li r11,-1
	ctx.r11.s64 = -1;
loc_82D92BC0:
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// li r11,6
	ctx.r11.s64 = 6;
	// li r22,0
	ctx.r22.s64 = 0;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r22,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r22.u8);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82da4040
	ctx.lr = 0x82D92BE0;
	sub_82DA4040(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82d92c4c
	if (cr6.eq) goto loc_82D92C4C;
	// lwz r11,816(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 816);
	// addi r3,r28,4
	ctx.r3.s64 = ctx.r28.s64 + 4;
	// lwz r4,796(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 796);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x82d92c04
	if (!cr6.lt) goto loc_82D92C04;
	// addi r4,r1,796
	ctx.r4.s64 = ctx.r1.s64 + 796;
loc_82D92C04:
	// li r5,70
	ctx.r5.s64 = 70;
	// bl 0x831ce980
	ctx.lr = 0x82D92C0C;
	sub_831CE980(ctx, base);
	// lwz r10,844(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 844);
	// addi r11,r28,74
	ctx.r11.s64 = ctx.r28.s64 + 74;
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// lwz r10,824(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 824);
	// bge cr6,0x82d92c24
	if (!cr6.lt) goto loc_82D92C24;
	// addi r10,r1,824
	ctx.r10.s64 = ctx.r1.s64 + 824;
loc_82D92C24:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// lhz r8,852(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + 852);
	// stb r9,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r9.u8);
	// lbz r7,1(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// stb r7,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r7.u8);
	// lbz r6,2(r10)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + 2);
	// stb r6,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r6.u8);
	// lbz r5,3(r10)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r10.u32 + 3);
	// stb r5,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r5.u8);
	// sth r8,78(r28)
	PPC_STORE_U16(ctx.r28.u32 + 78, ctx.r8.u16);
loc_82D92C4C:
	// lwz r11,3564(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 3564);
	// stw r11,632(r28)
	PPC_STORE_U32(ctx.r28.u32 + 632, ctx.r11.u32);
	// bl 0x82d8a820
	ctx.lr = 0x82D92C58;
	sub_82D8A820(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82d92c74
	if (!cr6.eq) goto loc_82D92C74;
	// bl 0x82d8a900
	ctx.lr = 0x82D92C68;
	sub_82D8A900(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d92c88
	if (cr6.eq) goto loc_82D92C88;
loc_82D92C74:
	// lwz r11,632(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 632);
	// cmplwi cr6,r11,18
	cr6.compare<uint32_t>(ctx.r11.u32, 18, xer);
	// ble cr6,0x82d92c88
	if (!cr6.gt) goto loc_82D92C88;
	// li r11,18
	ctx.r11.s64 = 18;
	// stw r11,632(r28)
	PPC_STORE_U32(ctx.r28.u32 + 632, ctx.r11.u32);
loc_82D92C88:
	// lwz r11,788(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 788);
	// li r25,70
	ctx.r25.s64 = 70;
	// cmpwi cr6,r11,5
	cr6.compare<int32_t>(ctx.r11.s32, 5, xer);
	// bne cr6,0x82d92c9c
	if (!cr6.eq) goto loc_82D92C9C;
	// li r25,99
	ctx.r25.s64 = 99;
loc_82D92C9C:
	// lwz r11,632(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 632);
	// mr r24,r22
	ctx.r24.u64 = ctx.r22.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// ble cr6,0x82d92e18
	if (!cr6.gt) goto loc_82D92E18;
	// mr r27,r22
	ctx.r27.u64 = ctx.r22.u64;
	// addi r26,r1,1388
	ctx.r26.s64 = ctx.r1.s64 + 1388;
	// addi r31,r28,609
	ctx.r31.s64 = ctx.r28.s64 + 609;
	// li r23,27
	ctx.r23.s64 = 27;
loc_82D92CBC:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// sth r22,88(r1)
	PPC_STORE_U16(ctx.r1.u32 + 88, ctx.r22.u16);
	// bl 0x825832e0
	ctx.lr = 0x82D92CC8;
	sub_825832E0(ctx, base);
	// stw r3,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// lwz r11,3616(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 3616);
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(ctx.r11.s32, -1, xer);
	// ld r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// stdx r10,r31,r23
	PPC_STORE_U64(ctx.r31.u32 + ctx.r23.u32, ctx.r10.u64);
	// beq cr6,0x82d92da8
	if (cr6.eq) goto loc_82D92DA8;
	// lwz r11,632(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 632);
	// mr r30,r22
	ctx.r30.u64 = ctx.r22.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// ble cr6,0x82d92de4
	if (!cr6.gt) goto loc_82D92DE4;
	// addi r29,r1,2924
	ctx.r29.s64 = ctx.r1.s64 + 2924;
loc_82D92CF4:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r21,0(r29)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x825832e0
	ctx.lr = 0x82D92D00;
	sub_825832E0(ctx, base);
	// cmplw cr6,r3,r21
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r21.u32, xer);
	// beq cr6,0x82d92d20
	if (cr6.eq) goto loc_82D92D20;
	// lwz r11,632(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 632);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,20
	ctx.r29.s64 = ctx.r29.s64 + 20;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, xer);
	// blt cr6,0x82d92cf4
	if (cr6.lt) goto loc_82D92CF4;
	// b 0x82d92de4
	goto loc_82D92DE4;
loc_82D92D20:
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,2928
	ctx.r10.s64 = ctx.r1.s64 + 2928;
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r9,1(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r8,2(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r7,3(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// lbz r6,4(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// lbz r5,5(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5);
	// lbz r4,6(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 6);
	// lbz r3,7(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 7);
	// lbz r30,8(r11)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r11.u32 + 8);
	// lbz r29,9(r11)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r11.u32 + 9);
	// lbz r21,10(r11)
	ctx.r21.u64 = PPC_LOAD_U8(ctx.r11.u32 + 10);
	// lbz r20,11(r11)
	ctx.r20.u64 = PPC_LOAD_U8(ctx.r11.u32 + 11);
	// lbz r19,12(r11)
	ctx.r19.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// lbz r11,13(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 13);
	// stb r10,37(r31)
	PPC_STORE_U8(ctx.r31.u32 + 37, ctx.r10.u8);
	// stb r9,38(r31)
	PPC_STORE_U8(ctx.r31.u32 + 38, ctx.r9.u8);
	// stb r8,39(r31)
	PPC_STORE_U8(ctx.r31.u32 + 39, ctx.r8.u8);
	// stb r7,40(r31)
	PPC_STORE_U8(ctx.r31.u32 + 40, ctx.r7.u8);
	// stb r6,41(r31)
	PPC_STORE_U8(ctx.r31.u32 + 41, ctx.r6.u8);
	// stb r5,42(r31)
	PPC_STORE_U8(ctx.r31.u32 + 42, ctx.r5.u8);
	// stb r4,43(r31)
	PPC_STORE_U8(ctx.r31.u32 + 43, ctx.r4.u8);
	// stb r3,44(r31)
	PPC_STORE_U8(ctx.r31.u32 + 44, ctx.r3.u8);
	// stb r30,45(r31)
	PPC_STORE_U8(ctx.r31.u32 + 45, ctx.r30.u8);
	// stb r29,46(r31)
	PPC_STORE_U8(ctx.r31.u32 + 46, ctx.r29.u8);
	// stb r21,47(r31)
	PPC_STORE_U8(ctx.r31.u32 + 47, ctx.r21.u8);
	// stb r20,48(r31)
	PPC_STORE_U8(ctx.r31.u32 + 48, ctx.r20.u8);
	// stb r19,49(r31)
	PPC_STORE_U8(ctx.r31.u32 + 49, ctx.r19.u8);
	// stb r11,50(r31)
	PPC_STORE_U8(ctx.r31.u32 + 50, ctx.r11.u8);
	// b 0x82d92de4
	goto loc_82D92DE4;
loc_82D92DA8:
	// li r10,7
	ctx.r10.s64 = 7;
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_82D92DB4:
	// cmpwi cr6,r11,7
	cr6.compare<int32_t>(ctx.r11.s32, 7, xer);
	// bge cr6,0x82d92ddc
	if (!cr6.lt) goto loc_82D92DDC;
	// add r10,r27,r11
	ctx.r10.u64 = ctx.r27.u64 + ctx.r11.u64;
	// add r9,r27,r11
	ctx.r9.u64 = ctx.r27.u64 + ctx.r11.u64;
	// addi r8,r10,323
	ctx.r8.s64 = ctx.r10.s64 + 323;
	// rlwinm r10,r9,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r7,r8,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// add r6,r10,r28
	ctx.r6.u64 = ctx.r10.u64 + ctx.r28.u64;
	// stbx r25,r7,r28
	PPC_STORE_U8(ctx.r7.u32 + ctx.r28.u32, ctx.r25.u8);
	// stb r25,647(r6)
	PPC_STORE_U8(ctx.r6.u32 + 647, ctx.r25.u8);
loc_82D92DDC:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x82d92db4
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82D92DB4;
loc_82D92DE4:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x825832d8
	ctx.lr = 0x82D92DEC;
	sub_825832D8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// stb r11,35(r31)
	PPC_STORE_U8(ctx.r31.u32 + 35, ctx.r11.u8);
	// bl 0x82a47dc0
	ctx.lr = 0x82D92DFC;
	sub_82A47DC0(ctx, base);
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
	// stbu r3,36(r31)
	ea = 36 + ctx.r31.u32;
	PPC_STORE_U8(ea, ctx.r3.u8);
	ctx.r31.u32 = ea;
	// addi r27,r27,18
	ctx.r27.s64 = ctx.r27.s64 + 18;
	// lwz r10,632(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 632);
	// addi r26,r26,48
	ctx.r26.s64 = ctx.r26.s64 + 48;
	// cmplw cr6,r24,r10
	cr6.compare<uint32_t>(ctx.r24.u32, ctx.r10.u32, xer);
	// blt cr6,0x82d92cbc
	if (cr6.lt) goto loc_82D92CBC;
loc_82D92E18:
	// lwz r11,3568(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 3568);
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// addi r4,r1,860
	ctx.r4.s64 = ctx.r1.s64 + 860;
	// sth r22,608(r28)
	PPC_STORE_U16(ctx.r28.u32 + 608, ctx.r22.u16);
	// li r5,528
	ctx.r5.s64 = 528;
	// stw r11,612(r28)
	PPC_STORE_U32(ctx.r28.u32 + 612, ctx.r11.u32);
	// bl 0x831ce980
	ctx.lr = 0x82D92E34;
	sub_831CE980(ctx, base);
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x82d8cea8
	ctx.lr = 0x82D92E3C;
	sub_82D8CEA8(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82d92e5c
	if (!cr6.eq) goto loc_82D92E5C;
	// addi r3,r1,784
	ctx.r3.s64 = ctx.r1.s64 + 784;
	// bl 0x82d8fe38
	ctx.lr = 0x82D92E50;
	sub_82D8FE38(ctx, base);
loc_82D92E50:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,3744
	ctx.r1.s64 = ctx.r1.s64 + 3744;
	// b 0x831cdb14
	__restgprlr_19(ctx, base);
	return;
loc_82D92E5C:
	// mr r31,r22
	ctx.r31.u64 = ctx.r22.u64;
	// addi r30,r1,3572
	ctx.r30.s64 = ctx.r1.s64 + 3572;
	// addi r27,r28,80
	ctx.r27.s64 = ctx.r28.s64 + 80;
	// addi r29,r28,616
	ctx.r29.s64 = ctx.r28.s64 + 616;
loc_82D92E6C:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// bl 0x82ac0af0
	ctx.lr = 0x82D92E7C;
	sub_82AC0AF0(ctx, base);
	// clrlwi r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// bge cr6,0x82d92ea4
	if (!cr6.lt) goto loc_82D92EA4;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,256
	ctx.r10.s64 = ctx.r1.s64 + 256;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x82abfda0
	ctx.lr = 0x82D92EA4;
	sub_82ABFDA0(ctx, base);
loc_82D92EA4:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82abfda0
	ctx.lr = 0x82D92EB0;
	sub_82ABFDA0(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// addi r27,r27,160
	ctx.r27.s64 = ctx.r27.s64 + 160;
	// cmplwi cr6,r31,2
	cr6.compare<uint32_t>(ctx.r31.u32, 2, xer);
	// blt cr6,0x82d92e6c
	if (cr6.lt) goto loc_82D92E6C;
	// addi r3,r28,560
	ctx.r3.s64 = ctx.r28.s64 + 560;
	// addi r4,r1,736
	ctx.r4.s64 = ctx.r1.s64 + 736;
	// li r5,47
	ctx.r5.s64 = 47;
	// bl 0x831ce980
	ctx.lr = 0x82D92ED8;
	sub_831CE980(ctx, base);
	// addi r3,r1,784
	ctx.r3.s64 = ctx.r1.s64 + 784;
	// bl 0x82d8fe38
	ctx.lr = 0x82D92EE0;
	sub_82D8FE38(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,3744
	ctx.r1.s64 = ctx.r1.s64 + 3744;
	// b 0x831cdb14
	__restgprlr_19(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D92EEC"))) PPC_WEAK_FUNC(sub_82D92EEC);
PPC_FUNC_IMPL(__imp__sub_82D92EEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D92EF0"))) PPC_WEAK_FUNC(sub_82D92EF0);
PPC_FUNC_IMPL(__imp__sub_82D92EF0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82D92EF8;
	__savegprlr_29(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r31,r11,27528
	ctx.r31.s64 = ctx.r11.s64 + 27528;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r4,r31,-104
	ctx.r4.s64 = ctx.r31.s64 + -104;
	// bl 0x831ce980
	ctx.lr = 0x82D92F1C;
	sub_831CE980(ctx, base);
	// addi r4,r31,-88
	ctx.r4.s64 = ctx.r31.s64 + -88;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// li r5,16
	ctx.r5.s64 = 16;
	// bl 0x831ce980
	ctx.lr = 0x82D92F2C;
	sub_831CE980(ctx, base);
	// addi r4,r31,-72
	ctx.r4.s64 = ctx.r31.s64 + -72;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// li r5,16
	ctx.r5.s64 = 16;
	// bl 0x831ce980
	ctx.lr = 0x82D92F3C;
	sub_831CE980(ctx, base);
	// addi r4,r31,-56
	ctx.r4.s64 = ctx.r31.s64 + -56;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// li r5,16
	ctx.r5.s64 = 16;
	// bl 0x831ce980
	ctx.lr = 0x82D92F4C;
	sub_831CE980(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x831ce980
	ctx.lr = 0x82D92F5C;
	sub_831CE980(ctx, base);
	// lwz r10,20(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// stw r9,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r9.u32);
	// blt cr6,0x82d92f78
	if (cr6.lt) goto loc_82D92F78;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// b 0x82d92f7c
	goto loc_82D92F7C;
loc_82D92F78:
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
loc_82D92F7C:
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// stb r9,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r9.u8);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_82D92F88:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82d92f88
	if (!cr6.eq) goto loc_82D92F88;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x82D92FB0;
	sub_8259CC28(ctx, base);
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// cmplwi cr6,r11,12
	cr6.compare<uint32_t>(ctx.r11.u32, 12, xer);
	// bgt cr6,0x82d93050
	if (cr6.gt) goto loc_82D93050;
	// lis r12,-32039
	ctx.r12.s64 = -2099707904;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,12244
	ctx.r12.s64 = ctx.r12.s64 + 12244;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_82D93008;
	case 1:
		goto loc_82D9301C;
	case 2:
		goto loc_82D9301C;
	case 3:
		goto loc_82D9301C;
	case 4:
		goto loc_82D93030;
	case 5:
		goto loc_82D93030;
	case 6:
		goto loc_82D93030;
	case 7:
		goto loc_82D93030;
	case 8:
		goto loc_82D93030;
	case 9:
		goto loc_82D93044;
	case 10:
		goto loc_82D93044;
	case 11:
		goto loc_82D93044;
	case 12:
		goto loc_82D93044;
	default:
		return;
	}
	// lwz r22,12296(r25)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r25.u32 + 12296);
	// lwz r22,12316(r25)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r25.u32 + 12316);
	// lwz r22,12316(r25)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r25.u32 + 12316);
	// lwz r22,12316(r25)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r25.u32 + 12316);
	// lwz r22,12336(r25)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r25.u32 + 12336);
	// lwz r22,12336(r25)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r25.u32 + 12336);
	// lwz r22,12336(r25)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r25.u32 + 12336);
	// lwz r22,12336(r25)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r25.u32 + 12336);
	// lwz r22,12336(r25)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r25.u32 + 12336);
	// lwz r22,12356(r25)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r25.u32 + 12356);
	// lwz r22,12356(r25)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r25.u32 + 12356);
	// lwz r22,12356(r25)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r25.u32 + 12356);
	// lwz r22,12356(r25)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r25.u32 + 12356);
loc_82D93008:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8259d6c0
	ctx.lr = 0x82D93014;
	sub_8259D6C0(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82D9301C:
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8259d6c0
	ctx.lr = 0x82D93028;
	sub_8259D6C0(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82D93030:
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8259d6c0
	ctx.lr = 0x82D9303C;
	sub_8259D6C0(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82D93044:
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8259d6c0
	ctx.lr = 0x82D93050;
	sub_8259D6C0(ctx, base);
loc_82D93050:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D93058"))) PPC_WEAK_FUNC(sub_82D93058);
PPC_FUNC_IMPL(__imp__sub_82D93058) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82D93060;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82d9310c
	if (cr6.eq) goto loc_82D9310C;
	// lwz r11,100(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 100);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x82d9310c
	if (cr6.eq) goto loc_82D9310C;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r31,r11,27556
	ctx.r31.s64 = ctx.r11.s64 + 27556;
	// addi r4,r31,-402
	ctx.r4.s64 = ctx.r31.s64 + -402;
	// bl 0x837b0c10
	ctx.lr = 0x82D93094;
	sub_837B0C10(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82da0e20
	ctx.lr = 0x82D930A0;
	sub_82DA0E20(ctx, base);
	// lwz r11,100(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 100);
	// addi r4,r31,-16
	ctx.r4.s64 = ctx.r31.s64 + -16;
	// addi r3,r11,100
	ctx.r3.s64 = ctx.r11.s64 + 100;
	// lwz r11,100(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82D930BC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d930d4
	if (cr6.eq) goto loc_82D930D4;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82d291e0
	ctx.lr = 0x82D930D4;
	sub_82D291E0(ctx, base);
loc_82D930D4:
	// lwz r11,100(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 100);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lbz r31,72(r29)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r29.u32 + 72);
	// addi r3,r11,100
	ctx.r3.s64 = ctx.r11.s64 + 100;
	// lwz r11,100(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82D930F4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d93104
	if (cr6.eq) goto loc_82D93104;
	// clrldi r4,r31,56
	ctx.r4.u64 = ctx.r31.u64 & 0xFF;
	// bl 0x82d294d0
	ctx.lr = 0x82D93104;
	sub_82D294D0(ctx, base);
loc_82D93104:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8387e8e0
	ctx.lr = 0x82D9310C;
	sub_8387E8E0(ctx, base);
loc_82D9310C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D93114"))) PPC_WEAK_FUNC(sub_82D93114);
PPC_FUNC_IMPL(__imp__sub_82D93114) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D93118"))) PPC_WEAK_FUNC(sub_82D93118);
PPC_FUNC_IMPL(__imp__sub_82D93118) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82D93120;
	__savegprlr_28(ctx, base);
	// stwu r1,-1584(r1)
	ea = -1584 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,27186
	ctx.r4.s64 = ctx.r11.s64 + 27186;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x8259cc28
	ctx.lr = 0x82D9313C;
	sub_8259CC28(ctx, base);
	// bl 0x82d86078
	ctx.lr = 0x82D93140;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82d93150
	if (!cr6.eq) goto loc_82D93150;
	// addi r1,r1,1584
	ctx.r1.s64 = ctx.r1.s64 + 1584;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82D93150:
	// lwz r3,116(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// bl 0x83815cb0
	ctx.lr = 0x82D93158;
	sub_83815CB0(ctx, base);
	// bl 0x825832d8
	ctx.lr = 0x82D9315C;
	sub_825832D8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x835d3178
	ctx.lr = 0x82D93164;
	sub_835D3178(ctx, base);
	// addi r11,r3,-1
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(ctx.r11.u32, 4, xer);
	// bgt cr6,0x82d93360
	if (cr6.gt) goto loc_82D93360;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x82d93230
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82D93230;
	// bdzf 4*cr6+eq,0x82d9330c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82D9330C;
	// bdzf 4*cr6+eq,0x82d93330
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82D93330;
	// bne cr6,0x82d93350
	if (!cr6.eq) goto loc_82D93350;
	// lwz r11,88(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 88);
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,65535
	cr6.compare<uint32_t>(ctx.r11.u32, 65535, xer);
	// beq cr6,0x82d93360
	if (cr6.eq) goto loc_82D93360;
	// bl 0x831156e8
	ctx.lr = 0x82D931A0;
	sub_831156E8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,48(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// bl 0x8311c628
	ctx.lr = 0x82D931AC;
	sub_8311C628(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// li r5,76
	ctx.r5.s64 = 76;
	// bl 0x831ce980
	ctx.lr = 0x82D931BC;
	sub_831CE980(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r1,144
	ctx.r11.s64 = ctx.r1.s64 + 144;
	// li r8,15
	ctx.r8.s64 = 15;
	// stw r10,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r10.u32);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// stb r10,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r10.u8);
	// stw r8,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r8.u32);
loc_82D931D8:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82d931d8
	if (!cr6.eq) goto loc_82D931D8;
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x82D93200;
	sub_8259CC28(ctx, base);
	// lwz r10,132(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r5,112(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// bge cr6,0x82d93214
	if (!cr6.lt) goto loc_82D93214;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
loc_82D93214:
	// lis r4,560
	ctx.r4.s64 = 36700160;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// ori r4,r4,360
	ctx.r4.u64 = ctx.r4.u64 | 360;
	// bl 0x82d042a8
	ctx.lr = 0x82D93224;
	sub_82D042A8(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8387e8e0
	ctx.lr = 0x82D9322C;
	sub_8387E8E0(ctx, base);
	// b 0x82d93360
	goto loc_82D93360;
loc_82D93230:
	// lwz r11,92(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 92);
	// clrlwi r31,r11,14
	ctx.r31.u64 = ctx.r11.u32 & 0x3FFFF;
	// bl 0x831156e8
	ctx.lr = 0x82D9323C;
	sub_831156E8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,48(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// bl 0x8311c148
	ctx.lr = 0x82D93248;
	sub_8311C148(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// li r5,1312
	ctx.r5.s64 = 1312;
	// bl 0x831ce980
	ctx.lr = 0x82D93258;
	sub_831CE980(ctx, base);
	// lis r8,-31775
	ctx.r8.s64 = -2082406400;
	// lwz r9,224(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r11,-14644(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -14644);
	// xor r7,r9,r11
	ctx.r7.u64 = ctx.r9.u64 ^ ctx.r11.u64;
	// rlwinm r6,r7,0,0,13
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFC0000;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// bne cr6,0x82d9328c
	if (!cr6.eq) goto loc_82D9328C;
	// xor r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 ^ ctx.r11.u64;
	// clrlwi r9,r11,14
	ctx.r9.u64 = ctx.r11.u32 & 0x3FFFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82d93290
	if (cr6.eq) goto loc_82D93290;
loc_82D9328C:
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_82D93290:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82d93360
	if (!cr6.eq) goto loc_82D93360;
	// addi r11,r1,228
	ctx.r11.s64 = ctx.r1.s64 + 228;
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// li r8,15
	ctx.r8.s64 = 15;
	// stb r10,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r10.u8);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
loc_82D932B4:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82d932b4
	if (!cr6.eq) goto loc_82D932B4;
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// addi r4,r1,228
	ctx.r4.s64 = ctx.r1.s64 + 228;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x82D932DC;
	sub_8259CC28(ctx, base);
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// bge cr6,0x82d932f0
	if (!cr6.lt) goto loc_82D932F0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
loc_82D932F0:
	// lis r4,560
	ctx.r4.s64 = 36700160;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// ori r4,r4,361
	ctx.r4.u64 = ctx.r4.u64 | 361;
	// bl 0x82d042a8
	ctx.lr = 0x82D93300;
	sub_82D042A8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8387e8e0
	ctx.lr = 0x82D93308;
	sub_8387E8E0(ctx, base);
	// b 0x82d93360
	goto loc_82D93360;
loc_82D9330C:
	// lwz r11,104(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 104);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82d93324
	if (!cr6.eq) goto loc_82D93324;
	// lwz r11,108(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 108);
	// cmplwi cr6,r11,99
	cr6.compare<uint32_t>(ctx.r11.u32, 99, xer);
	// bge cr6,0x82d93360
	if (!cr6.lt) goto loc_82D93360;
loc_82D93324:
	// lis r4,930
	ctx.r4.s64 = 60948480;
	// ori r4,r4,126
	ctx.r4.u64 = ctx.r4.u64 | 126;
	// b 0x82d93358
	goto loc_82D93358;
loc_82D93330:
	// lwz r11,112(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 112);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bgt cr6,0x82d93348
	if (cr6.gt) goto loc_82D93348;
	// lwz r11,116(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 116);
	// cmplwi cr6,r11,4000
	cr6.compare<uint32_t>(ctx.r11.u32, 4000, xer);
	// bge cr6,0x82d93360
	if (!cr6.lt) goto loc_82D93360;
loc_82D93348:
	// lis r4,561
	ctx.r4.s64 = 36765696;
	// b 0x82d93358
	goto loc_82D93358;
loc_82D93350:
	// lis r4,26
	ctx.r4.s64 = 1703936;
	// ori r4,r4,448
	ctx.r4.u64 = ctx.r4.u64 | 448;
loc_82D93358:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d04220
	ctx.lr = 0x82D93360;
	sub_82D04220(ctx, base);
loc_82D93360:
	// clrlwi r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d933b0
	if (cr6.eq) goto loc_82D933B0;
	// lwz r11,220(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 220);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82d93408
	if (!cr6.eq) goto loc_82D93408;
	// lwz r11,224(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 224);
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(ctx.r11.s32, -1, xer);
	// bne cr6,0x82d93408
	if (!cr6.eq) goto loc_82D93408;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831238b0
	ctx.lr = 0x82D9338C;
	sub_831238B0(ctx, base);
	// cmpwi cr6,r3,3
	cr6.compare<int32_t>(ctx.r3.s32, 3, xer);
	// bne cr6,0x82d933e0
	if (!cr6.eq) goto loc_82D933E0;
	// lwz r11,216(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 216);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// ble cr6,0x82d933b0
	if (!cr6.gt) goto loc_82D933B0;
	// lis r4,560
	ctx.r4.s64 = 36700160;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// ori r4,r4,514
	ctx.r4.u64 = ctx.r4.u64 | 514;
loc_82D933AC:
	// bl 0x82d04220
	ctx.lr = 0x82D933B0;
	sub_82D04220(ctx, base);
loc_82D933B0:
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82d933cc
	if (!cr6.eq) goto loc_82D933CC;
	// lis r4,108
	ctx.r4.s64 = 7077888;
	// ori r4,r4,11
	ctx.r4.u64 = ctx.r4.u64 | 11;
loc_82D933C4:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d04220
	ctx.lr = 0x82D933CC;
	sub_82D04220(ctx, base);
loc_82D933CC:
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r3,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r1,r1,1584
	ctx.r1.s64 = ctx.r1.s64 + 1584;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82D933E0:
	// lwz r11,212(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 212);
	// cmplwi cr6,r11,9999
	cr6.compare<uint32_t>(ctx.r11.u32, 9999, xer);
	// blt cr6,0x82d933f8
	if (cr6.lt) goto loc_82D933F8;
	// lwz r11,208(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 208);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// ble cr6,0x82d933b0
	if (!cr6.gt) goto loc_82D933B0;
loc_82D933F8:
	// lis r4,514
	ctx.r4.s64 = 33685504;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// ori r4,r4,16
	ctx.r4.u64 = ctx.r4.u64 | 16;
	// b 0x82d933ac
	goto loc_82D933AC;
loc_82D93408:
	// lis r4,503
	ctx.r4.s64 = 32964608;
	// ori r4,r4,6
	ctx.r4.u64 = ctx.r4.u64 | 6;
	// b 0x82d933c4
	goto loc_82D933C4;
}

__attribute__((alias("__imp__sub_82D93414"))) PPC_WEAK_FUNC(sub_82D93414);
PPC_FUNC_IMPL(__imp__sub_82D93414) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D93418"))) PPC_WEAK_FUNC(sub_82D93418);
PPC_FUNC_IMPL(__imp__sub_82D93418) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82D93420;
	__savegprlr_27(ctx, base);
	// stwu r1,-784(r1)
	ea = -784 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,27187
	ctx.r4.s64 = ctx.r11.s64 + 27187;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8259cc28
	ctx.lr = 0x82D9343C;
	sub_8259CC28(ctx, base);
	// bl 0x82d86078
	ctx.lr = 0x82D93440;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82d93450
	if (!cr6.eq) goto loc_82D93450;
	// addi r1,r1,784
	ctx.r1.s64 = ctx.r1.s64 + 784;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_82D93450:
	// lwz r3,116(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// bl 0x83815cb0
	ctx.lr = 0x82D93458;
	sub_83815CB0(ctx, base);
	// bl 0x825832d8
	ctx.lr = 0x82D9345C;
	sub_825832D8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x835d3178
	ctx.lr = 0x82D93464;
	sub_835D3178(ctx, base);
	// addi r11,r3,-1
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// lis r10,509
	ctx.r10.s64 = 33357824;
	// lis r9,509
	ctx.r9.s64 = 33357824;
	// ori r27,r10,212
	ctx.r27.u64 = ctx.r10.u64 | 212;
	// ori r28,r9,213
	ctx.r28.u64 = ctx.r9.u64 | 213;
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(ctx.r11.u32, 4, xer);
	// bgt cr6,0x82d935d0
	if (cr6.gt) goto loc_82D935D0;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x82d93498
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82D93498;
	// bdzf 4*cr6+eq,0x82d934b0
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82D934B0;
	// bdzf 4*cr6+eq,0x82d93504
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82D93504;
	// bne cr6,0x82d93534
	if (!cr6.eq) goto loc_82D93534;
loc_82D93498:
	// lis r4,560
	ctx.r4.s64 = 36700160;
	// lwz r5,96(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r4,r4,362
	ctx.r4.u64 = ctx.r4.u64 | 362;
	// bl 0x82d042a8
	ctx.lr = 0x82D934AC;
	sub_82D042A8(ctx, base);
	// b 0x82d935d0
	goto loc_82D935D0;
loc_82D934B0:
	// lwz r5,104(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 104);
	// lwz r6,108(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 108);
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// bne cr6,0x82d934dc
	if (!cr6.eq) goto loc_82D934DC;
	// cmplwi cr6,r6,99
	cr6.compare<uint32_t>(ctx.r6.u32, 99, xer);
loc_82D934C4:
	// bge cr6,0x82d935d0
	if (!cr6.lt) goto loc_82D935D0;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d042a8
	ctx.lr = 0x82D934D8;
	sub_82D042A8(ctx, base);
	// b 0x82d935d0
	goto loc_82D935D0;
loc_82D934DC:
	// cmplwi cr6,r6,99
	cr6.compare<uint32_t>(ctx.r6.u32, 99, xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// blt cr6,0x82d934f4
	if (cr6.lt) goto loc_82D934F4;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x82d042a8
	ctx.lr = 0x82D934F0;
	sub_82D042A8(ctx, base);
	// b 0x82d935d0
	goto loc_82D935D0;
loc_82D934F4:
	// lis r4,25
	ctx.r4.s64 = 1638400;
	// ori r4,r4,491
	ctx.r4.u64 = ctx.r4.u64 | 491;
	// bl 0x82d042a8
	ctx.lr = 0x82D93500;
	sub_82D042A8(ctx, base);
	// b 0x82d935d0
	goto loc_82D935D0;
loc_82D93504:
	// lwz r5,112(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 112);
	// lwz r6,116(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 116);
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// bne cr6,0x82d9351c
	if (!cr6.eq) goto loc_82D9351C;
	// cmplwi cr6,r6,4000
	cr6.compare<uint32_t>(ctx.r6.u32, 4000, xer);
	// b 0x82d934c4
	goto loc_82D934C4;
loc_82D9351C:
	// cmplwi cr6,r6,4000
	cr6.compare<uint32_t>(ctx.r6.u32, 4000, xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// blt cr6,0x82d934f4
	if (cr6.lt) goto loc_82D934F4;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x82d042a8
	ctx.lr = 0x82D93530;
	sub_82D042A8(ctx, base);
	// b 0x82d935d0
	goto loc_82D935D0;
loc_82D93534:
	// lwz r11,100(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 100);
	// li r10,0
	ctx.r10.s64 = 0;
	// sth r10,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r10.u16);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x831156e8
	ctx.lr = 0x82D93548;
	sub_831156E8(ctx, base);
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// lwz r3,48(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// bl 0x8311c260
	ctx.lr = 0x82D93554;
	sub_8311C260(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// li r5,632
	ctx.r5.s64 = 632;
	// bl 0x831ce980
	ctx.lr = 0x82D93564;
	sub_831CE980(ctx, base);
	// lis r11,-31775
	ctx.r11.s64 = -2082406400;
	// lhz r7,140(r1)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r1.u32 + 140);
	// addi r11,r11,-14628
	ctx.r11.s64 = ctx.r11.s64 + -14628;
	// lhz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// cmplw cr6,r7,r9
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r9.u32, xer);
	// bne cr6,0x82d93590
	if (!cr6.eq) goto loc_82D93590;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,144(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x82d93594
	if (cr6.eq) goto loc_82D93594;
loc_82D93590:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82D93594:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82d935d0
	if (!cr6.eq) goto loc_82D935D0;
	// addi r11,r1,148
	ctx.r11.s64 = ctx.r1.s64 + 148;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_82D935A8:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82d935a8
	if (!cr6.eq) goto loc_82D935A8;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r4,r1,148
	ctx.r4.s64 = ctx.r1.s64 + 148;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x82D935D0;
	sub_8259CC28(ctx, base);
loc_82D935D0:
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d936f8
	if (cr6.eq) goto loc_82D936F8;
	// lwz r5,220(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 220);
	// lwz r6,224(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 224);
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// bne cr6,0x82d93608
	if (!cr6.eq) goto loc_82D93608;
	// cmpwi cr6,r6,-1
	cr6.compare<int32_t>(ctx.r6.s32, -1, xer);
	// beq cr6,0x82d9362c
	if (cr6.eq) goto loc_82D9362C;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d042a8
	ctx.lr = 0x82D93604;
	sub_82D042A8(ctx, base);
	// b 0x82d9362c
	goto loc_82D9362C;
loc_82D93608:
	// cmpwi cr6,r6,-1
	cr6.compare<int32_t>(ctx.r6.s32, -1, xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne cr6,0x82d93620
	if (!cr6.eq) goto loc_82D93620;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x82d042a8
	ctx.lr = 0x82D9361C;
	sub_82D042A8(ctx, base);
	// b 0x82d9362c
	goto loc_82D9362C;
loc_82D93620:
	// lis r4,51
	ctx.r4.s64 = 3342336;
	// ori r4,r4,51
	ctx.r4.u64 = ctx.r4.u64 | 51;
	// bl 0x82d042a8
	ctx.lr = 0x82D9362C;
	sub_82D042A8(ctx, base);
loc_82D9362C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831238b0
	ctx.lr = 0x82D93634;
	sub_831238B0(ctx, base);
	// cmpwi cr6,r3,3
	cr6.compare<int32_t>(ctx.r3.s32, 3, xer);
	// bne cr6,0x82d9366c
	if (!cr6.eq) goto loc_82D9366C;
	// lwz r5,216(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 216);
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x82d936f8
	if (cr6.eq) goto loc_82D936F8;
	// lis r4,560
	ctx.r4.s64 = 36700160;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r4,r4,515
	ctx.r4.u64 = ctx.r4.u64 | 515;
	// bl 0x82d042a8
	ctx.lr = 0x82D93658;
	sub_82D042A8(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r3,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r1,r1,784
	ctx.r1.s64 = ctx.r1.s64 + 784;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_82D9366C:
	// lwz r5,208(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 208);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r6,212(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 212);
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// bne cr6,0x82d936a8
	if (!cr6.eq) goto loc_82D936A8;
	// cmplwi cr6,r6,9999
	cr6.compare<uint32_t>(ctx.r6.u32, 9999, xer);
	// blt cr6,0x82d936cc
	if (cr6.lt) goto loc_82D936CC;
	// lis r4,516
	ctx.r4.s64 = 33816576;
	// ori r4,r4,76
	ctx.r4.u64 = ctx.r4.u64 | 76;
	// bl 0x82d042a8
	ctx.lr = 0x82D93694;
	sub_82D042A8(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r3,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r1,r1,784
	ctx.r1.s64 = ctx.r1.s64 + 784;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_82D936A8:
	// cmplwi cr6,r6,9999
	cr6.compare<uint32_t>(ctx.r6.u32, 9999, xer);
	// blt cr6,0x82d936ec
	if (cr6.lt) goto loc_82D936EC;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x82d042a8
	ctx.lr = 0x82D936B8;
	sub_82D042A8(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r3,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r1,r1,784
	ctx.r1.s64 = ctx.r1.s64 + 784;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_82D936CC:
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82d042a8
	ctx.lr = 0x82D936D8;
	sub_82D042A8(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r3,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r1,r1,784
	ctx.r1.s64 = ctx.r1.s64 + 784;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_82D936EC:
	// lis r4,51
	ctx.r4.s64 = 3342336;
	// ori r4,r4,51
	ctx.r4.u64 = ctx.r4.u64 | 51;
	// bl 0x82d042a8
	ctx.lr = 0x82D936F8;
	sub_82D042A8(ctx, base);
loc_82D936F8:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r3,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r1,r1,784
	ctx.r1.s64 = ctx.r1.s64 + 784;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D9370C"))) PPC_WEAK_FUNC(sub_82D9370C);
PPC_FUNC_IMPL(__imp__sub_82D9370C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D93710"))) PPC_WEAK_FUNC(sub_82D93710);
PPC_FUNC_IMPL(__imp__sub_82D93710) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82D93718;
	__savegprlr_29(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// li r31,0
	ctx.r31.s64 = 0;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stw r31,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r31.u32);
	// blt cr6,0x82d9373c
	if (cr6.lt) goto loc_82D9373C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82d93740
	goto loc_82D93740;
loc_82D9373C:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_82D93740:
	// stb r31,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r31.u8);
	// bl 0x82d86078
	ctx.lr = 0x82D93748;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82d93758
	if (!cr6.eq) goto loc_82D93758;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82D93758:
	// lwz r3,116(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// bl 0x83815cb0
	ctx.lr = 0x82D93760;
	sub_83815CB0(ctx, base);
	// bl 0x825832d8
	ctx.lr = 0x82D93764;
	sub_825832D8(ctx, base);
	// lwz r6,224(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 224);
	// li r11,-1
	ctx.r11.s64 = -1;
	// lwz r5,220(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 220);
	// cmplw cr6,r6,r11
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r11.u32, xer);
	// blt cr6,0x82d93894
	if (cr6.lt) goto loc_82D93894;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// bne cr6,0x82d93894
	if (!cr6.eq) goto loc_82D93894;
	// lwz r5,208(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 208);
	// li r30,15
	ctx.r30.s64 = 15;
	// lwz r6,212(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 212);
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// stb r31,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r31.u8);
	// bne cr6,0x82d937d8
	if (!cr6.eq) goto loc_82D937D8;
	// cmplwi cr6,r6,9999
	cr6.compare<uint32_t>(ctx.r6.u32, 9999, xer);
	// blt cr6,0x82d937f4
	if (cr6.lt) goto loc_82D937F4;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r11,27676
	ctx.r4.s64 = ctx.r11.s64 + 27676;
	// bl 0x8259d6c0
	ctx.lr = 0x82D937B8;
	sub_8259D6C0(ctx, base);
	// lwz r10,16(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addic r9,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// subfe r31,r9,r10
	temp.u8 = (~ctx.r9.u32 + ctx.r10.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r31.u64 = ~ctx.r9.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// bl 0x8387e8e0
	ctx.lr = 0x82D937CC;
	sub_8387E8E0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82D937D8:
	// cmplwi cr6,r6,9999
	cr6.compare<uint32_t>(ctx.r6.u32, 9999, xer);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// blt cr6,0x82d9380c
	if (cr6.lt) goto loc_82D9380C;
	// lis r4,509
	ctx.r4.s64 = 33357824;
	// ori r4,r4,212
	ctx.r4.u64 = ctx.r4.u64 | 212;
	// bl 0x82d042a8
	ctx.lr = 0x82D937F0;
	sub_82D042A8(ctx, base);
	// b 0x82d93818
	goto loc_82D93818;
loc_82D937F4:
	// lis r4,509
	ctx.r4.s64 = 33357824;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// ori r4,r4,213
	ctx.r4.u64 = ctx.r4.u64 | 213;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82d042a8
	ctx.lr = 0x82D93808;
	sub_82D042A8(ctx, base);
	// b 0x82d93818
	goto loc_82D93818;
loc_82D9380C:
	// lis r4,51
	ctx.r4.s64 = 3342336;
	// ori r4,r4,51
	ctx.r4.u64 = ctx.r4.u64 | 51;
	// bl 0x82d042a8
	ctx.lr = 0x82D93818;
	sub_82D042A8(ctx, base);
loc_82D93818:
	// stw r30,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r30.u32);
	// lis r4,514
	ctx.r4.s64 = 33685504;
	// stw r31,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r31.u32);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// stb r31,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r31.u8);
	// ori r4,r4,16
	ctx.r4.u64 = ctx.r4.u64 | 16;
	// bl 0x82d04220
	ctx.lr = 0x82D93834;
	sub_82D04220(ctx, base);
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x82d93848
	if (!cr6.lt) goto loc_82D93848;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
loc_82D93848:
	// lwz r11,164(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lwz r5,144(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x82d9385c
	if (!cr6.lt) goto loc_82D9385C;
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
loc_82D9385C:
	// lis r4,206
	ctx.r4.s64 = 13500416;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// ori r4,r4,276
	ctx.r4.u64 = ctx.r4.u64 | 276;
	// bl 0x82d042a8
	ctx.lr = 0x82D9386C;
	sub_82D042A8(ctx, base);
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r31,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r31.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// bl 0x8387e8e0
	ctx.lr = 0x82D93880;
	sub_8387E8E0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8387e8e0
	ctx.lr = 0x82D93888;
	sub_8387E8E0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82D93894:
	// li r30,15
	ctx.r30.s64 = 15;
	// stw r31,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r31.u32);
	// cmpwi cr6,r6,-1
	cr6.compare<int32_t>(ctx.r6.s32, -1, xer);
	// stb r31,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r31.u8);
	// stw r30,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r30.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bne cr6,0x82d938c0
	if (!cr6.eq) goto loc_82D938C0;
	// lis r4,509
	ctx.r4.s64 = 33357824;
	// ori r4,r4,212
	ctx.r4.u64 = ctx.r4.u64 | 212;
	// bl 0x82d042a8
	ctx.lr = 0x82D938BC;
	sub_82D042A8(ctx, base);
	// b 0x82d938e8
	goto loc_82D938E8;
loc_82D938C0:
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// bne cr6,0x82d938dc
	if (!cr6.eq) goto loc_82D938DC;
	// lis r4,509
	ctx.r4.s64 = 33357824;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// ori r4,r4,213
	ctx.r4.u64 = ctx.r4.u64 | 213;
	// bl 0x82d042a8
	ctx.lr = 0x82D938D8;
	sub_82D042A8(ctx, base);
	// b 0x82d938e8
	goto loc_82D938E8;
loc_82D938DC:
	// lis r4,51
	ctx.r4.s64 = 3342336;
	// ori r4,r4,51
	ctx.r4.u64 = ctx.r4.u64 | 51;
	// bl 0x82d042a8
	ctx.lr = 0x82D938E8;
	sub_82D042A8(ctx, base);
loc_82D938E8:
	// stw r30,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r30.u32);
	// lis r4,503
	ctx.r4.s64 = 32964608;
	// stw r31,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r31.u32);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// stb r31,176(r1)
	PPC_STORE_U8(ctx.r1.u32 + 176, ctx.r31.u8);
	// ori r4,r4,6
	ctx.r4.u64 = ctx.r4.u64 | 6;
	// bl 0x82d04220
	ctx.lr = 0x82D93904;
	sub_82D04220(ctx, base);
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r6,112(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x82d93918
	if (!cr6.lt) goto loc_82D93918;
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
loc_82D93918:
	// lwz r11,196(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// lwz r5,176(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x82d9392c
	if (!cr6.lt) goto loc_82D9392C;
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
loc_82D9392C:
	// lis r4,206
	ctx.r4.s64 = 13500416;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// ori r4,r4,276
	ctx.r4.u64 = ctx.r4.u64 | 276;
	// bl 0x82d042a8
	ctx.lr = 0x82D9393C;
	sub_82D042A8(ctx, base);
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r31,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r31.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// bl 0x8387e8e0
	ctx.lr = 0x82D93950;
	sub_8387E8E0(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8387e8e0
	ctx.lr = 0x82D93958;
	sub_8387E8E0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D93964"))) PPC_WEAK_FUNC(sub_82D93964);
PPC_FUNC_IMPL(__imp__sub_82D93964) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

