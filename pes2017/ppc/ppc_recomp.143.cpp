#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_82BCCF78"))) PPC_WEAK_FUNC(sub_82BCCF78);
PPC_FUNC_IMPL(__imp__sub_82BCCF78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82BCCF80;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82BCCF8C;
	sub_82D19A78(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// lwz r29,96(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r31,r11,-24508
	ctx.r31.s64 = ctx.r11.s64 + -24508;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r31,-8
	ctx.r4.s64 = ctx.r31.s64 + -8;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82BCCFB0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x82bcc998
	ctx.lr = 0x82BCCFC0;
	sub_82BCC998(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82BCCFC8;
	sub_82D19A78(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r31,100(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 100);
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r7,4(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82BCCFE4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82bcc998
	ctx.lr = 0x82BCCFF4;
	sub_82BCC998(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BCCFFC"))) PPC_WEAK_FUNC(sub_82BCCFFC);
PPC_FUNC_IMPL(__imp__sub_82BCCFFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BCD000"))) PPC_WEAK_FUNC(sub_82BCD000);
PPC_FUNC_IMPL(__imp__sub_82BCD000) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82BCD008;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82BCD014;
	sub_82D19A78(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r30,r11,-24380
	ctx.r30.s64 = ctx.r11.s64 + -24380;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r30,-84
	ctx.r4.s64 = ctx.r30.s64 + -84;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BCD034;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82BCD03C;
	sub_82D19A78(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// addi r4,r30,-68
	ctx.r4.s64 = ctx.r30.s64 + -68;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82BCD054;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bcd114
	if (cr6.eq) goto loc_82BCD114;
	// addi r29,r3,100
	ctx.r29.s64 = ctx.r3.s64 + 100;
	// lwz r4,96(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d2d580
	ctx.lr = 0x82BCD06C;
	sub_82D2D580(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bcd08c
	if (cr6.eq) goto loc_82BCD08C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r30,-56
	ctx.r4.s64 = ctx.r30.s64 + -56;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BCD08C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82BCD08C:
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// addic. r6,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r6.s64 = ctx.r11.s64 + -1;
	cr0.compare<int32_t>(ctx.r6.s32, 0, xer);
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
	// bge 0x82bcd0a0
	if (!cr0.lt) goto loc_82BCD0A0;
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
loc_82BCD0A0:
	// lis r11,-31761
	ctx.r11.s64 = -2081488896;
	// stw r6,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r6.u32);
	// lwz r3,30096(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 30096);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bcd0cc
	if (cr6.eq) goto loc_82BCD0CC;
	// lwz r11,104(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bne cr6,0x82bcd0cc
	if (!cr6.eq) goto loc_82BCD0CC;
	// addi r5,r30,-44
	ctx.r5.s64 = ctx.r30.s64 + -44;
	// li r4,16
	ctx.r4.s64 = 16;
	// bl 0x82bd00c0
	ctx.lr = 0x82BCD0CC;
	sub_82BD00C0(ctx, base);
loc_82BCD0CC:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,96(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// bl 0x82d2d580
	ctx.lr = 0x82BCD0D8;
	sub_82D2D580(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bcd108
	if (cr6.eq) goto loc_82BCD108;
	// lbz r11,112(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 112);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r30,-24
	ctx.r4.s64 = ctx.r30.s64 + -24;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bne cr6,0x82bcd104
	if (!cr6.eq) goto loc_82BCD104;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_82BCD104:
	// bctrl 
	ctx.lr = 0x82BCD108;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82BCD108:
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d17da0
	ctx.lr = 0x82BCD114;
	sub_82D17DA0(ctx, base);
loc_82BCD114:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bccf78
	ctx.lr = 0x82BCD120;
	sub_82BCCF78(ctx, base);
	// lbz r11,112(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 112);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82bcd1ac
	if (!cr6.eq) goto loc_82BCD1AC;
	// lbz r11,114(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 114);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r30,0
	ctx.r30.s64 = 0;
	// stb r10,113(r31)
	PPC_STORE_U8(ctx.r31.u32 + 113, ctx.r10.u8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82bcd180
	if (!cr6.eq) goto loc_82BCD180;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19bb0
	ctx.lr = 0x82BCD14C;
	sub_82D19BB0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82bcd178
	if (cr6.eq) goto loc_82BCD178;
	// cmpwi cr6,r3,3
	cr6.compare<int32_t>(ctx.r3.s32, 3, xer);
	// bne cr6,0x82bcd188
	if (!cr6.eq) goto loc_82BCD188;
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// lis r10,-31777
	ctx.r10.s64 = -2082537472;
	// addi r9,r10,24988
	ctx.r9.s64 = ctx.r10.s64 + 24988;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r8,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// addi r30,r11,-1
	ctx.r30.s64 = ctx.r11.s64 + -1;
	// b 0x82bcd188
	goto loc_82BCD188;
loc_82BCD178:
	// li r30,2
	ctx.r30.s64 = 2;
	// b 0x82bcd188
	goto loc_82BCD188;
loc_82BCD180:
	// stw r30,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r30.u32);
	// stb r30,114(r31)
	PPC_STORE_U8(ctx.r31.u32 + 114, ctx.r30.u8);
loc_82BCD188:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,108(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// lwz r10,288(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 288);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BCD1A4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82BCD1AC:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BCD1BC"))) PPC_WEAK_FUNC(sub_82BCD1BC);
PPC_FUNC_IMPL(__imp__sub_82BCD1BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BCD1C0"))) PPC_WEAK_FUNC(sub_82BCD1C0);
PPC_FUNC_IMPL(__imp__sub_82BCD1C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82BCD1C8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82BCD1D4;
	sub_82D19A78(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r30,r11,-24272
	ctx.r30.s64 = ctx.r11.s64 + -24272;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r30,-84
	ctx.r4.s64 = ctx.r30.s64 + -84;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BCD1F4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82BCD1FC;
	sub_82D19A78(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// addi r4,r30,-68
	ctx.r4.s64 = ctx.r30.s64 + -68;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82BCD214;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bcd2d0
	if (cr6.eq) goto loc_82BCD2D0;
	// addi r29,r3,100
	ctx.r29.s64 = ctx.r3.s64 + 100;
	// lwz r4,96(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d2d580
	ctx.lr = 0x82BCD22C;
	sub_82D2D580(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bcd24c
	if (cr6.eq) goto loc_82BCD24C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r30,-56
	ctx.r4.s64 = ctx.r30.s64 + -56;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BCD24C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82BCD24C:
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// lis r10,-31761
	ctx.r10.s64 = -2081488896;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// clrlwi r6,r9,30
	ctx.r6.u64 = ctx.r9.u32 & 0x3;
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
	// stw r6,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r6.u32);
	// lwz r3,30096(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 30096);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bcd288
	if (cr6.eq) goto loc_82BCD288;
	// lwz r11,104(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bne cr6,0x82bcd288
	if (!cr6.eq) goto loc_82BCD288;
	// addi r5,r30,-44
	ctx.r5.s64 = ctx.r30.s64 + -44;
	// li r4,16
	ctx.r4.s64 = 16;
	// bl 0x82bd00c0
	ctx.lr = 0x82BCD288;
	sub_82BD00C0(ctx, base);
loc_82BCD288:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,96(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// bl 0x82d2d580
	ctx.lr = 0x82BCD294;
	sub_82D2D580(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bcd2c4
	if (cr6.eq) goto loc_82BCD2C4;
	// lbz r11,112(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 112);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r30,-24
	ctx.r4.s64 = ctx.r30.s64 + -24;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bne cr6,0x82bcd2c0
	if (!cr6.eq) goto loc_82BCD2C0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_82BCD2C0:
	// bctrl 
	ctx.lr = 0x82BCD2C4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82BCD2C4:
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d17da0
	ctx.lr = 0x82BCD2D0;
	sub_82D17DA0(ctx, base);
loc_82BCD2D0:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bccf78
	ctx.lr = 0x82BCD2DC;
	sub_82BCCF78(ctx, base);
	// lbz r11,112(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 112);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82bcd354
	if (!cr6.eq) goto loc_82BCD354;
	// lbz r11,114(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 114);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r30,0
	ctx.r30.s64 = 0;
	// stb r10,113(r31)
	PPC_STORE_U8(ctx.r31.u32 + 113, ctx.r10.u8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82bcd328
	if (!cr6.eq) goto loc_82BCD328;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19bb0
	ctx.lr = 0x82BCD308;
	sub_82D19BB0(ctx, base);
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// beq cr6,0x82bcd330
	if (cr6.eq) goto loc_82BCD330;
	// cmpwi cr6,r3,3
	cr6.compare<int32_t>(ctx.r3.s32, 3, xer);
	// ble cr6,0x82bcd330
	if (!cr6.gt) goto loc_82BCD330;
	// cmpwi cr6,r3,5
	cr6.compare<int32_t>(ctx.r3.s32, 5, xer);
	// bgt cr6,0x82bcd330
	if (cr6.gt) goto loc_82BCD330;
	// li r30,3
	ctx.r30.s64 = 3;
	// b 0x82bcd330
	goto loc_82BCD330;
loc_82BCD328:
	// stw r30,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r30.u32);
	// stb r30,114(r31)
	PPC_STORE_U8(ctx.r31.u32 + 114, ctx.r30.u8);
loc_82BCD330:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,108(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// lwz r10,288(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 288);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BCD34C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82BCD354:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BCD364"))) PPC_WEAK_FUNC(sub_82BCD364);
PPC_FUNC_IMPL(__imp__sub_82BCD364) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BCD368"))) PPC_WEAK_FUNC(sub_82BCD368);
PPC_FUNC_IMPL(__imp__sub_82BCD368) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdacc
	ctx.lr = 0x82BCD370;
	__savegprlr_21(ctx, base);
	// stfd f30,-112(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -112, ctx.f30.u64);
	// stfd f31,-104(r1)
	PPC_STORE_U64(ctx.r1.u32 + -104, ctx.f31.u64);
	// stwu r1,-432(r1)
	ea = -432 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r24,0
	ctx.r24.s64 = 0;
	// addi r10,r11,-24636
	ctx.r10.s64 = ctx.r11.s64 + -24636;
	// stb r24,100(r1)
	PPC_STORE_U8(ctx.r1.u32 + 100, ctx.r24.u8);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r24,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r24.u32);
	// stw r24,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r24.u32);
	// stw r24,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r24.u32);
	// bl 0x825aa080
	ctx.lr = 0x82BCD3A8;
	sub_825AA080(ctx, base);
	// lwz r3,108(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// lis r11,-31777
	ctx.r11.s64 = -2082537472;
	// li r26,1
	ctx.r26.s64 = 1;
	// li r21,2
	ctx.r21.s64 = 2;
	// addi r28,r11,24988
	ctx.r28.s64 = ctx.r11.s64 + 24988;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82bcd3d8
	if (!cr6.eq) goto loc_82BCD3D8;
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addic. r3,r10,4
	xer.ca = ctx.r10.u32 > 4294967291;
	ctx.r3.s64 = ctx.r10.s64 + 4;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// stw r3,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r3.u32);
	// beq 0x82bcd468
	if (cr0.eq) goto loc_82BCD468;
loc_82BCD3D8:
	// bl 0x825832e8
	ctx.lr = 0x82BCD3DC;
	sub_825832E8(ctx, base);
	// lwz r10,16(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// addi r11,r3,-1
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, xer);
	// blt cr6,0x82bcd3fc
	if (cr6.lt) goto loc_82BCD3FC;
	// stw r24,96(r29)
	PPC_STORE_U32(ctx.r29.u32 + 96, ctx.r24.u32);
	// lwz r10,16(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// subf r10,r10,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r10.s64;
	// stw r10,104(r29)
	PPC_STORE_U32(ctx.r29.u32 + 104, ctx.r10.u32);
loc_82BCD3FC:
	// lwz r10,20(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, xer);
	// blt cr6,0x82bcd418
	if (cr6.lt) goto loc_82BCD418;
	// stw r26,96(r29)
	PPC_STORE_U32(ctx.r29.u32 + 96, ctx.r26.u32);
	// lwz r10,20(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// subf r10,r10,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r10.s64;
	// stw r10,104(r29)
	PPC_STORE_U32(ctx.r29.u32 + 104, ctx.r10.u32);
loc_82BCD418:
	// lwz r10,24(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 24);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, xer);
	// blt cr6,0x82bcd434
	if (cr6.lt) goto loc_82BCD434;
	// stw r21,96(r29)
	PPC_STORE_U32(ctx.r29.u32 + 96, ctx.r21.u32);
	// lwz r10,24(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 24);
	// subf r10,r10,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r10.s64;
	// stw r10,104(r29)
	PPC_STORE_U32(ctx.r29.u32 + 104, ctx.r10.u32);
loc_82BCD434:
	// lwz r10,28(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 28);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, xer);
	// blt cr6,0x82bcd454
	if (cr6.lt) goto loc_82BCD454;
	// li r10,3
	ctx.r10.s64 = 3;
	// stw r10,96(r29)
	PPC_STORE_U32(ctx.r29.u32 + 96, ctx.r10.u32);
	// lwz r10,28(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 28);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// stw r9,104(r29)
	PPC_STORE_U32(ctx.r29.u32 + 104, ctx.r9.u32);
loc_82BCD454:
	// lwz r11,108(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r7,r8,r11
	ctx.r7.u64 = ctx.r8.u64 & ctx.r11.u64;
	// stw r7,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r7.u32);
loc_82BCD468:
	// bl 0x831021a0
	ctx.lr = 0x82BCD46C;
	sub_831021A0(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r4,259
	ctx.r4.s64 = 16973824;
	// addi r27,r11,-24508
	ctx.r27.s64 = ctx.r11.s64 + -24508;
	// ori r4,r4,9
	ctx.r4.u64 = ctx.r4.u64 | 9;
	// addi r5,r27,-484
	ctx.r5.s64 = ctx.r27.s64 + -484;
	// bl 0x83102a08
	ctx.lr = 0x82BCD484;
	sub_83102A08(ctx, base);
	// bl 0x831021a0
	ctx.lr = 0x82BCD488;
	sub_831021A0(ctx, base);
	// lis r4,259
	ctx.r4.s64 = 16973824;
	// addi r5,r27,-468
	ctx.r5.s64 = ctx.r27.s64 + -468;
	// ori r4,r4,9
	ctx.r4.u64 = ctx.r4.u64 | 9;
	// bl 0x83102a08
	ctx.lr = 0x82BCD498;
	sub_83102A08(ctx, base);
	// bl 0x82d26ed8
	ctx.lr = 0x82BCD49C;
	sub_82D26ED8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d26900
	ctx.lr = 0x82BCD4A4;
	sub_82D26900(ctx, base);
	// bl 0x831156e8
	ctx.lr = 0x82BCD4A8;
	sub_831156E8(ctx, base);
	// lwz r25,52(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// bl 0x831156e8
	ctx.lr = 0x82BCD4B0;
	sub_831156E8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82BCD4B8;
	sub_82D19A78(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// addi r4,r27,-448
	ctx.r4.s64 = ctx.r27.s64 + -448;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BCD4D0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bcd530
	if (cr6.eq) goto loc_82BCD530;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82bcc368
	ctx.lr = 0x82BCD4E4;
	sub_82BCC368(ctx, base);
	// mr r31,r24
	ctx.r31.u64 = ctx.r24.u64;
	// addi r30,r30,100
	ctx.r30.s64 = ctx.r30.s64 + 100;
loc_82BCD4EC:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d2d580
	ctx.lr = 0x82BCD4F8;
	sub_82D2D580(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bcd524
	if (cr6.eq) goto loc_82BCD524;
	// lwz r11,96(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 96);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// bne cr6,0x82bcd524
	if (!cr6.eq) goto loc_82BCD524;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r27,-436
	ctx.r4.s64 = ctx.r27.s64 + -436;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BCD524;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82BCD524:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r31,4
	cr6.compare<int32_t>(ctx.r31.s32, 4, xer);
	// blt cr6,0x82bcd4ec
	if (cr6.lt) goto loc_82BCD4EC;
loc_82BCD530:
	// addi r4,r29,108
	ctx.r4.s64 = ctx.r29.s64 + 108;
	// addi r5,r27,-424
	ctx.r5.s64 = ctx.r27.s64 + -424;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d19b10
	ctx.lr = 0x82BCD540;
	sub_82D19B10(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82BCD548;
	sub_82D19A78(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// addi r4,r27,-8
	ctx.r4.s64 = ctx.r27.s64 + -8;
	// lwz r31,96(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 96);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BCD564;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82bcc998
	ctx.lr = 0x82BCD574;
	sub_82BCC998(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82BCD57C;
	sub_82D19A78(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r31,100(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 100);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82BCD598;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82bcc998
	ctx.lr = 0x82BCD5A8;
	sub_82BCC998(ctx, base);
	// stb r26,116(r29)
	PPC_STORE_U8(ctx.r29.u32 + 116, ctx.r26.u8);
	// lwz r7,0(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r5,104(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 104);
	// lwz r4,108(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 108);
	// lwz r6,288(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 288);
	// mtctr r6
	ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x82BCD5C8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,108(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 108);
	// bl 0x82d19a88
	ctx.lr = 0x82BCD5D4;
	sub_82D19A88(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82BCD5DC;
	sub_82D19A78(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// addi r4,r27,-416
	ctx.r4.s64 = ctx.r27.s64 + -416;
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82BCD5F4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bcd60c
	if (cr6.eq) goto loc_82BCD60C;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2b608
	ctx.lr = 0x82BCD60C;
	sub_82D2B608(ctx, base);
loc_82BCD60C:
	// mr r26,r24
	ctx.r26.u64 = ctx.r24.u64;
	// mr r23,r24
	ctx.r23.u64 = ctx.r24.u64;
	// mr r22,r24
	ctx.r22.u64 = ctx.r24.u64;
	// mr r8,r24
	ctx.r8.u64 = ctx.r24.u64;
loc_82BCD61C:
	// lwzx r11,r8,r28
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r28.u32);
	// mr r10,r24
	ctx.r10.u64 = ctx.r24.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82bcd67c
	if (cr6.eq) goto loc_82BCD67C;
	// addi r9,r28,16
	ctx.r9.s64 = ctx.r28.s64 + 16;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// lwzx r9,r8,r9
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
loc_82BCD638:
	// add r11,r9,r10
	ctx.r11.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r11,r11,27544
	ctx.r11.s64 = ctx.r11.s64 + 27544;
	// rlwinm r7,r11,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r7,r25
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r25.u32);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// beq cr6,0x82bcd670
	if (cr6.eq) goto loc_82BCD670;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// beq cr6,0x82bcd668
	if (cr6.eq) goto loc_82BCD668;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// bne cr6,0x82bcd674
	if (!cr6.eq) goto loc_82BCD674;
	// addi r22,r22,1
	ctx.r22.s64 = ctx.r22.s64 + 1;
	// b 0x82bcd674
	goto loc_82BCD674;
loc_82BCD668:
	// addi r23,r23,1
	ctx.r23.s64 = ctx.r23.s64 + 1;
	// b 0x82bcd674
	goto loc_82BCD674;
loc_82BCD670:
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
loc_82BCD674:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// bdnz 0x82bcd638
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82BCD638;
loc_82BCD67C:
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// cmplwi cr6,r8,16
	cr6.compare<uint32_t>(ctx.r8.u32, 16, xer);
	// blt cr6,0x82bcd61c
	if (cr6.lt) goto loc_82BCD61C;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82BCD690;
	sub_82D19A78(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// addi r4,r27,-404
	ctx.r4.s64 = ctx.r27.s64 + -404;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BCD6A8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r28,15
	ctx.r28.s64 = 15;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bcd744
	if (cr6.eq) goto loc_82BCD744;
	// addi r5,r27,-388
	ctx.r5.s64 = ctx.r27.s64 + -388;
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x831d0b08
	ctx.lr = 0x82BCD6CC;
	sub_831D0B08(ctx, base);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// stw r28,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r28.u32);
	// stw r24,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r24.u32);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// stb r24,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r24.u8);
loc_82BCD6E0:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82bcd6e0
	if (!cr6.eq) goto loc_82BCD6E0;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x82BCD708;
	sub_8259CC28(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d291e0
	ctx.lr = 0x82BCD71C;
	sub_82D291E0(ctx, base);
	// lwz r10,164(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82bcd738
	if (cr6.lt) goto loc_82BCD738;
	// stw r21,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r21.u32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lwz r4,144(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// bl 0x825952b8
	ctx.lr = 0x82BCD738;
	sub_825952B8(ctx, base);
loc_82BCD738:
	// stw r28,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r28.u32);
	// stw r24,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r24.u32);
	// stb r24,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r24.u8);
loc_82BCD744:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82BCD74C;
	sub_82D19A78(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// addi r4,r27,-384
	ctx.r4.s64 = ctx.r27.s64 + -384;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BCD764;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bcd7fc
	if (cr6.eq) goto loc_82BCD7FC;
	// addi r5,r27,-364
	ctx.r5.s64 = ctx.r27.s64 + -364;
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x831d0b08
	ctx.lr = 0x82BCD784;
	sub_831D0B08(ctx, base);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// stw r28,260(r1)
	PPC_STORE_U32(ctx.r1.u32 + 260, ctx.r28.u32);
	// stw r24,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, ctx.r24.u32);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// stb r24,240(r1)
	PPC_STORE_U8(ctx.r1.u32 + 240, ctx.r24.u8);
loc_82BCD798:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82bcd798
	if (!cr6.eq) goto loc_82BCD798;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x82BCD7C0;
	sub_8259CC28(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d291e0
	ctx.lr = 0x82BCD7D4;
	sub_82D291E0(ctx, base);
	// lwz r10,260(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 260);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82bcd7f0
	if (cr6.lt) goto loc_82BCD7F0;
	// stw r21,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r21.u32);
	// addi r3,r1,124
	ctx.r3.s64 = ctx.r1.s64 + 124;
	// lwz r4,240(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 240);
	// bl 0x825952b8
	ctx.lr = 0x82BCD7F0;
	sub_825952B8(ctx, base);
loc_82BCD7F0:
	// stw r28,260(r1)
	PPC_STORE_U32(ctx.r1.u32 + 260, ctx.r28.u32);
	// stw r24,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, ctx.r24.u32);
	// stb r24,240(r1)
	PPC_STORE_U8(ctx.r1.u32 + 240, ctx.r24.u8);
loc_82BCD7FC:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82BCD804;
	sub_82D19A78(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// addi r4,r27,-360
	ctx.r4.s64 = ctx.r27.s64 + -360;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BCD81C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bcd8b4
	if (cr6.eq) goto loc_82BCD8B4;
	// addi r5,r27,-340
	ctx.r5.s64 = ctx.r27.s64 + -340;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x831d0b08
	ctx.lr = 0x82BCD83C;
	sub_831D0B08(ctx, base);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// stw r28,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r28.u32);
	// stw r24,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r24.u32);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// stb r24,176(r1)
	PPC_STORE_U8(ctx.r1.u32 + 176, ctx.r24.u8);
loc_82BCD850:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82bcd850
	if (!cr6.eq) goto loc_82BCD850;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x82BCD878;
	sub_8259CC28(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d291e0
	ctx.lr = 0x82BCD88C;
	sub_82D291E0(ctx, base);
	// lwz r10,196(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82bcd8a8
	if (cr6.lt) goto loc_82BCD8A8;
	// stw r21,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r21.u32);
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// lwz r4,176(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// bl 0x825952b8
	ctx.lr = 0x82BCD8A8;
	sub_825952B8(ctx, base);
loc_82BCD8A8:
	// stw r28,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r28.u32);
	// stw r24,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r24.u32);
	// stb r24,176(r1)
	PPC_STORE_U8(ctx.r1.u32 + 176, ctx.r24.u8);
loc_82BCD8B4:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d19a10
	ctx.lr = 0x82BCD8BC;
	sub_82D19A10(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r4,r27,-336
	ctx.r4.s64 = ctx.r27.s64 + -336;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x83815d38
	ctx.lr = 0x82BCD8CC;
	sub_83815D38(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// lfs f31,9008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f31.f64 = double(temp.f32);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x83815b68
	ctx.lr = 0x82BCD8E0;
	sub_83815B68(ctx, base);
	// clrldi r10,r22,32
	ctx.r10.u64 = ctx.r22.u64 & 0xFFFFFFFF;
	// clrldi r9,r26,32
	ctx.r9.u64 = ctx.r26.u64 & 0xFFFFFFFF;
	// std r10,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// std r9,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r9.u64);
	// lfd f12,88(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// clrldi r8,r23,32
	ctx.r8.u64 = ctx.r23.u64 & 0xFFFFFFFF;
	// fcfid f9,f0
	ctx.f9.f64 = double(ctx.f0.s64);
	// std r8,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r8.u64);
	// lfd f11,88(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// lis r7,-32222
	ctx.r7.s64 = -2111700992;
	// frsp f8,f10
	ctx.f8.f64 = double(float(ctx.f10.f64));
	// lfs f0,-20096(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -20096);
	ctx.f0.f64 = double(temp.f32);
	// fcfid f7,f12
	ctx.f7.f64 = double(ctx.f12.s64);
	// lis r6,-32242
	ctx.r6.s64 = -2113011712;
	// frsp f6,f9
	ctx.f6.f64 = double(float(ctx.f9.f64));
	// lis r5,-32242
	ctx.r5.s64 = -2113011712;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// lfs f13,-23844(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + -23844);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,-23848(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + -23848);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,-23852(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -23852);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f5,f8,f0
	ctx.f5.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// frsp f4,f7
	ctx.f4.f64 = double(float(ctx.f7.f64));
	// fmadds f3,f6,f13,f5
	ctx.f3.f64 = double(float(ctx.f6.f64 * ctx.f13.f64 + ctx.f5.f64));
	// fmadds f2,f4,f12,f3
	ctx.f2.f64 = double(float(ctx.f4.f64 * ctx.f12.f64 + ctx.f3.f64));
	// fmuls f30,f2,f11
	ctx.f30.f64 = double(float(ctx.f2.f64 * ctx.f11.f64));
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x83815be8
	ctx.lr = 0x82BCD95C;
	sub_83815BE8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82BCD964;
	sub_82D19A78(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// addi r4,r27,-320
	ctx.r4.s64 = ctx.r27.s64 + -320;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82BCD97C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bcda50
	if (cr6.eq) goto loc_82BCDA50;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f0,-23488(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -23488);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// fmuls f0,f30,f0
	ctx.f0.f64 = double(float(ctx.f30.f64 * ctx.f0.f64));
	// lfs f13,-24912(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -24912);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// blt cr6,0x82bcd9b0
	if (cr6.lt) goto loc_82BCD9B0;
	// fadds f1,f0,f13
	ctx.f1.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// bl 0x831d1ca8
	ctx.lr = 0x82BCD9AC;
	sub_831D1CA8(ctx, base);
	// b 0x82bcd9b8
	goto loc_82BCD9B8;
loc_82BCD9B0:
	// fsubs f1,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// bl 0x831d18f0
	ctx.lr = 0x82BCD9B8;
	sub_831D18F0(ctx, base);
loc_82BCD9B8:
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// addi r5,r27,-296
	ctx.r5.s64 = ctx.r27.s64 + -296;
	// li r4,5
	ctx.r4.s64 = 5;
	// addi r3,r1,116
	ctx.r3.s64 = ctx.r1.s64 + 116;
	// fctidz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f0.u64);
	// lwz r6,92(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// bl 0x831d0b08
	ctx.lr = 0x82BCD9D8;
	sub_831D0B08(ctx, base);
	// addi r11,r1,116
	ctx.r11.s64 = ctx.r1.s64 + 116;
	// stw r28,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r28.u32);
	// stw r24,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r24.u32);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// stb r24,208(r1)
	PPC_STORE_U8(ctx.r1.u32 + 208, ctx.r24.u8);
loc_82BCD9EC:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82bcd9ec
	if (!cr6.eq) goto loc_82BCD9EC;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r4,r1,116
	ctx.r4.s64 = ctx.r1.s64 + 116;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x82BCDA14;
	sub_8259CC28(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d291e0
	ctx.lr = 0x82BCDA28;
	sub_82D291E0(ctx, base);
	// lwz r10,228(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82bcda44
	if (cr6.lt) goto loc_82BCDA44;
	// stw r21,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r21.u32);
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// lwz r4,208(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// bl 0x825952b8
	ctx.lr = 0x82BCDA44;
	sub_825952B8(ctx, base);
loc_82BCDA44:
	// stw r28,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r28.u32);
	// stw r24,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r24.u32);
	// stb r24,208(r1)
	PPC_STORE_U8(ctx.r1.u32 + 208, ctx.r24.u8);
loc_82BCDA50:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x82bcda64
	if (cr6.eq) goto loc_82BCDA64;
	// addi r4,r1,272
	ctx.r4.s64 = ctx.r1.s64 + 272;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x838153c8
	ctx.lr = 0x82BCDA64;
	sub_838153C8(ctx, base);
loc_82BCDA64:
	// bl 0x8310e010
	ctx.lr = 0x82BCDA68;
	sub_8310E010(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bne cr6,0x82bcda80
	if (!cr6.eq) goto loc_82BCDA80;
	// bl 0x82d19a78
	ctx.lr = 0x82BCDA78;
	sub_82D19A78(ctx, base);
	// addi r4,r27,-288
	ctx.r4.s64 = ctx.r27.s64 + -288;
	// b 0x82bcda88
	goto loc_82BCDA88;
loc_82BCDA80:
	// bl 0x82d19a68
	ctx.lr = 0x82BCDA84;
	sub_82D19A68(ctx, base);
	// addi r4,r27,-276
	ctx.r4.s64 = ctx.r27.s64 + -276;
loc_82BCDA88:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BCDA9C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r11,-31761
	ctx.r11.s64 = -2081488896;
	// lwz r31,30096(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 30096);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x82bcdae0
	if (cr6.eq) goto loc_82BCDAE0;
	// lwz r11,104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bne cr6,0x82bcdae0
	if (!cr6.eq) goto loc_82BCDAE0;
	// addi r5,r27,-264
	ctx.r5.s64 = ctx.r27.s64 + -264;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bd00c0
	ctx.lr = 0x82BCDACC;
	sub_82BD00C0(ctx, base);
	// addi r5,r27,-244
	ctx.r5.s64 = ctx.r27.s64 + -244;
	// li r4,16
	ctx.r4.s64 = 16;
	// lwz r6,96(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 96);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bd00c0
	ctx.lr = 0x82BCDAE0;
	sub_82BD00C0(ctx, base);
loc_82BCDAE0:
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x83815cb8
	ctx.lr = 0x82BCDAE8;
	sub_83815CB8(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lbz r8,100(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 100);
	// addi r10,r11,-24712
	ctx.r10.s64 = ctx.r11.s64 + -24712;
	// lwz r4,104(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// beq cr6,0x82bcdb28
	if (cr6.eq) goto loc_82BCDB28;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82bcdb28
	if (cr6.eq) goto loc_82BCDB28;
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r5,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r5.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// bl 0x8353f3b8
	ctx.lr = 0x82BCDB20;
	sub_8353F3B8(ctx, base);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// stw r24,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r24.u32);
loc_82BCDB28:
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// stb r24,100(r1)
	PPC_STORE_U8(ctx.r1.u32 + 100, ctx.r24.u8);
	// beq cr6,0x82bcdb48
	if (cr6.eq) goto loc_82BCDB48;
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r5,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r5.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// bl 0x8353f3b8
	ctx.lr = 0x82BCDB48;
	sub_8353F3B8(ctx, base);
loc_82BCDB48:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,432
	ctx.r1.s64 = ctx.r1.s64 + 432;
	// lfd f30,-112(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -112);
	// lfd f31,-104(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -104);
	// b 0x831cdb1c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BCDB5C"))) PPC_WEAK_FUNC(sub_82BCDB5C);
PPC_FUNC_IMPL(__imp__sub_82BCDB5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BCDB60"))) PPC_WEAK_FUNC(sub_82BCDB60);
PPC_FUNC_IMPL(__imp__sub_82BCDB60) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82BCDB68;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,27
	ctx.r11.s64 = 27;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,584
	ctx.r4.s64 = 584;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82BCDB84;
	sub_82595718(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bcdca8
	if (cr6.eq) goto loc_82BCDCA8;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r7,3
	ctx.r7.s64 = 3;
	// addi r4,r11,-23572
	ctx.r4.s64 = ctx.r11.s64 + -23572;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82d2f7b0
	ctx.lr = 0x82BCDBA8;
	sub_82D2F7B0(ctx, base);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lis r9,-32239
	ctx.r9.s64 = -2112815104;
	// addi r8,r10,-23456
	ctx.r8.s64 = ctx.r10.s64 + -23456;
	// addi r7,r9,-17088
	ctx.r7.s64 = ctx.r9.s64 + -17088;
	// stw r8,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r8.u32);
	// lis r4,990
	ctx.r4.s64 = 64880640;
	// stw r7,72(r29)
	PPC_STORE_U32(ctx.r29.u32 + 72, ctx.r7.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// ori r4,r4,264
	ctx.r4.u64 = ctx.r4.u64 | 264;
	// bl 0x82d2ada8
	ctx.lr = 0x82BCDBD0;
	sub_82D2ADA8(ctx, base);
	// bl 0x8308e078
	ctx.lr = 0x82BCDBD4;
	sub_8308E078(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r31,-1
	ctx.r31.s64 = -1;
	// bl 0x831156e8
	ctx.lr = 0x82BCDBE0;
	sub_831156E8(ctx, base);
	// lwz r6,52(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// addis r11,r6,6
	ctx.r11.s64 = ctx.r6.s64 + 393216;
	// addi r11,r11,-30316
	ctx.r11.s64 = ctx.r11.s64 + -30316;
	// lbz r5,45(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 45);
	// cmplwi cr6,r5,1
	cr6.compare<uint32_t>(ctx.r5.u32, 1, xer);
	// bne cr6,0x82bcdc08
	if (!cr6.eq) goto loc_82BCDC08;
	// addi r10,r30,1
	ctx.r10.s64 = ctx.r30.s64 + 1;
	// addic r9,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r31,r7,r31
	ctx.r31.u64 = ctx.r7.u64 & ctx.r31.u64;
loc_82BCDC08:
	// lbz r10,46(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 46);
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// bne cr6,0x82bcdc30
	if (!cr6.eq) goto loc_82BCDC30;
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, xer);
	// beq cr6,0x82bcdc30
	if (cr6.eq) goto loc_82BCDC30;
	// cmplwi cr6,r30,1
	cr6.compare<uint32_t>(ctx.r30.u32, 1, xer);
	// beq cr6,0x82bcdc2c
	if (cr6.eq) goto loc_82BCDC2C;
	// cmplwi cr6,r31,1
	cr6.compare<uint32_t>(ctx.r31.u32, 1, xer);
	// ble cr6,0x82bcdc30
	if (!cr6.gt) goto loc_82BCDC30;
loc_82BCDC2C:
	// li r31,1
	ctx.r31.s64 = 1;
loc_82BCDC30:
	// lbz r10,47(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 47);
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// bne cr6,0x82bcdc58
	if (!cr6.eq) goto loc_82BCDC58;
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, xer);
	// beq cr6,0x82bcdc58
	if (cr6.eq) goto loc_82BCDC58;
	// cmplwi cr6,r30,2
	cr6.compare<uint32_t>(ctx.r30.u32, 2, xer);
	// beq cr6,0x82bcdc54
	if (cr6.eq) goto loc_82BCDC54;
	// cmplwi cr6,r31,2
	cr6.compare<uint32_t>(ctx.r31.u32, 2, xer);
	// ble cr6,0x82bcdc58
	if (!cr6.gt) goto loc_82BCDC58;
loc_82BCDC54:
	// li r31,2
	ctx.r31.s64 = 2;
loc_82BCDC58:
	// lbz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 48);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x82bcdc84
	if (!cr6.eq) goto loc_82BCDC84;
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, xer);
	// beq cr6,0x82bcdc84
	if (cr6.eq) goto loc_82BCDC84;
	// cmplwi cr6,r30,3
	cr6.compare<uint32_t>(ctx.r30.u32, 3, xer);
	// beq cr6,0x82bcdc7c
	if (cr6.eq) goto loc_82BCDC7C;
	// cmplwi cr6,r31,3
	cr6.compare<uint32_t>(ctx.r31.u32, 3, xer);
	// ble cr6,0x82bcdc84
	if (!cr6.gt) goto loc_82BCDC84;
loc_82BCDC7C:
	// li r31,3
	ctx.r31.s64 = 3;
	// b 0x82bcdc90
	goto loc_82BCDC90;
loc_82BCDC84:
	// cmpwi cr6,r31,-1
	cr6.compare<int32_t>(ctx.r31.s32, -1, xer);
	// bne cr6,0x82bcdc90
	if (!cr6.eq) goto loc_82BCDC90;
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
loc_82BCDC90:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d195d8
	ctx.lr = 0x82BCDC9C;
	sub_82D195D8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82BCDCA8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BCDCB4"))) PPC_WEAK_FUNC(sub_82BCDCB4);
PPC_FUNC_IMPL(__imp__sub_82BCDCB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BCDCB8"))) PPC_WEAK_FUNC(sub_82BCDCB8);
PPC_FUNC_IMPL(__imp__sub_82BCDCB8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82BCDCC0;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,27
	ctx.r11.s64 = 27;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,584
	ctx.r4.s64 = 584;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82BCDCDC;
	sub_82595718(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bcde00
	if (cr6.eq) goto loc_82BCDE00;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r7,3
	ctx.r7.s64 = 3;
	// addi r4,r11,-23572
	ctx.r4.s64 = ctx.r11.s64 + -23572;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82d2f7b0
	ctx.lr = 0x82BCDD00;
	sub_82D2F7B0(ctx, base);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lis r9,-32239
	ctx.r9.s64 = -2112815104;
	// addi r8,r10,-23456
	ctx.r8.s64 = ctx.r10.s64 + -23456;
	// addi r7,r9,-17088
	ctx.r7.s64 = ctx.r9.s64 + -17088;
	// stw r8,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r8.u32);
	// lis r4,990
	ctx.r4.s64 = 64880640;
	// stw r7,72(r29)
	PPC_STORE_U32(ctx.r29.u32 + 72, ctx.r7.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// ori r4,r4,264
	ctx.r4.u64 = ctx.r4.u64 | 264;
	// bl 0x82d2ada8
	ctx.lr = 0x82BCDD28;
	sub_82D2ADA8(ctx, base);
	// bl 0x8308e078
	ctx.lr = 0x82BCDD2C;
	sub_8308E078(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r31,-1
	ctx.r31.s64 = -1;
	// bl 0x831156e8
	ctx.lr = 0x82BCDD38;
	sub_831156E8(ctx, base);
	// lwz r6,52(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// addis r11,r6,6
	ctx.r11.s64 = ctx.r6.s64 + 393216;
	// addi r11,r11,-30316
	ctx.r11.s64 = ctx.r11.s64 + -30316;
	// lbz r5,45(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 45);
	// cmplwi cr6,r5,2
	cr6.compare<uint32_t>(ctx.r5.u32, 2, xer);
	// bne cr6,0x82bcdd60
	if (!cr6.eq) goto loc_82BCDD60;
	// addi r10,r30,1
	ctx.r10.s64 = ctx.r30.s64 + 1;
	// addic r9,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r31,r7,r31
	ctx.r31.u64 = ctx.r7.u64 & ctx.r31.u64;
loc_82BCDD60:
	// lbz r10,46(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 46);
	// cmplwi cr6,r10,2
	cr6.compare<uint32_t>(ctx.r10.u32, 2, xer);
	// bne cr6,0x82bcdd88
	if (!cr6.eq) goto loc_82BCDD88;
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, xer);
	// beq cr6,0x82bcdd88
	if (cr6.eq) goto loc_82BCDD88;
	// cmplwi cr6,r30,1
	cr6.compare<uint32_t>(ctx.r30.u32, 1, xer);
	// beq cr6,0x82bcdd84
	if (cr6.eq) goto loc_82BCDD84;
	// cmplwi cr6,r31,1
	cr6.compare<uint32_t>(ctx.r31.u32, 1, xer);
	// ble cr6,0x82bcdd88
	if (!cr6.gt) goto loc_82BCDD88;
loc_82BCDD84:
	// li r31,1
	ctx.r31.s64 = 1;
loc_82BCDD88:
	// lbz r10,47(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 47);
	// cmplwi cr6,r10,2
	cr6.compare<uint32_t>(ctx.r10.u32, 2, xer);
	// bne cr6,0x82bcddb0
	if (!cr6.eq) goto loc_82BCDDB0;
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, xer);
	// beq cr6,0x82bcddb0
	if (cr6.eq) goto loc_82BCDDB0;
	// cmplwi cr6,r30,2
	cr6.compare<uint32_t>(ctx.r30.u32, 2, xer);
	// beq cr6,0x82bcddac
	if (cr6.eq) goto loc_82BCDDAC;
	// cmplwi cr6,r31,2
	cr6.compare<uint32_t>(ctx.r31.u32, 2, xer);
	// ble cr6,0x82bcddb0
	if (!cr6.gt) goto loc_82BCDDB0;
loc_82BCDDAC:
	// li r31,2
	ctx.r31.s64 = 2;
loc_82BCDDB0:
	// lbz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 48);
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// bne cr6,0x82bcdddc
	if (!cr6.eq) goto loc_82BCDDDC;
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, xer);
	// beq cr6,0x82bcdddc
	if (cr6.eq) goto loc_82BCDDDC;
	// cmplwi cr6,r30,3
	cr6.compare<uint32_t>(ctx.r30.u32, 3, xer);
	// beq cr6,0x82bcddd4
	if (cr6.eq) goto loc_82BCDDD4;
	// cmplwi cr6,r31,3
	cr6.compare<uint32_t>(ctx.r31.u32, 3, xer);
	// ble cr6,0x82bcdddc
	if (!cr6.gt) goto loc_82BCDDDC;
loc_82BCDDD4:
	// li r31,3
	ctx.r31.s64 = 3;
	// b 0x82bcdde8
	goto loc_82BCDDE8;
loc_82BCDDDC:
	// cmpwi cr6,r31,-1
	cr6.compare<int32_t>(ctx.r31.s32, -1, xer);
	// bne cr6,0x82bcdde8
	if (!cr6.eq) goto loc_82BCDDE8;
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
loc_82BCDDE8:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d195d8
	ctx.lr = 0x82BCDDF4;
	sub_82D195D8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82BCDE00:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BCDE0C"))) PPC_WEAK_FUNC(sub_82BCDE0C);
PPC_FUNC_IMPL(__imp__sub_82BCDE0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BCDE10"))) PPC_WEAK_FUNC(sub_82BCDE10);
PPC_FUNC_IMPL(__imp__sub_82BCDE10) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82BCDE18;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,27
	ctx.r11.s64 = 27;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,584
	ctx.r4.s64 = 584;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82BCDE34;
	sub_82595718(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bcdf58
	if (cr6.eq) goto loc_82BCDF58;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r7,3
	ctx.r7.s64 = 3;
	// addi r4,r11,-23572
	ctx.r4.s64 = ctx.r11.s64 + -23572;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82d2f7b0
	ctx.lr = 0x82BCDE58;
	sub_82D2F7B0(ctx, base);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lis r9,-32239
	ctx.r9.s64 = -2112815104;
	// addi r8,r10,-23456
	ctx.r8.s64 = ctx.r10.s64 + -23456;
	// addi r7,r9,-17088
	ctx.r7.s64 = ctx.r9.s64 + -17088;
	// stw r8,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r8.u32);
	// lis r4,511
	ctx.r4.s64 = 33488896;
	// stw r7,72(r29)
	PPC_STORE_U32(ctx.r29.u32 + 72, ctx.r7.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// ori r4,r4,72
	ctx.r4.u64 = ctx.r4.u64 | 72;
	// bl 0x82d2ada8
	ctx.lr = 0x82BCDE80;
	sub_82D2ADA8(ctx, base);
	// bl 0x8308e078
	ctx.lr = 0x82BCDE84;
	sub_8308E078(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r31,-1
	ctx.r31.s64 = -1;
	// bl 0x831156e8
	ctx.lr = 0x82BCDE90;
	sub_831156E8(ctx, base);
	// lwz r6,52(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// addis r11,r6,6
	ctx.r11.s64 = ctx.r6.s64 + 393216;
	// addi r11,r11,-30316
	ctx.r11.s64 = ctx.r11.s64 + -30316;
	// lbz r5,45(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 45);
	// cmplwi cr6,r5,1
	cr6.compare<uint32_t>(ctx.r5.u32, 1, xer);
	// bne cr6,0x82bcdeb8
	if (!cr6.eq) goto loc_82BCDEB8;
	// addi r10,r30,1
	ctx.r10.s64 = ctx.r30.s64 + 1;
	// addic r9,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r31,r7,r31
	ctx.r31.u64 = ctx.r7.u64 & ctx.r31.u64;
loc_82BCDEB8:
	// lbz r10,46(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 46);
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// bne cr6,0x82bcdee0
	if (!cr6.eq) goto loc_82BCDEE0;
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, xer);
	// beq cr6,0x82bcdee0
	if (cr6.eq) goto loc_82BCDEE0;
	// cmplwi cr6,r30,1
	cr6.compare<uint32_t>(ctx.r30.u32, 1, xer);
	// beq cr6,0x82bcdedc
	if (cr6.eq) goto loc_82BCDEDC;
	// cmplwi cr6,r31,1
	cr6.compare<uint32_t>(ctx.r31.u32, 1, xer);
	// ble cr6,0x82bcdee0
	if (!cr6.gt) goto loc_82BCDEE0;
loc_82BCDEDC:
	// li r31,1
	ctx.r31.s64 = 1;
loc_82BCDEE0:
	// lbz r10,47(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 47);
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// bne cr6,0x82bcdf08
	if (!cr6.eq) goto loc_82BCDF08;
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, xer);
	// beq cr6,0x82bcdf08
	if (cr6.eq) goto loc_82BCDF08;
	// cmplwi cr6,r30,2
	cr6.compare<uint32_t>(ctx.r30.u32, 2, xer);
	// beq cr6,0x82bcdf04
	if (cr6.eq) goto loc_82BCDF04;
	// cmplwi cr6,r31,2
	cr6.compare<uint32_t>(ctx.r31.u32, 2, xer);
	// ble cr6,0x82bcdf08
	if (!cr6.gt) goto loc_82BCDF08;
loc_82BCDF04:
	// li r31,2
	ctx.r31.s64 = 2;
loc_82BCDF08:
	// lbz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 48);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x82bcdf34
	if (!cr6.eq) goto loc_82BCDF34;
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, xer);
	// beq cr6,0x82bcdf34
	if (cr6.eq) goto loc_82BCDF34;
	// cmplwi cr6,r30,3
	cr6.compare<uint32_t>(ctx.r30.u32, 3, xer);
	// beq cr6,0x82bcdf2c
	if (cr6.eq) goto loc_82BCDF2C;
	// cmplwi cr6,r31,3
	cr6.compare<uint32_t>(ctx.r31.u32, 3, xer);
	// ble cr6,0x82bcdf34
	if (!cr6.gt) goto loc_82BCDF34;
loc_82BCDF2C:
	// li r31,3
	ctx.r31.s64 = 3;
	// b 0x82bcdf40
	goto loc_82BCDF40;
loc_82BCDF34:
	// cmpwi cr6,r31,-1
	cr6.compare<int32_t>(ctx.r31.s32, -1, xer);
	// bne cr6,0x82bcdf40
	if (!cr6.eq) goto loc_82BCDF40;
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
loc_82BCDF40:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d195d8
	ctx.lr = 0x82BCDF4C;
	sub_82D195D8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82BCDF58:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BCDF64"))) PPC_WEAK_FUNC(sub_82BCDF64);
PPC_FUNC_IMPL(__imp__sub_82BCDF64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BCDF68"))) PPC_WEAK_FUNC(sub_82BCDF68);
PPC_FUNC_IMPL(__imp__sub_82BCDF68) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82BCDF70;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,27
	ctx.r11.s64 = 27;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,584
	ctx.r4.s64 = 584;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82BCDF8C;
	sub_82595718(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bce0b0
	if (cr6.eq) goto loc_82BCE0B0;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r7,3
	ctx.r7.s64 = 3;
	// addi r4,r11,-23572
	ctx.r4.s64 = ctx.r11.s64 + -23572;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82d2f7b0
	ctx.lr = 0x82BCDFB0;
	sub_82D2F7B0(ctx, base);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lis r9,-32239
	ctx.r9.s64 = -2112815104;
	// addi r8,r10,-23456
	ctx.r8.s64 = ctx.r10.s64 + -23456;
	// addi r7,r9,-17088
	ctx.r7.s64 = ctx.r9.s64 + -17088;
	// stw r8,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r8.u32);
	// lis r4,511
	ctx.r4.s64 = 33488896;
	// stw r7,72(r29)
	PPC_STORE_U32(ctx.r29.u32 + 72, ctx.r7.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// ori r4,r4,72
	ctx.r4.u64 = ctx.r4.u64 | 72;
	// bl 0x82d2ada8
	ctx.lr = 0x82BCDFD8;
	sub_82D2ADA8(ctx, base);
	// bl 0x8308e078
	ctx.lr = 0x82BCDFDC;
	sub_8308E078(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r31,-1
	ctx.r31.s64 = -1;
	// bl 0x831156e8
	ctx.lr = 0x82BCDFE8;
	sub_831156E8(ctx, base);
	// lwz r6,52(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// addis r11,r6,6
	ctx.r11.s64 = ctx.r6.s64 + 393216;
	// addi r11,r11,-30316
	ctx.r11.s64 = ctx.r11.s64 + -30316;
	// lbz r5,45(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 45);
	// cmplwi cr6,r5,2
	cr6.compare<uint32_t>(ctx.r5.u32, 2, xer);
	// bne cr6,0x82bce010
	if (!cr6.eq) goto loc_82BCE010;
	// addi r10,r30,1
	ctx.r10.s64 = ctx.r30.s64 + 1;
	// addic r9,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r31,r7,r31
	ctx.r31.u64 = ctx.r7.u64 & ctx.r31.u64;
loc_82BCE010:
	// lbz r10,46(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 46);
	// cmplwi cr6,r10,2
	cr6.compare<uint32_t>(ctx.r10.u32, 2, xer);
	// bne cr6,0x82bce038
	if (!cr6.eq) goto loc_82BCE038;
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, xer);
	// beq cr6,0x82bce038
	if (cr6.eq) goto loc_82BCE038;
	// cmplwi cr6,r30,1
	cr6.compare<uint32_t>(ctx.r30.u32, 1, xer);
	// beq cr6,0x82bce034
	if (cr6.eq) goto loc_82BCE034;
	// cmplwi cr6,r31,1
	cr6.compare<uint32_t>(ctx.r31.u32, 1, xer);
	// ble cr6,0x82bce038
	if (!cr6.gt) goto loc_82BCE038;
loc_82BCE034:
	// li r31,1
	ctx.r31.s64 = 1;
loc_82BCE038:
	// lbz r10,47(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 47);
	// cmplwi cr6,r10,2
	cr6.compare<uint32_t>(ctx.r10.u32, 2, xer);
	// bne cr6,0x82bce060
	if (!cr6.eq) goto loc_82BCE060;
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, xer);
	// beq cr6,0x82bce060
	if (cr6.eq) goto loc_82BCE060;
	// cmplwi cr6,r30,2
	cr6.compare<uint32_t>(ctx.r30.u32, 2, xer);
	// beq cr6,0x82bce05c
	if (cr6.eq) goto loc_82BCE05C;
	// cmplwi cr6,r31,2
	cr6.compare<uint32_t>(ctx.r31.u32, 2, xer);
	// ble cr6,0x82bce060
	if (!cr6.gt) goto loc_82BCE060;
loc_82BCE05C:
	// li r31,2
	ctx.r31.s64 = 2;
loc_82BCE060:
	// lbz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 48);
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// bne cr6,0x82bce08c
	if (!cr6.eq) goto loc_82BCE08C;
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, xer);
	// beq cr6,0x82bce08c
	if (cr6.eq) goto loc_82BCE08C;
	// cmplwi cr6,r30,3
	cr6.compare<uint32_t>(ctx.r30.u32, 3, xer);
	// beq cr6,0x82bce084
	if (cr6.eq) goto loc_82BCE084;
	// cmplwi cr6,r31,3
	cr6.compare<uint32_t>(ctx.r31.u32, 3, xer);
	// ble cr6,0x82bce08c
	if (!cr6.gt) goto loc_82BCE08C;
loc_82BCE084:
	// li r31,3
	ctx.r31.s64 = 3;
	// b 0x82bce098
	goto loc_82BCE098;
loc_82BCE08C:
	// cmpwi cr6,r31,-1
	cr6.compare<int32_t>(ctx.r31.s32, -1, xer);
	// bne cr6,0x82bce098
	if (!cr6.eq) goto loc_82BCE098;
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
loc_82BCE098:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d195d8
	ctx.lr = 0x82BCE0A4;
	sub_82D195D8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82BCE0B0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BCE0BC"))) PPC_WEAK_FUNC(sub_82BCE0BC);
PPC_FUNC_IMPL(__imp__sub_82BCE0BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BCE0C0"))) PPC_WEAK_FUNC(sub_82BCE0C0);
PPC_FUNC_IMPL(__imp__sub_82BCE0C0) {
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
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-23456
	ctx.r9.s64 = ctx.r11.s64 + -23456;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r8,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r8.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82d2f840
	ctx.lr = 0x82BCE0F8;
	sub_82D2F840(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82bce110
	if (cr6.eq) goto loc_82BCE110;
	// bl 0x82416268
	ctx.lr = 0x82BCE10C;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82BCE110:
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

__attribute__((alias("__imp__sub_82BCE128"))) PPC_WEAK_FUNC(sub_82BCE128);
PPC_FUNC_IMPL(__imp__sub_82BCE128) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82BCE130;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,27
	ctx.r11.s64 = 27;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,584
	ctx.r4.s64 = 584;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82BCE14C;
	sub_82595718(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bce284
	if (cr6.eq) goto loc_82BCE284;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r7,3
	ctx.r7.s64 = 3;
	// addi r4,r11,-22892
	ctx.r4.s64 = ctx.r11.s64 + -22892;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82d2f988
	ctx.lr = 0x82BCE170;
	sub_82D2F988(ctx, base);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lis r9,-32239
	ctx.r9.s64 = -2112815104;
	// addi r8,r10,-22776
	ctx.r8.s64 = ctx.r10.s64 + -22776;
	// addi r7,r9,-17088
	ctx.r7.s64 = ctx.r9.s64 + -17088;
	// stw r8,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r8.u32);
	// lis r4,252
	ctx.r4.s64 = 16515072;
	// stw r7,72(r29)
	PPC_STORE_U32(ctx.r29.u32 + 72, ctx.r7.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// ori r4,r4,72
	ctx.r4.u64 = ctx.r4.u64 | 72;
	// bl 0x82d2ada8
	ctx.lr = 0x82BCE198;
	sub_82D2ADA8(ctx, base);
	// bl 0x8308e078
	ctx.lr = 0x82BCE19C;
	sub_8308E078(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r31,-1
	ctx.r31.s64 = -1;
	// bl 0x831156e8
	ctx.lr = 0x82BCE1A8;
	sub_831156E8(ctx, base);
	// lwz r6,52(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// addis r11,r6,6
	ctx.r11.s64 = ctx.r6.s64 + 393216;
	// addi r11,r11,-30316
	ctx.r11.s64 = ctx.r11.s64 + -30316;
	// lbz r5,45(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 45);
	// cmplwi cr6,r5,1
	cr6.compare<uint32_t>(ctx.r5.u32, 1, xer);
	// bne cr6,0x82bce1d0
	if (!cr6.eq) goto loc_82BCE1D0;
	// addi r10,r30,1
	ctx.r10.s64 = ctx.r30.s64 + 1;
	// addic r9,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r31,r7,r31
	ctx.r31.u64 = ctx.r7.u64 & ctx.r31.u64;
loc_82BCE1D0:
	// lbz r10,46(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 46);
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// bne cr6,0x82bce1f8
	if (!cr6.eq) goto loc_82BCE1F8;
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, xer);
	// beq cr6,0x82bce1f8
	if (cr6.eq) goto loc_82BCE1F8;
	// cmplwi cr6,r30,1
	cr6.compare<uint32_t>(ctx.r30.u32, 1, xer);
	// beq cr6,0x82bce1f4
	if (cr6.eq) goto loc_82BCE1F4;
	// cmplwi cr6,r31,1
	cr6.compare<uint32_t>(ctx.r31.u32, 1, xer);
	// ble cr6,0x82bce1f8
	if (!cr6.gt) goto loc_82BCE1F8;
loc_82BCE1F4:
	// li r31,1
	ctx.r31.s64 = 1;
loc_82BCE1F8:
	// lbz r10,47(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 47);
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// bne cr6,0x82bce220
	if (!cr6.eq) goto loc_82BCE220;
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, xer);
	// beq cr6,0x82bce220
	if (cr6.eq) goto loc_82BCE220;
	// cmplwi cr6,r30,2
	cr6.compare<uint32_t>(ctx.r30.u32, 2, xer);
	// beq cr6,0x82bce21c
	if (cr6.eq) goto loc_82BCE21C;
	// cmplwi cr6,r31,2
	cr6.compare<uint32_t>(ctx.r31.u32, 2, xer);
	// ble cr6,0x82bce220
	if (!cr6.gt) goto loc_82BCE220;
loc_82BCE21C:
	// li r31,2
	ctx.r31.s64 = 2;
loc_82BCE220:
	// lbz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 48);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x82bce24c
	if (!cr6.eq) goto loc_82BCE24C;
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, xer);
	// beq cr6,0x82bce24c
	if (cr6.eq) goto loc_82BCE24C;
	// cmplwi cr6,r30,3
	cr6.compare<uint32_t>(ctx.r30.u32, 3, xer);
	// beq cr6,0x82bce244
	if (cr6.eq) goto loc_82BCE244;
	// cmplwi cr6,r31,3
	cr6.compare<uint32_t>(ctx.r31.u32, 3, xer);
	// ble cr6,0x82bce24c
	if (!cr6.gt) goto loc_82BCE24C;
loc_82BCE244:
	// li r31,3
	ctx.r31.s64 = 3;
	// b 0x82bce258
	goto loc_82BCE258;
loc_82BCE24C:
	// cmpwi cr6,r31,-1
	cr6.compare<int32_t>(ctx.r31.s32, -1, xer);
	// bne cr6,0x82bce258
	if (!cr6.eq) goto loc_82BCE258;
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
loc_82BCE258:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d195d8
	ctx.lr = 0x82BCE264;
	sub_82D195D8(ctx, base);
	// lis r5,108
	ctx.r5.s64 = 7077888;
	// li r4,1
	ctx.r4.s64 = 1;
	// ori r5,r5,41
	ctx.r5.u64 = ctx.r5.u64 | 41;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d20eb8
	ctx.lr = 0x82BCE278;
	sub_82D20EB8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82BCE284:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BCE290"))) PPC_WEAK_FUNC(sub_82BCE290);
PPC_FUNC_IMPL(__imp__sub_82BCE290) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82BCE298;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,27
	ctx.r11.s64 = 27;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,584
	ctx.r4.s64 = 584;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82BCE2B4;
	sub_82595718(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bce3ec
	if (cr6.eq) goto loc_82BCE3EC;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r7,3
	ctx.r7.s64 = 3;
	// addi r4,r11,-22892
	ctx.r4.s64 = ctx.r11.s64 + -22892;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82d2f988
	ctx.lr = 0x82BCE2D8;
	sub_82D2F988(ctx, base);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lis r9,-32239
	ctx.r9.s64 = -2112815104;
	// addi r8,r10,-22776
	ctx.r8.s64 = ctx.r10.s64 + -22776;
	// addi r7,r9,-17088
	ctx.r7.s64 = ctx.r9.s64 + -17088;
	// stw r8,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r8.u32);
	// lis r4,252
	ctx.r4.s64 = 16515072;
	// stw r7,72(r29)
	PPC_STORE_U32(ctx.r29.u32 + 72, ctx.r7.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// ori r4,r4,73
	ctx.r4.u64 = ctx.r4.u64 | 73;
	// bl 0x82d2ada8
	ctx.lr = 0x82BCE300;
	sub_82D2ADA8(ctx, base);
	// bl 0x8308e078
	ctx.lr = 0x82BCE304;
	sub_8308E078(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r31,-1
	ctx.r31.s64 = -1;
	// bl 0x831156e8
	ctx.lr = 0x82BCE310;
	sub_831156E8(ctx, base);
	// lwz r6,52(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// addis r11,r6,6
	ctx.r11.s64 = ctx.r6.s64 + 393216;
	// addi r11,r11,-30316
	ctx.r11.s64 = ctx.r11.s64 + -30316;
	// lbz r5,45(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 45);
	// cmplwi cr6,r5,2
	cr6.compare<uint32_t>(ctx.r5.u32, 2, xer);
	// bne cr6,0x82bce338
	if (!cr6.eq) goto loc_82BCE338;
	// addi r10,r30,1
	ctx.r10.s64 = ctx.r30.s64 + 1;
	// addic r9,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r31,r7,r31
	ctx.r31.u64 = ctx.r7.u64 & ctx.r31.u64;
loc_82BCE338:
	// lbz r10,46(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 46);
	// cmplwi cr6,r10,2
	cr6.compare<uint32_t>(ctx.r10.u32, 2, xer);
	// bne cr6,0x82bce360
	if (!cr6.eq) goto loc_82BCE360;
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, xer);
	// beq cr6,0x82bce360
	if (cr6.eq) goto loc_82BCE360;
	// cmplwi cr6,r30,1
	cr6.compare<uint32_t>(ctx.r30.u32, 1, xer);
	// beq cr6,0x82bce35c
	if (cr6.eq) goto loc_82BCE35C;
	// cmplwi cr6,r31,1
	cr6.compare<uint32_t>(ctx.r31.u32, 1, xer);
	// ble cr6,0x82bce360
	if (!cr6.gt) goto loc_82BCE360;
loc_82BCE35C:
	// li r31,1
	ctx.r31.s64 = 1;
loc_82BCE360:
	// lbz r10,47(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 47);
	// cmplwi cr6,r10,2
	cr6.compare<uint32_t>(ctx.r10.u32, 2, xer);
	// bne cr6,0x82bce388
	if (!cr6.eq) goto loc_82BCE388;
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, xer);
	// beq cr6,0x82bce388
	if (cr6.eq) goto loc_82BCE388;
	// cmplwi cr6,r30,2
	cr6.compare<uint32_t>(ctx.r30.u32, 2, xer);
	// beq cr6,0x82bce384
	if (cr6.eq) goto loc_82BCE384;
	// cmplwi cr6,r31,2
	cr6.compare<uint32_t>(ctx.r31.u32, 2, xer);
	// ble cr6,0x82bce388
	if (!cr6.gt) goto loc_82BCE388;
loc_82BCE384:
	// li r31,2
	ctx.r31.s64 = 2;
loc_82BCE388:
	// lbz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 48);
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// bne cr6,0x82bce3b4
	if (!cr6.eq) goto loc_82BCE3B4;
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, xer);
	// beq cr6,0x82bce3b4
	if (cr6.eq) goto loc_82BCE3B4;
	// cmplwi cr6,r30,3
	cr6.compare<uint32_t>(ctx.r30.u32, 3, xer);
	// beq cr6,0x82bce3ac
	if (cr6.eq) goto loc_82BCE3AC;
	// cmplwi cr6,r31,3
	cr6.compare<uint32_t>(ctx.r31.u32, 3, xer);
	// ble cr6,0x82bce3b4
	if (!cr6.gt) goto loc_82BCE3B4;
loc_82BCE3AC:
	// li r31,3
	ctx.r31.s64 = 3;
	// b 0x82bce3c0
	goto loc_82BCE3C0;
loc_82BCE3B4:
	// cmpwi cr6,r31,-1
	cr6.compare<int32_t>(ctx.r31.s32, -1, xer);
	// bne cr6,0x82bce3c0
	if (!cr6.eq) goto loc_82BCE3C0;
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
loc_82BCE3C0:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d195d8
	ctx.lr = 0x82BCE3CC;
	sub_82D195D8(ctx, base);
	// lis r5,108
	ctx.r5.s64 = 7077888;
	// li r4,1
	ctx.r4.s64 = 1;
	// ori r5,r5,41
	ctx.r5.u64 = ctx.r5.u64 | 41;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d20eb8
	ctx.lr = 0x82BCE3E0;
	sub_82D20EB8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82BCE3EC:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BCE3F8"))) PPC_WEAK_FUNC(sub_82BCE3F8);
PPC_FUNC_IMPL(__imp__sub_82BCE3F8) {
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
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-22776
	ctx.r9.s64 = ctx.r11.s64 + -22776;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r8,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r8.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82d2fa18
	ctx.lr = 0x82BCE430;
	sub_82D2FA18(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82bce448
	if (cr6.eq) goto loc_82BCE448;
	// bl 0x82416268
	ctx.lr = 0x82BCE444;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82BCE448:
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

__attribute__((alias("__imp__sub_82BCE460"))) PPC_WEAK_FUNC(sub_82BCE460);
PPC_FUNC_IMPL(__imp__sub_82BCE460) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82BCE468;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x8308e078
	ctx.lr = 0x82BCE47C;
	sub_8308E078(ctx, base);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82d253f8
	ctx.lr = 0x82BCE494;
	sub_82D253F8(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// addi r9,r11,-21952
	ctx.r9.s64 = ctx.r11.s64 + -21952;
	// addi r8,r10,-21956
	ctx.r8.s64 = ctx.r10.s64 + -21956;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r8,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r8.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r7,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r7.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d19788
	ctx.lr = 0x82BCE4C4;
	sub_82D19788(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82d19788
	ctx.lr = 0x82BCE4D4;
	sub_82D19788(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BCE4E0"))) PPC_WEAK_FUNC(sub_82BCE4E0);
PPC_FUNC_IMPL(__imp__sub_82BCE4E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82BCE4E8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,96(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// bgt cr6,0x82bce664
	if (cr6.gt) goto loc_82BCE664;
	// li r29,3
	ctx.r29.s64 = 3;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x82bce51c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82BCE51C;
	// bdzf 4*cr6+eq,0x82bce53c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82BCE53C;
	// bne cr6,0x82bce554
	if (!cr6.eq) goto loc_82BCE554;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
loc_82BCE51C:
	// bl 0x831156e8
	ctx.lr = 0x82BCE520;
	sub_831156E8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x83115cb8
	ctx.lr = 0x82BCE528;
	sub_83115CB8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82bce664
	if (cr6.eq) goto loc_82BCE664;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
loc_82BCE53C:
	// bl 0x831156e8
	ctx.lr = 0x82BCE540;
	sub_831156E8(ctx, base);
	// bl 0x83115808
	ctx.lr = 0x82BCE544;
	sub_83115808(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82bce664
	if (cr6.eq) goto loc_82BCE664;
	// stw r29,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r29.u32);
loc_82BCE554:
	// bl 0x830ff290
	ctx.lr = 0x82BCE558;
	sub_830FF290(ctx, base);
	// bl 0x830ff880
	ctx.lr = 0x82BCE55C;
	sub_830FF880(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82bce57c
	if (cr6.eq) goto loc_82BCE57C;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r11,r11,-22060
	ctx.r11.s64 = ctx.r11.s64 + -22060;
	// addi r5,r11,-84
	ctx.r5.s64 = ctx.r11.s64 + -84;
	// b 0x82bce644
	goto loc_82BCE644;
loc_82BCE57C:
	// bl 0x830ff290
	ctx.lr = 0x82BCE580;
	sub_830FF290(ctx, base);
	// bl 0x830ff948
	ctx.lr = 0x82BCE584;
	sub_830FF948(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82bce5a0
	if (cr6.eq) goto loc_82BCE5A0;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r11,r11,-22060
	ctx.r11.s64 = ctx.r11.s64 + -22060;
	// addi r5,r11,-72
	ctx.r5.s64 = ctx.r11.s64 + -72;
	// b 0x82bce644
	goto loc_82BCE644;
loc_82BCE5A0:
	// bl 0x830ff290
	ctx.lr = 0x82BCE5A4;
	sub_830FF290(ctx, base);
	// lbz r11,221(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 221);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82bce5c0
	if (cr6.eq) goto loc_82BCE5C0;
	// lbz r11,222(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 222);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x82bce5c4
	if (!cr6.eq) goto loc_82BCE5C4;
loc_82BCE5C0:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_82BCE5C4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82bce5e0
	if (cr6.eq) goto loc_82BCE5E0;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r11,r11,-22060
	ctx.r11.s64 = ctx.r11.s64 + -22060;
	// addi r5,r11,-60
	ctx.r5.s64 = ctx.r11.s64 + -60;
	// b 0x82bce644
	goto loc_82BCE644;
loc_82BCE5E0:
	// bl 0x830ff290
	ctx.lr = 0x82BCE5E4;
	sub_830FF290(ctx, base);
	// lbz r11,221(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 221);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82bce600
	if (cr6.eq) goto loc_82BCE600;
	// lbz r11,222(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 222);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x82bce604
	if (cr6.eq) goto loc_82BCE604;
loc_82BCE600:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_82BCE604:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82bce620
	if (cr6.eq) goto loc_82BCE620;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r11,r11,-22060
	ctx.r11.s64 = ctx.r11.s64 + -22060;
	// addi r5,r11,-36
	ctx.r5.s64 = ctx.r11.s64 + -36;
	// b 0x82bce644
	goto loc_82BCE644;
loc_82BCE620:
	// bl 0x830ff290
	ctx.lr = 0x82BCE624;
	sub_830FF290(ctx, base);
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmplwi cr6,r11,11
	cr6.compare<uint32_t>(ctx.r11.u32, 11, xer);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// bne cr6,0x82bce640
	if (!cr6.eq) goto loc_82BCE640;
	// addi r11,r11,-22060
	ctx.r11.s64 = ctx.r11.s64 + -22060;
	// addi r5,r11,-16
	ctx.r5.s64 = ctx.r11.s64 + -16;
	// b 0x82bce644
	goto loc_82BCE644;
loc_82BCE640:
	// addi r5,r11,-22060
	ctx.r5.s64 = ctx.r11.s64 + -22060;
loc_82BCE644:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d20da8
	ctx.lr = 0x82BCE650;
	sub_82D20DA8(ctx, base);
	// bl 0x830ff290
	ctx.lr = 0x82BCE654;
	sub_830FF290(ctx, base);
	// stb r30,221(r3)
	PPC_STORE_U8(ctx.r3.u32 + 221, ctx.r30.u8);
	// stb r30,222(r3)
	PPC_STORE_U8(ctx.r3.u32 + 222, ctx.r30.u8);
	// bl 0x82dd3978
	ctx.lr = 0x82BCE660;
	sub_82DD3978(ctx, base);
	// stw r29,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r29.u32);
loc_82BCE664:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BCE670"))) PPC_WEAK_FUNC(sub_82BCE670);
PPC_FUNC_IMPL(__imp__sub_82BCE670) {
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
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// addi r9,r11,-21952
	ctx.r9.s64 = ctx.r11.s64 + -21952;
	// addi r8,r10,-21956
	ctx.r8.s64 = ctx.r10.s64 + -21956;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r8,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r8.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82d25548
	ctx.lr = 0x82BCE6A8;
	sub_82D25548(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82bce6c0
	if (cr6.eq) goto loc_82BCE6C0;
	// bl 0x82416268
	ctx.lr = 0x82BCE6BC;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82BCE6C0:
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

__attribute__((alias("__imp__sub_82BCE6D8"))) PPC_WEAK_FUNC(sub_82BCE6D8);
PPC_FUNC_IMPL(__imp__sub_82BCE6D8) {
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
	// li r11,27
	ctx.r11.s64 = 27;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,100
	ctx.r4.s64 = 100;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82BCE70C;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bce740
	if (cr6.eq) goto loc_82BCE740;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82bce730
	if (cr6.lt) goto loc_82BCE730;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lbz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// bl 0x82bce460
	ctx.lr = 0x82BCE72C;
	sub_82BCE460(ctx, base);
	// b 0x82bce744
	goto loc_82BCE744;
loc_82BCE730:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lbz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// bl 0x82bce460
	ctx.lr = 0x82BCE73C;
	sub_82BCE460(ctx, base);
	// b 0x82bce744
	goto loc_82BCE744;
loc_82BCE740:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82BCE744:
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

__attribute__((alias("__imp__sub_82BCE75C"))) PPC_WEAK_FUNC(sub_82BCE75C);
PPC_FUNC_IMPL(__imp__sub_82BCE75C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BCE760"))) PPC_WEAK_FUNC(sub_82BCE760);
PPC_FUNC_IMPL(__imp__sub_82BCE760) {
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
	// li r11,27
	ctx.r11.s64 = 27;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,8
	ctx.r4.s64 = 8;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595718
	ctx.lr = 0x82BCE78C;
	sub_82595718(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bce7b0
	if (cr6.eq) goto loc_82BCE7B0;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,-21664
	ctx.r9.s64 = ctx.r10.s64 + -21664;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// b 0x82bce7b4
	goto loc_82BCE7B4;
loc_82BCE7B0:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82BCE7B4:
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// stw r4,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r4.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// lbz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x83878e28
	ctx.lr = 0x82BCE7D0;
	sub_83878E28(ctx, base);
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

__attribute__((alias("__imp__sub_82BCE7E8"))) PPC_WEAK_FUNC(sub_82BCE7E8);
PPC_FUNC_IMPL(__imp__sub_82BCE7E8) {
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
	// lwz r5,140(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 140);
	// addi r31,r3,140
	ctx.r31.s64 = ctx.r3.s64 + 140;
	// lwz r4,144(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 144);
	// cmplw cr6,r5,r4
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r4.u32, xer);
	// beq cr6,0x82bce834
	if (cr6.eq) goto loc_82BCE834;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x82b1c7b8
	ctx.lr = 0x82BCE81C;
	sub_82B1C7B8(ctx, base);
	// addi r5,r31,12
	ctx.r5.s64 = ctx.r31.s64 + 12;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82b1c488
	ctx.lr = 0x82BCE830;
	sub_82B1C488(ctx, base);
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
loc_82BCE834:
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

__attribute__((alias("__imp__sub_82BCE84C"))) PPC_WEAK_FUNC(sub_82BCE84C);
PPC_FUNC_IMPL(__imp__sub_82BCE84C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BCE850"))) PPC_WEAK_FUNC(sub_82BCE850);
PPC_FUNC_IMPL(__imp__sub_82BCE850) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x82BCE858;
	__savegprlr_25(ctx, base);
	// stwu r1,-384(r1)
	ea = -384 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31777
	ctx.r11.s64 = -2082537472;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// addi r28,r11,25460
	ctx.r28.s64 = ctx.r11.s64 + 25460;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r27,0
	ctx.r27.s64 = 0;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// li r25,7
	ctx.r25.s64 = 7;
	// cmplwi cr6,r11,9
	cr6.compare<uint32_t>(ctx.r11.u32, 9, xer);
	// bgt cr6,0x82bce8c0
	if (cr6.gt) goto loc_82BCE8C0;
	// lis r12,-32067
	ctx.r12.s64 = -2101542912;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-5992
	ctx.r12.s64 = ctx.r12.s64 + -5992;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_82BCE954;
	case 1:
		goto loc_82BCEA04;
	case 2:
		goto loc_82BCEA20;
	case 3:
		goto loc_82BCEA3C;
	case 4:
		goto loc_82BCEB18;
	case 5:
		goto loc_82BCEBDC;
	case 6:
		goto loc_82BCEC2C;
	case 7:
		goto loc_82BCEC54;
	case 8:
		goto loc_82BCEDA4;
	case 9:
		goto loc_82BCEE08;
	default:
		return;
	}
	// lwz r21,-5804(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -5804);
	// lwz r21,-5628(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -5628);
	// lwz r21,-5600(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -5600);
	// lwz r21,-5572(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -5572);
	// lwz r21,-5352(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -5352);
	// lwz r21,-5156(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -5156);
	// lwz r21,-5076(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -5076);
	// lwz r21,-5036(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -5036);
	// lwz r21,-4700(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -4700);
	// lwz r21,-4600(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -4600);
loc_82BCE8C0:
	// lis r31,-31754
	ctx.r31.s64 = -2081030144;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,21944(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 21944);
	// bl 0x8308b280
	ctx.lr = 0x82BCE8D8;
	sub_8308B280(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82bce8f8
	if (cr6.eq) goto loc_82BCE8F8;
	// lwz r3,21944(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 21944);
	// bl 0x8308b640
	ctx.lr = 0x82BCE8EC;
	sub_8308B640(ctx, base);
loc_82BCE8EC:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_82BCE8F8:
	// bl 0x82d35198
	ctx.lr = 0x82BCE8FC;
	sub_82D35198(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bce910
	if (cr6.eq) goto loc_82BCE910;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,511
	ctx.r4.s64 = 511;
	// bl 0x82d36760
	ctx.lr = 0x82BCE910;
	sub_82D36760(ctx, base);
loc_82BCE910:
	// bl 0x82dd30c8
	ctx.lr = 0x82BCE914;
	sub_82DD30C8(ctx, base);
	// bl 0x82d86078
	ctx.lr = 0x82BCE918;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bce928
	if (cr6.eq) goto loc_82BCE928;
	// lwz r11,64(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// stb r27,653(r11)
	PPC_STORE_U8(ctx.r11.u32 + 653, ctx.r27.u8);
loc_82BCE928:
	// bl 0x830ff290
	ctx.lr = 0x82BCE92C;
	sub_830FF290(ctx, base);
	// lbz r11,60(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 60);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x82bce94c
	if (!cr6.eq) goto loc_82BCE94C;
	// li r11,9
	ctx.r11.s64 = 9;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,4(r26)
	PPC_STORE_U32(ctx.r26.u32 + 4, ctx.r11.u32);
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_82BCE94C:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,4(r26)
	PPC_STORE_U32(ctx.r26.u32 + 4, ctx.r11.u32);
loc_82BCE954:
	// bl 0x82f00728
	ctx.lr = 0x82BCE958;
	sub_82F00728(ctx, base);
	// lis r11,1
	ctx.r11.s64 = 65536;
	// ori r10,r11,18996
	ctx.r10.u64 = ctx.r11.u64 | 18996;
	// lbzx r9,r3,r10
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + ctx.r10.u32);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82bce8ec
	if (!cr6.eq) goto loc_82BCE8EC;
	// bl 0x831156e8
	ctx.lr = 0x82BCE970;
	sub_831156E8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bce8ec
	if (cr6.eq) goto loc_82BCE8EC;
	// bl 0x831156e8
	ctx.lr = 0x82BCE97C;
	sub_831156E8(ctx, base);
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82bce99c
	if (cr6.eq) goto loc_82BCE99C;
	// bl 0x83115808
	ctx.lr = 0x82BCE98C;
	sub_83115808(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x82bce9a0
	if (!cr6.eq) goto loc_82BCE9A0;
loc_82BCE99C:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_82BCE9A0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82bce8ec
	if (cr6.eq) goto loc_82BCE8EC;
	// bl 0x831156e8
	ctx.lr = 0x82BCE9B0;
	sub_831156E8(ctx, base);
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82bce9d0
	if (cr6.eq) goto loc_82BCE9D0;
	// bl 0x83115808
	ctx.lr = 0x82BCE9C0;
	sub_83115808(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x82bce9d4
	if (!cr6.eq) goto loc_82BCE9D4;
loc_82BCE9D0:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_82BCE9D4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82bce9ec
	if (cr6.eq) goto loc_82BCE9EC;
	// bl 0x831156e8
	ctx.lr = 0x82BCE9E4;
	sub_831156E8(ctx, base);
	// lwz r3,48(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// bl 0x82b65698
	ctx.lr = 0x82BCE9EC;
	sub_82B65698(ctx, base);
loc_82BCE9EC:
	// bl 0x82d34e50
	ctx.lr = 0x82BCE9F0;
	sub_82D34E50(ctx, base);
	// li r4,6
	ctx.r4.s64 = 6;
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x82d35038
	ctx.lr = 0x82BCE9FC;
	sub_82D35038(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,4(r26)
	PPC_STORE_U32(ctx.r26.u32 + 4, ctx.r11.u32);
loc_82BCEA04:
	// bl 0x82d34e50
	ctx.lr = 0x82BCEA08;
	sub_82D34E50(ctx, base);
	// bl 0x82d34d38
	ctx.lr = 0x82BCEA0C;
	sub_82D34D38(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82bce8ec
	if (cr6.eq) goto loc_82BCE8EC;
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,4(r26)
	PPC_STORE_U32(ctx.r26.u32 + 4, ctx.r11.u32);
loc_82BCEA20:
	// bl 0x82f00728
	ctx.lr = 0x82BCEA24;
	sub_82F00728(ctx, base);
	// bl 0x82eff1a8
	ctx.lr = 0x82BCEA28;
	sub_82EFF1A8(ctx, base);
	// lwz r11,268(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 268);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82bce8ec
	if (!cr6.eq) goto loc_82BCE8EC;
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r11,4(r26)
	PPC_STORE_U32(ctx.r26.u32 + 4, ctx.r11.u32);
loc_82BCEA3C:
	// bl 0x82f00728
	ctx.lr = 0x82BCEA40;
	sub_82F00728(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addis r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 65536;
	// addi r3,r3,19024
	ctx.r3.s64 = ctx.r3.s64 + 19024;
	// bl 0x82f04390
	ctx.lr = 0x82BCEA50;
	sub_82F04390(ctx, base);
	// addis r9,r30,1
	ctx.r9.s64 = ctx.r30.s64 + 65536;
	// li r31,-1
	ctx.r31.s64 = -1;
	// addi r9,r9,22996
	ctx.r9.s64 = ctx.r9.s64 + 22996;
	// stw r31,112(r30)
	PPC_STORE_U32(ctx.r30.u32 + 112, ctx.r31.u32);
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r31,116(r30)
	PPC_STORE_U32(ctx.r30.u32 + 116, ctx.r31.u32);
	// ld r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r28.u32 + 0);
	// std r11,92(r30)
	PPC_STORE_U64(ctx.r30.u32 + 92, ctx.r11.u64);
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// stw r10,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r10.u32);
	// bl 0x831156e8
	ctx.lr = 0x82BCEA7C;
	sub_831156E8(ctx, base);
	// lwz r30,52(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// addis r3,r30,5
	ctx.r3.s64 = ctx.r30.s64 + 327680;
	// addi r3,r3,14904
	ctx.r3.s64 = ctx.r3.s64 + 14904;
	// bl 0x83124548
	ctx.lr = 0x82BCEA8C;
	sub_83124548(ctx, base);
	// bl 0x82eff1a8
	ctx.lr = 0x82BCEA90;
	sub_82EFF1A8(ctx, base);
	// bl 0x82bce7e8
	ctx.lr = 0x82BCEA94;
	sub_82BCE7E8(ctx, base);
	// bl 0x82f051b0
	ctx.lr = 0x82BCEA98;
	sub_82F051B0(ctx, base);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x82bceaac
	if (cr6.eq) goto loc_82BCEAAC;
	// bl 0x82f06520
	ctx.lr = 0x82BCEAA8;
	sub_82F06520(ctx, base);
	// bl 0x82f05ed0
	ctx.lr = 0x82BCEAAC;
	sub_82F05ED0(ctx, base);
loc_82BCEAAC:
	// bl 0x82d4de68
	ctx.lr = 0x82BCEAB0;
	sub_82D4DE68(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82bceac8
	if (cr6.eq) goto loc_82BCEAC8;
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82d4de98
	ctx.lr = 0x82BCEAC8;
	sub_82D4DE98(ctx, base);
loc_82BCEAC8:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82d17aa0
	ctx.lr = 0x82BCEAD0;
	sub_82D17AA0(ctx, base);
	// lis r11,5
	ctx.r11.s64 = 327680;
	// ori r10,r11,37448
	ctx.r10.u64 = ctx.r11.u64 | 37448;
	// stwx r27,r30,r10
	PPC_STORE_U32(ctx.r30.u32 + ctx.r10.u32, ctx.r27.u32);
	// bl 0x82d897b0
	ctx.lr = 0x82BCEAE0;
	sub_82D897B0(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82bceb10
	if (cr6.eq) goto loc_82BCEB10;
	// lis r11,-31756
	ctx.r11.s64 = -2081161216;
	// lwz r11,-26764(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -26764);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82bceb10
	if (cr6.eq) goto loc_82BCEB10;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// stw r27,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r27.u32);
	// stw r27,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r27.u32);
	// stw r31,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r31.u32);
	// stb r27,12(r11)
	PPC_STORE_U8(ctx.r11.u32 + 12, ctx.r27.u8);
loc_82BCEB10:
	// li r11,5
	ctx.r11.s64 = 5;
	// stw r11,4(r26)
	PPC_STORE_U32(ctx.r26.u32 + 4, ctx.r11.u32);
loc_82BCEB18:
	// bl 0x831156e8
	ctx.lr = 0x82BCEB1C;
	sub_831156E8(ctx, base);
	// ld r29,0(r28)
	ctx.r29.u64 = PPC_LOAD_U64(ctx.r28.u32 + 0);
	// lwz r31,48(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// std r29,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r29.u64);
	// bl 0x830ff290
	ctx.lr = 0x82BCEB30;
	sub_830FF290(ctx, base);
	// bl 0x830ffaa8
	ctx.lr = 0x82BCEB34;
	sub_830FFAA8(ctx, base);
	// cmplwi cr6,r3,13
	cr6.compare<uint32_t>(ctx.r3.u32, 13, xer);
	// bne cr6,0x82bceb5c
	if (!cr6.eq) goto loc_82BCEB5C;
	// lis r11,220
	ctx.r11.s64 = 14417920;
	// ori r10,r11,46613
	ctx.r10.u64 = ctx.r11.u64 | 46613;
	// lbzx r9,r31,r10
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r10.u32);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82bceb5c
	if (!cr6.eq) goto loc_82BCEB5C;
	// lis r11,228
	ctx.r11.s64 = 14942208;
	// ori r10,r11,42280
	ctx.r10.u64 = ctx.r11.u64 | 42280;
	// b 0x82bceb74
	goto loc_82BCEB74;
loc_82BCEB5C:
	// bl 0x830ff290
	ctx.lr = 0x82BCEB60;
	sub_830FF290(ctx, base);
	// bl 0x830ffaa8
	ctx.lr = 0x82BCEB64;
	sub_830FFAA8(ctx, base);
	// cmplwi cr6,r3,12
	cr6.compare<uint32_t>(ctx.r3.u32, 12, xer);
	// bne cr6,0x82bceb7c
	if (!cr6.eq) goto loc_82BCEB7C;
	// lis r11,222
	ctx.r11.s64 = 14548992;
	// ori r10,r11,30348
	ctx.r10.u64 = ctx.r11.u64 | 30348;
loc_82BCEB74:
	// ldx r29,r31,r10
	ctx.r29.u64 = PPC_LOAD_U64(ctx.r31.u32 + ctx.r10.u32);
	// std r29,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r29.u64);
loc_82BCEB7C:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825a2298
	ctx.lr = 0x82BCEB88;
	sub_825A2298(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82bcebd4
	if (cr6.eq) goto loc_82BCEBD4;
	// lwz r11,60(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82bcebb8
	if (cr6.eq) goto loc_82BCEBB8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83115808
	ctx.lr = 0x82BCEBA8;
	sub_83115808(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x82bcebbc
	if (!cr6.eq) goto loc_82BCEBBC;
loc_82BCEBB8:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_82BCEBBC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82bcebd4
	if (cr6.eq) goto loc_82BCEBD4;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,60(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	// bl 0x8311cd08
	ctx.lr = 0x82BCEBD4;
	sub_8311CD08(ctx, base);
loc_82BCEBD4:
	// li r11,6
	ctx.r11.s64 = 6;
	// stw r11,4(r26)
	PPC_STORE_U32(ctx.r26.u32 + 4, ctx.r11.u32);
loc_82BCEBDC:
	// bl 0x830ff290
	ctx.lr = 0x82BCEBE0;
	sub_830FF290(ctx, base);
	// lbz r11,65(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 65);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82bcebfc
	if (!cr6.eq) goto loc_82BCEBFC;
	// bl 0x831156e8
	ctx.lr = 0x82BCEBF0;
	sub_831156E8(ctx, base);
	// lbz r11,100(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 100);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82bcec10
	if (!cr6.eq) goto loc_82BCEC10;
loc_82BCEBFC:
	// li r11,8
	ctx.r11.s64 = 8;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,4(r26)
	PPC_STORE_U32(ctx.r26.u32 + 4, ctx.r11.u32);
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_82BCEC10:
	// bl 0x831156e8
	ctx.lr = 0x82BCEC14;
	sub_831156E8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x83115d70
	ctx.lr = 0x82BCEC1C;
	sub_83115D70(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82bce8ec
	if (cr6.eq) goto loc_82BCE8EC;
	// stw r25,4(r26)
	PPC_STORE_U32(ctx.r26.u32 + 4, ctx.r25.u32);
loc_82BCEC2C:
	// bl 0x831156e8
	ctx.lr = 0x82BCEC30;
	sub_831156E8(ctx, base);
	// bl 0x83115808
	ctx.lr = 0x82BCEC34;
	sub_83115808(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82bce8ec
	if (cr6.eq) goto loc_82BCE8EC;
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// li r10,8
	ctx.r10.s64 = 8;
	// lwz r11,15392(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15392);
	// stb r27,5(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5, ctx.r27.u8);
	// stw r10,4(r26)
	PPC_STORE_U32(ctx.r26.u32 + 4, ctx.r10.u32);
loc_82BCEC54:
	// bl 0x831156e8
	ctx.lr = 0x82BCEC58;
	sub_831156E8(ctx, base);
	// lwz r3,48(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// bl 0x8311a358
	ctx.lr = 0x82BCEC60;
	sub_8311A358(ctx, base);
	// bl 0x830ff290
	ctx.lr = 0x82BCEC64;
	sub_830FF290(ctx, base);
	// bl 0x830ffaa8
	ctx.lr = 0x82BCEC68;
	sub_830FFAA8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x830ff290
	ctx.lr = 0x82BCEC70;
	sub_830FF290(ctx, base);
	// lwz r29,32(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// bl 0x830ff290
	ctx.lr = 0x82BCEC78;
	sub_830FF290(ctx, base);
	// stw r25,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r25.u32);
	// bl 0x831156e8
	ctx.lr = 0x82BCEC80;
	sub_831156E8(ctx, base);
	// lwz r28,52(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// addis r31,r28,2
	ctx.r31.s64 = ctx.r28.s64 + 131072;
	// addi r31,r31,-21268
	ctx.r31.s64 = ctx.r31.s64 + -21268;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8311e9f8
	ctx.lr = 0x82BCEC94;
	sub_8311E9F8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82bcecb0
	if (!cr6.eq) goto loc_82BCECB0;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8311f0f8
	ctx.lr = 0x82BCECB0;
	sub_8311F0F8(ctx, base);
loc_82BCECB0:
	// bl 0x83129510
	ctx.lr = 0x82BCECB4;
	sub_83129510(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bcecc4
	if (cr6.eq) goto loc_82BCECC4;
	// bl 0x83129510
	ctx.lr = 0x82BCECC0;
	sub_83129510(ctx, base);
	// stw r27,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r27.u32);
loc_82BCECC4:
	// cmplwi cr6,r29,20
	cr6.compare<uint32_t>(ctx.r29.u32, 20, xer);
	// bne cr6,0x82bced7c
	if (!cr6.eq) goto loc_82BCED7C;
	// bl 0x83763ef8
	ctx.lr = 0x82BCECD0;
	sub_83763EF8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82bcecdc
	if (!cr6.eq) goto loc_82BCECDC;
	// bl 0x83768598
	ctx.lr = 0x82BCECDC;
	sub_83768598(ctx, base);
loc_82BCECDC:
	// lis r11,16
	ctx.r11.s64 = 1048576;
	// sth r27,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r27.u16);
	// li r5,72
	ctx.r5.s64 = 72;
	// ori r10,r11,186
	ctx.r10.u64 = ctx.r11.u64 | 186;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,244
	ctx.r3.s64 = ctx.r1.s64 + 244;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// bl 0x831cdcf0
	ctx.lr = 0x82BCECFC;
	sub_831CDCF0(ctx, base);
	// li r5,188
	ctx.r5.s64 = 188;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x831cdcf0
	ctx.lr = 0x82BCED0C;
	sub_831CDCF0(ctx, base);
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r9,-22421
	ctx.r4.s64 = ctx.r9.s64 + -22421;
	// bl 0x837b0c10
	ctx.lr = 0x82BCED1C;
	sub_837B0C10(ctx, base);
	// bl 0x83763ef8
	ctx.lr = 0x82BCED20;
	sub_83763EF8(ctx, base);
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// ld r31,80(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwz r7,72(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 72);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82BCED3C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r5,106
	ctx.r5.s64 = 106;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82a97010
	ctx.lr = 0x82BCED4C;
	sub_82A97010(ctx, base);
	// li r5,107
	ctx.r5.s64 = 107;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82a97010
	ctx.lr = 0x82BCED5C;
	sub_82A97010(ctx, base);
	// li r30,1
	ctx.r30.s64 = 1;
	// bl 0x83763ef8
	ctx.lr = 0x82BCED64;
	sub_83763EF8(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// bl 0x83777d30
	ctx.lr = 0x82BCED74;
	sub_83777D30(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8387e8e0
	ctx.lr = 0x82BCED7C;
	sub_8387E8E0(ctx, base);
loc_82BCED7C:
	// lis r11,5
	ctx.r11.s64 = 327680;
	// ori r10,r11,37447
	ctx.r10.u64 = ctx.r11.u64 | 37447;
	// stbx r27,r28,r10
	PPC_STORE_U8(ctx.r28.u32 + ctx.r10.u32, ctx.r27.u8);
	// bl 0x831156e8
	ctx.lr = 0x82BCED8C;
	sub_831156E8(ctx, base);
	// lis r9,236
	ctx.r9.s64 = 15466496;
	// lwz r8,48(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// li r7,9
	ctx.r7.s64 = 9;
	// ori r6,r9,5128
	ctx.r6.u64 = ctx.r9.u64 | 5128;
	// stwx r27,r8,r6
	PPC_STORE_U32(ctx.r8.u32 + ctx.r6.u32, ctx.r27.u32);
	// stw r7,4(r26)
	PPC_STORE_U32(ctx.r26.u32 + 4, ctx.r7.u32);
loc_82BCEDA4:
	// bl 0x83763ef8
	ctx.lr = 0x82BCEDA8;
	sub_83763EF8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bcedb4
	if (cr6.eq) goto loc_82BCEDB4;
	// bl 0x83763ea8
	ctx.lr = 0x82BCEDB4;
	sub_83763EA8(ctx, base);
loc_82BCEDB4:
	// bl 0x82eff1a8
	ctx.lr = 0x82BCEDB8;
	sub_82EFF1A8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bcedd8
	if (cr6.eq) goto loc_82BCEDD8;
	// bl 0x82eff1a8
	ctx.lr = 0x82BCEDC4;
	sub_82EFF1A8(ctx, base);
	// lwz r11,268(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 268);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82bcedd8
	if (cr6.eq) goto loc_82BCEDD8;
	// bl 0x82eff1a8
	ctx.lr = 0x82BCEDD4;
	sub_82EFF1A8(ctx, base);
	// bl 0x82eff798
	ctx.lr = 0x82BCEDD8;
	sub_82EFF798(ctx, base);
loc_82BCEDD8:
	// bl 0x82e6f960
	ctx.lr = 0x82BCEDDC;
	sub_82E6F960(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bcee00
	if (cr6.eq) goto loc_82BCEE00;
	// bl 0x82e6f960
	ctx.lr = 0x82BCEDE8;
	sub_82E6F960(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82e6fa08
	ctx.lr = 0x82BCEDF0;
	sub_82E6FA08(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82bcee00
	if (!cr6.eq) goto loc_82BCEE00;
	// bl 0x82d89868
	ctx.lr = 0x82BCEE00;
	sub_82D89868(ctx, base);
loc_82BCEE00:
	// li r11,10
	ctx.r11.s64 = 10;
	// stw r11,4(r26)
	PPC_STORE_U32(ctx.r26.u32 + 4, ctx.r11.u32);
loc_82BCEE08:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BCEE14"))) PPC_WEAK_FUNC(sub_82BCEE14);
PPC_FUNC_IMPL(__imp__sub_82BCEE14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BCEE18"))) PPC_WEAK_FUNC(sub_82BCEE18);
PPC_FUNC_IMPL(__imp__sub_82BCEE18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-21000
	ctx.r9.s64 = ctx.r11.s64 + -21000;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r8,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r8.u32);
	// b 0x82c42d70
	sub_82C42D70(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BCEE34"))) PPC_WEAK_FUNC(sub_82BCEE34);
PPC_FUNC_IMPL(__imp__sub_82BCEE34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BCEE38"))) PPC_WEAK_FUNC(sub_82BCEE38);
PPC_FUNC_IMPL(__imp__sub_82BCEE38) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82BCEE40;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,168(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 168);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82bcf0a0
	if (cr6.eq) goto loc_82BCF0A0;
	// bl 0x82d273d8
	ctx.lr = 0x82BCEE5C;
	sub_82D273D8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bcf0a0
	if (cr6.eq) goto loc_82BCF0A0;
	// bl 0x82d27440
	ctx.lr = 0x82BCEE68;
	sub_82D27440(ctx, base);
	// lwz r11,108(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, xer);
	// beq cr6,0x82bcee80
	if (cr6.eq) goto loc_82BCEE80;
	// lwz r11,112(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, xer);
	// bne cr6,0x82bcf0a0
	if (!cr6.eq) goto loc_82BCF0A0;
loc_82BCEE80:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r5,108
	ctx.r5.s64 = 7077888;
	// li r4,0
	ctx.r4.s64 = 0;
	// ori r5,r5,35
	ctx.r5.u64 = ctx.r5.u64 | 35;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,96(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BCEEA0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r5,108
	ctx.r5.s64 = 7077888;
	// li r4,1
	ctx.r4.s64 = 1;
	// ori r5,r5,41
	ctx.r5.u64 = ctx.r5.u64 | 41;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,96(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 96);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82BCEEC0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r5,108
	ctx.r5.s64 = 7077888;
	// li r4,3
	ctx.r4.s64 = 3;
	// ori r5,r5,58
	ctx.r5.u64 = ctx.r5.u64 | 58;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r6,96(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 96);
	// mtctr r6
	ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x82BCEEE0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lbz r5,144(r31)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r31.u32 + 144);
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x82bcf0a0
	if (cr6.eq) goto loc_82BCF0A0;
	// lbz r11,146(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 146);
	// lis r5,108
	ctx.r5.s64 = 7077888;
	// li r4,11
	ctx.r4.s64 = 11;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,96(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bne cr6,0x82bcef18
	if (!cr6.eq) goto loc_82BCEF18;
	// ori r5,r5,325
	ctx.r5.u64 = ctx.r5.u64 | 325;
	// b 0x82bcef1c
	goto loc_82BCEF1C;
loc_82BCEF18:
	// ori r5,r5,324
	ctx.r5.u64 = ctx.r5.u64 | 324;
loc_82BCEF1C:
	// bctrl 
	ctx.lr = 0x82BCEF20;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r30,108(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// bl 0x82c42df8
	ctx.lr = 0x82BCEF34;
	sub_82C42DF8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// clrlwi r4,r10,14
	ctx.r4.u64 = ctx.r10.u32 & 0x3FFFF;
	// bl 0x82b35fc0
	ctx.lr = 0x82BCEF48;
	sub_82B35FC0(ctx, base);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82bcef64
	if (cr6.eq) goto loc_82BCEF64;
	// lwz r11,108(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// lbz r10,159(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 159);
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82bcef68
	if (cr6.eq) goto loc_82BCEF68;
loc_82BCEF64:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82BCEF68:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lwz r3,108(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// lis r10,108
	ctx.r10.s64 = 7077888;
	// li r30,-1
	ctx.r30.s64 = -1;
	// ori r28,r10,328
	ctx.r28.u64 = ctx.r10.u64 | 328;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82bcef98
	if (cr6.eq) goto loc_82BCEF98;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82b34c80
	ctx.lr = 0x82BCEF90;
	sub_82B34C80(ctx, base);
	// li r29,1
	ctx.r29.s64 = 1;
	// b 0x82bcefa8
	goto loc_82BCEFA8;
loc_82BCEF98:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82b34c80
	ctx.lr = 0x82BCEFA4;
	sub_82B34C80(ctx, base);
	// li r29,0
	ctx.r29.s64 = 0;
loc_82BCEFA8:
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r27,112(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82c42df8
	ctx.lr = 0x82BCEFBC;
	sub_82C42DF8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// clrlwi r4,r10,14
	ctx.r4.u64 = ctx.r10.u32 & 0x3FFFF;
	// bl 0x82b35fc0
	ctx.lr = 0x82BCEFD0;
	sub_82B35FC0(ctx, base);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82bcefec
	if (cr6.eq) goto loc_82BCEFEC;
	// lwz r11,112(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// lbz r10,159(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 159);
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82bceff0
	if (cr6.eq) goto loc_82BCEFF0;
loc_82BCEFEC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82BCEFF0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lwz r3,112(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82bcf014
	if (cr6.eq) goto loc_82BCF014;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82b34c80
	ctx.lr = 0x82BCF00C;
	sub_82B34C80(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82bcf024
	goto loc_82BCF024;
loc_82BCF014:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82b34c80
	ctx.lr = 0x82BCF020;
	sub_82B34C80(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
loc_82BCF024:
	// clrlwi r10,r29,24
	ctx.r10.u64 = ctx.r29.u32 & 0xFF;
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// beq cr6,0x82bcf074
	if (cr6.eq) goto loc_82BCF074;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// beq cr6,0x82bcf074
	if (cr6.eq) goto loc_82BCF074;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19788
	ctx.lr = 0x82BCF04C;
	sub_82D19788(ctx, base);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r5,r11,-21088
	ctx.r5.s64 = ctx.r11.s64 + -21088;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,92(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 92);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82BCF06C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_82BCF074:
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19788
	ctx.lr = 0x82BCF084;
	sub_82D19788(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,96(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BCF0A0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82BCF0A0:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BCF0A8"))) PPC_WEAK_FUNC(sub_82BCF0A8);
PPC_FUNC_IMPL(__imp__sub_82BCF0A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82BCF0B0;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82c42df8
	ctx.lr = 0x82BCF0D0;
	sub_82C42DF8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// clrlwi r9,r10,14
	ctx.r9.u64 = ctx.r10.u32 & 0x3FFFF;
	// stw r9,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r9.u32);
	// bl 0x82c42df8
	ctx.lr = 0x82BCF0F0;
	sub_82C42DF8(ctx, base);
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// clrlwi r7,r8,14
	ctx.r7.u64 = ctx.r8.u32 & 0x3FFFF;
	// stw r7,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r7.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BCF104"))) PPC_WEAK_FUNC(sub_82BCF104);
PPC_FUNC_IMPL(__imp__sub_82BCF104) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BCF108"))) PPC_WEAK_FUNC(sub_82BCF108);
PPC_FUNC_IMPL(__imp__sub_82BCF108) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82BCF110;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// cmpwi cr6,r4,-1
	cr6.compare<int32_t>(ctx.r4.s32, -1, xer);
	// bne cr6,0x82bcf130
	if (!cr6.eq) goto loc_82BCF130;
	// cmpwi cr6,r5,-1
	cr6.compare<int32_t>(ctx.r5.s32, -1, xer);
	// beq cr6,0x82bcf190
	if (cr6.eq) goto loc_82BCF190;
loc_82BCF130:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d199f0
	ctx.lr = 0x82BCF138;
	sub_82D199F0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82bcf190
	if (cr6.eq) goto loc_82BCF190;
	// li r31,0
	ctx.r31.s64 = 0;
loc_82BCF148:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// oris r11,r29,65532
	ctx.r11.u64 = ctx.r29.u64 | 4294705152;
	// beq cr6,0x82bcf158
	if (cr6.eq) goto loc_82BCF158;
	// oris r11,r28,65532
	ctx.r11.u64 = ctx.r28.u64 | 4294705152;
loc_82BCF158:
	// clrlwi r5,r11,14
	ctx.r5.u64 = ctx.r11.u32 & 0x3FFFF;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c42ea0
	ctx.lr = 0x82BCF16C;
	sub_82C42EA0(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplwi cr6,r31,2
	cr6.compare<uint32_t>(ctx.r31.u32, 2, xer);
	// blt cr6,0x82bcf148
	if (cr6.lt) goto loc_82BCF148;
	// lbz r11,104(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 104);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82bcf190
	if (cr6.eq) goto loc_82BCF190;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c42f20
	ctx.lr = 0x82BCF190;
	sub_82C42F20(ctx, base);
loc_82BCF190:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BCF198"))) PPC_WEAK_FUNC(sub_82BCF198);
PPC_FUNC_IMPL(__imp__sub_82BCF198) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82BCF1A0;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82bcf27c
	if (cr6.eq) goto loc_82BCF27C;
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82b35e40
	ctx.lr = 0x82BCF1C0;
	sub_82B35E40(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82bcf27c
	if (cr6.eq) goto loc_82BCF27C;
	// lwz r11,164(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	// li r29,1
	ctx.r29.s64 = 1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82bcf230
	if (!cr6.eq) goto loc_82BCF230;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82b36188
	ctx.lr = 0x82BCF1E8;
	sub_82B36188(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,148(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwimi r9,r10,0,14,31
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0x3FFFF) | (ctx.r9.u64 & 0xFFFFFFFFFFFC0000);
	// rotlwi r7,r9,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// stw r9,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r9.u32);
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwimi r8,r7,0,0,13
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r7.u32, 0) & 0xFFFC0000) | (ctx.r8.u64 & 0xFFFFFFFF0003FFFF);
	// stw r8,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r8.u32);
	// bl 0x82d19638
	ctx.lr = 0x82BCF214;
	sub_82D19638(ctx, base);
	// stw r3,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r3.u32);
	// li r4,27
	ctx.r4.s64 = 27;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d17da0
	ctx.lr = 0x82BCF224;
	sub_82D17DA0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c430f0
	ctx.lr = 0x82BCF22C;
	sub_82C430F0(ctx, base);
	// stb r29,147(r31)
	PPC_STORE_U8(ctx.r31.u32 + 147, ctx.r29.u8);
loc_82BCF230:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d199c0
	ctx.lr = 0x82BCF238;
	sub_82D199C0(ctx, base);
	// stw r3,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r3.u32);
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d199b0
	ctx.lr = 0x82BCF248;
	sub_82D199B0(ctx, base);
	// stb r29,168(r31)
	PPC_STORE_U8(ctx.r31.u32 + 168, ctx.r29.u8);
	// lwz r3,108(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// bl 0x82d19a00
	ctx.lr = 0x82BCF254;
	sub_82D19A00(ctx, base);
	// stb r3,176(r31)
	PPC_STORE_U8(ctx.r31.u32 + 176, ctx.r3.u8);
	// lwz r3,112(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// bl 0x82d19a00
	ctx.lr = 0x82BCF260;
	sub_82D19A00(ctx, base);
	// stb r3,177(r31)
	PPC_STORE_U8(ctx.r31.u32 + 177, ctx.r3.u8);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,108(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// bl 0x82d1c008
	ctx.lr = 0x82BCF270;
	sub_82D1C008(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,112(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// bl 0x82d1c008
	ctx.lr = 0x82BCF27C;
	sub_82D1C008(ctx, base);
loc_82BCF27C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BCF284"))) PPC_WEAK_FUNC(sub_82BCF284);
PPC_FUNC_IMPL(__imp__sub_82BCF284) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BCF288"))) PPC_WEAK_FUNC(sub_82BCF288);
PPC_FUNC_IMPL(__imp__sub_82BCF288) {
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
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82bcf318
	if (cr6.eq) goto loc_82BCF318;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x82d19638
	ctx.lr = 0x82BCF2B0;
	sub_82D19638(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x8308e078
	ctx.lr = 0x82BCF2B8;
	sub_8308E078(ctx, base);
	// cmplw cr6,r3,r30
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r30.u32, xer);
	// bne cr6,0x82bcf318
	if (!cr6.eq) goto loc_82BCF318;
	// lwz r11,160(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82bcf2e0
	if (!cr6.eq) goto loc_82BCF2E0;
	// li r4,29
	ctx.r4.s64 = 29;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d17da0
	ctx.lr = 0x82BCF2D8;
	sub_82D17DA0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c430f0
	ctx.lr = 0x82BCF2E0;
	sub_82C430F0(ctx, base);
loc_82BCF2E0:
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,168(r31)
	PPC_STORE_U8(ctx.r31.u32 + 168, ctx.r11.u8);
	// lwz r3,108(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// bl 0x82d19a00
	ctx.lr = 0x82BCF2F0;
	sub_82D19A00(ctx, base);
	// stb r3,176(r31)
	PPC_STORE_U8(ctx.r31.u32 + 176, ctx.r3.u8);
	// lwz r3,112(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// bl 0x82d19a00
	ctx.lr = 0x82BCF2FC;
	sub_82D19A00(ctx, base);
	// stb r3,177(r31)
	PPC_STORE_U8(ctx.r31.u32 + 177, ctx.r3.u8);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,108(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// bl 0x82d1c008
	ctx.lr = 0x82BCF30C;
	sub_82D1C008(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,112(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// bl 0x82d1c008
	ctx.lr = 0x82BCF318;
	sub_82D1C008(ctx, base);
loc_82BCF318:
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

__attribute__((alias("__imp__sub_82BCF330"))) PPC_WEAK_FUNC(sub_82BCF330);
PPC_FUNC_IMPL(__imp__sub_82BCF330) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82BCF338;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,160(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 160);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r27,4(r4)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// li r29,0
	ctx.r29.s64 = 0;
	// lbz r26,8(r4)
	ctx.r26.u64 = PPC_LOAD_U8(ctx.r4.u32 + 8);
	// li r28,1
	ctx.r28.s64 = 1;
	// lis r30,-31743
	ctx.r30.s64 = -2080309248;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82bcf3bc
	if (cr6.eq) goto loc_82BCF3BC;
	// lis r11,266
	ctx.r11.s64 = 17432576;
	// ori r10,r11,1
	ctx.r10.u64 = ctx.r11.u64 | 1;
	// cmplw cr6,r27,r10
	cr6.compare<uint32_t>(ctx.r27.u32, ctx.r10.u32, xer);
	// bne cr6,0x82bcf3bc
	if (!cr6.eq) goto loc_82BCF3BC;
	// stw r29,160(r3)
	PPC_STORE_U32(ctx.r3.u32 + 160, ctx.r29.u32);
	// lwz r11,15392(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 15392);
	// lbz r11,5(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5);
	// stb r11,146(r3)
	PPC_STORE_U8(ctx.r3.u32 + 146, ctx.r11.u8);
	// lbz r4,176(r3)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r3.u32 + 176);
	// lwz r3,108(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 108);
	// bl 0x82d1c008
	ctx.lr = 0x82BCF38C;
	sub_82D1C008(ctx, base);
	// lbz r4,177(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 177);
	// lwz r3,112(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// bl 0x82d1c008
	ctx.lr = 0x82BCF398;
	sub_82D1C008(ctx, base);
	// lwz r3,108(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// bl 0x82b37dd8
	ctx.lr = 0x82BCF3A0;
	sub_82B37DD8(ctx, base);
	// lwz r3,112(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// bl 0x82b37dd8
	ctx.lr = 0x82BCF3A8;
	sub_82B37DD8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c43160
	ctx.lr = 0x82BCF3B0;
	sub_82C43160(ctx, base);
	// stb r28,168(r31)
	PPC_STORE_U8(ctx.r31.u32 + 168, ctx.r28.u8);
	// bl 0x82d26640
	ctx.lr = 0x82BCF3B8;
	sub_82D26640(ctx, base);
	// bl 0x82d25ab8
	ctx.lr = 0x82BCF3BC;
	sub_82D25AB8(ctx, base);
loc_82BCF3BC:
	// lwz r11,156(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82bcf42c
	if (cr6.eq) goto loc_82BCF42C;
	// lis r11,266
	ctx.r11.s64 = 17432576;
	// ori r10,r11,2
	ctx.r10.u64 = ctx.r11.u64 | 2;
	// cmplw cr6,r27,r10
	cr6.compare<uint32_t>(ctx.r27.u32, ctx.r10.u32, xer);
	// bne cr6,0x82bcf42c
	if (!cr6.eq) goto loc_82BCF42C;
	// stw r29,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r29.u32);
	// lwz r11,15392(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 15392);
	// lbz r11,5(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5);
	// stb r11,146(r31)
	PPC_STORE_U8(ctx.r31.u32 + 146, ctx.r11.u8);
	// lwz r11,15392(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 15392);
	// stb r29,7(r11)
	PPC_STORE_U8(ctx.r11.u32 + 7, ctx.r29.u8);
	// lbz r4,176(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 176);
	// lwz r3,108(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// bl 0x82d1c008
	ctx.lr = 0x82BCF3FC;
	sub_82D1C008(ctx, base);
	// lbz r4,177(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 177);
	// lwz r3,112(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// bl 0x82d1c008
	ctx.lr = 0x82BCF408;
	sub_82D1C008(ctx, base);
	// lwz r3,108(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// bl 0x82b37dd8
	ctx.lr = 0x82BCF410;
	sub_82B37DD8(ctx, base);
	// lwz r3,112(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// bl 0x82b37dd8
	ctx.lr = 0x82BCF418;
	sub_82B37DD8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c43160
	ctx.lr = 0x82BCF420;
	sub_82C43160(ctx, base);
	// stb r28,168(r31)
	PPC_STORE_U8(ctx.r31.u32 + 168, ctx.r28.u8);
	// bl 0x82d26640
	ctx.lr = 0x82BCF428;
	sub_82D26640(ctx, base);
	// bl 0x82d25ab8
	ctx.lr = 0x82BCF42C;
	sub_82D25AB8(ctx, base);
loc_82BCF42C:
	// lwz r11,164(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82bcf484
	if (cr6.eq) goto loc_82BCF484;
	// lis r11,266
	ctx.r11.s64 = 17432576;
	// ori r10,r11,3
	ctx.r10.u64 = ctx.r11.u64 | 3;
	// cmplw cr6,r27,r10
	cr6.compare<uint32_t>(ctx.r27.u32, ctx.r10.u32, xer);
	// bne cr6,0x82bcf484
	if (!cr6.eq) goto loc_82BCF484;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,172(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// bl 0x82d199b0
	ctx.lr = 0x82BCF454;
	sub_82D199B0(ctx, base);
	// stw r29,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r29.u32);
	// lbz r4,176(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 176);
	// lwz r3,108(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// bl 0x82d1c008
	ctx.lr = 0x82BCF464;
	sub_82D1C008(ctx, base);
	// lbz r4,177(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 177);
	// lwz r3,112(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// bl 0x82d1c008
	ctx.lr = 0x82BCF470;
	sub_82D1C008(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c43160
	ctx.lr = 0x82BCF478;
	sub_82C43160(ctx, base);
	// stb r29,147(r31)
	PPC_STORE_U8(ctx.r31.u32 + 147, ctx.r29.u8);
	// bl 0x82d26640
	ctx.lr = 0x82BCF480;
	sub_82D26640(ctx, base);
	// bl 0x82d25ab8
	ctx.lr = 0x82BCF484;
	sub_82D25AB8(ctx, base);
loc_82BCF484:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BCF490"))) PPC_WEAK_FUNC(sub_82BCF490);
PPC_FUNC_IMPL(__imp__sub_82BCF490) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x82BCF498;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82c42948
	ctx.lr = 0x82BCF4A8;
	sub_82C42948(ctx, base);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lis r9,-32239
	ctx.r9.s64 = -2112815104;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r8,r10,-21000
	ctx.r8.s64 = ctx.r10.s64 + -21000;
	// stb r30,147(r31)
	PPC_STORE_U8(ctx.r31.u32 + 147, ctx.r30.u8);
	// addi r7,r9,-17088
	ctx.r7.s64 = ctx.r9.s64 + -17088;
	// stb r11,144(r31)
	PPC_STORE_U8(ctx.r31.u32 + 144, ctx.r11.u8);
	// li r6,-1
	ctx.r6.s64 = -1;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// li r5,2
	ctx.r5.s64 = 2;
	// stw r7,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r7.u32);
	// stw r6,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r6.u32);
	// stw r30,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r30.u32);
	// stw r30,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r30.u32);
	// stw r30,160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 160, ctx.r30.u32);
	// stw r30,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r30.u32);
	// stb r11,168(r31)
	PPC_STORE_U8(ctx.r31.u32 + 168, ctx.r11.u8);
	// stw r5,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r5.u32);
	// stb r11,105(r31)
	PPC_STORE_U8(ctx.r31.u32 + 105, ctx.r11.u8);
	// stb r30,146(r31)
	PPC_STORE_U8(ctx.r31.u32 + 146, ctx.r30.u8);
	// stb r30,145(r31)
	PPC_STORE_U8(ctx.r31.u32 + 145, ctx.r30.u8);
	// bl 0x8310cc00
	ctx.lr = 0x82BCF504;
	sub_8310CC00(ctx, base);
	// lwz r4,32(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x82bcf514
	if (!cr6.eq) goto loc_82BCF514;
	// stb r30,144(r31)
	PPC_STORE_U8(ctx.r31.u32 + 144, ctx.r30.u8);
loc_82BCF514:
	// lbz r11,144(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 144);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x82bcf690
	if (!cr6.eq) goto loc_82BCF690;
	// bl 0x830ff290
	ctx.lr = 0x82BCF524;
	sub_830FF290(ctx, base);
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmplwi cr6,r11,8
	cr6.compare<uint32_t>(ctx.r11.u32, 8, xer);
	// beq cr6,0x82bcf560
	if (cr6.eq) goto loc_82BCF560;
	// cmplwi cr6,r11,9
	cr6.compare<uint32_t>(ctx.r11.u32, 9, xer);
	// beq cr6,0x82bcf560
	if (cr6.eq) goto loc_82BCF560;
	// cmplwi cr6,r11,21
	cr6.compare<uint32_t>(ctx.r11.u32, 21, xer);
	// beq cr6,0x82bcf560
	if (cr6.eq) goto loc_82BCF560;
	// cmplwi cr6,r11,22
	cr6.compare<uint32_t>(ctx.r11.u32, 22, xer);
	// beq cr6,0x82bcf560
	if (cr6.eq) goto loc_82BCF560;
	// cmplwi cr6,r11,24
	cr6.compare<uint32_t>(ctx.r11.u32, 24, xer);
	// beq cr6,0x82bcf560
	if (cr6.eq) goto loc_82BCF560;
	// cmplwi cr6,r11,25
	cr6.compare<uint32_t>(ctx.r11.u32, 25, xer);
	// beq cr6,0x82bcf560
	if (cr6.eq) goto loc_82BCF560;
	// cmplwi cr6,r11,11
	cr6.compare<uint32_t>(ctx.r11.u32, 11, xer);
	// bne cr6,0x82bcf690
	if (!cr6.eq) goto loc_82BCF690;
loc_82BCF560:
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// lis r26,108
	ctx.r26.s64 = 7077888;
	// lwz r11,15392(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15392);
	// lbz r10,5(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5);
	// clrlwi r9,r10,24
	ctx.r9.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r9,1
	cr6.compare<uint32_t>(ctx.r9.u32, 1, xer);
	// stb r10,146(r31)
	PPC_STORE_U8(ctx.r31.u32 + 146, ctx.r10.u8);
	// stb r10,145(r31)
	PPC_STORE_U8(ctx.r31.u32 + 145, ctx.r10.u8);
	// bne cr6,0x82bcf58c
	if (!cr6.eq) goto loc_82BCF58C;
	// ori r26,r26,325
	ctx.r26.u64 = ctx.r26.u64 | 325;
	// b 0x82bcf590
	goto loc_82BCF590;
loc_82BCF58C:
	// ori r26,r26,324
	ctx.r26.u64 = ctx.r26.u64 | 324;
loc_82BCF590:
	// addi r27,r31,108
	ctx.r27.s64 = ctx.r31.s64 + 108;
	// li r28,2
	ctx.r28.s64 = 2;
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
loc_82BCF59C:
	// lwz r30,0(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x82bcf5dc
	if (cr6.eq) goto loc_82BCF5DC;
	// lbz r11,104(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 104);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// beq cr6,0x82bcf5cc
	if (cr6.eq) goto loc_82BCF5CC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d19638
	ctx.lr = 0x82BCF5BC;
	sub_82D19638(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// bl 0x8308e078
	ctx.lr = 0x82BCF5C4;
	sub_8308E078(ctx, base);
	// cmplw cr6,r3,r25
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r25.u32, xer);
	// bne cr6,0x82bcf5dc
	if (!cr6.eq) goto loc_82BCF5DC;
loc_82BCF5CC:
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82b34d30
	ctx.lr = 0x82BCF5DC;
	sub_82B34D30(ctx, base);
loc_82BCF5DC:
	// addic. r28,r28,-1
	xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	cr0.compare<int32_t>(ctx.r28.s32, 0, xer);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// bne 0x82bcf59c
	if (!cr0.eq) goto loc_82BCF59C;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,11
	ctx.r4.s64 = 11;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19788
	ctx.lr = 0x82BCF5F8;
	sub_82D19788(ctx, base);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// li r4,11
	ctx.r4.s64 = 11;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d20eb8
	ctx.lr = 0x82BCF608;
	sub_82D20EB8(ctx, base);
	// lbz r11,146(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 146);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x82bcf690
	if (!cr6.eq) goto loc_82BCF690;
	// lis r11,108
	ctx.r11.s64 = 7077888;
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
	// li r28,2
	ctx.r28.s64 = 2;
	// ori r27,r11,328
	ctx.r27.u64 = ctx.r11.u64 | 328;
loc_82BCF624:
	// lwz r30,0(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x82bcf664
	if (cr6.eq) goto loc_82BCF664;
	// lbz r11,104(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 104);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// beq cr6,0x82bcf654
	if (cr6.eq) goto loc_82BCF654;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d19638
	ctx.lr = 0x82BCF644;
	sub_82D19638(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// bl 0x8308e078
	ctx.lr = 0x82BCF64C;
	sub_8308E078(ctx, base);
	// cmplw cr6,r3,r26
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r26.u32, xer);
	// bne cr6,0x82bcf664
	if (!cr6.eq) goto loc_82BCF664;
loc_82BCF654:
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82b34c80
	ctx.lr = 0x82BCF664;
	sub_82B34C80(ctx, base);
loc_82BCF664:
	// addic. r28,r28,-1
	xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	cr0.compare<int32_t>(ctx.r28.s32, 0, xer);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// bne 0x82bcf624
	if (!cr0.eq) goto loc_82BCF624;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19788
	ctx.lr = 0x82BCF680;
	sub_82D19788(ctx, base);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d20eb8
	ctx.lr = 0x82BCF690;
	sub_82D20EB8(ctx, base);
loc_82BCF690:
	// lwz r3,108(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// bl 0x82d19a00
	ctx.lr = 0x82BCF698;
	sub_82D19A00(ctx, base);
	// stb r3,176(r31)
	PPC_STORE_U8(ctx.r31.u32 + 176, ctx.r3.u8);
	// lwz r3,112(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// bl 0x82d19a00
	ctx.lr = 0x82BCF6A4;
	sub_82D19A00(ctx, base);
	// stb r3,177(r31)
	PPC_STORE_U8(ctx.r31.u32 + 177, ctx.r3.u8);
	// bl 0x831156e8
	ctx.lr = 0x82BCF6AC;
	sub_831156E8(ctx, base);
	// lwz r3,48(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// bl 0x82b65698
	ctx.lr = 0x82BCF6B4;
	sub_82B65698(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BCF6C0"))) PPC_WEAK_FUNC(sub_82BCF6C0);
PPC_FUNC_IMPL(__imp__sub_82BCF6C0) {
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
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-21000
	ctx.r9.s64 = ctx.r11.s64 + -21000;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r8,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r8.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82c42d70
	ctx.lr = 0x82BCF6F8;
	sub_82C42D70(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82bcf710
	if (cr6.eq) goto loc_82BCF710;
	// bl 0x82416268
	ctx.lr = 0x82BCF70C;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82BCF710:
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

__attribute__((alias("__imp__sub_82BCF728"))) PPC_WEAK_FUNC(sub_82BCF728);
PPC_FUNC_IMPL(__imp__sub_82BCF728) {
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
	// lbz r11,104(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 104);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82bcf754
	if (cr6.eq) goto loc_82BCF754;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82c42f20
	ctx.lr = 0x82BCF754;
	sub_82C42F20(ctx, base);
loc_82BCF754:
	// bl 0x82d26ed8
	ctx.lr = 0x82BCF758;
	sub_82D26ED8(ctx, base);
	// lbz r11,101(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 101);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82bcf80c
	if (!cr6.eq) goto loc_82BCF80C;
	// li r31,0
	ctx.r31.s64 = 0;
	// bl 0x830ff290
	ctx.lr = 0x82BCF76C;
	sub_830FF290(ctx, base);
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// addi r11,r11,-21
	ctx.r11.s64 = ctx.r11.s64 + -21;
	// cmplwi cr6,r11,17
	cr6.compare<uint32_t>(ctx.r11.u32, 17, xer);
	// bgt cr6,0x82bcf800
	if (cr6.gt) goto loc_82BCF800;
	// lis r12,-32067
	ctx.r12.s64 = -2101542912;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-2156
	ctx.r12.s64 = ctx.r12.s64 + -2156;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_82BCF7DC;
	case 1:
		goto loc_82BCF7E4;
	case 2:
		goto loc_82BCF800;
	case 3:
		goto loc_82BCF7DC;
	case 4:
		goto loc_82BCF7E4;
	case 5:
		goto loc_82BCF800;
	case 6:
		goto loc_82BCF800;
	case 7:
		goto loc_82BCF800;
	case 8:
		goto loc_82BCF800;
	case 9:
		goto loc_82BCF800;
	case 10:
		goto loc_82BCF7F4;
	case 11:
		goto loc_82BCF7F4;
	case 12:
		goto loc_82BCF7F4;
	case 13:
		goto loc_82BCF7FC;
	case 14:
		goto loc_82BCF7FC;
	case 15:
		goto loc_82BCF800;
	case 16:
		goto loc_82BCF7EC;
	case 17:
		goto loc_82BCF7EC;
	default:
		return;
	}
	// lwz r21,-2084(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -2084);
	// lwz r21,-2076(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -2076);
	// lwz r21,-2048(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -2048);
	// lwz r21,-2084(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -2084);
	// lwz r21,-2076(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -2076);
	// lwz r21,-2048(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -2048);
	// lwz r21,-2048(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -2048);
	// lwz r21,-2048(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -2048);
	// lwz r21,-2048(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -2048);
	// lwz r21,-2048(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -2048);
	// lwz r21,-2060(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -2060);
	// lwz r21,-2060(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -2060);
	// lwz r21,-2060(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -2060);
	// lwz r21,-2052(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -2052);
	// lwz r21,-2052(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -2052);
	// lwz r21,-2048(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -2048);
	// lwz r21,-2068(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -2068);
	// lwz r21,-2068(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -2068);
loc_82BCF7DC:
	// li r31,2
	ctx.r31.s64 = 2;
	// b 0x82bcf800
	goto loc_82BCF800;
loc_82BCF7E4:
	// li r31,3
	ctx.r31.s64 = 3;
	// b 0x82bcf800
	goto loc_82BCF800;
loc_82BCF7EC:
	// li r31,8
	ctx.r31.s64 = 8;
	// b 0x82bcf800
	goto loc_82BCF800;
loc_82BCF7F4:
	// li r31,0
	ctx.r31.s64 = 0;
	// b 0x82bcf800
	goto loc_82BCF800;
loc_82BCF7FC:
	// li r31,6
	ctx.r31.s64 = 6;
loc_82BCF800:
	// bl 0x82d26ed8
	ctx.lr = 0x82BCF804;
	sub_82D26ED8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82d26900
	ctx.lr = 0x82BCF80C;
	sub_82D26900(ctx, base);
loc_82BCF80C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82bcee38
	ctx.lr = 0x82BCF814;
	sub_82BCEE38(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
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

__attribute__((alias("__imp__sub_82BCF830"))) PPC_WEAK_FUNC(sub_82BCF830);
PPC_FUNC_IMPL(__imp__sub_82BCF830) {
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
	// li r11,27
	ctx.r11.s64 = 27;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,184
	ctx.r4.s64 = 184;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82BCF864;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bcf894
	if (cr6.eq) goto loc_82BCF894;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82bcf880
	if (cr6.lt) goto loc_82BCF880;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// b 0x82bcf884
	goto loc_82BCF884;
loc_82BCF880:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
loc_82BCF884:
	// lbz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// bl 0x82bcf490
	ctx.lr = 0x82BCF88C;
	sub_82BCF490(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82bcf898
	if (!cr6.eq) goto loc_82BCF898;
loc_82BCF894:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82BCF898:
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

__attribute__((alias("__imp__sub_82BCF8B0"))) PPC_WEAK_FUNC(sub_82BCF8B0);
PPC_FUNC_IMPL(__imp__sub_82BCF8B0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x82BCF8B8;
	__savegprlr_24(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,137(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 137);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82bcf9d4
	if (cr6.eq) goto loc_82BCF9D4;
	// bl 0x82c431d0
	ctx.lr = 0x82BCF8D0;
	sub_82C431D0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x82bcfbb0
	if (!cr6.eq) goto loc_82BCFBB0;
	// lbz r11,147(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 147);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x82bcf950
	if (!cr6.eq) goto loc_82BCF950;
	// lwz r11,164(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 164);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82bcfbb0
	if (!cr6.eq) goto loc_82BCFBB0;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r11,r10,-21100
	ctx.r11.s64 = ctx.r10.s64 + -21100;
	// addi r4,r11,-120
	ctx.r4.s64 = ctx.r11.s64 + -120;
	// bl 0x837b0c10
	ctx.lr = 0x82BCF90C;
	sub_837B0C10(ctx, base);
	// lwz r9,148(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 148);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// clrlwi r3,r9,14
	ctx.r3.u64 = ctx.r9.u32 & 0x3FFFF;
	// bl 0x839024f0
	ctx.lr = 0x82BCF920;
	sub_839024F0(ctx, base);
	// stw r3,164(r29)
	PPC_STORE_U32(ctx.r29.u32 + 164, ctx.r3.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8387e8e0
	ctx.lr = 0x82BCF92C;
	sub_8387E8E0(ctx, base);
	// lwz r4,152(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 152);
	// lwz r3,164(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 164);
	// bl 0x82d195d8
	ctx.lr = 0x82BCF938;
	sub_82D195D8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,164(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 164);
	// bl 0x83103100
	ctx.lr = 0x82BCF944;
	sub_83103100(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_82BCF950:
	// lbz r11,146(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 146);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82bcf998
	if (!cr6.eq) goto loc_82BCF998;
	// lwz r11,160(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 160);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82bcfbb0
	if (!cr6.eq) goto loc_82BCFBB0;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r11,r11,-21100
	ctx.r11.s64 = ctx.r11.s64 + -21100;
	// addi r3,r11,-100
	ctx.r3.s64 = ctx.r11.s64 + -100;
	// bl 0x82cd4d50
	ctx.lr = 0x82BCF978;
	sub_82CD4D50(ctx, base);
	// stw r3,160(r29)
	PPC_STORE_U32(ctx.r29.u32 + 160, ctx.r3.u32);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83103100
	ctx.lr = 0x82BCF98C;
	sub_83103100(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_82BCF998:
	// lwz r11,156(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 156);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82bcfbb0
	if (!cr6.eq) goto loc_82BCFBB0;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r11,r11,-21100
	ctx.r11.s64 = ctx.r11.s64 + -21100;
	// addi r3,r11,-80
	ctx.r3.s64 = ctx.r11.s64 + -80;
	// bl 0x83900740
	ctx.lr = 0x82BCF9B4;
	sub_83900740(ctx, base);
	// stw r3,156(r29)
	PPC_STORE_U32(ctx.r29.u32 + 156, ctx.r3.u32);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83103100
	ctx.lr = 0x82BCF9C8;
	sub_83103100(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_82BCF9D4:
	// lbz r11,96(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 96);
	// cmplwi cr6,r11,6
	cr6.compare<uint32_t>(ctx.r11.u32, 6, xer);
	// bne cr6,0x82bcfb34
	if (!cr6.eq) goto loc_82BCFB34;
	// bl 0x831156e8
	ctx.lr = 0x82BCF9E4;
	sub_831156E8(ctx, base);
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// addis r25,r11,1
	ctx.r25.s64 = ctx.r11.s64 + 65536;
	// addi r25,r25,24160
	ctx.r25.s64 = ctx.r25.s64 + 24160;
	// bl 0x8314ee28
	ctx.lr = 0x82BCF9F4;
	sub_8314EE28(ctx, base);
	// li r24,0
	ctx.r24.s64 = 0;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// stb r24,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r24.u8);
	// stb r24,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r24.u8);
	// mr r31,r24
	ctx.r31.u64 = ctx.r24.u64;
	// li r28,1
	ctx.r28.s64 = 1;
	// lis r26,-31777
	ctx.r26.s64 = -2082537472;
	// ori r30,r11,19020
	ctx.r30.u64 = ctx.r11.u64 | 19020;
loc_82BCFA18:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82c42df8
	ctx.lr = 0x82BCFA28;
	sub_82C42DF8(ctx, base);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,25644(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 25644);
	// clrlwi r3,r10,14
	ctx.r3.u64 = ctx.r10.u32 & 0x3FFFF;
	// xor r9,r11,r3
	ctx.r9.u64 = ctx.r11.u64 ^ ctx.r3.u64;
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// rlwinm r8,r9,0,0,13
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFC0000;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x82bcfa5c
	if (!cr6.eq) goto loc_82BCFA5C;
	// xor r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r3.u64;
	// clrlwi r10,r11,14
	ctx.r10.u64 = ctx.r11.u32 & 0x3FFFF;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82bcfa60
	if (cr6.eq) goto loc_82BCFA60;
loc_82BCFA5C:
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
loc_82BCFA60:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82bcfa8c
	if (cr6.eq) goto loc_82BCFA8C;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// stbx r28,r31,r11
	PPC_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r28.u8);
	// bl 0x82f00728
	ctx.lr = 0x82BCFA78;
	sub_82F00728(ctx, base);
	// cmplwi cr6,r31,2
	cr6.compare<uint32_t>(ctx.r31.u32, 2, xer);
	// bge cr6,0x82bcfacc
	if (!cr6.lt) goto loc_82BCFACC;
	// add r11,r3,r31
	ctx.r11.u64 = ctx.r3.u64 + ctx.r31.u64;
	// stbx r28,r11,r30
	PPC_STORE_U8(ctx.r11.u32 + ctx.r30.u32, ctx.r28.u8);
	// b 0x82bcfacc
	goto loc_82BCFACC;
loc_82BCFA8C:
	// li r5,0
	ctx.r5.s64 = 0;
	// clrlwi r4,r31,24
	ctx.r4.u64 = ctx.r31.u32 & 0xFF;
	// bl 0x83156d28
	ctx.lr = 0x82BCFA98;
	sub_83156D28(ctx, base);
	// bl 0x82f00728
	ctx.lr = 0x82BCFA9C;
	sub_82F00728(ctx, base);
	// cmplwi cr6,r31,2
	cr6.compare<uint32_t>(ctx.r31.u32, 2, xer);
	// bge cr6,0x82bcfaac
	if (!cr6.lt) goto loc_82BCFAAC;
	// add r11,r3,r31
	ctx.r11.u64 = ctx.r3.u64 + ctx.r31.u64;
	// stbx r24,r11,r30
	PPC_STORE_U8(ctx.r11.u32 + ctx.r30.u32, ctx.r24.u8);
loc_82BCFAAC:
	// cmpwi cr6,r27,10
	cr6.compare<int32_t>(ctx.r27.s32, 10, xer);
	// bge cr6,0x82bcfacc
	if (!cr6.lt) goto loc_82BCFACC;
	// rlwinm r11,r27,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r9,r11,3
	ctx.r9.s64 = ctx.r11.s64 + 3;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r10,r11,r25
	PPC_STORE_U32(ctx.r11.u32 + ctx.r25.u32, ctx.r10.u32);
loc_82BCFACC:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplwi cr6,r31,2
	cr6.compare<uint32_t>(ctx.r31.u32, 2, xer);
	// blt cr6,0x82bcfa18
	if (cr6.lt) goto loc_82BCFA18;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lbz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// addi r11,r11,-21100
	ctx.r11.s64 = ctx.r11.s64 + -21100;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// addi r5,r11,-60
	ctx.r5.s64 = ctx.r11.s64 + -60;
	// beq cr6,0x82bcfb0c
	if (cr6.eq) goto loc_82BCFB0C;
	// addi r5,r11,-52
	ctx.r5.s64 = ctx.r11.s64 + -52;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d20da8
	ctx.lr = 0x82BCFB00;
	sub_82D20DA8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_82BCFB0C:
	// lbz r9,81(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82bcfb1c
	if (cr6.eq) goto loc_82BCFB1C;
	// addi r5,r11,-36
	ctx.r5.s64 = ctx.r11.s64 + -36;
loc_82BCFB1C:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d20da8
	ctx.lr = 0x82BCFB28;
	sub_82D20DA8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_82BCFB34:
	// cmplwi cr6,r11,7
	cr6.compare<uint32_t>(ctx.r11.u32, 7, xer);
	// bne cr6,0x82bcfba8
	if (!cr6.eq) goto loc_82BCFBA8;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r31,r11,-21100
	ctx.r31.s64 = ctx.r11.s64 + -21100;
	// addi r30,r31,-20
	ctx.r30.s64 = ctx.r31.s64 + -20;
	// bl 0x830ff290
	ctx.lr = 0x82BCFB4C;
	sub_830FF290(ctx, base);
	// bl 0x830ffaa8
	ctx.lr = 0x82BCFB50;
	sub_830FFAA8(ctx, base);
	// cmplwi cr6,r3,7
	cr6.compare<uint32_t>(ctx.r3.u32, 7, xer);
	// bne cr6,0x82bcfb78
	if (!cr6.eq) goto loc_82BCFB78;
	// addi r30,r31,-12
	ctx.r30.s64 = ctx.r31.s64 + -12;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d20da8
	ctx.lr = 0x82BCFB6C;
	sub_82D20DA8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_82BCFB78:
	// bl 0x830ff290
	ctx.lr = 0x82BCFB7C;
	sub_830FF290(ctx, base);
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmplwi cr6,r11,11
	cr6.compare<uint32_t>(ctx.r11.u32, 11, xer);
	// bne cr6,0x82bcfb8c
	if (!cr6.eq) goto loc_82BCFB8C;
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
loc_82BCFB8C:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d20da8
	ctx.lr = 0x82BCFB9C;
	sub_82D20DA8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_82BCFBA8:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82bcee38
	ctx.lr = 0x82BCFBB0;
	sub_82BCEE38(ctx, base);
loc_82BCFBB0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BCFBBC"))) PPC_WEAK_FUNC(sub_82BCFBBC);
PPC_FUNC_IMPL(__imp__sub_82BCFBBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BCFBC0"))) PPC_WEAK_FUNC(sub_82BCFBC0);
PPC_FUNC_IMPL(__imp__sub_82BCFBC0) {
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
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82b39a60
	ctx.lr = 0x82BCFBE0;
	sub_82B39A60(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
	// bl 0x8314ee28
	ctx.lr = 0x82BCFBE8;
	sub_8314EE28(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82bcfbf4
	if (!cr6.eq) goto loc_82BCFBF4;
	// li r31,1
	ctx.r31.s64 = 1;
loc_82BCFBF4:
	// bl 0x830ff290
	ctx.lr = 0x82BCFBF8;
	sub_830FF290(ctx, base);
	// bl 0x830ffaa8
	ctx.lr = 0x82BCFBFC;
	sub_830FFAA8(ctx, base);
	// cmplwi cr6,r3,14
	cr6.compare<uint32_t>(ctx.r3.u32, 14, xer);
	// bne cr6,0x82bcfc08
	if (!cr6.eq) goto loc_82BCFC08;
	// li r31,1
	ctx.r31.s64 = 1;
loc_82BCFC08:
	// clrlwi r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82bcfca8
	if (cr6.eq) goto loc_82BCFCA8;
	// lis r11,-31777
	ctx.r11.s64 = -2082537472;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// lwz r4,25644(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25644);
	// bl 0x82b371e0
	ctx.lr = 0x82BCFC24;
	sub_82B371E0(ctx, base);
	// lis r4,108
	ctx.r4.s64 = 7077888;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// ori r4,r4,195
	ctx.r4.u64 = ctx.r4.u64 | 195;
	// bl 0x82d04220
	ctx.lr = 0x82BCFC34;
	sub_82D04220(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,256
	ctx.r4.s64 = 256;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82a85ba0
	ctx.lr = 0x82BCFC44;
	sub_82A85BA0(ctx, base);
	// lis r4,108
	ctx.r4.s64 = 7077888;
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// ori r4,r4,195
	ctx.r4.u64 = ctx.r4.u64 | 195;
	// bl 0x82d04220
	ctx.lr = 0x82BCFC54;
	sub_82D04220(ctx, base);
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82b388d0
	ctx.lr = 0x82BCFC60;
	sub_82B388D0(ctx, base);
	// lis r10,-31754
	ctx.r10.s64 = -2081030144;
	// lwz r31,21944(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 21944);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x82bcfc8c
	if (cr6.eq) goto loc_82BCFC8C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d19638
	ctx.lr = 0x82BCFC78;
	sub_82D19638(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,12
	ctx.r5.s64 = 12;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83089b80
	ctx.lr = 0x82BCFC88;
	sub_83089B80(ctx, base);
	// stb r3,156(r1)
	PPC_STORE_U8(ctx.r1.u32 + 156, ctx.r3.u8);
loc_82BCFC8C:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82b399d0
	ctx.lr = 0x82BCFC98;
	sub_82B399D0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82a85ae8
	ctx.lr = 0x82BCFCA0;
	sub_82A85AE8(ctx, base);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x8378e240
	ctx.lr = 0x82BCFCA8;
	sub_8378E240(ctx, base);
loc_82BCFCA8:
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
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

__attribute__((alias("__imp__sub_82BCFCC0"))) PPC_WEAK_FUNC(sub_82BCFCC0);
PPC_FUNC_IMPL(__imp__sub_82BCFCC0) {
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
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-20224
	ctx.r9.s64 = ctx.r11.s64 + -20224;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r8,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r8.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82d25548
	ctx.lr = 0x82BCFCF8;
	sub_82D25548(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82bcfd10
	if (cr6.eq) goto loc_82BCFD10;
	// bl 0x82416268
	ctx.lr = 0x82BCFD0C;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82BCFD10:
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

__attribute__((alias("__imp__sub_82BCFD28"))) PPC_WEAK_FUNC(sub_82BCFD28);
PPC_FUNC_IMPL(__imp__sub_82BCFD28) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82BCFD30;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,20(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82bcfd50
	if (cr6.lt) goto loc_82BCFD50;
	// lwz r30,0(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// b 0x82bcfd54
	goto loc_82BCFD54;
loc_82BCFD50:
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
loc_82BCFD54:
	// bl 0x8308e078
	ctx.lr = 0x82BCFD58;
	sub_8308E078(ctx, base);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d253f8
	ctx.lr = 0x82BCFD70;
	sub_82D253F8(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-20224
	ctx.r9.s64 = ctx.r11.s64 + -20224;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// li r7,1
	ctx.r7.s64 = 1;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r8,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r8.u32);
	// lis r6,-32242
	ctx.r6.s64 = -2113011712;
	// stb r7,96(r31)
	PPC_STORE_U8(ctx.r31.u32 + 96, ctx.r7.u8);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r5,r6,-20316
	ctx.r5.s64 = ctx.r6.s64 + -20316;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d20da8
	ctx.lr = 0x82BCFDA4;
	sub_82D20DA8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BCFDB0"))) PPC_WEAK_FUNC(sub_82BCFDB0);
PPC_FUNC_IMPL(__imp__sub_82BCFDB0) {
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
	// li r11,27
	ctx.r11.s64 = 27;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,100
	ctx.r4.s64 = 100;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82BCFDE4;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bcfdfc
	if (cr6.eq) goto loc_82BCFDFC;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lbz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// bl 0x82bcfd28
	ctx.lr = 0x82BCFDF8;
	sub_82BCFD28(ctx, base);
	// b 0x82bcfe00
	goto loc_82BCFE00;
loc_82BCFDFC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82BCFE00:
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

__attribute__((alias("__imp__sub_82BCFE18"))) PPC_WEAK_FUNC(sub_82BCFE18);
PPC_FUNC_IMPL(__imp__sub_82BCFE18) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82BCFE20;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82BCFE2C;
	sub_82D19A78(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82bcfe44
	if (!cr6.eq) goto loc_82BCFE44;
loc_82BCFE38:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_82BCFE44:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,9
	ctx.r4.s64 = 9;
	// addi r3,r31,100
	ctx.r3.s64 = ctx.r31.s64 + 100;
	// bl 0x82d2d510
	ctx.lr = 0x82BCFE54;
	sub_82D2D510(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bcfe38
	if (cr6.eq) goto loc_82BCFE38;
	// lis r4,504
	ctx.r4.s64 = 33030144;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,36
	ctx.r4.u64 = ctx.r4.u64 | 36;
	// bl 0x82d30340
	ctx.lr = 0x82BCFE6C;
	sub_82D30340(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d1ed60
	ctx.lr = 0x82BCFE7C;
	sub_82D1ED60(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d33db0
	ctx.lr = 0x82BCFE88;
	sub_82D33DB0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bcfe38
	if (cr6.eq) goto loc_82BCFE38;
	// li r27,0
	ctx.r27.s64 = 0;
	// bl 0x82e6f960
	ctx.lr = 0x82BCFE9C;
	sub_82E6F960(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bcfeb0
	if (cr6.eq) goto loc_82BCFEB0;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82e6fa08
	ctx.lr = 0x82BCFEAC;
	sub_82E6FA08(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
loc_82BCFEB0:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r11,r11,-19560
	ctx.r11.s64 = ctx.r11.s64 + -19560;
	// li r29,4
	ctx.r29.s64 = 4;
	// addi r30,r11,8
	ctx.r30.s64 = ctx.r11.s64 + 8;
loc_82BCFEC4:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d33db0
	ctx.lr = 0x82BCFED0;
	sub_82D33DB0(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// li r4,18
	ctx.r4.s64 = 18;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82d2d510
	ctx.lr = 0x82BCFEE0;
	sub_82D2D510(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bcfef0
	if (cr6.eq) goto loc_82BCFEF0;
	// lwz r4,-8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + -8);
	// bl 0x82d29598
	ctx.lr = 0x82BCFEF0;
	sub_82D29598(ctx, base);
loc_82BCFEF0:
	// lbz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// beq cr6,0x82bcff24
	if (cr6.eq) goto loc_82BCFF24;
	// clrlwi r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82bcff24
	if (!cr6.eq) goto loc_82BCFF24;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d33db0
	ctx.lr = 0x82BCFF14;
	sub_82D33DB0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r6,2
	ctx.r6.s64 = 2;
	// bl 0x82d2b608
	ctx.lr = 0x82BCFF24;
	sub_82D2B608(ctx, base);
loc_82BCFF24:
	// addic. r29,r29,-1
	xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,12
	ctx.r30.s64 = ctx.r30.s64 + 12;
	// bne 0x82bcfec4
	if (!cr0.eq) goto loc_82BCFEC4;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BCFF40"))) PPC_WEAK_FUNC(sub_82BCFF40);
PPC_FUNC_IMPL(__imp__sub_82BCFF40) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82BCFF48;
	__savegprlr_28(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x82d19bb0
	ctx.lr = 0x82BCFF54;
	sub_82D19BB0(ctx, base);
	// cmplwi cr6,r3,4
	cr6.compare<uint32_t>(ctx.r3.u32, 4, xer);
	// bge cr6,0x82bd00b8
	if (!cr6.lt) goto loc_82BD00B8;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// rlwinm r11,r3,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r31,r10,-19886
	ctx.r31.s64 = ctx.r10.s64 + -19886;
	// add r10,r3,r11
	ctx.r10.u64 = ctx.r3.u64 + ctx.r11.u64;
	// addi r11,r31,326
	ctx.r11.s64 = ctx.r31.s64 + 326;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r11,4
	ctx.r8.s64 = ctx.r11.s64 + 4;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwzx r4,r9,r8
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// bl 0x837b0c10
	ctx.lr = 0x82BCFF84;
	sub_837B0C10(ctx, base);
	// li r29,2
	ctx.r29.s64 = 2;
	// lwz r5,112(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// addi r6,r31,374
	ctx.r6.s64 = ctx.r31.s64 + 374;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// li r7,12
	ctx.r7.s64 = 12;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x827a8810
	ctx.lr = 0x82BCFFA4;
	sub_827A8810(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82bcffdc
	if (!cr6.eq) goto loc_82BCFFDC;
	// li r11,30
	ctx.r11.s64 = 30;
	// stb r30,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r30.u8);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82da4090
	ctx.lr = 0x82BCFFC8;
	sub_82DA4090(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82bcffdc
	if (!cr6.eq) goto loc_82BCFFDC;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// b 0x82bd0038
	goto loc_82BD0038;
loc_82BCFFDC:
	// addi r6,r31,390
	ctx.r6.s64 = ctx.r31.s64 + 390;
	// lwz r5,112(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// li r7,7
	ctx.r7.s64 = 7;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x827a8810
	ctx.lr = 0x82BCFFF4;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82bd002c
	if (!cr6.eq) goto loc_82BD002C;
	// li r11,6
	ctx.r11.s64 = 6;
	// stb r30,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r30.u8);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82da4040
	ctx.lr = 0x82BD0014;
	sub_82DA4040(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82bd002c
	if (!cr6.eq) goto loc_82BD002C;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// b 0x82bd0038
	goto loc_82BD0038;
loc_82BD002C:
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// beq cr6,0x82bd0074
	if (cr6.eq) goto loc_82BD0074;
loc_82BD0038:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x837b0c10
	ctx.lr = 0x82BD0044;
	sub_837B0C10(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82dd3c60
	ctx.lr = 0x82BD0050;
	sub_82DD3C60(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8387e8e0
	ctx.lr = 0x82BD005C;
	sub_8387E8E0(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x82bd009c
	if (cr6.eq) goto loc_82BD009C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83103100
	ctx.lr = 0x82BD0070;
	sub_83103100(ctx, base);
	// b 0x82bd009c
	goto loc_82BD009C;
loc_82BD0074:
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x82bd0088
	if (!cr6.lt) goto loc_82BD0088;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
loc_82BD0088:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d20da8
	ctx.lr = 0x82BD0094;
	sub_82D20DA8(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d1b890
	ctx.lr = 0x82BD009C;
	sub_82D1B890(ctx, base);
loc_82BD009C:
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82bd00b8
	if (cr6.lt) goto loc_82BD00B8;
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r29.u32);
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x825952b8
	ctx.lr = 0x82BD00B8;
	sub_825952B8(ctx, base);
loc_82BD00B8:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BD00C0"))) PPC_WEAK_FUNC(sub_82BD00C0);
PPC_FUNC_IMPL(__imp__sub_82BD00C0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,72(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// b 0x833cad00
	sub_833CAD00(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BD00DC"))) PPC_WEAK_FUNC(sub_82BD00DC);
PPC_FUNC_IMPL(__imp__sub_82BD00DC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BD00E0"))) PPC_WEAK_FUNC(sub_82BD00E0);
PPC_FUNC_IMPL(__imp__sub_82BD00E0) {
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
	// lwz r11,72(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82bd0144
	if (cr6.eq) goto loc_82BD0144;
	// li r11,10
	ctx.r11.s64 = 10;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595150
	ctx.lr = 0x82BD0114;
	sub_82595150(ctx, base);
	// lwz r3,72(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bd0134
	if (cr6.eq) goto loc_82BD0134;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BD0134;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82BD0134:
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595170
	ctx.lr = 0x82BD013C;
	sub_82595170(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
loc_82BD0144:
	// bl 0x8378cba8
	ctx.lr = 0x82BD0148;
	sub_8378CBA8(ctx, base);
	// li r4,11
	ctx.r4.s64 = 11;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x8378d2e8
	ctx.lr = 0x82BD0154;
	sub_8378D2E8(ctx, base);
	// lis r10,-31761
	ctx.r10.s64 = -2081488896;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,30096(r10)
	PPC_STORE_U32(ctx.r10.u32 + 30096, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82BD0178"))) PPC_WEAK_FUNC(sub_82BD0178);
PPC_FUNC_IMPL(__imp__sub_82BD0178) {
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
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r10,r11,-19248
	ctx.r10.s64 = ctx.r11.s64 + -19248;
	// addi r31,r3,76
	ctx.r31.s64 = ctx.r3.s64 + 76;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// lwz r9,96(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// blt cr6,0x82bd01c0
	if (cr6.lt) goto loc_82BD01C0;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82BD01C0;
	sub_825952B8(ctx, base);
loc_82BD01C0:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,15
	ctx.r10.s64 = 15;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// stb r11,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r11.u8);
	// bl 0x831032a0
	ctx.lr = 0x82BD01DC;
	sub_831032A0(ctx, base);
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

__attribute__((alias("__imp__sub_82BD01F4"))) PPC_WEAK_FUNC(sub_82BD01F4);
PPC_FUNC_IMPL(__imp__sub_82BD01F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BD01F8"))) PPC_WEAK_FUNC(sub_82BD01F8);
PPC_FUNC_IMPL(__imp__sub_82BD01F8) {
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
	// bl 0x82bd0178
	ctx.lr = 0x82BD0218;
	sub_82BD0178(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82bd0230
	if (cr6.eq) goto loc_82BD0230;
	// bl 0x82416268
	ctx.lr = 0x82BD022C;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82BD0230:
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

__attribute__((alias("__imp__sub_82BD0248"))) PPC_WEAK_FUNC(sub_82BD0248);
PPC_FUNC_IMPL(__imp__sub_82BD0248) {
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
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,104(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// bgt cr6,0x82bd03a0
	if (cr6.gt) goto loc_82BD03A0;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x82bd033c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82BD033C;
	// bdzf 4*cr6+eq,0x82bd03bc
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82BD03BC;
	// bne cr6,0x82bd03bc
	if (!cr6.eq) goto loc_82BD03BC;
	// lwz r10,96(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// addi r11,r31,76
	ctx.r11.s64 = ctx.r31.s64 + 76;
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82bd0290
	if (cr6.lt) goto loc_82BD0290;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82BD0290:
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x837b0c10
	ctx.lr = 0x82BD029C;
	sub_837B0C10(ctx, base);
	// li r11,10
	ctx.r11.s64 = 10;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,12
	ctx.r4.s64 = 12;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82BD02B4;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bd02c4
	if (cr6.eq) goto loc_82BD02C4;
	// bl 0x837b0b18
	ctx.lr = 0x82BD02C0;
	sub_837B0B18(ctx, base);
	// b 0x82bd02c8
	goto loc_82BD02C8;
loc_82BD02C4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82BD02C8:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r3,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r3.u32);
	// bne cr6,0x82bd02f8
	if (!cr6.eq) goto loc_82BD02F8;
	// li r11,3
	ctx.r11.s64 = 3;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r11,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r11.u32);
	// bl 0x8387e8e0
	ctx.lr = 0x82BD02E4;
	sub_8387E8E0(ctx, base);
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
loc_82BD02F8:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x837b0b38
	ctx.lr = 0x82BD0300;
	sub_837B0B38(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,72(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// bl 0x837b0b98
	ctx.lr = 0x82BD030C;
	sub_837B0B98(ctx, base);
	// bl 0x8378cba8
	ctx.lr = 0x82BD0310;
	sub_8378CBA8(ctx, base);
	// li r4,11
	ctx.r4.s64 = 11;
	// bl 0x8378cbd0
	ctx.lr = 0x82BD0318;
	sub_8378CBD0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r11,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r11.u32);
	// bl 0x8387e8e0
	ctx.lr = 0x82BD0328;
	sub_8387E8E0(ctx, base);
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
loc_82BD033C:
	// bl 0x8378cba8
	ctx.lr = 0x82BD0340;
	sub_8378CBA8(ctx, base);
	// li r4,11
	ctx.r4.s64 = 11;
	// bl 0x8378cc08
	ctx.lr = 0x82BD0348;
	sub_8378CC08(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82bd03bc
	if (cr6.eq) goto loc_82BD03BC;
	// bl 0x830ff290
	ctx.lr = 0x82BD0358;
	sub_830FF290(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,9008(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bne cr6,0x82bd0374
	if (!cr6.eq) goto loc_82BD0374;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// lfs f0,24504(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24504);
	ctx.f0.f64 = double(temp.f32);
loc_82BD0374:
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lfs f13,-26260(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -26260);
	ctx.f13.f64 = double(temp.f32);
	// fdivs f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 / ctx.f0.f64));
	// bl 0x833c8120
	ctx.lr = 0x82BD0384;
	sub_833C8120(ctx, base);
	// lwz r3,72(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bd0398
	if (cr6.eq) goto loc_82BD0398;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x837b0b98
	ctx.lr = 0x82BD0398;
	sub_837B0B98(ctx, base);
loc_82BD0398:
	// li r11,2
	ctx.r11.s64 = 2;
	// b 0x82bd03b8
	goto loc_82BD03B8;
loc_82BD03A0:
	// lwz r3,72(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bd03b4
	if (cr6.eq) goto loc_82BD03B4;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x837b0b98
	ctx.lr = 0x82BD03B4;
	sub_837B0B98(ctx, base);
loc_82BD03B4:
	// li r11,3
	ctx.r11.s64 = 3;
loc_82BD03B8:
	// stw r11,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r11.u32);
loc_82BD03BC:
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

__attribute__((alias("__imp__sub_82BD03D0"))) PPC_WEAK_FUNC(sub_82BD03D0);
PPC_FUNC_IMPL(__imp__sub_82BD03D0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82BD03D8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x83103328
	ctx.lr = 0x82BD03E8;
	sub_83103328(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r10,r11,-19248
	ctx.r10.s64 = ctx.r11.s64 + -19248;
	// li r28,15
	ctx.r28.s64 = 15;
	// stw r29,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r29.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// addi r3,r31,76
	ctx.r3.s64 = ctx.r31.s64 + 76;
	// stw r28,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r28.u32);
	// li r6,-1
	ctx.r6.s64 = -1;
	// stw r29,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r29.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r29,76(r31)
	PPC_STORE_U8(ctx.r31.u32 + 76, ctx.r29.u8);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8259cb28
	ctx.lr = 0x82BD0420;
	sub_8259CB28(ctx, base);
	// stw r29,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r29.u32);
	// lwz r9,20(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// blt cr6,0x82bd0444
	if (cr6.lt) goto loc_82BD0444;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82BD0444;
	sub_825952B8(ctx, base);
loc_82BD0444:
	// stw r28,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r28.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r29,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r29.u32);
	// stb r29,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r29.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BD045C"))) PPC_WEAK_FUNC(sub_82BD045C);
PPC_FUNC_IMPL(__imp__sub_82BD045C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BD0460"))) PPC_WEAK_FUNC(sub_82BD0460);
PPC_FUNC_IMPL(__imp__sub_82BD0460) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82BD0468;
	__savegprlr_29(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r29,-31761
	ctx.r29.s64 = -2081488896;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r30,30096(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 30096);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x82bd04c0
	if (cr6.eq) goto loc_82BD04C0;
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82bd04a0
	if (cr6.lt) goto loc_82BD04A0;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82BD04A0;
	sub_825952B8(ctx, base);
loc_82BD04A0:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,15
	ctx.r10.s64 = 15;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// stb r11,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r11.u8);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82BD04C0:
	// li r11,10
	ctx.r11.s64 = 10;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r4,108
	ctx.r4.s64 = 108;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595718
	ctx.lr = 0x82BD04D8;
	sub_82595718(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// beq cr6,0x82bd0544
	if (cr6.eq) goto loc_82BD0544;
	// li r10,15
	ctx.r10.s64 = 15;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// stb r11,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r11.u8);
	// li r6,-1
	ctx.r6.s64 = -1;
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8259cb28
	ctx.lr = 0x82BD050C;
	sub_8259CB28(ctx, base);
	// lis r9,-31777
	ctx.r9.s64 = -2082537472;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,26024(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 26024);
	// bl 0x82bd03d0
	ctx.lr = 0x82BD0520;
	sub_82BD03D0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r3,30096(r29)
	PPC_STORE_U32(ctx.r29.u32 + 30096, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82bd055c
	if (!cr6.eq) goto loc_82BD055C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8387e8e0
	ctx.lr = 0x82BD0538;
	sub_8387E8E0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82BD0544:
	// stw r11,30096(r29)
	PPC_STORE_U32(ctx.r29.u32 + 30096, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8387e8e0
	ctx.lr = 0x82BD0550;
	sub_8387E8E0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82BD055C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8387e8e0
	ctx.lr = 0x82BD0564;
	sub_8387E8E0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BD0570"))) PPC_WEAK_FUNC(sub_82BD0570);
PPC_FUNC_IMPL(__imp__sub_82BD0570) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82BD0578;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x83108968
	ctx.lr = 0x82BD0588;
	sub_83108968(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x82aa87f0
	ctx.lr = 0x82BD0590;
	sub_82AA87F0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83108978
	ctx.lr = 0x82BD059C;
	sub_83108978(ctx, base);
	// lis r11,-31761
	ctx.r11.s64 = -2081488896;
	// addi r11,r11,30112
	ctx.r11.s64 = ctx.r11.s64 + 30112;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r10,r30
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r30.u32, xer);
	// bne cr6,0x82bd05d8
	if (!cr6.eq) goto loc_82BD05D8;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r3,r10
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, xer);
	// blt cr6,0x82bd05d8
	if (cr6.lt) goto loc_82BD05D8;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x82bd05cc
	if (cr6.eq) goto loc_82BD05CC;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
loc_82BD05CC:
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82BD05D8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BD05E4"))) PPC_WEAK_FUNC(sub_82BD05E4);
PPC_FUNC_IMPL(__imp__sub_82BD05E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BD05E8"))) PPC_WEAK_FUNC(sub_82BD05E8);
PPC_FUNC_IMPL(__imp__sub_82BD05E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// addi r11,r3,-10
	ctx.r11.s64 = ctx.r3.s64 + -10;
	// cmplwi cr6,r11,26
	cr6.compare<uint32_t>(ctx.r11.u32, 26, xer);
	// bgt cr6,0x82bd0680
	if (cr6.gt) goto loc_82BD0680;
	// lis r12,-32067
	ctx.r12.s64 = -2101542912;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,1548
	ctx.r12.s64 = ctx.r12.s64 + 1548;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_82BD0678;
	case 1:
		goto loc_82BD0680;
	case 2:
		goto loc_82BD0680;
	case 3:
		goto loc_82BD0680;
	case 4:
		goto loc_82BD0680;
	case 5:
		goto loc_82BD0678;
	case 6:
		goto loc_82BD0678;
	case 7:
		goto loc_82BD0680;
	case 8:
		goto loc_82BD0678;
	case 9:
		goto loc_82BD0678;
	case 10:
		goto loc_82BD0678;
	case 11:
		goto loc_82BD0680;
	case 12:
		goto loc_82BD0680;
	case 13:
		goto loc_82BD0680;
	case 14:
		goto loc_82BD0680;
	case 15:
		goto loc_82BD0680;
	case 16:
		goto loc_82BD0680;
	case 17:
		goto loc_82BD0678;
	case 18:
		goto loc_82BD0680;
	case 19:
		goto loc_82BD0678;
	case 20:
		goto loc_82BD0678;
	case 21:
		goto loc_82BD0680;
	case 22:
		goto loc_82BD0680;
	case 23:
		goto loc_82BD0680;
	case 24:
		goto loc_82BD0680;
	case 25:
		goto loc_82BD0680;
	case 26:
		goto loc_82BD0678;
	default:
		return;
	}
	// lwz r21,1656(r29)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1656);
	// lwz r21,1664(r29)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1664);
	// lwz r21,1664(r29)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1664);
	// lwz r21,1664(r29)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1664);
	// lwz r21,1664(r29)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1664);
	// lwz r21,1656(r29)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1656);
	// lwz r21,1656(r29)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1656);
	// lwz r21,1664(r29)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1664);
	// lwz r21,1656(r29)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1656);
	// lwz r21,1656(r29)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1656);
	// lwz r21,1656(r29)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1656);
	// lwz r21,1664(r29)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1664);
	// lwz r21,1664(r29)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1664);
	// lwz r21,1664(r29)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1664);
	// lwz r21,1664(r29)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1664);
	// lwz r21,1664(r29)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1664);
	// lwz r21,1664(r29)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1664);
	// lwz r21,1656(r29)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1656);
	// lwz r21,1664(r29)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1664);
	// lwz r21,1656(r29)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1656);
	// lwz r21,1656(r29)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1656);
	// lwz r21,1664(r29)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1664);
	// lwz r21,1664(r29)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1664);
	// lwz r21,1664(r29)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1664);
	// lwz r21,1664(r29)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1664);
	// lwz r21,1664(r29)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1664);
	// lwz r21,1656(r29)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1656);
loc_82BD0678:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_82BD0680:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BD0688"))) PPC_WEAK_FUNC(sub_82BD0688);
PPC_FUNC_IMPL(__imp__sub_82BD0688) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r9,-31777
	ctx.r9.s64 = -2082537472;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r7,r9,26192
	ctx.r7.s64 = ctx.r9.s64 + 26192;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lwz r9,32(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 32);
loc_82BD069C:
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// lbz r6,0(r9)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// subf r8,r6,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r6.s64;
	// beq cr6,0x82bd06c0
	if (cr6.eq) goto loc_82BD06C0;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq cr6,0x82bd069c
	if (cr6.eq) goto loc_82BD069C;
loc_82BD06C0:
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq cr6,0x82bd0730
	if (cr6.eq) goto loc_82BD0730;
	// lwz r9,28(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 28);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_82BD06D0:
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// lbz r6,0(r9)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// subf r8,r6,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r6.s64;
	// beq cr6,0x82bd06f4
	if (cr6.eq) goto loc_82BD06F4;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq cr6,0x82bd06d0
	if (cr6.eq) goto loc_82BD06D0;
loc_82BD06F4:
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq cr6,0x82bd0730
	if (cr6.eq) goto loc_82BD0730;
	// lwz r10,0(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
loc_82BD0700:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x82bd0724
	if (cr6.eq) goto loc_82BD0724;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x82bd0700
	if (cr6.eq) goto loc_82BD0700;
loc_82BD0724:
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// bnelr cr6
	if (!cr6.eq) return;
loc_82BD0730:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BD0738"))) PPC_WEAK_FUNC(sub_82BD0738);
PPC_FUNC_IMPL(__imp__sub_82BD0738) {
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
	// lwz r31,20(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x830ff290
	ctx.lr = 0x82BD0758;
	sub_830FF290(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x830ff858
	ctx.lr = 0x82BD0760;
	sub_830FF858(ctx, base);
	// lis r11,-31777
	ctx.r11.s64 = -2082537472;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r31,r11,26528
	ctx.r31.s64 = ctx.r11.s64 + 26528;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bd0570
	ctx.lr = 0x82BD077C;
	sub_82BD0570(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82bd0790
	if (!cr6.eq) goto loc_82BD0790;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r9,21
	ctx.r9.s64 = 21;
	// b 0x82bd0794
	goto loc_82BD0794;
loc_82BD0790:
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82BD0794:
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82bd07c4
	if (cr6.eq) goto loc_82BD07C4;
	// lwz r8,20(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82BD07A8:
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r7,r8
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, xer);
	// beq cr6,0x82bd086c
	if (cr6.eq) goto loc_82BD086C;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// blt cr6,0x82bd07a8
	if (cr6.lt) goto loc_82BD07A8;
loc_82BD07C4:
	// bl 0x83108968
	ctx.lr = 0x82BD07C8;
	sub_83108968(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82aa87f0
	ctx.lr = 0x82BD07D0;
	sub_82AA87F0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83108978
	ctx.lr = 0x82BD07DC;
	sub_83108978(ctx, base);
	// lis r11,-31761
	ctx.r11.s64 = -2081488896;
	// lis r10,-31777
	ctx.r10.s64 = -2082537472;
	// addi r11,r11,30112
	ctx.r11.s64 = ctx.r11.s64 + 30112;
	// addi r8,r10,26848
	ctx.r8.s64 = ctx.r10.s64 + 26848;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r10,r8
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, xer);
	// bne cr6,0x82bd0818
	if (!cr6.eq) goto loc_82BD0818;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r3,r10
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, xer);
	// blt cr6,0x82bd0818
	if (cr6.lt) goto loc_82BD0818;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mr r7,r10
	ctx.r7.u64 = ctx.r10.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82bd0820
	if (!cr6.eq) goto loc_82BD0820;
loc_82BD0818:
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
	// li r9,9
	ctx.r9.s64 = 9;
loc_82BD0820:
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82bd0850
	if (cr6.eq) goto loc_82BD0850;
	// lwz r8,16(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
loc_82BD0834:
	// lwz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r6,r8
	cr6.compare<int32_t>(ctx.r6.s32, ctx.r8.s32, xer);
	// beq cr6,0x82bd087c
	if (cr6.eq) goto loc_82BD087C;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// blt cr6,0x82bd0834
	if (cr6.lt) goto loc_82BD0834;
loc_82BD0850:
	// li r3,44
	ctx.r3.s64 = 44;
loc_82BD0854:
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
loc_82BD086C:
	// rlwinm r11,r10,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x82bd0854
	goto loc_82BD0854;
loc_82BD087C:
	// rlwinm r11,r10,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x82bd0854
	goto loc_82BD0854;
}

__attribute__((alias("__imp__sub_82BD088C"))) PPC_WEAK_FUNC(sub_82BD088C);
PPC_FUNC_IMPL(__imp__sub_82BD088C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BD0890"))) PPC_WEAK_FUNC(sub_82BD0890);
PPC_FUNC_IMPL(__imp__sub_82BD0890) {
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
	// lis r11,-31777
	ctx.r11.s64 = -2082537472;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r31,r11,26696
	ctx.r31.s64 = ctx.r11.s64 + 26696;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bl 0x82bd0570
	ctx.lr = 0x82BD08C4;
	sub_82BD0570(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82bd08d8
	if (!cr6.eq) goto loc_82BD08D8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r9,13
	ctx.r9.s64 = 13;
	// b 0x82bd08dc
	goto loc_82BD08DC;
loc_82BD08D8:
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82BD08DC:
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82bd0908
	if (cr6.eq) goto loc_82BD0908;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
loc_82BD08EC:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r8,r30
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r30.u32, xer);
	// beq cr6,0x82bd0924
	if (cr6.eq) goto loc_82BD0924;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// blt cr6,0x82bd08ec
	if (cr6.lt) goto loc_82BD08EC;
loc_82BD0908:
	// li r3,71
	ctx.r3.s64 = 71;
loc_82BD090C:
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
loc_82BD0924:
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x82bd090c
	goto loc_82BD090C;
}

__attribute__((alias("__imp__sub_82BD0934"))) PPC_WEAK_FUNC(sub_82BD0934);
PPC_FUNC_IMPL(__imp__sub_82BD0934) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BD0938"))) PPC_WEAK_FUNC(sub_82BD0938);
PPC_FUNC_IMPL(__imp__sub_82BD0938) {
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
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bd0ac4
	if (cr6.eq) goto loc_82BD0AC4;
	// bl 0x830ff290
	ctx.lr = 0x82BD0960;
	sub_830FF290(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x830ff858
	ctx.lr = 0x82BD0968;
	sub_830FF858(ctx, base);
	// cmplwi cr6,r3,6
	cr6.compare<uint32_t>(ctx.r3.u32, 6, xer);
	// bne cr6,0x82bd0974
	if (!cr6.eq) goto loc_82BD0974;
	// li r31,8
	ctx.r31.s64 = 8;
loc_82BD0974:
	// lis r10,-31777
	ctx.r10.s64 = -2082537472;
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r10,26924(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 26924);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82bd09b4
	if (cr6.eq) goto loc_82BD09B4;
	// lis r10,-31777
	ctx.r10.s64 = -2082537472;
	// lwz r8,26984(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 26984);
	// addi r10,r8,20
	ctx.r10.s64 = ctx.r8.s64 + 20;
loc_82BD0998:
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r7,r31
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r31.u32, xer);
	// beq cr6,0x82bd0a68
	if (cr6.eq) goto loc_82BD0A68;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,92
	ctx.r10.s64 = ctx.r10.s64 + 92;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// blt cr6,0x82bd0998
	if (cr6.lt) goto loc_82BD0998;
loc_82BD09B4:
	// lis r10,-31777
	ctx.r10.s64 = -2082537472;
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r10,26928(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 26928);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82bd09f4
	if (cr6.eq) goto loc_82BD09F4;
	// lis r10,-31777
	ctx.r10.s64 = -2082537472;
	// lwz r8,26988(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 26988);
	// addi r10,r8,20
	ctx.r10.s64 = ctx.r8.s64 + 20;
loc_82BD09D8:
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r7,r31
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r31.u32, xer);
	// beq cr6,0x82bd0a68
	if (cr6.eq) goto loc_82BD0A68;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,92
	ctx.r10.s64 = ctx.r10.s64 + 92;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// blt cr6,0x82bd09d8
	if (cr6.lt) goto loc_82BD09D8;
loc_82BD09F4:
	// lis r10,-31777
	ctx.r10.s64 = -2082537472;
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r10,26932(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 26932);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82bd0a34
	if (cr6.eq) goto loc_82BD0A34;
	// lis r10,-31777
	ctx.r10.s64 = -2082537472;
	// lwz r8,26992(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 26992);
	// addi r10,r8,20
	ctx.r10.s64 = ctx.r8.s64 + 20;
loc_82BD0A18:
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r7,r31
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r31.u32, xer);
	// beq cr6,0x82bd0a68
	if (cr6.eq) goto loc_82BD0A68;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,92
	ctx.r10.s64 = ctx.r10.s64 + 92;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// blt cr6,0x82bd0a18
	if (cr6.lt) goto loc_82BD0A18;
loc_82BD0A34:
	// cmplwi cr6,r30,13
	cr6.compare<uint32_t>(ctx.r30.u32, 13, xer);
	// bgt cr6,0x82bd0a94
	if (cr6.gt) goto loc_82BD0A94;
	// beq cr6,0x82bd0a74
	if (cr6.eq) goto loc_82BD0A74;
	// cmplwi cr6,r30,11
	cr6.compare<uint32_t>(ctx.r30.u32, 11, xer);
	// bne cr6,0x82bd0ac4
	if (!cr6.eq) goto loc_82BD0AC4;
	// lis r11,-31777
	ctx.r11.s64 = -2082537472;
	// lis r10,-31777
	ctx.r10.s64 = -2082537472;
	// lwz r11,26976(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26976);
	// lwz r10,27016(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 27016);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mulli r11,r9,92
	ctx.r11.s64 = ctx.r9.s64 * 92;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x82bd0ac8
	goto loc_82BD0AC8;
loc_82BD0A68:
	// mulli r11,r11,92
	ctx.r11.s64 = ctx.r11.s64 * 92;
	// add r3,r11,r8
	ctx.r3.u64 = ctx.r11.u64 + ctx.r8.u64;
	// b 0x82bd0ac8
	goto loc_82BD0AC8;
loc_82BD0A74:
	// lis r11,-31777
	ctx.r11.s64 = -2082537472;
	// lis r10,-31777
	ctx.r10.s64 = -2082537472;
	// lwz r11,26972(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26972);
	// lwz r10,26996(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 26996);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mulli r11,r9,92
	ctx.r11.s64 = ctx.r9.s64 * 92;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x82bd0ac8
	goto loc_82BD0AC8;
loc_82BD0A94:
	// cmplwi cr6,r30,67
	cr6.compare<uint32_t>(ctx.r30.u32, 67, xer);
	// blt cr6,0x82bd0ac4
	if (cr6.lt) goto loc_82BD0AC4;
	// cmplwi cr6,r30,68
	cr6.compare<uint32_t>(ctx.r30.u32, 68, xer);
	// bgt cr6,0x82bd0ac4
	if (cr6.gt) goto loc_82BD0AC4;
	// lis r11,-31777
	ctx.r11.s64 = -2082537472;
	// lis r10,-31777
	ctx.r10.s64 = -2082537472;
	// lwz r11,26968(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26968);
	// lwz r10,26996(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 26996);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mulli r11,r9,92
	ctx.r11.s64 = ctx.r9.s64 * 92;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x82bd0ac8
	goto loc_82BD0AC8;
loc_82BD0AC4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82BD0AC8:
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

__attribute__((alias("__imp__sub_82BD0AE0"))) PPC_WEAK_FUNC(sub_82BD0AE0);
PPC_FUNC_IMPL(__imp__sub_82BD0AE0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
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
	// bl 0x831156e8
	ctx.lr = 0x82BD0AF4;
	sub_831156E8(ctx, base);
	// lis r10,5
	ctx.r10.s64 = 327680;
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// ori r10,r10,14900
	ctx.r10.u64 = ctx.r10.u64 | 14900;
	// lwzx r31,r11,r10
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x83108968
	ctx.lr = 0x82BD0B08;
	sub_83108968(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x83108978
	ctx.lr = 0x82BD0B10;
	sub_83108978(ctx, base);
	// subfc r9,r3,r31
	xer.ca = ctx.r31.u32 >= ctx.r3.u32;
	ctx.r9.s64 = ctx.r31.s64 - ctx.r3.s64;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r3,r7,31
	ctx.r3.u64 = ctx.r7.u32 & 0x1;
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

__attribute__((alias("__imp__sub_82BD0B30"))) PPC_WEAK_FUNC(sub_82BD0B30);
PPC_FUNC_IMPL(__imp__sub_82BD0B30) {
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
	// bl 0x831156e8
	ctx.lr = 0x82BD0B48;
	sub_831156E8(ctx, base);
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// lwz r4,20(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addis r3,r11,2
	ctx.r3.s64 = ctx.r11.s64 + 131072;
	// addi r3,r3,-20656
	ctx.r3.s64 = ctx.r3.s64 + -20656;
	// bl 0x83125fc8
	ctx.lr = 0x82BD0B5C;
	sub_83125FC8(ctx, base);
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

__attribute__((alias("__imp__sub_82BD0B70"))) PPC_WEAK_FUNC(sub_82BD0B70);
PPC_FUNC_IMPL(__imp__sub_82BD0B70) {
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
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x831156e8
	ctx.lr = 0x82BD0B90;
	sub_831156E8(ctx, base);
	// cmplwi cr6,r31,3
	cr6.compare<uint32_t>(ctx.r31.u32, 3, xer);
	// bge cr6,0x82bd0bb0
	if (!cr6.lt) goto loc_82BD0BB0;
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addis r3,r11,2
	ctx.r3.s64 = ctx.r11.s64 + 131072;
	// addi r3,r3,-20656
	ctx.r3.s64 = ctx.r3.s64 + -20656;
	// bl 0x83125fb8
	ctx.lr = 0x82BD0BB0;
	sub_83125FB8(ctx, base);
loc_82BD0BB0:
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

__attribute__((alias("__imp__sub_82BD0BC8"))) PPC_WEAK_FUNC(sub_82BD0BC8);
PPC_FUNC_IMPL(__imp__sub_82BD0BC8) {
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
	// bl 0x831156e8
	ctx.lr = 0x82BD0BE0;
	sub_831156E8(ctx, base);
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addis r3,r11,2
	ctx.r3.s64 = ctx.r11.s64 + 131072;
	// addi r3,r3,-20656
	ctx.r3.s64 = ctx.r3.s64 + -20656;
	// bl 0x83125da8
	ctx.lr = 0x82BD0BF4;
	sub_83125DA8(ctx, base);
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

__attribute__((alias("__imp__sub_82BD0C08"))) PPC_WEAK_FUNC(sub_82BD0C08);
PPC_FUNC_IMPL(__imp__sub_82BD0C08) {
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
	// bl 0x831156e8
	ctx.lr = 0x82BD0C20;
	sub_831156E8(ctx, base);
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// lwz r4,20(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addis r3,r11,2
	ctx.r3.s64 = ctx.r11.s64 + 131072;
	// addi r3,r3,-20656
	ctx.r3.s64 = ctx.r3.s64 + -20656;
	// bl 0x83125f88
	ctx.lr = 0x82BD0C34;
	sub_83125F88(ctx, base);
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

__attribute__((alias("__imp__sub_82BD0C48"))) PPC_WEAK_FUNC(sub_82BD0C48);
PPC_FUNC_IMPL(__imp__sub_82BD0C48) {
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
	// bl 0x831156e8
	ctx.lr = 0x82BD0C58;
	sub_831156E8(ctx, base);
	// lis r10,1
	ctx.r10.s64 = 65536;
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// ori r10,r10,45452
	ctx.r10.u64 = ctx.r10.u64 | 45452;
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BD0C78"))) PPC_WEAK_FUNC(sub_82BD0C78);
PPC_FUNC_IMPL(__imp__sub_82BD0C78) {
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
	// lis r11,-31777
	ctx.r11.s64 = -2082537472;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r31,r11,26800
	ctx.r31.s64 = ctx.r11.s64 + 26800;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bl 0x82bd0570
	ctx.lr = 0x82BD0CAC;
	sub_82BD0570(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82bd0cc0
	if (!cr6.eq) goto loc_82BD0CC0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r9,6
	ctx.r9.s64 = 6;
	// b 0x82bd0cc4
	goto loc_82BD0CC4;
loc_82BD0CC0:
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82BD0CC4:
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82bd0cf0
	if (cr6.eq) goto loc_82BD0CF0;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
loc_82BD0CD4:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r8,r30
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r30.u32, xer);
	// beq cr6,0x82bd0d0c
	if (cr6.eq) goto loc_82BD0D0C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// blt cr6,0x82bd0cd4
	if (cr6.lt) goto loc_82BD0CD4;
loc_82BD0CF0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_82BD0CF4:
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
loc_82BD0D0C:
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x82bd0cf4
	goto loc_82BD0CF4;
}

__attribute__((alias("__imp__sub_82BD0D1C"))) PPC_WEAK_FUNC(sub_82BD0D1C);
PPC_FUNC_IMPL(__imp__sub_82BD0D1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BD0D20"))) PPC_WEAK_FUNC(sub_82BD0D20);
PPC_FUNC_IMPL(__imp__sub_82BD0D20) {
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
	// lis r11,-31777
	ctx.r11.s64 = -2082537472;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r31,r11,26800
	ctx.r31.s64 = ctx.r11.s64 + 26800;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bl 0x82bd0570
	ctx.lr = 0x82BD0D54;
	sub_82BD0570(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82bd0d68
	if (!cr6.eq) goto loc_82BD0D68;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r9,6
	ctx.r9.s64 = 6;
	// b 0x82bd0d6c
	goto loc_82BD0D6C;
loc_82BD0D68:
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82BD0D6C:
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82bd0d98
	if (cr6.eq) goto loc_82BD0D98;
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
loc_82BD0D7C:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r8,r30
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r30.u32, xer);
	// beq cr6,0x82bd0db4
	if (cr6.eq) goto loc_82BD0DB4;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// blt cr6,0x82bd0d7c
	if (cr6.lt) goto loc_82BD0D7C;
loc_82BD0D98:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_82BD0D9C:
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
loc_82BD0DB4:
	// rlwinm r11,r10,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r3,r11,r3
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// b 0x82bd0d9c
	goto loc_82BD0D9C;
}

__attribute__((alias("__imp__sub_82BD0DC0"))) PPC_WEAK_FUNC(sub_82BD0DC0);
PPC_FUNC_IMPL(__imp__sub_82BD0DC0) {
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
	// bl 0x83108968
	ctx.lr = 0x82BD0DD4;
	sub_83108968(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82aa87f0
	ctx.lr = 0x82BD0DDC;
	sub_82AA87F0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83108978
	ctx.lr = 0x82BD0DE8;
	sub_83108978(ctx, base);
	// bl 0x83102db0
	ctx.lr = 0x82BD0DEC;
	sub_83102DB0(ctx, base);
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

__attribute__((alias("__imp__sub_82BD0E00"))) PPC_WEAK_FUNC(sub_82BD0E00);
PPC_FUNC_IMPL(__imp__sub_82BD0E00) {
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
	// li r30,0
	ctx.r30.s64 = 0;
	// bl 0x82d86078
	ctx.lr = 0x82BD0E20;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bd0e48
	if (cr6.eq) goto loc_82BD0E48;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r4,-1
	cr6.compare<int32_t>(ctx.r4.s32, -1, xer);
	// beq cr6,0x82bd0e40
	if (cr6.eq) goto loc_82BD0E40;
	// lwz r3,128(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 128);
	// bl 0x82dd3e18
	ctx.lr = 0x82BD0E3C;
	sub_82DD3E18(ctx, base);
	// b 0x82bd0e4c
	goto loc_82BD0E4C;
loc_82BD0E40:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82bd0e4c
	goto loc_82BD0E4C;
loc_82BD0E48:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_82BD0E4C:
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

__attribute__((alias("__imp__sub_82BD0E64"))) PPC_WEAK_FUNC(sub_82BD0E64);
PPC_FUNC_IMPL(__imp__sub_82BD0E64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BD0E68"))) PPC_WEAK_FUNC(sub_82BD0E68);
PPC_FUNC_IMPL(__imp__sub_82BD0E68) {
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
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bd0e98
	if (cr6.eq) goto loc_82BD0E98;
	// bl 0x833bbd78
	ctx.lr = 0x82BD0E94;
	sub_833BBD78(ctx, base);
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
loc_82BD0E98:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bd0eac
	if (cr6.eq) goto loc_82BD0EAC;
	// bl 0x833bbd78
	ctx.lr = 0x82BD0EA8;
	sub_833BBD78(ctx, base);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
loc_82BD0EAC:
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,69
	ctx.r3.s64 = 69;
	// bl 0x82bd8448
	ctx.lr = 0x82BD0EB8;
	sub_82BD8448(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x83816968
	ctx.lr = 0x82BD0EC0;
	sub_83816968(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x83816378
	ctx.lr = 0x82BD0EC8;
	sub_83816378(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,68
	ctx.r3.s64 = 68;
	// bl 0x82bd8448
	ctx.lr = 0x82BD0ED4;
	sub_82BD8448(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x83816968
	ctx.lr = 0x82BD0EDC;
	sub_83816968(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x83816378
	ctx.lr = 0x82BD0EE4;
	sub_83816378(ctx, base);
	// bl 0x82d86078
	ctx.lr = 0x82BD0EE8;
	sub_82D86078(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bd0f04
	if (cr6.eq) goto loc_82BD0F04;
	// lwz r3,128(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 128);
	// bl 0x82dd45a0
	ctx.lr = 0x82BD0EFC;
	sub_82DD45A0(ctx, base);
	// lwz r3,132(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// bl 0x82dd4d88
	ctx.lr = 0x82BD0F04;
	sub_82DD4D88(ctx, base);
loc_82BD0F04:
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

__attribute__((alias("__imp__sub_82BD0F1C"))) PPC_WEAK_FUNC(sub_82BD0F1C);
PPC_FUNC_IMPL(__imp__sub_82BD0F1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BD0F20"))) PPC_WEAK_FUNC(sub_82BD0F20);
PPC_FUNC_IMPL(__imp__sub_82BD0F20) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82BD0F28;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82bd11e0
	if (cr6.eq) goto loc_82BD11E0;
	// bl 0x830ff290
	ctx.lr = 0x82BD0F40;
	sub_830FF290(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x830ff858
	ctx.lr = 0x82BD0F48;
	sub_830FF858(ctx, base);
	// cmplwi cr6,r3,6
	cr6.compare<uint32_t>(ctx.r3.u32, 6, xer);
	// bne cr6,0x82bd0f60
	if (!cr6.eq) goto loc_82BD0F60;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82bd0c78
	ctx.lr = 0x82BD0F58;
	sub_82BD0C78(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x82bd0f6c
	goto loc_82BD0F6C;
loc_82BD0F60:
	// cmplwi cr6,r30,11
	cr6.compare<uint32_t>(ctx.r30.u32, 11, xer);
	// bne cr6,0x82bd0f6c
	if (!cr6.eq) goto loc_82BD0F6C;
	// li r30,8
	ctx.r30.s64 = 8;
loc_82BD0F6C:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// cmplwi cr6,r11,8
	cr6.compare<uint32_t>(ctx.r11.u32, 8, xer);
	// blt cr6,0x82bd0fd8
	if (cr6.lt) goto loc_82BD0FD8;
	// lis r11,-31777
	ctx.r11.s64 = -2082537472;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r31,r11,26464
	ctx.r31.s64 = ctx.r11.s64 + 26464;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bd0570
	ctx.lr = 0x82BD0F94;
	sub_82BD0570(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82bd0fa8
	if (!cr6.eq) goto loc_82BD0FA8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r9,8
	ctx.r9.s64 = 8;
	// b 0x82bd0fac
	goto loc_82BD0FAC;
loc_82BD0FA8:
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82BD0FAC:
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82bd0fd8
	if (cr6.eq) goto loc_82BD0FD8;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
loc_82BD0FBC:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r8,r30
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r30.u32, xer);
	// beq cr6,0x82bd11ec
	if (cr6.eq) goto loc_82BD11EC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// blt cr6,0x82bd0fbc
	if (cr6.lt) goto loc_82BD0FBC;
loc_82BD0FD8:
	// bl 0x83108968
	ctx.lr = 0x82BD0FDC;
	sub_83108968(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82aa87f0
	ctx.lr = 0x82BD0FE4;
	sub_82AA87F0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83108978
	ctx.lr = 0x82BD0FF0;
	sub_83108978(ctx, base);
	// lis r10,-31761
	ctx.r10.s64 = -2081488896;
	// lis r11,-31777
	ctx.r11.s64 = -2082537472;
	// addi r31,r10,30112
	ctx.r31.s64 = ctx.r10.s64 + 30112;
	// addi r10,r11,26280
	ctx.r10.s64 = ctx.r11.s64 + 26280;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82bd102c
	if (!cr6.eq) goto loc_82BD102C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, xer);
	// blt cr6,0x82bd102c
	if (cr6.lt) goto loc_82BD102C;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82bd1034
	if (!cr6.eq) goto loc_82BD1034;
loc_82BD102C:
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// li r9,5
	ctx.r9.s64 = 5;
loc_82BD1034:
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82bd1060
	if (cr6.eq) goto loc_82BD1060;
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
loc_82BD1044:
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r7,r30
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r30.u32, xer);
	// beq cr6,0x82bd1200
	if (cr6.eq) goto loc_82BD1200;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// blt cr6,0x82bd1044
	if (cr6.lt) goto loc_82BD1044;
loc_82BD1060:
	// bl 0x83108968
	ctx.lr = 0x82BD1064;
	sub_83108968(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x82aa87f0
	ctx.lr = 0x82BD106C;
	sub_82AA87F0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83108978
	ctx.lr = 0x82BD1078;
	sub_83108978(ctx, base);
	// lis r10,-31777
	ctx.r10.s64 = -2082537472;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r10,r10,26320
	ctx.r10.s64 = ctx.r10.s64 + 26320;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82bd10ac
	if (!cr6.eq) goto loc_82BD10AC;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, xer);
	// blt cr6,0x82bd10ac
	if (cr6.lt) goto loc_82BD10AC;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82bd10b4
	if (!cr6.eq) goto loc_82BD10B4;
loc_82BD10AC:
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// li r9,6
	ctx.r9.s64 = 6;
loc_82BD10B4:
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82bd10e0
	if (cr6.eq) goto loc_82BD10E0;
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
loc_82BD10C4:
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r7,r30
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r30.u32, xer);
	// beq cr6,0x82bd1200
	if (cr6.eq) goto loc_82BD1200;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// blt cr6,0x82bd10c4
	if (cr6.lt) goto loc_82BD10C4;
loc_82BD10E0:
	// bl 0x83108968
	ctx.lr = 0x82BD10E4;
	sub_83108968(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x82aa87f0
	ctx.lr = 0x82BD10EC;
	sub_82AA87F0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83108978
	ctx.lr = 0x82BD10F8;
	sub_83108978(ctx, base);
	// lis r10,-31777
	ctx.r10.s64 = -2082537472;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r10,r10,26368
	ctx.r10.s64 = ctx.r10.s64 + 26368;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82bd112c
	if (!cr6.eq) goto loc_82BD112C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, xer);
	// blt cr6,0x82bd112c
	if (cr6.lt) goto loc_82BD112C;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82bd1134
	if (!cr6.eq) goto loc_82BD1134;
loc_82BD112C:
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// li r9,3
	ctx.r9.s64 = 3;
loc_82BD1134:
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82bd1160
	if (cr6.eq) goto loc_82BD1160;
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
loc_82BD1144:
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r7,r30
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r30.u32, xer);
	// beq cr6,0x82bd1200
	if (cr6.eq) goto loc_82BD1200;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// blt cr6,0x82bd1144
	if (cr6.lt) goto loc_82BD1144;
loc_82BD1160:
	// bl 0x83108968
	ctx.lr = 0x82BD1164;
	sub_83108968(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x82aa87f0
	ctx.lr = 0x82BD116C;
	sub_82AA87F0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83108978
	ctx.lr = 0x82BD1178;
	sub_83108978(ctx, base);
	// lis r10,-31777
	ctx.r10.s64 = -2082537472;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r10,r10,26392
	ctx.r10.s64 = ctx.r10.s64 + 26392;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82bd11ac
	if (!cr6.eq) goto loc_82BD11AC;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, xer);
	// blt cr6,0x82bd11ac
	if (cr6.lt) goto loc_82BD11AC;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82bd11b4
	if (!cr6.eq) goto loc_82BD11B4;
loc_82BD11AC:
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// li r9,9
	ctx.r9.s64 = 9;
loc_82BD11B4:
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82bd11e0
	if (cr6.eq) goto loc_82BD11E0;
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
loc_82BD11C4:
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r7,r30
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r30.u32, xer);
	// beq cr6,0x82bd1200
	if (cr6.eq) goto loc_82BD1200;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// blt cr6,0x82bd11c4
	if (cr6.lt) goto loc_82BD11C4;
loc_82BD11E0:
	// li r3,71
	ctx.r3.s64 = 71;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82BD11EC:
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82BD1200:
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BD1214"))) PPC_WEAK_FUNC(sub_82BD1214);
PPC_FUNC_IMPL(__imp__sub_82BD1214) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BD1218"))) PPC_WEAK_FUNC(sub_82BD1218);
PPC_FUNC_IMPL(__imp__sub_82BD1218) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad4
	ctx.lr = 0x82BD1220;
	__savegprlr_23(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31777
	ctx.r11.s64 = -2082537472;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r31,r11,26464
	ctx.r31.s64 = ctx.r11.s64 + 26464;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bl 0x82bd0570
	ctx.lr = 0x82BD1244;
	sub_82BD0570(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82bd125c
	if (!cr6.eq) goto loc_82BD125C;
	// mr r26,r31
	ctx.r26.u64 = ctx.r31.u64;
	// li r24,8
	ctx.r24.s64 = 8;
	// b 0x82bd1260
	goto loc_82BD1260;
loc_82BD125C:
	// lwz r24,80(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82BD1260:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r23,92
	ctx.r23.s64 = 92;
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// li r27,0
	ctx.r27.s64 = 0;
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw. r8,r9,r23
	ctx.r8.s32 = PPCDivide(ctx.r9.s32, ctx.r23.s32);
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq 0x82bd1368
	if (cr0.eq) goto loc_82BD1368;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r25,r10,-18588
	ctx.r25.s64 = ctx.r10.s64 + -18588;
loc_82BD1288:
	// lwz r8,0(r25)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// add r9,r31,r11
	ctx.r9.u64 = ctx.r31.u64 + ctx.r11.u64;
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
	// stwx r8,r31,r11
	PPC_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r8.u32);
	// lwz r7,4(r25)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// stw r7,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r7.u32);
	// lwz r6,8(r25)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	// stw r6,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r6.u32);
	// lwz r5,12(r25)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r25.u32 + 12);
	// stw r5,12(r9)
	PPC_STORE_U32(ctx.r9.u32 + 12, ctx.r5.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// lwz r28,20(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
	// bl 0x830ff290
	ctx.lr = 0x82BD12C4;
	sub_830FF290(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x830ff858
	ctx.lr = 0x82BD12CC;
	sub_830FF858(ctx, base);
	// cmplwi cr6,r3,6
	cr6.compare<uint32_t>(ctx.r3.u32, 6, xer);
	// bne cr6,0x82bd1300
	if (!cr6.eq) goto loc_82BD1300;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// lwz r3,20(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// bl 0x82bd0c78
	ctx.lr = 0x82BD12E4;
	sub_82BD0C78(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// add r30,r31,r11
	ctx.r30.u64 = ctx.r31.u64 + ctx.r11.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82bd0f20
	ctx.lr = 0x82BD12FC;
	sub_82BD0F20(ctx, base);
	// stw r3,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r3.u32);
loc_82BD1300:
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(ctx.r24.u32, 0, xer);
	// beq cr6,0x82bd1348
	if (cr6.eq) goto loc_82BD1348;
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
loc_82BD1310:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r9,r28
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r28.u32, xer);
	// beq cr6,0x82bd1330
	if (cr6.eq) goto loc_82BD1330;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// cmplw cr6,r11,r24
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r24.u32, xer);
	// blt cr6,0x82bd1310
	if (cr6.lt) goto loc_82BD1310;
	// b 0x82bd1348
	goto loc_82BD1348;
loc_82BD1330:
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// add r10,r10,r26
	ctx.r10.u64 = ctx.r10.u64 + ctx.r26.u64;
	// add r9,r31,r11
	ctx.r9.u64 = ctx.r31.u64 + ctx.r11.u64;
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r8,16(r9)
	PPC_STORE_U32(ctx.r9.u32 + 16, ctx.r8.u32);
loc_82BD1348:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// addi r31,r31,92
	ctx.r31.s64 = ctx.r31.s64 + 92;
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r8,r9,r23
	ctx.r8.s32 = PPCDivide(ctx.r9.s32, ctx.r23.s32);
	// cmplw cr6,r27,r8
	cr6.compare<uint32_t>(ctx.r27.u32, ctx.r8.u32, xer);
	// blt cr6,0x82bd1288
	if (cr6.lt) goto loc_82BD1288;
loc_82BD1368:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BD1370"))) PPC_WEAK_FUNC(sub_82BD1370);
PPC_FUNC_IMPL(__imp__sub_82BD1370) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r11,-31761
	ctx.r11.s64 = -2081488896;
	// lwz r3,30136(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 30136);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bd1384
	if (cr6.eq) goto loc_82BD1384;
	// b 0x82bd0e00
	sub_82BD0E00(ctx, base);
	return;
loc_82BD1384:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BD138C"))) PPC_WEAK_FUNC(sub_82BD138C);
PPC_FUNC_IMPL(__imp__sub_82BD138C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BD1390"))) PPC_WEAK_FUNC(sub_82BD1390);
PPC_FUNC_IMPL(__imp__sub_82BD1390) {
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
	// bl 0x831156e8
	ctx.lr = 0x82BD13A0;
	sub_831156E8(ctx, base);
	// lis r11,-31761
	ctx.r11.s64 = -2081488896;
	// lwz r3,30136(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 30136);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bd13d4
	if (cr6.eq) goto loc_82BD13D4;
	// bl 0x82bd0e00
	ctx.lr = 0x82BD13B4;
	sub_82BD0E00(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bd13d4
	if (cr6.eq) goto loc_82BD13D4;
	// lhz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 4);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,8(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bl 0x82dd53a0
	ctx.lr = 0x82BD13D4;
	sub_82DD53A0(ctx, base);
loc_82BD13D4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BD13E4"))) PPC_WEAK_FUNC(sub_82BD13E4);
PPC_FUNC_IMPL(__imp__sub_82BD13E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BD13E8"))) PPC_WEAK_FUNC(sub_82BD13E8);
PPC_FUNC_IMPL(__imp__sub_82BD13E8) {
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
	// li r11,10
	ctx.r11.s64 = 10;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,12
	ctx.r4.s64 = 12;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82BD1414;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// lis r10,-31761
	ctx.r10.s64 = -2081488896;
	// li r11,0
	ctx.r11.s64 = 0;
	// beq cr6,0x82bd1448
	if (cr6.eq) goto loc_82BD1448;
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r31.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r3,30136(r10)
	PPC_STORE_U32(ctx.r10.u32 + 30136, ctx.r3.u32);
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
loc_82BD1448:
	// stw r11,30136(r10)
	PPC_STORE_U32(ctx.r10.u32 + 30136, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82BD1460"))) PPC_WEAK_FUNC(sub_82BD1460);
PPC_FUNC_IMPL(__imp__sub_82BD1460) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bne cr6,0x82bd1498
	if (!cr6.eq) goto loc_82BD1498;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82bd14e8
	goto loc_82BD14E8;
loc_82BD1498:
	// lis r11,712
	ctx.r11.s64 = 46661632;
	// ori r10,r11,22795
	ctx.r10.u64 = ctx.r11.u64 | 22795;
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// ble cr6,0x82bd14b4
	if (!cr6.gt) goto loc_82BD14B4;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,12056
	ctx.r3.s64 = ctx.r11.s64 + 12056;
	// bl 0x831cc150
	ctx.lr = 0x82BD14B4;
	sub_831CC150(ctx, base);
loc_82BD14B4:
	// li r11,2
	ctx.r11.s64 = 2;
	// mulli r30,r4,92
	ctx.r30.s64 = ctx.r4.s64 * 92;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82BD14D0;
	sub_82595718(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// add r10,r30,r11
	ctx.r10.u64 = ctx.r30.u64 + ctx.r11.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
loc_82BD14E8:
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

__attribute__((alias("__imp__sub_82BD1500"))) PPC_WEAK_FUNC(sub_82BD1500);
PPC_FUNC_IMPL(__imp__sub_82BD1500) {
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
	// lwz r9,20(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// bl 0x82bd05e8
	ctx.lr = 0x82BD151C;
	sub_82BD05E8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82bd153c
	if (cr6.eq) goto loc_82BD153C;
loc_82BD1528:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82BD153C:
	// cmplwi cr6,r9,13
	cr6.compare<uint32_t>(ctx.r9.u32, 13, xer);
	// beq cr6,0x82bd1528
	if (cr6.eq) goto loc_82BD1528;
	// lwz r9,52(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	// addi r11,r10,32
	ctx.r11.s64 = ctx.r10.s64 + 32;
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// blt cr6,0x82bd1558
	if (cr6.lt) goto loc_82BD1558;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82BD1558:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82bd0688
	ctx.lr = 0x82BD1560;
	sub_82BD0688(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BD1570"))) PPC_WEAK_FUNC(sub_82BD1570);
PPC_FUNC_IMPL(__imp__sub_82BD1570) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82BD1578;
	__savegprlr_26(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
	// bl 0x835ef3e0
	ctx.lr = 0x82BD1594;
	sub_835EF3E0(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x835ecaf8
	ctx.lr = 0x82BD159C;
	sub_835ECAF8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x8307e038
	ctx.lr = 0x82BD15A8;
	sub_8307E038(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x825832f8
	ctx.lr = 0x82BD15B4;
	sub_825832F8(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x83131d70
	ctx.lr = 0x82BD15C0;
	sub_83131D70(ctx, base);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// ld r6,8(r30)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r30.u32 + 8);
	// lwz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x835ef5a8
	ctx.lr = 0x82BD15D4;
	sub_835EF5A8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// beq cr6,0x82bd15f8
	if (cr6.eq) goto loc_82BD15F8;
	// bl 0x835ecaa8
	ctx.lr = 0x82BD15E4;
	sub_835ECAA8(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x835f3ab0
	ctx.lr = 0x82BD15EC;
	sub_835F3AB0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_82BD15F8:
	// bl 0x835410b8
	ctx.lr = 0x82BD15FC;
	sub_835410B8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// lwz r28,0(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x835410b8
	ctx.lr = 0x82BD160C;
	sub_835410B8(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// lwz r27,4(r10)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// bl 0x835ebe48
	ctx.lr = 0x82BD1628;
	sub_835EBE48(ctx, base);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// lwz r30,0(r9)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// bl 0x82572fa0
	ctx.lr = 0x82BD163C;
	sub_82572FA0(ctx, base);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x82bd1698
	if (cr6.eq) goto loc_82BD1698;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,5
	ctx.r5.s64 = 5;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x833bcae8
	ctx.lr = 0x82BD165C;
	sub_833BCAE8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x83816968
	ctx.lr = 0x82BD1664;
	sub_83816968(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// stb r31,95(r1)
	PPC_STORE_U8(ctx.r1.u32 + 95, ctx.r31.u8);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// clrlwi r6,r28,16
	ctx.r6.u64 = ctx.r28.u32 & 0xFFFF;
	// lfs f3,9008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f3.f64 = double(temp.f32);
	// clrlwi r7,r27,16
	ctx.r7.u64 = ctx.r27.u32 & 0xFFFF;
	// lfs f4,-26260(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -26260);
	ctx.f4.f64 = double(temp.f32);
	// fmr f1,f3
	ctx.f1.f64 = ctx.f3.f64;
	// fmr f2,f4
	ctx.f2.f64 = ctx.f4.f64;
	// bl 0x83816550
	ctx.lr = 0x82BD1698;
	sub_83816550(ctx, base);
loc_82BD1698:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x835ecaa8
	ctx.lr = 0x82BD16A0;
	sub_835ECAA8(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x835f3ab0
	ctx.lr = 0x82BD16A8;
	sub_835F3AB0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BD16B4"))) PPC_WEAK_FUNC(sub_82BD16B4);
PPC_FUNC_IMPL(__imp__sub_82BD16B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BD16B8"))) PPC_WEAK_FUNC(sub_82BD16B8);
PPC_FUNC_IMPL(__imp__sub_82BD16B8) {
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
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x82bd1710
	if (!cr6.eq) goto loc_82BD1710;
	// bl 0x82d86078
	ctx.lr = 0x82BD16E0;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bd1708
	if (cr6.eq) goto loc_82BD1708;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r4,-1
	cr6.compare<int32_t>(ctx.r4.s32, -1, xer);
	// beq cr6,0x82bd1708
	if (cr6.eq) goto loc_82BD1708;
	// lwz r3,128(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 128);
	// bl 0x82dd3e18
	ctx.lr = 0x82BD16FC;
	sub_82DD3E18(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82bd1710
	if (!cr6.eq) goto loc_82BD1710;
loc_82BD1708:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82bd174c
	goto loc_82BD174C;
loc_82BD1710:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82bd1748
	if (!cr6.eq) goto loc_82BD1748;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,68
	ctx.r3.s64 = 68;
	// bl 0x82bd8448
	ctx.lr = 0x82BD1728;
	sub_82BD8448(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r31,88
	ctx.r4.s64 = ctx.r31.s64 + 88;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82bd1570
	ctx.lr = 0x82BD1738;
	sub_82BD1570(ctx, base);
	// stw r3,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// beq cr6,0x82bd174c
	if (cr6.eq) goto loc_82BD174C;
loc_82BD1748:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82BD174C:
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

__attribute__((alias("__imp__sub_82BD1764"))) PPC_WEAK_FUNC(sub_82BD1764);
PPC_FUNC_IMPL(__imp__sub_82BD1764) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BD1768"))) PPC_WEAK_FUNC(sub_82BD1768);
PPC_FUNC_IMPL(__imp__sub_82BD1768) {
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
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x82bd17c0
	if (!cr6.eq) goto loc_82BD17C0;
	// bl 0x82d86078
	ctx.lr = 0x82BD1790;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bd17b8
	if (cr6.eq) goto loc_82BD17B8;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r4,-1
	cr6.compare<int32_t>(ctx.r4.s32, -1, xer);
	// beq cr6,0x82bd17b8
	if (cr6.eq) goto loc_82BD17B8;
	// lwz r3,128(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 128);
	// bl 0x82dd3e18
	ctx.lr = 0x82BD17AC;
	sub_82DD3E18(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82bd17c0
	if (!cr6.eq) goto loc_82BD17C0;
loc_82BD17B8:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82bd17fc
	goto loc_82BD17FC;
loc_82BD17C0:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82bd17f8
	if (!cr6.eq) goto loc_82BD17F8;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,69
	ctx.r3.s64 = 69;
	// bl 0x82bd8448
	ctx.lr = 0x82BD17D8;
	sub_82BD8448(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r31,72
	ctx.r4.s64 = ctx.r31.s64 + 72;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82bd1570
	ctx.lr = 0x82BD17E8;
	sub_82BD1570(ctx, base);
	// stw r3,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// beq cr6,0x82bd17fc
	if (cr6.eq) goto loc_82BD17FC;
loc_82BD17F8:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82BD17FC:
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

__attribute__((alias("__imp__sub_82BD1814"))) PPC_WEAK_FUNC(sub_82BD1814);
PPC_FUNC_IMPL(__imp__sub_82BD1814) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BD1818"))) PPC_WEAK_FUNC(sub_82BD1818);
PPC_FUNC_IMPL(__imp__sub_82BD1818) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r11,-31761
	ctx.r11.s64 = -2081488896;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,30136(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 30136);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82bd1834
	if (cr6.eq) goto loc_82BD1834;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// b 0x82bd1768
	sub_82BD1768(ctx, base);
	return;
loc_82BD1834:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BD183C"))) PPC_WEAK_FUNC(sub_82BD183C);
PPC_FUNC_IMPL(__imp__sub_82BD183C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BD1840"))) PPC_WEAK_FUNC(sub_82BD1840);
PPC_FUNC_IMPL(__imp__sub_82BD1840) {
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
	// lis r31,-31761
	ctx.r31.s64 = -2081488896;
	// lwz r11,30136(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 30136);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82bd189c
	if (cr6.eq) goto loc_82BD189C;
	// li r11,10
	ctx.r11.s64 = 10;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595150
	ctx.lr = 0x82BD1878;
	sub_82595150(ctx, base);
	// lwz r30,30136(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 30136);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x82bd1894
	if (cr6.eq) goto loc_82BD1894;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82bd0e68
	ctx.lr = 0x82BD188C;
	sub_82BD0E68(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82416268
	ctx.lr = 0x82BD1894;
	sub_82416268(ctx, base);
loc_82BD1894:
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595170
	ctx.lr = 0x82BD189C;
	sub_82595170(ctx, base);
loc_82BD189C:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,30136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 30136, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82BD18BC"))) PPC_WEAK_FUNC(sub_82BD18BC);
PPC_FUNC_IMPL(__imp__sub_82BD18BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BD18C0"))) PPC_WEAK_FUNC(sub_82BD18C0);
PPC_FUNC_IMPL(__imp__sub_82BD18C0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82BD18C8;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,80(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r31,r3,60
	ctx.r31.s64 = ctx.r3.s64 + 60;
	// li r27,2
	ctx.r27.s64 = 2;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82bd18f4
	if (cr6.lt) goto loc_82BD18F4;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x825952b8
	ctx.lr = 0x82BD18F4;
	sub_825952B8(ctx, base);
loc_82BD18F4:
	// addi r30,r30,32
	ctx.r30.s64 = ctx.r30.s64 + 32;
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
	// blt cr6,0x82bd1928
	if (cr6.lt) goto loc_82BD1928;
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x825952b8
	ctx.lr = 0x82BD1928;
	sub_825952B8(ctx, base);
loc_82BD1928:
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

__attribute__((alias("__imp__sub_82BD193C"))) PPC_WEAK_FUNC(sub_82BD193C);
PPC_FUNC_IMPL(__imp__sub_82BD193C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BD1940"))) PPC_WEAK_FUNC(sub_82BD1940);
PPC_FUNC_IMPL(__imp__sub_82BD1940) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r11,-31761
	ctx.r11.s64 = -2081488896;
	// lwz r11,30136(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 30136);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// b 0x82bd1840
	sub_82BD1840(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BD1954"))) PPC_WEAK_FUNC(sub_82BD1954);
PPC_FUNC_IMPL(__imp__sub_82BD1954) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BD1958"))) PPC_WEAK_FUNC(sub_82BD1958);
PPC_FUNC_IMPL(__imp__sub_82BD1958) {
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
	// lis r11,-31761
	ctx.r11.s64 = -2081488896;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,30136(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 30136);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bd199c
	if (cr6.eq) goto loc_82BD199C;
	// bl 0x82bd0e00
	ctx.lr = 0x82BD1980;
	sub_82BD0E00(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bd199c
	if (cr6.eq) goto loc_82BD199C;
	// addi r4,r3,12
	ctx.r4.s64 = ctx.r3.s64 + 12;
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8259cb28
	ctx.lr = 0x82BD199C;
	sub_8259CB28(ctx, base);
loc_82BD199C:
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

__attribute__((alias("__imp__sub_82BD19B0"))) PPC_WEAK_FUNC(sub_82BD19B0);
PPC_FUNC_IMPL(__imp__sub_82BD19B0) {
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
	// lwz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r8,15
	ctx.r8.s64 = 15;
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// li r6,-1
	ctx.r6.s64 = -1;
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r7,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r7.u32);
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// lwz r7,12(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r7,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r7.u32);
	// stw r8,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r8.u32);
	// stw r10,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r10.u32);
	// stb r10,16(r31)
	PPC_STORE_U8(ctx.r31.u32 + 16, ctx.r10.u8);
	// bl 0x8259cb28
	ctx.lr = 0x82BD1A10;
	sub_8259CB28(ctx, base);
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

__attribute__((alias("__imp__sub_82BD1A28"))) PPC_WEAK_FUNC(sub_82BD1A28);
PPC_FUNC_IMPL(__imp__sub_82BD1A28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82BD1A30;
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
	// addi r3,r3,32
	ctx.r3.s64 = ctx.r3.s64 + 32;
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// lwz r9,8(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r4,r4,32
	ctx.r4.s64 = ctx.r4.s64 + 32;
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// lwz r8,12(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// stw r8,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r8.u32);
	// lwz r7,16(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// stw r7,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r7.u32);
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// lwz r10,24(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// stw r10,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r10.u32);
	// lwz r9,28(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// stw r9,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r9.u32);
	// stw r27,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r27.u32);
	// stw r29,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r29.u32);
	// stb r29,32(r31)
	PPC_STORE_U8(ctx.r31.u32 + 32, ctx.r29.u8);
	// bl 0x8259cb28
	ctx.lr = 0x82BD1AA8;
	sub_8259CB28(ctx, base);
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
	// bl 0x8259cb28
	ctx.lr = 0x82BD1AC8;
	sub_8259CB28(ctx, base);
	// lbz r8,88(r30)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r30.u32 + 88);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r8,88(r31)
	PPC_STORE_U8(ctx.r31.u32 + 88, ctx.r8.u8);
	// lbz r7,89(r30)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r30.u32 + 89);
	// stb r7,89(r31)
	PPC_STORE_U8(ctx.r31.u32 + 89, ctx.r7.u8);
	// lbz r6,90(r30)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r30.u32 + 90);
	// stb r6,90(r31)
	PPC_STORE_U8(ctx.r31.u32 + 90, ctx.r6.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BD1AEC"))) PPC_WEAK_FUNC(sub_82BD1AEC);
PPC_FUNC_IMPL(__imp__sub_82BD1AEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BD1AF0"))) PPC_WEAK_FUNC(sub_82BD1AF0);
PPC_FUNC_IMPL(__imp__sub_82BD1AF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82BD1AF8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r29,-1
	ctx.r29.s64 = -1;
	// addi r3,r3,32
	ctx.r3.s64 = ctx.r3.s64 + 32;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r4,r4,32
	ctx.r4.s64 = ctx.r4.s64 + 32;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// lwz r9,8(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// lwz r8,12(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// stw r8,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r8.u32);
	// lwz r7,16(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// stw r7,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r7.u32);
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// lwz r10,24(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// stw r10,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r10.u32);
	// lwz r9,28(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// stw r9,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r9.u32);
	// bl 0x8259cb28
	ctx.lr = 0x82BD1B5C;
	sub_8259CB28(ctx, base);
	// addi r3,r31,60
	ctx.r3.s64 = ctx.r31.s64 + 60;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r30,60
	ctx.r4.s64 = ctx.r30.s64 + 60;
	// bl 0x8259cb28
	ctx.lr = 0x82BD1B70;
	sub_8259CB28(ctx, base);
	// lbz r8,88(r30)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r30.u32 + 88);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r8,88(r31)
	PPC_STORE_U8(ctx.r31.u32 + 88, ctx.r8.u8);
	// lbz r7,89(r30)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r30.u32 + 89);
	// stb r7,89(r31)
	PPC_STORE_U8(ctx.r31.u32 + 89, ctx.r7.u8);
	// lbz r6,90(r30)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r30.u32 + 90);
	// stb r6,90(r31)
	PPC_STORE_U8(ctx.r31.u32 + 90, ctx.r6.u8);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BD1B94"))) PPC_WEAK_FUNC(sub_82BD1B94);
PPC_FUNC_IMPL(__imp__sub_82BD1B94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BD1B98"))) PPC_WEAK_FUNC(sub_82BD1B98);
PPC_FUNC_IMPL(__imp__sub_82BD1B98) {
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
	// addi r11,r3,-16
	ctx.r11.s64 = ctx.r3.s64 + -16;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,19
	cr6.compare<uint32_t>(ctx.r11.u32, 19, xer);
	// bgt cr6,0x82bd1cc0
	if (cr6.gt) goto loc_82BD1CC0;
	// lis r12,-32067
	ctx.r12.s64 = -2101542912;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,7120
	ctx.r12.s64 = ctx.r12.s64 + 7120;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_82BD1C20;
	case 1:
		goto loc_82BD1CC0;
	case 2:
		goto loc_82BD1CC0;
	case 3:
		goto loc_82BD1CC0;
	case 4:
		goto loc_82BD1CC0;
	case 5:
		goto loc_82BD1CC0;
	case 6:
		goto loc_82BD1C20;
	case 7:
		goto loc_82BD1CC0;
	case 8:
		goto loc_82BD1CC0;
	case 9:
		goto loc_82BD1CC0;
	case 10:
		goto loc_82BD1CC0;
	case 11:
		goto loc_82BD1CC0;
	case 12:
		goto loc_82BD1CC0;
	case 13:
		goto loc_82BD1C70;
	case 14:
		goto loc_82BD1C98;
	case 15:
		goto loc_82BD1CC0;
	case 16:
		goto loc_82BD1CC0;
	case 17:
		goto loc_82BD1CC0;
	case 18:
		goto loc_82BD1C70;
	case 19:
		goto loc_82BD1C98;
	default:
		return;
	}
	// lwz r21,7200(r29)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r29.u32 + 7200);
	// lwz r21,7360(r29)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r29.u32 + 7360);
	// lwz r21,7360(r29)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r29.u32 + 7360);
	// lwz r21,7360(r29)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r29.u32 + 7360);
	// lwz r21,7360(r29)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r29.u32 + 7360);
	// lwz r21,7360(r29)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r29.u32 + 7360);
	// lwz r21,7200(r29)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r29.u32 + 7200);
	// lwz r21,7360(r29)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r29.u32 + 7360);
	// lwz r21,7360(r29)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r29.u32 + 7360);
	// lwz r21,7360(r29)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r29.u32 + 7360);
	// lwz r21,7360(r29)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r29.u32 + 7360);
	// lwz r21,7360(r29)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r29.u32 + 7360);
	// lwz r21,7360(r29)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r29.u32 + 7360);
	// lwz r21,7280(r29)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r29.u32 + 7280);
	// lwz r21,7320(r29)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r29.u32 + 7320);
	// lwz r21,7360(r29)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r29.u32 + 7360);
	// lwz r21,7360(r29)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r29.u32 + 7360);
	// lwz r21,7360(r29)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r29.u32 + 7360);
	// lwz r21,7280(r29)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r29.u32 + 7280);
	// lwz r21,7320(r29)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r29.u32 + 7320);
loc_82BD1C20:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,3
	ctx.r10.s64 = 3;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8315d6c8
	ctx.lr = 0x82BD1C40;
	sub_8315D6C8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8259cb28
	ctx.lr = 0x82BD1C54;
	sub_8259CB28(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8387e8e0
	ctx.lr = 0x82BD1C5C;
	sub_8387E8E0(ctx, base);
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
loc_82BD1C70:
	// clrlwi r11,r5,24
	ctx.r11.u64 = ctx.r5.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82bd1c88
	if (cr6.eq) goto loc_82BD1C88;
	// lis r4,103
	ctx.r4.s64 = 6750208;
	// li r5,2014
	ctx.r5.s64 = 2014;
	// b 0x82bd1cb8
	goto loc_82BD1CB8;
loc_82BD1C88:
	// lis r4,930
	ctx.r4.s64 = 60948480;
	// li r5,2014
	ctx.r5.s64 = 2014;
	// ori r4,r4,179
	ctx.r4.u64 = ctx.r4.u64 | 179;
	// b 0x82bd1cb8
	goto loc_82BD1CB8;
loc_82BD1C98:
	// clrlwi r11,r5,24
	ctx.r11.u64 = ctx.r5.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82bd1cac
	if (cr6.eq) goto loc_82BD1CAC;
	// lis r4,103
	ctx.r4.s64 = 6750208;
	// b 0x82bd1cb4
	goto loc_82BD1CB4;
loc_82BD1CAC:
	// lis r4,930
	ctx.r4.s64 = 60948480;
	// ori r4,r4,179
	ctx.r4.u64 = ctx.r4.u64 | 179;
loc_82BD1CB4:
	// li r5,2015
	ctx.r5.s64 = 2015;
loc_82BD1CB8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d042a8
	ctx.lr = 0x82BD1CC0;
	sub_82D042A8(ctx, base);
loc_82BD1CC0:
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

__attribute__((alias("__imp__sub_82BD1CD4"))) PPC_WEAK_FUNC(sub_82BD1CD4);
PPC_FUNC_IMPL(__imp__sub_82BD1CD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BD1CD8"))) PPC_WEAK_FUNC(sub_82BD1CD8);
PPC_FUNC_IMPL(__imp__sub_82BD1CD8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82BD1CE0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmplw cr6,r3,r4
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, xer);
	// beq cr6,0x82bd1d94
	if (cr6.eq) goto loc_82BD1D94;
	// addi r31,r3,20
	ctx.r31.s64 = ctx.r3.s64 + 20;
	// li r29,-1
	ctx.r29.s64 = -1;
loc_82BD1CFC:
	// lwz r11,-20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -20);
	// addi r10,r31,-20
	ctx.r10.s64 = ctx.r31.s64 + -20;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r31,12
	ctx.r4.s64 = ctx.r31.s64 + 12;
	// addi r3,r30,32
	ctx.r3.s64 = ctx.r30.s64 + 32;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// lwz r9,-16(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + -16);
	// stw r9,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r9.u32);
	// lwz r8,-12(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + -12);
	// stw r8,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r8.u32);
	// lwz r7,-8(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// stw r7,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r7.u32);
	// lwz r11,-4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// stw r11,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r11.u32);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r10,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r10.u32);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r9,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r9.u32);
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r8,28(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28, ctx.r8.u32);
	// bl 0x8259cb28
	ctx.lr = 0x82BD1D54;
	sub_8259CB28(ctx, base);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r31,40
	ctx.r4.s64 = ctx.r31.s64 + 40;
	// addi r3,r30,60
	ctx.r3.s64 = ctx.r30.s64 + 60;
	// bl 0x8259cb28
	ctx.lr = 0x82BD1D68;
	sub_8259CB28(ctx, base);
	// lbz r7,68(r31)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + 68);
	// stb r7,88(r30)
	PPC_STORE_U8(ctx.r30.u32 + 88, ctx.r7.u8);
	// lbz r6,69(r31)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r31.u32 + 69);
	// stb r6,89(r30)
	PPC_STORE_U8(ctx.r30.u32 + 89, ctx.r6.u8);
	// lbz r5,70(r31)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r31.u32 + 70);
	// addi r31,r31,92
	ctx.r31.s64 = ctx.r31.s64 + 92;
	// stb r5,90(r30)
	PPC_STORE_U8(ctx.r30.u32 + 90, ctx.r5.u8);
	// addi r30,r30,92
	ctx.r30.s64 = ctx.r30.s64 + 92;
	// addi r4,r31,-20
	ctx.r4.s64 = ctx.r31.s64 + -20;
	// cmplw cr6,r4,r28
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r28.u32, xer);
	// bne cr6,0x82bd1cfc
	if (!cr6.eq) goto loc_82BD1CFC;
loc_82BD1D94:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BD1DA0"))) PPC_WEAK_FUNC(sub_82BD1DA0);
PPC_FUNC_IMPL(__imp__sub_82BD1DA0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82BD1DA8;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// cmplw cr6,r3,r4
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, xer);
	// beq cr6,0x82bd1e28
	if (cr6.eq) goto loc_82BD1E28;
	// addi r31,r3,80
	ctx.r31.s64 = ctx.r3.s64 + 80;
	// li r28,2
	ctx.r28.s64 = 2;
	// li r29,15
	ctx.r29.s64 = 15;
	// li r30,0
	ctx.r30.s64 = 0;
loc_82BD1DC8:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82bd1de4
	if (cr6.lt) goto loc_82BD1DE4;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,-20(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + -20);
	// bl 0x825952b8
	ctx.lr = 0x82BD1DE4;
	sub_825952B8(ctx, base);
loc_82BD1DE4:
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
	// blt cr6,0x82bd1e0c
	if (cr6.lt) goto loc_82BD1E0C;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,-48(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + -48);
	// bl 0x825952b8
	ctx.lr = 0x82BD1E0C;
	sub_825952B8(ctx, base);
loc_82BD1E0C:
	// stw r29,-28(r31)
	PPC_STORE_U32(ctx.r31.u32 + -28, ctx.r29.u32);
	// stw r30,-32(r31)
	PPC_STORE_U32(ctx.r31.u32 + -32, ctx.r30.u32);
	// stb r30,-48(r31)
	PPC_STORE_U8(ctx.r31.u32 + -48, ctx.r30.u8);
	// addi r31,r31,92
	ctx.r31.s64 = ctx.r31.s64 + 92;
	// addi r11,r31,-80
	ctx.r11.s64 = ctx.r31.s64 + -80;
	// cmplw cr6,r11,r27
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r27.u32, xer);
	// bne cr6,0x82bd1dc8
	if (!cr6.eq) goto loc_82BD1DC8;
loc_82BD1E28:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BD1E30"))) PPC_WEAK_FUNC(sub_82BD1E30);
PPC_FUNC_IMPL(__imp__sub_82BD1E30) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82BD1E38;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// cmplw cr6,r3,r4
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, xer);
	// beq cr6,0x82bd1e90
	if (cr6.eq) goto loc_82BD1E90;
	// addi r31,r3,16
	ctx.r31.s64 = ctx.r3.s64 + 16;
	// li r27,2
	ctx.r27.s64 = 2;
	// li r29,15
	ctx.r29.s64 = 15;
	// li r30,0
	ctx.r30.s64 = 0;
loc_82BD1E58:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82bd1e74
	if (cr6.lt) goto loc_82BD1E74;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x825952b8
	ctx.lr = 0x82BD1E74;
	sub_825952B8(ctx, base);
loc_82BD1E74:
	// stw r29,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r29.u32);
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// stb r30,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r30.u8);
	// addi r31,r31,44
	ctx.r31.s64 = ctx.r31.s64 + 44;
	// addi r11,r31,-16
	ctx.r11.s64 = ctx.r31.s64 + -16;
	// cmplw cr6,r11,r28
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, xer);
	// bne cr6,0x82bd1e58
	if (!cr6.eq) goto loc_82BD1E58;
loc_82BD1E90:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BD1E98"))) PPC_WEAK_FUNC(sub_82BD1E98);
PPC_FUNC_IMPL(__imp__sub_82BD1E98) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82BD1EA0;
	__savegprlr_27(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,15
	ctx.r9.s64 = 15;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// addi r29,r3,4
	ctx.r29.s64 = ctx.r3.s64 + 4;
	// stw r9,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r9.u32);
	// li r27,-1
	ctx.r27.s64 = -1;
	// stb r11,100(r1)
	PPC_STORE_U8(ctx.r1.u32 + 100, ctx.r11.u8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// bl 0x8259cb28
	ctx.lr = 0x82BD1EE4;
	sub_8259CB28(ctx, base);
	// lwz r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r28,r30,4
	ctx.r28.s64 = ctx.r30.s64 + 4;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8259cb28
	ctx.lr = 0x82BD1F04;
	sub_8259CB28(ctx, base);
	// lwz r7,96(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,100
	ctx.r4.s64 = ctx.r1.s64 + 100;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r7,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r7.u32);
	// bl 0x8259cb28
	ctx.lr = 0x82BD1F20;
	sub_8259CB28(ctx, base);
	// lwz r6,120(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// cmplwi cr6,r6,16
	cr6.compare<uint32_t>(ctx.r6.u32, 16, xer);
	// blt cr6,0x82bd1f40
	if (cr6.lt) goto loc_82BD1F40;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,100(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82BD1F40;
	sub_825952B8(ctx, base);
loc_82BD1F40:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BD1F48"))) PPC_WEAK_FUNC(sub_82BD1F48);
PPC_FUNC_IMPL(__imp__sub_82BD1F48) {
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
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r4,28(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r4,-1
	cr6.compare<int32_t>(ctx.r4.s32, -1, xer);
	// beq cr6,0x82bd202c
	if (cr6.eq) goto loc_82BD202C;
	// lbz r11,90(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 90);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82bd2024
	if (cr6.eq) goto loc_82BD2024;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-19141
	ctx.r4.s64 = ctx.r11.s64 + -19141;
	// bl 0x837b0c10
	ctx.lr = 0x82BD1F8C;
	sub_837B0C10(ctx, base);
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r3,29
	cr6.compare<uint32_t>(ctx.r3.u32, 29, xer);
	// bne cr6,0x82bd1fec
	if (!cr6.eq) goto loc_82BD1FEC;
	// lis r11,930
	ctx.r11.s64 = 60948480;
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// ori r9,r11,179
	ctx.r9.u64 = ctx.r11.u64 | 179;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// beq cr6,0x82bd1fec
	if (cr6.eq) goto loc_82BD1FEC;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,6
	ctx.r10.s64 = 6;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8315d6c8
	ctx.lr = 0x82BD1FCC;
	sub_8315D6C8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8259cb28
	ctx.lr = 0x82BD1FE0;
	sub_8259CB28(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8387e8e0
	ctx.lr = 0x82BD1FE8;
	sub_8387E8E0(ctx, base);
	// b 0x82bd1ff8
	goto loc_82BD1FF8;
loc_82BD1FEC:
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x82bd1b98
	ctx.lr = 0x82BD1FF8;
	sub_82BD1B98(ctx, base);
loc_82BD1FF8:
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x82bd200c
	if (!cr6.lt) goto loc_82BD200C;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
loc_82BD200C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,28(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// bl 0x82d042a8
	ctx.lr = 0x82BD2018;
	sub_82D042A8(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8387e8e0
	ctx.lr = 0x82BD2020;
	sub_8387E8E0(ctx, base);
	// b 0x82bd202c
	goto loc_82BD202C;
loc_82BD2024:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d04220
	ctx.lr = 0x82BD202C;
	sub_82D04220(ctx, base);
loc_82BD202C:
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

__attribute__((alias("__imp__sub_82BD2044"))) PPC_WEAK_FUNC(sub_82BD2044);
PPC_FUNC_IMPL(__imp__sub_82BD2044) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BD2048"))) PPC_WEAK_FUNC(sub_82BD2048);
PPC_FUNC_IMPL(__imp__sub_82BD2048) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82BD2050;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,0(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r4,4(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r31,r4
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r4.u32, xer);
	// beq cr6,0x82bd2088
	if (cr6.eq) goto loc_82BD2088;
	// subf r11,r4,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r4.s64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// srawi r11,r11,2
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// rlwinm r30,r11,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x831ce420
	ctx.lr = 0x82BD2080;
	sub_831CE420(ctx, base);
	// add r10,r30,r31
	ctx.r10.u64 = ctx.r30.u64 + ctx.r31.u64;
	// stw r10,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r10.u32);
loc_82BD2088:
	// bl 0x831156e8
	ctx.lr = 0x82BD208C;
	sub_831156E8(ctx, base);
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// li r31,3
	ctx.r31.s64 = 3;
	// addis r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 131072;
	// addi r11,r11,-20656
	ctx.r11.s64 = ctx.r11.s64 + -20656;
	// addi r30,r11,560
	ctx.r30.s64 = ctx.r11.s64 + 560;
loc_82BD20A0:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x835977d8
	ctx.lr = 0x82BD20AC;
	sub_835977D8(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// bne 0x82bd20a0
	if (!cr0.eq) goto loc_82BD20A0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BD20C0"))) PPC_WEAK_FUNC(sub_82BD20C0);
PPC_FUNC_IMPL(__imp__sub_82BD20C0) {
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
	// bl 0x83108968
	ctx.lr = 0x82BD20DC;
	sub_83108968(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82aa87f0
	ctx.lr = 0x82BD20E4;
	sub_82AA87F0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83108978
	ctx.lr = 0x82BD20F0;
	sub_83108978(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bd2124
	if (cr6.eq) goto loc_82BD2124;
	// lis r11,-31761
	ctx.r11.s64 = -2081488896;
	// addi r11,r11,30128
	ctx.r11.s64 = ctx.r11.s64 + 30128;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r3,r10
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, xer);
	// blt cr6,0x82bd2124
	if (cr6.lt) goto loc_82BD2124;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82bd2124
	if (cr6.eq) goto loc_82BD2124;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
	// bl 0x835977d8
	ctx.lr = 0x82BD2124;
	sub_835977D8(ctx, base);
loc_82BD2124:
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

__attribute__((alias("__imp__sub_82BD213C"))) PPC_WEAK_FUNC(sub_82BD213C);
PPC_FUNC_IMPL(__imp__sub_82BD213C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BD2140"))) PPC_WEAK_FUNC(sub_82BD2140);
PPC_FUNC_IMPL(__imp__sub_82BD2140) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x82BD2148;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// subf r11,r3,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r3.s64;
	// subf r10,r3,r5
	ctx.r10.s64 = ctx.r5.s64 - ctx.r3.s64;
	// srawi. r30,r11,5
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1F) != 0);
	ctx.r30.s64 = ctx.r11.s32 >> 5;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// srawi r9,r10,5
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1F) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 5;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// mr r28,r9
	ctx.r28.u64 = ctx.r9.u64;
	// beq 0x82bd219c
	if (cr0.eq) goto loc_82BD219C;
loc_82BD2170:
	// divw r8,r28,r11
	ctx.r8.s32 = PPCDivide(ctx.r28.s32, ctx.r11.s32);
	// rotlwi r10,r28,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r28.u32, 1);
	// mullw r7,r8,r11
	ctx.r7.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r11.s32);
	// addi r6,r10,-1
	ctx.r6.s64 = ctx.r10.s64 + -1;
	// subf. r10,r7,r28
	ctx.r10.s64 = ctx.r28.s64 - ctx.r7.s64;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// andc r5,r11,r6
	ctx.r5.u64 = ctx.r11.u64 & ~ctx.r6.u64;
	// twllei r11,0
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
	// twlgei r5,-1
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// bne 0x82bd2170
	if (!cr0.eq) goto loc_82BD2170;
loc_82BD219C:
	// cmpw cr6,r28,r9
	cr6.compare<int32_t>(ctx.r28.s32, ctx.r9.s32, xer);
	// bge cr6,0x82bd2210
	if (!cr6.lt) goto loc_82BD2210;
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(ctx.r28.s32, 0, xer);
	// ble cr6,0x82bd2210
	if (!cr6.gt) goto loc_82BD2210;
	// rlwinm r11,r28,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 5) & 0xFFFFFFE0;
	// rlwinm r25,r30,5,0,26
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 5) & 0xFFFFFFE0;
	// add r29,r11,r27
	ctx.r29.u64 = ctx.r11.u64 + ctx.r27.u64;
loc_82BD21B8:
	// add r31,r29,r25
	ctx.r31.u64 = ctx.r29.u64 + ctx.r25.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// cmplw cr6,r31,r26
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r26.u32, xer);
	// bne cr6,0x82bd21cc
	if (!cr6.eq) goto loc_82BD21CC;
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
loc_82BD21CC:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82bd1e98
	ctx.lr = 0x82BD21D4;
	sub_82BD1E98(ctx, base);
	// subf r11,r31,r26
	ctx.r11.s64 = ctx.r26.s64 - ctx.r31.s64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// srawi r11,r11,5
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1F) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 5;
	// cmpw cr6,r30,r11
	cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, xer);
	// bge cr6,0x82bd21f0
	if (!cr6.lt) goto loc_82BD21F0;
	// add r31,r25,r31
	ctx.r31.u64 = ctx.r25.u64 + ctx.r31.u64;
	// b 0x82bd21fc
	goto loc_82BD21FC;
loc_82BD21F0:
	// subf r11,r11,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r11.s64;
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// add r31,r11,r27
	ctx.r31.u64 = ctx.r11.u64 + ctx.r27.u64;
loc_82BD21FC:
	// cmplw cr6,r31,r29
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, xer);
	// bne cr6,0x82bd21cc
	if (!cr6.eq) goto loc_82BD21CC;
	// addic. r28,r28,-1
	xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	cr0.compare<int32_t>(ctx.r28.s32, 0, xer);
	// addi r29,r29,-32
	ctx.r29.s64 = ctx.r29.s64 + -32;
	// bgt 0x82bd21b8
	if (cr0.gt) goto loc_82BD21B8;
loc_82BD2210:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BD2218"))) PPC_WEAK_FUNC(sub_82BD2218);
PPC_FUNC_IMPL(__imp__sub_82BD2218) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82BD2220;
	__savegprlr_29(ctx, base);
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,3
	ctx.r4.s64 = 3;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82a8c428
	ctx.lr = 0x82BD223C;
	sub_82A8C428(ctx, base);
	// lis r11,-31777
	ctx.r11.s64 = -2082537472;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lwz r4,26140(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26140);
	// bl 0x82473550
	ctx.lr = 0x82BD224C;
	sub_82473550(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lwz r4,8(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// bl 0x82474170
	ctx.lr = 0x82BD2258;
	sub_82474170(ctx, base);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r31,r10,-19173
	ctx.r31.s64 = ctx.r10.s64 + -19173;
	// addi r4,r31,633
	ctx.r4.s64 = ctx.r31.s64 + 633;
	// bl 0x82473550
	ctx.lr = 0x82BD226C;
	sub_82473550(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lwz r4,12(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// bl 0x82474170
	ctx.lr = 0x82BD2278;
	sub_82474170(ctx, base);
	// addi r4,r31,709
	ctx.r4.s64 = ctx.r31.s64 + 709;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82473550
	ctx.lr = 0x82BD2284;
	sub_82473550(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x82474170
	ctx.lr = 0x82BD2290;
	sub_82474170(ctx, base);
	// addi r4,r31,713
	ctx.r4.s64 = ctx.r31.s64 + 713;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82473550
	ctx.lr = 0x82BD229C;
	sub_82473550(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lwz r4,4(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// bl 0x82474170
	ctx.lr = 0x82BD22A8;
	sub_82474170(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82473550
	ctx.lr = 0x82BD22B4;
	sub_82473550(ctx, base);
	// addi r4,r1,136
	ctx.r4.s64 = ctx.r1.s64 + 136;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82a79bf8
	ctx.lr = 0x82BD22C0;
	sub_82A79BF8(ctx, base);
	// lwz r9,100(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// bge cr6,0x82bd22d4
	if (!cr6.lt) goto loc_82BD22D4;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
loc_82BD22D4:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82BD22D8:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82bd22d8
	if (!cr6.eq) goto loc_82BD22D8;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x82BD22FC;
	sub_8259CC28(ctx, base);
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82bd2310
	if (cr6.lt) goto loc_82BD2310;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82416268
	ctx.lr = 0x82BD2310;
	sub_82416268(ctx, base);
loc_82BD2310:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,15
	ctx.r10.s64 = 15;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// bl 0x82a79160
	ctx.lr = 0x82BD232C;
	sub_82A79160(ctx, base);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// addi r8,r9,15320
	ctx.r8.s64 = ctx.r9.s64 + 15320;
	// stw r8,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r8.u32);
	// bl 0x831ccf00
	ctx.lr = 0x82BD2340;
	sub_831CCF00(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BD234C"))) PPC_WEAK_FUNC(sub_82BD234C);
PPC_FUNC_IMPL(__imp__sub_82BD234C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BD2350"))) PPC_WEAK_FUNC(sub_82BD2350);
PPC_FUNC_IMPL(__imp__sub_82BD2350) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82BD2358;
	__savegprlr_27(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x831156e8
	ctx.lr = 0x82BD2364;
	sub_831156E8(ctx, base);
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// addis r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 131072;
	// addi r11,r11,-20656
	ctx.r11.s64 = ctx.r11.s64 + -20656;
	// lwz r10,572(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 572);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bgt cr6,0x82bd2388
	if (cr6.gt) goto loc_82BD2388;
loc_82BD237C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_82BD2388:
	// lis r31,-31777
	ctx.r31.s64 = -2082537472;
	// lwz r28,320(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 320);
	// lis r30,-31777
	ctx.r30.s64 = -2082537472;
	// li r5,92
	ctx.r5.s64 = 92;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,26952(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26952);
	// lwz r10,26980(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 26980);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mulli r11,r11,92
	ctx.r11.s64 = ctx.r11.s64 * 92;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x831ce980
	ctx.lr = 0x82BD23B4;
	sub_831CE980(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82bd0938
	ctx.lr = 0x82BD23BC;
	sub_82BD0938(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bd237c
	if (cr6.eq) goto loc_82BD237C;
	// lwz r11,26952(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26952);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r10,26980(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 26980);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mulli r11,r11,92
	ctx.r11.s64 = ctx.r11.s64 * 92;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x82bd0f20
	ctx.lr = 0x82BD23E4;
	sub_82BD0F20(ctx, base);
	// cmpwi cr6,r3,71
	cr6.compare<int32_t>(ctx.r3.s32, 71, xer);
	// beq cr6,0x82bd237c
	if (cr6.eq) goto loc_82BD237C;
	// stw r3,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r3.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r11,24(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 24);
	// stw r11,24(r29)
	PPC_STORE_U32(ctx.r29.u32 + 24, ctx.r11.u32);
	// lwz r10,28(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 28);
	// stw r10,28(r29)
	PPC_STORE_U32(ctx.r29.u32 + 28, ctx.r10.u32);
	// bl 0x82bd05e8
	ctx.lr = 0x82BD2408;
	sub_82BD05E8(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82bd242c
	if (cr6.eq) goto loc_82BD242C;
	// lis r11,-31777
	ctx.r11.s64 = -2082537472;
	// addi r3,r29,32
	ctx.r3.s64 = ctx.r29.s64 + 32;
	// addi r10,r11,26152
	ctx.r10.s64 = ctx.r11.s64 + 26152;
	// lwz r4,-8(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + -8);
	// bl 0x8259d6c0
	ctx.lr = 0x82BD2428;
	sub_8259D6C0(ctx, base);
	// b 0x82bd2558
	goto loc_82BD2558;
loc_82BD242C:
	// bl 0x830ff290
	ctx.lr = 0x82BD2430;
	sub_830FF290(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x830ff858
	ctx.lr = 0x82BD2438;
	sub_830FF858(ctx, base);
	// cmplwi cr6,r3,6
	cr6.compare<uint32_t>(ctx.r3.u32, 6, xer);
	// bne cr6,0x82bd246c
	if (!cr6.eq) goto loc_82BD246C;
	// lis r11,930
	ctx.r11.s64 = 60948480;
	// lis r10,-31777
	ctx.r10.s64 = -2082537472;
	// ori r9,r11,149
	ctx.r9.u64 = ctx.r11.u64 | 149;
	// addi r3,r29,32
	ctx.r3.s64 = ctx.r29.s64 + 32;
	// stw r9,24(r29)
	PPC_STORE_U32(ctx.r29.u32 + 24, ctx.r9.u32);
	// lwz r4,26152(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 26152);
	// bl 0x8259d6c0
	ctx.lr = 0x82BD245C;
	sub_8259D6C0(ctx, base);
	// lis r8,200
	ctx.r8.s64 = 13107200;
	// ori r7,r8,376
	ctx.r7.u64 = ctx.r8.u64 | 376;
	// stw r7,28(r29)
	PPC_STORE_U32(ctx.r29.u32 + 28, ctx.r7.u32);
	// b 0x82bd2558
	goto loc_82BD2558;
loc_82BD246C:
	// cmplwi cr6,r28,67
	cr6.compare<uint32_t>(ctx.r28.u32, 67, xer);
	// beq cr6,0x82bd24e0
	if (cr6.eq) goto loc_82BD24E0;
	// cmplwi cr6,r28,68
	cr6.compare<uint32_t>(ctx.r28.u32, 68, xer);
	// beq cr6,0x82bd24e0
	if (cr6.eq) goto loc_82BD24E0;
	// cmplwi cr6,r28,11
	cr6.compare<uint32_t>(ctx.r28.u32, 11, xer);
	// bne cr6,0x82bd24c8
	if (!cr6.eq) goto loc_82BD24C8;
	// lis r10,-31777
	ctx.r10.s64 = -2082537472;
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r10,26940(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 26940);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82bd2558
	if (cr6.eq) goto loc_82BD2558;
	// lis r10,-31777
	ctx.r10.s64 = -2082537472;
	// lwz r8,27016(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 27016);
	// addi r10,r8,20
	ctx.r10.s64 = ctx.r8.s64 + 20;
loc_82BD24A8:
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r7,11
	cr6.compare<uint32_t>(ctx.r7.u32, 11, xer);
	// beq cr6,0x82bd2524
	if (cr6.eq) goto loc_82BD2524;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,92
	ctx.r10.s64 = ctx.r10.s64 + 92;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// blt cr6,0x82bd24a8
	if (cr6.lt) goto loc_82BD24A8;
	// b 0x82bd2558
	goto loc_82BD2558;
loc_82BD24C8:
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r27,32
	ctx.r4.s64 = ctx.r27.s64 + 32;
	// addi r3,r29,32
	ctx.r3.s64 = ctx.r29.s64 + 32;
	// bl 0x8259cb28
	ctx.lr = 0x82BD24DC;
	sub_8259CB28(ctx, base);
	// b 0x82bd2558
	goto loc_82BD2558;
loc_82BD24E0:
	// lis r10,-31777
	ctx.r10.s64 = -2082537472;
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r10,26940(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 26940);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82bd2558
	if (cr6.eq) goto loc_82BD2558;
	// lis r10,-31777
	ctx.r10.s64 = -2082537472;
	// lwz r8,27004(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 27004);
	// addi r10,r8,20
	ctx.r10.s64 = ctx.r8.s64 + 20;
loc_82BD2504:
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r28,r7
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r7.u32, xer);
	// beq cr6,0x82bd2524
	if (cr6.eq) goto loc_82BD2524;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,92
	ctx.r10.s64 = ctx.r10.s64 + 92;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// blt cr6,0x82bd2504
	if (cr6.lt) goto loc_82BD2504;
	// b 0x82bd2558
	goto loc_82BD2558;
loc_82BD2524:
	// mulli r11,r11,92
	ctx.r11.s64 = ctx.r11.s64 * 92;
	// add r4,r11,r8
	ctx.r4.u64 = ctx.r11.u64 + ctx.r8.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82bd1a28
	ctx.lr = 0x82BD2534;
	sub_82BD1A28(ctx, base);
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r29,32
	ctx.r3.s64 = ctx.r29.s64 + 32;
	// bl 0x8259cb28
	ctx.lr = 0x82BD2548;
	sub_8259CB28(ctx, base);
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,24(r29)
	PPC_STORE_U32(ctx.r29.u32 + 24, ctx.r11.u32);
	// bl 0x82bd18c0
	ctx.lr = 0x82BD2558;
	sub_82BD18C0(ctx, base);
loc_82BD2558:
	// stw r28,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r28.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r29,60
	ctx.r3.s64 = ctx.r29.s64 + 60;
	// bl 0x82bd2218
	ctx.lr = 0x82BD2568;
	sub_82BD2218(ctx, base);
	// lbz r11,90(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 90);
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r11,90(r29)
	PPC_STORE_U8(ctx.r29.u32 + 90, ctx.r11.u8);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BD257C"))) PPC_WEAK_FUNC(sub_82BD257C);
PPC_FUNC_IMPL(__imp__sub_82BD257C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BD2580"))) PPC_WEAK_FUNC(sub_82BD2580);
PPC_FUNC_IMPL(__imp__sub_82BD2580) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82BD2588;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x831156e8
	ctx.lr = 0x82BD2594;
	sub_831156E8(ctx, base);
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// addis r30,r11,2
	ctx.r30.s64 = ctx.r11.s64 + 131072;
	// addi r30,r30,-20656
	ctx.r30.s64 = ctx.r30.s64 + -20656;
	// bl 0x82d86078
	ctx.lr = 0x82BD25A4;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bd26a0
	if (cr6.eq) goto loc_82BD26A0;
	// lbz r11,589(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 589);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82bd26a0
	if (cr6.eq) goto loc_82BD26A0;
	// lwz r28,592(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + 592);
	// cmpwi cr6,r28,-1
	cr6.compare<int32_t>(ctx.r28.s32, -1, xer);
	// beq cr6,0x82bd26a0
	if (cr6.eq) goto loc_82BD26A0;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r3,128(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 128);
	// bl 0x82dd3e18
	ctx.lr = 0x82BD25D0;
	sub_82DD3E18(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bd26a0
	if (cr6.eq) goto loc_82BD26A0;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmpwi cr6,r11,9
	cr6.compare<int32_t>(ctx.r11.s32, 9, xer);
	// beq cr6,0x82bd26a0
	if (cr6.eq) goto loc_82BD26A0;
	// lis r29,-31761
	ctx.r29.s64 = -2081488896;
	// lwz r11,30136(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 30136);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82bd2600
	if (!cr6.eq) goto loc_82BD2600;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82bd13e8
	ctx.lr = 0x82BD2600;
	sub_82BD13E8(ctx, base);
loc_82BD2600:
	// lis r11,-31777
	ctx.r11.s64 = -2082537472;
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// li r5,92
	ctx.r5.s64 = 92;
	// mulli r10,r10,92
	ctx.r10.s64 = ctx.r10.s64 * 92;
	// lwz r11,27000(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27000);
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831ce980
	ctx.lr = 0x82BD2620;
	sub_831CE980(ctx, base);
	// lis r9,-31777
	ctx.r9.s64 = -2082537472;
	// lis r8,-31777
	ctx.r8.s64 = -2082537472;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r31,60
	ctx.r3.s64 = ctx.r31.s64 + 60;
	// lwz r11,26960(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 26960);
	// lwz r10,26980(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 26980);
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mulli r11,r7,92
	ctx.r11.s64 = ctx.r7.s64 * 92;
	// lwzx r6,r11,r10
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r6,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r6.u32);
	// lwz r11,4(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// lwz r10,8(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// lwz r9,12(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	// stw r9,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r9.u32);
	// bl 0x82bd2218
	ctx.lr = 0x82BD2668;
	sub_82BD2218(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpwi cr6,r11,68
	cr6.compare<int32_t>(ctx.r11.s32, 68, xer);
	// bne cr6,0x82bd26ac
	if (!cr6.eq) goto loc_82BD26AC;
	// lwz r3,30136(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 30136);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82bd268c
	if (!cr6.eq) goto loc_82BD268C;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82bd13e8
	ctx.lr = 0x82BD2688;
	sub_82BD13E8(ctx, base);
	// lwz r3,30136(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 30136);
loc_82BD268C:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82bd16b8
	ctx.lr = 0x82BD2694;
	sub_82BD16B8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82bd26e0
	if (!cr6.eq) goto loc_82BD26E0;
loc_82BD26A0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82BD26AC:
	// cmpwi cr6,r11,69
	cr6.compare<int32_t>(ctx.r11.s32, 69, xer);
	// bne cr6,0x82bd26e0
	if (!cr6.eq) goto loc_82BD26E0;
	// lwz r3,30136(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 30136);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82bd26cc
	if (!cr6.eq) goto loc_82BD26CC;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82bd13e8
	ctx.lr = 0x82BD26C8;
	sub_82BD13E8(ctx, base);
	// lwz r3,30136(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 30136);
loc_82BD26CC:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82bd1768
	ctx.lr = 0x82BD26D4;
	sub_82BD1768(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82bd26a0
	if (cr6.eq) goto loc_82BD26A0;
loc_82BD26E0:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BD26EC"))) PPC_WEAK_FUNC(sub_82BD26EC);
PPC_FUNC_IMPL(__imp__sub_82BD26EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BD26F0"))) PPC_WEAK_FUNC(sub_82BD26F0);
PPC_FUNC_IMPL(__imp__sub_82BD26F0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82BD26F8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x831156e8
	ctx.lr = 0x82BD2708;
	sub_831156E8(ctx, base);
	// addi r11,r30,27744
	ctx.r11.s64 = ctx.r30.s64 + 27744;
	// lwz r29,52(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// rlwinm r28,r11,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r28,r29
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r29.u32);
	// bl 0x82bd0938
	ctx.lr = 0x82BD271C;
	sub_82BD0938(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bd279c
	if (cr6.eq) goto loc_82BD279C;
	// li r5,92
	ctx.r5.s64 = 92;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831ce980
	ctx.lr = 0x82BD2734;
	sub_831CE980(ctx, base);
	// lis r11,-31777
	ctx.r11.s64 = -2082537472;
	// lis r27,-31777
	ctx.r27.s64 = -2082537472;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,26956(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26956);
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r11,26980(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 26980);
	// mulli r30,r10,92
	ctx.r30.s64 = ctx.r10.s64 * 92;
	// lwzx r9,r30,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// add r8,r30,r11
	ctx.r8.u64 = ctx.r30.u64 + ctx.r11.u64;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// lwz r7,4(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// stw r7,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r7.u32);
	// lwz r6,8(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// stw r6,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// lwz r5,12(r8)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// stw r5,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r5.u32);
	// lwzx r4,r28,r29
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r29.u32);
	// bl 0x82bd0f20
	ctx.lr = 0x82BD277C;
	sub_82BD0F20(ctx, base);
	// stw r3,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,26980(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 26980);
	// add r3,r30,r11
	ctx.r3.u64 = ctx.r30.u64 + ctx.r11.u64;
	// lbz r11,88(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 88);
	// addi r3,r31,60
	ctx.r3.s64 = ctx.r31.s64 + 60;
	// stb r11,88(r31)
	PPC_STORE_U8(ctx.r31.u32 + 88, ctx.r11.u8);
	// bl 0x82bd2218
	ctx.lr = 0x82BD279C;
	sub_82BD2218(ctx, base);
loc_82BD279C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BD27A4"))) PPC_WEAK_FUNC(sub_82BD27A4);
PPC_FUNC_IMPL(__imp__sub_82BD27A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BD27A8"))) PPC_WEAK_FUNC(sub_82BD27A8);
PPC_FUNC_IMPL(__imp__sub_82BD27A8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82BD27B0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// bl 0x831156e8
	ctx.lr = 0x82BD27C4;
	sub_831156E8(ctx, base);
	// li r11,20
	ctx.r11.s64 = 20;
	// lwz r10,52(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// subfc r9,r11,r28
	xer.ca = ctx.r28.u32 >= ctx.r11.u32;
	ctx.r9.s64 = ctx.r28.s64 - ctx.r11.s64;
	// addis r29,r10,2
	ctx.r29.s64 = ctx.r10.s64 + 131072;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r29,r29,-20656
	ctx.r29.s64 = ctx.r29.s64 + -20656;
	// and r6,r7,r28
	ctx.r6.u64 = ctx.r7.u64 & ctx.r28.u64;
	// rlwinm r28,r6,4,0,27
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 4) & 0xFFFFFFF0;
	// lwzx r3,r28,r29
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r29.u32);
	// bl 0x82bd0938
	ctx.lr = 0x82BD27EC;
	sub_82BD0938(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// li r5,92
	ctx.r5.s64 = 92;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne cr6,0x82bd281c
	if (!cr6.eq) goto loc_82BD281C;
	// lis r11,-31777
	ctx.r11.s64 = -2082537472;
	// lis r10,-31777
	ctx.r10.s64 = -2082537472;
	// lwz r11,26964(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26964);
	// lwz r10,26992(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 26992);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mulli r11,r9,92
	ctx.r11.s64 = ctx.r9.s64 * 92;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_82BD281C:
	// bl 0x831ce980
	ctx.lr = 0x82BD2820;
	sub_831CE980(ctx, base);
	// lis r11,-31777
	ctx.r11.s64 = -2082537472;
	// lis r27,-31777
	ctx.r27.s64 = -2082537472;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,26920(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26920);
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r11,26980(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 26980);
	// subfc r9,r10,r30
	xer.ca = ctx.r30.u32 >= ctx.r10.u32;
	ctx.r9.s64 = ctx.r30.s64 - ctx.r10.s64;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r6,r7,r30
	ctx.r6.u64 = ctx.r7.u64 & ctx.r30.u64;
	// mulli r30,r6,92
	ctx.r30.s64 = ctx.r6.s64 * 92;
	// lwzx r5,r30,r11
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// add r4,r30,r11
	ctx.r4.u64 = ctx.r30.u64 + ctx.r11.u64;
	// stw r5,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r5.u32);
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// lwz r10,8(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// lwz r9,12(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// stw r9,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r9.u32);
	// lwzx r4,r28,r29
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r29.u32);
	// bl 0x82bd0f20
	ctx.lr = 0x82BD2874;
	sub_82BD0F20(ctx, base);
	// stw r3,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,26980(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 26980);
	// add r8,r30,r11
	ctx.r8.u64 = ctx.r30.u64 + ctx.r11.u64;
	// lbz r7,88(r8)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r8.u32 + 88);
	// addi r3,r31,60
	ctx.r3.s64 = ctx.r31.s64 + 60;
	// stb r7,88(r31)
	PPC_STORE_U8(ctx.r31.u32 + 88, ctx.r7.u8);
	// bl 0x82bd2218
	ctx.lr = 0x82BD2894;
	sub_82BD2218(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BD289C"))) PPC_WEAK_FUNC(sub_82BD289C);
PPC_FUNC_IMPL(__imp__sub_82BD289C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BD28A0"))) PPC_WEAK_FUNC(sub_82BD28A0);
PPC_FUNC_IMPL(__imp__sub_82BD28A0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82BD28A8;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r31,r3,40
	ctx.r31.s64 = ctx.r3.s64 + 40;
	// lwz r3,40(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// li r28,2
	ctx.r28.s64 = 2;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bd28e4
	if (cr6.eq) goto loc_82BD28E4;
	// addi r5,r31,12
	ctx.r5.s64 = ctx.r31.s64 + 12;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82bd1da0
	ctx.lr = 0x82BD28D4;
	sub_82BD1DA0(ctx, base);
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x825952b8
	ctx.lr = 0x82BD28E4;
	sub_825952B8(ctx, base);
loc_82BD28E4:
	// addi r30,r30,24
	ctx.r30.s64 = ctx.r30.s64 + 24;
	// li r29,0
	ctx.r29.s64 = 0;
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
	// stw r29,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r29.u32);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bd2924
	if (cr6.eq) goto loc_82BD2924;
	// addi r5,r30,12
	ctx.r5.s64 = ctx.r30.s64 + 12;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x82bd1da0
	ctx.lr = 0x82BD2914;
	sub_82BD1DA0(ctx, base);
	// stw r28,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r28.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x825952b8
	ctx.lr = 0x82BD2924;
	sub_825952B8(ctx, base);
loc_82BD2924:
	// stw r29,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r29.u32);
	// stw r29,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r29.u32);
	// stw r29,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r29.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BD2938"))) PPC_WEAK_FUNC(sub_82BD2938);
PPC_FUNC_IMPL(__imp__sub_82BD2938) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x82BD2940;
	__savegprlr_24(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,712
	ctx.r11.s64 = 46661632;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// ori r10,r11,22795
	ctx.r10.u64 = ctx.r11.u64 | 22795;
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// ble cr6,0x82bd2964
	if (!cr6.gt) goto loc_82BD2964;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,12056
	ctx.r3.s64 = ctx.r11.s64 + 12056;
	// bl 0x831cc150
	ctx.lr = 0x82BD2964;
	sub_831CC150(ctx, base);
loc_82BD2964:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r24,92
	ctx.r24.s64 = 92;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r8,r9,r24
	ctx.r8.s32 = PPCDivide(ctx.r9.s32, ctx.r24.s32);
	// cmplw cr6,r8,r4
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r4.u32, xer);
	// bge cr6,0x82bd2a24
	if (!cr6.lt) goto loc_82BD2A24;
	// li r25,2
	ctx.r25.s64 = 2;
	// mulli r26,r4,92
	ctx.r26.s64 = ctx.r4.s64 * 92;
	// stw r25,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r25.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595718
	ctx.lr = 0x82BD299C;
	sub_82595718(ctx, base);
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r28,4(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplw cr6,r30,r28
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r28.u32, xer);
	// beq cr6,0x82bd29d8
	if (cr6.eq) goto loc_82BD29D8;
loc_82BD29B4:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x82bd29c8
	if (cr6.eq) goto loc_82BD29C8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82bd1a28
	ctx.lr = 0x82BD29C8;
	sub_82BD1A28(ctx, base);
loc_82BD29C8:
	// addi r30,r30,92
	ctx.r30.s64 = ctx.r30.s64 + 92;
	// addi r29,r29,92
	ctx.r29.s64 = ctx.r29.s64 + 92;
	// cmplw cr6,r30,r28
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r28.u32, xer);
	// bne cr6,0x82bd29b4
	if (!cr6.eq) goto loc_82BD29B4;
loc_82BD29D8:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// subf r11,r3,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r3.s64;
	// divw r30,r11,r24
	ctx.r30.s32 = PPCDivide(ctx.r11.s32, ctx.r24.s32);
	// beq cr6,0x82bd2a0c
	if (cr6.eq) goto loc_82BD2A0C;
	// addi r5,r31,12
	ctx.r5.s64 = ctx.r31.s64 + 12;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x82bd1da0
	ctx.lr = 0x82BD29FC;
	sub_82BD1DA0(ctx, base);
	// stw r25,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r25.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x825952b8
	ctx.lr = 0x82BD2A0C;
	sub_825952B8(ctx, base);
loc_82BD2A0C:
	// mulli r11,r30,92
	ctx.r11.s64 = ctx.r30.s64 * 92;
	// stw r27,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r27.u32);
	// add r10,r26,r27
	ctx.r10.u64 = ctx.r26.u64 + ctx.r27.u64;
	// add r9,r11,r27
	ctx.r9.u64 = ctx.r11.u64 + ctx.r27.u64;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
loc_82BD2A24:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BD2A2C"))) PPC_WEAK_FUNC(sub_82BD2A2C);
PPC_FUNC_IMPL(__imp__sub_82BD2A2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BD2A30"))) PPC_WEAK_FUNC(sub_82BD2A30);
PPC_FUNC_IMPL(__imp__sub_82BD2A30) {
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
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r4,4(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r5,r4
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r4.u32, xer);
	// beq cr6,0x82bd2a7c
	if (cr6.eq) goto loc_82BD2A7C;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x82bd1cd8
	ctx.lr = 0x82BD2A64;
	sub_82BD1CD8(ctx, base);
	// addi r5,r31,12
	ctx.r5.s64 = ctx.r31.s64 + 12;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82bd1da0
	ctx.lr = 0x82BD2A78;
	sub_82BD1DA0(ctx, base);
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
loc_82BD2A7C:
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

__attribute__((alias("__imp__sub_82BD2A94"))) PPC_WEAK_FUNC(sub_82BD2A94);
PPC_FUNC_IMPL(__imp__sub_82BD2A94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BD2A98"))) PPC_WEAK_FUNC(sub_82BD2A98);
PPC_FUNC_IMPL(__imp__sub_82BD2A98) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,712
	ctx.r10.s64 = 46661632;
	// lwz r7,4(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r9,92
	ctx.r9.s64 = 92;
	// ori r8,r10,22795
	ctx.r8.u64 = ctx.r10.u64 | 22795;
	// subf r6,r11,r7
	ctx.r6.s64 = ctx.r7.s64 - ctx.r11.s64;
	// subf r5,r4,r8
	ctx.r5.s64 = ctx.r8.s64 - ctx.r4.s64;
	// divw r10,r6,r9
	ctx.r10.s32 = PPCDivide(ctx.r6.s32, ctx.r9.s32);
	// cmplw cr6,r5,r10
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r10.u32, xer);
	// bge cr6,0x82bd2acc
	if (!cr6.lt) goto loc_82BD2ACC;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,12056
	ctx.r3.s64 = ctx.r11.s64 + 12056;
	// b 0x831cc150
	sub_831CC150(ctx, base);
	return;
loc_82BD2ACC:
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
	// blt cr6,0x82bd2afc
	if (cr6.lt) goto loc_82BD2AFC;
	// add r4,r9,r11
	ctx.r4.u64 = ctx.r9.u64 + ctx.r11.u64;
loc_82BD2AFC:
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// bge cr6,0x82bd2b08
	if (!cr6.lt) goto loc_82BD2B08;
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
loc_82BD2B08:
	// b 0x82bd2938
	sub_82BD2938(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BD2B0C"))) PPC_WEAK_FUNC(sub_82BD2B0C);
PPC_FUNC_IMPL(__imp__sub_82BD2B0C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BD2B10"))) PPC_WEAK_FUNC(sub_82BD2B10);
PPC_FUNC_IMPL(__imp__sub_82BD2B10) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82BD2B18;
	__savegprlr_26(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,1489
	ctx.r11.s64 = 97583104;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// ori r10,r11,29789
	ctx.r10.u64 = ctx.r11.u64 | 29789;
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// ble cr6,0x82bd2b3c
	if (!cr6.gt) goto loc_82BD2B3C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,12056
	ctx.r3.s64 = ctx.r11.s64 + 12056;
	// bl 0x831cc150
	ctx.lr = 0x82BD2B3C;
	sub_831CC150(ctx, base);
loc_82BD2B3C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r26,44
	ctx.r26.s64 = 44;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r8,r9,r26
	ctx.r8.s32 = PPCDivide(ctx.r9.s32, ctx.r26.s32);
	// cmplw cr6,r8,r4
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r4.u32, xer);
	// bge cr6,0x82bd2be4
	if (!cr6.lt) goto loc_82BD2BE4;
	// li r27,2
	ctx.r27.s64 = 2;
	// mulli r28,r4,44
	ctx.r28.s64 = ctx.r4.s64 * 44;
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595718
	ctx.lr = 0x82BD2B74;
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
	// bl 0x82dd4b38
	ctx.lr = 0x82BD2B98;
	sub_82DD4B38(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// subf r11,r3,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r3.s64;
	// divw r26,r11,r26
	ctx.r26.s32 = PPCDivide(ctx.r11.s32, ctx.r26.s32);
	// beq cr6,0x82bd2bcc
	if (cr6.eq) goto loc_82BD2BCC;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x82bd1e30
	ctx.lr = 0x82BD2BBC;
	sub_82BD1E30(ctx, base);
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r27.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x825952b8
	ctx.lr = 0x82BD2BCC;
	sub_825952B8(ctx, base);
loc_82BD2BCC:
	// mulli r11,r26,44
	ctx.r11.s64 = ctx.r26.s64 * 44;
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
loc_82BD2BE4:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BD2BEC"))) PPC_WEAK_FUNC(sub_82BD2BEC);
PPC_FUNC_IMPL(__imp__sub_82BD2BEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BD2BF0"))) PPC_WEAK_FUNC(sub_82BD2BF0);
PPC_FUNC_IMPL(__imp__sub_82BD2BF0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82BD2BF8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,92
	ctx.r10.s64 = 92;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// lwz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r8,4(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// subf r7,r9,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r9.s64;
	// divw r4,r7,r10
	ctx.r4.s32 = PPCDivide(ctx.r7.s32, ctx.r10.s32);
	// bl 0x82bd1460
	ctx.lr = 0x82BD2C2C;
	sub_82BD1460(ctx, base);
	// clrlwi r6,r3,24
	ctx.r6.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x82bd2c74
	if (cr6.eq) goto loc_82BD2C74;
	// lwz r31,0(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r28,4(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r30,0(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplw cr6,r31,r28
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r28.u32, xer);
	// beq cr6,0x82bd2c70
	if (cr6.eq) goto loc_82BD2C70;
loc_82BD2C4C:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x82bd2c60
	if (cr6.eq) goto loc_82BD2C60;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82bd1a28
	ctx.lr = 0x82BD2C60;
	sub_82BD1A28(ctx, base);
loc_82BD2C60:
	// addi r31,r31,92
	ctx.r31.s64 = ctx.r31.s64 + 92;
	// addi r30,r30,92
	ctx.r30.s64 = ctx.r30.s64 + 92;
	// cmplw cr6,r31,r28
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r28.u32, xer);
	// bne cr6,0x82bd2c4c
	if (!cr6.eq) goto loc_82BD2C4C;
loc_82BD2C70:
	// stw r30,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r30.u32);
loc_82BD2C74:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BD2C80"))) PPC_WEAK_FUNC(sub_82BD2C80);
PPC_FUNC_IMPL(__imp__sub_82BD2C80) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82BD2C88;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplw cr6,r3,r4
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, xer);
	// beq cr6,0x82bd2e28
	if (cr6.eq) goto loc_82BD2E28;
	// lwz r3,0(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r29,92
	ctx.r29.s64 = 92;
	// lwz r8,4(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// subf r11,r3,r8
	ctx.r11.s64 = ctx.r8.s64 - ctx.r3.s64;
	// divw. r10,r11,r29
	ctx.r10.s32 = PPCDivide(ctx.r11.s32, ctx.r29.s32);
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x82bd2cc8
	if (!cr0.eq) goto loc_82BD2CC8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bd2a30
	ctx.lr = 0x82BD2CBC;
	sub_82BD2A30(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82BD2CC8:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// subf r9,r11,r4
	ctx.r9.s64 = ctx.r4.s64 - ctx.r11.s64;
	// divw r9,r9,r29
	ctx.r9.s32 = PPCDivide(ctx.r9.s32, ctx.r29.s32);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bgt cr6,0x82bd2d2c
	if (cr6.gt) goto loc_82BD2D2C;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// mr r4,r8
	ctx.r4.u64 = ctx.r8.u64;
	// bl 0x82bd1cd8
	ctx.lr = 0x82BD2CF0;
	sub_82BD1CD8(ctx, base);
	// addi r5,r31,12
	ctx.r5.s64 = ctx.r31.s64 + 12;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82bd1da0
	ctx.lr = 0x82BD2D00;
	sub_82BD1DA0(ctx, base);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// subf r8,r9,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r9.s64;
	// divw r7,r8,r29
	ctx.r7.s32 = PPCDivide(ctx.r8.s32, ctx.r29.s32);
	// mulli r10,r7,92
	ctx.r10.s64 = ctx.r7.s64 * 92;
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r6,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r6.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82BD2D2C:
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r7,r11,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r11.s64;
	// divw r6,r7,r29
	ctx.r6.s32 = PPCDivide(ctx.r7.s32, ctx.r29.s32);
	// cmplw cr6,r10,r6
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, xer);
	// bgt cr6,0x82bd2d9c
	if (cr6.gt) goto loc_82BD2D9C;
	// mulli r10,r9,92
	ctx.r10.s64 = ctx.r9.s64 * 92;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// add r29,r10,r3
	ctx.r29.u64 = ctx.r10.u64 + ctx.r3.u64;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82bd1cd8
	ctx.lr = 0x82BD2D58;
	sub_82BD1CD8(ctx, base);
	// lwz r28,4(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r30,4(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplw cr6,r29,r28
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r28.u32, xer);
	// beq cr6,0x82bd2d8c
	if (cr6.eq) goto loc_82BD2D8C;
loc_82BD2D68:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x82bd2d7c
	if (cr6.eq) goto loc_82BD2D7C;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82bd1a28
	ctx.lr = 0x82BD2D7C;
	sub_82BD1A28(ctx, base);
loc_82BD2D7C:
	// addi r29,r29,92
	ctx.r29.s64 = ctx.r29.s64 + 92;
	// addi r30,r30,92
	ctx.r30.s64 = ctx.r30.s64 + 92;
	// cmplw cr6,r29,r28
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r28.u32, xer);
	// bne cr6,0x82bd2d68
	if (!cr6.eq) goto loc_82BD2D68;
loc_82BD2D8C:
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82BD2D9C:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82bd2dc8
	if (cr6.eq) goto loc_82BD2DC8;
	// addi r5,r31,12
	ctx.r5.s64 = ctx.r31.s64 + 12;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82bd1da0
	ctx.lr = 0x82BD2DB4;
	sub_82BD1DA0(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82BD2DC8;
	sub_825952B8(ctx, base);
loc_82BD2DC8:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// divw r4,r9,r29
	ctx.r4.s32 = PPCDivide(ctx.r9.s32, ctx.r29.s32);
	// bl 0x82bd1460
	ctx.lr = 0x82BD2DE0;
	sub_82BD1460(ctx, base);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x82bd2e28
	if (cr6.eq) goto loc_82BD2E28;
	// lwz r28,4(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r30,0(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r29,0(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplw cr6,r30,r28
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r28.u32, xer);
	// beq cr6,0x82bd2e24
	if (cr6.eq) goto loc_82BD2E24;
loc_82BD2E00:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x82bd2e14
	if (cr6.eq) goto loc_82BD2E14;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82bd1a28
	ctx.lr = 0x82BD2E14;
	sub_82BD1A28(ctx, base);
loc_82BD2E14:
	// addi r30,r30,92
	ctx.r30.s64 = ctx.r30.s64 + 92;
	// addi r29,r29,92
	ctx.r29.s64 = ctx.r29.s64 + 92;
	// cmplw cr6,r30,r28
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r28.u32, xer);
	// bne cr6,0x82bd2e00
	if (!cr6.eq) goto loc_82BD2E00;
loc_82BD2E24:
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
loc_82BD2E28:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BD2E34"))) PPC_WEAK_FUNC(sub_82BD2E34);
PPC_FUNC_IMPL(__imp__sub_82BD2E34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BD2E38"))) PPC_WEAK_FUNC(sub_82BD2E38);
PPC_FUNC_IMPL(__imp__sub_82BD2E38) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82BD2E40;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r10,6
	ctx.r10.s64 = 6;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r11,r3,-4
	ctx.r11.s64 = ctx.r3.s64 + -4;
	// li r9,0
	ctx.r9.s64 = 0;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_82BD2E58:
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82bd2e58
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82BD2E58;
	// lwz r5,24(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// addi r31,r30,24
	ctx.r31.s64 = ctx.r30.s64 + 24;
	// lwz r4,28(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// cmplw cr6,r5,r4
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r4.u32, xer);
	// beq cr6,0x82bd2e98
	if (cr6.eq) goto loc_82BD2E98;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x82bd1cd8
	ctx.lr = 0x82BD2E80;
	sub_82BD1CD8(ctx, base);
	// addi r5,r31,12
	ctx.r5.s64 = ctx.r31.s64 + 12;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82bd1da0
	ctx.lr = 0x82BD2E94;
	sub_82BD1DA0(ctx, base);
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
loc_82BD2E98:
	// lwz r5,40(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// addi r31,r30,40
	ctx.r31.s64 = ctx.r30.s64 + 40;
	// lwz r4,44(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// cmplw cr6,r5,r4
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r4.u32, xer);
	// beq cr6,0x82bd2ed0
	if (cr6.eq) goto loc_82BD2ED0;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x82bd1cd8
	ctx.lr = 0x82BD2EB8;
	sub_82BD1CD8(ctx, base);
	// addi r5,r31,12
	ctx.r5.s64 = ctx.r31.s64 + 12;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82bd1da0
	ctx.lr = 0x82BD2ECC;
	sub_82BD1DA0(ctx, base);
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
loc_82BD2ED0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BD2ED8"))) PPC_WEAK_FUNC(sub_82BD2ED8);
PPC_FUNC_IMPL(__imp__sub_82BD2ED8) {
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
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, xer);
	// bge cr6,0x82bd2f10
	if (!cr6.lt) goto loc_82BD2F10;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r10,r4
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// ble cr6,0x82bd2f14
	if (!cr6.gt) goto loc_82BD2F14;
loc_82BD2F10:
	// li r10,0
	ctx.r10.s64 = 0;
loc_82BD2F14:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82bd2f64
	if (cr6.eq) goto loc_82BD2F64;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r9,92
	ctx.r9.s64 = 92;
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r7,r10,r30
	ctx.r7.s64 = ctx.r30.s64 - ctx.r10.s64;
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, xer);
	// divw r30,r7,r9
	ctx.r30.s32 = PPCDivide(ctx.r7.s32, ctx.r9.s32);
	// bne cr6,0x82bd2f48
	if (!cr6.eq) goto loc_82BD2F48;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bd2a98
	ctx.lr = 0x82BD2F48;
	sub_82BD2A98(ctx, base);
loc_82BD2F48:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bd2f90
	if (cr6.eq) goto loc_82BD2F90;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mulli r11,r30,92
	ctx.r11.s64 = ctx.r30.s64 * 92;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x82bd2f8c
	goto loc_82BD2F8C;
loc_82BD2F64:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82bd2f7c
	if (!cr6.eq) goto loc_82BD2F7C;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bd2a98
	ctx.lr = 0x82BD2F7C;
	sub_82BD2A98(ctx, base);
loc_82BD2F7C:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bd2f90
	if (cr6.eq) goto loc_82BD2F90;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_82BD2F8C:
	// bl 0x82bd1a28
	ctx.lr = 0x82BD2F90;
	sub_82BD1A28(ctx, base);
loc_82BD2F90:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r11,r11,92
	ctx.r11.s64 = ctx.r11.s64 + 92;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82BD2FB4"))) PPC_WEAK_FUNC(sub_82BD2FB4);
PPC_FUNC_IMPL(__imp__sub_82BD2FB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BD2FB8"))) PPC_WEAK_FUNC(sub_82BD2FB8);
PPC_FUNC_IMPL(__imp__sub_82BD2FB8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,1489
	ctx.r10.s64 = 97583104;
	// lwz r7,4(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r9,44
	ctx.r9.s64 = 44;
	// ori r8,r10,29789
	ctx.r8.u64 = ctx.r10.u64 | 29789;
	// subf r6,r11,r7
	ctx.r6.s64 = ctx.r7.s64 - ctx.r11.s64;
	// subf r5,r4,r8
	ctx.r5.s64 = ctx.r8.s64 - ctx.r4.s64;
	// divw r10,r6,r9
	ctx.r10.s32 = PPCDivide(ctx.r6.s32, ctx.r9.s32);
	// cmplw cr6,r5,r10
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r10.u32, xer);
	// bge cr6,0x82bd2fec
	if (!cr6.lt) goto loc_82BD2FEC;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,12056
	ctx.r3.s64 = ctx.r11.s64 + 12056;
	// b 0x831cc150
	sub_831CC150(ctx, base);
	return;
loc_82BD2FEC:
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
	// blt cr6,0x82bd301c
	if (cr6.lt) goto loc_82BD301C;
	// add r4,r9,r11
	ctx.r4.u64 = ctx.r9.u64 + ctx.r11.u64;
loc_82BD301C:
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// bge cr6,0x82bd3028
	if (!cr6.lt) goto loc_82BD3028;
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
loc_82BD3028:
	// b 0x82bd2b10
	sub_82BD2B10(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BD302C"))) PPC_WEAK_FUNC(sub_82BD302C);
PPC_FUNC_IMPL(__imp__sub_82BD302C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BD3030"))) PPC_WEAK_FUNC(sub_82BD3030);
PPC_FUNC_IMPL(__imp__sub_82BD3030) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82BD3038;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,8
	cr6.compare<uint32_t>(ctx.r3.u32, 8, xer);
	// beq cr6,0x82bd316c
	if (cr6.eq) goto loc_82BD316C;
	// cmplwi cr6,r3,66
	cr6.compare<uint32_t>(ctx.r3.u32, 66, xer);
	// ble cr6,0x82bd30b0
	if (!cr6.gt) goto loc_82BD30B0;
	// cmplwi cr6,r3,68
	cr6.compare<uint32_t>(ctx.r3.u32, 68, xer);
	// bgt cr6,0x82bd30b0
	if (cr6.gt) goto loc_82BD30B0;
	// lis r29,-31777
	ctx.r29.s64 = -2082537472;
	// li r31,0
	ctx.r31.s64 = 0;
	// lwz r11,26940(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 26940);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// ble cr6,0x82bd31b4
	if (!cr6.gt) goto loc_82BD31B4;
	// li r30,0
	ctx.r30.s64 = 0;
	// lis r28,-31777
	ctx.r28.s64 = -2082537472;
loc_82BD307C:
	// lwz r11,27004(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 27004);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// add r4,r30,r11
	ctx.r4.u64 = ctx.r30.u64 + ctx.r11.u64;
	// bl 0x82bd2ed8
	ctx.lr = 0x82BD308C;
	sub_82BD2ED8(ctx, base);
	// lwz r11,26940(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 26940);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,92
	ctx.r30.s64 = ctx.r30.s64 + 92;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// blt cr6,0x82bd307c
	if (cr6.lt) goto loc_82BD307C;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_82BD30B0:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82bd05e8
	ctx.lr = 0x82BD30B8;
	sub_82BD05E8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82bd3160
	if (cr6.eq) goto loc_82BD3160;
	// li r31,0
	ctx.r31.s64 = 0;
	// lis r30,-31777
	ctx.r30.s64 = -2082537472;
loc_82BD30CC:
	// lwz r11,27008(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 27008);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// add r4,r31,r11
	ctx.r4.u64 = ctx.r31.u64 + ctx.r11.u64;
	// bl 0x82bd2ed8
	ctx.lr = 0x82BD30DC;
	sub_82BD2ED8(ctx, base);
	// addi r31,r31,92
	ctx.r31.s64 = ctx.r31.s64 + 92;
	// cmplwi cr6,r31,184
	cr6.compare<uint32_t>(ctx.r31.u32, 184, xer);
	// blt cr6,0x82bd30cc
	if (cr6.lt) goto loc_82BD30CC;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82bd0d20
	ctx.lr = 0x82BD30F0;
	sub_82BD0D20(ctx, base);
	// cmplw cr6,r3,r29
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r29.u32, xer);
	// beq cr6,0x82bd31b4
	if (cr6.eq) goto loc_82BD31B4;
	// lis r10,-31777
	ctx.r10.s64 = -2082537472;
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r10,26944(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 26944);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82bd31b4
	if (cr6.eq) goto loc_82BD31B4;
	// lis r10,-31777
	ctx.r10.s64 = -2082537472;
	// lwz r8,27012(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 27012);
	// addi r10,r8,20
	ctx.r10.s64 = ctx.r8.s64 + 20;
loc_82BD311C:
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r7,r3
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r3.u32, xer);
	// beq cr6,0x82bd3144
	if (cr6.eq) goto loc_82BD3144;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,92
	ctx.r10.s64 = ctx.r10.s64 + 92;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// blt cr6,0x82bd311c
	if (cr6.lt) goto loc_82BD311C;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_82BD3144:
	// mulli r11,r11,92
	ctx.r11.s64 = ctx.r11.s64 * 92;
	// add r4,r11,r8
	ctx.r4.u64 = ctx.r11.u64 + ctx.r8.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82bd2ed8
	ctx.lr = 0x82BD3154;
	sub_82BD2ED8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_82BD3160:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_82BD316C:
	// lis r29,-31777
	ctx.r29.s64 = -2082537472;
	// li r31,0
	ctx.r31.s64 = 0;
	// lwz r11,26948(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 26948);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// ble cr6,0x82bd31b4
	if (!cr6.gt) goto loc_82BD31B4;
	// li r30,0
	ctx.r30.s64 = 0;
	// lis r28,-31777
	ctx.r28.s64 = -2082537472;
loc_82BD318C:
	// lwz r11,27016(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 27016);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// add r4,r30,r11
	ctx.r4.u64 = ctx.r30.u64 + ctx.r11.u64;
	// bl 0x82bd2ed8
	ctx.lr = 0x82BD319C;
	sub_82BD2ED8(ctx, base);
	// lwz r11,26948(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 26948);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,92
	ctx.r30.s64 = ctx.r30.s64 + 92;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// blt cr6,0x82bd318c
	if (cr6.lt) goto loc_82BD318C;
loc_82BD31B4:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BD31C0"))) PPC_WEAK_FUNC(sub_82BD31C0);
PPC_FUNC_IMPL(__imp__sub_82BD31C0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdac8
	ctx.lr = 0x82BD31C8;
	__savegprlr_20(ctx, base);
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x831156e8
	ctx.lr = 0x82BD31D4;
	sub_831156E8(ctx, base);
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// lwz r5,0(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addis r31,r11,2
	ctx.r31.s64 = ctx.r11.s64 + 131072;
	// lwz r4,4(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// addi r31,r31,-20656
	ctx.r31.s64 = ctx.r31.s64 + -20656;
	// cmplw cr6,r5,r4
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r4.u32, xer);
	// lwz r30,572(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 572);
	// beq cr6,0x82bd3218
	if (cr6.eq) goto loc_82BD3218;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x82bd1cd8
	ctx.lr = 0x82BD3200;
	sub_82BD1CD8(ctx, base);
	// addi r5,r29,12
	ctx.r5.s64 = ctx.r29.s64 + 12;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r4,4(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// bl 0x82bd1da0
	ctx.lr = 0x82BD3214;
	sub_82BD1DA0(ctx, base);
	// stw r28,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r28.u32);
loc_82BD3218:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x82bd3434
	if (cr6.eq) goto loc_82BD3434;
	// lis r11,-31777
	ctx.r11.s64 = -2082537472;
	// lis r10,930
	ctx.r10.s64 = 60948480;
	// addi r31,r31,320
	ctx.r31.s64 = ctx.r31.s64 + 320;
	// li r27,0
	ctx.r27.s64 = 0;
	// li r28,92
	ctx.r28.s64 = 92;
	// ori r23,r10,149
	ctx.r23.u64 = ctx.r10.u64 | 149;
	// li r21,2
	ctx.r21.s64 = 2;
	// lis r25,-31777
	ctx.r25.s64 = -2082537472;
	// li r22,15
	ctx.r22.s64 = 15;
	// lis r24,-31777
	ctx.r24.s64 = -2082537472;
	// addi r26,r11,26224
	ctx.r26.s64 = ctx.r11.s64 + 26224;
loc_82BD324C:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82bd0938
	ctx.lr = 0x82BD3254;
	sub_82BD0938(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bd3428
	if (cr6.eq) goto loc_82BD3428;
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// subf r8,r9,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r9.s64;
	// divw. r7,r8,r28
	ctx.r7.s32 = PPCDivide(ctx.r8.s32, ctx.r28.s32);
	cr0.compare<int32_t>(ctx.r7.s32, 0, xer);
	// beq 0x82bd32c0
	if (cr0.eq) goto loc_82BD32C0;
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// add r8,r27,r9
	ctx.r8.u64 = ctx.r27.u64 + ctx.r9.u64;
loc_82BD3288:
	// lwz r8,20(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 20);
	// cmplw cr6,r8,r7
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, xer);
	// beq cr6,0x82bd32bc
	if (cr6.eq) goto loc_82BD32BC;
	// lwz r8,4(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwz r5,0(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r11,r11,92
	ctx.r11.s64 = ctx.r11.s64 + 92;
	// subf r3,r5,r8
	ctx.r3.s64 = ctx.r8.s64 - ctx.r5.s64;
	// add r8,r11,r9
	ctx.r8.u64 = ctx.r11.u64 + ctx.r9.u64;
	// divw r5,r3,r28
	ctx.r5.s32 = PPCDivide(ctx.r3.s32, ctx.r28.s32);
	// cmplw cr6,r10,r5
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r5.u32, xer);
	// blt cr6,0x82bd3288
	if (cr6.lt) goto loc_82BD3288;
	// b 0x82bd32c0
	goto loc_82BD32C0;
loc_82BD32BC:
	// li r6,1
	ctx.r6.s64 = 1;
loc_82BD32C0:
	// clrlwi r11,r6,24
	ctx.r11.u64 = ctx.r6.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82bd3428
	if (!cr6.eq) goto loc_82BD3428;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82bd1a28
	ctx.lr = 0x82BD32D4;
	sub_82BD1A28(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r20,r11
	ctx.r20.u64 = ctx.r11.u64;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// bl 0x830ff290
	ctx.lr = 0x82BD32E4;
	sub_830FF290(ctx, base);
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// bl 0x830ff858
	ctx.lr = 0x82BD32EC;
	sub_830FF858(ctx, base);
	// cmplwi cr6,r3,6
	cr6.compare<uint32_t>(ctx.r3.u32, 6, xer);
	// bne cr6,0x82bd3324
	if (!cr6.eq) goto loc_82BD3324;
	// lwz r4,-72(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + -72);
	// stw r23,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r23.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82BD3300:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82bd3300
	if (!cr6.eq) goto loc_82BD3300;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x82BD3324;
	sub_8259CC28(ctx, base);
loc_82BD3324:
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,67
	cr6.compare<uint32_t>(ctx.r11.u32, 67, xer);
	// blt cr6,0x82bd338c
	if (cr6.lt) goto loc_82BD338C;
	// cmplwi cr6,r11,68
	cr6.compare<uint32_t>(ctx.r11.u32, 68, xer);
	// bgt cr6,0x82bd338c
	if (cr6.gt) goto loc_82BD338C;
	// lwz r11,26940(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 26940);
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82bd33cc
	if (cr6.eq) goto loc_82BD33CC;
	// lwz r7,27004(r25)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r25.u32 + 27004);
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r7,20
	ctx.r11.s64 = ctx.r7.s64 + 20;
loc_82BD3358:
	// lwz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r8,r6
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r6.u32, xer);
	// beq cr6,0x82bd3378
	if (cr6.eq) goto loc_82BD3378;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,92
	ctx.r11.s64 = ctx.r11.s64 + 92;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// blt cr6,0x82bd3358
	if (cr6.lt) goto loc_82BD3358;
	// b 0x82bd33cc
	goto loc_82BD33CC;
loc_82BD3378:
	// mulli r11,r10,92
	ctx.r11.s64 = ctx.r10.s64 * 92;
	// add r4,r11,r7
	ctx.r4.u64 = ctx.r11.u64 + ctx.r7.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82bd1af0
	ctx.lr = 0x82BD3388;
	sub_82BD1AF0(ctx, base);
	// b 0x82bd33cc
	goto loc_82BD33CC;
loc_82BD338C:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82bd05e8
	ctx.lr = 0x82BD3394;
	sub_82BD05E8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82bd33cc
	if (cr6.eq) goto loc_82BD33CC;
	// lwz r4,0(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82BD33A8:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82bd33a8
	if (!cr6.eq) goto loc_82BD33A8;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x82BD33CC;
	sub_8259CC28(ctx, base);
loc_82BD33CC:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82bd2ed8
	ctx.lr = 0x82BD33D8;
	sub_82BD2ED8(ctx, base);
	// lwz r11,176(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82bd33f4
	if (cr6.lt) goto loc_82BD33F4;
	// stw r21,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r21.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,156(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// bl 0x825952b8
	ctx.lr = 0x82BD33F4;
	sub_825952B8(ctx, base);
loc_82BD33F4:
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// stw r22,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r22.u32);
	// stw r27,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r27.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r27,156(r1)
	PPC_STORE_U8(ctx.r1.u32 + 156, ctx.r27.u8);
	// blt cr6,0x82bd341c
	if (cr6.lt) goto loc_82BD341C;
	// stw r21,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r21.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x825952b8
	ctx.lr = 0x82BD341C;
	sub_825952B8(ctx, base);
loc_82BD341C:
	// stw r22,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r22.u32);
	// stw r27,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r27.u32);
	// stb r27,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r27.u8);
loc_82BD3428:
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// addi r31,r31,24
	ctx.r31.s64 = ctx.r31.s64 + 24;
	// bne 0x82bd324c
	if (!cr0.eq) goto loc_82BD324C;
loc_82BD3434:
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x831cdb18
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BD343C"))) PPC_WEAK_FUNC(sub_82BD343C);
PPC_FUNC_IMPL(__imp__sub_82BD343C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BD3440"))) PPC_WEAK_FUNC(sub_82BD3440);
PPC_FUNC_IMPL(__imp__sub_82BD3440) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdac0
	ctx.lr = 0x82BD3448;
	__savegprlr_18(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r18,r3
	ctx.r18.u64 = ctx.r3.u64;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// mr r23,r5
	ctx.r23.u64 = ctx.r5.u64;
	// mr r21,r6
	ctx.r21.u64 = ctx.r6.u64;
	// mr r19,r7
	ctx.r19.u64 = ctx.r7.u64;
	// bl 0x831156e8
	ctx.lr = 0x82BD3464;
	sub_831156E8(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// lis r22,-31777
	ctx.r22.s64 = -2082537472;
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// lis r9,1
	ctx.r9.s64 = 65536;
	// stw r30,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r30.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// ori r20,r9,44880
	ctx.r20.u64 = ctx.r9.u64 | 44880;
	// lwz r11,26920(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 26920);
	// lwz r8,52(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	// add r28,r8,r20
	ctx.r28.u64 = ctx.r8.u64 + ctx.r20.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82bd2938
	ctx.lr = 0x82BD349C;
	sub_82BD2938(ctx, base);
	// lwz r7,572(r28)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r28.u32 + 572);
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// mr r27,r30
	ctx.r27.u64 = ctx.r30.u64;
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
	// cmpwi cr6,r7,0
	cr6.compare<int32_t>(ctx.r7.s32, 0, xer);
	// lwz r26,96(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// ble cr6,0x82bd34e0
	if (!cr6.gt) goto loc_82BD34E0;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82bd2350
	ctx.lr = 0x82BD34C4;
	sub_82BD2350(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82bd34e0
	if (cr6.eq) goto loc_82BD34E0;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x835977d8
	ctx.lr = 0x82BD34DC;
	sub_835977D8(ctx, base);
	// li r31,1
	ctx.r31.s64 = 1;
loc_82BD34E0:
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// mulli r11,r11,92
	ctx.r11.s64 = ctx.r11.s64 * 92;
	// add r29,r11,r26
	ctx.r29.u64 = ctx.r11.u64 + ctx.r26.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82bd26f0
	ctx.lr = 0x82BD3500;
	sub_82BD26F0(ctx, base);
	// clrlwi r25,r31,24
	ctx.r25.u64 = ctx.r31.u32 & 0xFF;
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(ctx.r25.u32, 0, xer);
	// beq cr6,0x82bd3538
	if (cr6.eq) goto loc_82BD3538;
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// lwz r10,20(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mulli r11,r9,92
	ctx.r11.s64 = ctx.r9.s64 * 92;
	// add r8,r11,r26
	ctx.r8.u64 = ctx.r11.u64 + ctx.r26.u64;
	// lwz r7,20(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 20);
	// cmplw cr6,r7,r10
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r10.u32, xer);
	// bne cr6,0x82bd3538
	if (!cr6.eq) goto loc_82BD3538;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82bd26f0
	ctx.lr = 0x82BD3538;
	sub_82BD26F0(ctx, base);
loc_82BD3538:
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x835977d8
	ctx.lr = 0x82BD3544;
	sub_835977D8(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lbz r10,589(r28)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r28.u32 + 589);
	// addi r29,r11,1
	ctx.r29.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// beq cr6,0x82bd358c
	if (cr6.eq) goto loc_82BD358C;
	// mulli r11,r29,92
	ctx.r11.s64 = ctx.r29.s64 * 92;
	// add r3,r11,r26
	ctx.r3.u64 = ctx.r11.u64 + ctx.r26.u64;
	// bl 0x82bd2580
	ctx.lr = 0x82BD3568;
	sub_82BD2580(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82bd358c
	if (cr6.eq) goto loc_82BD358C;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x835977d8
	ctx.lr = 0x82BD3580;
	sub_835977D8(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r29,r11,1
	ctx.r29.s64 = ctx.r11.s64 + 1;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
loc_82BD358C:
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(ctx.r25.u32, 0, xer);
	// bne cr6,0x82bd3644
	if (!cr6.eq) goto loc_82BD3644;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82bd27a8
	ctx.lr = 0x82BD35A4;
	sub_82BD27A8(ctx, base);
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// lwz r10,4(r23)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r23.u32 + 4);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// rlwinm r8,r9,0,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFC;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq cr6,0x82bd35ec
	if (cr6.eq) goto loc_82BD35EC;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,20(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 20);
	// mulli r11,r11,92
	ctx.r11.s64 = ctx.r11.s64 * 92;
	// add r9,r11,r26
	ctx.r9.u64 = ctx.r11.u64 + ctx.r26.u64;
	// lwz r8,20(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	// cmplw cr6,r8,r10
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, xer);
	// bne cr6,0x82bd35ec
	if (!cr6.eq) goto loc_82BD35EC;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// li r27,1
	ctx.r27.s64 = 1;
	// bl 0x82bd27a8
	ctx.lr = 0x82BD35EC;
	sub_82BD27A8(ctx, base);
loc_82BD35EC:
	// lwz r11,0(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// lwz r10,4(r21)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r21.u32 + 4);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// rlwinm r8,r9,0,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFC;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq cr6,0x82bd3634
	if (cr6.eq) goto loc_82BD3634;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,20(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 20);
	// mulli r11,r11,92
	ctx.r11.s64 = ctx.r11.s64 * 92;
	// add r9,r11,r26
	ctx.r9.u64 = ctx.r11.u64 + ctx.r26.u64;
	// lwz r8,20(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	// cmplw cr6,r8,r10
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, xer);
	// bne cr6,0x82bd3634
	if (!cr6.eq) goto loc_82BD3634;
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82bd27a8
	ctx.lr = 0x82BD3634;
	sub_82BD27A8(ctx, base);
loc_82BD3634:
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x835977d8
	ctx.lr = 0x82BD3640;
	sub_835977D8(ctx, base);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
loc_82BD3644:
	// lwz r11,26920(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 26920);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, xer);
	// bge cr6,0x82bd3748
	if (!cr6.lt) goto loc_82BD3748;
	// mulli r11,r29,92
	ctx.r11.s64 = ctx.r29.s64 * 92;
	// add r31,r11,r26
	ctx.r31.u64 = ctx.r11.u64 + ctx.r26.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bd27a8
	ctx.lr = 0x82BD366C;
	sub_82BD27A8(ctx, base);
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(ctx.r25.u32, 0, xer);
	// beq cr6,0x82bd36a8
	if (cr6.eq) goto loc_82BD36A8;
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mulli r11,r9,92
	ctx.r11.s64 = ctx.r9.s64 * 92;
	// add r8,r11,r26
	ctx.r8.u64 = ctx.r11.u64 + ctx.r26.u64;
	// lwz r7,20(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 20);
	// cmplw cr6,r7,r10
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r10.u32, xer);
	// bne cr6,0x82bd36a8
	if (!cr6.eq) goto loc_82BD36A8;
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bd27a8
	ctx.lr = 0x82BD36A8;
	sub_82BD27A8(ctx, base);
loc_82BD36A8:
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// lwz r10,4(r23)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r23.u32 + 4);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// rlwinm r8,r9,0,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFC;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq cr6,0x82bd36f0
	if (cr6.eq) goto loc_82BD36F0;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// mulli r11,r11,92
	ctx.r11.s64 = ctx.r11.s64 * 92;
	// add r9,r11,r26
	ctx.r9.u64 = ctx.r11.u64 + ctx.r26.u64;
	// lwz r8,20(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	// cmplw cr6,r8,r10
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, xer);
	// bne cr6,0x82bd36f0
	if (!cr6.eq) goto loc_82BD36F0;
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bd27a8
	ctx.lr = 0x82BD36F0;
	sub_82BD27A8(ctx, base);
loc_82BD36F0:
	// lwz r11,0(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// lwz r10,4(r21)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r21.u32 + 4);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// rlwinm r8,r9,0,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFC;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq cr6,0x82bd3738
	if (cr6.eq) goto loc_82BD3738;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// mulli r11,r11,92
	ctx.r11.s64 = ctx.r11.s64 * 92;
	// add r9,r11,r26
	ctx.r9.u64 = ctx.r11.u64 + ctx.r26.u64;
	// lwz r8,20(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	// cmplw cr6,r8,r10
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, xer);
	// bne cr6,0x82bd3738
	if (!cr6.eq) goto loc_82BD3738;
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bd27a8
	ctx.lr = 0x82BD3738;
	sub_82BD27A8(ctx, base);
loc_82BD3738:
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x835977d8
	ctx.lr = 0x82BD3744;
	sub_835977D8(ctx, base);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
loc_82BD3748:
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, xer);
	// addi r31,r27,-1
	ctx.r31.s64 = ctx.r27.s64 + -1;
	// bne cr6,0x82bd3758
	if (!cr6.eq) goto loc_82BD3758;
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
loc_82BD3758:
	// bl 0x831156e8
	ctx.lr = 0x82BD375C;
	sub_831156E8(ctx, base);
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// add r3,r11,r20
	ctx.r3.u64 = ctx.r11.u64 + ctx.r20.u64;
	// bl 0x83125da8
	ctx.lr = 0x82BD376C;
	sub_83125DA8(ctx, base);
	// lwz r11,26920(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 26920);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// ble cr6,0x82bd37a8
	if (!cr6.gt) goto loc_82BD37A8;
	// addi r29,r18,24
	ctx.r29.s64 = ctx.r18.s64 + 24;
	// mr r31,r26
	ctx.r31.u64 = ctx.r26.u64;
loc_82BD3784:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82bd2ed8
	ctx.lr = 0x82BD3790;
	sub_82BD2ED8(ctx, base);
	// lwz r11,26920(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 26920);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,92
	ctx.r31.s64 = ctx.r31.s64 + 92;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, xer);
	// blt cr6,0x82bd3784
	if (cr6.lt) goto loc_82BD3784;
loc_82BD37A8:
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(ctx.r26.u32, 0, xer);
	// beq cr6,0x82bd37d8
	if (cr6.eq) goto loc_82BD37D8;
	// addi r5,r1,108
	ctx.r5.s64 = ctx.r1.s64 + 108;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r4,100(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// bl 0x82bd1da0
	ctx.lr = 0x82BD37C4;
	sub_82BD1DA0(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x825952b8
	ctx.lr = 0x82BD37D8;
	sub_825952B8(ctx, base);
loc_82BD37D8:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x831cdb10
	__restgprlr_18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BD37E0"))) PPC_WEAK_FUNC(sub_82BD37E0);
PPC_FUNC_IMPL(__imp__sub_82BD37E0) {
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
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, xer);
	// bge cr6,0x82bd3818
	if (!cr6.lt) goto loc_82BD3818;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r10,r4
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// ble cr6,0x82bd381c
	if (!cr6.gt) goto loc_82BD381C;
loc_82BD3818:
	// li r10,0
	ctx.r10.s64 = 0;
loc_82BD381C:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82bd386c
	if (cr6.eq) goto loc_82BD386C;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r9,44
	ctx.r9.s64 = 44;
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r7,r10,r30
	ctx.r7.s64 = ctx.r30.s64 - ctx.r10.s64;
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, xer);
	// divw r30,r7,r9
	ctx.r30.s32 = PPCDivide(ctx.r7.s32, ctx.r9.s32);
	// bne cr6,0x82bd3850
	if (!cr6.eq) goto loc_82BD3850;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bd2fb8
	ctx.lr = 0x82BD3850;
	sub_82BD2FB8(ctx, base);
loc_82BD3850:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bd3898
	if (cr6.eq) goto loc_82BD3898;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mulli r11,r30,44
	ctx.r11.s64 = ctx.r30.s64 * 44;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x82bd3894
	goto loc_82BD3894;
loc_82BD386C:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82bd3884
	if (!cr6.eq) goto loc_82BD3884;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bd2fb8
	ctx.lr = 0x82BD3884;
	sub_82BD2FB8(ctx, base);
loc_82BD3884:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bd3898
	if (cr6.eq) goto loc_82BD3898;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_82BD3894:
	// bl 0x82bd19b0
	ctx.lr = 0x82BD3898;
	sub_82BD19B0(ctx, base);
loc_82BD3898:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r11,r11,44
	ctx.r11.s64 = ctx.r11.s64 + 44;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82BD38BC"))) PPC_WEAK_FUNC(sub_82BD38BC);
PPC_FUNC_IMPL(__imp__sub_82BD38BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BD38C0"))) PPC_WEAK_FUNC(sub_82BD38C0);
PPC_FUNC_IMPL(__imp__sub_82BD38C0) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r3,r3,24
	ctx.r3.s64 = ctx.r3.s64 + 24;
	// addi r4,r4,24
	ctx.r4.s64 = ctx.r4.s64 + 24;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// lwz r9,8(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// lwz r8,12(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// stw r8,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r8.u32);
	// lwz r7,16(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// stw r7,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r7.u32);
	// lwz r6,20(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// stw r6,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r6.u32);
	// bl 0x82bd2bf0
	ctx.lr = 0x82BD3918;
	sub_82BD2BF0(ctx, base);
	// addi r3,r31,40
	ctx.r3.s64 = ctx.r31.s64 + 40;
	// addi r4,r30,40
	ctx.r4.s64 = ctx.r30.s64 + 40;
	// bl 0x82bd2bf0
	ctx.lr = 0x82BD3924;
	sub_82BD2BF0(ctx, base);
	// lwz r5,56(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r5,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r5.u32);
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

__attribute__((alias("__imp__sub_82BD3948"))) PPC_WEAK_FUNC(sub_82BD3948);
PPC_FUNC_IMPL(__imp__sub_82BD3948) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82BD3950;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmplw cr6,r3,r4
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, xer);
	// beq cr6,0x82bd39cc
	if (cr6.eq) goto loc_82BD39CC;
	// addi r31,r3,8
	ctx.r31.s64 = ctx.r3.s64 + 8;
loc_82BD3968:
	// lwz r11,-8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// addi r4,r31,16
	ctx.r4.s64 = ctx.r31.s64 + 16;
	// addi r3,r30,24
	ctx.r3.s64 = ctx.r30.s64 + 24;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// lwz r10,-4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// stw r10,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r10.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r9,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r9.u32);
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r8,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r8.u32);
	// lwz r7,8(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r7,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r7.u32);
	// lwz r6,12(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stw r6,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r6.u32);
	// bl 0x82bd2c80
	ctx.lr = 0x82BD39A4;
	sub_82BD2C80(ctx, base);
	// addi r4,r31,32
	ctx.r4.s64 = ctx.r31.s64 + 32;
	// addi r3,r30,40
	ctx.r3.s64 = ctx.r30.s64 + 40;
	// bl 0x82bd2c80
	ctx.lr = 0x82BD39B0;
	sub_82BD2C80(ctx, base);
	// lwz r5,48(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// addi r31,r31,60
	ctx.r31.s64 = ctx.r31.s64 + 60;
	// addi r4,r31,-8
	ctx.r4.s64 = ctx.r31.s64 + -8;
	// stw r5,56(r30)
	PPC_STORE_U32(ctx.r30.u32 + 56, ctx.r5.u32);
	// cmplw cr6,r4,r29
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r29.u32, xer);
	// addi r30,r30,60
	ctx.r30.s64 = ctx.r30.s64 + 60;
	// bne cr6,0x82bd3968
	if (!cr6.eq) goto loc_82BD3968;
loc_82BD39CC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BD39D8"))) PPC_WEAK_FUNC(sub_82BD39D8);
PPC_FUNC_IMPL(__imp__sub_82BD39D8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdab0
	ctx.lr = 0x82BD39E0;
	__savegprlr_14(ctx, base);
	// stwu r1,-592(r1)
	ea = -592 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	ctx.r31.s64 = 0;
	// stw r3,612(r1)
	PPC_STORE_U32(ctx.r1.u32 + 612, ctx.r3.u32);
	// mr r20,r31
	ctx.r20.u64 = ctx.r31.u64;
	// stw r31,312(r1)
	PPC_STORE_U32(ctx.r1.u32 + 312, ctx.r31.u32);
	// mr r22,r31
	ctx.r22.u64 = ctx.r31.u64;
	// stw r31,360(r1)
	PPC_STORE_U32(ctx.r1.u32 + 360, ctx.r31.u32);
	// mr r19,r31
	ctx.r19.u64 = ctx.r31.u64;
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// mr r15,r31
	ctx.r15.u64 = ctx.r31.u64;
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// mr r14,r31
	ctx.r14.u64 = ctx.r31.u64;
	// stw r31,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r31.u32);
	// mr r16,r31
	ctx.r16.u64 = ctx.r31.u64;
	// stw r31,304(r1)
	PPC_STORE_U32(ctx.r1.u32 + 304, ctx.r31.u32);
	// mr r25,r31
	ctx.r25.u64 = ctx.r31.u64;
	// stw r31,308(r1)
	PPC_STORE_U32(ctx.r1.u32 + 308, ctx.r31.u32);
	// stw r31,352(r1)
	PPC_STORE_U32(ctx.r1.u32 + 352, ctx.r31.u32);
	// stw r31,356(r1)
	PPC_STORE_U32(ctx.r1.u32 + 356, ctx.r31.u32);
	// bl 0x82d86078
	ctx.lr = 0x82BD3A30;
	sub_82D86078(ctx, base);
	// li r17,-1
	ctx.r17.s64 = -1;
	// li r21,15
	ctx.r21.s64 = 15;
	// li r24,44
	ctx.r24.s64 = 44;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bd3ca8
	if (cr6.eq) goto loc_82BD3CA8;
	// lwz r27,132(r3)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82dd49d8
	ctx.lr = 0x82BD3A50;
	sub_82DD49D8(ctx, base);
	// li r10,-1
	ctx.r10.s64 = -1;
	// subfic r11,r3,2
	xer.ca = ctx.r3.u32 <= 2;
	ctx.r11.s64 = 2 - ctx.r3.s64;
	// addi r9,r3,-2
	ctx.r9.s64 = ctx.r3.s64 + -2;
	// subfze r11,r10
	temp.u8 = ~ctx.r10.u32 + xer.ca < xer.ca;
	ctx.r11.u64 = ~ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// srawi r10,r11,31
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 31;
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
	// xor r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
	// subf r7,r8,r10
	ctx.r7.s64 = ctx.r10.s64 - ctx.r8.s64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// srawi r6,r7,31
	xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7FFFFFFF) != 0);
	ctx.r6.s64 = ctx.r7.s32 >> 31;
	// and r11,r6,r9
	ctx.r11.u64 = ctx.r6.u64 & ctx.r9.u64;
	// addi r26,r11,2
	ctx.r26.s64 = ctx.r11.s64 + 2;
	// beq cr6,0x82bd3b24
	if (cr6.eq) goto loc_82BD3B24;
loc_82BD3A8C:
	// stw r31,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r31.u32);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// stw r17,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r17.u32);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// stw r31,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r31.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r31,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r31.u32);
	// stw r21,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r21.u32);
	// stw r31,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r31.u32);
	// stb r31,176(r1)
	PPC_STORE_U8(ctx.r1.u32 + 176, ctx.r31.u8);
	// bl 0x82dd4bd8
	ctx.lr = 0x82BD3AB8;
	sub_82DD4BD8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82bd3ae0
	if (!cr6.eq) goto loc_82BD3AE0;
	// lwz r11,196(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82bd3b0c
	if (cr6.lt) goto loc_82BD3B0C;
	// li r11,2
	ctx.r11.s64 = 2;
	// addi r3,r1,236
	ctx.r3.s64 = ctx.r1.s64 + 236;
	// stw r11,236(r1)
	PPC_STORE_U32(ctx.r1.u32 + 236, ctx.r11.u32);
	// b 0x82bd3b04
	goto loc_82BD3B04;
loc_82BD3AE0:
	// lwz r11,164(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// lwz r11,196(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// bne cr6,0x82bd3bcc
	if (!cr6.eq) goto loc_82BD3BCC;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82bd3b0c
	if (cr6.lt) goto loc_82BD3B0C;
	// li r11,2
	ctx.r11.s64 = 2;
	// addi r3,r1,212
	ctx.r3.s64 = ctx.r1.s64 + 212;
	// stw r11,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r11.u32);
loc_82BD3B04:
	// lwz r4,176(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// bl 0x825952b8
	ctx.lr = 0x82BD3B0C;
	sub_825952B8(ctx, base);
loc_82BD3B0C:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// stb r31,176(r1)
	PPC_STORE_U8(ctx.r1.u32 + 176, ctx.r31.u8);
	// stw r31,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r31.u32);
	// stw r21,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r21.u32);
	// cmplw cr6,r30,r28
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r28.u32, xer);
	// blt cr6,0x82bd3a8c
	if (cr6.lt) goto loc_82BD3A8C;
loc_82BD3B24:
	// li r23,2
	ctx.r23.s64 = 2;
loc_82BD3B28:
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82bd3cac
	if (cr6.eq) goto loc_82BD3CAC;
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(ctx.r26.u32, 0, xer);
	// beq cr6,0x82bd3cac
	if (cr6.eq) goto loc_82BD3CAC;
loc_82BD3B3C:
	// bl 0x831d4788
	ctx.lr = 0x82BD3B40;
	sub_831D4788(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x831d4788
	ctx.lr = 0x82BD3B48;
	sub_831D4788(ctx, base);
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// stw r17,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r17.u32);
	// mullw r11,r30,r3
	ctx.r11.s64 = int64_t(ctx.r30.s32) * int64_t(ctx.r3.s32);
	// stw r31,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r31.u32);
	// stw r31,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r31.u32);
	// stw r21,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r21.u32);
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// stb r31,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r31.u8);
	// divwu r10,r11,r28
	ctx.r10.u32 = PPCDivide(ctx.r11.u32, ctx.r28.u32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mullw r9,r10,r28
	ctx.r9.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r28.s32);
	// subf r5,r9,r11
	ctx.r5.s64 = ctx.r11.s64 - ctx.r9.s64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// twllei r28,0
	// bl 0x82dd4bd8
	ctx.lr = 0x82BD3B84;
	sub_82DD4BD8(ctx, base);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x82bd3c7c
	if (cr6.eq) goto loc_82BD3C7C;
	// subf r11,r15,r14
	ctx.r11.s64 = ctx.r14.s64 - ctx.r15.s64;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// divw. r9,r11,r24
	ctx.r9.s32 = PPCDivide(ctx.r11.s32, ctx.r24.s32);
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// beq 0x82bd3c00
	if (cr0.eq) goto loc_82BD3C00;
	// lwz r8,116(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// addi r10,r15,4
	ctx.r10.s64 = ctx.r15.s64 + 4;
loc_82BD3BAC:
	// lwz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r8,r6
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r6.u32, xer);
	// beq cr6,0x82bd3bfc
	if (cr6.eq) goto loc_82BD3BFC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,44
	ctx.r10.s64 = ctx.r10.s64 + 44;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// blt cr6,0x82bd3bac
	if (cr6.lt) goto loc_82BD3BAC;
	// b 0x82bd3c00
	goto loc_82BD3C00;
loc_82BD3BCC:
	// li r29,1
	ctx.r29.s64 = 1;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// li r23,2
	ctx.r23.s64 = 2;
	// blt cr6,0x82bd3bec
	if (cr6.lt) goto loc_82BD3BEC;
	// stw r23,288(r1)
	PPC_STORE_U32(ctx.r1.u32 + 288, ctx.r23.u32);
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// lwz r4,176(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// bl 0x825952b8
	ctx.lr = 0x82BD3BEC;
	sub_825952B8(ctx, base);
loc_82BD3BEC:
	// stw r21,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r21.u32);
	// stw r31,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r31.u32);
	// stb r31,176(r1)
	PPC_STORE_U8(ctx.r1.u32 + 176, ctx.r31.u8);
	// b 0x82bd3b28
	goto loc_82BD3B28;
loc_82BD3BFC:
	// li r7,1
	ctx.r7.s64 = 1;
loc_82BD3C00:
	// clrlwi r11,r7,24
	ctx.r11.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82bd3c2c
	if (cr6.eq) goto loc_82BD3C2C;
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82bd3c5c
	if (cr6.lt) goto loc_82BD3C5C;
	// stw r23,284(r1)
	PPC_STORE_U32(ctx.r1.u32 + 284, ctx.r23.u32);
	// addi r3,r1,284
	ctx.r3.s64 = ctx.r1.s64 + 284;
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x825952b8
	ctx.lr = 0x82BD3C28;
	sub_825952B8(ctx, base);
	// b 0x82bd3c5c
	goto loc_82BD3C5C;
loc_82BD3C2C:
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// bl 0x82bd37e0
	ctx.lr = 0x82BD3C38;
	sub_82BD37E0(ctx, base);
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82bd3c54
	if (cr6.lt) goto loc_82BD3C54;
	// stw r23,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r23.u32);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x825952b8
	ctx.lr = 0x82BD3C54;
	sub_825952B8(ctx, base);
loc_82BD3C54:
	// lwz r14,308(r1)
	ctx.r14.u64 = PPC_LOAD_U32(ctx.r1.u32 + 308);
	// lwz r15,304(r1)
	ctx.r15.u64 = PPC_LOAD_U32(ctx.r1.u32 + 304);
loc_82BD3C5C:
	// subf r11,r15,r14
	ctx.r11.s64 = ctx.r14.s64 - ctx.r15.s64;
	// stb r31,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r31.u8);
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// divw r10,r11,r24
	ctx.r10.s32 = PPCDivide(ctx.r11.s32, ctx.r24.s32);
	// stw r21,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r21.u32);
	// cmplw cr6,r10,r26
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r26.u32, xer);
	// blt cr6,0x82bd3b3c
	if (cr6.lt) goto loc_82BD3B3C;
	// b 0x82bd3cac
	goto loc_82BD3CAC;
loc_82BD3C7C:
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82bd3c98
	if (cr6.lt) goto loc_82BD3C98;
	// stw r23,216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 216, ctx.r23.u32);
	// addi r3,r1,216
	ctx.r3.s64 = ctx.r1.s64 + 216;
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x825952b8
	ctx.lr = 0x82BD3C98;
	sub_825952B8(ctx, base);
loc_82BD3C98:
	// stw r21,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r21.u32);
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// stb r31,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r31.u8);
	// b 0x82bd3cac
	goto loc_82BD3CAC;
loc_82BD3CA8:
	// li r23,2
	ctx.r23.s64 = 2;
loc_82BD3CAC:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,14563
	ctx.r10.s64 = 954400768;
	// addi r18,r11,-18428
	ctx.r18.s64 = ctx.r11.s64 + -18428;
	// ori r30,r10,36409
	ctx.r30.u64 = ctx.r10.u64 | 36409;
loc_82BD3CBC:
	// bl 0x831d4788
	ctx.lr = 0x82BD3CC0;
	sub_831D4788(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x831d4788
	ctx.lr = 0x82BD3CC8;
	sub_831D4788(ctx, base);
	// mullw r8,r29,r3
	ctx.r8.s64 = int64_t(ctx.r29.s32) * int64_t(ctx.r3.s32);
	// mulhwu r7,r8,r30
	ctx.r7.u64 = (uint64_t(ctx.r8.u32) * uint64_t(ctx.r30.u32)) >> 32;
	// rlwinm r11,r7,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 30) & 0x3FFFFFFF;
	// subf r6,r16,r25
	ctx.r6.s64 = ctx.r25.s64 - ctx.r16.s64;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// srawi. r9,r6,2
	xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r6.s32 >> 2;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// rlwinm r4,r5,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// subf r8,r4,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r4.s64;
	// beq 0x82bd3d2c
	if (cr0.eq) goto loc_82BD3D2C;
	// addi r7,r18,-108
	ctx.r7.s64 = ctx.r18.s64 + -108;
	// rlwinm r5,r8,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r11,r16
	ctx.r11.u64 = ctx.r16.u64;
	// lwzx r7,r5,r7
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r7.u32);
loc_82BD3D08:
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r7,r5
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r5.u32, xer);
	// beq cr6,0x82bd3d28
	if (cr6.eq) goto loc_82BD3D28;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// blt cr6,0x82bd3d08
	if (cr6.lt) goto loc_82BD3D08;
	// b 0x82bd3d2c
	goto loc_82BD3D2C;
loc_82BD3D28:
	// li r6,1
	ctx.r6.s64 = 1;
loc_82BD3D2C:
	// clrlwi r11,r6,24
	ctx.r11.u64 = ctx.r6.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82bd3d54
	if (!cr6.eq) goto loc_82BD3D54;
	// addi r11,r18,-108
	ctx.r11.s64 = ctx.r18.s64 + -108;
	// rlwinm r10,r8,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x835977d8
	ctx.lr = 0x82BD3D4C;
	sub_835977D8(ctx, base);
	// lwz r25,356(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 356);
	// lwz r16,352(r1)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r1.u32 + 352);
loc_82BD3D54:
	// subf r11,r16,r25
	ctx.r11.s64 = ctx.r25.s64 - ctx.r16.s64;
	// srawi r28,r11,2
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r28.s64 = ctx.r11.s32 >> 2;
	// cmplwi cr6,r28,6
	cr6.compare<uint32_t>(ctx.r28.u32, 6, xer);
	// blt cr6,0x82bd3cbc
	if (cr6.lt) goto loc_82BD3CBC;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// beq cr6,0x82bd3ddc
	if (cr6.eq) goto loc_82BD3DDC;
	// mr r30,r16
	ctx.r30.u64 = ctx.r16.u64;
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
loc_82BD3D74:
	// stw r21,424(r1)
	PPC_STORE_U32(ctx.r1.u32 + 424, ctx.r21.u32);
	// addi r3,r1,404
	ctx.r3.s64 = ctx.r1.s64 + 404;
	// stw r31,420(r1)
	PPC_STORE_U32(ctx.r1.u32 + 420, ctx.r31.u32);
	// stb r31,404(r1)
	PPC_STORE_U8(ctx.r1.u32 + 404, ctx.r31.u8);
	// stw r23,400(r1)
	PPC_STORE_U32(ctx.r1.u32 + 400, ctx.r23.u32);
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x82d04220
	ctx.lr = 0x82BD3D90;
	sub_82D04220(ctx, base);
	// addi r4,r1,400
	ctx.r4.s64 = ctx.r1.s64 + 400;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x830f6558
	ctx.lr = 0x82BD3D9C;
	sub_830F6558(ctx, base);
	// lwz r11,424(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 424);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82bd3db8
	if (cr6.lt) goto loc_82BD3DB8;
	// stw r23,232(r1)
	PPC_STORE_U32(ctx.r1.u32 + 232, ctx.r23.u32);
	// addi r3,r1,232
	ctx.r3.s64 = ctx.r1.s64 + 232;
	// lwz r4,404(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 404);
	// bl 0x825952b8
	ctx.lr = 0x82BD3DB8;
	sub_825952B8(ctx, base);
loc_82BD3DB8:
	// addic. r29,r29,-1
	xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// stw r21,424(r1)
	PPC_STORE_U32(ctx.r1.u32 + 424, ctx.r21.u32);
	// stw r31,420(r1)
	PPC_STORE_U32(ctx.r1.u32 + 420, ctx.r31.u32);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// stb r31,404(r1)
	PPC_STORE_U8(ctx.r1.u32 + 404, ctx.r31.u8);
	// bne 0x82bd3d74
	if (!cr0.eq) goto loc_82BD3D74;
	// lwz r19,104(r1)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r22,100(r1)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r20,96(r1)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
loc_82BD3DDC:
	// subf r11,r15,r14
	ctx.r11.s64 = ctx.r14.s64 - ctx.r15.s64;
	// divw. r26,r11,r24
	ctx.r26.s32 = PPCDivide(ctx.r11.s32, ctx.r24.s32);
	cr0.compare<int32_t>(ctx.r26.s32, 0, xer);
	// beq 0x82bd3ff8
	if (cr0.eq) goto loc_82BD3FF8;
	// divwu r24,r28,r26
	ctx.r24.u32 = PPCDivide(ctx.r28.u32, ctx.r26.u32);
	// twllei r26,0
	// mr r27,r31
	ctx.r27.u64 = ctx.r31.u64;
	// mr r29,r24
	ctx.r29.u64 = ctx.r24.u64;
	// mr r30,r20
	ctx.r30.u64 = ctx.r20.u64;
	// cmplw cr6,r20,r22
	cr6.compare<uint32_t>(ctx.r20.u32, ctx.r22.u32, xer);
	// beq cr6,0x82bd3f74
	if (cr6.eq) goto loc_82BD3F74;
	// lis r11,2047
	ctx.r11.s64 = 134152192;
	// lis r10,2047
	ctx.r10.s64 = 134152192;
	// mr r28,r15
	ctx.r28.u64 = ctx.r15.u64;
	// ori r25,r11,65534
	ctx.r25.u64 = ctx.r11.u64 | 65534;
	// ori r23,r10,65535
	ctx.r23.u64 = ctx.r10.u64 | 65535;
loc_82BD3E18:
	// cmplw cr6,r29,r24
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r24.u32, xer);
	// bne cr6,0x82bd3f58
	if (!cr6.eq) goto loc_82BD3F58;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r6,r17
	ctx.r6.u64 = ctx.r17.u64;
	// stw r21,344(r1)
	PPC_STORE_U32(ctx.r1.u32 + 344, ctx.r21.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r31,340(r1)
	PPC_STORE_U32(ctx.r1.u32 + 340, ctx.r31.u32);
	// addi r4,r28,16
	ctx.r4.s64 = ctx.r28.s64 + 16;
	// stb r31,324(r1)
	PPC_STORE_U8(ctx.r1.u32 + 324, ctx.r31.u8);
	// addi r3,r1,324
	ctx.r3.s64 = ctx.r1.s64 + 324;
	// stw r11,320(r1)
	PPC_STORE_U32(ctx.r1.u32 + 320, ctx.r11.u32);
	// bl 0x8259cb28
	ctx.lr = 0x82BD3E48;
	sub_8259CB28(ctx, base);
	// subf r10,r20,r30
	ctx.r10.s64 = ctx.r30.s64 - ctx.r20.s64;
	// cmplw cr6,r22,r19
	cr6.compare<uint32_t>(ctx.r22.u32, ctx.r19.u32, xer);
	// srawi r30,r10,5
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1F) != 0);
	ctx.r30.s64 = ctx.r10.s32 >> 5;
	// bne cr6,0x82bd3eb4
	if (!cr6.eq) goto loc_82BD3EB4;
	// subf r11,r20,r22
	ctx.r11.s64 = ctx.r22.s64 - ctx.r20.s64;
	// srawi r11,r11,5
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1F) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 5;
	// cmplw cr6,r11,r25
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r25.u32, xer);
	// bgt cr6,0x82bd4098
	if (cr6.gt) goto loc_82BD4098;
	// subf r10,r20,r19
	ctx.r10.s64 = ctx.r19.s64 - ctx.r20.s64;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// srawi r11,r10,5
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1F) != 0);
	ctx.r11.s64 = ctx.r10.s32 >> 5;
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, xer);
	// ble cr6,0x82bd3eb4
	if (!cr6.gt) goto loc_82BD3EB4;
	// rlwinm r10,r11,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// subf r8,r10,r23
	ctx.r8.s64 = ctx.r23.s64 - ctx.r10.s64;
	// cmplw cr6,r8,r11
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, xer);
	// blt cr6,0x82bd3e94
	if (cr6.lt) goto loc_82BD3E94;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_82BD3E94:
	// cmplw cr6,r4,r9
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, xer);
	// bge cr6,0x82bd3ea0
	if (!cr6.lt) goto loc_82BD3EA0;
	// mr r4,r9
	ctx.r4.u64 = ctx.r9.u64;
loc_82BD3EA0:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x830f62f8
	ctx.lr = 0x82BD3EA8;
	sub_830F62F8(ctx, base);
	// lwz r19,104(r1)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r22,100(r1)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r20,96(r1)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
loc_82BD3EB4:
	// cmplwi cr6,r22,0
	cr6.compare<uint32_t>(ctx.r22.u32, 0, xer);
	// beq cr6,0x82bd3ee4
	if (cr6.eq) goto loc_82BD3EE4;
	// lwz r11,320(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 320);
	// addi r3,r22,4
	ctx.r3.s64 = ctx.r22.s64 + 4;
	// mr r6,r17
	ctx.r6.u64 = ctx.r17.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,324
	ctx.r4.s64 = ctx.r1.s64 + 324;
	// stw r11,0(r22)
	PPC_STORE_U32(ctx.r22.u32 + 0, ctx.r11.u32);
	// stw r21,24(r22)
	PPC_STORE_U32(ctx.r22.u32 + 24, ctx.r21.u32);
	// stw r31,20(r22)
	PPC_STORE_U32(ctx.r22.u32 + 20, ctx.r31.u32);
	// stb r31,4(r22)
	PPC_STORE_U8(ctx.r22.u32 + 4, ctx.r31.u8);
	// bl 0x8259cb28
	ctx.lr = 0x82BD3EE4;
	sub_8259CB28(ctx, base);
loc_82BD3EE4:
	// addi r22,r22,32
	ctx.r22.s64 = ctx.r22.s64 + 32;
	// rlwinm r11,r30,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 5) & 0xFFFFFFE0;
	// addi r4,r22,-32
	ctx.r4.s64 = ctx.r22.s64 + -32;
	// stw r22,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r22.u32);
	// add r30,r11,r20
	ctx.r30.u64 = ctx.r11.u64 + ctx.r20.u64;
	// cmplw cr6,r30,r4
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r4.u32, xer);
	// beq cr6,0x82bd3f1c
	if (cr6.eq) goto loc_82BD3F1C;
	// cmplw cr6,r4,r22
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r22.u32, xer);
	// beq cr6,0x82bd3f1c
	if (cr6.eq) goto loc_82BD3F1C;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82bd2140
	ctx.lr = 0x82BD3F1C;
	sub_82BD2140(ctx, base);
loc_82BD3F1C:
	// lwz r11,344(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 344);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r28,r28,44
	ctx.r28.s64 = ctx.r28.s64 + 44;
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82bd3f48
	if (cr6.lt) goto loc_82BD3F48;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,324(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 324);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// stw r11,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82BD3F48;
	sub_825952B8(ctx, base);
loc_82BD3F48:
	// stw r21,344(r1)
	PPC_STORE_U32(ctx.r1.u32 + 344, ctx.r21.u32);
	// stw r31,340(r1)
	PPC_STORE_U32(ctx.r1.u32 + 340, ctx.r31.u32);
	// stb r31,324(r1)
	PPC_STORE_U8(ctx.r1.u32 + 324, ctx.r31.u8);
	// b 0x82bd3f5c
	goto loc_82BD3F5C;
loc_82BD3F58:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
loc_82BD3F5C:
	// addi r30,r30,32
	ctx.r30.s64 = ctx.r30.s64 + 32;
	// cmplw cr6,r27,r26
	cr6.compare<uint32_t>(ctx.r27.u32, ctx.r26.u32, xer);
	// bge cr6,0x82bd3f70
	if (!cr6.lt) goto loc_82BD3F70;
	// cmplw cr6,r30,r22
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r22.u32, xer);
	// bne cr6,0x82bd3e18
	if (!cr6.eq) goto loc_82BD3E18;
loc_82BD3F70:
	// li r23,2
	ctx.r23.s64 = 2;
loc_82BD3F74:
	// cmplw cr6,r27,r26
	cr6.compare<uint32_t>(ctx.r27.u32, ctx.r26.u32, xer);
	// bge cr6,0x82bd3ff8
	if (!cr6.lt) goto loc_82BD3FF8;
	// mulli r11,r27,44
	ctx.r11.s64 = ctx.r27.s64 * 44;
	// add r30,r11,r15
	ctx.r30.u64 = ctx.r11.u64 + ctx.r15.u64;
	// subf r29,r27,r26
	ctx.r29.s64 = ctx.r26.s64 - ctx.r27.s64;
loc_82BD3F88:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r6,r17
	ctx.r6.u64 = ctx.r17.u64;
	// stw r21,392(r1)
	PPC_STORE_U32(ctx.r1.u32 + 392, ctx.r21.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r31,388(r1)
	PPC_STORE_U32(ctx.r1.u32 + 388, ctx.r31.u32);
	// addi r4,r30,16
	ctx.r4.s64 = ctx.r30.s64 + 16;
	// stb r31,372(r1)
	PPC_STORE_U8(ctx.r1.u32 + 372, ctx.r31.u8);
	// addi r3,r1,372
	ctx.r3.s64 = ctx.r1.s64 + 372;
	// stw r11,368(r1)
	PPC_STORE_U32(ctx.r1.u32 + 368, ctx.r11.u32);
	// bl 0x8259cb28
	ctx.lr = 0x82BD3FB0;
	sub_8259CB28(ctx, base);
	// addi r4,r1,368
	ctx.r4.s64 = ctx.r1.s64 + 368;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x830f6558
	ctx.lr = 0x82BD3FBC;
	sub_830F6558(ctx, base);
	// lwz r10,392(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 392);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82bd3fd8
	if (cr6.lt) goto loc_82BD3FD8;
	// stw r23,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r23.u32);
	// addi r3,r1,228
	ctx.r3.s64 = ctx.r1.s64 + 228;
	// lwz r4,372(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 372);
	// bl 0x825952b8
	ctx.lr = 0x82BD3FD8;
	sub_825952B8(ctx, base);
loc_82BD3FD8:
	// addic. r29,r29,-1
	xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// stw r21,392(r1)
	PPC_STORE_U32(ctx.r1.u32 + 392, ctx.r21.u32);
	// stw r31,388(r1)
	PPC_STORE_U32(ctx.r1.u32 + 388, ctx.r31.u32);
	// addi r30,r30,44
	ctx.r30.s64 = ctx.r30.s64 + 44;
	// stb r31,372(r1)
	PPC_STORE_U8(ctx.r1.u32 + 372, ctx.r31.u8);
	// bne 0x82bd3f88
	if (!cr0.eq) goto loc_82BD3F88;
	// lwz r22,100(r1)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r20,96(r1)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
loc_82BD3FF8:
	// lwz r27,612(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 612);
	// lwz r29,0(r27)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r28,4(r27)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// cmplw cr6,r29,r28
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r28.u32, xer);
	// beq cr6,0x82bd4054
	if (cr6.eq) goto loc_82BD4054;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
	// cmplw cr6,r28,r28
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r28.u32, xer);
	// beq cr6,0x82bd403c
	if (cr6.eq) goto loc_82BD403C;
loc_82BD4018:
	// mr r6,r17
	ctx.r6.u64 = ctx.r17.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8259cb28
	ctx.lr = 0x82BD402C;
	sub_8259CB28(ctx, base);
	// addi r30,r30,28
	ctx.r30.s64 = ctx.r30.s64 + 28;
	// addi r29,r29,28
	ctx.r29.s64 = ctx.r29.s64 + 28;
	// cmplw cr6,r30,r28
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r28.u32, xer);
	// bne cr6,0x82bd4018
	if (!cr6.eq) goto loc_82BD4018;
loc_82BD403C:
	// addi r5,r27,12
	ctx.r5.s64 = ctx.r27.s64 + 12;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,4(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// bl 0x838adab0
	ctx.lr = 0x82BD4050;
	sub_838ADAB0(ctx, base);
	// stw r29,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r29.u32);
loc_82BD4054:
	// subf r11,r20,r22
	ctx.r11.s64 = ctx.r22.s64 - ctx.r20.s64;
	// srawi. r11,r11,5
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1F) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 5;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x82bd414c
	if (cr0.eq) goto loc_82BD414C;
	// addi r30,r20,4
	ctx.r30.s64 = ctx.r20.s64 + 4;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
loc_82BD4068:
	// stw r21,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r21.u32);
	// addi r4,r18,-714
	ctx.r4.s64 = ctx.r18.s64 + -714;
	// stw r31,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r31.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r31,256(r1)
	PPC_STORE_U8(ctx.r1.u32 + 256, ctx.r31.u8);
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x8259cc28
	ctx.lr = 0x82BD4084;
	sub_8259CC28(ctx, base);
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82bd40a4
	if (cr6.lt) goto loc_82BD40A4;
	// lwz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// b 0x82bd40a8
	goto loc_82BD40A8;
loc_82BD4098:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,12056
	ctx.r3.s64 = ctx.r11.s64 + 12056;
	// bl 0x831cc150
	ctx.lr = 0x82BD40A4;
	sub_831CC150(ctx, base);
loc_82BD40A4:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
loc_82BD40A8:
	// lwz r11,-4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4);
	// lis r4,550
	ctx.r4.s64 = 36044800;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// beq cr6,0x82bd40d0
	if (cr6.eq) goto loc_82BD40D0;
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// beq cr6,0x82bd40c8
	if (cr6.eq) goto loc_82BD40C8;
	// ori r4,r4,571
	ctx.r4.u64 = ctx.r4.u64 | 571;
	// b 0x82bd40d4
	goto loc_82BD40D4;
loc_82BD40C8:
	// ori r4,r4,577
	ctx.r4.u64 = ctx.r4.u64 | 577;
	// b 0x82bd40d4
	goto loc_82BD40D4;
loc_82BD40D0:
	// ori r4,r4,578
	ctx.r4.u64 = ctx.r4.u64 | 578;
loc_82BD40D4:
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x82d042a8
	ctx.lr = 0x82BD40DC;
	sub_82D042A8(ctx, base);
	// addi r4,r18,-28
	ctx.r4.s64 = ctx.r18.s64 + -28;
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x825a1eb8
	ctx.lr = 0x82BD40EC;
	sub_825A1EB8(ctx, base);
	// addi r4,r18,-24
	ctx.r4.s64 = ctx.r18.s64 + -24;
	// li r5,20
	ctx.r5.s64 = 20;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x825a1eb8
	ctx.lr = 0x82BD40FC;
	sub_825A1EB8(ctx, base);
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x825a1eb8
	ctx.lr = 0x82BD410C;
	sub_825A1EB8(ctx, base);
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8291fdc8
	ctx.lr = 0x82BD4118;
	sub_8291FDC8(ctx, base);
	// lwz r11,276(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82bd4134
	if (cr6.lt) goto loc_82BD4134;
	// stw r23,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r23.u32);
	// addi r3,r1,244
	ctx.r3.s64 = ctx.r1.s64 + 244;
	// lwz r4,256(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 256);
	// bl 0x825952b8
	ctx.lr = 0x82BD4134;
	sub_825952B8(ctx, base);
loc_82BD4134:
	// addic. r29,r29,-1
	xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// stw r21,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r21.u32);
	// stw r31,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r31.u32);
	// addi r30,r30,32
	ctx.r30.s64 = ctx.r30.s64 + 32;
	// stb r31,256(r1)
	PPC_STORE_U8(ctx.r1.u32 + 256, ctx.r31.u8);
	// bne 0x82bd4068
	if (!cr0.eq) goto loc_82BD4068;
loc_82BD414C:
	// cmplwi cr6,r16,0
	cr6.compare<uint32_t>(ctx.r16.u32, 0, xer);
	// beq cr6,0x82bd4164
	if (cr6.eq) goto loc_82BD4164;
	// stw r23,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r23.u32);
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// addi r3,r1,204
	ctx.r3.s64 = ctx.r1.s64 + 204;
	// bl 0x825952b8
	ctx.lr = 0x82BD4164;
	sub_825952B8(ctx, base);
loc_82BD4164:
	// cmplwi cr6,r15,0
	cr6.compare<uint32_t>(ctx.r15.u32, 0, xer);
	// beq cr6,0x82bd4190
	if (cr6.eq) goto loc_82BD4190;
	// addi r5,r1,316
	ctx.r5.s64 = ctx.r1.s64 + 316;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// mr r4,r14
	ctx.r4.u64 = ctx.r14.u64;
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// bl 0x82bd1e30
	ctx.lr = 0x82BD4180;
	sub_82BD1E30(ctx, base);
	// stw r23,220(r1)
	PPC_STORE_U32(ctx.r1.u32 + 220, ctx.r23.u32);
	// mr r4,r15
	ctx.r4.u64 = ctx.r15.u64;
	// addi r3,r1,220
	ctx.r3.s64 = ctx.r1.s64 + 220;
	// bl 0x825952b8
	ctx.lr = 0x82BD4190;
	sub_825952B8(ctx, base);
loc_82BD4190:
	// cmplwi cr6,r20,0
	cr6.compare<uint32_t>(ctx.r20.u32, 0, xer);
	// beq cr6,0x82bd41bc
	if (cr6.eq) goto loc_82BD41BC;
	// addi r5,r1,108
	ctx.r5.s64 = ctx.r1.s64 + 108;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x830f6290
	ctx.lr = 0x82BD41AC;
	sub_830F6290(ctx, base);
	// stw r23,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r23.u32);
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x825952b8
	ctx.lr = 0x82BD41BC;
	sub_825952B8(ctx, base);
loc_82BD41BC:
	// addi r1,r1,592
	ctx.r1.s64 = ctx.r1.s64 + 592;
	// b 0x831cdb00
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BD41C4"))) PPC_WEAK_FUNC(sub_82BD41C4);
PPC_FUNC_IMPL(__imp__sub_82BD41C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BD41C8"))) PPC_WEAK_FUNC(sub_82BD41C8);
PPC_FUNC_IMPL(__imp__sub_82BD41C8) {
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
	// beq cr6,0x82bd4200
	if (cr6.eq) goto loc_82BD4200;
loc_82BD41EC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bd28a0
	ctx.lr = 0x82BD41F4;
	sub_82BD28A0(ctx, base);
	// addi r31,r31,60
	ctx.r31.s64 = ctx.r31.s64 + 60;
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, xer);
	// bne cr6,0x82bd41ec
	if (!cr6.eq) goto loc_82BD41EC;
loc_82BD4200:
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

__attribute__((alias("__imp__sub_82BD4218"))) PPC_WEAK_FUNC(sub_82BD4218);
PPC_FUNC_IMPL(__imp__sub_82BD4218) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82BD4220;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmplw cr6,r3,r4
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, xer);
	// beq cr6,0x82bd42a4
	if (cr6.eq) goto loc_82BD42A4;
	// addi r31,r3,8
	ctx.r31.s64 = ctx.r3.s64 + 8;
loc_82BD4238:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x82bd4290
	if (cr6.eq) goto loc_82BD4290;
	// lwz r11,-8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// addi r4,r31,16
	ctx.r4.s64 = ctx.r31.s64 + 16;
	// addi r3,r30,24
	ctx.r3.s64 = ctx.r30.s64 + 24;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// lwz r10,-4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// stw r10,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r10.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r9,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r9.u32);
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r8,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r8.u32);
	// lwz r7,8(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r7,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r7.u32);
	// lwz r6,12(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stw r6,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r6.u32);
	// bl 0x82bd2bf0
	ctx.lr = 0x82BD427C;
	sub_82BD2BF0(ctx, base);
	// addi r4,r31,32
	ctx.r4.s64 = ctx.r31.s64 + 32;
	// addi r3,r30,40
	ctx.r3.s64 = ctx.r30.s64 + 40;
	// bl 0x82bd2bf0
	ctx.lr = 0x82BD4288;
	sub_82BD2BF0(ctx, base);
	// lwz r5,48(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// stw r5,56(r30)
	PPC_STORE_U32(ctx.r30.u32 + 56, ctx.r5.u32);
loc_82BD4290:
	// addi r31,r31,60
	ctx.r31.s64 = ctx.r31.s64 + 60;
	// addi r30,r30,60
	ctx.r30.s64 = ctx.r30.s64 + 60;
	// addi r11,r31,-8
	ctx.r11.s64 = ctx.r31.s64 + -8;
	// cmplw cr6,r11,r29
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, xer);
	// bne cr6,0x82bd4238
	if (!cr6.eq) goto loc_82BD4238;
loc_82BD42A4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BD42B0"))) PPC_WEAK_FUNC(sub_82BD42B0);
PPC_FUNC_IMPL(__imp__sub_82BD42B0) {
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
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r4,4(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r5,r4
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r4.u32, xer);
	// beq cr6,0x82bd42f8
	if (cr6.eq) goto loc_82BD42F8;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x82bd3948
	ctx.lr = 0x82BD42E4;
	sub_82BD3948(ctx, base);
	// addi r5,r31,12
	ctx.r5.s64 = ctx.r31.s64 + 12;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82bd41c8
	ctx.lr = 0x82BD42F4;
	sub_82BD41C8(ctx, base);
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
loc_82BD42F8:
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

__attribute__((alias("__imp__sub_82BD4310"))) PPC_WEAK_FUNC(sub_82BD4310);
PPC_FUNC_IMPL(__imp__sub_82BD4310) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82BD4318;
	__savegprlr_26(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,1092
	ctx.r11.s64 = 71565312;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// ori r10,r11,17476
	ctx.r10.u64 = ctx.r11.u64 | 17476;
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// ble cr6,0x82bd433c
	if (!cr6.gt) goto loc_82BD433C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,12056
	ctx.r3.s64 = ctx.r11.s64 + 12056;
	// bl 0x831cc150
	ctx.lr = 0x82BD433C;
	sub_831CC150(ctx, base);
loc_82BD433C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r26,60
	ctx.r26.s64 = 60;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r8,r9,r26
	ctx.r8.s32 = PPCDivide(ctx.r9.s32, ctx.r26.s32);
	// cmplw cr6,r8,r4
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r4.u32, xer);
	// bge cr6,0x82bd43e0
	if (!cr6.lt) goto loc_82BD43E0;
	// li r27,2
	ctx.r27.s64 = 2;
	// mulli r28,r4,60
	ctx.r28.s64 = ctx.r4.s64 * 60;
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595718
	ctx.lr = 0x82BD4374;
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
	// bl 0x82bd4218
	ctx.lr = 0x82BD4398;
	sub_82BD4218(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// subf r11,r3,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r3.s64;
	// divw r26,r11,r26
	ctx.r26.s32 = PPCDivide(ctx.r11.s32, ctx.r26.s32);
	// beq cr6,0x82bd43c8
	if (cr6.eq) goto loc_82BD43C8;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x82bd41c8
	ctx.lr = 0x82BD43B8;
	sub_82BD41C8(ctx, base);
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r27.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x825952b8
	ctx.lr = 0x82BD43C8;
	sub_825952B8(ctx, base);
loc_82BD43C8:
	// mulli r11,r26,60
	ctx.r11.s64 = ctx.r26.s64 * 60;
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
loc_82BD43E0:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BD43E8"))) PPC_WEAK_FUNC(sub_82BD43E8);
PPC_FUNC_IMPL(__imp__sub_82BD43E8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,1092
	ctx.r10.s64 = 71565312;
	// lwz r7,4(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r9,60
	ctx.r9.s64 = 60;
	// ori r8,r10,17476
	ctx.r8.u64 = ctx.r10.u64 | 17476;
	// subf r6,r11,r7
	ctx.r6.s64 = ctx.r7.s64 - ctx.r11.s64;
	// subf r5,r4,r8
	ctx.r5.s64 = ctx.r8.s64 - ctx.r4.s64;
	// divw r10,r6,r9
	ctx.r10.s32 = PPCDivide(ctx.r6.s32, ctx.r9.s32);
	// cmplw cr6,r5,r10
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r10.u32, xer);
	// bge cr6,0x82bd441c
	if (!cr6.lt) goto loc_82BD441C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,12056
	ctx.r3.s64 = ctx.r11.s64 + 12056;
	// b 0x831cc150
	sub_831CC150(ctx, base);
	return;
loc_82BD441C:
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
	// blt cr6,0x82bd444c
	if (cr6.lt) goto loc_82BD444C;
	// add r4,r9,r11
	ctx.r4.u64 = ctx.r9.u64 + ctx.r11.u64;
loc_82BD444C:
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// bge cr6,0x82bd4458
	if (!cr6.lt) goto loc_82BD4458;
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
loc_82BD4458:
	// b 0x82bd4310
	sub_82BD4310(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BD445C"))) PPC_WEAK_FUNC(sub_82BD445C);
PPC_FUNC_IMPL(__imp__sub_82BD445C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BD4460"))) PPC_WEAK_FUNC(sub_82BD4460);
PPC_FUNC_IMPL(__imp__sub_82BD4460) {
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
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, xer);
	// bge cr6,0x82bd4498
	if (!cr6.lt) goto loc_82BD4498;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r10,r4
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// ble cr6,0x82bd449c
	if (!cr6.gt) goto loc_82BD449C;
loc_82BD4498:
	// li r10,0
	ctx.r10.s64 = 0;
loc_82BD449C:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82bd44ec
	if (cr6.eq) goto loc_82BD44EC;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r9,60
	ctx.r9.s64 = 60;
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r7,r10,r30
	ctx.r7.s64 = ctx.r30.s64 - ctx.r10.s64;
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, xer);
	// divw r30,r7,r9
	ctx.r30.s32 = PPCDivide(ctx.r7.s32, ctx.r9.s32);
	// bne cr6,0x82bd44d0
	if (!cr6.eq) goto loc_82BD44D0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bd43e8
	ctx.lr = 0x82BD44D0;
	sub_82BD43E8(ctx, base);
loc_82BD44D0:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bd4518
	if (cr6.eq) goto loc_82BD4518;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mulli r11,r30,60
	ctx.r11.s64 = ctx.r30.s64 * 60;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x82bd4514
	goto loc_82BD4514;
loc_82BD44EC:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82bd4504
	if (!cr6.eq) goto loc_82BD4504;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bd43e8
	ctx.lr = 0x82BD4504;
	sub_82BD43E8(ctx, base);
loc_82BD4504:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bd4518
	if (cr6.eq) goto loc_82BD4518;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_82BD4514:
	// bl 0x82bd38c0
	ctx.lr = 0x82BD4518;
	sub_82BD38C0(ctx, base);
loc_82BD4518:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r11,r11,60
	ctx.r11.s64 = ctx.r11.s64 + 60;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82BD453C"))) PPC_WEAK_FUNC(sub_82BD453C);
PPC_FUNC_IMPL(__imp__sub_82BD453C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BD4540"))) PPC_WEAK_FUNC(sub_82BD4540);
PPC_FUNC_IMPL(__imp__sub_82BD4540) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x82BD4548;
	__savegprlr_25(ctx, base);
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r31,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r31.u32);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// stw r31,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r31.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r31,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r31.u32);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// stw r31,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r31.u32);
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// stw r31,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r31.u32);
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// stw r11,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r11.u32);
	// bl 0x82bd2e38
	ctx.lr = 0x82BD4588;
	sub_82BD2E38(ctx, base);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x82bd4624
	if (cr6.eq) goto loc_82BD4624;
	// clrlwi r27,r28,24
	ctx.r27.u64 = ctx.r28.u32 & 0xFF;
	// li r26,2
	ctx.r26.s64 = 2;
	// li r28,15
	ctx.r28.s64 = 15;
loc_82BD459C:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82bd1a28
	ctx.lr = 0x82BD45A8;
	sub_82BD1A28(ctx, base);
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, xer);
	// beq cr6,0x82bd45bc
	if (cr6.eq) goto loc_82BD45BC;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// addi r3,r1,220
	ctx.r3.s64 = ctx.r1.s64 + 220;
	// bl 0x82bd2218
	ctx.lr = 0x82BD45BC;
	sub_82BD2218(ctx, base);
loc_82BD45BC:
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x82bd2ed8
	ctx.lr = 0x82BD45C8;
	sub_82BD2ED8(ctx, base);
	// lwz r11,240(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 240);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82bd45e4
	if (cr6.lt) goto loc_82BD45E4;
	// stw r26,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r26.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,220(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 220);
	// bl 0x825952b8
	ctx.lr = 0x82BD45E4;
	sub_825952B8(ctx, base);
loc_82BD45E4:
	// lwz r11,212(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// stw r28,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r28.u32);
	// stw r31,236(r1)
	PPC_STORE_U32(ctx.r1.u32 + 236, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,220(r1)
	PPC_STORE_U8(ctx.r1.u32 + 220, ctx.r31.u8);
	// blt cr6,0x82bd460c
	if (cr6.lt) goto loc_82BD460C;
	// stw r26,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r26.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,192(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// bl 0x825952b8
	ctx.lr = 0x82BD460C;
	sub_825952B8(ctx, base);
loc_82BD460C:
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// stw r28,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r28.u32);
	// stw r31,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r31.u32);
	// addi r29,r29,92
	ctx.r29.s64 = ctx.r29.s64 + 92;
	// stb r31,192(r1)
	PPC_STORE_U8(ctx.r1.u32 + 192, ctx.r31.u8);
	// bne 0x82bd459c
	if (!cr0.eq) goto loc_82BD459C;
loc_82BD4624:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82bd4460
	ctx.lr = 0x82BD4630;
	sub_82BD4460(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82bd28a0
	ctx.lr = 0x82BD4638;
	sub_82BD28A0(ctx, base);
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BD4640"))) PPC_WEAK_FUNC(sub_82BD4640);
PPC_FUNC_IMPL(__imp__sub_82BD4640) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdabc
	ctx.lr = 0x82BD4648;
	__savegprlr_17(ctx, base);
	// stwu r1,-544(r1)
	ea = -544 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r24,60
	ctx.r24.s64 = 60;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// mr r22,r4
	ctx.r22.u64 = ctx.r4.u64;
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// mr r21,r5
	ctx.r21.u64 = ctx.r5.u64;
	// mr r20,r6
	ctx.r20.u64 = ctx.r6.u64;
	// mr r18,r7
	ctx.r18.u64 = ctx.r7.u64;
	// divw. r8,r9,r24
	ctx.r8.s32 = PPCDivide(ctx.r9.s32, ctx.r24.s32);
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq 0x82bd467c
	if (cr0.eq) goto loc_82BD467C;
	// bl 0x82bd42b0
	ctx.lr = 0x82BD467C;
	sub_82BD42B0(ctx, base);
loc_82BD467C:
	// li r31,0
	ctx.r31.s64 = 0;
	// li r30,-1
	ctx.r30.s64 = -1;
	// stw r31,280(r1)
	PPC_STORE_U32(ctx.r1.u32 + 280, ctx.r31.u32);
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// stw r31,284(r1)
	PPC_STORE_U32(ctx.r1.u32 + 284, ctx.r31.u32);
	// stw r31,288(r1)
	PPC_STORE_U32(ctx.r1.u32 + 288, ctx.r31.u32);
	// stw r31,296(r1)
	PPC_STORE_U32(ctx.r1.u32 + 296, ctx.r31.u32);
	// stw r31,300(r1)
	PPC_STORE_U32(ctx.r1.u32 + 300, ctx.r31.u32);
	// stw r31,304(r1)
	PPC_STORE_U32(ctx.r1.u32 + 304, ctx.r31.u32);
	// stw r30,312(r1)
	PPC_STORE_U32(ctx.r1.u32 + 312, ctx.r30.u32);
	// bl 0x82bd2e38
	ctx.lr = 0x82BD46A8;
	sub_82BD2E38(ctx, base);
	// stw r31,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r31.u32);
	// stw r31,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r31.u32);
	// addi r7,r1,144
	ctx.r7.s64 = ctx.r1.s64 + 144;
	// stw r31,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r31.u32);
	// addi r6,r1,160
	ctx.r6.s64 = ctx.r1.s64 + 160;
	// stw r31,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r31.u32);
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
	// stw r31,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r31.u32);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// stw r31,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r31.u32);
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// stw r31,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r31.u32);
	// stw r31,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r31.u32);
	// stw r31,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r31.u32);
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// stw r31,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r31.u32);
	// stw r31,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r31.u32);
	// bl 0x82bd3440
	ctx.lr = 0x82BD46F0;
	sub_82BD3440(ctx, base);
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82bd4460
	ctx.lr = 0x82BD46FC;
	sub_82BD4460(ctx, base);
	// lis r11,-31777
	ctx.r11.s64 = -2082537472;
	// lis r10,-31777
	ctx.r10.s64 = -2082537472;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// lwz r4,26984(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 26984);
	// lwz r11,26924(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26924);
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82bd4540
	ctx.lr = 0x82BD471C;
	sub_82BD4540(ctx, base);
	// lis r9,-31777
	ctx.r9.s64 = -2082537472;
	// lis r8,-31777
	ctx.r8.s64 = -2082537472;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// lwz r11,26928(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 26928);
	// lwz r4,26988(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + 26988);
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82bd4540
	ctx.lr = 0x82BD473C;
	sub_82BD4540(ctx, base);
	// lis r7,-31777
	ctx.r7.s64 = -2082537472;
	// lis r5,-31777
	ctx.r5.s64 = -2082537472;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// lwz r11,26932(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 26932);
	// lwz r4,26992(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 26992);
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82bd4540
	ctx.lr = 0x82BD475C;
	sub_82BD4540(ctx, base);
	// stw r31,216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 216, ctx.r31.u32);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// stw r31,220(r1)
	PPC_STORE_U32(ctx.r1.u32 + 220, ctx.r31.u32);
	// stw r31,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r31.u32);
	// stw r31,232(r1)
	PPC_STORE_U32(ctx.r1.u32 + 232, ctx.r31.u32);
	// stw r31,236(r1)
	PPC_STORE_U32(ctx.r1.u32 + 236, ctx.r31.u32);
	// stw r31,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r31.u32);
	// stw r30,248(r1)
	PPC_STORE_U32(ctx.r1.u32 + 248, ctx.r30.u32);
	// bl 0x82bd2e38
	ctx.lr = 0x82BD4780;
	sub_82BD2E38(ctx, base);
	// lis r28,-31777
	ctx.r28.s64 = -2082537472;
	// li r19,2
	ctx.r19.s64 = 2;
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
	// lwz r11,26936(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 26936);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// ble cr6,0x82bd489c
	if (!cr6.gt) goto loc_82BD489C;
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
	// li r25,1
	ctx.r25.s64 = 1;
	// lis r26,-31777
	ctx.r26.s64 = -2082537472;
	// li r27,15
	ctx.r27.s64 = 15;
loc_82BD47AC:
	// lwz r11,26996(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 26996);
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// add r4,r29,r11
	ctx.r4.u64 = ctx.r29.u64 + ctx.r11.u64;
	// bl 0x82bd1a28
	ctx.lr = 0x82BD47BC;
	sub_82BD1A28(ctx, base);
	// addi r4,r1,320
	ctx.r4.s64 = ctx.r1.s64 + 320;
	// addi r3,r1,380
	ctx.r3.s64 = ctx.r1.s64 + 380;
	// bl 0x82bd2218
	ctx.lr = 0x82BD47C8;
	sub_82BD2218(ctx, base);
	// lbz r10,409(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 409);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82bd4820
	if (cr6.eq) goto loc_82BD4820;
	// bl 0x825d8390
	ctx.lr = 0x82BD47D8;
	sub_825D8390(ctx, base);
	// mr r17,r3
	ctx.r17.u64 = ctx.r3.u64;
	// bl 0x8310cc00
	ctx.lr = 0x82BD47E0;
	sub_8310CC00(ctx, base);
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// slw r10,r25,r17
	ctx.r10.u64 = ctx.r17.u8 & 0x20 ? 0 : (ctx.r25.u32 << (ctx.r17.u8 & 0x3F));
	// and r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 & ctx.r11.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82bd4818
	if (!cr6.eq) goto loc_82BD4818;
	// lwz r11,372(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 372);
	// lwz r3,352(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 352);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x82bd4808
	if (!cr6.lt) goto loc_82BD4808;
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
loc_82BD4808:
	// bl 0x82bd0688
	ctx.lr = 0x82BD480C;
	sub_82BD0688(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82bd4820
	if (!cr6.eq) goto loc_82BD4820;
loc_82BD4818:
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// b 0x82bd4824
	goto loc_82BD4824;
loc_82BD4820:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_82BD4824:
	// stb r11,409(r1)
	PPC_STORE_U8(ctx.r1.u32 + 409, ctx.r11.u8);
	// addi r4,r1,320
	ctx.r4.s64 = ctx.r1.s64 + 320;
	// addi r3,r1,216
	ctx.r3.s64 = ctx.r1.s64 + 216;
	// bl 0x82bd2ed8
	ctx.lr = 0x82BD4834;
	sub_82BD2ED8(ctx, base);
	// lwz r10,400(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 400);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82bd4850
	if (cr6.lt) goto loc_82BD4850;
	// stw r19,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r19.u32);
	// addi r3,r1,116
	ctx.r3.s64 = ctx.r1.s64 + 116;
	// lwz r4,380(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 380);
	// bl 0x825952b8
	ctx.lr = 0x82BD4850;
	sub_825952B8(ctx, base);
loc_82BD4850:
	// lwz r11,372(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 372);
	// stw r27,400(r1)
	PPC_STORE_U32(ctx.r1.u32 + 400, ctx.r27.u32);
	// stw r31,396(r1)
	PPC_STORE_U32(ctx.r1.u32 + 396, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,380(r1)
	PPC_STORE_U8(ctx.r1.u32 + 380, ctx.r31.u8);
	// blt cr6,0x82bd4878
	if (cr6.lt) goto loc_82BD4878;
	// stw r19,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r19.u32);
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// lwz r4,352(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 352);
	// bl 0x825952b8
	ctx.lr = 0x82BD4878;
	sub_825952B8(ctx, base);
loc_82BD4878:
	// lwz r11,26936(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 26936);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// stw r27,372(r1)
	PPC_STORE_U32(ctx.r1.u32 + 372, ctx.r27.u32);
	// addi r29,r29,92
	ctx.r29.s64 = ctx.r29.s64 + 92;
	// stw r31,368(r1)
	PPC_STORE_U32(ctx.r1.u32 + 368, ctx.r31.u32);
	// stb r31,352(r1)
	PPC_STORE_U8(ctx.r1.u32 + 352, ctx.r31.u8);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, xer);
	// blt cr6,0x82bd47ac
	if (cr6.lt) goto loc_82BD47AC;
loc_82BD489C:
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82bd4460
	ctx.lr = 0x82BD48A8;
	sub_82BD4460(ctx, base);
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// lwz r9,4(r23)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r23.u32 + 4);
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// subf r8,r11,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r11.s64;
	// divw. r7,r8,r24
	ctx.r7.s32 = PPCDivide(ctx.r8.s32, ctx.r24.s32);
	cr0.compare<int32_t>(ctx.r7.s32, 0, xer);
	// beq 0x82bd4904
	if (cr0.eq) goto loc_82BD4904;
	// lis r8,-32242
	ctx.r8.s64 = -2113011712;
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
	// addi r8,r8,-18608
	ctx.r8.s64 = ctx.r8.s64 + -18608;
	// addi r8,r8,-4
	ctx.r8.s64 = ctx.r8.s64 + -4;
loc_82BD48D0:
	// cmplwi cr6,r10,5
	cr6.compare<uint32_t>(ctx.r10.u32, 5, xer);
	// bge cr6,0x82bd4904
	if (!cr6.lt) goto loc_82BD4904;
	// lwzu r7,4(r8)
	ea = 4 + ctx.r8.u32;
	ctx.r7.u64 = PPC_LOAD_U32(ea);
	ctx.r8.u32 = ea;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,60
	ctx.r9.s64 = ctx.r9.s64 + 60;
	// stw r7,56(r11)
	PPC_STORE_U32(ctx.r11.u32 + 56, ctx.r7.u32);
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// lwz r7,4(r23)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r23.u32 + 4);
	// subf r6,r11,r7
	ctx.r6.s64 = ctx.r7.s64 - ctx.r11.s64;
	// divw r5,r6,r24
	ctx.r5.s32 = PPCDivide(ctx.r6.s32, ctx.r24.s32);
	// cmplw cr6,r10,r5
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r5.u32, xer);
	// blt cr6,0x82bd48d0
	if (cr6.lt) goto loc_82BD48D0;
loc_82BD4904:
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// li r27,92
	ctx.r27.s64 = 92;
	// lwz r24,128(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// subf r10,r24,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r24.s64;
	// srawi. r11,r10,2
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r10.s32 >> 2;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x82bd49a4
	if (cr0.eq) goto loc_82BD49A4;
	// mr r30,r24
	ctx.r30.u64 = ctx.r24.u64;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
loc_82BD4924:
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r9,28(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// lwz r8,24(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// subf r7,r8,r9
	ctx.r7.s64 = ctx.r9.s64 - ctx.r8.s64;
	// divw r9,r7,r27
	ctx.r9.s32 = PPCDivide(ctx.r7.s32, ctx.r27.s32);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bge cr6,0x82bd4954
	if (!cr6.lt) goto loc_82BD4954;
	// rotlwi r11,r8,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// mulli r10,r10,92
	ctx.r10.s64 = ctx.r10.s64 * 92;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x82bd4988
	goto loc_82BD4988;
loc_82BD4954:
	// lwz r8,44(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// lwz r7,40(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// subf r6,r7,r8
	ctx.r6.s64 = ctx.r8.s64 - ctx.r7.s64;
	// divw r8,r6,r27
	ctx.r8.s32 = PPCDivide(ctx.r6.s32, ctx.r27.s32);
	// add r5,r8,r9
	ctx.r5.u64 = ctx.r8.u64 + ctx.r9.u64;
	// cmplw cr6,r10,r5
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r5.u32, xer);
	// bge cr6,0x82bd4984
	if (!cr6.lt) goto loc_82BD4984;
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// rotlwi r11,r7,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// mulli r10,r10,92
	ctx.r10.s64 = ctx.r10.s64 * 92;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x82bd4988
	goto loc_82BD4988;
loc_82BD4984:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_82BD4988:
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x835977d8
	ctx.lr = 0x82BD4998;
	sub_835977D8(ctx, base);
	// addic. r29,r29,-1
	xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// bne 0x82bd4924
	if (!cr0.eq) goto loc_82BD4924;
loc_82BD49A4:
	// lwz r11,180(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r25,176(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// subf r10,r25,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r25.s64;
	// srawi. r11,r10,2
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r10.s32 >> 2;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x82bd4a40
	if (cr0.eq) goto loc_82BD4A40;
	// mr r30,r25
	ctx.r30.u64 = ctx.r25.u64;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
loc_82BD49C0:
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r9,28(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// lwz r8,24(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// subf r7,r8,r9
	ctx.r7.s64 = ctx.r9.s64 - ctx.r8.s64;
	// divw r9,r7,r27
	ctx.r9.s32 = PPCDivide(ctx.r7.s32, ctx.r27.s32);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bge cr6,0x82bd49f0
	if (!cr6.lt) goto loc_82BD49F0;
	// rotlwi r11,r8,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// mulli r10,r10,92
	ctx.r10.s64 = ctx.r10.s64 * 92;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x82bd4a24
	goto loc_82BD4A24;
loc_82BD49F0:
	// lwz r8,44(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// lwz r7,40(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// subf r6,r7,r8
	ctx.r6.s64 = ctx.r8.s64 - ctx.r7.s64;
	// divw r8,r6,r27
	ctx.r8.s32 = PPCDivide(ctx.r6.s32, ctx.r27.s32);
	// add r5,r8,r9
	ctx.r5.u64 = ctx.r8.u64 + ctx.r9.u64;
	// cmplw cr6,r10,r5
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r5.u32, xer);
	// bge cr6,0x82bd4a20
	if (!cr6.lt) goto loc_82BD4A20;
	// subf r9,r9,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r9.s64;
	// rotlwi r10,r7,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// mulli r11,r9,92
	ctx.r11.s64 = ctx.r9.s64 * 92;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x82bd4a24
	goto loc_82BD4A24;
loc_82BD4A20:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_82BD4A24:
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x835977d8
	ctx.lr = 0x82BD4A34;
	sub_835977D8(ctx, base);
	// addic. r29,r29,-1
	xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// bne 0x82bd49c0
	if (!cr0.eq) goto loc_82BD49C0;
loc_82BD4A40:
	// lwz r11,164(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lwz r26,160(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// subf r10,r26,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r26.s64;
	// srawi. r11,r10,2
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r10.s32 >> 2;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x82bd4adc
	if (cr0.eq) goto loc_82BD4ADC;
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
loc_82BD4A5C:
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r9,28(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// lwz r8,24(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// subf r7,r8,r9
	ctx.r7.s64 = ctx.r9.s64 - ctx.r8.s64;
	// divw r9,r7,r27
	ctx.r9.s32 = PPCDivide(ctx.r7.s32, ctx.r27.s32);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bge cr6,0x82bd4a8c
	if (!cr6.lt) goto loc_82BD4A8C;
	// rotlwi r9,r8,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// mulli r11,r10,92
	ctx.r11.s64 = ctx.r10.s64 * 92;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// b 0x82bd4ac0
	goto loc_82BD4AC0;
loc_82BD4A8C:
	// lwz r8,44(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// lwz r7,40(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// subf r6,r7,r8
	ctx.r6.s64 = ctx.r8.s64 - ctx.r7.s64;
	// divw r8,r6,r27
	ctx.r8.s32 = PPCDivide(ctx.r6.s32, ctx.r27.s32);
	// add r5,r8,r9
	ctx.r5.u64 = ctx.r8.u64 + ctx.r9.u64;
	// cmplw cr6,r10,r5
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r5.u32, xer);
	// bge cr6,0x82bd4abc
	if (!cr6.lt) goto loc_82BD4ABC;
	// subf r9,r9,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r9.s64;
	// rotlwi r10,r7,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// mulli r11,r9,92
	ctx.r11.s64 = ctx.r9.s64 * 92;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x82bd4ac0
	goto loc_82BD4AC0;
loc_82BD4ABC:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_82BD4AC0:
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x835977d8
	ctx.lr = 0x82BD4AD0;
	sub_835977D8(ctx, base);
	// addic. r29,r29,-1
	xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// bne 0x82bd4a5c
	if (!cr0.eq) goto loc_82BD4A5C;
loc_82BD4ADC:
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// lwz r28,144(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// subf r10,r28,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r28.s64;
	// srawi. r11,r10,2
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r10.s32 >> 2;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x82bd4b78
	if (cr0.eq) goto loc_82BD4B78;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
loc_82BD4AF8:
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r9,28(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// lwz r8,24(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// subf r7,r8,r9
	ctx.r7.s64 = ctx.r9.s64 - ctx.r8.s64;
	// divw r9,r7,r27
	ctx.r9.s32 = PPCDivide(ctx.r7.s32, ctx.r27.s32);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bge cr6,0x82bd4b28
	if (!cr6.lt) goto loc_82BD4B28;
	// rotlwi r9,r8,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// mulli r11,r10,92
	ctx.r11.s64 = ctx.r10.s64 * 92;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// b 0x82bd4b5c
	goto loc_82BD4B5C;
loc_82BD4B28:
	// lwz r8,44(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// lwz r7,40(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// subf r6,r7,r8
	ctx.r6.s64 = ctx.r8.s64 - ctx.r7.s64;
	// divw r8,r6,r27
	ctx.r8.s32 = PPCDivide(ctx.r6.s32, ctx.r27.s32);
	// add r5,r8,r9
	ctx.r5.u64 = ctx.r8.u64 + ctx.r9.u64;
	// cmplw cr6,r10,r5
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r5.u32, xer);
	// bge cr6,0x82bd4b58
	if (!cr6.lt) goto loc_82BD4B58;
	// subf r9,r9,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r9.s64;
	// rotlwi r10,r7,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// mulli r11,r9,92
	ctx.r11.s64 = ctx.r9.s64 * 92;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x82bd4b5c
	goto loc_82BD4B5C;
loc_82BD4B58:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_82BD4B5C:
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x835977d8
	ctx.lr = 0x82BD4B6C;
	sub_835977D8(ctx, base);
	// addic. r29,r29,-1
	xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// bne 0x82bd4af8
	if (!cr0.eq) goto loc_82BD4AF8;
loc_82BD4B78:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82bd78d8
	ctx.lr = 0x82BD4B84;
	sub_82BD78D8(ctx, base);
	// lwz r31,232(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 232);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x82bd4bb4
	if (cr6.eq) goto loc_82BD4BB4;
	// addi r5,r1,244
	ctx.r5.s64 = ctx.r1.s64 + 244;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,236(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 236);
	// bl 0x82bd1da0
	ctx.lr = 0x82BD4BA4;
	sub_82BD1DA0(ctx, base);
	// stw r19,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r19.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// bl 0x825952b8
	ctx.lr = 0x82BD4BB4;
	sub_825952B8(ctx, base);
loc_82BD4BB4:
	// lwz r31,216(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 216);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x82bd4be4
	if (cr6.eq) goto loc_82BD4BE4;
	// addi r5,r1,228
	ctx.r5.s64 = ctx.r1.s64 + 228;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,220(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 220);
	// bl 0x82bd1da0
	ctx.lr = 0x82BD4BD4;
	sub_82BD1DA0(ctx, base);
	// stw r19,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r19.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,124
	ctx.r3.s64 = ctx.r1.s64 + 124;
	// bl 0x825952b8
	ctx.lr = 0x82BD4BE4;
	sub_825952B8(ctx, base);
loc_82BD4BE4:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// beq cr6,0x82bd4bfc
	if (cr6.eq) goto loc_82BD4BFC;
	// stw r19,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r19.u32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x825952b8
	ctx.lr = 0x82BD4BFC;
	sub_825952B8(ctx, base);
loc_82BD4BFC:
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(ctx.r26.u32, 0, xer);
	// beq cr6,0x82bd4c14
	if (cr6.eq) goto loc_82BD4C14;
	// stw r19,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r19.u32);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x825952b8
	ctx.lr = 0x82BD4C14;
	sub_825952B8(ctx, base);
loc_82BD4C14:
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(ctx.r25.u32, 0, xer);
	// beq cr6,0x82bd4c2c
	if (cr6.eq) goto loc_82BD4C2C;
	// stw r19,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r19.u32);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x825952b8
	ctx.lr = 0x82BD4C2C;
	sub_825952B8(ctx, base);
loc_82BD4C2C:
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(ctx.r24.u32, 0, xer);
	// beq cr6,0x82bd4c44
	if (cr6.eq) goto loc_82BD4C44;
	// stw r19,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r19.u32);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x825952b8
	ctx.lr = 0x82BD4C44;
	sub_825952B8(ctx, base);
loc_82BD4C44:
	// lwz r31,296(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 296);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x82bd4c74
	if (cr6.eq) goto loc_82BD4C74;
	// addi r5,r1,308
	ctx.r5.s64 = ctx.r1.s64 + 308;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,300(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 300);
	// bl 0x82bd1da0
	ctx.lr = 0x82BD4C64;
	sub_82BD1DA0(ctx, base);
	// stw r19,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r19.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x825952b8
	ctx.lr = 0x82BD4C74;
	sub_825952B8(ctx, base);
loc_82BD4C74:
	// lwz r31,280(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 280);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x82bd4ca4
	if (cr6.eq) goto loc_82BD4CA4;
	// addi r5,r1,292
	ctx.r5.s64 = ctx.r1.s64 + 292;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,284(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 284);
	// bl 0x82bd1da0
	ctx.lr = 0x82BD4C94;
	sub_82BD1DA0(ctx, base);
	// stw r19,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r19.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x825952b8
	ctx.lr = 0x82BD4CA4;
	sub_825952B8(ctx, base);
loc_82BD4CA4:
	// addi r1,r1,544
	ctx.r1.s64 = ctx.r1.s64 + 544;
	// b 0x831cdb0c
	__restgprlr_17(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BD4CAC"))) PPC_WEAK_FUNC(sub_82BD4CAC);
PPC_FUNC_IMPL(__imp__sub_82BD4CAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BD4CB0"))) PPC_WEAK_FUNC(sub_82BD4CB0);
PPC_FUNC_IMPL(__imp__sub_82BD4CB0) {
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
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// bl 0x82cd50f8
	ctx.lr = 0x82BD4CD0;
	sub_82CD50F8(ctx, base);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lis r9,-32239
	ctx.r9.s64 = -2112815104;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r8,r10,-17584
	ctx.r8.s64 = ctx.r10.s64 + -17584;
	// addi r7,r9,-17088
	ctx.r7.s64 = ctx.r9.s64 + -17088;
	// stw r11,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r11.u32);
	// li r6,-1
	ctx.r6.s64 = -1;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// clrlwi r5,r30,24
	ctx.r5.u64 = ctx.r30.u32 & 0xFF;
	// stw r7,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r7.u32);
	// stw r6,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r6.u32);
	// stw r11,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r11.u32);
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// stw r11,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r11.u32);
	// stb r11,140(r31)
	PPC_STORE_U8(ctx.r31.u32 + 140, ctx.r11.u8);
	// beq cr6,0x82bd4d20
	if (cr6.eq) goto loc_82BD4D20;
	// lis r11,-31761
	ctx.r11.s64 = -2081488896;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,30512(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 30512);
	// bl 0x82d20ae0
	ctx.lr = 0x82BD4D20;
	sub_82D20AE0(ctx, base);
loc_82BD4D20:
	// lis r11,-31777
	ctx.r11.s64 = -2082537472;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,31512(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 31512);
	// bl 0x82d23390
	ctx.lr = 0x82BD4D34;
	sub_82D23390(ctx, base);
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

__attribute__((alias("__imp__sub_82BD4D50"))) PPC_WEAK_FUNC(sub_82BD4D50);
PPC_FUNC_IMPL(__imp__sub_82BD4D50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// lwz r11,136(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 136);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82bd4da0
	if (cr6.eq) goto loc_82BD4DA0;
	// lwz r10,96(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// cmpwi cr6,r10,3
	cr6.compare<int32_t>(ctx.r10.s32, 3, xer);
	// bne cr6,0x82bd4da0
	if (!cr6.eq) goto loc_82BD4DA0;
	// lwz r11,116(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 116);
	// stw r10,96(r3)
	PPC_STORE_U32(ctx.r3.u32 + 96, ctx.r10.u32);
	// stw r11,116(r3)
	PPC_STORE_U32(ctx.r3.u32 + 116, ctx.r11.u32);
	// bl 0x82d19a78
	ctx.lr = 0x82BD4D84;
	sub_82D19A78(ctx, base);
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r9,-31777
	ctx.r9.s64 = -2082537472;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r7,72(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 72);
	// lwz r4,31520(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 31520);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82BD4DA0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82BD4DA0:
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

__attribute__((alias("__imp__sub_82BD4DB4"))) PPC_WEAK_FUNC(sub_82BD4DB4);
PPC_FUNC_IMPL(__imp__sub_82BD4DB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BD4DB8"))) PPC_WEAK_FUNC(sub_82BD4DB8);
PPC_FUNC_IMPL(__imp__sub_82BD4DB8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,136(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 136);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,136(r3)
	PPC_STORE_U32(ctx.r3.u32 + 136, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BD4DD0"))) PPC_WEAK_FUNC(sub_82BD4DD0);
PPC_FUNC_IMPL(__imp__sub_82BD4DD0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82BD4DD8;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,27
	ctx.r11.s64 = 27;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,144
	ctx.r4.s64 = 144;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82BD4E00;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bd4e20
	if (cr6.eq) goto loc_82BD4E20;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82bd4cb0
	ctx.lr = 0x82BD4E18;
	sub_82BD4CB0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82BD4E20:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BD4E2C"))) PPC_WEAK_FUNC(sub_82BD4E2C);
PPC_FUNC_IMPL(__imp__sub_82BD4E2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BD4E30"))) PPC_WEAK_FUNC(sub_82BD4E30);
PPC_FUNC_IMPL(__imp__sub_82BD4E30) {
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
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-17584
	ctx.r9.s64 = ctx.r11.s64 + -17584;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r8,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r8.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82cd5008
	ctx.lr = 0x82BD4E68;
	sub_82CD5008(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82bd4e80
	if (cr6.eq) goto loc_82BD4E80;
	// bl 0x82416268
	ctx.lr = 0x82BD4E7C;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82BD4E80:
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

__attribute__((alias("__imp__sub_82BD4E98"))) PPC_WEAK_FUNC(sub_82BD4E98);
PPC_FUNC_IMPL(__imp__sub_82BD4E98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x82BD4EA0;
	__savegprlr_24(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,104(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// li r10,92
	ctx.r10.s64 = 92;
	// lwz r9,100(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// subf r8,r9,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r9.s64;
	// divw r7,r8,r10
	ctx.r7.s32 = PPCDivide(ctx.r8.s32, ctx.r10.s32);
	// cmplw cr6,r5,r7
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r7.u32, xer);
	// bge cr6,0x82bd50c0
	if (!cr6.lt) goto loc_82BD50C0;
	// lwz r9,100(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 100);
	// lis r10,-31777
	ctx.r10.s64 = -2082537472;
	// lwz r11,100(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// mulli r29,r5,92
	ctx.r29.s64 = ctx.r5.s64 * 92;
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// addi r28,r10,31544
	ctx.r28.s64 = ctx.r10.s64 + 31544;
	// add r7,r29,r11
	ctx.r7.u64 = ctx.r29.u64 + ctx.r11.u64;
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// addi r31,r4,100
	ctx.r31.s64 = ctx.r4.s64 + 100;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,28(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 28);
	// lbz r25,89(r7)
	ctx.r25.u64 = PPC_LOAD_U8(ctx.r7.u32 + 89);
	// bctrl 
	ctx.lr = 0x82BD4EFC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bd4f90
	if (cr6.eq) goto loc_82BD4F90;
	// lwz r11,100(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 100);
	// lis r10,930
	ctx.r10.s64 = 60948480;
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// ori r9,r10,179
	ctx.r9.u64 = ctx.r10.u64 | 179;
	// lwz r8,24(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// cmplw cr6,r8,r9
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, xer);
	// bne cr6,0x82bd4f68
	if (!cr6.eq) goto loc_82BD4F68;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-18253
	ctx.r4.s64 = ctx.r11.s64 + -18253;
	// bl 0x837b0c10
	ctx.lr = 0x82BD4F34;
	sub_837B0C10(ctx, base);
	// lwz r11,100(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 100);
	// li r5,0
	ctx.r5.s64 = 0;
	// add r10,r29,r11
	ctx.r10.u64 = ctx.r29.u64 + ctx.r11.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,20(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// bl 0x82bd1b98
	ctx.lr = 0x82BD4F4C;
	sub_82BD1B98(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d291e0
	ctx.lr = 0x82BD4F60;
	sub_82D291E0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// b 0x82bd4f8c
	goto loc_82BD4F8C;
loc_82BD4F68:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r4,24(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// bl 0x82d04618
	ctx.lr = 0x82BD4F74;
	sub_82D04618(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82d291e0
	ctx.lr = 0x82BD4F88;
	sub_82D291E0(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
loc_82BD4F8C:
	// bl 0x8387e8e0
	ctx.lr = 0x82BD4F90;
	sub_8387E8E0(ctx, base);
loc_82BD4F90:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,12(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BD4FA8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bd5030
	if (cr6.eq) goto loc_82BD5030;
	// lwz r11,100(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 100);
	// li r4,0
	ctx.r4.s64 = 0;
	// add r30,r29,r11
	ctx.r30.u64 = ctx.r29.u64 + ctx.r11.u64;
	// lwz r3,20(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// bl 0x83572958
	ctx.lr = 0x82BD4FC8;
	sub_83572958(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// bl 0x82bd8448
	ctx.lr = 0x82BD4FD4;
	sub_82BD8448(ctx, base);
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r10,112(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 112);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BD4FF0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,20(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82BD5008;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bd5030
	if (cr6.eq) goto loc_82BD5030;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82d2b0f8
	ctx.lr = 0x82BD501C;
	sub_82D2B0F8(ctx, base);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r4,r11,16
	ctx.r4.u64 = ctx.r11.u32 & 0xFFFF;
	// bl 0x83545640
	ctx.lr = 0x82BD5030;
	sub_83545640(ctx, base);
loc_82BD5030:
	// lwz r11,100(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 100);
	// add r3,r29,r11
	ctx.r3.u64 = ctx.r29.u64 + ctx.r11.u64;
	// bl 0x82bd0b30
	ctx.lr = 0x82BD503C;
	sub_82BD0B30(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// lwz r4,16(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// beq cr6,0x82bd5088
	if (cr6.eq) goto loc_82BD5088;
	// bctrl 
	ctx.lr = 0x82BD5060;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bd5080
	if (cr6.eq) goto loc_82BD5080;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,4(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BD5080;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82BD5080:
	// li r25,0
	ctx.r25.s64 = 0;
	// b 0x82bd50ac
	goto loc_82BD50AC;
loc_82BD5088:
	// bctrl 
	ctx.lr = 0x82BD508C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bd50ac
	if (cr6.eq) goto loc_82BD50AC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BD50AC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82BD50AC:
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82d2b608
	ctx.lr = 0x82BD50C0;
	sub_82D2B608(ctx, base);
loc_82BD50C0:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BD50C8"))) PPC_WEAK_FUNC(sub_82BD50C8);
PPC_FUNC_IMPL(__imp__sub_82BD50C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82BD50D0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,4
	ctx.r11.s64 = 4;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,96(r3)
	PPC_STORE_U32(ctx.r3.u32 + 96, ctx.r11.u32);
	// bl 0x82d19a78
	ctx.lr = 0x82BD50E4;
	sub_82D19A78(ctx, base);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31777
	ctx.r10.s64 = -2082537472;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r8,72(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 72);
	// lwz r4,31528(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 31528);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82BD5100;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19858
	ctx.lr = 0x82BD510C;
	sub_82D19858(ctx, base);
	// lwz r7,132(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// cmpwi cr6,r7,1
	cr6.compare<int32_t>(ctx.r7.s32, 1, xer);
	// bne cr6,0x82bd5284
	if (!cr6.eq) goto loc_82BD5284;
	// lbz r11,140(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 140);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82bd5284
	if (cr6.eq) goto loc_82BD5284;
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// li r28,92
	ctx.r28.s64 = 92;
	// lwz r9,104(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// addi r30,r31,100
	ctx.r30.s64 = ctx.r31.s64 + 100;
	// lwz r10,124(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// subf r8,r11,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r11.s64;
	// divw r7,r8,r28
	ctx.r7.s32 = PPCDivide(ctx.r8.s32, ctx.r28.s32);
	// cmplw cr6,r10,r7
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, xer);
	// bge cr6,0x82bd5208
	if (!cr6.lt) goto loc_82BD5208;
	// lwz r9,128(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82bd5208
	if (cr6.eq) goto loc_82BD5208;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mulli r10,r10,92
	ctx.r10.s64 = ctx.r10.s64 * 92;
	// lwz r4,20(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	// add r29,r10,r11
	ctx.r29.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82bd0f20
	ctx.lr = 0x82BD516C;
	sub_82BD0F20(ctx, base);
	// stw r3,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r3.u32);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r6,-1
	ctx.r6.s64 = -1;
	// lwz r9,128(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r8,124(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// mulli r11,r8,92
	ctx.r11.s64 = ctx.r8.s64 * 92;
	// lwz r7,24(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 24);
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r7,24(r4)
	PPC_STORE_U32(ctx.r4.u32 + 24, ctx.r7.u32);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r3,128(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// lwz r11,124(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// mulli r11,r11,92
	ctx.r11.s64 = ctx.r11.s64 * 92;
	// lwz r9,28(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r9,28(r8)
	PPC_STORE_U32(ctx.r8.u32 + 28, ctx.r9.u32);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,128(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// lwz r7,124(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// mulli r11,r7,92
	ctx.r11.s64 = ctx.r7.s64 * 92;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r4,r10,32
	ctx.r4.s64 = ctx.r10.s64 + 32;
	// addi r3,r11,32
	ctx.r3.s64 = ctx.r11.s64 + 32;
	// bl 0x8259cb28
	ctx.lr = 0x82BD51D0;
	sub_8259CB28(ctx, base);
	// lwz r6,128(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// lwz r5,124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mulli r11,r5,92
	ctx.r11.s64 = ctx.r5.s64 * 92;
	// lwz r4,20(r6)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + 20);
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r4,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r4.u32);
	// lwz r9,128(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// lwz r8,124(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// mulli r11,r8,92
	ctx.r11.s64 = ctx.r8.s64 * 92;
	// lbz r6,90(r9)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r9.u32 + 90);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stb r6,90(r7)
	PPC_STORE_U8(ctx.r7.u32 + 90, ctx.r6.u8);
loc_82BD5208:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// li r31,0
	ctx.r31.s64 = 0;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// divw. r8,r9,r28
	ctx.r8.s32 = PPCDivide(ctx.r9.s32, ctx.r28.s32);
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq 0x82bd5258
	if (cr0.eq) goto loc_82BD5258;
	// li r29,0
	ctx.r29.s64 = 0;
loc_82BD5224:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// lwz r3,20(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// bl 0x82bd0b70
	ctx.lr = 0x82BD5238;
	sub_82BD0B70(ctx, base);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r29,r29,92
	ctx.r29.s64 = ctx.r29.s64 + 92;
	// subf r8,r9,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r9.s64;
	// divw r7,r8,r28
	ctx.r7.s32 = PPCDivide(ctx.r8.s32, ctx.r28.s32);
	// cmplw cr6,r31,r7
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r7.u32, xer);
	// blt cr6,0x82bd5224
	if (cr6.lt) goto loc_82BD5224;
loc_82BD5258:
	// bl 0x831156e8
	ctx.lr = 0x82BD525C;
	sub_831156E8(ctx, base);
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// addis r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 131072;
	// addi r11,r11,-20956
	ctx.r11.s64 = ctx.r11.s64 + -20956;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,-1
	cr6.compare<int32_t>(ctx.r10.s32, -1, xer);
	// beq cr6,0x82bd528c
	if (cr6.eq) goto loc_82BD528C;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82BD5284:
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r11.u32);
loc_82BD528C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BD5294"))) PPC_WEAK_FUNC(sub_82BD5294);
PPC_FUNC_IMPL(__imp__sub_82BD5294) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BD5298"))) PPC_WEAK_FUNC(sub_82BD5298);
PPC_FUNC_IMPL(__imp__sub_82BD5298) {
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
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82bd1a28
	ctx.lr = 0x82BD52C0;
	sub_82BD1A28(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bd1af0
	ctx.lr = 0x82BD52CC;
	sub_82BD1AF0(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82bd1af0
	ctx.lr = 0x82BD52D8;
	sub_82BD1AF0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82bd18c0
	ctx.lr = 0x82BD52E0;
	sub_82BD18C0(ctx, base);
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

__attribute__((alias("__imp__sub_82BD52F8"))) PPC_WEAK_FUNC(sub_82BD52F8);
PPC_FUNC_IMPL(__imp__sub_82BD52F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdac4
	ctx.lr = 0x82BD5300;
	__savegprlr_19(ctx, base);
	// stwu r1,-496(r1)
	ea = -496 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82BD530C;
	sub_82D19A78(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d33db0
	ctx.lr = 0x82BD5314;
	sub_82D33DB0(ctx, base);
	// mr r19,r3
	ctx.r19.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bd5660
	if (cr6.eq) goto loc_82BD5660;
	// lwz r11,104(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 104);
	// li r10,92
	ctx.r10.s64 = 92;
	// lwz r9,100(r25)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r25.u32 + 100);
	// subf r8,r9,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r9.s64;
	// divw r31,r8,r10
	ctx.r31.s32 = PPCDivide(ctx.r8.s32, ctx.r10.s32);
	// cmplwi cr6,r31,7
	cr6.compare<uint32_t>(ctx.r31.u32, 7, xer);
	// blt cr6,0x82bd5344
	if (cr6.lt) goto loc_82BD5344;
	// li r31,7
	ctx.r31.s64 = 7;
	// b 0x82bd534c
	goto loc_82BD534C;
loc_82BD5344:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x82bd5660
	if (cr6.eq) goto loc_82BD5660;
loc_82BD534C:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,3
	ctx.r4.s64 = 3;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82a8c428
	ctx.lr = 0x82BD535C;
	sub_82A8C428(ctx, base);
	// lis r11,-31777
	ctx.r11.s64 = -2082537472;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// addi r29,r11,31592
	ctx.r29.s64 = ctx.r11.s64 + 31592;
	// lwz r4,-60(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + -60);
	// bl 0x82473550
	ctx.lr = 0x82BD5370;
	sub_82473550(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82474170
	ctx.lr = 0x82BD537C;
	sub_82474170(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// addi r20,r11,-18254
	ctx.r20.s64 = ctx.r11.s64 + -18254;
	// addi r4,r20,-31
	ctx.r4.s64 = ctx.r20.s64 + -31;
	// bl 0x82473550
	ctx.lr = 0x82BD5390;
	sub_82473550(ctx, base);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82BD5398;
	sub_82D19A78(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r1,232
	ctx.r4.s64 = ctx.r1.s64 + 232;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82a79bf8
	ctx.lr = 0x82BD53A8;
	sub_82A79BF8(ctx, base);
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x82bd53bc
	if (!cr6.lt) goto loc_82BD53BC;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
loc_82BD53BC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BD53D4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x824707c8
	ctx.lr = 0x82BD53DC;
	sub_824707C8(ctx, base);
	// mr r22,r29
	ctx.r22.u64 = ctx.r29.u64;
	// li r23,0
	ctx.r23.s64 = 0;
	// li r21,0
	ctx.r21.s64 = 0;
	// lwz r24,100(r25)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r25.u32 + 100);
loc_82BD53EC:
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x82d33db0
	ctx.lr = 0x82BD53F8;
	sub_82D33DB0(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bd5638
	if (cr6.eq) goto loc_82BD5638;
	// lwz r11,104(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 104);
	// cmplw cr6,r24,r11
	cr6.compare<uint32_t>(ctx.r24.u32, ctx.r11.u32, xer);
	// beq cr6,0x82bd5614
	if (cr6.eq) goto loc_82BD5614;
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x837b0c10
	ctx.lr = 0x82BD541C;
	sub_837B0C10(ctx, base);
	// lwz r11,124(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 124);
	// cmplw cr6,r23,r11
	cr6.compare<uint32_t>(ctx.r23.u32, ctx.r11.u32, xer);
	// bne cr6,0x82bd5478
	if (!cr6.eq) goto loc_82BD5478;
	// lwz r11,128(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 128);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82bd5478
	if (cr6.eq) goto loc_82BD5478;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r4,24(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// bl 0x82d04220
	ctx.lr = 0x82BD5440;
	sub_82D04220(ctx, base);
	// lwz r11,128(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 128);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,20(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// bl 0x83572958
	ctx.lr = 0x82BD5450;
	sub_83572958(ctx, base);
	// lwz r10,128(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 128);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwz r4,20(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// bl 0x82bd0f20
	ctx.lr = 0x82BD5464;
	sub_82BD0F20(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82bd8448
	ctx.lr = 0x82BD546C;
	sub_82BD8448(ctx, base);
	// lwz r9,128(r25)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r25.u32 + 128);
	// lbz r27,89(r9)
	ctx.r27.u64 = PPC_LOAD_U8(ctx.r9.u32 + 89);
	// b 0x82bd54a0
	goto loc_82BD54A0;
loc_82BD5478:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r4,24(r24)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r24.u32 + 24);
	// bl 0x82d04220
	ctx.lr = 0x82BD5484;
	sub_82D04220(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,20(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 20);
	// bl 0x83572958
	ctx.lr = 0x82BD5490;
	sub_83572958(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,16(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 16);
	// bl 0x82bd8448
	ctx.lr = 0x82BD549C;
	sub_82BD8448(ctx, base);
	// lbz r27,89(r24)
	ctx.r27.u64 = PPC_LOAD_U8(ctx.r24.u32 + 89);
loc_82BD54A0:
	// lwz r11,100(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 100);
	// addi r31,r26,100
	ctx.r31.s64 = ctx.r26.s64 + 100;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r4,-20(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + -20);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BD54C0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bd54d8
	if (cr6.eq) goto loc_82BD54D8;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// bl 0x82d291e0
	ctx.lr = 0x82BD54D8;
	sub_82D291E0(ctx, base);
loc_82BD54D8:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,-36(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + -36);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BD54F0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bd5554
	if (cr6.eq) goto loc_82BD5554;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r10,112(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 112);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BD5514;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,-28(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + -28);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82BD552C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bd5554
	if (cr6.eq) goto loc_82BD5554;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d2b0f8
	ctx.lr = 0x82BD5540;
	sub_82D2B0F8(ctx, base);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r4,r11,16
	ctx.r4.u64 = ctx.r11.u32 & 0xFFFF;
	// bl 0x83545640
	ctx.lr = 0x82BD5554;
	sub_83545640(ctx, base);
loc_82BD5554:
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82d2b608
	ctx.lr = 0x82BD5568;
	sub_82D2B608(ctx, base);
	// lwz r11,132(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 132);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// lwz r31,-8(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + -8);
	// bne cr6,0x82bd55e0
	if (!cr6.eq) goto loc_82BD55E0;
	// lwz r31,-12(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + -12);
	// cmplwi cr6,r23,3
	cr6.compare<uint32_t>(ctx.r23.u32, 3, xer);
	// bge cr6,0x82bd55e0
	if (!cr6.lt) goto loc_82BD55E0;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// lwz r4,-4(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + -4);
	// bl 0x837b0c10
	ctx.lr = 0x82BD5590;
	sub_837B0C10(ctx, base);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// lwz r5,0(r22)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// bl 0x82ab6970
	ctx.lr = 0x82BD55A0;
	sub_82AB6970(ctx, base);
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82bd55b4
	if (cr6.lt) goto loc_82BD55B4;
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82bd55b8
	goto loc_82BD55B8;
loc_82BD55B4:
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_82BD55B8:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BD55D0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x8387e8e0
	ctx.lr = 0x82BD55D8;
	sub_8387E8E0(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x8387e8e0
	ctx.lr = 0x82BD55E0;
	sub_8387E8E0(ctx, base);
loc_82BD55E0:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BD55FC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r24,r24,92
	ctx.r24.s64 = ctx.r24.s64 + 92;
	// addi r23,r23,1
	ctx.r23.s64 = ctx.r23.s64 + 1;
	// addi r22,r22,4
	ctx.r22.s64 = ctx.r22.s64 + 4;
	// bl 0x8387e8e0
	ctx.lr = 0x82BD5610;
	sub_8387E8E0(ctx, base);
	// b 0x82bd5638
	goto loc_82BD5638;
loc_82BD5614:
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82d2b608
	ctx.lr = 0x82BD5628;
	sub_82D2B608(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82d2aec8
	ctx.lr = 0x82BD5638;
	sub_82D2AEC8(ctx, base);
loc_82BD5638:
	// addi r21,r21,1
	ctx.r21.s64 = ctx.r21.s64 + 1;
	// cmplwi cr6,r21,7
	cr6.compare<uint32_t>(ctx.r21.u32, 7, xer);
	// blt cr6,0x82bd53ec
	if (cr6.lt) goto loc_82BD53EC;
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// bl 0x82a79160
	ctx.lr = 0x82BD564C;
	sub_82A79160(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// addi r10,r11,15320
	ctx.r10.s64 = ctx.r11.s64 + 15320;
	// stw r10,304(r1)
	PPC_STORE_U32(ctx.r1.u32 + 304, ctx.r10.u32);
	// bl 0x831ccf00
	ctx.lr = 0x82BD5660;
	sub_831CCF00(ctx, base);
loc_82BD5660:
	// addi r1,r1,496
	ctx.r1.s64 = ctx.r1.s64 + 496;
	// b 0x831cdb14
	__restgprlr_19(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BD5668"))) PPC_WEAK_FUNC(sub_82BD5668);
PPC_FUNC_IMPL(__imp__sub_82BD5668) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82BD5670;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,-13652(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -13652);
	// cmpwi cr6,r11,19
	cr6.compare<int32_t>(ctx.r11.s32, 19, xer);
	// bne cr6,0x82bd569c
	if (!cr6.eq) goto loc_82BD569C;
	// bl 0x82d19a78
	ctx.lr = 0x82BD568C;
	sub_82D19A78(ctx, base);
	// lis r11,-31777
	ctx.r11.s64 = -2082537472;
	// addi r30,r11,31568
	ctx.r30.s64 = ctx.r11.s64 + 31568;
	// lwz r4,-28(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + -28);
	// b 0x82bd56ac
	goto loc_82BD56AC;
loc_82BD569C:
	// bl 0x82d19a78
	ctx.lr = 0x82BD56A0;
	sub_82D19A78(ctx, base);
	// lis r11,-31777
	ctx.r11.s64 = -2082537472;
	// addi r30,r11,31568
	ctx.r30.s64 = ctx.r11.s64 + 31568;
	// lwz r4,-32(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + -32);
loc_82BD56AC:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BD56C0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82BD56C8;
	sub_82D19A78(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BD56E0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bd56f4
	if (cr6.eq) goto loc_82BD56F4;
	// lis r4,7
	ctx.r4.s64 = 458752;
	// ori r4,r4,105
	ctx.r4.u64 = ctx.r4.u64 | 105;
	// bl 0x82d29598
	ctx.lr = 0x82BD56F4;
	sub_82D29598(ctx, base);
loc_82BD56F4:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d21e48
	ctx.lr = 0x82BD5704;
	sub_82D21E48(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bd52f8
	ctx.lr = 0x82BD570C;
	sub_82BD52F8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82BD5714;
	sub_82D19A78(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d33db0
	ctx.lr = 0x82BD571C;
	sub_82D33DB0(ctx, base);
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// lwz r10,104(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// li r29,92
	ctx.r29.s64 = 92;
	// addi r30,r31,100
	ctx.r30.s64 = ctx.r31.s64 + 100;
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r28,r9,r29
	ctx.r28.s32 = PPCDivide(ctx.r9.s32, ctx.r29.s32);
	// bl 0x82d33c10
	ctx.lr = 0x82BD5738;
	sub_82D33C10(ctx, base);
	// cmplw cr6,r28,r3
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r3.u32, xer);
	// ble cr6,0x82bd5764
	if (!cr6.gt) goto loc_82BD5764;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// divw r5,r9,r29
	ctx.r5.s32 = PPCDivide(ctx.r9.s32, ctx.r29.s32);
	// bl 0x82d20f50
	ctx.lr = 0x82BD5764;
	sub_82D20F50(ctx, base);
loc_82BD5764:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BD5770"))) PPC_WEAK_FUNC(sub_82BD5770);
PPC_FUNC_IMPL(__imp__sub_82BD5770) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82BD5778;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82d19bc0
	ctx.lr = 0x82BD5788;
	sub_82D19BC0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x82bd57a8
	if (cr6.eq) goto loc_82BD57A8;
	// lwz r30,132(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// bl 0x82d19bb0
	ctx.lr = 0x82BD57A0;
	sub_82D19BB0(ctx, base);
	// add r3,r3,r30
	ctx.r3.u64 = ctx.r3.u64 + ctx.r30.u64;
	// b 0x82bd57ac
	goto loc_82BD57AC;
loc_82BD57A8:
	// bl 0x82d19bb0
	ctx.lr = 0x82BD57AC;
	sub_82D19BB0(ctx, base);
loc_82BD57AC:
	// lwz r11,132(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// li r29,2
	ctx.r29.s64 = 2;
	// li r28,1
	ctx.r28.s64 = 1;
	// stw r3,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r3.u32);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x82bd586c
	if (!cr6.eq) goto loc_82BD586C;
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82bd5850
	if (cr6.eq) goto loc_82BD5850;
	// lwz r11,128(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82bd5850
	if (cr6.eq) goto loc_82BD5850;
	// lwz r7,100(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// li r8,92
	ctx.r8.s64 = 92;
	// lwz r10,104(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// li r9,0
	ctx.r9.s64 = 0;
	// subf r6,r7,r10
	ctx.r6.s64 = ctx.r10.s64 - ctx.r7.s64;
	// divw. r7,r6,r8
	ctx.r7.s32 = PPCDivide(ctx.r6.s32, ctx.r8.s32);
	cr0.compare<int32_t>(ctx.r7.s32, 0, xer);
	// beq 0x82bd5850
	if (cr0.eq) goto loc_82BD5850;
	// lwz r8,20(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// li r11,0
	ctx.r11.s64 = 0;
loc_82BD57FC:
	// lwz r10,100(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r5,20(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 20);
	// cmplw cr6,r5,r8
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r8.u32, xer);
	// beq cr6,0x82bd5824
	if (cr6.eq) goto loc_82BD5824;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,92
	ctx.r11.s64 = ctx.r11.s64 + 92;
	// cmplw cr6,r9,r7
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, xer);
	// blt cr6,0x82bd57fc
	if (cr6.lt) goto loc_82BD57FC;
	// b 0x82bd5850
	goto loc_82BD5850;
loc_82BD5824:
	// cmplw cr6,r9,r3
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r3.u32, xer);
	// beq cr6,0x82bd5844
	if (cr6.eq) goto loc_82BD5844;
	// mulli r11,r3,92
	ctx.r11.s64 = ctx.r3.s64 * 92;
	// mulli r9,r9,92
	ctx.r9.s64 = ctx.r9.s64 * 92;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r3,r9,r10
	ctx.r3.u64 = ctx.r9.u64 + ctx.r10.u64;
	// bl 0x82bd5298
	ctx.lr = 0x82BD5840;
	sub_82BD5298(ctx, base);
	// b 0x82bd5848
	goto loc_82BD5848;
loc_82BD5844:
	// li r28,0
	ctx.r28.s64 = 0;
loc_82BD5848:
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r11.u32);
loc_82BD5850:
	// clrlwi r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82bd5864
	if (cr6.eq) goto loc_82BD5864;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bd52f8
	ctx.lr = 0x82BD5864;
	sub_82BD52F8(ctx, base);
loc_82BD5864:
	// li r29,5
	ctx.r29.s64 = 5;
	// b 0x82bd5974
	goto loc_82BD5974;
loc_82BD586C:
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// mulli r10,r3,92
	ctx.r10.s64 = ctx.r3.s64 * 92;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// addi r3,r11,32
	ctx.r3.s64 = ctx.r11.s64 + 32;
	// addi r30,r10,-17696
	ctx.r30.s64 = ctx.r10.s64 + -17696;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r30,-590
	ctx.r6.s64 = ctx.r30.s64 + -590;
	// lwz r5,48(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x827a8810
	ctx.lr = 0x82BD5898;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82bd5910
	if (cr6.eq) goto loc_82BD5910;
	// li r29,3
	ctx.r29.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r29,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r29.u32);
	// bl 0x82d19a78
	ctx.lr = 0x82BD58B0;
	sub_82D19A78(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r11,-31777
	ctx.r11.s64 = -2082537472;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r9,72(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 72);
	// lwz r4,31520(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 31520);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82BD58CC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r8,124(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// lwz r10,100(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// mulli r11,r8,92
	ctx.r11.s64 = ctx.r8.s64 * 92;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r11,r10,32
	ctx.r11.s64 = ctx.r10.s64 + 32;
	// lwz r7,52(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	// cmplwi cr6,r7,16
	cr6.compare<uint32_t>(ctx.r7.u32, 16, xer);
	// blt cr6,0x82bd58f0
	if (cr6.lt) goto loc_82BD58F0;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82BD58F0:
	// stw r11,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r11.u32);
	// lwz r30,20(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// bl 0x830ff290
	ctx.lr = 0x82BD58FC;
	sub_830FF290(ctx, base);
	// stw r30,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r30.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d199d0
	ctx.lr = 0x82BD590C;
	sub_82D199D0(ctx, base);
	// b 0x82bd5974
	goto loc_82BD5974;
loc_82BD5910:
	// lwz r11,136(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82bd5974
	if (!cr6.eq) goto loc_82BD5974;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82bd86e8
	ctx.lr = 0x82BD5930;
	sub_82BD86E8(ctx, base);
	// stw r3,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r3.u32);
	// lwz r11,124(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// li r7,71
	ctx.r7.s64 = 71;
	// lwz r10,100(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// li r6,71
	ctx.r6.s64 = 71;
	// mulli r11,r11,92
	ctx.r11.s64 = ctx.r11.s64 * 92;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,308(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 308);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r5,24(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// lwz r4,20(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// bctrl 
	ctx.lr = 0x82BD5964;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,136(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// bl 0x83103100
	ctx.lr = 0x82BD5970;
	sub_83103100(ctx, base);
	// li r29,2
	ctx.r29.s64 = 2;
loc_82BD5974:
	// lbz r11,140(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 140);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82bd5984
	if (!cr6.eq) goto loc_82BD5984;
	// stb r28,140(r31)
	PPC_STORE_U8(ctx.r31.u32 + 140, ctx.r28.u8);
loc_82BD5984:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d17da0
	ctx.lr = 0x82BD5990;
	sub_82D17DA0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BD5998"))) PPC_WEAK_FUNC(sub_82BD5998);
PPC_FUNC_IMPL(__imp__sub_82BD5998) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82BD59A0;
	__savegprlr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	ctx.r31.s64 = 0;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// stw r31,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r31.u32);
	// bl 0x82bd2048
	ctx.lr = 0x82BD59C4;
	sub_82BD2048(ctx, base);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi. r8,r9,2
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 2;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq 0x82bd5a18
	if (cr0.eq) goto loc_82BD5A18;
loc_82BD59DC:
	// lwzx r3,r31,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// bl 0x82bd0938
	ctx.lr = 0x82BD59E4;
	sub_82BD0938(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bd59f8
	if (cr6.eq) goto loc_82BD59F8;
	// addi r3,r29,100
	ctx.r3.s64 = ctx.r29.s64 + 100;
	// bl 0x82bd2ed8
	ctx.lr = 0x82BD59F8;
	sub_82BD2ED8(ctx, base);
loc_82BD59F8:
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r8,r9,2
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 2;
	// cmplw cr6,r30,r8
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r8.u32, xer);
	// blt cr6,0x82bd59dc
	if (cr6.lt) goto loc_82BD59DC;
loc_82BD5A18:
	// addi r3,r29,100
	ctx.r3.s64 = ctx.r29.s64 + 100;
	// bl 0x82bd1218
	ctx.lr = 0x82BD5A20;
	sub_82BD1218(ctx, base);
	// lwz r10,104(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 104);
	// lwz r9,100(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 100);
	// li r11,92
	ctx.r11.s64 = 92;
	// subf r8,r9,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r9.s64;
	// divw. r7,r8,r11
	ctx.r7.s32 = PPCDivide(ctx.r8.s32, ctx.r11.s32);
	cr0.compare<int32_t>(ctx.r7.s32, 0, xer);
	// beq 0x82bd5a50
	if (cr0.eq) goto loc_82BD5A50;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// beq cr6,0x82bd5a4c
	if (cr6.eq) goto loc_82BD5A4C;
	// stw r28,128(r29)
	PPC_STORE_U32(ctx.r29.u32 + 128, ctx.r28.u32);
	// stw r11,132(r29)
	PPC_STORE_U32(ctx.r29.u32 + 132, ctx.r11.u32);
loc_82BD5A4C:
	// stw r11,96(r29)
	PPC_STORE_U32(ctx.r29.u32 + 96, ctx.r11.u32);
loc_82BD5A50:
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82bd5a6c
	if (cr6.eq) goto loc_82BD5A6C;
	// li r11,2
	ctx.r11.s64 = 2;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82BD5A6C;
	sub_825952B8(ctx, base);
loc_82BD5A6C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BD5A74"))) PPC_WEAK_FUNC(sub_82BD5A74);
PPC_FUNC_IMPL(__imp__sub_82BD5A74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BD5A78"))) PPC_WEAK_FUNC(sub_82BD5A78);
PPC_FUNC_IMPL(__imp__sub_82BD5A78) {
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
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// bl 0x82cd50f8
	ctx.lr = 0x82BD5A98;
	sub_82CD50F8(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-16680
	ctx.r9.s64 = ctx.r11.s64 + -16680;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// clrlwi r6,r30,24
	ctx.r6.u64 = ctx.r30.u32 & 0xFF;
	// stw r8,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r8.u32);
	// stw r7,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r7.u32);
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x82bd5ad4
	if (cr6.eq) goto loc_82BD5AD4;
	// lis r11,-31761
	ctx.r11.s64 = -2081488896;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,30888(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 30888);
	// bl 0x82d20ae0
	ctx.lr = 0x82BD5AD4;
	sub_82D20AE0(ctx, base);
loc_82BD5AD4:
	// lis r11,-31777
	ctx.r11.s64 = -2082537472;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,31732(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 31732);
	// bl 0x82d23390
	ctx.lr = 0x82BD5AE8;
	sub_82D23390(ctx, base);
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

__attribute__((alias("__imp__sub_82BD5B04"))) PPC_WEAK_FUNC(sub_82BD5B04);
PPC_FUNC_IMPL(__imp__sub_82BD5B04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BD5B08"))) PPC_WEAK_FUNC(sub_82BD5B08);
PPC_FUNC_IMPL(__imp__sub_82BD5B08) {
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
	// li r11,4
	ctx.r11.s64 = 4;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,96(r3)
	PPC_STORE_U32(ctx.r3.u32 + 96, ctx.r11.u32);
	// bl 0x82d19a78
	ctx.lr = 0x82BD5B28;
	sub_82D19A78(ctx, base);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31777
	ctx.r10.s64 = -2082537472;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r8,72(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 72);
	// lwz r4,31748(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 31748);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82BD5B44;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19858
	ctx.lr = 0x82BD5B50;
	sub_82D19858(ctx, base);
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

__attribute__((alias("__imp__sub_82BD5B64"))) PPC_WEAK_FUNC(sub_82BD5B64);
PPC_FUNC_IMPL(__imp__sub_82BD5B64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BD5B68"))) PPC_WEAK_FUNC(sub_82BD5B68);
PPC_FUNC_IMPL(__imp__sub_82BD5B68) {
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
	// addi r31,r3,100
	ctx.r31.s64 = ctx.r3.s64 + 100;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bd31c0
	ctx.lr = 0x82BD5B8C;
	sub_82BD31C0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bd1218
	ctx.lr = 0x82BD5B94;
	sub_82BD1218(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,96(r30)
	PPC_STORE_U32(ctx.r30.u32 + 96, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82BD5BB4"))) PPC_WEAK_FUNC(sub_82BD5BB4);
PPC_FUNC_IMPL(__imp__sub_82BD5BB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BD5BB8"))) PPC_WEAK_FUNC(sub_82BD5BB8);
PPC_FUNC_IMPL(__imp__sub_82BD5BB8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82BD5BC0;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,27
	ctx.r11.s64 = 27;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,128
	ctx.r4.s64 = 128;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82BD5BE8;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bd5c08
	if (cr6.eq) goto loc_82BD5C08;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82bd5a78
	ctx.lr = 0x82BD5C00;
	sub_82BD5A78(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82BD5C08:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BD5C14"))) PPC_WEAK_FUNC(sub_82BD5C14);
PPC_FUNC_IMPL(__imp__sub_82BD5C14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BD5C18"))) PPC_WEAK_FUNC(sub_82BD5C18);
PPC_FUNC_IMPL(__imp__sub_82BD5C18) {
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
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-16680
	ctx.r9.s64 = ctx.r11.s64 + -16680;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r8,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r8.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82cd5008
	ctx.lr = 0x82BD5C50;
	sub_82CD5008(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82bd5c68
	if (cr6.eq) goto loc_82BD5C68;
	// bl 0x82416268
	ctx.lr = 0x82BD5C64;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82BD5C68:
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

__attribute__((alias("__imp__sub_82BD5C80"))) PPC_WEAK_FUNC(sub_82BD5C80);
PPC_FUNC_IMPL(__imp__sub_82BD5C80) {
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
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82d19bc0
	ctx.lr = 0x82BD5CA0;
	sub_82D19BC0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bd5cc0
	if (cr6.eq) goto loc_82BD5CC0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r30,132(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// bl 0x82d19bb0
	ctx.lr = 0x82BD5CB8;
	sub_82D19BB0(ctx, base);
	// add r11,r3,r30
	ctx.r11.u64 = ctx.r3.u64 + ctx.r30.u64;
	// b 0x82bd5cc4
	goto loc_82BD5CC4;
loc_82BD5CC0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82BD5CC4:
	// lwz r10,104(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// li r9,92
	ctx.r9.s64 = 92;
	// lwz r8,100(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// subf r7,r8,r10
	ctx.r7.s64 = ctx.r10.s64 - ctx.r8.s64;
	// divw r6,r7,r9
	ctx.r6.s32 = PPCDivide(ctx.r7.s32, ctx.r9.s32);
	// cmplw cr6,r11,r6
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r6.u32, xer);
	// bge cr6,0x82bd5cf0
	if (!cr6.lt) goto loc_82BD5CF0;
	// rotlwi r10,r8,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// mulli r11,r11,92
	ctx.r11.s64 = ctx.r11.s64 * 92;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x82bd5cf4
	goto loc_82BD5CF4;
loc_82BD5CF0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82BD5CF4:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// stw r11,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r11.u32);
	// beq cr6,0x82bd5d74
	if (cr6.eq) goto loc_82BD5D74;
	// lwz r30,20(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x82bd5d74
	if (cr6.eq) goto loc_82BD5D74;
	// bl 0x830ff290
	ctx.lr = 0x82BD5D10;
	sub_830FF290(ctx, base);
	// stw r30,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82BD5D1C;
	sub_82D19A78(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r11,-31777
	ctx.r11.s64 = -2082537472;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r9,72(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 72);
	// lwz r4,31740(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 31740);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82BD5D38;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d199d0
	ctx.lr = 0x82BD5D44;
	sub_82D199D0(ctx, base);
	// lwz r11,124(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// li r8,3
	ctx.r8.s64 = 3;
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// stw r8,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r8.u32);
	// lwz r7,20(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmplwi cr6,r7,16
	cr6.compare<uint32_t>(ctx.r7.u32, 16, xer);
	// blt cr6,0x82bd5d64
	if (cr6.lt) goto loc_82BD5D64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82BD5D64:
	// stw r11,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r11.u32);
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d17da0
	ctx.lr = 0x82BD5D74;
	sub_82D17DA0(ctx, base);
loc_82BD5D74:
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

__attribute__((alias("__imp__sub_82BD5D8C"))) PPC_WEAK_FUNC(sub_82BD5D8C);
PPC_FUNC_IMPL(__imp__sub_82BD5D8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BD5D90"))) PPC_WEAK_FUNC(sub_82BD5D90);
PPC_FUNC_IMPL(__imp__sub_82BD5D90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82BD5D98;
	__savegprlr_26(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,104(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// li r10,92
	ctx.r10.s64 = 92;
	// lwz r9,100(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// subf r8,r9,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r9.s64;
	// divw r7,r8,r10
	ctx.r7.s32 = PPCDivide(ctx.r8.s32, ctx.r10.s32);
	// cmplw cr6,r5,r7
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r7.u32, xer);
	// bge cr6,0x82bd5ea0
	if (!cr6.lt) goto loc_82BD5EA0;
	// lwz r10,100(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 100);
	// lis r11,-31777
	ctx.r11.s64 = -2082537472;
	// addi r31,r4,100
	ctx.r31.s64 = ctx.r4.s64 + 100;
	// addi r28,r11,31768
	ctx.r28.s64 = ctx.r11.s64 + 31768;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r4,8(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82BD5DE4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bd5e24
	if (cr6.eq) goto loc_82BD5E24;
	// lwz r10,100(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 100);
	// mulli r11,r26,92
	ctx.r11.s64 = ctx.r26.s64 * 92;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,24(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// bl 0x82d04618
	ctx.lr = 0x82BD5E08;
	sub_82D04618(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82d291e0
	ctx.lr = 0x82BD5E1C;
	sub_82D291E0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8387e8e0
	ctx.lr = 0x82BD5E24;
	sub_8387E8E0(ctx, base);
loc_82BD5E24:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,-4(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + -4);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BD5E3C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bd5ea0
	if (cr6.eq) goto loc_82BD5EA0;
	// lwz r10,100(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 100);
	// mulli r11,r26,92
	ctx.r11.s64 = ctx.r26.s64 * 92;
	// add r30,r11,r10
	ctx.r30.u64 = ctx.r11.u64 + ctx.r10.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,20(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// bl 0x83572958
	ctx.lr = 0x82BD5E60;
	sub_83572958(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// bl 0x82bd8448
	ctx.lr = 0x82BD5E6C;
	sub_82BD8448(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,112(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 112);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BD5E88;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82BD5EA0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82BD5EA0:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BD5EA8"))) PPC_WEAK_FUNC(sub_82BD5EA8);
PPC_FUNC_IMPL(__imp__sub_82BD5EA8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdacc
	ctx.lr = 0x82BD5EB0;
	__savegprlr_21(ctx, base);
	// stwu r1,-448(r1)
	ea = -448 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82BD5EBC;
	sub_82D19A78(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d33db0
	ctx.lr = 0x82BD5EC4;
	sub_82D33DB0(ctx, base);
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bd6164
	if (cr6.eq) goto loc_82BD6164;
	// lwz r11,104(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 104);
	// li r10,92
	ctx.r10.s64 = 92;
	// lwz r9,100(r25)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r25.u32 + 100);
	// subf r8,r9,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r9.s64;
	// divw r31,r8,r10
	ctx.r31.s32 = PPCDivide(ctx.r8.s32, ctx.r10.s32);
	// cmplwi cr6,r31,7
	cr6.compare<uint32_t>(ctx.r31.u32, 7, xer);
	// blt cr6,0x82bd5ef4
	if (cr6.lt) goto loc_82BD5EF4;
	// li r31,7
	ctx.r31.s64 = 7;
	// b 0x82bd5efc
	goto loc_82BD5EFC;
loc_82BD5EF4:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x82bd6164
	if (cr6.eq) goto loc_82BD6164;
loc_82BD5EFC:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,3
	ctx.r4.s64 = 3;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82a8c428
	ctx.lr = 0x82BD5F0C;
	sub_82A8C428(ctx, base);
	// lis r11,-31777
	ctx.r11.s64 = -2082537472;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// addi r28,r11,31768
	ctx.r28.s64 = ctx.r11.s64 + 31768;
	// lwz r4,-16(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + -16);
	// bl 0x82473550
	ctx.lr = 0x82BD5F20;
	sub_82473550(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82474170
	ctx.lr = 0x82BD5F2C;
	sub_82474170(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// addi r24,r11,-17221
	ctx.r24.s64 = ctx.r11.s64 + -17221;
	// addi r4,r24,-1
	ctx.r4.s64 = ctx.r24.s64 + -1;
	// bl 0x82473550
	ctx.lr = 0x82BD5F40;
	sub_82473550(ctx, base);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82BD5F48;
	sub_82D19A78(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r1,200
	ctx.r4.s64 = ctx.r1.s64 + 200;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82a79bf8
	ctx.lr = 0x82BD5F58;
	sub_82A79BF8(ctx, base);
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x82bd5f6c
	if (!cr6.lt) goto loc_82BD5F6C;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
loc_82BD5F6C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BD5F84;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x824707c8
	ctx.lr = 0x82BD5F8C;
	sub_824707C8(ctx, base);
	// lis r11,930
	ctx.r11.s64 = 60948480;
	// li r26,0
	ctx.r26.s64 = 0;
	// li r22,1
	ctx.r22.s64 = 1;
	// ori r23,r11,179
	ctx.r23.u64 = ctx.r11.u64 | 179;
	// lwz r29,100(r25)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r25.u32 + 100);
loc_82BD5FA0:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x82d33db0
	ctx.lr = 0x82BD5FAC;
	sub_82D33DB0(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bd613c
	if (cr6.eq) goto loc_82BD613C;
	// lwz r11,104(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 104);
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, xer);
	// beq cr6,0x82bd6118
	if (cr6.eq) goto loc_82BD6118;
	// lwz r11,100(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// addi r31,r3,100
	ctx.r31.s64 = ctx.r3.s64 + 100;
	// lwz r4,8(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BD5FE0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bd6054
	if (cr6.eq) goto loc_82BD6054;
	// lwz r4,24(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// cmplw cr6,r4,r23
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r23.u32, xer);
	// bne cr6,0x82bd6030
	if (!cr6.eq) goto loc_82BD6030;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x837b0c10
	ctx.lr = 0x82BD6004;
	sub_837B0C10(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lwz r3,20(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// bl 0x82bd1b98
	ctx.lr = 0x82BD6014;
	sub_82BD1B98(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d291e0
	ctx.lr = 0x82BD6028;
	sub_82D291E0(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// b 0x82bd6050
	goto loc_82BD6050;
loc_82BD6030:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82d04618
	ctx.lr = 0x82BD6038;
	sub_82D04618(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82d291e0
	ctx.lr = 0x82BD604C;
	sub_82D291E0(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
loc_82BD6050:
	// bl 0x8387e8e0
	ctx.lr = 0x82BD6054;
	sub_8387E8E0(ctx, base);
loc_82BD6054:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,-4(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + -4);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BD606C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bd60c4
	if (cr6.eq) goto loc_82BD60C4;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,20(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// bl 0x83572958
	ctx.lr = 0x82BD6084;
	sub_83572958(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,16(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// bl 0x82bd8448
	ctx.lr = 0x82BD6090;
	sub_82BD8448(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,112(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 112);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BD60AC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82BD60C4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82BD60C4:
	// bl 0x825d8390
	ctx.lr = 0x82BD60C8;
	sub_825D8390(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8310cc00
	ctx.lr = 0x82BD60D0;
	sub_8310CC00(ctx, base);
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// slw r10,r22,r31
	ctx.r10.u64 = ctx.r31.u8 & 0x20 ? 0 : (ctx.r22.u32 << (ctx.r31.u8 & 0x3F));
	// and r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 & ctx.r11.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82bd60fc
	if (!cr6.eq) goto loc_82BD60FC;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82bd1500
	ctx.lr = 0x82BD60EC;
	sub_82BD1500(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// li r4,0
	ctx.r4.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82bd6100
	if (!cr6.eq) goto loc_82BD6100;
loc_82BD60FC:
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
loc_82BD6100:
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82d2b608
	ctx.lr = 0x82BD6110;
	sub_82D2B608(ctx, base);
	// addi r29,r29,92
	ctx.r29.s64 = ctx.r29.s64 + 92;
	// b 0x82bd613c
	goto loc_82BD613C;
loc_82BD6118:
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82d2b608
	ctx.lr = 0x82BD612C;
	sub_82D2B608(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82d2aec8
	ctx.lr = 0x82BD613C;
	sub_82D2AEC8(ctx, base);
loc_82BD613C:
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// cmplwi cr6,r26,7
	cr6.compare<uint32_t>(ctx.r26.u32, 7, xer);
	// blt cr6,0x82bd5fa0
	if (cr6.lt) goto loc_82BD5FA0;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x82a79160
	ctx.lr = 0x82BD6150;
	sub_82A79160(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// addi r10,r11,15320
	ctx.r10.s64 = ctx.r11.s64 + 15320;
	// stw r10,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r10.u32);
	// bl 0x831ccf00
	ctx.lr = 0x82BD6164;
	sub_831CCF00(ctx, base);
loc_82BD6164:
	// addi r1,r1,448
	ctx.r1.s64 = ctx.r1.s64 + 448;
	// b 0x831cdb1c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BD616C"))) PPC_WEAK_FUNC(sub_82BD616C);
PPC_FUNC_IMPL(__imp__sub_82BD616C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BD6170"))) PPC_WEAK_FUNC(sub_82BD6170);
PPC_FUNC_IMPL(__imp__sub_82BD6170) {
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
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,-13652(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -13652);
	// cmpwi cr6,r11,19
	cr6.compare<int32_t>(ctx.r11.s32, 19, xer);
	// bne cr6,0x82bd61ac
	if (!cr6.eq) goto loc_82BD61AC;
	// bl 0x82d19a78
	ctx.lr = 0x82BD619C;
	sub_82D19A78(ctx, base);
	// lis r11,-31777
	ctx.r11.s64 = -2082537472;
	// addi r30,r11,31772
	ctx.r30.s64 = ctx.r11.s64 + 31772;
	// lwz r4,-12(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + -12);
	// b 0x82bd61bc
	goto loc_82BD61BC;
loc_82BD61AC:
	// bl 0x82d19a78
	ctx.lr = 0x82BD61B0;
	sub_82D19A78(ctx, base);
	// lis r11,-31777
	ctx.r11.s64 = -2082537472;
	// addi r30,r11,31772
	ctx.r30.s64 = ctx.r11.s64 + 31772;
	// lwz r4,-16(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + -16);
loc_82BD61BC:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BD61D0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82BD61D8;
	sub_82D19A78(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BD61F0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bd6204
	if (cr6.eq) goto loc_82BD6204;
	// lis r4,508
	ctx.r4.s64 = 33292288;
	// ori r4,r4,78
	ctx.r4.u64 = ctx.r4.u64 | 78;
	// bl 0x82d29598
	ctx.lr = 0x82BD6204;
	sub_82D29598(ctx, base);
loc_82BD6204:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bd5ea8
	ctx.lr = 0x82BD620C;
	sub_82BD5EA8(ctx, base);
	// lwz r10,104(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// lwz r9,100(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// li r11,92
	ctx.r11.s64 = 92;
	// li r7,0
	ctx.r7.s64 = 0;
	// subf r8,r9,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r9.s64;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// divw r5,r8,r11
	ctx.r5.s32 = PPCDivide(ctx.r8.s32, ctx.r11.s32);
	// bl 0x82d20f50
	ctx.lr = 0x82BD6234;
	sub_82D20F50(ctx, base);
	// bl 0x831156e8
	ctx.lr = 0x82BD6238;
	sub_831156E8(ctx, base);
	// lwz r7,52(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// li r3,1
	ctx.r3.s64 = 1;
	// addis r10,r7,2
	ctx.r10.s64 = ctx.r7.s64 + 131072;
	// addi r10,r10,-20956
	ctx.r10.s64 = ctx.r10.s64 + -20956;
	// lwz r11,16(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(ctx.r11.s32, -1, xer);
	// beq cr6,0x82bd625c
	if (cr6.eq) goto loc_82BD625C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,16(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16, ctx.r11.u32);
loc_82BD625C:
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

__attribute__((alias("__imp__sub_82BD6274"))) PPC_WEAK_FUNC(sub_82BD6274);
PPC_FUNC_IMPL(__imp__sub_82BD6274) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BD6278"))) PPC_WEAK_FUNC(sub_82BD6278);
PPC_FUNC_IMPL(__imp__sub_82BD6278) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82BD6280;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// li r7,-1
	ctx.r7.s64 = -1;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82d253f8
	ctx.lr = 0x82BD629C;
	sub_82D253F8(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r9,r11,-15496
	ctx.r9.s64 = ctx.r11.s64 + -15496;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// stw r30,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r30.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r8,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r8.u32);
	// lis r6,-31777
	ctx.r6.s64 = -2082537472;
	// stw r30,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r30.u32);
	// addi r27,r6,31912
	ctx.r27.s64 = ctx.r6.s64 + 31912;
	// stw r30,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r30.u32);
	// stw r30,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r30.u32);
	// stw r30,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r30.u32);
	// stb r7,120(r31)
	PPC_STORE_U8(ctx.r31.u32 + 120, ctx.r7.u8);
	// stb r29,121(r31)
	PPC_STORE_U8(ctx.r31.u32 + 121, ctx.r29.u8);
	// stw r28,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r28.u32);
	// stb r30,128(r31)
	PPC_STORE_U8(ctx.r31.u32 + 128, ctx.r30.u8);
	// stb r30,129(r31)
	PPC_STORE_U8(ctx.r31.u32 + 129, ctx.r30.u8);
	// stw r30,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r30.u32);
	// stw r30,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r30.u32);
	// lwz r4,31912(r6)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + 31912);
	// bl 0x82d20ae0
	ctx.lr = 0x82BD6304;
	sub_82D20AE0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,4(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// bl 0x82d20ae0
	ctx.lr = 0x82BD6310;
	sub_82D20AE0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,8(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// bl 0x82d23390
	ctx.lr = 0x82BD6320;
	sub_82D23390(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82927030
	ctx.lr = 0x82BD6328;
	sub_82927030(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x838257c0
	ctx.lr = 0x82BD6330;
	sub_838257C0(ctx, base);
	// li r4,27
	ctx.r4.s64 = 27;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r4,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r4.u32);
	// li r4,128
	ctx.r4.s64 = 128;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82BD6348;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bd635c
	if (cr6.eq) goto loc_82BD635C;
	// bl 0x82c2f748
	ctx.lr = 0x82BD6354;
	sub_82C2F748(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82bd6360
	goto loc_82BD6360;
loc_82BD635C:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_82BD6360:
	// stw r4,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r4.u32);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x82bd6378
	if (cr6.eq) goto loc_82BD6378;
	// bl 0x83103100
	ctx.lr = 0x82BD6374;
	sub_83103100(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82BD6378:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BD6380"))) PPC_WEAK_FUNC(sub_82BD6380);
PPC_FUNC_IMPL(__imp__sub_82BD6380) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82d19a68
	ctx.lr = 0x82BD6398;
	sub_82D19A68(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bd63d8
	if (cr6.eq) goto loc_82BD63D8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r10,-15896
	ctx.r4.s64 = ctx.r10.s64 + -15896;
	// lwz r9,72(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82BD63BC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r8,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r8.u32);
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
loc_82BD63D8:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82BD63F4"))) PPC_WEAK_FUNC(sub_82BD63F4);
PPC_FUNC_IMPL(__imp__sub_82BD63F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BD63F8"))) PPC_WEAK_FUNC(sub_82BD63F8);
PPC_FUNC_IMPL(__imp__sub_82BD63F8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,100(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// addi r11,r11,-5
	ctx.r11.s64 = ctx.r11.s64 + -5;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,128(r3)
	PPC_STORE_U8(ctx.r3.u32 + 128, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BD641C"))) PPC_WEAK_FUNC(sub_82BD641C);
PPC_FUNC_IMPL(__imp__sub_82BD641C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BD6420"))) PPC_WEAK_FUNC(sub_82BD6420);
PPC_FUNC_IMPL(__imp__sub_82BD6420) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,132(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bd6458
	if (cr6.eq) goto loc_82BD6458;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BD6450;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r9.u32);
loc_82BD6458:
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

__attribute__((alias("__imp__sub_82BD6470"))) PPC_WEAK_FUNC(sub_82BD6470);
PPC_FUNC_IMPL(__imp__sub_82BD6470) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,132(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82bd64b0
	if (cr6.eq) goto loc_82BD64B0;
	// lwz r10,12(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// bne cr6,0x82bd64b0
	if (!cr6.eq) goto loc_82BD64B0;
	// lis r10,512
	ctx.r10.s64 = 33554432;
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// ori r9,r10,1
	ctx.r9.u64 = ctx.r10.u64 | 1;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// blt cr6,0x82bd64b0
	if (cr6.lt) goto loc_82BD64B0;
	// lis r10,512
	ctx.r10.s64 = 33554432;
	// ori r9,r10,3
	ctx.r9.u64 = ctx.r10.u64 | 3;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// bgt cr6,0x82bd64b0
	if (cr6.gt) goto loc_82BD64B0;
	// stw r11,96(r3)
	PPC_STORE_U32(ctx.r3.u32 + 96, ctx.r11.u32);
loc_82BD64B0:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BD64B8"))) PPC_WEAK_FUNC(sub_82BD64B8);
PPC_FUNC_IMPL(__imp__sub_82BD64B8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82BD64C0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31758
	ctx.r11.s64 = -2081292288;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// lwz r11,24080(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24080);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82bd64ec
	if (cr6.eq) goto loc_82BD64EC;
	// lwz r10,100(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// stw r10,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// lwz r11,96(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// stw r11,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r11.u32);
loc_82BD64EC:
	// clrlwi r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82bd6550
	if (cr6.eq) goto loc_82BD6550;
	// bl 0x82d86078
	ctx.lr = 0x82BD64FC;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bd6550
	if (cr6.eq) goto loc_82BD6550;
	// lwz r11,124(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 124);
	// lwz r30,116(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x82bd6540
	if (!cr6.eq) goto loc_82BD6540;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83ac2480
	ctx.lr = 0x82BD651C;
	sub_83AC2480(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,68(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
	// bl 0x83ac2480
	ctx.lr = 0x82BD6530;
	sub_83AC2480(ctx, base);
	// lwz r9,64(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82BD6540:
	// lwz r11,116(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 116);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// lwz r10,112(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 112);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
loc_82BD6550:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BD6558"))) PPC_WEAK_FUNC(sub_82BD6558);
PPC_FUNC_IMPL(__imp__sub_82BD6558) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82BD6560;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,27
	ctx.r11.s64 = 27;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,140
	ctx.r4.s64 = 140;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// bl 0x82595718
	ctx.lr = 0x82BD658C;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bd65b0
	if (cr6.eq) goto loc_82BD65B0;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82bd6278
	ctx.lr = 0x82BD65A8;
	sub_82BD6278(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82BD65B0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BD65BC"))) PPC_WEAK_FUNC(sub_82BD65BC);
PPC_FUNC_IMPL(__imp__sub_82BD65BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BD65C0"))) PPC_WEAK_FUNC(sub_82BD65C0);
PPC_FUNC_IMPL(__imp__sub_82BD65C0) {
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
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-15496
	ctx.r9.s64 = ctx.r11.s64 + -15496;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r8,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r8.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82d25548
	ctx.lr = 0x82BD65F8;
	sub_82D25548(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82bd6610
	if (cr6.eq) goto loc_82BD6610;
	// bl 0x82416268
	ctx.lr = 0x82BD660C;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82BD6610:
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

__attribute__((alias("__imp__sub_82BD6628"))) PPC_WEAK_FUNC(sub_82BD6628);
PPC_FUNC_IMPL(__imp__sub_82BD6628) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82e6f960
	ctx.lr = 0x82BD6644;
	sub_82E6F960(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82e6fa08
	ctx.lr = 0x82BD664C;
	sub_82E6FA08(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x82bd6660
	if (!cr6.eq) goto loc_82BD6660;
	// li r11,4
	ctx.r11.s64 = 4;
loc_82BD6660:
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a68
	ctx.lr = 0x82BD666C;
	sub_82D19A68(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bd66c4
	if (cr6.eq) goto loc_82BD66C4;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2aec8
	ctx.lr = 0x82BD6684;
	sub_82D2AEC8(ctx, base);
	// lwz r11,124(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// blt cr6,0x82bd6698
	if (cr6.lt) goto loc_82BD6698;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r11.u32);
loc_82BD6698:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lis r10,-31777
	ctx.r10.s64 = -2082537472;
	// lwz r9,124(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r8,r10,31924
	ctx.r8.s64 = ctx.r10.s64 + 31924;
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r6,72(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// lwzx r4,r7,r8
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	// mtctr r6
	ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x82BD66C4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82BD66C4:
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a30
	ctx.lr = 0x82BD66D0;
	sub_82D19A30(ctx, base);
	// lwz r11,124(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bne cr6,0x82bd670c
	if (!cr6.eq) goto loc_82BD670C;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x82bd670c
	if (cr6.eq) goto loc_82BD670C;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-15880
	ctx.r4.s64 = ctx.r11.s64 + -15880;
	// addi r31,r30,100
	ctx.r31.s64 = ctx.r30.s64 + 100;
	// bl 0x837b0c10
	ctx.lr = 0x82BD66F8;
	sub_837B0C10(ctx, base);
	// lis r5,560
	ctx.r5.s64 = 36700160;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r5,r5,554
	ctx.r5.u64 = ctx.r5.u64 | 554;
	// bl 0x82a69a28
	ctx.lr = 0x82BD670C;
	sub_82A69A28(ctx, base);
loc_82BD670C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
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

__attribute__((alias("__imp__sub_82BD6728"))) PPC_WEAK_FUNC(sub_82BD6728);
PPC_FUNC_IMPL(__imp__sub_82BD6728) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad4
	ctx.lr = 0x82BD6730;
	__savegprlr_23(ctx, base);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// bl 0x82d19a68
	ctx.lr = 0x82BD6744;
	sub_82D19A68(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bd6924
	if (cr6.eq) goto loc_82BD6924;
	// lbz r11,129(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 129);
	// li r25,0
	ctx.r25.s64 = 0;
	// li r24,15
	ctx.r24.s64 = 15;
	// stw r25,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r25.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// stw r24,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r24.u32);
	// stb r25,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r25.u8);
	// bne cr6,0x82bd691c
	if (!cr6.eq) goto loc_82BD691C;
	// clrlwi r26,r29,24
	ctx.r26.u64 = ctx.r29.u32 & 0xFF;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(ctx.r26.u32, 0, xer);
	// addi r28,r11,-15600
	ctx.r28.s64 = ctx.r11.s64 + -15600;
	// bne cr6,0x82bd6794
	if (!cr6.eq) goto loc_82BD6794;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,104(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 104);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x82bd67e8
	if (cr6.eq) goto loc_82BD67E8;
loc_82BD6794:
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x83161f10
	ctx.lr = 0x82BD67A8;
	sub_83161F10(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// addi r29,r27,100
	ctx.r29.s64 = ctx.r27.s64 + 100;
	// bl 0x8292a3f8
	ctx.lr = 0x82BD67B8;
	sub_8292A3F8(ctx, base);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// addi r4,r28,-28
	ctx.r4.s64 = ctx.r28.s64 + -28;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x837b0c10
	ctx.lr = 0x82BD67C8;
	sub_837B0C10(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// bl 0x82a69ad0
	ctx.lr = 0x82BD67D8;
	sub_82A69AD0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stw r11,104(r30)
	PPC_STORE_U32(ctx.r30.u32 + 104, ctx.r11.u32);
	// bl 0x8387e8e0
	ctx.lr = 0x82BD67E8;
	sub_8387E8E0(ctx, base);
loc_82BD67E8:
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(ctx.r26.u32, 0, xer);
	// bne cr6,0x82bd6800
	if (!cr6.eq) goto loc_82BD6800;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,108(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 108);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x82bd6854
	if (cr6.eq) goto loc_82BD6854;
loc_82BD6800:
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x83161f10
	ctx.lr = 0x82BD6814;
	sub_83161F10(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// addi r29,r27,100
	ctx.r29.s64 = ctx.r27.s64 + 100;
	// bl 0x8292a3f8
	ctx.lr = 0x82BD6824;
	sub_8292A3F8(ctx, base);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// addi r4,r28,-12
	ctx.r4.s64 = ctx.r28.s64 + -12;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x837b0c10
	ctx.lr = 0x82BD6834;
	sub_837B0C10(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// bl 0x82a69ad0
	ctx.lr = 0x82BD6844;
	sub_82A69AD0(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stw r11,108(r30)
	PPC_STORE_U32(ctx.r30.u32 + 108, ctx.r11.u32);
	// bl 0x8387e8e0
	ctx.lr = 0x82BD6854;
	sub_8387E8E0(ctx, base);
loc_82BD6854:
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(ctx.r26.u32, 0, xer);
	// bne cr6,0x82bd687c
	if (!cr6.eq) goto loc_82BD687C;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,112(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 112);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82bd687c
	if (!cr6.eq) goto loc_82BD687C;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,116(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 116);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x82bd691c
	if (cr6.eq) goto loc_82BD691C;
loc_82BD687C:
	// lis r4,39
	ctx.r4.s64 = 2555904;
	// lwz r6,12(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// ori r4,r4,6
	ctx.r4.u64 = ctx.r4.u64 | 6;
	// bl 0x82d042a8
	ctx.lr = 0x82BD6894;
	sub_82D042A8(ctx, base);
	// stw r24,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r24.u32);
	// stw r25,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r25.u32);
	// li r6,-1
	ctx.r6.s64 = -1;
	// stb r25,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r25.u8);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r29,r27,100
	ctx.r29.s64 = ctx.r27.s64 + 100;
	// bl 0x8259cb28
	ctx.lr = 0x82BD68B8;
	sub_8259CB28(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x837b0c10
	ctx.lr = 0x82BD68C4;
	sub_837B0C10(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// bl 0x82a69ad0
	ctx.lr = 0x82BD68D4;
	sub_82A69AD0(ctx, base);
	// lwz r11,124(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 124);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bne cr6,0x82bd690c
	if (!cr6.eq) goto loc_82BD690C;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82bd68fc
	if (!cr6.eq) goto loc_82BD68FC;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r4,0
	ctx.r4.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82bd6900
	if (cr6.eq) goto loc_82BD6900;
loc_82BD68FC:
	// li r4,1
	ctx.r4.s64 = 1;
loc_82BD6900:
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82d2aec8
	ctx.lr = 0x82BD690C;
	sub_82D2AEC8(ctx, base);
loc_82BD690C:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r11,112(r30)
	PPC_STORE_U32(ctx.r30.u32 + 112, ctx.r11.u32);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stw r10,116(r30)
	PPC_STORE_U32(ctx.r30.u32 + 116, ctx.r10.u32);
loc_82BD691C:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8387e8e0
	ctx.lr = 0x82BD6924;
	sub_8387E8E0(ctx, base);
loc_82BD6924:
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BD692C"))) PPC_WEAK_FUNC(sub_82BD692C);
PPC_FUNC_IMPL(__imp__sub_82BD692C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BD6930"))) PPC_WEAK_FUNC(sub_82BD6930);
PPC_FUNC_IMPL(__imp__sub_82BD6930) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x82BD6938;
	__savegprlr_25(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82d19a68
	ctx.lr = 0x82BD6944;
	sub_82D19A68(ctx, base);
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
	// bl 0x82e6e978
	ctx.lr = 0x82BD6954;
	sub_82E6E978(ctx, base);
	// li r25,1
	ctx.r25.s64 = 1;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bd6978
	if (cr6.eq) goto loc_82BD6978;
	// bl 0x82e6e978
	ctx.lr = 0x82BD6964;
	sub_82E6E978(ctx, base);
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lbz r10,241(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 241);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82bd6978
	if (cr6.eq) goto loc_82BD6978;
	// mr r31,r25
	ctx.r31.u64 = ctx.r25.u64;
loc_82BD6978:
	// mr r26,r28
	ctx.r26.u64 = ctx.r28.u64;
	// bl 0x830ff290
	ctx.lr = 0x82BD6980;
	sub_830FF290(ctx, base);
	// bl 0x830ffaa8
	ctx.lr = 0x82BD6984;
	sub_830FFAA8(ctx, base);
	// cmplwi cr6,r3,21
	cr6.compare<uint32_t>(ctx.r3.u32, 21, xer);
	// bne cr6,0x82bd6990
	if (!cr6.eq) goto loc_82BD6990;
	// mr r26,r25
	ctx.r26.u64 = ctx.r25.u64;
loc_82BD6990:
	// bl 0x82d34e50
	ctx.lr = 0x82BD6994;
	sub_82D34E50(ctx, base);
	// bl 0x82d34da8
	ctx.lr = 0x82BD6998;
	sub_82D34DA8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82bd69b4
	if (cr6.eq) goto loc_82BD69B4;
	// lbz r11,129(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 129);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82bd69b4
	if (!cr6.eq) goto loc_82BD69B4;
	// stb r25,129(r30)
	PPC_STORE_U8(ctx.r30.u32 + 129, ctx.r25.u8);
loc_82BD69B4:
	// lbz r11,129(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 129);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82bd69ec
	if (cr6.eq) goto loc_82BD69EC;
	// bl 0x82d34e50
	ctx.lr = 0x82BD69C4;
	sub_82D34E50(ctx, base);
	// bl 0x82d34d38
	ctx.lr = 0x82BD69C8;
	sub_82D34D38(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82bd69ec
	if (cr6.eq) goto loc_82BD69EC;
	// bl 0x82d34e50
	ctx.lr = 0x82BD69D8;
	sub_82D34E50(ctx, base);
	// bl 0x82d34da8
	ctx.lr = 0x82BD69DC;
	sub_82D34DA8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82bd69ec
	if (!cr6.eq) goto loc_82BD69EC;
	// stb r28,129(r30)
	PPC_STORE_U8(ctx.r30.u32 + 129, ctx.r28.u8);
loc_82BD69EC:
	// lwz r11,100(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 100);
	// cmplwi cr6,r11,6
	cr6.compare<uint32_t>(ctx.r11.u32, 6, xer);
	// bgt cr6,0x82bd6e9c
	if (cr6.gt) goto loc_82BD6E9C;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x82bd6e9c
	if (cr6.eq) goto loc_82BD6E9C;
	// bdz 0x82bd6a1c
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_82BD6A1C;
	// bdz 0x82bd6bac
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_82BD6BAC;
	// bdz 0x82bd6c28
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_82BD6C28;
	// bdz 0x82bd6c64
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_82BD6C64;
	// bdz 0x82bd6cf4
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_82BD6CF4;
	// b 0x82bd6e4c
	goto loc_82BD6E4C;
loc_82BD6A1C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d19a68
	ctx.lr = 0x82BD6A24;
	sub_82D19A68(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r31,r11,-15644
	ctx.r31.s64 = ctx.r11.s64 + -15644;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r31,-216
	ctx.r4.s64 = ctx.r31.s64 + -216;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BD6A44;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bd6e9c
	if (cr6.eq) goto loc_82BD6E9C;
	// lwz r11,136(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 136);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82bd6e9c
	if (cr6.eq) goto loc_82BD6E9C;
	// bl 0x82d860f0
	ctx.lr = 0x82BD6A60;
	sub_82D860F0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,136(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 136);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x82c2f918
	ctx.lr = 0x82BD6A74;
	sub_82C2F918(ctx, base);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x82bd6b98
	if (cr6.eq) goto loc_82BD6B98;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r4,r31,-208
	ctx.r4.s64 = ctx.r31.s64 + -208;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BD6A98;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r4,r31,-192
	ctx.r4.s64 = ctx.r31.s64 + -192;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r8,72(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 72);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82BD6AB4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d2aec8
	ctx.lr = 0x82BD6AC4;
	sub_82D2AEC8(ctx, base);
	// lwz r7,100(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 100);
	// addi r27,r29,100
	ctx.r27.s64 = ctx.r29.s64 + 100;
	// addi r4,r31,-176
	ctx.r4.s64 = ctx.r31.s64 + -176;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r6,4(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// mtctr r6
	ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x82BD6AE0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r31,-156
	ctx.r4.s64 = ctx.r31.s64 + -156;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BD6AFC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,0(r25)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// addi r4,r31,-144
	ctx.r4.s64 = ctx.r31.s64 + -144;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r8,72(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 72);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82BD6B18;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r7,100(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 100);
	// addi r4,r31,-128
	ctx.r4.s64 = ctx.r31.s64 + -128;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r6,4(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// mtctr r6
	ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x82BD6B30;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r31,-112
	ctx.r4.s64 = ctx.r31.s64 + -112;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BD6B4C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r4,r31,-100
	ctx.r4.s64 = ctx.r31.s64 + -100;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r8,72(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 72);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82BD6B68;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// stw r28,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r28.u32);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// stw r28,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r28.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r28,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r28.u32);
	// stw r28,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r28.u32);
	// bl 0x82bd64b8
	ctx.lr = 0x82BD6B88;
	sub_82BD64B8(ctx, base);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82bd6728
	ctx.lr = 0x82BD6B98;
	sub_82BD6728(ctx, base);
loc_82BD6B98:
	// li r11,2
	ctx.r11.s64 = 2;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,100(r30)
	PPC_STORE_U32(ctx.r30.u32 + 100, ctx.r11.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_82BD6BAC:
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// stw r28,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r28.u32);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// stw r28,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r28.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r28,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r28.u32);
	// stw r28,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r28.u32);
	// bl 0x82bd64b8
	ctx.lr = 0x82BD6BCC;
	sub_82BD64B8(ctx, base);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82bd6728
	ctx.lr = 0x82BD6BDC;
	sub_82BD6728(ctx, base);
	// clrlwi r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82bd6e9c
	if (!cr6.eq) goto loc_82BD6E9C;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x82bd6c14
	if (cr6.eq) goto loc_82BD6C14;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r11,r9,-15644
	ctx.r11.s64 = ctx.r9.s64 + -15644;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r11,-92
	ctx.r4.s64 = ctx.r11.s64 + -92;
	// lwz r8,72(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 72);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82BD6C14;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82BD6C14:
	// li r11,3
	ctx.r11.s64 = 3;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,100(r30)
	PPC_STORE_U32(ctx.r30.u32 + 100, ctx.r11.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_82BD6C28:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x82bd6c50
	if (cr6.eq) goto loc_82BD6C50;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r11,r11,-15644
	ctx.r11.s64 = ctx.r11.s64 + -15644;
	// addi r4,r11,-76
	ctx.r4.s64 = ctx.r11.s64 + -76;
	// bl 0x82d2bb40
	ctx.lr = 0x82BD6C44;
	sub_82D2BB40(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82bd6e9c
	if (cr6.eq) goto loc_82BD6E9C;
loc_82BD6C50:
	// li r11,4
	ctx.r11.s64 = 4;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,100(r30)
	PPC_STORE_U32(ctx.r30.u32 + 100, ctx.r11.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_82BD6C64:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x82bd6ce0
	if (cr6.eq) goto loc_82BD6CE0;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r31,r10,-15644
	ctx.r31.s64 = ctx.r10.s64 + -15644;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r31,-60
	ctx.r4.s64 = ctx.r31.s64 + -60;
	// lwz r9,72(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82BD6C90;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r8,0(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r4,r31,-44
	ctx.r4.s64 = ctx.r31.s64 + -44;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r7,72(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 72);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82BD6CAC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d2aec8
	ctx.lr = 0x82BD6CBC;
	sub_82D2AEC8(ctx, base);
	// addi r4,r31,-28
	ctx.r4.s64 = ctx.r31.s64 + -28;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r31,r29,100
	ctx.r31.s64 = ctx.r29.s64 + 100;
	// bl 0x837b0c10
	ctx.lr = 0x82BD6CCC;
	sub_837B0C10(ctx, base);
	// lis r5,108
	ctx.r5.s64 = 7077888;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r5,r5,327
	ctx.r5.u64 = ctx.r5.u64 | 327;
	// bl 0x82a69a28
	ctx.lr = 0x82BD6CE0;
	sub_82A69A28(ctx, base);
loc_82BD6CE0:
	// li r11,5
	ctx.r11.s64 = 5;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,100(r30)
	PPC_STORE_U32(ctx.r30.u32 + 100, ctx.r11.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_82BD6CF4:
	// bl 0x831156e8
	ctx.lr = 0x82BD6CF8;
	sub_831156E8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bd6da4
	if (cr6.eq) goto loc_82BD6DA4;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// lwz r10,52(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// ori r9,r11,31594
	ctx.r9.u64 = ctx.r11.u64 | 31594;
	// lbzx r8,r10,r9
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r9.u32);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x82bd6da4
	if (cr6.eq) goto loc_82BD6DA4;
	// bl 0x830ff290
	ctx.lr = 0x82BD6D1C;
	sub_830FF290(ctx, base);
	// lbz r11,229(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 229);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82bd6da4
	if (cr6.eq) goto loc_82BD6DA4;
	// bl 0x830ff290
	ctx.lr = 0x82BD6D2C;
	sub_830FF290(ctx, base);
	// lbz r11,228(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 228);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82bd6da4
	if (cr6.eq) goto loc_82BD6DA4;
	// bl 0x82d273d8
	ctx.lr = 0x82BD6D3C;
	sub_82D273D8(ctx, base);
	// bl 0x82d27440
	ctx.lr = 0x82BD6D40;
	sub_82D27440(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bd6da4
	if (cr6.eq) goto loc_82BD6DA4;
	// bl 0x82d19a68
	ctx.lr = 0x82BD6D50;
	sub_82D19A68(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bd6da4
	if (cr6.eq) goto loc_82BD6DA4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a58
	ctx.lr = 0x82BD6D64;
	sub_82D19A58(ctx, base);
	// cmplwi cr6,r3,1
	cr6.compare<uint32_t>(ctx.r3.u32, 1, xer);
	// bne cr6,0x82bd6da4
	if (!cr6.eq) goto loc_82BD6DA4;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82d2b0f8
	ctx.lr = 0x82BD6D74;
	sub_82D2B0F8(ctx, base);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// cmplwi cr6,r11,61120
	cr6.compare<uint32_t>(ctx.r11.u32, 61120, xer);
	// bgt cr6,0x82bd6da4
	if (cr6.gt) goto loc_82BD6DA4;
	// bl 0x830ff290
	ctx.lr = 0x82BD6D84;
	sub_830FF290(ctx, base);
	// stb r28,228(r3)
	PPC_STORE_U8(ctx.r3.u32 + 228, ctx.r28.u8);
	// lwz r11,100(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 100);
	// addi r11,r11,-5
	ctx.r11.s64 = ctx.r11.s64 + -5;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82bd6da4
	if (cr6.eq) goto loc_82BD6DA4;
	// stb r25,128(r30)
	PPC_STORE_U8(ctx.r30.u32 + 128, ctx.r25.u8);
loc_82BD6DA4:
	// lbz r11,128(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 128);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82bd6e9c
	if (cr6.eq) goto loc_82BD6E9C;
	// lwz r11,132(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 132);
	// stb r28,128(r30)
	PPC_STORE_U8(ctx.r30.u32 + 128, ctx.r28.u8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82bd6e9c
	if (!cr6.eq) goto loc_82BD6E9C;
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// li r10,-4352
	ctx.r10.s64 = -4352;
	// stb r28,90(r1)
	PPC_STORE_U8(ctx.r1.u32 + 90, ctx.r28.u8);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// sth r10,88(r1)
	PPC_STORE_U16(ctx.r1.u32 + 88, ctx.r10.u16);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r28,91(r1)
	PPC_STORE_U8(ctx.r1.u32 + 91, ctx.r28.u8);
	// addi r31,r11,-15644
	ctx.r31.s64 = ctx.r11.s64 + -15644;
	// addi r3,r31,-16
	ctx.r3.s64 = ctx.r31.s64 + -16;
	// bl 0x82d74e10
	ctx.lr = 0x82BD6DF0;
	sub_82D74E10(ctx, base);
	// stw r3,132(r30)
	PPC_STORE_U32(ctx.r30.u32 + 132, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bd6e9c
	if (cr6.eq) goto loc_82BD6E9C;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x82bd6e20
	if (cr6.eq) goto loc_82BD6E20;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BD6E20;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82BD6E20:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,132(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 132);
	// bl 0x83103100
	ctx.lr = 0x82BD6E2C;
	sub_83103100(ctx, base);
	// li r11,6
	ctx.r11.s64 = 6;
	// li r4,6
	ctx.r4.s64 = 6;
	// stw r11,100(r30)
	PPC_STORE_U32(ctx.r30.u32 + 100, ctx.r11.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d17da0
	ctx.lr = 0x82BD6E40;
	sub_82D17DA0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_82BD6E4C:
	// lwz r11,96(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82bd6e9c
	if (cr6.eq) goto loc_82BD6E9C;
	// lis r10,512
	ctx.r10.s64 = 33554432;
	// ori r9,r10,2
	ctx.r9.u64 = ctx.r10.u64 | 2;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// bne cr6,0x82bd6e74
	if (!cr6.eq) goto loc_82BD6E74;
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r11,100(r30)
	PPC_STORE_U32(ctx.r30.u32 + 100, ctx.r11.u32);
	// b 0x82bd6e78
	goto loc_82BD6E78;
loc_82BD6E74:
	// stw r25,100(r30)
	PPC_STORE_U32(ctx.r30.u32 + 100, ctx.r25.u32);
loc_82BD6E78:
	// lwz r3,132(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 132);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bd6e98
	if (cr6.eq) goto loc_82BD6E98;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BD6E94;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r28,132(r30)
	PPC_STORE_U32(ctx.r30.u32 + 132, ctx.r28.u32);
loc_82BD6E98:
	// stw r28,96(r30)
	PPC_STORE_U32(ctx.r30.u32 + 96, ctx.r28.u32);
loc_82BD6E9C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BD6EA8"))) PPC_WEAK_FUNC(sub_82BD6EA8);
PPC_FUNC_IMPL(__imp__sub_82BD6EA8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// addi r11,r3,-1
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// bgt cr6,0x82bd6ee8
	if (cr6.gt) goto loc_82BD6EE8;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x82bd6ed0
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82BD6ED0;
	// bdzf 4*cr6+eq,0x82bd6ed8
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82BD6ED8;
	// bne cr6,0x82bd6ee0
	if (!cr6.eq) goto loc_82BD6EE0;
	// li r3,3
	ctx.r3.s64 = 3;
	// blr 
	return;
loc_82BD6ED0:
	// li r3,4
	ctx.r3.s64 = 4;
	// blr 
	return;
loc_82BD6ED8:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_82BD6EE0:
	// li r3,2
	ctx.r3.s64 = 2;
	// blr 
	return;
loc_82BD6EE8:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BD6EF0"))) PPC_WEAK_FUNC(sub_82BD6EF0);
PPC_FUNC_IMPL(__imp__sub_82BD6EF0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// ld r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r6.u32 + 0);
	// lfs f12,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// ld r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r5.u32 + 0);
	// lfs f8,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// lfs f0,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lfs f13,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// lfs f1,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// std r11,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r11.u64);
	// lfs f6,-12(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	ctx.f6.f64 = double(temp.f32);
	// std r10,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r10.u64);
	// lfs f3,-4(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -4);
	ctx.f3.f64 = double(temp.f32);
	// lfs f5,-8(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	ctx.f5.f64 = double(temp.f32);
	// fsubs f9,f6,f12
	ctx.f9.f64 = double(float(ctx.f6.f64 - ctx.f12.f64));
	// fsubs f11,f3,f12
	ctx.f11.f64 = double(float(ctx.f3.f64 - ctx.f12.f64));
	// lfs f4,-16(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	ctx.f4.f64 = double(temp.f32);
	// fsubs f10,f5,f8
	ctx.f10.f64 = double(float(ctx.f5.f64 - ctx.f8.f64));
	// std r11,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r11.u64);
	// lfs f5,-16(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f6,f0,f11
	ctx.f6.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// fsubs f8,f4,f8
	ctx.f8.f64 = double(float(ctx.f4.f64 - ctx.f8.f64));
	// lfs f2,-12(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f4,f0,f9
	ctx.f4.f64 = double(float(ctx.f0.f64 * ctx.f9.f64));
	// lfs f7,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// lfs f12,9008(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 9008);
	ctx.f12.f64 = double(temp.f32);
	// fmsubs f3,f13,f10,f6
	ctx.f3.f64 = double(float(ctx.f13.f64 * ctx.f10.f64 - ctx.f6.f64));
	// fsubs f6,f2,f1
	ctx.f6.f64 = double(float(ctx.f2.f64 - ctx.f1.f64));
	// fmsubs f2,f13,f8,f4
	ctx.f2.f64 = double(float(ctx.f13.f64 * ctx.f8.f64 - ctx.f4.f64));
	// fsubs f7,f5,f7
	ctx.f7.f64 = double(float(ctx.f5.f64 - ctx.f7.f64));
	// fmuls f1,f2,f3
	ctx.f1.f64 = double(float(ctx.f2.f64 * ctx.f3.f64));
	// fcmpu cr6,f1,f12
	cr6.compare(ctx.f1.f64, ctx.f12.f64);
	// bge cr6,0x82bd6f9c
	if (!cr6.lt) goto loc_82BD6F9C;
	// fmuls f5,f0,f10
	ctx.f5.f64 = double(float(ctx.f0.f64 * ctx.f10.f64));
	// fmadds f4,f13,f11,f5
	ctx.f4.f64 = double(float(ctx.f13.f64 * ctx.f11.f64 + ctx.f5.f64));
	// fcmpu cr6,f4,f12
	cr6.compare(ctx.f4.f64, ctx.f12.f64);
	// bge cr6,0x82bd6f94
	if (!cr6.lt) goto loc_82BD6F94;
	// fmuls f13,f13,f9
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f9.f64));
	// fmadds f9,f0,f8,f13
	ctx.f9.f64 = double(float(ctx.f0.f64 * ctx.f8.f64 + ctx.f13.f64));
	// fcmpu cr6,f9,f12
	cr6.compare(ctx.f9.f64, ctx.f12.f64);
	// ble cr6,0x82bd6f9c
	if (!cr6.gt) goto loc_82BD6F9C;
loc_82BD6F94:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82bd6fa0
	goto loc_82BD6FA0;
loc_82BD6F9C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82BD6FA0:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lfs f13,4(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f11,f7
	ctx.f12.f64 = double(float(ctx.f11.f64 * ctx.f7.f64));
	// fmuls f11,f13,f7
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f7.f64));
	// fmsubs f10,f10,f6,f12
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f6.f64 - ctx.f12.f64));
	// fmsubs f9,f0,f6,f11
	ctx.f9.f64 = double(float(ctx.f0.f64 * ctx.f6.f64 - ctx.f11.f64));
	// fdivs f8,f10,f9
	ctx.f8.f64 = double(float(ctx.f10.f64 / ctx.f9.f64));
	// stfs f8,0(r7)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r7.u32 + 0, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BD6FD4"))) PPC_WEAK_FUNC(sub_82BD6FD4);
PPC_FUNC_IMPL(__imp__sub_82BD6FD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BD6FD8"))) PPC_WEAK_FUNC(sub_82BD6FD8);
PPC_FUNC_IMPL(__imp__sub_82BD6FD8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,140(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 140);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,288(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 288);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82BD6FF4"))) PPC_WEAK_FUNC(sub_82BD6FF4);
PPC_FUNC_IMPL(__imp__sub_82BD6FF4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BD6FF8"))) PPC_WEAK_FUNC(sub_82BD6FF8);
PPC_FUNC_IMPL(__imp__sub_82BD6FF8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r10,144(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 144);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82bd700c
	if (!cr6.eq) goto loc_82BD700C;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82BD700C:
	// addi r11,r4,-1
	ctx.r11.s64 = ctx.r4.s64 + -1;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// bgt cr6,0x82bd707c
	if (cr6.gt) goto loc_82BD707C;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x82bd7040
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82BD7040;
	// bdzf 4*cr6+eq,0x82bd7054
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82BD7054;
	// bne cr6,0x82bd7068
	if (!cr6.eq) goto loc_82BD7068;
	// li r11,3
	ctx.r11.s64 = 3;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// blr 
	return;
loc_82BD7040:
	// li r11,4
	ctx.r11.s64 = 4;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// blr 
	return;
loc_82BD7054:
	// li r11,1
	ctx.r11.s64 = 1;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// blr 
	return;
loc_82BD7068:
	// li r11,2
	ctx.r11.s64 = 2;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// blr 
	return;
loc_82BD707C:
	// li r11,0
	ctx.r11.s64 = 0;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BD7090"))) PPC_WEAK_FUNC(sub_82BD7090);
PPC_FUNC_IMPL(__imp__sub_82BD7090) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x82BD7098;
	__savegprlr_25(ctx, base);
	// stfd f29,-88(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -88, ctx.f29.u64);
	// stfd f30,-80(r1)
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.f30.u64);
	// stfd f31,-72(r1)
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f31.u64);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// lwz r6,0(r5)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// lwz r11,8(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// mr r25,r7
	ctx.r25.u64 = ctx.r7.u64;
	// lwz r7,12(r5)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,4(r5)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// li r28,0
	ctx.r28.s64 = 0;
	// std r6,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r6.u64);
	// lfd f13,88(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lfd f11,88(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// std r7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r3,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r3.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fcfid f9,f12
	ctx.f9.f64 = double(ctx.f12.s64);
	// lfs f29,20056(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 20056);
	ctx.f29.f64 = double(temp.f32);
	// fcfid f8,f13
	ctx.f8.f64 = double(ctx.f13.s64);
	// li r27,4
	ctx.r27.s64 = 4;
	// fcfid f7,f0
	ctx.f7.f64 = double(ctx.f0.s64);
	// li r29,0
	ctx.r29.s64 = 0;
	// li r31,0
	ctx.r31.s64 = 0;
	// fmr f31,f29
	ctx.f31.f64 = ctx.f29.f64;
	// lfs f30,9008(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f30.f64 = double(temp.f32);
	// frsp f6,f10
	ctx.f6.f64 = double(float(ctx.f10.f64));
	// frsp f5,f9
	ctx.f5.f64 = double(float(ctx.f9.f64));
	// stfs f5,100(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// frsp f4,f8
	ctx.f4.f64 = double(float(ctx.f8.f64));
	// stfs f5,108(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// frsp f3,f7
	ctx.f3.f64 = double(float(ctx.f7.f64));
	// stfs f4,96(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f4,120(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// fadds f2,f6,f4
	ctx.f2.f64 = double(float(ctx.f6.f64 + ctx.f4.f64));
	// stfs f2,104(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// fadds f1,f3,f5
	ctx.f1.f64 = double(float(ctx.f3.f64 + ctx.f5.f64));
	// stfs f2,112(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f1,116(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f1,124(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
loc_82BD7150:
	// cmplwi cr6,r31,3
	cr6.compare<uint32_t>(ctx.r31.u32, 3, xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// beq cr6,0x82bd7160
	if (cr6.eq) goto loc_82BD7160;
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
loc_82BD7160:
	// rlwinm r10,r11,3,21,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0x7F8;
	// stfs f29,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// rlwinm r8,r31,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r5,r8,r9
	ctx.r5.u64 = ctx.r8.u64 + ctx.r9.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82bd6ef0
	ctx.lr = 0x82BD7188;
	sub_82BD6EF0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82bd71bc
	if (cr6.eq) goto loc_82BD71BC;
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f30
	cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// blt cr6,0x82bd71b8
	if (cr6.lt) goto loc_82BD71B8;
	// fcmpu cr6,f31,f30
	cr6.compare(ctx.f31.f64, ctx.f30.f64);
	// blt cr6,0x82bd71b0
	if (cr6.lt) goto loc_82BD71B0;
	// fcmpu cr6,f0,f31
	cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bge cr6,0x82bd71b8
	if (!cr6.lt) goto loc_82BD71B8;
loc_82BD71B0:
	// fmr f31,f0
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f0.f64;
	// mr r27,r29
	ctx.r27.u64 = ctx.r29.u64;
loc_82BD71B8:
	// li r28,1
	ctx.r28.s64 = 1;
loc_82BD71BC:
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// clrlwi r29,r11,24
	ctx.r29.u64 = ctx.r11.u32 & 0xFF;
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
	// cmplwi cr6,r29,4
	cr6.compare<uint32_t>(ctx.r29.u32, 4, xer);
	// blt cr6,0x82bd7150
	if (cr6.lt) goto loc_82BD7150;
	// clrlwi r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82bd721c
	if (cr6.eq) goto loc_82BD721C;
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(ctx.r26.u32, 0, xer);
	// beq cr6,0x82bd71e8
	if (cr6.eq) goto loc_82BD71E8;
	// stfs f31,0(r26)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r26.u32 + 0, temp.u32);
loc_82BD71E8:
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(ctx.r25.u32, 0, xer);
	// beq cr6,0x82bd721c
	if (cr6.eq) goto loc_82BD721C;
	// clrlwi r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(ctx.r11.u32, 4, xer);
	// beq cr6,0x82bd7220
	if (cr6.eq) goto loc_82BD7220;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r11.u32);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// lfd f29,-88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// lfd f30,-80(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// lfd f31,-72(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_82BD721C:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
loc_82BD7220:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// lfd f29,-88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// lfd f30,-80(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// lfd f31,-72(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BD7234"))) PPC_WEAK_FUNC(sub_82BD7234);
PPC_FUNC_IMPL(__imp__sub_82BD7234) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BD7238"))) PPC_WEAK_FUNC(sub_82BD7238);
PPC_FUNC_IMPL(__imp__sub_82BD7238) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r7,8(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// fmuls f0,f2,f2
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f2.f64 * ctx.f2.f64));
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lwz r11,4(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// std r7,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r7.u64);
	// lfd f11,96(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// std r4,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r4.u64);
	// lfd f10,88(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// std r3,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r3.u64);
	// lfd f9,80(r1)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f6,f11
	ctx.f6.f64 = double(ctx.f11.s64);
	// lfs f12,9008(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9008);
	ctx.f12.f64 = double(temp.f32);
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// lfd f8,96(r1)
	ctx.f8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fmadds f7,f1,f1,f0
	ctx.f7.f64 = double(float(ctx.f1.f64 * ctx.f1.f64 + ctx.f0.f64));
	// lfs f0,-24912(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -24912);
	ctx.f0.f64 = double(temp.f32);
	// fcfid f5,f10
	ctx.f5.f64 = double(ctx.f10.s64);
	// stfs f1,88(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fcfid f4,f9
	ctx.f4.f64 = double(ctx.f9.s64);
	// stfs f2,92(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// fsqrts f13,f7
	ctx.f13.f64 = double(float(sqrt(ctx.f7.f64)));
	// fcfid f3,f8
	ctx.f3.f64 = double(ctx.f8.s64);
	// fcmpu cr6,f13,f12
	cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// frsp f12,f6
	ctx.f12.f64 = double(float(ctx.f6.f64));
	// frsp f11,f5
	ctx.f11.f64 = double(float(ctx.f5.f64));
	// frsp f10,f4
	ctx.f10.f64 = double(float(ctx.f4.f64));
	// frsp f9,f3
	ctx.f9.f64 = double(float(ctx.f3.f64));
	// fmadds f8,f12,f0,f11
	ctx.f8.f64 = double(float(ctx.f12.f64 * ctx.f0.f64 + ctx.f11.f64));
	// stfs f8,96(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fmadds f7,f10,f0,f9
	ctx.f7.f64 = double(float(ctx.f10.f64 * ctx.f0.f64 + ctx.f9.f64));
	// stfs f7,100(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// beq cr6,0x82bd72f0
	if (cr6.eq) goto loc_82BD72F0;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lfs f0,-26260(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -26260);
	ctx.f0.f64 = double(temp.f32);
	// fdivs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// fmuls f13,f0,f1
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f1.f64));
	// stfs f13,88(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fmuls f12,f0,f2
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f2.f64));
	// stfs f12,92(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
loc_82BD72F0:
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82bd7090
	ctx.lr = 0x82BD7304;
	sub_82BD7090(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// subfic r9,r11,0
	xer.ca = ctx.r11.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r11.s64;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r3,r7,r10
	ctx.r3.u64 = ctx.r7.u64 & ctx.r10.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BD7328"))) PPC_WEAK_FUNC(sub_82BD7328);
PPC_FUNC_IMPL(__imp__sub_82BD7328) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	// lwz r8,24(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// li r9,92
	ctx.r9.s64 = 92;
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// subf r7,r8,r11
	ctx.r7.s64 = ctx.r11.s64 - ctx.r8.s64;
	// divw. r8,r7,r9
	ctx.r8.s32 = PPCDivide(ctx.r7.s32, ctx.r9.s32);
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq 0x82bd736c
	if (cr0.eq) goto loc_82BD736C;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82BD734C:
	// lwz r9,24(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// cmplw cr6,r4,r9
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, xer);
	// beq cr6,0x82bd73ac
	if (cr6.eq) goto loc_82BD73AC;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// addi r11,r11,92
	ctx.r11.s64 = ctx.r11.s64 + 92;
	// cmplw cr6,r3,r8
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r8.u32, xer);
	// blt cr6,0x82bd734c
	if (cr6.lt) goto loc_82BD734C;
loc_82BD736C:
	// clrlwi r11,r5,24
	ctx.r11.u64 = ctx.r5.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82bd73a8
	if (cr6.eq) goto loc_82BD73A8;
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x82bd73a8
	if (cr6.eq) goto loc_82BD73A8;
	// lwz r10,40(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	// li r11,0
	ctx.r11.s64 = 0;
loc_82BD738C:
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplw cr6,r4,r7
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r7.u32, xer);
	// beq cr6,0x82bd73b0
	if (cr6.eq) goto loc_82BD73B0;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,92
	ctx.r11.s64 = ctx.r11.s64 + 92;
	// cmplw cr6,r9,r8
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, xer);
	// blt cr6,0x82bd738c
	if (cr6.lt) goto loc_82BD738C;
loc_82BD73A8:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_82BD73AC:
	// blr 
	return;
loc_82BD73B0:
	// add r3,r8,r9
	ctx.r3.u64 = ctx.r8.u64 + ctx.r9.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BD73B8"))) PPC_WEAK_FUNC(sub_82BD73B8);
PPC_FUNC_IMPL(__imp__sub_82BD73B8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82BD73C0;
	__savegprlr_28(ctx, base);
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x831ce758
	ctx.lr = 0x82BD73C8;
	__savefpr_20(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x82bd73f0
	if (!cr6.eq) goto loc_82BD73F0;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x831ce7a4
	ctx.lr = 0x82BD73EC;
	__restfpr_20(ctx, base);
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82BD73F0:
	// ld r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r5.u32 + 0);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// li r28,0
	ctx.r28.s64 = 0;
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lfs f27,92(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f27.f64 = double(temp.f32);
	// lfs f28,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f28.f64 = double(temp.f32);
	// fmuls f0,f28,f28
	ctx.f0.f64 = double(float(ctx.f28.f64 * ctx.f28.f64));
	// fmadds f13,f27,f27,f0
	ctx.f13.f64 = double(float(ctx.f27.f64 * ctx.f27.f64 + ctx.f0.f64));
	// lfs f24,9008(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9008);
	ctx.f24.f64 = double(temp.f32);
	// lfs f21,-26260(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -26260);
	ctx.f21.f64 = double(temp.f32);
	// fsqrts f0,f13
	ctx.f0.f64 = double(float(sqrt(ctx.f13.f64)));
	// fcmpu cr6,f0,f24
	cr6.compare(ctx.f0.f64, ctx.f24.f64);
	// beq cr6,0x82bd743c
	if (cr6.eq) goto loc_82BD743C;
	// fdivs f0,f21,f0
	ctx.f0.f64 = double(float(ctx.f21.f64 / ctx.f0.f64));
	// fmuls f28,f0,f28
	ctx.f28.f64 = double(float(ctx.f0.f64 * ctx.f28.f64));
	// stfs f28,88(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fmuls f27,f0,f27
	ctx.f27.f64 = double(float(ctx.f0.f64 * ctx.f27.f64));
	// stfs f27,92(r1)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
loc_82BD743C:
	// lwz r5,8(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lwz r6,4(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lwz r31,24(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// std r5,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r5.u64);
	// lfd f13,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r6,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r6.u64);
	// lfd f0,96(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// std r3,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r3.u64);
	// lfd f12,96(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// lfd f11,96(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// lfs f31,-24912(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -24912);
	ctx.f31.f64 = double(temp.f32);
	// fcfid f9,f12
	ctx.f9.f64 = double(ctx.f12.s64);
	// lwz r10,28(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// fcfid f8,f13
	ctx.f8.f64 = double(ctx.f13.s64);
	// lfs f20,20056(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 20056);
	ctx.f20.f64 = double(temp.f32);
	// fcfid f7,f0
	ctx.f7.f64 = double(ctx.f0.s64);
	// cmplw cr6,r31,r10
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, xer);
	// frsp f6,f10
	ctx.f6.f64 = double(float(ctx.f10.f64));
	// fmr f29,f20
	ctx.f29.f64 = ctx.f20.f64;
	// frsp f5,f9
	ctx.f5.f64 = double(float(ctx.f9.f64));
	// frsp f4,f8
	ctx.f4.f64 = double(float(ctx.f8.f64));
	// frsp f3,f7
	ctx.f3.f64 = double(float(ctx.f7.f64));
	// fmadds f23,f4,f31,f5
	ctx.f23.f64 = double(float(ctx.f4.f64 * ctx.f31.f64 + ctx.f5.f64));
	// stfs f23,96(r1)
	temp.f32 = float(ctx.f23.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fmadds f22,f6,f31,f3
	ctx.f22.f64 = double(float(ctx.f6.f64 * ctx.f31.f64 + ctx.f3.f64));
	// stfs f22,100(r1)
	temp.f32 = float(ctx.f22.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// beq cr6,0x82bd75d4
	if (cr6.eq) goto loc_82BD75D4;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lfs f25,-23488(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -23488);
	ctx.f25.f64 = double(temp.f32);
	// lfd f26,-14856(r10)
	ctx.f26.u64 = PPC_LOAD_U64(ctx.r10.u32 + -14856);
loc_82BD74D0:
	// stfs f20,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f20.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// cmplw cr6,r30,r31
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r31.u32, xer);
	// beq cr6,0x82bd75c4
	if (cr6.eq) goto loc_82BD75C4;
	// lbz r11,89(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 89);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82bd75c4
	if (cr6.eq) goto loc_82BD75C4;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82bd7090
	ctx.lr = 0x82BD7500;
	sub_82BD7090(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82bd75c4
	if (cr6.eq) goto loc_82BD75C4;
	// lfs f30,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f30.f64 = double(temp.f32);
	// fcmpu cr6,f30,f24
	cr6.compare(ctx.f30.f64, ctx.f24.f64);
	// blt cr6,0x82bd75c4
	if (cr6.lt) goto loc_82BD75C4;
	// lwz r7,12(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// std r7,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r7.u64);
	// lfd f13,112(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// std r5,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, ctx.r5.u64);
	// lfd f12,120(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// std r4,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r4.u64);
	// std r9,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r9.u64);
	// lfd f0,104(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f9,f0
	ctx.f9.f64 = double(ctx.f0.s64);
	// lfd f11,128(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// fcfid f7,f12
	ctx.f7.f64 = double(ctx.f12.s64);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// fcfid f8,f13
	ctx.f8.f64 = double(ctx.f13.s64);
	// frsp f5,f9
	ctx.f5.f64 = double(float(ctx.f9.f64));
	// frsp f3,f7
	ctx.f3.f64 = double(float(ctx.f7.f64));
	// frsp f6,f10
	ctx.f6.f64 = double(float(ctx.f10.f64));
	// frsp f4,f8
	ctx.f4.f64 = double(float(ctx.f8.f64));
	// fmadds f2,f6,f31,f5
	ctx.f2.f64 = double(float(ctx.f6.f64 * ctx.f31.f64 + ctx.f5.f64));
	// fmadds f1,f4,f31,f3
	ctx.f1.f64 = double(float(ctx.f4.f64 * ctx.f31.f64 + ctx.f3.f64));
	// fsubs f0,f2,f23
	ctx.f0.f64 = double(float(ctx.f2.f64 - ctx.f23.f64));
	// fsubs f13,f1,f22
	ctx.f13.f64 = double(float(ctx.f1.f64 - ctx.f22.f64));
	// fmuls f12,f0,f0
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// fmadds f11,f13,f13,f12
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f12.f64));
	// fsqrts f12,f11
	ctx.f12.f64 = double(float(sqrt(ctx.f11.f64)));
	// fcmpu cr6,f12,f24
	cr6.compare(ctx.f12.f64, ctx.f24.f64);
	// beq cr6,0x82bd7598
	if (cr6.eq) goto loc_82BD7598;
	// fdivs f12,f21,f12
	ctx.f12.f64 = double(float(ctx.f21.f64 / ctx.f12.f64));
	// fmuls f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fmuls f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
loc_82BD7598:
	// fmuls f0,f0,f28
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f28.f64));
	// fmr f2,f26
	ctx.f2.f64 = ctx.f26.f64;
	// fmadds f1,f13,f27,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f27.f64 + ctx.f0.f64));
	// bl 0x831d20a0
	ctx.lr = 0x82BD75A8;
	sub_831D20A0(ctx, base);
	// frsp f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// fdivs f12,f25,f30
	ctx.f12.f64 = double(float(ctx.f25.f64 / ctx.f30.f64));
	// fmuls f0,f13,f12
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// fcmpu cr6,f0,f29
	cr6.compare(ctx.f0.f64, ctx.f29.f64);
	// ble cr6,0x82bd75c4
	if (!cr6.gt) goto loc_82BD75C4;
	// fmr f29,f0
	ctx.f29.f64 = ctx.f0.f64;
	// mr r28,r31
	ctx.r28.u64 = ctx.r31.u64;
loc_82BD75C4:
	// lwz r11,28(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// addi r31,r31,92
	ctx.r31.s64 = ctx.r31.s64 + 92;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// bne cr6,0x82bd74d0
	if (!cr6.eq) goto loc_82BD74D0;
loc_82BD75D4:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x831ce7a4
	ctx.lr = 0x82BD75E4;
	__restfpr_20(ctx, base);
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BD75E8"))) PPC_WEAK_FUNC(sub_82BD75E8);
PPC_FUNC_IMPL(__imp__sub_82BD75E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdab0
	ctx.lr = 0x82BD75F0;
	__savegprlr_14(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// lis r17,32767
	ctx.r17.s64 = 2147418112;
	// mr r14,r7
	ctx.r14.u64 = ctx.r7.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// ori r17,r17,65535
	ctx.r17.u64 = ctx.r17.u64 | 65535;
	// li r15,0
	ctx.r15.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82bd7620
	if (!cr6.eq) goto loc_82BD7620;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x831cdb00
	__restgprlr_14(ctx, base);
	return;
loc_82BD7620:
	// lwz r22,8(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// li r18,0
	ctx.r18.s64 = 0;
	// lwz r21,12(r11)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// li r16,0
	ctx.r16.s64 = 0;
	// lwz r25,0(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r10,r22,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 31) & 0x7FFFFFFF;
	// lwz r26,4(r11)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r11,r21,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 31) & 0x7FFFFFFF;
	// lwz r30,24(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// add r28,r10,r25
	ctx.r28.u64 = ctx.r10.u64 + ctx.r25.u64;
	// lwz r19,28(r3)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// add r27,r11,r26
	ctx.r27.u64 = ctx.r11.u64 + ctx.r26.u64;
	// cmplw cr6,r30,r19
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r19.u32, xer);
	// beq cr6,0x82bd78c0
	if (cr6.eq) goto loc_82BD78C0;
	// addi r20,r5,-1
	ctx.r20.s64 = ctx.r5.s64 + -1;
loc_82BD765C:
	// lwz r7,8(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplwi cr6,r20,3
	cr6.compare<uint32_t>(ctx.r20.u32, 3, xer);
	// lwz r31,12(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r9,r7,31,1,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 31) & 0x7FFFFFFF;
	// lwz r8,4(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// rlwinm r10,r31,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 31) & 0x7FFFFFFF;
	// add r24,r9,r11
	ctx.r24.u64 = ctx.r9.u64 + ctx.r11.u64;
	// add r23,r10,r8
	ctx.r23.u64 = ctx.r10.u64 + ctx.r8.u64;
	// subf r10,r28,r24
	ctx.r10.s64 = ctx.r24.s64 - ctx.r28.s64;
	// subf r9,r27,r23
	ctx.r9.s64 = ctx.r23.s64 - ctx.r27.s64;
	// bgt cr6,0x82bd7798
	if (cr6.gt) goto loc_82BD7798;
	// mtctr r20
	ctr.u64 = ctx.r20.u64;
	// cmpwi cr6,r20,0
	cr6.compare<int32_t>(ctx.r20.s32, 0, xer);
	// bdzf 4*cr6+eq,0x82bd77c0
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82BD77C0;
	// bdzf 4*cr6+eq,0x82bd7820
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82BD7820;
	// bne cr6,0x82bd7844
	if (!cr6.eq) goto loc_82BD7844;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bge cr6,0x82bd7798
	if (!cr6.lt) goto loc_82BD7798;
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// subf r8,r31,r27
	ctx.r8.s64 = ctx.r27.s64 - ctx.r31.s64;
	// subf r29,r26,r27
	ctx.r29.s64 = ctx.r27.s64 - ctx.r26.s64;
	// subf. r10,r9,r8
	ctx.r10.s64 = ctx.r8.s64 - ctx.r9.s64;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// subf r9,r9,r27
	ctx.r9.s64 = ctx.r27.s64 - ctx.r9.s64;
loc_82BD76BC:
	// blt 0x82bd76c8
	if (cr0.lt) goto loc_82BD76C8;
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, xer);
	// blt cr6,0x82bd76cc
	if (cr6.lt) goto loc_82BD76CC;
loc_82BD76C8:
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_82BD76CC:
	// cmplw cr6,r11,r25
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r25.u32, xer);
	// bge cr6,0x82bd77ac
	if (!cr6.lt) goto loc_82BD77AC;
	// subf r11,r11,r25
	ctx.r11.s64 = ctx.r25.s64 - ctx.r11.s64;
	// cmplw cr6,r7,r11
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r11.u32, xer);
	// bgt cr6,0x82bd77b8
	if (cr6.gt) goto loc_82BD77B8;
loc_82BD76E0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82BD76E4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmpw cr6,r9,r29
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r29.s32, xer);
	// ble cr6,0x82bd7798
	if (!cr6.gt) goto loc_82BD7798;
	// cmplw cr6,r30,r6
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r6.u32, xer);
	// beq cr6,0x82bd789c
	if (cr6.eq) goto loc_82BD789C;
	// clrlwi r7,r11,24
	ctx.r7.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// bne cr6,0x82bd7710
	if (!cr6.eq) goto loc_82BD7710;
	// clrlwi r11,r15,24
	ctx.r11.u64 = ctx.r15.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82bd7798
	if (!cr6.eq) goto loc_82BD7798;
loc_82BD7710:
	// cmpw cr6,r10,r17
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r17.s32, xer);
	// bgt cr6,0x82bd7798
	if (cr6.gt) goto loc_82BD7798;
	// bne cr6,0x82bd7780
	if (!cr6.eq) goto loc_82BD7780;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82bd7780
	if (cr6.eq) goto loc_82BD7780;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82bd7738
	if (cr6.eq) goto loc_82BD7738;
	// clrlwi r11,r15,24
	ctx.r11.u64 = ctx.r15.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82bd7780
	if (cr6.eq) goto loc_82BD7780;
loc_82BD7738:
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// lwz r9,4(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// rlwinm r11,r11,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// lwz r31,8(r4)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// lwz r8,0(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r9,r31,31,1,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 31) & 0x7FFFFFFF;
	// subf r11,r23,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r23.s64;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// subf r11,r24,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r24.s64;
	// add. r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bge 0x82bd7780
	if (!cr0.lt) goto loc_82BD7780;
	// lbz r11,89(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 89);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82bd7798
	if (!cr6.eq) goto loc_82BD7798;
	// lbz r11,89(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 89);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82bd7798
	if (cr6.eq) goto loc_82BD7798;
loc_82BD7780:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r17,r10
	ctx.r17.u64 = ctx.r10.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82bd7794
	if (cr6.eq) goto loc_82BD7794;
	// li r15,1
	ctx.r15.s64 = 1;
loc_82BD7794:
	// mr r16,r18
	ctx.r16.u64 = ctx.r18.u64;
loc_82BD7798:
	// addi r30,r30,92
	ctx.r30.s64 = ctx.r30.s64 + 92;
	// addi r18,r18,1
	ctx.r18.s64 = ctx.r18.s64 + 1;
	// cmplw cr6,r30,r19
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r19.u32, xer);
	// bne cr6,0x82bd765c
	if (!cr6.eq) goto loc_82BD765C;
	// b 0x82bd78a0
	goto loc_82BD78A0;
loc_82BD77AC:
	// add r8,r25,r22
	ctx.r8.u64 = ctx.r25.u64 + ctx.r22.u64;
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, xer);
	// bge cr6,0x82bd76e0
	if (!cr6.lt) goto loc_82BD76E0;
loc_82BD77B8:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82bd76e4
	goto loc_82BD76E4;
loc_82BD77C0:
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// ble cr6,0x82bd7798
	if (!cr6.gt) goto loc_82BD7798;
	// subf r9,r28,r25
	ctx.r9.s64 = ctx.r25.s64 - ctx.r28.s64;
	// subf r10,r28,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r28.s64;
	// add r29,r9,r22
	ctx.r29.u64 = ctx.r9.u64 + ctx.r22.u64;
	// subf. r11,r28,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r28.s64;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// add r9,r10,r7
	ctx.r9.u64 = ctx.r10.u64 + ctx.r7.u64;
	// blt 0x82bd77ec
	if (cr0.lt) goto loc_82BD77EC;
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, xer);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// blt cr6,0x82bd77f0
	if (cr6.lt) goto loc_82BD77F0;
loc_82BD77EC:
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_82BD77F0:
	// cmplw cr6,r8,r26
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r26.u32, xer);
	// bge cr6,0x82bd7888
	if (!cr6.lt) goto loc_82BD7888;
	// subf r11,r8,r26
	ctx.r11.s64 = ctx.r26.s64 - ctx.r8.s64;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// bgt cr6,0x82bd7894
	if (cr6.gt) goto loc_82BD7894;
	// cmplw cr6,r8,r26
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r26.u32, xer);
	// blt cr6,0x82bd76e0
	if (cr6.lt) goto loc_82BD76E0;
	// add r11,r26,r21
	ctx.r11.u64 = ctx.r26.u64 + ctx.r21.u64;
	// cmplw cr6,r8,r11
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, xer);
	// bge cr6,0x82bd76e0
	if (!cr6.lt) goto loc_82BD76E0;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82bd76e4
	goto loc_82BD76E4;
loc_82BD7820:
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// ble cr6,0x82bd7798
	if (!cr6.gt) goto loc_82BD7798;
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// subf r8,r27,r26
	ctx.r8.s64 = ctx.r26.s64 - ctx.r27.s64;
	// subf r9,r27,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r27.s64;
	// subf. r10,r27,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r27.s64;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// add r29,r8,r21
	ctx.r29.u64 = ctx.r8.u64 + ctx.r21.u64;
	// add r9,r9,r31
	ctx.r9.u64 = ctx.r9.u64 + ctx.r31.u64;
	// b 0x82bd76bc
	goto loc_82BD76BC;
loc_82BD7844:
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bge cr6,0x82bd7798
	if (!cr6.lt) goto loc_82BD7798;
	// subf r10,r11,r28
	ctx.r10.s64 = ctx.r28.s64 - ctx.r11.s64;
	// subf r29,r25,r28
	ctx.r29.s64 = ctx.r28.s64 - ctx.r25.s64;
	// subf. r10,r7,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r7.s64;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// subf r9,r11,r28
	ctx.r9.s64 = ctx.r28.s64 - ctx.r11.s64;
	// blt 0x82bd7868
	if (cr0.lt) goto loc_82BD7868;
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, xer);
	// blt cr6,0x82bd786c
	if (cr6.lt) goto loc_82BD786C;
loc_82BD7868:
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_82BD786C:
	// cmplw cr6,r8,r26
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r26.u32, xer);
	// bge cr6,0x82bd7888
	if (!cr6.lt) goto loc_82BD7888;
	// subf r11,r8,r26
	ctx.r11.s64 = ctx.r26.s64 - ctx.r8.s64;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// bgt cr6,0x82bd7894
	if (cr6.gt) goto loc_82BD7894;
	// cmplw cr6,r8,r26
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r26.u32, xer);
	// blt cr6,0x82bd76e0
	if (cr6.lt) goto loc_82BD76E0;
loc_82BD7888:
	// add r11,r26,r21
	ctx.r11.u64 = ctx.r26.u64 + ctx.r21.u64;
	// cmplw cr6,r8,r11
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, xer);
	// bge cr6,0x82bd76e0
	if (!cr6.lt) goto loc_82BD76E0;
loc_82BD7894:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82bd76e4
	goto loc_82BD76E4;
loc_82BD789C:
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
loc_82BD78A0:
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82bd78c0
	if (cr6.eq) goto loc_82BD78C0;
	// lbz r11,89(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 89);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82bd78c0
	if (!cr6.eq) goto loc_82BD78C0;
	// mr r7,r14
	ctx.r7.u64 = ctx.r14.u64;
	// bl 0x82bd75e8
	ctx.lr = 0x82BD78BC;
	sub_82BD75E8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_82BD78C0:
	// cmplwi cr6,r14,0
	cr6.compare<uint32_t>(ctx.r14.u32, 0, xer);
	// beq cr6,0x82bd78cc
	if (cr6.eq) goto loc_82BD78CC;
	// stw r16,0(r14)
	PPC_STORE_U32(ctx.r14.u32 + 0, ctx.r16.u32);
loc_82BD78CC:
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x831cdb00
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BD78D8"))) PPC_WEAK_FUNC(sub_82BD78D8);
PPC_FUNC_IMPL(__imp__sub_82BD78D8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// clrlwi r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82bd78f8
	if (cr6.eq) goto loc_82BD78F8;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r7,r10,-60
	ctx.r7.s64 = ctx.r10.s64 + -60;
	// b 0x82bd7904
	goto loc_82BD7904;
loc_82BD78F8:
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r11,-1
	ctx.r11.s64 = -1;
	// addi r9,r10,-60
	ctx.r9.s64 = ctx.r10.s64 + -60;
loc_82BD7904:
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// stw r9,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r9.u32);
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// mulli r8,r11,60
	ctx.r8.s64 = ctx.r11.s64 * 60;
	// add r11,r8,r9
	ctx.r11.u64 = ctx.r8.u64 + ctx.r9.u64;
loc_82BD7918:
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// cmplw cr6,r11,r7
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, xer);
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// bne cr6,0x82bd7934
	if (!cr6.eq) goto loc_82BD7934;
	// addi r11,r1,-16
	ctx.r11.s64 = ctx.r1.s64 + -16;
	// b 0x82bd7940
	goto loc_82BD7940;
loc_82BD7934:
	// add r6,r8,r11
	ctx.r6.u64 = ctx.r8.u64 + ctx.r11.u64;
	// addi r11,r1,-12
	ctx.r11.s64 = ctx.r1.s64 + -12;
	// stw r6,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r6.u32);
loc_82BD7940:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bne cr6,0x82bd7918
	if (!cr6.eq) goto loc_82BD7918;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BD7950"))) PPC_WEAK_FUNC(sub_82BD7950);
PPC_FUNC_IMPL(__imp__sub_82BD7950) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lwz r9,112(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 112);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82bd7a7c
	if (cr6.eq) goto loc_82BD7A7C;
	// lwz r5,120(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 120);
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x82bd7a7c
	if (cr6.eq) goto loc_82BD7A7C;
	// lwz r11,96(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r8,100(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, xer);
	// beq cr6,0x82bd79a4
	if (cr6.eq) goto loc_82BD79A4;
loc_82BD7980:
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// beq cr6,0x82bd79a0
	if (cr6.eq) goto loc_82BD79A0;
	// lwz r8,100(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// addi r11,r11,60
	ctx.r11.s64 = ctx.r11.s64 + 60;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, xer);
	// bne cr6,0x82bd7980
	if (!cr6.eq) goto loc_82BD7980;
	// b 0x82bd79a4
	goto loc_82BD79A4;
loc_82BD79A0:
	// stw r10,128(r3)
	PPC_STORE_U32(ctx.r3.u32 + 128, ctx.r10.u32);
loc_82BD79A4:
	// lwz r8,24(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 24);
	// li r7,92
	ctx.r7.s64 = 92;
	// lwz r11,28(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 28);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r6,44(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 44);
	// lwz r4,40(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 40);
	// subf r11,r8,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r8.s64;
	// subf r8,r4,r6
	ctx.r8.s64 = ctx.r6.s64 - ctx.r4.s64;
	// divw r11,r11,r7
	ctx.r11.s32 = PPCDivide(ctx.r11.s32, ctx.r7.s32);
	// divw r8,r8,r7
	ctx.r8.s32 = PPCDivide(ctx.r8.s32, ctx.r7.s32);
	// add. r6,r11,r8
	ctx.r6.u64 = ctx.r11.u64 + ctx.r8.u64;
	cr0.compare<int32_t>(ctx.r6.s32, 0, xer);
	// beq 0x82bd7a7c
	if (cr0.eq) goto loc_82BD7A7C;
	// li r6,0
	ctx.r6.s64 = 0;
loc_82BD79D8:
	// lwz r11,28(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 28);
	// lwz r8,24(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 24);
	// subf r4,r8,r11
	ctx.r4.s64 = ctx.r11.s64 - ctx.r8.s64;
	// divw r11,r4,r7
	ctx.r11.s32 = PPCDivide(ctx.r4.s32, ctx.r7.s32);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// bge cr6,0x82bd79fc
	if (!cr6.lt) goto loc_82BD79FC;
	// rotlwi r11,r8,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// add r11,r6,r11
	ctx.r11.u64 = ctx.r6.u64 + ctx.r11.u64;
	// b 0x82bd7a30
	goto loc_82BD7A30;
loc_82BD79FC:
	// lwz r4,40(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 40);
	// lwz r8,44(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 44);
	// subf r8,r4,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r4.s64;
	// divw r8,r8,r7
	ctx.r8.s32 = PPCDivide(ctx.r8.s32, ctx.r7.s32);
	// add r4,r8,r11
	ctx.r4.u64 = ctx.r8.u64 + ctx.r11.u64;
	// cmplw cr6,r10,r4
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, xer);
	// bge cr6,0x82bd7a2c
	if (!cr6.lt) goto loc_82BD7A2C;
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// lwz r8,40(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 40);
	// mulli r11,r11,92
	ctx.r11.s64 = ctx.r11.s64 * 92;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// b 0x82bd7a30
	goto loc_82BD7A30;
loc_82BD7A2C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82BD7A30:
	// cmplw cr6,r11,r5
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, xer);
	// beq cr6,0x82bd7a78
	if (cr6.eq) goto loc_82BD7A78;
	// lwz r11,112(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 112);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r6,r6,92
	ctx.r6.s64 = ctx.r6.s64 + 92;
	// lwz r4,24(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// lwz r8,28(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// lwz r31,44(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// subf r8,r4,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r4.s64;
	// subf r4,r11,r31
	ctx.r4.s64 = ctx.r31.s64 - ctx.r11.s64;
	// divw r11,r8,r7
	ctx.r11.s32 = PPCDivide(ctx.r8.s32, ctx.r7.s32);
	// divw r8,r4,r7
	ctx.r8.s32 = PPCDivide(ctx.r4.s32, ctx.r7.s32);
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// bne cr6,0x82bd79d8
	if (!cr6.eq) goto loc_82BD79D8;
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
loc_82BD7A78:
	// stw r10,132(r3)
	PPC_STORE_U32(ctx.r3.u32 + 132, ctx.r10.u32);
loc_82BD7A7C:
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BD7A84"))) PPC_WEAK_FUNC(sub_82BD7A84);
PPC_FUNC_IMPL(__imp__sub_82BD7A84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BD7A88"))) PPC_WEAK_FUNC(sub_82BD7A88);
PPC_FUNC_IMPL(__imp__sub_82BD7A88) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82BD7A90;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r4,-1
	ctx.r11.s64 = ctx.r4.s64 + -1;
	// lwz r29,128(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 128);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// bgt cr6,0x82bd7b50
	if (cr6.gt) goto loc_82BD7B50;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x82bd7acc
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82BD7ACC;
	// bdzf 4*cr6+eq,0x82bd7ad8
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82BD7AD8;
	// bne cr6,0x82bd7ae4
	if (!cr6.eq) goto loc_82BD7AE4;
	// lwz r11,112(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x82bd7aec
	goto loc_82BD7AEC;
loc_82BD7ACC:
	// lwz r11,112(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x82bd7aec
	goto loc_82BD7AEC;
loc_82BD7AD8:
	// lwz r11,112(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x82bd7aec
	goto loc_82BD7AEC;
loc_82BD7AE4:
	// lwz r11,112(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// lwz r3,12(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
loc_82BD7AEC:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bd7b50
	if (cr6.eq) goto loc_82BD7B50;
	// stw r3,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r3.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r11.u32);
	// bl 0x82a640f8
	ctx.lr = 0x82BD7B04;
	sub_82A640F8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r3,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r11.u32);
	// bl 0x82bd7950
	ctx.lr = 0x82BD7B18;
	sub_82BD7950(ctx, base);
	// stw r30,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r30.u32);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r5,128(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// lwz r9,300(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 300);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82BD7B34;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r7,288(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 288);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82BD7B48;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82BD7B50:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,296(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 296);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BD7B68;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BD7B70"))) PPC_WEAK_FUNC(sub_82BD7B70);
PPC_FUNC_IMPL(__imp__sub_82BD7B70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad4
	ctx.lr = 0x82BD7B78;
	__savegprlr_23(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,137(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 137);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82bd7f34
	if (cr6.eq) goto loc_82BD7F34;
	// li r24,0
	ctx.r24.s64 = 0;
	// mr r28,r24
	ctx.r28.u64 = ctx.r24.u64;
	// mr r26,r24
	ctx.r26.u64 = ctx.r24.u64;
	// mr r23,r24
	ctx.r23.u64 = ctx.r24.u64;
	// mr r29,r24
	ctx.r29.u64 = ctx.r24.u64;
	// bl 0x82bd6ff8
	ctx.lr = 0x82BD7BA8;
	sub_82BD6FF8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// li r27,1
	ctx.r27.s64 = 1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82bd7c04
	if (cr6.eq) goto loc_82BD7C04;
	// lwz r11,124(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82bd7c04
	if (cr6.eq) goto loc_82BD7C04;
	// lwz r6,116(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x82bd7c2c
	if (cr6.eq) goto loc_82BD7C2C;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// bl 0x82bd7328
	ctx.lr = 0x82BD7BE4;
	sub_82BD7328(ctx, base);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82bd7c2c
	if (cr6.eq) goto loc_82BD7C2C;
	// lwz r11,112(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
	// stw r6,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r6.u32);
	// stw r11,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r11.u32);
	// b 0x82bd7c2c
	goto loc_82BD7C2C;
loc_82BD7C04:
	// lbz r11,136(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 136);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82bd7c40
	if (!cr6.eq) goto loc_82BD7C40;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r4,120(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,112(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// bl 0x82bd75e8
	ctx.lr = 0x82BD7C28;
	sub_82BD75E8(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
loc_82BD7C2C:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// beq cr6,0x82bd7c40
	if (cr6.eq) goto loc_82BD7C40;
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82bd7d70
	if (cr6.eq) goto loc_82BD7D70;
loc_82BD7C40:
	// lbz r11,136(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 136);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82bd7d30
	if (!cr6.eq) goto loc_82BD7D30;
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(ctx.r26.u32, 0, xer);
	// beq cr6,0x82bd7c5c
	if (cr6.eq) goto loc_82BD7C5C;
	// lwz r30,116(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// b 0x82bd7c60
	goto loc_82BD7C60;
loc_82BD7C5C:
	// lwz r30,112(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
loc_82BD7C60:
	// lwz r11,44(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// li r10,92
	ctx.r10.s64 = 92;
	// lwz r9,40(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// subf r8,r9,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r9.s64;
	// divw. r3,r8,r10
	ctx.r3.s32 = PPCDivide(ctx.r8.s32, ctx.r10.s32);
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x82bd7d70
	if (cr0.eq) goto loc_82BD7D70;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// cmplw cr6,r24,r3
	cr6.compare<uint32_t>(ctx.r24.u32, ctx.r3.u32, xer);
	// bge cr6,0x82bd7cf0
	if (!cr6.lt) goto loc_82BD7CF0;
loc_82BD7C88:
	// lwz r11,40(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// add r6,r11,r5
	ctx.r6.u64 = ctx.r11.u64 + ctx.r5.u64;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x82bd7cf0
	if (cr6.eq) goto loc_82BD7CF0;
	// lwz r11,120(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// lwz r10,0(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// lwz r8,4(r6)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// blt cr6,0x82bd7ce0
	if (cr6.lt) goto loc_82BD7CE0;
	// lwz r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// add r9,r7,r9
	ctx.r9.u64 = ctx.r7.u64 + ctx.r9.u64;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bge cr6,0x82bd7ce0
	if (!cr6.lt) goto loc_82BD7CE0;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r8,r10
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, xer);
	// ble cr6,0x82bd7ce0
	if (!cr6.gt) goto loc_82BD7CE0;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplw cr6,r8,r11
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, xer);
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// blt cr6,0x82bd7ce4
	if (cr6.lt) goto loc_82BD7CE4;
loc_82BD7CE0:
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
loc_82BD7CE4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82bd7d04
	if (!cr6.eq) goto loc_82BD7D04;
loc_82BD7CF0:
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// addi r5,r5,92
	ctx.r5.s64 = ctx.r5.s64 + 92;
	// cmplw cr6,r4,r3
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r3.u32, xer);
	// blt cr6,0x82bd7c88
	if (cr6.lt) goto loc_82BD7C88;
	// b 0x82bd7d70
	goto loc_82BD7D70;
loc_82BD7D04:
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r23,r27
	ctx.r23.u64 = ctx.r27.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82bd7d70
	if (cr6.eq) goto loc_82BD7D70;
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(ctx.r26.u32, 0, xer);
	// beq cr6,0x82bd7d70
	if (cr6.eq) goto loc_82BD7D70;
	// lwz r11,116(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// stw r26,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r26.u32);
	// stw r11,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r11.u32);
	// b 0x82bd7d70
	goto loc_82BD7D70;
loc_82BD7D30:
	// lwz r4,124(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82bd7d70
	if (cr6.eq) goto loc_82BD7D70;
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82bd7d70
	if (!cr6.eq) goto loc_82BD7D70;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82bd6ea8
	ctx.lr = 0x82BD7D50;
	sub_82BD6EA8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,112(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82bd75e8
	ctx.lr = 0x82BD7D64;
	sub_82BD75E8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82bd7d70
	if (!cr6.eq) goto loc_82BD7D70;
	// lwz r28,124(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
loc_82BD7D70:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// bne cr6,0x82bd7ed0
	if (!cr6.eq) goto loc_82BD7ED0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,120(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// bl 0x82bd1a28
	ctx.lr = 0x82BD7D84;
	sub_82BD1A28(ctx, base);
	// lwz r4,104(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r3,108(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r7,96(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// rlwinm r8,r4,31,1,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 31) & 0x7FFFFFFF;
	// lwz r9,100(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// rlwinm r10,r3,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 31) & 0x7FFFFFFF;
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r27.u32);
	// add r7,r10,r9
	ctx.r7.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r27,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r27.u32);
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// addi r11,r25,-1
	ctx.r11.s64 = ctx.r25.s64 + -1;
	// lwz r3,12(r6)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// lwz r10,0(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// lwz r9,4(r6)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// lwz r4,8(r6)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// stw r4,8(r5)
	PPC_STORE_U32(ctx.r5.u32 + 8, ctx.r4.u32);
	// stw r9,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r9.u32);
	// stw r10,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// stw r3,12(r5)
	PPC_STORE_U32(ctx.r5.u32 + 12, ctx.r3.u32);
	// bgt cr6,0x82bd7e40
	if (cr6.gt) goto loc_82BD7E40;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x82bd7e10
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82BD7E10;
	// bdzf 4*cr6+eq,0x82bd7e20
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82BD7E20;
	// bne cr6,0x82bd7e30
	if (!cr6.eq) goto loc_82BD7E30;
	// lwz r11,112(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// li r10,12
	ctx.r10.s64 = 12;
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// lwz r26,0(r11)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x82bd7e40
	goto loc_82BD7E40;
loc_82BD7E10:
	// lwz r11,112(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// stw r24,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r24.u32);
	// lwz r26,4(r11)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x82bd7e40
	goto loc_82BD7E40;
loc_82BD7E20:
	// lwz r11,112(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// stw r24,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r24.u32);
	// lwz r26,8(r11)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x82bd7e40
	goto loc_82BD7E40;
loc_82BD7E30:
	// li r11,12
	ctx.r11.s64 = 12;
	// lwz r10,112(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// lwz r26,12(r10)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
loc_82BD7E40:
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(ctx.r26.u32, 0, xer);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// beq cr6,0x82bd7eac
	if (cr6.eq) goto loc_82BD7EAC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bd6ff8
	ctx.lr = 0x82BD7E54;
	sub_82BD6FF8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82bd7e68
	if (cr6.eq) goto loc_82BD7E68;
	// lwz r6,124(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// b 0x82bd7e6c
	goto loc_82BD7E6C;
loc_82BD7E68:
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
loc_82BD7E6C:
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82bd75e8
	ctx.lr = 0x82BD7E80;
	sub_82BD75E8(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82bd7e9c
	if (!cr6.eq) goto loc_82BD7E9C;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82a640f8
	ctx.lr = 0x82BD7E98;
	sub_82A640F8(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
loc_82BD7E9C:
	// lwz r11,112(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// stw r26,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r26.u32);
	// stw r11,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r11.u32);
	// b 0x82bd7ec0
	goto loc_82BD7EC0;
loc_82BD7EAC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,296(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 296);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BD7EC0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82BD7EC0:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82bd18c0
	ctx.lr = 0x82BD7EC8;
	sub_82BD18C0(ctx, base);
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// beq cr6,0x82bd7f34
	if (cr6.eq) goto loc_82BD7F34;
loc_82BD7ED0:
	// lbz r11,136(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 136);
	// lwz r30,128(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
	// bne cr6,0x82bd7ee8
	if (!cr6.eq) goto loc_82BD7EE8;
	// lwz r11,120(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
loc_82BD7EE8:
	// stw r11,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r28,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r28.u32);
	// stb r23,136(r31)
	PPC_STORE_U8(ctx.r31.u32 + 136, ctx.r23.u8);
	// bl 0x82bd7950
	ctx.lr = 0x82BD7EFC;
	sub_82BD7950(ctx, base);
	// stw r25,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r25.u32);
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(ctx.r26.u32, 0, xer);
	// beq cr6,0x82bd7f20
	if (cr6.eq) goto loc_82BD7F20;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r5,128(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// lwz r10,300(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 300);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BD7F20;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82BD7F20:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,288(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 288);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BD7F34;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82BD7F34:
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BD7F3C"))) PPC_WEAK_FUNC(sub_82BD7F3C);
PPC_FUNC_IMPL(__imp__sub_82BD7F3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BD7F40"))) PPC_WEAK_FUNC(sub_82BD7F40);
PPC_FUNC_IMPL(__imp__sub_82BD7F40) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82BD7F48;
	__savegprlr_29(ctx, base);
	// stfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f30.u64);
	// stfd f31,-40(r1)
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,137(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 137);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// fmr f30,f2
	ctx.f30.f64 = ctx.f2.f64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82bd8048
	if (cr6.eq) goto loc_82BD8048;
	// fmuls f0,f2,f2
	ctx.f0.f64 = double(float(ctx.f2.f64 * ctx.f2.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f1,80(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f2,84(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lfs f13,9008(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f12,f1,f1,f0
	ctx.f12.f64 = double(float(ctx.f1.f64 * ctx.f1.f64 + ctx.f0.f64));
	// fsqrts f0,f12
	ctx.f0.f64 = double(float(sqrt(ctx.f12.f64)));
	// fcmpu cr6,f0,f13
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// beq cr6,0x82bd7fac
	if (cr6.eq) goto loc_82BD7FAC;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lfs f13,-26260(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -26260);
	ctx.f13.f64 = double(temp.f32);
	// fdivs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 / ctx.f0.f64));
	// fmuls f13,f0,f1
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f1.f64));
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmuls f12,f0,f2
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f2.f64));
	// stfs f12,84(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
loc_82BD7FAC:
	// lbz r11,136(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 136);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82bd7fd0
	if (!cr6.eq) goto loc_82BD7FD0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r4,120(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// lwz r3,112(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// bl 0x82bd73b8
	ctx.lr = 0x82BD7FCC;
	sub_82BD73B8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82BD7FD0:
	// lwz r3,120(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// fmr f2,f30
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f30.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82bd7238
	ctx.lr = 0x82BD7FE0;
	sub_82BD7238(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// bne cr6,0x82bd8008
	if (!cr6.eq) goto loc_82BD8008;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bd7b70
	ctx.lr = 0x82BD7FF8;
	sub_82BD7B70(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f31,-40(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82BD8008:
	// lbz r11,136(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 136);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x82bd801c
	if (!cr6.eq) goto loc_82BD801C;
	// lwz r11,120(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
loc_82BD801C:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r11.u32);
	// stw r30,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r10,136(r31)
	PPC_STORE_U8(ctx.r31.u32 + 136, ctx.r10.u8);
	// bl 0x82bd7950
	ctx.lr = 0x82BD8034;
	sub_82BD7950(ctx, base);
	// stw r29,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r29.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r8,288(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 288);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82BD8048;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82BD8048:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f31,-40(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BD8058"))) PPC_WEAK_FUNC(sub_82BD8058);
PPC_FUNC_IMPL(__imp__sub_82BD8058) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdacc
	ctx.lr = 0x82BD8060;
	__savegprlr_21(ctx, base);
	// stfd f30,-112(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -112, ctx.f30.u64);
	// stfd f31,-104(r1)
	PPC_STORE_U64(ctx.r1.u32 + -104, ctx.f31.u64);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,304(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 304);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BD8080;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82927030
	ctx.lr = 0x82BD8088;
	sub_82927030(ctx, base);
	// bl 0x838257e0
	ctx.lr = 0x82BD808C;
	sub_838257E0(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82bd82b4
	if (!cr6.eq) goto loc_82BD82B4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d199e0
	ctx.lr = 0x82BD80A0;
	sub_82D199E0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82bd82b4
	if (!cr6.eq) goto loc_82BD82B4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19868
	ctx.lr = 0x82BD80B4;
	sub_82D19868(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82bd82b4
	if (!cr6.eq) goto loc_82BD82B4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a00
	ctx.lr = 0x82BD80C4;
	sub_82D19A00(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82bd82b4
	if (cr6.eq) goto loc_82BD82B4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a20
	ctx.lr = 0x82BD80D8;
	sub_82D19A20(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82bd82b4
	if (cr6.eq) goto loc_82BD82B4;
	// bl 0x8308e078
	ctx.lr = 0x82BD80E8;
	sub_8308E078(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8353b168
	ctx.lr = 0x82BD80F4;
	sub_8353B168(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bd82b4
	if (cr6.eq) goto loc_82BD82B4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BD8114;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,0(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// lwz r8,48(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82BD8130;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r7,37
	ctx.r7.s64 = 37;
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f1.f64;
	// li r6,40
	ctx.r6.s64 = 40;
	// li r5,38
	ctx.r5.s64 = 38;
	// stw r7,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r7.u32);
	// li r4,39
	ctx.r4.s64 = 39;
	// stw r6,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r6.u32);
	// stw r5,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r5.u32);
	// stw r4,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r4.u32);
	// bl 0x83a7d958
	ctx.lr = 0x82BD8158;
	sub_83A7D958(ctx, base);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// bl 0x83524138
	ctx.lr = 0x82BD8160;
	sub_83524138(ctx, base);
	// ld r11,152(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 152);
	// li r21,0
	ctx.r21.s64 = 0;
	// subf r10,r11,r3
	ctx.r10.s64 = ctx.r3.s64 - ctx.r11.s64;
	// mr r23,r21
	ctx.r23.u64 = ctx.r21.u64;
	// cmpldi cr6,r10,333
	cr6.compare<uint64_t>(ctx.r10.u64, 333, xer);
	// ble cr6,0x82bd817c
	if (!cr6.gt) goto loc_82BD817C;
	// li r23,1
	ctx.r23.s64 = 1;
loc_82BD817C:
	// mr r27,r21
	ctx.r27.u64 = ctx.r21.u64;
	// mr r24,r21
	ctx.r24.u64 = ctx.r21.u64;
	// mr r29,r21
	ctx.r29.u64 = ctx.r21.u64;
	// li r26,4
	ctx.r26.s64 = 4;
	// mr r30,r21
	ctx.r30.u64 = ctx.r21.u64;
	// addi r25,r1,96
	ctx.r25.s64 = ctx.r1.s64 + 96;
loc_82BD8194:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r4,0(r25)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BD81AC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82bd820c
	if (cr6.eq) goto loc_82BD820C;
	// clrlwi r11,r23,24
	ctx.r11.u64 = ctx.r23.u32 & 0xFF;
	// li r27,1
	ctx.r27.s64 = 1;
	// clrlwi r26,r30,24
	ctx.r26.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82bd820c
	if (cr6.eq) goto loc_82BD820C;
	// clrlwi r11,r24,24
	ctx.r11.u64 = ctx.r24.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82bd8208
	if (!cr6.eq) goto loc_82BD8208;
	// lwz r11,160(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	// li r24,1
	ctx.r24.s64 = 1;
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82bd81f4
	if (!cr6.eq) goto loc_82BD81F4;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// b 0x82bd81f8
	goto loc_82BD81F8;
loc_82BD81F4:
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
loc_82BD81F8:
	// stw r11,160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 160, ctx.r11.u32);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x83524138
	ctx.lr = 0x82BD8204;
	sub_83524138(ctx, base);
	// std r3,152(r31)
	PPC_STORE_U64(ctx.r31.u32 + 152, ctx.r3.u64);
loc_82BD8208:
	// li r29,1
	ctx.r29.s64 = 1;
loc_82BD820C:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r25,r25,4
	ctx.r25.s64 = ctx.r25.s64 + 4;
	// cmplwi cr6,r30,4
	cr6.compare<uint32_t>(ctx.r30.u32, 4, xer);
	// blt cr6,0x82bd8194
	if (cr6.lt) goto loc_82BD8194;
	// clrlwi r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82bd8230
	if (!cr6.eq) goto loc_82BD8230;
	// std r21,152(r31)
	PPC_STORE_U64(ctx.r31.u32 + 152, ctx.r21.u64);
	// stw r21,160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 160, ctx.r21.u32);
loc_82BD8230:
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82bd82b4
	if (cr6.eq) goto loc_82BD82B4;
	// lwz r11,140(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// clrlwi r10,r26,24
	ctx.r10.u64 = ctx.r26.u32 & 0xFF;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// addi r4,r10,1
	ctx.r4.s64 = ctx.r10.s64 + 1;
	// blt cr6,0x82bd82ac
	if (cr6.lt) goto loc_82BD82AC;
	// bne cr6,0x82bd82b4
	if (!cr6.eq) goto loc_82BD82B4;
	// fabs f13,f31
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = ctx.f31.u64 & ~0x8000000000000000;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f0,-24912(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -24912);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x82bd828c
	if (cr6.gt) goto loc_82BD828C;
	// fabs f13,f30
	ctx.f13.u64 = ctx.f30.u64 & ~0x8000000000000000;
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x82bd828c
	if (cr6.gt) goto loc_82BD828C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bd7b70
	ctx.lr = 0x82BD827C;
	sub_82BD7B70(ctx, base);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// lfd f30,-112(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -112);
	// lfd f31,-104(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -104);
	// b 0x831cdb1c
	__restgprlr_21(ctx, base);
	return;
loc_82BD828C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f2,f30
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f30.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82bd7f40
	ctx.lr = 0x82BD829C;
	sub_82BD7F40(ctx, base);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// lfd f30,-112(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -112);
	// lfd f31,-104(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -104);
	// b 0x831cdb1c
	__restgprlr_21(ctx, base);
	return;
loc_82BD82AC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bd7a88
	ctx.lr = 0x82BD82B4;
	sub_82BD7A88(ctx, base);
loc_82BD82B4:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// lfd f30,-112(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -112);
	// lfd f31,-104(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -104);
	// b 0x831cdb1c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BD82C4"))) PPC_WEAK_FUNC(sub_82BD82C4);
PPC_FUNC_IMPL(__imp__sub_82BD82C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BD82C8"))) PPC_WEAK_FUNC(sub_82BD82C8);
PPC_FUNC_IMPL(__imp__sub_82BD82C8) {
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
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-14848
	ctx.r9.s64 = ctx.r11.s64 + -14848;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// addi r31,r3,96
	ctx.r31.s64 = ctx.r3.s64 + 96;
	// stw r8,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r8.u32);
	// lwz r3,96(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bd8328
	if (cr6.eq) goto loc_82BD8328;
	// addi r5,r31,12
	ctx.r5.s64 = ctx.r31.s64 + 12;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82bd41c8
	ctx.lr = 0x82BD8314;
	sub_82BD41C8(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82BD8328;
	sub_825952B8(ctx, base);
loc_82BD8328:
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bl 0x82d25548
	ctx.lr = 0x82BD8340;
	sub_82D25548(ctx, base);
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

__attribute__((alias("__imp__sub_82BD8358"))) PPC_WEAK_FUNC(sub_82BD8358);
PPC_FUNC_IMPL(__imp__sub_82BD8358) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82BD8360;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x8308e078
	ctx.lr = 0x82BD8374;
	sub_8308E078(ctx, base);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82d253f8
	ctx.lr = 0x82BD838C;
	sub_82D253F8(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-14848
	ctx.r9.s64 = ctx.r11.s64 + -14848;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r8,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r8.u32);
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
	// stw r11,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r11.u32);
	// stw r11,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r11.u32);
	// stw r11,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r11.u32);
	// stw r11,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r11.u32);
	// stw r11,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r11.u32);
	// stw r11,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r11.u32);
	// stw r11,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r11.u32);
	// stb r11,136(r31)
	PPC_STORE_U8(ctx.r31.u32 + 136, ctx.r11.u8);
	// stb r10,137(r31)
	PPC_STORE_U8(ctx.r31.u32 + 137, ctx.r10.u8);
	// stw r10,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r10.u32);
	// stw r11,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r11.u32);
	// std r11,152(r31)
	PPC_STORE_U64(ctx.r31.u32 + 152, ctx.r11.u64);
	// stw r11,160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 160, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BD83F4"))) PPC_WEAK_FUNC(sub_82BD83F4);
PPC_FUNC_IMPL(__imp__sub_82BD83F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BD83F8"))) PPC_WEAK_FUNC(sub_82BD83F8);
PPC_FUNC_IMPL(__imp__sub_82BD83F8) {
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
	// bl 0x82bd82c8
	ctx.lr = 0x82BD8418;
	sub_82BD82C8(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82bd8430
	if (cr6.eq) goto loc_82BD8430;
	// bl 0x82416268
	ctx.lr = 0x82BD842C;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82BD8430:
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

__attribute__((alias("__imp__sub_82BD8448"))) PPC_WEAK_FUNC(sub_82BD8448);
PPC_FUNC_IMPL(__imp__sub_82BD8448) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82BD8450;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x83108968
	ctx.lr = 0x82BD8460;
	sub_83108968(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bd8484
	if (cr6.eq) goto loc_82BD8484;
	// bl 0x82aa87f0
	ctx.lr = 0x82BD8470;
	sub_82AA87F0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83108978
	ctx.lr = 0x82BD847C;
	sub_83108978(ctx, base);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// b 0x82bd8488
	goto loc_82BD8488;
loc_82BD8484:
	// li r7,0
	ctx.r7.s64 = 0;
loc_82BD8488:
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r30,71
	cr6.compare<uint32_t>(ctx.r30.u32, 71, xer);
	// bge cr6,0x82bd84ac
	if (!cr6.lt) goto loc_82BD84AC;
	// lis r11,-31777
	ctx.r11.s64 = -2082537472;
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,32192
	ctx.r9.s64 = ctx.r11.s64 + 32192;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82BD84AC:
	// cmplwi cr6,r30,72
	cr6.compare<uint32_t>(ctx.r30.u32, 72, xer);
	// bne cr6,0x82bd8510
	if (!cr6.eq) goto loc_82BD8510;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x82bd8510
	if (cr6.eq) goto loc_82BD8510;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r8,r11,-13040
	ctx.r8.s64 = ctx.r11.s64 + -13040;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_82BD84CC:
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplw cr6,r29,r10
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r10.u32, xer);
	// bne cr6,0x82bd84ec
	if (!cr6.eq) goto loc_82BD84EC;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82bd84ec
	if (cr6.eq) goto loc_82BD84EC;
	// cmplw cr6,r7,r10
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r10.u32, xer);
	// bge cr6,0x82bd8504
	if (!cr6.lt) goto loc_82BD8504;
loc_82BD84EC:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// cmplwi cr6,r9,2
	cr6.compare<uint32_t>(ctx.r9.u32, 2, xer);
	// blt cr6,0x82bd84cc
	if (cr6.lt) goto loc_82BD84CC;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82BD8504:
	// rlwinm r11,r9,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r10,r8,8
	ctx.r10.s64 = ctx.r8.s64 + 8;
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
loc_82BD8510:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BD8518"))) PPC_WEAK_FUNC(sub_82BD8518);
PPC_FUNC_IMPL(__imp__sub_82BD8518) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82BD8520;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// bl 0x82cd50f8
	ctx.lr = 0x82BD8534;
	sub_82CD50F8(ctx, base);
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// lis r8,-32239
	ctx.r8.s64 = -2112815104;
	// li r10,71
	ctx.r10.s64 = 71;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r7,r9,-11648
	ctx.r7.s64 = ctx.r9.s64 + -11648;
	// stw r10,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r10.u32);
	// addi r6,r8,-17088
	ctx.r6.s64 = ctx.r8.s64 + -17088;
	// stw r10,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r10.u32);
	// li r5,-1
	ctx.r5.s64 = -1;
	// stw r7,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r7.u32);
	// clrlwi r4,r29,24
	ctx.r4.u64 = ctx.r29.u32 & 0xFF;
	// stw r6,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r6.u32);
	// stw r5,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r5.u32);
	// stw r11,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r11.u32);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// stw r11,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r11.u32);
	// beq cr6,0x82bd8588
	if (cr6.eq) goto loc_82BD8588;
	// lis r11,-31761
	ctx.r11.s64 = -2081488896;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,32008(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32008);
	// bl 0x82d20ae0
	ctx.lr = 0x82BD8588;
	sub_82D20AE0(ctx, base);
loc_82BD8588:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x82bd859c
	if (cr6.eq) goto loc_82BD859C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d20ae0
	ctx.lr = 0x82BD859C;
	sub_82D20AE0(ctx, base);
loc_82BD859C:
	// lis r11,-31777
	ctx.r11.s64 = -2082537472;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,32580(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32580);
	// bl 0x82d23390
	ctx.lr = 0x82BD85B0;
	sub_82D23390(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BD85BC"))) PPC_WEAK_FUNC(sub_82BD85BC);
PPC_FUNC_IMPL(__imp__sub_82BD85BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BD85C0"))) PPC_WEAK_FUNC(sub_82BD85C0);
PPC_FUNC_IMPL(__imp__sub_82BD85C0) {
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
	// li r11,4
	ctx.r11.s64 = 4;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,96(r3)
	PPC_STORE_U32(ctx.r3.u32 + 96, ctx.r11.u32);
	// bl 0x82d19a78
	ctx.lr = 0x82BD85E0;
	sub_82D19A78(ctx, base);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31777
	ctx.r10.s64 = -2082537472;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r8,72(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 72);
	// lwz r4,32596(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32596);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82BD85FC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19858
	ctx.lr = 0x82BD8608;
	sub_82D19858(ctx, base);
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

__attribute__((alias("__imp__sub_82BD861C"))) PPC_WEAK_FUNC(sub_82BD861C);
PPC_FUNC_IMPL(__imp__sub_82BD861C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BD8620"))) PPC_WEAK_FUNC(sub_82BD8620);
PPC_FUNC_IMPL(__imp__sub_82BD8620) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// addi r11,r3,-58
	ctx.r11.s64 = ctx.r3.s64 + -58;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r11,8
	cr6.compare<uint32_t>(ctx.r11.u32, 8, xer);
	// bgtlr cr6
	if (cr6.gt) return;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x82bd86ac
	if (cr6.eq) goto loc_82BD86AC;
	// bdz 0x82bd867c
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_82BD867C;
	// bdz 0x82bd86cc
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_82BD86CC;
	// bdz 0x82bd865c
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_82BD865C;
	// bdz 0x82bd86dc
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_82BD86DC;
	// bdz 0x82bd866c
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_82BD866C;
	// bdz 0x82bd86bc
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_82BD86BC;
	// bdz 0x82bd868c
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_82BD868C;
	// b 0x82bd869c
	goto loc_82BD869C;
loc_82BD865C:
	// lis r11,-31777
	ctx.r11.s64 = -2082537472;
	// addi r10,r11,32648
	ctx.r10.s64 = ctx.r11.s64 + 32648;
	// lwz r3,-4(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + -4);
	// blr 
	return;
loc_82BD866C:
	// lis r11,-31777
	ctx.r11.s64 = -2082537472;
	// addi r10,r11,32648
	ctx.r10.s64 = ctx.r11.s64 + 32648;
	// lwz r3,4(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// blr 
	return;
loc_82BD867C:
	// lis r11,-31777
	ctx.r11.s64 = -2082537472;
	// addi r10,r11,32648
	ctx.r10.s64 = ctx.r11.s64 + 32648;
	// lwz r3,-12(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + -12);
	// blr 
	return;
loc_82BD868C:
	// lis r11,-31777
	ctx.r11.s64 = -2082537472;
	// addi r10,r11,32648
	ctx.r10.s64 = ctx.r11.s64 + 32648;
	// lwz r3,12(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// blr 
	return;
loc_82BD869C:
	// lis r11,-31777
	ctx.r11.s64 = -2082537472;
	// addi r10,r11,32648
	ctx.r10.s64 = ctx.r11.s64 + 32648;
	// lwz r3,16(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// blr 
	return;
loc_82BD86AC:
	// lis r11,-31777
	ctx.r11.s64 = -2082537472;
	// addi r10,r11,32648
	ctx.r10.s64 = ctx.r11.s64 + 32648;
	// lwz r3,-16(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + -16);
	// blr 
	return;
loc_82BD86BC:
	// lis r11,-31777
	ctx.r11.s64 = -2082537472;
	// addi r10,r11,32648
	ctx.r10.s64 = ctx.r11.s64 + 32648;
	// lwz r3,8(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// blr 
	return;
loc_82BD86CC:
	// lis r11,-31777
	ctx.r11.s64 = -2082537472;
	// addi r10,r11,32648
	ctx.r10.s64 = ctx.r11.s64 + 32648;
	// lwz r3,-8(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + -8);
	// blr 
	return;
loc_82BD86DC:
	// lis r11,-31777
	ctx.r11.s64 = -2082537472;
	// lwz r3,32648(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32648);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BD86E8"))) PPC_WEAK_FUNC(sub_82BD86E8);
PPC_FUNC_IMPL(__imp__sub_82BD86E8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82BD86F0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,27
	ctx.r11.s64 = 27;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,144
	ctx.r4.s64 = 144;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// bl 0x82595718
	ctx.lr = 0x82BD871C;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bd8740
	if (cr6.eq) goto loc_82BD8740;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82bd8518
	ctx.lr = 0x82BD8738;
	sub_82BD8518(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82BD8740:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BD874C"))) PPC_WEAK_FUNC(sub_82BD874C);
PPC_FUNC_IMPL(__imp__sub_82BD874C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BD8750"))) PPC_WEAK_FUNC(sub_82BD8750);
PPC_FUNC_IMPL(__imp__sub_82BD8750) {
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
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-11648
	ctx.r9.s64 = ctx.r11.s64 + -11648;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r8,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r8.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82cd5008
	ctx.lr = 0x82BD8788;
	sub_82CD5008(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82bd87a0
	if (cr6.eq) goto loc_82BD87A0;
	// bl 0x82416268
	ctx.lr = 0x82BD879C;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82BD87A0:
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

