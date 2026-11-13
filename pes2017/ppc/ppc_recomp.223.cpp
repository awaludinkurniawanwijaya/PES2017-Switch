#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_82E96300"))) PPC_WEAK_FUNC(sub_82E96300);
PPC_FUNC_IMPL(__imp__sub_82E96300) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r10,-31757
	ctx.r10.s64 = -2081226752;
	// lwz r11,25460(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 25460);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82e9633c
	if (!cr6.eq) goto loc_82E9633C;
	// lis r9,-31757
	ctx.r9.s64 = -2081226752;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r8,-31757
	ctx.r8.s64 = -2081226752;
	// stw r11,25460(r10)
	PPC_STORE_U32(ctx.r10.u32 + 25460, ctx.r11.u32);
	// lwz r11,25452(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 25452);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r3,25456(r8)
	PPC_STORE_U32(ctx.r8.u32 + 25456, ctx.r3.u32);
	// stw r11,25452(r9)
	PPC_STORE_U32(ctx.r9.u32 + 25452, ctx.r11.u32);
	// blr 
	return;
loc_82E9633C:
	// lis r11,-31757
	ctx.r11.s64 = -2081226752;
	// lwz r3,25456(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25456);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E96348"))) PPC_WEAK_FUNC(sub_82E96348);
PPC_FUNC_IMPL(__imp__sub_82E96348) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r10.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r9,577(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 577);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82e96368
	if (!cr6.eq) goto loc_82E96368;
	// stw r4,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r4.u32);
loc_82E96368:
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r4,r9
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, xer);
	// bne cr6,0x82e96390
	if (!cr6.eq) goto loc_82E96390;
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// stw r4,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r4.u32);
	// stw r11,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r11.u32);
	// blr 
	return;
loc_82E96390:
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r4,r9
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, xer);
	// bne cr6,0x82e963b0
	if (!cr6.eq) goto loc_82E963B0;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// stw r4,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r4.u32);
	// stw r11,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r11.u32);
	// blr 
	return;
loc_82E963B0:
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
	// stw r4,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r4.u32);
	// stw r11,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E963C0"))) PPC_WEAK_FUNC(sub_82E963C0);
PPC_FUNC_IMPL(__imp__sub_82E963C0) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,584
	ctx.r4.s64 = 584;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82E963F4;
	sub_82595718(ctx, base);
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// stw r3,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r3.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r9.u32);
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r8,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r8.u32);
	// lwz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stb r11,576(r7)
	PPC_STORE_U8(ctx.r7.u32 + 576, ctx.r11.u8);
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stb r11,577(r6)
	PPC_STORE_U8(ctx.r6.u32 + 577, ctx.r11.u8);
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

__attribute__((alias("__imp__sub_82E96438"))) PPC_WEAK_FUNC(sub_82E96438);
PPC_FUNC_IMPL(__imp__sub_82E96438) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// cmplw cr6,r4,r5
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r5.u32, xer);
	// beq cr6,0x82e964a8
	if (cr6.eq) goto loc_82E964A8;
	// lbz r10,0(r6)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r6.u32 + 0);
loc_82E96448:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// beq cr6,0x82e96468
	if (cr6.eq) goto loc_82E96468;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r11,r5
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, xer);
	// bne cr6,0x82e96448
	if (!cr6.eq) goto loc_82E96448;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_82E96468:
	// cmplw cr6,r11,r5
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, xer);
	// beq cr6,0x82e964a8
	if (cr6.eq) goto loc_82E964A8;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r10,r5
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r5.u32, xer);
	// beq cr6,0x82e964a8
	if (cr6.eq) goto loc_82E964A8;
	// subf r9,r10,r5
	ctx.r9.s64 = ctx.r5.s64 - ctx.r10.s64;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_82E96484:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// lbz r8,0(r6)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r6.u32 + 0);
	// mr r7,r9
	ctx.r7.u64 = ctx.r9.u64;
	// cmplw cr6,r9,r8
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, xer);
	// beq cr6,0x82e964a0
	if (cr6.eq) goto loc_82E964A0;
	// stb r9,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r9.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_82E964A0:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// bdnz 0x82e96484
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82E96484;
loc_82E964A8:
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E964B0"))) PPC_WEAK_FUNC(sub_82E964B0);
PPC_FUNC_IMPL(__imp__sub_82E964B0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lbz r9,577(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 577);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82e964f0
	if (!cr6.eq) goto loc_82E964F0;
	// lbz r9,0(r5)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r5.u32 + 0);
loc_82E964C8:
	// lbz r8,16(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 16);
	// cmplw cr6,r8,r9
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, xer);
	// bge cr6,0x82e964dc
	if (!cr6.lt) goto loc_82E964DC;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x82e964e4
	goto loc_82E964E4;
loc_82E964DC:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82E964E4:
	// lbz r8,577(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 577);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x82e964c8
	if (cr6.eq) goto loc_82E964C8;
loc_82E964F0:
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r10,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r10.u32);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// beq cr6,0x82e96520
	if (cr6.eq) goto loc_82E96520;
	// lbz r10,16(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 16);
	// lbz r9,0(r5)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r5.u32 + 0);
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// blt cr6,0x82e96520
	if (cr6.lt) goto loc_82E96520;
	// addi r11,r1,-16
	ctx.r11.s64 = ctx.r1.s64 + -16;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_82E96520:
	// stw r11,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r11.u32);
	// addi r11,r1,-12
	ctx.r11.s64 = ctx.r1.s64 + -12;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E96534"))) PPC_WEAK_FUNC(sub_82E96534);
PPC_FUNC_IMPL(__imp__sub_82E96534) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E96538"))) PPC_WEAK_FUNC(sub_82E96538);
PPC_FUNC_IMPL(__imp__sub_82E96538) {
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
	// addi r4,r3,80
	ctx.r4.s64 = ctx.r3.s64 + 80;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82b80748
	ctx.lr = 0x82E96550;
	sub_82B80748(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82e9658c
	if (cr6.eq) goto loc_82E9658C;
	// bl 0x82e94170
	ctx.lr = 0x82E96560;
	sub_82E94170(ctx, base);
	// cmpwi cr6,r3,4
	cr6.compare<int32_t>(ctx.r3.s32, 4, xer);
	// bne cr6,0x82e9658c
	if (!cr6.eq) goto loc_82E9658C;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82e96578
	if (cr6.eq) goto loc_82E96578;
	// bl 0x8259b510
	ctx.lr = 0x82E96578;
	sub_8259B510(ctx, base);
loc_82E96578:
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
loc_82E9658C:
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82e9659c
	if (cr6.eq) goto loc_82E9659C;
	// bl 0x8259b510
	ctx.lr = 0x82E9659C;
	sub_8259B510(ctx, base);
loc_82E9659C:
	// li r3,6
	ctx.r3.s64 = 6;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E965B0"))) PPC_WEAK_FUNC(sub_82E965B0);
PPC_FUNC_IMPL(__imp__sub_82E965B0) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r4,r3,80
	ctx.r4.s64 = ctx.r3.s64 + 80;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82b80748
	ctx.lr = 0x82E965D0;
	sub_82B80748(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82e96604
	if (!cr6.eq) goto loc_82E96604;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82e965ec
	if (cr6.eq) goto loc_82E965EC;
	// bl 0x8259b510
	ctx.lr = 0x82E965EC;
	sub_8259B510(ctx, base);
loc_82E965EC:
	// li r3,6
	ctx.r3.s64 = 6;
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
loc_82E96604:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82e94240
	ctx.lr = 0x82E9660C;
	sub_82E94240(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82e96624
	if (cr6.eq) goto loc_82E96624;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x8259b510
	ctx.lr = 0x82E96624;
	sub_8259B510(ctx, base);
loc_82E96624:
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

__attribute__((alias("__imp__sub_82E9663C"))) PPC_WEAK_FUNC(sub_82E9663C);
PPC_FUNC_IMPL(__imp__sub_82E9663C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E96640"))) PPC_WEAK_FUNC(sub_82E96640);
PPC_FUNC_IMPL(__imp__sub_82E96640) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r4,r3,80
	ctx.r4.s64 = ctx.r3.s64 + 80;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82b80748
	ctx.lr = 0x82E96660;
	sub_82B80748(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82e96694
	if (!cr6.eq) goto loc_82E96694;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82e9667c
	if (cr6.eq) goto loc_82E9667C;
	// bl 0x8259b510
	ctx.lr = 0x82E9667C;
	sub_8259B510(ctx, base);
loc_82E9667C:
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
loc_82E96694:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82e94378
	ctx.lr = 0x82E9669C;
	sub_82E94378(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82e966b4
	if (cr6.eq) goto loc_82E966B4;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x8259b510
	ctx.lr = 0x82E966B4;
	sub_8259B510(ctx, base);
loc_82E966B4:
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

__attribute__((alias("__imp__sub_82E966CC"))) PPC_WEAK_FUNC(sub_82E966CC);
PPC_FUNC_IMPL(__imp__sub_82E966CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E966D0"))) PPC_WEAK_FUNC(sub_82E966D0);
PPC_FUNC_IMPL(__imp__sub_82E966D0) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r4,r3,80
	ctx.r4.s64 = ctx.r3.s64 + 80;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82b80748
	ctx.lr = 0x82E966F0;
	sub_82B80748(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82e96724
	if (!cr6.eq) goto loc_82E96724;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82e9670c
	if (cr6.eq) goto loc_82E9670C;
	// bl 0x8259b510
	ctx.lr = 0x82E9670C;
	sub_8259B510(ctx, base);
loc_82E9670C:
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
loc_82E96724:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82e943c8
	ctx.lr = 0x82E9672C;
	sub_82E943C8(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82e96744
	if (cr6.eq) goto loc_82E96744;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x8259b510
	ctx.lr = 0x82E96744;
	sub_8259B510(ctx, base);
loc_82E96744:
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

__attribute__((alias("__imp__sub_82E9675C"))) PPC_WEAK_FUNC(sub_82E9675C);
PPC_FUNC_IMPL(__imp__sub_82E9675C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E96760"))) PPC_WEAK_FUNC(sub_82E96760);
PPC_FUNC_IMPL(__imp__sub_82E96760) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r4,r3,80
	ctx.r4.s64 = ctx.r3.s64 + 80;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82b80748
	ctx.lr = 0x82E96780;
	sub_82B80748(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82e967b4
	if (!cr6.eq) goto loc_82E967B4;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82e9679c
	if (cr6.eq) goto loc_82E9679C;
	// bl 0x8259b510
	ctx.lr = 0x82E9679C;
	sub_8259B510(ctx, base);
loc_82E9679C:
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
loc_82E967B4:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82e942a0
	ctx.lr = 0x82E967BC;
	sub_82E942A0(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82e967d4
	if (cr6.eq) goto loc_82E967D4;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x8259b510
	ctx.lr = 0x82E967D4;
	sub_8259B510(ctx, base);
loc_82E967D4:
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

__attribute__((alias("__imp__sub_82E967EC"))) PPC_WEAK_FUNC(sub_82E967EC);
PPC_FUNC_IMPL(__imp__sub_82E967EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E967F0"))) PPC_WEAK_FUNC(sub_82E967F0);
PPC_FUNC_IMPL(__imp__sub_82E967F0) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r4,r3,80
	ctx.r4.s64 = ctx.r3.s64 + 80;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82b80748
	ctx.lr = 0x82E96810;
	sub_82B80748(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82e96844
	if (!cr6.eq) goto loc_82E96844;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82e9682c
	if (cr6.eq) goto loc_82E9682C;
	// bl 0x8259b510
	ctx.lr = 0x82E9682C;
	sub_8259B510(ctx, base);
loc_82E9682C:
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
loc_82E96844:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82e942e8
	ctx.lr = 0x82E9684C;
	sub_82E942E8(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82e96864
	if (cr6.eq) goto loc_82E96864;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x8259b510
	ctx.lr = 0x82E96864;
	sub_8259B510(ctx, base);
loc_82E96864:
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

__attribute__((alias("__imp__sub_82E9687C"))) PPC_WEAK_FUNC(sub_82E9687C);
PPC_FUNC_IMPL(__imp__sub_82E9687C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E96880"))) PPC_WEAK_FUNC(sub_82E96880);
PPC_FUNC_IMPL(__imp__sub_82E96880) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82E96888;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r3,80
	ctx.r4.s64 = ctx.r3.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82b80748
	ctx.lr = 0x82E968A0;
	sub_82B80748(ctx, base);
	// lwz r30,96(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x82e96948
	if (cr6.eq) goto loc_82E96948;
	// addi r4,r31,32
	ctx.r4.s64 = ctx.r31.s64 + 32;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// stw r4,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r4.u32);
	// bl 0x8257fad0
	ctx.lr = 0x82E968BC;
	sub_8257FAD0(ctx, base);
	// addi r31,r31,16
	ctx.r31.s64 = ctx.r31.s64 + 16;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82e942d0
	ctx.lr = 0x82E968CC;
	sub_82E942D0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82e96928
	if (cr6.eq) goto loc_82E96928;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x82e96928
	if (cr6.eq) goto loc_82E96928;
	// subf. r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x82e968fc
	if (!cr0.eq) goto loc_82E968FC;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82E968FC;
	sub_831CC188(ctx, base);
loc_82E968FC:
	// lbz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stb r11,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r11.u8);
	// bl 0x82467848
	ctx.lr = 0x82E9690C;
	sub_82467848(ctx, base);
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82e9691c
	if (cr6.eq) goto loc_82E9691C;
	// bl 0x8259b510
	ctx.lr = 0x82E9691C;
	sub_8259B510(ctx, base);
loc_82E9691C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82E96928:
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x82e96948
	if (cr6.lt) goto loc_82E96948;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x8257fb60
	ctx.lr = 0x82E96940;
	sub_8257FB60(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
loc_82E96948:
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82e96958
	if (cr6.eq) goto loc_82E96958;
	// bl 0x8259b510
	ctx.lr = 0x82E96958;
	sub_8259B510(ctx, base);
loc_82E96958:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E96964"))) PPC_WEAK_FUNC(sub_82E96964);
PPC_FUNC_IMPL(__imp__sub_82E96964) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E96968"))) PPC_WEAK_FUNC(sub_82E96968);
PPC_FUNC_IMPL(__imp__sub_82E96968) {
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
	// addi r4,r3,80
	ctx.r4.s64 = ctx.r3.s64 + 80;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82b80748
	ctx.lr = 0x82E96984;
	sub_82B80748(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82e969b8
	if (!cr6.eq) goto loc_82E969B8;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82e969a0
	if (cr6.eq) goto loc_82E969A0;
	// bl 0x8259b510
	ctx.lr = 0x82E969A0;
	sub_8259B510(ctx, base);
loc_82E969A0:
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
loc_82E969B8:
	// bl 0x82e94348
	ctx.lr = 0x82E969BC;
	sub_82E94348(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82e969d4
	if (cr6.eq) goto loc_82E969D4;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x8259b510
	ctx.lr = 0x82E969D4;
	sub_8259B510(ctx, base);
loc_82E969D4:
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

__attribute__((alias("__imp__sub_82E969EC"))) PPC_WEAK_FUNC(sub_82E969EC);
PPC_FUNC_IMPL(__imp__sub_82E969EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E969F0"))) PPC_WEAK_FUNC(sub_82E969F0);
PPC_FUNC_IMPL(__imp__sub_82E969F0) {
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
	// addi r4,r3,80
	ctx.r4.s64 = ctx.r3.s64 + 80;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82b80748
	ctx.lr = 0x82E96A0C;
	sub_82B80748(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82e96a40
	if (!cr6.eq) goto loc_82E96A40;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82e96a28
	if (cr6.eq) goto loc_82E96A28;
	// bl 0x8259b510
	ctx.lr = 0x82E96A28;
	sub_8259B510(ctx, base);
loc_82E96A28:
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
loc_82E96A40:
	// bl 0x82e94360
	ctx.lr = 0x82E96A44;
	sub_82E94360(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82e96a5c
	if (cr6.eq) goto loc_82E96A5C;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x8259b510
	ctx.lr = 0x82E96A5C;
	sub_8259B510(ctx, base);
loc_82E96A5C:
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

__attribute__((alias("__imp__sub_82E96A74"))) PPC_WEAK_FUNC(sub_82E96A74);
PPC_FUNC_IMPL(__imp__sub_82E96A74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E96A78"))) PPC_WEAK_FUNC(sub_82E96A78);
PPC_FUNC_IMPL(__imp__sub_82E96A78) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82E96A80;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// cmplwi cr6,r6,500
	cr6.compare<uint32_t>(ctx.r6.u32, 500, xer);
	// bgt cr6,0x82e96ac4
	if (cr6.gt) goto loc_82E96AC4;
	// addi r4,r3,80
	ctx.r4.s64 = ctx.r3.s64 + 80;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82b80748
	ctx.lr = 0x82E96AA8;
	sub_82B80748(ctx, base);
	// lwz r29,80(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// bne cr6,0x82e96ad0
	if (!cr6.eq) goto loc_82E96AD0;
loc_82E96AB4:
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
loc_82E96AB8:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82e96ac4
	if (cr6.eq) goto loc_82E96AC4;
	// bl 0x8259b510
	ctx.lr = 0x82E96AC4;
	sub_8259B510(ctx, base);
loc_82E96AC4:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_82E96AD0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82e96538
	ctx.lr = 0x82E96AD8;
	sub_82E96538(ctx, base);
	// cmpwi cr6,r3,4
	cr6.compare<int32_t>(ctx.r3.s32, 4, xer);
	// bne cr6,0x82e96ab4
	if (!cr6.eq) goto loc_82E96AB4;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82e94300
	ctx.lr = 0x82E96AF4;
	sub_82E94300(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// beq cr6,0x82e96ab8
	if (cr6.eq) goto loc_82E96AB8;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82e96b0c
	if (cr6.eq) goto loc_82E96B0C;
	// bl 0x8259b510
	ctx.lr = 0x82E96B0C;
	sub_8259B510(ctx, base);
loc_82E96B0C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E96B18"))) PPC_WEAK_FUNC(sub_82E96B18);
PPC_FUNC_IMPL(__imp__sub_82E96B18) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82E96B20;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r31,r7
	ctx.r31.u64 = ctx.r7.u64;
	// cmplwi cr6,r7,500
	cr6.compare<uint32_t>(ctx.r7.u32, 500, xer);
	// bgt cr6,0x82e96b68
	if (cr6.gt) goto loc_82E96B68;
	// addi r4,r3,80
	ctx.r4.s64 = ctx.r3.s64 + 80;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82b80748
	ctx.lr = 0x82E96B4C;
	sub_82B80748(ctx, base);
	// lwz r26,80(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(ctx.r26.u32, 0, xer);
	// bne cr6,0x82e96b74
	if (!cr6.eq) goto loc_82E96B74;
loc_82E96B58:
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
loc_82E96B5C:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82e96b68
	if (cr6.eq) goto loc_82E96B68;
	// bl 0x8259b510
	ctx.lr = 0x82E96B68;
	sub_8259B510(ctx, base);
loc_82E96B68:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_82E96B74:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82e96538
	ctx.lr = 0x82E96B7C;
	sub_82E96538(ctx, base);
	// cmpwi cr6,r3,4
	cr6.compare<int32_t>(ctx.r3.s32, 4, xer);
	// bne cr6,0x82e96b58
	if (!cr6.eq) goto loc_82E96B58;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82e94318
	ctx.lr = 0x82E96B9C;
	sub_82E94318(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// beq cr6,0x82e96b5c
	if (cr6.eq) goto loc_82E96B5C;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82e96bb4
	if (cr6.eq) goto loc_82E96BB4;
	// bl 0x8259b510
	ctx.lr = 0x82E96BB4;
	sub_8259B510(ctx, base);
loc_82E96BB4:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E96BC0"))) PPC_WEAK_FUNC(sub_82E96BC0);
PPC_FUNC_IMPL(__imp__sub_82E96BC0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82E96BC8;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r3,80
	ctx.r4.s64 = ctx.r3.s64 + 80;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// bl 0x82b80748
	ctx.lr = 0x82E96BEC;
	sub_82B80748(ctx, base);
	// lwz r26,80(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(ctx.r26.u32, 0, xer);
	// bne cr6,0x82e96c14
	if (!cr6.eq) goto loc_82E96C14;
loc_82E96BF8:
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82e96c08
	if (cr6.eq) goto loc_82E96C08;
	// bl 0x8259b510
	ctx.lr = 0x82E96C08;
	sub_8259B510(ctx, base);
loc_82E96C08:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_82E96C14:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e96538
	ctx.lr = 0x82E96C1C;
	sub_82E96538(ctx, base);
	// cmpwi cr6,r3,6
	cr6.compare<int32_t>(ctx.r3.s32, 6, xer);
	// beq cr6,0x82e96bf8
	if (cr6.eq) goto loc_82E96BF8;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82e94330
	ctx.lr = 0x82E96C3C;
	sub_82E94330(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82e96c54
	if (cr6.eq) goto loc_82E96C54;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x8259b510
	ctx.lr = 0x82E96C54;
	sub_8259B510(ctx, base);
loc_82E96C54:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E96C60"))) PPC_WEAK_FUNC(sub_82E96C60);
PPC_FUNC_IMPL(__imp__sub_82E96C60) {
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
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r9,r11,-22208
	ctx.r9.s64 = ctx.r11.s64 + -22208;
	// lwz r10,-22208(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -22208);
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// beq cr6,0x82e96ca4
	if (cr6.eq) goto loc_82E96CA4;
	// addi r3,r11,64
	ctx.r3.s64 = ctx.r11.s64 + 64;
	// bl 0x825749e0
	ctx.lr = 0x82E96CA4;
	sub_825749E0(ctx, base);
loc_82E96CA4:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82b80748
	ctx.lr = 0x82E96CB0;
	sub_82B80748(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x82e96cdc
	if (cr6.eq) goto loc_82E96CDC;
	// addi r3,r31,64
	ctx.r3.s64 = ctx.r31.s64 + 64;
	// bl 0x82574a08
	ctx.lr = 0x82E96CC0;
	sub_82574A08(ctx, base);
	// cmplwi cr6,r3,1
	cr6.compare<uint32_t>(ctx.r3.u32, 1, xer);
	// bne cr6,0x82e96cdc
	if (!cr6.eq) goto loc_82E96CDC;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82E96CDC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82E96CDC:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82e96cf4
	if (!cr6.eq) goto loc_82E96CF4;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// b 0x82e96dc0
	goto loc_82E96DC0;
loc_82E96CF4:
	// lwz r31,4(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// beq cr6,0x82e96d14
	if (cr6.eq) goto loc_82E96D14;
	// addi r3,r31,64
	ctx.r3.s64 = ctx.r31.s64 + 64;
	// bl 0x825749e0
	ctx.lr = 0x82E96D14;
	sub_825749E0(ctx, base);
loc_82E96D14:
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82b80748
	ctx.lr = 0x82E96D20;
	sub_82B80748(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x82e96d4c
	if (cr6.eq) goto loc_82E96D4C;
	// addi r3,r31,64
	ctx.r3.s64 = ctx.r31.s64 + 64;
	// bl 0x82574a08
	ctx.lr = 0x82E96D30;
	sub_82574A08(ctx, base);
	// cmplwi cr6,r3,1
	cr6.compare<uint32_t>(ctx.r3.u32, 1, xer);
	// bne cr6,0x82e96d4c
	if (!cr6.eq) goto loc_82E96D4C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82E96D4C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82E96D4C:
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82e96d64
	if (!cr6.eq) goto loc_82E96D64;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// b 0x82e96db0
	goto loc_82E96DB0;
loc_82E96D64:
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// bl 0x82b64b88
	ctx.lr = 0x82E96D7C;
	sub_82B64B88(ctx, base);
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x82e96d98
	if (!cr6.eq) goto loc_82E96D98;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// b 0x82e96da0
	goto loc_82E96DA0;
loc_82E96D98:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82dad428
	ctx.lr = 0x82E96DA0;
	sub_82DAD428(ctx, base);
loc_82E96DA0:
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82e96db0
	if (cr6.eq) goto loc_82E96DB0;
	// bl 0x8259b510
	ctx.lr = 0x82E96DB0;
	sub_8259B510(ctx, base);
loc_82E96DB0:
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82e96dc0
	if (cr6.eq) goto loc_82E96DC0;
	// bl 0x8259b510
	ctx.lr = 0x82E96DC0;
	sub_8259B510(ctx, base);
loc_82E96DC0:
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82e96dd0
	if (cr6.eq) goto loc_82E96DD0;
	// bl 0x8259b510
	ctx.lr = 0x82E96DD0;
	sub_8259B510(ctx, base);
loc_82E96DD0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
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

__attribute__((alias("__imp__sub_82E96DEC"))) PPC_WEAK_FUNC(sub_82E96DEC);
PPC_FUNC_IMPL(__imp__sub_82E96DEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E96DF0"))) PPC_WEAK_FUNC(sub_82E96DF0);
PPC_FUNC_IMPL(__imp__sub_82E96DF0) {
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
	// lbz r8,0(r4)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// addi r10,r3,8
	ctx.r10.s64 = ctx.r3.s64 + 8;
	// addi r9,r4,8
	ctx.r9.s64 = ctx.r4.s64 + 8;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// stb r8,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r8.u8);
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// lwz r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r3,r10,8
	ctx.r3.s64 = ctx.r10.s64 + 8;
	// stw r7,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r7.u32);
	// addi r4,r9,8
	ctx.r4.s64 = ctx.r9.s64 + 8;
	// lbz r6,16(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 16);
	// stb r6,16(r31)
	PPC_STORE_U8(ctx.r31.u32 + 16, ctx.r6.u8);
	// bl 0x82e95f20
	ctx.lr = 0x82E96E3C;
	sub_82E95F20(ctx, base);
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

__attribute__((alias("__imp__sub_82E96E54"))) PPC_WEAK_FUNC(sub_82E96E54);
PPC_FUNC_IMPL(__imp__sub_82E96E54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E96E58"))) PPC_WEAK_FUNC(sub_82E96E58);
PPC_FUNC_IMPL(__imp__sub_82E96E58) {
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
	// stwu r1,-656(r1)
	ea = -656 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// addi r11,r5,8
	ctx.r11.s64 = ctx.r5.s64 + 8;
	// lbz r9,8(r5)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r5.u32 + 8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,8
	ctx.r4.s64 = ctx.r11.s64 + 8;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stb r9,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r9.u8);
	// bl 0x82e95f20
	ctx.lr = 0x82E96E94;
	sub_82E95F20(ctx, base);
	// lbz r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// lwz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r11,r31,8
	ctx.r11.s64 = ctx.r31.s64 + 8;
	// lbz r6,88(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 88);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stb r8,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r8.u8);
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// stw r7,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r7.u32);
	// stb r6,16(r31)
	PPC_STORE_U8(ctx.r31.u32 + 16, ctx.r6.u8);
	// bl 0x82e95f20
	ctx.lr = 0x82E96EC0;
	sub_82E95F20(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,656
	ctx.r1.s64 = ctx.r1.s64 + 656;
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

__attribute__((alias("__imp__sub_82E96EDC"))) PPC_WEAK_FUNC(sub_82E96EDC);
PPC_FUNC_IMPL(__imp__sub_82E96EDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E96EE0"))) PPC_WEAK_FUNC(sub_82E96EE0);
PPC_FUNC_IMPL(__imp__sub_82E96EE0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82E96EE8;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,117
	ctx.r10.s64 = 7667712;
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// ori r9,r10,1871
	ctx.r9.u64 = ctx.r10.u64 | 1871;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// blt cr6,0x82e96f38
	if (cr6.lt) goto loc_82E96F38;
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// li r10,2
	ctx.r10.s64 = 2;
	// addi r9,r11,32068
	ctx.r9.s64 = ctx.r11.s64 + 32068;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// mr r4,r7
	ctx.r4.u64 = ctx.r7.u64;
	// stw r9,40(r7)
	PPC_STORE_U32(ctx.r7.u32 + 40, ctx.r9.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x82E96F2C;
	sub_825952B8(ctx, base);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// addi r3,r8,12808
	ctx.r3.s64 = ctx.r8.s64 + 12808;
	// bl 0x831cc150
	ctx.lr = 0x82E96F38;
	sub_831CC150(ctx, base);
loc_82E96F38:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// stw r6,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r6.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplw cr6,r6,r11
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r11.u32, xer);
	// bne cr6,0x82e96f68
	if (!cr6.eq) goto loc_82E96F68;
	// stw r27,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r27.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r27,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r27.u32);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r27,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r27.u32);
	// b 0x82e96fa8
	goto loc_82E96FA8;
loc_82E96F68:
	// clrlwi r11,r5,24
	ctx.r11.u64 = ctx.r5.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82e96f90
	if (cr6.eq) goto loc_82E96F90;
	// stw r27,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r27.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r6,r10
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r10.u32, xer);
	// bne cr6,0x82e96fa8
	if (!cr6.eq) goto loc_82E96FA8;
	// stw r27,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r27.u32);
	// b 0x82e96fa8
	goto loc_82E96FA8;
loc_82E96F90:
	// stw r27,8(r6)
	PPC_STORE_U32(ctx.r6.u32 + 8, ctx.r27.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplw cr6,r6,r10
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r10.u32, xer);
	// bne cr6,0x82e96fa8
	if (!cr6.eq) goto loc_82E96FA8;
	// stw r27,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r27.u32);
loc_82E96FA8:
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
	// li r29,1
	ctx.r29.s64 = 1;
	// lbz r10,576(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 576);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82e970cc
	if (!cr6.eq) goto loc_82E970CC;
	// li r28,0
	ctx.r28.s64 = 0;
loc_82E96FC4:
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// bne cr6,0x82e9704c
	if (!cr6.eq) goto loc_82E9704C;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lbz r10,576(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 576);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82e9700c
	if (!cr6.eq) goto loc_82E9700C;
	// rotlwi r10,r4,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r4.u32, 0);
	// stb r29,576(r10)
	PPC_STORE_U8(ctx.r10.u32 + 576, ctx.r29.u8);
	// stb r29,576(r11)
	PPC_STORE_U8(ctx.r11.u32 + 576, ctx.r29.u8);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stb r28,576(r8)
	PPC_STORE_U8(ctx.r8.u32 + 576, ctx.r28.u8);
	// lwz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r31,4(r7)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// b 0x82e970bc
	goto loc_82E970BC;
loc_82E9700C:
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// bne cr6,0x82e97024
	if (!cr6.eq) goto loc_82E97024;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x82e96348
	ctx.lr = 0x82E97024;
	sub_82E96348(ctx, base);
loc_82E97024:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stb r29,576(r11)
	PPC_STORE_U8(ctx.r11.u32 + 576, ctx.r29.u8);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stb r28,576(r9)
	PPC_STORE_U8(ctx.r9.u32 + 576, ctx.r28.u8);
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r4,4(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// bl 0x82e95ea8
	ctx.lr = 0x82E97048;
	sub_82E95EA8(ctx, base);
	// b 0x82e970bc
	goto loc_82E970BC;
loc_82E9704C:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r10,576(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 576);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82e97080
	if (!cr6.eq) goto loc_82E97080;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stb r29,576(r10)
	PPC_STORE_U8(ctx.r10.u32 + 576, ctx.r29.u8);
	// stb r29,576(r11)
	PPC_STORE_U8(ctx.r11.u32 + 576, ctx.r29.u8);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stb r28,576(r8)
	PPC_STORE_U8(ctx.r8.u32 + 576, ctx.r28.u8);
	// lwz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r31,4(r7)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// b 0x82e970bc
	goto loc_82E970BC;
loc_82E97080:
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// bne cr6,0x82e97098
	if (!cr6.eq) goto loc_82E97098;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x82e95ea8
	ctx.lr = 0x82E97098;
	sub_82E95EA8(ctx, base);
loc_82E97098:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stb r29,576(r11)
	PPC_STORE_U8(ctx.r11.u32 + 576, ctx.r29.u8);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stb r28,576(r9)
	PPC_STORE_U8(ctx.r9.u32 + 576, ctx.r28.u8);
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r4,4(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// bl 0x82e96348
	ctx.lr = 0x82E970BC;
	sub_82E96348(ctx, base);
loc_82E970BC:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lbz r10,576(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 576);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82e96fc4
	if (cr6.eq) goto loc_82E96FC4;
loc_82E970CC:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// stw r27,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r27.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stb r29,576(r10)
	PPC_STORE_U8(ctx.r10.u32 + 576, ctx.r29.u8);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E970E8"))) PPC_WEAK_FUNC(sub_82E970E8);
PPC_FUNC_IMPL(__imp__sub_82E970E8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82E970F0;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x82e96640
	ctx.lr = 0x82E97104;
	sub_82E96640(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82e9711c
	if (!cr6.eq) goto loc_82E9711C;
loc_82E97110:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82E9711C:
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplw cr6,r30,r4
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r4.u32, xer);
	// beq cr6,0x82e97144
	if (cr6.eq) goto loc_82E97144;
	// subf r29,r4,r4
	ctx.r29.s64 = ctx.r4.s64 - ctx.r4.s64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x831ce420
	ctx.lr = 0x82E9713C;
	sub_831CE420(ctx, base);
	// add r11,r29,r30
	ctx.r11.u64 = ctx.r29.u64 + ctx.r30.u64;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_82E97144:
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// blt cr6,0x82e971d4
	if (cr6.lt) goto loc_82E971D4;
	// bne cr6,0x82e97110
	if (!cr6.eq) goto loc_82E97110;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82e96760
	ctx.lr = 0x82E97160;
	sub_82E96760(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82e97110
	if (cr6.eq) goto loc_82E97110;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82e967f0
	ctx.lr = 0x82E97178;
	sub_82E967F0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82e97110
	if (cr6.eq) goto loc_82E97110;
	// lwz r30,4(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x82e96438
	ctx.lr = 0x82E9719C;
	sub_82E96438(ctx, base);
	// lwz r29,0(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r29,r30
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r30.u32, xer);
	// beq cr6,0x82e97204
	if (cr6.eq) goto loc_82E97204;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// subf r30,r30,r11
	ctx.r30.s64 = ctx.r11.s64 - ctx.r30.s64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x831ce420
	ctx.lr = 0x82E971C0;
	sub_831CE420(ctx, base);
	// add r10,r30,r29
	ctx.r10.u64 = ctx.r30.u64 + ctx.r29.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82E971D4:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82e96880
	ctx.lr = 0x82E971E0;
	sub_82E96880(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82e97110
	if (cr6.eq) goto loc_82E97110;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x833ea8a8
	ctx.lr = 0x82E971F8;
	sub_833EA8A8(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x833eab80
	ctx.lr = 0x82E97204;
	sub_833EAB80(ctx, base);
loc_82E97204:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E97210"))) PPC_WEAK_FUNC(sub_82E97210);
PPC_FUNC_IMPL(__imp__sub_82E97210) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x82E97218;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,577(r5)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r5.u32 + 577);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// stw r5,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r5.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82e97240
	if (cr6.eq) goto loc_82E97240;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,11564
	ctx.r3.s64 = ctx.r11.s64 + 11564;
	// bl 0x831cc188
	ctx.lr = 0x82E97240;
	sub_831CC188(ctx, base);
loc_82E97240:
	// addi r3,r1,196
	ctx.r3.s64 = ctx.r1.s64 + 196;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// bl 0x82e95d70
	ctx.lr = 0x82E9724C;
	sub_82E95D70(ctx, base);
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// lbz r10,577(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 577);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// lwz r25,196(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// beq cr6,0x82e97268
	if (cr6.eq) goto loc_82E97268;
	// lwz r28,8(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// b 0x82e9728c
	goto loc_82E9728C;
loc_82E97268:
	// lwz r10,8(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// lbz r9,577(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 577);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82e97280
	if (cr6.eq) goto loc_82E97280;
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
	// b 0x82e9728c
	goto loc_82E9728C;
loc_82E97280:
	// lwz r28,8(r25)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	// cmplw cr6,r25,r26
	cr6.compare<uint32_t>(ctx.r25.u32, ctx.r26.u32, xer);
	// bne cr6,0x82e97378
	if (!cr6.eq) goto loc_82E97378;
loc_82E9728C:
	// lbz r11,577(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 577);
	// lwz r31,4(r26)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82e972a0
	if (!cr6.eq) goto loc_82E972A0;
	// stw r31,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r31.u32);
loc_82E972A0:
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r10,r26
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r26.u32, xer);
	// bne cr6,0x82e972b8
	if (!cr6.eq) goto loc_82E972B8;
	// stw r28,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r28.u32);
	// b 0x82e972d0
	goto loc_82E972D0;
loc_82E972B8:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplw cr6,r11,r26
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, xer);
	// bne cr6,0x82e972cc
	if (!cr6.eq) goto loc_82E972CC;
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
	// b 0x82e972d0
	goto loc_82E972D0;
loc_82E972CC:
	// stw r28,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r28.u32);
loc_82E972D0:
	// lwz r9,4(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplw cr6,r11,r26
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, xer);
	// bne cr6,0x82e97320
	if (!cr6.eq) goto loc_82E97320;
	// lbz r11,577(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 577);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82e972f4
	if (cr6.eq) goto loc_82E972F4;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// b 0x82e9731c
	goto loc_82E9731C;
loc_82E972F4:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// lbz r8,577(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 577);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x82e9731c
	if (!cr6.eq) goto loc_82E9731C;
loc_82E97308:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r8,577(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 577);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x82e97308
	if (cr6.eq) goto loc_82E97308;
loc_82E9731C:
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
loc_82E97320:
	// lwz r9,4(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// cmplw cr6,r11,r26
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, xer);
	// bne cr6,0x82e9740c
	if (!cr6.eq) goto loc_82E9740C;
	// lbz r11,577(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 577);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82e97348
	if (cr6.eq) goto loc_82E97348;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// stw r31,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r31.u32);
	// b 0x82e9740c
	goto loc_82E9740C;
loc_82E97348:
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// lbz r8,577(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 577);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x82e97370
	if (!cr6.eq) goto loc_82E97370;
loc_82E9735C:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lbz r8,577(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 577);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x82e9735c
	if (cr6.eq) goto loc_82E9735C;
loc_82E97370:
	// stw r10,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r10.u32);
	// b 0x82e9740c
	goto loc_82E9740C;
loc_82E97378:
	// stw r25,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r25.u32);
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// stw r11,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r11.u32);
	// lwz r10,8(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// cmplw cr6,r25,r10
	cr6.compare<uint32_t>(ctx.r25.u32, ctx.r10.u32, xer);
	// bne cr6,0x82e97398
	if (!cr6.eq) goto loc_82E97398;
	// mr r31,r25
	ctx.r31.u64 = ctx.r25.u64;
	// b 0x82e973c0
	goto loc_82E973C0;
loc_82E97398:
	// lbz r11,577(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 577);
	// lwz r31,4(r25)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82e973ac
	if (!cr6.eq) goto loc_82E973AC;
	// stw r31,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r31.u32);
loc_82E973AC:
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
	// lwz r11,8(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// stw r11,8(r25)
	PPC_STORE_U32(ctx.r25.u32 + 8, ctx.r11.u32);
	// lwz r10,8(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// stw r25,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r25.u32);
loc_82E973C0:
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r10,r26
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r26.u32, xer);
	// bne cr6,0x82e973d8
	if (!cr6.eq) goto loc_82E973D8;
	// stw r25,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r25.u32);
	// b 0x82e973f4
	goto loc_82E973F4;
loc_82E973D8:
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r26
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r26.u32, xer);
	// bne cr6,0x82e973f0
	if (!cr6.eq) goto loc_82E973F0;
	// stw r25,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r25.u32);
	// b 0x82e973f4
	goto loc_82E973F4;
loc_82E973F0:
	// stw r25,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r25.u32);
loc_82E973F4:
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// stw r11,4(r25)
	PPC_STORE_U32(ctx.r25.u32 + 4, ctx.r11.u32);
	// lbz r9,576(r26)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r26.u32 + 576);
	// lbz r10,576(r25)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r25.u32 + 576);
	// stb r9,576(r25)
	PPC_STORE_U8(ctx.r25.u32 + 576, ctx.r9.u8);
	// stb r10,576(r26)
	PPC_STORE_U8(ctx.r26.u32 + 576, ctx.r10.u8);
loc_82E9740C:
	// lbz r11,576(r26)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + 576);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x82e975a4
	if (!cr6.eq) goto loc_82E975A4;
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// li r29,1
	ctx.r29.s64 = 1;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r28,r10
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r10.u32, xer);
	// beq cr6,0x82e975a0
	if (cr6.eq) goto loc_82E975A0;
	// li r30,0
	ctx.r30.s64 = 0;
loc_82E97430:
	// lbz r11,576(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 576);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x82e975a0
	if (!cr6.eq) goto loc_82E975A0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplw cr6,r28,r11
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, xer);
	// bne cr6,0x82e974e8
	if (!cr6.eq) goto loc_82E974E8;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lbz r10,576(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 576);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82e97470
	if (!cr6.eq) goto loc_82E97470;
	// stb r29,576(r11)
	PPC_STORE_U8(ctx.r11.u32 + 576, ctx.r29.u8);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stb r30,576(r31)
	PPC_STORE_U8(ctx.r31.u32 + 576, ctx.r30.u8);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82e96348
	ctx.lr = 0x82E9746C;
	sub_82E96348(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
loc_82E97470:
	// lbz r10,577(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 577);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82e9753c
	if (!cr6.eq) goto loc_82E9753C;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r9,576(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 576);
	// cmplwi cr6,r9,1
	cr6.compare<uint32_t>(ctx.r9.u32, 1, xer);
	// bne cr6,0x82e9749c
	if (!cr6.eq) goto loc_82E9749C;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lbz r8,576(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 576);
	// cmplwi cr6,r8,1
	cr6.compare<uint32_t>(ctx.r8.u32, 1, xer);
	// beq cr6,0x82e97538
	if (cr6.eq) goto loc_82E97538;
loc_82E9749C:
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lbz r8,576(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 576);
	// cmplwi cr6,r8,1
	cr6.compare<uint32_t>(ctx.r8.u32, 1, xer);
	// bne cr6,0x82e974c4
	if (!cr6.eq) goto loc_82E974C4;
	// stb r29,576(r10)
	PPC_STORE_U8(ctx.r10.u32 + 576, ctx.r29.u8);
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// stb r30,576(r11)
	PPC_STORE_U8(ctx.r11.u32 + 576, ctx.r30.u8);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82e95ea8
	ctx.lr = 0x82E974C0;
	sub_82E95EA8(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
loc_82E974C4:
	// lbz r10,576(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 576);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stb r10,576(r11)
	PPC_STORE_U8(ctx.r11.u32 + 576, ctx.r10.u8);
	// stb r29,576(r31)
	PPC_STORE_U8(ctx.r31.u32 + 576, ctx.r29.u8);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stb r29,576(r9)
	PPC_STORE_U8(ctx.r9.u32 + 576, ctx.r29.u8);
	// bl 0x82e96348
	ctx.lr = 0x82E974E4;
	sub_82E96348(ctx, base);
	// b 0x82e975a0
	goto loc_82E975A0;
loc_82E974E8:
	// lbz r10,576(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 576);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82e9750c
	if (!cr6.eq) goto loc_82E9750C;
	// stb r29,576(r11)
	PPC_STORE_U8(ctx.r11.u32 + 576, ctx.r29.u8);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stb r30,576(r31)
	PPC_STORE_U8(ctx.r31.u32 + 576, ctx.r30.u8);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82e95ea8
	ctx.lr = 0x82E97508;
	sub_82E95EA8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
loc_82E9750C:
	// lbz r10,577(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 577);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82e9753c
	if (!cr6.eq) goto loc_82E9753C;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lbz r9,576(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 576);
	// cmplwi cr6,r9,1
	cr6.compare<uint32_t>(ctx.r9.u32, 1, xer);
	// bne cr6,0x82e97558
	if (!cr6.eq) goto loc_82E97558;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r8,576(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 576);
	// cmplwi cr6,r8,1
	cr6.compare<uint32_t>(ctx.r8.u32, 1, xer);
	// bne cr6,0x82e97558
	if (!cr6.eq) goto loc_82E97558;
loc_82E97538:
	// stb r30,576(r11)
	PPC_STORE_U8(ctx.r11.u32 + 576, ctx.r30.u8);
loc_82E9753C:
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// mr r28,r31
	ctx.r28.u64 = ctx.r31.u64;
	// lwz r31,4(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r28,r10
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r10.u32, xer);
	// bne cr6,0x82e97430
	if (!cr6.eq) goto loc_82E97430;
	// b 0x82e975a0
	goto loc_82E975A0;
loc_82E97558:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r8,576(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 576);
	// cmplwi cr6,r8,1
	cr6.compare<uint32_t>(ctx.r8.u32, 1, xer);
	// bne cr6,0x82e97580
	if (!cr6.eq) goto loc_82E97580;
	// stb r29,576(r10)
	PPC_STORE_U8(ctx.r10.u32 + 576, ctx.r29.u8);
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// stb r30,576(r11)
	PPC_STORE_U8(ctx.r11.u32 + 576, ctx.r30.u8);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82e96348
	ctx.lr = 0x82E9757C;
	sub_82E96348(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
loc_82E97580:
	// lbz r10,576(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 576);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stb r10,576(r11)
	PPC_STORE_U8(ctx.r11.u32 + 576, ctx.r10.u8);
	// stb r29,576(r31)
	PPC_STORE_U8(ctx.r31.u32 + 576, ctx.r29.u8);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stb r29,576(r9)
	PPC_STORE_U8(ctx.r9.u32 + 576, ctx.r29.u8);
	// bl 0x82e95ea8
	ctx.lr = 0x82E975A0;
	sub_82E95EA8(ctx, base);
loc_82E975A0:
	// stb r29,576(r28)
	PPC_STORE_U8(ctx.r28.u32 + 576, ctx.r29.u8);
loc_82E975A4:
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// li r10,2
	ctx.r10.s64 = 2;
	// addi r9,r11,32068
	ctx.r9.s64 = ctx.r11.s64 + 32068;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// stw r9,40(r26)
	PPC_STORE_U32(ctx.r26.u32 + 40, ctx.r9.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bl 0x825952b8
	ctx.lr = 0x82E975C4;
	sub_825952B8(ctx, base);
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82e975d8
	if (cr6.eq) goto loc_82E975D8;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r11.u32);
loc_82E975D8:
	// stw r25,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r25.u32);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E975E8"))) PPC_WEAK_FUNC(sub_82E975E8);
PPC_FUNC_IMPL(__imp__sub_82E975E8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82E975F0;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,577(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 577);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82e9764c
	if (!cr6.eq) goto loc_82E9764C;
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// li r27,2
	ctx.r27.s64 = 2;
	// addi r29,r11,32068
	ctx.r29.s64 = ctx.r11.s64 + 32068;
loc_82E97618:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x82e975e8
	ctx.lr = 0x82E97624;
	sub_82E975E8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r31,0(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r29,40(r30)
	PPC_STORE_U32(ctx.r30.u32 + 40, ctx.r29.u32);
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// bl 0x825952b8
	ctx.lr = 0x82E9763C;
	sub_825952B8(ctx, base);
	// lbz r11,577(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 577);
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82e97618
	if (cr6.eq) goto loc_82E97618;
loc_82E9764C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E97654"))) PPC_WEAK_FUNC(sub_82E97654);
PPC_FUNC_IMPL(__imp__sub_82E97654) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E97658"))) PPC_WEAK_FUNC(sub_82E97658);
PPC_FUNC_IMPL(__imp__sub_82E97658) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x82E97660;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,4(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// li r25,1
	ctx.r25.s64 = 1;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r31,r25
	ctx.r31.u64 = ctx.r25.u64;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lbz r10,577(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 577);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82e976e4
	if (!cr6.eq) goto loc_82E976E4;
	// lbz r9,16(r5)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r5.u32 + 16);
	// clrlwi r7,r6,24
	ctx.r7.u64 = ctx.r6.u32 & 0xFF;
	// li r8,-1
	ctx.r8.s64 = -1;
loc_82E97698:
	// lbz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 16);
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82e976b4
	if (cr6.eq) goto loc_82E976B4;
	// subfc r10,r9,r10
	xer.ca = ctx.r10.u32 >= ctx.r9.u32;
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// subfze r31,r8
	temp.u8 = ~ctx.r8.u32 + xer.ca < xer.ca;
	ctx.r31.u64 = ~ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// b 0x82e976c0
	goto loc_82E976C0;
loc_82E976B4:
	// subfc r6,r10,r9
	xer.ca = ctx.r9.u32 >= ctx.r10.u32;
	ctx.r6.s64 = ctx.r9.s64 - ctx.r10.s64;
	// subfe r4,r5,r5
	temp.u8 = (~ctx.r5.u32 + ctx.r5.u32 < ~ctx.r5.u32) | (~ctx.r5.u32 + ctx.r5.u32 + xer.ca < xer.ca);
	ctx.r4.u64 = ~ctx.r5.u64 + ctx.r5.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r31,r4,31
	ctx.r31.u64 = ctx.r4.u32 & 0x1;
loc_82E976C0:
	// clrlwi r10,r31,24
	ctx.r10.u64 = ctx.r31.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82e976d4
	if (cr6.eq) goto loc_82E976D4;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x82e976d8
	goto loc_82E976D8;
loc_82E976D4:
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
loc_82E976D8:
	// lbz r10,577(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 577);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82e97698
	if (cr6.eq) goto loc_82E97698;
loc_82E976E4:
	// clrlwi r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82e97744
	if (cr6.eq) goto loc_82E97744;
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r30,r10
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, xer);
	// bne cr6,0x82e9773c
	if (!cr6.eq) goto loc_82E9773C;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x82e96ee0
	ctx.lr = 0x82E97720;
	sub_82E96EE0(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stb r25,4(r28)
	PPC_STORE_U8(ctx.r28.u32 + 4, ctx.r25.u8);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r10,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r10.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_82E9773C:
	// bl 0x82e95e00
	ctx.lr = 0x82E97740;
	sub_82E95E00(ctx, base);
	// lwz r29,80(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82E97744:
	// lbz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 16);
	// lbz r10,16(r27)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r27.u32 + 16);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x82e97788
	if (!cr6.lt) goto loc_82E97788;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e96ee0
	ctx.lr = 0x82E9776C;
	sub_82E96EE0(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stb r25,4(r28)
	PPC_STORE_U8(ctx.r28.u32 + 4, ctx.r25.u8);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r10,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r10.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_82E97788:
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// li r10,2
	ctx.r10.s64 = 2;
	// addi r9,r11,32068
	ctx.r9.s64 = ctx.r11.s64 + 32068;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// stw r9,40(r27)
	PPC_STORE_U32(ctx.r27.u32 + 40, ctx.r9.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x825952b8
	ctx.lr = 0x82E977A8;
	sub_825952B8(ctx, base);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r29,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r29.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stb r8,4(r28)
	PPC_STORE_U8(ctx.r28.u32 + 4, ctx.r8.u8);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E977C0"))) PPC_WEAK_FUNC(sub_82E977C0);
PPC_FUNC_IMPL(__imp__sub_82E977C0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82E977C8;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stb r4,175(r1)
	PPC_STORE_U8(ctx.r1.u32 + 175, ctx.r4.u8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r3,80
	ctx.r4.s64 = ctx.r3.s64 + 80;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82b80748
	ctx.lr = 0x82E977E4;
	sub_82B80748(ctx, base);
	// lwz r29,88(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// bne cr6,0x82e9780c
	if (!cr6.eq) goto loc_82E9780C;
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82e97800
	if (cr6.eq) goto loc_82E97800;
	// bl 0x8259b510
	ctx.lr = 0x82E97800;
	sub_8259B510(ctx, base);
loc_82E97800:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82E9780C:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e965b0
	ctx.lr = 0x82E97818;
	sub_82E965B0(ctx, base);
	// addi r11,r3,-6
	ctx.r11.s64 = ctx.r3.s64 + -6;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r28,r10,27,31,31
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// bne cr6,0x82e97848
	if (!cr6.eq) goto loc_82E97848;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82e94bc8
	ctx.lr = 0x82E97838;
	sub_82E94BC8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82e97848
	if (cr6.eq) goto loc_82E97848;
	// li r28,1
	ctx.r28.s64 = 1;
loc_82E97848:
	// clrlwi r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82e97880
	if (cr6.eq) goto loc_82E97880;
	// addi r5,r1,175
	ctx.r5.s64 = ctx.r1.s64 + 175;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e964b0
	ctx.lr = 0x82E97864;
	sub_82E964B0(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r5,r11
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r11.u32, xer);
	// beq cr6,0x82e97880
	if (cr6.eq) goto loc_82E97880;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e97210
	ctx.lr = 0x82E97880;
	sub_82E97210(ctx, base);
loc_82E97880:
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82e97890
	if (cr6.eq) goto loc_82E97890;
	// bl 0x8259b510
	ctx.lr = 0x82E97890;
	sub_8259B510(ctx, base);
loc_82E97890:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E9789C"))) PPC_WEAK_FUNC(sub_82E9789C);
PPC_FUNC_IMPL(__imp__sub_82E9789C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E978A0"))) PPC_WEAK_FUNC(sub_82E978A0);
PPC_FUNC_IMPL(__imp__sub_82E978A0) {
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
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82e975e8
	ctx.lr = 0x82E978C0;
	sub_82E975E8(ctx, base);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r9,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r9.u32);
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r8,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r8.u32);
	// lwz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r7,8(r7)
	PPC_STORE_U32(ctx.r7.u32 + 8, ctx.r7.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_82E978F4"))) PPC_WEAK_FUNC(sub_82E978F4);
PPC_FUNC_IMPL(__imp__sub_82E978F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E978F8"))) PPC_WEAK_FUNC(sub_82E978F8);
PPC_FUNC_IMPL(__imp__sub_82E978F8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82E97900;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// stw r5,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r5.u32);
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r5,r10
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r10.u32, xer);
	// bne cr6,0x82e9794c
	if (!cr6.eq) goto loc_82E9794C;
	// cmplw cr6,r6,r11
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r11.u32, xer);
	// bne cr6,0x82e9794c
	if (!cr6.eq) goto loc_82E9794C;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x82e978a0
	ctx.lr = 0x82E97934;
	sub_82E978A0(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r10.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82E9794C:
	// cmplw cr6,r5,r30
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r30.u32, xer);
	// beq cr6,0x82e9797c
	if (cr6.eq) goto loc_82E9797C;
loc_82E97954:
	// addi r3,r1,164
	ctx.r3.s64 = ctx.r1.s64 + 164;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// bl 0x82e95d70
	ctx.lr = 0x82E97960;
	sub_82E95D70(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e97210
	ctx.lr = 0x82E97970;
	sub_82E97210(ctx, base);
	// lwz r5,164(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// cmplw cr6,r5,r30
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r30.u32, xer);
	// bne cr6,0x82e97954
	if (!cr6.eq) goto loc_82E97954;
loc_82E9797C:
	// stw r5,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r5.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E9798C"))) PPC_WEAK_FUNC(sub_82E9798C);
PPC_FUNC_IMPL(__imp__sub_82E9798C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E97990"))) PPC_WEAK_FUNC(sub_82E97990);
PPC_FUNC_IMPL(__imp__sub_82E97990) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82E97998;
	__savegprlr_29(ctx, base);
	// stwu r1,-688(r1)
	ea = -688 + ctx.r1.u32;
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
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,584
	ctx.r4.s64 = 584;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82E979BC;
	sub_82595718(ctx, base);
	// lwz r9,4(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r30,8
	ctx.r11.s64 = ctx.r30.s64 + 8;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r4,r11,8
	ctx.r4.s64 = ctx.r11.s64 + 8;
	// lwz r8,4(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// stw r8,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r8.u32);
	// lwz r7,4(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// stw r7,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r7.u32);
	// stb r10,576(r31)
	PPC_STORE_U8(ctx.r31.u32 + 576, ctx.r10.u8);
	// stb r10,577(r31)
	PPC_STORE_U8(ctx.r31.u32 + 577, ctx.r10.u8);
	// lbz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lbz r6,16(r30)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r30.u32 + 16);
	// stb r6,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r6.u8);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// stb r5,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r5.u8);
	// bl 0x82e95f20
	ctx.lr = 0x82E97A10;
	sub_82E95F20(ctx, base);
	// addic. r3,r31,16
	xer.ca = ctx.r31.u32 > 4294967279;
	ctx.r3.s64 = ctx.r31.s64 + 16;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x82e97a20
	if (cr0.eq) goto loc_82E97A20;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x82e96df0
	ctx.lr = 0x82E97A20;
	sub_82E96DF0(ctx, base);
loc_82E97A20:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,688
	ctx.r1.s64 = ctx.r1.s64 + 688;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E97A2C"))) PPC_WEAK_FUNC(sub_82E97A2C);
PPC_FUNC_IMPL(__imp__sub_82E97A2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E97A30"))) PPC_WEAK_FUNC(sub_82E97A30);
PPC_FUNC_IMPL(__imp__sub_82E97A30) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82E97A38;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r4,r3,80
	ctx.r4.s64 = ctx.r3.s64 + 80;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82b80748
	ctx.lr = 0x82E97A4C;
	sub_82B80748(ctx, base);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82e97a8c
	if (!cr6.eq) goto loc_82E97A8C;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82e975e8
	ctx.lr = 0x82E97A68;
	sub_82E975E8(ctx, base);
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r9,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r9.u32);
	// lwz r8,4(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r8,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r8.u32);
	// lwz r7,4(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r7,8(r7)
	PPC_STORE_U32(ctx.r7.u32 + 8, ctx.r7.u32);
	// stw r10,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r10.u32);
	// b 0x82e97af0
	goto loc_82E97AF0;
loc_82E97A8C:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82e97af0
	if (cr6.eq) goto loc_82E97AF0;
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
loc_82E97AA0:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// beq cr6,0x82e97acc
	if (cr6.eq) goto loc_82E97ACC;
loc_82E97AB8:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e95d70
	ctx.lr = 0x82E97AC0;
	sub_82E95D70(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// bne 0x82e97ab8
	if (!cr0.eq) goto loc_82E97AB8;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82E97ACC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lbz r4,16(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 16);
	// bl 0x82e977c0
	ctx.lr = 0x82E97AD8;
	sub_82E977C0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82e97ae8
	if (!cr6.eq) goto loc_82E97AE8;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
loc_82E97AE8:
	// addic. r28,r28,-1
	xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	cr0.compare<int32_t>(ctx.r28.s32, 0, xer);
	// bne 0x82e97aa0
	if (!cr0.eq) goto loc_82E97AA0;
loc_82E97AF0:
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82e97b00
	if (cr6.eq) goto loc_82E97B00;
	// bl 0x8259b510
	ctx.lr = 0x82E97B00;
	sub_8259B510(ctx, base);
loc_82E97B00:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E97B08"))) PPC_WEAK_FUNC(sub_82E97B08);
PPC_FUNC_IMPL(__imp__sub_82E97B08) {
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// bl 0x82e97990
	ctx.lr = 0x82E97B30;
	sub_82E97990(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82e97658
	ctx.lr = 0x82E97B44;
	sub_82E97658(ctx, base);
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

__attribute__((alias("__imp__sub_82E97B60"))) PPC_WEAK_FUNC(sub_82E97B60);
PPC_FUNC_IMPL(__imp__sub_82E97B60) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82E97B68;
	__savegprlr_28(ctx, base);
	// stwu r1,-704(r1)
	ea = -704 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// stb r4,735(r1)
	PPC_STORE_U8(ctx.r1.u32 + 735, ctx.r4.u8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r3,80
	ctx.r4.s64 = ctx.r3.s64 + 80;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x82b80748
	ctx.lr = 0x82E97B88;
	sub_82B80748(ctx, base);
	// lwz r28,80(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// beq cr6,0x82e97c20
	if (cr6.eq) goto loc_82E97C20;
	// addi r5,r1,735
	ctx.r5.s64 = ctx.r1.s64 + 735;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82e964b0
	ctx.lr = 0x82E97BA4;
	sub_82E964B0(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// bne cr6,0x82e97c20
	if (!cr6.eq) goto loc_82E97C20;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82e955a0
	ctx.lr = 0x82E97BC4;
	sub_82E955A0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82e97c3c
	if (cr6.eq) goto loc_82E97C3C;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,735
	ctx.r4.s64 = ctx.r1.s64 + 735;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82e96e58
	ctx.lr = 0x82E97BE4;
	sub_82E96E58(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82e97b08
	ctx.lr = 0x82E97BF4;
	sub_82E97B08(ctx, base);
	// lbz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 4);
	// lis r10,-32232
	ctx.r10.s64 = -2112356352;
	// cntlzw r9,r11
	ctx.r9.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// addi r8,r10,32068
	ctx.r8.s64 = ctx.r10.s64 + 32068;
	// rlwinm r7,r9,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// stw r8,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r8.u32);
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82e97c3c
	if (cr6.eq) goto loc_82E97C3C;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e977c0
	ctx.lr = 0x82E97C20;
	sub_82E977C0(ctx, base);
loc_82E97C20:
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82e97c30
	if (cr6.eq) goto loc_82E97C30;
	// bl 0x8259b510
	ctx.lr = 0x82E97C30;
	sub_8259B510(ctx, base);
loc_82E97C30:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,704
	ctx.r1.s64 = ctx.r1.s64 + 704;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82E97C3C:
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82e97c4c
	if (cr6.eq) goto loc_82E97C4C;
	// bl 0x8259b510
	ctx.lr = 0x82E97C4C;
	sub_8259B510(ctx, base);
loc_82E97C4C:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,704
	ctx.r1.s64 = ctx.r1.s64 + 704;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E97C58"))) PPC_WEAK_FUNC(sub_82E97C58);
PPC_FUNC_IMPL(__imp__sub_82E97C58) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82e97a30
	ctx.lr = 0x82E97C74;
	sub_82E97A30(ctx, base);
	// lwz r3,92(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82e97c84
	if (cr6.eq) goto loc_82E97C84;
	// bl 0x8259b510
	ctx.lr = 0x82E97C84;
	sub_8259B510(ctx, base);
loc_82E97C84:
	// lwz r30,84(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x82e97cb4
	if (cr6.eq) goto loc_82E97CB4;
	// addi r3,r30,64
	ctx.r3.s64 = ctx.r30.s64 + 64;
	// bl 0x82574a08
	ctx.lr = 0x82E97C98;
	sub_82574A08(ctx, base);
	// cmplwi cr6,r3,1
	cr6.compare<uint32_t>(ctx.r3.u32, 1, xer);
	// bne cr6,0x82e97cb4
	if (!cr6.eq) goto loc_82E97CB4;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82E97CB4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82E97CB4:
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// bl 0x83b3f898
	ctx.lr = 0x82E97CBC;
	sub_83B3F898(ctx, base);
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r30,2
	ctx.r30.s64 = 2;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82e97cd8
	if (cr6.eq) goto loc_82E97CD8;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x82E97CD8;
	sub_825952B8(ctx, base);
loc_82E97CD8:
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r5,0(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// bl 0x82e978f8
	ctx.lr = 0x82E97CFC;
	sub_82E978F8(ctx, base);
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x825952b8
	ctx.lr = 0x82E97D0C;
	sub_825952B8(ctx, base);
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

__attribute__((alias("__imp__sub_82E97D24"))) PPC_WEAK_FUNC(sub_82E97D24);
PPC_FUNC_IMPL(__imp__sub_82E97D24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E97D28"))) PPC_WEAK_FUNC(sub_82E97D28);
PPC_FUNC_IMPL(__imp__sub_82E97D28) {
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
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82e963c0
	ctx.lr = 0x82E97D4C;
	sub_82E963C0(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// stw r30,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r30.u32);
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// bl 0x8257fa88
	ctx.lr = 0x82E97D64;
	sub_8257FA88(ctx, base);
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x82e96c60
	ctx.lr = 0x82E97D6C;
	sub_82E96C60(ctx, base);
	// stw r30,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r30.u32);
	// stw r30,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r30.u32);
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

__attribute__((alias("__imp__sub_82E97D90"))) PPC_WEAK_FUNC(sub_82E97D90);
PPC_FUNC_IMPL(__imp__sub_82E97D90) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r4,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r4.u32);
	// cmpwi cr6,r4,-32
	cr6.compare<int32_t>(ctx.r4.s32, -32, xer);
	// bge cr6,0x82e97ee8
	if (!cr6.lt) goto loc_82E97EE8;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmpwi cr6,r4,-32768
	cr6.compare<int32_t>(ctx.r4.s32, -32768, xer);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bge cr6,0x82e97e10
	if (!cr6.lt) goto loc_82E97E10;
	// li r10,210
	ctx.r10.s64 = 210;
	// stw r4,81(r1)
	PPC_STORE_U32(ctx.r1.u32 + 81, ctx.r4.u32);
	// subf r8,r9,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r9.s64;
	// stb r10,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r10.u8);
	// cmplwi cr6,r8,5
	cr6.compare<uint32_t>(ctx.r8.u32, 5, xer);
	// bge cr6,0x82e97de0
	if (!cr6.lt) goto loc_82E97DE0;
	// li r4,5
	ctx.r4.s64 = 5;
	// bl 0x82e745e0
	ctx.lr = 0x82E97DE0;
	sub_82E745E0(ctx, base);
loc_82E97DE0:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r9,5
	ctx.r9.s64 = 5;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r11,r8,-1
	ctx.r11.s64 = ctx.r8.s64 + -1;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_82E97E00:
	// lbzu r9,1(r11)
	ea = 1 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// stbu r9,1(r10)
	ea = 1 + ctx.r10.u32;
	PPC_STORE_U8(ea, ctx.r9.u8);
	ctx.r10.u32 = ea;
	// bdnz 0x82e97e00
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82E97E00;
	// b 0x82e98084
	goto loc_82E98084;
loc_82E97E10:
	// cmpwi cr6,r4,-128
	cr6.compare<int32_t>(ctx.r4.s32, -128, xer);
	// subf r7,r9,r11
	ctx.r7.s64 = ctx.r11.s64 - ctx.r9.s64;
	// bge cr6,0x82e97e84
	if (!cr6.lt) goto loc_82E97E84;
	// li r10,209
	ctx.r10.s64 = 209;
	// sth r4,81(r1)
	PPC_STORE_U16(ctx.r1.u32 + 81, ctx.r4.u16);
	// cmplwi cr6,r7,3
	cr6.compare<uint32_t>(ctx.r7.u32, 3, xer);
	// stb r10,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r10.u8);
	// bge cr6,0x82e97e3c
	if (!cr6.lt) goto loc_82E97E3C;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e745e0
	ctx.lr = 0x82E97E3C;
	sub_82E745E0(ctx, base);
loc_82E97E3C:
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lbz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// lbz r7,1(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 1);
	// lbz r6,2(r9)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r9.u32 + 2);
	// stb r8,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r8.u8);
	// stb r7,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r7.u8);
	// stb r6,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r6.u8);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r5,r11,3
	ctx.r5.s64 = ctx.r11.s64 + 3;
	// stw r5,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r5.u32);
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
loc_82E97E84:
	// lbz r8,143(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 143);
	// li r10,208
	ctx.r10.s64 = 208;
	// cmplwi cr6,r7,2
	cr6.compare<uint32_t>(ctx.r7.u32, 2, xer);
	// stb r10,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r10.u8);
	// stb r8,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r8.u8);
	// bge cr6,0x82e97f7c
	if (!cr6.lt) goto loc_82E97F7C;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e745e0
	ctx.lr = 0x82E97EA8;
	sub_82E745E0(ctx, base);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lbz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// lbz r7,1(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 1);
	// stb r8,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r8.u8);
	// stb r7,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r7.u8);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r6,r11,2
	ctx.r6.s64 = ctx.r11.s64 + 2;
	// stw r6,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r6.u32);
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
loc_82E97EE8:
	// cmpwi cr6,r4,128
	cr6.compare<int32_t>(ctx.r4.s32, 128, xer);
	// bge cr6,0x82e97f44
	if (!cr6.lt) goto loc_82E97F44;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// cmplwi cr6,r9,1
	cr6.compare<uint32_t>(ctx.r9.u32, 1, xer);
	// bge cr6,0x82e97f10
	if (!cr6.lt) goto loc_82E97F10;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e745e0
	ctx.lr = 0x82E97F10;
	sub_82E745E0(ctx, base);
loc_82E97F10:
	// addi r9,r1,143
	ctx.r9.s64 = ctx.r1.s64 + 143;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lbz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// stbx r8,r11,r10
	PPC_STORE_U8(ctx.r11.u32 + ctx.r10.u32, ctx.r8.u8);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// stw r7,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r7.u32);
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
loc_82E97F44:
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r4,256
	cr6.compare<int32_t>(ctx.r4.s32, 256, xer);
	// bge cr6,0x82e97fbc
	if (!cr6.lt) goto loc_82E97FBC;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r10,204
	ctx.r10.s64 = 204;
	// lbz r8,143(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 143);
	// subf r7,r9,r11
	ctx.r7.s64 = ctx.r11.s64 - ctx.r9.s64;
	// stb r10,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r10.u8);
	// cmplwi cr6,r7,2
	cr6.compare<uint32_t>(ctx.r7.u32, 2, xer);
	// stb r8,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r8.u8);
	// bge cr6,0x82e97f7c
	if (!cr6.lt) goto loc_82E97F7C;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e745e0
	ctx.lr = 0x82E97F7C;
	sub_82E745E0(ctx, base);
loc_82E97F7C:
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lbz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// lbz r7,1(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 1);
	// stb r8,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r8.u8);
	// stb r7,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r7.u8);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r6,r11,2
	ctx.r6.s64 = ctx.r11.s64 + 2;
	// stw r6,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r6.u32);
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
loc_82E97FBC:
	// lis r11,1
	ctx.r11.s64 = 65536;
	// cmpw cr6,r4,r11
	cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, xer);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bge cr6,0x82e98038
	if (!cr6.lt) goto loc_82E98038;
	// li r10,205
	ctx.r10.s64 = 205;
	// sth r4,81(r1)
	PPC_STORE_U16(ctx.r1.u32 + 81, ctx.r4.u16);
	// subf r7,r9,r11
	ctx.r7.s64 = ctx.r11.s64 - ctx.r9.s64;
	// stb r10,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r10.u8);
	// cmplwi cr6,r7,3
	cr6.compare<uint32_t>(ctx.r7.u32, 3, xer);
	// bge cr6,0x82e97ff0
	if (!cr6.lt) goto loc_82E97FF0;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e745e0
	ctx.lr = 0x82E97FF0;
	sub_82E745E0(ctx, base);
loc_82E97FF0:
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lbz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// lbz r7,1(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 1);
	// lbz r6,2(r9)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r9.u32 + 2);
	// stb r8,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r8.u8);
	// stb r7,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r7.u8);
	// stb r6,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r6.u8);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r5,r11,3
	ctx.r5.s64 = ctx.r11.s64 + 3;
	// stw r5,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r5.u32);
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
loc_82E98038:
	// li r10,206
	ctx.r10.s64 = 206;
	// stw r4,81(r1)
	PPC_STORE_U32(ctx.r1.u32 + 81, ctx.r4.u32);
	// subf r8,r9,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r9.s64;
	// stb r10,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r10.u8);
	// cmplwi cr6,r8,5
	cr6.compare<uint32_t>(ctx.r8.u32, 5, xer);
	// bge cr6,0x82e9805c
	if (!cr6.lt) goto loc_82E9805C;
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e745e0
	ctx.lr = 0x82E9805C;
	sub_82E745E0(ctx, base);
loc_82E9805C:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r9,5
	ctx.r9.s64 = 5;
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r1,79
	ctx.r11.s64 = ctx.r1.s64 + 79;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_82E98078:
	// lbzu r9,1(r11)
	ea = 1 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// stbu r9,1(r10)
	ea = 1 + ctx.r10.u32;
	PPC_STORE_U8(ea, ctx.r9.u8);
	ctx.r10.u32 = ea;
	// bdnz 0x82e98078
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82E98078;
loc_82E98084:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r11,5
	ctx.r11.s64 = ctx.r11.s64 + 5;
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

__attribute__((alias("__imp__sub_82E980A4"))) PPC_WEAK_FUNC(sub_82E980A4);
PPC_FUNC_IMPL(__imp__sub_82E980A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E980A8"))) PPC_WEAK_FUNC(sub_82E980A8);
PPC_FUNC_IMPL(__imp__sub_82E980A8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82E980B0;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r30,r3,176
	ctx.r30.s64 = ctx.r3.s64 + 176;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82535130
	ctx.lr = 0x82E980C4;
	sub_82535130(ctx, base);
	// lwz r10,240(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 240);
	// addi r11,r29,220
	ctx.r11.s64 = ctx.r29.s64 + 220;
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82e980d8
	if (cr6.lt) goto loc_82E980D8;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82E980D8:
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825346c8
	ctx.lr = 0x82E980E4;
	sub_825346C8(ctx, base);
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r31,r11,32292
	ctx.r31.s64 = ctx.r11.s64 + 32292;
	// addi r4,r31,-8
	ctx.r4.s64 = ctx.r31.s64 + -8;
	// bl 0x82536d88
	ctx.lr = 0x82E980F8;
	sub_82536D88(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x825369e8
	ctx.lr = 0x82E98100;
	sub_825369E8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82535aa0
	ctx.lr = 0x82E98108;
	sub_82535AA0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,248(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 248);
	// bl 0x82534640
	ctx.lr = 0x82E98114;
	sub_82534640(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82536d88
	ctx.lr = 0x82E98120;
	sub_82536D88(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x825369e8
	ctx.lr = 0x82E98128;
	sub_825369E8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82535aa0
	ctx.lr = 0x82E98130;
	sub_82535AA0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E9813C"))) PPC_WEAK_FUNC(sub_82E9813C);
PPC_FUNC_IMPL(__imp__sub_82E9813C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E98140"))) PPC_WEAK_FUNC(sub_82E98140);
PPC_FUNC_IMPL(__imp__sub_82E98140) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82E98148;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// addi r30,r3,176
	ctx.r30.s64 = ctx.r3.s64 + 176;
	// addi r29,r11,32548
	ctx.r29.s64 = ctx.r11.s64 + 32548;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r29,-8
	ctx.r4.s64 = ctx.r29.s64 + -8;
	// bl 0x82536d88
	ctx.lr = 0x82E98168;
	sub_82536D88(ctx, base);
	// bl 0x825832e0
	ctx.lr = 0x82E9816C;
	sub_825832E0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82E98174:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82e98174
	if (!cr6.eq) goto loc_82E98174;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r31,220
	ctx.r3.s64 = ctx.r31.s64 + 220;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x82E98198;
	sub_824208C8(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82536d88
	ctx.lr = 0x82E981A4;
	sub_82536D88(ctx, base);
	// bl 0x825347e8
	ctx.lr = 0x82E981A8;
	sub_825347E8(ctx, base);
	// stw r3,248(r31)
	PPC_STORE_U32(ctx.r31.u32 + 248, ctx.r3.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E981B8"))) PPC_WEAK_FUNC(sub_82E981B8);
PPC_FUNC_IMPL(__imp__sub_82E981B8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad4
	ctx.lr = 0x82E981C0;
	__savegprlr_23(ctx, base);
	// stwu r1,-976(r1)
	ea = -976 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r30,r3,4
	ctx.r30.s64 = ctx.r3.s64 + 4;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r11,139
	ctx.r11.s64 = 139;
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// rotlwi r10,r31,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r31.u32, 0);
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r31.u32);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// lwz r9,8(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// subf r8,r10,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r10.s64;
	// cmplwi cr6,r8,1
	cr6.compare<uint32_t>(ctx.r8.u32, 1, xer);
	// bge cr6,0x82e98200
	if (!cr6.lt) goto loc_82E98200;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82e745e0
	ctx.lr = 0x82E98200;
	sub_82E745E0(ctx, base);
loc_82E98200:
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// li r26,15
	ctx.r26.s64 = 15;
	// addi r25,r11,32448
	ctx.r25.s64 = ctx.r11.s64 + 32448;
	// li r5,5
	ctx.r5.s64 = 5;
	// lbz r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r8.u32 + 0);
	// addi r3,r1,448
	ctx.r3.s64 = ctx.r1.s64 + 448;
	// addi r4,r25,-148
	ctx.r4.s64 = ctx.r25.s64 + -148;
	// stbx r7,r9,r10
	PPC_STORE_U8(ctx.r9.u32 + ctx.r10.u32, ctx.r7.u8);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// stw r6,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r6.u32);
	// stw r26,468(r1)
	PPC_STORE_U32(ctx.r1.u32 + 468, ctx.r26.u32);
	// stw r31,464(r1)
	PPC_STORE_U32(ctx.r1.u32 + 464, ctx.r31.u32);
	// stb r31,448(r1)
	PPC_STORE_U8(ctx.r1.u32 + 448, ctx.r31.u8);
	// bl 0x82472fc0
	ctx.lr = 0x82E98248;
	sub_82472FC0(ctx, base);
	// addi r4,r1,448
	ctx.r4.s64 = ctx.r1.s64 + 448;
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// bl 0x82e74c08
	ctx.lr = 0x82E98254;
	sub_82E74C08(ctx, base);
	// lwz r5,468(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 468);
	// cmplwi cr6,r5,16
	cr6.compare<uint32_t>(ctx.r5.u32, 16, xer);
	// blt cr6,0x82e98268
	if (cr6.lt) goto loc_82E98268;
	// lwz r3,448(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 448);
	// bl 0x82416268
	ctx.lr = 0x82E98268;
	sub_82416268(ctx, base);
loc_82E98268:
	// lwz r11,40(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 40);
	// addi r4,r24,20
	ctx.r4.s64 = ctx.r24.s64 + 20;
	// stw r26,468(r1)
	PPC_STORE_U32(ctx.r1.u32 + 468, ctx.r26.u32);
	// stw r31,464(r1)
	PPC_STORE_U32(ctx.r1.u32 + 464, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,448(r1)
	PPC_STORE_U8(ctx.r1.u32 + 448, ctx.r31.u8);
	// blt cr6,0x82e98288
	if (cr6.lt) goto loc_82E98288;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_82E98288:
	// stw r26,404(r1)
	PPC_STORE_U32(ctx.r1.u32 + 404, ctx.r26.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r31,400(r1)
	PPC_STORE_U32(ctx.r1.u32 + 400, ctx.r31.u32);
	// stb r31,384(r1)
	PPC_STORE_U8(ctx.r1.u32 + 384, ctx.r31.u8);
loc_82E98298:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82e98298
	if (!cr6.eq) goto loc_82E98298;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,384
	ctx.r3.s64 = ctx.r1.s64 + 384;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82472fc0
	ctx.lr = 0x82E982BC;
	sub_82472FC0(ctx, base);
	// addi r4,r1,384
	ctx.r4.s64 = ctx.r1.s64 + 384;
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// bl 0x82e74c08
	ctx.lr = 0x82E982C8;
	sub_82E74C08(ctx, base);
	// lwz r10,404(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 404);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82e982dc
	if (cr6.lt) goto loc_82E982DC;
	// lwz r3,384(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 384);
	// bl 0x82416268
	ctx.lr = 0x82E982DC;
	sub_82416268(ctx, base);
loc_82E982DC:
	// stw r26,404(r1)
	PPC_STORE_U32(ctx.r1.u32 + 404, ctx.r26.u32);
	// addi r4,r25,-140
	ctx.r4.s64 = ctx.r25.s64 + -140;
	// stw r31,400(r1)
	PPC_STORE_U32(ctx.r1.u32 + 400, ctx.r31.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// stb r31,384(r1)
	PPC_STORE_U8(ctx.r1.u32 + 384, ctx.r31.u8);
	// addi r3,r1,768
	ctx.r3.s64 = ctx.r1.s64 + 768;
	// stw r26,788(r1)
	PPC_STORE_U32(ctx.r1.u32 + 788, ctx.r26.u32);
	// stw r31,784(r1)
	PPC_STORE_U32(ctx.r1.u32 + 784, ctx.r31.u32);
	// stb r31,768(r1)
	PPC_STORE_U8(ctx.r1.u32 + 768, ctx.r31.u8);
	// bl 0x82472fc0
	ctx.lr = 0x82E98304;
	sub_82472FC0(ctx, base);
	// addi r4,r1,768
	ctx.r4.s64 = ctx.r1.s64 + 768;
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// bl 0x82e74c08
	ctx.lr = 0x82E98310;
	sub_82E74C08(ctx, base);
	// lwz r11,788(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 788);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82e98324
	if (cr6.lt) goto loc_82E98324;
	// lwz r3,768(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 768);
	// bl 0x82416268
	ctx.lr = 0x82E98324;
	sub_82416268(ctx, base);
loc_82E98324:
	// stw r26,788(r1)
	PPC_STORE_U32(ctx.r1.u32 + 788, ctx.r26.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r31,784(r1)
	PPC_STORE_U32(ctx.r1.u32 + 784, ctx.r31.u32);
	// stb r31,768(r1)
	PPC_STORE_U8(ctx.r1.u32 + 768, ctx.r31.u8);
	// lwz r4,48(r24)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r24.u32 + 48);
	// bl 0x82e746c0
	ctx.lr = 0x82E9833C;
	sub_82E746C0(ctx, base);
	// stw r26,532(r1)
	PPC_STORE_U32(ctx.r1.u32 + 532, ctx.r26.u32);
	// stw r31,528(r1)
	PPC_STORE_U32(ctx.r1.u32 + 528, ctx.r31.u32);
	// addi r4,r25,-132
	ctx.r4.s64 = ctx.r25.s64 + -132;
	// stb r31,512(r1)
	PPC_STORE_U8(ctx.r1.u32 + 512, ctx.r31.u8);
	// li r5,3
	ctx.r5.s64 = 3;
	// addi r3,r1,512
	ctx.r3.s64 = ctx.r1.s64 + 512;
	// bl 0x82472fc0
	ctx.lr = 0x82E98358;
	sub_82472FC0(ctx, base);
	// addi r4,r1,512
	ctx.r4.s64 = ctx.r1.s64 + 512;
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// bl 0x82e74c08
	ctx.lr = 0x82E98364;
	sub_82E74C08(ctx, base);
	// lwz r11,532(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 532);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82e98378
	if (cr6.lt) goto loc_82E98378;
	// lwz r3,512(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 512);
	// bl 0x82416268
	ctx.lr = 0x82E98378;
	sub_82416268(ctx, base);
loc_82E98378:
	// stw r26,532(r1)
	PPC_STORE_U32(ctx.r1.u32 + 532, ctx.r26.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r31,528(r1)
	PPC_STORE_U32(ctx.r1.u32 + 528, ctx.r31.u32);
	// stb r31,512(r1)
	PPC_STORE_U8(ctx.r1.u32 + 512, ctx.r31.u8);
	// lwz r4,116(r24)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r24.u32 + 116);
	// bl 0x82e746c0
	ctx.lr = 0x82E98390;
	sub_82E746C0(ctx, base);
	// stw r26,724(r1)
	PPC_STORE_U32(ctx.r1.u32 + 724, ctx.r26.u32);
	// stw r31,720(r1)
	PPC_STORE_U32(ctx.r1.u32 + 720, ctx.r31.u32);
	// addi r4,r25,-128
	ctx.r4.s64 = ctx.r25.s64 + -128;
	// stb r31,704(r1)
	PPC_STORE_U8(ctx.r1.u32 + 704, ctx.r31.u8);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r3,r1,704
	ctx.r3.s64 = ctx.r1.s64 + 704;
	// bl 0x82472fc0
	ctx.lr = 0x82E983AC;
	sub_82472FC0(ctx, base);
	// addi r4,r1,704
	ctx.r4.s64 = ctx.r1.s64 + 704;
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// bl 0x82e74c08
	ctx.lr = 0x82E983B8;
	sub_82E74C08(ctx, base);
	// lwz r11,724(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 724);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82e983cc
	if (cr6.lt) goto loc_82E983CC;
	// lwz r3,704(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 704);
	// bl 0x82416268
	ctx.lr = 0x82E983CC;
	sub_82416268(ctx, base);
loc_82E983CC:
	// li r3,8192
	ctx.r3.s64 = 8192;
	// stw r26,724(r1)
	PPC_STORE_U32(ctx.r1.u32 + 724, ctx.r26.u32);
	// stw r31,720(r1)
	PPC_STORE_U32(ctx.r1.u32 + 720, ctx.r31.u32);
	// stb r31,704(r1)
	PPC_STORE_U8(ctx.r1.u32 + 704, ctx.r31.u8);
	// bl 0x831d2bf8
	ctx.lr = 0x82E983E0;
	sub_831D2BF8(ctx, base);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r31.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r3,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// li r29,131
	ctx.r29.s64 = 131;
	// li r23,8192
	ctx.r23.s64 = 8192;
	// stb r29,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r29.u8);
	// addi r9,r1,88
	ctx.r9.s64 = ctx.r1.s64 + 88;
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r4,r25,-120
	ctx.r4.s64 = ctx.r25.s64 + -120;
	// stw r23,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r23.u32);
	// li r5,6
	ctx.r5.s64 = 6;
	// stb r8,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r8.u8);
	// addi r3,r1,576
	ctx.r3.s64 = ctx.r1.s64 + 576;
	// lwz r7,88(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r6,r7,1
	ctx.r6.s64 = ctx.r7.s64 + 1;
	// stw r26,596(r1)
	PPC_STORE_U32(ctx.r1.u32 + 596, ctx.r26.u32);
	// stw r31,592(r1)
	PPC_STORE_U32(ctx.r1.u32 + 592, ctx.r31.u32);
	// stb r31,576(r1)
	PPC_STORE_U8(ctx.r1.u32 + 576, ctx.r31.u8);
	// stw r6,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r6.u32);
	// stw r9,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r9.u32);
	// bl 0x82472fc0
	ctx.lr = 0x82E98438;
	sub_82472FC0(ctx, base);
	// addi r4,r1,576
	ctx.r4.s64 = ctx.r1.s64 + 576;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82e74c08
	ctx.lr = 0x82E98444;
	sub_82E74C08(ctx, base);
	// lwz r5,596(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 596);
	// cmplwi cr6,r5,16
	cr6.compare<uint32_t>(ctx.r5.u32, 16, xer);
	// blt cr6,0x82e98458
	if (cr6.lt) goto loc_82E98458;
	// lwz r3,576(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 576);
	// bl 0x82416268
	ctx.lr = 0x82E98458;
	sub_82416268(ctx, base);
loc_82E98458:
	// li r3,8192
	ctx.r3.s64 = 8192;
	// stw r26,596(r1)
	PPC_STORE_U32(ctx.r1.u32 + 596, ctx.r26.u32);
	// stw r31,592(r1)
	PPC_STORE_U32(ctx.r1.u32 + 592, ctx.r31.u32);
	// stb r31,576(r1)
	PPC_STORE_U8(ctx.r1.u32 + 576, ctx.r31.u8);
	// bl 0x831d2bf8
	ctx.lr = 0x82E9846C;
	sub_831D2BF8(ctx, base);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// stb r29,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r29.u8);
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// stw r23,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r23.u32);
	// addi r4,r25,-112
	ctx.r4.s64 = ctx.r25.s64 + -112;
	// li r5,4
	ctx.r5.s64 = 4;
	// stw r9,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r9.u32);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r3,r1,832
	ctx.r3.s64 = ctx.r1.s64 + 832;
	// stb r8,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r8.u8);
	// lwz r7,112(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// addi r6,r7,1
	ctx.r6.s64 = ctx.r7.s64 + 1;
	// stw r26,852(r1)
	PPC_STORE_U32(ctx.r1.u32 + 852, ctx.r26.u32);
	// stw r31,848(r1)
	PPC_STORE_U32(ctx.r1.u32 + 848, ctx.r31.u32);
	// stb r31,832(r1)
	PPC_STORE_U8(ctx.r1.u32 + 832, ctx.r31.u8);
	// stw r6,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r6.u32);
	// bl 0x82472fc0
	ctx.lr = 0x82E984BC;
	sub_82472FC0(ctx, base);
	// addi r4,r1,832
	ctx.r4.s64 = ctx.r1.s64 + 832;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82e74c08
	ctx.lr = 0x82E984C8;
	sub_82E74C08(ctx, base);
	// lwz r5,852(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 852);
	// cmplwi cr6,r5,16
	cr6.compare<uint32_t>(ctx.r5.u32, 16, xer);
	// blt cr6,0x82e984dc
	if (cr6.lt) goto loc_82E984DC;
	// lwz r3,832(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 832);
	// bl 0x82416268
	ctx.lr = 0x82E984DC;
	sub_82416268(ctx, base);
loc_82E984DC:
	// lwz r11,140(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 140);
	// addi r4,r24,120
	ctx.r4.s64 = ctx.r24.s64 + 120;
	// stw r26,852(r1)
	PPC_STORE_U32(ctx.r1.u32 + 852, ctx.r26.u32);
	// stw r31,848(r1)
	PPC_STORE_U32(ctx.r1.u32 + 848, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,832(r1)
	PPC_STORE_U8(ctx.r1.u32 + 832, ctx.r31.u8);
	// blt cr6,0x82e984fc
	if (cr6.lt) goto loc_82E984FC;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_82E984FC:
	// stw r26,660(r1)
	PPC_STORE_U32(ctx.r1.u32 + 660, ctx.r26.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r31,656(r1)
	PPC_STORE_U32(ctx.r1.u32 + 656, ctx.r31.u32);
	// stb r31,640(r1)
	PPC_STORE_U8(ctx.r1.u32 + 640, ctx.r31.u8);
loc_82E9850C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82e9850c
	if (!cr6.eq) goto loc_82E9850C;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,640
	ctx.r3.s64 = ctx.r1.s64 + 640;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82472fc0
	ctx.lr = 0x82E98530;
	sub_82472FC0(ctx, base);
	// addi r4,r1,640
	ctx.r4.s64 = ctx.r1.s64 + 640;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82e74c08
	ctx.lr = 0x82E9853C;
	sub_82E74C08(ctx, base);
	// lwz r10,660(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 660);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82e98550
	if (cr6.lt) goto loc_82E98550;
	// lwz r3,640(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 640);
	// bl 0x82416268
	ctx.lr = 0x82E98550;
	sub_82416268(ctx, base);
loc_82E98550:
	// stw r26,660(r1)
	PPC_STORE_U32(ctx.r1.u32 + 660, ctx.r26.u32);
	// addi r4,r25,-104
	ctx.r4.s64 = ctx.r25.s64 + -104;
	// stw r31,656(r1)
	PPC_STORE_U32(ctx.r1.u32 + 656, ctx.r31.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// stb r31,640(r1)
	PPC_STORE_U8(ctx.r1.u32 + 640, ctx.r31.u8);
	// addi r3,r1,416
	ctx.r3.s64 = ctx.r1.s64 + 416;
	// stw r26,436(r1)
	PPC_STORE_U32(ctx.r1.u32 + 436, ctx.r26.u32);
	// stw r31,432(r1)
	PPC_STORE_U32(ctx.r1.u32 + 432, ctx.r31.u32);
	// stb r31,416(r1)
	PPC_STORE_U8(ctx.r1.u32 + 416, ctx.r31.u8);
	// bl 0x82472fc0
	ctx.lr = 0x82E98578;
	sub_82472FC0(ctx, base);
	// addi r4,r1,416
	ctx.r4.s64 = ctx.r1.s64 + 416;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82e74c08
	ctx.lr = 0x82E98584;
	sub_82E74C08(ctx, base);
	// lwz r11,436(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 436);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82e98598
	if (cr6.lt) goto loc_82E98598;
	// lwz r3,416(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 416);
	// bl 0x82416268
	ctx.lr = 0x82E98598;
	sub_82416268(ctx, base);
loc_82E98598:
	// stw r26,436(r1)
	PPC_STORE_U32(ctx.r1.u32 + 436, ctx.r26.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stw r31,432(r1)
	PPC_STORE_U32(ctx.r1.u32 + 432, ctx.r31.u32);
	// stb r31,416(r1)
	PPC_STORE_U8(ctx.r1.u32 + 416, ctx.r31.u8);
	// lwz r4,148(r24)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r24.u32 + 148);
	// bl 0x82e97d90
	ctx.lr = 0x82E985B0;
	sub_82E97D90(ctx, base);
	// stw r26,500(r1)
	PPC_STORE_U32(ctx.r1.u32 + 500, ctx.r26.u32);
	// stw r31,496(r1)
	PPC_STORE_U32(ctx.r1.u32 + 496, ctx.r31.u32);
	// addi r4,r25,-96
	ctx.r4.s64 = ctx.r25.s64 + -96;
	// stb r31,480(r1)
	PPC_STORE_U8(ctx.r1.u32 + 480, ctx.r31.u8);
	// li r5,5
	ctx.r5.s64 = 5;
	// addi r3,r1,480
	ctx.r3.s64 = ctx.r1.s64 + 480;
	// bl 0x82472fc0
	ctx.lr = 0x82E985CC;
	sub_82472FC0(ctx, base);
	// addi r4,r1,480
	ctx.r4.s64 = ctx.r1.s64 + 480;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82e74c08
	ctx.lr = 0x82E985D8;
	sub_82E74C08(ctx, base);
	// lwz r11,500(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 500);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82e985ec
	if (cr6.lt) goto loc_82E985EC;
	// lwz r3,480(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 480);
	// bl 0x82416268
	ctx.lr = 0x82E985EC;
	sub_82416268(ctx, base);
loc_82E985EC:
	// stw r26,500(r1)
	PPC_STORE_U32(ctx.r1.u32 + 500, ctx.r26.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stw r31,496(r1)
	PPC_STORE_U32(ctx.r1.u32 + 496, ctx.r31.u32);
	// addi r28,r24,152
	ctx.r28.s64 = ctx.r24.s64 + 152;
	// stb r31,480(r1)
	PPC_STORE_U8(ctx.r1.u32 + 480, ctx.r31.u8);
	// lwz r4,152(r24)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r24.u32 + 152);
	// bl 0x82e749f8
	ctx.lr = 0x82E98608;
	sub_82E749F8(ctx, base);
	// lwz r11,152(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 152);
	// lwz r10,160(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 160);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// extsw r29,r10
	ctx.r29.s64 = ctx.r10.s32;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r29,r10
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r10.u32, xer);
	// beq cr6,0x82e9864c
	if (cr6.eq) goto loc_82E9864C;
loc_82E98624:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x82e97d90
	ctx.lr = 0x82E98630;
	sub_82E97D90(ctx, base);
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r29,r9
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r9.u32, xer);
	// bne cr6,0x82e98624
	if (!cr6.eq) goto loc_82E98624;
loc_82E9864C:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x82e74890
	ctx.lr = 0x82E98658;
	sub_82E74890(ctx, base);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// cmplw cr6,r9,r4
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r4.u32, xer);
	// lwz r28,116(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// bge cr6,0x82e98680
	if (!cr6.lt) goto loc_82E98680;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82e745e0
	ctx.lr = 0x82E98680;
	sub_82E745E0(ctx, base);
loc_82E98680:
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x831ce980
	ctx.lr = 0x82E98698;
	sub_831CE980(ctx, base);
	// lwz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r26,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r26.u32);
	// addi r4,r25,-88
	ctx.r4.s64 = ctx.r25.s64 + -88;
	// add r8,r9,r29
	ctx.r8.u64 = ctx.r9.u64 + ctx.r29.u64;
	// stw r31,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r31.u32);
	// stb r31,192(r1)
	PPC_STORE_U8(ctx.r1.u32 + 192, ctx.r31.u8);
	// li r5,3
	ctx.r5.s64 = 3;
	// stw r8,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r8.u32);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82472fc0
	ctx.lr = 0x82E986C0;
	sub_82472FC0(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r4,208(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// bl 0x82e74890
	ctx.lr = 0x82E986CC;
	sub_82E74890(ctx, base);
	// lwz r4,208(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// lwz r7,212(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// cmplwi cr6,r7,16
	cr6.compare<uint32_t>(ctx.r7.u32, 16, xer);
	// lwz r28,192(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// bge cr6,0x82e986e8
	if (!cr6.lt) goto loc_82E986E8;
	// addi r28,r1,192
	ctx.r28.s64 = ctx.r1.s64 + 192;
loc_82E986E8:
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// cmplw cr6,r9,r4
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r4.u32, xer);
	// bge cr6,0x82e98704
	if (!cr6.lt) goto loc_82E98704;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82e745e0
	ctx.lr = 0x82E98704;
	sub_82E745E0(ctx, base);
loc_82E98704:
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x831ce980
	ctx.lr = 0x82E9871C;
	sub_831CE980(ctx, base);
	// lwz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r8,212(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// add r7,r9,r29
	ctx.r7.u64 = ctx.r9.u64 + ctx.r29.u64;
	// cmplwi cr6,r8,16
	cr6.compare<uint32_t>(ctx.r8.u32, 16, xer);
	// stw r7,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r7.u32);
	// blt cr6,0x82e9873c
	if (cr6.lt) goto loc_82E9873C;
	// lwz r3,192(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// bl 0x82416268
	ctx.lr = 0x82E9873C;
	sub_82416268(ctx, base);
loc_82E9873C:
	// stw r26,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r26.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stw r31,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r31.u32);
	// addi r28,r24,168
	ctx.r28.s64 = ctx.r24.s64 + 168;
	// stb r31,192(r1)
	PPC_STORE_U8(ctx.r1.u32 + 192, ctx.r31.u8);
	// lwz r4,168(r24)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r24.u32 + 168);
	// bl 0x82e749f8
	ctx.lr = 0x82E98758;
	sub_82E749F8(ctx, base);
	// lwz r10,168(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 168);
	// lwz r11,176(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 176);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// extsw r29,r11
	ctx.r29.s64 = ctx.r11.s32;
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplw cr6,r29,r9
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r9.u32, xer);
	// beq cr6,0x82e9879c
	if (cr6.eq) goto loc_82E9879C;
loc_82E98774:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x82e97d90
	ctx.lr = 0x82E98780;
	sub_82E97D90(ctx, base);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r10,8(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplw cr6,r29,r10
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r10.u32, xer);
	// bne cr6,0x82e98774
	if (!cr6.eq) goto loc_82E98774;
loc_82E9879C:
	// stw r26,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r26.u32);
	// addi r4,r25,-84
	ctx.r4.s64 = ctx.r25.s64 + -84;
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// stb r31,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r31.u8);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82472fc0
	ctx.lr = 0x82E987B8;
	sub_82472FC0(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r4,144(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// bl 0x82e74890
	ctx.lr = 0x82E987C4;
	sub_82E74890(ctx, base);
	// lwz r9,144(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// mr r28,r9
	ctx.r28.u64 = ctx.r9.u64;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// lwz r27,128(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bge cr6,0x82e987e0
	if (!cr6.lt) goto loc_82E987E0;
	// addi r27,r1,128
	ctx.r27.s64 = ctx.r1.s64 + 128;
loc_82E987E0:
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r11.s64;
	// cmplw cr6,r8,r9
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, xer);
	// bge cr6,0x82e98834
	if (!cr6.lt) goto loc_82E98834;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// rlwinm r29,r10,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// bne cr6,0x82e98804
	if (!cr6.eq) goto loc_82E98804;
	// mr r29,r23
	ctx.r29.u64 = ctx.r23.u64;
loc_82E98804:
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, xer);
	// bge cr6,0x82e9881c
	if (!cr6.lt) goto loc_82E9881C;
loc_82E98810:
	// rlwinm r29,r29,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, xer);
	// blt cr6,0x82e98810
	if (cr6.lt) goto loc_82E98810;
loc_82E9881C:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// bl 0x831d3198
	ctx.lr = 0x82E98828;
	sub_831D3198(ctx, base);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r3,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// stw r29,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r29.u32);
loc_82E98834:
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x831ce980
	ctx.lr = 0x82E98848;
	sub_831CE980(ctx, base);
	// lwz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r8,148(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// add r7,r9,r28
	ctx.r7.u64 = ctx.r9.u64 + ctx.r28.u64;
	// cmplwi cr6,r8,16
	cr6.compare<uint32_t>(ctx.r8.u32, 16, xer);
	// stw r7,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r7.u32);
	// blt cr6,0x82e98868
	if (cr6.lt) goto loc_82E98868;
	// lwz r3,128(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x82416268
	ctx.lr = 0x82E98868;
	sub_82416268(ctx, base);
loc_82E98868:
	// stw r26,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r26.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// addi r28,r24,184
	ctx.r28.s64 = ctx.r24.s64 + 184;
	// stb r31,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r31.u8);
	// lwz r4,184(r24)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r24.u32 + 184);
	// bl 0x82e749f8
	ctx.lr = 0x82E98884;
	sub_82E749F8(ctx, base);
	// lwz r11,184(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 184);
	// lwz r10,192(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 192);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// extsw r29,r10
	ctx.r29.s64 = ctx.r10.s32;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplw cr6,r29,r10
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r10.u32, xer);
	// beq cr6,0x82e988c8
	if (cr6.eq) goto loc_82E988C8;
loc_82E988A0:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x82e97d90
	ctx.lr = 0x82E988AC;
	sub_82E97D90(ctx, base);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r10,8(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplw cr6,r29,r10
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r10.u32, xer);
	// bne cr6,0x82e988a0
	if (!cr6.eq) goto loc_82E988A0;
loc_82E988C8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x82e74890
	ctx.lr = 0x82E988D4;
	sub_82E74890(ctx, base);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// subf r8,r9,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r9.s64;
	// mr r28,r10
	ctx.r28.u64 = ctx.r10.u64;
	// cmplw cr6,r8,r10
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, xer);
	// lwz r27,92(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// bge cr6,0x82e98938
	if (!cr6.lt) goto loc_82E98938;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// rlwinm r29,r11,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// bne cr6,0x82e98904
	if (!cr6.eq) goto loc_82E98904;
	// mr r29,r23
	ctx.r29.u64 = ctx.r23.u64;
loc_82E98904:
	// add r11,r9,r10
	ctx.r11.u64 = ctx.r9.u64 + ctx.r10.u64;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, xer);
	// bge cr6,0x82e98924
	if (!cr6.lt) goto loc_82E98924;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_82E98918:
	// rlwinm r29,r29,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, xer);
	// blt cr6,0x82e98918
	if (cr6.lt) goto loc_82E98918;
loc_82E98924:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x831d3198
	ctx.lr = 0x82E98930;
	sub_831D3198(ctx, base);
	// stw r3,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r3.u32);
	// stw r29,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r29.u32);
loc_82E98938:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x831ce980
	ctx.lr = 0x82E98950;
	sub_831CE980(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r4,r25,-72
	ctx.r4.s64 = ctx.r25.s64 + -72;
	// add r11,r28,r11
	ctx.r11.u64 = ctx.r28.u64 + ctx.r11.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// stw r26,340(r1)
	PPC_STORE_U32(ctx.r1.u32 + 340, ctx.r26.u32);
	// stw r31,336(r1)
	PPC_STORE_U32(ctx.r1.u32 + 336, ctx.r31.u32);
	// stb r31,320(r1)
	PPC_STORE_U8(ctx.r1.u32 + 320, ctx.r31.u8);
	// bl 0x82472fc0
	ctx.lr = 0x82E98978;
	sub_82472FC0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,336(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 336);
	// bl 0x82e74890
	ctx.lr = 0x82E98984;
	sub_82E74890(ctx, base);
	// lwz r11,336(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 336);
	// lwz r10,340(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 340);
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// lwz r27,320(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 320);
	// bge cr6,0x82e989a0
	if (!cr6.lt) goto loc_82E989A0;
	// addi r27,r1,320
	ctx.r27.s64 = ctx.r1.s64 + 320;
loc_82E989A0:
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// subf r8,r9,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r9.s64;
	// cmplw cr6,r8,r11
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, xer);
	// bge cr6,0x82e989f8
	if (!cr6.lt) goto loc_82E989F8;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// rlwinm r29,r10,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// bne cr6,0x82e989c4
	if (!cr6.eq) goto loc_82E989C4;
	// mr r29,r23
	ctx.r29.u64 = ctx.r23.u64;
loc_82E989C4:
	// add r10,r11,r9
	ctx.r10.u64 = ctx.r11.u64 + ctx.r9.u64;
	// cmplw cr6,r29,r10
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r10.u32, xer);
	// bge cr6,0x82e989e4
	if (!cr6.lt) goto loc_82E989E4;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_82E989D8:
	// rlwinm r29,r29,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, xer);
	// blt cr6,0x82e989d8
	if (cr6.lt) goto loc_82E989D8;
loc_82E989E4:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x831d3198
	ctx.lr = 0x82E989F0;
	sub_831D3198(ctx, base);
	// stw r3,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r3.u32);
	// stw r29,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r29.u32);
loc_82E989F8:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x831ce980
	ctx.lr = 0x82E98A10;
	sub_831CE980(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// add r11,r28,r11
	ctx.r11.u64 = ctx.r28.u64 + ctx.r11.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// lwz r10,340(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 340);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82e98a30
	if (cr6.lt) goto loc_82E98A30;
	// lwz r3,320(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 320);
	// bl 0x82416268
	ctx.lr = 0x82E98A30;
	sub_82416268(ctx, base);
loc_82E98A30:
	// stw r26,340(r1)
	PPC_STORE_U32(ctx.r1.u32 + 340, ctx.r26.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r31,336(r1)
	PPC_STORE_U32(ctx.r1.u32 + 336, ctx.r31.u32);
	// stb r31,320(r1)
	PPC_STORE_U8(ctx.r1.u32 + 320, ctx.r31.u8);
	// ld r4,200(r24)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r24.u32 + 200);
	// bl 0x82ead258
	ctx.lr = 0x82E98A48;
	sub_82EAD258(ctx, base);
	// stw r26,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r26.u32);
	// stw r31,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r31.u32);
	// addi r4,r25,-64
	ctx.r4.s64 = ctx.r25.s64 + -64;
	// stb r31,256(r1)
	PPC_STORE_U8(ctx.r1.u32 + 256, ctx.r31.u8);
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x82472fc0
	ctx.lr = 0x82E98A64;
	sub_82472FC0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,272(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 272);
	// bl 0x82e74890
	ctx.lr = 0x82E98A70;
	sub_82E74890(ctx, base);
	// lwz r10,272(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 272);
	// lwz r11,276(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	// mr r28,r10
	ctx.r28.u64 = ctx.r10.u64;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// lwz r27,256(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 256);
	// bge cr6,0x82e98a8c
	if (!cr6.lt) goto loc_82E98A8C;
	// addi r27,r1,256
	ctx.r27.s64 = ctx.r1.s64 + 256;
loc_82E98A8C:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// subf r8,r9,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r9.s64;
	// cmplw cr6,r8,r10
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, xer);
	// bge cr6,0x82e98ae4
	if (!cr6.lt) goto loc_82E98AE4;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// rlwinm r29,r11,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// bne cr6,0x82e98ab0
	if (!cr6.eq) goto loc_82E98AB0;
	// mr r29,r23
	ctx.r29.u64 = ctx.r23.u64;
loc_82E98AB0:
	// add r11,r10,r9
	ctx.r11.u64 = ctx.r10.u64 + ctx.r9.u64;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, xer);
	// bge cr6,0x82e98ad0
	if (!cr6.lt) goto loc_82E98AD0;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_82E98AC4:
	// rlwinm r29,r29,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, xer);
	// blt cr6,0x82e98ac4
	if (cr6.lt) goto loc_82E98AC4;
loc_82E98AD0:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x831d3198
	ctx.lr = 0x82E98ADC;
	sub_831D3198(ctx, base);
	// stw r3,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r3.u32);
	// stw r29,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r29.u32);
loc_82E98AE4:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x831ce980
	ctx.lr = 0x82E98AFC;
	sub_831CE980(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// add r11,r28,r11
	ctx.r11.u64 = ctx.r28.u64 + ctx.r11.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// lwz r10,276(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82e98b1c
	if (cr6.lt) goto loc_82E98B1C;
	// lwz r3,256(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 256);
	// bl 0x82416268
	ctx.lr = 0x82E98B1C;
	sub_82416268(ctx, base);
loc_82E98B1C:
	// lwz r11,228(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 228);
	// addi r4,r24,208
	ctx.r4.s64 = ctx.r24.s64 + 208;
	// stw r26,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r26.u32);
	// stw r31,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,256(r1)
	PPC_STORE_U8(ctx.r1.u32 + 256, ctx.r31.u8);
	// blt cr6,0x82e98b3c
	if (cr6.lt) goto loc_82E98B3C;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_82E98B3C:
	// stw r26,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r26.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r31,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r31.u32);
	// stb r31,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, ctx.r31.u8);
loc_82E98B4C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82e98b4c
	if (!cr6.eq) goto loc_82E98B4C;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82472fc0
	ctx.lr = 0x82E98B70;
	sub_82472FC0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,176(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// bl 0x82e74890
	ctx.lr = 0x82E98B7C;
	sub_82E74890(ctx, base);
	// lwz r10,176(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// lwz r9,180(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// mr r28,r10
	ctx.r28.u64 = ctx.r10.u64;
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// lwz r27,160(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// bge cr6,0x82e98b98
	if (!cr6.lt) goto loc_82E98B98;
	// addi r27,r1,160
	ctx.r27.s64 = ctx.r1.s64 + 160;
loc_82E98B98:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// subf r8,r9,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r9.s64;
	// cmplw cr6,r8,r10
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, xer);
	// bge cr6,0x82e98bf0
	if (!cr6.lt) goto loc_82E98BF0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// rlwinm r29,r11,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// bne cr6,0x82e98bbc
	if (!cr6.eq) goto loc_82E98BBC;
	// mr r29,r23
	ctx.r29.u64 = ctx.r23.u64;
loc_82E98BBC:
	// add r11,r10,r9
	ctx.r11.u64 = ctx.r10.u64 + ctx.r9.u64;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, xer);
	// bge cr6,0x82e98bdc
	if (!cr6.lt) goto loc_82E98BDC;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_82E98BD0:
	// rlwinm r29,r29,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, xer);
	// blt cr6,0x82e98bd0
	if (cr6.lt) goto loc_82E98BD0;
loc_82E98BDC:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x831d3198
	ctx.lr = 0x82E98BE8;
	sub_831D3198(ctx, base);
	// stw r3,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r3.u32);
	// stw r29,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r29.u32);
loc_82E98BF0:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x831ce980
	ctx.lr = 0x82E98C08;
	sub_831CE980(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// add r11,r28,r11
	ctx.r11.u64 = ctx.r28.u64 + ctx.r11.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// lwz r10,180(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82e98c28
	if (cr6.lt) goto loc_82E98C28;
	// lwz r3,160(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// bl 0x82416268
	ctx.lr = 0x82E98C28;
	sub_82416268(ctx, base);
loc_82E98C28:
	// stw r26,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r26.u32);
	// addi r4,r25,-52
	ctx.r4.s64 = ctx.r25.s64 + -52;
	// stw r31,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r31.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// stb r31,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, ctx.r31.u8);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// stw r26,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r26.u32);
	// stw r31,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r31.u32);
	// stb r31,224(r1)
	PPC_STORE_U8(ctx.r1.u32 + 224, ctx.r31.u8);
	// bl 0x82472fc0
	ctx.lr = 0x82E98C50;
	sub_82472FC0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,240(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 240);
	// bl 0x82e74890
	ctx.lr = 0x82E98C5C;
	sub_82E74890(ctx, base);
	// lwz r10,240(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 240);
	// lwz r11,244(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// mr r28,r10
	ctx.r28.u64 = ctx.r10.u64;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// lwz r27,224(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// bge cr6,0x82e98c78
	if (!cr6.lt) goto loc_82E98C78;
	// addi r27,r1,224
	ctx.r27.s64 = ctx.r1.s64 + 224;
loc_82E98C78:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// subf r8,r9,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r9.s64;
	// cmplw cr6,r8,r10
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, xer);
	// bge cr6,0x82e98cd0
	if (!cr6.lt) goto loc_82E98CD0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// rlwinm r29,r11,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// bne cr6,0x82e98c9c
	if (!cr6.eq) goto loc_82E98C9C;
	// mr r29,r23
	ctx.r29.u64 = ctx.r23.u64;
loc_82E98C9C:
	// add r11,r9,r10
	ctx.r11.u64 = ctx.r9.u64 + ctx.r10.u64;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, xer);
	// bge cr6,0x82e98cbc
	if (!cr6.lt) goto loc_82E98CBC;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_82E98CB0:
	// rlwinm r29,r29,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, xer);
	// blt cr6,0x82e98cb0
	if (cr6.lt) goto loc_82E98CB0;
loc_82E98CBC:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x831d3198
	ctx.lr = 0x82E98CC8;
	sub_831D3198(ctx, base);
	// stw r3,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r3.u32);
	// stw r29,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r29.u32);
loc_82E98CD0:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x831ce980
	ctx.lr = 0x82E98CE8;
	sub_831CE980(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// add r11,r28,r11
	ctx.r11.u64 = ctx.r28.u64 + ctx.r11.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// lwz r10,244(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82e98d08
	if (cr6.lt) goto loc_82E98D08;
	// lwz r3,224(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// bl 0x82416268
	ctx.lr = 0x82E98D08;
	sub_82416268(ctx, base);
loc_82E98D08:
	// lwz r11,256(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 256);
	// addi r4,r24,236
	ctx.r4.s64 = ctx.r24.s64 + 236;
	// stw r26,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r26.u32);
	// stw r31,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,224(r1)
	PPC_STORE_U8(ctx.r1.u32 + 224, ctx.r31.u8);
	// blt cr6,0x82e98d28
	if (cr6.lt) goto loc_82E98D28;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_82E98D28:
	// stw r26,308(r1)
	PPC_STORE_U32(ctx.r1.u32 + 308, ctx.r26.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r31,304(r1)
	PPC_STORE_U32(ctx.r1.u32 + 304, ctx.r31.u32);
	// stb r31,288(r1)
	PPC_STORE_U8(ctx.r1.u32 + 288, ctx.r31.u8);
loc_82E98D38:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82e98d38
	if (!cr6.eq) goto loc_82E98D38;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82472fc0
	ctx.lr = 0x82E98D5C;
	sub_82472FC0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,304(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 304);
	// bl 0x82e74890
	ctx.lr = 0x82E98D68;
	sub_82E74890(ctx, base);
	// lwz r10,304(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 304);
	// lwz r9,308(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 308);
	// mr r28,r10
	ctx.r28.u64 = ctx.r10.u64;
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// lwz r27,288(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 288);
	// bge cr6,0x82e98d84
	if (!cr6.lt) goto loc_82E98D84;
	// addi r27,r1,288
	ctx.r27.s64 = ctx.r1.s64 + 288;
loc_82E98D84:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// subf r8,r9,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r9.s64;
	// cmplw cr6,r8,r10
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, xer);
	// bge cr6,0x82e98ddc
	if (!cr6.lt) goto loc_82E98DDC;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// rlwinm r29,r11,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// bne cr6,0x82e98da8
	if (!cr6.eq) goto loc_82E98DA8;
	// mr r29,r23
	ctx.r29.u64 = ctx.r23.u64;
loc_82E98DA8:
	// add r11,r9,r10
	ctx.r11.u64 = ctx.r9.u64 + ctx.r10.u64;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, xer);
	// bge cr6,0x82e98dc8
	if (!cr6.lt) goto loc_82E98DC8;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_82E98DBC:
	// rlwinm r29,r29,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, xer);
	// blt cr6,0x82e98dbc
	if (cr6.lt) goto loc_82E98DBC;
loc_82E98DC8:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x831d3198
	ctx.lr = 0x82E98DD4;
	sub_831D3198(ctx, base);
	// stw r3,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r3.u32);
	// stw r29,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r29.u32);
loc_82E98DDC:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x831ce980
	ctx.lr = 0x82E98DF4;
	sub_831CE980(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// add r11,r28,r11
	ctx.r11.u64 = ctx.r28.u64 + ctx.r11.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// lwz r10,308(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 308);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82e98e14
	if (cr6.lt) goto loc_82E98E14;
	// lwz r3,288(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 288);
	// bl 0x82416268
	ctx.lr = 0x82E98E14;
	sub_82416268(ctx, base);
loc_82E98E14:
	// stw r26,308(r1)
	PPC_STORE_U32(ctx.r1.u32 + 308, ctx.r26.u32);
	// addi r4,r25,-44
	ctx.r4.s64 = ctx.r25.s64 + -44;
	// stw r31,304(r1)
	PPC_STORE_U32(ctx.r1.u32 + 304, ctx.r31.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// stb r31,288(r1)
	PPC_STORE_U8(ctx.r1.u32 + 288, ctx.r31.u8);
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// stw r26,372(r1)
	PPC_STORE_U32(ctx.r1.u32 + 372, ctx.r26.u32);
	// stw r31,368(r1)
	PPC_STORE_U32(ctx.r1.u32 + 368, ctx.r31.u32);
	// stb r31,352(r1)
	PPC_STORE_U8(ctx.r1.u32 + 352, ctx.r31.u8);
	// bl 0x82472fc0
	ctx.lr = 0x82E98E3C;
	sub_82472FC0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,368(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 368);
	// bl 0x82e74890
	ctx.lr = 0x82E98E48;
	sub_82E74890(ctx, base);
	// lwz r10,368(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 368);
	// lwz r11,372(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 372);
	// mr r28,r10
	ctx.r28.u64 = ctx.r10.u64;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// lwz r27,352(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 352);
	// bge cr6,0x82e98e64
	if (!cr6.lt) goto loc_82E98E64;
	// addi r27,r1,352
	ctx.r27.s64 = ctx.r1.s64 + 352;
loc_82E98E64:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// subf r8,r9,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r9.s64;
	// cmplw cr6,r8,r10
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, xer);
	// bge cr6,0x82e98ebc
	if (!cr6.lt) goto loc_82E98EBC;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// rlwinm r29,r11,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// bne cr6,0x82e98e88
	if (!cr6.eq) goto loc_82E98E88;
	// mr r29,r23
	ctx.r29.u64 = ctx.r23.u64;
loc_82E98E88:
	// add r11,r9,r10
	ctx.r11.u64 = ctx.r9.u64 + ctx.r10.u64;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, xer);
	// bge cr6,0x82e98ea8
	if (!cr6.lt) goto loc_82E98EA8;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_82E98E9C:
	// rlwinm r29,r29,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, xer);
	// blt cr6,0x82e98e9c
	if (cr6.lt) goto loc_82E98E9C;
loc_82E98EA8:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x831d3198
	ctx.lr = 0x82E98EB4;
	sub_831D3198(ctx, base);
	// stw r3,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r3.u32);
	// stw r29,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r29.u32);
loc_82E98EBC:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x831ce980
	ctx.lr = 0x82E98ED4;
	sub_831CE980(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// add r11,r28,r11
	ctx.r11.u64 = ctx.r28.u64 + ctx.r11.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// lwz r10,372(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 372);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82e98ef4
	if (cr6.lt) goto loc_82E98EF4;
	// lwz r3,352(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 352);
	// bl 0x82416268
	ctx.lr = 0x82E98EF4;
	sub_82416268(ctx, base);
loc_82E98EF4:
	// lwz r11,284(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 284);
	// addi r4,r24,264
	ctx.r4.s64 = ctx.r24.s64 + 264;
	// stw r26,372(r1)
	PPC_STORE_U32(ctx.r1.u32 + 372, ctx.r26.u32);
	// stw r31,368(r1)
	PPC_STORE_U32(ctx.r1.u32 + 368, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,352(r1)
	PPC_STORE_U8(ctx.r1.u32 + 352, ctx.r31.u8);
	// blt cr6,0x82e98f14
	if (cr6.lt) goto loc_82E98F14;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_82E98F14:
	// stw r26,564(r1)
	PPC_STORE_U32(ctx.r1.u32 + 564, ctx.r26.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r31,560(r1)
	PPC_STORE_U32(ctx.r1.u32 + 560, ctx.r31.u32);
	// stb r31,544(r1)
	PPC_STORE_U8(ctx.r1.u32 + 544, ctx.r31.u8);
loc_82E98F24:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82e98f24
	if (!cr6.eq) goto loc_82E98F24;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,544
	ctx.r3.s64 = ctx.r1.s64 + 544;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82472fc0
	ctx.lr = 0x82E98F48;
	sub_82472FC0(ctx, base);
	// addi r4,r1,544
	ctx.r4.s64 = ctx.r1.s64 + 544;
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// bl 0x82e74c08
	ctx.lr = 0x82E98F54;
	sub_82E74C08(ctx, base);
	// lwz r10,564(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 564);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82e98f68
	if (cr6.lt) goto loc_82E98F68;
	// lwz r3,544(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 544);
	// bl 0x82416268
	ctx.lr = 0x82E98F68;
	sub_82416268(ctx, base);
loc_82E98F68:
	// stw r26,564(r1)
	PPC_STORE_U32(ctx.r1.u32 + 564, ctx.r26.u32);
	// addi r4,r25,-32
	ctx.r4.s64 = ctx.r25.s64 + -32;
	// stw r31,560(r1)
	PPC_STORE_U32(ctx.r1.u32 + 560, ctx.r31.u32);
	// li r5,15
	ctx.r5.s64 = 15;
	// stb r31,544(r1)
	PPC_STORE_U8(ctx.r1.u32 + 544, ctx.r31.u8);
	// addi r3,r1,608
	ctx.r3.s64 = ctx.r1.s64 + 608;
	// stw r26,628(r1)
	PPC_STORE_U32(ctx.r1.u32 + 628, ctx.r26.u32);
	// stw r31,624(r1)
	PPC_STORE_U32(ctx.r1.u32 + 624, ctx.r31.u32);
	// stb r31,608(r1)
	PPC_STORE_U8(ctx.r1.u32 + 608, ctx.r31.u8);
	// bl 0x82472fc0
	ctx.lr = 0x82E98F90;
	sub_82472FC0(ctx, base);
	// addi r4,r1,608
	ctx.r4.s64 = ctx.r1.s64 + 608;
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// bl 0x82e74c08
	ctx.lr = 0x82E98F9C;
	sub_82E74C08(ctx, base);
	// lwz r11,628(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 628);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82e98fb0
	if (cr6.lt) goto loc_82E98FB0;
	// lwz r3,608(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 608);
	// bl 0x82416268
	ctx.lr = 0x82E98FB0;
	sub_82416268(ctx, base);
loc_82E98FB0:
	// lwz r11,312(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 312);
	// addi r4,r24,292
	ctx.r4.s64 = ctx.r24.s64 + 292;
	// stw r26,628(r1)
	PPC_STORE_U32(ctx.r1.u32 + 628, ctx.r26.u32);
	// stw r31,624(r1)
	PPC_STORE_U32(ctx.r1.u32 + 624, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,608(r1)
	PPC_STORE_U8(ctx.r1.u32 + 608, ctx.r31.u8);
	// blt cr6,0x82e98fd0
	if (cr6.lt) goto loc_82E98FD0;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_82E98FD0:
	// stw r26,692(r1)
	PPC_STORE_U32(ctx.r1.u32 + 692, ctx.r26.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r31,688(r1)
	PPC_STORE_U32(ctx.r1.u32 + 688, ctx.r31.u32);
	// stb r31,672(r1)
	PPC_STORE_U8(ctx.r1.u32 + 672, ctx.r31.u8);
loc_82E98FE0:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82e98fe0
	if (!cr6.eq) goto loc_82E98FE0;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,672
	ctx.r3.s64 = ctx.r1.s64 + 672;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82472fc0
	ctx.lr = 0x82E99004;
	sub_82472FC0(ctx, base);
	// addi r4,r1,672
	ctx.r4.s64 = ctx.r1.s64 + 672;
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// bl 0x82e74c08
	ctx.lr = 0x82E99010;
	sub_82E74C08(ctx, base);
	// lwz r10,692(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 692);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82e99024
	if (cr6.lt) goto loc_82E99024;
	// lwz r3,672(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 672);
	// bl 0x82416268
	ctx.lr = 0x82E99024;
	sub_82416268(ctx, base);
loc_82E99024:
	// stw r26,692(r1)
	PPC_STORE_U32(ctx.r1.u32 + 692, ctx.r26.u32);
	// addi r4,r25,-16
	ctx.r4.s64 = ctx.r25.s64 + -16;
	// stw r31,688(r1)
	PPC_STORE_U32(ctx.r1.u32 + 688, ctx.r31.u32);
	// li r5,15
	ctx.r5.s64 = 15;
	// stb r31,672(r1)
	PPC_STORE_U8(ctx.r1.u32 + 672, ctx.r31.u8);
	// addi r3,r1,736
	ctx.r3.s64 = ctx.r1.s64 + 736;
	// stw r26,756(r1)
	PPC_STORE_U32(ctx.r1.u32 + 756, ctx.r26.u32);
	// stw r31,752(r1)
	PPC_STORE_U32(ctx.r1.u32 + 752, ctx.r31.u32);
	// stb r31,736(r1)
	PPC_STORE_U8(ctx.r1.u32 + 736, ctx.r31.u8);
	// bl 0x82472fc0
	ctx.lr = 0x82E9904C;
	sub_82472FC0(ctx, base);
	// addi r4,r1,736
	ctx.r4.s64 = ctx.r1.s64 + 736;
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// bl 0x82e74c08
	ctx.lr = 0x82E99058;
	sub_82E74C08(ctx, base);
	// lwz r11,756(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 756);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82e9906c
	if (cr6.lt) goto loc_82E9906C;
	// lwz r3,736(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 736);
	// bl 0x82416268
	ctx.lr = 0x82E9906C;
	sub_82416268(ctx, base);
loc_82E9906C:
	// lwz r11,340(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 340);
	// addi r4,r24,320
	ctx.r4.s64 = ctx.r24.s64 + 320;
	// stw r26,756(r1)
	PPC_STORE_U32(ctx.r1.u32 + 756, ctx.r26.u32);
	// stw r31,752(r1)
	PPC_STORE_U32(ctx.r1.u32 + 752, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,736(r1)
	PPC_STORE_U8(ctx.r1.u32 + 736, ctx.r31.u8);
	// blt cr6,0x82e9908c
	if (cr6.lt) goto loc_82E9908C;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_82E9908C:
	// stw r26,820(r1)
	PPC_STORE_U32(ctx.r1.u32 + 820, ctx.r26.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r31,816(r1)
	PPC_STORE_U32(ctx.r1.u32 + 816, ctx.r31.u32);
	// stb r31,800(r1)
	PPC_STORE_U8(ctx.r1.u32 + 800, ctx.r31.u8);
loc_82E9909C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82e9909c
	if (!cr6.eq) goto loc_82E9909C;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,800
	ctx.r3.s64 = ctx.r1.s64 + 800;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82472fc0
	ctx.lr = 0x82E990C0;
	sub_82472FC0(ctx, base);
	// addi r4,r1,800
	ctx.r4.s64 = ctx.r1.s64 + 800;
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// bl 0x82e74c08
	ctx.lr = 0x82E990CC;
	sub_82E74C08(ctx, base);
	// lwz r10,820(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 820);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82e990e0
	if (cr6.lt) goto loc_82E990E0;
	// lwz r3,800(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 800);
	// bl 0x82416268
	ctx.lr = 0x82E990E0;
	sub_82416268(ctx, base);
loc_82E990E0:
	// stw r26,820(r1)
	PPC_STORE_U32(ctx.r1.u32 + 820, ctx.r26.u32);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// stw r31,816(r1)
	PPC_STORE_U32(ctx.r1.u32 + 816, ctx.r31.u32);
	// addi r3,r1,864
	ctx.r3.s64 = ctx.r1.s64 + 864;
	// stb r31,800(r1)
	PPC_STORE_U8(ctx.r1.u32 + 800, ctx.r31.u8);
	// bl 0x82475d40
	ctx.lr = 0x82E990F8;
	sub_82475D40(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// bl 0x82e74c08
	ctx.lr = 0x82E99104;
	sub_82E74C08(ctx, base);
	// lwz r11,884(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 884);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82e99118
	if (cr6.lt) goto loc_82E99118;
	// lwz r3,864(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 864);
	// bl 0x82416268
	ctx.lr = 0x82E99118;
	sub_82416268(ctx, base);
loc_82E99118:
	// stw r26,884(r1)
	PPC_STORE_U32(ctx.r1.u32 + 884, ctx.r26.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r31,880(r1)
	PPC_STORE_U32(ctx.r1.u32 + 880, ctx.r31.u32);
	// stb r31,864(r1)
	PPC_STORE_U8(ctx.r1.u32 + 864, ctx.r31.u8);
	// lwz r4,348(r24)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r24.u32 + 348);
	// bl 0x82e746c0
	ctx.lr = 0x82E99130;
	sub_82E746C0(ctx, base);
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// bl 0x831cf100
	ctx.lr = 0x82E99138;
	sub_831CF100(ctx, base);
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// bl 0x831cf100
	ctx.lr = 0x82E99140;
	sub_831CF100(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,976
	ctx.r1.s64 = ctx.r1.s64 + 976;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E9914C"))) PPC_WEAK_FUNC(sub_82E9914C);
PPC_FUNC_IMPL(__imp__sub_82E9914C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E99150"))) PPC_WEAK_FUNC(sub_82E99150);
PPC_FUNC_IMPL(__imp__sub_82E99150) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdab0
	ctx.lr = 0x82E99158;
	__savegprlr_14(ctx, base);
	// stwu r1,-1184(r1)
	ea = -1184 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r23,0
	ctx.r23.s64 = 0;
	// lwz r5,4(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r17,r3
	ctx.r17.u64 = ctx.r3.u64;
	// stw r23,688(r1)
	PPC_STORE_U32(ctx.r1.u32 + 688, ctx.r23.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r23,704(r1)
	PPC_STORE_U32(ctx.r1.u32 + 704, ctx.r23.u32);
	// addi r3,r1,688
	ctx.r3.s64 = ctx.r1.s64 + 688;
	// bl 0x83691bb8
	ctx.lr = 0x82E99180;
	sub_83691BB8(ctx, base);
	// lwz r10,696(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 696);
	// lwz r11,700(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 700);
	// rlwinm r10,r10,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// mr r14,r11
	ctx.r14.u64 = ctx.r11.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r10,220(r1)
	PPC_STORE_U32(ctx.r1.u32 + 220, ctx.r10.u32);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x82e99eb4
	if (!cr6.lt) goto loc_82E99EB4;
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r8,11
	ctx.r8.s64 = 720896;
	// lis r9,-32204
	ctx.r9.s64 = -2110521344;
	// addi r31,r11,32704
	ctx.r31.s64 = ctx.r11.s64 + 32704;
	// li r16,15
	ctx.r16.s64 = 15;
	// li r24,4
	ctx.r24.s64 = 4;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// ori r19,r8,1
	ctx.r19.u64 = ctx.r8.u64 | 1;
	// addi r20,r10,8980
	ctx.r20.s64 = ctx.r10.s64 + 8980;
	// addi r21,r9,26164
	ctx.r21.s64 = ctx.r9.s64 + 26164;
	// b 0x82e991d4
	goto loc_82E991D4;
loc_82E991D0:
	// lwz r31,80(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82E991D4:
	// stw r16,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r16.u32);
	// addi r11,r1,992
	ctx.r11.s64 = ctx.r1.s64 + 992;
	// stw r23,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r23.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stb r23,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r23.u8);
	// ld r10,8(r14)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r14.u32 + 8);
	// ld r9,0(r14)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r14.u32 + 0);
	// std r9,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r9.u64);
	// std r10,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r10.u64);
	// lwz r5,1000(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1000);
	// lwz r4,1004(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1004);
	// bl 0x82472fc0
	ctx.lr = 0x82E99204;
	sub_82472FC0(ctx, base);
	// addi r6,r31,-148
	ctx.r6.s64 = ctx.r31.s64 + -148;
	// lwz r5,112(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// li r7,5
	ctx.r7.s64 = 5;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x827a8810
	ctx.lr = 0x82E9921C;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82e992b4
	if (!cr6.eq) goto loc_82E992B4;
	// stb r23,320(r1)
	PPC_STORE_U8(ctx.r1.u32 + 320, ctx.r23.u8);
	// addi r11,r1,848
	ctx.r11.s64 = ctx.r1.s64 + 848;
	// stw r16,340(r1)
	PPC_STORE_U32(ctx.r1.u32 + 340, ctx.r16.u32);
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// stw r23,336(r1)
	PPC_STORE_U32(ctx.r1.u32 + 336, ctx.r23.u32);
	// addi r10,r14,16
	ctx.r10.s64 = ctx.r14.s64 + 16;
	// ld r8,16(r14)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r14.u32 + 16);
	// std r8,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r8.u64);
	// ld r9,24(r14)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r14.u32 + 24);
	// std r9,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r9.u64);
	// lwz r4,860(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 860);
	// lwz r5,856(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 856);
	// bl 0x82472fc0
	ctx.lr = 0x82E99258;
	sub_82472FC0(ctx, base);
	// lwz r7,340(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 340);
	// lwz r4,320(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 320);
	// cmplwi cr6,r7,16
	cr6.compare<uint32_t>(ctx.r7.u32, 16, xer);
	// bge cr6,0x82e9926c
	if (!cr6.lt) goto loc_82E9926C;
	// addi r4,r1,320
	ctx.r4.s64 = ctx.r1.s64 + 320;
loc_82E9926C:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82E99270:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82e99270
	if (!cr6.eq) goto loc_82E99270;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r17,20
	ctx.r3.s64 = ctx.r17.s64 + 20;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x82E99294;
	sub_824208C8(ctx, base);
	// lwz r10,340(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 340);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82e992a8
	if (cr6.lt) goto loc_82E992A8;
	// lwz r3,320(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 320);
	// bl 0x82416268
	ctx.lr = 0x82E992A8;
	sub_82416268(ctx, base);
loc_82E992A8:
	// stw r16,340(r1)
	PPC_STORE_U32(ctx.r1.u32 + 340, ctx.r16.u32);
	// stw r23,336(r1)
	PPC_STORE_U32(ctx.r1.u32 + 336, ctx.r23.u32);
	// stb r23,320(r1)
	PPC_STORE_U8(ctx.r1.u32 + 320, ctx.r23.u8);
loc_82E992B4:
	// addi r6,r31,-140
	ctx.r6.s64 = ctx.r31.s64 + -140;
	// lwz r5,112(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// li r7,4
	ctx.r7.s64 = 4;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x827a8810
	ctx.lr = 0x82E992CC;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82e9930c
	if (!cr6.eq) goto loc_82E9930C;
	// ld r9,24(r14)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r14.u32 + 24);
	// addi r10,r1,880
	ctx.r10.s64 = ctx.r1.s64 + 880;
	// ld r11,16(r14)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r14.u32 + 16);
	// addi r8,r14,16
	ctx.r8.s64 = ctx.r14.s64 + 16;
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// lwz r7,880(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 880);
	// cmpwi cr6,r7,2
	cr6.compare<int32_t>(ctx.r7.s32, 2, xer);
	// bne cr6,0x82e99304
	if (!cr6.eq) goto loc_82E99304;
	// ld r11,888(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 888);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x82e99308
	goto loc_82E99308;
loc_82E99304:
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
loc_82E99308:
	// stw r11,48(r17)
	PPC_STORE_U32(ctx.r17.u32 + 48, ctx.r11.u32);
loc_82E9930C:
	// addi r6,r31,-132
	ctx.r6.s64 = ctx.r31.s64 + -132;
	// lwz r5,112(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// li r7,3
	ctx.r7.s64 = 3;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x827a8810
	ctx.lr = 0x82E99324;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82e99364
	if (!cr6.eq) goto loc_82E99364;
	// ld r11,16(r14)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r14.u32 + 16);
	// addi r10,r1,912
	ctx.r10.s64 = ctx.r1.s64 + 912;
	// ld r9,24(r14)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r14.u32 + 24);
	// addi r8,r14,16
	ctx.r8.s64 = ctx.r14.s64 + 16;
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lwz r7,912(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 912);
	// cmpwi cr6,r7,2
	cr6.compare<int32_t>(ctx.r7.s32, 2, xer);
	// bne cr6,0x82e9935c
	if (!cr6.eq) goto loc_82E9935C;
	// ld r11,920(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 920);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x82e99360
	goto loc_82E99360;
loc_82E9935C:
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
loc_82E99360:
	// stw r11,156(r17)
	PPC_STORE_U32(ctx.r17.u32 + 156, ctx.r11.u32);
loc_82E99364:
	// addi r6,r31,-128
	ctx.r6.s64 = ctx.r31.s64 + -128;
	// lwz r5,112(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// li r7,4
	ctx.r7.s64 = 4;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x827a8810
	ctx.lr = 0x82E9937C;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82e99a68
	if (!cr6.eq) goto loc_82E99A68;
	// stw r23,736(r1)
	PPC_STORE_U32(ctx.r1.u32 + 736, ctx.r23.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r23,752(r1)
	PPC_STORE_U32(ctx.r1.u32 + 752, ctx.r23.u32);
	// addi r3,r1,736
	ctx.r3.s64 = ctx.r1.s64 + 736;
	// lwz r5,24(r14)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r14.u32 + 24);
	// lwz r4,28(r14)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r14.u32 + 28);
	// bl 0x83691bb8
	ctx.lr = 0x82E993A0;
	sub_83691BB8(ctx, base);
	// lwz r10,744(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 744);
	// lwz r11,748(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 748);
	// rlwinm r10,r10,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x82e99a4c
	if (!cr6.lt) goto loc_82E99A4C;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// addi r18,r11,28
	ctx.r18.s64 = ctx.r11.s64 + 28;
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
	// rlwinm r11,r11,27,5,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x7FFFFFF;
	// addi r15,r11,1
	ctx.r15.s64 = ctx.r11.s64 + 1;
loc_82E993CC:
	// stw r16,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r16.u32);
	// addi r11,r1,944
	ctx.r11.s64 = ctx.r1.s64 + 944;
	// stw r23,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r23.u32);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// stb r23,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, ctx.r23.u8);
	// addi r10,r18,-28
	ctx.r10.s64 = ctx.r18.s64 + -28;
	// ld r9,-28(r18)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r18.u32 + -28);
	// ld r8,-20(r18)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r18.u32 + -20);
	// std r9,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r9.u64);
	// std r8,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r8.u64);
	// lwz r5,952(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 952);
	// lwz r4,956(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 956);
	// bl 0x82472fc0
	ctx.lr = 0x82E99400;
	sub_82472FC0(ctx, base);
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r7,6
	ctx.r7.s64 = 6;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,176(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// addi r6,r6,-120
	ctx.r6.s64 = ctx.r6.s64 + -120;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x827a8810
	ctx.lr = 0x82E9941C;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82e99760
	if (!cr6.eq) goto loc_82E99760;
	// stw r23,768(r1)
	PPC_STORE_U32(ctx.r1.u32 + 768, ctx.r23.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r23,784(r1)
	PPC_STORE_U32(ctx.r1.u32 + 784, ctx.r23.u32);
	// addi r3,r1,768
	ctx.r3.s64 = ctx.r1.s64 + 768;
	// lwz r5,-4(r18)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r18.u32 + -4);
	// lwz r4,0(r18)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r18.u32 + 0);
	// bl 0x83691bb8
	ctx.lr = 0x82E99440;
	sub_83691BB8(ctx, base);
	// lwz r10,776(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 776);
	// lwz r11,780(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 780);
	// rlwinm r10,r10,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x82e99744
	if (!cr6.lt) goto loc_82E99744;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// addi r25,r11,16
	ctx.r25.s64 = ctx.r11.s64 + 16;
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
	// rlwinm r11,r11,27,5,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x7FFFFFF;
	// addi r22,r11,1
	ctx.r22.s64 = ctx.r11.s64 + 1;
loc_82E9946C:
	// stw r16,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r16.u32);
	// addi r11,r1,976
	ctx.r11.s64 = ctx.r1.s64 + 976;
	// stw r23,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r23.u32);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// stb r23,192(r1)
	PPC_STORE_U8(ctx.r1.u32 + 192, ctx.r23.u8);
	// addi r10,r25,-16
	ctx.r10.s64 = ctx.r25.s64 + -16;
	// ld r9,-16(r25)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r25.u32 + -16);
	// ld r8,-8(r25)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r25.u32 + -8);
	// std r9,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r9.u64);
	// std r8,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r8.u64);
	// lwz r4,988(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 988);
	// lwz r5,984(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 984);
	// bl 0x82472fc0
	ctx.lr = 0x82E994A0;
	sub_82472FC0(ctx, base);
	// lwz r31,80(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r7,4
	ctx.r7.s64 = 4;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,208(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// addi r6,r31,-112
	ctx.r6.s64 = ctx.r31.s64 + -112;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x827a8810
	ctx.lr = 0x82E994BC;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82e99550
	if (!cr6.eq) goto loc_82E99550;
	// stw r16,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r16.u32);
	// addi r11,r1,1008
	ctx.r11.s64 = ctx.r1.s64 + 1008;
	// stw r23,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r23.u32);
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// stb r23,256(r1)
	PPC_STORE_U8(ctx.r1.u32 + 256, ctx.r23.u8);
	// ld r10,0(r25)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r25.u32 + 0);
	// ld r9,8(r25)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r25.u32 + 8);
	// std r10,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r10.u64);
	// std r9,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r9.u64);
	// lwz r5,1016(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1016);
	// lwz r4,1020(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1020);
	// bl 0x82472fc0
	ctx.lr = 0x82E994F4;
	sub_82472FC0(ctx, base);
	// lwz r8,276(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	// lwz r4,256(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 256);
	// cmplwi cr6,r8,16
	cr6.compare<uint32_t>(ctx.r8.u32, 16, xer);
	// bge cr6,0x82e99508
	if (!cr6.lt) goto loc_82E99508;
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
loc_82E99508:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82E9950C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82e9950c
	if (!cr6.eq) goto loc_82E9950C;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r17,160
	ctx.r3.s64 = ctx.r17.s64 + 160;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x82E99530;
	sub_824208C8(ctx, base);
	// lwz r10,276(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82e99544
	if (cr6.lt) goto loc_82E99544;
	// lwz r3,256(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 256);
	// bl 0x82416268
	ctx.lr = 0x82E99544;
	sub_82416268(ctx, base);
loc_82E99544:
	// stw r16,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r16.u32);
	// stw r23,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r23.u32);
	// stb r23,256(r1)
	PPC_STORE_U8(ctx.r1.u32 + 256, ctx.r23.u8);
loc_82E99550:
	// addi r6,r31,-104
	ctx.r6.s64 = ctx.r31.s64 + -104;
	// lwz r5,208(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// li r7,4
	ctx.r7.s64 = 4;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x827a8810
	ctx.lr = 0x82E99568;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82e995b8
	if (!cr6.eq) goto loc_82E995B8;
	// ld r11,8(r25)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r25.u32 + 8);
	// addi r10,r1,640
	ctx.r10.s64 = ctx.r1.s64 + 640;
	// ld r9,0(r25)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r25.u32 + 0);
	// std r11,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r11.u64);
	// std r9,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// lwz r11,640(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 640);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bne cr6,0x82e9959c
	if (!cr6.eq) goto loc_82E9959C;
	// ld r11,648(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 648);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x82e995b4
	goto loc_82E995B4;
loc_82E9959C:
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// bne cr6,0x82e995b0
	if (!cr6.eq) goto loc_82E995B0;
	// ld r11,648(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 648);
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// b 0x82e995b4
	goto loc_82E995B4;
loc_82E995B0:
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
loc_82E995B4:
	// stw r11,188(r17)
	PPC_STORE_U32(ctx.r17.u32 + 188, ctx.r11.u32);
loc_82E995B8:
	// addi r6,r31,-96
	ctx.r6.s64 = ctx.r31.s64 + -96;
	// lwz r5,208(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// li r7,5
	ctx.r7.s64 = 5;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x827a8810
	ctx.lr = 0x82E995D0;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82e99718
	if (!cr6.eq) goto loc_82E99718;
	// addi r31,r17,192
	ctx.r31.s64 = ctx.r17.s64 + 192;
	// stw r21,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r21.u32);
	// stw r24,588(r1)
	PPC_STORE_U32(ctx.r1.u32 + 588, ctx.r24.u32);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r30,r31,8
	ctx.r30.s64 = ctx.r31.s64 + 8;
	// stw r31,580(r1)
	PPC_STORE_U32(ctx.r1.u32 + 580, ctx.r31.u32);
	// addi r29,r31,4
	ctx.r29.s64 = ctx.r31.s64 + 4;
	// stw r24,592(r1)
	PPC_STORE_U32(ctx.r1.u32 + 592, ctx.r24.u32);
	// stw r30,576(r1)
	PPC_STORE_U32(ctx.r1.u32 + 576, ctx.r30.u32);
	// addi r3,r1,576
	ctx.r3.s64 = ctx.r1.s64 + 576;
	// stw r29,584(r1)
	PPC_STORE_U32(ctx.r1.u32 + 584, ctx.r29.u32);
	// bl 0x8247b7d8
	ctx.lr = 0x82E99608;
	sub_8247B7D8(ctx, base);
	// lwz r3,200(r17)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r17.u32 + 200);
	// stw r23,192(r17)
	PPC_STORE_U32(ctx.r17.u32 + 192, ctx.r23.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82e99628
	if (cr6.eq) goto loc_82E99628;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// bl 0x8247b268
	ctx.lr = 0x82E99620;
	sub_8247B268(ctx, base);
	// stw r23,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r23.u32);
	// stw r23,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r23.u32);
loc_82E99628:
	// stw r20,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r20.u32);
	// lwz r11,8(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	// rlwinm r10,r11,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r11,12(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 12);
	// add r26,r10,r11
	ctx.r26.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r27,r11
	ctx.r27.u64 = ctx.r11.u64;
	// cmplw cr6,r11,r26
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, xer);
	// bge cr6,0x82e99718
	if (!cr6.lt) goto loc_82E99718;
loc_82E99648:
	// ld r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r27.u32 + 0);
	// addi r10,r1,656
	ctx.r10.s64 = ctx.r1.s64 + 656;
	// ld r9,8(r27)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r27.u32 + 8);
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lwz r11,656(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 656);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bne cr6,0x82e99674
	if (!cr6.eq) goto loc_82E99674;
	// ld r11,664(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 664);
	// rotlwi r28,r11,0
	ctx.r28.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x82e9968c
	goto loc_82E9968C;
loc_82E99674:
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// bne cr6,0x82e99688
	if (!cr6.eq) goto loc_82E99688;
	// ld r11,664(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 664);
	// extsw r28,r11
	ctx.r28.s64 = ctx.r11.s32;
	// b 0x82e9968c
	goto loc_82E9968C;
loc_82E99688:
	// mr r28,r23
	ctx.r28.u64 = ctx.r23.u64;
loc_82E9968C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x82e996e8
	if (cr6.lt) goto loc_82E996E8;
	// addi r4,r11,2
	ctx.r4.s64 = ctx.r11.s64 + 2;
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// ble cr6,0x82e996d8
	if (!cr6.gt) goto loc_82E996D8;
	// stw r30,480(r1)
	PPC_STORE_U32(ctx.r1.u32 + 480, ctx.r30.u32);
	// addi r6,r1,140
	ctx.r6.s64 = ctx.r1.s64 + 140;
	// stw r31,484(r1)
	PPC_STORE_U32(ctx.r1.u32 + 484, ctx.r31.u32);
	// mr r5,r19
	ctx.r5.u64 = ctx.r19.u64;
	// stw r29,488(r1)
	PPC_STORE_U32(ctx.r1.u32 + 488, ctx.r29.u32);
	// addi r3,r1,480
	ctx.r3.s64 = ctx.r1.s64 + 480;
	// stw r24,492(r1)
	PPC_STORE_U32(ctx.r1.u32 + 492, ctx.r24.u32);
	// stw r24,496(r1)
	PPC_STORE_U32(ctx.r1.u32 + 496, ctx.r24.u32);
	// stw r21,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r21.u32);
	// bl 0x8247b270
	ctx.lr = 0x82E996D0;
	sub_8247B270(ctx, base);
	// stw r20,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r20.u32);
	// b 0x82e996dc
	goto loc_82E996DC;
loc_82E996D8:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82E996DC:
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82e9970c
	if (cr6.eq) goto loc_82E9970C;
loc_82E996E8:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x82e99700
	if (cr0.eq) goto loc_82E99700;
	// stw r28,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r28.u32);
loc_82E99700:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_82E9970C:
	// addi r27,r27,16
	ctx.r27.s64 = ctx.r27.s64 + 16;
	// cmplw cr6,r27,r26
	cr6.compare<uint32_t>(ctx.r27.u32, ctx.r26.u32, xer);
	// blt cr6,0x82e99648
	if (cr6.lt) goto loc_82E99648;
loc_82E99718:
	// lwz r11,212(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82e9972c
	if (cr6.lt) goto loc_82E9972C;
	// lwz r3,192(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// bl 0x82416268
	ctx.lr = 0x82E9972C;
	sub_82416268(ctx, base);
loc_82E9972C:
	// addic. r22,r22,-1
	xer.ca = ctx.r22.u32 > 0;
	ctx.r22.s64 = ctx.r22.s64 + -1;
	cr0.compare<int32_t>(ctx.r22.s32, 0, xer);
	// stw r16,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r16.u32);
	// stw r23,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r23.u32);
	// addi r25,r25,32
	ctx.r25.s64 = ctx.r25.s64 + 32;
	// stb r23,192(r1)
	PPC_STORE_U8(ctx.r1.u32 + 192, ctx.r23.u8);
	// bne 0x82e9946c
	if (!cr0.eq) goto loc_82E9946C;
loc_82E99744:
	// lwz r31,784(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 784);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x82e99760
	if (cr6.eq) goto loc_82E99760;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839e56b8
	ctx.lr = 0x82E99758;
	sub_839E56B8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82416268
	ctx.lr = 0x82E99760;
	sub_82416268(ctx, base);
loc_82E99760:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r7,3
	ctx.r7.s64 = 3;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,176(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// addi r6,r11,-88
	ctx.r6.s64 = ctx.r11.s64 + -88;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x827a8810
	ctx.lr = 0x82E9977C;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82e998c0
	if (!cr6.eq) goto loc_82E998C0;
	// addi r31,r17,208
	ctx.r31.s64 = ctx.r17.s64 + 208;
	// stw r21,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r21.u32);
	// stw r24,460(r1)
	PPC_STORE_U32(ctx.r1.u32 + 460, ctx.r24.u32);
	// addi r4,r1,132
	ctx.r4.s64 = ctx.r1.s64 + 132;
	// addi r30,r31,8
	ctx.r30.s64 = ctx.r31.s64 + 8;
	// stw r31,452(r1)
	PPC_STORE_U32(ctx.r1.u32 + 452, ctx.r31.u32);
	// addi r29,r31,4
	ctx.r29.s64 = ctx.r31.s64 + 4;
	// stw r24,464(r1)
	PPC_STORE_U32(ctx.r1.u32 + 464, ctx.r24.u32);
	// stw r30,448(r1)
	PPC_STORE_U32(ctx.r1.u32 + 448, ctx.r30.u32);
	// addi r3,r1,448
	ctx.r3.s64 = ctx.r1.s64 + 448;
	// stw r29,456(r1)
	PPC_STORE_U32(ctx.r1.u32 + 456, ctx.r29.u32);
	// bl 0x8247b7d8
	ctx.lr = 0x82E997B4;
	sub_8247B7D8(ctx, base);
	// lwz r3,216(r17)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r17.u32 + 216);
	// stw r23,208(r17)
	PPC_STORE_U32(ctx.r17.u32 + 208, ctx.r23.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82e997d4
	if (cr6.eq) goto loc_82E997D4;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// bl 0x8247b268
	ctx.lr = 0x82E997CC;
	sub_8247B268(ctx, base);
	// stw r23,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r23.u32);
	// stw r23,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r23.u32);
loc_82E997D4:
	// stw r20,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r20.u32);
	// lwz r11,-4(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + -4);
	// lwz r28,0(r18)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r18.u32 + 0);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r26,r11,r28
	ctx.r26.u64 = ctx.r11.u64 + ctx.r28.u64;
	// cmplw cr6,r28,r26
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r26.u32, xer);
	// bge cr6,0x82e998c0
	if (!cr6.lt) goto loc_82E998C0;
loc_82E997F0:
	// ld r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r28.u32 + 0);
	// addi r10,r1,672
	ctx.r10.s64 = ctx.r1.s64 + 672;
	// ld r9,8(r28)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r28.u32 + 8);
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lwz r11,672(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 672);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bne cr6,0x82e9981c
	if (!cr6.eq) goto loc_82E9981C;
	// ld r11,680(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 680);
	// rotlwi r27,r11,0
	ctx.r27.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x82e99834
	goto loc_82E99834;
loc_82E9981C:
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// bne cr6,0x82e99830
	if (!cr6.eq) goto loc_82E99830;
	// ld r11,680(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 680);
	// extsw r27,r11
	ctx.r27.s64 = ctx.r11.s32;
	// b 0x82e99834
	goto loc_82E99834;
loc_82E99830:
	// mr r27,r23
	ctx.r27.u64 = ctx.r23.u64;
loc_82E99834:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x82e99890
	if (cr6.lt) goto loc_82E99890;
	// addi r4,r11,2
	ctx.r4.s64 = ctx.r11.s64 + 2;
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// ble cr6,0x82e99880
	if (!cr6.gt) goto loc_82E99880;
	// stw r30,544(r1)
	PPC_STORE_U32(ctx.r1.u32 + 544, ctx.r30.u32);
	// addi r6,r1,136
	ctx.r6.s64 = ctx.r1.s64 + 136;
	// stw r31,548(r1)
	PPC_STORE_U32(ctx.r1.u32 + 548, ctx.r31.u32);
	// mr r5,r19
	ctx.r5.u64 = ctx.r19.u64;
	// stw r29,552(r1)
	PPC_STORE_U32(ctx.r1.u32 + 552, ctx.r29.u32);
	// addi r3,r1,544
	ctx.r3.s64 = ctx.r1.s64 + 544;
	// stw r24,556(r1)
	PPC_STORE_U32(ctx.r1.u32 + 556, ctx.r24.u32);
	// stw r24,560(r1)
	PPC_STORE_U32(ctx.r1.u32 + 560, ctx.r24.u32);
	// stw r21,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r21.u32);
	// bl 0x8247b270
	ctx.lr = 0x82E99878;
	sub_8247B270(ctx, base);
	// stw r20,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r20.u32);
	// b 0x82e99884
	goto loc_82E99884;
loc_82E99880:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82E99884:
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82e998b4
	if (cr6.eq) goto loc_82E998B4;
loc_82E99890:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x82e998a8
	if (cr0.eq) goto loc_82E998A8;
	// stw r27,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r27.u32);
loc_82E998A8:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_82E998B4:
	// addi r28,r28,16
	ctx.r28.s64 = ctx.r28.s64 + 16;
	// cmplw cr6,r28,r26
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r26.u32, xer);
	// blt cr6,0x82e997f0
	if (cr6.lt) goto loc_82E997F0;
loc_82E998C0:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r7,8
	ctx.r7.s64 = 8;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,176(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// addi r6,r11,-84
	ctx.r6.s64 = ctx.r11.s64 + -84;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x827a8810
	ctx.lr = 0x82E998DC;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82e99a20
	if (!cr6.eq) goto loc_82E99A20;
	// addi r31,r17,224
	ctx.r31.s64 = ctx.r17.s64 + 224;
	// stw r21,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r21.u32);
	// stw r24,620(r1)
	PPC_STORE_U32(ctx.r1.u32 + 620, ctx.r24.u32);
	// addi r4,r1,124
	ctx.r4.s64 = ctx.r1.s64 + 124;
	// addi r30,r31,8
	ctx.r30.s64 = ctx.r31.s64 + 8;
	// stw r31,612(r1)
	PPC_STORE_U32(ctx.r1.u32 + 612, ctx.r31.u32);
	// addi r29,r31,4
	ctx.r29.s64 = ctx.r31.s64 + 4;
	// stw r24,624(r1)
	PPC_STORE_U32(ctx.r1.u32 + 624, ctx.r24.u32);
	// stw r30,608(r1)
	PPC_STORE_U32(ctx.r1.u32 + 608, ctx.r30.u32);
	// addi r3,r1,608
	ctx.r3.s64 = ctx.r1.s64 + 608;
	// stw r29,616(r1)
	PPC_STORE_U32(ctx.r1.u32 + 616, ctx.r29.u32);
	// bl 0x8247b7d8
	ctx.lr = 0x82E99914;
	sub_8247B7D8(ctx, base);
	// lwz r3,232(r17)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r17.u32 + 232);
	// stw r23,224(r17)
	PPC_STORE_U32(ctx.r17.u32 + 224, ctx.r23.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82e99934
	if (cr6.eq) goto loc_82E99934;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// bl 0x8247b268
	ctx.lr = 0x82E9992C;
	sub_8247B268(ctx, base);
	// stw r23,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r23.u32);
	// stw r23,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r23.u32);
loc_82E99934:
	// stw r20,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r20.u32);
	// lwz r28,0(r18)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r18.u32 + 0);
	// lwz r11,-4(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + -4);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r26,r11,r28
	ctx.r26.u64 = ctx.r11.u64 + ctx.r28.u64;
	// cmplw cr6,r28,r26
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r26.u32, xer);
	// bge cr6,0x82e99a20
	if (!cr6.lt) goto loc_82E99A20;
loc_82E99950:
	// ld r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r28.u32 + 0);
	// addi r10,r1,720
	ctx.r10.s64 = ctx.r1.s64 + 720;
	// ld r9,8(r28)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r28.u32 + 8);
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lwz r11,720(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 720);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bne cr6,0x82e9997c
	if (!cr6.eq) goto loc_82E9997C;
	// ld r11,728(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 728);
	// rotlwi r27,r11,0
	ctx.r27.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x82e99994
	goto loc_82E99994;
loc_82E9997C:
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// bne cr6,0x82e99990
	if (!cr6.eq) goto loc_82E99990;
	// ld r11,728(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 728);
	// extsw r27,r11
	ctx.r27.s64 = ctx.r11.s32;
	// b 0x82e99994
	goto loc_82E99994;
loc_82E99990:
	// mr r27,r23
	ctx.r27.u64 = ctx.r23.u64;
loc_82E99994:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x82e999f0
	if (cr6.lt) goto loc_82E999F0;
	// addi r4,r11,2
	ctx.r4.s64 = ctx.r11.s64 + 2;
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// ble cr6,0x82e999e0
	if (!cr6.gt) goto loc_82E999E0;
	// stw r30,512(r1)
	PPC_STORE_U32(ctx.r1.u32 + 512, ctx.r30.u32);
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// stw r31,516(r1)
	PPC_STORE_U32(ctx.r1.u32 + 516, ctx.r31.u32);
	// mr r5,r19
	ctx.r5.u64 = ctx.r19.u64;
	// stw r29,520(r1)
	PPC_STORE_U32(ctx.r1.u32 + 520, ctx.r29.u32);
	// addi r3,r1,512
	ctx.r3.s64 = ctx.r1.s64 + 512;
	// stw r24,524(r1)
	PPC_STORE_U32(ctx.r1.u32 + 524, ctx.r24.u32);
	// stw r24,528(r1)
	PPC_STORE_U32(ctx.r1.u32 + 528, ctx.r24.u32);
	// stw r21,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r21.u32);
	// bl 0x8247b270
	ctx.lr = 0x82E999D8;
	sub_8247B270(ctx, base);
	// stw r20,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r20.u32);
	// b 0x82e999e4
	goto loc_82E999E4;
loc_82E999E0:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82E999E4:
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82e99a14
	if (cr6.eq) goto loc_82E99A14;
loc_82E999F0:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x82e99a08
	if (cr0.eq) goto loc_82E99A08;
	// stw r27,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r27.u32);
loc_82E99A08:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_82E99A14:
	// addi r28,r28,16
	ctx.r28.s64 = ctx.r28.s64 + 16;
	// cmplw cr6,r28,r26
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r26.u32, xer);
	// blt cr6,0x82e99950
	if (cr6.lt) goto loc_82E99950;
loc_82E99A20:
	// lwz r11,180(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82e99a34
	if (cr6.lt) goto loc_82E99A34;
	// lwz r3,160(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// bl 0x82416268
	ctx.lr = 0x82E99A34;
	sub_82416268(ctx, base);
loc_82E99A34:
	// addic. r15,r15,-1
	xer.ca = ctx.r15.u32 > 0;
	ctx.r15.s64 = ctx.r15.s64 + -1;
	cr0.compare<int32_t>(ctx.r15.s32, 0, xer);
	// stw r16,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r16.u32);
	// stw r23,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r23.u32);
	// addi r18,r18,32
	ctx.r18.s64 = ctx.r18.s64 + 32;
	// stb r23,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, ctx.r23.u8);
	// bne 0x82e993cc
	if (!cr0.eq) goto loc_82E993CC;
loc_82E99A4C:
	// lwz r31,752(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 752);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x82e99a68
	if (cr6.eq) goto loc_82E99A68;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839e56b8
	ctx.lr = 0x82E99A60;
	sub_839E56B8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82416268
	ctx.lr = 0x82E99A68;
	sub_82416268(ctx, base);
loc_82E99A68:
	// lwz r31,80(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r7,4
	ctx.r7.s64 = 4;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,112(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// addi r6,r31,-72
	ctx.r6.s64 = ctx.r31.s64 + -72;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x827a8810
	ctx.lr = 0x82E99A84;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82e99abc
	if (!cr6.eq) goto loc_82E99ABC;
	// ld r11,16(r14)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r14.u32 + 16);
	// addi r10,r1,832
	ctx.r10.s64 = ctx.r1.s64 + 832;
	// ld r9,24(r14)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r14.u32 + 24);
	// addi r8,r14,16
	ctx.r8.s64 = ctx.r14.s64 + 16;
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lwz r7,832(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 832);
	// ld r11,840(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 840);
	// cmpwi cr6,r7,2
	cr6.compare<int32_t>(ctx.r7.s32, 2, xer);
	// beq cr6,0x82e99ab8
	if (cr6.eq) goto loc_82E99AB8;
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
loc_82E99AB8:
	// std r11,240(r17)
	PPC_STORE_U64(ctx.r17.u32 + 240, ctx.r11.u64);
loc_82E99ABC:
	// addi r6,r31,-64
	ctx.r6.s64 = ctx.r31.s64 + -64;
	// lwz r5,112(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// li r7,8
	ctx.r7.s64 = 8;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x827a8810
	ctx.lr = 0x82E99AD4;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82e99b6c
	if (!cr6.eq) goto loc_82E99B6C;
	// stw r16,308(r1)
	PPC_STORE_U32(ctx.r1.u32 + 308, ctx.r16.u32);
	// addi r11,r1,928
	ctx.r11.s64 = ctx.r1.s64 + 928;
	// stw r23,304(r1)
	PPC_STORE_U32(ctx.r1.u32 + 304, ctx.r23.u32);
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// stb r23,288(r1)
	PPC_STORE_U8(ctx.r1.u32 + 288, ctx.r23.u8);
	// addi r10,r14,16
	ctx.r10.s64 = ctx.r14.s64 + 16;
	// ld r9,24(r14)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r14.u32 + 24);
	// ld r8,16(r14)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r14.u32 + 16);
	// std r9,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r9.u64);
	// std r8,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r8.u64);
	// lwz r5,936(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 936);
	// lwz r4,940(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 940);
	// bl 0x82472fc0
	ctx.lr = 0x82E99B10;
	sub_82472FC0(ctx, base);
	// lwz r7,308(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 308);
	// lwz r4,288(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 288);
	// cmplwi cr6,r7,16
	cr6.compare<uint32_t>(ctx.r7.u32, 16, xer);
	// bge cr6,0x82e99b24
	if (!cr6.lt) goto loc_82E99B24;
	// addi r4,r1,288
	ctx.r4.s64 = ctx.r1.s64 + 288;
loc_82E99B24:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82E99B28:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82e99b28
	if (!cr6.eq) goto loc_82E99B28;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r17,248
	ctx.r3.s64 = ctx.r17.s64 + 248;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x82E99B4C;
	sub_824208C8(ctx, base);
	// lwz r10,308(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 308);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82e99b60
	if (cr6.lt) goto loc_82E99B60;
	// lwz r3,288(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 288);
	// bl 0x82416268
	ctx.lr = 0x82E99B60;
	sub_82416268(ctx, base);
loc_82E99B60:
	// stw r16,308(r1)
	PPC_STORE_U32(ctx.r1.u32 + 308, ctx.r16.u32);
	// stw r23,304(r1)
	PPC_STORE_U32(ctx.r1.u32 + 304, ctx.r23.u32);
	// stb r23,288(r1)
	PPC_STORE_U8(ctx.r1.u32 + 288, ctx.r23.u8);
loc_82E99B6C:
	// addi r6,r31,-52
	ctx.r6.s64 = ctx.r31.s64 + -52;
	// lwz r5,112(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// li r7,4
	ctx.r7.s64 = 4;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x827a8810
	ctx.lr = 0x82E99B84;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82e99c1c
	if (!cr6.eq) goto loc_82E99C1C;
	// stw r16,372(r1)
	PPC_STORE_U32(ctx.r1.u32 + 372, ctx.r16.u32);
	// addi r11,r1,864
	ctx.r11.s64 = ctx.r1.s64 + 864;
	// stw r23,368(r1)
	PPC_STORE_U32(ctx.r1.u32 + 368, ctx.r23.u32);
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// stb r23,352(r1)
	PPC_STORE_U8(ctx.r1.u32 + 352, ctx.r23.u8);
	// addi r10,r14,16
	ctx.r10.s64 = ctx.r14.s64 + 16;
	// ld r9,24(r14)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r14.u32 + 24);
	// ld r8,16(r14)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r14.u32 + 16);
	// std r9,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r9.u64);
	// std r8,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r8.u64);
	// lwz r5,872(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 872);
	// lwz r4,876(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 876);
	// bl 0x82472fc0
	ctx.lr = 0x82E99BC0;
	sub_82472FC0(ctx, base);
	// lwz r7,372(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 372);
	// lwz r4,352(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 352);
	// cmplwi cr6,r7,16
	cr6.compare<uint32_t>(ctx.r7.u32, 16, xer);
	// bge cr6,0x82e99bd4
	if (!cr6.lt) goto loc_82E99BD4;
	// addi r4,r1,352
	ctx.r4.s64 = ctx.r1.s64 + 352;
loc_82E99BD4:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82E99BD8:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82e99bd8
	if (!cr6.eq) goto loc_82E99BD8;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r17,276
	ctx.r3.s64 = ctx.r17.s64 + 276;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x82E99BFC;
	sub_824208C8(ctx, base);
	// lwz r10,372(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 372);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82e99c10
	if (cr6.lt) goto loc_82E99C10;
	// lwz r3,352(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 352);
	// bl 0x82416268
	ctx.lr = 0x82E99C10;
	sub_82416268(ctx, base);
loc_82E99C10:
	// stw r16,372(r1)
	PPC_STORE_U32(ctx.r1.u32 + 372, ctx.r16.u32);
	// stw r23,368(r1)
	PPC_STORE_U32(ctx.r1.u32 + 368, ctx.r23.u32);
	// stb r23,352(r1)
	PPC_STORE_U8(ctx.r1.u32 + 352, ctx.r23.u8);
loc_82E99C1C:
	// addi r6,r31,-44
	ctx.r6.s64 = ctx.r31.s64 + -44;
	// lwz r5,112(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// li r7,8
	ctx.r7.s64 = 8;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x827a8810
	ctx.lr = 0x82E99C34;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82e99ccc
	if (!cr6.eq) goto loc_82E99CCC;
	// stw r16,436(r1)
	PPC_STORE_U32(ctx.r1.u32 + 436, ctx.r16.u32);
	// addi r11,r1,800
	ctx.r11.s64 = ctx.r1.s64 + 800;
	// stw r23,432(r1)
	PPC_STORE_U32(ctx.r1.u32 + 432, ctx.r23.u32);
	// addi r3,r1,416
	ctx.r3.s64 = ctx.r1.s64 + 416;
	// stb r23,416(r1)
	PPC_STORE_U8(ctx.r1.u32 + 416, ctx.r23.u8);
	// addi r10,r14,16
	ctx.r10.s64 = ctx.r14.s64 + 16;
	// ld r9,16(r14)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r14.u32 + 16);
	// ld r8,24(r14)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r14.u32 + 24);
	// std r9,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r9.u64);
	// std r8,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r8.u64);
	// lwz r5,808(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 808);
	// lwz r4,812(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 812);
	// bl 0x82472fc0
	ctx.lr = 0x82E99C70;
	sub_82472FC0(ctx, base);
	// lwz r7,436(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 436);
	// lwz r4,416(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 416);
	// cmplwi cr6,r7,16
	cr6.compare<uint32_t>(ctx.r7.u32, 16, xer);
	// bge cr6,0x82e99c84
	if (!cr6.lt) goto loc_82E99C84;
	// addi r4,r1,416
	ctx.r4.s64 = ctx.r1.s64 + 416;
loc_82E99C84:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82E99C88:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82e99c88
	if (!cr6.eq) goto loc_82E99C88;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r17,304
	ctx.r3.s64 = ctx.r17.s64 + 304;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x82E99CAC;
	sub_824208C8(ctx, base);
	// lwz r10,436(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 436);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82e99cc0
	if (cr6.lt) goto loc_82E99CC0;
	// lwz r3,416(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 416);
	// bl 0x82416268
	ctx.lr = 0x82E99CC0;
	sub_82416268(ctx, base);
loc_82E99CC0:
	// stw r16,436(r1)
	PPC_STORE_U32(ctx.r1.u32 + 436, ctx.r16.u32);
	// stw r23,432(r1)
	PPC_STORE_U32(ctx.r1.u32 + 432, ctx.r23.u32);
	// stb r23,416(r1)
	PPC_STORE_U8(ctx.r1.u32 + 416, ctx.r23.u8);
loc_82E99CCC:
	// addi r6,r31,-32
	ctx.r6.s64 = ctx.r31.s64 + -32;
	// lwz r5,112(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// li r7,15
	ctx.r7.s64 = 15;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x827a8810
	ctx.lr = 0x82E99CE4;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82e99d7c
	if (!cr6.eq) goto loc_82E99D7C;
	// stw r16,404(r1)
	PPC_STORE_U32(ctx.r1.u32 + 404, ctx.r16.u32);
	// addi r11,r1,896
	ctx.r11.s64 = ctx.r1.s64 + 896;
	// stw r23,400(r1)
	PPC_STORE_U32(ctx.r1.u32 + 400, ctx.r23.u32);
	// addi r3,r1,384
	ctx.r3.s64 = ctx.r1.s64 + 384;
	// stb r23,384(r1)
	PPC_STORE_U8(ctx.r1.u32 + 384, ctx.r23.u8);
	// addi r10,r14,16
	ctx.r10.s64 = ctx.r14.s64 + 16;
	// ld r9,16(r14)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r14.u32 + 16);
	// ld r8,24(r14)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r14.u32 + 24);
	// std r9,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r9.u64);
	// std r8,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r8.u64);
	// lwz r5,904(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 904);
	// lwz r4,908(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 908);
	// bl 0x82472fc0
	ctx.lr = 0x82E99D20;
	sub_82472FC0(ctx, base);
	// lwz r7,404(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 404);
	// lwz r4,384(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 384);
	// cmplwi cr6,r7,16
	cr6.compare<uint32_t>(ctx.r7.u32, 16, xer);
	// bge cr6,0x82e99d34
	if (!cr6.lt) goto loc_82E99D34;
	// addi r4,r1,384
	ctx.r4.s64 = ctx.r1.s64 + 384;
loc_82E99D34:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82E99D38:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82e99d38
	if (!cr6.eq) goto loc_82E99D38;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r17,332
	ctx.r3.s64 = ctx.r17.s64 + 332;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x82E99D5C;
	sub_824208C8(ctx, base);
	// lwz r10,404(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 404);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82e99d70
	if (cr6.lt) goto loc_82E99D70;
	// lwz r3,384(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 384);
	// bl 0x82416268
	ctx.lr = 0x82E99D70;
	sub_82416268(ctx, base);
loc_82E99D70:
	// stw r16,404(r1)
	PPC_STORE_U32(ctx.r1.u32 + 404, ctx.r16.u32);
	// stw r23,400(r1)
	PPC_STORE_U32(ctx.r1.u32 + 400, ctx.r23.u32);
	// stb r23,384(r1)
	PPC_STORE_U8(ctx.r1.u32 + 384, ctx.r23.u8);
loc_82E99D7C:
	// addi r6,r31,-16
	ctx.r6.s64 = ctx.r31.s64 + -16;
	// lwz r5,112(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// li r7,15
	ctx.r7.s64 = 15;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x827a8810
	ctx.lr = 0x82E99D94;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82e99e2c
	if (!cr6.eq) goto loc_82E99E2C;
	// stw r16,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r16.u32);
	// addi r11,r1,960
	ctx.r11.s64 = ctx.r1.s64 + 960;
	// stw r23,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r23.u32);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// stb r23,224(r1)
	PPC_STORE_U8(ctx.r1.u32 + 224, ctx.r23.u8);
	// addi r10,r14,16
	ctx.r10.s64 = ctx.r14.s64 + 16;
	// ld r9,16(r14)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r14.u32 + 16);
	// ld r8,24(r14)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r14.u32 + 24);
	// std r9,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r9.u64);
	// std r8,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r8.u64);
	// lwz r5,968(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 968);
	// lwz r4,972(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 972);
	// bl 0x82472fc0
	ctx.lr = 0x82E99DD0;
	sub_82472FC0(ctx, base);
	// lwz r7,244(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// lwz r4,224(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// cmplwi cr6,r7,16
	cr6.compare<uint32_t>(ctx.r7.u32, 16, xer);
	// bge cr6,0x82e99de4
	if (!cr6.lt) goto loc_82E99DE4;
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
loc_82E99DE4:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82E99DE8:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82e99de8
	if (!cr6.eq) goto loc_82E99DE8;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r17,360
	ctx.r3.s64 = ctx.r17.s64 + 360;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x82E99E0C;
	sub_824208C8(ctx, base);
	// lwz r10,244(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82e99e20
	if (cr6.lt) goto loc_82E99E20;
	// lwz r3,224(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// bl 0x82416268
	ctx.lr = 0x82E99E20;
	sub_82416268(ctx, base);
loc_82E99E20:
	// stw r16,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r16.u32);
	// stw r23,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r23.u32);
	// stb r23,224(r1)
	PPC_STORE_U8(ctx.r1.u32 + 224, ctx.r23.u8);
loc_82E99E2C:
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// lwz r5,112(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// li r7,10
	ctx.r7.s64 = 10;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x827a8810
	ctx.lr = 0x82E99E44;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82e99e84
	if (!cr6.eq) goto loc_82E99E84;
	// ld r11,16(r14)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r14.u32 + 16);
	// addi r10,r1,816
	ctx.r10.s64 = ctx.r1.s64 + 816;
	// ld r9,24(r14)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r14.u32 + 24);
	// addi r8,r14,16
	ctx.r8.s64 = ctx.r14.s64 + 16;
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lwz r7,816(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 816);
	// cmpwi cr6,r7,2
	cr6.compare<int32_t>(ctx.r7.s32, 2, xer);
	// bne cr6,0x82e99e7c
	if (!cr6.eq) goto loc_82E99E7C;
	// ld r11,824(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 824);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x82e99e80
	goto loc_82E99E80;
loc_82E99E7C:
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
loc_82E99E80:
	// stw r11,388(r17)
	PPC_STORE_U32(ctx.r17.u32 + 388, ctx.r11.u32);
loc_82E99E84:
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82e99e98
	if (cr6.lt) goto loc_82E99E98;
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x82416268
	ctx.lr = 0x82E99E98;
	sub_82416268(ctx, base);
loc_82E99E98:
	// lwz r11,220(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 220);
	// addi r14,r14,32
	ctx.r14.s64 = ctx.r14.s64 + 32;
	// stw r16,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r16.u32);
	// stw r23,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r23.u32);
	// cmplw cr6,r14,r11
	cr6.compare<uint32_t>(ctx.r14.u32, ctx.r11.u32, xer);
	// stb r23,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r23.u8);
	// blt cr6,0x82e991d0
	if (cr6.lt) goto loc_82E991D0;
loc_82E99EB4:
	// lwz r31,704(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 704);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x82e99ed0
	if (cr6.eq) goto loc_82E99ED0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839e56b8
	ctx.lr = 0x82E99EC8;
	sub_839E56B8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82416268
	ctx.lr = 0x82E99ED0;
	sub_82416268(ctx, base);
loc_82E99ED0:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,1184
	ctx.r1.s64 = ctx.r1.s64 + 1184;
	// b 0x831cdb00
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E99EDC"))) PPC_WEAK_FUNC(sub_82E99EDC);
PPC_FUNC_IMPL(__imp__sub_82E99EDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E99EE0"))) PPC_WEAK_FUNC(sub_82E99EE0);
PPC_FUNC_IMPL(__imp__sub_82E99EE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82E99EE8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// bl 0x82d95768
	ctx.lr = 0x82E99EF8;
	sub_82D95768(ctx, base);
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lis r9,-32232
	ctx.r9.s64 = -2112356352;
	// addi r8,r11,17176
	ctx.r8.s64 = ctx.r11.s64 + 17176;
	// addi r7,r10,25568
	ctx.r7.s64 = ctx.r10.s64 + 25568;
	// addi r6,r9,17172
	ctx.r6.s64 = ctx.r9.s64 + 17172;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// stw r7,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r7.u32);
	// lis r5,-32232
	ctx.r5.s64 = -2112356352;
	// stw r6,216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 216, ctx.r6.u32);
	// addi r3,r31,220
	ctx.r3.s64 = ctx.r31.s64 + 220;
	// addi r29,r5,32184
	ctx.r29.s64 = ctx.r5.s64 + 32184;
	// li r5,18
	ctx.r5.s64 = 18;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x824208c8
	ctx.lr = 0x82E99F34;
	sub_824208C8(ctx, base);
	// lis r4,-32234
	ctx.r4.s64 = -2112487424;
	// lis r3,-32234
	ctx.r3.s64 = -2112487424;
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r9,r3,-26100
	ctx.r9.s64 = ctx.r3.s64 + -26100;
	// addi r10,r4,-26088
	ctx.r10.s64 = ctx.r4.s64 + -26088;
	// addi r8,r11,-26104
	ctx.r8.s64 = ctx.r11.s64 + -26104;
	// stw r9,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r9.u32);
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stw r8,216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 216, ctx.r8.u32);
	// addi r3,r31,320
	ctx.r3.s64 = ctx.r31.s64 + 320;
	// stw r30,316(r31)
	PPC_STORE_U32(ctx.r31.u32 + 316, ctx.r30.u32);
	// bl 0x835fe558
	ctx.lr = 0x82E99F68;
	sub_835FE558(ctx, base);
	// li r28,15
	ctx.r28.s64 = 15;
	// std r30,400(r31)
	PPC_STORE_U64(ctx.r31.u32 + 400, ctx.r30.u64);
	// addi r3,r31,408
	ctx.r3.s64 = ctx.r31.s64 + 408;
	// stw r28,428(r31)
	PPC_STORE_U32(ctx.r31.u32 + 428, ctx.r28.u32);
	// addi r4,r29,20
	ctx.r4.s64 = ctx.r29.s64 + 20;
	// stw r30,424(r31)
	PPC_STORE_U32(ctx.r31.u32 + 424, ctx.r30.u32);
	// li r5,12
	ctx.r5.s64 = 12;
	// stb r30,408(r31)
	PPC_STORE_U8(ctx.r31.u32 + 408, ctx.r30.u8);
	// bl 0x824208c8
	ctx.lr = 0x82E99F8C;
	sub_824208C8(ctx, base);
	// stw r28,456(r31)
	PPC_STORE_U32(ctx.r31.u32 + 456, ctx.r28.u32);
	// stw r30,452(r31)
	PPC_STORE_U32(ctx.r31.u32 + 452, ctx.r30.u32);
	// addi r3,r31,436
	ctx.r3.s64 = ctx.r31.s64 + 436;
	// stb r30,436(r31)
	PPC_STORE_U8(ctx.r31.u32 + 436, ctx.r30.u8);
	// addi r4,r29,36
	ctx.r4.s64 = ctx.r29.s64 + 36;
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x824208c8
	ctx.lr = 0x82E99FA8;
	sub_824208C8(ctx, base);
	// stw r28,484(r31)
	PPC_STORE_U32(ctx.r31.u32 + 484, ctx.r28.u32);
	// stw r30,480(r31)
	PPC_STORE_U32(ctx.r31.u32 + 480, ctx.r30.u32);
	// addi r3,r31,464
	ctx.r3.s64 = ctx.r31.s64 + 464;
	// stb r30,464(r31)
	PPC_STORE_U8(ctx.r31.u32 + 464, ctx.r30.u8);
	// addi r4,r29,52
	ctx.r4.s64 = ctx.r29.s64 + 52;
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x824208c8
	ctx.lr = 0x82E99FC4;
	sub_824208C8(ctx, base);
	// stw r28,512(r31)
	PPC_STORE_U32(ctx.r31.u32 + 512, ctx.r28.u32);
	// stw r30,508(r31)
	PPC_STORE_U32(ctx.r31.u32 + 508, ctx.r30.u32);
	// addi r3,r31,492
	ctx.r3.s64 = ctx.r31.s64 + 492;
	// stb r30,492(r31)
	PPC_STORE_U8(ctx.r31.u32 + 492, ctx.r30.u8);
	// addi r4,r29,68
	ctx.r4.s64 = ctx.r29.s64 + 68;
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x824208c8
	ctx.lr = 0x82E99FE0;
	sub_824208C8(ctx, base);
	// stw r28,540(r31)
	PPC_STORE_U32(ctx.r31.u32 + 540, ctx.r28.u32);
	// stw r30,536(r31)
	PPC_STORE_U32(ctx.r31.u32 + 536, ctx.r30.u32);
	// addi r3,r31,520
	ctx.r3.s64 = ctx.r31.s64 + 520;
	// stb r30,520(r31)
	PPC_STORE_U8(ctx.r31.u32 + 520, ctx.r30.u8);
	// addi r4,r29,84
	ctx.r4.s64 = ctx.r29.s64 + 84;
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x824208c8
	ctx.lr = 0x82E99FFC;
	sub_824208C8(ctx, base);
	// stw r27,248(r31)
	PPC_STORE_U32(ctx.r31.u32 + 248, ctx.r27.u32);
	// stw r30,548(r31)
	PPC_STORE_U32(ctx.r31.u32 + 548, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E9A010"))) PPC_WEAK_FUNC(sub_82E9A010);
PPC_FUNC_IMPL(__imp__sub_82E9A010) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82E9A018;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// bl 0x82e75880
	ctx.lr = 0x82E9A028;
	sub_82E75880(ctx, base);
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// addi r3,r31,312
	ctx.r3.s64 = ctx.r31.s64 + 312;
	// addi r29,r11,32184
	ctx.r29.s64 = ctx.r11.s64 + 32184;
	// li r5,18
	ctx.r5.s64 = 18;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x824208c8
	ctx.lr = 0x82E9A040;
	sub_824208C8(ctx, base);
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// lis r9,-32231
	ctx.r9.s64 = -2112290816;
	// lis r8,-32231
	ctx.r8.s64 = -2112290816;
	// addi r7,r10,-32720
	ctx.r7.s64 = ctx.r10.s64 + -32720;
	// addi r6,r9,-32732
	ctx.r6.s64 = ctx.r9.s64 + -32732;
	// addi r5,r8,-32736
	ctx.r5.s64 = ctx.r8.s64 + -32736;
	// stw r7,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r7.u32);
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r6,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r6.u32);
	// stw r5,216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 216, ctx.r5.u32);
	// addi r3,r31,360
	ctx.r3.s64 = ctx.r31.s64 + 360;
	// stw r30,356(r31)
	PPC_STORE_U32(ctx.r31.u32 + 356, ctx.r30.u32);
	// bl 0x835fe558
	ctx.lr = 0x82E9A074;
	sub_835FE558(ctx, base);
	// li r28,15
	ctx.r28.s64 = 15;
	// std r30,440(r31)
	PPC_STORE_U64(ctx.r31.u32 + 440, ctx.r30.u64);
	// addi r3,r31,448
	ctx.r3.s64 = ctx.r31.s64 + 448;
	// stw r28,468(r31)
	PPC_STORE_U32(ctx.r31.u32 + 468, ctx.r28.u32);
	// addi r4,r29,276
	ctx.r4.s64 = ctx.r29.s64 + 276;
	// stw r30,464(r31)
	PPC_STORE_U32(ctx.r31.u32 + 464, ctx.r30.u32);
	// li r5,12
	ctx.r5.s64 = 12;
	// stb r30,448(r31)
	PPC_STORE_U8(ctx.r31.u32 + 448, ctx.r30.u8);
	// bl 0x824208c8
	ctx.lr = 0x82E9A098;
	sub_824208C8(ctx, base);
	// stw r28,496(r31)
	PPC_STORE_U32(ctx.r31.u32 + 496, ctx.r28.u32);
	// stw r30,492(r31)
	PPC_STORE_U32(ctx.r31.u32 + 492, ctx.r30.u32);
	// addi r3,r31,476
	ctx.r3.s64 = ctx.r31.s64 + 476;
	// stb r30,476(r31)
	PPC_STORE_U8(ctx.r31.u32 + 476, ctx.r30.u8);
	// addi r4,r29,292
	ctx.r4.s64 = ctx.r29.s64 + 292;
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x824208c8
	ctx.lr = 0x82E9A0B4;
	sub_824208C8(ctx, base);
	// stw r28,524(r31)
	PPC_STORE_U32(ctx.r31.u32 + 524, ctx.r28.u32);
	// stw r30,520(r31)
	PPC_STORE_U32(ctx.r31.u32 + 520, ctx.r30.u32);
	// addi r3,r31,504
	ctx.r3.s64 = ctx.r31.s64 + 504;
	// stb r30,504(r31)
	PPC_STORE_U8(ctx.r31.u32 + 504, ctx.r30.u8);
	// addi r4,r29,308
	ctx.r4.s64 = ctx.r29.s64 + 308;
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x824208c8
	ctx.lr = 0x82E9A0D0;
	sub_824208C8(ctx, base);
	// stw r28,552(r31)
	PPC_STORE_U32(ctx.r31.u32 + 552, ctx.r28.u32);
	// stw r30,548(r31)
	PPC_STORE_U32(ctx.r31.u32 + 548, ctx.r30.u32);
	// addi r3,r31,532
	ctx.r3.s64 = ctx.r31.s64 + 532;
	// stb r30,532(r31)
	PPC_STORE_U8(ctx.r31.u32 + 532, ctx.r30.u8);
	// addi r4,r29,324
	ctx.r4.s64 = ctx.r29.s64 + 324;
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x824208c8
	ctx.lr = 0x82E9A0EC;
	sub_824208C8(ctx, base);
	// stw r28,580(r31)
	PPC_STORE_U32(ctx.r31.u32 + 580, ctx.r28.u32);
	// stw r30,576(r31)
	PPC_STORE_U32(ctx.r31.u32 + 576, ctx.r30.u32);
	// addi r3,r31,560
	ctx.r3.s64 = ctx.r31.s64 + 560;
	// stb r30,560(r31)
	PPC_STORE_U8(ctx.r31.u32 + 560, ctx.r30.u8);
	// addi r4,r29,340
	ctx.r4.s64 = ctx.r29.s64 + 340;
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x824208c8
	ctx.lr = 0x82E9A108;
	sub_824208C8(ctx, base);
	// stw r27,340(r31)
	PPC_STORE_U32(ctx.r31.u32 + 340, ctx.r27.u32);
	// stw r30,588(r31)
	PPC_STORE_U32(ctx.r31.u32 + 588, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E9A11C"))) PPC_WEAK_FUNC(sub_82E9A11C);
PPC_FUNC_IMPL(__imp__sub_82E9A11C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E9A120"))) PPC_WEAK_FUNC(sub_82E9A120);
PPC_FUNC_IMPL(__imp__sub_82E9A120) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-216
	ctx.r3.s64 = ctx.r3.s64 + -216;
	// b 0x82e9a290
	sub_82E9A290(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E9A128"))) PPC_WEAK_FUNC(sub_82E9A128);
PPC_FUNC_IMPL(__imp__sub_82E9A128) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-200
	ctx.r3.s64 = ctx.r3.s64 + -200;
	// b 0x82e9a290
	sub_82E9A290(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E9A130"))) PPC_WEAK_FUNC(sub_82E9A130);
PPC_FUNC_IMPL(__imp__sub_82E9A130) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82E9A138;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// lis r9,-32231
	ctx.r9.s64 = -2112290816;
	// addi r8,r11,-32720
	ctx.r8.s64 = ctx.r11.s64 + -32720;
	// addi r7,r10,-32732
	ctx.r7.s64 = ctx.r10.s64 + -32732;
	// addi r6,r9,-32736
	ctx.r6.s64 = ctx.r9.s64 + -32736;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// stw r7,200(r3)
	PPC_STORE_U32(ctx.r3.u32 + 200, ctx.r7.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r6,216(r3)
	PPC_STORE_U32(ctx.r3.u32 + 216, ctx.r6.u32);
	// addi r27,r3,560
	ctx.r27.s64 = ctx.r3.s64 + 560;
	// lwz r5,580(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 580);
	// cmplwi cr6,r5,16
	cr6.compare<uint32_t>(ctx.r5.u32, 16, xer);
	// blt cr6,0x82e9a17c
	if (cr6.lt) goto loc_82E9A17C;
	// lwz r3,0(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x82E9A17C;
	sub_8386D088(ctx, base);
loc_82E9A17C:
	// li r31,0
	ctx.r31.s64 = 0;
	// li r28,15
	ctx.r28.s64 = 15;
	// stw r31,16(r27)
	PPC_STORE_U32(ctx.r27.u32 + 16, ctx.r31.u32);
	// addi r30,r29,532
	ctx.r30.s64 = ctx.r29.s64 + 532;
	// stw r28,20(r27)
	PPC_STORE_U32(ctx.r27.u32 + 20, ctx.r28.u32);
	// stb r31,0(r27)
	PPC_STORE_U8(ctx.r27.u32 + 0, ctx.r31.u8);
	// lwz r11,552(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 552);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82e9a1a8
	if (cr6.lt) goto loc_82E9A1A8;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x82E9A1A8;
	sub_8386D088(ctx, base);
loc_82E9A1A8:
	// stw r28,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r28.u32);
	// addi r27,r29,504
	ctx.r27.s64 = ctx.r29.s64 + 504;
	// stw r31,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r31.u32);
	// stb r31,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r31.u8);
	// lwz r11,524(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 524);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82e9a1cc
	if (cr6.lt) goto loc_82E9A1CC;
	// lwz r3,0(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x82E9A1CC;
	sub_8386D088(ctx, base);
loc_82E9A1CC:
	// stw r28,20(r27)
	PPC_STORE_U32(ctx.r27.u32 + 20, ctx.r28.u32);
	// addi r30,r29,476
	ctx.r30.s64 = ctx.r29.s64 + 476;
	// stw r31,16(r27)
	PPC_STORE_U32(ctx.r27.u32 + 16, ctx.r31.u32);
	// stb r31,0(r27)
	PPC_STORE_U8(ctx.r27.u32 + 0, ctx.r31.u8);
	// lwz r11,496(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 496);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82e9a1f0
	if (cr6.lt) goto loc_82E9A1F0;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x82E9A1F0;
	sub_8386D088(ctx, base);
loc_82E9A1F0:
	// stw r28,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r28.u32);
	// addi r27,r29,448
	ctx.r27.s64 = ctx.r29.s64 + 448;
	// stw r31,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r31.u32);
	// stb r31,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r31.u8);
	// lwz r11,468(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 468);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82e9a214
	if (cr6.lt) goto loc_82E9A214;
	// lwz r3,0(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x82E9A214;
	sub_8386D088(ctx, base);
loc_82E9A214:
	// stw r28,20(r27)
	PPC_STORE_U32(ctx.r27.u32 + 20, ctx.r28.u32);
	// addi r30,r29,360
	ctx.r30.s64 = ctx.r29.s64 + 360;
	// stw r31,16(r27)
	PPC_STORE_U32(ctx.r27.u32 + 16, ctx.r31.u32);
	// stb r31,0(r27)
	PPC_STORE_U8(ctx.r27.u32 + 0, ctx.r31.u8);
	// addi r3,r30,64
	ctx.r3.s64 = ctx.r30.s64 + 64;
	// bl 0x824238b8
	ctx.lr = 0x82E9A22C;
	sub_824238B8(ctx, base);
	// addi r3,r30,48
	ctx.r3.s64 = ctx.r30.s64 + 48;
	// bl 0x824238b8
	ctx.lr = 0x82E9A234;
	sub_824238B8(ctx, base);
	// addi r3,r30,32
	ctx.r3.s64 = ctx.r30.s64 + 32;
	// bl 0x824238b8
	ctx.lr = 0x82E9A23C;
	sub_824238B8(ctx, base);
	// lwz r11,380(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 380);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82e9a250
	if (cr6.lt) goto loc_82E9A250;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x82E9A250;
	sub_8386D088(ctx, base);
loc_82E9A250:
	// stw r28,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r28.u32);
	// addi r27,r29,312
	ctx.r27.s64 = ctx.r29.s64 + 312;
	// stw r31,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r31.u32);
	// stb r31,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r31.u8);
	// lwz r11,332(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 332);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82e9a274
	if (cr6.lt) goto loc_82E9A274;
	// lwz r3,0(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x82E9A274;
	sub_8386D088(ctx, base);
loc_82E9A274:
	// stw r28,20(r27)
	PPC_STORE_U32(ctx.r27.u32 + 20, ctx.r28.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r31,16(r27)
	PPC_STORE_U32(ctx.r27.u32 + 16, ctx.r31.u32);
	// stb r31,0(r27)
	PPC_STORE_U8(ctx.r27.u32 + 0, ctx.r31.u8);
	// bl 0x82b6a590
	ctx.lr = 0x82E9A288;
	sub_82B6A590(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E9A290"))) PPC_WEAK_FUNC(sub_82E9A290);
PPC_FUNC_IMPL(__imp__sub_82E9A290) {
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
	// bl 0x82e9a130
	ctx.lr = 0x82E9A2B0;
	sub_82E9A130(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82e9a2c8
	if (cr6.eq) goto loc_82E9A2C8;
	// bl 0x82416268
	ctx.lr = 0x82E9A2C4;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82E9A2C8:
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

__attribute__((alias("__imp__sub_82E9A2E0"))) PPC_WEAK_FUNC(sub_82E9A2E0);
PPC_FUNC_IMPL(__imp__sub_82E9A2E0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82E9A2E8;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r30,r3,176
	ctx.r30.s64 = ctx.r3.s64 + 176;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82535130
	ctx.lr = 0x82E9A2FC;
	sub_82535130(ctx, base);
	// lwz r10,240(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 240);
	// addi r11,r29,220
	ctx.r11.s64 = ctx.r29.s64 + 220;
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82e9a310
	if (cr6.lt) goto loc_82E9A310;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82E9A310:
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825346c8
	ctx.lr = 0x82E9A31C;
	sub_825346C8(ctx, base);
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r31,r11,-32576
	ctx.r31.s64 = ctx.r11.s64 + -32576;
	// addi r4,r31,-8
	ctx.r4.s64 = ctx.r31.s64 + -8;
	// bl 0x82536d88
	ctx.lr = 0x82E9A330;
	sub_82536D88(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x825369e8
	ctx.lr = 0x82E9A338;
	sub_825369E8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82535aa0
	ctx.lr = 0x82E9A340;
	sub_82535AA0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,248(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 248);
	// bl 0x82534640
	ctx.lr = 0x82E9A34C;
	sub_82534640(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82536d88
	ctx.lr = 0x82E9A358;
	sub_82536D88(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x825369e8
	ctx.lr = 0x82E9A360;
	sub_825369E8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82535aa0
	ctx.lr = 0x82E9A368;
	sub_82535AA0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E9A374"))) PPC_WEAK_FUNC(sub_82E9A374);
PPC_FUNC_IMPL(__imp__sub_82E9A374) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E9A378"))) PPC_WEAK_FUNC(sub_82E9A378);
PPC_FUNC_IMPL(__imp__sub_82E9A378) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82E9A380;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// addi r30,r3,176
	ctx.r30.s64 = ctx.r3.s64 + 176;
	// addi r29,r11,-32536
	ctx.r29.s64 = ctx.r11.s64 + -32536;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r29,-8
	ctx.r4.s64 = ctx.r29.s64 + -8;
	// bl 0x82536d88
	ctx.lr = 0x82E9A3A0;
	sub_82536D88(ctx, base);
	// bl 0x825832e0
	ctx.lr = 0x82E9A3A4;
	sub_825832E0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82E9A3AC:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82e9a3ac
	if (!cr6.eq) goto loc_82E9A3AC;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r31,220
	ctx.r3.s64 = ctx.r31.s64 + 220;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x82E9A3D0;
	sub_824208C8(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82536d88
	ctx.lr = 0x82E9A3DC;
	sub_82536D88(ctx, base);
	// bl 0x825347e8
	ctx.lr = 0x82E9A3E0;
	sub_825347E8(ctx, base);
	// stw r3,248(r31)
	PPC_STORE_U32(ctx.r31.u32 + 248, ctx.r3.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E9A3F0"))) PPC_WEAK_FUNC(sub_82E9A3F0);
PPC_FUNC_IMPL(__imp__sub_82E9A3F0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82E9A3F8;
	__savegprlr_27(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r29,r3,4
	ctx.r29.s64 = ctx.r3.s64 + 4;
	// rotlwi r9,r31,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r31.u32, 0);
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r31.u32);
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// li r11,131
	ctx.r11.s64 = 131;
	// subf r8,r9,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r9.s64;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// cmplwi cr6,r8,1
	cr6.compare<uint32_t>(ctx.r8.u32, 1, xer);
	// bge cr6,0x82e9a438
	if (!cr6.lt) goto loc_82E9A438;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82e745e0
	ctx.lr = 0x82E9A438;
	sub_82E745E0(ctx, base);
loc_82E9A438:
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// li r30,15
	ctx.r30.s64 = 15;
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// li r5,5
	ctx.r5.s64 = 5;
	// addi r27,r10,-32552
	ctx.r27.s64 = ctx.r10.s64 + -32552;
	// lbz r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r8.u32 + 0);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r27,-16
	ctx.r4.s64 = ctx.r27.s64 + -16;
	// stbx r7,r11,r9
	PPC_STORE_U8(ctx.r11.u32 + ctx.r9.u32, ctx.r7.u8);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// stw r6,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r6.u32);
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// stb r31,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r31.u8);
	// bl 0x82472fc0
	ctx.lr = 0x82E9A480;
	sub_82472FC0(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82e74c08
	ctx.lr = 0x82E9A48C;
	sub_82E74C08(ctx, base);
	// lwz r5,116(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r5,16
	cr6.compare<uint32_t>(ctx.r5.u32, 16, xer);
	// blt cr6,0x82e9a4a0
	if (cr6.lt) goto loc_82E9A4A0;
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x82416268
	ctx.lr = 0x82E9A4A0;
	sub_82416268(ctx, base);
loc_82E9A4A0:
	// lwz r11,40(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 40);
	// addi r4,r28,20
	ctx.r4.s64 = ctx.r28.s64 + 20;
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r31.u8);
	// blt cr6,0x82e9a4c0
	if (cr6.lt) goto loc_82E9A4C0;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_82E9A4C0:
	// stw r30,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r30.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// stb r31,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r31.u8);
loc_82E9A4D0:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82e9a4d0
	if (!cr6.eq) goto loc_82E9A4D0;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82472fc0
	ctx.lr = 0x82E9A4F4;
	sub_82472FC0(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82e74c08
	ctx.lr = 0x82E9A500;
	sub_82E74C08(ctx, base);
	// lwz r10,148(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82e9a514
	if (cr6.lt) goto loc_82E9A514;
	// lwz r3,128(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x82416268
	ctx.lr = 0x82E9A514;
	sub_82416268(ctx, base);
loc_82E9A514:
	// stw r30,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r30.u32);
	// addi r4,r27,-8
	ctx.r4.s64 = ctx.r27.s64 + -8;
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// stb r31,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r31.u8);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// stw r30,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r30.u32);
	// stw r31,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r31.u32);
	// stb r31,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, ctx.r31.u8);
	// bl 0x82472fc0
	ctx.lr = 0x82E9A53C;
	sub_82472FC0(ctx, base);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82e74c08
	ctx.lr = 0x82E9A548;
	sub_82E74C08(ctx, base);
	// lwz r11,180(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82e9a55c
	if (cr6.lt) goto loc_82E9A55C;
	// lwz r3,160(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// bl 0x82416268
	ctx.lr = 0x82E9A55C;
	sub_82416268(ctx, base);
loc_82E9A55C:
	// stw r30,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r30.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r31,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r31.u32);
	// stb r31,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, ctx.r31.u8);
	// lwz r4,48(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 48);
	// bl 0x82e746c0
	ctx.lr = 0x82E9A574;
	sub_82E746C0(ctx, base);
	// stw r30,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r30.u32);
	// stw r31,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r31.u32);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// stb r31,192(r1)
	PPC_STORE_U8(ctx.r1.u32 + 192, ctx.r31.u8);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82472fc0
	ctx.lr = 0x82E9A590;
	sub_82472FC0(ctx, base);
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82e74c08
	ctx.lr = 0x82E9A59C;
	sub_82E74C08(ctx, base);
	// lwz r11,212(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82e9a5b0
	if (cr6.lt) goto loc_82E9A5B0;
	// lwz r3,192(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// bl 0x82416268
	ctx.lr = 0x82E9A5B0;
	sub_82416268(ctx, base);
loc_82E9A5B0:
	// stw r30,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r30.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r31,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r31.u32);
	// stb r31,192(r1)
	PPC_STORE_U8(ctx.r1.u32 + 192, ctx.r31.u8);
	// lwz r4,116(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 116);
	// bl 0x82e746c0
	ctx.lr = 0x82E9A5C8;
	sub_82E746C0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E9A5D4"))) PPC_WEAK_FUNC(sub_82E9A5D4);
PPC_FUNC_IMPL(__imp__sub_82E9A5D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E9A5D8"))) PPC_WEAK_FUNC(sub_82E9A5D8);
PPC_FUNC_IMPL(__imp__sub_82E9A5D8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82E9A5E0;
	__savegprlr_26(ctx, base);
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r5,4(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r30,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r30.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r30,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r30.u32);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x83691bb8
	ctx.lr = 0x82E9A608;
	sub_83691BB8(ctx, base);
	// lwz r10,152(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// lwz r11,156(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// rlwinm r10,r10,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x82e9a7f4
	if (!cr6.lt) goto loc_82E9A7F4;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// addi r31,r11,16
	ctx.r31.s64 = ctx.r11.s64 + 16;
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
	// li r29,15
	ctx.r29.s64 = 15;
	// rlwinm r11,r11,27,5,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x7FFFFFF;
	// addi r27,r11,1
	ctx.r27.s64 = ctx.r11.s64 + 1;
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// addi r26,r11,-32512
	ctx.r26.s64 = ctx.r11.s64 + -32512;
loc_82E9A640:
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// addi r11,r1,224
	ctx.r11.s64 = ctx.r1.s64 + 224;
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stb r30,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r30.u8);
	// addi r10,r31,-16
	ctx.r10.s64 = ctx.r31.s64 + -16;
	// ld r9,-8(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + -8);
	// ld r8,-16(r31)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r31.u32 + -16);
	// std r8,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r8.u64);
	// std r9,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r9.u64);
	// lwz r5,232(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 232);
	// lwz r4,236(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 236);
	// bl 0x82472fc0
	ctx.lr = 0x82E9A674;
	sub_82472FC0(ctx, base);
	// addi r6,r26,-16
	ctx.r6.s64 = ctx.r26.s64 + -16;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,5
	ctx.r7.s64 = 5;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x82E9A68C;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82e9a720
	if (!cr6.eq) goto loc_82E9A720;
	// stw r29,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r29.u32);
	// addi r11,r1,208
	ctx.r11.s64 = ctx.r1.s64 + 208;
	// stw r30,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r30.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stb r30,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r30.u8);
	// ld r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// ld r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// std r10,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r10.u64);
	// std r9,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r9.u64);
	// lwz r5,216(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 216);
	// lwz r4,220(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 220);
	// bl 0x82472fc0
	ctx.lr = 0x82E9A6C4;
	sub_82472FC0(ctx, base);
	// lwz r8,132(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r8,16
	cr6.compare<uint32_t>(ctx.r8.u32, 16, xer);
	// bge cr6,0x82e9a6d8
	if (!cr6.lt) goto loc_82E9A6D8;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
loc_82E9A6D8:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82E9A6DC:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82e9a6dc
	if (!cr6.eq) goto loc_82E9A6DC;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r28,20
	ctx.r3.s64 = ctx.r28.s64 + 20;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x82E9A700;
	sub_824208C8(ctx, base);
	// lwz r10,132(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82e9a714
	if (cr6.lt) goto loc_82E9A714;
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x82416268
	ctx.lr = 0x82E9A714;
	sub_82416268(ctx, base);
loc_82E9A714:
	// stw r29,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r29.u32);
	// stw r30,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r30.u32);
	// stb r30,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r30.u8);
loc_82E9A720:
	// addi r6,r26,-8
	ctx.r6.s64 = ctx.r26.s64 + -8;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,4
	ctx.r7.s64 = 4;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x82E9A738;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82e9a774
	if (!cr6.eq) goto loc_82E9A774;
	// ld r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// addi r10,r1,192
	ctx.r10.s64 = ctx.r1.s64 + 192;
	// ld r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// std r11,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r11.u64);
	// std r9,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// lwz r8,192(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// cmpwi cr6,r8,2
	cr6.compare<int32_t>(ctx.r8.s32, 2, xer);
	// bne cr6,0x82e9a76c
	if (!cr6.eq) goto loc_82E9A76C;
	// ld r11,200(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 200);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x82e9a770
	goto loc_82E9A770;
loc_82E9A76C:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_82E9A770:
	// stw r11,48(r28)
	PPC_STORE_U32(ctx.r28.u32 + 48, ctx.r11.u32);
loc_82E9A774:
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,4
	ctx.r7.s64 = 4;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x82E9A78C;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82e9a7c8
	if (!cr6.eq) goto loc_82E9A7C8;
	// ld r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// addi r10,r1,176
	ctx.r10.s64 = ctx.r1.s64 + 176;
	// ld r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// std r11,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r11.u64);
	// std r9,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// lwz r8,176(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// cmpwi cr6,r8,2
	cr6.compare<int32_t>(ctx.r8.s32, 2, xer);
	// bne cr6,0x82e9a7c0
	if (!cr6.eq) goto loc_82E9A7C0;
	// ld r11,184(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 184);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x82e9a7c4
	goto loc_82E9A7C4;
loc_82E9A7C0:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_82E9A7C4:
	// stw r11,156(r28)
	PPC_STORE_U32(ctx.r28.u32 + 156, ctx.r11.u32);
loc_82E9A7C8:
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82e9a7dc
	if (cr6.lt) goto loc_82E9A7DC;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82416268
	ctx.lr = 0x82E9A7DC;
	sub_82416268(ctx, base);
loc_82E9A7DC:
	// addic. r27,r27,-1
	xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	cr0.compare<int32_t>(ctx.r27.s32, 0, xer);
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// addi r31,r31,32
	ctx.r31.s64 = ctx.r31.s64 + 32;
	// stb r30,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r30.u8);
	// bne 0x82e9a640
	if (!cr0.eq) goto loc_82E9A640;
loc_82E9A7F4:
	// lwz r31,160(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x82e9a810
	if (cr6.eq) goto loc_82E9A810;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839e56b8
	ctx.lr = 0x82E9A808;
	sub_839E56B8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82416268
	ctx.lr = 0x82E9A810;
	sub_82416268(ctx, base);
loc_82E9A810:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E9A81C"))) PPC_WEAK_FUNC(sub_82E9A81C);
PPC_FUNC_IMPL(__imp__sub_82E9A81C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E9A820"))) PPC_WEAK_FUNC(sub_82E9A820);
PPC_FUNC_IMPL(__imp__sub_82E9A820) {
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
	// bl 0x82d95768
	ctx.lr = 0x82E9A840;
	sub_82D95768(ctx, base);
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lis r9,-32232
	ctx.r9.s64 = -2112356352;
	// addi r8,r11,17176
	ctx.r8.s64 = ctx.r11.s64 + 17176;
	// addi r7,r10,25568
	ctx.r7.s64 = ctx.r10.s64 + 25568;
	// addi r6,r9,17172
	ctx.r6.s64 = ctx.r9.s64 + 17172;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// stw r7,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r7.u32);
	// lis r5,-32231
	ctx.r5.s64 = -2112290816;
	// stw r6,216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 216, ctx.r6.u32);
	// addi r3,r31,220
	ctx.r3.s64 = ctx.r31.s64 + 220;
	// addi r4,r5,-32600
	ctx.r4.s64 = ctx.r5.s64 + -32600;
	// li r5,14
	ctx.r5.s64 = 14;
	// bl 0x824208c8
	ctx.lr = 0x82E9A878;
	sub_824208C8(ctx, base);
	// lis r3,-32234
	ctx.r3.s64 = -2112487424;
	// lis r4,-32234
	ctx.r4.s64 = -2112487424;
	// stw r30,248(r31)
	PPC_STORE_U32(ctx.r31.u32 + 248, ctx.r30.u32);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r9,r3,-26060
	ctx.r9.s64 = ctx.r3.s64 + -26060;
	// addi r10,r4,-26048
	ctx.r10.s64 = ctx.r4.s64 + -26048;
	// addi r8,r11,-26064
	ctx.r8.s64 = ctx.r11.s64 + -26064;
	// stw r9,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r9.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stw r8,216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 216, ctx.r8.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r7,316(r31)
	PPC_STORE_U32(ctx.r31.u32 + 316, ctx.r7.u32);
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

__attribute__((alias("__imp__sub_82E9A8C4"))) PPC_WEAK_FUNC(sub_82E9A8C4);
PPC_FUNC_IMPL(__imp__sub_82E9A8C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E9A8C8"))) PPC_WEAK_FUNC(sub_82E9A8C8);
PPC_FUNC_IMPL(__imp__sub_82E9A8C8) {
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
	// bl 0x82e75880
	ctx.lr = 0x82E9A8E8;
	sub_82E75880(ctx, base);
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// addi r3,r31,312
	ctx.r3.s64 = ctx.r31.s64 + 312;
	// addi r4,r11,-32600
	ctx.r4.s64 = ctx.r11.s64 + -32600;
	// li r5,14
	ctx.r5.s64 = 14;
	// bl 0x824208c8
	ctx.lr = 0x82E9A8FC;
	sub_824208C8(ctx, base);
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// lis r9,-32231
	ctx.r9.s64 = -2112290816;
	// stw r30,340(r31)
	PPC_STORE_U32(ctx.r31.u32 + 340, ctx.r30.u32);
	// lis r8,-32231
	ctx.r8.s64 = -2112290816;
	// addi r7,r10,-32404
	ctx.r7.s64 = ctx.r10.s64 + -32404;
	// addi r6,r9,-32416
	ctx.r6.s64 = ctx.r9.s64 + -32416;
	// addi r5,r8,-32420
	ctx.r5.s64 = ctx.r8.s64 + -32420;
	// stw r7,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r7.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r6,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r6.u32);
	// stw r5,216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 216, ctx.r5.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r4,356(r31)
	PPC_STORE_U32(ctx.r31.u32 + 356, ctx.r4.u32);
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

__attribute__((alias("__imp__sub_82E9A948"))) PPC_WEAK_FUNC(sub_82E9A948);
PPC_FUNC_IMPL(__imp__sub_82E9A948) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-200
	ctx.r3.s64 = ctx.r3.s64 + -200;
	// b 0x82e9a9e0
	sub_82E9A9E0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E9A950"))) PPC_WEAK_FUNC(sub_82E9A950);
PPC_FUNC_IMPL(__imp__sub_82E9A950) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-216
	ctx.r3.s64 = ctx.r3.s64 + -216;
	// b 0x82e9a9e0
	sub_82E9A9E0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E9A958"))) PPC_WEAK_FUNC(sub_82E9A958);
PPC_FUNC_IMPL(__imp__sub_82E9A958) {
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
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// lis r9,-32231
	ctx.r9.s64 = -2112290816;
	// addi r8,r11,-32404
	ctx.r8.s64 = ctx.r11.s64 + -32404;
	// addi r7,r10,-32416
	ctx.r7.s64 = ctx.r10.s64 + -32416;
	// addi r6,r9,-32420
	ctx.r6.s64 = ctx.r9.s64 + -32420;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// stw r7,200(r3)
	PPC_STORE_U32(ctx.r3.u32 + 200, ctx.r7.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r6,216(r3)
	PPC_STORE_U32(ctx.r3.u32 + 216, ctx.r6.u32);
	// addi r31,r3,312
	ctx.r31.s64 = ctx.r3.s64 + 312;
	// lwz r5,332(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 332);
	// cmplwi cr6,r5,16
	cr6.compare<uint32_t>(ctx.r5.u32, 16, xer);
	// blt cr6,0x82e9a9ac
	if (cr6.lt) goto loc_82E9A9AC;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x82E9A9AC;
	sub_8386D088(ctx, base);
loc_82E9A9AC:
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
	// bl 0x82b6a590
	ctx.lr = 0x82E9A9C8;
	sub_82B6A590(ctx, base);
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

__attribute__((alias("__imp__sub_82E9A9E0"))) PPC_WEAK_FUNC(sub_82E9A9E0);
PPC_FUNC_IMPL(__imp__sub_82E9A9E0) {
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
	// bl 0x82e9a958
	ctx.lr = 0x82E9AA00;
	sub_82E9A958(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82e9aa18
	if (cr6.eq) goto loc_82E9AA18;
	// bl 0x82416268
	ctx.lr = 0x82E9AA14;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82E9AA18:
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

__attribute__((alias("__imp__sub_82E9AA30"))) PPC_WEAK_FUNC(sub_82E9AA30);
PPC_FUNC_IMPL(__imp__sub_82E9AA30) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82E9AA38;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r30,r3,176
	ctx.r30.s64 = ctx.r3.s64 + 176;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82535130
	ctx.lr = 0x82E9AA4C;
	sub_82535130(ctx, base);
	// lwz r10,240(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 240);
	// addi r11,r29,220
	ctx.r11.s64 = ctx.r29.s64 + 220;
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82e9aa60
	if (cr6.lt) goto loc_82E9AA60;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82E9AA60:
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825346c8
	ctx.lr = 0x82E9AA6C;
	sub_825346C8(ctx, base);
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r31,r11,-32252
	ctx.r31.s64 = ctx.r11.s64 + -32252;
	// addi r4,r31,-8
	ctx.r4.s64 = ctx.r31.s64 + -8;
	// bl 0x82536d88
	ctx.lr = 0x82E9AA80;
	sub_82536D88(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x825369e8
	ctx.lr = 0x82E9AA88;
	sub_825369E8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82535aa0
	ctx.lr = 0x82E9AA90;
	sub_82535AA0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,248(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 248);
	// bl 0x82534640
	ctx.lr = 0x82E9AA9C;
	sub_82534640(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82536d88
	ctx.lr = 0x82E9AAA8;
	sub_82536D88(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x825369e8
	ctx.lr = 0x82E9AAB0;
	sub_825369E8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82535aa0
	ctx.lr = 0x82E9AAB8;
	sub_82535AA0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E9AAC4"))) PPC_WEAK_FUNC(sub_82E9AAC4);
PPC_FUNC_IMPL(__imp__sub_82E9AAC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E9AAC8"))) PPC_WEAK_FUNC(sub_82E9AAC8);
PPC_FUNC_IMPL(__imp__sub_82E9AAC8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82E9AAD0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// addi r30,r3,176
	ctx.r30.s64 = ctx.r3.s64 + 176;
	// addi r29,r11,-32212
	ctx.r29.s64 = ctx.r11.s64 + -32212;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r29,-8
	ctx.r4.s64 = ctx.r29.s64 + -8;
	// bl 0x82536d88
	ctx.lr = 0x82E9AAF0;
	sub_82536D88(ctx, base);
	// bl 0x825832e0
	ctx.lr = 0x82E9AAF4;
	sub_825832E0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82E9AAFC:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82e9aafc
	if (!cr6.eq) goto loc_82E9AAFC;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r31,220
	ctx.r3.s64 = ctx.r31.s64 + 220;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x82E9AB20;
	sub_824208C8(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82536d88
	ctx.lr = 0x82E9AB2C;
	sub_82536D88(ctx, base);
	// bl 0x825347e8
	ctx.lr = 0x82E9AB30;
	sub_825347E8(ctx, base);
	// stw r3,248(r31)
	PPC_STORE_U32(ctx.r31.u32 + 248, ctx.r3.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E9AB40"))) PPC_WEAK_FUNC(sub_82E9AB40);
PPC_FUNC_IMPL(__imp__sub_82E9AB40) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82E9AB48;
	__savegprlr_27(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r29,r3,4
	ctx.r29.s64 = ctx.r3.s64 + 4;
	// rotlwi r9,r31,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r31.u32, 0);
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r31.u32);
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// li r11,131
	ctx.r11.s64 = 131;
	// subf r8,r9,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r9.s64;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// cmplwi cr6,r8,1
	cr6.compare<uint32_t>(ctx.r8.u32, 1, xer);
	// bge cr6,0x82e9ab88
	if (!cr6.lt) goto loc_82E9AB88;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82e745e0
	ctx.lr = 0x82E9AB88;
	sub_82E745E0(ctx, base);
loc_82E9AB88:
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// li r30,15
	ctx.r30.s64 = 15;
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// li r5,5
	ctx.r5.s64 = 5;
	// addi r27,r10,-32228
	ctx.r27.s64 = ctx.r10.s64 + -32228;
	// lbz r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r8.u32 + 0);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r27,-16
	ctx.r4.s64 = ctx.r27.s64 + -16;
	// stbx r7,r11,r9
	PPC_STORE_U8(ctx.r11.u32 + ctx.r9.u32, ctx.r7.u8);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// stw r6,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r6.u32);
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// stb r31,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r31.u8);
	// bl 0x82472fc0
	ctx.lr = 0x82E9ABD0;
	sub_82472FC0(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82e74c08
	ctx.lr = 0x82E9ABDC;
	sub_82E74C08(ctx, base);
	// lwz r5,116(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r5,16
	cr6.compare<uint32_t>(ctx.r5.u32, 16, xer);
	// blt cr6,0x82e9abf0
	if (cr6.lt) goto loc_82E9ABF0;
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x82416268
	ctx.lr = 0x82E9ABF0;
	sub_82416268(ctx, base);
loc_82E9ABF0:
	// lwz r11,40(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 40);
	// addi r4,r28,20
	ctx.r4.s64 = ctx.r28.s64 + 20;
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r31.u8);
	// blt cr6,0x82e9ac10
	if (cr6.lt) goto loc_82E9AC10;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_82E9AC10:
	// stw r30,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r30.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// stb r31,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r31.u8);
loc_82E9AC20:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82e9ac20
	if (!cr6.eq) goto loc_82E9AC20;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82472fc0
	ctx.lr = 0x82E9AC44;
	sub_82472FC0(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82e74c08
	ctx.lr = 0x82E9AC50;
	sub_82E74C08(ctx, base);
	// lwz r10,148(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82e9ac64
	if (cr6.lt) goto loc_82E9AC64;
	// lwz r3,128(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x82416268
	ctx.lr = 0x82E9AC64;
	sub_82416268(ctx, base);
loc_82E9AC64:
	// stw r30,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r30.u32);
	// addi r4,r27,-8
	ctx.r4.s64 = ctx.r27.s64 + -8;
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// stb r31,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r31.u8);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// stw r30,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r30.u32);
	// stw r31,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r31.u32);
	// stb r31,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, ctx.r31.u8);
	// bl 0x82472fc0
	ctx.lr = 0x82E9AC8C;
	sub_82472FC0(ctx, base);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82e74c08
	ctx.lr = 0x82E9AC98;
	sub_82E74C08(ctx, base);
	// lwz r11,180(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82e9acac
	if (cr6.lt) goto loc_82E9ACAC;
	// lwz r3,160(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// bl 0x82416268
	ctx.lr = 0x82E9ACAC;
	sub_82416268(ctx, base);
loc_82E9ACAC:
	// stw r30,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r30.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r31,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r31.u32);
	// stb r31,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, ctx.r31.u8);
	// lwz r4,48(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 48);
	// bl 0x82e746c0
	ctx.lr = 0x82E9ACC4;
	sub_82E746C0(ctx, base);
	// stw r30,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r30.u32);
	// stw r31,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r31.u32);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// stb r31,192(r1)
	PPC_STORE_U8(ctx.r1.u32 + 192, ctx.r31.u8);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82472fc0
	ctx.lr = 0x82E9ACE0;
	sub_82472FC0(ctx, base);
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82e74c08
	ctx.lr = 0x82E9ACEC;
	sub_82E74C08(ctx, base);
	// lwz r11,212(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82e9ad00
	if (cr6.lt) goto loc_82E9AD00;
	// lwz r3,192(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// bl 0x82416268
	ctx.lr = 0x82E9AD00;
	sub_82416268(ctx, base);
loc_82E9AD00:
	// stw r30,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r30.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r31,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r31.u32);
	// stb r31,192(r1)
	PPC_STORE_U8(ctx.r1.u32 + 192, ctx.r31.u8);
	// lwz r4,116(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 116);
	// bl 0x82e746c0
	ctx.lr = 0x82E9AD18;
	sub_82E746C0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E9AD24"))) PPC_WEAK_FUNC(sub_82E9AD24);
PPC_FUNC_IMPL(__imp__sub_82E9AD24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E9AD28"))) PPC_WEAK_FUNC(sub_82E9AD28);
PPC_FUNC_IMPL(__imp__sub_82E9AD28) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82E9AD30;
	__savegprlr_26(ctx, base);
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r5,4(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r30,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r30.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r30,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r30.u32);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x83691bb8
	ctx.lr = 0x82E9AD58;
	sub_83691BB8(ctx, base);
	// lwz r10,152(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// lwz r11,156(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// rlwinm r10,r10,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x82e9af44
	if (!cr6.lt) goto loc_82E9AF44;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// addi r31,r11,16
	ctx.r31.s64 = ctx.r11.s64 + 16;
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
	// li r29,15
	ctx.r29.s64 = 15;
	// rlwinm r11,r11,27,5,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x7FFFFFF;
	// addi r27,r11,1
	ctx.r27.s64 = ctx.r11.s64 + 1;
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// addi r26,r11,-32188
	ctx.r26.s64 = ctx.r11.s64 + -32188;
loc_82E9AD90:
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// addi r11,r1,224
	ctx.r11.s64 = ctx.r1.s64 + 224;
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stb r30,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r30.u8);
	// addi r10,r31,-16
	ctx.r10.s64 = ctx.r31.s64 + -16;
	// ld r9,-8(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + -8);
	// ld r8,-16(r31)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r31.u32 + -16);
	// std r8,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r8.u64);
	// std r9,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r9.u64);
	// lwz r5,232(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 232);
	// lwz r4,236(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 236);
	// bl 0x82472fc0
	ctx.lr = 0x82E9ADC4;
	sub_82472FC0(ctx, base);
	// addi r6,r26,-16
	ctx.r6.s64 = ctx.r26.s64 + -16;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,5
	ctx.r7.s64 = 5;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x82E9ADDC;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82e9ae70
	if (!cr6.eq) goto loc_82E9AE70;
	// stw r29,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r29.u32);
	// addi r11,r1,208
	ctx.r11.s64 = ctx.r1.s64 + 208;
	// stw r30,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r30.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stb r30,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r30.u8);
	// ld r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// ld r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// std r10,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r10.u64);
	// std r9,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r9.u64);
	// lwz r5,216(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 216);
	// lwz r4,220(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 220);
	// bl 0x82472fc0
	ctx.lr = 0x82E9AE14;
	sub_82472FC0(ctx, base);
	// lwz r8,132(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r8,16
	cr6.compare<uint32_t>(ctx.r8.u32, 16, xer);
	// bge cr6,0x82e9ae28
	if (!cr6.lt) goto loc_82E9AE28;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
loc_82E9AE28:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82E9AE2C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82e9ae2c
	if (!cr6.eq) goto loc_82E9AE2C;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r28,20
	ctx.r3.s64 = ctx.r28.s64 + 20;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x82E9AE50;
	sub_824208C8(ctx, base);
	// lwz r10,132(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82e9ae64
	if (cr6.lt) goto loc_82E9AE64;
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x82416268
	ctx.lr = 0x82E9AE64;
	sub_82416268(ctx, base);
loc_82E9AE64:
	// stw r29,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r29.u32);
	// stw r30,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r30.u32);
	// stb r30,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r30.u8);
loc_82E9AE70:
	// addi r6,r26,-8
	ctx.r6.s64 = ctx.r26.s64 + -8;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,4
	ctx.r7.s64 = 4;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x82E9AE88;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82e9aec4
	if (!cr6.eq) goto loc_82E9AEC4;
	// ld r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// addi r10,r1,192
	ctx.r10.s64 = ctx.r1.s64 + 192;
	// ld r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// std r11,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r11.u64);
	// std r9,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// lwz r8,192(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// cmpwi cr6,r8,2
	cr6.compare<int32_t>(ctx.r8.s32, 2, xer);
	// bne cr6,0x82e9aebc
	if (!cr6.eq) goto loc_82E9AEBC;
	// ld r11,200(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 200);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x82e9aec0
	goto loc_82E9AEC0;
loc_82E9AEBC:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_82E9AEC0:
	// stw r11,48(r28)
	PPC_STORE_U32(ctx.r28.u32 + 48, ctx.r11.u32);
loc_82E9AEC4:
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,4
	ctx.r7.s64 = 4;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x82E9AEDC;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82e9af18
	if (!cr6.eq) goto loc_82E9AF18;
	// ld r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// addi r10,r1,176
	ctx.r10.s64 = ctx.r1.s64 + 176;
	// ld r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// std r11,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r11.u64);
	// std r9,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// lwz r8,176(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// cmpwi cr6,r8,2
	cr6.compare<int32_t>(ctx.r8.s32, 2, xer);
	// bne cr6,0x82e9af10
	if (!cr6.eq) goto loc_82E9AF10;
	// ld r11,184(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 184);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x82e9af14
	goto loc_82E9AF14;
loc_82E9AF10:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_82E9AF14:
	// stw r11,156(r28)
	PPC_STORE_U32(ctx.r28.u32 + 156, ctx.r11.u32);
loc_82E9AF18:
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82e9af2c
	if (cr6.lt) goto loc_82E9AF2C;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82416268
	ctx.lr = 0x82E9AF2C;
	sub_82416268(ctx, base);
loc_82E9AF2C:
	// addic. r27,r27,-1
	xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	cr0.compare<int32_t>(ctx.r27.s32, 0, xer);
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// addi r31,r31,32
	ctx.r31.s64 = ctx.r31.s64 + 32;
	// stb r30,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r30.u8);
	// bne 0x82e9ad90
	if (!cr0.eq) goto loc_82E9AD90;
loc_82E9AF44:
	// lwz r31,160(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x82e9af60
	if (cr6.eq) goto loc_82E9AF60;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839e56b8
	ctx.lr = 0x82E9AF58;
	sub_839E56B8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82416268
	ctx.lr = 0x82E9AF60;
	sub_82416268(ctx, base);
loc_82E9AF60:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E9AF6C"))) PPC_WEAK_FUNC(sub_82E9AF6C);
PPC_FUNC_IMPL(__imp__sub_82E9AF6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E9AF70"))) PPC_WEAK_FUNC(sub_82E9AF70);
PPC_FUNC_IMPL(__imp__sub_82E9AF70) {
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
	// bl 0x82d95768
	ctx.lr = 0x82E9AF90;
	sub_82D95768(ctx, base);
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lis r9,-32232
	ctx.r9.s64 = -2112356352;
	// addi r8,r11,17176
	ctx.r8.s64 = ctx.r11.s64 + 17176;
	// addi r7,r10,25568
	ctx.r7.s64 = ctx.r10.s64 + 25568;
	// addi r6,r9,17172
	ctx.r6.s64 = ctx.r9.s64 + 17172;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// stw r7,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r7.u32);
	// lis r5,-32231
	ctx.r5.s64 = -2112290816;
	// stw r6,216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 216, ctx.r6.u32);
	// addi r3,r31,220
	ctx.r3.s64 = ctx.r31.s64 + 220;
	// addi r4,r5,-32280
	ctx.r4.s64 = ctx.r5.s64 + -32280;
	// li r5,17
	ctx.r5.s64 = 17;
	// bl 0x824208c8
	ctx.lr = 0x82E9AFC8;
	sub_824208C8(ctx, base);
	// lis r3,-32234
	ctx.r3.s64 = -2112487424;
	// lis r4,-32234
	ctx.r4.s64 = -2112487424;
	// stw r30,248(r31)
	PPC_STORE_U32(ctx.r31.u32 + 248, ctx.r30.u32);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r9,r3,-26020
	ctx.r9.s64 = ctx.r3.s64 + -26020;
	// addi r10,r4,-26008
	ctx.r10.s64 = ctx.r4.s64 + -26008;
	// addi r8,r11,-26024
	ctx.r8.s64 = ctx.r11.s64 + -26024;
	// stw r9,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r9.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stw r8,216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 216, ctx.r8.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r7,316(r31)
	PPC_STORE_U32(ctx.r31.u32 + 316, ctx.r7.u32);
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

__attribute__((alias("__imp__sub_82E9B014"))) PPC_WEAK_FUNC(sub_82E9B014);
PPC_FUNC_IMPL(__imp__sub_82E9B014) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E9B018"))) PPC_WEAK_FUNC(sub_82E9B018);
PPC_FUNC_IMPL(__imp__sub_82E9B018) {
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
	// bl 0x82e75880
	ctx.lr = 0x82E9B038;
	sub_82E75880(ctx, base);
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// addi r3,r31,312
	ctx.r3.s64 = ctx.r31.s64 + 312;
	// addi r4,r11,-32280
	ctx.r4.s64 = ctx.r11.s64 + -32280;
	// li r5,17
	ctx.r5.s64 = 17;
	// bl 0x824208c8
	ctx.lr = 0x82E9B04C;
	sub_824208C8(ctx, base);
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// lis r9,-32231
	ctx.r9.s64 = -2112290816;
	// stw r30,340(r31)
	PPC_STORE_U32(ctx.r31.u32 + 340, ctx.r30.u32);
	// lis r8,-32231
	ctx.r8.s64 = -2112290816;
	// addi r7,r10,-32080
	ctx.r7.s64 = ctx.r10.s64 + -32080;
	// addi r6,r9,-32092
	ctx.r6.s64 = ctx.r9.s64 + -32092;
	// addi r5,r8,-32096
	ctx.r5.s64 = ctx.r8.s64 + -32096;
	// stw r7,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r7.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r6,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r6.u32);
	// stw r5,216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 216, ctx.r5.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r4,356(r31)
	PPC_STORE_U32(ctx.r31.u32 + 356, ctx.r4.u32);
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

__attribute__((alias("__imp__sub_82E9B098"))) PPC_WEAK_FUNC(sub_82E9B098);
PPC_FUNC_IMPL(__imp__sub_82E9B098) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-216
	ctx.r3.s64 = ctx.r3.s64 + -216;
	// b 0x82e9b130
	sub_82E9B130(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E9B0A0"))) PPC_WEAK_FUNC(sub_82E9B0A0);
PPC_FUNC_IMPL(__imp__sub_82E9B0A0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-200
	ctx.r3.s64 = ctx.r3.s64 + -200;
	// b 0x82e9b130
	sub_82E9B130(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E9B0A8"))) PPC_WEAK_FUNC(sub_82E9B0A8);
PPC_FUNC_IMPL(__imp__sub_82E9B0A8) {
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
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// lis r9,-32231
	ctx.r9.s64 = -2112290816;
	// addi r8,r11,-32080
	ctx.r8.s64 = ctx.r11.s64 + -32080;
	// addi r7,r10,-32092
	ctx.r7.s64 = ctx.r10.s64 + -32092;
	// addi r6,r9,-32096
	ctx.r6.s64 = ctx.r9.s64 + -32096;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// stw r7,200(r3)
	PPC_STORE_U32(ctx.r3.u32 + 200, ctx.r7.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r6,216(r3)
	PPC_STORE_U32(ctx.r3.u32 + 216, ctx.r6.u32);
	// addi r31,r3,312
	ctx.r31.s64 = ctx.r3.s64 + 312;
	// lwz r5,332(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 332);
	// cmplwi cr6,r5,16
	cr6.compare<uint32_t>(ctx.r5.u32, 16, xer);
	// blt cr6,0x82e9b0fc
	if (cr6.lt) goto loc_82E9B0FC;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x82E9B0FC;
	sub_8386D088(ctx, base);
loc_82E9B0FC:
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
	// bl 0x82b6a590
	ctx.lr = 0x82E9B118;
	sub_82B6A590(ctx, base);
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

__attribute__((alias("__imp__sub_82E9B130"))) PPC_WEAK_FUNC(sub_82E9B130);
PPC_FUNC_IMPL(__imp__sub_82E9B130) {
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
	// bl 0x82e9b0a8
	ctx.lr = 0x82E9B150;
	sub_82E9B0A8(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82e9b168
	if (cr6.eq) goto loc_82E9B168;
	// bl 0x82416268
	ctx.lr = 0x82E9B164;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82E9B168:
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

__attribute__((alias("__imp__sub_82E9B180"))) PPC_WEAK_FUNC(sub_82E9B180);
PPC_FUNC_IMPL(__imp__sub_82E9B180) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82E9B188;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r29,1
	ctx.r29.s64 = 1;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,80
	ctx.r4.s64 = 80;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82E9B1AC;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82e9b1f4
	if (cr6.eq) goto loc_82E9B1F4;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// stw r29,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r29.u32);
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// addi r10,r11,17524
	ctx.r10.s64 = ctx.r11.s64 + 17524;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x8257fa88
	ctx.lr = 0x82E9B1D0;
	sub_8257FA88(ctx, base);
	// lis r9,-32231
	ctx.r9.s64 = -2112290816;
	// stw r28,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r28.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r8,r9,-31872
	ctx.r8.s64 = ctx.r9.s64 + -31872;
	// stw r29,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r29.u32);
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// stw r31,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r31.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82E9B1F4:
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E9B208"))) PPC_WEAK_FUNC(sub_82E9B208);
PPC_FUNC_IMPL(__imp__sub_82E9B208) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82e9b250
	if (cr6.eq) goto loc_82E9B250;
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595150
	ctx.lr = 0x82E9B238;
	sub_82595150(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e97c58
	ctx.lr = 0x82E9B240;
	sub_82E97C58(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82416268
	ctx.lr = 0x82E9B248;
	sub_82416268(ctx, base);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595170
	ctx.lr = 0x82E9B250;
	sub_82595170(ctx, base);
loc_82E9B250:
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

__attribute__((alias("__imp__sub_82E9B264"))) PPC_WEAK_FUNC(sub_82E9B264);
PPC_FUNC_IMPL(__imp__sub_82E9B264) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E9B268"))) PPC_WEAK_FUNC(sub_82E9B268);
PPC_FUNC_IMPL(__imp__sub_82E9B268) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82e9b278
	if (!cr6.eq) goto loc_82E9B278;
	// blr 
	return;
loc_82E9B278:
	// b 0x82e96640
	sub_82E96640(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E9B27C"))) PPC_WEAK_FUNC(sub_82E9B27C);
PPC_FUNC_IMPL(__imp__sub_82E9B27C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E9B280"))) PPC_WEAK_FUNC(sub_82E9B280);
PPC_FUNC_IMPL(__imp__sub_82E9B280) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82e9b290
	if (!cr6.eq) goto loc_82E9B290;
	// blr 
	return;
loc_82E9B290:
	// b 0x82e966d0
	sub_82E966D0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E9B294"))) PPC_WEAK_FUNC(sub_82E9B294);
PPC_FUNC_IMPL(__imp__sub_82E9B294) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E9B298"))) PPC_WEAK_FUNC(sub_82E9B298);
PPC_FUNC_IMPL(__imp__sub_82E9B298) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82e9b2a8
	if (!cr6.eq) goto loc_82E9B2A8;
	// blr 
	return;
loc_82E9B2A8:
	// b 0x82e96760
	sub_82E96760(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E9B2AC"))) PPC_WEAK_FUNC(sub_82E9B2AC);
PPC_FUNC_IMPL(__imp__sub_82E9B2AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E9B2B0"))) PPC_WEAK_FUNC(sub_82E9B2B0);
PPC_FUNC_IMPL(__imp__sub_82E9B2B0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82e9b2c0
	if (!cr6.eq) goto loc_82E9B2C0;
	// blr 
	return;
loc_82E9B2C0:
	// b 0x82e967f0
	sub_82E967F0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E9B2C4"))) PPC_WEAK_FUNC(sub_82E9B2C4);
PPC_FUNC_IMPL(__imp__sub_82E9B2C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E9B2C8"))) PPC_WEAK_FUNC(sub_82E9B2C8);
PPC_FUNC_IMPL(__imp__sub_82E9B2C8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82e9b2d8
	if (!cr6.eq) goto loc_82E9B2D8;
	// blr 
	return;
loc_82E9B2D8:
	// b 0x82e970e8
	sub_82E970E8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E9B2DC"))) PPC_WEAK_FUNC(sub_82E9B2DC);
PPC_FUNC_IMPL(__imp__sub_82E9B2DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E9B2E0"))) PPC_WEAK_FUNC(sub_82E9B2E0);
PPC_FUNC_IMPL(__imp__sub_82E9B2E0) {
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
	// lwz r31,72(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x82e9b328
	if (cr6.eq) goto loc_82E9B328;
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595150
	ctx.lr = 0x82E9B310;
	sub_82595150(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e97c58
	ctx.lr = 0x82E9B318;
	sub_82E97C58(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82416268
	ctx.lr = 0x82E9B320;
	sub_82416268(ctx, base);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595170
	ctx.lr = 0x82E9B328;
	sub_82595170(ctx, base);
loc_82E9B328:
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

__attribute__((alias("__imp__sub_82E9B33C"))) PPC_WEAK_FUNC(sub_82E9B33C);
PPC_FUNC_IMPL(__imp__sub_82E9B33C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E9B340"))) PPC_WEAK_FUNC(sub_82E9B340);
PPC_FUNC_IMPL(__imp__sub_82E9B340) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82E9B348;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r30,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r30.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r30,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r30.u32);
	// addi r29,r3,4
	ctx.r29.s64 = ctx.r3.s64 + 4;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,96
	ctx.r4.s64 = 96;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595718
	ctx.lr = 0x82E9B378;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82e9b38c
	if (cr6.eq) goto loc_82E9B38C;
	// bl 0x82e97d28
	ctx.lr = 0x82E9B384;
	sub_82E97D28(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82e9b390
	goto loc_82E9B390;
loc_82E9B38C:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_82E9B390:
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// stw r4,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r4.u32);
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// stb r30,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r30.u8);
	// lbz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x82e9b180
	ctx.lr = 0x82E9B3A8;
	sub_82E9B180(ctx, base);
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// bl 0x82dad4d0
	ctx.lr = 0x82E9B3C4;
	sub_82DAD4D0(ctx, base);
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82e9b3d4
	if (cr6.eq) goto loc_82E9B3D4;
	// bl 0x8259b510
	ctx.lr = 0x82E9B3D4;
	sub_8259B510(ctx, base);
loc_82E9B3D4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E9B3E0"))) PPC_WEAK_FUNC(sub_82E9B3E0);
PPC_FUNC_IMPL(__imp__sub_82E9B3E0) {
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
	// std r4,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r4.u64);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// std r5,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, ctx.r5.u64);
	// std r6,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.r6.u64);
	// std r7,152(r1)
	PPC_STORE_U64(ctx.r1.u32 + 152, ctx.r7.u64);
	// std r8,160(r1)
	PPC_STORE_U64(ctx.r1.u32 + 160, ctx.r8.u64);
	// std r9,168(r1)
	PPC_STORE_U64(ctx.r1.u32 + 168, ctx.r9.u64);
	// std r10,176(r1)
	PPC_STORE_U64(ctx.r1.u32 + 176, ctx.r10.u64);
	// bl 0x82edf030
	ctx.lr = 0x82E9B414;
	sub_82EDF030(ctx, base);
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// addi r10,r11,-31724
	ctx.r10.s64 = ctx.r11.s64 + -31724;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// li r5,60
	ctx.r5.s64 = 60;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x831ce980
	ctx.lr = 0x82E9B430;
	sub_831CE980(ctx, base);
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

__attribute__((alias("__imp__sub_82E9B448"))) PPC_WEAK_FUNC(sub_82E9B448);
PPC_FUNC_IMPL(__imp__sub_82E9B448) {
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
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// lis r10,-31756
	ctx.r10.s64 = -2081161216;
	// addi r9,r11,-31724
	ctx.r9.s64 = ctx.r11.s64 + -31724;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,-31676(r10)
	PPC_STORE_U32(ctx.r10.u32 + -31676, ctx.r11.u32);
	// bl 0x82edf4d8
	ctx.lr = 0x82E9B480;
	sub_82EDF4D8(ctx, base);
	// clrlwi r8,r30,31
	ctx.r8.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x82e9b498
	if (cr6.eq) goto loc_82E9B498;
	// bl 0x82416268
	ctx.lr = 0x82E9B494;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82E9B498:
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

__attribute__((alias("__imp__sub_82E9B4B0"))) PPC_WEAK_FUNC(sub_82E9B4B0);
PPC_FUNC_IMPL(__imp__sub_82E9B4B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31757
	ctx.r11.s64 = -2081226752;
	// lwz r3,25484(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25484);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E9B4BC"))) PPC_WEAK_FUNC(sub_82E9B4BC);
PPC_FUNC_IMPL(__imp__sub_82E9B4BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E9B4C0"))) PPC_WEAK_FUNC(sub_82E9B4C0);
PPC_FUNC_IMPL(__imp__sub_82E9B4C0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x82E9B4C8;
	__savegprlr_24(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31756
	ctx.r31.s64 = -2081161216;
	// std r10,248(r1)
	PPC_STORE_U64(ctx.r1.u32 + 248, ctx.r10.u64);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// lwz r11,-31676(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31676);
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// mr r25,r8
	ctx.r25.u64 = ctx.r8.u64;
	// mr r24,r9
	ctx.r24.u64 = ctx.r9.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82e9b560
	if (!cr6.eq) goto loc_82E9B560;
	// li r11,29
	ctx.r11.s64 = 29;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// li r4,96
	ctx.r4.s64 = 96;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82595718
	ctx.lr = 0x82E9B514;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82e9b550
	if (cr6.eq) goto loc_82E9B550;
	// lwz r11,248(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 248);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// mr r9,r25
	ctx.r9.u64 = ctx.r25.u64;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// mr r10,r24
	ctx.r10.u64 = ctx.r24.u64;
	// bl 0x82e9b3e0
	ctx.lr = 0x82E9B544;
	sub_82E9B3E0(ctx, base);
	// stw r3,-31676(r31)
	PPC_STORE_U32(ctx.r31.u32 + -31676, ctx.r3.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_82E9B550:
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r3,-31676(r31)
	PPC_STORE_U32(ctx.r31.u32 + -31676, ctx.r3.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_82E9B560:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E9B56C"))) PPC_WEAK_FUNC(sub_82E9B56C);
PPC_FUNC_IMPL(__imp__sub_82E9B56C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E9B570"))) PPC_WEAK_FUNC(sub_82E9B570);
PPC_FUNC_IMPL(__imp__sub_82E9B570) {
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
	// lis r31,-31756
	ctx.r31.s64 = -2081161216;
	// lwz r11,-31676(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31676);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82e9b5d4
	if (cr6.eq) goto loc_82E9B5D4;
	// li r11,29
	ctx.r11.s64 = 29;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595150
	ctx.lr = 0x82E9B5A4;
	sub_82595150(ctx, base);
	// lwz r3,-31676(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31676);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82e9b5c4
	if (cr6.eq) goto loc_82E9B5C4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82E9B5C4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82E9B5C4:
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595170
	ctx.lr = 0x82E9B5CC;
	sub_82595170(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-31676(r31)
	PPC_STORE_U32(ctx.r31.u32 + -31676, ctx.r11.u32);
loc_82E9B5D4:
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

__attribute__((alias("__imp__sub_82E9B5E8"))) PPC_WEAK_FUNC(sub_82E9B5E8);
PPC_FUNC_IMPL(__imp__sub_82E9B5E8) {
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
	// lis r30,-31757
	ctx.r30.s64 = -2081226752;
	// lwz r3,25484(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 25484);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82e9b66c
	if (!cr6.eq) goto loc_82E9B66C;
	// li r11,29
	ctx.r11.s64 = 29;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,72
	ctx.r4.s64 = 72;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82E9B624;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82e9b664
	if (cr6.eq) goto loc_82E9B664;
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,-31688
	ctx.r9.s64 = ctx.r10.s64 + -31688;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// li r5,60
	ctx.r5.s64 = 60;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r3,12
	ctx.r3.s64 = ctx.r3.s64 + 12;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bl 0x831cdcf0
	ctx.lr = 0x82E9B658;
	sub_831CDCF0(ctx, base);
	// stw r31,25484(r30)
	PPC_STORE_U32(ctx.r30.u32 + 25484, ctx.r31.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x82e9b66c
	goto loc_82E9B66C;
loc_82E9B664:
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r3,25484(r30)
	PPC_STORE_U32(ctx.r30.u32 + 25484, ctx.r3.u32);
loc_82E9B66C:
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

__attribute__((alias("__imp__sub_82E9B684"))) PPC_WEAK_FUNC(sub_82E9B684);
PPC_FUNC_IMPL(__imp__sub_82E9B684) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E9B688"))) PPC_WEAK_FUNC(sub_82E9B688);
PPC_FUNC_IMPL(__imp__sub_82E9B688) {
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
	// lis r31,-31757
	ctx.r31.s64 = -2081226752;
	// lwz r11,25484(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25484);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82e9b6ec
	if (cr6.eq) goto loc_82E9B6EC;
	// li r11,29
	ctx.r11.s64 = 29;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595150
	ctx.lr = 0x82E9B6BC;
	sub_82595150(ctx, base);
	// lwz r3,25484(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25484);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82e9b6dc
	if (cr6.eq) goto loc_82E9B6DC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82E9B6DC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82E9B6DC:
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595170
	ctx.lr = 0x82E9B6E4;
	sub_82595170(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,25484(r31)
	PPC_STORE_U32(ctx.r31.u32 + 25484, ctx.r11.u32);
loc_82E9B6EC:
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

__attribute__((alias("__imp__sub_82E9B700"))) PPC_WEAK_FUNC(sub_82E9B700);
PPC_FUNC_IMPL(__imp__sub_82E9B700) {
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
	// std r4,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r4.u64);
	// li r11,0
	ctx.r11.s64 = 0;
	// std r5,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, ctx.r5.u64);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// std r6,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.r6.u64);
	// li r5,60
	ctx.r5.s64 = 60;
	// std r7,152(r1)
	PPC_STORE_U64(ctx.r1.u32 + 152, ctx.r7.u64);
	// std r8,160(r1)
	PPC_STORE_U64(ctx.r1.u32 + 160, ctx.r8.u64);
	// std r9,168(r1)
	PPC_STORE_U64(ctx.r1.u32 + 168, ctx.r9.u64);
	// std r10,176(r1)
	PPC_STORE_U64(ctx.r1.u32 + 176, ctx.r10.u64);
	// addi r10,r3,12
	ctx.r10.s64 = ctx.r3.s64 + 12;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// bl 0x831ce980
	ctx.lr = 0x82E9B744;
	sub_831CE980(ctx, base);
	// bl 0x82e9b570
	ctx.lr = 0x82E9B748;
	sub_82E9B570(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E9B758"))) PPC_WEAK_FUNC(sub_82E9B758);
PPC_FUNC_IMPL(__imp__sub_82E9B758) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82E9B760;
	__savegprlr_27(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r28,r29
	ctx.r28.u64 = ctx.r29.u64;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// blt cr6,0x82e9b890
	if (cr6.lt) goto loc_82E9B890;
	// beq cr6,0x82e9b7ac
	if (cr6.eq) goto loc_82E9B7AC;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// blt cr6,0x82e9b798
	if (cr6.lt) goto loc_82E9B798;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_82E9B798:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_82E9B7AC:
	// lis r11,-31756
	ctx.r11.s64 = -2081161216;
	// lwz r30,-31676(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + -31676);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// bne cr6,0x82e9b7d0
	if (!cr6.eq) goto loc_82E9B7D0;
	// li r11,3
	ctx.r11.s64 = 3;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_82E9B7D0:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82E9B7E4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x82e9b858
	if (!cr6.eq) goto loc_82E9B858;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// std r29,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r29.u64);
	// std r29,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r29.u64);
	// std r29,16(r11)
	PPC_STORE_U64(ctx.r11.u32 + 16, ctx.r29.u64);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82E9B818;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lhz r7,94(r1)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r1.u32 + 94);
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// stw r7,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r7.u32);
	// bne cr6,0x82e9b830
	if (!cr6.eq) goto loc_82E9B830;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_82E9B830:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r10,2
	ctx.r10.s64 = 2;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// bl 0x82e86ef0
	ctx.lr = 0x82E9B848;
	sub_82E86EF0(ctx, base);
	// bl 0x82e9b570
	ctx.lr = 0x82E9B84C;
	sub_82E9B570(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_82E9B858:
	// cmpwi cr6,r28,-1
	cr6.compare<int32_t>(ctx.r28.s32, -1, xer);
	// bne cr6,0x82e9b878
	if (!cr6.eq) goto loc_82E9B878;
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bl 0x82e9b570
	ctx.lr = 0x82E9B86C;
	sub_82E9B570(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_82E9B878:
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(ctx.r28.s32, 0, xer);
	// beq cr6,0x82e9b8c8
	if (cr6.eq) goto loc_82E9B8C8;
	// bl 0x82e9b570
	ctx.lr = 0x82E9B884;
	sub_82E9B570(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_82E9B890:
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// ld r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r31.u32 + 12);
	// rldicr r10,r11,32,63
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r4,20(r31)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r31.u32 + 20);
	// ld r5,28(r31)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r31.u32 + 28);
	// ld r6,36(r31)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r31.u32 + 36);
	// ld r7,44(r31)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r31.u32 + 44);
	// ld r8,52(r31)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r31.u32 + 52);
	// ld r9,60(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 60);
	// bl 0x82e9b4c0
	ctx.lr = 0x82E9B8B8;
	sub_82E9B4C0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82e9b8c8
	if (cr6.eq) goto loc_82E9B8C8;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_82E9B8C8:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E9B8D4"))) PPC_WEAK_FUNC(sub_82E9B8D4);
PPC_FUNC_IMPL(__imp__sub_82E9B8D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E9B8D8"))) PPC_WEAK_FUNC(sub_82E9B8D8);
PPC_FUNC_IMPL(__imp__sub_82E9B8D8) {
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
	// lis r31,-31757
	ctx.r31.s64 = -2081226752;
	// lwz r3,25488(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25488);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82e9b930
	if (!cr6.eq) goto loc_82E9B930;
	// li r11,29
	ctx.r11.s64 = 29;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82E9B910;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82e9b928
	if (cr6.eq) goto loc_82E9B928;
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// addi r10,r11,-31684
	ctx.r10.s64 = ctx.r11.s64 + -31684;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// b 0x82e9b92c
	goto loc_82E9B92C;
loc_82E9B928:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82E9B92C:
	// stw r3,25488(r31)
	PPC_STORE_U32(ctx.r31.u32 + 25488, ctx.r3.u32);
loc_82E9B930:
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

__attribute__((alias("__imp__sub_82E9B944"))) PPC_WEAK_FUNC(sub_82E9B944);
PPC_FUNC_IMPL(__imp__sub_82E9B944) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E9B948"))) PPC_WEAK_FUNC(sub_82E9B948);
PPC_FUNC_IMPL(__imp__sub_82E9B948) {
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
	// lis r31,-31757
	ctx.r31.s64 = -2081226752;
	// lwz r11,25488(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25488);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82e9b9ac
	if (cr6.eq) goto loc_82E9B9AC;
	// li r11,29
	ctx.r11.s64 = 29;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595150
	ctx.lr = 0x82E9B97C;
	sub_82595150(ctx, base);
	// lwz r3,25488(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25488);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82e9b99c
	if (cr6.eq) goto loc_82E9B99C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82E9B99C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82E9B99C:
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595170
	ctx.lr = 0x82E9B9A4;
	sub_82595170(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,25488(r31)
	PPC_STORE_U32(ctx.r31.u32 + 25488, ctx.r11.u32);
loc_82E9B9AC:
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

__attribute__((alias("__imp__sub_82E9B9C0"))) PPC_WEAK_FUNC(sub_82E9B9C0);
PPC_FUNC_IMPL(__imp__sub_82E9B9C0) {
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
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// lis r10,-31757
	ctx.r10.s64 = -2081226752;
	// addi r9,r11,-31684
	ctx.r9.s64 = ctx.r11.s64 + -31684;
	// clrlwi r8,r4,31
	ctx.r8.u64 = ctx.r4.u32 & 0x1;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// stw r11,25488(r10)
	PPC_STORE_U32(ctx.r10.u32 + 25488, ctx.r11.u32);
	// beq cr6,0x82e9ba00
	if (cr6.eq) goto loc_82E9BA00;
	// bl 0x82416268
	ctx.lr = 0x82E9B9FC;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82E9BA00:
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

__attribute__((alias("__imp__sub_82E9BA14"))) PPC_WEAK_FUNC(sub_82E9BA14);
PPC_FUNC_IMPL(__imp__sub_82E9BA14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E9BA18"))) PPC_WEAK_FUNC(sub_82E9BA18);
PPC_FUNC_IMPL(__imp__sub_82E9BA18) {
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
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,-31688
	ctx.r10.s64 = ctx.r11.s64 + -31688;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x82e9b570
	ctx.lr = 0x82E9BA44;
	sub_82E9B570(ctx, base);
	// lis r9,-31757
	ctx.r9.s64 = -2081226752;
	// clrlwi r8,r30,31
	ctx.r8.u64 = ctx.r30.u32 & 0x1;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,25484(r9)
	PPC_STORE_U32(ctx.r9.u32 + 25484, ctx.r11.u32);
	// beq cr6,0x82e9ba68
	if (cr6.eq) goto loc_82E9BA68;
	// bl 0x82416268
	ctx.lr = 0x82E9BA64;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82E9BA68:
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

__attribute__((alias("__imp__sub_82E9BA80"))) PPC_WEAK_FUNC(sub_82E9BA80);
PPC_FUNC_IMPL(__imp__sub_82E9BA80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82E9BA88;
	__savegprlr_26(ctx, base);
	// li r7,13
	ctx.r7.s64 = 13;
	// lwz r5,72(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// li r11,7
	ctx.r11.s64 = 7;
	// li r10,2
	ctx.r10.s64 = 2;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,-140(r1)
	PPC_STORE_U32(ctx.r1.u32 + -140, ctx.r11.u32);
	// li r9,10
	ctx.r9.s64 = 10;
	// stw r11,-132(r1)
	PPC_STORE_U32(ctx.r1.u32 + -132, ctx.r11.u32);
	// li r6,5
	ctx.r6.s64 = 5;
	// stw r11,-124(r1)
	PPC_STORE_U32(ctx.r1.u32 + -124, ctx.r11.u32);
	// li r3,3
	ctx.r3.s64 = 3;
	// stw r11,-120(r1)
	PPC_STORE_U32(ctx.r1.u32 + -120, ctx.r11.u32);
	// li r31,1
	ctx.r31.s64 = 1;
	// stw r11,-116(r1)
	PPC_STORE_U32(ctx.r1.u32 + -116, ctx.r11.u32);
	// li r30,4
	ctx.r30.s64 = 4;
	// stw r11,-100(r1)
	PPC_STORE_U32(ctx.r1.u32 + -100, ctx.r11.u32);
	// li r29,6
	ctx.r29.s64 = 6;
	// stw r11,-68(r1)
	PPC_STORE_U32(ctx.r1.u32 + -68, ctx.r11.u32);
	// li r28,8
	ctx.r28.s64 = 8;
	// stw r8,-160(r1)
	PPC_STORE_U32(ctx.r1.u32 + -160, ctx.r8.u32);
	// li r27,12
	ctx.r27.s64 = 12;
	// stw r8,-156(r1)
	PPC_STORE_U32(ctx.r1.u32 + -156, ctx.r8.u32);
	// li r26,11
	ctx.r26.s64 = 11;
	// stw r8,-148(r1)
	PPC_STORE_U32(ctx.r1.u32 + -148, ctx.r8.u32);
	// stw r31,-152(r1)
	PPC_STORE_U32(ctx.r1.u32 + -152, ctx.r31.u32);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// stw r3,-144(r1)
	PPC_STORE_U32(ctx.r1.u32 + -144, ctx.r3.u32);
	// addi r11,r1,-156
	ctx.r11.s64 = ctx.r1.s64 + -156;
	// stw r30,-136(r1)
	PPC_STORE_U32(ctx.r1.u32 + -136, ctx.r30.u32);
	// stw r29,-128(r1)
	PPC_STORE_U32(ctx.r1.u32 + -128, ctx.r29.u32);
	// stw r28,-112(r1)
	PPC_STORE_U32(ctx.r1.u32 + -112, ctx.r28.u32);
	// stw r9,-108(r1)
	PPC_STORE_U32(ctx.r1.u32 + -108, ctx.r9.u32);
	// stw r10,-104(r1)
	PPC_STORE_U32(ctx.r1.u32 + -104, ctx.r10.u32);
	// stw r10,-96(r1)
	PPC_STORE_U32(ctx.r1.u32 + -96, ctx.r10.u32);
	// stw r9,-92(r1)
	PPC_STORE_U32(ctx.r1.u32 + -92, ctx.r9.u32);
	// stw r10,-88(r1)
	PPC_STORE_U32(ctx.r1.u32 + -88, ctx.r10.u32);
	// stw r27,-84(r1)
	PPC_STORE_U32(ctx.r1.u32 + -84, ctx.r27.u32);
	// stw r10,-80(r1)
	PPC_STORE_U32(ctx.r1.u32 + -80, ctx.r10.u32);
	// stw r26,-76(r1)
	PPC_STORE_U32(ctx.r1.u32 + -76, ctx.r26.u32);
	// stw r6,-72(r1)
	PPC_STORE_U32(ctx.r1.u32 + -72, ctx.r6.u32);
	// stw r6,-64(r1)
	PPC_STORE_U32(ctx.r1.u32 + -64, ctx.r6.u32);
	// stw r9,-60(r1)
	PPC_STORE_U32(ctx.r1.u32 + -60, ctx.r9.u32);
loc_82E9BB30:
	// lwz r10,-4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// cmpw cr6,r10,r4
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r4.s32, xer);
	// bne cr6,0x82e9bb4c
	if (!cr6.eq) goto loc_82E9BB4C;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r10,r5
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r5.s32, xer);
	// bne cr6,0x82e9bb4c
	if (!cr6.eq) goto loc_82E9BB4C;
	// li r8,1
	ctx.r8.s64 = 1;
loc_82E9BB4C:
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// bdnz 0x82e9bb30
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82E9BB30;
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E9BB5C"))) PPC_WEAK_FUNC(sub_82E9BB5C);
PPC_FUNC_IMPL(__imp__sub_82E9BB5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E9BB60"))) PPC_WEAK_FUNC(sub_82E9BB60);
PPC_FUNC_IMPL(__imp__sub_82E9BB60) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,72(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x82e9bb74
	if (!cr6.eq) goto loc_82E9BB74;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82E9BB74:
	// cmpwi cr6,r11,7
	cr6.compare<int32_t>(ctx.r11.s32, 7, xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// beqlr cr6
	if (cr6.eq) return;
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E9BB88"))) PPC_WEAK_FUNC(sub_82E9BB88);
PPC_FUNC_IMPL(__imp__sub_82E9BB88) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,72(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bne cr6,0x82e9bb9c
	if (!cr6.eq) goto loc_82E9BB9C;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82E9BB9C:
	// cmpwi cr6,r11,7
	cr6.compare<int32_t>(ctx.r11.s32, 7, xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// beqlr cr6
	if (cr6.eq) return;
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E9BBB0"))) PPC_WEAK_FUNC(sub_82E9BBB0);
PPC_FUNC_IMPL(__imp__sub_82E9BBB0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,72(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(ctx.r11.s32, 4, xer);
	// bne cr6,0x82e9bbc4
	if (!cr6.eq) goto loc_82E9BBC4;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82E9BBC4:
	// cmpwi cr6,r11,7
	cr6.compare<int32_t>(ctx.r11.s32, 7, xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// beqlr cr6
	if (cr6.eq) return;
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E9BBD8"))) PPC_WEAK_FUNC(sub_82E9BBD8);
PPC_FUNC_IMPL(__imp__sub_82E9BBD8) {
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
	// std r4,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.r4.u64);
	// li r4,5
	ctx.r4.s64 = 5;
	// std r5,152(r1)
	PPC_STORE_U64(ctx.r1.u32 + 152, ctx.r5.u64);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// std r6,160(r1)
	PPC_STORE_U64(ctx.r1.u32 + 160, ctx.r6.u64);
	// std r7,168(r1)
	PPC_STORE_U64(ctx.r1.u32 + 168, ctx.r7.u64);
	// std r8,176(r1)
	PPC_STORE_U64(ctx.r1.u32 + 176, ctx.r8.u64);
	// std r9,184(r1)
	PPC_STORE_U64(ctx.r1.u32 + 184, ctx.r9.u64);
	// std r10,192(r1)
	PPC_STORE_U64(ctx.r1.u32 + 192, ctx.r10.u64);
	// bl 0x82e9ba80
	ctx.lr = 0x82E9BC14;
	sub_82E9BA80(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82e9bc28
	if (!cr6.eq) goto loc_82E9BC28;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82e9bc84
	goto loc_82E9BC84;
loc_82E9BC28:
	// lbz r30,215(r1)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r1.u32 + 215);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// bne cr6,0x82e9bc48
	if (!cr6.eq) goto loc_82E9BC48;
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// li r5,60
	ctx.r5.s64 = 60;
	// bl 0x831ce980
	ctx.lr = 0x82E9BC44;
	sub_831CE980(ctx, base);
	// b 0x82e9bc64
	goto loc_82E9BC64;
loc_82E9BC48:
	// li r9,7
	ctx.r9.s64 = 7;
	// addi r11,r31,88
	ctx.r11.s64 = ctx.r31.s64 + 88;
	// li r10,0
	ctx.r10.s64 = 0;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_82E9BC58:
	// stdu r10,8(r11)
	ea = 8 + ctx.r11.u32;
	PPC_STORE_U64(ea, ctx.r10.u64);
	ctx.r11.u32 = ea;
	// bdnz 0x82e9bc58
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82E9BC58;
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
loc_82E9BC64:
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// li r10,6
	ctx.r10.s64 = 6;
	// li r9,0
	ctx.r9.s64 = 0;
	// stb r30,212(r31)
	PPC_STORE_U8(ctx.r31.u32 + 212, ctx.r30.u8);
	// stw r10,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r10.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r9,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r9.u32);
	// stw r11,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
loc_82E9BC84:
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

__attribute__((alias("__imp__sub_82E9BC9C"))) PPC_WEAK_FUNC(sub_82E9BC9C);
PPC_FUNC_IMPL(__imp__sub_82E9BC9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E9BCA0"))) PPC_WEAK_FUNC(sub_82E9BCA0);
PPC_FUNC_IMPL(__imp__sub_82E9BCA0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,72(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(ctx.r11.s32, 6, xer);
	// bne cr6,0x82e9bcb4
	if (!cr6.eq) goto loc_82E9BCB4;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82E9BCB4:
	// cmpwi cr6,r11,7
	cr6.compare<int32_t>(ctx.r11.s32, 7, xer);
	// beq cr6,0x82e9bcc8
	if (cr6.eq) goto loc_82E9BCC8;
	// cmpwi cr6,r11,10
	cr6.compare<int32_t>(ctx.r11.s32, 10, xer);
	// li r3,-1
	ctx.r3.s64 = -1;
	// bnelr cr6
	if (!cr6.eq) return;
loc_82E9BCC8:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E9BCD0"))) PPC_WEAK_FUNC(sub_82E9BCD0);
PPC_FUNC_IMPL(__imp__sub_82E9BCD0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82E9BCD8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x82e9ba80
	ctx.lr = 0x82E9BCF0;
	sub_82E9BA80(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82e9bd14
	if (!cr6.eq) goto loc_82E9BD14;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r10,r11,21716
	ctx.r10.s64 = ctx.r11.s64 + 21716;
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82E9BD14:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x82e9bd20
	if (cr6.eq) goto loc_82E9BD20;
	// stw r29,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r29.u32);
loc_82E9BD20:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// li r9,5
	ctx.r9.s64 = 5;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r10,21716
	ctx.r7.s64 = ctx.r10.s64 + 21716;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 160, ctx.r11.u32);
	// lbz r6,8(r30)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r30.u32 + 8);
	// stb r6,164(r31)
	PPC_STORE_U8(ctx.r31.u32 + 164, ctx.r6.u8);
	// lbz r5,9(r30)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r30.u32 + 9);
	// stb r5,165(r31)
	PPC_STORE_U8(ctx.r31.u32 + 165, ctx.r5.u8);
	// lbz r4,10(r30)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r30.u32 + 10);
	// stb r4,166(r31)
	PPC_STORE_U8(ctx.r31.u32 + 166, ctx.r4.u8);
	// lbz r11,11(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 11);
	// stb r11,167(r31)
	PPC_STORE_U8(ctx.r31.u32 + 167, ctx.r11.u8);
	// lwz r10,72(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// stw r10,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r10.u32);
	// stw r9,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r9.u32);
	// stw r8,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r8.u32);
	// stw r7,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r7.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E9BD78"))) PPC_WEAK_FUNC(sub_82E9BD78);
PPC_FUNC_IMPL(__imp__sub_82E9BD78) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,72(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// cmpwi cr6,r11,5
	cr6.compare<int32_t>(ctx.r11.s32, 5, xer);
	// bne cr6,0x82e9bd8c
	if (!cr6.eq) goto loc_82E9BD8C;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82E9BD8C:
	// cmpwi cr6,r11,7
	cr6.compare<int32_t>(ctx.r11.s32, 7, xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// beqlr cr6
	if (cr6.eq) return;
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E9BDA0"))) PPC_WEAK_FUNC(sub_82E9BDA0);
PPC_FUNC_IMPL(__imp__sub_82E9BDA0) {
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
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82e9ba80
	ctx.lr = 0x82E9BDBC;
	sub_82E9BA80(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82e9bde0
	if (!cr6.eq) goto loc_82E9BDE0;
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
loc_82E9BDE0:
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r11,11
	cr6.compare<int32_t>(ctx.r11.s32, 11, xer);
	// bne cr6,0x82e9bdfc
	if (!cr6.eq) goto loc_82E9BDFC;
	// li r9,1
	ctx.r9.s64 = 1;
	// stb r9,256(r31)
	PPC_STORE_U8(ctx.r31.u32 + 256, ctx.r9.u8);
	// b 0x82e9be00
	goto loc_82E9BE00;
loc_82E9BDFC:
	// stb r10,256(r31)
	PPC_STORE_U8(ctx.r31.u32 + 256, ctx.r10.u8);
loc_82E9BE00:
	// li r9,3
	ctx.r9.s64 = 3;
	// stw r11,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r10.u32);
	// stw r9,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r9.u32);
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

__attribute__((alias("__imp__sub_82E9BE28"))) PPC_WEAK_FUNC(sub_82E9BE28);
PPC_FUNC_IMPL(__imp__sub_82E9BE28) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,72(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// bne cr6,0x82e9be3c
	if (!cr6.eq) goto loc_82E9BE3C;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82E9BE3C:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// beqlr cr6
	if (cr6.eq) return;
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E9BE50"))) PPC_WEAK_FUNC(sub_82E9BE50);
PPC_FUNC_IMPL(__imp__sub_82E9BE50) {
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
	// li r4,7
	ctx.r4.s64 = 7;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82e9ba80
	ctx.lr = 0x82E9BE6C;
	sub_82E9BA80(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82e9be90
	if (!cr6.eq) goto loc_82E9BE90;
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
loc_82E9BE90:
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// li r10,9
	ctx.r10.s64 = 9;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r10,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r10.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r9,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r9.u32);
	// stw r11,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82E9BEC0"))) PPC_WEAK_FUNC(sub_82E9BEC0);
PPC_FUNC_IMPL(__imp__sub_82E9BEC0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82E9BEC8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x82e9ba80
	ctx.lr = 0x82E9BEE0;
	sub_82E9BA80(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82e9bef8
	if (!cr6.eq) goto loc_82E9BEF8;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82E9BEF8:
	// lbz r11,220(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 220);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82e9bf28
	if (cr6.eq) goto loc_82E9BF28;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x82e9bf28
	if (cr6.eq) goto loc_82E9BF28;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x82e9bf28
	if (cr6.eq) goto loc_82E9BF28;
	// rlwinm r6,r29,4,0,27
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 4) & 0xFFFFFFF0;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r31,224
	ctx.r3.s64 = ctx.r31.s64 + 224;
	// bl 0x831d0080
	ctx.lr = 0x82E9BF28;
	sub_831D0080(ctx, base);
loc_82E9BF28:
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// li r10,11
	ctx.r10.s64 = 11;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r10,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r10.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r9,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r9.u32);
	// stw r11,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E9BF4C"))) PPC_WEAK_FUNC(sub_82E9BF4C);
PPC_FUNC_IMPL(__imp__sub_82E9BF4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E9BF50"))) PPC_WEAK_FUNC(sub_82E9BF50);
PPC_FUNC_IMPL(__imp__sub_82E9BF50) {
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
	// lwz r3,208(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 208);
	// bl 0x83524138
	ctx.lr = 0x82E9BF6C;
	sub_83524138(ctx, base);
	// cmpldi cr6,r3,0
	cr6.compare<uint64_t>(ctx.r3.u64, 0, xer);
	// bne cr6,0x82e9bf88
	if (!cr6.eq) goto loc_82E9BF88;
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
loc_82E9BF88:
	// bl 0x83a7d958
	ctx.lr = 0x82E9BF8C;
	sub_83A7D958(ctx, base);
	// lwz r11,208(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 208);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// bl 0x83524138
	ctx.lr = 0x82E9BF98;
	sub_83524138(ctx, base);
	// ld r10,200(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 200);
	// li r11,1
	ctx.r11.s64 = 1;
	// cmpld cr6,r3,r10
	cr6.compare<uint64_t>(ctx.r3.u64, ctx.r10.u64, xer);
	// bgt cr6,0x82e9bfac
	if (cr6.gt) goto loc_82E9BFAC;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82E9BFAC:
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

__attribute__((alias("__imp__sub_82E9BFC4"))) PPC_WEAK_FUNC(sub_82E9BFC4);
PPC_FUNC_IMPL(__imp__sub_82E9BFC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E9BFC8"))) PPC_WEAK_FUNC(sub_82E9BFC8);
PPC_FUNC_IMPL(__imp__sub_82E9BFC8) {
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
	// bl 0x83a7d958
	ctx.lr = 0x82E9BFE0;
	sub_83A7D958(ctx, base);
	// stw r3,208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 208, ctx.r3.u32);
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

__attribute__((alias("__imp__sub_82E9BFFC"))) PPC_WEAK_FUNC(sub_82E9BFFC);
PPC_FUNC_IMPL(__imp__sub_82E9BFFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E9C000"))) PPC_WEAK_FUNC(sub_82E9C000);
PPC_FUNC_IMPL(__imp__sub_82E9C000) {
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
	// addi r3,r3,168
	ctx.r3.s64 = ctx.r3.s64 + 168;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,997
	cr6.compare<uint32_t>(ctx.r11.u32, 997, xer);
	// bne cr6,0x82e9c020
	if (!cr6.eq) goto loc_82E9C020;
	// bl 0x832d3160
	ctx.lr = 0x82E9C020;
	sub_832D3160(ctx, base);
loc_82E9C020:
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
}

__attribute__((alias("__imp__sub_82E9C034"))) PPC_WEAK_FUNC(sub_82E9C034);
PPC_FUNC_IMPL(__imp__sub_82E9C034) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E9C038"))) PPC_WEAK_FUNC(sub_82E9C038);
PPC_FUNC_IMPL(__imp__sub_82E9C038) {
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
	// lwz r11,168(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 168);
	// addi r31,r3,168
	ctx.r31.s64 = ctx.r3.s64 + 168;
	// cmplwi cr6,r11,997
	cr6.compare<uint32_t>(ctx.r11.u32, 997, xer);
	// beq cr6,0x82e9c098
	if (cr6.eq) goto loc_82E9C098;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832d3188
	ctx.lr = 0x82E9C060;
	sub_832D3188(ctx, base);
	// subfic r10,r3,0
	xer.ca = ctx.r3.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r3.s64;
	// li r11,0
	ctx.r11.s64 = 0;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// std r11,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r11.u64);
	// std r11,8(r31)
	PPC_STORE_U64(ctx.r31.u32 + 8, ctx.r11.u64);
	// rlwinm r10,r9,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFE;
	// std r11,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r11.u64);
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// addi r3,r10,1
	ctx.r3.s64 = ctx.r10.s64 + 1;
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
loc_82E9C098:
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

__attribute__((alias("__imp__sub_82E9C0B0"))) PPC_WEAK_FUNC(sub_82E9C0B0);
PPC_FUNC_IMPL(__imp__sub_82E9C0B0) {
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
	// lwz r10,160(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 160);
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// subfic r9,r10,0
	xer.ca = ctx.r10.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r10.s64;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r30,r7,r11
	ctx.r30.u64 = ctx.r7.u64 & ctx.r11.u64;
	// bl 0x8308e078
	ctx.lr = 0x82E9C0E0;
	sub_8308E078(ctx, base);
	// cmplwi cr6,r3,4
	cr6.compare<uint32_t>(ctx.r3.u32, 4, xer);
	// bge cr6,0x82e9c11c
	if (!cr6.lt) goto loc_82E9C11C;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r4,0
	ctx.r4.s64 = 0;
	// std r11,168(r31)
	PPC_STORE_U64(ctx.r31.u32 + 168, ctx.r11.u64);
	// addi r6,r31,168
	ctx.r6.s64 = ctx.r31.s64 + 168;
	// std r11,176(r31)
	PPC_STORE_U64(ctx.r31.u32 + 176, ctx.r11.u64);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// std r11,184(r31)
	PPC_STORE_U64(ctx.r31.u32 + 184, ctx.r11.u64);
	// stw r11,192(r31)
	PPC_STORE_U32(ctx.r31.u32 + 192, ctx.r11.u32);
	// ori r4,r4,32778
	ctx.r4.u64 = ctx.r4.u64 | 32778;
	// bl 0x832d3328
	ctx.lr = 0x82E9C110;
	sub_832D3328(ctx, base);
	// cmplwi cr6,r3,997
	cr6.compare<uint32_t>(ctx.r3.u32, 997, xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// beq cr6,0x82e9c120
	if (cr6.eq) goto loc_82E9C120;
loc_82E9C11C:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_82E9C120:
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

__attribute__((alias("__imp__sub_82E9C138"))) PPC_WEAK_FUNC(sub_82E9C138);
PPC_FUNC_IMPL(__imp__sub_82E9C138) {
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
	// bl 0x8308e078
	ctx.lr = 0x82E9C150;
	sub_8308E078(ctx, base);
	// cmplwi cr6,r3,4
	cr6.compare<uint32_t>(ctx.r3.u32, 4, xer);
	// bge cr6,0x82e9c18c
	if (!cr6.lt) goto loc_82E9C18C;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r4,0
	ctx.r4.s64 = 0;
	// std r11,168(r31)
	PPC_STORE_U64(ctx.r31.u32 + 168, ctx.r11.u64);
	// addi r6,r31,168
	ctx.r6.s64 = ctx.r31.s64 + 168;
	// std r11,176(r31)
	PPC_STORE_U64(ctx.r31.u32 + 176, ctx.r11.u64);
	// li r5,0
	ctx.r5.s64 = 0;
	// std r11,184(r31)
	PPC_STORE_U64(ctx.r31.u32 + 184, ctx.r11.u64);
	// stw r11,192(r31)
	PPC_STORE_U32(ctx.r31.u32 + 192, ctx.r11.u32);
	// ori r4,r4,32779
	ctx.r4.u64 = ctx.r4.u64 | 32779;
	// bl 0x832d3328
	ctx.lr = 0x82E9C180;
	sub_832D3328(ctx, base);
	// cmplwi cr6,r3,997
	cr6.compare<uint32_t>(ctx.r3.u32, 997, xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// beq cr6,0x82e9c190
	if (cr6.eq) goto loc_82E9C190;
loc_82E9C18C:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_82E9C190:
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

__attribute__((alias("__imp__sub_82E9C1A4"))) PPC_WEAK_FUNC(sub_82E9C1A4);
PPC_FUNC_IMPL(__imp__sub_82E9C1A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E9C1A8"))) PPC_WEAK_FUNC(sub_82E9C1A8);
PPC_FUNC_IMPL(__imp__sub_82E9C1A8) {
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
	// bl 0x8308e078
	ctx.lr = 0x82E9C1C0;
	sub_8308E078(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,4
	cr6.compare<uint32_t>(ctx.r3.u32, 4, xer);
	// bge cr6,0x82e9c298
	if (!cr6.lt) goto loc_82E9C298;
	// lbz r10,165(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 165);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82e9c1e8
	if (cr6.eq) goto loc_82E9C1E8;
	// lwz r6,84(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// b 0x82e9c1f4
	goto loc_82E9C1F4;
loc_82E9C1E8:
	// lwz r10,84(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r10,-1
	ctx.r5.s64 = ctx.r10.s64 + -1;
loc_82E9C1F4:
	// lwz r10,160(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	// stb r11,220(r31)
	PPC_STORE_U8(ctx.r31.u32 + 220, ctx.r11.u8);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82e9c20c
	if (!cr6.eq) goto loc_82E9C20C;
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,220(r31)
	PPC_STORE_U8(ctx.r31.u32 + 220, ctx.r10.u8);
loc_82E9C20C:
	// std r11,168(r31)
	PPC_STORE_U64(ctx.r31.u32 + 168, ctx.r11.u64);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// std r11,176(r31)
	PPC_STORE_U64(ctx.r31.u32 + 176, ctx.r11.u64);
	// addi r9,r31,168
	ctx.r9.s64 = ctx.r31.s64 + 168;
	// std r11,184(r31)
	PPC_STORE_U64(ctx.r31.u32 + 184, ctx.r11.u64);
	// stw r11,192(r31)
	PPC_STORE_U32(ctx.r31.u32 + 192, ctx.r11.u32);
	// lwz r10,160(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82e9c238
	if (!cr6.eq) goto loc_82E9C238;
	// li r11,4414
	ctx.r11.s64 = 4414;
	// b 0x82e9c244
	goto loc_82E9C244;
loc_82E9C238:
	// cmpwi cr6,r10,1
	cr6.compare<int32_t>(ctx.r10.s32, 1, xer);
	// bne cr6,0x82e9c244
	if (!cr6.eq) goto loc_82E9C244;
	// li r11,4142
	ctx.r11.s64 = 4142;
loc_82E9C244:
	// lbz r10,164(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 164);
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// bne cr6,0x82e9c254
	if (!cr6.eq) goto loc_82E9C254;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
loc_82E9C254:
	// lbz r10,166(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 166);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82e9c264
	if (!cr6.eq) goto loc_82E9C264;
	// ori r11,r11,512
	ctx.r11.u64 = ctx.r11.u64 | 512;
loc_82E9C264:
	// lbz r10,167(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 167);
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// bne cr6,0x82e9c274
	if (!cr6.eq) goto loc_82E9C274;
	// ori r11,r11,256
	ctx.r11.u64 = ctx.r11.u64 | 256;
loc_82E9C274:
	// lis r10,-31774
	ctx.r10.s64 = -2082340864;
	// addi r8,r31,96
	ctx.r8.s64 = ctx.r31.s64 + 96;
	// addi r10,r10,-21036
	ctx.r10.s64 = ctx.r10.s64 + -21036;
	// addi r7,r31,88
	ctx.r7.s64 = ctx.r31.s64 + 88;
	// ori r3,r11,1024
	ctx.r3.u64 = ctx.r11.u64 | 1024;
	// bl 0x832e0380
	ctx.lr = 0x82E9C28C;
	sub_832E0380(ctx, base);
	// cmplwi cr6,r3,997
	cr6.compare<uint32_t>(ctx.r3.u32, 997, xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// beq cr6,0x82e9c29c
	if (cr6.eq) goto loc_82E9C29C;
loc_82E9C298:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_82E9C29C:
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

__attribute__((alias("__imp__sub_82E9C2B0"))) PPC_WEAK_FUNC(sub_82E9C2B0);
PPC_FUNC_IMPL(__imp__sub_82E9C2B0) {
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
	// lwz r10,268(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 268);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82e9c334
	if (cr6.eq) goto loc_82E9C334;
	// lwz r10,272(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 272);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82e9c334
	if (cr6.eq) goto loc_82E9C334;
	// lis r9,-31774
	ctx.r9.s64 = -2082340864;
	// lwz r10,-21036(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + -21036);
	// cmpwi cr6,r10,-1
	cr6.compare<int32_t>(ctx.r10.s32, -1, xer);
	// bne cr6,0x82e9c2fc
	if (!cr6.eq) goto loc_82E9C2FC;
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
loc_82E9C2FC:
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r11,168
	ctx.r7.s64 = ctx.r11.s64 + 168;
	// std r10,168(r11)
	PPC_STORE_U64(ctx.r11.u32 + 168, ctx.r10.u64);
	// std r10,176(r11)
	PPC_STORE_U64(ctx.r11.u32 + 176, ctx.r10.u64);
	// std r10,184(r11)
	PPC_STORE_U64(ctx.r11.u32 + 184, ctx.r10.u64);
	// stw r10,192(r11)
	PPC_STORE_U32(ctx.r11.u32 + 192, ctx.r10.u32);
	// lwz r6,276(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 276);
	// lwz r5,268(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 268);
	// lwz r4,272(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 272);
	// lwz r3,-21036(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + -21036);
	// bl 0x832e06f8
	ctx.lr = 0x82E9C328;
	sub_832E06F8(ctx, base);
	// cmplwi cr6,r3,997
	cr6.compare<uint32_t>(ctx.r3.u32, 997, xer);
	// li r3,-1
	ctx.r3.s64 = -1;
	// bne cr6,0x82e9c338
	if (!cr6.eq) goto loc_82E9C338;
loc_82E9C334:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82E9C338:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E9C348"))) PPC_WEAK_FUNC(sub_82E9C348);
PPC_FUNC_IMPL(__imp__sub_82E9C348) {
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
	// lwz r10,280(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 280);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82e9c3c8
	if (cr6.eq) goto loc_82E9C3C8;
	// lwz r10,284(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 284);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82e9c3c8
	if (cr6.eq) goto loc_82E9C3C8;
	// lis r9,-31774
	ctx.r9.s64 = -2082340864;
	// lwz r10,-21036(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + -21036);
	// cmpwi cr6,r10,-1
	cr6.compare<int32_t>(ctx.r10.s32, -1, xer);
	// bne cr6,0x82e9c394
	if (!cr6.eq) goto loc_82E9C394;
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
loc_82E9C394:
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r6,r11,168
	ctx.r6.s64 = ctx.r11.s64 + 168;
	// std r10,168(r11)
	PPC_STORE_U64(ctx.r11.u32 + 168, ctx.r10.u64);
	// std r10,176(r11)
	PPC_STORE_U64(ctx.r11.u32 + 176, ctx.r10.u64);
	// std r10,184(r11)
	PPC_STORE_U64(ctx.r11.u32 + 184, ctx.r10.u64);
	// stw r10,192(r11)
	PPC_STORE_U32(ctx.r11.u32 + 192, ctx.r10.u32);
	// lwz r5,280(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 280);
	// lwz r4,284(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 284);
	// lwz r3,-21036(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + -21036);
	// bl 0x832e0858
	ctx.lr = 0x82E9C3BC;
	sub_832E0858(ctx, base);
	// cmplwi cr6,r3,997
	cr6.compare<uint32_t>(ctx.r3.u32, 997, xer);
	// li r3,-1
	ctx.r3.s64 = -1;
	// bne cr6,0x82e9c3cc
	if (!cr6.eq) goto loc_82E9C3CC;
loc_82E9C3C8:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82E9C3CC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E9C3DC"))) PPC_WEAK_FUNC(sub_82E9C3DC);
PPC_FUNC_IMPL(__imp__sub_82E9C3DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E9C3E0"))) PPC_WEAK_FUNC(sub_82E9C3E0);
PPC_FUNC_IMPL(__imp__sub_82E9C3E0) {
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
	// lwz r10,288(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 288);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82e9c464
	if (cr6.eq) goto loc_82E9C464;
	// lwz r10,292(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 292);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82e9c464
	if (cr6.eq) goto loc_82E9C464;
	// lis r9,-31774
	ctx.r9.s64 = -2082340864;
	// lwz r10,-21036(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + -21036);
	// cmpwi cr6,r10,-1
	cr6.compare<int32_t>(ctx.r10.s32, -1, xer);
	// bne cr6,0x82e9c42c
	if (!cr6.eq) goto loc_82E9C42C;
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
loc_82E9C42C:
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r11,168
	ctx.r7.s64 = ctx.r11.s64 + 168;
	// std r10,168(r11)
	PPC_STORE_U64(ctx.r11.u32 + 168, ctx.r10.u64);
	// std r10,176(r11)
	PPC_STORE_U64(ctx.r11.u32 + 176, ctx.r10.u64);
	// std r10,184(r11)
	PPC_STORE_U64(ctx.r11.u32 + 184, ctx.r10.u64);
	// stw r10,192(r11)
	PPC_STORE_U32(ctx.r11.u32 + 192, ctx.r10.u32);
	// lwz r6,296(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 296);
	// lwz r5,288(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 288);
	// lwz r4,292(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 292);
	// lwz r3,-21036(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + -21036);
	// bl 0x832e07a8
	ctx.lr = 0x82E9C458;
	sub_832E07A8(ctx, base);
	// cmplwi cr6,r3,997
	cr6.compare<uint32_t>(ctx.r3.u32, 997, xer);
	// li r3,-1
	ctx.r3.s64 = -1;
	// bne cr6,0x82e9c468
	if (!cr6.eq) goto loc_82E9C468;
loc_82E9C464:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82E9C468:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E9C478"))) PPC_WEAK_FUNC(sub_82E9C478);
PPC_FUNC_IMPL(__imp__sub_82E9C478) {
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
	// lwz r10,300(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 300);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82e9c4f8
	if (cr6.eq) goto loc_82E9C4F8;
	// lwz r10,304(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 304);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82e9c4f8
	if (cr6.eq) goto loc_82E9C4F8;
	// lis r9,-31774
	ctx.r9.s64 = -2082340864;
	// lwz r10,-21036(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + -21036);
	// cmpwi cr6,r10,-1
	cr6.compare<int32_t>(ctx.r10.s32, -1, xer);
	// bne cr6,0x82e9c4c4
	if (!cr6.eq) goto loc_82E9C4C4;
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
loc_82E9C4C4:
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r6,r11,168
	ctx.r6.s64 = ctx.r11.s64 + 168;
	// std r10,168(r11)
	PPC_STORE_U64(ctx.r11.u32 + 168, ctx.r10.u64);
	// std r10,176(r11)
	PPC_STORE_U64(ctx.r11.u32 + 176, ctx.r10.u64);
	// std r10,184(r11)
	PPC_STORE_U64(ctx.r11.u32 + 184, ctx.r10.u64);
	// stw r10,192(r11)
	PPC_STORE_U32(ctx.r11.u32 + 192, ctx.r10.u32);
	// lwz r5,300(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 300);
	// lwz r4,304(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 304);
	// lwz r3,-21036(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + -21036);
	// bl 0x832e0900
	ctx.lr = 0x82E9C4EC;
	sub_832E0900(ctx, base);
	// cmplwi cr6,r3,997
	cr6.compare<uint32_t>(ctx.r3.u32, 997, xer);
	// li r3,-1
	ctx.r3.s64 = -1;
	// bne cr6,0x82e9c4fc
	if (!cr6.eq) goto loc_82E9C4FC;
loc_82E9C4F8:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82E9C4FC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E9C50C"))) PPC_WEAK_FUNC(sub_82E9C50C);
PPC_FUNC_IMPL(__imp__sub_82E9C50C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E9C510"))) PPC_WEAK_FUNC(sub_82E9C510);
PPC_FUNC_IMPL(__imp__sub_82E9C510) {
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
	// lbz r10,165(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 165);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82e9c538
	if (cr6.eq) goto loc_82E9C538;
	// lwz r6,84(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 84);
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// b 0x82e9c544
	goto loc_82E9C544;
loc_82E9C538:
	// lwz r10,84(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 84);
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r10,-1
	ctx.r5.s64 = ctx.r10.s64 + -1;
loc_82E9C544:
	// lis r9,-31774
	ctx.r9.s64 = -2082340864;
	// lwz r10,-21036(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + -21036);
	// cmpwi cr6,r10,-1
	cr6.compare<int32_t>(ctx.r10.s32, -1, xer);
	// beq cr6,0x82e9c5d4
	if (cr6.eq) goto loc_82E9C5D4;
	// std r11,168(r3)
	PPC_STORE_U64(ctx.r3.u32 + 168, ctx.r11.u64);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// std r11,176(r3)
	PPC_STORE_U64(ctx.r3.u32 + 176, ctx.r11.u64);
	// addi r7,r3,168
	ctx.r7.s64 = ctx.r3.s64 + 168;
	// std r11,184(r3)
	PPC_STORE_U64(ctx.r3.u32 + 184, ctx.r11.u64);
	// stw r11,192(r3)
	PPC_STORE_U32(ctx.r3.u32 + 192, ctx.r11.u32);
	// lwz r10,160(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 160);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82e9c580
	if (!cr6.eq) goto loc_82E9C580;
	// li r11,4414
	ctx.r11.s64 = 4414;
	// b 0x82e9c58c
	goto loc_82E9C58C;
loc_82E9C580:
	// cmpwi cr6,r10,1
	cr6.compare<int32_t>(ctx.r10.s32, 1, xer);
	// bne cr6,0x82e9c58c
	if (!cr6.eq) goto loc_82E9C58C;
	// li r11,4142
	ctx.r11.s64 = 4142;
loc_82E9C58C:
	// lbz r10,164(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 164);
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// bne cr6,0x82e9c59c
	if (!cr6.eq) goto loc_82E9C59C;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
loc_82E9C59C:
	// lbz r10,166(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 166);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82e9c5ac
	if (!cr6.eq) goto loc_82E9C5AC;
	// ori r11,r11,512
	ctx.r11.u64 = ctx.r11.u64 | 512;
loc_82E9C5AC:
	// lbz r10,167(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 167);
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// bne cr6,0x82e9c5bc
	if (!cr6.eq) goto loc_82E9C5BC;
	// ori r11,r11,256
	ctx.r11.u64 = ctx.r11.u64 | 256;
loc_82E9C5BC:
	// ori r4,r11,1024
	ctx.r4.u64 = ctx.r11.u64 | 1024;
	// lwz r3,-21036(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + -21036);
	// bl 0x832e0560
	ctx.lr = 0x82E9C5C8;
	sub_832E0560(ctx, base);
	// cmplwi cr6,r3,997
	cr6.compare<uint32_t>(ctx.r3.u32, 997, xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// beq cr6,0x82e9c5d8
	if (cr6.eq) goto loc_82E9C5D8;
loc_82E9C5D4:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_82E9C5D8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E9C5E8"))) PPC_WEAK_FUNC(sub_82E9C5E8);
PPC_FUNC_IMPL(__imp__sub_82E9C5E8) {
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
	// bl 0x8308e078
	ctx.lr = 0x82E9C600;
	sub_8308E078(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,4
	cr6.compare<uint32_t>(ctx.r3.u32, 4, xer);
	// bge cr6,0x82e9c65c
	if (!cr6.lt) goto loc_82E9C65C;
	// lbz r11,212(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 212);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82e9c61c
	if (!cr6.eq) goto loc_82E9C61C;
	// li r4,254
	ctx.r4.s64 = 254;
loc_82E9C61C:
	// lis r10,-31774
	ctx.r10.s64 = -2082340864;
	// lwz r11,-21036(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -21036);
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(ctx.r11.s32, -1, xer);
	// beq cr6,0x82e9c65c
	if (cr6.eq) goto loc_82E9C65C;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r6,r31,168
	ctx.r6.s64 = ctx.r31.s64 + 168;
	// std r11,168(r31)
	PPC_STORE_U64(ctx.r31.u32 + 168, ctx.r11.u64);
	// addi r5,r31,96
	ctx.r5.s64 = ctx.r31.s64 + 96;
	// std r11,176(r31)
	PPC_STORE_U64(ctx.r31.u32 + 176, ctx.r11.u64);
	// std r11,184(r31)
	PPC_STORE_U64(ctx.r31.u32 + 184, ctx.r11.u64);
	// stw r11,192(r31)
	PPC_STORE_U32(ctx.r31.u32 + 192, ctx.r11.u32);
	// lwz r3,-21036(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + -21036);
	// bl 0x832e0c98
	ctx.lr = 0x82E9C650;
	sub_832E0C98(ctx, base);
	// cmplwi cr6,r3,997
	cr6.compare<uint32_t>(ctx.r3.u32, 997, xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// beq cr6,0x82e9c660
	if (cr6.eq) goto loc_82E9C660;
loc_82E9C65C:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_82E9C660:
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

__attribute__((alias("__imp__sub_82E9C674"))) PPC_WEAK_FUNC(sub_82E9C674);
PPC_FUNC_IMPL(__imp__sub_82E9C674) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E9C678"))) PPC_WEAK_FUNC(sub_82E9C678);
PPC_FUNC_IMPL(__imp__sub_82E9C678) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// lwz r11,260(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 260);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82e9c68c
	if (!cr6.eq) goto loc_82E9C68C;
loc_82E9C684:
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_82E9C68C:
	// lwz r11,264(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 264);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82e9c684
	if (cr6.eq) goto loc_82E9C684;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// subfic r10,r11,0
	xer.ca = ctx.r11.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r11.s64;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// rlwinm r11,r9,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x2;
	// addi r3,r11,-1
	ctx.r3.s64 = ctx.r11.s64 + -1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E9C6B0"))) PPC_WEAK_FUNC(sub_82E9C6B0);
PPC_FUNC_IMPL(__imp__sub_82E9C6B0) {
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
	// lis r10,-31774
	ctx.r10.s64 = -2082340864;
	// lwz r11,-21036(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -21036);
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(ctx.r11.s32, -1, xer);
	// beq cr6,0x82e9c6fc
	if (cr6.eq) goto loc_82E9C6FC;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r3,168
	ctx.r5.s64 = ctx.r3.s64 + 168;
	// std r11,168(r3)
	PPC_STORE_U64(ctx.r3.u32 + 168, ctx.r11.u64);
	// li r4,0
	ctx.r4.s64 = 0;
	// std r11,176(r3)
	PPC_STORE_U64(ctx.r3.u32 + 176, ctx.r11.u64);
	// std r11,184(r3)
	PPC_STORE_U64(ctx.r3.u32 + 184, ctx.r11.u64);
	// stw r11,192(r3)
	PPC_STORE_U32(ctx.r3.u32 + 192, ctx.r11.u32);
	// lwz r3,-21036(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + -21036);
	// bl 0x832e0a88
	ctx.lr = 0x82E9C6F0;
	sub_832E0A88(ctx, base);
	// cmplwi cr6,r3,997
	cr6.compare<uint32_t>(ctx.r3.u32, 997, xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// beq cr6,0x82e9c700
	if (cr6.eq) goto loc_82E9C700;
loc_82E9C6FC:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_82E9C700:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E9C710"))) PPC_WEAK_FUNC(sub_82E9C710);
PPC_FUNC_IMPL(__imp__sub_82E9C710) {
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
	// lis r10,-31774
	ctx.r10.s64 = -2082340864;
	// lwz r11,-21036(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -21036);
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(ctx.r11.s32, -1, xer);
	// beq cr6,0x82e9c758
	if (cr6.eq) goto loc_82E9C758;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r3,168
	ctx.r4.s64 = ctx.r3.s64 + 168;
	// std r11,168(r3)
	PPC_STORE_U64(ctx.r3.u32 + 168, ctx.r11.u64);
	// std r11,176(r3)
	PPC_STORE_U64(ctx.r3.u32 + 176, ctx.r11.u64);
	// std r11,184(r3)
	PPC_STORE_U64(ctx.r3.u32 + 184, ctx.r11.u64);
	// stw r11,192(r3)
	PPC_STORE_U32(ctx.r3.u32 + 192, ctx.r11.u32);
	// lwz r3,-21036(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + -21036);
	// bl 0x832e0b28
	ctx.lr = 0x82E9C74C;
	sub_832E0B28(ctx, base);
	// cmplwi cr6,r3,997
	cr6.compare<uint32_t>(ctx.r3.u32, 997, xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// beq cr6,0x82e9c75c
	if (cr6.eq) goto loc_82E9C75C;
loc_82E9C758:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_82E9C75C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E9C76C"))) PPC_WEAK_FUNC(sub_82E9C76C);
PPC_FUNC_IMPL(__imp__sub_82E9C76C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E9C770"))) PPC_WEAK_FUNC(sub_82E9C770);
PPC_FUNC_IMPL(__imp__sub_82E9C770) {
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
	// lbz r11,220(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 220);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82e9c7e4
	if (cr6.eq) goto loc_82E9C7E4;
	// li r11,29
	ctx.r11.s64 = 29;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,184
	ctx.r4.s64 = 184;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82E9C7A8;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82e9c7cc
	if (cr6.eq) goto loc_82E9C7CC;
	// lis r11,-31774
	ctx.r11.s64 = -2082340864;
	// li r6,2
	ctx.r6.s64 = 2;
	// addi r5,r31,224
	ctx.r5.s64 = ctx.r31.s64 + 224;
	// lwz r4,-21036(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -21036);
	// bl 0x82ee5f20
	ctx.lr = 0x82E9C7C4;
	sub_82EE5F20(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82e9c7d0
	goto loc_82E9C7D0;
loc_82E9C7CC:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82E9C7D0:
	// stw r4,216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 216, ctx.r4.u32);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82e9c7fc
	if (cr6.eq) goto loc_82E9C7FC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83103100
	ctx.lr = 0x82E9C7E4;
	sub_83103100(ctx, base);
loc_82E9C7E4:
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
loc_82E9C7FC:
	// li r3,-1
	ctx.r3.s64 = -1;
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

__attribute__((alias("__imp__sub_82E9C814"))) PPC_WEAK_FUNC(sub_82E9C814);
PPC_FUNC_IMPL(__imp__sub_82E9C814) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E9C818"))) PPC_WEAK_FUNC(sub_82E9C818);
PPC_FUNC_IMPL(__imp__sub_82E9C818) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r11,220(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 220);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82e9c82c
	if (!cr6.eq) goto loc_82E9C82C;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_82E9C82C:
	// lwz r11,216(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 216);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E9C83C"))) PPC_WEAK_FUNC(sub_82E9C83C);
PPC_FUNC_IMPL(__imp__sub_82E9C83C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E9C840"))) PPC_WEAK_FUNC(sub_82E9C840);
PPC_FUNC_IMPL(__imp__sub_82E9C840) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x82E9C848;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// mr r24,r7
	ctx.r24.u64 = ctx.r7.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82e9c948
	if (cr6.eq) goto loc_82E9C948;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x82e9c948
	if (cr6.eq) goto loc_82E9C948;
	// lwz r11,80(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// cmplw cr6,r11,r5
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, xer);
	// bge cr6,0x82e9c948
	if (!cr6.lt) goto loc_82E9C948;
	// li r26,0
	ctx.r26.s64 = 0;
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
	// mr r28,r26
	ctx.r28.u64 = ctx.r26.u64;
	// bl 0x82e9bf50
	ctx.lr = 0x82E9C88C;
	sub_82E9BF50(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82e9c8b8
	if (cr6.eq) goto loc_82E9C8B8;
	// lwz r11,168(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 168);
	// addi r3,r31,168
	ctx.r3.s64 = ctx.r31.s64 + 168;
	// li r29,1
	ctx.r29.s64 = 1;
	// li r28,1
	ctx.r28.s64 = 1;
	// cmplwi cr6,r11,997
	cr6.compare<uint32_t>(ctx.r11.u32, 997, xer);
	// bne cr6,0x82e9c900
	if (!cr6.eq) goto loc_82E9C900;
	// bl 0x832d3160
	ctx.lr = 0x82E9C8B4;
	sub_832D3160(ctx, base);
	// b 0x82e9c900
	goto loc_82E9C900;
loc_82E9C8B8:
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r10,r30
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r30.u32);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82E9C8D0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// bne cr6,0x82e9c8e0
	if (!cr6.eq) goto loc_82E9C8E0;
	// li r28,1
	ctx.r28.s64 = 1;
	// b 0x82e9c8fc
	goto loc_82E9C8FC;
loc_82E9C8E0:
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x82e9c900
	if (!cr6.eq) goto loc_82E9C900;
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// cmplw cr6,r11,r27
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r27.u32, xer);
	// blt cr6,0x82e9c900
	if (cr6.lt) goto loc_82E9C900;
loc_82E9C8FC:
	// li r29,1
	ctx.r29.s64 = 1;
loc_82E9C900:
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82e9c960
	if (cr6.eq) goto loc_82E9C960;
	// clrlwi r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	// stw r26,208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 208, ctx.r26.u32);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x82e9c930
	if (!cr6.eq) goto loc_82E9C930;
	// clrlwi r11,r24,24
	ctx.r11.u64 = ctx.r24.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82e9c930
	if (!cr6.eq) goto loc_82E9C930;
	// stw r26,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r26.u32);
	// b 0x82e9c950
	goto loc_82E9C950;
loc_82E9C930:
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// stw r26,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r26.u32);
	// stw r25,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r25.u32);
	// stw r11,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_82E9C948:
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r9.u32);
loc_82E9C950:
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// li r10,12
	ctx.r10.s64 = 12;
	// stw r10,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r10.u32);
	// stw r11,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
loc_82E9C960:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E9C968"))) PPC_WEAK_FUNC(sub_82E9C968);
PPC_FUNC_IMPL(__imp__sub_82E9C968) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82e9c9b8
	if (cr6.eq) goto loc_82E9C9B8;
	// lis r9,263
	ctx.r9.s64 = 17235968;
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// ori r8,r9,1
	ctx.r8.u64 = ctx.r9.u64 | 1;
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, xer);
	// blt cr6,0x82e9c9b8
	if (cr6.lt) goto loc_82E9C9B8;
	// lis r9,263
	ctx.r9.s64 = 17235968;
	// ori r8,r9,2
	ctx.r8.u64 = ctx.r9.u64 | 2;
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, xer);
	// bgt cr6,0x82e9c9b8
	if (cr6.gt) goto loc_82E9C9B8;
	// lwz r9,216(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 216);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,216(r10)
	PPC_STORE_U32(ctx.r10.u32 + 216, ctx.r11.u32);
	// blr 
	return;
loc_82E9C9B8:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E9C9C0"))) PPC_WEAK_FUNC(sub_82E9C9C0);
PPC_FUNC_IMPL(__imp__sub_82E9C9C0) {
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
	// lis r11,-31774
	ctx.r11.s64 = -2082340864;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r4,-21032(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -21032);
	// bl 0x83103328
	ctx.lr = 0x82E9C9E0;
	sub_83103328(ctx, base);
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r8,r10,-31216
	ctx.r8.s64 = ctx.r10.s64 + -31216;
	// addi r7,r9,21716
	ctx.r7.s64 = ctx.r9.s64 + 21716;
	// stw r11,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
	// li r9,7
	ctx.r9.s64 = 7;
	// stw r11,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
	// li r6,30000
	ctx.r6.s64 = 30000;
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r10,r31,88
	ctx.r10.s64 = ctx.r31.s64 + 88;
	// std r11,88(r31)
	PPC_STORE_U64(ctx.r31.u32 + 88, ctx.r11.u64);
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// stw r11,160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 160, ctx.r11.u32);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// stb r11,164(r31)
	PPC_STORE_U8(ctx.r31.u32 + 164, ctx.r11.u8);
	// stb r11,165(r31)
	PPC_STORE_U8(ctx.r31.u32 + 165, ctx.r11.u8);
	// stb r11,166(r31)
	PPC_STORE_U8(ctx.r31.u32 + 166, ctx.r11.u8);
	// stb r11,167(r31)
	PPC_STORE_U8(ctx.r31.u32 + 167, ctx.r11.u8);
	// stw r7,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r7.u32);
	// std r6,200(r31)
	PPC_STORE_U64(ctx.r31.u32 + 200, ctx.r6.u64);
	// stw r11,208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 208, ctx.r11.u32);
	// stb r11,212(r31)
	PPC_STORE_U8(ctx.r31.u32 + 212, ctx.r11.u8);
	// stw r11,216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 216, ctx.r11.u32);
	// stb r11,220(r31)
	PPC_STORE_U8(ctx.r31.u32 + 220, ctx.r11.u8);
	// stb r11,256(r31)
	PPC_STORE_U8(ctx.r31.u32 + 256, ctx.r11.u8);
	// stw r11,260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 260, ctx.r11.u32);
	// stw r11,264(r31)
	PPC_STORE_U32(ctx.r31.u32 + 264, ctx.r11.u32);
	// stw r11,268(r31)
	PPC_STORE_U32(ctx.r31.u32 + 268, ctx.r11.u32);
	// stw r11,272(r31)
	PPC_STORE_U32(ctx.r31.u32 + 272, ctx.r11.u32);
	// stw r11,276(r31)
	PPC_STORE_U32(ctx.r31.u32 + 276, ctx.r11.u32);
	// stw r11,280(r31)
	PPC_STORE_U32(ctx.r31.u32 + 280, ctx.r11.u32);
	// stw r11,284(r31)
	PPC_STORE_U32(ctx.r31.u32 + 284, ctx.r11.u32);
	// stw r11,288(r31)
	PPC_STORE_U32(ctx.r31.u32 + 288, ctx.r11.u32);
	// stw r11,292(r31)
	PPC_STORE_U32(ctx.r31.u32 + 292, ctx.r11.u32);
	// stw r11,296(r31)
	PPC_STORE_U32(ctx.r31.u32 + 296, ctx.r11.u32);
	// stw r11,300(r31)
	PPC_STORE_U32(ctx.r31.u32 + 300, ctx.r11.u32);
	// stw r11,304(r31)
	PPC_STORE_U32(ctx.r31.u32 + 304, ctx.r11.u32);
loc_82E9CA7C:
	// stdu r11,8(r10)
	ea = 8 + ctx.r10.u32;
	PPC_STORE_U64(ea, ctx.r11.u64);
	ctx.r10.u32 = ea;
	// bdnz 0x82e9ca7c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82E9CA7C;
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// std r11,168(r31)
	PPC_STORE_U64(ctx.r31.u32 + 168, ctx.r11.u64);
	// std r11,176(r31)
	PPC_STORE_U64(ctx.r31.u32 + 176, ctx.r11.u64);
	// std r11,184(r31)
	PPC_STORE_U64(ctx.r31.u32 + 184, ctx.r11.u64);
	// stw r11,192(r31)
	PPC_STORE_U32(ctx.r31.u32 + 192, ctx.r11.u32);
	// std r11,224(r31)
	PPC_STORE_U64(ctx.r31.u32 + 224, ctx.r11.u64);
	// std r11,232(r31)
	PPC_STORE_U64(ctx.r31.u32 + 232, ctx.r11.u64);
	// std r11,240(r31)
	PPC_STORE_U64(ctx.r31.u32 + 240, ctx.r11.u64);
	// std r11,248(r31)
	PPC_STORE_U64(ctx.r31.u32 + 248, ctx.r11.u64);
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

__attribute__((alias("__imp__sub_82E9CAC0"))) PPC_WEAK_FUNC(sub_82E9CAC0);
PPC_FUNC_IMPL(__imp__sub_82E9CAC0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x82E9CAC8;
	__savegprlr_25(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// bl 0x82e9ba80
	ctx.lr = 0x82E9CAE0;
	sub_82E9BA80(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82e9cc20
	if (cr6.eq) goto loc_82E9CC20;
	// bl 0x8308e078
	ctx.lr = 0x82E9CAF0;
	sub_8308E078(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,4
	cr6.compare<uint32_t>(ctx.r3.u32, 4, xer);
	// bge cr6,0x82e9cc20
	if (!cr6.lt) goto loc_82E9CC20;
	// lwz r4,268(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 268);
	// li r29,29
	ctx.r29.s64 = 29;
	// li r27,0
	ctx.r27.s64 = 0;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82e9cb20
	if (cr6.eq) goto loc_82E9CB20;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x82E9CB1C;
	sub_825952B8(ctx, base);
	// stw r27,268(r31)
	PPC_STORE_U32(ctx.r31.u32 + 268, ctx.r27.u32);
loc_82E9CB20:
	// lwz r4,276(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 276);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82e9cb3c
	if (cr6.eq) goto loc_82E9CB3C;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x825952b8
	ctx.lr = 0x82E9CB38;
	sub_825952B8(ctx, base);
	// stw r27,276(r31)
	PPC_STORE_U32(ctx.r31.u32 + 276, ctx.r27.u32);
loc_82E9CB3C:
	// li r30,1
	ctx.r30.s64 = 1;
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r29.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r30,272(r31)
	PPC_STORE_U32(ctx.r31.u32 + 272, ctx.r30.u32);
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82595718
	ctx.lr = 0x82E9CB58;
	sub_82595718(ctx, base);
	// stw r3,268(r31)
	PPC_STORE_U32(ctx.r31.u32 + 268, ctx.r3.u32);
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r29.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x82595718
	ctx.lr = 0x82E9CB70;
	sub_82595718(ctx, base);
	// lwz r4,268(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 268);
	// stw r3,276(r31)
	PPC_STORE_U32(ctx.r31.u32 + 276, ctx.r3.u32);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82e9cc04
	if (cr6.eq) goto loc_82E9CC04;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82e9cbec
	if (cr6.eq) goto loc_82E9CBEC;
	// stw r26,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r26.u32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lwz r10,276(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 276);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r30,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r30.u32);
	// addi r9,r11,21716
	ctx.r9.s64 = ctx.r11.s64 + 21716;
	// stw r25,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r25.u32);
	// lwz r8,4(r28)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// stw r8,160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 160, ctx.r8.u32);
	// lbz r7,8(r28)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r28.u32 + 8);
	// stb r7,164(r31)
	PPC_STORE_U8(ctx.r31.u32 + 164, ctx.r7.u8);
	// lbz r6,9(r28)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r28.u32 + 9);
	// stb r6,165(r31)
	PPC_STORE_U8(ctx.r31.u32 + 165, ctx.r6.u8);
	// lbz r5,10(r28)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r28.u32 + 10);
	// stb r5,166(r31)
	PPC_STORE_U8(ctx.r31.u32 + 166, ctx.r5.u8);
	// lbz r4,11(r28)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r28.u32 + 11);
	// stb r4,167(r31)
	PPC_STORE_U8(ctx.r31.u32 + 167, ctx.r4.u8);
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// stw r11,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
	// stw r30,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r30.u32);
	// stw r27,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r27.u32);
	// stb r30,212(r31)
	PPC_STORE_U8(ctx.r31.u32 + 212, ctx.r30.u8);
	// stw r9,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r9.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_82E9CBEC:
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82e9cc04
	if (cr6.eq) goto loc_82E9CC04;
	// stw r29,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r29.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x825952b8
	ctx.lr = 0x82E9CC00;
	sub_825952B8(ctx, base);
	// stw r27,268(r31)
	PPC_STORE_U32(ctx.r31.u32 + 268, ctx.r27.u32);
loc_82E9CC04:
	// lwz r4,276(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 276);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82e9cc20
	if (cr6.eq) goto loc_82E9CC20;
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// bl 0x825952b8
	ctx.lr = 0x82E9CC1C;
	sub_825952B8(ctx, base);
	// stw r27,276(r31)
	PPC_STORE_U32(ctx.r31.u32 + 276, ctx.r27.u32);
loc_82E9CC20:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r10,r11,21716
	ctx.r10.s64 = ctx.r11.s64 + 21716;
	// stw r10,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r10.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E9CC38"))) PPC_WEAK_FUNC(sub_82E9CC38);
PPC_FUNC_IMPL(__imp__sub_82E9CC38) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x82E9CC40;
	__savegprlr_25(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// std r6,240(r1)
	PPC_STORE_U64(ctx.r1.u32 + 240, ctx.r6.u64);
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// std r7,248(r1)
	PPC_STORE_U64(ctx.r1.u32 + 248, ctx.r7.u64);
	// li r4,1
	ctx.r4.s64 = 1;
	// std r8,256(r1)
	PPC_STORE_U64(ctx.r1.u32 + 256, ctx.r8.u64);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// std r9,264(r1)
	PPC_STORE_U64(ctx.r1.u32 + 264, ctx.r9.u64);
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// std r10,272(r1)
	PPC_STORE_U64(ctx.r1.u32 + 272, ctx.r10.u64);
	// bl 0x82e9ba80
	ctx.lr = 0x82E9CC6C;
	sub_82E9BA80(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82e9cefc
	if (cr6.eq) goto loc_82E9CEFC;
	// bl 0x8308e078
	ctx.lr = 0x82E9CC7C;
	sub_8308E078(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,4
	cr6.compare<uint32_t>(ctx.r3.u32, 4, xer);
	// bge cr6,0x82e9cefc
	if (!cr6.lt) goto loc_82E9CEFC;
	// lwz r4,268(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 268);
	// li r30,29
	ctx.r30.s64 = 29;
	// li r27,0
	ctx.r27.s64 = 0;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82e9ccac
	if (cr6.eq) goto loc_82E9CCAC;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x82E9CCA8;
	sub_825952B8(ctx, base);
	// stw r27,268(r31)
	PPC_STORE_U32(ctx.r31.u32 + 268, ctx.r27.u32);
loc_82E9CCAC:
	// lwz r4,276(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 276);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82e9ccc8
	if (cr6.eq) goto loc_82E9CCC8;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x825952b8
	ctx.lr = 0x82E9CCC4;
	sub_825952B8(ctx, base);
	// stw r27,276(r31)
	PPC_STORE_U32(ctx.r31.u32 + 276, ctx.r27.u32);
loc_82E9CCC8:
	// li r29,1
	ctx.r29.s64 = 1;
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r29,272(r31)
	PPC_STORE_U32(ctx.r31.u32 + 272, ctx.r29.u32);
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82595718
	ctx.lr = 0x82E9CCE4;
	sub_82595718(ctx, base);
	// stw r3,268(r31)
	PPC_STORE_U32(ctx.r31.u32 + 268, ctx.r3.u32);
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x82595718
	ctx.lr = 0x82E9CCFC;
	sub_82595718(ctx, base);
	// lwz r4,268(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 268);
	// stw r3,276(r31)
	PPC_STORE_U32(ctx.r31.u32 + 276, ctx.r3.u32);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82e9cee0
	if (cr6.eq) goto loc_82E9CEE0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82e9cec8
	if (cr6.eq) goto loc_82E9CEC8;
	// stw r28,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r28.u32);
	// lwz r11,276(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 276);
	// stw r29,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r29.u32);
	// lwz r4,296(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 296);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82e9cd3c
	if (cr6.eq) goto loc_82E9CD3C;
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x825952b8
	ctx.lr = 0x82E9CD38;
	sub_825952B8(ctx, base);
	// stw r27,296(r31)
	PPC_STORE_U32(ctx.r31.u32 + 296, ctx.r27.u32);
loc_82E9CD3C:
	// lwz r4,288(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 288);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82e9cd58
	if (cr6.eq) goto loc_82E9CD58;
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// bl 0x825952b8
	ctx.lr = 0x82E9CD54;
	sub_825952B8(ctx, base);
	// stw r27,288(r31)
	PPC_STORE_U32(ctx.r31.u32 + 288, ctx.r27.u32);
loc_82E9CD58:
	// lwz r29,316(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 316);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x82e9ce24
	if (cr6.eq) goto loc_82E9CE24;
	// lis r11,16383
	ctx.r11.s64 = 1073676288;
	// li r28,-1
	ctx.r28.s64 = -1;
	// ori r10,r11,65535
	ctx.r10.u64 = ctx.r11.u64 | 65535;
	// rlwinm r4,r29,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplw cr6,r29,r10
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r10.u32, xer);
	// ble cr6,0x82e9cd80
	if (!cr6.gt) goto loc_82E9CD80;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_82E9CD80:
	// stw r30,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r30.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82595718
	ctx.lr = 0x82E9CD90;
	sub_82595718(ctx, base);
	// lis r11,8191
	ctx.r11.s64 = 536805376;
	// stw r3,296(r31)
	PPC_STORE_U32(ctx.r31.u32 + 296, ctx.r3.u32);
	// rlwinm r4,r29,3,0,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 3) & 0xFFFFFFF8;
	// ori r10,r11,65535
	ctx.r10.u64 = ctx.r11.u64 | 65535;
	// cmplw cr6,r29,r10
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r10.u32, xer);
	// ble cr6,0x82e9cdac
	if (!cr6.gt) goto loc_82E9CDAC;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_82E9CDAC:
	// stw r30,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r30.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x82595718
	ctx.lr = 0x82E9CDBC;
	sub_82595718(ctx, base);
	// lwz r4,296(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 296);
	// stw r3,288(r31)
	PPC_STORE_U32(ctx.r31.u32 + 288, ctx.r3.u32);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82e9cea8
	if (cr6.eq) goto loc_82E9CEA8;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82e9ce90
	if (cr6.eq) goto loc_82E9CE90;
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// stw r29,292(r31)
	PPC_STORE_U32(ctx.r31.u32 + 292, ctx.r29.u32);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x82e9ce24
	if (cr6.eq) goto loc_82E9CE24;
	// lwz r10,308(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 308);
	// mr r9,r27
	ctx.r9.u64 = ctx.r27.u64;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// addi r10,r10,-8
	ctx.r10.s64 = ctx.r10.s64 + -8;
loc_82E9CDF4:
	// ld r7,8(r10)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// lwz r6,288(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 288);
	// stdx r7,r11,r6
	PPC_STORE_U64(ctx.r11.u32 + ctx.r6.u32, ctx.r7.u64);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// lwz r5,296(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 296);
	// lwzu r7,16(r10)
	ea = 16 + ctx.r10.u32;
	ctx.r7.u64 = PPC_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// stwx r7,r9,r5
	PPC_STORE_U32(ctx.r9.u32 + ctx.r5.u32, ctx.r7.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// lwz r4,292(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 292);
	// cmplw cr6,r8,r4
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r4.u32, xer);
	// blt cr6,0x82e9cdf4
	if (cr6.lt) goto loc_82E9CDF4;
loc_82E9CE24:
	// stw r25,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r25.u32);
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// stw r11,160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 160, ctx.r11.u32);
	// li r5,60
	ctx.r5.s64 = 60;
	// lbz r10,8(r26)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r26.u32 + 8);
	// stb r10,164(r31)
	PPC_STORE_U8(ctx.r31.u32 + 164, ctx.r10.u8);
	// lbz r9,9(r26)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r26.u32 + 9);
	// stb r9,165(r31)
	PPC_STORE_U8(ctx.r31.u32 + 165, ctx.r9.u8);
	// lbz r8,10(r26)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r26.u32 + 10);
	// stb r8,166(r31)
	PPC_STORE_U8(ctx.r31.u32 + 166, ctx.r8.u8);
	// lbz r7,11(r26)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r26.u32 + 11);
	// stb r7,167(r31)
	PPC_STORE_U8(ctx.r31.u32 + 167, ctx.r7.u8);
	// bl 0x831ce980
	ctx.lr = 0x82E9CE60;
	sub_831CE980(ctx, base);
	// lwz r6,72(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// lis r5,-32255
	ctx.r5.s64 = -2113863680;
	// li r4,2
	ctx.r4.s64 = 2;
	// stw r27,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r27.u32);
	// addi r11,r5,21716
	ctx.r11.s64 = ctx.r5.s64 + 21716;
	// stb r27,212(r31)
	PPC_STORE_U8(ctx.r31.u32 + 212, ctx.r27.u8);
	// stw r4,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r4.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r6,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r6.u32);
	// stw r11,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r11.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_82E9CE90:
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82e9cea8
	if (cr6.eq) goto loc_82E9CEA8;
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r30.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x825952b8
	ctx.lr = 0x82E9CEA4;
	sub_825952B8(ctx, base);
	// stw r27,296(r31)
	PPC_STORE_U32(ctx.r31.u32 + 296, ctx.r27.u32);
loc_82E9CEA8:
	// lwz r4,288(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 288);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82e9cefc
	if (cr6.eq) goto loc_82E9CEFC;
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// addi r3,r1,116
	ctx.r3.s64 = ctx.r1.s64 + 116;
	// bl 0x825952b8
	ctx.lr = 0x82E9CEC0;
	sub_825952B8(ctx, base);
	// stw r27,288(r31)
	PPC_STORE_U32(ctx.r31.u32 + 288, ctx.r27.u32);
	// b 0x82e9cefc
	goto loc_82E9CEFC;
loc_82E9CEC8:
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82e9cee0
	if (cr6.eq) goto loc_82E9CEE0;
	// stw r30,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r30.u32);
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x825952b8
	ctx.lr = 0x82E9CEDC;
	sub_825952B8(ctx, base);
	// stw r27,268(r31)
	PPC_STORE_U32(ctx.r31.u32 + 268, ctx.r27.u32);
loc_82E9CEE0:
	// lwz r4,276(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 276);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82e9cefc
	if (cr6.eq) goto loc_82E9CEFC;
	// stw r30,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r30.u32);
	// addi r3,r1,124
	ctx.r3.s64 = ctx.r1.s64 + 124;
	// bl 0x825952b8
	ctx.lr = 0x82E9CEF8;
	sub_825952B8(ctx, base);
	// stw r27,276(r31)
	PPC_STORE_U32(ctx.r31.u32 + 276, ctx.r27.u32);
loc_82E9CEFC:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r10,r11,21716
	ctx.r10.s64 = ctx.r11.s64 + 21716;
	// stw r10,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r10.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E9CF14"))) PPC_WEAK_FUNC(sub_82E9CF14);
PPC_FUNC_IMPL(__imp__sub_82E9CF14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E9CF18"))) PPC_WEAK_FUNC(sub_82E9CF18);
PPC_FUNC_IMPL(__imp__sub_82E9CF18) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad0
	ctx.lr = 0x82E9CF20;
	__savegprlr_22(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r25,0
	ctx.r25.s64 = 0;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// stw r25,272(r3)
	PPC_STORE_U32(ctx.r3.u32 + 272, ctx.r25.u32);
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r22,r6
	ctx.r22.u64 = ctx.r6.u64;
	// mr r24,r7
	ctx.r24.u64 = ctx.r7.u64;
	// bl 0x82e9ba80
	ctx.lr = 0x82E9CF48;
	sub_82E9BA80(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82e9d180
	if (cr6.eq) goto loc_82E9D180;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// beq cr6,0x82e9cf64
	if (cr6.eq) goto loc_82E9CF64;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// bne cr6,0x82e9cf74
	if (!cr6.eq) goto loc_82E9CF74;
loc_82E9CF64:
	// cmplwi cr6,r22,0
	cr6.compare<uint32_t>(ctx.r22.u32, 0, xer);
	// beq cr6,0x82e9d180
	if (cr6.eq) goto loc_82E9D180;
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(ctx.r24.u32, 0, xer);
	// beq cr6,0x82e9d180
	if (cr6.eq) goto loc_82E9D180;
loc_82E9CF74:
	// lwz r4,296(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 296);
	// li r26,29
	ctx.r26.s64 = 29;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82e9cf94
	if (cr6.eq) goto loc_82E9CF94;
	// stw r26,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r26.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x82E9CF90;
	sub_825952B8(ctx, base);
	// stw r25,296(r31)
	PPC_STORE_U32(ctx.r31.u32 + 296, ctx.r25.u32);
loc_82E9CF94:
	// lwz r4,288(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 288);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82e9cfb0
	if (cr6.eq) goto loc_82E9CFB0;
	// stw r26,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r26.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x825952b8
	ctx.lr = 0x82E9CFAC;
	sub_825952B8(ctx, base);
	// stw r25,288(r31)
	PPC_STORE_U32(ctx.r31.u32 + 288, ctx.r25.u32);
loc_82E9CFB0:
	// lwz r4,300(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 300);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82e9cfcc
	if (cr6.eq) goto loc_82E9CFCC;
	// stw r26,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r26.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x825952b8
	ctx.lr = 0x82E9CFC8;
	sub_825952B8(ctx, base);
	// stw r25,300(r31)
	PPC_STORE_U32(ctx.r31.u32 + 300, ctx.r25.u32);
loc_82E9CFCC:
	// lis r11,8191
	ctx.r11.s64 = 536805376;
	// mr r23,r25
	ctx.r23.u64 = ctx.r25.u64;
	// li r27,-1
	ctx.r27.s64 = -1;
	// ori r29,r11,65535
	ctx.r29.u64 = ctx.r11.u64 | 65535;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// beq cr6,0x82e9d0a4
	if (cr6.eq) goto loc_82E9D0A4;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x82e9d0a4
	if (cr6.eq) goto loc_82E9D0A4;
	// lis r11,16383
	ctx.r11.s64 = 1073676288;
	// rlwinm r4,r30,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// ori r10,r11,65535
	ctx.r10.u64 = ctx.r11.u64 | 65535;
	// cmplw cr6,r30,r10
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, xer);
	// ble cr6,0x82e9d004
	if (!cr6.gt) goto loc_82E9D004;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
loc_82E9D004:
	// stw r26,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r26.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x82595718
	ctx.lr = 0x82E9D014;
	sub_82595718(ctx, base);
	// stw r3,296(r31)
	PPC_STORE_U32(ctx.r31.u32 + 296, ctx.r3.u32);
	// cmplw cr6,r30,r29
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, xer);
	// rlwinm r4,r30,3,0,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 3) & 0xFFFFFFF8;
	// ble cr6,0x82e9d028
	if (!cr6.gt) goto loc_82E9D028;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
loc_82E9D028:
	// stw r26,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r26.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82595718
	ctx.lr = 0x82E9D038;
	sub_82595718(ctx, base);
	// lwz r11,296(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 296);
	// stw r30,292(r31)
	PPC_STORE_U32(ctx.r31.u32 + 292, ctx.r30.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// stw r3,288(r31)
	PPC_STORE_U32(ctx.r31.u32 + 288, ctx.r3.u32);
	// beq cr6,0x82e9d0a0
	if (cr6.eq) goto loc_82E9D0A0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82e9d0a0
	if (cr6.eq) goto loc_82E9D0A0;
	// mr r8,r25
	ctx.r8.u64 = ctx.r25.u64;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x82e9d0a4
	if (cr6.eq) goto loc_82E9D0A4;
	// mr r9,r25
	ctx.r9.u64 = ctx.r25.u64;
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// addi r10,r28,-8
	ctx.r10.s64 = ctx.r28.s64 + -8;
loc_82E9D06C:
	// ld r7,8(r10)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// lwz r6,288(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 288);
	// stdx r7,r11,r6
	PPC_STORE_U64(ctx.r11.u32 + ctx.r6.u32, ctx.r7.u64);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// lwzu r7,16(r10)
	ea = 16 + ctx.r10.u32;
	ctx.r7.u64 = PPC_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// lwz r5,296(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 296);
	// stwx r7,r9,r5
	PPC_STORE_U32(ctx.r9.u32 + ctx.r5.u32, ctx.r7.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// lwz r4,292(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 292);
	// cmplw cr6,r8,r4
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r4.u32, xer);
	// blt cr6,0x82e9d06c
	if (cr6.lt) goto loc_82E9D06C;
	// b 0x82e9d0a4
	goto loc_82E9D0A4;
loc_82E9D0A0:
	// li r23,1
	ctx.r23.s64 = 1;
loc_82E9D0A4:
	// cmplwi cr6,r22,0
	cr6.compare<uint32_t>(ctx.r22.u32, 0, xer);
	// beq cr6,0x82e9d120
	if (cr6.eq) goto loc_82E9D120;
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(ctx.r24.u32, 0, xer);
	// beq cr6,0x82e9d120
	if (cr6.eq) goto loc_82E9D120;
	// cmplw cr6,r24,r29
	cr6.compare<uint32_t>(ctx.r24.u32, ctx.r29.u32, xer);
	// rlwinm r4,r24,3,0,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 3) & 0xFFFFFFF8;
	// ble cr6,0x82e9d0c4
	if (!cr6.gt) goto loc_82E9D0C4;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
loc_82E9D0C4:
	// stw r26,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r26.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// bl 0x82595718
	ctx.lr = 0x82E9D0D4;
	sub_82595718(ctx, base);
	// stw r24,304(r31)
	PPC_STORE_U32(ctx.r31.u32 + 304, ctx.r24.u32);
	// stw r3,300(r31)
	PPC_STORE_U32(ctx.r31.u32 + 300, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82e9d0ec
	if (!cr6.eq) goto loc_82E9D0EC;
	// li r23,1
	ctx.r23.s64 = 1;
	// b 0x82e9d120
	goto loc_82E9D120;
loc_82E9D0EC:
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(ctx.r24.u32, 0, xer);
	// beq cr6,0x82e9d120
	if (cr6.eq) goto loc_82E9D120;
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// addi r9,r22,-16
	ctx.r9.s64 = ctx.r22.s64 + -16;
loc_82E9D100:
	// ldu r8,16(r9)
	ea = 16 + ctx.r9.u32;
	ctx.r8.u64 = PPC_LOAD_U64(ea);
	ctx.r9.u32 = ea;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwz r7,300(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 300);
	// stdx r8,r11,r7
	PPC_STORE_U64(ctx.r11.u32 + ctx.r7.u32, ctx.r8.u64);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// lwz r6,304(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 304);
	// cmplw cr6,r10,r6
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, xer);
	// blt cr6,0x82e9d100
	if (cr6.lt) goto loc_82E9D100;
loc_82E9D120:
	// clrlwi r11,r23,24
	ctx.r11.u64 = ctx.r23.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82e9d18c
	if (cr6.eq) goto loc_82E9D18C;
	// lwz r4,296(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 296);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82e9d148
	if (cr6.eq) goto loc_82E9D148;
	// stw r26,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r26.u32);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x825952b8
	ctx.lr = 0x82E9D144;
	sub_825952B8(ctx, base);
	// stw r25,296(r31)
	PPC_STORE_U32(ctx.r31.u32 + 296, ctx.r25.u32);
loc_82E9D148:
	// lwz r4,288(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 288);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82e9d164
	if (cr6.eq) goto loc_82E9D164;
	// stw r26,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r26.u32);
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x825952b8
	ctx.lr = 0x82E9D160;
	sub_825952B8(ctx, base);
	// stw r25,288(r31)
	PPC_STORE_U32(ctx.r31.u32 + 288, ctx.r25.u32);
loc_82E9D164:
	// lwz r4,300(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 300);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82e9d180
	if (cr6.eq) goto loc_82E9D180;
	// stw r26,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r26.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x825952b8
	ctx.lr = 0x82E9D17C;
	sub_825952B8(ctx, base);
	// stw r25,300(r31)
	PPC_STORE_U32(ctx.r31.u32 + 300, ctx.r25.u32);
loc_82E9D180:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
loc_82E9D18C:
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// li r10,4
	ctx.r10.s64 = 4;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r25,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r25.u32);
	// stw r10,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r10.u32);
	// stw r11,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E9D1AC"))) PPC_WEAK_FUNC(sub_82E9D1AC);
PPC_FUNC_IMPL(__imp__sub_82E9D1AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E9D1B0"))) PPC_WEAK_FUNC(sub_82E9D1B0);
PPC_FUNC_IMPL(__imp__sub_82E9D1B0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdacc
	ctx.lr = 0x82E9D1B8;
	__savegprlr_21(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r21,r6
	ctx.r21.u64 = ctx.r6.u64;
	// mr r22,r7
	ctx.r22.u64 = ctx.r7.u64;
	// bl 0x82e9ba80
	ctx.lr = 0x82E9D1D8;
	sub_82E9BA80(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82e9d404
	if (cr6.eq) goto loc_82E9D404;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// beq cr6,0x82e9d1f4
	if (cr6.eq) goto loc_82E9D1F4;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// bne cr6,0x82e9d204
	if (!cr6.eq) goto loc_82E9D204;
loc_82E9D1F4:
	// cmplwi cr6,r21,0
	cr6.compare<uint32_t>(ctx.r21.u32, 0, xer);
	// beq cr6,0x82e9d404
	if (cr6.eq) goto loc_82E9D404;
	// cmplwi cr6,r22,0
	cr6.compare<uint32_t>(ctx.r22.u32, 0, xer);
	// beq cr6,0x82e9d404
	if (cr6.eq) goto loc_82E9D404;
loc_82E9D204:
	// lwz r4,268(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 268);
	// li r25,29
	ctx.r25.s64 = 29;
	// li r24,0
	ctx.r24.s64 = 0;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82e9d228
	if (cr6.eq) goto loc_82E9D228;
	// stw r25,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r25.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x82E9D224;
	sub_825952B8(ctx, base);
	// stw r24,268(r31)
	PPC_STORE_U32(ctx.r31.u32 + 268, ctx.r24.u32);
loc_82E9D228:
	// lwz r4,276(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 276);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82e9d244
	if (cr6.eq) goto loc_82E9D244;
	// stw r25,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r25.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x825952b8
	ctx.lr = 0x82E9D240;
	sub_825952B8(ctx, base);
	// stw r24,276(r31)
	PPC_STORE_U32(ctx.r31.u32 + 276, ctx.r24.u32);
loc_82E9D244:
	// lwz r4,280(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 280);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82e9d260
	if (cr6.eq) goto loc_82E9D260;
	// stw r25,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r25.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x825952b8
	ctx.lr = 0x82E9D25C;
	sub_825952B8(ctx, base);
	// stw r24,280(r31)
	PPC_STORE_U32(ctx.r31.u32 + 280, ctx.r24.u32);
loc_82E9D260:
	// lis r11,16383
	ctx.r11.s64 = 1073676288;
	// mr r23,r24
	ctx.r23.u64 = ctx.r24.u64;
	// li r27,1
	ctx.r27.s64 = 1;
	// ori r29,r11,65535
	ctx.r29.u64 = ctx.r11.u64 | 65535;
	// li r26,-1
	ctx.r26.s64 = -1;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// beq cr6,0x82e9d328
	if (cr6.eq) goto loc_82E9D328;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x82e9d328
	if (cr6.eq) goto loc_82E9D328;
	// cmplw cr6,r30,r29
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, xer);
	// stw r30,272(r31)
	PPC_STORE_U32(ctx.r31.u32 + 272, ctx.r30.u32);
	// rlwinm r4,r30,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// ble cr6,0x82e9d298
	if (!cr6.gt) goto loc_82E9D298;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
loc_82E9D298:
	// stw r25,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r25.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x82595718
	ctx.lr = 0x82E9D2A8;
	sub_82595718(ctx, base);
	// stw r3,268(r31)
	PPC_STORE_U32(ctx.r31.u32 + 268, ctx.r3.u32);
	// cmplw cr6,r30,r29
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, xer);
	// rlwinm r4,r30,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// ble cr6,0x82e9d2bc
	if (!cr6.gt) goto loc_82E9D2BC;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
loc_82E9D2BC:
	// stw r25,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r25.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82595718
	ctx.lr = 0x82E9D2CC;
	sub_82595718(ctx, base);
	// lwz r11,268(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 268);
	// stw r3,276(r31)
	PPC_STORE_U32(ctx.r31.u32 + 276, ctx.r3.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82e9d324
	if (cr6.eq) goto loc_82E9D324;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82e9d324
	if (cr6.eq) goto loc_82E9D324;
	// lwz r11,272(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 272);
	// mr r10,r24
	ctx.r10.u64 = ctx.r24.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// ble cr6,0x82e9d328
	if (!cr6.gt) goto loc_82E9D328;
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
loc_82E9D2F8:
	// lwzx r9,r11,r28
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r28.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwz r8,268(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 268);
	// stwx r9,r11,r8
	PPC_STORE_U32(ctx.r11.u32 + ctx.r8.u32, ctx.r9.u32);
	// lwz r7,276(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 276);
	// stwx r27,r11,r7
	PPC_STORE_U32(ctx.r11.u32 + ctx.r7.u32, ctx.r27.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r6,272(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 272);
	// cmplw cr6,r10,r6
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, xer);
	// blt cr6,0x82e9d2f8
	if (cr6.lt) goto loc_82E9D2F8;
	// b 0x82e9d328
	goto loc_82E9D328;
loc_82E9D324:
	// mr r23,r27
	ctx.r23.u64 = ctx.r27.u64;
loc_82E9D328:
	// cmplwi cr6,r21,0
	cr6.compare<uint32_t>(ctx.r21.u32, 0, xer);
	// beq cr6,0x82e9d3a4
	if (cr6.eq) goto loc_82E9D3A4;
	// cmplwi cr6,r22,0
	cr6.compare<uint32_t>(ctx.r22.u32, 0, xer);
	// beq cr6,0x82e9d3a4
	if (cr6.eq) goto loc_82E9D3A4;
	// cmplw cr6,r22,r29
	cr6.compare<uint32_t>(ctx.r22.u32, ctx.r29.u32, xer);
	// stw r22,284(r31)
	PPC_STORE_U32(ctx.r31.u32 + 284, ctx.r22.u32);
	// rlwinm r4,r22,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 2) & 0xFFFFFFFC;
	// ble cr6,0x82e9d34c
	if (!cr6.gt) goto loc_82E9D34C;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
loc_82E9D34C:
	// stw r25,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r25.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// bl 0x82595718
	ctx.lr = 0x82E9D35C;
	sub_82595718(ctx, base);
	// stw r3,280(r31)
	PPC_STORE_U32(ctx.r31.u32 + 280, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82e9d370
	if (!cr6.eq) goto loc_82E9D370;
	// mr r23,r27
	ctx.r23.u64 = ctx.r27.u64;
	// b 0x82e9d3a4
	goto loc_82E9D3A4;
loc_82E9D370:
	// lwz r11,284(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 284);
	// mr r10,r24
	ctx.r10.u64 = ctx.r24.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// ble cr6,0x82e9d3a4
	if (!cr6.gt) goto loc_82E9D3A4;
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
loc_82E9D384:
	// lwzx r9,r11,r21
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r21.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwz r8,280(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 280);
	// stwx r9,r11,r8
	PPC_STORE_U32(ctx.r11.u32 + ctx.r8.u32, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r7,284(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 284);
	// cmplw cr6,r10,r7
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, xer);
	// blt cr6,0x82e9d384
	if (cr6.lt) goto loc_82E9D384;
loc_82E9D3A4:
	// clrlwi r11,r23,24
	ctx.r11.u64 = ctx.r23.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82e9d410
	if (cr6.eq) goto loc_82E9D410;
	// lwz r4,268(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 268);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82e9d3cc
	if (cr6.eq) goto loc_82E9D3CC;
	// stw r25,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r25.u32);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x825952b8
	ctx.lr = 0x82E9D3C8;
	sub_825952B8(ctx, base);
	// stw r24,268(r31)
	PPC_STORE_U32(ctx.r31.u32 + 268, ctx.r24.u32);
loc_82E9D3CC:
	// lwz r4,276(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 276);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82e9d3e8
	if (cr6.eq) goto loc_82E9D3E8;
	// stw r25,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r25.u32);
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x825952b8
	ctx.lr = 0x82E9D3E4;
	sub_825952B8(ctx, base);
	// stw r24,276(r31)
	PPC_STORE_U32(ctx.r31.u32 + 276, ctx.r24.u32);
loc_82E9D3E8:
	// lwz r4,280(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 280);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82e9d404
	if (cr6.eq) goto loc_82E9D404;
	// stw r25,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r25.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x825952b8
	ctx.lr = 0x82E9D400;
	sub_825952B8(ctx, base);
	// stw r24,280(r31)
	PPC_STORE_U32(ctx.r31.u32 + 280, ctx.r24.u32);
loc_82E9D404:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb1c
	__restgprlr_21(ctx, base);
	return;
loc_82E9D410:
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// li r10,4
	ctx.r10.s64 = 4;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r24,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r24.u32);
	// stw r10,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r10.u32);
	// stw r11,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb1c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E9D430"))) PPC_WEAK_FUNC(sub_82E9D430);
PPC_FUNC_IMPL(__imp__sub_82E9D430) {
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
	// addi r3,r3,168
	ctx.r3.s64 = ctx.r3.s64 + 168;
	// lwz r11,168(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 168);
	// cmplwi cr6,r11,997
	cr6.compare<uint32_t>(ctx.r11.u32, 997, xer);
	// bne cr6,0x82e9d458
	if (!cr6.eq) goto loc_82E9D458;
	// bl 0x832d3160
	ctx.lr = 0x82E9D458;
	sub_832D3160(ctx, base);
loc_82E9D458:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 208, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82E9D478"))) PPC_WEAK_FUNC(sub_82E9D478);
PPC_FUNC_IMPL(__imp__sub_82E9D478) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82E9D480;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r28,-31774
	ctx.r28.s64 = -2082340864;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,-21036(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -21036);
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(ctx.r11.s32, -1, xer);
	// beq cr6,0x82e9d56c
	if (cr6.eq) goto loc_82E9D56C;
	// li r29,0
	ctx.r29.s64 = 0;
	// ld r5,88(r3)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r3.u32 + 88);
	// addi r30,r3,260
	ctx.r30.s64 = ctx.r3.s64 + 260;
	// stw r29,260(r3)
	PPC_STORE_U32(ctx.r3.u32 + 260, ctx.r29.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,-21036(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + -21036);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x832e09a8
	ctx.lr = 0x82E9D4C0;
	sub_832E09A8(ctx, base);
	// cmplwi cr6,r3,122
	cr6.compare<uint32_t>(ctx.r3.u32, 122, xer);
	// bne cr6,0x82e9d56c
	if (!cr6.eq) goto loc_82E9D56C;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// ble cr6,0x82e9d56c
	if (!cr6.gt) goto loc_82E9D56C;
	// lwz r11,264(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// li r27,29
	ctx.r27.s64 = 29;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82e9d508
	if (cr6.eq) goto loc_82E9D508;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595150
	ctx.lr = 0x82E9D4F4;
	sub_82595150(ctx, base);
	// lwz r3,264(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// bl 0x82416268
	ctx.lr = 0x82E9D4FC;
	sub_82416268(ctx, base);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595170
	ctx.lr = 0x82E9D504;
	sub_82595170(ctx, base);
	// stw r29,264(r31)
	PPC_STORE_U32(ctx.r31.u32 + 264, ctx.r29.u32);
loc_82E9D508:
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r27.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x82595718
	ctx.lr = 0x82E9D51C;
	sub_82595718(ctx, base);
	// stw r3,264(r31)
	PPC_STORE_U32(ctx.r31.u32 + 264, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82e9d56c
	if (cr6.eq) goto loc_82E9D56C;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x831cdcf0
	ctx.lr = 0x82E9D534;
	sub_831CDCF0(ctx, base);
	// std r29,168(r31)
	PPC_STORE_U64(ctx.r31.u32 + 168, ctx.r29.u64);
	// std r29,176(r31)
	PPC_STORE_U64(ctx.r31.u32 + 176, ctx.r29.u64);
	// addi r8,r31,168
	ctx.r8.s64 = ctx.r31.s64 + 168;
	// std r29,184(r31)
	PPC_STORE_U64(ctx.r31.u32 + 184, ctx.r29.u64);
	// stw r29,192(r31)
	PPC_STORE_U32(ctx.r31.u32 + 192, ctx.r29.u32);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r7,264(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// ld r5,88(r31)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r31.u32 + 88);
	// lwz r3,-21036(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + -21036);
	// bl 0x832e09a8
	ctx.lr = 0x82E9D560;
	sub_832E09A8(ctx, base);
	// cmplwi cr6,r3,997
	cr6.compare<uint32_t>(ctx.r3.u32, 997, xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// beq cr6,0x82e9d570
	if (cr6.eq) goto loc_82E9D570;
loc_82E9D56C:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_82E9D570:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E9D578"))) PPC_WEAK_FUNC(sub_82E9D578);
PPC_FUNC_IMPL(__imp__sub_82E9D578) {
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
	// lis r30,-31774
	ctx.r30.s64 = -2082340864;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,-21036(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -21036);
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(ctx.r11.s32, -1, xer);
	// bne cr6,0x82e9d5a8
	if (!cr6.eq) goto loc_82E9D5A8;
loc_82E9D5A0:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82e9d60c
	goto loc_82E9D60C;
loc_82E9D5A8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e9c038
	ctx.lr = 0x82E9D5B0;
	sub_82E9C038(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82e9d60c
	if (cr6.eq) goto loc_82E9D60C;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r31,168
	ctx.r4.s64 = ctx.r31.s64 + 168;
	// std r11,168(r31)
	PPC_STORE_U64(ctx.r31.u32 + 168, ctx.r11.u64);
	// std r11,176(r31)
	PPC_STORE_U64(ctx.r31.u32 + 176, ctx.r11.u64);
	// std r11,184(r31)
	PPC_STORE_U64(ctx.r31.u32 + 184, ctx.r11.u64);
	// stw r11,192(r31)
	PPC_STORE_U32(ctx.r31.u32 + 192, ctx.r11.u32);
	// lwz r3,-21036(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -21036);
	// bl 0x832e0648
	ctx.lr = 0x82E9D5D8;
	sub_832E0648(ctx, base);
	// cmplwi cr6,r3,997
	cr6.compare<uint32_t>(ctx.r3.u32, 997, xer);
	// beq cr6,0x82e9d5a0
	if (cr6.eq) goto loc_82E9D5A0;
	// lis r11,-32747
	ctx.r11.s64 = -2146107392;
	// ori r10,r11,20998
	ctx.r10.u64 = ctx.r11.u64 | 20998;
	// cmplw cr6,r3,r10
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, xer);
	// bne cr6,0x82e9d608
	if (!cr6.eq) goto loc_82E9D608;
	// lwz r3,-21036(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -21036);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82e9d608
	if (cr6.eq) goto loc_82E9D608;
	// bl 0x832d3798
	ctx.lr = 0x82E9D600;
	sub_832D3798(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,-21036(r30)
	PPC_STORE_U32(ctx.r30.u32 + -21036, ctx.r11.u32);
loc_82E9D608:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_82E9D60C:
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

__attribute__((alias("__imp__sub_82E9D624"))) PPC_WEAK_FUNC(sub_82E9D624);
PPC_FUNC_IMPL(__imp__sub_82E9D624) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E9D628"))) PPC_WEAK_FUNC(sub_82E9D628);
PPC_FUNC_IMPL(__imp__sub_82E9D628) {
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
	// bl 0x82e9c038
	ctx.lr = 0x82E9D63C;
	sub_82E9C038(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82e9d664
	if (cr6.eq) goto loc_82E9D664;
	// lis r31,-31774
	ctx.r31.s64 = -2082340864;
	// lwz r3,-21036(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -21036);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82e9d660
	if (cr6.eq) goto loc_82E9D660;
	// bl 0x832d3798
	ctx.lr = 0x82E9D658;
	sub_832D3798(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,-21036(r31)
	PPC_STORE_U32(ctx.r31.u32 + -21036, ctx.r11.u32);
loc_82E9D660:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82E9D664:
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

__attribute__((alias("__imp__sub_82E9D678"))) PPC_WEAK_FUNC(sub_82E9D678);
PPC_FUNC_IMPL(__imp__sub_82E9D678) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82E9D680;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r4,268(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 268);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r29,29
	ctx.r29.s64 = 29;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82e9d6ac
	if (cr6.eq) goto loc_82E9D6AC;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x82E9D6A8;
	sub_825952B8(ctx, base);
	// stw r30,268(r31)
	PPC_STORE_U32(ctx.r31.u32 + 268, ctx.r30.u32);
loc_82E9D6AC:
	// lwz r4,276(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 276);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82e9d6c8
	if (cr6.eq) goto loc_82E9D6C8;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x825952b8
	ctx.lr = 0x82E9D6C4;
	sub_825952B8(ctx, base);
	// stw r30,276(r31)
	PPC_STORE_U32(ctx.r31.u32 + 276, ctx.r30.u32);
loc_82E9D6C8:
	// lwz r4,280(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 280);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82e9d6e4
	if (cr6.eq) goto loc_82E9D6E4;
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r29.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x825952b8
	ctx.lr = 0x82E9D6E0;
	sub_825952B8(ctx, base);
	// stw r30,280(r31)
	PPC_STORE_U32(ctx.r31.u32 + 280, ctx.r30.u32);
loc_82E9D6E4:
	// lwz r4,288(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 288);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82e9d700
	if (cr6.eq) goto loc_82E9D700;
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r29.u32);
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x825952b8
	ctx.lr = 0x82E9D6FC;
	sub_825952B8(ctx, base);
	// stw r30,288(r31)
	PPC_STORE_U32(ctx.r31.u32 + 288, ctx.r30.u32);
loc_82E9D700:
	// lwz r4,296(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 296);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82e9d71c
	if (cr6.eq) goto loc_82E9D71C;
	// stw r29,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r29.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x825952b8
	ctx.lr = 0x82E9D718;
	sub_825952B8(ctx, base);
	// stw r30,296(r31)
	PPC_STORE_U32(ctx.r31.u32 + 296, ctx.r30.u32);
loc_82E9D71C:
	// lwz r4,300(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 300);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82e9d738
	if (cr6.eq) goto loc_82E9D738;
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// bl 0x825952b8
	ctx.lr = 0x82E9D734;
	sub_825952B8(ctx, base);
	// stw r30,300(r31)
	PPC_STORE_U32(ctx.r31.u32 + 300, ctx.r30.u32);
loc_82E9D738:
	// lwz r11,264(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82e9d768
	if (cr6.eq) goto loc_82E9D768;
	// stw r29,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r29.u32);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x82595150
	ctx.lr = 0x82E9D754;
	sub_82595150(ctx, base);
	// lwz r3,264(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// bl 0x82416268
	ctx.lr = 0x82E9D75C;
	sub_82416268(ctx, base);
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x82595170
	ctx.lr = 0x82E9D764;
	sub_82595170(ctx, base);
	// stw r30,264(r31)
	PPC_STORE_U32(ctx.r31.u32 + 264, ctx.r30.u32);
loc_82E9D768:
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r30,256(r31)
	PPC_STORE_U8(ctx.r31.u32 + 256, ctx.r30.u8);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
	// lwz r11,72(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,10
	cr6.compare<uint32_t>(ctx.r11.u32, 10, xer);
	// bgtlr cr6
	if (cr6.gt) return;
	// lis r12,-32022
	ctx.r12.s64 = -2098593792;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-10336
	ctx.r12.s64 = ctx.r12.s64 + -10336;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_82E9D7CC;
	case 1:
		goto loc_82E9D7E4;
	case 2:
		goto loc_82E9D7FC;
	case 3:
		goto loc_82E9D830;
	case 4:
		goto loc_82E9D848;
	case 5:
		goto loc_82E9D860;
	case 6:
		goto loc_82E9D8C0;
	case 7:
		goto loc_82E9D878;
	case 8:
		goto loc_82E9D890;
	case 9:
		goto loc_82E9D8C0;
	case 10:
		goto loc_82E9D8A8;
	default:
		return;
	}
	// lwz r23,-10292(r9)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r9.u32 + -10292);
	// lwz r23,-10268(r9)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r9.u32 + -10268);
	// lwz r23,-10244(r9)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r9.u32 + -10244);
	// lwz r23,-10192(r9)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r9.u32 + -10192);
	// lwz r23,-10168(r9)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r9.u32 + -10168);
	// lwz r23,-10144(r9)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r9.u32 + -10144);
	// lwz r23,-10048(r9)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r9.u32 + -10048);
	// lwz r23,-10120(r9)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r9.u32 + -10120);
	// lwz r23,-10096(r9)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r9.u32 + -10096);
	// lwz r23,-10048(r9)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r9.u32 + -10048);
	// lwz r23,-10072(r9)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r9.u32 + -10072);
loc_82E9D7CC:
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r4,r11,-31192
	ctx.r4.s64 = ctx.r11.s64 + -31192;
	// li r6,7
	ctx.r6.s64 = 7;
	// li r5,12
	ctx.r5.s64 = 12;
	// b 0x82e9c840
	sub_82E9C840(ctx, base);
	return;
loc_82E9D7E4:
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r4,r11,-31144
	ctx.r4.s64 = ctx.r11.s64 + -31144;
	// li r6,7
	ctx.r6.s64 = 7;
	// li r5,14
	ctx.r5.s64 = 14;
	// b 0x82e9c840
	sub_82E9C840(ctx, base);
	return;
loc_82E9D7FC:
	// lbz r11,256(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 256);
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82e9d820
	if (cr6.eq) goto loc_82E9D820;
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// li r5,10
	ctx.r5.s64 = 10;
	// addi r4,r11,-31068
	ctx.r4.s64 = ctx.r11.s64 + -31068;
	// b 0x82e9c840
	sub_82E9C840(ctx, base);
	return;
loc_82E9D820:
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// li r5,5
	ctx.r5.s64 = 5;
	// addi r4,r11,-31088
	ctx.r4.s64 = ctx.r11.s64 + -31088;
	// b 0x82e9c840
	sub_82E9C840(ctx, base);
	return;
loc_82E9D830:
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r4,r11,-31308
	ctx.r4.s64 = ctx.r11.s64 + -31308;
	// li r6,7
	ctx.r6.s64 = 7;
	// li r5,9
	ctx.r5.s64 = 9;
	// b 0x82e9c840
	sub_82E9C840(ctx, base);
	return;
loc_82E9D848:
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r4,r11,-31272
	ctx.r4.s64 = ctx.r11.s64 + -31272;
	// li r6,7
	ctx.r6.s64 = 7;
	// li r5,3
	ctx.r5.s64 = 3;
	// b 0x82e9c840
	sub_82E9C840(ctx, base);
	return;
loc_82E9D860:
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// lwz r6,76(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r4,r11,-31260
	ctx.r4.s64 = ctx.r11.s64 + -31260;
	// li r5,3
	ctx.r5.s64 = 3;
	// b 0x82e9c840
	sub_82E9C840(ctx, base);
	return;
loc_82E9D878:
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r4,r11,-31028
	ctx.r4.s64 = ctx.r11.s64 + -31028;
	// li r6,7
	ctx.r6.s64 = 7;
	// li r5,4
	ctx.r5.s64 = 4;
	// b 0x82e9c840
	sub_82E9C840(ctx, base);
	return;
loc_82E9D890:
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r4,r11,-31248
	ctx.r4.s64 = ctx.r11.s64 + -31248;
	// li r6,10
	ctx.r6.s64 = 10;
	// li r5,3
	ctx.r5.s64 = 3;
	// b 0x82e9c840
	sub_82E9C840(ctx, base);
	return;
loc_82E9D8A8:
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r4,r11,-31236
	ctx.r4.s64 = ctx.r11.s64 + -31236;
	// li r6,7
	ctx.r6.s64 = 7;
	// li r5,5
	ctx.r5.s64 = 5;
	// b 0x82e9c840
	sub_82E9C840(ctx, base);
	return;
loc_82E9D8C0:
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E9D8C4"))) PPC_WEAK_FUNC(sub_82E9D8C4);
PPC_FUNC_IMPL(__imp__sub_82E9D8C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E9D8C8"))) PPC_WEAK_FUNC(sub_82E9D8C8);
PPC_FUNC_IMPL(__imp__sub_82E9D8C8) {
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
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,-31216
	ctx.r10.s64 = ctx.r11.s64 + -31216;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x82e9d678
	ctx.lr = 0x82E9D8F4;
	sub_82E9D678(ctx, base);
	// lis r9,-31757
	ctx.r9.s64 = -2081226752;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r7,r8,21716
	ctx.r7.s64 = ctx.r8.s64 + 21716;
	// stw r11,216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 216, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,25496(r9)
	PPC_STORE_U32(ctx.r9.u32 + 25496, ctx.r11.u32);
	// stw r7,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r7.u32);
	// bl 0x831032a0
	ctx.lr = 0x82E9D918;
	sub_831032A0(ctx, base);
	// clrlwi r6,r30,31
	ctx.r6.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x82e9d930
	if (cr6.eq) goto loc_82E9D930;
	// bl 0x82416268
	ctx.lr = 0x82E9D92C;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82E9D930:
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

__attribute__((alias("__imp__sub_82E9D948"))) PPC_WEAK_FUNC(sub_82E9D948);
PPC_FUNC_IMPL(__imp__sub_82E9D948) {
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
	// lbz r11,24(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 24);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82e9d978
	if (!cr6.eq) goto loc_82E9D978;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82e9d990
	goto loc_82E9D990;
loc_82E9D978:
	// addi r4,r31,8
	ctx.r4.s64 = ctx.r31.s64 + 8;
	// addi r3,r30,8
	ctx.r3.s64 = ctx.r30.s64 + 8;
	// bl 0x825369e8
	ctx.lr = 0x82E9D984;
	sub_825369E8(ctx, base);
	// lbz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 24);
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r11,24(r30)
	PPC_STORE_U8(ctx.r30.u32 + 24, ctx.r11.u8);
loc_82E9D990:
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

__attribute__((alias("__imp__sub_82E9D9A8"))) PPC_WEAK_FUNC(sub_82E9D9A8);
PPC_FUNC_IMPL(__imp__sub_82E9D9A8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82E9D9B0;
	__savegprlr_29(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x82eb31e0
	ctx.lr = 0x82E9D9C8;
	sub_82EB31E0(ctx, base);
	// li r11,10000
	ctx.r11.s64 = 10000;
	// cmplwi cr6,r31,1
	cr6.compare<uint32_t>(ctx.r31.u32, 1, xer);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// stw r11,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r11.u32);
	// stw r11,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r11.u32);
	// stw r11,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r11.u32);
	// stw r11,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r11.u32);
	// stw r11,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r11.u32);
	// stw r11,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r11.u32);
	// stw r11,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r11.u32);
	// stw r11,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r11.u32);
	// stw r11,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r11.u32);
	// blt cr6,0x82e9da3c
	if (cr6.lt) goto loc_82E9DA3C;
	// beq cr6,0x82e9da3c
	if (cr6.eq) goto loc_82E9DA3C;
loc_82E9DA30:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82E9DA3C:
	// cmplwi cr6,r30,1
	cr6.compare<uint32_t>(ctx.r30.u32, 1, xer);
	// blt cr6,0x82e9da50
	if (cr6.lt) goto loc_82E9DA50;
	// beq cr6,0x82e9da50
	if (cr6.eq) goto loc_82E9DA50;
	// cmplwi cr6,r30,3
	cr6.compare<uint32_t>(ctx.r30.u32, 3, xer);
	// bge cr6,0x82e9da30
	if (!cr6.lt) goto loc_82E9DA30;
loc_82E9DA50:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r5,88
	ctx.r5.s64 = 88;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831ce980
	ctx.lr = 0x82E9DA60;
	sub_831CE980(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E9DA6C"))) PPC_WEAK_FUNC(sub_82E9DA6C);
PPC_FUNC_IMPL(__imp__sub_82E9DA6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E9DA70"))) PPC_WEAK_FUNC(sub_82E9DA70);
PPC_FUNC_IMPL(__imp__sub_82E9DA70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// lwz r10,8(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// lwz r9,12(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// stw r9,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r9.u32);
	// lfs f0,16(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,16(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// lfs f13,20(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,20(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// lfs f12,24(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,24(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// ld r8,32(r4)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r4.u32 + 32);
	// std r8,32(r3)
	PPC_STORE_U64(ctx.r3.u32 + 32, ctx.r8.u64);
	// lwz r7,40(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 40);
	// stw r7,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r7.u32);
	// lfs f11,44(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 44);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,44(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 44, temp.u32);
	// lfs f10,48(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 48);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,48(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 48, temp.u32);
	// lfs f9,52(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 52);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,52(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 52, temp.u32);
	// lwz r6,56(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 56);
	// stw r6,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r6.u32);
	// lwz r5,60(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 60);
	// stw r5,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r5.u32);
	// lfs f8,64(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 64);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,64(r3)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r3.u32 + 64, temp.u32);
	// lwz r11,68(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 68);
	// stw r11,68(r3)
	PPC_STORE_U32(ctx.r3.u32 + 68, ctx.r11.u32);
	// lwz r10,72(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 72);
	// stw r10,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r10.u32);
	// lfs f7,76(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 76);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,76(r3)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r3.u32 + 76, temp.u32);
	// lfs f6,80(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 80);
	ctx.f6.f64 = double(temp.f32);
	// stfs f6,80(r3)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r3.u32 + 80, temp.u32);
	// lbz r9,84(r4)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r4.u32 + 84);
	// stb r9,84(r3)
	PPC_STORE_U8(ctx.r3.u32 + 84, ctx.r9.u8);
	// lwz r8,88(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 88);
	// stw r8,88(r3)
	PPC_STORE_U32(ctx.r3.u32 + 88, ctx.r8.u32);
	// lfs f5,92(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 92);
	ctx.f5.f64 = double(temp.f32);
	// stfs f5,92(r3)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r3.u32 + 92, temp.u32);
	// lfs f4,96(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 96);
	ctx.f4.f64 = double(temp.f32);
	// stfs f4,96(r3)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r3.u32 + 96, temp.u32);
	// lfs f3,100(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 100);
	ctx.f3.f64 = double(temp.f32);
	// stfs f3,100(r3)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r3.u32 + 100, temp.u32);
	// lwz r7,104(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 104);
	// stw r7,104(r3)
	PPC_STORE_U32(ctx.r3.u32 + 104, ctx.r7.u32);
	// lwz r6,108(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 108);
	// stw r6,108(r3)
	PPC_STORE_U32(ctx.r3.u32 + 108, ctx.r6.u32);
	// lwz r5,112(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 112);
	// stw r5,112(r3)
	PPC_STORE_U32(ctx.r3.u32 + 112, ctx.r5.u32);
	// ld r4,120(r4)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r4.u32 + 120);
	// std r4,120(r3)
	PPC_STORE_U64(ctx.r3.u32 + 120, ctx.r4.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E9DB4C"))) PPC_WEAK_FUNC(sub_82E9DB4C);
PPC_FUNC_IMPL(__imp__sub_82E9DB4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E9DB50"))) PPC_WEAK_FUNC(sub_82E9DB50);
PPC_FUNC_IMPL(__imp__sub_82E9DB50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r9,r11,21716
	ctx.r9.s64 = ctx.r11.s64 + 21716;
	// addi r8,r10,21716
	ctx.r8.s64 = ctx.r10.s64 + 21716;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// lwz r7,4(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r7,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r7.u32);
	// lwz r6,8(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// stw r6,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r6.u32);
	// lwz r5,12(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// stw r5,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r5.u32);
	// lfs f0,16(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,16(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// lfs f13,20(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,20(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// lfs f12,24(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	ctx.f12.f64 = double(temp.f32);
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// stfs f12,24(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// ld r11,32(r4)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r4.u32 + 32);
	// std r11,32(r3)
	PPC_STORE_U64(ctx.r3.u32 + 32, ctx.r11.u64);
	// lwz r10,40(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 40);
	// stw r10,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r10.u32);
	// lfs f11,44(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 44);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,44(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 44, temp.u32);
	// lfs f10,48(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 48);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,48(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 48, temp.u32);
	// lfs f9,52(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 52);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,52(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 52, temp.u32);
	// lwz r9,56(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 56);
	// stw r9,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r9.u32);
	// lwz r8,60(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 60);
	// stw r8,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r8.u32);
	// lfs f8,64(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 64);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,64(r3)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r3.u32 + 64, temp.u32);
	// lwz r7,68(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 68);
	// stw r7,68(r3)
	PPC_STORE_U32(ctx.r3.u32 + 68, ctx.r7.u32);
	// lwz r6,72(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 72);
	// stw r6,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r6.u32);
	// lfs f7,76(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 76);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,76(r3)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r3.u32 + 76, temp.u32);
	// lfs f6,80(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 80);
	ctx.f6.f64 = double(temp.f32);
	// stfs f6,80(r3)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r3.u32 + 80, temp.u32);
	// lbz r5,84(r4)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r4.u32 + 84);
	// stb r5,84(r3)
	PPC_STORE_U8(ctx.r3.u32 + 84, ctx.r5.u8);
	// lwz r11,88(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 88);
	// stw r11,88(r3)
	PPC_STORE_U32(ctx.r3.u32 + 88, ctx.r11.u32);
	// lfs f5,92(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 92);
	ctx.f5.f64 = double(temp.f32);
	// stfs f5,92(r3)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r3.u32 + 92, temp.u32);
	// lfs f4,96(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 96);
	ctx.f4.f64 = double(temp.f32);
	// stfs f4,96(r3)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r3.u32 + 96, temp.u32);
	// lfs f3,100(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 100);
	ctx.f3.f64 = double(temp.f32);
	// stfs f3,100(r3)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r3.u32 + 100, temp.u32);
	// lwz r10,104(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 104);
	// stw r10,104(r3)
	PPC_STORE_U32(ctx.r3.u32 + 104, ctx.r10.u32);
	// lwz r9,108(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 108);
	// stw r9,108(r3)
	PPC_STORE_U32(ctx.r3.u32 + 108, ctx.r9.u32);
	// lwz r8,112(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 112);
	// stw r8,112(r3)
	PPC_STORE_U32(ctx.r3.u32 + 112, ctx.r8.u32);
	// ld r7,120(r4)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r4.u32 + 120);
	// std r7,120(r3)
	PPC_STORE_U64(ctx.r3.u32 + 120, ctx.r7.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E9DC44"))) PPC_WEAK_FUNC(sub_82E9DC44);
PPC_FUNC_IMPL(__imp__sub_82E9DC44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E9DC48"))) PPC_WEAK_FUNC(sub_82E9DC48);
PPC_FUNC_IMPL(__imp__sub_82E9DC48) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// lwz r10,8(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// lwz r9,12(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// stw r9,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r9.u32);
	// lfs f0,16(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,16(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// lfs f13,20(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,20(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// lfs f12,24(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,24(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// ld r8,32(r4)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r4.u32 + 32);
	// std r8,32(r3)
	PPC_STORE_U64(ctx.r3.u32 + 32, ctx.r8.u64);
	// lwz r7,40(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 40);
	// stw r7,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r7.u32);
	// lfs f11,44(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 44);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,44(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 44, temp.u32);
	// lfs f10,48(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 48);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,48(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 48, temp.u32);
	// lfs f9,52(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 52);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,52(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 52, temp.u32);
	// lwz r6,56(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 56);
	// stw r6,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r6.u32);
	// lwz r5,60(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 60);
	// stw r5,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r5.u32);
	// lfs f8,64(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 64);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,64(r3)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r3.u32 + 64, temp.u32);
	// lwz r11,68(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 68);
	// stw r11,68(r3)
	PPC_STORE_U32(ctx.r3.u32 + 68, ctx.r11.u32);
	// lwz r10,72(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 72);
	// stw r10,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r10.u32);
	// lwz r9,76(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 76);
	// stw r9,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, ctx.r9.u32);
	// lwz r8,80(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 80);
	// stw r8,80(r3)
	PPC_STORE_U32(ctx.r3.u32 + 80, ctx.r8.u32);
	// lbz r7,84(r4)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r4.u32 + 84);
	// stb r7,84(r3)
	PPC_STORE_U8(ctx.r3.u32 + 84, ctx.r7.u8);
	// lwz r6,88(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 88);
	// stw r6,88(r3)
	PPC_STORE_U32(ctx.r3.u32 + 88, ctx.r6.u32);
	// lfs f7,92(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 92);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,92(r3)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r3.u32 + 92, temp.u32);
	// lfs f6,96(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 96);
	ctx.f6.f64 = double(temp.f32);
	// stfs f6,96(r3)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r3.u32 + 96, temp.u32);
	// lfs f5,100(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 100);
	ctx.f5.f64 = double(temp.f32);
	// stfs f5,100(r3)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r3.u32 + 100, temp.u32);
	// lwz r5,104(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 104);
	// stw r5,104(r3)
	PPC_STORE_U32(ctx.r3.u32 + 104, ctx.r5.u32);
	// lwz r11,108(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 108);
	// stw r11,108(r3)
	PPC_STORE_U32(ctx.r3.u32 + 108, ctx.r11.u32);
	// lwz r10,112(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 112);
	// stw r10,112(r3)
	PPC_STORE_U32(ctx.r3.u32 + 112, ctx.r10.u32);
	// ld r9,120(r4)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r4.u32 + 120);
	// std r9,120(r3)
	PPC_STORE_U64(ctx.r3.u32 + 120, ctx.r9.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E9DD24"))) PPC_WEAK_FUNC(sub_82E9DD24);
PPC_FUNC_IMPL(__imp__sub_82E9DD24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E9DD28"))) PPC_WEAK_FUNC(sub_82E9DD28);
PPC_FUNC_IMPL(__imp__sub_82E9DD28) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r9,r11,21716
	ctx.r9.s64 = ctx.r11.s64 + 21716;
	// addi r8,r10,21716
	ctx.r8.s64 = ctx.r10.s64 + 21716;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// lwz r7,4(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r7,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r7.u32);
	// lwz r6,8(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// stw r6,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r6.u32);
	// lwz r5,12(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// stw r5,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r5.u32);
	// lfs f0,16(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,16(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// lfs f13,20(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,20(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// lfs f12,24(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	ctx.f12.f64 = double(temp.f32);
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// stfs f12,24(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// ld r11,32(r4)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r4.u32 + 32);
	// std r11,32(r3)
	PPC_STORE_U64(ctx.r3.u32 + 32, ctx.r11.u64);
	// lwz r10,40(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 40);
	// stw r10,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r10.u32);
	// lfs f11,44(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 44);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,44(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 44, temp.u32);
	// lfs f10,48(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 48);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,48(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 48, temp.u32);
	// lfs f9,52(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 52);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,52(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 52, temp.u32);
	// lwz r9,56(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 56);
	// stw r9,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r9.u32);
	// lwz r8,60(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 60);
	// stw r8,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r8.u32);
	// lfs f8,64(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 64);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,64(r3)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r3.u32 + 64, temp.u32);
	// lwz r7,68(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 68);
	// stw r7,68(r3)
	PPC_STORE_U32(ctx.r3.u32 + 68, ctx.r7.u32);
	// lwz r6,72(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 72);
	// stw r6,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r6.u32);
	// lwz r5,76(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 76);
	// stw r5,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, ctx.r5.u32);
	// lwz r11,80(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 80);
	// stw r11,80(r3)
	PPC_STORE_U32(ctx.r3.u32 + 80, ctx.r11.u32);
	// lbz r10,84(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 84);
	// stb r10,84(r3)
	PPC_STORE_U8(ctx.r3.u32 + 84, ctx.r10.u8);
	// lwz r9,88(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 88);
	// stw r9,88(r3)
	PPC_STORE_U32(ctx.r3.u32 + 88, ctx.r9.u32);
	// lfs f7,92(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 92);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,92(r3)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r3.u32 + 92, temp.u32);
	// lfs f6,96(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 96);
	ctx.f6.f64 = double(temp.f32);
	// stfs f6,96(r3)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r3.u32 + 96, temp.u32);
	// lfs f5,100(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 100);
	ctx.f5.f64 = double(temp.f32);
	// stfs f5,100(r3)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r3.u32 + 100, temp.u32);
	// lwz r8,104(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 104);
	// stw r8,104(r3)
	PPC_STORE_U32(ctx.r3.u32 + 104, ctx.r8.u32);
	// lwz r7,108(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 108);
	// stw r7,108(r3)
	PPC_STORE_U32(ctx.r3.u32 + 108, ctx.r7.u32);
	// lwz r6,112(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 112);
	// stw r6,112(r3)
	PPC_STORE_U32(ctx.r3.u32 + 112, ctx.r6.u32);
	// ld r5,120(r4)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r4.u32 + 120);
	// std r5,120(r3)
	PPC_STORE_U64(ctx.r3.u32 + 120, ctx.r5.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E9DE1C"))) PPC_WEAK_FUNC(sub_82E9DE1C);
PPC_FUNC_IMPL(__imp__sub_82E9DE1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E9DE20"))) PPC_WEAK_FUNC(sub_82E9DE20);
PPC_FUNC_IMPL(__imp__sub_82E9DE20) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// lwz r10,8(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// lwz r9,12(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// stw r9,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r9.u32);
	// lfs f0,16(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,16(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// lfs f13,20(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,20(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// lfs f12,24(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,24(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// ld r8,32(r4)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r4.u32 + 32);
	// std r8,32(r3)
	PPC_STORE_U64(ctx.r3.u32 + 32, ctx.r8.u64);
	// lwz r7,40(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 40);
	// stw r7,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r7.u32);
	// lfs f11,44(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 44);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,44(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 44, temp.u32);
	// lfs f10,48(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 48);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,48(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 48, temp.u32);
	// lfs f9,52(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 52);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,52(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 52, temp.u32);
	// lwz r6,56(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 56);
	// stw r6,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r6.u32);
	// lwz r5,60(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 60);
	// stw r5,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r5.u32);
	// lfs f8,64(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 64);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,64(r3)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r3.u32 + 64, temp.u32);
	// lwz r11,68(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 68);
	// stw r11,68(r3)
	PPC_STORE_U32(ctx.r3.u32 + 68, ctx.r11.u32);
	// lwz r10,72(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 72);
	// stw r10,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r10.u32);
	// lwz r9,76(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 76);
	// stw r9,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, ctx.r9.u32);
	// lwz r8,80(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 80);
	// stw r8,80(r3)
	PPC_STORE_U32(ctx.r3.u32 + 80, ctx.r8.u32);
	// lbz r7,84(r4)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r4.u32 + 84);
	// stb r7,84(r3)
	PPC_STORE_U8(ctx.r3.u32 + 84, ctx.r7.u8);
	// lwz r6,88(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 88);
	// stw r6,88(r3)
	PPC_STORE_U32(ctx.r3.u32 + 88, ctx.r6.u32);
	// lfs f7,92(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 92);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,92(r3)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r3.u32 + 92, temp.u32);
	// lfs f6,96(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 96);
	ctx.f6.f64 = double(temp.f32);
	// stfs f6,96(r3)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r3.u32 + 96, temp.u32);
	// lfs f5,100(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 100);
	ctx.f5.f64 = double(temp.f32);
	// stfs f5,100(r3)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r3.u32 + 100, temp.u32);
	// lwz r5,104(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 104);
	// stw r5,104(r3)
	PPC_STORE_U32(ctx.r3.u32 + 104, ctx.r5.u32);
	// lwz r11,108(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 108);
	// stw r11,108(r3)
	PPC_STORE_U32(ctx.r3.u32 + 108, ctx.r11.u32);
	// lwz r10,112(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 112);
	// stw r10,112(r3)
	PPC_STORE_U32(ctx.r3.u32 + 112, ctx.r10.u32);
	// ld r9,120(r4)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r4.u32 + 120);
	// std r9,120(r3)
	PPC_STORE_U64(ctx.r3.u32 + 120, ctx.r9.u64);
	// lfs f4,128(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 128);
	ctx.f4.f64 = double(temp.f32);
	// stfs f4,128(r3)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r3.u32 + 128, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E9DF04"))) PPC_WEAK_FUNC(sub_82E9DF04);
PPC_FUNC_IMPL(__imp__sub_82E9DF04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E9DF08"))) PPC_WEAK_FUNC(sub_82E9DF08);
PPC_FUNC_IMPL(__imp__sub_82E9DF08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r9,r11,21716
	ctx.r9.s64 = ctx.r11.s64 + 21716;
	// addi r8,r10,21716
	ctx.r8.s64 = ctx.r10.s64 + 21716;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// lwz r7,4(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r7,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r7.u32);
	// lwz r6,8(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// stw r6,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r6.u32);
	// lwz r5,12(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// stw r5,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r5.u32);
	// lfs f0,16(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,16(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// lfs f13,20(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,20(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// lfs f12,24(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	ctx.f12.f64 = double(temp.f32);
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// stfs f12,24(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// ld r11,32(r4)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r4.u32 + 32);
	// std r11,32(r3)
	PPC_STORE_U64(ctx.r3.u32 + 32, ctx.r11.u64);
	// lwz r10,40(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 40);
	// stw r10,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r10.u32);
	// lfs f11,44(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 44);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,44(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 44, temp.u32);
	// lfs f10,48(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 48);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,48(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 48, temp.u32);
	// lfs f9,52(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 52);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,52(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 52, temp.u32);
	// lwz r9,56(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 56);
	// stw r9,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r9.u32);
	// lwz r8,60(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 60);
	// stw r8,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r8.u32);
	// lfs f8,64(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 64);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,64(r3)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r3.u32 + 64, temp.u32);
	// lwz r7,68(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 68);
	// stw r7,68(r3)
	PPC_STORE_U32(ctx.r3.u32 + 68, ctx.r7.u32);
	// lwz r6,72(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 72);
	// stw r6,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r6.u32);
	// lwz r5,76(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 76);
	// stw r5,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, ctx.r5.u32);
	// lwz r11,80(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 80);
	// stw r11,80(r3)
	PPC_STORE_U32(ctx.r3.u32 + 80, ctx.r11.u32);
	// lbz r10,84(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 84);
	// stb r10,84(r3)
	PPC_STORE_U8(ctx.r3.u32 + 84, ctx.r10.u8);
	// lwz r9,88(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 88);
	// stw r9,88(r3)
	PPC_STORE_U32(ctx.r3.u32 + 88, ctx.r9.u32);
	// lfs f7,92(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 92);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,92(r3)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r3.u32 + 92, temp.u32);
	// lfs f6,96(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 96);
	ctx.f6.f64 = double(temp.f32);
	// stfs f6,96(r3)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r3.u32 + 96, temp.u32);
	// lfs f5,100(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 100);
	ctx.f5.f64 = double(temp.f32);
	// stfs f5,100(r3)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r3.u32 + 100, temp.u32);
	// lwz r8,104(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 104);
	// stw r8,104(r3)
	PPC_STORE_U32(ctx.r3.u32 + 104, ctx.r8.u32);
	// lwz r7,108(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 108);
	// stw r7,108(r3)
	PPC_STORE_U32(ctx.r3.u32 + 108, ctx.r7.u32);
	// lwz r6,112(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 112);
	// stw r6,112(r3)
	PPC_STORE_U32(ctx.r3.u32 + 112, ctx.r6.u32);
	// ld r5,120(r4)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r4.u32 + 120);
	// std r5,120(r3)
	PPC_STORE_U64(ctx.r3.u32 + 120, ctx.r5.u64);
	// lfs f4,128(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 128);
	ctx.f4.f64 = double(temp.f32);
	// stfs f4,128(r3)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r3.u32 + 128, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E9E004"))) PPC_WEAK_FUNC(sub_82E9E004);
PPC_FUNC_IMPL(__imp__sub_82E9E004) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E9E008"))) PPC_WEAK_FUNC(sub_82E9E008);
PPC_FUNC_IMPL(__imp__sub_82E9E008) {
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
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// addi r4,r4,8
	ctx.r4.s64 = ctx.r4.s64 + 8;
	// bl 0x825369e8
	ctx.lr = 0x82E9E030;
	sub_825369E8(ctx, base);
	// lbz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 24);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r11,24(r31)
	PPC_STORE_U8(ctx.r31.u32 + 24, ctx.r11.u8);
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

__attribute__((alias("__imp__sub_82E9E054"))) PPC_WEAK_FUNC(sub_82E9E054);
PPC_FUNC_IMPL(__imp__sub_82E9E054) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E9E058"))) PPC_WEAK_FUNC(sub_82E9E058);
PPC_FUNC_IMPL(__imp__sub_82E9E058) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82E9E060;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// addi r30,r3,8
	ctx.r30.s64 = ctx.r3.s64 + 8;
	// addi r10,r11,12496
	ctx.r10.s64 = ctx.r11.s64 + 12496;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x825359d8
	ctx.lr = 0x82E9E088;
	sub_825359D8(ctx, base);
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stb r29,24(r31)
	PPC_STORE_U8(ctx.r31.u32 + 24, ctx.r29.u8);
	// bl 0x82535130
	ctx.lr = 0x82E9E098;
	sub_82535130(ctx, base);
	// stb r29,24(r31)
	PPC_STORE_U8(ctx.r31.u32 + 24, ctx.r29.u8);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82535130
	ctx.lr = 0x82E9E0A4;
	sub_82535130(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825369e8
	ctx.lr = 0x82E9E0B0;
	sub_825369E8(ctx, base);
	// li r9,1
	ctx.r9.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r9,24(r31)
	PPC_STORE_U8(ctx.r31.u32 + 24, ctx.r9.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E9E0C4"))) PPC_WEAK_FUNC(sub_82E9E0C4);
PPC_FUNC_IMPL(__imp__sub_82E9E0C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E9E0C8"))) PPC_WEAK_FUNC(sub_82E9E0C8);
PPC_FUNC_IMPL(__imp__sub_82E9E0C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lbz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 8);
	// stb r11,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, ctx.r11.u8);
	// ld r10,16(r4)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r4.u32 + 16);
	// std r10,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r10.u64);
	// lbz r9,24(r4)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r4.u32 + 24);
	// stb r9,24(r3)
	PPC_STORE_U8(ctx.r3.u32 + 24, ctx.r9.u8);
	// ld r8,32(r4)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r4.u32 + 32);
	// std r8,32(r3)
	PPC_STORE_U64(ctx.r3.u32 + 32, ctx.r8.u64);
	// lbz r7,40(r4)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r4.u32 + 40);
	// stb r7,40(r3)
	PPC_STORE_U8(ctx.r3.u32 + 40, ctx.r7.u8);
	// ld r6,48(r4)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r4.u32 + 48);
	// std r6,48(r3)
	PPC_STORE_U64(ctx.r3.u32 + 48, ctx.r6.u64);
	// lbz r5,56(r4)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r4.u32 + 56);
	// stb r5,56(r3)
	PPC_STORE_U8(ctx.r3.u32 + 56, ctx.r5.u8);
	// lwz r11,60(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 60);
	// stw r11,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r11.u32);
	// lbz r10,64(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 64);
	// stb r10,64(r3)
	PPC_STORE_U8(ctx.r3.u32 + 64, ctx.r10.u8);
	// lwz r9,68(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 68);
	// stw r9,68(r3)
	PPC_STORE_U32(ctx.r3.u32 + 68, ctx.r9.u32);
	// lbz r8,72(r4)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r4.u32 + 72);
	// stb r8,72(r3)
	PPC_STORE_U8(ctx.r3.u32 + 72, ctx.r8.u8);
	// lfs f0,76(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 76);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,76(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 76, temp.u32);
	// lbz r7,80(r4)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r4.u32 + 80);
	// stb r7,80(r3)
	PPC_STORE_U8(ctx.r3.u32 + 80, ctx.r7.u8);
	// lfs f13,84(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,84(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 84, temp.u32);
	// lbz r6,88(r4)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r4.u32 + 88);
	// stb r6,88(r3)
	PPC_STORE_U8(ctx.r3.u32 + 88, ctx.r6.u8);
	// lfs f12,92(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 92);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,92(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 92, temp.u32);
	// lbz r5,96(r4)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r4.u32 + 96);
	// stb r5,96(r3)
	PPC_STORE_U8(ctx.r3.u32 + 96, ctx.r5.u8);
	// lwz r11,100(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 100);
	// stw r11,100(r3)
	PPC_STORE_U32(ctx.r3.u32 + 100, ctx.r11.u32);
	// lbz r10,104(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 104);
	// stb r10,104(r3)
	PPC_STORE_U8(ctx.r3.u32 + 104, ctx.r10.u8);
	// lwz r9,108(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 108);
	// stw r9,108(r3)
	PPC_STORE_U32(ctx.r3.u32 + 108, ctx.r9.u32);
	// lbz r8,112(r4)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r4.u32 + 112);
	// stb r8,112(r3)
	PPC_STORE_U8(ctx.r3.u32 + 112, ctx.r8.u8);
	// lfs f11,116(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 116);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,116(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 116, temp.u32);
	// lbz r7,120(r4)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r4.u32 + 120);
	// stb r7,120(r3)
	PPC_STORE_U8(ctx.r3.u32 + 120, ctx.r7.u8);
	// lfs f10,124(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 124);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,124(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 124, temp.u32);
	// lbz r6,128(r4)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r4.u32 + 128);
	// stb r6,128(r3)
	PPC_STORE_U8(ctx.r3.u32 + 128, ctx.r6.u8);
	// lfs f9,132(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 132);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,132(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 132, temp.u32);
	// lbz r5,136(r4)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r4.u32 + 136);
	// stb r5,136(r3)
	PPC_STORE_U8(ctx.r3.u32 + 136, ctx.r5.u8);
	// lbz r11,137(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 137);
	// stb r11,137(r3)
	PPC_STORE_U8(ctx.r3.u32 + 137, ctx.r11.u8);
	// lbz r10,140(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 140);
	// stb r10,140(r3)
	PPC_STORE_U8(ctx.r3.u32 + 140, ctx.r10.u8);
	// lfs f8,144(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 144);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,144(r3)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r3.u32 + 144, temp.u32);
	// lbz r9,148(r4)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r4.u32 + 148);
	// stb r9,148(r3)
	PPC_STORE_U8(ctx.r3.u32 + 148, ctx.r9.u8);
	// lfs f7,152(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 152);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,152(r3)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r3.u32 + 152, temp.u32);
	// lbz r8,160(r4)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r4.u32 + 160);
	// stb r8,160(r3)
	PPC_STORE_U8(ctx.r3.u32 + 160, ctx.r8.u8);
	// ld r7,168(r4)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r4.u32 + 168);
	// std r7,168(r3)
	PPC_STORE_U64(ctx.r3.u32 + 168, ctx.r7.u64);
	// lbz r6,176(r4)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r4.u32 + 176);
	// stb r6,176(r3)
	PPC_STORE_U8(ctx.r3.u32 + 176, ctx.r6.u8);
	// lbz r5,177(r4)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r4.u32 + 177);
	// stb r5,177(r3)
	PPC_STORE_U8(ctx.r3.u32 + 177, ctx.r5.u8);
	// lbz r11,180(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 180);
	// stb r11,180(r3)
	PPC_STORE_U8(ctx.r3.u32 + 180, ctx.r11.u8);
	// lfs f6,184(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 184);
	ctx.f6.f64 = double(temp.f32);
	// stfs f6,184(r3)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r3.u32 + 184, temp.u32);
	// lbz r10,188(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 188);
	// stb r10,188(r3)
	PPC_STORE_U8(ctx.r3.u32 + 188, ctx.r10.u8);
	// lfs f5,192(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 192);
	ctx.f5.f64 = double(temp.f32);
	// stfs f5,192(r3)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r3.u32 + 192, temp.u32);
	// lbz r9,200(r4)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r4.u32 + 200);
	// stb r9,200(r3)
	PPC_STORE_U8(ctx.r3.u32 + 200, ctx.r9.u8);
	// ld r8,208(r4)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r4.u32 + 208);
	// std r8,208(r3)
	PPC_STORE_U64(ctx.r3.u32 + 208, ctx.r8.u64);
	// lbz r7,216(r4)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r4.u32 + 216);
	// stb r7,216(r3)
	PPC_STORE_U8(ctx.r3.u32 + 216, ctx.r7.u8);
	// lfs f4,220(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 220);
	ctx.f4.f64 = double(temp.f32);
	// stfs f4,220(r3)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r3.u32 + 220, temp.u32);
	// lbz r6,224(r4)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r4.u32 + 224);
	// stb r6,224(r3)
	PPC_STORE_U8(ctx.r3.u32 + 224, ctx.r6.u8);
	// lfs f3,228(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 228);
	ctx.f3.f64 = double(temp.f32);
	// stfs f3,228(r3)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r3.u32 + 228, temp.u32);
	// lbz r5,232(r4)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r4.u32 + 232);
	// stb r5,232(r3)
	PPC_STORE_U8(ctx.r3.u32 + 232, ctx.r5.u8);
	// lfs f2,236(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 236);
	ctx.f2.f64 = double(temp.f32);
	// stfs f2,236(r3)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r3.u32 + 236, temp.u32);
	// lbz r11,240(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 240);
	// stb r11,240(r3)
	PPC_STORE_U8(ctx.r3.u32 + 240, ctx.r11.u8);
	// lfs f1,244(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 244);
	ctx.f1.f64 = double(temp.f32);
	// stfs f1,244(r3)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 244, temp.u32);
	// lbz r10,248(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 248);
	// stb r10,248(r3)
	PPC_STORE_U8(ctx.r3.u32 + 248, ctx.r10.u8);
	// lwz r9,252(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 252);
	// stw r9,252(r3)
	PPC_STORE_U32(ctx.r3.u32 + 252, ctx.r9.u32);
	// lbz r8,256(r4)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r4.u32 + 256);
	// stb r8,256(r3)
	PPC_STORE_U8(ctx.r3.u32 + 256, ctx.r8.u8);
	// lwz r7,260(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 260);
	// stw r7,260(r3)
	PPC_STORE_U32(ctx.r3.u32 + 260, ctx.r7.u32);
	// lbz r6,264(r4)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r4.u32 + 264);
	// stb r6,264(r3)
	PPC_STORE_U8(ctx.r3.u32 + 264, ctx.r6.u8);
	// lfs f0,268(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 268);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,268(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 268, temp.u32);
	// lbz r5,272(r4)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r4.u32 + 272);
	// stb r5,272(r3)
	PPC_STORE_U8(ctx.r3.u32 + 272, ctx.r5.u8);
	// lfs f13,276(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 276);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,276(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 276, temp.u32);
	// lbz r11,280(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 280);
	// stb r11,280(r3)
	PPC_STORE_U8(ctx.r3.u32 + 280, ctx.r11.u8);
	// lfs f12,284(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 284);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,284(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 284, temp.u32);
	// lbz r10,288(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 288);
	// stb r10,288(r3)
	PPC_STORE_U8(ctx.r3.u32 + 288, ctx.r10.u8);
	// lfs f11,292(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 292);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,292(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 292, temp.u32);
	// lbz r9,296(r4)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r4.u32 + 296);
	// stb r9,296(r3)
	PPC_STORE_U8(ctx.r3.u32 + 296, ctx.r9.u8);
	// lfs f10,300(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 300);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,300(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 300, temp.u32);
	// lbz r8,304(r4)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r4.u32 + 304);
	// stb r8,304(r3)
	PPC_STORE_U8(ctx.r3.u32 + 304, ctx.r8.u8);
	// lfs f9,308(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 308);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,308(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 308, temp.u32);
	// lbz r7,312(r4)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r4.u32 + 312);
	// stb r7,312(r3)
	PPC_STORE_U8(ctx.r3.u32 + 312, ctx.r7.u8);
	// lfs f8,316(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 316);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,316(r3)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r3.u32 + 316, temp.u32);
	// lbz r6,320(r4)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r4.u32 + 320);
	// stb r6,320(r3)
	PPC_STORE_U8(ctx.r3.u32 + 320, ctx.r6.u8);
	// lfs f7,324(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 324);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,324(r3)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r3.u32 + 324, temp.u32);
	// lbz r5,328(r4)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r4.u32 + 328);
	// stb r5,328(r3)
	PPC_STORE_U8(ctx.r3.u32 + 328, ctx.r5.u8);
	// lfs f6,332(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 332);
	ctx.f6.f64 = double(temp.f32);
	// stfs f6,332(r3)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r3.u32 + 332, temp.u32);
	// lbz r11,336(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 336);
	// stb r11,336(r3)
	PPC_STORE_U8(ctx.r3.u32 + 336, ctx.r11.u8);
	// lbz r10,337(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 337);
	// stb r10,337(r3)
	PPC_STORE_U8(ctx.r3.u32 + 337, ctx.r10.u8);
	// lbz r9,338(r4)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r4.u32 + 338);
	// stb r9,338(r3)
	PPC_STORE_U8(ctx.r3.u32 + 338, ctx.r9.u8);
	// lbz r8,339(r4)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r4.u32 + 339);
	// stb r8,339(r3)
	PPC_STORE_U8(ctx.r3.u32 + 339, ctx.r8.u8);
	// lbz r7,344(r4)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r4.u32 + 344);
	// stb r7,344(r3)
	PPC_STORE_U8(ctx.r3.u32 + 344, ctx.r7.u8);
	// ld r6,352(r4)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r4.u32 + 352);
	// std r6,352(r3)
	PPC_STORE_U64(ctx.r3.u32 + 352, ctx.r6.u64);
	// lbz r5,360(r4)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r4.u32 + 360);
	// stb r5,360(r3)
	PPC_STORE_U8(ctx.r3.u32 + 360, ctx.r5.u8);
	// lwz r11,364(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 364);
	// stw r11,364(r3)
	PPC_STORE_U32(ctx.r3.u32 + 364, ctx.r11.u32);
	// lbz r10,368(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 368);
	// stb r10,368(r3)
	PPC_STORE_U8(ctx.r3.u32 + 368, ctx.r10.u8);
	// lwz r9,372(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 372);
	// stw r9,372(r3)
	PPC_STORE_U32(ctx.r3.u32 + 372, ctx.r9.u32);
	// lbz r8,376(r4)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r4.u32 + 376);
	// stb r8,376(r3)
	PPC_STORE_U8(ctx.r3.u32 + 376, ctx.r8.u8);
	// lwz r7,380(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 380);
	// stw r7,380(r3)
	PPC_STORE_U32(ctx.r3.u32 + 380, ctx.r7.u32);
	// lbz r6,384(r4)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r4.u32 + 384);
	// stb r6,384(r3)
	PPC_STORE_U8(ctx.r3.u32 + 384, ctx.r6.u8);
	// lwz r5,388(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 388);
	// stw r5,388(r3)
	PPC_STORE_U32(ctx.r3.u32 + 388, ctx.r5.u32);
	// lbz r11,392(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 392);
	// stb r11,392(r3)
	PPC_STORE_U8(ctx.r3.u32 + 392, ctx.r11.u8);
	// lfd f5,400(r4)
	ctx.f5.u64 = PPC_LOAD_U64(ctx.r4.u32 + 400);
	// stfd f5,400(r3)
	PPC_STORE_U64(ctx.r3.u32 + 400, ctx.f5.u64);
	// lbz r10,408(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 408);
	// stb r10,408(r3)
	PPC_STORE_U8(ctx.r3.u32 + 408, ctx.r10.u8);
	// lfd f4,416(r4)
	ctx.f4.u64 = PPC_LOAD_U64(ctx.r4.u32 + 416);
	// stfd f4,416(r3)
	PPC_STORE_U64(ctx.r3.u32 + 416, ctx.f4.u64);
	// lbz r9,424(r4)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r4.u32 + 424);
	// stb r9,424(r3)
	PPC_STORE_U8(ctx.r3.u32 + 424, ctx.r9.u8);
	// lwz r8,428(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 428);
	// stw r8,428(r3)
	PPC_STORE_U32(ctx.r3.u32 + 428, ctx.r8.u32);
	// lbz r7,432(r4)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r4.u32 + 432);
	// stb r7,432(r3)
	PPC_STORE_U8(ctx.r3.u32 + 432, ctx.r7.u8);
	// lbz r6,433(r4)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r4.u32 + 433);
	// stb r6,433(r3)
	PPC_STORE_U8(ctx.r3.u32 + 433, ctx.r6.u8);
	// lbz r5,436(r4)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r4.u32 + 436);
	// stb r5,436(r3)
	PPC_STORE_U8(ctx.r3.u32 + 436, ctx.r5.u8);
	// lwz r11,440(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 440);
	// stw r11,440(r3)
	PPC_STORE_U32(ctx.r3.u32 + 440, ctx.r11.u32);
	// lbz r10,444(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 444);
	// stb r10,444(r3)
	PPC_STORE_U8(ctx.r3.u32 + 444, ctx.r10.u8);
	// lwz r9,448(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 448);
	// stw r9,448(r3)
	PPC_STORE_U32(ctx.r3.u32 + 448, ctx.r9.u32);
	// lbz r8,452(r4)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r4.u32 + 452);
	// stb r8,452(r3)
	PPC_STORE_U8(ctx.r3.u32 + 452, ctx.r8.u8);
	// lbz r7,453(r4)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r4.u32 + 453);
	// stb r7,453(r3)
	PPC_STORE_U8(ctx.r3.u32 + 453, ctx.r7.u8);
	// lbz r6,456(r4)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r4.u32 + 456);
	// stb r6,456(r3)
	PPC_STORE_U8(ctx.r3.u32 + 456, ctx.r6.u8);
	// lwz r5,460(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 460);
	// stw r5,460(r3)
	PPC_STORE_U32(ctx.r3.u32 + 460, ctx.r5.u32);
	// lbz r11,464(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 464);
	// stb r11,464(r3)
	PPC_STORE_U8(ctx.r3.u32 + 464, ctx.r11.u8);
	// lwz r10,468(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 468);
	// stw r10,468(r3)
	PPC_STORE_U32(ctx.r3.u32 + 468, ctx.r10.u32);
	// lbz r9,472(r4)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r4.u32 + 472);
	// stb r9,472(r3)
	PPC_STORE_U8(ctx.r3.u32 + 472, ctx.r9.u8);
	// lwz r8,476(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 476);
	// stw r8,476(r3)
	PPC_STORE_U32(ctx.r3.u32 + 476, ctx.r8.u32);
	// lbz r7,480(r4)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r4.u32 + 480);
	// stb r7,480(r3)
	PPC_STORE_U8(ctx.r3.u32 + 480, ctx.r7.u8);
	// lbz r6,481(r4)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r4.u32 + 481);
	// stb r6,481(r3)
	PPC_STORE_U8(ctx.r3.u32 + 481, ctx.r6.u8);
	// lbz r5,484(r4)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r4.u32 + 484);
	// stb r5,484(r3)
	PPC_STORE_U8(ctx.r3.u32 + 484, ctx.r5.u8);
	// lwz r11,488(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 488);
	// stw r11,488(r3)
	PPC_STORE_U32(ctx.r3.u32 + 488, ctx.r11.u32);
	// lbz r10,492(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 492);
	// stb r10,492(r3)
	PPC_STORE_U8(ctx.r3.u32 + 492, ctx.r10.u8);
	// lwz r9,496(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 496);
	// stw r9,496(r3)
	PPC_STORE_U32(ctx.r3.u32 + 496, ctx.r9.u32);
	// lbz r8,500(r4)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r4.u32 + 500);
	// stb r8,500(r3)
	PPC_STORE_U8(ctx.r3.u32 + 500, ctx.r8.u8);
	// lwz r7,504(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 504);
	// stw r7,504(r3)
	PPC_STORE_U32(ctx.r3.u32 + 504, ctx.r7.u32);
	// lbz r6,508(r4)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r4.u32 + 508);
	// stb r6,508(r3)
	PPC_STORE_U8(ctx.r3.u32 + 508, ctx.r6.u8);
	// lbz r5,509(r4)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r4.u32 + 509);
	// stb r5,509(r3)
	PPC_STORE_U8(ctx.r3.u32 + 509, ctx.r5.u8);
	// lbz r11,510(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 510);
	// stb r11,510(r3)
	PPC_STORE_U8(ctx.r3.u32 + 510, ctx.r11.u8);
	// lbz r10,511(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 511);
	// stb r10,511(r3)
	PPC_STORE_U8(ctx.r3.u32 + 511, ctx.r10.u8);
	// lbz r9,512(r4)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r4.u32 + 512);
	// stb r9,512(r3)
	PPC_STORE_U8(ctx.r3.u32 + 512, ctx.r9.u8);
	// lbz r8,513(r4)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r4.u32 + 513);
	// stb r8,513(r3)
	PPC_STORE_U8(ctx.r3.u32 + 513, ctx.r8.u8);
	// lbz r7,520(r4)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r4.u32 + 520);
	// stb r7,520(r3)
	PPC_STORE_U8(ctx.r3.u32 + 520, ctx.r7.u8);
	// ld r6,528(r4)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r4.u32 + 528);
	// std r6,528(r3)
	PPC_STORE_U64(ctx.r3.u32 + 528, ctx.r6.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E9E49C"))) PPC_WEAK_FUNC(sub_82E9E49C);
PPC_FUNC_IMPL(__imp__sub_82E9E49C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E9E4A0"))) PPC_WEAK_FUNC(sub_82E9E4A0);
PPC_FUNC_IMPL(__imp__sub_82E9E4A0) {
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
	// bl 0x83878e00
	ctx.lr = 0x82E9E4C0;
	sub_83878E00(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82e9e4d8
	if (cr6.eq) goto loc_82E9E4D8;
	// bl 0x82416268
	ctx.lr = 0x82E9E4D4;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82E9E4D8:
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

__attribute__((alias("__imp__sub_82E9E4F0"))) PPC_WEAK_FUNC(sub_82E9E4F0);
PPC_FUNC_IMPL(__imp__sub_82E9E4F0) {
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
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// addi r30,r3,8
	ctx.r30.s64 = ctx.r3.s64 + 8;
	// addi r10,r11,12496
	ctx.r10.s64 = ctx.r11.s64 + 12496;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x825359d8
	ctx.lr = 0x82E9E524;
	sub_825359D8(ctx, base);
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stb r9,24(r31)
	PPC_STORE_U8(ctx.r31.u32 + 24, ctx.r9.u8);
	// bl 0x82535130
	ctx.lr = 0x82E9E534;
	sub_82535130(ctx, base);
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

__attribute__((alias("__imp__sub_82E9E550"))) PPC_WEAK_FUNC(sub_82E9E550);
PPC_FUNC_IMPL(__imp__sub_82E9E550) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// lwz r10,8(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// lwz r9,12(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// stw r9,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r9.u32);
	// lfs f0,16(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,16(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// lfs f13,20(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,20(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// lfs f12,24(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,24(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// ld r8,32(r4)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r4.u32 + 32);
	// std r8,32(r3)
	PPC_STORE_U64(ctx.r3.u32 + 32, ctx.r8.u64);
	// lfs f11,40(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 40);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,40(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 40, temp.u32);
	// lfs f10,44(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 44);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,44(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 44, temp.u32);
	// lbz r7,48(r4)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r4.u32 + 48);
	// stb r7,48(r3)
	PPC_STORE_U8(ctx.r3.u32 + 48, ctx.r7.u8);
	// lwz r6,52(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 52);
	// stw r6,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r6.u32);
	// lfs f9,56(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 56);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,56(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 56, temp.u32);
	// lfs f8,60(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 60);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,60(r3)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r3.u32 + 60, temp.u32);
	// lfs f7,64(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 64);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,64(r3)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r3.u32 + 64, temp.u32);
	// lwz r5,68(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 68);
	// stw r5,68(r3)
	PPC_STORE_U32(ctx.r3.u32 + 68, ctx.r5.u32);
	// lwz r11,72(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 72);
	// stw r11,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r11.u32);
	// lwz r10,76(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 76);
	// stw r10,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, ctx.r10.u32);
	// ld r9,80(r4)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r4.u32 + 80);
	// std r9,80(r3)
	PPC_STORE_U64(ctx.r3.u32 + 80, ctx.r9.u64);
	// lwz r8,88(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 88);
	// stw r8,88(r3)
	PPC_STORE_U32(ctx.r3.u32 + 88, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E9E5EC"))) PPC_WEAK_FUNC(sub_82E9E5EC);
PPC_FUNC_IMPL(__imp__sub_82E9E5EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E9E5F0"))) PPC_WEAK_FUNC(sub_82E9E5F0);
PPC_FUNC_IMPL(__imp__sub_82E9E5F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r9,r11,21716
	ctx.r9.s64 = ctx.r11.s64 + 21716;
	// addi r8,r10,21716
	ctx.r8.s64 = ctx.r10.s64 + 21716;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// lwz r7,4(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r7,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r7.u32);
	// lwz r6,8(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// stw r6,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r6.u32);
	// lwz r5,12(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// stw r5,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r5.u32);
	// lfs f0,16(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,16(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// lfs f13,20(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,20(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// lfs f12,24(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	ctx.f12.f64 = double(temp.f32);
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// stfs f12,24(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// ld r11,32(r4)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r4.u32 + 32);
	// std r11,32(r3)
	PPC_STORE_U64(ctx.r3.u32 + 32, ctx.r11.u64);
	// lfs f11,40(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 40);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,40(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 40, temp.u32);
	// lfs f10,44(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 44);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,44(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 44, temp.u32);
	// lbz r10,48(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 48);
	// stb r10,48(r3)
	PPC_STORE_U8(ctx.r3.u32 + 48, ctx.r10.u8);
	// lwz r9,52(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 52);
	// stw r9,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r9.u32);
	// lfs f9,56(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 56);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,56(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 56, temp.u32);
	// lfs f8,60(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 60);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,60(r3)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r3.u32 + 60, temp.u32);
	// lfs f7,64(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 64);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,64(r3)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r3.u32 + 64, temp.u32);
	// lwz r8,68(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 68);
	// stw r8,68(r3)
	PPC_STORE_U32(ctx.r3.u32 + 68, ctx.r8.u32);
	// lwz r7,72(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 72);
	// stw r7,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r7.u32);
	// lwz r6,76(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 76);
	// stw r6,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, ctx.r6.u32);
	// ld r5,80(r4)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r4.u32 + 80);
	// std r5,80(r3)
	PPC_STORE_U64(ctx.r3.u32 + 80, ctx.r5.u64);
	// lwz r4,88(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 88);
	// stw r4,88(r3)
	PPC_STORE_U32(ctx.r3.u32 + 88, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E9E6A4"))) PPC_WEAK_FUNC(sub_82E9E6A4);
PPC_FUNC_IMPL(__imp__sub_82E9E6A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E9E6A8"))) PPC_WEAK_FUNC(sub_82E9E6A8);
PPC_FUNC_IMPL(__imp__sub_82E9E6A8) {
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
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82ee7250
	ctx.lr = 0x82E9E6D0;
	sub_82EE7250(ctx, base);
	// lis r11,7
	ctx.r11.s64 = 458752;
	// li r10,0
	ctx.r10.s64 = 0;
	// ori r9,r11,41248
	ctx.r9.u64 = ctx.r11.u64 | 41248;
	// stb r10,164(r1)
	PPC_STORE_U8(ctx.r1.u32 + 164, ctx.r10.u8);
	// cmplwi cr6,r31,1
	cr6.compare<uint32_t>(ctx.r31.u32, 1, xer);
	// std r9,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r9.u64);
	// blt cr6,0x82e9e700
	if (cr6.lt) goto loc_82E9E700;
	// beq cr6,0x82e9e700
	if (cr6.eq) goto loc_82E9E700;
	// cmplwi cr6,r31,3
	cr6.compare<uint32_t>(ctx.r31.u32, 3, xer);
	// blt cr6,0x82e9e700
	if (cr6.lt) goto loc_82E9E700;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82e9e710
	goto loc_82E9E710;
loc_82E9E700:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82e9dc48
	ctx.lr = 0x82E9E70C;
	sub_82E9DC48(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
loc_82E9E710:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
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

__attribute__((alias("__imp__sub_82E9E728"))) PPC_WEAK_FUNC(sub_82E9E728);
PPC_FUNC_IMPL(__imp__sub_82E9E728) {
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
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82ee88e0
	ctx.lr = 0x82E9E750;
	sub_82EE88E0(ctx, base);
	// lis r11,7
	ctx.r11.s64 = 458752;
	// li r10,0
	ctx.r10.s64 = 0;
	// ori r9,r11,41248
	ctx.r9.u64 = ctx.r11.u64 | 41248;
	// stb r10,164(r1)
	PPC_STORE_U8(ctx.r1.u32 + 164, ctx.r10.u8);
	// cmplwi cr6,r31,1
	cr6.compare<uint32_t>(ctx.r31.u32, 1, xer);
	// std r9,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r9.u64);
	// blt cr6,0x82e9e780
	if (cr6.lt) goto loc_82E9E780;
	// beq cr6,0x82e9e780
	if (cr6.eq) goto loc_82E9E780;
	// cmplwi cr6,r31,3
	cr6.compare<uint32_t>(ctx.r31.u32, 3, xer);
	// blt cr6,0x82e9e780
	if (cr6.lt) goto loc_82E9E780;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82e9e790
	goto loc_82E9E790;
loc_82E9E780:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82e9de20
	ctx.lr = 0x82E9E78C;
	sub_82E9DE20(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
loc_82E9E790:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
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

__attribute__((alias("__imp__sub_82E9E7A8"))) PPC_WEAK_FUNC(sub_82E9E7A8);
PPC_FUNC_IMPL(__imp__sub_82E9E7A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82E9E7B0;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// lfd f0,9000(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + 9000);
	// mr r31,r7
	ctx.r31.u64 = ctx.r7.u64;
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// bl 0x82e8c578
	ctx.lr = 0x82E9E7D8;
	sub_82E8C578(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82e9e800
	if (!cr6.eq) goto loc_82E9E800;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x82e9e7f4
	if (cr6.eq) goto loc_82E9E7F4;
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r11.u8);
loc_82E9E7F4:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82E9E800:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x82e9e810
	if (cr6.eq) goto loc_82E9E810;
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r11.u8);
loc_82E9E810:
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// lfd f13,-18160(r11)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r11.u32 + -18160);
	// fcmpu cr6,f0,f13
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x82e9e840
	if (!cr6.lt) goto loc_82E9E840;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mtctr r29
	ctr.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f1,-4664(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -4664);
	ctx.f1.f64 = double(temp.f32);
	// bctrl 
	ctx.lr = 0x82E9E838;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82E9E840:
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// lfd f13,-18168(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r11.u32 + -18168);
	// fcmpu cr6,f0,f13
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x82e9e86c
	if (!cr6.gt) goto loc_82E9E86C;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mtctr r29
	ctr.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f1,-4660(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -4660);
	ctx.f1.f64 = double(temp.f32);
	// bctrl 
	ctx.lr = 0x82E9E864;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82E9E86C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// frsp f1,f0
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f0.f64));
	// mtctr r29
	ctr.u64 = ctx.r29.u64;
	// bctrl 
	ctx.lr = 0x82E9E87C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E9E884"))) PPC_WEAK_FUNC(sub_82E9E884);
PPC_FUNC_IMPL(__imp__sub_82E9E884) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E9E888"))) PPC_WEAK_FUNC(sub_82E9E888);
PPC_FUNC_IMPL(__imp__sub_82E9E888) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82E9E890;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// mr r31,r7
	ctx.r31.u64 = ctx.r7.u64;
	// bl 0x82e8c258
	ctx.lr = 0x82E9E8B4;
	sub_82E8C258(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82e9e8dc
	if (!cr6.eq) goto loc_82E9E8DC;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x82e9e8d0
	if (cr6.eq) goto loc_82E9E8D0;
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r11.u8);
loc_82E9E8D0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82E9E8DC:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x82e9e8e8
	if (cr6.eq) goto loc_82E9E8E8;
	// stb r30,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r30.u8);
loc_82E9E8E8:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r4,255
	ctx.r4.s64 = 255;
	// cmplwi cr6,r11,255
	cr6.compare<uint32_t>(ctx.r11.u32, 255, xer);
	// bgt cr6,0x82e9e8fc
	if (cr6.gt) goto loc_82E9E8FC;
	// clrlwi r4,r11,24
	ctx.r4.u64 = ctx.r11.u32 & 0xFF;
loc_82E9E8FC:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mtctr r28
	ctr.u64 = ctx.r28.u64;
	// bctrl 
	ctx.lr = 0x82E9E908;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E9E910"))) PPC_WEAK_FUNC(sub_82E9E910);
PPC_FUNC_IMPL(__imp__sub_82E9E910) {
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
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82eea598
	ctx.lr = 0x82E9E938;
	sub_82EEA598(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// cmplwi cr6,r31,1
	cr6.compare<uint32_t>(ctx.r31.u32, 1, xer);
	// lfs f0,-3400(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -3400);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,120(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// blt cr6,0x82e9e960
	if (cr6.lt) goto loc_82E9E960;
	// beq cr6,0x82e9e960
	if (cr6.eq) goto loc_82E9E960;
	// cmplwi cr6,r31,3
	cr6.compare<uint32_t>(ctx.r31.u32, 3, xer);
	// blt cr6,0x82e9e960
	if (cr6.lt) goto loc_82E9E960;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82e9e970
	goto loc_82E9E970;
loc_82E9E960:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82e9e550
	ctx.lr = 0x82E9E96C;
	sub_82E9E550(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
loc_82E9E970:
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

__attribute__((alias("__imp__sub_82E9E988"))) PPC_WEAK_FUNC(sub_82E9E988);
PPC_FUNC_IMPL(__imp__sub_82E9E988) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lbz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r11.u8);
	// lbz r10,1(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 1);
	// stb r10,1(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1, ctx.r10.u8);
	// lbz r9,4(r4)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r4.u32 + 4);
	// stb r9,4(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4, ctx.r9.u8);
	// lfs f0,8(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// lbz r8,16(r4)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r4.u32 + 16);
	// stb r8,16(r3)
	PPC_STORE_U8(ctx.r3.u32 + 16, ctx.r8.u8);
	// ld r7,24(r4)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r4.u32 + 24);
	// std r7,24(r3)
	PPC_STORE_U64(ctx.r3.u32 + 24, ctx.r7.u64);
	// lbz r6,32(r4)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r4.u32 + 32);
	// stb r6,32(r3)
	PPC_STORE_U8(ctx.r3.u32 + 32, ctx.r6.u8);
	// lbz r5,33(r4)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r4.u32 + 33);
	// stb r5,33(r3)
	PPC_STORE_U8(ctx.r3.u32 + 33, ctx.r5.u8);
	// lbz r11,34(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 34);
	// stb r11,34(r3)
	PPC_STORE_U8(ctx.r3.u32 + 34, ctx.r11.u8);
	// lbz r10,35(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 35);
	// stb r10,35(r3)
	PPC_STORE_U8(ctx.r3.u32 + 35, ctx.r10.u8);
	// lbz r9,36(r4)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r4.u32 + 36);
	// stb r9,36(r3)
	PPC_STORE_U8(ctx.r3.u32 + 36, ctx.r9.u8);
	// lwz r8,40(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 40);
	// stw r8,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r8.u32);
	// lbz r7,44(r4)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r4.u32 + 44);
	// stb r7,44(r3)
	PPC_STORE_U8(ctx.r3.u32 + 44, ctx.r7.u8);
	// lbz r6,45(r4)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r4.u32 + 45);
	// stb r6,45(r3)
	PPC_STORE_U8(ctx.r3.u32 + 45, ctx.r6.u8);
	// lbz r5,46(r4)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r4.u32 + 46);
	// stb r5,46(r3)
	PPC_STORE_U8(ctx.r3.u32 + 46, ctx.r5.u8);
	// lbz r11,47(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 47);
	// stb r11,47(r3)
	PPC_STORE_U8(ctx.r3.u32 + 47, ctx.r11.u8);
	// lbz r10,48(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 48);
	// stb r10,48(r3)
	PPC_STORE_U8(ctx.r3.u32 + 48, ctx.r10.u8);
	// lwz r9,52(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 52);
	// stw r9,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r9.u32);
	// lbz r8,56(r4)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r4.u32 + 56);
	// stb r8,56(r3)
	PPC_STORE_U8(ctx.r3.u32 + 56, ctx.r8.u8);
	// lbz r7,57(r4)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r4.u32 + 57);
	// stb r7,57(r3)
	PPC_STORE_U8(ctx.r3.u32 + 57, ctx.r7.u8);
	// lbz r6,60(r4)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r4.u32 + 60);
	// stb r6,60(r3)
	PPC_STORE_U8(ctx.r3.u32 + 60, ctx.r6.u8);
	// lwz r5,64(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 64);
	// stw r5,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, ctx.r5.u32);
	// lbz r11,68(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 68);
	// stb r11,68(r3)
	PPC_STORE_U8(ctx.r3.u32 + 68, ctx.r11.u8);
	// lwz r10,72(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 72);
	// stw r10,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r10.u32);
	// lbz r9,76(r4)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r4.u32 + 76);
	// stb r9,76(r3)
	PPC_STORE_U8(ctx.r3.u32 + 76, ctx.r9.u8);
	// lbz r8,77(r4)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r4.u32 + 77);
	// stb r8,77(r3)
	PPC_STORE_U8(ctx.r3.u32 + 77, ctx.r8.u8);
	// lbz r7,80(r4)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r4.u32 + 80);
	// stb r7,80(r3)
	PPC_STORE_U8(ctx.r3.u32 + 80, ctx.r7.u8);
	// lfs f13,84(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,84(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 84, temp.u32);
	// lbz r6,88(r4)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r4.u32 + 88);
	// stb r6,88(r3)
	PPC_STORE_U8(ctx.r3.u32 + 88, ctx.r6.u8);
	// lwz r5,92(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 92);
	// stw r5,92(r3)
	PPC_STORE_U32(ctx.r3.u32 + 92, ctx.r5.u32);
	// lbz r11,96(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 96);
	// stb r11,96(r3)
	PPC_STORE_U8(ctx.r3.u32 + 96, ctx.r11.u8);
	// lfs f12,100(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 100);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,100(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 100, temp.u32);
	// lbz r10,104(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 104);
	// stb r10,104(r3)
	PPC_STORE_U8(ctx.r3.u32 + 104, ctx.r10.u8);
	// lwz r9,108(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 108);
	// stw r9,108(r3)
	PPC_STORE_U32(ctx.r3.u32 + 108, ctx.r9.u32);
	// lbz r8,112(r4)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r4.u32 + 112);
	// stb r8,112(r3)
	PPC_STORE_U8(ctx.r3.u32 + 112, ctx.r8.u8);
	// lwz r7,116(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 116);
	// stw r7,116(r3)
	PPC_STORE_U32(ctx.r3.u32 + 116, ctx.r7.u32);
	// lbz r6,120(r4)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r4.u32 + 120);
	// stb r6,120(r3)
	PPC_STORE_U8(ctx.r3.u32 + 120, ctx.r6.u8);
	// lfs f11,124(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 124);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,124(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 124, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E9EABC"))) PPC_WEAK_FUNC(sub_82E9EABC);
PPC_FUNC_IMPL(__imp__sub_82E9EABC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E9EAC0"))) PPC_WEAK_FUNC(sub_82E9EAC0);
PPC_FUNC_IMPL(__imp__sub_82E9EAC0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82E9EAC8;
	__savegprlr_27(ctx, base);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// addi r31,r11,12496
	ctx.r31.s64 = ctx.r11.s64 + 12496;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r31,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r31.u32);
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// bl 0x82536838
	ctx.lr = 0x82E9EAEC;
	sub_82536838(ctx, base);
	// lbz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 24);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// li r29,0
	ctx.r29.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// mr r28,r29
	ctx.r28.u64 = ctx.r29.u64;
	// stb r11,152(r1)
	PPC_STORE_U8(ctx.r1.u32 + 152, ctx.r11.u8);
	// bl 0x825359d8
	ctx.lr = 0x82E9EB0C;
	sub_825359D8(ctx, base);
	// stb r29,104(r1)
	PPC_STORE_U8(ctx.r1.u32 + 104, ctx.r29.u8);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82535130
	ctx.lr = 0x82E9EB18;
	sub_82535130(ctx, base);
	// stb r29,104(r1)
	PPC_STORE_U8(ctx.r1.u32 + 104, ctx.r29.u8);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82535130
	ctx.lr = 0x82E9EB24;
	sub_82535130(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x825369e8
	ctx.lr = 0x82E9EB30;
	sub_825369E8(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// stb r10,104(r1)
	PPC_STORE_U8(ctx.r1.u32 + 104, ctx.r10.u8);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x825359d8
	ctx.lr = 0x82E9EB44;
	sub_825359D8(ctx, base);
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r29,r11,-30348
	ctx.r29.s64 = ctx.r11.s64 + -30348;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x82e8c3a8
	ctx.lr = 0x82E9EB5C;
	sub_82E8C3A8(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82e9eb8c
	if (cr6.eq) goto loc_82E9EB8C;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82e9e058
	ctx.lr = 0x82E9EB74;
	sub_82E9E058(ctx, base);
	// lbz r10,184(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 184);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82e9ebb8
	if (!cr6.eq) goto loc_82E9EBB8;
loc_82E9EB80:
	// stw r31,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r31.u32);
	// addi r3,r1,168
	ctx.r3.s64 = ctx.r1.s64 + 168;
	// bl 0x82535aa0
	ctx.lr = 0x82E9EB8C;
	sub_82535AA0(ctx, base);
loc_82E9EB8C:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82535aa0
	ctx.lr = 0x82E9EB94;
	sub_82535AA0(ctx, base);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82535aa0
	ctx.lr = 0x82E9EBA0;
	sub_82535AA0(ctx, base);
	// stw r31,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r31.u32);
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// bl 0x82535aa0
	ctx.lr = 0x82E9EBAC;
	sub_82535AA0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_82E9EBB8:
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x825359d8
	ctx.lr = 0x82E9EBC4;
	sub_825359D8(ctx, base);
	// addi r5,r29,12068
	ctx.r5.s64 = ctx.r29.s64 + 12068;
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82e8c3a8
	ctx.lr = 0x82E9EBD4;
	sub_82E8C3A8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82e9ec20
	if (cr6.eq) goto loc_82E9EC20;
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82e9e058
	ctx.lr = 0x82E9EBEC;
	sub_82E9E058(ctx, base);
	// lbz r10,232(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 232);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82e9ec14
	if (cr6.eq) goto loc_82E9EC14;
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82e9d948
	ctx.lr = 0x82E9EC04;
	sub_82E9D948(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82e9ec14
	if (cr6.eq) goto loc_82E9EC14;
	// li r28,1
	ctx.r28.s64 = 1;
loc_82E9EC14:
	// stw r31,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r31.u32);
	// addi r3,r1,216
	ctx.r3.s64 = ctx.r1.s64 + 216;
	// bl 0x82535aa0
	ctx.lr = 0x82E9EC20;
	sub_82535AA0(ctx, base);
loc_82E9EC20:
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82535aa0
	ctx.lr = 0x82E9EC28;
	sub_82535AA0(ctx, base);
	// clrlwi r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82e9eb80
	if (cr6.eq) goto loc_82E9EB80;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82e9e008
	ctx.lr = 0x82E9EC40;
	sub_82E9E008(ctx, base);
	// stw r31,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r31.u32);
	// addi r3,r1,168
	ctx.r3.s64 = ctx.r1.s64 + 168;
	// bl 0x82535aa0
	ctx.lr = 0x82E9EC4C;
	sub_82535AA0(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82535aa0
	ctx.lr = 0x82E9EC54;
	sub_82535AA0(ctx, base);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82535aa0
	ctx.lr = 0x82E9EC60;
	sub_82535AA0(ctx, base);
	// stw r31,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r31.u32);
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// bl 0x82535aa0
	ctx.lr = 0x82E9EC6C;
	sub_82535AA0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E9EC78"))) PPC_WEAK_FUNC(sub_82E9EC78);
PPC_FUNC_IMPL(__imp__sub_82E9EC78) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82E9EC80;
	__savegprlr_27(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// bl 0x82e6e978
	ctx.lr = 0x82E9EC98;
	sub_82E6E978(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82e9ed60
	if (cr6.eq) goto loc_82E9ED60;
	// lwz r31,24(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// li r4,0
	ctx.r4.s64 = 0;
	// stb r28,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r28.u8);
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x825359d8
	ctx.lr = 0x82E9ECB4;
	sub_825359D8(ctx, base);
	// stb r28,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r28.u8);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x825359d8
	ctx.lr = 0x82E9ECC4;
	sub_825359D8(ctx, base);
	// cmplwi cr6,r30,1
	cr6.compare<uint32_t>(ctx.r30.u32, 1, xer);
	// blt cr6,0x82e9ed1c
	if (cr6.lt) goto loc_82E9ED1C;
	// bne cr6,0x82e9ed50
	if (!cr6.eq) goto loc_82E9ED50;
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// addi r30,r11,-30564
	ctx.r30.s64 = ctx.r11.s64 + -30564;
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// addi r5,r30,-120
	ctx.r5.s64 = ctx.r30.s64 + -120;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e8c3a8
	ctx.lr = 0x82E9ECEC;
	sub_82E8C3A8(ctx, base);
	// stb r3,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r3.u8);
	// cmplwi cr6,r29,1
	cr6.compare<uint32_t>(ctx.r29.u32, 1, xer);
	// blt cr6,0x82e9ed14
	if (cr6.lt) goto loc_82E9ED14;
	// beq cr6,0x82e9ed0c
	if (cr6.eq) goto loc_82E9ED0C;
	// cmplwi cr6,r29,3
	cr6.compare<uint32_t>(ctx.r29.u32, 3, xer);
	// bge cr6,0x82e9ed50
	if (!cr6.lt) goto loc_82E9ED50;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// b 0x82e9ed80
	goto loc_82E9ED80;
loc_82E9ED0C:
	// addi r5,r30,-52
	ctx.r5.s64 = ctx.r30.s64 + -52;
	// b 0x82e9ed80
	goto loc_82E9ED80;
loc_82E9ED14:
	// addi r5,r30,-92
	ctx.r5.s64 = ctx.r30.s64 + -92;
	// b 0x82e9ed80
	goto loc_82E9ED80;
loc_82E9ED1C:
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// addi r30,r11,-30564
	ctx.r30.s64 = ctx.r11.s64 + -30564;
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// addi r5,r30,-128
	ctx.r5.s64 = ctx.r30.s64 + -128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e8c3a8
	ctx.lr = 0x82E9ED38;
	sub_82E8C3A8(ctx, base);
	// stb r3,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r3.u8);
	// cmplwi cr6,r29,1
	cr6.compare<uint32_t>(ctx.r29.u32, 1, xer);
	// blt cr6,0x82e9ed7c
	if (cr6.lt) goto loc_82E9ED7C;
	// beq cr6,0x82e9ed74
	if (cr6.eq) goto loc_82E9ED74;
	// cmplwi cr6,r29,3
	cr6.compare<uint32_t>(ctx.r29.u32, 3, xer);
	// blt cr6,0x82e9ed6c
	if (cr6.lt) goto loc_82E9ED6C;
loc_82E9ED50:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82535aa0
	ctx.lr = 0x82E9ED58;
	sub_82535AA0(ctx, base);
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x82535aa0
	ctx.lr = 0x82E9ED60;
	sub_82535AA0(ctx, base);
loc_82E9ED60:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_82E9ED6C:
	// addi r5,r30,-32
	ctx.r5.s64 = ctx.r30.s64 + -32;
	// b 0x82e9ed80
	goto loc_82E9ED80;
loc_82E9ED74:
	// addi r5,r30,-72
	ctx.r5.s64 = ctx.r30.s64 + -72;
	// b 0x82e9ed80
	goto loc_82E9ED80;
loc_82E9ED7C:
	// addi r5,r30,-112
	ctx.r5.s64 = ctx.r30.s64 + -112;
loc_82E9ED80:
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e8c3a8
	ctx.lr = 0x82E9ED8C;
	sub_82E8C3A8(ctx, base);
	// lbz r10,112(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 112);
	// stb r3,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r3.u8);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82e9edac
	if (cr6.eq) goto loc_82E9EDAC;
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82e9eac0
	ctx.lr = 0x82E9EDA8;
	sub_82E9EAC0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
loc_82E9EDAC:
	// lbz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82e9edd0
	if (cr6.eq) goto loc_82E9EDD0;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82e9eac0
	ctx.lr = 0x82E9EDC4;
	sub_82E9EAC0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// clrlwi r10,r28,24
	ctx.r10.u64 = ctx.r28.u32 & 0xFF;
	// or r28,r11,r10
	ctx.r28.u64 = ctx.r11.u64 | ctx.r10.u64;
loc_82E9EDD0:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82535aa0
	ctx.lr = 0x82E9EDD8;
	sub_82535AA0(ctx, base);
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x82535aa0
	ctx.lr = 0x82E9EDE0;
	sub_82535AA0(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E9EDEC"))) PPC_WEAK_FUNC(sub_82E9EDEC);
PPC_FUNC_IMPL(__imp__sub_82E9EDEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E9EDF0"))) PPC_WEAK_FUNC(sub_82E9EDF0);
PPC_FUNC_IMPL(__imp__sub_82E9EDF0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82E9EDF8;
	__savegprlr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r31,r11,12496
	ctx.r31.s64 = ctx.r11.s64 + 12496;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// bl 0x825359d8
	ctx.lr = 0x82E9EE20;
	sub_825359D8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stb r11,104(r1)
	PPC_STORE_U8(ctx.r1.u32 + 104, ctx.r11.u8);
	// bl 0x82535130
	ctx.lr = 0x82E9EE30;
	sub_82535130(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e9ec78
	ctx.lr = 0x82E9EE40;
	sub_82E9EC78(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82e9ee64
	if (!cr6.eq) goto loc_82E9EE64;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82535aa0
	ctx.lr = 0x82E9EE58;
	sub_82535AA0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82E9EE64:
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r30,8
	ctx.r3.s64 = ctx.r30.s64 + 8;
	// bl 0x825369e8
	ctx.lr = 0x82E9EE70;
	sub_825369E8(ctx, base);
	// lbz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 104);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stb r11,24(r30)
	PPC_STORE_U8(ctx.r30.u32 + 24, ctx.r11.u8);
	// bl 0x82535aa0
	ctx.lr = 0x82E9EE84;
	sub_82535AA0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E9EE90"))) PPC_WEAK_FUNC(sub_82E9EE90);
PPC_FUNC_IMPL(__imp__sub_82E9EE90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r10,-32232
	ctx.r10.s64 = -2112356352;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,32076
	ctx.r9.s64 = ctx.r10.s64 + 32076;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stb r11,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, ctx.r11.u8);
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// stb r11,24(r3)
	PPC_STORE_U8(ctx.r3.u32 + 24, ctx.r11.u8);
	// std r11,32(r3)
	PPC_STORE_U64(ctx.r3.u32 + 32, ctx.r11.u64);
	// lfs f0,9008(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// stb r11,40(r3)
	PPC_STORE_U8(ctx.r3.u32 + 40, ctx.r11.u8);
	// std r11,48(r3)
	PPC_STORE_U64(ctx.r3.u32 + 48, ctx.r11.u64);
	// stb r11,56(r3)
	PPC_STORE_U8(ctx.r3.u32 + 56, ctx.r11.u8);
	// stw r11,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r11.u32);
	// stb r11,64(r3)
	PPC_STORE_U8(ctx.r3.u32 + 64, ctx.r11.u8);
	// stw r11,68(r3)
	PPC_STORE_U32(ctx.r3.u32 + 68, ctx.r11.u32);
	// stfs f0,76(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 76, temp.u32);
	// stb r11,72(r3)
	PPC_STORE_U8(ctx.r3.u32 + 72, ctx.r11.u8);
	// stfs f0,84(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 84, temp.u32);
	// stb r11,80(r3)
	PPC_STORE_U8(ctx.r3.u32 + 80, ctx.r11.u8);
	// stfs f0,92(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 92, temp.u32);
	// stb r11,88(r3)
	PPC_STORE_U8(ctx.r3.u32 + 88, ctx.r11.u8);
	// stb r11,96(r3)
	PPC_STORE_U8(ctx.r3.u32 + 96, ctx.r11.u8);
	// stw r11,100(r3)
	PPC_STORE_U32(ctx.r3.u32 + 100, ctx.r11.u32);
	// stb r11,104(r3)
	PPC_STORE_U8(ctx.r3.u32 + 104, ctx.r11.u8);
	// stw r11,108(r3)
	PPC_STORE_U32(ctx.r3.u32 + 108, ctx.r11.u32);
	// stfs f0,116(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 116, temp.u32);
	// stb r11,112(r3)
	PPC_STORE_U8(ctx.r3.u32 + 112, ctx.r11.u8);
	// stfs f0,124(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 124, temp.u32);
	// stb r11,120(r3)
	PPC_STORE_U8(ctx.r3.u32 + 120, ctx.r11.u8);
	// stfs f0,132(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 132, temp.u32);
	// stb r11,128(r3)
	PPC_STORE_U8(ctx.r3.u32 + 128, ctx.r11.u8);
	// stb r11,136(r3)
	PPC_STORE_U8(ctx.r3.u32 + 136, ctx.r11.u8);
	// stb r11,137(r3)
	PPC_STORE_U8(ctx.r3.u32 + 137, ctx.r11.u8);
	// stfs f0,144(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 144, temp.u32);
	// stb r11,140(r3)
	PPC_STORE_U8(ctx.r3.u32 + 140, ctx.r11.u8);
	// stfs f0,152(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 152, temp.u32);
	// stb r11,148(r3)
	PPC_STORE_U8(ctx.r3.u32 + 148, ctx.r11.u8);
	// stb r11,160(r3)
	PPC_STORE_U8(ctx.r3.u32 + 160, ctx.r11.u8);
	// std r11,168(r3)
	PPC_STORE_U64(ctx.r3.u32 + 168, ctx.r11.u64);
	// stb r11,176(r3)
	PPC_STORE_U8(ctx.r3.u32 + 176, ctx.r11.u8);
	// stb r11,177(r3)
	PPC_STORE_U8(ctx.r3.u32 + 177, ctx.r11.u8);
	// stfs f0,184(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 184, temp.u32);
	// stb r11,180(r3)
	PPC_STORE_U8(ctx.r3.u32 + 180, ctx.r11.u8);
	// stfs f0,192(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 192, temp.u32);
	// stb r11,188(r3)
	PPC_STORE_U8(ctx.r3.u32 + 188, ctx.r11.u8);
	// stb r11,200(r3)
	PPC_STORE_U8(ctx.r3.u32 + 200, ctx.r11.u8);
	// std r11,208(r3)
	PPC_STORE_U64(ctx.r3.u32 + 208, ctx.r11.u64);
	// stfs f0,220(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 220, temp.u32);
	// stb r11,216(r3)
	PPC_STORE_U8(ctx.r3.u32 + 216, ctx.r11.u8);
	// stfs f0,228(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 228, temp.u32);
	// stb r11,224(r3)
	PPC_STORE_U8(ctx.r3.u32 + 224, ctx.r11.u8);
	// stfs f0,236(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 236, temp.u32);
	// stb r11,232(r3)
	PPC_STORE_U8(ctx.r3.u32 + 232, ctx.r11.u8);
	// stfs f0,244(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 244, temp.u32);
	// stb r11,240(r3)
	PPC_STORE_U8(ctx.r3.u32 + 240, ctx.r11.u8);
	// stb r11,248(r3)
	PPC_STORE_U8(ctx.r3.u32 + 248, ctx.r11.u8);
	// stw r11,252(r3)
	PPC_STORE_U32(ctx.r3.u32 + 252, ctx.r11.u32);
	// stb r11,256(r3)
	PPC_STORE_U8(ctx.r3.u32 + 256, ctx.r11.u8);
	// stw r11,260(r3)
	PPC_STORE_U32(ctx.r3.u32 + 260, ctx.r11.u32);
	// stfs f0,268(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 268, temp.u32);
	// stb r11,264(r3)
	PPC_STORE_U8(ctx.r3.u32 + 264, ctx.r11.u8);
	// stfs f0,276(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 276, temp.u32);
	// stb r11,272(r3)
	PPC_STORE_U8(ctx.r3.u32 + 272, ctx.r11.u8);
	// stfs f0,284(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 284, temp.u32);
	// stb r11,280(r3)
	PPC_STORE_U8(ctx.r3.u32 + 280, ctx.r11.u8);
	// stfs f0,292(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 292, temp.u32);
	// stb r11,288(r3)
	PPC_STORE_U8(ctx.r3.u32 + 288, ctx.r11.u8);
	// stfs f0,300(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 300, temp.u32);
	// stb r11,296(r3)
	PPC_STORE_U8(ctx.r3.u32 + 296, ctx.r11.u8);
	// stfs f0,308(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 308, temp.u32);
	// stb r11,304(r3)
	PPC_STORE_U8(ctx.r3.u32 + 304, ctx.r11.u8);
	// stfs f0,316(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 316, temp.u32);
	// stb r11,312(r3)
	PPC_STORE_U8(ctx.r3.u32 + 312, ctx.r11.u8);
	// stfs f0,324(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 324, temp.u32);
	// stb r11,320(r3)
	PPC_STORE_U8(ctx.r3.u32 + 320, ctx.r11.u8);
	// stfs f0,332(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 332, temp.u32);
	// stb r11,328(r3)
	PPC_STORE_U8(ctx.r3.u32 + 328, ctx.r11.u8);
	// stb r11,336(r3)
	PPC_STORE_U8(ctx.r3.u32 + 336, ctx.r11.u8);
	// stb r11,337(r3)
	PPC_STORE_U8(ctx.r3.u32 + 337, ctx.r11.u8);
	// stb r11,338(r3)
	PPC_STORE_U8(ctx.r3.u32 + 338, ctx.r11.u8);
	// stb r11,339(r3)
	PPC_STORE_U8(ctx.r3.u32 + 339, ctx.r11.u8);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// stb r11,344(r3)
	PPC_STORE_U8(ctx.r3.u32 + 344, ctx.r11.u8);
	// std r11,352(r3)
	PPC_STORE_U64(ctx.r3.u32 + 352, ctx.r11.u64);
	// stb r11,360(r3)
	PPC_STORE_U8(ctx.r3.u32 + 360, ctx.r11.u8);
	// stw r11,364(r3)
	PPC_STORE_U32(ctx.r3.u32 + 364, ctx.r11.u32);
	// stb r11,368(r3)
	PPC_STORE_U8(ctx.r3.u32 + 368, ctx.r11.u8);
	// lfd f0,9000(r7)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r7.u32 + 9000);
	// stw r11,372(r3)
	PPC_STORE_U32(ctx.r3.u32 + 372, ctx.r11.u32);
	// stb r11,376(r3)
	PPC_STORE_U8(ctx.r3.u32 + 376, ctx.r11.u8);
	// stw r11,380(r3)
	PPC_STORE_U32(ctx.r3.u32 + 380, ctx.r11.u32);
	// stb r11,384(r3)
	PPC_STORE_U8(ctx.r3.u32 + 384, ctx.r11.u8);
	// stw r11,388(r3)
	PPC_STORE_U32(ctx.r3.u32 + 388, ctx.r11.u32);
	// stfd f0,400(r3)
	PPC_STORE_U64(ctx.r3.u32 + 400, ctx.f0.u64);
	// stb r11,392(r3)
	PPC_STORE_U8(ctx.r3.u32 + 392, ctx.r11.u8);
	// stfd f0,416(r3)
	PPC_STORE_U64(ctx.r3.u32 + 416, ctx.f0.u64);
	// stb r11,408(r3)
	PPC_STORE_U8(ctx.r3.u32 + 408, ctx.r11.u8);
	// stb r11,424(r3)
	PPC_STORE_U8(ctx.r3.u32 + 424, ctx.r11.u8);
	// stw r11,428(r3)
	PPC_STORE_U32(ctx.r3.u32 + 428, ctx.r11.u32);
	// stb r11,432(r3)
	PPC_STORE_U8(ctx.r3.u32 + 432, ctx.r11.u8);
	// stb r11,433(r3)
	PPC_STORE_U8(ctx.r3.u32 + 433, ctx.r11.u8);
	// stb r11,436(r3)
	PPC_STORE_U8(ctx.r3.u32 + 436, ctx.r11.u8);
	// stw r11,440(r3)
	PPC_STORE_U32(ctx.r3.u32 + 440, ctx.r11.u32);
	// stb r11,444(r3)
	PPC_STORE_U8(ctx.r3.u32 + 444, ctx.r11.u8);
	// stw r11,448(r3)
	PPC_STORE_U32(ctx.r3.u32 + 448, ctx.r11.u32);
	// stb r11,452(r3)
	PPC_STORE_U8(ctx.r3.u32 + 452, ctx.r11.u8);
	// stb r11,453(r3)
	PPC_STORE_U8(ctx.r3.u32 + 453, ctx.r11.u8);
	// stb r11,456(r3)
	PPC_STORE_U8(ctx.r3.u32 + 456, ctx.r11.u8);
	// stw r11,460(r3)
	PPC_STORE_U32(ctx.r3.u32 + 460, ctx.r11.u32);
	// stb r11,464(r3)
	PPC_STORE_U8(ctx.r3.u32 + 464, ctx.r11.u8);
	// stw r11,468(r3)
	PPC_STORE_U32(ctx.r3.u32 + 468, ctx.r11.u32);
	// stb r11,472(r3)
	PPC_STORE_U8(ctx.r3.u32 + 472, ctx.r11.u8);
	// stw r11,476(r3)
	PPC_STORE_U32(ctx.r3.u32 + 476, ctx.r11.u32);
	// stb r11,480(r3)
	PPC_STORE_U8(ctx.r3.u32 + 480, ctx.r11.u8);
	// stb r11,481(r3)
	PPC_STORE_U8(ctx.r3.u32 + 481, ctx.r11.u8);
	// stb r11,484(r3)
	PPC_STORE_U8(ctx.r3.u32 + 484, ctx.r11.u8);
	// stw r11,488(r3)
	PPC_STORE_U32(ctx.r3.u32 + 488, ctx.r11.u32);
	// stb r11,492(r3)
	PPC_STORE_U8(ctx.r3.u32 + 492, ctx.r11.u8);
	// stw r11,496(r3)
	PPC_STORE_U32(ctx.r3.u32 + 496, ctx.r11.u32);
	// stb r11,500(r3)
	PPC_STORE_U8(ctx.r3.u32 + 500, ctx.r11.u8);
	// stw r11,504(r3)
	PPC_STORE_U32(ctx.r3.u32 + 504, ctx.r11.u32);
	// stb r11,508(r3)
	PPC_STORE_U8(ctx.r3.u32 + 508, ctx.r11.u8);
	// stb r11,509(r3)
	PPC_STORE_U8(ctx.r3.u32 + 509, ctx.r11.u8);
	// stb r11,510(r3)
	PPC_STORE_U8(ctx.r3.u32 + 510, ctx.r11.u8);
	// stb r11,511(r3)
	PPC_STORE_U8(ctx.r3.u32 + 511, ctx.r11.u8);
	// stb r11,512(r3)
	PPC_STORE_U8(ctx.r3.u32 + 512, ctx.r11.u8);
	// stb r11,513(r3)
	PPC_STORE_U8(ctx.r3.u32 + 513, ctx.r11.u8);
	// stb r11,520(r3)
	PPC_STORE_U8(ctx.r3.u32 + 520, ctx.r11.u8);
	// std r11,528(r3)
	PPC_STORE_U64(ctx.r3.u32 + 528, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E9F09C"))) PPC_WEAK_FUNC(sub_82E9F09C);
PPC_FUNC_IMPL(__imp__sub_82E9F09C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E9F0A0"))) PPC_WEAK_FUNC(sub_82E9F0A0);
PPC_FUNC_IMPL(__imp__sub_82E9F0A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stfs f1,316(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 316, temp.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r10,312(r11)
	PPC_STORE_U8(ctx.r11.u32 + 312, ctx.r10.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E9F0B8"))) PPC_WEAK_FUNC(sub_82E9F0B8);
PPC_FUNC_IMPL(__imp__sub_82E9F0B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stfs f1,324(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 324, temp.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r10,320(r11)
	PPC_STORE_U8(ctx.r11.u32 + 320, ctx.r10.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E9F0D0"))) PPC_WEAK_FUNC(sub_82E9F0D0);
PPC_FUNC_IMPL(__imp__sub_82E9F0D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stfs f1,332(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 332, temp.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r10,328(r11)
	PPC_STORE_U8(ctx.r11.u32 + 328, ctx.r10.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E9F0E8"))) PPC_WEAK_FUNC(sub_82E9F0E8);
PPC_FUNC_IMPL(__imp__sub_82E9F0E8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// clrlwi r10,r4,24
	ctx.r10.u64 = ctx.r4.u32 & 0xFF;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,191
	cr6.compare<uint32_t>(ctx.r10.u32, 191, xer);
	// bgt cr6,0x82e9f114
	if (cr6.gt) goto loc_82E9F114;
	// cmplwi cr6,r10,128
	cr6.compare<uint32_t>(ctx.r10.u32, 128, xer);
	// blt cr6,0x82e9f114
	if (cr6.lt) goto loc_82E9F114;
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r4,511(r3)
	PPC_STORE_U8(ctx.r3.u32 + 511, ctx.r4.u8);
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r10,510(r11)
	PPC_STORE_U8(ctx.r11.u32 + 510, ctx.r10.u8);
	// blr 
	return;
loc_82E9F114:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E9F11C"))) PPC_WEAK_FUNC(sub_82E9F11C);
PPC_FUNC_IMPL(__imp__sub_82E9F11C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E9F120"))) PPC_WEAK_FUNC(sub_82E9F120);
PPC_FUNC_IMPL(__imp__sub_82E9F120) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r11.u8);
	// stb r11,1(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1, ctx.r11.u8);
	// lfs f0,9008(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// stb r11,4(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4, ctx.r11.u8);
	// stfs f0,8(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// stb r11,16(r3)
	PPC_STORE_U8(ctx.r3.u32 + 16, ctx.r11.u8);
	// std r11,24(r3)
	PPC_STORE_U64(ctx.r3.u32 + 24, ctx.r11.u64);
	// stb r11,32(r3)
	PPC_STORE_U8(ctx.r3.u32 + 32, ctx.r11.u8);
	// stb r11,33(r3)
	PPC_STORE_U8(ctx.r3.u32 + 33, ctx.r11.u8);
	// stb r11,34(r3)
	PPC_STORE_U8(ctx.r3.u32 + 34, ctx.r11.u8);
	// stb r11,35(r3)
	PPC_STORE_U8(ctx.r3.u32 + 35, ctx.r11.u8);
	// stb r11,36(r3)
	PPC_STORE_U8(ctx.r3.u32 + 36, ctx.r11.u8);
	// stw r11,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r11.u32);
	// stb r11,44(r3)
	PPC_STORE_U8(ctx.r3.u32 + 44, ctx.r11.u8);
	// stb r11,45(r3)
	PPC_STORE_U8(ctx.r3.u32 + 45, ctx.r11.u8);
	// stb r11,46(r3)
	PPC_STORE_U8(ctx.r3.u32 + 46, ctx.r11.u8);
	// stb r11,47(r3)
	PPC_STORE_U8(ctx.r3.u32 + 47, ctx.r11.u8);
	// stb r11,48(r3)
	PPC_STORE_U8(ctx.r3.u32 + 48, ctx.r11.u8);
	// stw r11,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r11.u32);
	// stb r11,56(r3)
	PPC_STORE_U8(ctx.r3.u32 + 56, ctx.r11.u8);
	// stb r11,57(r3)
	PPC_STORE_U8(ctx.r3.u32 + 57, ctx.r11.u8);
	// stb r11,60(r3)
	PPC_STORE_U8(ctx.r3.u32 + 60, ctx.r11.u8);
	// stw r11,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, ctx.r11.u32);
	// stb r11,68(r3)
	PPC_STORE_U8(ctx.r3.u32 + 68, ctx.r11.u8);
	// stw r11,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r11.u32);
	// stb r11,76(r3)
	PPC_STORE_U8(ctx.r3.u32 + 76, ctx.r11.u8);
	// stb r11,77(r3)
	PPC_STORE_U8(ctx.r3.u32 + 77, ctx.r11.u8);
	// stfs f0,84(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 84, temp.u32);
	// stb r11,80(r3)
	PPC_STORE_U8(ctx.r3.u32 + 80, ctx.r11.u8);
	// stb r11,88(r3)
	PPC_STORE_U8(ctx.r3.u32 + 88, ctx.r11.u8);
	// stw r11,92(r3)
	PPC_STORE_U32(ctx.r3.u32 + 92, ctx.r11.u32);
	// stfs f0,100(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 100, temp.u32);
	// stb r11,96(r3)
	PPC_STORE_U8(ctx.r3.u32 + 96, ctx.r11.u8);
	// stb r11,104(r3)
	PPC_STORE_U8(ctx.r3.u32 + 104, ctx.r11.u8);
	// stw r11,108(r3)
	PPC_STORE_U32(ctx.r3.u32 + 108, ctx.r11.u32);
	// stb r11,112(r3)
	PPC_STORE_U8(ctx.r3.u32 + 112, ctx.r11.u8);
	// stw r11,116(r3)
	PPC_STORE_U32(ctx.r3.u32 + 116, ctx.r11.u32);
	// stfs f0,124(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 124, temp.u32);
	// stb r11,120(r3)
	PPC_STORE_U8(ctx.r3.u32 + 120, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E9F1C8"))) PPC_WEAK_FUNC(sub_82E9F1C8);
PPC_FUNC_IMPL(__imp__sub_82E9F1C8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdac4
	ctx.lr = 0x82E9F1D0;
	__savegprlr_19(ctx, base);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// lbz r21,0(r3)
	ctx.r21.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lbz r23,2(r3)
	ctx.r23.u64 = PPC_LOAD_U8(ctx.r3.u32 + 2);
	// addi r26,r11,12496
	ctx.r26.s64 = ctx.r11.s64 + 12496;
	// lbz r25,4(r3)
	ctx.r25.u64 = PPC_LOAD_U8(ctx.r3.u32 + 4);
	// lbz r20,1(r3)
	ctx.r20.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1);
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// stw r26,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r26.u32);
	// li r28,0
	ctx.r28.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// lbz r22,3(r31)
	ctx.r22.u64 = PPC_LOAD_U8(ctx.r31.u32 + 3);
	// lwz r24,8(r31)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r30,r31,2
	ctx.r30.s64 = ctx.r31.s64 + 2;
	// addi r29,r31,4
	ctx.r29.s64 = ctx.r31.s64 + 4;
	// mr r19,r28
	ctx.r19.u64 = ctx.r28.u64;
	// bl 0x825359d8
	ctx.lr = 0x82E9F21C;
	sub_825359D8(ctx, base);
	// stb r28,136(r1)
	PPC_STORE_U8(ctx.r1.u32 + 136, ctx.r28.u8);
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x82535130
	ctx.lr = 0x82E9F228;
	sub_82535130(ctx, base);
	// stb r28,136(r1)
	PPC_STORE_U8(ctx.r1.u32 + 136, ctx.r28.u8);
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x82535130
	ctx.lr = 0x82E9F234;
	sub_82535130(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x825369e8
	ctx.lr = 0x82E9F240;
	sub_825369E8(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// stb r11,136(r1)
	PPC_STORE_U8(ctx.r1.u32 + 136, ctx.r11.u8);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x825359d8
	ctx.lr = 0x82E9F254;
	sub_825359D8(ctx, base);
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r27,r11,-30532
	ctx.r27.s64 = ctx.r11.s64 + -30532;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// bl 0x82e8c3a8
	ctx.lr = 0x82E9F26C;
	sub_82E8C3A8(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82e9f29c
	if (cr6.eq) goto loc_82E9F29C;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82e9e058
	ctx.lr = 0x82E9F284;
	sub_82E9E058(ctx, base);
	// lbz r10,168(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 168);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82e9f2bc
	if (!cr6.eq) goto loc_82E9F2BC;
	// stw r26,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r26.u32);
	// addi r3,r1,152
	ctx.r3.s64 = ctx.r1.s64 + 152;
loc_82E9F298:
	// bl 0x82535aa0
	ctx.lr = 0x82E9F29C;
	sub_82535AA0(ctx, base);
loc_82E9F29C:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82535aa0
	ctx.lr = 0x82E9F2A4;
	sub_82535AA0(ctx, base);
	// stw r26,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r26.u32);
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x82535aa0
	ctx.lr = 0x82E9F2B0;
	sub_82535AA0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x831cdb14
	__restgprlr_19(ctx, base);
	return;
loc_82E9F2BC:
	// stb r28,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r28.u8);
	// addi r5,r27,204
	ctx.r5.s64 = ctx.r27.s64 + 204;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82e8c338
	ctx.lr = 0x82E9F2D0;
	sub_82E8C338(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82e9f2e4
	if (!cr6.eq) goto loc_82E9F2E4;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// b 0x82e9f2f0
	goto loc_82E9F2F0;
loc_82E9F2E4:
	// lbz r20,80(r1)
	ctx.r20.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// li r21,1
	ctx.r21.s64 = 1;
	// li r11,1
	ctx.r11.s64 = 1;
loc_82E9F2F0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82e9f300
	if (cr6.eq) goto loc_82E9F300;
	// li r19,1
	ctx.r19.s64 = 1;
loc_82E9F300:
	// stw r28,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r28.u32);
	// addi r5,r27,216
	ctx.r5.s64 = ctx.r27.s64 + 216;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82e8c258
	ctx.lr = 0x82E9F314;
	sub_82E8C258(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82e9f328
	if (!cr6.eq) goto loc_82E9F328;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// b 0x82e9f34c
	goto loc_82E9F34C;
loc_82E9F328:
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r11,255
	cr6.compare<uint32_t>(ctx.r11.u32, 255, xer);
	// ble cr6,0x82e9f33c
	if (!cr6.gt) goto loc_82E9F33C;
	// li r11,255
	ctx.r11.s64 = 255;
	// b 0x82e9f340
	goto loc_82E9F340;
loc_82E9F33C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_82E9F340:
	// mr r22,r11
	ctx.r22.u64 = ctx.r11.u64;
	// li r23,1
	ctx.r23.s64 = 1;
	// li r11,1
	ctx.r11.s64 = 1;
loc_82E9F34C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82e9f35c
	if (cr6.eq) goto loc_82E9F35C;
	// li r19,1
	ctx.r19.s64 = 1;
loc_82E9F35C:
	// std r28,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r28.u64);
	// addi r5,r27,224
	ctx.r5.s64 = ctx.r27.s64 + 224;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82e8c2c8
	ctx.lr = 0x82E9F370;
	sub_82E8C2C8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82e9f3a8
	if (cr6.eq) goto loc_82E9F3A8;
	// li r10,-1
	ctx.r10.s64 = -1;
	// ld r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// clrldi r9,r10,32
	ctx.r9.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// cmpld cr6,r11,r9
	cr6.compare<uint64_t>(ctx.r11.u64, ctx.r9.u64, xer);
	// ble cr6,0x82e9f398
	if (!cr6.gt) goto loc_82E9F398;
	// li r11,-1
	ctx.r11.s64 = -1;
	// b 0x82e9f39c
	goto loc_82E9F39C;
loc_82E9F398:
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
loc_82E9F39C:
	// li r25,1
	ctx.r25.s64 = 1;
	// mr r24,r11
	ctx.r24.u64 = ctx.r11.u64;
	// li r28,1
	ctx.r28.s64 = 1;
loc_82E9F3A8:
	// clrlwi r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82e9f3b8
	if (cr6.eq) goto loc_82E9F3B8;
	// li r19,1
	ctx.r19.s64 = 1;
loc_82E9F3B8:
	// clrlwi r11,r19,24
	ctx.r11.u64 = ctx.r19.u32 & 0xFF;
	// stw r26,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r26.u32);
	// addi r3,r1,152
	ctx.r3.s64 = ctx.r1.s64 + 152;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82e9f298
	if (cr6.eq) goto loc_82E9F298;
	// stb r21,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r21.u8);
	// stb r20,1(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1, ctx.r20.u8);
	// stb r23,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r23.u8);
	// stb r22,1(r30)
	PPC_STORE_U8(ctx.r30.u32 + 1, ctx.r22.u8);
	// stb r25,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r25.u8);
	// stw r24,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r24.u32);
	// bl 0x82535aa0
	ctx.lr = 0x82E9F3E8;
	sub_82535AA0(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82535aa0
	ctx.lr = 0x82E9F3F0;
	sub_82535AA0(ctx, base);
	// stw r26,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r26.u32);
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x82535aa0
	ctx.lr = 0x82E9F3FC;
	sub_82535AA0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x831cdb14
	__restgprlr_19(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E9F408"))) PPC_WEAK_FUNC(sub_82E9F408);
PPC_FUNC_IMPL(__imp__sub_82E9F408) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82E9F410;
	__savegprlr_27(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// bl 0x82e6e978
	ctx.lr = 0x82E9F428;
	sub_82E6E978(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82e9f4f0
	if (cr6.eq) goto loc_82E9F4F0;
	// lwz r31,24(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// li r4,0
	ctx.r4.s64 = 0;
	// stb r28,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r28.u8);
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x825359d8
	ctx.lr = 0x82E9F444;
	sub_825359D8(ctx, base);
	// stb r28,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r28.u8);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x825359d8
	ctx.lr = 0x82E9F454;
	sub_825359D8(ctx, base);
	// cmplwi cr6,r30,1
	cr6.compare<uint32_t>(ctx.r30.u32, 1, xer);
	// blt cr6,0x82e9f4ac
	if (cr6.lt) goto loc_82E9F4AC;
	// bne cr6,0x82e9f4e0
	if (!cr6.eq) goto loc_82E9F4E0;
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// addi r30,r11,-30564
	ctx.r30.s64 = ctx.r11.s64 + -30564;
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// addi r5,r30,-120
	ctx.r5.s64 = ctx.r30.s64 + -120;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e8c3a8
	ctx.lr = 0x82E9F47C;
	sub_82E8C3A8(ctx, base);
	// stb r3,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r3.u8);
	// cmplwi cr6,r29,1
	cr6.compare<uint32_t>(ctx.r29.u32, 1, xer);
	// blt cr6,0x82e9f4a4
	if (cr6.lt) goto loc_82E9F4A4;
	// beq cr6,0x82e9f49c
	if (cr6.eq) goto loc_82E9F49C;
	// cmplwi cr6,r29,3
	cr6.compare<uint32_t>(ctx.r29.u32, 3, xer);
	// bge cr6,0x82e9f4e0
	if (!cr6.lt) goto loc_82E9F4E0;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// b 0x82e9f510
	goto loc_82E9F510;
loc_82E9F49C:
	// addi r5,r30,-52
	ctx.r5.s64 = ctx.r30.s64 + -52;
	// b 0x82e9f510
	goto loc_82E9F510;
loc_82E9F4A4:
	// addi r5,r30,-92
	ctx.r5.s64 = ctx.r30.s64 + -92;
	// b 0x82e9f510
	goto loc_82E9F510;
loc_82E9F4AC:
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// addi r30,r11,-30564
	ctx.r30.s64 = ctx.r11.s64 + -30564;
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// addi r5,r30,-128
	ctx.r5.s64 = ctx.r30.s64 + -128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e8c3a8
	ctx.lr = 0x82E9F4C8;
	sub_82E8C3A8(ctx, base);
	// stb r3,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r3.u8);
	// cmplwi cr6,r29,1
	cr6.compare<uint32_t>(ctx.r29.u32, 1, xer);
	// blt cr6,0x82e9f50c
	if (cr6.lt) goto loc_82E9F50C;
	// beq cr6,0x82e9f504
	if (cr6.eq) goto loc_82E9F504;
	// cmplwi cr6,r29,3
	cr6.compare<uint32_t>(ctx.r29.u32, 3, xer);
	// blt cr6,0x82e9f4fc
	if (cr6.lt) goto loc_82E9F4FC;
loc_82E9F4E0:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82535aa0
	ctx.lr = 0x82E9F4E8;
	sub_82535AA0(ctx, base);
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x82535aa0
	ctx.lr = 0x82E9F4F0;
	sub_82535AA0(ctx, base);
loc_82E9F4F0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_82E9F4FC:
	// addi r5,r30,-32
	ctx.r5.s64 = ctx.r30.s64 + -32;
	// b 0x82e9f510
	goto loc_82E9F510;
loc_82E9F504:
	// addi r5,r30,-72
	ctx.r5.s64 = ctx.r30.s64 + -72;
	// b 0x82e9f510
	goto loc_82E9F510;
loc_82E9F50C:
	// addi r5,r30,-112
	ctx.r5.s64 = ctx.r30.s64 + -112;
loc_82E9F510:
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e8c3a8
	ctx.lr = 0x82E9F51C;
	sub_82E8C3A8(ctx, base);
	// lbz r10,112(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 112);
	// stb r3,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r3.u8);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82e9f53c
	if (cr6.eq) goto loc_82E9F53C;
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82e9f1c8
	ctx.lr = 0x82E9F538;
	sub_82E9F1C8(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
loc_82E9F53C:
	// lbz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82e9f560
	if (cr6.eq) goto loc_82E9F560;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82e9f1c8
	ctx.lr = 0x82E9F554;
	sub_82E9F1C8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// clrlwi r10,r28,24
	ctx.r10.u64 = ctx.r28.u32 & 0xFF;
	// or r28,r11,r10
	ctx.r28.u64 = ctx.r11.u64 | ctx.r10.u64;
loc_82E9F560:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82535aa0
	ctx.lr = 0x82E9F568;
	sub_82535AA0(ctx, base);
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x82535aa0
	ctx.lr = 0x82E9F570;
	sub_82535AA0(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E9F57C"))) PPC_WEAK_FUNC(sub_82E9F57C);
PPC_FUNC_IMPL(__imp__sub_82E9F57C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E9F580"))) PPC_WEAK_FUNC(sub_82E9F580);
PPC_FUNC_IMPL(__imp__sub_82E9F580) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x82E9F588;
	__savegprlr_24(ctx, base);
	// addi r12,r1,-72
	ctx.r12.s64 = ctx.r1.s64 + -72;
	// bl 0x831ce774
	ctx.lr = 0x82E9F590;
	__savefpr_27(ctx, base);
	// stwu r1,-832(r1)
	ea = -832 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82e95f20
	ctx.lr = 0x82E9F5A8;
	sub_82E95F20(ctx, base);
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r25,r11,12496
	ctx.r25.s64 = ctx.r11.s64 + 12496;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r25,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r25.u32);
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// bl 0x825359d8
	ctx.lr = 0x82E9F5C8;
	sub_825359D8(ctx, base);
	// stb r29,152(r1)
	PPC_STORE_U8(ctx.r1.u32 + 152, ctx.r29.u8);
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// bl 0x82535130
	ctx.lr = 0x82E9F5D4;
	sub_82535130(ctx, base);
	// stb r29,152(r1)
	PPC_STORE_U8(ctx.r1.u32 + 152, ctx.r29.u8);
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// bl 0x82535130
	ctx.lr = 0x82E9F5E0;
	sub_82535130(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// bl 0x825369e8
	ctx.lr = 0x82E9F5EC;
	sub_825369E8(ctx, base);
	// li r31,1
	ctx.r31.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// stb r31,152(r1)
	PPC_STORE_U8(ctx.r1.u32 + 152, ctx.r31.u8);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x825359d8
	ctx.lr = 0x82E9F600;
	sub_825359D8(ctx, base);
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// addi r26,r11,-30476
	ctx.r26.s64 = ctx.r11.s64 + -30476;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// bl 0x82e8c3a8
	ctx.lr = 0x82E9F618;
	sub_82E8C3A8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82e9f648
	if (cr6.eq) goto loc_82E9F648;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82e9e058
	ctx.lr = 0x82E9F630;
	sub_82E9E058(ctx, base);
	// lbz r10,120(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 120);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82e9f670
	if (!cr6.eq) goto loc_82E9F670;
loc_82E9F63C:
	// stw r25,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r25.u32);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82535aa0
	ctx.lr = 0x82E9F648;
	sub_82535AA0(ctx, base);
loc_82E9F648:
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82535aa0
	ctx.lr = 0x82E9F650;
	sub_82535AA0(ctx, base);
	// stw r25,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r25.u32);
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// bl 0x82535aa0
	ctx.lr = 0x82E9F65C;
	sub_82535AA0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,832
	ctx.r1.s64 = ctx.r1.s64 + 832;
	// addi r12,r1,-72
	ctx.r12.s64 = ctx.r1.s64 + -72;
	// bl 0x831ce7c0
	ctx.lr = 0x82E9F66C;
	__restfpr_27(ctx, base);
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_82E9F670:
	// std r29,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r29.u64);
	// addi r5,r26,1288
	ctx.r5.s64 = ctx.r26.s64 + 1288;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82e8c2c8
	ctx.lr = 0x82E9F684;
	sub_82E8C2C8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82e9f698
	if (!cr6.eq) goto loc_82E9F698;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// b 0x82e9f6a8
	goto loc_82E9F6A8;
loc_82E9F698:
	// ld r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// stb r31,184(r1)
	PPC_STORE_U8(ctx.r1.u32 + 184, ctx.r31.u8);
	// std r10,192(r1)
	PPC_STORE_U64(ctx.r1.u32 + 192, ctx.r10.u64);
loc_82E9F6A8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82e9f6b8
	if (cr6.eq) goto loc_82E9F6B8;
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
loc_82E9F6B8:
	// std r29,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r29.u64);
	// addi r5,r26,1308
	ctx.r5.s64 = ctx.r26.s64 + 1308;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82e8c2c8
	ctx.lr = 0x82E9F6CC;
	sub_82E8C2C8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82e9f6e0
	if (!cr6.eq) goto loc_82E9F6E0;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// b 0x82e9f6f0
	goto loc_82E9F6F0;
loc_82E9F6E0:
	// ld r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// stb r31,200(r1)
	PPC_STORE_U8(ctx.r1.u32 + 200, ctx.r31.u8);
	// std r10,208(r1)
	PPC_STORE_U64(ctx.r1.u32 + 208, ctx.r10.u64);
loc_82E9F6F0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82e9f700
	if (cr6.eq) goto loc_82E9F700;
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
loc_82E9F700:
	// std r29,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r29.u64);
	// addi r5,r26,1340
	ctx.r5.s64 = ctx.r26.s64 + 1340;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82e8c2c8
	ctx.lr = 0x82E9F714;
	sub_82E8C2C8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82e9f728
	if (!cr6.eq) goto loc_82E9F728;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// b 0x82e9f738
	goto loc_82E9F738;
loc_82E9F728:
	// ld r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// stb r31,216(r1)
	PPC_STORE_U8(ctx.r1.u32 + 216, ctx.r31.u8);
	// std r10,224(r1)
	PPC_STORE_U64(ctx.r1.u32 + 224, ctx.r10.u64);
loc_82E9F738:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82e9f748
	if (cr6.eq) goto loc_82E9F748;
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
loc_82E9F748:
	// std r29,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r29.u64);
	// addi r5,r26,1360
	ctx.r5.s64 = ctx.r26.s64 + 1360;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82e8c2c8
	ctx.lr = 0x82E9F75C;
	sub_82E8C2C8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// li r10,-1
	ctx.r10.s64 = -1;
	// li r27,-1
	ctx.r27.s64 = -1;
	// clrldi r28,r10,32
	ctx.r28.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82e9f77c
	if (!cr6.eq) goto loc_82E9F77C;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// b 0x82e9f7a0
	goto loc_82E9F7A0;
loc_82E9F77C:
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// cmpld cr6,r11,r28
	cr6.compare<uint64_t>(ctx.r11.u64, ctx.r28.u64, xer);
	// ble cr6,0x82e9f790
	if (!cr6.gt) goto loc_82E9F790;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// b 0x82e9f794
	goto loc_82E9F794;
loc_82E9F790:
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
loc_82E9F794:
	// stw r11,236(r1)
	PPC_STORE_U32(ctx.r1.u32 + 236, ctx.r11.u32);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// stb r31,232(r1)
	PPC_STORE_U8(ctx.r1.u32 + 232, ctx.r31.u8);
loc_82E9F7A0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82e9f7b0
	if (cr6.eq) goto loc_82E9F7B0;
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
loc_82E9F7B0:
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// addi r5,r26,1384
	ctx.r5.s64 = ctx.r26.s64 + 1384;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82e8c1e8
	ctx.lr = 0x82E9F7C4;
	sub_82E8C1E8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82e9f7d8
	if (!cr6.eq) goto loc_82E9F7D8;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// b 0x82e9f7e8
	goto loc_82E9F7E8;
loc_82E9F7D8:
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// stb r31,240(r1)
	PPC_STORE_U8(ctx.r1.u32 + 240, ctx.r31.u8);
	// stw r10,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r10.u32);
loc_82E9F7E8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82e9f7f8
	if (cr6.eq) goto loc_82E9F7F8;
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
loc_82E9F7F8:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r5,r26,1412
	ctx.r5.s64 = ctx.r26.s64 + 1412;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lfd f27,9000(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f27.u64 = PPC_LOAD_U64(ctx.r11.u32 + 9000);
	// stfd f27,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f27.u64);
	// bl 0x82e8c578
	ctx.lr = 0x82E9F814;
	sub_82E8C578(ctx, base);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32231
	ctx.r9.s64 = -2112290816;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// lis r7,-32231
	ctx.r7.s64 = -2112290816;
	// clrlwi r6,r3,24
	ctx.r6.u64 = ctx.r3.u32 & 0xFF;
	// lfs f28,-4660(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -4660);
	ctx.f28.f64 = double(temp.f32);
	// lfd f29,-18168(r9)
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r9.u32 + -18168);
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// lfs f30,-4664(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -4664);
	ctx.f30.f64 = double(temp.f32);
	// lfd f31,-18160(r7)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r7.u32 + -18160);
	// bne cr6,0x82e9f848
	if (!cr6.eq) goto loc_82E9F848;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// b 0x82e9f87c
	goto loc_82E9F87C;
loc_82E9F848:
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcmpu cr6,f0,f31
	cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bge cr6,0x82e9f85c
	if (!cr6.lt) goto loc_82E9F85C;
	// fmr f0,f30
	ctx.f0.f64 = ctx.f30.f64;
	// b 0x82e9f870
	goto loc_82E9F870;
loc_82E9F85C:
	// fcmpu cr6,f0,f29
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f0.f64, ctx.f29.f64);
	// ble cr6,0x82e9f86c
	if (!cr6.gt) goto loc_82E9F86C;
	// fmr f0,f28
	ctx.f0.f64 = ctx.f28.f64;
	// b 0x82e9f870
	goto loc_82E9F870;
loc_82E9F86C:
	// frsp f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64));
loc_82E9F870:
	// stfs f0,252(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 252, temp.u32);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// stb r31,248(r1)
	PPC_STORE_U8(ctx.r1.u32 + 248, ctx.r31.u8);
loc_82E9F87C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82e9f88c
	if (cr6.eq) goto loc_82E9F88C;
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
loc_82E9F88C:
	// stfd f27,80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f27.u64);
	// addi r5,r26,1424
	ctx.r5.s64 = ctx.r26.s64 + 1424;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82e8c578
	ctx.lr = 0x82E9F8A0;
	sub_82E8C578(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82e9f8b4
	if (!cr6.eq) goto loc_82E9F8B4;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// b 0x82e9f8e8
	goto loc_82E9F8E8;
loc_82E9F8B4:
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcmpu cr6,f0,f31
	cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bge cr6,0x82e9f8c8
	if (!cr6.lt) goto loc_82E9F8C8;
	// fmr f0,f30
	ctx.f0.f64 = ctx.f30.f64;
	// b 0x82e9f8dc
	goto loc_82E9F8DC;
loc_82E9F8C8:
	// fcmpu cr6,f0,f29
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f0.f64, ctx.f29.f64);
	// ble cr6,0x82e9f8d8
	if (!cr6.gt) goto loc_82E9F8D8;
	// fmr f0,f28
	ctx.f0.f64 = ctx.f28.f64;
	// b 0x82e9f8dc
	goto loc_82E9F8DC;
loc_82E9F8D8:
	// frsp f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64));
loc_82E9F8DC:
	// stfs f0,260(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 260, temp.u32);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// stb r31,256(r1)
	PPC_STORE_U8(ctx.r1.u32 + 256, ctx.r31.u8);
loc_82E9F8E8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82e9f8f8
	if (cr6.eq) goto loc_82E9F8F8;
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
loc_82E9F8F8:
	// stfd f27,80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f27.u64);
	// addi r5,r26,1432
	ctx.r5.s64 = ctx.r26.s64 + 1432;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82e8c578
	ctx.lr = 0x82E9F90C;
	sub_82E8C578(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82e9f920
	if (!cr6.eq) goto loc_82E9F920;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// b 0x82e9f954
	goto loc_82E9F954;
loc_82E9F920:
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcmpu cr6,f0,f31
	cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bge cr6,0x82e9f934
	if (!cr6.lt) goto loc_82E9F934;
	// fmr f0,f30
	ctx.f0.f64 = ctx.f30.f64;
	// b 0x82e9f948
	goto loc_82E9F948;
loc_82E9F934:
	// fcmpu cr6,f0,f29
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f0.f64, ctx.f29.f64);
	// ble cr6,0x82e9f944
	if (!cr6.gt) goto loc_82E9F944;
	// fmr f0,f28
	ctx.f0.f64 = ctx.f28.f64;
	// b 0x82e9f948
	goto loc_82E9F948;
loc_82E9F944:
	// frsp f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64));
loc_82E9F948:
	// stfs f0,268(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 268, temp.u32);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// stb r31,264(r1)
	PPC_STORE_U8(ctx.r1.u32 + 264, ctx.r31.u8);
loc_82E9F954:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82e9f964
	if (cr6.eq) goto loc_82E9F964;
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
loc_82E9F964:
	// std r29,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r29.u64);
	// addi r5,r26,1440
	ctx.r5.s64 = ctx.r26.s64 + 1440;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82e8c2c8
	ctx.lr = 0x82E9F978;
	sub_82E8C2C8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82e9f98c
	if (!cr6.eq) goto loc_82E9F98C;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// b 0x82e9f9b0
	goto loc_82E9F9B0;
loc_82E9F98C:
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// cmpld cr6,r11,r28
	cr6.compare<uint64_t>(ctx.r11.u64, ctx.r28.u64, xer);
	// ble cr6,0x82e9f9a0
	if (!cr6.gt) goto loc_82E9F9A0;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// b 0x82e9f9a4
	goto loc_82E9F9A4;
loc_82E9F9A0:
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
loc_82E9F9A4:
	// stw r11,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r11.u32);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// stb r31,272(r1)
	PPC_STORE_U8(ctx.r1.u32 + 272, ctx.r31.u8);
loc_82E9F9B0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82e9f9c0
	if (cr6.eq) goto loc_82E9F9C0;
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
loc_82E9F9C0:
	// std r29,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r29.u64);
	// addi r5,r26,1468
	ctx.r5.s64 = ctx.r26.s64 + 1468;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82e8c2c8
	ctx.lr = 0x82E9F9D4;
	sub_82E8C2C8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82e9f9e8
	if (!cr6.eq) goto loc_82E9F9E8;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// b 0x82e9fa0c
	goto loc_82E9FA0C;
loc_82E9F9E8:
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// cmpld cr6,r11,r28
	cr6.compare<uint64_t>(ctx.r11.u64, ctx.r28.u64, xer);
	// ble cr6,0x82e9f9fc
	if (!cr6.gt) goto loc_82E9F9FC;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// b 0x82e9fa00
	goto loc_82E9FA00;
loc_82E9F9FC:
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
loc_82E9FA00:
	// stw r11,284(r1)
	PPC_STORE_U32(ctx.r1.u32 + 284, ctx.r11.u32);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// stb r31,280(r1)
	PPC_STORE_U8(ctx.r1.u32 + 280, ctx.r31.u8);
loc_82E9FA0C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82e9fa1c
	if (cr6.eq) goto loc_82E9FA1C;
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
loc_82E9FA1C:
	// stfd f27,80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f27.u64);
	// addi r5,r26,1500
	ctx.r5.s64 = ctx.r26.s64 + 1500;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82e8c578
	ctx.lr = 0x82E9FA30;
	sub_82E8C578(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82e9fa44
	if (!cr6.eq) goto loc_82E9FA44;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// b 0x82e9fa78
	goto loc_82E9FA78;
loc_82E9FA44:
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcmpu cr6,f0,f31
	cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bge cr6,0x82e9fa58
	if (!cr6.lt) goto loc_82E9FA58;
	// fmr f0,f30
	ctx.f0.f64 = ctx.f30.f64;
	// b 0x82e9fa6c
	goto loc_82E9FA6C;
loc_82E9FA58:
	// fcmpu cr6,f0,f29
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f0.f64, ctx.f29.f64);
	// ble cr6,0x82e9fa68
	if (!cr6.gt) goto loc_82E9FA68;
	// fmr f0,f28
	ctx.f0.f64 = ctx.f28.f64;
	// b 0x82e9fa6c
	goto loc_82E9FA6C;
loc_82E9FA68:
	// frsp f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64));
loc_82E9FA6C:
	// stfs f0,292(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 292, temp.u32);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// stb r31,288(r1)
	PPC_STORE_U8(ctx.r1.u32 + 288, ctx.r31.u8);
loc_82E9FA78:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82e9fa88
	if (cr6.eq) goto loc_82E9FA88;
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
loc_82E9FA88:
	// stfd f27,80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f27.u64);
	// addi r5,r26,1532
	ctx.r5.s64 = ctx.r26.s64 + 1532;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82e8c578
	ctx.lr = 0x82E9FA9C;
	sub_82E8C578(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82e9fab0
	if (!cr6.eq) goto loc_82E9FAB0;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// b 0x82e9fae4
	goto loc_82E9FAE4;
loc_82E9FAB0:
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcmpu cr6,f0,f31
	cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bge cr6,0x82e9fac4
	if (!cr6.lt) goto loc_82E9FAC4;
	// fmr f0,f30
	ctx.f0.f64 = ctx.f30.f64;
	// b 0x82e9fad8
	goto loc_82E9FAD8;
loc_82E9FAC4:
	// fcmpu cr6,f0,f29
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f0.f64, ctx.f29.f64);
	// ble cr6,0x82e9fad4
	if (!cr6.gt) goto loc_82E9FAD4;
	// fmr f0,f28
	ctx.f0.f64 = ctx.f28.f64;
	// b 0x82e9fad8
	goto loc_82E9FAD8;
loc_82E9FAD4:
	// frsp f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64));
loc_82E9FAD8:
	// stfs f0,300(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 300, temp.u32);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// stb r31,296(r1)
	PPC_STORE_U8(ctx.r1.u32 + 296, ctx.r31.u8);
loc_82E9FAE4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82e9faf4
	if (cr6.eq) goto loc_82E9FAF4;
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
loc_82E9FAF4:
	// stfd f27,80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f27.u64);
	// addi r5,r26,1548
	ctx.r5.s64 = ctx.r26.s64 + 1548;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82e8c578
	ctx.lr = 0x82E9FB08;
	sub_82E8C578(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82e9fb1c
	if (!cr6.eq) goto loc_82E9FB1C;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// b 0x82e9fb50
	goto loc_82E9FB50;
loc_82E9FB1C:
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcmpu cr6,f0,f31
	cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bge cr6,0x82e9fb30
	if (!cr6.lt) goto loc_82E9FB30;
	// fmr f0,f30
	ctx.f0.f64 = ctx.f30.f64;
	// b 0x82e9fb44
	goto loc_82E9FB44;
loc_82E9FB30:
	// fcmpu cr6,f0,f29
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f0.f64, ctx.f29.f64);
	// ble cr6,0x82e9fb40
	if (!cr6.gt) goto loc_82E9FB40;
	// fmr f0,f28
	ctx.f0.f64 = ctx.f28.f64;
	// b 0x82e9fb44
	goto loc_82E9FB44;
loc_82E9FB40:
	// frsp f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64));
loc_82E9FB44:
	// stfs f0,308(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 308, temp.u32);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// stb r31,304(r1)
	PPC_STORE_U8(ctx.r1.u32 + 304, ctx.r31.u8);
loc_82E9FB50:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82e9fb60
	if (cr6.eq) goto loc_82E9FB60;
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
loc_82E9FB60:
	// stb r29,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r29.u8);
	// addi r5,r26,1564
	ctx.r5.s64 = ctx.r26.s64 + 1564;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82e8c338
	ctx.lr = 0x82E9FB74;
	sub_82E8C338(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82e9fb88
	if (!cr6.eq) goto loc_82E9FB88;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// b 0x82e9fb98
	goto loc_82E9FB98;
loc_82E9FB88:
	// lbz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 88);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// stb r31,312(r1)
	PPC_STORE_U8(ctx.r1.u32 + 312, ctx.r31.u8);
	// stb r10,313(r1)
	PPC_STORE_U8(ctx.r1.u32 + 313, ctx.r10.u8);
loc_82E9FB98:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82e9fba8
	if (cr6.eq) goto loc_82E9FBA8;
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
loc_82E9FBA8:
	// stfd f27,80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f27.u64);
	// addi r5,r26,1592
	ctx.r5.s64 = ctx.r26.s64 + 1592;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82e8c578
	ctx.lr = 0x82E9FBBC;
	sub_82E8C578(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82e9fbd0
	if (!cr6.eq) goto loc_82E9FBD0;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// b 0x82e9fc04
	goto loc_82E9FC04;
loc_82E9FBD0:
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcmpu cr6,f0,f31
	cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bge cr6,0x82e9fbe4
	if (!cr6.lt) goto loc_82E9FBE4;
	// fmr f0,f30
	ctx.f0.f64 = ctx.f30.f64;
	// b 0x82e9fbf8
	goto loc_82E9FBF8;
loc_82E9FBE4:
	// fcmpu cr6,f0,f29
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f0.f64, ctx.f29.f64);
	// ble cr6,0x82e9fbf4
	if (!cr6.gt) goto loc_82E9FBF4;
	// fmr f0,f28
	ctx.f0.f64 = ctx.f28.f64;
	// b 0x82e9fbf8
	goto loc_82E9FBF8;
loc_82E9FBF4:
	// frsp f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64));
loc_82E9FBF8:
	// stfs f0,320(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 320, temp.u32);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// stb r31,316(r1)
	PPC_STORE_U8(ctx.r1.u32 + 316, ctx.r31.u8);
loc_82E9FC04:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82e9fc14
	if (cr6.eq) goto loc_82E9FC14;
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
loc_82E9FC14:
	// stfd f27,80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f27.u64);
	// addi r5,r26,1632
	ctx.r5.s64 = ctx.r26.s64 + 1632;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82e8c578
	ctx.lr = 0x82E9FC28;
	sub_82E8C578(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82e9fc3c
	if (!cr6.eq) goto loc_82E9FC3C;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// b 0x82e9fc70
	goto loc_82E9FC70;
loc_82E9FC3C:
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcmpu cr6,f0,f31
	cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bge cr6,0x82e9fc50
	if (!cr6.lt) goto loc_82E9FC50;
	// fmr f0,f30
	ctx.f0.f64 = ctx.f30.f64;
	// b 0x82e9fc64
	goto loc_82E9FC64;
loc_82E9FC50:
	// fcmpu cr6,f0,f29
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f0.f64, ctx.f29.f64);
	// ble cr6,0x82e9fc60
	if (!cr6.gt) goto loc_82E9FC60;
	// fmr f0,f28
	ctx.f0.f64 = ctx.f28.f64;
	// b 0x82e9fc64
	goto loc_82E9FC64;
loc_82E9FC60:
	// frsp f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64));
loc_82E9FC64:
	// stfs f0,328(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 328, temp.u32);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// stb r31,324(r1)
	PPC_STORE_U8(ctx.r1.u32 + 324, ctx.r31.u8);
loc_82E9FC70:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82e9fc80
	if (cr6.eq) goto loc_82E9FC80;
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
loc_82E9FC80:
	// std r29,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r29.u64);
	// addi r5,r26,1672
	ctx.r5.s64 = ctx.r26.s64 + 1672;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82e8c2c8
	ctx.lr = 0x82E9FC94;
	sub_82E8C2C8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82e9fca8
	if (!cr6.eq) goto loc_82E9FCA8;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// b 0x82e9fcb8
	goto loc_82E9FCB8;
loc_82E9FCA8:
	// ld r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// stb r31,336(r1)
	PPC_STORE_U8(ctx.r1.u32 + 336, ctx.r31.u8);
	// std r10,344(r1)
	PPC_STORE_U64(ctx.r1.u32 + 344, ctx.r10.u64);
loc_82E9FCB8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82e9fcc8
	if (cr6.eq) goto loc_82E9FCC8;
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
loc_82E9FCC8:
	// stb r29,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r29.u8);
	// addi r5,r26,1716
	ctx.r5.s64 = ctx.r26.s64 + 1716;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82e8c338
	ctx.lr = 0x82E9FCDC;
	sub_82E8C338(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82e9fcf0
	if (!cr6.eq) goto loc_82E9FCF0;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// b 0x82e9fd00
	goto loc_82E9FD00;
loc_82E9FCF0:
	// lbz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 88);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// stb r31,352(r1)
	PPC_STORE_U8(ctx.r1.u32 + 352, ctx.r31.u8);
	// stb r10,353(r1)
	PPC_STORE_U8(ctx.r1.u32 + 353, ctx.r10.u8);
loc_82E9FD00:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82e9fd10
	if (cr6.eq) goto loc_82E9FD10;
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
loc_82E9FD10:
	// stfd f27,80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f27.u64);
	// addi r5,r26,1740
	ctx.r5.s64 = ctx.r26.s64 + 1740;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82e8c578
	ctx.lr = 0x82E9FD24;
	sub_82E8C578(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82e9fd38
	if (!cr6.eq) goto loc_82E9FD38;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// b 0x82e9fd6c
	goto loc_82E9FD6C;
loc_82E9FD38:
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcmpu cr6,f0,f31
	cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bge cr6,0x82e9fd4c
	if (!cr6.lt) goto loc_82E9FD4C;
	// fmr f0,f30
	ctx.f0.f64 = ctx.f30.f64;
	// b 0x82e9fd60
	goto loc_82E9FD60;
loc_82E9FD4C:
	// fcmpu cr6,f0,f29
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f0.f64, ctx.f29.f64);
	// ble cr6,0x82e9fd5c
	if (!cr6.gt) goto loc_82E9FD5C;
	// fmr f0,f28
	ctx.f0.f64 = ctx.f28.f64;
	// b 0x82e9fd60
	goto loc_82E9FD60;
loc_82E9FD5C:
	// frsp f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64));
loc_82E9FD60:
	// stfs f0,360(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 360, temp.u32);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// stb r31,356(r1)
	PPC_STORE_U8(ctx.r1.u32 + 356, ctx.r31.u8);
loc_82E9FD6C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82e9fd7c
	if (cr6.eq) goto loc_82E9FD7C;
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
loc_82E9FD7C:
	// stfd f27,80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f27.u64);
	// addi r5,r26,1780
	ctx.r5.s64 = ctx.r26.s64 + 1780;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82e8c578
	ctx.lr = 0x82E9FD90;
	sub_82E8C578(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82e9fda4
	if (!cr6.eq) goto loc_82E9FDA4;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// b 0x82e9fdd8
	goto loc_82E9FDD8;
loc_82E9FDA4:
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcmpu cr6,f0,f31
	cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bge cr6,0x82e9fdb8
	if (!cr6.lt) goto loc_82E9FDB8;
	// fmr f0,f30
	ctx.f0.f64 = ctx.f30.f64;
	// b 0x82e9fdcc
	goto loc_82E9FDCC;
loc_82E9FDB8:
	// fcmpu cr6,f0,f29
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f0.f64, ctx.f29.f64);
	// ble cr6,0x82e9fdc8
	if (!cr6.gt) goto loc_82E9FDC8;
	// fmr f0,f28
	ctx.f0.f64 = ctx.f28.f64;
	// b 0x82e9fdcc
	goto loc_82E9FDCC;
loc_82E9FDC8:
	// frsp f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64));
loc_82E9FDCC:
	// stfs f0,368(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 368, temp.u32);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// stb r31,364(r1)
	PPC_STORE_U8(ctx.r1.u32 + 364, ctx.r31.u8);
loc_82E9FDD8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82e9fde8
	if (cr6.eq) goto loc_82E9FDE8;
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
loc_82E9FDE8:
	// std r29,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r29.u64);
	// addi r5,r26,1820
	ctx.r5.s64 = ctx.r26.s64 + 1820;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82e8c2c8
	ctx.lr = 0x82E9FDFC;
	sub_82E8C2C8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82e9fe10
	if (!cr6.eq) goto loc_82E9FE10;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// b 0x82e9fe20
	goto loc_82E9FE20;
loc_82E9FE10:
	// ld r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// stb r31,376(r1)
	PPC_STORE_U8(ctx.r1.u32 + 376, ctx.r31.u8);
	// std r10,384(r1)
	PPC_STORE_U64(ctx.r1.u32 + 384, ctx.r10.u64);
loc_82E9FE20:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82e9fe30
	if (cr6.eq) goto loc_82E9FE30;
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
loc_82E9FE30:
	// stfd f27,80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f27.u64);
	// addi r5,r26,1860
	ctx.r5.s64 = ctx.r26.s64 + 1860;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82e8c578
	ctx.lr = 0x82E9FE44;
	sub_82E8C578(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82e9fe58
	if (!cr6.eq) goto loc_82E9FE58;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// b 0x82e9fe8c
	goto loc_82E9FE8C;
loc_82E9FE58:
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcmpu cr6,f0,f31
	cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bge cr6,0x82e9fe6c
	if (!cr6.lt) goto loc_82E9FE6C;
	// fmr f0,f30
	ctx.f0.f64 = ctx.f30.f64;
	// b 0x82e9fe80
	goto loc_82E9FE80;
loc_82E9FE6C:
	// fcmpu cr6,f0,f29
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f0.f64, ctx.f29.f64);
	// ble cr6,0x82e9fe7c
	if (!cr6.gt) goto loc_82E9FE7C;
	// fmr f0,f28
	ctx.f0.f64 = ctx.f28.f64;
	// b 0x82e9fe80
	goto loc_82E9FE80;
loc_82E9FE7C:
	// frsp f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64));
loc_82E9FE80:
	// stfs f0,396(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 396, temp.u32);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// stb r31,392(r1)
	PPC_STORE_U8(ctx.r1.u32 + 392, ctx.r31.u8);
loc_82E9FE8C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82e9fe9c
	if (cr6.eq) goto loc_82E9FE9C;
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
loc_82E9FE9C:
	// stfd f27,80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f27.u64);
	// addi r5,r26,1896
	ctx.r5.s64 = ctx.r26.s64 + 1896;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82e8c578
	ctx.lr = 0x82E9FEB0;
	sub_82E8C578(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82e9fec4
	if (!cr6.eq) goto loc_82E9FEC4;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// b 0x82e9fef8
	goto loc_82E9FEF8;
loc_82E9FEC4:
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcmpu cr6,f0,f31
	cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bge cr6,0x82e9fed8
	if (!cr6.lt) goto loc_82E9FED8;
	// fmr f0,f30
	ctx.f0.f64 = ctx.f30.f64;
	// b 0x82e9feec
	goto loc_82E9FEEC;
loc_82E9FED8:
	// fcmpu cr6,f0,f29
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f0.f64, ctx.f29.f64);
	// ble cr6,0x82e9fee8
	if (!cr6.gt) goto loc_82E9FEE8;
	// fmr f0,f28
	ctx.f0.f64 = ctx.f28.f64;
	// b 0x82e9feec
	goto loc_82E9FEEC;
loc_82E9FEE8:
	// frsp f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64));
loc_82E9FEEC:
	// stfs f0,404(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 404, temp.u32);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// stb r31,400(r1)
	PPC_STORE_U8(ctx.r1.u32 + 400, ctx.r31.u8);
loc_82E9FEF8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82e9ff08
	if (cr6.eq) goto loc_82E9FF08;
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
loc_82E9FF08:
	// stfd f27,80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f27.u64);
	// addi r5,r26,1924
	ctx.r5.s64 = ctx.r26.s64 + 1924;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82e8c578
	ctx.lr = 0x82E9FF1C;
	sub_82E8C578(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82e9ff30
	if (!cr6.eq) goto loc_82E9FF30;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// b 0x82e9ff64
	goto loc_82E9FF64;
loc_82E9FF30:
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcmpu cr6,f0,f31
	cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bge cr6,0x82e9ff44
	if (!cr6.lt) goto loc_82E9FF44;
	// fmr f0,f30
	ctx.f0.f64 = ctx.f30.f64;
	// b 0x82e9ff58
	goto loc_82E9FF58;
loc_82E9FF44:
	// fcmpu cr6,f0,f29
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f0.f64, ctx.f29.f64);
	// ble cr6,0x82e9ff54
	if (!cr6.gt) goto loc_82E9FF54;
	// fmr f0,f28
	ctx.f0.f64 = ctx.f28.f64;
	// b 0x82e9ff58
	goto loc_82E9FF58;
loc_82E9FF54:
	// frsp f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64));
loc_82E9FF58:
	// stfs f0,412(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 412, temp.u32);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// stb r31,408(r1)
	PPC_STORE_U8(ctx.r1.u32 + 408, ctx.r31.u8);
loc_82E9FF64:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82e9ff74
	if (cr6.eq) goto loc_82E9FF74;
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
loc_82E9FF74:
	// stfd f27,80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f27.u64);
	// addi r5,r26,1948
	ctx.r5.s64 = ctx.r26.s64 + 1948;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82e8c578
	ctx.lr = 0x82E9FF88;
	sub_82E8C578(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82e9ff9c
	if (!cr6.eq) goto loc_82E9FF9C;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// b 0x82e9ffd0
	goto loc_82E9FFD0;
loc_82E9FF9C:
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcmpu cr6,f0,f31
	cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bge cr6,0x82e9ffb0
	if (!cr6.lt) goto loc_82E9FFB0;
	// fmr f0,f30
	ctx.f0.f64 = ctx.f30.f64;
	// b 0x82e9ffc4
	goto loc_82E9FFC4;
loc_82E9FFB0:
	// fcmpu cr6,f0,f29
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f0.f64, ctx.f29.f64);
	// ble cr6,0x82e9ffc0
	if (!cr6.gt) goto loc_82E9FFC0;
	// fmr f0,f28
	ctx.f0.f64 = ctx.f28.f64;
	// b 0x82e9ffc4
	goto loc_82E9FFC4;
loc_82E9FFC0:
	// frsp f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64));
loc_82E9FFC4:
	// stfs f0,420(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 420, temp.u32);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// stb r31,416(r1)
	PPC_STORE_U8(ctx.r1.u32 + 416, ctx.r31.u8);
loc_82E9FFD0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82e9ffe0
	if (cr6.eq) goto loc_82E9FFE0;
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
loc_82E9FFE0:
	// std r29,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r29.u64);
	// addi r5,r26,1980
	ctx.r5.s64 = ctx.r26.s64 + 1980;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82e8c2c8
	ctx.lr = 0x82E9FFF4;
	sub_82E8C2C8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ea0008
	if (!cr6.eq) goto loc_82EA0008;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// b 0x82ea002c
	goto loc_82EA002C;
loc_82EA0008:
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// cmpld cr6,r11,r28
	cr6.compare<uint64_t>(ctx.r11.u64, ctx.r28.u64, xer);
	// ble cr6,0x82ea001c
	if (!cr6.gt) goto loc_82EA001C;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// b 0x82ea0020
	goto loc_82EA0020;
loc_82EA001C:
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
loc_82EA0020:
	// stw r11,428(r1)
	PPC_STORE_U32(ctx.r1.u32 + 428, ctx.r11.u32);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// stb r31,424(r1)
	PPC_STORE_U8(ctx.r1.u32 + 424, ctx.r31.u8);
loc_82EA002C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ea003c
	if (cr6.eq) goto loc_82EA003C;
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
loc_82EA003C:
	// std r29,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r29.u64);
	// addi r5,r26,1996
	ctx.r5.s64 = ctx.r26.s64 + 1996;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82e8c2c8
	ctx.lr = 0x82EA0050;
	sub_82E8C2C8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ea0064
	if (!cr6.eq) goto loc_82EA0064;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// b 0x82ea0088
	goto loc_82EA0088;
loc_82EA0064:
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// cmpld cr6,r11,r28
	cr6.compare<uint64_t>(ctx.r11.u64, ctx.r28.u64, xer);
	// ble cr6,0x82ea0078
	if (!cr6.gt) goto loc_82EA0078;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// b 0x82ea007c
	goto loc_82EA007C;
loc_82EA0078:
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
loc_82EA007C:
	// stw r11,436(r1)
	PPC_STORE_U32(ctx.r1.u32 + 436, ctx.r11.u32);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// stb r31,432(r1)
	PPC_STORE_U8(ctx.r1.u32 + 432, ctx.r31.u8);
loc_82EA0088:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ea0098
	if (cr6.eq) goto loc_82EA0098;
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
loc_82EA0098:
	// stfd f27,80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f27.u64);
	// addi r5,r26,2012
	ctx.r5.s64 = ctx.r26.s64 + 2012;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82e8c578
	ctx.lr = 0x82EA00AC;
	sub_82E8C578(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ea00c0
	if (!cr6.eq) goto loc_82EA00C0;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// b 0x82ea00f4
	goto loc_82EA00F4;
loc_82EA00C0:
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcmpu cr6,f0,f31
	cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bge cr6,0x82ea00d4
	if (!cr6.lt) goto loc_82EA00D4;
	// fmr f0,f30
	ctx.f0.f64 = ctx.f30.f64;
	// b 0x82ea00e8
	goto loc_82EA00E8;
loc_82EA00D4:
	// fcmpu cr6,f0,f29
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f0.f64, ctx.f29.f64);
	// ble cr6,0x82ea00e4
	if (!cr6.gt) goto loc_82EA00E4;
	// fmr f0,f28
	ctx.f0.f64 = ctx.f28.f64;
	// b 0x82ea00e8
	goto loc_82EA00E8;
loc_82EA00E4:
	// frsp f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64));
loc_82EA00E8:
	// stfs f0,444(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 444, temp.u32);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// stb r31,440(r1)
	PPC_STORE_U8(ctx.r1.u32 + 440, ctx.r31.u8);
loc_82EA00F4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ea0104
	if (cr6.eq) goto loc_82EA0104;
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
loc_82EA0104:
	// stfd f27,80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f27.u64);
	// addi r5,r26,2024
	ctx.r5.s64 = ctx.r26.s64 + 2024;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82e8c578
	ctx.lr = 0x82EA0118;
	sub_82E8C578(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ea012c
	if (!cr6.eq) goto loc_82EA012C;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// b 0x82ea0160
	goto loc_82EA0160;
loc_82EA012C:
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcmpu cr6,f0,f31
	cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bge cr6,0x82ea0140
	if (!cr6.lt) goto loc_82EA0140;
	// fmr f0,f30
	ctx.f0.f64 = ctx.f30.f64;
	// b 0x82ea0154
	goto loc_82EA0154;
loc_82EA0140:
	// fcmpu cr6,f0,f29
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f0.f64, ctx.f29.f64);
	// ble cr6,0x82ea0150
	if (!cr6.gt) goto loc_82EA0150;
	// fmr f0,f28
	ctx.f0.f64 = ctx.f28.f64;
	// b 0x82ea0154
	goto loc_82EA0154;
loc_82EA0150:
	// frsp f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64));
loc_82EA0154:
	// stfs f0,452(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 452, temp.u32);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// stb r31,448(r1)
	PPC_STORE_U8(ctx.r1.u32 + 448, ctx.r31.u8);
loc_82EA0160:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ea0170
	if (cr6.eq) goto loc_82EA0170;
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
loc_82EA0170:
	// stfd f27,80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f27.u64);
	// addi r5,r26,2044
	ctx.r5.s64 = ctx.r26.s64 + 2044;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82e8c578
	ctx.lr = 0x82EA0184;
	sub_82E8C578(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ea0198
	if (!cr6.eq) goto loc_82EA0198;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// b 0x82ea01cc
	goto loc_82EA01CC;
loc_82EA0198:
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcmpu cr6,f0,f31
	cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bge cr6,0x82ea01ac
	if (!cr6.lt) goto loc_82EA01AC;
	// fmr f0,f30
	ctx.f0.f64 = ctx.f30.f64;
	// b 0x82ea01c0
	goto loc_82EA01C0;
loc_82EA01AC:
	// fcmpu cr6,f0,f29
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f0.f64, ctx.f29.f64);
	// ble cr6,0x82ea01bc
	if (!cr6.gt) goto loc_82EA01BC;
	// fmr f0,f28
	ctx.f0.f64 = ctx.f28.f64;
	// b 0x82ea01c0
	goto loc_82EA01C0;
loc_82EA01BC:
	// frsp f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64));
loc_82EA01C0:
	// stfs f0,460(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 460, temp.u32);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// stb r31,456(r1)
	PPC_STORE_U8(ctx.r1.u32 + 456, ctx.r31.u8);
loc_82EA01CC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ea01dc
	if (cr6.eq) goto loc_82EA01DC;
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
loc_82EA01DC:
	// stfd f27,80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f27.u64);
	// addi r5,r26,2060
	ctx.r5.s64 = ctx.r26.s64 + 2060;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82e8c578
	ctx.lr = 0x82EA01F0;
	sub_82E8C578(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ea0204
	if (!cr6.eq) goto loc_82EA0204;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// b 0x82ea0238
	goto loc_82EA0238;
loc_82EA0204:
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcmpu cr6,f0,f31
	cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bge cr6,0x82ea0218
	if (!cr6.lt) goto loc_82EA0218;
	// fmr f0,f30
	ctx.f0.f64 = ctx.f30.f64;
	// b 0x82ea022c
	goto loc_82EA022C;
loc_82EA0218:
	// fcmpu cr6,f0,f29
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f0.f64, ctx.f29.f64);
	// ble cr6,0x82ea0228
	if (!cr6.gt) goto loc_82EA0228;
	// fmr f0,f28
	ctx.f0.f64 = ctx.f28.f64;
	// b 0x82ea022c
	goto loc_82EA022C;
loc_82EA0228:
	// frsp f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64));
loc_82EA022C:
	// stfs f0,468(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 468, temp.u32);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// stb r31,464(r1)
	PPC_STORE_U8(ctx.r1.u32 + 464, ctx.r31.u8);
loc_82EA0238:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ea0248
	if (cr6.eq) goto loc_82EA0248;
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
loc_82EA0248:
	// stfd f27,80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f27.u64);
	// addi r5,r26,2104
	ctx.r5.s64 = ctx.r26.s64 + 2104;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82e8c578
	ctx.lr = 0x82EA025C;
	sub_82E8C578(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ea0270
	if (!cr6.eq) goto loc_82EA0270;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// b 0x82ea02a4
	goto loc_82EA02A4;
loc_82EA0270:
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcmpu cr6,f0,f31
	cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bge cr6,0x82ea0284
	if (!cr6.lt) goto loc_82EA0284;
	// fmr f0,f30
	ctx.f0.f64 = ctx.f30.f64;
	// b 0x82ea0298
	goto loc_82EA0298;
loc_82EA0284:
	// fcmpu cr6,f0,f29
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f0.f64, ctx.f29.f64);
	// ble cr6,0x82ea0294
	if (!cr6.gt) goto loc_82EA0294;
	// fmr f0,f28
	ctx.f0.f64 = ctx.f28.f64;
	// b 0x82ea0298
	goto loc_82EA0298;
loc_82EA0294:
	// frsp f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64));
loc_82EA0298:
	// stfs f0,476(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 476, temp.u32);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// stb r31,472(r1)
	PPC_STORE_U8(ctx.r1.u32 + 472, ctx.r31.u8);
loc_82EA02A4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ea02b4
	if (cr6.eq) goto loc_82EA02B4;
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
loc_82EA02B4:
	// stfd f27,80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f27.u64);
	// addi r5,r26,2148
	ctx.r5.s64 = ctx.r26.s64 + 2148;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82e8c578
	ctx.lr = 0x82EA02C8;
	sub_82E8C578(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ea02dc
	if (!cr6.eq) goto loc_82EA02DC;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// b 0x82ea0310
	goto loc_82EA0310;
loc_82EA02DC:
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcmpu cr6,f0,f31
	cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bge cr6,0x82ea02f0
	if (!cr6.lt) goto loc_82EA02F0;
	// fmr f0,f30
	ctx.f0.f64 = ctx.f30.f64;
	// b 0x82ea0304
	goto loc_82EA0304;
loc_82EA02F0:
	// fcmpu cr6,f0,f29
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f0.f64, ctx.f29.f64);
	// ble cr6,0x82ea0300
	if (!cr6.gt) goto loc_82EA0300;
	// fmr f0,f28
	ctx.f0.f64 = ctx.f28.f64;
	// b 0x82ea0304
	goto loc_82EA0304;
loc_82EA0300:
	// frsp f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64));
loc_82EA0304:
	// stfs f0,484(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 484, temp.u32);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// stb r31,480(r1)
	PPC_STORE_U8(ctx.r1.u32 + 480, ctx.r31.u8);
loc_82EA0310:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ea0320
	if (cr6.eq) goto loc_82EA0320;
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
loc_82EA0320:
	// lis r11,-32022
	ctx.r11.s64 = -2098593792;
	// addi r5,r26,2160
	ctx.r5.s64 = ctx.r26.s64 + 2160;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-3936
	ctx.r4.s64 = ctx.r11.s64 + -3936;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82e9e7a8
	ctx.lr = 0x82EA033C;
	sub_82E9E7A8(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82ea034c
	if (cr6.eq) goto loc_82EA034C;
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
loc_82EA034C:
	// lis r11,-32022
	ctx.r11.s64 = -2098593792;
	// addi r5,r26,2196
	ctx.r5.s64 = ctx.r26.s64 + 2196;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-3912
	ctx.r4.s64 = ctx.r11.s64 + -3912;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82e9e7a8
	ctx.lr = 0x82EA0368;
	sub_82E9E7A8(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82ea0378
	if (cr6.eq) goto loc_82EA0378;
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
loc_82EA0378:
	// lis r11,-32022
	ctx.r11.s64 = -2098593792;
	// addi r5,r26,2244
	ctx.r5.s64 = ctx.r26.s64 + 2244;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-3888
	ctx.r4.s64 = ctx.r11.s64 + -3888;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82e9e7a8
	ctx.lr = 0x82EA0394;
	sub_82E9E7A8(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82ea03a4
	if (cr6.eq) goto loc_82EA03A4;
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
loc_82EA03A4:
	// stb r29,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r29.u8);
	// addi r5,r26,2292
	ctx.r5.s64 = ctx.r26.s64 + 2292;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82e8c338
	ctx.lr = 0x82EA03B8;
	sub_82E8C338(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ea03cc
	if (!cr6.eq) goto loc_82EA03CC;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// b 0x82ea03dc
	goto loc_82EA03DC;
loc_82EA03CC:
	// lbz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 88);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// stb r31,514(r1)
	PPC_STORE_U8(ctx.r1.u32 + 514, ctx.r31.u8);
	// stb r10,515(r1)
	PPC_STORE_U8(ctx.r1.u32 + 515, ctx.r10.u8);
loc_82EA03DC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ea03ec
	if (cr6.eq) goto loc_82EA03EC;
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
loc_82EA03EC:
	// std r29,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r29.u64);
	// addi r5,r26,2332
	ctx.r5.s64 = ctx.r26.s64 + 2332;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82e8c2c8
	ctx.lr = 0x82EA0400;
	sub_82E8C2C8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ea0414
	if (!cr6.eq) goto loc_82EA0414;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// b 0x82ea0424
	goto loc_82EA0424;
loc_82EA0414:
	// ld r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// stb r31,520(r1)
	PPC_STORE_U8(ctx.r1.u32 + 520, ctx.r31.u8);
	// std r10,528(r1)
	PPC_STORE_U64(ctx.r1.u32 + 528, ctx.r10.u64);
loc_82EA0424:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ea0434
	if (cr6.eq) goto loc_82EA0434;
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
loc_82EA0434:
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82e9f63c
	if (cr6.eq) goto loc_82E9F63C;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82e9e0c8
	ctx.lr = 0x82EA044C;
	sub_82E9E0C8(ctx, base);
	// stw r25,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r25.u32);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82535aa0
	ctx.lr = 0x82EA0458;
	sub_82535AA0(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82535aa0
	ctx.lr = 0x82EA0460;
	sub_82535AA0(ctx, base);
	// stw r25,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r25.u32);
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// bl 0x82535aa0
	ctx.lr = 0x82EA046C;
	sub_82535AA0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,832
	ctx.r1.s64 = ctx.r1.s64 + 832;
	// addi r12,r1,-72
	ctx.r12.s64 = ctx.r1.s64 + -72;
	// bl 0x831ce7c0
	ctx.lr = 0x82EA047C;
	__restfpr_27(ctx, base);
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EA0480"))) PPC_WEAK_FUNC(sub_82EA0480);
PPC_FUNC_IMPL(__imp__sub_82EA0480) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82EA0488;
	__savegprlr_27(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// bl 0x82e6e978
	ctx.lr = 0x82EA04A0;
	sub_82E6E978(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ea0568
	if (cr6.eq) goto loc_82EA0568;
	// lwz r31,24(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// li r4,0
	ctx.r4.s64 = 0;
	// stb r28,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r28.u8);
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x825359d8
	ctx.lr = 0x82EA04BC;
	sub_825359D8(ctx, base);
	// stb r28,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r28.u8);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x825359d8
	ctx.lr = 0x82EA04CC;
	sub_825359D8(ctx, base);
	// cmplwi cr6,r30,1
	cr6.compare<uint32_t>(ctx.r30.u32, 1, xer);
	// blt cr6,0x82ea0524
	if (cr6.lt) goto loc_82EA0524;
	// bne cr6,0x82ea0558
	if (!cr6.eq) goto loc_82EA0558;
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// addi r30,r11,-30564
	ctx.r30.s64 = ctx.r11.s64 + -30564;
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// addi r5,r30,-120
	ctx.r5.s64 = ctx.r30.s64 + -120;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e8c3a8
	ctx.lr = 0x82EA04F4;
	sub_82E8C3A8(ctx, base);
	// stb r3,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r3.u8);
	// cmplwi cr6,r29,1
	cr6.compare<uint32_t>(ctx.r29.u32, 1, xer);
	// blt cr6,0x82ea051c
	if (cr6.lt) goto loc_82EA051C;
	// beq cr6,0x82ea0514
	if (cr6.eq) goto loc_82EA0514;
	// cmplwi cr6,r29,3
	cr6.compare<uint32_t>(ctx.r29.u32, 3, xer);
	// bge cr6,0x82ea0558
	if (!cr6.lt) goto loc_82EA0558;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// b 0x82ea0588
	goto loc_82EA0588;
loc_82EA0514:
	// addi r5,r30,-52
	ctx.r5.s64 = ctx.r30.s64 + -52;
	// b 0x82ea0588
	goto loc_82EA0588;
loc_82EA051C:
	// addi r5,r30,-92
	ctx.r5.s64 = ctx.r30.s64 + -92;
	// b 0x82ea0588
	goto loc_82EA0588;
loc_82EA0524:
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// addi r30,r11,-30564
	ctx.r30.s64 = ctx.r11.s64 + -30564;
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// addi r5,r30,-128
	ctx.r5.s64 = ctx.r30.s64 + -128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e8c3a8
	ctx.lr = 0x82EA0540;
	sub_82E8C3A8(ctx, base);
	// stb r3,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r3.u8);
	// cmplwi cr6,r29,1
	cr6.compare<uint32_t>(ctx.r29.u32, 1, xer);
	// blt cr6,0x82ea0584
	if (cr6.lt) goto loc_82EA0584;
	// beq cr6,0x82ea057c
	if (cr6.eq) goto loc_82EA057C;
	// cmplwi cr6,r29,3
	cr6.compare<uint32_t>(ctx.r29.u32, 3, xer);
	// blt cr6,0x82ea0574
	if (cr6.lt) goto loc_82EA0574;
loc_82EA0558:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82535aa0
	ctx.lr = 0x82EA0560;
	sub_82535AA0(ctx, base);
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x82535aa0
	ctx.lr = 0x82EA0568;
	sub_82535AA0(ctx, base);
loc_82EA0568:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_82EA0574:
	// addi r5,r30,-32
	ctx.r5.s64 = ctx.r30.s64 + -32;
	// b 0x82ea0588
	goto loc_82EA0588;
loc_82EA057C:
	// addi r5,r30,-72
	ctx.r5.s64 = ctx.r30.s64 + -72;
	// b 0x82ea0588
	goto loc_82EA0588;
loc_82EA0584:
	// addi r5,r30,-112
	ctx.r5.s64 = ctx.r30.s64 + -112;
loc_82EA0588:
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e8c3a8
	ctx.lr = 0x82EA0594;
	sub_82E8C3A8(ctx, base);
	// lbz r10,112(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 112);
	// stb r3,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r3.u8);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82ea05b4
	if (cr6.eq) goto loc_82EA05B4;
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82e9f580
	ctx.lr = 0x82EA05B0;
	sub_82E9F580(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
loc_82EA05B4:
	// lbz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82ea05d8
	if (cr6.eq) goto loc_82EA05D8;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82e9f580
	ctx.lr = 0x82EA05CC;
	sub_82E9F580(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// clrlwi r10,r28,24
	ctx.r10.u64 = ctx.r28.u32 & 0xFF;
	// or r28,r11,r10
	ctx.r28.u64 = ctx.r11.u64 | ctx.r10.u64;
loc_82EA05D8:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82535aa0
	ctx.lr = 0x82EA05E0;
	sub_82535AA0(ctx, base);
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x82535aa0
	ctx.lr = 0x82EA05E8;
	sub_82535AA0(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EA05F4"))) PPC_WEAK_FUNC(sub_82EA05F4);
PPC_FUNC_IMPL(__imp__sub_82EA05F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EA05F8"))) PPC_WEAK_FUNC(sub_82EA05F8);
PPC_FUNC_IMPL(__imp__sub_82EA05F8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x82EA0600;
	__savegprlr_24(ctx, base);
	// stfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.f31.u64);
	// stwu r1,-720(r1)
	ea = -720 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82e95f20
	ctx.lr = 0x82EA061C;
	sub_82E95F20(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r31.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r28,r11,-27380
	ctx.r28.s64 = ctx.r11.s64 + -27380;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r5,r28,-724
	ctx.r5.s64 = ctx.r28.s64 + -724;
	// mr r25,r31
	ctx.r25.u64 = ctx.r31.u64;
	// bl 0x82e8c1e8
	ctx.lr = 0x82EA0640;
	sub_82E8C1E8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// li r30,1
	ctx.r30.s64 = 1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ea0658
	if (!cr6.eq) goto loc_82EA0658;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// b 0x82ea0668
	goto loc_82EA0668;
loc_82EA0658:
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stb r30,456(r1)
	PPC_STORE_U8(ctx.r1.u32 + 456, ctx.r30.u8);
	// stw r10,460(r1)
	PPC_STORE_U32(ctx.r1.u32 + 460, ctx.r10.u32);
loc_82EA0668:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ea0678
	if (cr6.eq) goto loc_82EA0678;
	// mr r25,r30
	ctx.r25.u64 = ctx.r30.u64;
loc_82EA0678:
	// std r31,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r31.u64);
	// addi r5,r28,-704
	ctx.r5.s64 = ctx.r28.s64 + -704;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82e8c2c8
	ctx.lr = 0x82EA068C;
	sub_82E8C2C8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// li r10,-1
	ctx.r10.s64 = -1;
	// li r26,-1
	ctx.r26.s64 = -1;
	// clrldi r27,r10,32
	ctx.r27.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ea06ac
	if (!cr6.eq) goto loc_82EA06AC;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// b 0x82ea06d0
	goto loc_82EA06D0;
loc_82EA06AC:
	// ld r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// cmpld cr6,r11,r27
	cr6.compare<uint64_t>(ctx.r11.u64, ctx.r27.u64, xer);
	// ble cr6,0x82ea06c0
	if (!cr6.gt) goto loc_82EA06C0;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// b 0x82ea06c4
	goto loc_82EA06C4;
loc_82EA06C0:
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
loc_82EA06C4:
	// stw r11,468(r1)
	PPC_STORE_U32(ctx.r1.u32 + 468, ctx.r11.u32);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stb r30,464(r1)
	PPC_STORE_U8(ctx.r1.u32 + 464, ctx.r30.u8);
loc_82EA06D0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ea06e0
	if (cr6.eq) goto loc_82EA06E0;
	// mr r25,r30
	ctx.r25.u64 = ctx.r30.u64;
loc_82EA06E0:
	// std r31,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r31.u64);
	// addi r5,r28,-680
	ctx.r5.s64 = ctx.r28.s64 + -680;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82e8c2c8
	ctx.lr = 0x82EA06F4;
	sub_82E8C2C8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ea0708
	if (!cr6.eq) goto loc_82EA0708;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// b 0x82ea072c
	goto loc_82EA072C;
loc_82EA0708:
	// ld r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// cmpld cr6,r11,r27
	cr6.compare<uint64_t>(ctx.r11.u64, ctx.r27.u64, xer);
	// ble cr6,0x82ea071c
	if (!cr6.gt) goto loc_82EA071C;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// b 0x82ea0720
	goto loc_82EA0720;
loc_82EA071C:
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
loc_82EA0720:
	// stw r11,476(r1)
	PPC_STORE_U32(ctx.r1.u32 + 476, ctx.r11.u32);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stb r30,472(r1)
	PPC_STORE_U8(ctx.r1.u32 + 472, ctx.r30.u8);
loc_82EA072C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ea073c
	if (cr6.eq) goto loc_82EA073C;
	// mr r25,r30
	ctx.r25.u64 = ctx.r30.u64;
loc_82EA073C:
	// std r31,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r31.u64);
	// addi r5,r28,-648
	ctx.r5.s64 = ctx.r28.s64 + -648;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82e8c2c8
	ctx.lr = 0x82EA0750;
	sub_82E8C2C8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ea0764
	if (!cr6.eq) goto loc_82EA0764;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// b 0x82ea0788
	goto loc_82EA0788;
loc_82EA0764:
	// ld r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// cmpld cr6,r11,r27
	cr6.compare<uint64_t>(ctx.r11.u64, ctx.r27.u64, xer);
	// ble cr6,0x82ea0778
	if (!cr6.gt) goto loc_82EA0778;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// b 0x82ea077c
	goto loc_82EA077C;
loc_82EA0778:
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
loc_82EA077C:
	// stw r11,484(r1)
	PPC_STORE_U32(ctx.r1.u32 + 484, ctx.r11.u32);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stb r30,480(r1)
	PPC_STORE_U8(ctx.r1.u32 + 480, ctx.r30.u8);
loc_82EA0788:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ea0798
	if (cr6.eq) goto loc_82EA0798;
	// mr r25,r30
	ctx.r25.u64 = ctx.r30.u64;
loc_82EA0798:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r5,r28,-600
	ctx.r5.s64 = ctx.r28.s64 + -600;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lfd f31,9000(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r11.u32 + 9000);
	// stfd f31,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f31.u64);
	// bl 0x82e8c578
	ctx.lr = 0x82EA07B4;
	sub_82E8C578(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82ea07c8
	if (!cr6.eq) goto loc_82EA07C8;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// b 0x82ea07d8
	goto loc_82EA07D8;
loc_82EA07C8:
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stfd f0,496(r1)
	PPC_STORE_U64(ctx.r1.u32 + 496, ctx.f0.u64);
	// stb r30,488(r1)
	PPC_STORE_U8(ctx.r1.u32 + 488, ctx.r30.u8);
loc_82EA07D8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ea07e8
	if (cr6.eq) goto loc_82EA07E8;
	// mr r25,r30
	ctx.r25.u64 = ctx.r30.u64;
loc_82EA07E8:
	// stfd f31,88(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f31.u64);
	// addi r5,r28,-556
	ctx.r5.s64 = ctx.r28.s64 + -556;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82e8c578
	ctx.lr = 0x82EA07FC;
	sub_82E8C578(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ea0810
	if (!cr6.eq) goto loc_82EA0810;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// b 0x82ea0820
	goto loc_82EA0820;
loc_82EA0810:
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stfd f0,512(r1)
	PPC_STORE_U64(ctx.r1.u32 + 512, ctx.f0.u64);
	// stb r30,504(r1)
	PPC_STORE_U8(ctx.r1.u32 + 504, ctx.r30.u8);
loc_82EA0820:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ea0830
	if (cr6.eq) goto loc_82EA0830;
	// mr r25,r30
	ctx.r25.u64 = ctx.r30.u64;
loc_82EA0830:
	// std r31,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r31.u64);
	// addi r5,r28,-504
	ctx.r5.s64 = ctx.r28.s64 + -504;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82e8c2c8
	ctx.lr = 0x82EA0844;
	sub_82E8C2C8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ea0858
	if (!cr6.eq) goto loc_82EA0858;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// b 0x82ea087c
	goto loc_82EA087C;
loc_82EA0858:
	// ld r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// cmpld cr6,r11,r27
	cr6.compare<uint64_t>(ctx.r11.u64, ctx.r27.u64, xer);
	// ble cr6,0x82ea086c
	if (!cr6.gt) goto loc_82EA086C;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// b 0x82ea0870
	goto loc_82EA0870;
loc_82EA086C:
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
loc_82EA0870:
	// stw r11,524(r1)
	PPC_STORE_U32(ctx.r1.u32 + 524, ctx.r11.u32);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stb r30,520(r1)
	PPC_STORE_U8(ctx.r1.u32 + 520, ctx.r30.u8);
loc_82EA087C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ea088c
	if (cr6.eq) goto loc_82EA088C;
	// mr r25,r30
	ctx.r25.u64 = ctx.r30.u64;
loc_82EA088C:
	// stb r31,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r31.u8);
	// addi r5,r28,-456
	ctx.r5.s64 = ctx.r28.s64 + -456;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82e8c338
	ctx.lr = 0x82EA08A0;
	sub_82E8C338(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ea08b4
	if (!cr6.eq) goto loc_82EA08B4;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// b 0x82ea08c4
	goto loc_82EA08C4;
loc_82EA08B4:
	// lbz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stb r30,528(r1)
	PPC_STORE_U8(ctx.r1.u32 + 528, ctx.r30.u8);
	// stb r10,529(r1)
	PPC_STORE_U8(ctx.r1.u32 + 529, ctx.r10.u8);
loc_82EA08C4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ea08d4
	if (cr6.eq) goto loc_82EA08D4;
	// mr r25,r30
	ctx.r25.u64 = ctx.r30.u64;
loc_82EA08D4:
	// std r31,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r31.u64);
	// addi r5,r28,-428
	ctx.r5.s64 = ctx.r28.s64 + -428;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82e8c2c8
	ctx.lr = 0x82EA08E8;
	sub_82E8C2C8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ea08fc
	if (!cr6.eq) goto loc_82EA08FC;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// b 0x82ea0920
	goto loc_82EA0920;
loc_82EA08FC:
	// ld r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// cmpld cr6,r11,r27
	cr6.compare<uint64_t>(ctx.r11.u64, ctx.r27.u64, xer);
	// ble cr6,0x82ea0910
	if (!cr6.gt) goto loc_82EA0910;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// b 0x82ea0914
	goto loc_82EA0914;
loc_82EA0910:
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
loc_82EA0914:
	// stw r11,536(r1)
	PPC_STORE_U32(ctx.r1.u32 + 536, ctx.r11.u32);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stb r30,532(r1)
	PPC_STORE_U8(ctx.r1.u32 + 532, ctx.r30.u8);
loc_82EA0920:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ea0930
	if (cr6.eq) goto loc_82EA0930;
	// mr r25,r30
	ctx.r25.u64 = ctx.r30.u64;
loc_82EA0930:
	// std r31,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r31.u64);
	// addi r5,r28,-396
	ctx.r5.s64 = ctx.r28.s64 + -396;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82e8c2c8
	ctx.lr = 0x82EA0944;
	sub_82E8C2C8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ea0958
	if (!cr6.eq) goto loc_82EA0958;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// b 0x82ea097c
	goto loc_82EA097C;
loc_82EA0958:
	// ld r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// cmpld cr6,r11,r27
	cr6.compare<uint64_t>(ctx.r11.u64, ctx.r27.u64, xer);
	// ble cr6,0x82ea096c
	if (!cr6.gt) goto loc_82EA096C;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// b 0x82ea0970
	goto loc_82EA0970;
loc_82EA096C:
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
loc_82EA0970:
	// stw r11,544(r1)
	PPC_STORE_U32(ctx.r1.u32 + 544, ctx.r11.u32);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stb r30,540(r1)
	PPC_STORE_U8(ctx.r1.u32 + 540, ctx.r30.u8);
loc_82EA097C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ea098c
	if (cr6.eq) goto loc_82EA098C;
	// mr r25,r30
	ctx.r25.u64 = ctx.r30.u64;
loc_82EA098C:
	// stb r31,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r31.u8);
	// addi r5,r28,-352
	ctx.r5.s64 = ctx.r28.s64 + -352;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82e8c338
	ctx.lr = 0x82EA09A0;
	sub_82E8C338(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ea09b4
	if (!cr6.eq) goto loc_82EA09B4;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// b 0x82ea09c4
	goto loc_82EA09C4;
loc_82EA09B4:
	// lbz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stb r30,548(r1)
	PPC_STORE_U8(ctx.r1.u32 + 548, ctx.r30.u8);
	// stb r10,549(r1)
	PPC_STORE_U8(ctx.r1.u32 + 549, ctx.r10.u8);
loc_82EA09C4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ea09d4
	if (cr6.eq) goto loc_82EA09D4;
	// mr r25,r30
	ctx.r25.u64 = ctx.r30.u64;
loc_82EA09D4:
	// std r31,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r31.u64);
	// addi r5,r28,-328
	ctx.r5.s64 = ctx.r28.s64 + -328;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82e8c2c8
	ctx.lr = 0x82EA09E8;
	sub_82E8C2C8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ea09fc
	if (!cr6.eq) goto loc_82EA09FC;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// b 0x82ea0a20
	goto loc_82EA0A20;
loc_82EA09FC:
	// ld r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// cmpld cr6,r11,r27
	cr6.compare<uint64_t>(ctx.r11.u64, ctx.r27.u64, xer);
	// ble cr6,0x82ea0a10
	if (!cr6.gt) goto loc_82EA0A10;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// b 0x82ea0a14
	goto loc_82EA0A14;
loc_82EA0A10:
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
loc_82EA0A14:
	// stw r11,556(r1)
	PPC_STORE_U32(ctx.r1.u32 + 556, ctx.r11.u32);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stb r30,552(r1)
	PPC_STORE_U8(ctx.r1.u32 + 552, ctx.r30.u8);
loc_82EA0A20:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ea0a30
	if (cr6.eq) goto loc_82EA0A30;
	// mr r25,r30
	ctx.r25.u64 = ctx.r30.u64;
loc_82EA0A30:
	// std r31,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r31.u64);
	// addi r5,r28,-300
	ctx.r5.s64 = ctx.r28.s64 + -300;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82e8c2c8
	ctx.lr = 0x82EA0A44;
	sub_82E8C2C8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ea0a58
	if (!cr6.eq) goto loc_82EA0A58;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// b 0x82ea0a7c
	goto loc_82EA0A7C;
loc_82EA0A58:
	// ld r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// cmpld cr6,r11,r27
	cr6.compare<uint64_t>(ctx.r11.u64, ctx.r27.u64, xer);
	// ble cr6,0x82ea0a6c
	if (!cr6.gt) goto loc_82EA0A6C;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// b 0x82ea0a70
	goto loc_82EA0A70;
loc_82EA0A6C:
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
loc_82EA0A70:
	// stw r11,564(r1)
	PPC_STORE_U32(ctx.r1.u32 + 564, ctx.r11.u32);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stb r30,560(r1)
	PPC_STORE_U8(ctx.r1.u32 + 560, ctx.r30.u8);
loc_82EA0A7C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ea0a8c
	if (cr6.eq) goto loc_82EA0A8C;
	// mr r25,r30
	ctx.r25.u64 = ctx.r30.u64;
loc_82EA0A8C:
	// std r31,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r31.u64);
	// addi r5,r28,-268
	ctx.r5.s64 = ctx.r28.s64 + -268;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82e8c2c8
	ctx.lr = 0x82EA0AA0;
	sub_82E8C2C8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ea0ab4
	if (!cr6.eq) goto loc_82EA0AB4;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// b 0x82ea0ad8
	goto loc_82EA0AD8;
loc_82EA0AB4:
	// ld r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// cmpld cr6,r11,r27
	cr6.compare<uint64_t>(ctx.r11.u64, ctx.r27.u64, xer);
	// ble cr6,0x82ea0ac8
	if (!cr6.gt) goto loc_82EA0AC8;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// b 0x82ea0acc
	goto loc_82EA0ACC;
loc_82EA0AC8:
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
loc_82EA0ACC:
	// stw r11,572(r1)
	PPC_STORE_U32(ctx.r1.u32 + 572, ctx.r11.u32);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stb r30,568(r1)
	PPC_STORE_U8(ctx.r1.u32 + 568, ctx.r30.u8);
loc_82EA0AD8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ea0ae8
	if (cr6.eq) goto loc_82EA0AE8;
	// mr r25,r30
	ctx.r25.u64 = ctx.r30.u64;
loc_82EA0AE8:
	// stb r31,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r31.u8);
	// addi r5,r28,-228
	ctx.r5.s64 = ctx.r28.s64 + -228;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82e8c338
	ctx.lr = 0x82EA0AFC;
	sub_82E8C338(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ea0b10
	if (!cr6.eq) goto loc_82EA0B10;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// b 0x82ea0b20
	goto loc_82EA0B20;
loc_82EA0B10:
	// lbz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stb r30,576(r1)
	PPC_STORE_U8(ctx.r1.u32 + 576, ctx.r30.u8);
	// stb r10,577(r1)
	PPC_STORE_U8(ctx.r1.u32 + 577, ctx.r10.u8);
loc_82EA0B20:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ea0b30
	if (cr6.eq) goto loc_82EA0B30;
	// mr r25,r30
	ctx.r25.u64 = ctx.r30.u64;
loc_82EA0B30:
	// std r31,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r31.u64);
	// addi r5,r28,-192
	ctx.r5.s64 = ctx.r28.s64 + -192;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82e8c2c8
	ctx.lr = 0x82EA0B44;
	sub_82E8C2C8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ea0b58
	if (!cr6.eq) goto loc_82EA0B58;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// b 0x82ea0b7c
	goto loc_82EA0B7C;
loc_82EA0B58:
	// ld r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// cmpld cr6,r11,r27
	cr6.compare<uint64_t>(ctx.r11.u64, ctx.r27.u64, xer);
	// ble cr6,0x82ea0b6c
	if (!cr6.gt) goto loc_82EA0B6C;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// b 0x82ea0b70
	goto loc_82EA0B70;
loc_82EA0B6C:
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
loc_82EA0B70:
	// stw r11,584(r1)
	PPC_STORE_U32(ctx.r1.u32 + 584, ctx.r11.u32);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stb r30,580(r1)
	PPC_STORE_U8(ctx.r1.u32 + 580, ctx.r30.u8);
loc_82EA0B7C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ea0b8c
	if (cr6.eq) goto loc_82EA0B8C;
	// mr r25,r30
	ctx.r25.u64 = ctx.r30.u64;
loc_82EA0B8C:
	// std r31,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r31.u64);
	// addi r5,r28,-156
	ctx.r5.s64 = ctx.r28.s64 + -156;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82e8c2c8
	ctx.lr = 0x82EA0BA0;
	sub_82E8C2C8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ea0bb4
	if (!cr6.eq) goto loc_82EA0BB4;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// b 0x82ea0bd8
	goto loc_82EA0BD8;
loc_82EA0BB4:
	// ld r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// cmpld cr6,r11,r27
	cr6.compare<uint64_t>(ctx.r11.u64, ctx.r27.u64, xer);
	// ble cr6,0x82ea0bc8
	if (!cr6.gt) goto loc_82EA0BC8;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// b 0x82ea0bcc
	goto loc_82EA0BCC;
loc_82EA0BC8:
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
loc_82EA0BCC:
	// stw r11,592(r1)
	PPC_STORE_U32(ctx.r1.u32 + 592, ctx.r11.u32);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stb r30,588(r1)
	PPC_STORE_U8(ctx.r1.u32 + 588, ctx.r30.u8);
loc_82EA0BD8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ea0be8
	if (cr6.eq) goto loc_82EA0BE8;
	// mr r25,r30
	ctx.r25.u64 = ctx.r30.u64;
loc_82EA0BE8:
	// std r31,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r31.u64);
	// addi r5,r28,-120
	ctx.r5.s64 = ctx.r28.s64 + -120;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82e8c2c8
	ctx.lr = 0x82EA0BFC;
	sub_82E8C2C8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ea0c10
	if (!cr6.eq) goto loc_82EA0C10;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// b 0x82ea0c34
	goto loc_82EA0C34;
loc_82EA0C10:
	// ld r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// cmpld cr6,r11,r27
	cr6.compare<uint64_t>(ctx.r11.u64, ctx.r27.u64, xer);
	// ble cr6,0x82ea0c24
	if (!cr6.gt) goto loc_82EA0C24;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// b 0x82ea0c28
	goto loc_82EA0C28;
loc_82EA0C24:
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
loc_82EA0C28:
	// stw r11,600(r1)
	PPC_STORE_U32(ctx.r1.u32 + 600, ctx.r11.u32);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stb r30,596(r1)
	PPC_STORE_U8(ctx.r1.u32 + 596, ctx.r30.u8);
loc_82EA0C34:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ea0c44
	if (cr6.eq) goto loc_82EA0C44;
	// mr r25,r30
	ctx.r25.u64 = ctx.r30.u64;
loc_82EA0C44:
	// stb r31,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r31.u8);
	// addi r5,r28,-88
	ctx.r5.s64 = ctx.r28.s64 + -88;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82e8c338
	ctx.lr = 0x82EA0C58;
	sub_82E8C338(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ea0c6c
	if (!cr6.eq) goto loc_82EA0C6C;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// b 0x82ea0c7c
	goto loc_82EA0C7C;
loc_82EA0C6C:
	// lbz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stb r30,604(r1)
	PPC_STORE_U8(ctx.r1.u32 + 604, ctx.r30.u8);
	// stb r10,605(r1)
	PPC_STORE_U8(ctx.r1.u32 + 605, ctx.r10.u8);
loc_82EA0C7C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ea0c8c
	if (cr6.eq) goto loc_82EA0C8C;
	// mr r25,r30
	ctx.r25.u64 = ctx.r30.u64;
loc_82EA0C8C:
	// lis r11,-32022
	ctx.r11.s64 = -2098593792;
	// stb r31,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r31.u8);
	// addi r5,r28,-60
	ctx.r5.s64 = ctx.r28.s64 + -60;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r4,r11,-3864
	ctx.r4.s64 = ctx.r11.s64 + -3864;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82e9e888
	ctx.lr = 0x82EA0CAC;
	sub_82E9E888(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82ea0cbc
	if (cr6.eq) goto loc_82EA0CBC;
	// mr r25,r30
	ctx.r25.u64 = ctx.r30.u64;
loc_82EA0CBC:
	// lbz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82ea0cd8
	if (!cr6.eq) goto loc_82EA0CD8;
loc_82EA0CC8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,720
	ctx.r1.s64 = ctx.r1.s64 + 720;
	// lfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_82EA0CD8:
	// stb r31,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r31.u8);
	// addi r5,r28,-32
	ctx.r5.s64 = ctx.r28.s64 + -32;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82e8c338
	ctx.lr = 0x82EA0CEC;
	sub_82E8C338(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ea0d00
	if (!cr6.eq) goto loc_82EA0D00;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// b 0x82ea0d10
	goto loc_82EA0D10;
loc_82EA0D00:
	// lbz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stb r30,608(r1)
	PPC_STORE_U8(ctx.r1.u32 + 608, ctx.r30.u8);
	// stb r10,609(r1)
	PPC_STORE_U8(ctx.r1.u32 + 609, ctx.r10.u8);
loc_82EA0D10:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ea0d20
	if (cr6.eq) goto loc_82EA0D20;
	// mr r25,r30
	ctx.r25.u64 = ctx.r30.u64;
loc_82EA0D20:
	// std r31,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r31.u64);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82e8c2c8
	ctx.lr = 0x82EA0D34;
	sub_82E8C2C8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ea0d48
	if (!cr6.eq) goto loc_82EA0D48;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// b 0x82ea0d58
	goto loc_82EA0D58;
loc_82EA0D48:
	// ld r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stb r30,616(r1)
	PPC_STORE_U8(ctx.r1.u32 + 616, ctx.r30.u8);
	// std r10,624(r1)
	PPC_STORE_U64(ctx.r1.u32 + 624, ctx.r10.u64);
loc_82EA0D58:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ea0d68
	if (cr6.eq) goto loc_82EA0D68;
	// mr r25,r30
	ctx.r25.u64 = ctx.r30.u64;
loc_82EA0D68:
	// clrlwi r11,r25,24
	ctx.r11.u64 = ctx.r25.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ea0cc8
	if (cr6.eq) goto loc_82EA0CC8;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82e9e0c8
	ctx.lr = 0x82EA0D80;
	sub_82E9E0C8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,720
	ctx.r1.s64 = ctx.r1.s64 + 720;
	// lfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EA0D90"))) PPC_WEAK_FUNC(sub_82EA0D90);
PPC_FUNC_IMPL(__imp__sub_82EA0D90) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x82EA0D98;
	__savegprlr_25(ctx, base);
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// li r5,88
	ctx.r5.s64 = 88;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// bl 0x831ce980
	ctx.lr = 0x82EA0DB4;
	sub_831CE980(ctx, base);
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r26,r11,12496
	ctx.r26.s64 = ctx.r11.s64 + 12496;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r26,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r26.u32);
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// mr r27,r31
	ctx.r27.u64 = ctx.r31.u64;
	// bl 0x825359d8
	ctx.lr = 0x82EA0DD4;
	sub_825359D8(ctx, base);
	// stb r31,152(r1)
	PPC_STORE_U8(ctx.r1.u32 + 152, ctx.r31.u8);
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// bl 0x82535130
	ctx.lr = 0x82EA0DE0;
	sub_82535130(ctx, base);
	// stb r31,152(r1)
	PPC_STORE_U8(ctx.r1.u32 + 152, ctx.r31.u8);
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// bl 0x82535130
	ctx.lr = 0x82EA0DEC;
	sub_82535130(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// bl 0x825369e8
	ctx.lr = 0x82EA0DF8;
	sub_825369E8(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// stb r11,152(r1)
	PPC_STORE_U8(ctx.r1.u32 + 152, ctx.r11.u8);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x825359d8
	ctx.lr = 0x82EA0E0C;
	sub_825359D8(ctx, base);
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// addi r29,r11,-30420
	ctx.r29.s64 = ctx.r11.s64 + -30420;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x82e8c3a8
	ctx.lr = 0x82EA0E24;
	sub_82E8C3A8(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82ea0e54
	if (cr6.eq) goto loc_82EA0E54;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82e9e058
	ctx.lr = 0x82EA0E3C;
	sub_82E9E058(ctx, base);
	// lbz r10,120(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 120);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82ea0e74
	if (!cr6.eq) goto loc_82EA0E74;
loc_82EA0E48:
	// stw r26,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r26.u32);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82535aa0
	ctx.lr = 0x82EA0E54;
	sub_82535AA0(ctx, base);
loc_82EA0E54:
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82535aa0
	ctx.lr = 0x82EA0E5C;
	sub_82535AA0(ctx, base);
	// stw r26,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r26.u32);
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// bl 0x82535aa0
	ctx.lr = 0x82EA0E68;
	sub_82535AA0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_82EA0E74:
	// std r31,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r31.u64);
	// addi r5,r29,3076
	ctx.r5.s64 = ctx.r29.s64 + 3076;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82e8c2c8
	ctx.lr = 0x82EA0E88;
	sub_82E8C2C8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// li r10,-1
	ctx.r10.s64 = -1;
	// li r28,-1
	ctx.r28.s64 = -1;
	// clrldi r30,r10,32
	ctx.r30.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ea0ea8
	if (!cr6.eq) goto loc_82EA0EA8;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// b 0x82ea0ec8
	goto loc_82EA0EC8;
loc_82EA0EA8:
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// cmpld cr6,r11,r30
	cr6.compare<uint64_t>(ctx.r11.u64, ctx.r30.u64, xer);
	// ble cr6,0x82ea0ebc
	if (!cr6.gt) goto loc_82EA0EBC;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// b 0x82ea0ec0
	goto loc_82EA0EC0;
loc_82EA0EBC:
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
loc_82EA0EC0:
	// stw r11,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r11.u32);
	// li r11,1
	ctx.r11.s64 = 1;
loc_82EA0EC8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ea0ed8
	if (cr6.eq) goto loc_82EA0ED8;
	// li r27,1
	ctx.r27.s64 = 1;
loc_82EA0ED8:
	// std r31,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r31.u64);
	// addi r5,r29,3112
	ctx.r5.s64 = ctx.r29.s64 + 3112;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82e8c2c8
	ctx.lr = 0x82EA0EEC;
	sub_82E8C2C8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ea0f00
	if (!cr6.eq) goto loc_82EA0F00;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// b 0x82ea0f20
	goto loc_82EA0F20;
loc_82EA0F00:
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// cmpld cr6,r11,r30
	cr6.compare<uint64_t>(ctx.r11.u64, ctx.r30.u64, xer);
	// ble cr6,0x82ea0f14
	if (!cr6.gt) goto loc_82EA0F14;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// b 0x82ea0f18
	goto loc_82EA0F18;
loc_82EA0F14:
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
loc_82EA0F18:
	// stw r11,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r11.u32);
	// li r11,1
	ctx.r11.s64 = 1;
loc_82EA0F20:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ea0f30
	if (cr6.eq) goto loc_82EA0F30;
	// li r27,1
	ctx.r27.s64 = 1;
loc_82EA0F30:
	// std r31,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r31.u64);
	// addi r5,r29,3164
	ctx.r5.s64 = ctx.r29.s64 + 3164;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82e8c2c8
	ctx.lr = 0x82EA0F44;
	sub_82E8C2C8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ea0f58
	if (!cr6.eq) goto loc_82EA0F58;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// b 0x82ea0f78
	goto loc_82EA0F78;
loc_82EA0F58:
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// cmpld cr6,r11,r30
	cr6.compare<uint64_t>(ctx.r11.u64, ctx.r30.u64, xer);
	// ble cr6,0x82ea0f6c
	if (!cr6.gt) goto loc_82EA0F6C;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// b 0x82ea0f70
	goto loc_82EA0F70;
loc_82EA0F6C:
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
loc_82EA0F70:
	// stw r11,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r11.u32);
	// li r11,1
	ctx.r11.s64 = 1;
loc_82EA0F78:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ea0f88
	if (cr6.eq) goto loc_82EA0F88;
	// li r27,1
	ctx.r27.s64 = 1;
loc_82EA0F88:
	// std r31,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r31.u64);
	// addi r5,r29,3216
	ctx.r5.s64 = ctx.r29.s64 + 3216;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82e8c2c8
	ctx.lr = 0x82EA0F9C;
	sub_82E8C2C8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ea0fb0
	if (!cr6.eq) goto loc_82EA0FB0;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// b 0x82ea0fd0
	goto loc_82EA0FD0;
loc_82EA0FB0:
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// cmpld cr6,r11,r30
	cr6.compare<uint64_t>(ctx.r11.u64, ctx.r30.u64, xer);
	// ble cr6,0x82ea0fc4
	if (!cr6.gt) goto loc_82EA0FC4;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// b 0x82ea0fc8
	goto loc_82EA0FC8;
loc_82EA0FC4:
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
loc_82EA0FC8:
	// stw r11,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r11.u32);
	// li r11,1
	ctx.r11.s64 = 1;
loc_82EA0FD0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ea0fe0
	if (cr6.eq) goto loc_82EA0FE0;
	// li r27,1
	ctx.r27.s64 = 1;
loc_82EA0FE0:
	// std r31,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r31.u64);
	// addi r5,r29,3272
	ctx.r5.s64 = ctx.r29.s64 + 3272;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82e8c2c8
	ctx.lr = 0x82EA0FF4;
	sub_82E8C2C8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ea1008
	if (!cr6.eq) goto loc_82EA1008;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// b 0x82ea1028
	goto loc_82EA1028;
loc_82EA1008:
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// cmpld cr6,r11,r30
	cr6.compare<uint64_t>(ctx.r11.u64, ctx.r30.u64, xer);
	// ble cr6,0x82ea101c
	if (!cr6.gt) goto loc_82EA101C;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// b 0x82ea1020
	goto loc_82EA1020;
loc_82EA101C:
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
loc_82EA1020:
	// stw r11,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r11.u32);
	// li r11,1
	ctx.r11.s64 = 1;
loc_82EA1028:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ea1038
	if (cr6.eq) goto loc_82EA1038;
	// li r27,1
	ctx.r27.s64 = 1;
loc_82EA1038:
	// std r31,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r31.u64);
	// addi r5,r29,3336
	ctx.r5.s64 = ctx.r29.s64 + 3336;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82e8c2c8
	ctx.lr = 0x82EA104C;
	sub_82E8C2C8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ea1060
	if (!cr6.eq) goto loc_82EA1060;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// b 0x82ea1080
	goto loc_82EA1080;
loc_82EA1060:
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// cmpld cr6,r11,r30
	cr6.compare<uint64_t>(ctx.r11.u64, ctx.r30.u64, xer);
	// ble cr6,0x82ea1074
	if (!cr6.gt) goto loc_82EA1074;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// b 0x82ea1078
	goto loc_82EA1078;
loc_82EA1074:
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
loc_82EA1078:
	// stw r11,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r11.u32);
	// li r11,1
	ctx.r11.s64 = 1;
loc_82EA1080:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ea1090
	if (cr6.eq) goto loc_82EA1090;
	// li r27,1
	ctx.r27.s64 = 1;
loc_82EA1090:
	// std r31,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r31.u64);
	// addi r5,r29,3384
	ctx.r5.s64 = ctx.r29.s64 + 3384;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82e8c2c8
	ctx.lr = 0x82EA10A4;
	sub_82E8C2C8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ea10b8
	if (!cr6.eq) goto loc_82EA10B8;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// b 0x82ea10d8
	goto loc_82EA10D8;
loc_82EA10B8:
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// cmpld cr6,r11,r30
	cr6.compare<uint64_t>(ctx.r11.u64, ctx.r30.u64, xer);
	// ble cr6,0x82ea10cc
	if (!cr6.gt) goto loc_82EA10CC;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// b 0x82ea10d0
	goto loc_82EA10D0;
loc_82EA10CC:
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
loc_82EA10D0:
	// stw r11,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r11.u32);
	// li r11,1
	ctx.r11.s64 = 1;
loc_82EA10D8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ea10e8
	if (cr6.eq) goto loc_82EA10E8;
	// li r27,1
	ctx.r27.s64 = 1;
loc_82EA10E8:
	// std r31,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r31.u64);
	// addi r5,r29,3440
	ctx.r5.s64 = ctx.r29.s64 + 3440;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82e8c2c8
	ctx.lr = 0x82EA10FC;
	sub_82E8C2C8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ea1110
	if (!cr6.eq) goto loc_82EA1110;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// b 0x82ea1130
	goto loc_82EA1130;
loc_82EA1110:
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// cmpld cr6,r11,r30
	cr6.compare<uint64_t>(ctx.r11.u64, ctx.r30.u64, xer);
	// ble cr6,0x82ea1124
	if (!cr6.gt) goto loc_82EA1124;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// b 0x82ea1128
	goto loc_82EA1128;
loc_82EA1124:
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
loc_82EA1128:
	// stw r11,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r11.u32);
	// li r11,1
	ctx.r11.s64 = 1;
loc_82EA1130:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ea1140
	if (cr6.eq) goto loc_82EA1140;
	// li r27,1
	ctx.r27.s64 = 1;
loc_82EA1140:
	// std r31,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r31.u64);
	// addi r5,r29,3476
	ctx.r5.s64 = ctx.r29.s64 + 3476;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82e8c2c8
	ctx.lr = 0x82EA1154;
	sub_82E8C2C8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ea1168
	if (!cr6.eq) goto loc_82EA1168;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// b 0x82ea1188
	goto loc_82EA1188;
loc_82EA1168:
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// cmpld cr6,r11,r30
	cr6.compare<uint64_t>(ctx.r11.u64, ctx.r30.u64, xer);
	// ble cr6,0x82ea117c
	if (!cr6.gt) goto loc_82EA117C;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// b 0x82ea1180
	goto loc_82EA1180;
loc_82EA117C:
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
loc_82EA1180:
	// stw r11,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r11.u32);
	// li r11,1
	ctx.r11.s64 = 1;
loc_82EA1188:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ea1198
	if (cr6.eq) goto loc_82EA1198;
	// li r27,1
	ctx.r27.s64 = 1;
loc_82EA1198:
	// std r31,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r31.u64);
	// addi r5,r29,3512
	ctx.r5.s64 = ctx.r29.s64 + 3512;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82e8c2c8
	ctx.lr = 0x82EA11AC;
	sub_82E8C2C8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ea11c0
	if (!cr6.eq) goto loc_82EA11C0;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// b 0x82ea11e0
	goto loc_82EA11E0;
loc_82EA11C0:
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// cmpld cr6,r11,r30
	cr6.compare<uint64_t>(ctx.r11.u64, ctx.r30.u64, xer);
	// ble cr6,0x82ea11d4
	if (!cr6.gt) goto loc_82EA11D4;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// b 0x82ea11d8
	goto loc_82EA11D8;
loc_82EA11D4:
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
loc_82EA11D8:
	// stw r11,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r11.u32);
	// li r11,1
	ctx.r11.s64 = 1;
loc_82EA11E0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ea11f0
	if (cr6.eq) goto loc_82EA11F0;
	// li r27,1
	ctx.r27.s64 = 1;
loc_82EA11F0:
	// std r31,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r31.u64);
	// addi r5,r29,3548
	ctx.r5.s64 = ctx.r29.s64 + 3548;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82e8c2c8
	ctx.lr = 0x82EA1204;
	sub_82E8C2C8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ea1218
	if (!cr6.eq) goto loc_82EA1218;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// b 0x82ea1238
	goto loc_82EA1238;
loc_82EA1218:
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// cmpld cr6,r11,r30
	cr6.compare<uint64_t>(ctx.r11.u64, ctx.r30.u64, xer);
	// ble cr6,0x82ea122c
	if (!cr6.gt) goto loc_82EA122C;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// b 0x82ea1230
	goto loc_82EA1230;
loc_82EA122C:
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
loc_82EA1230:
	// stw r11,216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 216, ctx.r11.u32);
	// li r11,1
	ctx.r11.s64 = 1;
loc_82EA1238:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ea1248
	if (cr6.eq) goto loc_82EA1248;
	// li r27,1
	ctx.r27.s64 = 1;
loc_82EA1248:
	// std r31,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r31.u64);
	// addi r5,r29,3584
	ctx.r5.s64 = ctx.r29.s64 + 3584;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82e8c2c8
	ctx.lr = 0x82EA125C;
	sub_82E8C2C8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ea1270
	if (!cr6.eq) goto loc_82EA1270;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// b 0x82ea1290
	goto loc_82EA1290;
loc_82EA1270:
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// cmpld cr6,r11,r30
	cr6.compare<uint64_t>(ctx.r11.u64, ctx.r30.u64, xer);
	// ble cr6,0x82ea1284
	if (!cr6.gt) goto loc_82EA1284;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// b 0x82ea1288
	goto loc_82EA1288;
loc_82EA1284:
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
loc_82EA1288:
	// stw r11,220(r1)
	PPC_STORE_U32(ctx.r1.u32 + 220, ctx.r11.u32);
	// li r11,1
	ctx.r11.s64 = 1;
loc_82EA1290:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ea12a0
	if (cr6.eq) goto loc_82EA12A0;
	// li r27,1
	ctx.r27.s64 = 1;
loc_82EA12A0:
	// std r31,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r31.u64);
	// addi r5,r29,3636
	ctx.r5.s64 = ctx.r29.s64 + 3636;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82e8c2c8
	ctx.lr = 0x82EA12B4;
	sub_82E8C2C8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ea12c8
	if (!cr6.eq) goto loc_82EA12C8;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// b 0x82ea12e8
	goto loc_82EA12E8;
loc_82EA12C8:
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// cmpld cr6,r11,r30
	cr6.compare<uint64_t>(ctx.r11.u64, ctx.r30.u64, xer);
	// ble cr6,0x82ea12dc
	if (!cr6.gt) goto loc_82EA12DC;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// b 0x82ea12e0
	goto loc_82EA12E0;
loc_82EA12DC:
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
loc_82EA12E0:
	// stw r11,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r11.u32);
	// li r11,1
	ctx.r11.s64 = 1;
loc_82EA12E8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ea12f8
	if (cr6.eq) goto loc_82EA12F8;
	// li r27,1
	ctx.r27.s64 = 1;
loc_82EA12F8:
	// std r31,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r31.u64);
	// addi r5,r29,3688
	ctx.r5.s64 = ctx.r29.s64 + 3688;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82e8c2c8
	ctx.lr = 0x82EA130C;
	sub_82E8C2C8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ea1320
	if (!cr6.eq) goto loc_82EA1320;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// b 0x82ea1340
	goto loc_82EA1340;
loc_82EA1320:
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// cmpld cr6,r11,r30
	cr6.compare<uint64_t>(ctx.r11.u64, ctx.r30.u64, xer);
	// ble cr6,0x82ea1334
	if (!cr6.gt) goto loc_82EA1334;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// b 0x82ea1338
	goto loc_82EA1338;
loc_82EA1334:
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
loc_82EA1338:
	// stw r11,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r11.u32);
	// li r11,1
	ctx.r11.s64 = 1;
loc_82EA1340:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ea1350
	if (cr6.eq) goto loc_82EA1350;
	// li r27,1
	ctx.r27.s64 = 1;
loc_82EA1350:
	// std r31,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r31.u64);
	// addi r5,r29,3752
	ctx.r5.s64 = ctx.r29.s64 + 3752;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82e8c2c8
	ctx.lr = 0x82EA1364;
	sub_82E8C2C8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ea1378
	if (!cr6.eq) goto loc_82EA1378;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// b 0x82ea1398
	goto loc_82EA1398;
loc_82EA1378:
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// cmpld cr6,r11,r30
	cr6.compare<uint64_t>(ctx.r11.u64, ctx.r30.u64, xer);
	// ble cr6,0x82ea138c
	if (!cr6.gt) goto loc_82EA138C;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// b 0x82ea1390
	goto loc_82EA1390;
loc_82EA138C:
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
loc_82EA1390:
	// stw r11,232(r1)
	PPC_STORE_U32(ctx.r1.u32 + 232, ctx.r11.u32);
	// li r11,1
	ctx.r11.s64 = 1;
loc_82EA1398:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ea13a8
	if (cr6.eq) goto loc_82EA13A8;
	// li r27,1
	ctx.r27.s64 = 1;
loc_82EA13A8:
	// std r31,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r31.u64);
	// addi r5,r29,3812
	ctx.r5.s64 = ctx.r29.s64 + 3812;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82e8c2c8
	ctx.lr = 0x82EA13BC;
	sub_82E8C2C8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ea13d0
	if (!cr6.eq) goto loc_82EA13D0;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// b 0x82ea13f0
	goto loc_82EA13F0;
loc_82EA13D0:
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// cmpld cr6,r11,r30
	cr6.compare<uint64_t>(ctx.r11.u64, ctx.r30.u64, xer);
	// ble cr6,0x82ea13e4
	if (!cr6.gt) goto loc_82EA13E4;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// b 0x82ea13e8
	goto loc_82EA13E8;
loc_82EA13E4:
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
loc_82EA13E8:
	// stw r11,236(r1)
	PPC_STORE_U32(ctx.r1.u32 + 236, ctx.r11.u32);
	// li r11,1
	ctx.r11.s64 = 1;
loc_82EA13F0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ea1400
	if (cr6.eq) goto loc_82EA1400;
	// li r27,1
	ctx.r27.s64 = 1;
loc_82EA1400:
	// std r31,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r31.u64);
	// addi r5,r29,3852
	ctx.r5.s64 = ctx.r29.s64 + 3852;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82e8c2c8
	ctx.lr = 0x82EA1414;
	sub_82E8C2C8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ea1428
	if (!cr6.eq) goto loc_82EA1428;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// b 0x82ea1448
	goto loc_82EA1448;
loc_82EA1428:
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// cmpld cr6,r11,r30
	cr6.compare<uint64_t>(ctx.r11.u64, ctx.r30.u64, xer);
	// ble cr6,0x82ea143c
	if (!cr6.gt) goto loc_82EA143C;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// b 0x82ea1440
	goto loc_82EA1440;
loc_82EA143C:
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
loc_82EA1440:
	// stw r11,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r11.u32);
	// li r11,1
	ctx.r11.s64 = 1;
loc_82EA1448:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ea1458
	if (cr6.eq) goto loc_82EA1458;
	// li r27,1
	ctx.r27.s64 = 1;
loc_82EA1458:
	// std r31,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r31.u64);
	// addi r5,r29,3912
	ctx.r5.s64 = ctx.r29.s64 + 3912;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82e8c2c8
	ctx.lr = 0x82EA146C;
	sub_82E8C2C8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ea1480
	if (!cr6.eq) goto loc_82EA1480;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// b 0x82ea14a0
	goto loc_82EA14A0;
loc_82EA1480:
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// cmpld cr6,r11,r30
	cr6.compare<uint64_t>(ctx.r11.u64, ctx.r30.u64, xer);
	// ble cr6,0x82ea1494
	if (!cr6.gt) goto loc_82EA1494;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// b 0x82ea1498
	goto loc_82EA1498;
loc_82EA1494:
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
loc_82EA1498:
	// stw r11,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r11.u32);
	// li r11,1
	ctx.r11.s64 = 1;
loc_82EA14A0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ea14b0
	if (cr6.eq) goto loc_82EA14B0;
	// li r27,1
	ctx.r27.s64 = 1;
loc_82EA14B0:
	// std r31,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r31.u64);
	// addi r5,r29,4004
	ctx.r5.s64 = ctx.r29.s64 + 4004;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82e8c2c8
	ctx.lr = 0x82EA14C4;
	sub_82E8C2C8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ea14d8
	if (!cr6.eq) goto loc_82EA14D8;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// b 0x82ea14f8
	goto loc_82EA14F8;
loc_82EA14D8:
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// cmpld cr6,r11,r30
	cr6.compare<uint64_t>(ctx.r11.u64, ctx.r30.u64, xer);
	// ble cr6,0x82ea14ec
	if (!cr6.gt) goto loc_82EA14EC;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// b 0x82ea14f0
	goto loc_82EA14F0;
loc_82EA14EC:
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
loc_82EA14F0:
	// stw r11,248(r1)
	PPC_STORE_U32(ctx.r1.u32 + 248, ctx.r11.u32);
	// li r11,1
	ctx.r11.s64 = 1;
loc_82EA14F8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ea1508
	if (cr6.eq) goto loc_82EA1508;
	// li r27,1
	ctx.r27.s64 = 1;
loc_82EA1508:
	// std r31,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r31.u64);
	// addi r5,r29,4072
	ctx.r5.s64 = ctx.r29.s64 + 4072;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82e8c2c8
	ctx.lr = 0x82EA151C;
	sub_82E8C2C8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ea1530
	if (!cr6.eq) goto loc_82EA1530;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// b 0x82ea1550
	goto loc_82EA1550;
loc_82EA1530:
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// cmpld cr6,r11,r30
	cr6.compare<uint64_t>(ctx.r11.u64, ctx.r30.u64, xer);
	// ble cr6,0x82ea1544
	if (!cr6.gt) goto loc_82EA1544;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// b 0x82ea1548
	goto loc_82EA1548;
loc_82EA1544:
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
loc_82EA1548:
	// stw r11,252(r1)
	PPC_STORE_U32(ctx.r1.u32 + 252, ctx.r11.u32);
	// li r11,1
	ctx.r11.s64 = 1;
loc_82EA1550:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ea1560
	if (cr6.eq) goto loc_82EA1560;
	// li r27,1
	ctx.r27.s64 = 1;
loc_82EA1560:
	// std r31,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r31.u64);
	// addi r5,r29,4156
	ctx.r5.s64 = ctx.r29.s64 + 4156;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82e8c2c8
	ctx.lr = 0x82EA1574;
	sub_82E8C2C8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ea1588
	if (!cr6.eq) goto loc_82EA1588;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// b 0x82ea15a8
	goto loc_82EA15A8;
loc_82EA1588:
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// cmpld cr6,r11,r30
	cr6.compare<uint64_t>(ctx.r11.u64, ctx.r30.u64, xer);
	// ble cr6,0x82ea159c
	if (!cr6.gt) goto loc_82EA159C;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// b 0x82ea15a0
	goto loc_82EA15A0;
loc_82EA159C:
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
loc_82EA15A0:
	// stw r11,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, ctx.r11.u32);
	// li r11,1
	ctx.r11.s64 = 1;
loc_82EA15A8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ea15b8
	if (cr6.eq) goto loc_82EA15B8;
	// li r27,1
	ctx.r27.s64 = 1;
loc_82EA15B8:
	// std r31,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r31.u64);
	// addi r5,r29,3960
	ctx.r5.s64 = ctx.r29.s64 + 3960;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82e8c2c8
	ctx.lr = 0x82EA15CC;
	sub_82E8C2C8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ea15e0
	if (!cr6.eq) goto loc_82EA15E0;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// b 0x82ea1600
	goto loc_82EA1600;
loc_82EA15E0:
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// cmpld cr6,r11,r30
	cr6.compare<uint64_t>(ctx.r11.u64, ctx.r30.u64, xer);
	// ble cr6,0x82ea15f4
	if (!cr6.gt) goto loc_82EA15F4;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// b 0x82ea15f8
	goto loc_82EA15F8;
loc_82EA15F4:
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
loc_82EA15F8:
	// stw r11,260(r1)
	PPC_STORE_U32(ctx.r1.u32 + 260, ctx.r11.u32);
	// li r11,1
	ctx.r11.s64 = 1;
loc_82EA1600:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ea1610
	if (cr6.eq) goto loc_82EA1610;
	// li r27,1
	ctx.r27.s64 = 1;
loc_82EA1610:
	// clrlwi r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ea0e48
	if (cr6.eq) goto loc_82EA0E48;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// li r5,88
	ctx.r5.s64 = 88;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x831ce980
	ctx.lr = 0x82EA162C;
	sub_831CE980(ctx, base);
	// stw r26,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r26.u32);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82535aa0
	ctx.lr = 0x82EA1638;
	sub_82535AA0(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82535aa0
	ctx.lr = 0x82EA1640;
	sub_82535AA0(ctx, base);
	// stw r26,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r26.u32);
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// bl 0x82535aa0
	ctx.lr = 0x82EA164C;
	sub_82535AA0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EA1658"))) PPC_WEAK_FUNC(sub_82EA1658);
PPC_FUNC_IMPL(__imp__sub_82EA1658) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82EA1660;
	__savegprlr_27(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// bl 0x82e6e978
	ctx.lr = 0x82EA1678;
	sub_82E6E978(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ea1740
	if (cr6.eq) goto loc_82EA1740;
	// lwz r31,24(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// li r4,0
	ctx.r4.s64 = 0;
	// stb r28,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r28.u8);
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x825359d8
	ctx.lr = 0x82EA1694;
	sub_825359D8(ctx, base);
	// stb r28,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r28.u8);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x825359d8
	ctx.lr = 0x82EA16A4;
	sub_825359D8(ctx, base);
	// cmplwi cr6,r30,1
	cr6.compare<uint32_t>(ctx.r30.u32, 1, xer);
	// blt cr6,0x82ea16fc
	if (cr6.lt) goto loc_82EA16FC;
	// bne cr6,0x82ea1730
	if (!cr6.eq) goto loc_82EA1730;
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// addi r30,r11,-30564
	ctx.r30.s64 = ctx.r11.s64 + -30564;
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// addi r5,r30,-120
	ctx.r5.s64 = ctx.r30.s64 + -120;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e8c3a8
	ctx.lr = 0x82EA16CC;
	sub_82E8C3A8(ctx, base);
	// stb r3,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r3.u8);
	// cmplwi cr6,r29,1
	cr6.compare<uint32_t>(ctx.r29.u32, 1, xer);
	// blt cr6,0x82ea16f4
	if (cr6.lt) goto loc_82EA16F4;
	// beq cr6,0x82ea16ec
	if (cr6.eq) goto loc_82EA16EC;
	// cmplwi cr6,r29,3
	cr6.compare<uint32_t>(ctx.r29.u32, 3, xer);
	// bge cr6,0x82ea1730
	if (!cr6.lt) goto loc_82EA1730;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// b 0x82ea1760
	goto loc_82EA1760;
loc_82EA16EC:
	// addi r5,r30,-52
	ctx.r5.s64 = ctx.r30.s64 + -52;
	// b 0x82ea1760
	goto loc_82EA1760;
loc_82EA16F4:
	// addi r5,r30,-92
	ctx.r5.s64 = ctx.r30.s64 + -92;
	// b 0x82ea1760
	goto loc_82EA1760;
loc_82EA16FC:
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// addi r30,r11,-30564
	ctx.r30.s64 = ctx.r11.s64 + -30564;
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// addi r5,r30,-128
	ctx.r5.s64 = ctx.r30.s64 + -128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e8c3a8
	ctx.lr = 0x82EA1718;
	sub_82E8C3A8(ctx, base);
	// stb r3,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r3.u8);
	// cmplwi cr6,r29,1
	cr6.compare<uint32_t>(ctx.r29.u32, 1, xer);
	// blt cr6,0x82ea175c
	if (cr6.lt) goto loc_82EA175C;
	// beq cr6,0x82ea1754
	if (cr6.eq) goto loc_82EA1754;
	// cmplwi cr6,r29,3
	cr6.compare<uint32_t>(ctx.r29.u32, 3, xer);
	// blt cr6,0x82ea174c
	if (cr6.lt) goto loc_82EA174C;
loc_82EA1730:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82535aa0
	ctx.lr = 0x82EA1738;
	sub_82535AA0(ctx, base);
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x82535aa0
	ctx.lr = 0x82EA1740;
	sub_82535AA0(ctx, base);
loc_82EA1740:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_82EA174C:
	// addi r5,r30,-32
	ctx.r5.s64 = ctx.r30.s64 + -32;
	// b 0x82ea1760
	goto loc_82EA1760;
loc_82EA1754:
	// addi r5,r30,-72
	ctx.r5.s64 = ctx.r30.s64 + -72;
	// b 0x82ea1760
	goto loc_82EA1760;
loc_82EA175C:
	// addi r5,r30,-112
	ctx.r5.s64 = ctx.r30.s64 + -112;
loc_82EA1760:
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e8c3a8
	ctx.lr = 0x82EA176C;
	sub_82E8C3A8(ctx, base);
	// lbz r10,112(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 112);
	// stb r3,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r3.u8);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82ea178c
	if (cr6.eq) goto loc_82EA178C;
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82ea0d90
	ctx.lr = 0x82EA1788;
	sub_82EA0D90(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
loc_82EA178C:
	// lbz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82ea17b0
	if (cr6.eq) goto loc_82EA17B0;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82ea0d90
	ctx.lr = 0x82EA17A4;
	sub_82EA0D90(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// clrlwi r10,r28,24
	ctx.r10.u64 = ctx.r28.u32 & 0xFF;
	// or r28,r11,r10
	ctx.r28.u64 = ctx.r11.u64 | ctx.r10.u64;
loc_82EA17B0:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82535aa0
	ctx.lr = 0x82EA17B8;
	sub_82535AA0(ctx, base);
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x82535aa0
	ctx.lr = 0x82EA17C0;
	sub_82535AA0(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EA17CC"))) PPC_WEAK_FUNC(sub_82EA17CC);
PPC_FUNC_IMPL(__imp__sub_82EA17CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EA17D0"))) PPC_WEAK_FUNC(sub_82EA17D0);
PPC_FUNC_IMPL(__imp__sub_82EA17D0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82EA17D8;
	__savegprlr_28(ctx, base);
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// bl 0x82eb31e0
	ctx.lr = 0x82EA17F0;
	sub_82EB31E0(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e9d9a8
	ctx.lr = 0x82EA1800;
	sub_82E9D9A8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r5,88
	ctx.r5.s64 = 88;
	// bl 0x831ce980
	ctx.lr = 0x82EA1814;
	sub_831CE980(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82ea1658
	ctx.lr = 0x82EA1824;
	sub_82EA1658(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ea184c
	if (cr6.eq) goto loc_82EA184C;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r5,88
	ctx.r5.s64 = 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831ce980
	ctx.lr = 0x82EA1840;
	sub_831CE980(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82EA184C:
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ea1874
	if (cr6.eq) goto loc_82EA1874;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// li r5,88
	ctx.r5.s64 = 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831ce980
	ctx.lr = 0x82EA1868;
	sub_831CE980(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82EA1874:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EA1880"))) PPC_WEAK_FUNC(sub_82EA1880);
PPC_FUNC_IMPL(__imp__sub_82EA1880) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x82EA1888;
	__savegprlr_25(ctx, base);
	// addi r12,r1,-64
	ctx.r12.s64 = ctx.r1.s64 + -64;
	// bl 0x831ce774
	ctx.lr = 0x82EA1890;
	__savefpr_27(ctx, base);
	// stwu r1,-384(r1)
	ea = -384 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82e9e5f0
	ctx.lr = 0x82EA18A8;
	sub_82E9E5F0(ctx, base);
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r26,r11,12496
	ctx.r26.s64 = ctx.r11.s64 + 12496;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r26,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r26.u32);
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
	// bl 0x825359d8
	ctx.lr = 0x82EA18C8;
	sub_825359D8(ctx, base);
	// stb r31,152(r1)
	PPC_STORE_U8(ctx.r1.u32 + 152, ctx.r31.u8);
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// bl 0x82535130
	ctx.lr = 0x82EA18D4;
	sub_82535130(ctx, base);
	// stb r31,152(r1)
	PPC_STORE_U8(ctx.r1.u32 + 152, ctx.r31.u8);
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// bl 0x82535130
	ctx.lr = 0x82EA18E0;
	sub_82535130(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// bl 0x825369e8
	ctx.lr = 0x82EA18EC;
	sub_825369E8(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// stb r11,152(r1)
	PPC_STORE_U8(ctx.r1.u32 + 152, ctx.r11.u8);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x825359d8
	ctx.lr = 0x82EA1900;
	sub_825359D8(ctx, base);
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// addi r30,r11,-30396
	ctx.r30.s64 = ctx.r11.s64 + -30396;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x82e8c3a8
	ctx.lr = 0x82EA1918;
	sub_82E8C3A8(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82ea1948
	if (cr6.eq) goto loc_82EA1948;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82e9e058
	ctx.lr = 0x82EA1930;
	sub_82E9E058(ctx, base);
	// lbz r10,120(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 120);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82ea1970
	if (!cr6.eq) goto loc_82EA1970;
loc_82EA193C:
	// stw r26,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r26.u32);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82535aa0
	ctx.lr = 0x82EA1948;
	sub_82535AA0(ctx, base);
loc_82EA1948:
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82535aa0
	ctx.lr = 0x82EA1950;
	sub_82535AA0(ctx, base);
	// stw r26,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r26.u32);
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// bl 0x82535aa0
	ctx.lr = 0x82EA195C;
	sub_82535AA0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// addi r12,r1,-64
	ctx.r12.s64 = ctx.r1.s64 + -64;
	// bl 0x831ce7c0
	ctx.lr = 0x82EA196C;
	__restfpr_27(ctx, base);
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_82EA1970:
	// bl 0x8242a638
	ctx.lr = 0x82EA1974;
	sub_8242A638(ctx, base);
	// std r31,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r31.u64);
	// addi r5,r30,4208
	ctx.r5.s64 = ctx.r30.s64 + 4208;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82e8c2c8
	ctx.lr = 0x82EA1988;
	sub_82E8C2C8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// li r10,-1
	ctx.r10.s64 = -1;
	// li r27,-1
	ctx.r27.s64 = -1;
	// clrldi r28,r10,32
	ctx.r28.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ea19a8
	if (!cr6.eq) goto loc_82EA19A8;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// b 0x82ea19c8
	goto loc_82EA19C8;
loc_82EA19A8:
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// cmpld cr6,r11,r28
	cr6.compare<uint64_t>(ctx.r11.u64, ctx.r28.u64, xer);
	// ble cr6,0x82ea19bc
	if (!cr6.gt) goto loc_82EA19BC;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// b 0x82ea19c0
	goto loc_82EA19C0;
loc_82EA19BC:
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
loc_82EA19C0:
	// stw r11,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r11.u32);
	// li r11,1
	ctx.r11.s64 = 1;
loc_82EA19C8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ea19d8
	if (cr6.eq) goto loc_82EA19D8;
	// li r29,1
	ctx.r29.s64 = 1;
loc_82EA19D8:
	// bl 0x8242a638
	ctx.lr = 0x82EA19DC;
	sub_8242A638(ctx, base);
	// std r31,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r31.u64);
	// addi r5,r30,4224
	ctx.r5.s64 = ctx.r30.s64 + 4224;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82e8c2c8
	ctx.lr = 0x82EA19F0;
	sub_82E8C2C8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ea1a04
	if (!cr6.eq) goto loc_82EA1A04;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// b 0x82ea1a24
	goto loc_82EA1A24;
loc_82EA1A04:
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// cmpld cr6,r11,r28
	cr6.compare<uint64_t>(ctx.r11.u64, ctx.r28.u64, xer);
	// ble cr6,0x82ea1a18
	if (!cr6.gt) goto loc_82EA1A18;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// b 0x82ea1a1c
	goto loc_82EA1A1C;
loc_82EA1A18:
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
loc_82EA1A1C:
	// stw r11,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r11.u32);
	// li r11,1
	ctx.r11.s64 = 1;
loc_82EA1A24:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ea1a34
	if (cr6.eq) goto loc_82EA1A34;
	// li r29,1
	ctx.r29.s64 = 1;
loc_82EA1A34:
	// bl 0x8242a638
	ctx.lr = 0x82EA1A38;
	sub_8242A638(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r5,r30,4268
	ctx.r5.s64 = ctx.r30.s64 + 4268;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lfd f27,9000(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f27.u64 = PPC_LOAD_U64(ctx.r11.u32 + 9000);
	// stfd f27,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f27.u64);
	// bl 0x82e8c578
	ctx.lr = 0x82EA1A54;
	sub_82E8C578(ctx, base);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32231
	ctx.r9.s64 = -2112290816;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// lis r7,-32231
	ctx.r7.s64 = -2112290816;
	// clrlwi r6,r3,24
	ctx.r6.u64 = ctx.r3.u32 & 0xFF;
	// lfs f28,-4660(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -4660);
	ctx.f28.f64 = double(temp.f32);
	// lfd f29,-18168(r9)
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r9.u32 + -18168);
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// lfs f30,-4664(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -4664);
	ctx.f30.f64 = double(temp.f32);
	// lfd f31,-18160(r7)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r7.u32 + -18160);
	// bne cr6,0x82ea1a88
	if (!cr6.eq) goto loc_82EA1A88;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// b 0x82ea1ab8
	goto loc_82EA1AB8;
loc_82EA1A88:
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcmpu cr6,f0,f31
	cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bge cr6,0x82ea1a9c
	if (!cr6.lt) goto loc_82EA1A9C;
	// fmr f0,f30
	ctx.f0.f64 = ctx.f30.f64;
	// b 0x82ea1ab0
	goto loc_82EA1AB0;
loc_82EA1A9C:
	// fcmpu cr6,f0,f29
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f0.f64, ctx.f29.f64);
	// ble cr6,0x82ea1aac
	if (!cr6.gt) goto loc_82EA1AAC;
	// fmr f0,f28
	ctx.f0.f64 = ctx.f28.f64;
	// b 0x82ea1ab0
	goto loc_82EA1AB0;
loc_82EA1AAC:
	// frsp f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64));
loc_82EA1AB0:
	// stfs f0,192(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// li r11,1
	ctx.r11.s64 = 1;
loc_82EA1AB8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ea1ac8
	if (cr6.eq) goto loc_82EA1AC8;
	// li r29,1
	ctx.r29.s64 = 1;
loc_82EA1AC8:
	// bl 0x8242a638
	ctx.lr = 0x82EA1ACC;
	sub_8242A638(ctx, base);
	// stfd f27,80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f27.u64);
	// addi r5,r30,4328
	ctx.r5.s64 = ctx.r30.s64 + 4328;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82e8c578
	ctx.lr = 0x82EA1AE0;
	sub_82E8C578(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ea1af4
	if (!cr6.eq) goto loc_82EA1AF4;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// b 0x82ea1b24
	goto loc_82EA1B24;
loc_82EA1AF4:
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcmpu cr6,f0,f31
	cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bge cr6,0x82ea1b08
	if (!cr6.lt) goto loc_82EA1B08;
	// fmr f0,f30
	ctx.f0.f64 = ctx.f30.f64;
	// b 0x82ea1b1c
	goto loc_82EA1B1C;
loc_82EA1B08:
	// fcmpu cr6,f0,f29
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f0.f64, ctx.f29.f64);
	// ble cr6,0x82ea1b18
	if (!cr6.gt) goto loc_82EA1B18;
	// fmr f0,f28
	ctx.f0.f64 = ctx.f28.f64;
	// b 0x82ea1b1c
	goto loc_82EA1B1C;
loc_82EA1B18:
	// frsp f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64));
loc_82EA1B1C:
	// stfs f0,196(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 196, temp.u32);
	// li r11,1
	ctx.r11.s64 = 1;
loc_82EA1B24:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ea1b34
	if (cr6.eq) goto loc_82EA1B34;
	// li r29,1
	ctx.r29.s64 = 1;
loc_82EA1B34:
	// bl 0x8242a638
	ctx.lr = 0x82EA1B38;
	sub_8242A638(ctx, base);
	// stfd f27,80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f27.u64);
	// addi r5,r30,4388
	ctx.r5.s64 = ctx.r30.s64 + 4388;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82e8c578
	ctx.lr = 0x82EA1B4C;
	sub_82E8C578(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ea1b60
	if (!cr6.eq) goto loc_82EA1B60;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// b 0x82ea1b90
	goto loc_82EA1B90;
loc_82EA1B60:
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcmpu cr6,f0,f31
	cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bge cr6,0x82ea1b74
	if (!cr6.lt) goto loc_82EA1B74;
	// fmr f0,f30
	ctx.f0.f64 = ctx.f30.f64;
	// b 0x82ea1b88
	goto loc_82EA1B88;
loc_82EA1B74:
	// fcmpu cr6,f0,f29
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f0.f64, ctx.f29.f64);
	// ble cr6,0x82ea1b84
	if (!cr6.gt) goto loc_82EA1B84;
	// fmr f0,f28
	ctx.f0.f64 = ctx.f28.f64;
	// b 0x82ea1b88
	goto loc_82EA1B88;
loc_82EA1B84:
	// frsp f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64));
loc_82EA1B88:
	// stfs f0,200(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 200, temp.u32);
	// li r11,1
	ctx.r11.s64 = 1;
loc_82EA1B90:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ea1ba0
	if (cr6.eq) goto loc_82EA1BA0;
	// li r29,1
	ctx.r29.s64 = 1;
loc_82EA1BA0:
	// bl 0x8242a638
	ctx.lr = 0x82EA1BA4;
	sub_8242A638(ctx, base);
	// std r31,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r31.u64);
	// addi r5,r30,4464
	ctx.r5.s64 = ctx.r30.s64 + 4464;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82e8c2c8
	ctx.lr = 0x82EA1BB8;
	sub_82E8C2C8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ea1bcc
	if (!cr6.eq) goto loc_82EA1BCC;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// b 0x82ea1bec
	goto loc_82EA1BEC;
loc_82EA1BCC:
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// cmpld cr6,r11,r28
	cr6.compare<uint64_t>(ctx.r11.u64, ctx.r28.u64, xer);
	// ble cr6,0x82ea1be0
	if (!cr6.gt) goto loc_82EA1BE0;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// b 0x82ea1be4
	goto loc_82EA1BE4;
loc_82EA1BE0:
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
loc_82EA1BE4:
	// stw r11,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r11.u32);
	// li r11,1
	ctx.r11.s64 = 1;
loc_82EA1BEC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ea1bfc
	if (cr6.eq) goto loc_82EA1BFC;
	// li r29,1
	ctx.r29.s64 = 1;
loc_82EA1BFC:
	// bl 0x8242a638
	ctx.lr = 0x82EA1C00;
	sub_8242A638(ctx, base);
	// std r31,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r31.u64);
	// addi r5,r30,4500
	ctx.r5.s64 = ctx.r30.s64 + 4500;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82e8c2c8
	ctx.lr = 0x82EA1C14;
	sub_82E8C2C8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ea1c28
	if (!cr6.eq) goto loc_82EA1C28;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// b 0x82ea1c34
	goto loc_82EA1C34;
loc_82EA1C28:
	// ld r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// li r11,1
	ctx.r11.s64 = 1;
	// std r10,208(r1)
	PPC_STORE_U64(ctx.r1.u32 + 208, ctx.r10.u64);
loc_82EA1C34:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ea1c44
	if (cr6.eq) goto loc_82EA1C44;
	// li r29,1
	ctx.r29.s64 = 1;
loc_82EA1C44:
	// bl 0x8242a638
	ctx.lr = 0x82EA1C48;
	sub_8242A638(ctx, base);
	// stfd f27,80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f27.u64);
	// addi r5,r30,4588
	ctx.r5.s64 = ctx.r30.s64 + 4588;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82e8c578
	ctx.lr = 0x82EA1C5C;
	sub_82E8C578(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ea1c70
	if (!cr6.eq) goto loc_82EA1C70;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// b 0x82ea1ca0
	goto loc_82EA1CA0;
loc_82EA1C70:
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcmpu cr6,f0,f31
	cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bge cr6,0x82ea1c84
	if (!cr6.lt) goto loc_82EA1C84;
	// fmr f0,f30
	ctx.f0.f64 = ctx.f30.f64;
	// b 0x82ea1c98
	goto loc_82EA1C98;
loc_82EA1C84:
	// fcmpu cr6,f0,f29
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f0.f64, ctx.f29.f64);
	// ble cr6,0x82ea1c94
	if (!cr6.gt) goto loc_82EA1C94;
	// fmr f0,f28
	ctx.f0.f64 = ctx.f28.f64;
	// b 0x82ea1c98
	goto loc_82EA1C98;
loc_82EA1C94:
	// frsp f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64));
loc_82EA1C98:
	// stfs f0,216(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 216, temp.u32);
	// li r11,1
	ctx.r11.s64 = 1;
loc_82EA1CA0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ea1cb0
	if (cr6.eq) goto loc_82EA1CB0;
	// li r29,1
	ctx.r29.s64 = 1;
loc_82EA1CB0:
	// bl 0x8242a638
	ctx.lr = 0x82EA1CB4;
	sub_8242A638(ctx, base);
	// stfd f27,80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f27.u64);
	// addi r5,r30,4664
	ctx.r5.s64 = ctx.r30.s64 + 4664;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82e8c578
	ctx.lr = 0x82EA1CC8;
	sub_82E8C578(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ea1cdc
	if (!cr6.eq) goto loc_82EA1CDC;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// b 0x82ea1d0c
	goto loc_82EA1D0C;
loc_82EA1CDC:
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcmpu cr6,f0,f31
	cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bge cr6,0x82ea1cf0
	if (!cr6.lt) goto loc_82EA1CF0;
	// fmr f0,f30
	ctx.f0.f64 = ctx.f30.f64;
	// b 0x82ea1d04
	goto loc_82EA1D04;
loc_82EA1CF0:
	// fcmpu cr6,f0,f29
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f0.f64, ctx.f29.f64);
	// ble cr6,0x82ea1d00
	if (!cr6.gt) goto loc_82EA1D00;
	// fmr f0,f28
	ctx.f0.f64 = ctx.f28.f64;
	// b 0x82ea1d04
	goto loc_82EA1D04;
loc_82EA1D00:
	// frsp f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64));
loc_82EA1D04:
	// stfs f0,220(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 220, temp.u32);
	// li r11,1
	ctx.r11.s64 = 1;
loc_82EA1D0C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ea1d1c
	if (cr6.eq) goto loc_82EA1D1C;
	// li r29,1
	ctx.r29.s64 = 1;
loc_82EA1D1C:
	// bl 0x8242a638
	ctx.lr = 0x82EA1D20;
	sub_8242A638(ctx, base);
	// stb r31,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r31.u8);
	// addi r5,r30,4708
	ctx.r5.s64 = ctx.r30.s64 + 4708;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82e8c338
	ctx.lr = 0x82EA1D34;
	sub_82E8C338(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ea1d48
	if (!cr6.eq) goto loc_82EA1D48;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// b 0x82ea1d54
	goto loc_82EA1D54;
loc_82EA1D48:
	// lbz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 88);
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r10,224(r1)
	PPC_STORE_U8(ctx.r1.u32 + 224, ctx.r10.u8);
loc_82EA1D54:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ea1d64
	if (cr6.eq) goto loc_82EA1D64;
	// li r29,1
	ctx.r29.s64 = 1;
loc_82EA1D64:
	// bl 0x8242a638
	ctx.lr = 0x82EA1D68;
	sub_8242A638(ctx, base);
	// std r31,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r31.u64);
	// addi r5,r30,4776
	ctx.r5.s64 = ctx.r30.s64 + 4776;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82e8c2c8
	ctx.lr = 0x82EA1D7C;
	sub_82E8C2C8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ea1d90
	if (!cr6.eq) goto loc_82EA1D90;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// b 0x82ea1db0
	goto loc_82EA1DB0;
loc_82EA1D90:
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// cmpld cr6,r11,r28
	cr6.compare<uint64_t>(ctx.r11.u64, ctx.r28.u64, xer);
	// ble cr6,0x82ea1da4
	if (!cr6.gt) goto loc_82EA1DA4;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// b 0x82ea1da8
	goto loc_82EA1DA8;
loc_82EA1DA4:
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
loc_82EA1DA8:
	// stw r11,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r11.u32);
	// li r11,1
	ctx.r11.s64 = 1;
loc_82EA1DB0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ea1dc0
	if (cr6.eq) goto loc_82EA1DC0;
	// li r29,1
	ctx.r29.s64 = 1;
loc_82EA1DC0:
	// bl 0x8242a638
	ctx.lr = 0x82EA1DC4;
	sub_8242A638(ctx, base);
	// stfd f27,80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f27.u64);
	// addi r5,r30,4868
	ctx.r5.s64 = ctx.r30.s64 + 4868;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82e8c578
	ctx.lr = 0x82EA1DD8;
	sub_82E8C578(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ea1dec
	if (!cr6.eq) goto loc_82EA1DEC;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// b 0x82ea1e1c
	goto loc_82EA1E1C;
loc_82EA1DEC:
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcmpu cr6,f0,f31
	cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bge cr6,0x82ea1e00
	if (!cr6.lt) goto loc_82EA1E00;
	// fmr f0,f30
	ctx.f0.f64 = ctx.f30.f64;
	// b 0x82ea1e14
	goto loc_82EA1E14;
loc_82EA1E00:
	// fcmpu cr6,f0,f29
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f0.f64, ctx.f29.f64);
	// ble cr6,0x82ea1e10
	if (!cr6.gt) goto loc_82EA1E10;
	// fmr f0,f28
	ctx.f0.f64 = ctx.f28.f64;
	// b 0x82ea1e14
	goto loc_82EA1E14;
loc_82EA1E10:
	// frsp f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64));
loc_82EA1E14:
	// stfs f0,232(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 232, temp.u32);
	// li r11,1
	ctx.r11.s64 = 1;
loc_82EA1E1C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ea1e2c
	if (cr6.eq) goto loc_82EA1E2C;
	// li r29,1
	ctx.r29.s64 = 1;
loc_82EA1E2C:
	// bl 0x8242a638
	ctx.lr = 0x82EA1E30;
	sub_8242A638(ctx, base);
	// stfd f27,80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f27.u64);
	// addi r5,r30,4960
	ctx.r5.s64 = ctx.r30.s64 + 4960;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82e8c578
	ctx.lr = 0x82EA1E44;
	sub_82E8C578(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ea1e58
	if (!cr6.eq) goto loc_82EA1E58;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// b 0x82ea1e88
	goto loc_82EA1E88;
loc_82EA1E58:
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcmpu cr6,f0,f31
	cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bge cr6,0x82ea1e6c
	if (!cr6.lt) goto loc_82EA1E6C;
	// fmr f0,f30
	ctx.f0.f64 = ctx.f30.f64;
	// b 0x82ea1e80
	goto loc_82EA1E80;
loc_82EA1E6C:
	// fcmpu cr6,f0,f29
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f0.f64, ctx.f29.f64);
	// ble cr6,0x82ea1e7c
	if (!cr6.gt) goto loc_82EA1E7C;
	// fmr f0,f28
	ctx.f0.f64 = ctx.f28.f64;
	// b 0x82ea1e80
	goto loc_82EA1E80;
loc_82EA1E7C:
	// frsp f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64));
loc_82EA1E80:
	// stfs f0,236(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 236, temp.u32);
	// li r11,1
	ctx.r11.s64 = 1;
loc_82EA1E88:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ea1e98
	if (cr6.eq) goto loc_82EA1E98;
	// li r29,1
	ctx.r29.s64 = 1;
loc_82EA1E98:
	// bl 0x8242a638
	ctx.lr = 0x82EA1E9C;
	sub_8242A638(ctx, base);
	// stfd f27,80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f27.u64);
	// addi r5,r30,5032
	ctx.r5.s64 = ctx.r30.s64 + 5032;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82e8c578
	ctx.lr = 0x82EA1EB0;
	sub_82E8C578(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ea1ec4
	if (!cr6.eq) goto loc_82EA1EC4;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// b 0x82ea1ef4
	goto loc_82EA1EF4;
loc_82EA1EC4:
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcmpu cr6,f0,f31
	cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bge cr6,0x82ea1ed8
	if (!cr6.lt) goto loc_82EA1ED8;
	// fmr f0,f30
	ctx.f0.f64 = ctx.f30.f64;
	// b 0x82ea1eec
	goto loc_82EA1EEC;
loc_82EA1ED8:
	// fcmpu cr6,f0,f29
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f0.f64, ctx.f29.f64);
	// ble cr6,0x82ea1ee8
	if (!cr6.gt) goto loc_82EA1EE8;
	// fmr f0,f28
	ctx.f0.f64 = ctx.f28.f64;
	// b 0x82ea1eec
	goto loc_82EA1EEC;
loc_82EA1EE8:
	// frsp f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64));
loc_82EA1EEC:
	// stfs f0,240(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 240, temp.u32);
	// li r11,1
	ctx.r11.s64 = 1;
loc_82EA1EF4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ea1f04
	if (cr6.eq) goto loc_82EA1F04;
	// li r29,1
	ctx.r29.s64 = 1;
loc_82EA1F04:
	// bl 0x8242a638
	ctx.lr = 0x82EA1F08;
	sub_8242A638(ctx, base);
	// std r31,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r31.u64);
	// addi r5,r30,5104
	ctx.r5.s64 = ctx.r30.s64 + 5104;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82e8c2c8
	ctx.lr = 0x82EA1F1C;
	sub_82E8C2C8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ea1f30
	if (!cr6.eq) goto loc_82EA1F30;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// b 0x82ea1f50
	goto loc_82EA1F50;
loc_82EA1F30:
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// cmpld cr6,r11,r28
	cr6.compare<uint64_t>(ctx.r11.u64, ctx.r28.u64, xer);
	// ble cr6,0x82ea1f44
	if (!cr6.gt) goto loc_82EA1F44;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// b 0x82ea1f48
	goto loc_82EA1F48;
loc_82EA1F44:
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
loc_82EA1F48:
	// stw r11,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r11.u32);
	// li r11,1
	ctx.r11.s64 = 1;
loc_82EA1F50:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ea1f60
	if (cr6.eq) goto loc_82EA1F60;
	// li r29,1
	ctx.r29.s64 = 1;
loc_82EA1F60:
	// bl 0x8242a638
	ctx.lr = 0x82EA1F64;
	sub_8242A638(ctx, base);
	// std r31,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r31.u64);
	// addi r5,r30,5212
	ctx.r5.s64 = ctx.r30.s64 + 5212;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82e8c2c8
	ctx.lr = 0x82EA1F78;
	sub_82E8C2C8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ea1f8c
	if (!cr6.eq) goto loc_82EA1F8C;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// b 0x82ea1fac
	goto loc_82EA1FAC;
loc_82EA1F8C:
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// cmpld cr6,r11,r28
	cr6.compare<uint64_t>(ctx.r11.u64, ctx.r28.u64, xer);
	// ble cr6,0x82ea1fa0
	if (!cr6.gt) goto loc_82EA1FA0;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// b 0x82ea1fa4
	goto loc_82EA1FA4;
loc_82EA1FA0:
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
loc_82EA1FA4:
	// stw r11,248(r1)
	PPC_STORE_U32(ctx.r1.u32 + 248, ctx.r11.u32);
	// li r11,1
	ctx.r11.s64 = 1;
loc_82EA1FAC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ea1fbc
	if (cr6.eq) goto loc_82EA1FBC;
	// li r29,1
	ctx.r29.s64 = 1;
loc_82EA1FBC:
	// bl 0x8242a638
	ctx.lr = 0x82EA1FC0;
	sub_8242A638(ctx, base);
	// std r31,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r31.u64);
	// addi r5,r30,5320
	ctx.r5.s64 = ctx.r30.s64 + 5320;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82e8c2c8
	ctx.lr = 0x82EA1FD4;
	sub_82E8C2C8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ea1fe8
	if (!cr6.eq) goto loc_82EA1FE8;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// b 0x82ea2008
	goto loc_82EA2008;
loc_82EA1FE8:
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// cmpld cr6,r11,r28
	cr6.compare<uint64_t>(ctx.r11.u64, ctx.r28.u64, xer);
	// ble cr6,0x82ea1ffc
	if (!cr6.gt) goto loc_82EA1FFC;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// b 0x82ea2000
	goto loc_82EA2000;
loc_82EA1FFC:
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
loc_82EA2000:
	// stw r11,252(r1)
	PPC_STORE_U32(ctx.r1.u32 + 252, ctx.r11.u32);
	// li r11,1
	ctx.r11.s64 = 1;
loc_82EA2008:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ea2018
	if (cr6.eq) goto loc_82EA2018;
	// li r29,1
	ctx.r29.s64 = 1;
loc_82EA2018:
	// bl 0x8242a638
	ctx.lr = 0x82EA201C;
	sub_8242A638(ctx, base);
	// std r31,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r31.u64);
	// addi r5,r30,5428
	ctx.r5.s64 = ctx.r30.s64 + 5428;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82e8c2c8
	ctx.lr = 0x82EA2030;
	sub_82E8C2C8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ea2044
	if (!cr6.eq) goto loc_82EA2044;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// b 0x82ea2050
	goto loc_82EA2050;
loc_82EA2044:
	// ld r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// li r11,1
	ctx.r11.s64 = 1;
	// std r10,256(r1)
	PPC_STORE_U64(ctx.r1.u32 + 256, ctx.r10.u64);
loc_82EA2050:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ea2060
	if (cr6.eq) goto loc_82EA2060;
	// li r29,1
	ctx.r29.s64 = 1;
loc_82EA2060:
	// bl 0x8242a638
	ctx.lr = 0x82EA2064;
	sub_8242A638(ctx, base);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// addi r5,r30,5524
	ctx.r5.s64 = ctx.r30.s64 + 5524;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82e8c1e8
	ctx.lr = 0x82EA2078;
	sub_82E8C1E8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ea208c
	if (!cr6.eq) goto loc_82EA208C;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// b 0x82ea2098
	goto loc_82EA2098;
loc_82EA208C:
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r10,264(r1)
	PPC_STORE_U32(ctx.r1.u32 + 264, ctx.r10.u32);
loc_82EA2098:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ea20a8
	if (cr6.eq) goto loc_82EA20A8;
	// li r29,1
	ctx.r29.s64 = 1;
loc_82EA20A8:
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ea193c
	if (cr6.eq) goto loc_82EA193C;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82e9e550
	ctx.lr = 0x82EA20C0;
	sub_82E9E550(ctx, base);
	// stw r26,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r26.u32);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82535aa0
	ctx.lr = 0x82EA20CC;
	sub_82535AA0(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82535aa0
	ctx.lr = 0x82EA20D4;
	sub_82535AA0(ctx, base);
	// stw r26,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r26.u32);
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// bl 0x82535aa0
	ctx.lr = 0x82EA20E0;
	sub_82535AA0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// addi r12,r1,-64
	ctx.r12.s64 = ctx.r1.s64 + -64;
	// bl 0x831ce7c0
	ctx.lr = 0x82EA20F0;
	__restfpr_27(ctx, base);
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EA20F4"))) PPC_WEAK_FUNC(sub_82EA20F4);
PPC_FUNC_IMPL(__imp__sub_82EA20F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EA20F8"))) PPC_WEAK_FUNC(sub_82EA20F8);
PPC_FUNC_IMPL(__imp__sub_82EA20F8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82EA2100;
	__savegprlr_26(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// bl 0x82e6e978
	ctx.lr = 0x82EA2114;
	sub_82E6E978(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ea2198
	if (cr6.eq) goto loc_82EA2198;
	// lwz r31,24(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x825359d8
	ctx.lr = 0x82EA212C;
	sub_825359D8(ctx, base);
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// addi r30,r11,-30596
	ctx.r30.s64 = ctx.r11.s64 + -30596;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r5,r30,-96
	ctx.r5.s64 = ctx.r30.s64 + -96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e8c3a8
	ctx.lr = 0x82EA2148;
	sub_82E8C3A8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ea2190
	if (cr6.eq) goto loc_82EA2190;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82ea1880
	ctx.lr = 0x82EA2164;
	sub_82EA1880(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825359d8
	ctx.lr = 0x82EA2174;
	sub_825359D8(ctx, base);
	// cmplwi cr6,r29,1
	cr6.compare<uint32_t>(ctx.r29.u32, 1, xer);
	// blt cr6,0x82ea2214
	if (cr6.lt) goto loc_82EA2214;
	// beq cr6,0x82ea21dc
	if (cr6.eq) goto loc_82EA21DC;
	// cmplwi cr6,r29,3
	cr6.compare<uint32_t>(ctx.r29.u32, 3, xer);
	// blt cr6,0x82ea21a4
	if (cr6.lt) goto loc_82EA21A4;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82535aa0
	ctx.lr = 0x82EA2190;
	sub_82535AA0(ctx, base);
loc_82EA2190:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82535aa0
	ctx.lr = 0x82EA2198;
	sub_82535AA0(ctx, base);
loc_82EA2198:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_82EA21A4:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e8c3a8
	ctx.lr = 0x82EA21B4;
	sub_82E8C3A8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ea224c
	if (!cr6.eq) goto loc_82EA224C;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82535aa0
	ctx.lr = 0x82EA21C8;
	sub_82535AA0(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82535aa0
	ctx.lr = 0x82EA21D0;
	sub_82535AA0(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_82EA21DC:
	// addi r5,r30,-40
	ctx.r5.s64 = ctx.r30.s64 + -40;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e8c3a8
	ctx.lr = 0x82EA21EC;
	sub_82E8C3A8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ea224c
	if (!cr6.eq) goto loc_82EA224C;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82535aa0
	ctx.lr = 0x82EA2200;
	sub_82535AA0(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82535aa0
	ctx.lr = 0x82EA2208;
	sub_82535AA0(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_82EA2214:
	// addi r5,r30,-80
	ctx.r5.s64 = ctx.r30.s64 + -80;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e8c3a8
	ctx.lr = 0x82EA2224;
	sub_82E8C3A8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ea224c
	if (!cr6.eq) goto loc_82EA224C;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82535aa0
	ctx.lr = 0x82EA2238;
	sub_82535AA0(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82535aa0
	ctx.lr = 0x82EA2240;
	sub_82535AA0(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_82EA224C:
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82ea1880
	ctx.lr = 0x82EA225C;
	sub_82EA1880(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// clrlwi r10,r28,24
	ctx.r10.u64 = ctx.r28.u32 & 0xFF;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// or r31,r11,r10
	ctx.r31.u64 = ctx.r11.u64 | ctx.r10.u64;
	// bl 0x82535aa0
	ctx.lr = 0x82EA2270;
	sub_82535AA0(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82535aa0
	ctx.lr = 0x82EA2278;
	sub_82535AA0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EA2284"))) PPC_WEAK_FUNC(sub_82EA2284);
PPC_FUNC_IMPL(__imp__sub_82EA2284) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EA2288"))) PPC_WEAK_FUNC(sub_82EA2288);
PPC_FUNC_IMPL(__imp__sub_82EA2288) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82EA2290;
	__savegprlr_28(ctx, base);
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// bl 0x82eea598
	ctx.lr = 0x82EA22AC;
	sub_82EEA598(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e9e910
	ctx.lr = 0x82EA22BC;
	sub_82E9E910(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82e9e5f0
	ctx.lr = 0x82EA22CC;
	sub_82E9E5F0(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82ea20f8
	ctx.lr = 0x82EA22DC;
	sub_82EA20F8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ea2300
	if (cr6.eq) goto loc_82EA2300;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e9e550
	ctx.lr = 0x82EA22F4;
	sub_82E9E550(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82EA2300:
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ea2324
	if (cr6.eq) goto loc_82EA2324;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e9e550
	ctx.lr = 0x82EA2318;
	sub_82E9E550(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82EA2324:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EA2330"))) PPC_WEAK_FUNC(sub_82EA2330);
PPC_FUNC_IMPL(__imp__sub_82EA2330) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x82EA2338;
	__savegprlr_25(ctx, base);
	// addi r12,r1,-64
	ctx.r12.s64 = ctx.r1.s64 + -64;
	// bl 0x831ce774
	ctx.lr = 0x82EA2340;
	__savefpr_27(ctx, base);
	// stwu r1,-416(r1)
	ea = -416 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82e9db50
	ctx.lr = 0x82EA2358;
	sub_82E9DB50(ctx, base);
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r26,r11,12496
	ctx.r26.s64 = ctx.r11.s64 + 12496;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r26,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r26.u32);
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
	// bl 0x825359d8
	ctx.lr = 0x82EA2378;
	sub_825359D8(ctx, base);
	// stb r31,152(r1)
	PPC_STORE_U8(ctx.r1.u32 + 152, ctx.r31.u8);
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// bl 0x82535130
	ctx.lr = 0x82EA2384;
	sub_82535130(ctx, base);
	// stb r31,152(r1)
	PPC_STORE_U8(ctx.r1.u32 + 152, ctx.r31.u8);
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// bl 0x82535130
	ctx.lr = 0x82EA2390;
	sub_82535130(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// bl 0x825369e8
	ctx.lr = 0x82EA239C;
	sub_825369E8(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// stb r11,152(r1)
	PPC_STORE_U8(ctx.r1.u32 + 152, ctx.r11.u8);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x825359d8
	ctx.lr = 0x82EA23B0;
	sub_825359D8(ctx, base);
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// addi r29,r11,-30396
	ctx.r29.s64 = ctx.r11.s64 + -30396;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x82e8c3a8
	ctx.lr = 0x82EA23C8;
	sub_82E8C3A8(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82ea23f8
	if (cr6.eq) goto loc_82EA23F8;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82e9e058
	ctx.lr = 0x82EA23E0;
	sub_82E9E058(ctx, base);
	// lbz r10,120(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 120);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82ea2420
	if (!cr6.eq) goto loc_82EA2420;
loc_82EA23EC:
	// stw r26,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r26.u32);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82535aa0
	ctx.lr = 0x82EA23F8;
	sub_82535AA0(ctx, base);
loc_82EA23F8:
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82535aa0
	ctx.lr = 0x82EA2400;
	sub_82535AA0(ctx, base);
	// stw r26,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r26.u32);
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// bl 0x82535aa0
	ctx.lr = 0x82EA240C;
	sub_82535AA0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,416
	ctx.r1.s64 = ctx.r1.s64 + 416;
	// addi r12,r1,-64
	ctx.r12.s64 = ctx.r1.s64 + -64;
	// bl 0x831ce7c0
	ctx.lr = 0x82EA241C;
	__restfpr_27(ctx, base);
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_82EA2420:
	// bl 0x8242a638
	ctx.lr = 0x82EA2424;
	sub_8242A638(ctx, base);
	// std r31,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r31.u64);
	// addi r5,r29,5584
	ctx.r5.s64 = ctx.r29.s64 + 5584;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82e8c2c8
	ctx.lr = 0x82EA2438;
	sub_82E8C2C8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// li r10,-1
	ctx.r10.s64 = -1;
	// li r27,-1
	ctx.r27.s64 = -1;
	// clrldi r28,r10,32
	ctx.r28.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ea2458
	if (!cr6.eq) goto loc_82EA2458;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// b 0x82ea2478
	goto loc_82EA2478;
loc_82EA2458:
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// cmpld cr6,r11,r28
	cr6.compare<uint64_t>(ctx.r11.u64, ctx.r28.u64, xer);
	// ble cr6,0x82ea246c
	if (!cr6.gt) goto loc_82EA246C;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// b 0x82ea2470
	goto loc_82EA2470;
loc_82EA246C:
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
loc_82EA2470:
	// stw r11,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r11.u32);
	// li r11,1
	ctx.r11.s64 = 1;
loc_82EA2478:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ea2488
	if (cr6.eq) goto loc_82EA2488;
	// li r30,1
	ctx.r30.s64 = 1;
loc_82EA2488:
	// bl 0x8242a638
	ctx.lr = 0x82EA248C;
	sub_8242A638(ctx, base);
	// std r31,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r31.u64);
	// addi r5,r29,5628
	ctx.r5.s64 = ctx.r29.s64 + 5628;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82e8c2c8
	ctx.lr = 0x82EA24A0;
	sub_82E8C2C8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ea24b4
	if (!cr6.eq) goto loc_82EA24B4;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// b 0x82ea24d4
	goto loc_82EA24D4;
loc_82EA24B4:
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// cmpld cr6,r11,r28
	cr6.compare<uint64_t>(ctx.r11.u64, ctx.r28.u64, xer);
	// ble cr6,0x82ea24c8
	if (!cr6.gt) goto loc_82EA24C8;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// b 0x82ea24cc
	goto loc_82EA24CC;
loc_82EA24C8:
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
loc_82EA24CC:
	// stw r11,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r11.u32);
	// li r11,1
	ctx.r11.s64 = 1;
loc_82EA24D4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ea24e4
	if (cr6.eq) goto loc_82EA24E4;
	// li r30,1
	ctx.r30.s64 = 1;
loc_82EA24E4:
	// bl 0x8242a638
	ctx.lr = 0x82EA24E8;
	sub_8242A638(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r5,r29,5672
	ctx.r5.s64 = ctx.r29.s64 + 5672;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lfd f27,9000(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f27.u64 = PPC_LOAD_U64(ctx.r11.u32 + 9000);
	// stfd f27,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f27.u64);
	// bl 0x82e8c578
	ctx.lr = 0x82EA2504;
	sub_82E8C578(ctx, base);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32231
	ctx.r9.s64 = -2112290816;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// lis r7,-32231
	ctx.r7.s64 = -2112290816;
	// clrlwi r6,r3,24
	ctx.r6.u64 = ctx.r3.u32 & 0xFF;
	// lfs f28,-4660(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -4660);
	ctx.f28.f64 = double(temp.f32);
	// lfd f29,-18168(r9)
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r9.u32 + -18168);
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// lfs f30,-4664(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -4664);
	ctx.f30.f64 = double(temp.f32);
	// lfd f31,-18160(r7)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r7.u32 + -18160);
	// bne cr6,0x82ea2538
	if (!cr6.eq) goto loc_82EA2538;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// b 0x82ea2568
	goto loc_82EA2568;
loc_82EA2538:
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcmpu cr6,f0,f31
	cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bge cr6,0x82ea254c
	if (!cr6.lt) goto loc_82EA254C;
	// fmr f0,f30
	ctx.f0.f64 = ctx.f30.f64;
	// b 0x82ea2560
	goto loc_82EA2560;
loc_82EA254C:
	// fcmpu cr6,f0,f29
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f0.f64, ctx.f29.f64);
	// ble cr6,0x82ea255c
	if (!cr6.gt) goto loc_82EA255C;
	// fmr f0,f28
	ctx.f0.f64 = ctx.f28.f64;
	// b 0x82ea2560
	goto loc_82EA2560;
loc_82EA255C:
	// frsp f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64));
loc_82EA2560:
	// stfs f0,192(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// li r11,1
	ctx.r11.s64 = 1;
loc_82EA2568:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ea2578
	if (cr6.eq) goto loc_82EA2578;
	// li r30,1
	ctx.r30.s64 = 1;
loc_82EA2578:
	// bl 0x8242a638
	ctx.lr = 0x82EA257C;
	sub_8242A638(ctx, base);
	// stfd f27,80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f27.u64);
	// addi r5,r29,5732
	ctx.r5.s64 = ctx.r29.s64 + 5732;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82e8c578
	ctx.lr = 0x82EA2590;
	sub_82E8C578(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ea25a4
	if (!cr6.eq) goto loc_82EA25A4;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// b 0x82ea25d4
	goto loc_82EA25D4;
loc_82EA25A4:
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcmpu cr6,f0,f31
	cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bge cr6,0x82ea25b8
	if (!cr6.lt) goto loc_82EA25B8;
	// fmr f0,f30
	ctx.f0.f64 = ctx.f30.f64;
	// b 0x82ea25cc
	goto loc_82EA25CC;
loc_82EA25B8:
	// fcmpu cr6,f0,f29
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f0.f64, ctx.f29.f64);
	// ble cr6,0x82ea25c8
	if (!cr6.gt) goto loc_82EA25C8;
	// fmr f0,f28
	ctx.f0.f64 = ctx.f28.f64;
	// b 0x82ea25cc
	goto loc_82EA25CC;
loc_82EA25C8:
	// frsp f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64));
loc_82EA25CC:
	// stfs f0,196(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 196, temp.u32);
	// li r11,1
	ctx.r11.s64 = 1;
loc_82EA25D4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ea25e4
	if (cr6.eq) goto loc_82EA25E4;
	// li r30,1
	ctx.r30.s64 = 1;
loc_82EA25E4:
	// bl 0x8242a638
	ctx.lr = 0x82EA25E8;
	sub_8242A638(ctx, base);
	// stfd f27,80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f27.u64);
	// addi r5,r29,5792
	ctx.r5.s64 = ctx.r29.s64 + 5792;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82e8c578
	ctx.lr = 0x82EA25FC;
	sub_82E8C578(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ea2610
	if (!cr6.eq) goto loc_82EA2610;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// b 0x82ea2640
	goto loc_82EA2640;
loc_82EA2610:
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcmpu cr6,f0,f31
	cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bge cr6,0x82ea2624
	if (!cr6.lt) goto loc_82EA2624;
	// fmr f0,f30
	ctx.f0.f64 = ctx.f30.f64;
	// b 0x82ea2638
	goto loc_82EA2638;
loc_82EA2624:
	// fcmpu cr6,f0,f29
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f0.f64, ctx.f29.f64);
	// ble cr6,0x82ea2634
	if (!cr6.gt) goto loc_82EA2634;
	// fmr f0,f28
	ctx.f0.f64 = ctx.f28.f64;
	// b 0x82ea2638
	goto loc_82EA2638;
loc_82EA2634:
	// frsp f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64));
loc_82EA2638:
	// stfs f0,200(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 200, temp.u32);
	// li r11,1
	ctx.r11.s64 = 1;
loc_82EA2640:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ea2650
	if (cr6.eq) goto loc_82EA2650;
	// li r30,1
	ctx.r30.s64 = 1;
loc_82EA2650:
	// bl 0x8242a638
	ctx.lr = 0x82EA2654;
	sub_8242A638(ctx, base);
	// std r31,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r31.u64);
	// addi r5,r29,5868
	ctx.r5.s64 = ctx.r29.s64 + 5868;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82e8c2c8
	ctx.lr = 0x82EA2668;
	sub_82E8C2C8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ea267c
	if (!cr6.eq) goto loc_82EA267C;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// b 0x82ea269c
	goto loc_82EA269C;
loc_82EA267C:
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// cmpld cr6,r11,r28
	cr6.compare<uint64_t>(ctx.r11.u64, ctx.r28.u64, xer);
	// ble cr6,0x82ea2690
	if (!cr6.gt) goto loc_82EA2690;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// b 0x82ea2694
	goto loc_82EA2694;
loc_82EA2690:
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
loc_82EA2694:
	// stw r11,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r11.u32);
	// li r11,1
	ctx.r11.s64 = 1;
loc_82EA269C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ea26ac
	if (cr6.eq) goto loc_82EA26AC;
	// li r30,1
	ctx.r30.s64 = 1;
loc_82EA26AC:
	// bl 0x8242a638
	ctx.lr = 0x82EA26B0;
	sub_8242A638(ctx, base);
	// std r31,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r31.u64);
	// addi r5,r29,5904
	ctx.r5.s64 = ctx.r29.s64 + 5904;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82e8c2c8
	ctx.lr = 0x82EA26C4;
	sub_82E8C2C8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ea26d8
	if (!cr6.eq) goto loc_82EA26D8;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// b 0x82ea26e4
	goto loc_82EA26E4;
loc_82EA26D8:
	// ld r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// li r11,1
	ctx.r11.s64 = 1;
	// std r10,208(r1)
	PPC_STORE_U64(ctx.r1.u32 + 208, ctx.r10.u64);
loc_82EA26E4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ea26f4
	if (cr6.eq) goto loc_82EA26F4;
	// li r30,1
	ctx.r30.s64 = 1;
loc_82EA26F4:
	// bl 0x8242a638
	ctx.lr = 0x82EA26F8;
	sub_8242A638(ctx, base);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// addi r5,r29,5992
	ctx.r5.s64 = ctx.r29.s64 + 5992;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82e8c1e8
	ctx.lr = 0x82EA270C;
	sub_82E8C1E8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ea2720
	if (!cr6.eq) goto loc_82EA2720;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// b 0x82ea272c
	goto loc_82EA272C;
loc_82EA2720:
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r10,216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 216, ctx.r10.u32);
loc_82EA272C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ea273c
	if (cr6.eq) goto loc_82EA273C;
	// li r30,1
	ctx.r30.s64 = 1;
loc_82EA273C:
	// bl 0x8242a638
	ctx.lr = 0x82EA2740;
	sub_8242A638(ctx, base);
	// stfd f27,80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f27.u64);
	// addi r5,r29,6044
	ctx.r5.s64 = ctx.r29.s64 + 6044;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82e8c578
	ctx.lr = 0x82EA2754;
	sub_82E8C578(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ea2768
	if (!cr6.eq) goto loc_82EA2768;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// b 0x82ea2798
	goto loc_82EA2798;
loc_82EA2768:
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcmpu cr6,f0,f31
	cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bge cr6,0x82ea277c
	if (!cr6.lt) goto loc_82EA277C;
	// fmr f0,f30
	ctx.f0.f64 = ctx.f30.f64;
	// b 0x82ea2790
	goto loc_82EA2790;
loc_82EA277C:
	// fcmpu cr6,f0,f29
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f0.f64, ctx.f29.f64);
	// ble cr6,0x82ea278c
	if (!cr6.gt) goto loc_82EA278C;
	// fmr f0,f28
	ctx.f0.f64 = ctx.f28.f64;
	// b 0x82ea2790
	goto loc_82EA2790;
loc_82EA278C:
	// frsp f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64));
loc_82EA2790:
	// stfs f0,220(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 220, temp.u32);
	// li r11,1
	ctx.r11.s64 = 1;
loc_82EA2798:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ea27a8
	if (cr6.eq) goto loc_82EA27A8;
	// li r30,1
	ctx.r30.s64 = 1;
loc_82EA27A8:
	// bl 0x8242a638
	ctx.lr = 0x82EA27AC;
	sub_8242A638(ctx, base);
	// stfd f27,80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f27.u64);
	// addi r5,r29,6088
	ctx.r5.s64 = ctx.r29.s64 + 6088;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82e8c578
	ctx.lr = 0x82EA27C0;
	sub_82E8C578(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ea27d4
	if (!cr6.eq) goto loc_82EA27D4;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// b 0x82ea2804
	goto loc_82EA2804;
loc_82EA27D4:
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcmpu cr6,f0,f31
	cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bge cr6,0x82ea27e8
	if (!cr6.lt) goto loc_82EA27E8;
	// fmr f0,f30
	ctx.f0.f64 = ctx.f30.f64;
	// b 0x82ea27fc
	goto loc_82EA27FC;
loc_82EA27E8:
	// fcmpu cr6,f0,f29
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f0.f64, ctx.f29.f64);
	// ble cr6,0x82ea27f8
	if (!cr6.gt) goto loc_82EA27F8;
	// fmr f0,f28
	ctx.f0.f64 = ctx.f28.f64;
	// b 0x82ea27fc
	goto loc_82EA27FC;
loc_82EA27F8:
	// frsp f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64));
loc_82EA27FC:
	// stfs f0,224(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 224, temp.u32);
	// li r11,1
	ctx.r11.s64 = 1;
loc_82EA2804:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ea2814
	if (cr6.eq) goto loc_82EA2814;
	// li r30,1
	ctx.r30.s64 = 1;
loc_82EA2814:
	// bl 0x8242a638
	ctx.lr = 0x82EA2818;
	sub_8242A638(ctx, base);
	// stfd f27,80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f27.u64);
	// addi r5,r29,6132
	ctx.r5.s64 = ctx.r29.s64 + 6132;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82e8c578
	ctx.lr = 0x82EA282C;
	sub_82E8C578(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ea2840
	if (!cr6.eq) goto loc_82EA2840;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// b 0x82ea2870
	goto loc_82EA2870;
loc_82EA2840:
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcmpu cr6,f0,f31
	cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bge cr6,0x82ea2854
	if (!cr6.lt) goto loc_82EA2854;
	// fmr f0,f30
	ctx.f0.f64 = ctx.f30.f64;
	// b 0x82ea2868
	goto loc_82EA2868;
loc_82EA2854:
	// fcmpu cr6,f0,f29
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f0.f64, ctx.f29.f64);
	// ble cr6,0x82ea2864
	if (!cr6.gt) goto loc_82EA2864;
	// fmr f0,f28
	ctx.f0.f64 = ctx.f28.f64;
	// b 0x82ea2868
	goto loc_82EA2868;
loc_82EA2864:
	// frsp f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64));
loc_82EA2868:
	// stfs f0,228(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 228, temp.u32);
	// li r11,1
	ctx.r11.s64 = 1;
loc_82EA2870:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ea2880
	if (cr6.eq) goto loc_82EA2880;
	// li r30,1
	ctx.r30.s64 = 1;
loc_82EA2880:
	// bl 0x8242a638
	ctx.lr = 0x82EA2884;
	sub_8242A638(ctx, base);
	// std r31,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r31.u64);
	// addi r5,r29,6176
	ctx.r5.s64 = ctx.r29.s64 + 6176;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82e8c2c8
	ctx.lr = 0x82EA2898;
	sub_82E8C2C8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ea28ac
	if (!cr6.eq) goto loc_82EA28AC;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// b 0x82ea28cc
	goto loc_82EA28CC;
loc_82EA28AC:
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// cmpld cr6,r11,r28
	cr6.compare<uint64_t>(ctx.r11.u64, ctx.r28.u64, xer);
	// ble cr6,0x82ea28c0
	if (!cr6.gt) goto loc_82EA28C0;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// b 0x82ea28c4
	goto loc_82EA28C4;
loc_82EA28C0:
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
loc_82EA28C4:
	// stw r11,232(r1)
	PPC_STORE_U32(ctx.r1.u32 + 232, ctx.r11.u32);
	// li r11,1
	ctx.r11.s64 = 1;
loc_82EA28CC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ea28dc
	if (cr6.eq) goto loc_82EA28DC;
	// li r30,1
	ctx.r30.s64 = 1;
loc_82EA28DC:
	// bl 0x8242a638
	ctx.lr = 0x82EA28E0;
	sub_8242A638(ctx, base);
	// std r31,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r31.u64);
	// addi r5,r29,6260
	ctx.r5.s64 = ctx.r29.s64 + 6260;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82e8c2c8
	ctx.lr = 0x82EA28F4;
	sub_82E8C2C8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ea2908
	if (!cr6.eq) goto loc_82EA2908;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// b 0x82ea2928
	goto loc_82EA2928;
loc_82EA2908:
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// cmpld cr6,r11,r28
	cr6.compare<uint64_t>(ctx.r11.u64, ctx.r28.u64, xer);
	// ble cr6,0x82ea291c
	if (!cr6.gt) goto loc_82EA291C;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// b 0x82ea2920
	goto loc_82EA2920;
loc_82EA291C:
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
loc_82EA2920:
	// stw r11,236(r1)
	PPC_STORE_U32(ctx.r1.u32 + 236, ctx.r11.u32);
	// li r11,1
	ctx.r11.s64 = 1;
loc_82EA2928:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ea2938
	if (cr6.eq) goto loc_82EA2938;
	// li r30,1
	ctx.r30.s64 = 1;
loc_82EA2938:
	// bl 0x8242a638
	ctx.lr = 0x82EA293C;
	sub_8242A638(ctx, base);
	// stfd f27,80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f27.u64);
	// addi r5,r29,6384
	ctx.r5.s64 = ctx.r29.s64 + 6384;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82e8c578
	ctx.lr = 0x82EA2950;
	sub_82E8C578(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ea2964
	if (!cr6.eq) goto loc_82EA2964;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// b 0x82ea2994
	goto loc_82EA2994;
loc_82EA2964:
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcmpu cr6,f0,f31
	cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bge cr6,0x82ea2978
	if (!cr6.lt) goto loc_82EA2978;
	// fmr f0,f30
	ctx.f0.f64 = ctx.f30.f64;
	// b 0x82ea298c
	goto loc_82EA298C;
loc_82EA2978:
	// fcmpu cr6,f0,f29
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f0.f64, ctx.f29.f64);
	// ble cr6,0x82ea2988
	if (!cr6.gt) goto loc_82EA2988;
	// fmr f0,f28
	ctx.f0.f64 = ctx.f28.f64;
	// b 0x82ea298c
	goto loc_82EA298C;
loc_82EA2988:
	// frsp f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64));
loc_82EA298C:
	// stfs f0,240(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 240, temp.u32);
	// li r11,1
	ctx.r11.s64 = 1;
loc_82EA2994:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ea29a4
	if (cr6.eq) goto loc_82EA29A4;
	// li r30,1
	ctx.r30.s64 = 1;
loc_82EA29A4:
	// bl 0x8242a638
	ctx.lr = 0x82EA29A8;
	sub_8242A638(ctx, base);
	// std r31,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r31.u64);
	// addi r5,r29,6428
	ctx.r5.s64 = ctx.r29.s64 + 6428;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82e8c2c8
	ctx.lr = 0x82EA29BC;
	sub_82E8C2C8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ea29d0
	if (!cr6.eq) goto loc_82EA29D0;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// b 0x82ea29f0
	goto loc_82EA29F0;
loc_82EA29D0:
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// cmpld cr6,r11,r28
	cr6.compare<uint64_t>(ctx.r11.u64, ctx.r28.u64, xer);
	// ble cr6,0x82ea29e4
	if (!cr6.gt) goto loc_82EA29E4;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// b 0x82ea29e8
	goto loc_82EA29E8;
loc_82EA29E4:
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
loc_82EA29E8:
	// stw r11,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r11.u32);
	// li r11,1
	ctx.r11.s64 = 1;
loc_82EA29F0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ea2a00
	if (cr6.eq) goto loc_82EA2A00;
	// li r30,1
	ctx.r30.s64 = 1;
loc_82EA2A00:
	// bl 0x8242a638
	ctx.lr = 0x82EA2A04;
	sub_8242A638(ctx, base);
	// std r31,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r31.u64);
	// addi r5,r29,6512
	ctx.r5.s64 = ctx.r29.s64 + 6512;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82e8c2c8
	ctx.lr = 0x82EA2A18;
	sub_82E8C2C8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ea2a2c
	if (!cr6.eq) goto loc_82EA2A2C;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// b 0x82ea2a4c
	goto loc_82EA2A4C;
loc_82EA2A2C:
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// cmpld cr6,r11,r28
	cr6.compare<uint64_t>(ctx.r11.u64, ctx.r28.u64, xer);
	// ble cr6,0x82ea2a40
	if (!cr6.gt) goto loc_82EA2A40;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// b 0x82ea2a44
	goto loc_82EA2A44;
loc_82EA2A40:
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
loc_82EA2A44:
	// stw r11,248(r1)
	PPC_STORE_U32(ctx.r1.u32 + 248, ctx.r11.u32);
	// li r11,1
	ctx.r11.s64 = 1;
loc_82EA2A4C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ea2a5c
	if (cr6.eq) goto loc_82EA2A5C;
	// li r30,1
	ctx.r30.s64 = 1;
loc_82EA2A5C:
	// bl 0x8242a638
	ctx.lr = 0x82EA2A60;
	sub_8242A638(ctx, base);
	// stfd f27,80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f27.u64);
	// addi r5,r29,6568
	ctx.r5.s64 = ctx.r29.s64 + 6568;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82e8c578
	ctx.lr = 0x82EA2A74;
	sub_82E8C578(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ea2a88
	if (!cr6.eq) goto loc_82EA2A88;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// b 0x82ea2ab8
	goto loc_82EA2AB8;
loc_82EA2A88:
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcmpu cr6,f0,f31
	cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bge cr6,0x82ea2a9c
	if (!cr6.lt) goto loc_82EA2A9C;
	// fmr f0,f30
	ctx.f0.f64 = ctx.f30.f64;
	// b 0x82ea2ab0
	goto loc_82EA2AB0;
loc_82EA2A9C:
	// fcmpu cr6,f0,f29
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f0.f64, ctx.f29.f64);
	// ble cr6,0x82ea2aac
	if (!cr6.gt) goto loc_82EA2AAC;
	// fmr f0,f28
	ctx.f0.f64 = ctx.f28.f64;
	// b 0x82ea2ab0
	goto loc_82EA2AB0;
loc_82EA2AAC:
	// frsp f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64));
loc_82EA2AB0:
	// stfs f0,252(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 252, temp.u32);
	// li r11,1
	ctx.r11.s64 = 1;
loc_82EA2AB8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ea2ac8
	if (cr6.eq) goto loc_82EA2AC8;
	// li r30,1
	ctx.r30.s64 = 1;
loc_82EA2AC8:
	// bl 0x8242a638
	ctx.lr = 0x82EA2ACC;
	sub_8242A638(ctx, base);
	// stfd f27,80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f27.u64);
	// addi r5,r29,6688
	ctx.r5.s64 = ctx.r29.s64 + 6688;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82e8c578
	ctx.lr = 0x82EA2AE0;
	sub_82E8C578(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ea2af4
	if (!cr6.eq) goto loc_82EA2AF4;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// b 0x82ea2b24
	goto loc_82EA2B24;
loc_82EA2AF4:
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcmpu cr6,f0,f31
	cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bge cr6,0x82ea2b08
	if (!cr6.lt) goto loc_82EA2B08;
	// fmr f0,f30
	ctx.f0.f64 = ctx.f30.f64;
	// b 0x82ea2b1c
	goto loc_82EA2B1C;
loc_82EA2B08:
	// fcmpu cr6,f0,f29
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f0.f64, ctx.f29.f64);
	// ble cr6,0x82ea2b18
	if (!cr6.gt) goto loc_82EA2B18;
	// fmr f0,f28
	ctx.f0.f64 = ctx.f28.f64;
	// b 0x82ea2b1c
	goto loc_82EA2B1C;
loc_82EA2B18:
	// frsp f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64));
loc_82EA2B1C:
	// stfs f0,256(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 256, temp.u32);
	// li r11,1
	ctx.r11.s64 = 1;
loc_82EA2B24:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ea2b34
	if (cr6.eq) goto loc_82EA2B34;
	// li r30,1
	ctx.r30.s64 = 1;
loc_82EA2B34:
	// bl 0x8242a638
	ctx.lr = 0x82EA2B38;
	sub_8242A638(ctx, base);
	// stb r31,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r31.u8);
	// addi r5,r29,6740
	ctx.r5.s64 = ctx.r29.s64 + 6740;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82e8c338
	ctx.lr = 0x82EA2B4C;
	sub_82E8C338(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ea2b60
	if (!cr6.eq) goto loc_82EA2B60;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// b 0x82ea2b6c
	goto loc_82EA2B6C;
loc_82EA2B60:
	// lbz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 88);
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r10,260(r1)
	PPC_STORE_U8(ctx.r1.u32 + 260, ctx.r10.u8);
loc_82EA2B6C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ea2b7c
	if (cr6.eq) goto loc_82EA2B7C;
	// li r30,1
	ctx.r30.s64 = 1;
loc_82EA2B7C:
	// bl 0x8242a638
	ctx.lr = 0x82EA2B80;
	sub_8242A638(ctx, base);
	// std r31,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r31.u64);
	// addi r5,r29,6808
	ctx.r5.s64 = ctx.r29.s64 + 6808;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82e8c2c8
	ctx.lr = 0x82EA2B94;
	sub_82E8C2C8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ea2ba8
	if (!cr6.eq) goto loc_82EA2BA8;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// b 0x82ea2bc8
	goto loc_82EA2BC8;
loc_82EA2BA8:
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// cmpld cr6,r11,r28
	cr6.compare<uint64_t>(ctx.r11.u64, ctx.r28.u64, xer);
	// ble cr6,0x82ea2bbc
	if (!cr6.gt) goto loc_82EA2BBC;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// b 0x82ea2bc0
	goto loc_82EA2BC0;
loc_82EA2BBC:
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
loc_82EA2BC0:
	// stw r11,264(r1)
	PPC_STORE_U32(ctx.r1.u32 + 264, ctx.r11.u32);
	// li r11,1
	ctx.r11.s64 = 1;
loc_82EA2BC8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ea2bd8
	if (cr6.eq) goto loc_82EA2BD8;
	// li r30,1
	ctx.r30.s64 = 1;
loc_82EA2BD8:
	// bl 0x8242a638
	ctx.lr = 0x82EA2BDC;
	sub_8242A638(ctx, base);
	// stfd f27,80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f27.u64);
	// addi r5,r29,6892
	ctx.r5.s64 = ctx.r29.s64 + 6892;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82e8c578
	ctx.lr = 0x82EA2BF0;
	sub_82E8C578(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ea2c04
	if (!cr6.eq) goto loc_82EA2C04;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// b 0x82ea2c34
	goto loc_82EA2C34;
loc_82EA2C04:
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcmpu cr6,f0,f31
	cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bge cr6,0x82ea2c18
	if (!cr6.lt) goto loc_82EA2C18;
	// fmr f0,f30
	ctx.f0.f64 = ctx.f30.f64;
	// b 0x82ea2c2c
	goto loc_82EA2C2C;
loc_82EA2C18:
	// fcmpu cr6,f0,f29
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f0.f64, ctx.f29.f64);
	// ble cr6,0x82ea2c28
	if (!cr6.gt) goto loc_82EA2C28;
	// fmr f0,f28
	ctx.f0.f64 = ctx.f28.f64;
	// b 0x82ea2c2c
	goto loc_82EA2C2C;
loc_82EA2C28:
	// frsp f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64));
loc_82EA2C2C:
	// stfs f0,268(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 268, temp.u32);
	// li r11,1
	ctx.r11.s64 = 1;
loc_82EA2C34:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ea2c44
	if (cr6.eq) goto loc_82EA2C44;
	// li r30,1
	ctx.r30.s64 = 1;
loc_82EA2C44:
	// bl 0x8242a638
	ctx.lr = 0x82EA2C48;
	sub_8242A638(ctx, base);
	// stfd f27,80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f27.u64);
	// addi r5,r29,6988
	ctx.r5.s64 = ctx.r29.s64 + 6988;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82e8c578
	ctx.lr = 0x82EA2C5C;
	sub_82E8C578(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ea2c70
	if (!cr6.eq) goto loc_82EA2C70;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// b 0x82ea2ca0
	goto loc_82EA2CA0;
loc_82EA2C70:
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcmpu cr6,f0,f31
	cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bge cr6,0x82ea2c84
	if (!cr6.lt) goto loc_82EA2C84;
	// fmr f0,f30
	ctx.f0.f64 = ctx.f30.f64;
	// b 0x82ea2c98
	goto loc_82EA2C98;
loc_82EA2C84:
	// fcmpu cr6,f0,f29
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f0.f64, ctx.f29.f64);
	// ble cr6,0x82ea2c94
	if (!cr6.gt) goto loc_82EA2C94;
	// fmr f0,f28
	ctx.f0.f64 = ctx.f28.f64;
	// b 0x82ea2c98
	goto loc_82EA2C98;
loc_82EA2C94:
	// frsp f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64));
loc_82EA2C98:
	// stfs f0,272(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 272, temp.u32);
	// li r11,1
	ctx.r11.s64 = 1;
loc_82EA2CA0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ea2cb0
	if (cr6.eq) goto loc_82EA2CB0;
	// li r30,1
	ctx.r30.s64 = 1;
loc_82EA2CB0:
	// bl 0x8242a638
	ctx.lr = 0x82EA2CB4;
	sub_8242A638(ctx, base);
	// stfd f27,80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f27.u64);
	// addi r5,r29,7060
	ctx.r5.s64 = ctx.r29.s64 + 7060;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82e8c578
	ctx.lr = 0x82EA2CC8;
	sub_82E8C578(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ea2cdc
	if (!cr6.eq) goto loc_82EA2CDC;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// b 0x82ea2d0c
	goto loc_82EA2D0C;
loc_82EA2CDC:
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcmpu cr6,f0,f31
	cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bge cr6,0x82ea2cf0
	if (!cr6.lt) goto loc_82EA2CF0;
	// fmr f0,f30
	ctx.f0.f64 = ctx.f30.f64;
	// b 0x82ea2d04
	goto loc_82EA2D04;
loc_82EA2CF0:
	// fcmpu cr6,f0,f29
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f0.f64, ctx.f29.f64);
	// ble cr6,0x82ea2d00
	if (!cr6.gt) goto loc_82EA2D00;
	// fmr f0,f28
	ctx.f0.f64 = ctx.f28.f64;
	// b 0x82ea2d04
	goto loc_82EA2D04;
loc_82EA2D00:
	// frsp f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64));
loc_82EA2D04:
	// stfs f0,276(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 276, temp.u32);
	// li r11,1
	ctx.r11.s64 = 1;
loc_82EA2D0C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ea2d1c
	if (cr6.eq) goto loc_82EA2D1C;
	// li r30,1
	ctx.r30.s64 = 1;
loc_82EA2D1C:
	// bl 0x8242a638
	ctx.lr = 0x82EA2D20;
	sub_8242A638(ctx, base);
	// std r31,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r31.u64);
	// addi r5,r29,7132
	ctx.r5.s64 = ctx.r29.s64 + 7132;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82e8c2c8
	ctx.lr = 0x82EA2D34;
	sub_82E8C2C8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ea2d48
	if (!cr6.eq) goto loc_82EA2D48;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// b 0x82ea2d68
	goto loc_82EA2D68;
loc_82EA2D48:
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// cmpld cr6,r11,r28
	cr6.compare<uint64_t>(ctx.r11.u64, ctx.r28.u64, xer);
	// ble cr6,0x82ea2d5c
	if (!cr6.gt) goto loc_82EA2D5C;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// b 0x82ea2d60
	goto loc_82EA2D60;
loc_82EA2D5C:
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
loc_82EA2D60:
	// stw r11,280(r1)
	PPC_STORE_U32(ctx.r1.u32 + 280, ctx.r11.u32);
	// li r11,1
	ctx.r11.s64 = 1;
loc_82EA2D68:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ea2d78
	if (cr6.eq) goto loc_82EA2D78;
	// li r30,1
	ctx.r30.s64 = 1;
loc_82EA2D78:
	// bl 0x8242a638
	ctx.lr = 0x82EA2D7C;
	sub_8242A638(ctx, base);
	// std r31,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r31.u64);
	// addi r5,r29,7236
	ctx.r5.s64 = ctx.r29.s64 + 7236;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82e8c2c8
	ctx.lr = 0x82EA2D90;
	sub_82E8C2C8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ea2da4
	if (!cr6.eq) goto loc_82EA2DA4;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// b 0x82ea2dc4
	goto loc_82EA2DC4;
loc_82EA2DA4:
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// cmpld cr6,r11,r28
	cr6.compare<uint64_t>(ctx.r11.u64, ctx.r28.u64, xer);
	// ble cr6,0x82ea2db8
	if (!cr6.gt) goto loc_82EA2DB8;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// b 0x82ea2dbc
	goto loc_82EA2DBC;
loc_82EA2DB8:
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
loc_82EA2DBC:
	// stw r11,284(r1)
	PPC_STORE_U32(ctx.r1.u32 + 284, ctx.r11.u32);
	// li r11,1
	ctx.r11.s64 = 1;
loc_82EA2DC4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ea2dd4
	if (cr6.eq) goto loc_82EA2DD4;
	// li r30,1
	ctx.r30.s64 = 1;
loc_82EA2DD4:
	// bl 0x8242a638
	ctx.lr = 0x82EA2DD8;
	sub_8242A638(ctx, base);
	// std r31,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r31.u64);
	// addi r5,r29,7340
	ctx.r5.s64 = ctx.r29.s64 + 7340;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82e8c2c8
	ctx.lr = 0x82EA2DEC;
	sub_82E8C2C8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ea2e00
	if (!cr6.eq) goto loc_82EA2E00;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// b 0x82ea2e20
	goto loc_82EA2E20;
loc_82EA2E00:
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// cmpld cr6,r11,r28
	cr6.compare<uint64_t>(ctx.r11.u64, ctx.r28.u64, xer);
	// ble cr6,0x82ea2e14
	if (!cr6.gt) goto loc_82EA2E14;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// b 0x82ea2e18
	goto loc_82EA2E18;
loc_82EA2E14:
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
loc_82EA2E18:
	// stw r11,288(r1)
	PPC_STORE_U32(ctx.r1.u32 + 288, ctx.r11.u32);
	// li r11,1
	ctx.r11.s64 = 1;
loc_82EA2E20:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ea2e30
	if (cr6.eq) goto loc_82EA2E30;
	// li r30,1
	ctx.r30.s64 = 1;
loc_82EA2E30:
	// bl 0x8242a638
	ctx.lr = 0x82EA2E34;
	sub_8242A638(ctx, base);
	// std r31,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r31.u64);
	// addi r5,r29,7440
	ctx.r5.s64 = ctx.r29.s64 + 7440;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82e8c2c8
	ctx.lr = 0x82EA2E48;
	sub_82E8C2C8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ea2e5c
	if (!cr6.eq) goto loc_82EA2E5C;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// b 0x82ea2e68
	goto loc_82EA2E68;
loc_82EA2E5C:
	// ld r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// li r11,1
	ctx.r11.s64 = 1;
	// std r10,296(r1)
	PPC_STORE_U64(ctx.r1.u32 + 296, ctx.r10.u64);
loc_82EA2E68:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ea2e78
	if (cr6.eq) goto loc_82EA2E78;
	// li r30,1
	ctx.r30.s64 = 1;
loc_82EA2E78:
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ea23ec
	if (cr6.eq) goto loc_82EA23EC;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82e9da70
	ctx.lr = 0x82EA2E90;
	sub_82E9DA70(ctx, base);
	// stw r26,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r26.u32);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82535aa0
	ctx.lr = 0x82EA2E9C;
	sub_82535AA0(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82535aa0
	ctx.lr = 0x82EA2EA4;
	sub_82535AA0(ctx, base);
	// stw r26,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r26.u32);
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// bl 0x82535aa0
	ctx.lr = 0x82EA2EB0;
	sub_82535AA0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,416
	ctx.r1.s64 = ctx.r1.s64 + 416;
	// addi r12,r1,-64
	ctx.r12.s64 = ctx.r1.s64 + -64;
	// bl 0x831ce7c0
	ctx.lr = 0x82EA2EC0;
	__restfpr_27(ctx, base);
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EA2EC4"))) PPC_WEAK_FUNC(sub_82EA2EC4);
PPC_FUNC_IMPL(__imp__sub_82EA2EC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

