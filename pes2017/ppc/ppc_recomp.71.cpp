#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_827AEE20"))) PPC_WEAK_FUNC(sub_827AEE20);
PPC_FUNC_IMPL(__imp__sub_827AEE20) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x827AEE28;
	__savegprlr_29(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x838fce00
	ctx.lr = 0x827AEE40;
	sub_838FCE00(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// rotlwi r5,r30,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r30.u32, 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x838fceb8
	ctx.lr = 0x827AEE54;
	sub_838FCEB8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x827aee98
	if (!cr6.eq) goto loc_827AEE98;
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// lwz r3,164(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r9,r11,15368
	ctx.r9.s64 = ctx.r11.s64 + 15368;
	// addi r8,r10,-20920
	ctx.r8.s64 = ctx.r10.s64 + -20920;
	// cmplw cr6,r3,r9
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r9.u32, xer);
	// stw r8,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r8.u32);
	// beq cr6,0x827aee84
	if (cr6.eq) goto loc_827AEE84;
	// bl 0x82416268
	ctx.lr = 0x827AEE84;
	sub_82416268(ctx, base);
loc_827AEE84:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x838fc630
	ctx.lr = 0x827AEE8C;
	sub_838FC630(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_827AEE98:
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r31,r11,-21416
	ctx.r31.s64 = ctx.r11.s64 + -21416;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// addi r5,r31,80
	ctx.r5.s64 = ctx.r31.s64 + 80;
	// bl 0x838fd690
	ctx.lr = 0x827AEEB8;
	sub_838FD690(ctx, base);
	// bl 0x827ab930
	ctx.lr = 0x827AEEBC;
	sub_827AB930(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827aef84
	if (cr6.eq) goto loc_827AEF84;
	// addi r4,r31,-4
	ctx.r4.s64 = ctx.r31.s64 + -4;
	// bl 0x838fc840
	ctx.lr = 0x827AEED0;
	sub_838FC840(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827aef84
	if (cr6.eq) goto loc_827AEF84;
	// addi r3,r29,32
	ctx.r3.s64 = ctx.r29.s64 + 32;
	// bl 0x8259d6c0
	ctx.lr = 0x827AEEE4;
	sub_8259D6C0(ctx, base);
	// addi r4,r31,88
	ctx.r4.s64 = ctx.r31.s64 + 88;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x838fc840
	ctx.lr = 0x827AEEF0;
	sub_838FC840(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827aef84
	if (cr6.eq) goto loc_827AEF84;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
loc_827AEF04:
	// lwz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
loc_827AEF0C:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r5,0(r10)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r9,r5,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r5.s64;
	// beq cr6,0x827aef30
	if (cr6.eq) goto loc_827AEF30;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x827aef0c
	if (cr6.eq) goto loc_827AEF0C;
loc_827AEF30:
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x827aef4c
	if (cr6.eq) goto loc_827AEF4C;
	// addi r8,r8,8
	ctx.r8.s64 = ctx.r8.s64 + 8;
	// addi r11,r31,80
	ctx.r11.s64 = ctx.r31.s64 + 80;
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// cmpw cr6,r8,r11
	cr6.compare<int32_t>(ctx.r8.s32, ctx.r11.s32, xer);
	// blt cr6,0x827aef04
	if (cr6.lt) goto loc_827AEF04;
loc_827AEF4C:
	// cmpwi cr6,r6,10
	cr6.compare<int32_t>(ctx.r6.s32, 10, xer);
	// beq cr6,0x827aef84
	if (cr6.eq) goto loc_827AEF84;
	// stw r7,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r7.u32);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// stw r7,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r7.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r7,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r7.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x827ae480
	ctx.lr = 0x827AEF70;
	sub_827AE480(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x827aef98
	if (!cr6.eq) goto loc_827AEF98;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
loc_827AEF80:
	// bl 0x827ac698
	ctx.lr = 0x827AEF84;
	sub_827AC698(ctx, base);
loc_827AEF84:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x830fe470
	ctx.lr = 0x827AEF8C;
	sub_830FE470(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_827AEF98:
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x827ad750
	ctx.lr = 0x827AEFA8;
	sub_827AD750(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x827aef80
	if (cr6.eq) goto loc_827AEF80;
	// bl 0x827ac698
	ctx.lr = 0x827AEFBC;
	sub_827AC698(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x830fe470
	ctx.lr = 0x827AEFC4;
	sub_830FE470(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827AEFD0"))) PPC_WEAK_FUNC(sub_827AEFD0);
PPC_FUNC_IMPL(__imp__sub_827AEFD0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x827AEFD8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
loc_827AEFE4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
	// bl 0x827b1250
	ctx.lr = 0x827AEFF0;
	sub_827B1250(ctx, base);
loc_827AEFF0:
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// lbz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// beq cr6,0x827af014
	if (cr6.eq) goto loc_827AF014;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x827aeff0
	if (cr6.eq) goto loc_827AEFF0;
loc_827AF014:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x827af034
	if (cr6.eq) goto loc_827AF034;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpwi cr6,r30,14
	cr6.compare<int32_t>(ctx.r30.s32, 14, xer);
	// blt cr6,0x827aefe4
	if (cr6.lt) goto loc_827AEFE4;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_827AF034:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827AF040"))) PPC_WEAK_FUNC(sub_827AF040);
PPC_FUNC_IMPL(__imp__sub_827AF040) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// b 0x827aefd0
	sub_827AEFD0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827AF048"))) PPC_WEAK_FUNC(sub_827AF048);
PPC_FUNC_IMPL(__imp__sub_827AF048) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r11,-31779
	ctx.r11.s64 = -2082668544;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r8,r11,8284
	ctx.r8.s64 = ctx.r11.s64 + 8284;
loc_827AF058:
	// lwz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
loc_827AF060:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r9,r6,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r6.s64;
	// beq cr6,0x827af084
	if (cr6.eq) goto loc_827AF084;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x827af060
	if (cr6.eq) goto loc_827AF060;
loc_827AF084:
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// cmplwi cr6,r3,10
	cr6.compare<uint32_t>(ctx.r3.u32, 10, xer);
	// blt cr6,0x827af058
	if (cr6.lt) goto loc_827AF058;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827AF0A4"))) PPC_WEAK_FUNC(sub_827AF0A4);
PPC_FUNC_IMPL(__imp__sub_827AF0A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827AF0A8"))) PPC_WEAK_FUNC(sub_827AF0A8);
PPC_FUNC_IMPL(__imp__sub_827AF0A8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x827af0f0
	if (cr6.lt) goto loc_827AF0F0;
	// cmpwi cr6,r3,209
	cr6.compare<int32_t>(ctx.r3.s32, 209, xer);
	// bge cr6,0x827af0f0
	if (!cr6.lt) goto loc_827AF0F0;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// rlwinm r11,r3,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r10,r10,-20432
	ctx.r10.s64 = ctx.r10.s64 + -20432;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x827af0e4
	if (cr6.eq) goto loc_827AF0E4;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bgt cr6,0x827af0e8
	if (cr6.gt) goto loc_827AF0E8;
loc_827AF0E4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_827AF0E8:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
loc_827AF0F0:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827AF0F8"))) PPC_WEAK_FUNC(sub_827AF0F8);
PPC_FUNC_IMPL(__imp__sub_827AF0F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x827AF100;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x827af194
	if (cr6.lt) goto loc_827AF194;
	// cmpwi cr6,r3,209
	cr6.compare<int32_t>(ctx.r3.s32, 209, xer);
	// bge cr6,0x827af194
	if (!cr6.lt) goto loc_827AF194;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x827af194
	if (cr6.eq) goto loc_827AF194;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// rlwinm r10,r3,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r11,r11,-20432
	ctx.r11.s64 = ctx.r11.s64 + -20432;
	// li r31,0
	ctx.r31.s64 = 0;
	// add r30,r10,r11
	ctx.r30.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// ble cr6,0x827af194
	if (!cr6.gt) goto loc_827AF194;
loc_827AF140:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827AF150;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_827AF158:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x827af17c
	if (cr6.eq) goto loc_827AF17C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x827af158
	if (cr6.eq) goto loc_827AF158;
loc_827AF17C:
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x827af1a0
	if (cr6.eq) goto loc_827AF1A0;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpw cr6,r31,r11
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, xer);
	// blt cr6,0x827af140
	if (cr6.lt) goto loc_827AF140;
loc_827AF194:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_827AF1A0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827AF1AC"))) PPC_WEAK_FUNC(sub_827AF1AC);
PPC_FUNC_IMPL(__imp__sub_827AF1AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827AF1B0"))) PPC_WEAK_FUNC(sub_827AF1B0);
PPC_FUNC_IMPL(__imp__sub_827AF1B0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x827AF1B8;
	__savegprlr_27(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x827af228
	if (cr6.eq) goto loc_827AF228;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// subf r28,r4,r11
	ctx.r28.s64 = ctx.r11.s64 - ctx.r4.s64;
loc_827AF1E4:
	// bl 0x831d2680
	ctx.lr = 0x827AF1E8;
	sub_831D2680(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x827af20c
	if (!cr6.eq) goto loc_827AF20C;
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,46
	cr6.compare<uint32_t>(ctx.r11.u32, 46, xer);
	// bne cr6,0x827af228
	if (!cr6.eq) goto loc_827AF228;
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x827af228
	if (!cr6.eq) goto loc_827AF228;
	// li r29,1
	ctx.r29.s64 = 1;
loc_827AF20C:
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// stbx r11,r28,r31
	PPC_STORE_U8(ctx.r28.u32 + ctx.r31.u32, ctx.r11.u8);
	// lbzu r10,1(r31)
	ea = 1 + ctx.r31.u32;
	ctx.r10.u64 = PPC_LOAD_U8(ea);
	ctx.r31.u32 = ea;
	// extsb r3,r10
	ctx.r3.s64 = ctx.r10.s8;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x827af1e4
	if (!cr6.eq) goto loc_827AF1E4;
loc_827AF228:
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// clrlwi r10,r29,24
	ctx.r10.u64 = ctx.r29.u32 & 0xFF;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stbx r9,r30,r11
	PPC_STORE_U8(ctx.r30.u32 + ctx.r11.u32, ctx.r9.u8);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// beq cr6,0x827af260
	if (cr6.eq) goto loc_827AF260;
	// bl 0x831d82e8
	ctx.lr = 0x827AF24C;
	sub_831D82E8(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// stfs f0,0(r27)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r27.u32 + 0, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_827AF260:
	// bl 0x831d88a0
	ctx.lr = 0x827AF264;
	sub_831D88A0(ctx, base);
	// extsw r11,r3
	ctx.r11.s64 = ctx.r3.s32;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// stfs f12,0(r27)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r27.u32 + 0, temp.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827AF288"))) PPC_WEAK_FUNC(sub_827AF288);
PPC_FUNC_IMPL(__imp__sub_827AF288) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,2048(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2048);
	// cmpw cr6,r11,r4
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r4.s32, xer);
	// bgt cr6,0x827af2c8
	if (cr6.gt) goto loc_827AF2C8;
	// lis r10,-31763
	ctx.r10.s64 = -2081619968;
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// addi r3,r11,-12860
	ctx.r3.s64 = ctx.r11.s64 + -12860;
	// lwz r11,-12852(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -12852);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// stw r11,-12852(r10)
	PPC_STORE_U32(ctx.r10.u32 + -12852, ctx.r11.u32);
	// blr 
	return;
loc_827AF2C8:
	// rlwinm r11,r4,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827AF2D4"))) PPC_WEAK_FUNC(sub_827AF2D4);
PPC_FUNC_IMPL(__imp__sub_827AF2D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827AF2D8"))) PPC_WEAK_FUNC(sub_827AF2D8);
PPC_FUNC_IMPL(__imp__sub_827AF2D8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r10,3072(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3072);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmpwi cr6,r10,256
	cr6.compare<int32_t>(ctx.r10.s32, 256, xer);
	// blt cr6,0x827af2f0
	if (cr6.lt) goto loc_827AF2F0;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_827AF2F0:
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r8,0(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// add r7,r10,r9
	ctx.r7.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r10,r7,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stwx r8,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r8.u32);
	// lwz r5,4(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r5,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, ctx.r5.u32);
	// lwz r4,8(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// stw r4,8(r6)
	PPC_STORE_U32(ctx.r6.u32 + 8, ctx.r4.u32);
	// lwz r3,3072(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3072);
	// addi r10,r3,1
	ctx.r10.s64 = ctx.r3.s64 + 1;
	// stw r10,3072(r11)
	PPC_STORE_U32(ctx.r11.u32 + 3072, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827AF328"))) PPC_WEAK_FUNC(sub_827AF328);
PPC_FUNC_IMPL(__imp__sub_827AF328) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdac8
	ctx.lr = 0x827AF330;
	__savegprlr_20(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// std r28,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r28.u64);
	// beq cr6,0x827af50c
	if (cr6.eq) goto loc_827AF50C;
	// li r20,4
	ctx.r20.s64 = 4;
	// li r21,5
	ctx.r21.s64 = 5;
	// li r22,1
	ctx.r22.s64 = 1;
	// li r23,2
	ctx.r23.s64 = 2;
	// li r24,3
	ctx.r24.s64 = 3;
	// li r25,6
	ctx.r25.s64 = 6;
	// li r26,7
	ctx.r26.s64 = 7;
	// li r27,8
	ctx.r27.s64 = 8;
loc_827AF378:
	// cmpwi cr6,r3,32
	cr6.compare<int32_t>(ctx.r3.s32, 32, xer);
	// beq cr6,0x827af4fc
	if (cr6.eq) goto loc_827AF4FC;
	// bl 0x831d2700
	ctx.lr = 0x827AF384;
	sub_831D2700(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x827af4fc
	if (!cr6.eq) goto loc_827AF4FC;
	// lbz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// cmpwi cr6,r3,40
	cr6.compare<int32_t>(ctx.r3.s32, 40, xer);
	// bne cr6,0x827af3a4
	if (!cr6.eq) goto loc_827AF3A4;
	// stw r20,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r20.u32);
	// b 0x827af4d8
	goto loc_827AF4D8;
loc_827AF3A4:
	// cmpwi cr6,r3,41
	cr6.compare<int32_t>(ctx.r3.s32, 41, xer);
	// bne cr6,0x827af3b4
	if (!cr6.eq) goto loc_827AF3B4;
	// stw r21,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r21.u32);
	// b 0x827af4d8
	goto loc_827AF4D8;
loc_827AF3B4:
	// cmpwi cr6,r3,43
	cr6.compare<int32_t>(ctx.r3.s32, 43, xer);
	// bne cr6,0x827af3c4
	if (!cr6.eq) goto loc_827AF3C4;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// b 0x827af4d8
	goto loc_827AF4D8;
loc_827AF3C4:
	// cmpwi cr6,r3,45
	cr6.compare<int32_t>(ctx.r3.s32, 45, xer);
	// bne cr6,0x827af3d4
	if (!cr6.eq) goto loc_827AF3D4;
	// stw r22,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r22.u32);
	// b 0x827af4d8
	goto loc_827AF4D8;
loc_827AF3D4:
	// cmpwi cr6,r3,42
	cr6.compare<int32_t>(ctx.r3.s32, 42, xer);
	// bne cr6,0x827af3e4
	if (!cr6.eq) goto loc_827AF3E4;
	// stw r23,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r23.u32);
	// b 0x827af4d8
	goto loc_827AF4D8;
loc_827AF3E4:
	// cmpwi cr6,r3,47
	cr6.compare<int32_t>(ctx.r3.s32, 47, xer);
	// bne cr6,0x827af3f4
	if (!cr6.eq) goto loc_827AF3F4;
	// stw r24,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r24.u32);
	// b 0x827af4d8
	goto loc_827AF4D8;
loc_827AF3F4:
	// cmpwi cr6,r3,44
	cr6.compare<int32_t>(ctx.r3.s32, 44, xer);
	// bne cr6,0x827af404
	if (!cr6.eq) goto loc_827AF404;
	// stw r25,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r25.u32);
	// b 0x827af4d8
	goto loc_827AF4D8;
loc_827AF404:
	// bl 0x831d2680
	ctx.lr = 0x827AF408;
	sub_831D2680(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x827af428
	if (cr6.eq) goto loc_827AF428;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r26,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r26.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x827af1b0
	ctx.lr = 0x827AF420;
	sub_827AF1B0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x827af4d8
	goto loc_827AF4D8;
loc_827AF428:
	// lbz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// bl 0x831d2660
	ctx.lr = 0x827AF434;
	sub_831D2660(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x827af448
	if (!cr6.eq) goto loc_827AF448;
	// lbz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,95
	cr6.compare<uint32_t>(ctx.r11.u32, 95, xer);
	// bne cr6,0x827af518
	if (!cr6.eq) goto loc_827AF518;
loc_827AF448:
	// lbz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x827af4c0
	if (cr6.eq) goto loc_827AF4C0;
loc_827AF45C:
	// lbz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// bl 0x831d2660
	ctx.lr = 0x827AF468;
	sub_831D2660(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x827af490
	if (!cr6.eq) goto loc_827AF490;
	// lbz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// bl 0x831d2680
	ctx.lr = 0x827AF47C;
	sub_831D2680(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x827af490
	if (!cr6.eq) goto loc_827AF490;
	// lbz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,95
	cr6.compare<uint32_t>(ctx.r11.u32, 95, xer);
	// bne cr6,0x827af4c0
	if (!cr6.eq) goto loc_827AF4C0;
loc_827AF490:
	// cmpwi cr6,r29,63
	cr6.compare<int32_t>(ctx.r29.s32, 63, xer);
	// bge cr6,0x827af4b8
	if (!cr6.lt) goto loc_827AF4B8;
	// lbz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// lbzu r9,1(r30)
	ea = 1 + ctx.r30.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r30.u32 = ea;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// stbx r11,r29,r10
	PPC_STORE_U8(ctx.r29.u32 + ctx.r10.u32, ctx.r11.u8);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// bne cr6,0x827af45c
	if (!cr6.eq) goto loc_827AF45C;
	// b 0x827af4c0
	goto loc_827AF4C0;
loc_827AF4B8:
	// li r29,63
	ctx.r29.s64 = 63;
	// stb r28,159(r1)
	PPC_STORE_U8(ctx.r1.u32 + 159, ctx.r28.u8);
loc_827AF4C0:
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stbx r28,r29,r11
	PPC_STORE_U8(ctx.r29.u32 + ctx.r11.u32, ctx.r28.u8);
	// bl 0x827b3ad0
	ctx.lr = 0x827AF4D0;
	sub_827B3AD0(ctx, base);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
loc_827AF4D8:
	// lwz r11,2048(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2048);
	// cmpwi cr6,r11,256
	cr6.compare<int32_t>(ctx.r11.s32, 256, xer);
	// bge cr6,0x827af4fc
	if (!cr6.lt) goto loc_827AF4FC;
	// ld r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// rlwinm r9,r11,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// stdx r10,r9,r31
	PPC_STORE_U64(ctx.r9.u32 + ctx.r31.u32, ctx.r10.u64);
	// lwz r11,2048(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2048);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// stw r8,2048(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2048, ctx.r8.u32);
loc_827AF4FC:
	// lbzu r11,1(r30)
	ea = 1 + ctx.r30.u32;
	ctx.r11.u64 = PPC_LOAD_U8(ea);
	ctx.r30.u32 = ea;
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x827af378
	if (!cr6.eq) goto loc_827AF378;
loc_827AF50C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x831cdb18
	__restgprlr_20(ctx, base);
	return;
loc_827AF518:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x831cdb18
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827AF524"))) PPC_WEAK_FUNC(sub_827AF524);
PPC_FUNC_IMPL(__imp__sub_827AF524) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827AF528"))) PPC_WEAK_FUNC(sub_827AF528);
PPC_FUNC_IMPL(__imp__sub_827AF528) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x827AF530;
	__savegprlr_27(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r27,-1
	ctx.r27.s64 = -1;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r27,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r27.u32);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// bl 0x827afaf0
	ctx.lr = 0x827AF550;
	sub_827AFAF0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x827af568
	if (!cr6.eq) goto loc_827AF568;
loc_827AF55C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_827AF568:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,2048(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2048);
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, xer);
	// ble cr6,0x827af55c
	if (!cr6.gt) goto loc_827AF55C;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r10,r10,r30
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r30.u32);
	// cmpwi cr6,r10,5
	cr6.compare<int32_t>(ctx.r10.s32, 5, xer);
	// beq cr6,0x827af5e0
	if (cr6.eq) goto loc_827AF5E0;
	// cmpwi cr6,r10,6
	cr6.compare<int32_t>(ctx.r10.s32, 6, xer);
	// bne cr6,0x827af55c
	if (!cr6.eq) goto loc_827AF55C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827af528
	ctx.lr = 0x827AF5B0;
	sub_827AF528(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x827af55c
	if (cr6.eq) goto loc_827AF55C;
	// addi r11,r1,88
	ctx.r11.s64 = ctx.r1.s64 + 88;
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r10,0
	ctx.r10.s64 = 0;
	// std r10,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r10.u64);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// stw r8,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r8.u32);
	// b 0x827af604
	goto loc_827AF604;
loc_827AF5E0:
	// addi r9,r1,88
	ctx.r9.s64 = ctx.r1.s64 + 88;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// std r10,0(r9)
	PPC_STORE_U64(ctx.r9.u32 + 0, ctx.r10.u64);
	// lwz r6,0(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// stw r10,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r10.u32);
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// stw r27,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r27.u32);
loc_827AF604:
	// li r7,6
	ctx.r7.s64 = 6;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// stw r7,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r7.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x827af2d8
	ctx.lr = 0x827AF618;
	sub_827AF2D8(ctx, base);
	// stw r3,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r3.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827AF628"))) PPC_WEAK_FUNC(sub_827AF628);
PPC_FUNC_IMPL(__imp__sub_827AF628) {
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
	// li r11,-1
	ctx.r11.s64 = -1;
	// lis r10,-31763
	ctx.r10.s64 = -2081619968;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// lis r9,-31763
	ctx.r9.s64 = -2081619968;
	// lwz r31,2048(r6)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r6.u32 + 2048);
	// addi r8,r10,-12860
	ctx.r8.s64 = ctx.r10.s64 + -12860;
	// cmpw cr6,r31,r11
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, xer);
	// bgt cr6,0x827af68c
	if (cr6.gt) goto loc_827AF68C;
	// lwz r11,-12852(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + -12852);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x827af684
	if (!cr6.eq) goto loc_827AF684;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r7,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r7.u32);
	// stw r7,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r7.u32);
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// stw r11,-12852(r9)
	PPC_STORE_U32(ctx.r9.u32 + -12852, ctx.r11.u32);
loc_827AF684:
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// b 0x827af694
	goto loc_827AF694;
loc_827AF68C:
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
loc_827AF694:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(ctx.r11.s32, 4, xer);
	// beq cr6,0x827af6b8
	if (cr6.eq) goto loc_827AF6B8;
loc_827AF6A0:
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
loc_827AF6B8:
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// lwz r10,2048(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 2048);
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, xer);
	// ble cr6,0x827af6a0
	if (!cr6.gt) goto loc_827AF6A0;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r11,5
	cr6.compare<int32_t>(ctx.r11.s32, 5, xer);
	// bne cr6,0x827af708
	if (!cr6.eq) goto loc_827AF708;
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
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
loc_827AF708:
	// bl 0x827af528
	ctx.lr = 0x827AF70C;
	sub_827AF528(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r3,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
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

__attribute__((alias("__imp__sub_827AF72C"))) PPC_WEAK_FUNC(sub_827AF72C);
PPC_FUNC_IMPL(__imp__sub_827AF72C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827AF730"))) PPC_WEAK_FUNC(sub_827AF730);
PPC_FUNC_IMPL(__imp__sub_827AF730) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x827AF738;
	__savegprlr_26(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r28,-1
	ctx.r28.s64 = -1;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// stw r28,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r28.u32);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// lwz r10,2048(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 2048);
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, xer);
	// ble cr6,0x827af92c
	if (!cr6.gt) goto loc_827AF92C;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r8,r1,88
	ctx.r8.s64 = ctx.r1.s64 + 88;
	// add r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 + ctx.r6.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// std r27,0(r8)
	PPC_STORE_U64(ctx.r8.u32 + 0, ctx.r27.u64);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r27,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r27.u32);
	// cmplwi cr6,r9,8
	cr6.compare<uint32_t>(ctx.r9.u32, 8, xer);
	// bgt cr6,0x827af938
	if (cr6.gt) goto loc_827AF938;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x827af8a8
	if (cr6.eq) goto loc_827AF8A8;
	// bdz 0x827af8dc
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_827AF8DC;
	// bdz 0x827af938
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_827AF938;
	// bdz 0x827af938
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_827AF938;
	// bdz 0x827af7b4
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_827AF7B4;
	// bdz 0x827af938
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_827AF938;
	// bdz 0x827af938
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_827AF938;
	// bdz 0x827af818
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_827AF818;
	// b 0x827af850
	goto loc_827AF850;
loc_827AF7B4:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x827afaf0
	ctx.lr = 0x827AF7D0;
	sub_827AFAF0(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x827af938
	if (cr6.eq) goto loc_827AF938;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,2048(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2048);
	// cmpw cr6,r11,r4
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r4.s32, xer);
	// ble cr6,0x827af938
	if (!cr6.gt) goto loc_827AF938;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x827af288
	ctx.lr = 0x827AF7F4;
	sub_827AF288(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,5
	cr6.compare<int32_t>(ctx.r11.s32, 5, xer);
	// bne cr6,0x827af938
	if (!cr6.eq) goto loc_827AF938;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_827AF818:
	// li r11,4
	ctx.r11.s64 = 4;
	// lfs f0,4(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x827af2d8
	ctx.lr = 0x827AF834;
	sub_827AF2D8(ctx, base);
	// stw r3,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r3.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_827AF850:
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// li r10,7
	ctx.r10.s64 = 7;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// bl 0x827af2d8
	ctx.lr = 0x827AF86C;
	sub_827AF2D8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827af628
	ctx.lr = 0x827AF894;
	sub_827AF628(ctx, base);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x827af938
	if (cr6.eq) goto loc_827AF938;
	// li r10,5
	ctx.r10.s64 = 5;
	// b 0x827af90c
	goto loc_827AF90C;
loc_827AF8A8:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827af730
	ctx.lr = 0x827AF8C8;
	sub_827AF730(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x827af938
	if (cr6.eq) goto loc_827AF938;
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r27.u32);
	// b 0x827af910
	goto loc_827AF910;
loc_827AF8DC:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827af730
	ctx.lr = 0x827AF8FC;
	sub_827AF730(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x827af938
	if (cr6.eq) goto loc_827AF938;
	// li r10,1
	ctx.r10.s64 = 1;
loc_827AF90C:
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
loc_827AF910:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// bl 0x827af2d8
	ctx.lr = 0x827AF928;
	sub_827AF2D8(ctx, base);
	// stw r3,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r3.u32);
loc_827AF92C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_827AF938:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827AF944"))) PPC_WEAK_FUNC(sub_827AF944);
PPC_FUNC_IMPL(__imp__sub_827AF944) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827AF948"))) PPC_WEAK_FUNC(sub_827AF948);
PPC_FUNC_IMPL(__imp__sub_827AF948) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x827AF950;
	__savegprlr_24(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r26,-1
	ctx.r26.s64 = -1;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r26,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r26.u32);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// bl 0x827af730
	ctx.lr = 0x827AF970;
	sub_827AF730(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x827af988
	if (!cr6.eq) goto loc_827AF988;
loc_827AF97C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_827AF988:
	// addi r10,r1,88
	ctx.r10.s64 = ctx.r1.s64 + 88;
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r27,0
	ctx.r27.s64 = 0;
	// lwz r11,2048(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 2048);
	// cmpw cr6,r9,r11
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, xer);
	// std r27,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r27.u64);
	// stw r27,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r27.u32);
	// bge cr6,0x827afae4
	if (!cr6.lt) goto loc_827AFAE4;
	// lis r10,-31763
	ctx.r10.s64 = -2081619968;
	// lis r24,-31763
	ctx.r24.s64 = -2081619968;
	// addi r25,r10,-12860
	ctx.r25.s64 = ctx.r10.s64 + -12860;
loc_827AF9B4:
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, xer);
	// bgt cr6,0x827af9ec
	if (cr6.gt) goto loc_827AF9EC;
	// lwz r11,-12852(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + -12852);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x827af9e4
	if (!cr6.eq) goto loc_827AF9E4;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r27,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r27.u32);
	// stw r27,4(r25)
	PPC_STORE_U32(ctx.r25.u32 + 4, ctx.r27.u32);
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
	// stw r11,-12852(r24)
	PPC_STORE_U32(ctx.r24.u32 + -12852, ctx.r11.u32);
loc_827AF9E4:
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// b 0x827af9f4
	goto loc_827AF9F4;
loc_827AF9EC:
	// rlwinm r11,r10,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
loc_827AF9F4:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// beq cr6,0x827afa58
	if (cr6.eq) goto loc_827AFA58;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// bne cr6,0x827afae4
	if (!cr6.eq) goto loc_827AFAE4;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// stw r26,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r26.u32);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827af730
	ctx.lr = 0x827AFA2C;
	sub_827AF730(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x827af97c
	if (cr6.eq) goto loc_827AF97C;
	// lwz r11,3072(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3072);
	// li r8,3
	ctx.r8.s64 = 3;
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,256
	cr6.compare<int32_t>(ctx.r11.s32, 256, xer);
	// blt cr6,0x827afaa8
	if (cr6.lt) goto loc_827AFAA8;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// b 0x827afad0
	goto loc_827AFAD0;
loc_827AFA58:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// stw r26,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r26.u32);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827af730
	ctx.lr = 0x827AFA7C;
	sub_827AF730(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x827af97c
	if (cr6.eq) goto loc_827AF97C;
	// lwz r11,3072(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3072);
	// li r8,2
	ctx.r8.s64 = 2;
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,256
	cr6.compare<int32_t>(ctx.r11.s32, 256, xer);
	// blt cr6,0x827afaa8
	if (cr6.lt) goto loc_827AFAA8;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// b 0x827afad0
	goto loc_827AFAD0;
loc_827AFAA8:
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stwx r8,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r8.u32);
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// stw r7,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r7.u32);
	// lwz r11,3072(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3072);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// stw r9,3072(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3072, ctx.r9.u32);
loc_827AFAD0:
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// lwz r11,2048(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 2048);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, xer);
	// blt cr6,0x827af9b4
	if (cr6.lt) goto loc_827AF9B4;
loc_827AFAE4:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827AFAF0"))) PPC_WEAK_FUNC(sub_827AFAF0);
PPC_FUNC_IMPL(__imp__sub_827AFAF0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x827AFAF8;
	__savegprlr_24(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r26,-1
	ctx.r26.s64 = -1;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r26,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r26.u32);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// bl 0x827af948
	ctx.lr = 0x827AFB18;
	sub_827AF948(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x827afb30
	if (!cr6.eq) goto loc_827AFB30;
loc_827AFB24:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_827AFB30:
	// addi r10,r1,88
	ctx.r10.s64 = ctx.r1.s64 + 88;
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r27,0
	ctx.r27.s64 = 0;
	// lwz r11,2048(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 2048);
	// cmpw cr6,r9,r11
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, xer);
	// std r27,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r27.u64);
	// stw r27,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r27.u32);
	// bge cr6,0x827afc88
	if (!cr6.lt) goto loc_827AFC88;
	// lis r10,-31763
	ctx.r10.s64 = -2081619968;
	// lis r24,-31763
	ctx.r24.s64 = -2081619968;
	// addi r25,r10,-12860
	ctx.r25.s64 = ctx.r10.s64 + -12860;
loc_827AFB5C:
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, xer);
	// bgt cr6,0x827afb94
	if (cr6.gt) goto loc_827AFB94;
	// lwz r11,-12852(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + -12852);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x827afb8c
	if (!cr6.eq) goto loc_827AFB8C;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r27,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r27.u32);
	// stw r27,4(r25)
	PPC_STORE_U32(ctx.r25.u32 + 4, ctx.r27.u32);
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
	// stw r11,-12852(r24)
	PPC_STORE_U32(ctx.r24.u32 + -12852, ctx.r11.u32);
loc_827AFB8C:
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// b 0x827afb9c
	goto loc_827AFB9C;
loc_827AFB94:
	// rlwinm r11,r10,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
loc_827AFB9C:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// blt cr6,0x827afbfc
	if (cr6.lt) goto loc_827AFBFC;
	// bne cr6,0x827afc88
	if (!cr6.eq) goto loc_827AFC88;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// stw r26,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r26.u32);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827af948
	ctx.lr = 0x827AFBD0;
	sub_827AF948(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x827afb24
	if (cr6.eq) goto loc_827AFB24;
	// lwz r11,3072(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3072);
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,256
	cr6.compare<int32_t>(ctx.r11.s32, 256, xer);
	// blt cr6,0x827afc4c
	if (cr6.lt) goto loc_827AFC4C;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// b 0x827afc74
	goto loc_827AFC74;
loc_827AFBFC:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// stw r26,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r26.u32);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827af948
	ctx.lr = 0x827AFC20;
	sub_827AF948(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x827afb24
	if (cr6.eq) goto loc_827AFB24;
	// lwz r11,3072(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3072);
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,256
	cr6.compare<int32_t>(ctx.r11.s32, 256, xer);
	// blt cr6,0x827afc4c
	if (cr6.lt) goto loc_827AFC4C;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// b 0x827afc74
	goto loc_827AFC74;
loc_827AFC4C:
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stwx r8,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r8.u32);
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// stw r7,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r7.u32);
	// lwz r11,3072(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3072);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// stw r9,3072(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3072, ctx.r9.u32);
loc_827AFC74:
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// lwz r11,2048(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 2048);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, xer);
	// blt cr6,0x827afb5c
	if (cr6.lt) goto loc_827AFB5C;
loc_827AFC88:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827AFC94"))) PPC_WEAK_FUNC(sub_827AFC94);
PPC_FUNC_IMPL(__imp__sub_827AFC94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827AFC98"))) PPC_WEAK_FUNC(sub_827AFC98);
PPC_FUNC_IMPL(__imp__sub_827AFC98) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x827AFCA0;
	__savegprlr_29(ctx, base);
	// stwu r1,-2192(r1)
	ea = -2192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r5,2048
	ctx.r5.s64 = 2048;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x831cdcf0
	ctx.lr = 0x827AFCBC;
	sub_831CDCF0(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stw r31,2144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2144, ctx.r31.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x827af328
	ctx.lr = 0x827AFCD0;
	sub_827AF328(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x827afce8
	if (!cr6.eq) goto loc_827AFCE8;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,2192
	ctx.r1.s64 = ctx.r1.s64 + 2192;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_827AFCE8:
	// lwz r11,2144(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 2144);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x827afd00
	if (!cr6.eq) goto loc_827AFD00;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,2192
	ctx.r1.s64 = ctx.r1.s64 + 2192;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_827AFD00:
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827afaf0
	ctx.lr = 0x827AFD1C;
	sub_827AFAF0(ctx, base);
	// addi r1,r1,2192
	ctx.r1.s64 = ctx.r1.s64 + 2192;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827AFD24"))) PPC_WEAK_FUNC(sub_827AFD24);
PPC_FUNC_IMPL(__imp__sub_827AFD24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827AFD28"))) PPC_WEAK_FUNC(sub_827AFD28);
PPC_FUNC_IMPL(__imp__sub_827AFD28) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad0
	ctx.lr = 0x827AFD30;
	__savegprlr_22(ctx, base);
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,1
	ctx.r11.s64 = 1;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r28,0
	ctx.r28.s64 = 0;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// stw r11,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r11.u32);
	// lfs f0,9008(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r11.u32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stw r11,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r11.u32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stw r11,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r11.u32);
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// mr r23,r6
	ctx.r23.u64 = ctx.r6.u64;
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// addi r29,r1,80
	ctx.r29.s64 = ctx.r1.s64 + 80;
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// mr r27,r28
	ctx.r27.u64 = ctx.r28.u64;
	// stfs f0,108(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// lis r26,-31763
	ctx.r26.s64 = -2081619968;
	// stfs f0,116(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// addi r25,r11,-12848
	ctx.r25.s64 = ctx.r11.s64 + -12848;
	// stfs f0,120(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f0,124(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// stfs f0,132(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f0,136(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stfs f0,140(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// stfs f0,148(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stfs f0,152(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// stfs f0,156(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// stfs f0,164(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// stfs f0,168(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// stfs f0,172(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// stfs f0,180(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// stfs f0,184(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// stfs f0,188(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 188, temp.u32);
	// stfs f0,196(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 196, temp.u32);
	// stfs f0,200(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 200, temp.u32);
	// stfs f0,204(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 204, temp.u32);
loc_827AFDE8:
	// cmpwi cr6,r7,-1
	cr6.compare<int32_t>(ctx.r7.s32, -1, xer);
	// beq cr6,0x827afe64
	if (cr6.eq) goto loc_827AFE64;
	// lwz r11,3072(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3072);
	// cmpw cr6,r11,r7
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r7.s32, xer);
	// bgt cr6,0x827afe2c
	if (cr6.gt) goto loc_827AFE2C;
	// lwz r11,-12836(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + -12836);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x827afe24
	if (!cr6.eq) goto loc_827AFE24;
	// stw r28,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r28.u32);
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r28,4(r25)
	PPC_STORE_U32(ctx.r25.u32 + 4, ctx.r28.u32);
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
	// stw r28,8(r25)
	PPC_STORE_U32(ctx.r25.u32 + 8, ctx.r28.u32);
	// stw r11,-12836(r26)
	PPC_STORE_U32(ctx.r26.u32 + -12836, ctx.r11.u32);
loc_827AFE24:
	// mr r31,r25
	ctx.r31.u64 = ctx.r25.u64;
	// b 0x827afe3c
	goto loc_827AFE3C;
loc_827AFE2C:
	// rlwinm r11,r7,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 + ctx.r11.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r31,r11,r30
	ctx.r31.u64 = ctx.r11.u64 + ctx.r30.u64;
loc_827AFE3C:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x827afed0
	ctx.lr = 0x827AFE50;
	sub_827AFED0(ctx, base);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// lwz r7,8(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r29,r29,16
	ctx.r29.s64 = ctx.r29.s64 + 16;
	// cmpwi cr6,r27,8
	cr6.compare<int32_t>(ctx.r27.s32, 8, xer);
	// blt cr6,0x827afde8
	if (cr6.lt) goto loc_827AFDE8;
loc_827AFE64:
	// lwz r11,3072(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3072);
	// cmpw cr6,r11,r23
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r23.s32, xer);
	// bgt cr6,0x827afea0
	if (cr6.gt) goto loc_827AFEA0;
	// lwz r11,-12836(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + -12836);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x827afe98
	if (!cr6.eq) goto loc_827AFE98;
	// stw r28,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r28.u32);
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r28,4(r25)
	PPC_STORE_U32(ctx.r25.u32 + 4, ctx.r28.u32);
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
	// stw r28,8(r25)
	PPC_STORE_U32(ctx.r25.u32 + 8, ctx.r28.u32);
	// stw r11,-12836(r26)
	PPC_STORE_U32(ctx.r26.u32 + -12836, ctx.r11.u32);
loc_827AFE98:
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// b 0x827afeb0
	goto loc_827AFEB0;
loc_827AFEA0:
	// rlwinm r11,r23,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r23,r11
	ctx.r11.u64 = ctx.r23.u64 + ctx.r11.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
loc_827AFEB0:
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x827b3b38
	ctx.lr = 0x827AFEC8;
	sub_827B3B38(ctx, base);
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827AFED0"))) PPC_WEAK_FUNC(sub_827AFED0);
PPC_FUNC_IMPL(__imp__sub_827AFED0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x827AFED8;
	__savegprlr_28(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmpwi cr6,r6,0
	cr6.compare<int32_t>(ctx.r6.s32, 0, xer);
	// blt cr6,0x827b011c
	if (cr6.lt) goto loc_827B011C;
	// lwz r11,3072(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 3072);
	// cmpw cr6,r11,r6
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r6.s32, xer);
	// bgt cr6,0x827aff34
	if (cr6.gt) goto loc_827AFF34;
	// lis r9,-31763
	ctx.r9.s64 = -2081619968;
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// addi r31,r11,-12848
	ctx.r31.s64 = ctx.r11.s64 + -12848;
	// lwz r10,-12836(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + -12836);
	// clrlwi r11,r10,31
	ctx.r11.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x827aff44
	if (!cr6.eq) goto loc_827AFF44;
	// ori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 | 1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
	// stw r10,-12836(r9)
	PPC_STORE_U32(ctx.r9.u32 + -12836, ctx.r10.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// b 0x827aff44
	goto loc_827AFF44;
loc_827AFF34:
	// rlwinm r11,r6,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r6,r11
	ctx.r11.u64 = ctx.r6.u64 + ctx.r11.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r31,r11,r30
	ctx.r31.u64 = ctx.r11.u64 + ctx.r30.u64;
loc_827AFF44:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,5
	cr6.compare<uint32_t>(ctx.r11.u32, 5, xer);
	// bgt cr6,0x827b011c
	if (cr6.gt) goto loc_827B011C;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x827affac
	if (cr6.eq) goto loc_827AFFAC;
	// bdz 0x827b0008
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_827B0008;
	// bdz 0x827b0064
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_827B0064;
	// bdz 0x827b00c0
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_827B00C0;
	// bdnz 0x827aff88
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_827AFF88;
	// li r11,1
	ctx.r11.s64 = 1;
	// lfs f0,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 4, temp.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_827AFF88:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r7,8(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x827afd28
	ctx.lr = 0x827AFFA0;
	sub_827AFD28(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_827AFFAC:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r10,1
	ctx.r10.s64 = 1;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lfs f0,9008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// bl 0x827afed0
	ctx.lr = 0x827AFFDC;
	sub_827AFED0(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r6,8(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827afed0
	ctx.lr = 0x827AFFF0;
	sub_827AFED0(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x827b4000
	ctx.lr = 0x827AFFFC;
	sub_827B4000(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_827B0008:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r10,1
	ctx.r10.s64 = 1;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lfs f0,9008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f0,108(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// bl 0x827afed0
	ctx.lr = 0x827B0038;
	sub_827AFED0(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r6,8(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x827afed0
	ctx.lr = 0x827B004C;
	sub_827AFED0(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x827b4078
	ctx.lr = 0x827B0058;
	sub_827B4078(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_827B0064:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r10,1
	ctx.r10.s64 = 1;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// stw r10,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lfs f0,9008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,116(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f0,120(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f0,124(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// bl 0x827afed0
	ctx.lr = 0x827B0094;
	sub_827AFED0(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r6,8(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x827afed0
	ctx.lr = 0x827B00A8;
	sub_827AFED0(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x827b40f0
	ctx.lr = 0x827B00B4;
	sub_827B40F0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_827B00C0:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r10,1
	ctx.r10.s64 = 1;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// stw r10,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r10.u32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lfs f0,9008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,132(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f0,136(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stfs f0,140(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// bl 0x827afed0
	ctx.lr = 0x827B00F0;
	sub_827AFED0(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r6,8(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x827afed0
	ctx.lr = 0x827B0104;
	sub_827AFED0(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x827b4198
	ctx.lr = 0x827B0110;
	sub_827B4198(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_827B011C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827B0128"))) PPC_WEAK_FUNC(sub_827B0128);
PPC_FUNC_IMPL(__imp__sub_827B0128) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,3072(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 3072);
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x827b015c
	if (!cr6.eq) goto loc_827B015C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,9008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f1.f64 = double(temp.f32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_827B015C:
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// stw r4,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r4.u32);
	// addi r6,r10,-1
	ctx.r6.s64 = ctx.r10.s64 + -1;
	// stw r8,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r8.u32);
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lfs f0,9008(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f0,108(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// bl 0x827afed0
	ctx.lr = 0x827B0198;
	sub_827AFED0(ctx, base);
	// lfs f1,100(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f1.f64 = double(temp.f32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827B01AC"))) PPC_WEAK_FUNC(sub_827B01AC);
PPC_FUNC_IMPL(__imp__sub_827B01AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B01B0"))) PPC_WEAK_FUNC(sub_827B01B0);
PPC_FUNC_IMPL(__imp__sub_827B01B0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bge cr6,0x827b01c4
	if (!cr6.lt) goto loc_827B01C4;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x827b01ec
	goto loc_827B01EC;
loc_827B01C4:
	// cmpwi cr6,r4,11
	cr6.compare<int32_t>(ctx.r4.s32, 11, xer);
	// bge cr6,0x827b01d4
	if (!cr6.lt) goto loc_827B01D4;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x827b01ec
	goto loc_827B01EC;
loc_827B01D4:
	// li r11,22
	ctx.r11.s64 = 22;
	// subfc r10,r11,r4
	xer.ca = ctx.r4.u32 >= ctx.r11.u32;
	ctx.r10.s64 = ctx.r4.s64 - ctx.r11.s64;
	// eqv r9,r11,r4
	ctx.r9.u64 = ~(ctx.r11.u64 ^ ctx.r4.u64);
	// rlwinm r8,r9,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1;
	// addze r7,r8
	temp.s64 = ctx.r8.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r7.s64 = temp.s64;
	// clrlwi r11,r7,31
	ctx.r11.u64 = ctx.r7.u32 & 0x1;
loc_827B01EC:
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// b 0x827b0128
	sub_827B0128(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827B01F4"))) PPC_WEAK_FUNC(sub_827B01F4);
PPC_FUNC_IMPL(__imp__sub_827B01F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B01F8"))) PPC_WEAK_FUNC(sub_827B01F8);
PPC_FUNC_IMPL(__imp__sub_827B01F8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r11,-31779
	ctx.r11.s64 = -2082668544;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r8,r11,8656
	ctx.r8.s64 = ctx.r11.s64 + 8656;
loc_827B0208:
	// lwz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
loc_827B0210:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r9,r6,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r6.s64;
	// beq cr6,0x827b0234
	if (cr6.eq) goto loc_827B0234;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x827b0210
	if (cr6.eq) goto loc_827B0210;
loc_827B0234:
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// cmplwi cr6,r3,209
	cr6.compare<uint32_t>(ctx.r3.u32, 209, xer);
	// blt cr6,0x827b0208
	if (cr6.lt) goto loc_827B0208;
	// li r3,2
	ctx.r3.s64 = 2;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827B0254"))) PPC_WEAK_FUNC(sub_827B0254);
PPC_FUNC_IMPL(__imp__sub_827B0254) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B0258"))) PPC_WEAK_FUNC(sub_827B0258);
PPC_FUNC_IMPL(__imp__sub_827B0258) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r11,-14136
	ctx.r6.s64 = ctx.r11.s64 + -14136;
	// mr r8,r6
	ctx.r8.u64 = ctx.r6.u64;
loc_827B0268:
	// lwz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
loc_827B0270:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r5,0(r10)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r9,r5,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r5.s64;
	// beq cr6,0x827b0294
	if (cr6.eq) goto loc_827B0294;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x827b0270
	if (cr6.eq) goto loc_827B0270;
loc_827B0294:
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x827b02b8
	if (cr6.eq) goto loc_827B02B8;
	// addi r8,r8,12
	ctx.r8.s64 = ctx.r8.s64 + 12;
	// addi r11,r6,312
	ctx.r11.s64 = ctx.r6.s64 + 312;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// cmpw cr6,r8,r11
	cr6.compare<int32_t>(ctx.r8.s32, ctx.r11.s32, xer);
	// blt cr6,0x827b0268
	if (cr6.lt) goto loc_827B0268;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_827B02B8:
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827B02C0"))) PPC_WEAK_FUNC(sub_827B02C0);
PPC_FUNC_IMPL(__imp__sub_827B02C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31779
	ctx.r11.s64 = -2082668544;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,9704
	ctx.r9.s64 = ctx.r11.s64 + 9704;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827B02D4"))) PPC_WEAK_FUNC(sub_827B02D4);
PPC_FUNC_IMPL(__imp__sub_827B02D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B02D8"))) PPC_WEAK_FUNC(sub_827B02D8);
PPC_FUNC_IMPL(__imp__sub_827B02D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31779
	ctx.r11.s64 = -2082668544;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,9924
	ctx.r9.s64 = ctx.r11.s64 + 9924;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827B02EC"))) PPC_WEAK_FUNC(sub_827B02EC);
PPC_FUNC_IMPL(__imp__sub_827B02EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B02F0"))) PPC_WEAK_FUNC(sub_827B02F0);
PPC_FUNC_IMPL(__imp__sub_827B02F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31779
	ctx.r11.s64 = -2082668544;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,9972
	ctx.r9.s64 = ctx.r11.s64 + 9972;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827B0304"))) PPC_WEAK_FUNC(sub_827B0304);
PPC_FUNC_IMPL(__imp__sub_827B0304) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B0308"))) PPC_WEAK_FUNC(sub_827B0308);
PPC_FUNC_IMPL(__imp__sub_827B0308) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31779
	ctx.r11.s64 = -2082668544;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,9976
	ctx.r9.s64 = ctx.r11.s64 + 9976;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827B031C"))) PPC_WEAK_FUNC(sub_827B031C);
PPC_FUNC_IMPL(__imp__sub_827B031C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B0320"))) PPC_WEAK_FUNC(sub_827B0320);
PPC_FUNC_IMPL(__imp__sub_827B0320) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31779
	ctx.r11.s64 = -2082668544;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,9984
	ctx.r9.s64 = ctx.r11.s64 + 9984;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827B0334"))) PPC_WEAK_FUNC(sub_827B0334);
PPC_FUNC_IMPL(__imp__sub_827B0334) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B0338"))) PPC_WEAK_FUNC(sub_827B0338);
PPC_FUNC_IMPL(__imp__sub_827B0338) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31779
	ctx.r11.s64 = -2082668544;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,10008
	ctx.r9.s64 = ctx.r11.s64 + 10008;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827B034C"))) PPC_WEAK_FUNC(sub_827B034C);
PPC_FUNC_IMPL(__imp__sub_827B034C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B0350"))) PPC_WEAK_FUNC(sub_827B0350);
PPC_FUNC_IMPL(__imp__sub_827B0350) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31779
	ctx.r11.s64 = -2082668544;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,10024
	ctx.r9.s64 = ctx.r11.s64 + 10024;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827B0364"))) PPC_WEAK_FUNC(sub_827B0364);
PPC_FUNC_IMPL(__imp__sub_827B0364) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B0368"))) PPC_WEAK_FUNC(sub_827B0368);
PPC_FUNC_IMPL(__imp__sub_827B0368) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31779
	ctx.r11.s64 = -2082668544;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,10064
	ctx.r9.s64 = ctx.r11.s64 + 10064;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827B037C"))) PPC_WEAK_FUNC(sub_827B037C);
PPC_FUNC_IMPL(__imp__sub_827B037C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B0380"))) PPC_WEAK_FUNC(sub_827B0380);
PPC_FUNC_IMPL(__imp__sub_827B0380) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31779
	ctx.r11.s64 = -2082668544;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,10140
	ctx.r9.s64 = ctx.r11.s64 + 10140;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827B0394"))) PPC_WEAK_FUNC(sub_827B0394);
PPC_FUNC_IMPL(__imp__sub_827B0394) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B0398"))) PPC_WEAK_FUNC(sub_827B0398);
PPC_FUNC_IMPL(__imp__sub_827B0398) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31779
	ctx.r11.s64 = -2082668544;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,10164
	ctx.r9.s64 = ctx.r11.s64 + 10164;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827B03AC"))) PPC_WEAK_FUNC(sub_827B03AC);
PPC_FUNC_IMPL(__imp__sub_827B03AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B03B0"))) PPC_WEAK_FUNC(sub_827B03B0);
PPC_FUNC_IMPL(__imp__sub_827B03B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31779
	ctx.r11.s64 = -2082668544;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,10192
	ctx.r9.s64 = ctx.r11.s64 + 10192;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827B03C4"))) PPC_WEAK_FUNC(sub_827B03C4);
PPC_FUNC_IMPL(__imp__sub_827B03C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B03C8"))) PPC_WEAK_FUNC(sub_827B03C8);
PPC_FUNC_IMPL(__imp__sub_827B03C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31779
	ctx.r11.s64 = -2082668544;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,10208
	ctx.r9.s64 = ctx.r11.s64 + 10208;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827B03DC"))) PPC_WEAK_FUNC(sub_827B03DC);
PPC_FUNC_IMPL(__imp__sub_827B03DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B03E0"))) PPC_WEAK_FUNC(sub_827B03E0);
PPC_FUNC_IMPL(__imp__sub_827B03E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31779
	ctx.r11.s64 = -2082668544;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,10220
	ctx.r9.s64 = ctx.r11.s64 + 10220;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827B03F4"))) PPC_WEAK_FUNC(sub_827B03F4);
PPC_FUNC_IMPL(__imp__sub_827B03F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B03F8"))) PPC_WEAK_FUNC(sub_827B03F8);
PPC_FUNC_IMPL(__imp__sub_827B03F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31779
	ctx.r11.s64 = -2082668544;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,10236
	ctx.r9.s64 = ctx.r11.s64 + 10236;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827B040C"))) PPC_WEAK_FUNC(sub_827B040C);
PPC_FUNC_IMPL(__imp__sub_827B040C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B0410"))) PPC_WEAK_FUNC(sub_827B0410);
PPC_FUNC_IMPL(__imp__sub_827B0410) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31779
	ctx.r11.s64 = -2082668544;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,10248
	ctx.r9.s64 = ctx.r11.s64 + 10248;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827B0424"))) PPC_WEAK_FUNC(sub_827B0424);
PPC_FUNC_IMPL(__imp__sub_827B0424) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B0428"))) PPC_WEAK_FUNC(sub_827B0428);
PPC_FUNC_IMPL(__imp__sub_827B0428) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31779
	ctx.r11.s64 = -2082668544;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,10260
	ctx.r9.s64 = ctx.r11.s64 + 10260;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827B043C"))) PPC_WEAK_FUNC(sub_827B043C);
PPC_FUNC_IMPL(__imp__sub_827B043C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B0440"))) PPC_WEAK_FUNC(sub_827B0440);
PPC_FUNC_IMPL(__imp__sub_827B0440) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31779
	ctx.r11.s64 = -2082668544;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,10276
	ctx.r9.s64 = ctx.r11.s64 + 10276;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827B0454"))) PPC_WEAK_FUNC(sub_827B0454);
PPC_FUNC_IMPL(__imp__sub_827B0454) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B0458"))) PPC_WEAK_FUNC(sub_827B0458);
PPC_FUNC_IMPL(__imp__sub_827B0458) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31779
	ctx.r11.s64 = -2082668544;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,10324
	ctx.r9.s64 = ctx.r11.s64 + 10324;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827B046C"))) PPC_WEAK_FUNC(sub_827B046C);
PPC_FUNC_IMPL(__imp__sub_827B046C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B0470"))) PPC_WEAK_FUNC(sub_827B0470);
PPC_FUNC_IMPL(__imp__sub_827B0470) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31779
	ctx.r11.s64 = -2082668544;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,10352
	ctx.r9.s64 = ctx.r11.s64 + 10352;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827B0484"))) PPC_WEAK_FUNC(sub_827B0484);
PPC_FUNC_IMPL(__imp__sub_827B0484) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B0488"))) PPC_WEAK_FUNC(sub_827B0488);
PPC_FUNC_IMPL(__imp__sub_827B0488) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31779
	ctx.r11.s64 = -2082668544;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,10360
	ctx.r9.s64 = ctx.r11.s64 + 10360;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827B049C"))) PPC_WEAK_FUNC(sub_827B049C);
PPC_FUNC_IMPL(__imp__sub_827B049C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B04A0"))) PPC_WEAK_FUNC(sub_827B04A0);
PPC_FUNC_IMPL(__imp__sub_827B04A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31779
	ctx.r11.s64 = -2082668544;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,10416
	ctx.r9.s64 = ctx.r11.s64 + 10416;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827B04B4"))) PPC_WEAK_FUNC(sub_827B04B4);
PPC_FUNC_IMPL(__imp__sub_827B04B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B04B8"))) PPC_WEAK_FUNC(sub_827B04B8);
PPC_FUNC_IMPL(__imp__sub_827B04B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31779
	ctx.r11.s64 = -2082668544;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,10432
	ctx.r9.s64 = ctx.r11.s64 + 10432;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827B04CC"))) PPC_WEAK_FUNC(sub_827B04CC);
PPC_FUNC_IMPL(__imp__sub_827B04CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B04D0"))) PPC_WEAK_FUNC(sub_827B04D0);
PPC_FUNC_IMPL(__imp__sub_827B04D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31779
	ctx.r11.s64 = -2082668544;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,10456
	ctx.r9.s64 = ctx.r11.s64 + 10456;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827B04E4"))) PPC_WEAK_FUNC(sub_827B04E4);
PPC_FUNC_IMPL(__imp__sub_827B04E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B04E8"))) PPC_WEAK_FUNC(sub_827B04E8);
PPC_FUNC_IMPL(__imp__sub_827B04E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31779
	ctx.r11.s64 = -2082668544;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,10468
	ctx.r9.s64 = ctx.r11.s64 + 10468;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827B04FC"))) PPC_WEAK_FUNC(sub_827B04FC);
PPC_FUNC_IMPL(__imp__sub_827B04FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B0500"))) PPC_WEAK_FUNC(sub_827B0500);
PPC_FUNC_IMPL(__imp__sub_827B0500) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31779
	ctx.r11.s64 = -2082668544;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,10476
	ctx.r9.s64 = ctx.r11.s64 + 10476;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827B0514"))) PPC_WEAK_FUNC(sub_827B0514);
PPC_FUNC_IMPL(__imp__sub_827B0514) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B0518"))) PPC_WEAK_FUNC(sub_827B0518);
PPC_FUNC_IMPL(__imp__sub_827B0518) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31779
	ctx.r11.s64 = -2082668544;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,10492
	ctx.r9.s64 = ctx.r11.s64 + 10492;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827B052C"))) PPC_WEAK_FUNC(sub_827B052C);
PPC_FUNC_IMPL(__imp__sub_827B052C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B0530"))) PPC_WEAK_FUNC(sub_827B0530);
PPC_FUNC_IMPL(__imp__sub_827B0530) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31779
	ctx.r11.s64 = -2082668544;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,10504
	ctx.r9.s64 = ctx.r11.s64 + 10504;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827B0544"))) PPC_WEAK_FUNC(sub_827B0544);
PPC_FUNC_IMPL(__imp__sub_827B0544) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B0548"))) PPC_WEAK_FUNC(sub_827B0548);
PPC_FUNC_IMPL(__imp__sub_827B0548) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31779
	ctx.r11.s64 = -2082668544;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,10572
	ctx.r9.s64 = ctx.r11.s64 + 10572;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827B055C"))) PPC_WEAK_FUNC(sub_827B055C);
PPC_FUNC_IMPL(__imp__sub_827B055C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B0560"))) PPC_WEAK_FUNC(sub_827B0560);
PPC_FUNC_IMPL(__imp__sub_827B0560) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31779
	ctx.r11.s64 = -2082668544;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,10588
	ctx.r9.s64 = ctx.r11.s64 + 10588;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827B0574"))) PPC_WEAK_FUNC(sub_827B0574);
PPC_FUNC_IMPL(__imp__sub_827B0574) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B0578"))) PPC_WEAK_FUNC(sub_827B0578);
PPC_FUNC_IMPL(__imp__sub_827B0578) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31779
	ctx.r11.s64 = -2082668544;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,10600
	ctx.r9.s64 = ctx.r11.s64 + 10600;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827B058C"))) PPC_WEAK_FUNC(sub_827B058C);
PPC_FUNC_IMPL(__imp__sub_827B058C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B0590"))) PPC_WEAK_FUNC(sub_827B0590);
PPC_FUNC_IMPL(__imp__sub_827B0590) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31779
	ctx.r11.s64 = -2082668544;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,10628
	ctx.r9.s64 = ctx.r11.s64 + 10628;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827B05A4"))) PPC_WEAK_FUNC(sub_827B05A4);
PPC_FUNC_IMPL(__imp__sub_827B05A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B05A8"))) PPC_WEAK_FUNC(sub_827B05A8);
PPC_FUNC_IMPL(__imp__sub_827B05A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31779
	ctx.r11.s64 = -2082668544;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,10648
	ctx.r9.s64 = ctx.r11.s64 + 10648;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827B05BC"))) PPC_WEAK_FUNC(sub_827B05BC);
PPC_FUNC_IMPL(__imp__sub_827B05BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B05C0"))) PPC_WEAK_FUNC(sub_827B05C0);
PPC_FUNC_IMPL(__imp__sub_827B05C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31779
	ctx.r11.s64 = -2082668544;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,10656
	ctx.r9.s64 = ctx.r11.s64 + 10656;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827B05D4"))) PPC_WEAK_FUNC(sub_827B05D4);
PPC_FUNC_IMPL(__imp__sub_827B05D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B05D8"))) PPC_WEAK_FUNC(sub_827B05D8);
PPC_FUNC_IMPL(__imp__sub_827B05D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31779
	ctx.r11.s64 = -2082668544;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,10676
	ctx.r9.s64 = ctx.r11.s64 + 10676;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827B05EC"))) PPC_WEAK_FUNC(sub_827B05EC);
PPC_FUNC_IMPL(__imp__sub_827B05EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B05F0"))) PPC_WEAK_FUNC(sub_827B05F0);
PPC_FUNC_IMPL(__imp__sub_827B05F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31779
	ctx.r11.s64 = -2082668544;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,10704
	ctx.r9.s64 = ctx.r11.s64 + 10704;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827B0604"))) PPC_WEAK_FUNC(sub_827B0604);
PPC_FUNC_IMPL(__imp__sub_827B0604) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B0608"))) PPC_WEAK_FUNC(sub_827B0608);
PPC_FUNC_IMPL(__imp__sub_827B0608) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31779
	ctx.r11.s64 = -2082668544;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,10708
	ctx.r9.s64 = ctx.r11.s64 + 10708;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827B061C"))) PPC_WEAK_FUNC(sub_827B061C);
PPC_FUNC_IMPL(__imp__sub_827B061C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B0620"))) PPC_WEAK_FUNC(sub_827B0620);
PPC_FUNC_IMPL(__imp__sub_827B0620) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31779
	ctx.r11.s64 = -2082668544;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,10764
	ctx.r9.s64 = ctx.r11.s64 + 10764;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827B0634"))) PPC_WEAK_FUNC(sub_827B0634);
PPC_FUNC_IMPL(__imp__sub_827B0634) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B0638"))) PPC_WEAK_FUNC(sub_827B0638);
PPC_FUNC_IMPL(__imp__sub_827B0638) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31779
	ctx.r11.s64 = -2082668544;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,10772
	ctx.r9.s64 = ctx.r11.s64 + 10772;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827B064C"))) PPC_WEAK_FUNC(sub_827B064C);
PPC_FUNC_IMPL(__imp__sub_827B064C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B0650"))) PPC_WEAK_FUNC(sub_827B0650);
PPC_FUNC_IMPL(__imp__sub_827B0650) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31779
	ctx.r11.s64 = -2082668544;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,10776
	ctx.r9.s64 = ctx.r11.s64 + 10776;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827B0664"))) PPC_WEAK_FUNC(sub_827B0664);
PPC_FUNC_IMPL(__imp__sub_827B0664) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B0668"))) PPC_WEAK_FUNC(sub_827B0668);
PPC_FUNC_IMPL(__imp__sub_827B0668) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31779
	ctx.r11.s64 = -2082668544;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,10804
	ctx.r9.s64 = ctx.r11.s64 + 10804;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827B067C"))) PPC_WEAK_FUNC(sub_827B067C);
PPC_FUNC_IMPL(__imp__sub_827B067C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B0680"))) PPC_WEAK_FUNC(sub_827B0680);
PPC_FUNC_IMPL(__imp__sub_827B0680) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31779
	ctx.r11.s64 = -2082668544;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,10852
	ctx.r9.s64 = ctx.r11.s64 + 10852;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827B0694"))) PPC_WEAK_FUNC(sub_827B0694);
PPC_FUNC_IMPL(__imp__sub_827B0694) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B0698"))) PPC_WEAK_FUNC(sub_827B0698);
PPC_FUNC_IMPL(__imp__sub_827B0698) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31779
	ctx.r11.s64 = -2082668544;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,10908
	ctx.r9.s64 = ctx.r11.s64 + 10908;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827B06AC"))) PPC_WEAK_FUNC(sub_827B06AC);
PPC_FUNC_IMPL(__imp__sub_827B06AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B06B0"))) PPC_WEAK_FUNC(sub_827B06B0);
PPC_FUNC_IMPL(__imp__sub_827B06B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31779
	ctx.r11.s64 = -2082668544;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,10928
	ctx.r9.s64 = ctx.r11.s64 + 10928;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827B06C4"))) PPC_WEAK_FUNC(sub_827B06C4);
PPC_FUNC_IMPL(__imp__sub_827B06C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B06C8"))) PPC_WEAK_FUNC(sub_827B06C8);
PPC_FUNC_IMPL(__imp__sub_827B06C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31779
	ctx.r11.s64 = -2082668544;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,10956
	ctx.r9.s64 = ctx.r11.s64 + 10956;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827B06DC"))) PPC_WEAK_FUNC(sub_827B06DC);
PPC_FUNC_IMPL(__imp__sub_827B06DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B06E0"))) PPC_WEAK_FUNC(sub_827B06E0);
PPC_FUNC_IMPL(__imp__sub_827B06E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31779
	ctx.r11.s64 = -2082668544;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,10968
	ctx.r9.s64 = ctx.r11.s64 + 10968;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827B06F4"))) PPC_WEAK_FUNC(sub_827B06F4);
PPC_FUNC_IMPL(__imp__sub_827B06F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B06F8"))) PPC_WEAK_FUNC(sub_827B06F8);
PPC_FUNC_IMPL(__imp__sub_827B06F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31779
	ctx.r11.s64 = -2082668544;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,10980
	ctx.r9.s64 = ctx.r11.s64 + 10980;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827B070C"))) PPC_WEAK_FUNC(sub_827B070C);
PPC_FUNC_IMPL(__imp__sub_827B070C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B0710"))) PPC_WEAK_FUNC(sub_827B0710);
PPC_FUNC_IMPL(__imp__sub_827B0710) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31779
	ctx.r11.s64 = -2082668544;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,10992
	ctx.r9.s64 = ctx.r11.s64 + 10992;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827B0724"))) PPC_WEAK_FUNC(sub_827B0724);
PPC_FUNC_IMPL(__imp__sub_827B0724) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B0728"))) PPC_WEAK_FUNC(sub_827B0728);
PPC_FUNC_IMPL(__imp__sub_827B0728) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31779
	ctx.r11.s64 = -2082668544;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,11064
	ctx.r9.s64 = ctx.r11.s64 + 11064;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827B073C"))) PPC_WEAK_FUNC(sub_827B073C);
PPC_FUNC_IMPL(__imp__sub_827B073C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B0740"))) PPC_WEAK_FUNC(sub_827B0740);
PPC_FUNC_IMPL(__imp__sub_827B0740) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31779
	ctx.r11.s64 = -2082668544;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,11128
	ctx.r9.s64 = ctx.r11.s64 + 11128;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827B0754"))) PPC_WEAK_FUNC(sub_827B0754);
PPC_FUNC_IMPL(__imp__sub_827B0754) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B0758"))) PPC_WEAK_FUNC(sub_827B0758);
PPC_FUNC_IMPL(__imp__sub_827B0758) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31779
	ctx.r11.s64 = -2082668544;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,11152
	ctx.r9.s64 = ctx.r11.s64 + 11152;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827B076C"))) PPC_WEAK_FUNC(sub_827B076C);
PPC_FUNC_IMPL(__imp__sub_827B076C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B0770"))) PPC_WEAK_FUNC(sub_827B0770);
PPC_FUNC_IMPL(__imp__sub_827B0770) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31779
	ctx.r11.s64 = -2082668544;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,11228
	ctx.r9.s64 = ctx.r11.s64 + 11228;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827B0784"))) PPC_WEAK_FUNC(sub_827B0784);
PPC_FUNC_IMPL(__imp__sub_827B0784) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B0788"))) PPC_WEAK_FUNC(sub_827B0788);
PPC_FUNC_IMPL(__imp__sub_827B0788) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31779
	ctx.r11.s64 = -2082668544;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,11236
	ctx.r9.s64 = ctx.r11.s64 + 11236;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827B079C"))) PPC_WEAK_FUNC(sub_827B079C);
PPC_FUNC_IMPL(__imp__sub_827B079C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B07A0"))) PPC_WEAK_FUNC(sub_827B07A0);
PPC_FUNC_IMPL(__imp__sub_827B07A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31779
	ctx.r11.s64 = -2082668544;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,11256
	ctx.r9.s64 = ctx.r11.s64 + 11256;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827B07B4"))) PPC_WEAK_FUNC(sub_827B07B4);
PPC_FUNC_IMPL(__imp__sub_827B07B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B07B8"))) PPC_WEAK_FUNC(sub_827B07B8);
PPC_FUNC_IMPL(__imp__sub_827B07B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31779
	ctx.r11.s64 = -2082668544;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,11296
	ctx.r9.s64 = ctx.r11.s64 + 11296;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827B07CC"))) PPC_WEAK_FUNC(sub_827B07CC);
PPC_FUNC_IMPL(__imp__sub_827B07CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B07D0"))) PPC_WEAK_FUNC(sub_827B07D0);
PPC_FUNC_IMPL(__imp__sub_827B07D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31779
	ctx.r11.s64 = -2082668544;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,11328
	ctx.r9.s64 = ctx.r11.s64 + 11328;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827B07E4"))) PPC_WEAK_FUNC(sub_827B07E4);
PPC_FUNC_IMPL(__imp__sub_827B07E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B07E8"))) PPC_WEAK_FUNC(sub_827B07E8);
PPC_FUNC_IMPL(__imp__sub_827B07E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31779
	ctx.r11.s64 = -2082668544;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,11452
	ctx.r9.s64 = ctx.r11.s64 + 11452;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827B07FC"))) PPC_WEAK_FUNC(sub_827B07FC);
PPC_FUNC_IMPL(__imp__sub_827B07FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B0800"))) PPC_WEAK_FUNC(sub_827B0800);
PPC_FUNC_IMPL(__imp__sub_827B0800) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31779
	ctx.r11.s64 = -2082668544;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,11468
	ctx.r9.s64 = ctx.r11.s64 + 11468;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827B0814"))) PPC_WEAK_FUNC(sub_827B0814);
PPC_FUNC_IMPL(__imp__sub_827B0814) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B0818"))) PPC_WEAK_FUNC(sub_827B0818);
PPC_FUNC_IMPL(__imp__sub_827B0818) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31779
	ctx.r11.s64 = -2082668544;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,11488
	ctx.r9.s64 = ctx.r11.s64 + 11488;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827B082C"))) PPC_WEAK_FUNC(sub_827B082C);
PPC_FUNC_IMPL(__imp__sub_827B082C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B0830"))) PPC_WEAK_FUNC(sub_827B0830);
PPC_FUNC_IMPL(__imp__sub_827B0830) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31779
	ctx.r11.s64 = -2082668544;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,11496
	ctx.r9.s64 = ctx.r11.s64 + 11496;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827B0844"))) PPC_WEAK_FUNC(sub_827B0844);
PPC_FUNC_IMPL(__imp__sub_827B0844) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B0848"))) PPC_WEAK_FUNC(sub_827B0848);
PPC_FUNC_IMPL(__imp__sub_827B0848) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31779
	ctx.r11.s64 = -2082668544;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,11528
	ctx.r9.s64 = ctx.r11.s64 + 11528;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827B085C"))) PPC_WEAK_FUNC(sub_827B085C);
PPC_FUNC_IMPL(__imp__sub_827B085C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B0860"))) PPC_WEAK_FUNC(sub_827B0860);
PPC_FUNC_IMPL(__imp__sub_827B0860) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31779
	ctx.r11.s64 = -2082668544;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,11564
	ctx.r9.s64 = ctx.r11.s64 + 11564;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827B0874"))) PPC_WEAK_FUNC(sub_827B0874);
PPC_FUNC_IMPL(__imp__sub_827B0874) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B0878"))) PPC_WEAK_FUNC(sub_827B0878);
PPC_FUNC_IMPL(__imp__sub_827B0878) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31779
	ctx.r11.s64 = -2082668544;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,11580
	ctx.r9.s64 = ctx.r11.s64 + 11580;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827B088C"))) PPC_WEAK_FUNC(sub_827B088C);
PPC_FUNC_IMPL(__imp__sub_827B088C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B0890"))) PPC_WEAK_FUNC(sub_827B0890);
PPC_FUNC_IMPL(__imp__sub_827B0890) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31779
	ctx.r11.s64 = -2082668544;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,11604
	ctx.r9.s64 = ctx.r11.s64 + 11604;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827B08A4"))) PPC_WEAK_FUNC(sub_827B08A4);
PPC_FUNC_IMPL(__imp__sub_827B08A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B08A8"))) PPC_WEAK_FUNC(sub_827B08A8);
PPC_FUNC_IMPL(__imp__sub_827B08A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31779
	ctx.r11.s64 = -2082668544;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,11620
	ctx.r9.s64 = ctx.r11.s64 + 11620;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827B08BC"))) PPC_WEAK_FUNC(sub_827B08BC);
PPC_FUNC_IMPL(__imp__sub_827B08BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B08C0"))) PPC_WEAK_FUNC(sub_827B08C0);
PPC_FUNC_IMPL(__imp__sub_827B08C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31779
	ctx.r11.s64 = -2082668544;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,11632
	ctx.r9.s64 = ctx.r11.s64 + 11632;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827B08D4"))) PPC_WEAK_FUNC(sub_827B08D4);
PPC_FUNC_IMPL(__imp__sub_827B08D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B08D8"))) PPC_WEAK_FUNC(sub_827B08D8);
PPC_FUNC_IMPL(__imp__sub_827B08D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31779
	ctx.r11.s64 = -2082668544;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,11648
	ctx.r9.s64 = ctx.r11.s64 + 11648;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827B08EC"))) PPC_WEAK_FUNC(sub_827B08EC);
PPC_FUNC_IMPL(__imp__sub_827B08EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B08F0"))) PPC_WEAK_FUNC(sub_827B08F0);
PPC_FUNC_IMPL(__imp__sub_827B08F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31779
	ctx.r11.s64 = -2082668544;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,11676
	ctx.r9.s64 = ctx.r11.s64 + 11676;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827B0904"))) PPC_WEAK_FUNC(sub_827B0904);
PPC_FUNC_IMPL(__imp__sub_827B0904) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B0908"))) PPC_WEAK_FUNC(sub_827B0908);
PPC_FUNC_IMPL(__imp__sub_827B0908) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31779
	ctx.r11.s64 = -2082668544;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,11720
	ctx.r9.s64 = ctx.r11.s64 + 11720;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827B091C"))) PPC_WEAK_FUNC(sub_827B091C);
PPC_FUNC_IMPL(__imp__sub_827B091C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B0920"))) PPC_WEAK_FUNC(sub_827B0920);
PPC_FUNC_IMPL(__imp__sub_827B0920) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31779
	ctx.r11.s64 = -2082668544;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,11732
	ctx.r9.s64 = ctx.r11.s64 + 11732;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827B0934"))) PPC_WEAK_FUNC(sub_827B0934);
PPC_FUNC_IMPL(__imp__sub_827B0934) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B0938"))) PPC_WEAK_FUNC(sub_827B0938);
PPC_FUNC_IMPL(__imp__sub_827B0938) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31779
	ctx.r11.s64 = -2082668544;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,11760
	ctx.r9.s64 = ctx.r11.s64 + 11760;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827B094C"))) PPC_WEAK_FUNC(sub_827B094C);
PPC_FUNC_IMPL(__imp__sub_827B094C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B0950"))) PPC_WEAK_FUNC(sub_827B0950);
PPC_FUNC_IMPL(__imp__sub_827B0950) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31779
	ctx.r11.s64 = -2082668544;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,11788
	ctx.r9.s64 = ctx.r11.s64 + 11788;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827B0964"))) PPC_WEAK_FUNC(sub_827B0964);
PPC_FUNC_IMPL(__imp__sub_827B0964) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B0968"))) PPC_WEAK_FUNC(sub_827B0968);
PPC_FUNC_IMPL(__imp__sub_827B0968) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31779
	ctx.r11.s64 = -2082668544;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,11808
	ctx.r9.s64 = ctx.r11.s64 + 11808;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827B097C"))) PPC_WEAK_FUNC(sub_827B097C);
PPC_FUNC_IMPL(__imp__sub_827B097C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B0980"))) PPC_WEAK_FUNC(sub_827B0980);
PPC_FUNC_IMPL(__imp__sub_827B0980) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31779
	ctx.r11.s64 = -2082668544;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,11832
	ctx.r9.s64 = ctx.r11.s64 + 11832;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827B0994"))) PPC_WEAK_FUNC(sub_827B0994);
PPC_FUNC_IMPL(__imp__sub_827B0994) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B0998"))) PPC_WEAK_FUNC(sub_827B0998);
PPC_FUNC_IMPL(__imp__sub_827B0998) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31779
	ctx.r11.s64 = -2082668544;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,11852
	ctx.r9.s64 = ctx.r11.s64 + 11852;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827B09AC"))) PPC_WEAK_FUNC(sub_827B09AC);
PPC_FUNC_IMPL(__imp__sub_827B09AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B09B0"))) PPC_WEAK_FUNC(sub_827B09B0);
PPC_FUNC_IMPL(__imp__sub_827B09B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31779
	ctx.r11.s64 = -2082668544;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,11856
	ctx.r9.s64 = ctx.r11.s64 + 11856;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827B09C4"))) PPC_WEAK_FUNC(sub_827B09C4);
PPC_FUNC_IMPL(__imp__sub_827B09C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B09C8"))) PPC_WEAK_FUNC(sub_827B09C8);
PPC_FUNC_IMPL(__imp__sub_827B09C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31779
	ctx.r11.s64 = -2082668544;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,11908
	ctx.r9.s64 = ctx.r11.s64 + 11908;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827B09DC"))) PPC_WEAK_FUNC(sub_827B09DC);
PPC_FUNC_IMPL(__imp__sub_827B09DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B09E0"))) PPC_WEAK_FUNC(sub_827B09E0);
PPC_FUNC_IMPL(__imp__sub_827B09E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31779
	ctx.r11.s64 = -2082668544;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,11936
	ctx.r9.s64 = ctx.r11.s64 + 11936;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827B09F4"))) PPC_WEAK_FUNC(sub_827B09F4);
PPC_FUNC_IMPL(__imp__sub_827B09F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B09F8"))) PPC_WEAK_FUNC(sub_827B09F8);
PPC_FUNC_IMPL(__imp__sub_827B09F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31779
	ctx.r11.s64 = -2082668544;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,11960
	ctx.r9.s64 = ctx.r11.s64 + 11960;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827B0A0C"))) PPC_WEAK_FUNC(sub_827B0A0C);
PPC_FUNC_IMPL(__imp__sub_827B0A0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B0A10"))) PPC_WEAK_FUNC(sub_827B0A10);
PPC_FUNC_IMPL(__imp__sub_827B0A10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31779
	ctx.r11.s64 = -2082668544;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,12132
	ctx.r9.s64 = ctx.r11.s64 + 12132;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827B0A24"))) PPC_WEAK_FUNC(sub_827B0A24);
PPC_FUNC_IMPL(__imp__sub_827B0A24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B0A28"))) PPC_WEAK_FUNC(sub_827B0A28);
PPC_FUNC_IMPL(__imp__sub_827B0A28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31779
	ctx.r11.s64 = -2082668544;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,12136
	ctx.r9.s64 = ctx.r11.s64 + 12136;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827B0A3C"))) PPC_WEAK_FUNC(sub_827B0A3C);
PPC_FUNC_IMPL(__imp__sub_827B0A3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B0A40"))) PPC_WEAK_FUNC(sub_827B0A40);
PPC_FUNC_IMPL(__imp__sub_827B0A40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31779
	ctx.r11.s64 = -2082668544;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,12232
	ctx.r9.s64 = ctx.r11.s64 + 12232;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827B0A54"))) PPC_WEAK_FUNC(sub_827B0A54);
PPC_FUNC_IMPL(__imp__sub_827B0A54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B0A58"))) PPC_WEAK_FUNC(sub_827B0A58);
PPC_FUNC_IMPL(__imp__sub_827B0A58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31779
	ctx.r11.s64 = -2082668544;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,12304
	ctx.r9.s64 = ctx.r11.s64 + 12304;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827B0A6C"))) PPC_WEAK_FUNC(sub_827B0A6C);
PPC_FUNC_IMPL(__imp__sub_827B0A6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B0A70"))) PPC_WEAK_FUNC(sub_827B0A70);
PPC_FUNC_IMPL(__imp__sub_827B0A70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31779
	ctx.r11.s64 = -2082668544;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,12344
	ctx.r9.s64 = ctx.r11.s64 + 12344;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827B0A84"))) PPC_WEAK_FUNC(sub_827B0A84);
PPC_FUNC_IMPL(__imp__sub_827B0A84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B0A88"))) PPC_WEAK_FUNC(sub_827B0A88);
PPC_FUNC_IMPL(__imp__sub_827B0A88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31779
	ctx.r11.s64 = -2082668544;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,12380
	ctx.r9.s64 = ctx.r11.s64 + 12380;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827B0A9C"))) PPC_WEAK_FUNC(sub_827B0A9C);
PPC_FUNC_IMPL(__imp__sub_827B0A9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B0AA0"))) PPC_WEAK_FUNC(sub_827B0AA0);
PPC_FUNC_IMPL(__imp__sub_827B0AA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31779
	ctx.r11.s64 = -2082668544;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,12424
	ctx.r9.s64 = ctx.r11.s64 + 12424;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827B0AB4"))) PPC_WEAK_FUNC(sub_827B0AB4);
PPC_FUNC_IMPL(__imp__sub_827B0AB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B0AB8"))) PPC_WEAK_FUNC(sub_827B0AB8);
PPC_FUNC_IMPL(__imp__sub_827B0AB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31779
	ctx.r11.s64 = -2082668544;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,12512
	ctx.r9.s64 = ctx.r11.s64 + 12512;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827B0ACC"))) PPC_WEAK_FUNC(sub_827B0ACC);
PPC_FUNC_IMPL(__imp__sub_827B0ACC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B0AD0"))) PPC_WEAK_FUNC(sub_827B0AD0);
PPC_FUNC_IMPL(__imp__sub_827B0AD0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31779
	ctx.r11.s64 = -2082668544;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,12896
	ctx.r9.s64 = ctx.r11.s64 + 12896;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827B0AE4"))) PPC_WEAK_FUNC(sub_827B0AE4);
PPC_FUNC_IMPL(__imp__sub_827B0AE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B0AE8"))) PPC_WEAK_FUNC(sub_827B0AE8);
PPC_FUNC_IMPL(__imp__sub_827B0AE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31779
	ctx.r11.s64 = -2082668544;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,13096
	ctx.r9.s64 = ctx.r11.s64 + 13096;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827B0AFC"))) PPC_WEAK_FUNC(sub_827B0AFC);
PPC_FUNC_IMPL(__imp__sub_827B0AFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B0B00"))) PPC_WEAK_FUNC(sub_827B0B00);
PPC_FUNC_IMPL(__imp__sub_827B0B00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31779
	ctx.r11.s64 = -2082668544;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,13120
	ctx.r9.s64 = ctx.r11.s64 + 13120;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827B0B14"))) PPC_WEAK_FUNC(sub_827B0B14);
PPC_FUNC_IMPL(__imp__sub_827B0B14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B0B18"))) PPC_WEAK_FUNC(sub_827B0B18);
PPC_FUNC_IMPL(__imp__sub_827B0B18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31779
	ctx.r11.s64 = -2082668544;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,13132
	ctx.r9.s64 = ctx.r11.s64 + 13132;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827B0B2C"))) PPC_WEAK_FUNC(sub_827B0B2C);
PPC_FUNC_IMPL(__imp__sub_827B0B2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B0B30"))) PPC_WEAK_FUNC(sub_827B0B30);
PPC_FUNC_IMPL(__imp__sub_827B0B30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31779
	ctx.r11.s64 = -2082668544;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,13144
	ctx.r9.s64 = ctx.r11.s64 + 13144;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827B0B44"))) PPC_WEAK_FUNC(sub_827B0B44);
PPC_FUNC_IMPL(__imp__sub_827B0B44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B0B48"))) PPC_WEAK_FUNC(sub_827B0B48);
PPC_FUNC_IMPL(__imp__sub_827B0B48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31779
	ctx.r11.s64 = -2082668544;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,13160
	ctx.r9.s64 = ctx.r11.s64 + 13160;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827B0B5C"))) PPC_WEAK_FUNC(sub_827B0B5C);
PPC_FUNC_IMPL(__imp__sub_827B0B5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B0B60"))) PPC_WEAK_FUNC(sub_827B0B60);
PPC_FUNC_IMPL(__imp__sub_827B0B60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31779
	ctx.r11.s64 = -2082668544;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,13300
	ctx.r9.s64 = ctx.r11.s64 + 13300;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827B0B74"))) PPC_WEAK_FUNC(sub_827B0B74);
PPC_FUNC_IMPL(__imp__sub_827B0B74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B0B78"))) PPC_WEAK_FUNC(sub_827B0B78);
PPC_FUNC_IMPL(__imp__sub_827B0B78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31779
	ctx.r11.s64 = -2082668544;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,13316
	ctx.r9.s64 = ctx.r11.s64 + 13316;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827B0B8C"))) PPC_WEAK_FUNC(sub_827B0B8C);
PPC_FUNC_IMPL(__imp__sub_827B0B8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B0B90"))) PPC_WEAK_FUNC(sub_827B0B90);
PPC_FUNC_IMPL(__imp__sub_827B0B90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31779
	ctx.r11.s64 = -2082668544;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,13328
	ctx.r9.s64 = ctx.r11.s64 + 13328;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827B0BA4"))) PPC_WEAK_FUNC(sub_827B0BA4);
PPC_FUNC_IMPL(__imp__sub_827B0BA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B0BA8"))) PPC_WEAK_FUNC(sub_827B0BA8);
PPC_FUNC_IMPL(__imp__sub_827B0BA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31779
	ctx.r11.s64 = -2082668544;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,13336
	ctx.r9.s64 = ctx.r11.s64 + 13336;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827B0BBC"))) PPC_WEAK_FUNC(sub_827B0BBC);
PPC_FUNC_IMPL(__imp__sub_827B0BBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B0BC0"))) PPC_WEAK_FUNC(sub_827B0BC0);
PPC_FUNC_IMPL(__imp__sub_827B0BC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31779
	ctx.r11.s64 = -2082668544;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,13352
	ctx.r9.s64 = ctx.r11.s64 + 13352;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827B0BD4"))) PPC_WEAK_FUNC(sub_827B0BD4);
PPC_FUNC_IMPL(__imp__sub_827B0BD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B0BD8"))) PPC_WEAK_FUNC(sub_827B0BD8);
PPC_FUNC_IMPL(__imp__sub_827B0BD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31779
	ctx.r11.s64 = -2082668544;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,13376
	ctx.r9.s64 = ctx.r11.s64 + 13376;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827B0BEC"))) PPC_WEAK_FUNC(sub_827B0BEC);
PPC_FUNC_IMPL(__imp__sub_827B0BEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B0BF0"))) PPC_WEAK_FUNC(sub_827B0BF0);
PPC_FUNC_IMPL(__imp__sub_827B0BF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31779
	ctx.r11.s64 = -2082668544;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,13408
	ctx.r9.s64 = ctx.r11.s64 + 13408;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827B0C04"))) PPC_WEAK_FUNC(sub_827B0C04);
PPC_FUNC_IMPL(__imp__sub_827B0C04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B0C08"))) PPC_WEAK_FUNC(sub_827B0C08);
PPC_FUNC_IMPL(__imp__sub_827B0C08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31779
	ctx.r11.s64 = -2082668544;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,13524
	ctx.r9.s64 = ctx.r11.s64 + 13524;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827B0C1C"))) PPC_WEAK_FUNC(sub_827B0C1C);
PPC_FUNC_IMPL(__imp__sub_827B0C1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B0C20"))) PPC_WEAK_FUNC(sub_827B0C20);
PPC_FUNC_IMPL(__imp__sub_827B0C20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31779
	ctx.r11.s64 = -2082668544;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,13552
	ctx.r9.s64 = ctx.r11.s64 + 13552;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827B0C34"))) PPC_WEAK_FUNC(sub_827B0C34);
PPC_FUNC_IMPL(__imp__sub_827B0C34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B0C38"))) PPC_WEAK_FUNC(sub_827B0C38);
PPC_FUNC_IMPL(__imp__sub_827B0C38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31779
	ctx.r11.s64 = -2082668544;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,13588
	ctx.r9.s64 = ctx.r11.s64 + 13588;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827B0C4C"))) PPC_WEAK_FUNC(sub_827B0C4C);
PPC_FUNC_IMPL(__imp__sub_827B0C4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B0C50"))) PPC_WEAK_FUNC(sub_827B0C50);
PPC_FUNC_IMPL(__imp__sub_827B0C50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31779
	ctx.r11.s64 = -2082668544;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,13600
	ctx.r9.s64 = ctx.r11.s64 + 13600;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827B0C64"))) PPC_WEAK_FUNC(sub_827B0C64);
PPC_FUNC_IMPL(__imp__sub_827B0C64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B0C68"))) PPC_WEAK_FUNC(sub_827B0C68);
PPC_FUNC_IMPL(__imp__sub_827B0C68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31779
	ctx.r11.s64 = -2082668544;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,13728
	ctx.r9.s64 = ctx.r11.s64 + 13728;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827B0C7C"))) PPC_WEAK_FUNC(sub_827B0C7C);
PPC_FUNC_IMPL(__imp__sub_827B0C7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B0C80"))) PPC_WEAK_FUNC(sub_827B0C80);
PPC_FUNC_IMPL(__imp__sub_827B0C80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31779
	ctx.r11.s64 = -2082668544;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,13784
	ctx.r9.s64 = ctx.r11.s64 + 13784;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827B0C94"))) PPC_WEAK_FUNC(sub_827B0C94);
PPC_FUNC_IMPL(__imp__sub_827B0C94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B0C98"))) PPC_WEAK_FUNC(sub_827B0C98);
PPC_FUNC_IMPL(__imp__sub_827B0C98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31779
	ctx.r11.s64 = -2082668544;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,13852
	ctx.r9.s64 = ctx.r11.s64 + 13852;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827B0CAC"))) PPC_WEAK_FUNC(sub_827B0CAC);
PPC_FUNC_IMPL(__imp__sub_827B0CAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B0CB0"))) PPC_WEAK_FUNC(sub_827B0CB0);
PPC_FUNC_IMPL(__imp__sub_827B0CB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31779
	ctx.r11.s64 = -2082668544;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,13904
	ctx.r9.s64 = ctx.r11.s64 + 13904;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827B0CC4"))) PPC_WEAK_FUNC(sub_827B0CC4);
PPC_FUNC_IMPL(__imp__sub_827B0CC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B0CC8"))) PPC_WEAK_FUNC(sub_827B0CC8);
PPC_FUNC_IMPL(__imp__sub_827B0CC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31779
	ctx.r11.s64 = -2082668544;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,14040
	ctx.r9.s64 = ctx.r11.s64 + 14040;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827B0CDC"))) PPC_WEAK_FUNC(sub_827B0CDC);
PPC_FUNC_IMPL(__imp__sub_827B0CDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B0CE0"))) PPC_WEAK_FUNC(sub_827B0CE0);
PPC_FUNC_IMPL(__imp__sub_827B0CE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31779
	ctx.r11.s64 = -2082668544;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,14132
	ctx.r9.s64 = ctx.r11.s64 + 14132;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827B0CF4"))) PPC_WEAK_FUNC(sub_827B0CF4);
PPC_FUNC_IMPL(__imp__sub_827B0CF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B0CF8"))) PPC_WEAK_FUNC(sub_827B0CF8);
PPC_FUNC_IMPL(__imp__sub_827B0CF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31779
	ctx.r11.s64 = -2082668544;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,14148
	ctx.r9.s64 = ctx.r11.s64 + 14148;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827B0D0C"))) PPC_WEAK_FUNC(sub_827B0D0C);
PPC_FUNC_IMPL(__imp__sub_827B0D0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B0D10"))) PPC_WEAK_FUNC(sub_827B0D10);
PPC_FUNC_IMPL(__imp__sub_827B0D10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31779
	ctx.r11.s64 = -2082668544;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,14188
	ctx.r9.s64 = ctx.r11.s64 + 14188;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827B0D24"))) PPC_WEAK_FUNC(sub_827B0D24);
PPC_FUNC_IMPL(__imp__sub_827B0D24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B0D28"))) PPC_WEAK_FUNC(sub_827B0D28);
PPC_FUNC_IMPL(__imp__sub_827B0D28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31779
	ctx.r11.s64 = -2082668544;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,14208
	ctx.r9.s64 = ctx.r11.s64 + 14208;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

