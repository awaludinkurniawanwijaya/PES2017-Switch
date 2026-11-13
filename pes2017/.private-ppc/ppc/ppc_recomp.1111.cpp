#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_83D1AE2C"))) PPC_WEAK_FUNC(sub_83D1AE2C);
PPC_FUNC_IMPL(__imp__sub_83D1AE2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1AE30"))) PPC_WEAK_FUNC(sub_83D1AE30);
PPC_FUNC_IMPL(__imp__sub_83D1AE30) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1AE34"))) PPC_WEAK_FUNC(sub_83D1AE34);
PPC_FUNC_IMPL(__imp__sub_83D1AE34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1AE38"))) PPC_WEAK_FUNC(sub_83D1AE38);
PPC_FUNC_IMPL(__imp__sub_83D1AE38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31760
	ctx.r11.s64 = -2081423360;
	// addi r3,r11,25808
	ctx.r3.s64 = ctx.r11.s64 + 25808;
	// b 0x83523150
	sub_83523150(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83D1AE44"))) PPC_WEAK_FUNC(sub_83D1AE44);
PPC_FUNC_IMPL(__imp__sub_83D1AE44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1AE48"))) PPC_WEAK_FUNC(sub_83D1AE48);
PPC_FUNC_IMPL(__imp__sub_83D1AE48) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1AE4C"))) PPC_WEAK_FUNC(sub_83D1AE4C);
PPC_FUNC_IMPL(__imp__sub_83D1AE4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1AE50"))) PPC_WEAK_FUNC(sub_83D1AE50);
PPC_FUNC_IMPL(__imp__sub_83D1AE50) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1AE54"))) PPC_WEAK_FUNC(sub_83D1AE54);
PPC_FUNC_IMPL(__imp__sub_83D1AE54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1AE58"))) PPC_WEAK_FUNC(sub_83D1AE58);
PPC_FUNC_IMPL(__imp__sub_83D1AE58) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1AE5C"))) PPC_WEAK_FUNC(sub_83D1AE5C);
PPC_FUNC_IMPL(__imp__sub_83D1AE5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1AE60"))) PPC_WEAK_FUNC(sub_83D1AE60);
PPC_FUNC_IMPL(__imp__sub_83D1AE60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31760
	ctx.r11.s64 = -2081423360;
	// addi r3,r11,26864
	ctx.r3.s64 = ctx.r11.s64 + 26864;
	// b 0x8378e240
	sub_8378E240(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83D1AE6C"))) PPC_WEAK_FUNC(sub_83D1AE6C);
PPC_FUNC_IMPL(__imp__sub_83D1AE6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1AE70"))) PPC_WEAK_FUNC(sub_83D1AE70);
PPC_FUNC_IMPL(__imp__sub_83D1AE70) {
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
	// addi r31,r11,-12180
	ctx.r31.s64 = ctx.r11.s64 + -12180;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83d1aea8
	if (cr6.lt) goto loc_83D1AEA8;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x83D1AEA8;
	sub_825952B8(ctx, base);
loc_83D1AEA8:
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

__attribute__((alias("__imp__sub_83D1AED4"))) PPC_WEAK_FUNC(sub_83D1AED4);
PPC_FUNC_IMPL(__imp__sub_83D1AED4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1AED8"))) PPC_WEAK_FUNC(sub_83D1AED8);
PPC_FUNC_IMPL(__imp__sub_83D1AED8) {
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
	// addi r31,r11,-12152
	ctx.r31.s64 = ctx.r11.s64 + -12152;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83d1af10
	if (cr6.lt) goto loc_83D1AF10;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x83D1AF10;
	sub_825952B8(ctx, base);
loc_83D1AF10:
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

__attribute__((alias("__imp__sub_83D1AF3C"))) PPC_WEAK_FUNC(sub_83D1AF3C);
PPC_FUNC_IMPL(__imp__sub_83D1AF3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1AF40"))) PPC_WEAK_FUNC(sub_83D1AF40);
PPC_FUNC_IMPL(__imp__sub_83D1AF40) {
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
	// addi r31,r11,-12124
	ctx.r31.s64 = ctx.r11.s64 + -12124;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83d1af78
	if (cr6.lt) goto loc_83D1AF78;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x83D1AF78;
	sub_825952B8(ctx, base);
loc_83D1AF78:
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

__attribute__((alias("__imp__sub_83D1AFA4"))) PPC_WEAK_FUNC(sub_83D1AFA4);
PPC_FUNC_IMPL(__imp__sub_83D1AFA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1AFA8"))) PPC_WEAK_FUNC(sub_83D1AFA8);
PPC_FUNC_IMPL(__imp__sub_83D1AFA8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x83D1AFB0;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31760
	ctx.r11.s64 = -2081423360;
	// li r29,9
	ctx.r29.s64 = 9;
	// addi r11,r11,25816
	ctx.r11.s64 = ctx.r11.s64 + 25816;
	// li r27,2
	ctx.r27.s64 = 2;
	// addi r31,r11,736
	ctx.r31.s64 = ctx.r11.s64 + 736;
	// li r28,15
	ctx.r28.s64 = 15;
	// li r30,0
	ctx.r30.s64 = 0;
loc_83D1AFD0:
	// lwzu r11,-68(r31)
	ea = -68 + ctx.r31.u32;
	ctx.r11.u64 = PPC_LOAD_U32(ea);
	ctx.r31.u32 = ea;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83d1afec
	if (cr6.lt) goto loc_83D1AFEC;
	// lwz r4,-20(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + -20);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// bl 0x825952b8
	ctx.lr = 0x83D1AFEC;
	sub_825952B8(ctx, base);
loc_83D1AFEC:
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
	// blt cr6,0x83d1b014
	if (cr6.lt) goto loc_83D1B014;
	// lwz r4,-48(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + -48);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// bl 0x825952b8
	ctx.lr = 0x83D1B014;
	sub_825952B8(ctx, base);
loc_83D1B014:
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
	// bge 0x83d1afd0
	if (!cr0.lt) goto loc_83D1AFD0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83D1B030"))) PPC_WEAK_FUNC(sub_83D1B030);
PPC_FUNC_IMPL(__imp__sub_83D1B030) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1B034"))) PPC_WEAK_FUNC(sub_83D1B034);
PPC_FUNC_IMPL(__imp__sub_83D1B034) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1B038"))) PPC_WEAK_FUNC(sub_83D1B038);
PPC_FUNC_IMPL(__imp__sub_83D1B038) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1B03C"))) PPC_WEAK_FUNC(sub_83D1B03C);
PPC_FUNC_IMPL(__imp__sub_83D1B03C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1B040"))) PPC_WEAK_FUNC(sub_83D1B040);
PPC_FUNC_IMPL(__imp__sub_83D1B040) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1B044"))) PPC_WEAK_FUNC(sub_83D1B044);
PPC_FUNC_IMPL(__imp__sub_83D1B044) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1B048"))) PPC_WEAK_FUNC(sub_83D1B048);
PPC_FUNC_IMPL(__imp__sub_83D1B048) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1B04C"))) PPC_WEAK_FUNC(sub_83D1B04C);
PPC_FUNC_IMPL(__imp__sub_83D1B04C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1B050"))) PPC_WEAK_FUNC(sub_83D1B050);
PPC_FUNC_IMPL(__imp__sub_83D1B050) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1B054"))) PPC_WEAK_FUNC(sub_83D1B054);
PPC_FUNC_IMPL(__imp__sub_83D1B054) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1B058"))) PPC_WEAK_FUNC(sub_83D1B058);
PPC_FUNC_IMPL(__imp__sub_83D1B058) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1B05C"))) PPC_WEAK_FUNC(sub_83D1B05C);
PPC_FUNC_IMPL(__imp__sub_83D1B05C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1B060"))) PPC_WEAK_FUNC(sub_83D1B060);
PPC_FUNC_IMPL(__imp__sub_83D1B060) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1B064"))) PPC_WEAK_FUNC(sub_83D1B064);
PPC_FUNC_IMPL(__imp__sub_83D1B064) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1B068"))) PPC_WEAK_FUNC(sub_83D1B068);
PPC_FUNC_IMPL(__imp__sub_83D1B068) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1B06C"))) PPC_WEAK_FUNC(sub_83D1B06C);
PPC_FUNC_IMPL(__imp__sub_83D1B06C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1B070"))) PPC_WEAK_FUNC(sub_83D1B070);
PPC_FUNC_IMPL(__imp__sub_83D1B070) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1B074"))) PPC_WEAK_FUNC(sub_83D1B074);
PPC_FUNC_IMPL(__imp__sub_83D1B074) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1B078"))) PPC_WEAK_FUNC(sub_83D1B078);
PPC_FUNC_IMPL(__imp__sub_83D1B078) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1B07C"))) PPC_WEAK_FUNC(sub_83D1B07C);
PPC_FUNC_IMPL(__imp__sub_83D1B07C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1B080"))) PPC_WEAK_FUNC(sub_83D1B080);
PPC_FUNC_IMPL(__imp__sub_83D1B080) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1B084"))) PPC_WEAK_FUNC(sub_83D1B084);
PPC_FUNC_IMPL(__imp__sub_83D1B084) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1B088"))) PPC_WEAK_FUNC(sub_83D1B088);
PPC_FUNC_IMPL(__imp__sub_83D1B088) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1B08C"))) PPC_WEAK_FUNC(sub_83D1B08C);
PPC_FUNC_IMPL(__imp__sub_83D1B08C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1B090"))) PPC_WEAK_FUNC(sub_83D1B090);
PPC_FUNC_IMPL(__imp__sub_83D1B090) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31760
	ctx.r11.s64 = -2081423360;
	// addi r3,r11,26932
	ctx.r3.s64 = ctx.r11.s64 + 26932;
	// b 0x83523150
	sub_83523150(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83D1B09C"))) PPC_WEAK_FUNC(sub_83D1B09C);
PPC_FUNC_IMPL(__imp__sub_83D1B09C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1B0A0"))) PPC_WEAK_FUNC(sub_83D1B0A0);
PPC_FUNC_IMPL(__imp__sub_83D1B0A0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1B0A4"))) PPC_WEAK_FUNC(sub_83D1B0A4);
PPC_FUNC_IMPL(__imp__sub_83D1B0A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1B0A8"))) PPC_WEAK_FUNC(sub_83D1B0A8);
PPC_FUNC_IMPL(__imp__sub_83D1B0A8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1B0AC"))) PPC_WEAK_FUNC(sub_83D1B0AC);
PPC_FUNC_IMPL(__imp__sub_83D1B0AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1B0B0"))) PPC_WEAK_FUNC(sub_83D1B0B0);
PPC_FUNC_IMPL(__imp__sub_83D1B0B0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1B0B4"))) PPC_WEAK_FUNC(sub_83D1B0B4);
PPC_FUNC_IMPL(__imp__sub_83D1B0B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1B0B8"))) PPC_WEAK_FUNC(sub_83D1B0B8);
PPC_FUNC_IMPL(__imp__sub_83D1B0B8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1B0BC"))) PPC_WEAK_FUNC(sub_83D1B0BC);
PPC_FUNC_IMPL(__imp__sub_83D1B0BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1B0C0"))) PPC_WEAK_FUNC(sub_83D1B0C0);
PPC_FUNC_IMPL(__imp__sub_83D1B0C0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1B0C4"))) PPC_WEAK_FUNC(sub_83D1B0C4);
PPC_FUNC_IMPL(__imp__sub_83D1B0C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1B0C8"))) PPC_WEAK_FUNC(sub_83D1B0C8);
PPC_FUNC_IMPL(__imp__sub_83D1B0C8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1B0CC"))) PPC_WEAK_FUNC(sub_83D1B0CC);
PPC_FUNC_IMPL(__imp__sub_83D1B0CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1B0D0"))) PPC_WEAK_FUNC(sub_83D1B0D0);
PPC_FUNC_IMPL(__imp__sub_83D1B0D0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1B0D4"))) PPC_WEAK_FUNC(sub_83D1B0D4);
PPC_FUNC_IMPL(__imp__sub_83D1B0D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1B0D8"))) PPC_WEAK_FUNC(sub_83D1B0D8);
PPC_FUNC_IMPL(__imp__sub_83D1B0D8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1B0DC"))) PPC_WEAK_FUNC(sub_83D1B0DC);
PPC_FUNC_IMPL(__imp__sub_83D1B0DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1B0E0"))) PPC_WEAK_FUNC(sub_83D1B0E0);
PPC_FUNC_IMPL(__imp__sub_83D1B0E0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1B0E4"))) PPC_WEAK_FUNC(sub_83D1B0E4);
PPC_FUNC_IMPL(__imp__sub_83D1B0E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1B0E8"))) PPC_WEAK_FUNC(sub_83D1B0E8);
PPC_FUNC_IMPL(__imp__sub_83D1B0E8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1B0EC"))) PPC_WEAK_FUNC(sub_83D1B0EC);
PPC_FUNC_IMPL(__imp__sub_83D1B0EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1B0F0"))) PPC_WEAK_FUNC(sub_83D1B0F0);
PPC_FUNC_IMPL(__imp__sub_83D1B0F0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1B0F4"))) PPC_WEAK_FUNC(sub_83D1B0F4);
PPC_FUNC_IMPL(__imp__sub_83D1B0F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1B0F8"))) PPC_WEAK_FUNC(sub_83D1B0F8);
PPC_FUNC_IMPL(__imp__sub_83D1B0F8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1B0FC"))) PPC_WEAK_FUNC(sub_83D1B0FC);
PPC_FUNC_IMPL(__imp__sub_83D1B0FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1B100"))) PPC_WEAK_FUNC(sub_83D1B100);
PPC_FUNC_IMPL(__imp__sub_83D1B100) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1B104"))) PPC_WEAK_FUNC(sub_83D1B104);
PPC_FUNC_IMPL(__imp__sub_83D1B104) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1B108"))) PPC_WEAK_FUNC(sub_83D1B108);
PPC_FUNC_IMPL(__imp__sub_83D1B108) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1B10C"))) PPC_WEAK_FUNC(sub_83D1B10C);
PPC_FUNC_IMPL(__imp__sub_83D1B10C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1B110"))) PPC_WEAK_FUNC(sub_83D1B110);
PPC_FUNC_IMPL(__imp__sub_83D1B110) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1B114"))) PPC_WEAK_FUNC(sub_83D1B114);
PPC_FUNC_IMPL(__imp__sub_83D1B114) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1B118"))) PPC_WEAK_FUNC(sub_83D1B118);
PPC_FUNC_IMPL(__imp__sub_83D1B118) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31760
	ctx.r11.s64 = -2081423360;
	// addi r3,r11,27304
	ctx.r3.s64 = ctx.r11.s64 + 27304;
	// b 0x83523150
	sub_83523150(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83D1B124"))) PPC_WEAK_FUNC(sub_83D1B124);
PPC_FUNC_IMPL(__imp__sub_83D1B124) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1B128"))) PPC_WEAK_FUNC(sub_83D1B128);
PPC_FUNC_IMPL(__imp__sub_83D1B128) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1B12C"))) PPC_WEAK_FUNC(sub_83D1B12C);
PPC_FUNC_IMPL(__imp__sub_83D1B12C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1B130"))) PPC_WEAK_FUNC(sub_83D1B130);
PPC_FUNC_IMPL(__imp__sub_83D1B130) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1B134"))) PPC_WEAK_FUNC(sub_83D1B134);
PPC_FUNC_IMPL(__imp__sub_83D1B134) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1B138"))) PPC_WEAK_FUNC(sub_83D1B138);
PPC_FUNC_IMPL(__imp__sub_83D1B138) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1B13C"))) PPC_WEAK_FUNC(sub_83D1B13C);
PPC_FUNC_IMPL(__imp__sub_83D1B13C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1B140"))) PPC_WEAK_FUNC(sub_83D1B140);
PPC_FUNC_IMPL(__imp__sub_83D1B140) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1B144"))) PPC_WEAK_FUNC(sub_83D1B144);
PPC_FUNC_IMPL(__imp__sub_83D1B144) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1B148"))) PPC_WEAK_FUNC(sub_83D1B148);
PPC_FUNC_IMPL(__imp__sub_83D1B148) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1B14C"))) PPC_WEAK_FUNC(sub_83D1B14C);
PPC_FUNC_IMPL(__imp__sub_83D1B14C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1B150"))) PPC_WEAK_FUNC(sub_83D1B150);
PPC_FUNC_IMPL(__imp__sub_83D1B150) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1B154"))) PPC_WEAK_FUNC(sub_83D1B154);
PPC_FUNC_IMPL(__imp__sub_83D1B154) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1B158"))) PPC_WEAK_FUNC(sub_83D1B158);
PPC_FUNC_IMPL(__imp__sub_83D1B158) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1B15C"))) PPC_WEAK_FUNC(sub_83D1B15C);
PPC_FUNC_IMPL(__imp__sub_83D1B15C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1B160"))) PPC_WEAK_FUNC(sub_83D1B160);
PPC_FUNC_IMPL(__imp__sub_83D1B160) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1B164"))) PPC_WEAK_FUNC(sub_83D1B164);
PPC_FUNC_IMPL(__imp__sub_83D1B164) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1B168"))) PPC_WEAK_FUNC(sub_83D1B168);
PPC_FUNC_IMPL(__imp__sub_83D1B168) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1B16C"))) PPC_WEAK_FUNC(sub_83D1B16C);
PPC_FUNC_IMPL(__imp__sub_83D1B16C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1B170"))) PPC_WEAK_FUNC(sub_83D1B170);
PPC_FUNC_IMPL(__imp__sub_83D1B170) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1B174"))) PPC_WEAK_FUNC(sub_83D1B174);
PPC_FUNC_IMPL(__imp__sub_83D1B174) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1B178"))) PPC_WEAK_FUNC(sub_83D1B178);
PPC_FUNC_IMPL(__imp__sub_83D1B178) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1B17C"))) PPC_WEAK_FUNC(sub_83D1B17C);
PPC_FUNC_IMPL(__imp__sub_83D1B17C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1B180"))) PPC_WEAK_FUNC(sub_83D1B180);
PPC_FUNC_IMPL(__imp__sub_83D1B180) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1B184"))) PPC_WEAK_FUNC(sub_83D1B184);
PPC_FUNC_IMPL(__imp__sub_83D1B184) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1B188"))) PPC_WEAK_FUNC(sub_83D1B188);
PPC_FUNC_IMPL(__imp__sub_83D1B188) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1B18C"))) PPC_WEAK_FUNC(sub_83D1B18C);
PPC_FUNC_IMPL(__imp__sub_83D1B18C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1B190"))) PPC_WEAK_FUNC(sub_83D1B190);
PPC_FUNC_IMPL(__imp__sub_83D1B190) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1B194"))) PPC_WEAK_FUNC(sub_83D1B194);
PPC_FUNC_IMPL(__imp__sub_83D1B194) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1B198"))) PPC_WEAK_FUNC(sub_83D1B198);
PPC_FUNC_IMPL(__imp__sub_83D1B198) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1B19C"))) PPC_WEAK_FUNC(sub_83D1B19C);
PPC_FUNC_IMPL(__imp__sub_83D1B19C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1B1A0"))) PPC_WEAK_FUNC(sub_83D1B1A0);
PPC_FUNC_IMPL(__imp__sub_83D1B1A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31760
	ctx.r11.s64 = -2081423360;
	// addi r3,r11,27672
	ctx.r3.s64 = ctx.r11.s64 + 27672;
	// b 0x83523150
	sub_83523150(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83D1B1AC"))) PPC_WEAK_FUNC(sub_83D1B1AC);
PPC_FUNC_IMPL(__imp__sub_83D1B1AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1B1B0"))) PPC_WEAK_FUNC(sub_83D1B1B0);
PPC_FUNC_IMPL(__imp__sub_83D1B1B0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1B1B4"))) PPC_WEAK_FUNC(sub_83D1B1B4);
PPC_FUNC_IMPL(__imp__sub_83D1B1B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1B1B8"))) PPC_WEAK_FUNC(sub_83D1B1B8);
PPC_FUNC_IMPL(__imp__sub_83D1B1B8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1B1BC"))) PPC_WEAK_FUNC(sub_83D1B1BC);
PPC_FUNC_IMPL(__imp__sub_83D1B1BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1B1C0"))) PPC_WEAK_FUNC(sub_83D1B1C0);
PPC_FUNC_IMPL(__imp__sub_83D1B1C0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1B1C4"))) PPC_WEAK_FUNC(sub_83D1B1C4);
PPC_FUNC_IMPL(__imp__sub_83D1B1C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1B1C8"))) PPC_WEAK_FUNC(sub_83D1B1C8);
PPC_FUNC_IMPL(__imp__sub_83D1B1C8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1B1CC"))) PPC_WEAK_FUNC(sub_83D1B1CC);
PPC_FUNC_IMPL(__imp__sub_83D1B1CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1B1D0"))) PPC_WEAK_FUNC(sub_83D1B1D0);
PPC_FUNC_IMPL(__imp__sub_83D1B1D0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1B1D4"))) PPC_WEAK_FUNC(sub_83D1B1D4);
PPC_FUNC_IMPL(__imp__sub_83D1B1D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1B1D8"))) PPC_WEAK_FUNC(sub_83D1B1D8);
PPC_FUNC_IMPL(__imp__sub_83D1B1D8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1B1DC"))) PPC_WEAK_FUNC(sub_83D1B1DC);
PPC_FUNC_IMPL(__imp__sub_83D1B1DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1B1E0"))) PPC_WEAK_FUNC(sub_83D1B1E0);
PPC_FUNC_IMPL(__imp__sub_83D1B1E0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1B1E4"))) PPC_WEAK_FUNC(sub_83D1B1E4);
PPC_FUNC_IMPL(__imp__sub_83D1B1E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1B1E8"))) PPC_WEAK_FUNC(sub_83D1B1E8);
PPC_FUNC_IMPL(__imp__sub_83D1B1E8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1B1EC"))) PPC_WEAK_FUNC(sub_83D1B1EC);
PPC_FUNC_IMPL(__imp__sub_83D1B1EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1B1F0"))) PPC_WEAK_FUNC(sub_83D1B1F0);
PPC_FUNC_IMPL(__imp__sub_83D1B1F0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1B1F4"))) PPC_WEAK_FUNC(sub_83D1B1F4);
PPC_FUNC_IMPL(__imp__sub_83D1B1F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1B1F8"))) PPC_WEAK_FUNC(sub_83D1B1F8);
PPC_FUNC_IMPL(__imp__sub_83D1B1F8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1B1FC"))) PPC_WEAK_FUNC(sub_83D1B1FC);
PPC_FUNC_IMPL(__imp__sub_83D1B1FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1B200"))) PPC_WEAK_FUNC(sub_83D1B200);
PPC_FUNC_IMPL(__imp__sub_83D1B200) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1B204"))) PPC_WEAK_FUNC(sub_83D1B204);
PPC_FUNC_IMPL(__imp__sub_83D1B204) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1B208"))) PPC_WEAK_FUNC(sub_83D1B208);
PPC_FUNC_IMPL(__imp__sub_83D1B208) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1B20C"))) PPC_WEAK_FUNC(sub_83D1B20C);
PPC_FUNC_IMPL(__imp__sub_83D1B20C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1B210"))) PPC_WEAK_FUNC(sub_83D1B210);
PPC_FUNC_IMPL(__imp__sub_83D1B210) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1B214"))) PPC_WEAK_FUNC(sub_83D1B214);
PPC_FUNC_IMPL(__imp__sub_83D1B214) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1B218"))) PPC_WEAK_FUNC(sub_83D1B218);
PPC_FUNC_IMPL(__imp__sub_83D1B218) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1B21C"))) PPC_WEAK_FUNC(sub_83D1B21C);
PPC_FUNC_IMPL(__imp__sub_83D1B21C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1B220"))) PPC_WEAK_FUNC(sub_83D1B220);
PPC_FUNC_IMPL(__imp__sub_83D1B220) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1B224"))) PPC_WEAK_FUNC(sub_83D1B224);
PPC_FUNC_IMPL(__imp__sub_83D1B224) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1B228"))) PPC_WEAK_FUNC(sub_83D1B228);
PPC_FUNC_IMPL(__imp__sub_83D1B228) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31760
	ctx.r11.s64 = -2081423360;
	// addi r3,r11,28040
	ctx.r3.s64 = ctx.r11.s64 + 28040;
	// b 0x83523150
	sub_83523150(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83D1B234"))) PPC_WEAK_FUNC(sub_83D1B234);
PPC_FUNC_IMPL(__imp__sub_83D1B234) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1B238"))) PPC_WEAK_FUNC(sub_83D1B238);
PPC_FUNC_IMPL(__imp__sub_83D1B238) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1B23C"))) PPC_WEAK_FUNC(sub_83D1B23C);
PPC_FUNC_IMPL(__imp__sub_83D1B23C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1B240"))) PPC_WEAK_FUNC(sub_83D1B240);
PPC_FUNC_IMPL(__imp__sub_83D1B240) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1B244"))) PPC_WEAK_FUNC(sub_83D1B244);
PPC_FUNC_IMPL(__imp__sub_83D1B244) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1B248"))) PPC_WEAK_FUNC(sub_83D1B248);
PPC_FUNC_IMPL(__imp__sub_83D1B248) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1B24C"))) PPC_WEAK_FUNC(sub_83D1B24C);
PPC_FUNC_IMPL(__imp__sub_83D1B24C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1B250"))) PPC_WEAK_FUNC(sub_83D1B250);
PPC_FUNC_IMPL(__imp__sub_83D1B250) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1B254"))) PPC_WEAK_FUNC(sub_83D1B254);
PPC_FUNC_IMPL(__imp__sub_83D1B254) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1B258"))) PPC_WEAK_FUNC(sub_83D1B258);
PPC_FUNC_IMPL(__imp__sub_83D1B258) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1B25C"))) PPC_WEAK_FUNC(sub_83D1B25C);
PPC_FUNC_IMPL(__imp__sub_83D1B25C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1B260"))) PPC_WEAK_FUNC(sub_83D1B260);
PPC_FUNC_IMPL(__imp__sub_83D1B260) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1B264"))) PPC_WEAK_FUNC(sub_83D1B264);
PPC_FUNC_IMPL(__imp__sub_83D1B264) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1B268"))) PPC_WEAK_FUNC(sub_83D1B268);
PPC_FUNC_IMPL(__imp__sub_83D1B268) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1B26C"))) PPC_WEAK_FUNC(sub_83D1B26C);
PPC_FUNC_IMPL(__imp__sub_83D1B26C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1B270"))) PPC_WEAK_FUNC(sub_83D1B270);
PPC_FUNC_IMPL(__imp__sub_83D1B270) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1B274"))) PPC_WEAK_FUNC(sub_83D1B274);
PPC_FUNC_IMPL(__imp__sub_83D1B274) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1B278"))) PPC_WEAK_FUNC(sub_83D1B278);
PPC_FUNC_IMPL(__imp__sub_83D1B278) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1B27C"))) PPC_WEAK_FUNC(sub_83D1B27C);
PPC_FUNC_IMPL(__imp__sub_83D1B27C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1B280"))) PPC_WEAK_FUNC(sub_83D1B280);
PPC_FUNC_IMPL(__imp__sub_83D1B280) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1B284"))) PPC_WEAK_FUNC(sub_83D1B284);
PPC_FUNC_IMPL(__imp__sub_83D1B284) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1B288"))) PPC_WEAK_FUNC(sub_83D1B288);
PPC_FUNC_IMPL(__imp__sub_83D1B288) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1B28C"))) PPC_WEAK_FUNC(sub_83D1B28C);
PPC_FUNC_IMPL(__imp__sub_83D1B28C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1B290"))) PPC_WEAK_FUNC(sub_83D1B290);
PPC_FUNC_IMPL(__imp__sub_83D1B290) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1B294"))) PPC_WEAK_FUNC(sub_83D1B294);
PPC_FUNC_IMPL(__imp__sub_83D1B294) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1B298"))) PPC_WEAK_FUNC(sub_83D1B298);
PPC_FUNC_IMPL(__imp__sub_83D1B298) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1B29C"))) PPC_WEAK_FUNC(sub_83D1B29C);
PPC_FUNC_IMPL(__imp__sub_83D1B29C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1B2A0"))) PPC_WEAK_FUNC(sub_83D1B2A0);
PPC_FUNC_IMPL(__imp__sub_83D1B2A0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1B2A4"))) PPC_WEAK_FUNC(sub_83D1B2A4);
PPC_FUNC_IMPL(__imp__sub_83D1B2A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1B2A8"))) PPC_WEAK_FUNC(sub_83D1B2A8);
PPC_FUNC_IMPL(__imp__sub_83D1B2A8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1B2AC"))) PPC_WEAK_FUNC(sub_83D1B2AC);
PPC_FUNC_IMPL(__imp__sub_83D1B2AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1B2B0"))) PPC_WEAK_FUNC(sub_83D1B2B0);
PPC_FUNC_IMPL(__imp__sub_83D1B2B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31760
	ctx.r11.s64 = -2081423360;
	// addi r3,r11,28408
	ctx.r3.s64 = ctx.r11.s64 + 28408;
	// b 0x83523150
	sub_83523150(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83D1B2BC"))) PPC_WEAK_FUNC(sub_83D1B2BC);
PPC_FUNC_IMPL(__imp__sub_83D1B2BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1B2C0"))) PPC_WEAK_FUNC(sub_83D1B2C0);
PPC_FUNC_IMPL(__imp__sub_83D1B2C0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1B2C4"))) PPC_WEAK_FUNC(sub_83D1B2C4);
PPC_FUNC_IMPL(__imp__sub_83D1B2C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1B2C8"))) PPC_WEAK_FUNC(sub_83D1B2C8);
PPC_FUNC_IMPL(__imp__sub_83D1B2C8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1B2CC"))) PPC_WEAK_FUNC(sub_83D1B2CC);
PPC_FUNC_IMPL(__imp__sub_83D1B2CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1B2D0"))) PPC_WEAK_FUNC(sub_83D1B2D0);
PPC_FUNC_IMPL(__imp__sub_83D1B2D0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1B2D4"))) PPC_WEAK_FUNC(sub_83D1B2D4);
PPC_FUNC_IMPL(__imp__sub_83D1B2D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1B2D8"))) PPC_WEAK_FUNC(sub_83D1B2D8);
PPC_FUNC_IMPL(__imp__sub_83D1B2D8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1B2DC"))) PPC_WEAK_FUNC(sub_83D1B2DC);
PPC_FUNC_IMPL(__imp__sub_83D1B2DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1B2E0"))) PPC_WEAK_FUNC(sub_83D1B2E0);
PPC_FUNC_IMPL(__imp__sub_83D1B2E0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1B2E4"))) PPC_WEAK_FUNC(sub_83D1B2E4);
PPC_FUNC_IMPL(__imp__sub_83D1B2E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1B2E8"))) PPC_WEAK_FUNC(sub_83D1B2E8);
PPC_FUNC_IMPL(__imp__sub_83D1B2E8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1B2EC"))) PPC_WEAK_FUNC(sub_83D1B2EC);
PPC_FUNC_IMPL(__imp__sub_83D1B2EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1B2F0"))) PPC_WEAK_FUNC(sub_83D1B2F0);
PPC_FUNC_IMPL(__imp__sub_83D1B2F0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1B2F4"))) PPC_WEAK_FUNC(sub_83D1B2F4);
PPC_FUNC_IMPL(__imp__sub_83D1B2F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1B2F8"))) PPC_WEAK_FUNC(sub_83D1B2F8);
PPC_FUNC_IMPL(__imp__sub_83D1B2F8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1B2FC"))) PPC_WEAK_FUNC(sub_83D1B2FC);
PPC_FUNC_IMPL(__imp__sub_83D1B2FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1B300"))) PPC_WEAK_FUNC(sub_83D1B300);
PPC_FUNC_IMPL(__imp__sub_83D1B300) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1B304"))) PPC_WEAK_FUNC(sub_83D1B304);
PPC_FUNC_IMPL(__imp__sub_83D1B304) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1B308"))) PPC_WEAK_FUNC(sub_83D1B308);
PPC_FUNC_IMPL(__imp__sub_83D1B308) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1B30C"))) PPC_WEAK_FUNC(sub_83D1B30C);
PPC_FUNC_IMPL(__imp__sub_83D1B30C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1B310"))) PPC_WEAK_FUNC(sub_83D1B310);
PPC_FUNC_IMPL(__imp__sub_83D1B310) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1B314"))) PPC_WEAK_FUNC(sub_83D1B314);
PPC_FUNC_IMPL(__imp__sub_83D1B314) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1B318"))) PPC_WEAK_FUNC(sub_83D1B318);
PPC_FUNC_IMPL(__imp__sub_83D1B318) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1B31C"))) PPC_WEAK_FUNC(sub_83D1B31C);
PPC_FUNC_IMPL(__imp__sub_83D1B31C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1B320"))) PPC_WEAK_FUNC(sub_83D1B320);
PPC_FUNC_IMPL(__imp__sub_83D1B320) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1B324"))) PPC_WEAK_FUNC(sub_83D1B324);
PPC_FUNC_IMPL(__imp__sub_83D1B324) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1B328"))) PPC_WEAK_FUNC(sub_83D1B328);
PPC_FUNC_IMPL(__imp__sub_83D1B328) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1B32C"))) PPC_WEAK_FUNC(sub_83D1B32C);
PPC_FUNC_IMPL(__imp__sub_83D1B32C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1B330"))) PPC_WEAK_FUNC(sub_83D1B330);
PPC_FUNC_IMPL(__imp__sub_83D1B330) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1B334"))) PPC_WEAK_FUNC(sub_83D1B334);
PPC_FUNC_IMPL(__imp__sub_83D1B334) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1B338"))) PPC_WEAK_FUNC(sub_83D1B338);
PPC_FUNC_IMPL(__imp__sub_83D1B338) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31760
	ctx.r11.s64 = -2081423360;
	// addi r3,r11,28776
	ctx.r3.s64 = ctx.r11.s64 + 28776;
	// b 0x83523150
	sub_83523150(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83D1B344"))) PPC_WEAK_FUNC(sub_83D1B344);
PPC_FUNC_IMPL(__imp__sub_83D1B344) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1B348"))) PPC_WEAK_FUNC(sub_83D1B348);
PPC_FUNC_IMPL(__imp__sub_83D1B348) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1B34C"))) PPC_WEAK_FUNC(sub_83D1B34C);
PPC_FUNC_IMPL(__imp__sub_83D1B34C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1B350"))) PPC_WEAK_FUNC(sub_83D1B350);
PPC_FUNC_IMPL(__imp__sub_83D1B350) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1B354"))) PPC_WEAK_FUNC(sub_83D1B354);
PPC_FUNC_IMPL(__imp__sub_83D1B354) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1B358"))) PPC_WEAK_FUNC(sub_83D1B358);
PPC_FUNC_IMPL(__imp__sub_83D1B358) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1B35C"))) PPC_WEAK_FUNC(sub_83D1B35C);
PPC_FUNC_IMPL(__imp__sub_83D1B35C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1B360"))) PPC_WEAK_FUNC(sub_83D1B360);
PPC_FUNC_IMPL(__imp__sub_83D1B360) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x83D1B368;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// li r30,3
	ctx.r30.s64 = 3;
	// addi r11,r11,-11184
	ctx.r11.s64 = ctx.r11.s64 + -11184;
	// li r27,2
	ctx.r27.s64 = 2;
	// addi r31,r11,132
	ctx.r31.s64 = ctx.r11.s64 + 132;
	// li r28,15
	ctx.r28.s64 = 15;
	// li r29,0
	ctx.r29.s64 = 0;
loc_83D1B388:
	// addi r31,r31,-32
	ctx.r31.s64 = ctx.r31.s64 + -32;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83d1b3a8
	if (cr6.lt) goto loc_83D1B3A8;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// bl 0x825952b8
	ctx.lr = 0x83D1B3A8;
	sub_825952B8(ctx, base);
loc_83D1B3A8:
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
	// bge 0x83d1b388
	if (!cr0.lt) goto loc_83D1B388;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83D1B3C4"))) PPC_WEAK_FUNC(sub_83D1B3C4);
PPC_FUNC_IMPL(__imp__sub_83D1B3C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1B3C8"))) PPC_WEAK_FUNC(sub_83D1B3C8);
PPC_FUNC_IMPL(__imp__sub_83D1B3C8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1B3CC"))) PPC_WEAK_FUNC(sub_83D1B3CC);
PPC_FUNC_IMPL(__imp__sub_83D1B3CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1B3D0"))) PPC_WEAK_FUNC(sub_83D1B3D0);
PPC_FUNC_IMPL(__imp__sub_83D1B3D0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1B3D4"))) PPC_WEAK_FUNC(sub_83D1B3D4);
PPC_FUNC_IMPL(__imp__sub_83D1B3D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1B3D8"))) PPC_WEAK_FUNC(sub_83D1B3D8);
PPC_FUNC_IMPL(__imp__sub_83D1B3D8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1B3DC"))) PPC_WEAK_FUNC(sub_83D1B3DC);
PPC_FUNC_IMPL(__imp__sub_83D1B3DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1B3E0"))) PPC_WEAK_FUNC(sub_83D1B3E0);
PPC_FUNC_IMPL(__imp__sub_83D1B3E0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1B3E4"))) PPC_WEAK_FUNC(sub_83D1B3E4);
PPC_FUNC_IMPL(__imp__sub_83D1B3E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1B3E8"))) PPC_WEAK_FUNC(sub_83D1B3E8);
PPC_FUNC_IMPL(__imp__sub_83D1B3E8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1B3EC"))) PPC_WEAK_FUNC(sub_83D1B3EC);
PPC_FUNC_IMPL(__imp__sub_83D1B3EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1B3F0"))) PPC_WEAK_FUNC(sub_83D1B3F0);
PPC_FUNC_IMPL(__imp__sub_83D1B3F0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1B3F4"))) PPC_WEAK_FUNC(sub_83D1B3F4);
PPC_FUNC_IMPL(__imp__sub_83D1B3F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1B3F8"))) PPC_WEAK_FUNC(sub_83D1B3F8);
PPC_FUNC_IMPL(__imp__sub_83D1B3F8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1B3FC"))) PPC_WEAK_FUNC(sub_83D1B3FC);
PPC_FUNC_IMPL(__imp__sub_83D1B3FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1B400"))) PPC_WEAK_FUNC(sub_83D1B400);
PPC_FUNC_IMPL(__imp__sub_83D1B400) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1B404"))) PPC_WEAK_FUNC(sub_83D1B404);
PPC_FUNC_IMPL(__imp__sub_83D1B404) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1B408"))) PPC_WEAK_FUNC(sub_83D1B408);
PPC_FUNC_IMPL(__imp__sub_83D1B408) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1B40C"))) PPC_WEAK_FUNC(sub_83D1B40C);
PPC_FUNC_IMPL(__imp__sub_83D1B40C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1B410"))) PPC_WEAK_FUNC(sub_83D1B410);
PPC_FUNC_IMPL(__imp__sub_83D1B410) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1B414"))) PPC_WEAK_FUNC(sub_83D1B414);
PPC_FUNC_IMPL(__imp__sub_83D1B414) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1B418"))) PPC_WEAK_FUNC(sub_83D1B418);
PPC_FUNC_IMPL(__imp__sub_83D1B418) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1B41C"))) PPC_WEAK_FUNC(sub_83D1B41C);
PPC_FUNC_IMPL(__imp__sub_83D1B41C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1B420"))) PPC_WEAK_FUNC(sub_83D1B420);
PPC_FUNC_IMPL(__imp__sub_83D1B420) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1B424"))) PPC_WEAK_FUNC(sub_83D1B424);
PPC_FUNC_IMPL(__imp__sub_83D1B424) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1B428"))) PPC_WEAK_FUNC(sub_83D1B428);
PPC_FUNC_IMPL(__imp__sub_83D1B428) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31760
	ctx.r11.s64 = -2081423360;
	// addi r3,r11,29144
	ctx.r3.s64 = ctx.r11.s64 + 29144;
	// b 0x83523150
	sub_83523150(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83D1B434"))) PPC_WEAK_FUNC(sub_83D1B434);
PPC_FUNC_IMPL(__imp__sub_83D1B434) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1B438"))) PPC_WEAK_FUNC(sub_83D1B438);
PPC_FUNC_IMPL(__imp__sub_83D1B438) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1B43C"))) PPC_WEAK_FUNC(sub_83D1B43C);
PPC_FUNC_IMPL(__imp__sub_83D1B43C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1B440"))) PPC_WEAK_FUNC(sub_83D1B440);
PPC_FUNC_IMPL(__imp__sub_83D1B440) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1B444"))) PPC_WEAK_FUNC(sub_83D1B444);
PPC_FUNC_IMPL(__imp__sub_83D1B444) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1B448"))) PPC_WEAK_FUNC(sub_83D1B448);
PPC_FUNC_IMPL(__imp__sub_83D1B448) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1B44C"))) PPC_WEAK_FUNC(sub_83D1B44C);
PPC_FUNC_IMPL(__imp__sub_83D1B44C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1B450"))) PPC_WEAK_FUNC(sub_83D1B450);
PPC_FUNC_IMPL(__imp__sub_83D1B450) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1B454"))) PPC_WEAK_FUNC(sub_83D1B454);
PPC_FUNC_IMPL(__imp__sub_83D1B454) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1B458"))) PPC_WEAK_FUNC(sub_83D1B458);
PPC_FUNC_IMPL(__imp__sub_83D1B458) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1B45C"))) PPC_WEAK_FUNC(sub_83D1B45C);
PPC_FUNC_IMPL(__imp__sub_83D1B45C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1B460"))) PPC_WEAK_FUNC(sub_83D1B460);
PPC_FUNC_IMPL(__imp__sub_83D1B460) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1B464"))) PPC_WEAK_FUNC(sub_83D1B464);
PPC_FUNC_IMPL(__imp__sub_83D1B464) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1B468"))) PPC_WEAK_FUNC(sub_83D1B468);
PPC_FUNC_IMPL(__imp__sub_83D1B468) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1B46C"))) PPC_WEAK_FUNC(sub_83D1B46C);
PPC_FUNC_IMPL(__imp__sub_83D1B46C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D1B470"))) PPC_WEAK_FUNC(sub_83D1B470);
PPC_FUNC_IMPL(__imp__sub_83D1B470) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1B474"))) PPC_WEAK_FUNC(sub_83D1B474);
PPC_FUNC_IMPL(__imp__sub_83D1B474) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

