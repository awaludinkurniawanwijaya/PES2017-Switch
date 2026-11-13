#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_82506360"))) PPC_WEAK_FUNC(sub_82506360);
PPC_FUNC_IMPL(__imp__sub_82506360) {
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
	// addi r31,r3,-16
	ctx.r31.s64 = ctx.r3.s64 + -16;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r8,r10,-19992
	ctx.r8.s64 = ctx.r10.s64 + -19992;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r7,r9,15320
	ctx.r7.s64 = ctx.r9.s64 + 15320;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r6,r11,r3
	ctx.r6.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stw r8,-16(r6)
	PPC_STORE_U32(ctx.r6.u32 + -16, ctx.r8.u32);
	// stw r7,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r7.u32);
	// bl 0x831ccf00
	ctx.lr = 0x825063A8;
	sub_831CCF00(ctx, base);
	// clrlwi r5,r30,31
	ctx.r5.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x825063c0
	if (cr6.eq) goto loc_825063C0;
	// bl 0x82416268
	ctx.lr = 0x825063BC;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_825063C0:
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

__attribute__((alias("__imp__sub_825063D8"))) PPC_WEAK_FUNC(sub_825063D8);
PPC_FUNC_IMPL(__imp__sub_825063D8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
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
	// lis r31,-31766
	ctx.r31.s64 = -2081816576;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,-17544(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -17544);
	// lwz r5,40(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// bl 0x8253d4b0
	ctx.lr = 0x825063FC;
	sub_8253D4B0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,-17544(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -17544);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// srawi r8,r9,31
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7FFFFFFF) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 31;
	// subfic r7,r11,1
	xer.ca = ctx.r11.u32 <= 1;
	ctx.r7.s64 = 1 - ctx.r11.s64;
	// and r9,r8,r7
	ctx.r9.u64 = ctx.r8.u64 & ctx.r7.u64;
	// add r6,r9,r11
	ctx.r6.u64 = ctx.r9.u64 + ctx.r11.u64;
	// stw r6,44(r10)
	PPC_STORE_U32(ctx.r10.u32 + 44, ctx.r6.u32);
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

__attribute__((alias("__imp__sub_82506434"))) PPC_WEAK_FUNC(sub_82506434);
PPC_FUNC_IMPL(__imp__sub_82506434) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82506438"))) PPC_WEAK_FUNC(sub_82506438);
PPC_FUNC_IMPL(__imp__sub_82506438) {
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
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825064e4
	if (cr6.eq) goto loc_825064E4;
	// lwz r10,48(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,1
	cr6.compare<int32_t>(ctx.r9.s32, 1, xer);
	// ble cr6,0x825064a4
	if (!cr6.gt) goto loc_825064A4;
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r8,32(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r11.u32);
	// lbz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
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
loc_825064A4:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825064e4
	if (cr6.eq) goto loc_825064E4;
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// ble cr6,0x825064e4
	if (!cr6.gt) goto loc_825064E4;
	// rotlwi r10,r11,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r8,32(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// stw r7,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r7.u32);
	// lbz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// b 0x825064f8
	goto loc_825064F8;
loc_825064E4:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x825064F8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_825064F8:
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// bne cr6,0x82506514
	if (!cr6.eq) goto loc_82506514;
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
loc_82506514:
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82506550
	if (cr6.eq) goto loc_82506550;
	// lwz r10,48(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// ble cr6,0x82506550
	if (!cr6.gt) goto loc_82506550;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
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
loc_82506550:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82506564;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
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

__attribute__((alias("__imp__sub_82506578"))) PPC_WEAK_FUNC(sub_82506578);
PPC_FUNC_IMPL(__imp__sub_82506578) {
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
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x825066e4
	if (!cr6.eq) goto loc_825066E4;
	// lwz r3,60(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x825065bc
	if (cr6.eq) goto loc_825065BC;
	// bl 0x82470818
	ctx.lr = 0x825065BC;
	sub_82470818(ctx, base);
loc_825065BC:
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x825066c4
	if (!cr6.eq) goto loc_825066C4;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + ctx.r31.u64;
	// lwz r9,20(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// clrlwi r8,r9,31
	ctx.r8.u64 = ctx.r9.u32 & 0x1;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq cr6,0x825066c4
	if (cr6.eq) goto loc_825066C4;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// add r4,r11,r31
	ctx.r4.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bl 0x8246bb28
	ctx.lr = 0x825065F4;
	sub_8246BB28(ctx, base);
	// bl 0x8246eae0
	ctx.lr = 0x825065F8;
	sub_8246EAE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8246ba48
	ctx.lr = 0x82506604;
	sub_8246BA48(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r3,56(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 56);
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82506640
	if (cr6.eq) goto loc_82506640;
	// lwz r10,48(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// ble cr6,0x82506640
	if (!cr6.gt) goto loc_82506640;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// b 0x82506650
	goto loc_82506650;
loc_82506640:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82506650;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82506650:
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82506694
	if (cr6.eq) goto loc_82506694;
	// rlwinm r11,r3,1,23,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0x1FE;
loc_8250665C:
	// lwz r10,16(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// lhzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r10.u32);
	// rlwinm r8,r9,0,25,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x78;
	// rlwinm r8,r8,0,28,25
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFFFFFFFCF;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq cr6,0x825066c4
	if (cr6.eq) goto loc_825066C4;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r3,56(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 56);
	// bl 0x82506438
	ctx.lr = 0x82506688;
	sub_82506438(ctx, base);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// rlwinm r11,r3,1,23,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0x1FE;
	// bne cr6,0x8250665c
	if (!cr6.eq) goto loc_8250665C;
loc_82506694:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r9,56(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// ori r11,r10,1
	ctx.r11.u64 = ctx.r10.u64 | 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x825066b8
	if (!cr6.eq) goto loc_825066B8;
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
loc_825066B8:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// bl 0x8246c218
	ctx.lr = 0x825066C4;
	sub_8246C218(ctx, base);
loc_825066C4:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x825066e4
	if (!cr6.eq) goto loc_825066E4;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82506708
	goto loc_82506708;
loc_825066E4:
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r10,56(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// ori r4,r11,2
	ctx.r4.u64 = ctx.r11.u64 | 2;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x825066fc
	if (!cr6.eq) goto loc_825066FC;
	// ori r4,r4,4
	ctx.r4.u64 = ctx.r4.u64 | 4;
loc_825066FC:
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x8246c218
	ctx.lr = 0x82506704;
	sub_8246C218(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_82506708:
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

__attribute__((alias("__imp__sub_82506720"))) PPC_WEAK_FUNC(sub_82506720);
PPC_FUNC_IMPL(__imp__sub_82506720) {
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
	// stfd f31,-32(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.f31.u64);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8248ff18
	ctx.lr = 0x82506740;
	sub_8248FF18(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82506844
	if (cr6.eq) goto loc_82506844;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82488f38
	ctx.lr = 0x8250675C;
	sub_82488F38(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8241f1b0
	ctx.lr = 0x82506768;
	sub_8241F1B0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f31,9008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f31.f64 = double(temp.f32);
	// bl 0x8253ade0
	ctx.lr = 0x8250677C;
	sub_8253ADE0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82506794
	if (cr6.eq) goto loc_82506794;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253afb0
	ctx.lr = 0x82506790;
	sub_8253AFB0(ctx, base);
	// frsp f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = double(float(ctx.f1.f64));
loc_82506794:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82573480
	ctx.lr = 0x825067A0;
	sub_82573480(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r31,r11,-20568
	ctx.r31.s64 = ctx.r11.s64 + -20568;
	// addi r4,r31,-8
	ctx.r4.s64 = ctx.r31.s64 + -8;
	// bl 0x82575278
	ctx.lr = 0x825067B4;
	sub_82575278(ctx, base);
	// lwz r11,140(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// cntlzw r10,r3
	ctx.r10.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// rlwinm r30,r10,27,31,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// blt cr6,0x825067d0
	if (cr6.lt) goto loc_825067D0;
	// lwz r3,120(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// bl 0x8386d088
	ctx.lr = 0x825067D0;
	sub_8386D088(ctx, base);
loc_825067D0:
	// li r11,0
	ctx.r11.s64 = 0;
	// clrlwi r10,r30,24
	ctx.r10.u64 = ctx.r30.u32 & 0xFF;
	// li r9,15
	ctx.r9.s64 = 15;
	// stw r11,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r11.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stb r11,120(r1)
	PPC_STORE_U8(ctx.r1.u32 + 120, ctx.r11.u8);
	// stw r9,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r9.u32);
	// beq cr6,0x825067fc
	if (cr6.eq) goto loc_825067FC;
	// bl 0x82490178
	ctx.lr = 0x825067F4;
	sub_82490178(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x82506834
	goto loc_82506834;
loc_825067FC:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82573480
	ctx.lr = 0x82506808;
	sub_82573480(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82575278
	ctx.lr = 0x82506814;
	sub_82575278(ctx, base);
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// rlwinm r31,r11,27,31,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// bl 0x8241ff70
	ctx.lr = 0x82506824;
	sub_8241FF70(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x8250683c
	if (cr6.eq) goto loc_8250683C;
	// bl 0x82490178
	ctx.lr = 0x82506830;
	sub_82490178(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
loc_82506834:
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x8250a4a8
	ctx.lr = 0x8250683C;
	sub_8250A4A8(ctx, base);
loc_8250683C:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82573c50
	ctx.lr = 0x82506844;
	sub_82573C50(ctx, base);
loc_82506844:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f31,-32(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82506864"))) PPC_WEAK_FUNC(sub_82506864);
PPC_FUNC_IMPL(__imp__sub_82506864) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82506868"))) PPC_WEAK_FUNC(sub_82506868);
PPC_FUNC_IMPL(__imp__sub_82506868) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82506870;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// subfic r10,r11,-1
	xer.ca = ctx.r11.u32 <= 4294967295;
	ctx.r10.s64 = -1 - ctx.r11.s64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// cmplw cr6,r10,r4
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, xer);
	// bgt cr6,0x8250689c
	if (cr6.gt) goto loc_8250689C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,9132
	ctx.r3.s64 = ctx.r11.s64 + 9132;
	// bl 0x831cc150
	ctx.lr = 0x8250689C;
	sub_831CC150(ctx, base);
loc_8250689C:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x8250694c
	if (cr6.eq) goto loc_8250694C;
	// add r28,r11,r30
	ctx.r28.u64 = ctx.r11.u64 + ctx.r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8241feb0
	ctx.lr = 0x825068B8;
	sub_8241FEB0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8250694c
	if (cr6.eq) goto loc_8250694C;
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r30,1
	cr6.compare<uint32_t>(ctx.r30.u32, 1, xer);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// bne cr6,0x825068f4
	if (!cr6.eq) goto loc_825068F4;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x825068e8
	if (cr6.lt) goto loc_825068E8;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stbx r29,r11,r10
	PPC_STORE_U8(ctx.r11.u32 + ctx.r10.u32, ctx.r29.u8);
	// b 0x82506918
	goto loc_82506918;
loc_825068E8:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// stbx r29,r31,r10
	PPC_STORE_U8(ctx.r31.u32 + ctx.r10.u32, ctx.r29.u8);
	// b 0x82506918
	goto loc_82506918;
loc_825068F4:
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82506904
	if (cr6.lt) goto loc_82506904;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// b 0x82506908
	goto loc_82506908;
loc_82506904:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_82506908:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// extsb r4,r29
	ctx.r4.s64 = ctx.r29.s8;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x831cdcf0
	ctx.lr = 0x82506918;
	sub_831CDCF0(ctx, base);
loc_82506918:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// stw r28,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r28.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82506940
	if (cr6.lt) goto loc_82506940;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stbx r10,r11,r28
	PPC_STORE_U8(ctx.r11.u32 + ctx.r28.u32, ctx.r10.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82506940:
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// stbx r10,r31,r28
	PPC_STORE_U8(ctx.r31.u32 + ctx.r28.u32, ctx.r10.u8);
loc_8250694C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82506958"))) PPC_WEAK_FUNC(sub_82506958);
PPC_FUNC_IMPL(__imp__sub_82506958) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82506960;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// subfic r10,r11,-1
	xer.ca = ctx.r11.u32 <= 4294967295;
	ctx.r10.s64 = -1 - ctx.r11.s64;
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// bgt cr6,0x82506988
	if (cr6.gt) goto loc_82506988;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,9132
	ctx.r3.s64 = ctx.r11.s64 + 9132;
	// bl 0x831cc150
	ctx.lr = 0x82506988;
	sub_831CC150(ctx, base);
loc_82506988:
	// addi r30,r11,1
	ctx.r30.s64 = ctx.r11.s64 + 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8241feb0
	ctx.lr = 0x8250699C;
	sub_8241FEB0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825069fc
	if (cr6.eq) goto loc_825069FC;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x825069c0
	if (cr6.lt) goto loc_825069C0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// b 0x825069c4
	goto loc_825069C4;
loc_825069C0:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_825069C4:
	// stbx r29,r11,r10
	PPC_STORE_U8(ctx.r11.u32 + ctx.r10.u32, ctx.r29.u8);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// blt cr6,0x825069f0
	if (cr6.lt) goto loc_825069F0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stbx r10,r11,r30
	PPC_STORE_U8(ctx.r11.u32 + ctx.r30.u32, ctx.r10.u8);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_825069F0:
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// stbx r10,r31,r30
	PPC_STORE_U8(ctx.r31.u32 + ctx.r30.u32, ctx.r10.u8);
loc_825069FC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82506A08"))) PPC_WEAK_FUNC(sub_82506A08);
PPC_FUNC_IMPL(__imp__sub_82506A08) {
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
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// bl 0x82488f38
	ctx.lr = 0x82506A34;
	sub_82488F38(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8241f1b0
	ctx.lr = 0x82506A40;
	sub_8241F1B0(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82420750
	ctx.lr = 0x82506A4C;
	sub_82420750(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82420380
	ctx.lr = 0x82506A58;
	sub_82420380(ctx, base);
	// bl 0x8252e3c0
	ctx.lr = 0x82506A5C;
	sub_8252E3C0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82576848
	ctx.lr = 0x82506A68;
	sub_82576848(ctx, base);
	// addi r3,r1,184
	ctx.r3.s64 = ctx.r1.s64 + 184;
	// bl 0x82576cb0
	ctx.lr = 0x82506A70;
	sub_82576CB0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r31,0
	ctx.r31.s64 = 0;
	// stb r11,213(r1)
	PPC_STORE_U8(ctx.r1.u32 + 213, ctx.r11.u8);
	// addi r3,r1,216
	ctx.r3.s64 = ctx.r1.s64 + 216;
	// stb r31,212(r1)
	PPC_STORE_U8(ctx.r1.u32 + 212, ctx.r31.u8);
	// bl 0x825766d0
	ctx.lr = 0x82506A88;
	sub_825766D0(ctx, base);
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x82576cb0
	ctx.lr = 0x82506A90;
	sub_82576CB0(ctx, base);
	// stb r31,284(r1)
	PPC_STORE_U8(ctx.r1.u32 + 284, ctx.r31.u8);
	// stb r31,285(r1)
	PPC_STORE_U8(ctx.r1.u32 + 285, ctx.r31.u8);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// sth r31,288(r1)
	PPC_STORE_U16(ctx.r1.u32 + 288, ctx.r31.u16);
	// sth r31,290(r1)
	PPC_STORE_U16(ctx.r1.u32 + 290, ctx.r31.u16);
	// bl 0x82573c50
	ctx.lr = 0x82506AA8;
	sub_82573C50(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825639b0
	ctx.lr = 0x82506AB8;
	sub_825639B0(ctx, base);
	// lwz r10,172(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	// lwz r4,152(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// bge cr6,0x82506acc
	if (!cr6.lt) goto loc_82506ACC;
	// addi r4,r1,152
	ctx.r4.s64 = ctx.r1.s64 + 152;
loc_82506ACC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8253b478
	ctx.lr = 0x82506AD4;
	sub_8253B478(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x824200a8
	ctx.lr = 0x82506ADC;
	sub_824200A8(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8241fb00
	ctx.lr = 0x82506AE4;
	sub_8241FB00(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82573c50
	ctx.lr = 0x82506AEC;
	sub_82573C50(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
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

__attribute__((alias("__imp__sub_82506B08"))) PPC_WEAK_FUNC(sub_82506B08);
PPC_FUNC_IMPL(__imp__sub_82506B08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82506B10;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r26,0
	ctx.r26.s64 = 0;
	// li r28,0
	ctx.r28.s64 = 0;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r10,r11,r3
	ctx.r10.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r3,56(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 56);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82506b50
	if (cr6.eq) goto loc_82506B50;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82506B50;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82506B50:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82506578
	ctx.lr = 0x82506B5C;
	sub_82506578(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82506c8c
	if (cr6.eq) goto loc_82506C8C;
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8246e3e8
	ctx.lr = 0x82506B78;
	sub_8246E3E8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// clrlwi r27,r29,24
	ctx.r27.u64 = ctx.r29.u32 & 0xFF;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r3,56(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 56);
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82506bb8
	if (cr6.eq) goto loc_82506BB8;
	// lwz r10,48(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// ble cr6,0x82506bb8
	if (!cr6.gt) goto loc_82506BB8;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// b 0x82506bc8
	goto loc_82506BC8;
loc_82506BB8:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82506BC8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82506BC8:
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82506c14
	if (cr6.eq) goto loc_82506C14;
	// li r29,-2
	ctx.r29.s64 = -2;
loc_82506BD4:
	// cmpw cr6,r3,r27
	cr6.compare<int32_t>(ctx.r3.s32, ctx.r27.s32, xer);
	// beq cr6,0x82506c1c
	if (cr6.eq) goto loc_82506C1C;
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmplw cr6,r11,r29
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, xer);
	// bge cr6,0x82506c88
	if (!cr6.lt) goto loc_82506C88;
	// extsb r4,r3
	ctx.r4.s64 = ctx.r3.s8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82506958
	ctx.lr = 0x82506BF4;
	sub_82506958(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r28,1
	ctx.r28.s64 = 1;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r3,56(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 56);
	// bl 0x82506438
	ctx.lr = 0x82506C0C;
	sub_82506438(ctx, base);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// bne cr6,0x82506bd4
	if (!cr6.eq) goto loc_82506BD4;
loc_82506C14:
	// li r26,1
	ctx.r26.s64 = 1;
	// b 0x82506c8c
	goto loc_82506C8C;
loc_82506C1C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r28,1
	ctx.r28.s64 = 1;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r3,56(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 56);
	// lwz r9,32(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x82506c74
	if (cr6.eq) goto loc_82506C74;
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// ble cr6,0x82506c74
	if (!cr6.gt) goto loc_82506C74;
	// rotlwi r10,r11,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r8,32(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// stw r7,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r7.u32);
	// b 0x82506c8c
	goto loc_82506C8C;
loc_82506C74:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82506C84;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x82506c8c
	goto loc_82506C8C;
loc_82506C88:
	// li r26,2
	ctx.r26.s64 = 2;
loc_82506C8C:
	// clrlwi r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82506c9c
	if (!cr6.eq) goto loc_82506C9C;
	// ori r26,r26,2
	ctx.r26.u64 = ctx.r26.u64 | 2;
loc_82506C9C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r26,0
	cr6.compare<int32_t>(ctx.r26.s32, 0, xer);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + ctx.r31.u64;
	// beq cr6,0x82506cd4
	if (cr6.eq) goto loc_82506CD4;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r10,56(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// or r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 | ctx.r26.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82506cc8
	if (!cr6.eq) goto loc_82506CC8;
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
loc_82506CC8:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// bl 0x8246c218
	ctx.lr = 0x82506CD4;
	sub_8246C218(ctx, base);
loc_82506CD4:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r3,56(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 56);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82506cfc
	if (cr6.eq) goto loc_82506CFC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82506CFC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82506CFC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82506D08"))) PPC_WEAK_FUNC(sub_82506D08);
PPC_FUNC_IMPL(__imp__sub_82506D08) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82506D10;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82506d48
	if (cr6.eq) goto loc_82506D48;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r9,r11,-19984
	ctx.r9.s64 = ctx.r11.s64 + -19984;
	// addi r8,r10,15320
	ctx.r8.s64 = ctx.r10.s64 + 15320;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r8,104(r3)
	PPC_STORE_U32(ctx.r3.u32 + 104, ctx.r8.u32);
loc_82506D48:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r29,r31,16
	ctx.r29.s64 = ctx.r31.s64 + 16;
	// addi r9,r10,-19992
	ctx.r9.s64 = ctx.r10.s64 + -19992;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stwx r9,r8,r31
	PPC_STORE_U32(ctx.r8.u32 + ctx.r31.u32, ctx.r9.u32);
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// std r30,8(r31)
	PPC_STORE_U64(ctx.r31.u32 + 8, ctx.r30.u64);
	// lwz r11,4(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bl 0x82473310
	ctx.lr = 0x82506D7C;
	sub_82473310(ctx, base);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r5,r6,-19988
	ctx.r5.s64 = ctx.r6.s64 + -19988;
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stwx r5,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r5.u32);
	// bl 0x8246e6a8
	ctx.lr = 0x82506D98;
	sub_8246E6A8(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r11,r29,12
	ctx.r11.s64 = ctx.r29.s64 + 12;
	// stb r30,96(r31)
	PPC_STORE_U8(ctx.r31.u32 + 96, ctx.r30.u8);
	// addi r4,r10,15636
	ctx.r4.s64 = ctx.r10.s64 + 15636;
	// stb r30,89(r31)
	PPC_STORE_U8(ctx.r31.u32 + 89, ctx.r30.u8);
	// addi r9,r29,28
	ctx.r9.s64 = ctx.r29.s64 + 28;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// addi r8,r29,44
	ctx.r8.s64 = ctx.r29.s64 + 44;
	// stw r8,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r8.u32);
	// addi r7,r29,8
	ctx.r7.s64 = ctx.r29.s64 + 8;
	// stw r7,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r7.u32);
	// addi r6,r29,24
	ctx.r6.s64 = ctx.r29.s64 + 24;
	// stw r6,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r6.u32);
	// addi r5,r29,40
	ctx.r5.s64 = ctx.r29.s64 + 40;
	// stw r5,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r5.u32);
	// stw r9,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r9.u32);
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// stw r4,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r4.u32);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
	// ori r5,r27,1
	ctx.r5.u64 = ctx.r27.u64 | 1;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,52(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// stw r30,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r30.u32);
	// lwz r9,68(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// stw r30,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r30.u32);
	// lwz r8,32(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// stw r30,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r30.u32);
	// lwz r7,48(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// stw r30,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r30.u32);
	// lwz r10,64(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// stw r30,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r30.u32);
	// stw r30,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r30.u32);
	// lwz r11,1904(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1904);
	// stw r30,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r30.u32);
	// stw r11,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r11.u32);
	// bl 0x82472e88
	ctx.lr = 0x82506E30;
	sub_82472E88(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82506e68
	if (!cr6.eq) goto loc_82506E68;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r9,56(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// ori r11,r10,2
	ctx.r11.u64 = ctx.r10.u64 | 2;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82506e5c
	if (!cr6.eq) goto loc_82506E5C;
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
loc_82506E5C:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// bl 0x8246c218
	ctx.lr = 0x82506E68;
	sub_8246C218(ctx, base);
loc_82506E68:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82506E74"))) PPC_WEAK_FUNC(sub_82506E74);
PPC_FUNC_IMPL(__imp__sub_82506E74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82506E78"))) PPC_WEAK_FUNC(sub_82506E78);
PPC_FUNC_IMPL(__imp__sub_82506E78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82506E80;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r30,r3,104
	ctx.r30.s64 = ctx.r3.s64 + 104;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r29,r30,-88
	ctx.r29.s64 = ctx.r30.s64 + -88;
	// addi r9,r10,-19988
	ctx.r9.s64 = ctx.r10.s64 + -19988;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// add r8,r11,r30
	ctx.r8.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r9,-104(r8)
	PPC_STORE_U32(ctx.r8.u32 + -104, ctx.r9.u32);
	// bl 0x82477190
	ctx.lr = 0x82506EB0;
	sub_82477190(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// addi r5,r7,-19992
	ctx.r5.s64 = ctx.r7.s64 + -19992;
	// addi r4,r6,15320
	ctx.r4.s64 = ctx.r6.s64 + 15320;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r10,r11,r29
	ctx.r10.u64 = ctx.r11.u64 + ctx.r29.u64;
	// stw r5,-16(r10)
	PPC_STORE_U32(ctx.r10.u32 + -16, ctx.r5.u32);
	// stw r4,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r4.u32);
	// bl 0x831ccf00
	ctx.lr = 0x82506EDC;
	sub_831CCF00(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82506EE4"))) PPC_WEAK_FUNC(sub_82506EE4);
PPC_FUNC_IMPL(__imp__sub_82506EE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82506EE8"))) PPC_WEAK_FUNC(sub_82506EE8);
PPC_FUNC_IMPL(__imp__sub_82506EE8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82506EF0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,-104(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -104);
	// addi r31,r3,-104
	ctx.r31.s64 = ctx.r3.s64 + -104;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r30,r31,104
	ctx.r30.s64 = ctx.r31.s64 + 104;
	// addi r9,r10,-19988
	ctx.r9.s64 = ctx.r10.s64 + -19988;
	// addi r29,r30,-88
	ctx.r29.s64 = ctx.r30.s64 + -88;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// add r8,r11,r30
	ctx.r8.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r9,-104(r8)
	PPC_STORE_U32(ctx.r8.u32 + -104, ctx.r9.u32);
	// bl 0x82477190
	ctx.lr = 0x82506F24;
	sub_82477190(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// addi r5,r7,-19992
	ctx.r5.s64 = ctx.r7.s64 + -19992;
	// addi r4,r6,15320
	ctx.r4.s64 = ctx.r6.s64 + 15320;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r10,r11,r29
	ctx.r10.u64 = ctx.r11.u64 + ctx.r29.u64;
	// stw r5,-16(r10)
	PPC_STORE_U32(ctx.r10.u32 + -16, ctx.r5.u32);
	// stw r4,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r4.u32);
	// bl 0x831ccf00
	ctx.lr = 0x82506F50;
	sub_831CCF00(ctx, base);
	// clrlwi r9,r28,31
	ctx.r9.u64 = ctx.r28.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82506f68
	if (cr6.eq) goto loc_82506F68;
	// bl 0x82416268
	ctx.lr = 0x82506F64;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82506F68:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82506F70"))) PPC_WEAK_FUNC(sub_82506F70);
PPC_FUNC_IMPL(__imp__sub_82506F70) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82506F78;
	__savegprlr_26(ctx, base);
	// stwu r1,-736(r1)
	ea = -736 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8253aa58
	ctx.lr = 0x82506F84;
	sub_8253AA58(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x825073ac
	if (!cr6.eq) goto loc_825073AC;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,416
	ctx.r3.s64 = ctx.r1.s64 + 416;
	// bl 0x82488fa8
	ctx.lr = 0x82506F9C;
	sub_82488FA8(ctx, base);
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// lwz r4,416(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 416);
	// bl 0x82576848
	ctx.lr = 0x82506FA8;
	sub_82576848(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r28,r11,-20688
	ctx.r28.s64 = ctx.r11.s64 + -20688;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// addi r4,r28,-168
	ctx.r4.s64 = ctx.r28.s64 + -168;
	// bl 0x82575990
	ctx.lr = 0x82506FC0;
	sub_82575990(ctx, base);
	// addi r5,r3,1
	ctx.r5.s64 = ctx.r3.s64 + 1;
	// addi r4,r1,272
	ctx.r4.s64 = ctx.r1.s64 + 272;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82576d58
	ctx.lr = 0x82506FD0;
	sub_82576D58(ctx, base);
	// addi r4,r28,-164
	ctx.r4.s64 = ctx.r28.s64 + -164;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x825758d0
	ctx.lr = 0x82506FDC;
	sub_825758D0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82506ff8
	if (!cr6.eq) goto loc_82506FF8;
	// addi r4,r28,-156
	ctx.r4.s64 = ctx.r28.s64 + -156;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x82576620
	ctx.lr = 0x82506FF4;
	sub_82576620(ctx, base);
	// b 0x82507008
	goto loc_82507008;
loc_82506FF8:
	// addi r5,r28,-327
	ctx.r5.s64 = ctx.r28.s64 + -327;
	// addi r4,r28,-148
	ctx.r4.s64 = ctx.r28.s64 + -148;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82576378
	ctx.lr = 0x82507008;
	sub_82576378(ctx, base);
loc_82507008:
	// lis r6,2
	ctx.r6.s64 = 131072;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r6,r6,1
	ctx.r6.u64 = ctx.r6.u64 | 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// bl 0x82490878
	ctx.lr = 0x82507020;
	sub_82490878(ctx, base);
	// lis r6,2
	ctx.r6.s64 = 131072;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r6,r6,1
	ctx.r6.u64 = ctx.r6.u64 | 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,608
	ctx.r3.s64 = ctx.r1.s64 + 608;
	// bl 0x8247cb58
	ctx.lr = 0x82507038;
	sub_8247CB58(ctx, base);
	// lwz r11,300(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 300);
	// lwz r4,280(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 280);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x8250704c
	if (!cr6.lt) goto loc_8250704C;
	// addi r4,r1,280
	ctx.r4.s64 = ctx.r1.s64 + 280;
loc_8250704C:
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,64
	ctx.r6.s64 = 64;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r1,432
	ctx.r3.s64 = ctx.r1.s64 + 432;
	// bl 0x82506d08
	ctx.lr = 0x82507060;
	sub_82506D08(ctx, base);
	// lwz r11,532(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 532);
	// li r26,15
	ctx.r26.s64 = 15;
	// li r27,0
	ctx.r27.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82507298
	if (cr6.eq) goto loc_82507298;
	// lwz r11,432(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 432);
	// addi r10,r1,444
	ctx.r10.s64 = ctx.r1.s64 + 444;
	// stw r26,260(r1)
	PPC_STORE_U32(ctx.r1.u32 + 260, ctx.r26.u32);
	// stw r27,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, ctx.r27.u32);
	// stb r27,240(r1)
	PPC_STORE_U8(ctx.r1.u32 + 240, ctx.r27.u8);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwzx r8,r9,r10
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// clrlwi r7,r8,31
	ctx.r7.u64 = ctx.r8.u32 & 0x1;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// bne cr6,0x82507290
	if (!cr6.eq) goto loc_82507290;
loc_8250709C:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x825766d0
	ctx.lr = 0x825070A4;
	sub_825766D0(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x825766d0
	ctx.lr = 0x825070AC;
	sub_825766D0(ctx, base);
	// lwz r11,432(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 432);
	// addi r10,r1,432
	ctx.r10.s64 = ctx.r1.s64 + 432;
	// li r4,10
	ctx.r4.s64 = 10;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x82470f60
	ctx.lr = 0x825070C4;
	sub_82470F60(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// addi r3,r1,432
	ctx.r3.s64 = ctx.r1.s64 + 432;
	// bl 0x82506b08
	ctx.lr = 0x825070D4;
	sub_82506B08(ctx, base);
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x825768c0
	ctx.lr = 0x825070E0;
	sub_825768C0(ctx, base);
	// lwz r10,168(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82507280
	if (cr6.eq) goto loc_82507280;
	// addi r4,r28,-140
	ctx.r4.s64 = ctx.r28.s64 + -140;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82575968
	ctx.lr = 0x825070FC;
	sub_82575968(ctx, base);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// bne cr6,0x82507280
	if (!cr6.eq) goto loc_82507280;
	// lwz r11,432(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 432);
	// addi r10,r1,432
	ctx.r10.s64 = ctx.r1.s64 + 432;
	// li r4,10
	ctx.r4.s64 = 10;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x82470f60
	ctx.lr = 0x8250711C;
	sub_82470F60(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// addi r3,r1,432
	ctx.r3.s64 = ctx.r1.s64 + 432;
	// bl 0x82506b08
	ctx.lr = 0x8250712C;
	sub_82506B08(ctx, base);
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x825768c0
	ctx.lr = 0x82507138;
	sub_825768C0(ctx, base);
	// lwz r10,120(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82507150
	if (!cr6.eq) goto loc_82507150;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82576490
	ctx.lr = 0x82507150;
	sub_82576490(ctx, base);
loc_82507150:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// bl 0x82574538
	ctx.lr = 0x8250715C;
	sub_82574538(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x825752a0
	ctx.lr = 0x82507164;
	sub_825752A0(ctx, base);
	// std r3,336(r1)
	PPC_STORE_U64(ctx.r1.u32 + 336, ctx.r3.u64);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,336
	ctx.r5.s64 = ctx.r1.s64 + 336;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,608
	ctx.r3.s64 = ctx.r1.s64 + 608;
	// rotlwi r6,r11,0
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8247c508
	ctx.lr = 0x82507188;
	sub_8247C508(ctx, base);
	// lbz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8250722c
	if (cr6.eq) goto loc_8250722C;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x825752a0
	ctx.lr = 0x8250719C;
	sub_825752A0(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// addi r4,r1,81
	ctx.r4.s64 = ctx.r1.s64 + 81;
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// bl 0x82490720
	ctx.lr = 0x825071B8;
	sub_82490720(ctx, base);
	// lbz r10,81(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82507230
	if (cr6.eq) goto loc_82507230;
	// bl 0x82573c50
	ctx.lr = 0x825071CC;
	sub_82573C50(ctx, base);
	// lwz r11,124(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x825071e0
	if (cr6.lt) goto loc_825071E0;
	// lwz r3,104(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// bl 0x8386d088
	ctx.lr = 0x825071E0;
	sub_8386D088(ctx, base);
loc_825071E0:
	// lwz r11,172(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	// stw r26,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r26.u32);
	// stw r27,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r27.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r27,104(r1)
	PPC_STORE_U8(ctx.r1.u32 + 104, ctx.r27.u8);
	// blt cr6,0x82507200
	if (cr6.lt) goto loc_82507200;
	// lwz r3,152(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// bl 0x8386d088
	ctx.lr = 0x82507200;
	sub_8386D088(ctx, base);
loc_82507200:
	// stb r27,152(r1)
	PPC_STORE_U8(ctx.r1.u32 + 152, ctx.r27.u8);
	// addi r10,r1,444
	ctx.r10.s64 = ctx.r1.s64 + 444;
	// lwz r11,432(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 432);
	// stw r26,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r26.u32);
	// stw r27,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r27.u32);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwzx r8,r9,r10
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// clrlwi r7,r8,31
	ctx.r7.u64 = ctx.r8.u32 & 0x1;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x8250709c
	if (cr6.eq) goto loc_8250709C;
	// b 0x82507290
	goto loc_82507290;
loc_8250722C:
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
loc_82507230:
	// bl 0x82573c50
	ctx.lr = 0x82507234;
	sub_82573C50(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8241ff70
	ctx.lr = 0x8250723C;
	sub_8241FF70(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x8241ff70
	ctx.lr = 0x82507244;
	sub_8241FF70(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x8241fe60
	ctx.lr = 0x8250724C;
	sub_8241FE60(ctx, base);
	// addi r3,r1,432
	ctx.r3.s64 = ctx.r1.s64 + 432;
	// bl 0x82506e78
	ctx.lr = 0x82507254;
	sub_82506E78(ctx, base);
	// addi r3,r1,608
	ctx.r3.s64 = ctx.r1.s64 + 608;
	// bl 0x8247d208
	ctx.lr = 0x8250725C;
	sub_8247D208(ctx, base);
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// bl 0x82490af0
	ctx.lr = 0x82507264;
	sub_82490AF0(ctx, base);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x8241ff70
	ctx.lr = 0x8250726C;
	sub_8241FF70(ctx, base);
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x8241ff70
	ctx.lr = 0x82507274;
	sub_8241FF70(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,736
	ctx.r1.s64 = ctx.r1.s64 + 736;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_82507280:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8241ff70
	ctx.lr = 0x82507288;
	sub_8241FF70(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x8241ff70
	ctx.lr = 0x82507290;
	sub_8241FF70(ctx, base);
loc_82507290:
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x8241fe60
	ctx.lr = 0x82507298;
	sub_8241FE60(ctx, base);
loc_82507298:
	// addi r3,r1,432
	ctx.r3.s64 = ctx.r1.s64 + 432;
	// bl 0x82506e78
	ctx.lr = 0x825072A0;
	sub_82506E78(ctx, base);
	// lwz r11,360(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 360);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82507368
	if (cr6.eq) goto loc_82507368;
	// lwz r11,220(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 220);
	// lwz r4,200(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 200);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x825072c0
	if (!cr6.lt) goto loc_825072C0;
	// addi r4,r1,200
	ctx.r4.s64 = ctx.r1.s64 + 200;
loc_825072C0:
	// addi r3,r28,-136
	ctx.r3.s64 = ctx.r28.s64 + -136;
	// bl 0x83102db0
	ctx.lr = 0x825072C8;
	sub_83102DB0(ctx, base);
	// addi r3,r28,-120
	ctx.r3.s64 = ctx.r28.s64 + -120;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x83102db0
	ctx.lr = 0x825072D4;
	sub_83102DB0(ctx, base);
	// lwz r11,220(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 220);
	// lwz r4,200(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 200);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x825072e8
	if (!cr6.lt) goto loc_825072E8;
	// addi r4,r1,200
	ctx.r4.s64 = ctx.r1.s64 + 200;
loc_825072E8:
	// addi r3,r28,-92
	ctx.r3.s64 = ctx.r28.s64 + -92;
	// bl 0x83102db0
	ctx.lr = 0x825072F0;
	sub_83102DB0(ctx, base);
	// addi r11,r1,376
	ctx.r11.s64 = ctx.r1.s64 + 376;
	// lwz r31,384(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 384);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// beq cr6,0x82507360
	if (cr6.eq) goto loc_82507360;
loc_82507300:
	// lwz r10,44(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// addi r11,r31,24
	ctx.r11.s64 = ctx.r31.s64 + 24;
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82507318
	if (cr6.lt) goto loc_82507318;
	// lwz r29,0(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x8250731c
	goto loc_8250731C;
loc_82507318:
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
loc_8250731C:
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// addi r30,r31,64
	ctx.r30.s64 = ctx.r31.s64 + 64;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82507330
	if (cr6.lt) goto loc_82507330;
	// lwz r30,0(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_82507330:
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// bl 0x825752a0
	ctx.lr = 0x82507338;
	sub_825752A0(ctx, base);
	// addi r11,r28,-36
	ctx.r11.s64 = ctx.r28.s64 + -36;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// bl 0x83102db0
	ctx.lr = 0x82507350;
	sub_83102DB0(ctx, base);
	// addi r10,r1,376
	ctx.r10.s64 = ctx.r1.s64 + 376;
	// lwz r31,8(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r31,r10
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, xer);
	// bne cr6,0x82507300
	if (!cr6.eq) goto loc_82507300;
loc_82507360:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83102db0
	ctx.lr = 0x82507368;
	sub_83102DB0(ctx, base);
loc_82507368:
	// addi r3,r1,608
	ctx.r3.s64 = ctx.r1.s64 + 608;
	// bl 0x8247d208
	ctx.lr = 0x82507370;
	sub_8247D208(ctx, base);
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// bl 0x82490af0
	ctx.lr = 0x82507378;
	sub_82490AF0(ctx, base);
	// lwz r11,220(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 220);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8250738c
	if (cr6.lt) goto loc_8250738C;
	// lwz r3,200(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 200);
	// bl 0x8386d088
	ctx.lr = 0x8250738C;
	sub_8386D088(ctx, base);
loc_8250738C:
	// lwz r11,300(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 300);
	// stw r26,220(r1)
	PPC_STORE_U32(ctx.r1.u32 + 220, ctx.r26.u32);
	// stw r27,216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 216, ctx.r27.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r27,200(r1)
	PPC_STORE_U8(ctx.r1.u32 + 200, ctx.r27.u8);
	// blt cr6,0x825073ac
	if (cr6.lt) goto loc_825073AC;
	// lwz r3,280(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 280);
	// bl 0x8386d088
	ctx.lr = 0x825073AC;
	sub_8386D088(ctx, base);
loc_825073AC:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,736
	ctx.r1.s64 = ctx.r1.s64 + 736;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825073B8"))) PPC_WEAK_FUNC(sub_825073B8);
PPC_FUNC_IMPL(__imp__sub_825073B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdab4
	ctx.lr = 0x825073C0;
	__savegprlr_15(ctx, base);
	// stwu r1,-528(r1)
	ea = -528 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82489ab8
	ctx.lr = 0x825073D8;
	sub_82489AB8(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32176
	ctx.r10.s64 = -2108686336;
	// lis r9,-32176
	ctx.r9.s64 = -2108686336;
	// lis r8,-32176
	ctx.r8.s64 = -2108686336;
	// addi r4,r11,-19996
	ctx.r4.s64 = ctx.r11.s64 + -19996;
	// addi r10,r10,22416
	ctx.r10.s64 = ctx.r10.s64 + 22416;
	// addi r9,r9,22664
	ctx.r9.s64 = ctx.r9.s64 + 22664;
	// addi r8,r8,25352
	ctx.r8.s64 = ctx.r8.s64 + 25352;
	// lis r31,-32176
	ctx.r31.s64 = -2108686336;
	// lis r30,-32176
	ctx.r30.s64 = -2108686336;
	// lis r29,-32176
	ctx.r29.s64 = -2108686336;
	// lis r7,-32176
	ctx.r7.s64 = -2108686336;
	// lis r6,-32176
	ctx.r6.s64 = -2108686336;
	// lis r5,-32176
	ctx.r5.s64 = -2108686336;
	// lis r3,-32176
	ctx.r3.s64 = -2108686336;
	// lis r11,-32176
	ctx.r11.s64 = -2108686336;
	// addi r28,r4,-560
	ctx.r28.s64 = ctx.r4.s64 + -560;
	// addi r27,r4,-548
	ctx.r27.s64 = ctx.r4.s64 + -548;
	// addi r26,r4,-536
	ctx.r26.s64 = ctx.r4.s64 + -536;
	// addi r7,r7,22760
	ctx.r7.s64 = ctx.r7.s64 + 22760;
	// lwz r21,80(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r6,r6,22968
	ctx.r6.s64 = ctx.r6.s64 + 22968;
	// addi r5,r5,23088
	ctx.r5.s64 = ctx.r5.s64 + 23088;
	// addi r3,r3,28528
	ctx.r3.s64 = ctx.r3.s64 + 28528;
	// addi r11,r11,23744
	ctx.r11.s64 = ctx.r11.s64 + 23744;
	// addi r25,r4,-528
	ctx.r25.s64 = ctx.r4.s64 + -528;
	// lwz r21,4(r21)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r21.u32 + 4);
	// addi r24,r4,-516
	ctx.r24.s64 = ctx.r4.s64 + -516;
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// addi r10,r31,25208
	ctx.r10.s64 = ctx.r31.s64 + 25208;
	// stw r9,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r9.u32);
	// addi r9,r30,23928
	ctx.r9.s64 = ctx.r30.s64 + 23928;
	// stw r8,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r8.u32);
	// addi r8,r29,24128
	ctx.r8.s64 = ctx.r29.s64 + 24128;
	// addi r23,r4,-500
	ctx.r23.s64 = ctx.r4.s64 + -500;
	// stw r28,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r28.u32);
	// addi r22,r4,-484
	ctx.r22.s64 = ctx.r4.s64 + -484;
	// stw r27,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r27.u32);
	// addi r20,r4,-476
	ctx.r20.s64 = ctx.r4.s64 + -476;
	// stw r26,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r26.u32);
	// addi r19,r4,-460
	ctx.r19.s64 = ctx.r4.s64 + -460;
	// stw r7,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r7.u32);
	// addi r18,r4,-440
	ctx.r18.s64 = ctx.r4.s64 + -440;
	// stw r6,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r6.u32);
	// addi r17,r4,-420
	ctx.r17.s64 = ctx.r4.s64 + -420;
	// stw r5,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r5.u32);
	// addi r16,r4,-416
	ctx.r16.s64 = ctx.r4.s64 + -416;
	// stw r3,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r3.u32);
	// lis r15,-32176
	ctx.r15.s64 = -2108686336;
	// stw r11,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r11.u32);
	// stw r10,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r10.u32);
	// addi r7,r4,-408
	ctx.r7.s64 = ctx.r4.s64 + -408;
	// stw r9,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r9.u32);
	// lis r6,-32176
	ctx.r6.s64 = -2108686336;
	// stw r8,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r8.u32);
	// addi r5,r4,-400
	ctx.r5.s64 = ctx.r4.s64 + -400;
	// stw r25,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r25.u32);
	// lis r3,-32176
	ctx.r3.s64 = -2108686336;
	// stw r24,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r24.u32);
	// addi r31,r4,-392
	ctx.r31.s64 = ctx.r4.s64 + -392;
	// stw r23,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r23.u32);
	// lis r11,-31913
	ctx.r11.s64 = -2091450368;
	// stw r22,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r22.u32);
	// addi r30,r4,-372
	ctx.r30.s64 = ctx.r4.s64 + -372;
	// stw r20,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r20.u32);
	// lis r10,-32176
	ctx.r10.s64 = -2108686336;
	// stw r19,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r19.u32);
	// addi r29,r4,-352
	ctx.r29.s64 = ctx.r4.s64 + -352;
	// stw r18,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r18.u32);
	// lis r9,-31913
	ctx.r9.s64 = -2091450368;
	// stw r17,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r17.u32);
	// addi r28,r4,-336
	ctx.r28.s64 = ctx.r4.s64 + -336;
	// lis r8,-31913
	ctx.r8.s64 = -2091450368;
	// stw r16,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r16.u32);
	// addi r27,r4,-316
	ctx.r27.s64 = ctx.r4.s64 + -316;
	// addi r26,r15,24336
	ctx.r26.s64 = ctx.r15.s64 + 24336;
	// addi r6,r6,24544
	ctx.r6.s64 = ctx.r6.s64 + 24544;
	// stw r26,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r26.u32);
	// addi r3,r3,24752
	ctx.r3.s64 = ctx.r3.s64 + 24752;
	// stw r5,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r5.u32);
	// addi r9,r9,10584
	ctx.r9.s64 = ctx.r9.s64 + 10584;
	// stw r6,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r6.u32);
	// addi r8,r8,10584
	ctx.r8.s64 = ctx.r8.s64 + 10584;
	// stw r3,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r3.u32);
	// addi r11,r11,10584
	ctx.r11.s64 = ctx.r11.s64 + 10584;
	// stw r9,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r9.u32);
	// stw r8,236(r1)
	PPC_STORE_U32(ctx.r1.u32 + 236, ctx.r8.u32);
	// addi r6,r4,-296
	ctx.r6.s64 = ctx.r4.s64 + -296;
	// stw r11,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r11.u32);
	// addi r3,r4,-280
	ctx.r3.s64 = ctx.r4.s64 + -280;
	// addi r9,r4,-220
	ctx.r9.s64 = ctx.r4.s64 + -220;
	// stw r6,248(r1)
	PPC_STORE_U32(ctx.r1.u32 + 248, ctx.r6.u32);
	// addi r8,r4,-212
	ctx.r8.s64 = ctx.r4.s64 + -212;
	// stw r3,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, ctx.r3.u32);
	// addi r10,r10,25560
	ctx.r10.s64 = ctx.r10.s64 + 25560;
	// stw r9,280(r1)
	PPC_STORE_U32(ctx.r1.u32 + 280, ctx.r9.u32);
	// lis r25,-32176
	ctx.r25.s64 = -2108686336;
	// stw r8,288(r1)
	PPC_STORE_U32(ctx.r1.u32 + 288, ctx.r8.u32);
	// lis r26,-32176
	ctx.r26.s64 = -2108686336;
	// stw r7,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r7.u32);
	// addi r11,r4,-264
	ctx.r11.s64 = ctx.r4.s64 + -264;
	// stw r10,220(r1)
	PPC_STORE_U32(ctx.r1.u32 + 220, ctx.r10.u32);
	// addi r6,r4,-204
	ctx.r6.s64 = ctx.r4.s64 + -204;
	// stw r31,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r31.u32);
	// addi r9,r25,24960
	ctx.r9.s64 = ctx.r25.s64 + 24960;
	// stw r30,216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 216, ctx.r30.u32);
	// addi r8,r26,25000
	ctx.r8.s64 = ctx.r26.s64 + 25000;
	// stw r28,232(r1)
	PPC_STORE_U32(ctx.r1.u32 + 232, ctx.r28.u32);
	// lis r5,-32176
	ctx.r5.s64 = -2108686336;
	// stw r27,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r27.u32);
	// stw r11,264(r1)
	PPC_STORE_U32(ctx.r1.u32 + 264, ctx.r11.u32);
	// addi r3,r4,-184
	ctx.r3.s64 = ctx.r4.s64 + -184;
	// lis r31,-32176
	ctx.r31.s64 = -2108686336;
	// stw r29,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r29.u32);
	// lis r30,-32176
	ctx.r30.s64 = -2108686336;
	// stw r6,296(r1)
	PPC_STORE_U32(ctx.r1.u32 + 296, ctx.r6.u32);
	// lis r28,-32176
	ctx.r28.s64 = -2108686336;
	// stw r3,304(r1)
	PPC_STORE_U32(ctx.r1.u32 + 304, ctx.r3.u32);
	// lis r27,-32176
	ctx.r27.s64 = -2108686336;
	// stw r9,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r9.u32);
	// addi r10,r4,-236
	ctx.r10.s64 = ctx.r4.s64 + -236;
	// stw r8,252(r1)
	PPC_STORE_U32(ctx.r1.u32 + 252, ctx.r8.u32);
	// addi r11,r4,-176
	ctx.r11.s64 = ctx.r4.s64 + -176;
	// lis r7,-31913
	ctx.r7.s64 = -2091450368;
	// stw r10,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r10.u32);
	// lis r29,-31913
	ctx.r29.s64 = -2091450368;
	// stw r11,312(r1)
	PPC_STORE_U32(ctx.r1.u32 + 312, ctx.r11.u32);
	// addi r6,r5,27144
	ctx.r6.s64 = ctx.r5.s64 + 27144;
	// addi r5,r31,25040
	ctx.r5.s64 = ctx.r31.s64 + 25040;
	// addi r3,r30,25088
	ctx.r3.s64 = ctx.r30.s64 + 25088;
	// stw r6,268(r1)
	PPC_STORE_U32(ctx.r1.u32 + 268, ctx.r6.u32);
	// addi r9,r28,26400
	ctx.r9.s64 = ctx.r28.s64 + 26400;
	// stw r5,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r5.u32);
	// addi r8,r27,25088
	ctx.r8.s64 = ctx.r27.s64 + 25088;
	// stw r3,284(r1)
	PPC_STORE_U32(ctx.r1.u32 + 284, ctx.r3.u32);
	// addi r7,r7,10584
	ctx.r7.s64 = ctx.r7.s64 + 10584;
	// stw r9,300(r1)
	PPC_STORE_U32(ctx.r1.u32 + 300, ctx.r9.u32);
	// addi r11,r29,10584
	ctx.r11.s64 = ctx.r29.s64 + 10584;
	// stw r8,308(r1)
	PPC_STORE_U32(ctx.r1.u32 + 308, ctx.r8.u32);
	// lis r10,-31913
	ctx.r10.s64 = -2091450368;
	// stw r7,260(r1)
	PPC_STORE_U32(ctx.r1.u32 + 260, ctx.r7.u32);
	// stw r11,292(r1)
	PPC_STORE_U32(ctx.r1.u32 + 292, ctx.r11.u32);
	// addi r7,r4,-148
	ctx.r7.s64 = ctx.r4.s64 + -148;
	// lis r6,-31913
	ctx.r6.s64 = -2091450368;
	// addi r5,r4,-116
	ctx.r5.s64 = ctx.r4.s64 + -116;
	// lis r3,-31913
	ctx.r3.s64 = -2091450368;
	// addi r9,r4,-80
	ctx.r9.s64 = ctx.r4.s64 + -80;
	// lis r8,-31913
	ctx.r8.s64 = -2091450368;
	// addi r31,r4,-60
	ctx.r31.s64 = ctx.r4.s64 + -60;
	// lis r30,-32176
	ctx.r30.s64 = -2108686336;
	// addi r29,r4,-32
	ctx.r29.s64 = ctx.r4.s64 + -32;
	// lis r28,-31913
	ctx.r28.s64 = -2091450368;
	// addi r27,r4,-20
	ctx.r27.s64 = ctx.r4.s64 + -20;
	// lis r26,-32176
	ctx.r26.s64 = -2108686336;
	// addi r25,r4,-8
	ctx.r25.s64 = ctx.r4.s64 + -8;
	// lis r24,-32176
	ctx.r24.s64 = -2108686336;
	// addi r10,r10,10584
	ctx.r10.s64 = ctx.r10.s64 + 10584;
	// stw r10,316(r1)
	PPC_STORE_U32(ctx.r1.u32 + 316, ctx.r10.u32);
	// addi r10,r8,10584
	ctx.r10.s64 = ctx.r8.s64 + 10584;
	// addi r6,r6,10584
	ctx.r6.s64 = ctx.r6.s64 + 10584;
	// stw r7,320(r1)
	PPC_STORE_U32(ctx.r1.u32 + 320, ctx.r7.u32);
	// stw r10,340(r1)
	PPC_STORE_U32(ctx.r1.u32 + 340, ctx.r10.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r6,324(r1)
	PPC_STORE_U32(ctx.r1.u32 + 324, ctx.r6.u32);
	// addi r3,r3,10584
	ctx.r3.s64 = ctx.r3.s64 + 10584;
	// addi r8,r30,25136
	ctx.r8.s64 = ctx.r30.s64 + 25136;
	// stw r5,328(r1)
	PPC_STORE_U32(ctx.r1.u32 + 328, ctx.r5.u32);
	// addi r7,r28,10584
	ctx.r7.s64 = ctx.r28.s64 + 10584;
	// stw r3,332(r1)
	PPC_STORE_U32(ctx.r1.u32 + 332, ctx.r3.u32);
	// addi r6,r26,23128
	ctx.r6.s64 = ctx.r26.s64 + 23128;
	// stw r9,336(r1)
	PPC_STORE_U32(ctx.r1.u32 + 336, ctx.r9.u32);
	// addi r10,r24,23512
	ctx.r10.s64 = ctx.r24.s64 + 23512;
	// stw r31,344(r1)
	PPC_STORE_U32(ctx.r1.u32 + 344, ctx.r31.u32);
	// stw r8,348(r1)
	PPC_STORE_U32(ctx.r1.u32 + 348, ctx.r8.u32);
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// stw r29,352(r1)
	PPC_STORE_U32(ctx.r1.u32 + 352, ctx.r29.u32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// stw r7,356(r1)
	PPC_STORE_U32(ctx.r1.u32 + 356, ctx.r7.u32);
	// stw r27,360(r1)
	PPC_STORE_U32(ctx.r1.u32 + 360, ctx.r27.u32);
	// stw r6,364(r1)
	PPC_STORE_U32(ctx.r1.u32 + 364, ctx.r6.u32);
	// stw r25,368(r1)
	PPC_STORE_U32(ctx.r1.u32 + 368, ctx.r25.u32);
	// stw r10,372(r1)
	PPC_STORE_U32(ctx.r1.u32 + 372, ctx.r10.u32);
	// stw r11,376(r1)
	PPC_STORE_U32(ctx.r1.u32 + 376, ctx.r11.u32);
	// stw r11,380(r1)
	PPC_STORE_U32(ctx.r1.u32 + 380, ctx.r11.u32);
	// bl 0x82489568
	ctx.lr = 0x825076BC;
	sub_82489568(ctx, base);
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x8253aa70
	ctx.lr = 0x825076C8;
	sub_8253AA70(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x824894c0
	ctx.lr = 0x825076D0;
	sub_824894C0(ctx, base);
	// addi r1,r1,528
	ctx.r1.s64 = ctx.r1.s64 + 528;
	// b 0x831cdb04
	__restgprlr_15(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825076D8"))) PPC_WEAK_FUNC(sub_825076D8);
PPC_FUNC_IMPL(__imp__sub_825076D8) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82507728
	if (cr6.eq) goto loc_82507728;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824b3ea8
	ctx.lr = 0x82507708;
	sub_824B3EA8(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r10,r11,-19760
	ctx.r10.s64 = ctx.r11.s64 + -19760;
	// addi r3,r31,104
	ctx.r3.s64 = ctx.r31.s64 + 104;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x8241f160
	ctx.lr = 0x82507720;
	sub_8241F160(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x8250772c
	goto loc_8250772C;
loc_82507728:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8250772C:
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

__attribute__((alias("__imp__sub_82507744"))) PPC_WEAK_FUNC(sub_82507744);
PPC_FUNC_IMPL(__imp__sub_82507744) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82507748"))) PPC_WEAK_FUNC(sub_82507748);
PPC_FUNC_IMPL(__imp__sub_82507748) {
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
	// bl 0x82467738
	ctx.lr = 0x82507764;
	sub_82467738(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// li r3,120
	ctx.r3.s64 = 120;
	// lwz r5,24(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// bl 0x8248b768
	ctx.lr = 0x82507778;
	sub_8248B768(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825077b0
	if (cr6.eq) goto loc_825077B0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x824b3de0
	ctx.lr = 0x8250778C;
	sub_824B3DE0(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r10,r11,-19760
	ctx.r10.s64 = ctx.r11.s64 + -19760;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x8241f278
	ctx.lr = 0x8250779C;
	sub_8241F278(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,104
	ctx.r3.s64 = ctx.r31.s64 + 104;
	// bl 0x8241f130
	ctx.lr = 0x825077A8;
	sub_8241F130(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x825077b4
	goto loc_825077B4;
loc_825077B0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_825077B4:
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

__attribute__((alias("__imp__sub_825077CC"))) PPC_WEAK_FUNC(sub_825077CC);
PPC_FUNC_IMPL(__imp__sub_825077CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825077D0"))) PPC_WEAK_FUNC(sub_825077D0);
PPC_FUNC_IMPL(__imp__sub_825077D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x825077D8;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,0(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825077fc
	if (!cr6.eq) goto loc_825077FC;
loc_825077F0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_825077FC:
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lhz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x825077f0
	if (!cr6.eq) goto loc_825077F0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,84(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8250781C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82507840
	if (cr6.eq) goto loc_82507840;
	// lwz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// std r30,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r30.u64);
	// li r31,1
	ctx.r31.s64 = 1;
	// bl 0x82572fa0
	ctx.lr = 0x82507838;
	sub_82572FA0(ctx, base);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// b 0x82507860
	goto loc_82507860;
loc_82507840:
	// li r31,2
	ctx.r31.s64 = 2;
	// bl 0x82451cb8
	ctx.lr = 0x82507848;
	sub_82451CB8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// std r30,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r30.u64);
	// bl 0x82572fa0
	ctx.lr = 0x8250785C;
	sub_82572FA0(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
loc_82507860:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8241dc28
	ctx.lr = 0x82507868;
	sub_8241DC28(ctx, base);
	// rlwinm r11,r31,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0x2;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x82507884
	if (cr6.eq) goto loc_82507884;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// rlwinm r31,r31,0,31,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// bl 0x82572fa0
	ctx.lr = 0x82507884;
	sub_82572FA0(ctx, base);
loc_82507884:
	// clrlwi r11,r31,31
	ctx.r11.u64 = ctx.r31.u32 & 0x1;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x8250789c
	if (cr6.eq) goto loc_8250789C;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82572fa0
	ctx.lr = 0x8250789C;
	sub_82572FA0(ctx, base);
loc_8250789C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825078A8"))) PPC_WEAK_FUNC(sub_825078A8);
PPC_FUNC_IMPL(__imp__sub_825078A8) {
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
	// lis r10,-31767
	ctx.r10.s64 = -2081882112;
	// lwz r11,22960(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 22960);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x8250791c
	if (!cr6.eq) goto loc_8250791C;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-31767
	ctx.r9.s64 = -2081882112;
	// stw r11,22960(r10)
	PPC_STORE_U32(ctx.r10.u32 + 22960, ctx.r11.u32);
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// addi r31,r9,22728
	ctx.r31.s64 = ctx.r9.s64 + 22728;
	// lis r6,17
	ctx.r6.s64 = 1114112;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r8,-19956
	ctx.r5.s64 = ctx.r8.s64 + -19956;
	// ori r6,r6,4
	ctx.r6.u64 = ctx.r6.u64 | 4;
	// li r4,120
	ctx.r4.s64 = 120;
	// bl 0x82477fc8
	ctx.lr = 0x825078F8;
	sub_82477FC8(ctx, base);
	// lis r7,-31793
	ctx.r7.s64 = -2083586048;
	// addi r3,r7,8888
	ctx.r3.s64 = ctx.r7.s64 + 8888;
	// bl 0x831cdcc8
	ctx.lr = 0x82507904;
	sub_831CDCC8(ctx, base);
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
loc_8250791C:
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// addi r3,r11,22728
	ctx.r3.s64 = ctx.r11.s64 + 22728;
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

__attribute__((alias("__imp__sub_82507938"))) PPC_WEAK_FUNC(sub_82507938);
PPC_FUNC_IMPL(__imp__sub_82507938) {
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
	// addi r3,r3,104
	ctx.r3.s64 = ctx.r3.s64 + 104;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82573c50
	ctx.lr = 0x8250795C;
	sub_82573C50(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824b40a8
	ctx.lr = 0x82507964;
	sub_824B40A8(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8250797c
	if (cr6.eq) goto loc_8250797C;
	// bl 0x8248b818
	ctx.lr = 0x82507978;
	sub_8248B818(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8250797C:
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

__attribute__((alias("__imp__sub_82507994"))) PPC_WEAK_FUNC(sub_82507994);
PPC_FUNC_IMPL(__imp__sub_82507994) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82507998"))) PPC_WEAK_FUNC(sub_82507998);
PPC_FUNC_IMPL(__imp__sub_82507998) {
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
	// lis r10,-31767
	ctx.r10.s64 = -2081882112;
	// lwz r11,23200(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 23200);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82507a0c
	if (!cr6.eq) goto loc_82507A0C;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-31767
	ctx.r9.s64 = -2081882112;
	// stw r11,23200(r10)
	PPC_STORE_U32(ctx.r10.u32 + 23200, ctx.r11.u32);
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// addi r31,r9,22968
	ctx.r31.s64 = ctx.r9.s64 + 22968;
	// lis r6,17
	ctx.r6.s64 = 1114112;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r8,-19880
	ctx.r5.s64 = ctx.r8.s64 + -19880;
	// ori r6,r6,4
	ctx.r6.u64 = ctx.r6.u64 | 4;
	// li r4,80
	ctx.r4.s64 = 80;
	// bl 0x82477fc8
	ctx.lr = 0x825079E8;
	sub_82477FC8(ctx, base);
	// lis r7,-31793
	ctx.r7.s64 = -2083586048;
	// addi r3,r7,8904
	ctx.r3.s64 = ctx.r7.s64 + 8904;
	// bl 0x831cdcc8
	ctx.lr = 0x825079F4;
	sub_831CDCC8(ctx, base);
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
loc_82507A0C:
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// addi r3,r11,22968
	ctx.r3.s64 = ctx.r11.s64 + 22968;
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

__attribute__((alias("__imp__sub_82507A28"))) PPC_WEAK_FUNC(sub_82507A28);
PPC_FUNC_IMPL(__imp__sub_82507A28) {
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
	// bl 0x82507998
	ctx.lr = 0x82507A40;
	sub_82507998(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r31,r11,-19824
	ctx.r31.s64 = ctx.r11.s64 + -19824;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r31,-48
	ctx.r4.s64 = ctx.r31.s64 + -48;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8247b0f0
	ctx.lr = 0x82507A5C;
	sub_8247B0F0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8246be10
	ctx.lr = 0x82507A68;
	sub_8246BE10(ctx, base);
	// bl 0x8251af80
	ctx.lr = 0x82507A6C;
	sub_8251AF80(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8246be18
	ctx.lr = 0x82507A78;
	sub_8246BE18(ctx, base);
	// addi r4,r31,-28
	ctx.r4.s64 = ctx.r31.s64 + -28;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r3,21
	ctx.r3.s64 = 21;
	// bl 0x824387c0
	ctx.lr = 0x82507A9C;
	sub_824387C0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82478250
	ctx.lr = 0x82507AA8;
	sub_82478250(ctx, base);
	// lis r10,-31780
	ctx.r10.s64 = -2082734080;
	// addi r6,r31,-16
	ctx.r6.s64 = ctx.r31.s64 + -16;
	// addi r5,r31,-12
	ctx.r5.s64 = ctx.r31.s64 + -12;
	// addi r7,r10,6404
	ctx.r7.s64 = ctx.r10.s64 + 6404;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82479460
	ctx.lr = 0x82507AC4;
	sub_82479460(ctx, base);
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

__attribute__((alias("__imp__sub_82507ADC"))) PPC_WEAK_FUNC(sub_82507ADC);
PPC_FUNC_IMPL(__imp__sub_82507ADC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82507AE0"))) PPC_WEAK_FUNC(sub_82507AE0);
PPC_FUNC_IMPL(__imp__sub_82507AE0) {
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
	// addi r3,r3,64
	ctx.r3.s64 = ctx.r3.s64 + 64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82572fa0
	ctx.lr = 0x82507B08;
	sub_82572FA0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8251b278
	ctx.lr = 0x82507B10;
	sub_8251B278(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82507b28
	if (cr6.eq) goto loc_82507B28;
	// bl 0x8248b818
	ctx.lr = 0x82507B24;
	sub_8248B818(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82507B28:
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

__attribute__((alias("__imp__sub_82507B40"))) PPC_WEAK_FUNC(sub_82507B40);
PPC_FUNC_IMPL(__imp__sub_82507B40) {
	PPC_FUNC_PROLOGUE();
	// b 0x825078a8
	sub_825078A8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82507B44"))) PPC_WEAK_FUNC(sub_82507B44);
PPC_FUNC_IMPL(__imp__sub_82507B44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82507B48"))) PPC_WEAK_FUNC(sub_82507B48);
PPC_FUNC_IMPL(__imp__sub_82507B48) {
	PPC_FUNC_PROLOGUE();
	// b 0x82507998
	sub_82507998(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82507B4C"))) PPC_WEAK_FUNC(sub_82507B4C);
PPC_FUNC_IMPL(__imp__sub_82507B4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82507B50"))) PPC_WEAK_FUNC(sub_82507B50);
PPC_FUNC_IMPL(__imp__sub_82507B50) {
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
	// bl 0x825078a8
	ctx.lr = 0x82507B68;
	sub_825078A8(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r30,r11,-19896
	ctx.r30.s64 = ctx.r11.s64 + -19896;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r30,-52
	ctx.r4.s64 = ctx.r30.s64 + -52;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8247b0f0
	ctx.lr = 0x82507B84;
	sub_8247B0F0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8246be10
	ctx.lr = 0x82507B90;
	sub_8246BE10(ctx, base);
	// bl 0x824b4418
	ctx.lr = 0x82507B94;
	sub_824B4418(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8246be18
	ctx.lr = 0x82507BA0;
	sub_8246BE18(ctx, base);
	// lis r5,1
	ctx.r5.s64 = 65536;
	// li r4,8
	ctx.r4.s64 = 8;
	// ori r5,r5,1
	ctx.r5.u64 = ctx.r5.u64 | 1;
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x825730a8
	ctx.lr = 0x82507BB4;
	sub_825730A8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82507bd0
	if (cr6.eq) goto loc_82507BD0;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r9,r10,-19700
	ctx.r9.s64 = ctx.r10.s64 + -19700;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// b 0x82507bd4
	goto loc_82507BD4;
loc_82507BD0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82507BD4:
	// stw r11,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r11.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8246be48
	ctx.lr = 0x82507BE4;
	sub_8246BE48(ctx, base);
	// lis r11,-32176
	ctx.r11.s64 = -2108686336;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,30536
	ctx.r4.s64 = ctx.r11.s64 + 30536;
	// bl 0x8246be80
	ctx.lr = 0x82507BF4;
	sub_8246BE80(ctx, base);
	// addi r5,r30,-36
	ctx.r5.s64 = ctx.r30.s64 + -36;
	// li r6,104
	ctx.r6.s64 = 104;
	// li r4,11
	ctx.r4.s64 = 11;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824788c8
	ctx.lr = 0x82507C08;
	sub_824788C8(ctx, base);
	// addi r6,r30,-20
	ctx.r6.s64 = ctx.r30.s64 + -20;
	// addi r5,r30,-16
	ctx.r5.s64 = ctx.r30.s64 + -16;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82479460
	ctx.lr = 0x82507C20;
	sub_82479460(ctx, base);
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

__attribute__((alias("__imp__sub_82507C38"))) PPC_WEAK_FUNC(sub_82507C38);
PPC_FUNC_IMPL(__imp__sub_82507C38) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82507C40;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x82467738
	ctx.lr = 0x82507C50;
	sub_82467738(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// li r3,80
	ctx.r3.s64 = 80;
	// lwz r5,24(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// bl 0x8248b768
	ctx.lr = 0x82507C64;
	sub_8248B768(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82507c98
	if (cr6.eq) goto loc_82507C98;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8251b010
	ctx.lr = 0x82507C78;
	sub_8251B010(ctx, base);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,-19688
	ctx.r9.s64 = ctx.r10.s64 + -19688;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// stw r11,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
	// b 0x82507ca0
	goto loc_82507CA0;
loc_82507C98:
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
loc_82507CA0:
	// std r11,0(r29)
	PPC_STORE_U64(ctx.r29.u32 + 0, ctx.r11.u64);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8241f040
	ctx.lr = 0x82507CAC;
	sub_8241F040(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82507CB8"))) PPC_WEAK_FUNC(sub_82507CB8);
PPC_FUNC_IMPL(__imp__sub_82507CB8) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82507d0c
	if (cr6.eq) goto loc_82507D0C;
	// bl 0x825078a8
	ctx.lr = 0x82507CDC;
	sub_825078A8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82507CF4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8246be58
	ctx.lr = 0x82507CFC;
	sub_8246BE58(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82507d10
	if (!cr6.eq) goto loc_82507D10;
loc_82507D0C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82507D10:
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

__attribute__((alias("__imp__sub_82507D28"))) PPC_WEAK_FUNC(sub_82507D28);
PPC_FUNC_IMPL(__imp__sub_82507D28) {
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
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r31,19860(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 19860);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// bne cr6,0x82507d58
	if (!cr6.eq) goto loc_82507D58;
loc_82507D50:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82507dc4
	goto loc_82507DC4;
loc_82507D58:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8251b068
	ctx.lr = 0x82507D60;
	sub_8251B068(ctx, base);
	// bl 0x82507cb8
	ctx.lr = 0x82507D64;
	sub_82507CB8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82507d50
	if (cr6.eq) goto loc_82507D50;
	// addi r3,r3,104
	ctx.r3.s64 = ctx.r3.s64 + 104;
	// bl 0x83102db0
	ctx.lr = 0x82507D74;
	sub_83102DB0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824f39e0
	ctx.lr = 0x82507D80;
	sub_824F39E0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82507db4
	if (cr6.eq) goto loc_82507DB4;
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// bl 0x82572fa0
	ctx.lr = 0x82507DA0;
	sub_82572FA0(ctx, base);
	// addi r3,r30,64
	ctx.r3.s64 = ctx.r30.s64 + 64;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82572fa0
	ctx.lr = 0x82507DAC;
	sub_82572FA0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// b 0x82507db8
	goto loc_82507DB8;
loc_82507DB4:
	// addi r3,r30,64
	ctx.r3.s64 = ctx.r30.s64 + 64;
loc_82507DB8:
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82572fa0
	ctx.lr = 0x82507DC0;
	sub_82572FA0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82507DC4:
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

__attribute__((alias("__imp__sub_82507DDC"))) PPC_WEAK_FUNC(sub_82507DDC);
PPC_FUNC_IMPL(__imp__sub_82507DDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82507DE0"))) PPC_WEAK_FUNC(sub_82507DE0);
PPC_FUNC_IMPL(__imp__sub_82507DE0) {
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
	// lwz r11,72(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// blt cr6,0x82507e24
	if (cr6.lt) goto loc_82507E24;
	// bne cr6,0x82507e50
	if (!cr6.eq) goto loc_82507E50;
	// bl 0x82507d28
	ctx.lr = 0x82507E08;
	sub_82507D28(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
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
loc_82507E24:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83102db0
	ctx.lr = 0x82507E2C;
	sub_83102DB0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82507d28
	ctx.lr = 0x82507E34;
	sub_82507D28(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82507e50
	if (!cr6.eq) goto loc_82507E50;
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// li r10,1
	ctx.r10.s64 = 1;
	// oris r9,r11,8192
	ctx.r9.u64 = ctx.r11.u64 | 536870912;
	// stw r10,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r10.u32);
	// stw r9,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r9.u32);
loc_82507E50:
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

__attribute__((alias("__imp__sub_82507E64"))) PPC_WEAK_FUNC(sub_82507E64);
PPC_FUNC_IMPL(__imp__sub_82507E64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82507E68"))) PPC_WEAK_FUNC(sub_82507E68);
PPC_FUNC_IMPL(__imp__sub_82507E68) {
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
	// bl 0x825c7398
	ctx.lr = 0x82507E80;
	sub_825C7398(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82507d28
	ctx.lr = 0x82507E88;
	sub_82507D28(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82507e98
	if (!cr6.eq) goto loc_82507E98;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8251b3d8
	ctx.lr = 0x82507E98;
	sub_8251B3D8(ctx, base);
loc_82507E98:
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

__attribute__((alias("__imp__sub_82507EAC"))) PPC_WEAK_FUNC(sub_82507EAC);
PPC_FUNC_IMPL(__imp__sub_82507EAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82507EB0"))) PPC_WEAK_FUNC(sub_82507EB0);
PPC_FUNC_IMPL(__imp__sub_82507EB0) {
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
	// bl 0x83102db0
	ctx.lr = 0x82507EC8;
	sub_83102DB0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82507d28
	ctx.lr = 0x82507ED0;
	sub_82507D28(ctx, base);
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

__attribute__((alias("__imp__sub_82507EE4"))) PPC_WEAK_FUNC(sub_82507EE4);
PPC_FUNC_IMPL(__imp__sub_82507EE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82507EE8"))) PPC_WEAK_FUNC(sub_82507EE8);
PPC_FUNC_IMPL(__imp__sub_82507EE8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// b 0x82507d28
	sub_82507D28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82507EF4"))) PPC_WEAK_FUNC(sub_82507EF4);
PPC_FUNC_IMPL(__imp__sub_82507EF4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82507EF8"))) PPC_WEAK_FUNC(sub_82507EF8);
PPC_FUNC_IMPL(__imp__sub_82507EF8) {
	PPC_FUNC_PROLOGUE();
	// b 0x82507d28
	sub_82507D28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82507EFC"))) PPC_WEAK_FUNC(sub_82507EFC);
PPC_FUNC_IMPL(__imp__sub_82507EFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82507F00"))) PPC_WEAK_FUNC(sub_82507F00);
PPC_FUNC_IMPL(__imp__sub_82507F00) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,64(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82507f18
	if (cr6.eq) goto loc_82507F18;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82507f1c
	if (!cr6.eq) goto loc_82507F1C;
loc_82507F18:
	// b 0x82507d28
	sub_82507D28(ctx, base);
	return;
loc_82507F1C:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82507F24"))) PPC_WEAK_FUNC(sub_82507F24);
PPC_FUNC_IMPL(__imp__sub_82507F24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82507F28"))) PPC_WEAK_FUNC(sub_82507F28);
PPC_FUNC_IMPL(__imp__sub_82507F28) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// addi r31,r3,336
	ctx.r31.s64 = ctx.r3.s64 + 336;
	// li r30,3
	ctx.r30.s64 = 3;
loc_82507F44:
	// addi r31,r31,-80
	ctx.r31.s64 = ctx.r31.s64 + -80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8241d6c0
	ctx.lr = 0x82507F50;
	sub_8241D6C0(ctx, base);
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// bge 0x82507f44
	if (!cr0.lt) goto loc_82507F44;
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

__attribute__((alias("__imp__sub_82507F70"))) PPC_WEAK_FUNC(sub_82507F70);
PPC_FUNC_IMPL(__imp__sub_82507F70) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82507F78;
	__savegprlr_28(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble cr6,0x82508030
	if (!cr6.gt) goto loc_82508030;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
loc_82507F98:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8253ad28
	ctx.lr = 0x82507FA4;
	sub_8253AD28(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble cr6,0x82508030
	if (!cr6.gt) goto loc_82508030;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x824edeb8
	ctx.lr = 0x82507FBC;
	sub_824EDEB8(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(ctx.r11.s32, 4, xer);
	// beq cr6,0x82508028
	if (cr6.eq) goto loc_82508028;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x82508000
	if (!cr6.lt) goto loc_82508000;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x8241e148
	ctx.lr = 0x82507FF4;
	sub_8241E148(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
loc_82508000:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8241d6c0
	ctx.lr = 0x82508008;
	sub_8241D6C0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r29,r11
	cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, xer);
	// blt cr6,0x82507f98
	if (cr6.lt) goto loc_82507F98;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82508028:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8241d6c0
	ctx.lr = 0x82508030;
	sub_8241D6C0(ctx, base);
loc_82508030:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8250803C"))) PPC_WEAK_FUNC(sub_8250803C);
PPC_FUNC_IMPL(__imp__sub_8250803C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82508040"))) PPC_WEAK_FUNC(sub_82508040);
PPC_FUNC_IMPL(__imp__sub_82508040) {
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
	// lis r10,-31767
	ctx.r10.s64 = -2081882112;
	// lwz r11,23440(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 23440);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x825080b4
	if (!cr6.eq) goto loc_825080B4;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-31767
	ctx.r9.s64 = -2081882112;
	// stw r11,23440(r10)
	PPC_STORE_U32(ctx.r10.u32 + 23440, ctx.r11.u32);
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// addi r31,r9,23208
	ctx.r31.s64 = ctx.r9.s64 + 23208;
	// lis r6,4
	ctx.r6.s64 = 262144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r8,-19572
	ctx.r5.s64 = ctx.r8.s64 + -19572;
	// ori r6,r6,4
	ctx.r6.u64 = ctx.r6.u64 | 4;
	// li r4,112
	ctx.r4.s64 = 112;
	// bl 0x82477fc8
	ctx.lr = 0x82508090;
	sub_82477FC8(ctx, base);
	// lis r7,-31793
	ctx.r7.s64 = -2083586048;
	// addi r3,r7,8944
	ctx.r3.s64 = ctx.r7.s64 + 8944;
	// bl 0x831cdcc8
	ctx.lr = 0x8250809C;
	sub_831CDCC8(ctx, base);
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
loc_825080B4:
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// addi r3,r11,23208
	ctx.r3.s64 = ctx.r11.s64 + 23208;
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

__attribute__((alias("__imp__sub_825080D0"))) PPC_WEAK_FUNC(sub_825080D0);
PPC_FUNC_IMPL(__imp__sub_825080D0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x825080D8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x82508138
	if (cr6.eq) goto loc_82508138;
	// lis r29,-31767
	ctx.r29.s64 = -2081882112;
	// lwz r11,19608(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 19608);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82508138
	if (cr6.eq) goto loc_82508138;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x824f3058
	ctx.lr = 0x82508108;
	sub_824F3058(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82508138
	if (cr6.eq) goto loc_82508138;
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r11,336(r3)
	PPC_STORE_U32(ctx.r3.u32 + 336, ctx.r11.u32);
	// bl 0x8252d470
	ctx.lr = 0x82508124;
	sub_8252D470(ctx, base);
	// lwz r3,19608(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 19608);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82508138
	if (cr6.eq) goto loc_82508138;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x824f34c0
	ctx.lr = 0x82508138;
	sub_824F34C0(ctx, base);
loc_82508138:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82508140"))) PPC_WEAK_FUNC(sub_82508140);
PPC_FUNC_IMPL(__imp__sub_82508140) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82508148;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x825081bc
	if (cr6.eq) goto loc_825081BC;
	// lis r29,-31767
	ctx.r29.s64 = -2081882112;
	// lwz r11,19608(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 19608);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825081bc
	if (cr6.eq) goto loc_825081BC;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x824f3058
	ctx.lr = 0x8250817C;
	sub_824F3058(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825081bc
	if (cr6.eq) goto loc_825081BC;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8252d340
	ctx.lr = 0x82508194;
	sub_8252D340(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r11,336(r31)
	PPC_STORE_U32(ctx.r31.u32 + 336, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8252d470
	ctx.lr = 0x825081A8;
	sub_8252D470(ctx, base);
	// lwz r3,19608(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 19608);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825081bc
	if (cr6.eq) goto loc_825081BC;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x824f34c0
	ctx.lr = 0x825081BC;
	sub_824F34C0(ctx, base);
loc_825081BC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825081C4"))) PPC_WEAK_FUNC(sub_825081C4);
PPC_FUNC_IMPL(__imp__sub_825081C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825081C8"))) PPC_WEAK_FUNC(sub_825081C8);
PPC_FUNC_IMPL(__imp__sub_825081C8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x825081D0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x82508258
	if (cr6.eq) goto loc_82508258;
	// lis r29,-31767
	ctx.r29.s64 = -2081882112;
	// lwz r11,19608(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 19608);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82508258
	if (cr6.eq) goto loc_82508258;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x824f3058
	ctx.lr = 0x82508208;
	sub_824F3058(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82508258
	if (cr6.eq) goto loc_82508258;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8252d340
	ctx.lr = 0x82508220;
	sub_8252D340(ctx, base);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8252d340
	ctx.lr = 0x82508230;
	sub_8252D340(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r11,336(r31)
	PPC_STORE_U32(ctx.r31.u32 + 336, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8252d470
	ctx.lr = 0x82508244;
	sub_8252D470(ctx, base);
	// lwz r3,19608(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 19608);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82508258
	if (cr6.eq) goto loc_82508258;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x824f34c0
	ctx.lr = 0x82508258;
	sub_824F34C0(ctx, base);
loc_82508258:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82508260"))) PPC_WEAK_FUNC(sub_82508260);
PPC_FUNC_IMPL(__imp__sub_82508260) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82508268;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// mr r27,r8
	ctx.r27.u64 = ctx.r8.u64;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x82508304
	if (cr6.eq) goto loc_82508304;
	// lis r26,-31767
	ctx.r26.s64 = -2081882112;
	// lwz r11,19608(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 19608);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82508304
	if (cr6.eq) goto loc_82508304;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x824f3058
	ctx.lr = 0x825082A4;
	sub_824F3058(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82508304
	if (cr6.eq) goto loc_82508304;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8252d340
	ctx.lr = 0x825082BC;
	sub_8252D340(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8252d340
	ctx.lr = 0x825082CC;
	sub_8252D340(ctx, base);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8252d340
	ctx.lr = 0x825082DC;
	sub_8252D340(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r11,336(r31)
	PPC_STORE_U32(ctx.r31.u32 + 336, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8252d470
	ctx.lr = 0x825082F0;
	sub_8252D470(ctx, base);
	// lwz r3,19608(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 19608);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82508304
	if (cr6.eq) goto loc_82508304;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x824f34c0
	ctx.lr = 0x82508304;
	sub_824F34C0(ctx, base);
loc_82508304:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8250830C"))) PPC_WEAK_FUNC(sub_8250830C);
PPC_FUNC_IMPL(__imp__sub_8250830C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82508310"))) PPC_WEAK_FUNC(sub_82508310);
PPC_FUNC_IMPL(__imp__sub_82508310) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x82508318;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// mr r27,r8
	ctx.r27.u64 = ctx.r8.u64;
	// mr r26,r9
	ctx.r26.u64 = ctx.r9.u64;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x825083c8
	if (cr6.eq) goto loc_825083C8;
	// lis r25,-31767
	ctx.r25.s64 = -2081882112;
	// lwz r3,19608(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 19608);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825083c8
	if (cr6.eq) goto loc_825083C8;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// bl 0x824f3058
	ctx.lr = 0x82508358;
	sub_824F3058(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825083c8
	if (cr6.eq) goto loc_825083C8;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8252d340
	ctx.lr = 0x82508370;
	sub_8252D340(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8252d340
	ctx.lr = 0x82508380;
	sub_8252D340(ctx, base);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8252d340
	ctx.lr = 0x82508390;
	sub_8252D340(ctx, base);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8252d340
	ctx.lr = 0x825083A0;
	sub_8252D340(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r11,336(r31)
	PPC_STORE_U32(ctx.r31.u32 + 336, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8252d470
	ctx.lr = 0x825083B4;
	sub_8252D470(ctx, base);
	// lwz r3,19608(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 19608);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825083c8
	if (cr6.eq) goto loc_825083C8;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x824f34c0
	ctx.lr = 0x825083C8;
	sub_824F34C0(ctx, base);
loc_825083C8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825083D0"))) PPC_WEAK_FUNC(sub_825083D0);
PPC_FUNC_IMPL(__imp__sub_825083D0) {
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
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825083f8
	if (cr6.eq) goto loc_825083F8;
	// lwz r11,56(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82508434
	if (cr6.eq) goto loc_82508434;
loc_825083F8:
	// lis r31,-31767
	ctx.r31.s64 = -2081882112;
	// lwz r11,19608(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 19608);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82508434
	if (cr6.eq) goto loc_82508434;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x824f3058
	ctx.lr = 0x82508410;
	sub_824F3058(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82508434
	if (cr6.eq) goto loc_82508434;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,336(r3)
	PPC_STORE_U32(ctx.r3.u32 + 336, ctx.r11.u32);
	// lwz r3,19608(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 19608);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82508434
	if (cr6.eq) goto loc_82508434;
	// bl 0x824f34c0
	ctx.lr = 0x82508434;
	sub_824F34C0(ctx, base);
loc_82508434:
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

__attribute__((alias("__imp__sub_82508448"))) PPC_WEAK_FUNC(sub_82508448);
PPC_FUNC_IMPL(__imp__sub_82508448) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82508450;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82508470
	if (cr6.eq) goto loc_82508470;
	// lwz r10,56(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x825084bc
	if (cr6.eq) goto loc_825084BC;
loc_82508470:
	// lis r30,-31767
	ctx.r30.s64 = -2081882112;
	// lwz r3,19608(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 19608);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825084bc
	if (cr6.eq) goto loc_825084BC;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// bl 0x824f3058
	ctx.lr = 0x82508488;
	sub_824F3058(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825084bc
	if (cr6.eq) goto loc_825084BC;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8252d340
	ctx.lr = 0x825084A0;
	sub_8252D340(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,336(r31)
	PPC_STORE_U32(ctx.r31.u32 + 336, ctx.r11.u32);
	// lwz r3,19608(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 19608);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825084bc
	if (cr6.eq) goto loc_825084BC;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x824f34c0
	ctx.lr = 0x825084BC;
	sub_824F34C0(ctx, base);
loc_825084BC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825084C4"))) PPC_WEAK_FUNC(sub_825084C4);
PPC_FUNC_IMPL(__imp__sub_825084C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825084C8"))) PPC_WEAK_FUNC(sub_825084C8);
PPC_FUNC_IMPL(__imp__sub_825084C8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x825084D0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825084f4
	if (cr6.eq) goto loc_825084F4;
	// lwz r10,56(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82508550
	if (cr6.eq) goto loc_82508550;
loc_825084F4:
	// lis r30,-31767
	ctx.r30.s64 = -2081882112;
	// lwz r3,19608(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 19608);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82508550
	if (cr6.eq) goto loc_82508550;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// bl 0x824f3058
	ctx.lr = 0x8250850C;
	sub_824F3058(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82508550
	if (cr6.eq) goto loc_82508550;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8252d340
	ctx.lr = 0x82508524;
	sub_8252D340(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8252d340
	ctx.lr = 0x82508534;
	sub_8252D340(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,336(r31)
	PPC_STORE_U32(ctx.r31.u32 + 336, ctx.r11.u32);
	// lwz r3,19608(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 19608);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82508550
	if (cr6.eq) goto loc_82508550;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x824f34c0
	ctx.lr = 0x82508550;
	sub_824F34C0(ctx, base);
loc_82508550:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82508558"))) PPC_WEAK_FUNC(sub_82508558);
PPC_FUNC_IMPL(__imp__sub_82508558) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82508560;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82508588
	if (cr6.eq) goto loc_82508588;
	// lwz r10,56(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x825085f4
	if (cr6.eq) goto loc_825085F4;
loc_82508588:
	// lis r30,-31767
	ctx.r30.s64 = -2081882112;
	// lwz r3,19608(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 19608);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825085f4
	if (cr6.eq) goto loc_825085F4;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// bl 0x824f3058
	ctx.lr = 0x825085A0;
	sub_824F3058(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825085f4
	if (cr6.eq) goto loc_825085F4;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8252d340
	ctx.lr = 0x825085B8;
	sub_8252D340(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8252d340
	ctx.lr = 0x825085C8;
	sub_8252D340(ctx, base);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8252d340
	ctx.lr = 0x825085D8;
	sub_8252D340(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,336(r31)
	PPC_STORE_U32(ctx.r31.u32 + 336, ctx.r11.u32);
	// lwz r3,19608(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 19608);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825085f4
	if (cr6.eq) goto loc_825085F4;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x824f34c0
	ctx.lr = 0x825085F4;
	sub_824F34C0(ctx, base);
loc_825085F4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825085FC"))) PPC_WEAK_FUNC(sub_825085FC);
PPC_FUNC_IMPL(__imp__sub_825085FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82508600"))) PPC_WEAK_FUNC(sub_82508600);
PPC_FUNC_IMPL(__imp__sub_82508600) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82508608;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// mr r26,r8
	ctx.r26.u64 = ctx.r8.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82508634
	if (cr6.eq) goto loc_82508634;
	// lwz r10,56(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x825086b0
	if (cr6.eq) goto loc_825086B0;
loc_82508634:
	// lis r30,-31767
	ctx.r30.s64 = -2081882112;
	// lwz r3,19608(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 19608);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825086b0
	if (cr6.eq) goto loc_825086B0;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// bl 0x824f3058
	ctx.lr = 0x8250864C;
	sub_824F3058(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825086b0
	if (cr6.eq) goto loc_825086B0;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8252d340
	ctx.lr = 0x82508664;
	sub_8252D340(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8252d340
	ctx.lr = 0x82508674;
	sub_8252D340(ctx, base);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8252d340
	ctx.lr = 0x82508684;
	sub_8252D340(ctx, base);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8252d340
	ctx.lr = 0x82508694;
	sub_8252D340(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,336(r31)
	PPC_STORE_U32(ctx.r31.u32 + 336, ctx.r11.u32);
	// lwz r3,19608(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 19608);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825086b0
	if (cr6.eq) goto loc_825086B0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x824f34c0
	ctx.lr = 0x825086B0;
	sub_824F34C0(ctx, base);
loc_825086B0:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825086B8"))) PPC_WEAK_FUNC(sub_825086B8);
PPC_FUNC_IMPL(__imp__sub_825086B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r3,40(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_825086D4"))) PPC_WEAK_FUNC(sub_825086D4);
PPC_FUNC_IMPL(__imp__sub_825086D4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825086D8"))) PPC_WEAK_FUNC(sub_825086D8);
PPC_FUNC_IMPL(__imp__sub_825086D8) {
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
	// addi r31,r3,56
	ctx.r31.s64 = ctx.r3.s64 + 56;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82424320
	ctx.lr = 0x825086FC;
	sub_82424320(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r11,r31
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, xer);
	// bne cr6,0x82508718
	if (!cr6.eq) goto loc_82508718;
	// cmpwi cr6,r9,-1
	cr6.compare<int32_t>(ctx.r9.s32, -1, xer);
	// li r10,0
	ctx.r10.s64 = 0;
	// beq cr6,0x8250871c
	if (cr6.eq) goto loc_8250871C;
loc_82508718:
	// li r10,1
	ctx.r10.s64 = 1;
loc_8250871C:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82508740
	if (cr6.eq) goto loc_82508740;
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// rlwinm r11,r9,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// addi r3,r11,32
	ctx.r3.s64 = ctx.r11.s64 + 32;
	// bne cr6,0x82508744
	if (!cr6.eq) goto loc_82508744;
loc_82508740:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82508744:
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

__attribute__((alias("__imp__sub_82508758"))) PPC_WEAK_FUNC(sub_82508758);
PPC_FUNC_IMPL(__imp__sub_82508758) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82508790
	if (cr6.eq) goto loc_82508790;
	// lwz r8,8(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r7,0(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_82508774:
	// lwzx r6,r11,r8
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// cmpw cr6,r6,r7
	cr6.compare<int32_t>(ctx.r6.s32, ctx.r7.s32, xer);
	// beq cr6,0x82508794
	if (cr6.eq) goto loc_82508794;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// blt cr6,0x82508774
	if (cr6.lt) goto loc_82508774;
loc_82508790:
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_82508794:
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bne cr6,0x825087ac
	if (!cr6.eq) goto loc_825087AC;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r11,r9,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// blr 
	return;
loc_825087AC:
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r11,r10,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r3,r11,r9
	ctx.r3.u64 = ctx.r11.u64 + ctx.r9.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825087BC"))) PPC_WEAK_FUNC(sub_825087BC);
PPC_FUNC_IMPL(__imp__sub_825087BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825087C0"))) PPC_WEAK_FUNC(sub_825087C0);
PPC_FUNC_IMPL(__imp__sub_825087C0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x825087C8;
	__savegprlr_26(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// ld r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r4.u32 + 0);
	// li r28,-1
	ctx.r28.s64 = -1;
	// lwz r8,4(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// clrldi r30,r11,16
	ctx.r30.u64 = ctx.r11.u64 & 0xFFFFFFFFFFFF;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x82508848
	if (cr6.eq) goto loc_82508848;
	// rlwinm r10,r8,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r9,24(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// divdu r7,r30,r10
	ctx.r7.u64 = PPCDivide(ctx.r30.u64, ctx.r10.u64);
	// tdllei r10,0
	// mulld r6,r7,r10
	ctx.r6.s64 = ctx.r7.s64 * ctx.r10.s64;
	// subf r5,r6,r30
	ctx.r5.s64 = ctx.r30.s64 - ctx.r6.s64;
	// rotlwi r6,r5,0
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// rlwinm r4,r6,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r4,r9
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r9.u32);
	// cmpwi cr6,r10,-1
	cr6.compare<int32_t>(ctx.r10.s32, -1, xer);
	// beq cr6,0x82508848
	if (cr6.eq) goto loc_82508848;
	// lwz r7,32(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
loc_82508824:
	// rlwinm r11,r10,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// add r9,r11,r7
	ctx.r9.u64 = ctx.r11.u64 + ctx.r7.u64;
	// ldx r11,r11,r7
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + ctx.r7.u32);
	// cmpld cr6,r30,r11
	cr6.compare<uint64_t>(ctx.r30.u64, ctx.r11.u64, xer);
	// beq cr6,0x825088f0
	if (cr6.eq) goto loc_825088F0;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// lwz r10,24(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 24);
	// cmpwi cr6,r10,-1
	cr6.compare<int32_t>(ctx.r10.s32, -1, xer);
	// bne cr6,0x82508824
	if (!cr6.eq) goto loc_82508824;
loc_82508848:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplw cr6,r10,r8
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, xer);
	// blt cr6,0x825088b0
	if (cr6.lt) goto loc_825088B0;
	// addi r4,r8,2
	ctx.r4.s64 = ctx.r8.s64 + 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82512568
	ctx.lr = 0x82508860;
	sub_82512568(ctx, base);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r9,24(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// rlwinm r8,r10,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// divdu r7,r30,r8
	ctx.r7.u64 = PPCDivide(ctx.r30.u64, ctx.r8.u64);
	// tdllei r8,0
	// mulld r6,r7,r8
	ctx.r6.s64 = ctx.r7.s64 * ctx.r8.s64;
	// subf r5,r6,r30
	ctx.r5.s64 = ctx.r30.s64 - ctx.r6.s64;
	// rotlwi r6,r5,0
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// rlwinm r4,r6,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r4,r9
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r9.u32);
	// cmpwi cr6,r10,-1
	cr6.compare<int32_t>(ctx.r10.s32, -1, xer);
	// beq cr6,0x825088b0
	if (cr6.eq) goto loc_825088B0;
	// lwz r8,32(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
loc_82508898:
	// rlwinm r9,r10,5,0,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// add r10,r9,r8
	ctx.r10.u64 = ctx.r9.u64 + ctx.r8.u64;
	// lwz r10,24(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// cmpwi cr6,r10,-1
	cr6.compare<int32_t>(ctx.r10.s32, -1, xer);
	// bne cr6,0x82508898
	if (!cr6.eq) goto loc_82508898;
loc_825088B0:
	// lwz r29,16(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(ctx.r11.s32, -1, xer);
	// lwz r9,32(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// rlwinm r10,r29,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 5) & 0xFFFFFFE0;
	// add r30,r10,r9
	ctx.r30.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lwz r10,24(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// stw r28,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r28.u32);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// bne cr6,0x82508904
	if (!cr6.eq) goto loc_82508904;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// rlwinm r10,r6,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r29,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r29.u32);
	// b 0x82508914
	goto loc_82508914;
loc_825088F0:
	// lwz r9,40(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// rlwinm r11,r10,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r3,r11,r9
	ctx.r3.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_82508904:
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r29,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r29.u32);
loc_82508914:
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// rlwinm r27,r29,3,0,28
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 3) & 0xFFFFFFF8;
	// add. r3,r27,r11
	ctx.r3.u64 = ctx.r27.u64 + ctx.r11.u64;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x82508934
	if (cr0.eq) goto loc_82508934;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// std r11,0(r3)
	PPC_STORE_U64(ctx.r3.u32 + 0, ctx.r11.u64);
	// bl 0x8241f040
	ctx.lr = 0x82508934;
	sub_8241F040(ctx, base);
loc_82508934:
	// ld r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r26.u32 + 0);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// ld r9,8(r26)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r26.u32 + 8);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// ld r6,8(r8)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r8.u32 + 8);
	// ld r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r8.u32 + 0);
	// std r7,0(r30)
	PPC_STORE_U64(ctx.r30.u32 + 0, ctx.r7.u64);
	// std r6,8(r30)
	PPC_STORE_U64(ctx.r30.u32 + 8, ctx.r6.u64);
	// bl 0x82573260
	ctx.lr = 0x82508964;
	sub_82573260(ctx, base);
	// stw r28,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r28.u32);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(ctx.r11.s32, -1, xer);
	// bne cr6,0x82508990
	if (!cr6.eq) goto loc_82508990;
	// stw r29,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r29.u32);
	// stw r28,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r28.u32);
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// add r3,r27,r11
	ctx.r3.u64 = ctx.r27.u64 + ctx.r11.u64;
	// stw r29,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r29.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_82508990:
	// stw r11,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r11.u32);
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r29,20(r10)
	PPC_STORE_U32(ctx.r10.u32 + 20, ctx.r29.u32);
	// stw r29,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r29.u32);
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// add r3,r27,r11
	ctx.r3.u64 = ctx.r27.u64 + ctx.r11.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825089BC"))) PPC_WEAK_FUNC(sub_825089BC);
PPC_FUNC_IMPL(__imp__sub_825089BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825089C0"))) PPC_WEAK_FUNC(sub_825089C0);
PPC_FUNC_IMPL(__imp__sub_825089C0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x825089C8;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// bl 0x82455560
	ctx.lr = 0x825089DC;
	sub_82455560(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r10,r11,-19328
	ctx.r10.s64 = ctx.r11.s64 + -19328;
	// addi r3,r31,40
	ctx.r3.s64 = ctx.r31.s64 + 40;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// addi r28,r31,32
	ctx.r28.s64 = ctx.r31.s64 + 32;
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// lwz r4,0(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// std r30,40(r31)
	PPC_STORE_U64(ctx.r31.u32 + 40, ctx.r30.u64);
	// bl 0x82572fa0
	ctx.lr = 0x82508A04;
	sub_82572FA0(ctx, base);
	// std r30,48(r31)
	PPC_STORE_U64(ctx.r31.u32 + 48, ctx.r30.u64);
	// addi r3,r31,48
	ctx.r3.s64 = ctx.r31.s64 + 48;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8241f040
	ctx.lr = 0x82508A14;
	sub_8241F040(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r30,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r30.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r30,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r30.u32);
	// addi r3,r31,104
	ctx.r3.s64 = ctx.r31.s64 + 104;
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// stw r11,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r11.u32);
	// stw r11,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
	// std r30,80(r31)
	PPC_STORE_U64(ctx.r31.u32 + 80, ctx.r30.u64);
	// std r30,88(r31)
	PPC_STORE_U64(ctx.r31.u32 + 88, ctx.r30.u64);
	// stw r30,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r30.u32);
	// bl 0x831f3ad8
	ctx.lr = 0x82508A44;
	sub_831F3AD8(ctx, base);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x82508a74
	if (cr6.eq) goto loc_82508A74;
	// std r30,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r30.u64);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,8(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// bl 0x82572fa0
	ctx.lr = 0x82508A5C;
	sub_82572FA0(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82572fa0
	ctx.lr = 0x82508A68;
	sub_82572FA0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82572fa0
	ctx.lr = 0x82508A74;
	sub_82572FA0(ctx, base);
loc_82508A74:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82508A80"))) PPC_WEAK_FUNC(sub_82508A80);
PPC_FUNC_IMPL(__imp__sub_82508A80) {
	PPC_FUNC_PROLOGUE();
	// b 0x82508040
	sub_82508040(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82508A84"))) PPC_WEAK_FUNC(sub_82508A84);
PPC_FUNC_IMPL(__imp__sub_82508A84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82508A88"))) PPC_WEAK_FUNC(sub_82508A88);
PPC_FUNC_IMPL(__imp__sub_82508A88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82508A90;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// bl 0x82452290
	ctx.lr = 0x82508AA0;
	sub_82452290(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r10,r11,-19328
	ctx.r10.s64 = ctx.r11.s64 + -19328;
	// addi r30,r31,32
	ctx.r30.s64 = ctx.r31.s64 + 32;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// lwz r9,32(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r4,16(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// bl 0x8247c740
	ctx.lr = 0x82508AC0;
	sub_8247C740(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82572fa0
	ctx.lr = 0x82508ACC;
	sub_82572FA0(ctx, base);
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r3,r31,40
	ctx.r3.s64 = ctx.r31.s64 + 40;
	// std r29,40(r31)
	PPC_STORE_U64(ctx.r31.u32 + 40, ctx.r29.u64);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82572fa0
	ctx.lr = 0x82508AE0;
	sub_82572FA0(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// ld r4,48(r31)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r31.u32 + 48);
	// addi r30,r31,48
	ctx.r30.s64 = ctx.r31.s64 + 48;
	// bl 0x8247c5e8
	ctx.lr = 0x82508AF0;
	sub_8247C5E8(ctx, base);
	// std r29,48(r31)
	PPC_STORE_U64(ctx.r31.u32 + 48, ctx.r29.u64);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8241f040
	ctx.lr = 0x82508B00;
	sub_8241F040(ctx, base);
	// addi r3,r31,56
	ctx.r3.s64 = ctx.r31.s64 + 56;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x824b0668
	ctx.lr = 0x82508B0C;
	sub_824B0668(ctx, base);
	// addi r3,r31,104
	ctx.r3.s64 = ctx.r31.s64 + 104;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x831f3ad8
	ctx.lr = 0x82508B18;
	sub_831F3AD8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82508B24"))) PPC_WEAK_FUNC(sub_82508B24);
PPC_FUNC_IMPL(__imp__sub_82508B24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82508B28"))) PPC_WEAK_FUNC(sub_82508B28);
PPC_FUNC_IMPL(__imp__sub_82508B28) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82508B30;
	__savegprlr_27(ctx, base);
	// stwu r1,-560(r1)
	ea = -560 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,4(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82488fa8
	ctx.lr = 0x82508B4C;
	sub_82488FA8(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82508e54
	if (cr6.eq) goto loc_82508E54;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82416320
	ctx.lr = 0x82508B60;
	sub_82416320(ctx, base);
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82507f70
	ctx.lr = 0x82508B70;
	sub_82507F70(ctx, base);
	// cmplwi cr6,r3,4
	cr6.compare<uint32_t>(ctx.r3.u32, 4, xer);
	// bgt cr6,0x82508e4c
	if (cr6.gt) goto loc_82508E4C;
	// mtctr r3
	ctr.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bdzf 4*cr6+eq,0x82508bb0
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82508BB0;
	// bdzf 4*cr6+eq,0x82508c0c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82508C0C;
	// bdzf 4*cr6+eq,0x82508c9c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82508C9C;
	// bne cr6,0x82508d5c
	if (!cr6.eq) goto loc_82508D5C;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x8241f1b0
	ctx.lr = 0x82508B9C;
	sub_8241F1B0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825083d0
	ctx.lr = 0x82508BA8;
	sub_825083D0(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// b 0x82508e48
	goto loc_82508E48;
loc_82508BB0:
	// lwz r11,180(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,-1
	ctx.r9.s64 = -1;
	// lwz r30,184(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// subfc r10,r10,r11
	xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r10.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// subfze r11,r9
	temp.u8 = ~ctx.r9.u32 + xer.ca < xer.ca;
	ctx.r11.u64 = ~ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// srawi r10,r11,31
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 31;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// xor r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// subf r6,r7,r10
	ctx.r6.s64 = ctx.r10.s64 - ctx.r7.s64;
	// srawi r5,r6,31
	xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7FFFFFFF) != 0);
	ctx.r5.s64 = ctx.r6.s32 >> 31;
	// and r11,r5,r8
	ctx.r11.u64 = ctx.r5.u64 & ctx.r8.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r11.u32);
	// bl 0x8241f1b0
	ctx.lr = 0x82508BF4;
	sub_8241F1B0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x82508448
	ctx.lr = 0x82508C04;
	sub_82508448(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// b 0x82508e48
	goto loc_82508E48;
loc_82508C0C:
	// lwz r10,180(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// li r9,2
	ctx.r9.s64 = 2;
	// li r11,-1
	ctx.r11.s64 = -1;
	// lwz r8,184(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// subfc r9,r9,r10
	xer.ca = ctx.r10.u32 >= ctx.r9.u32;
	ctx.r9.s64 = ctx.r10.s64 - ctx.r9.s64;
	// addi r7,r10,-2
	ctx.r7.s64 = ctx.r10.s64 + -2;
	// subfze r10,r11
	temp.u8 = ~ctx.r11.u32 + xer.ca < xer.ca;
	ctx.r10.u64 = ~ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// li r6,1
	ctx.r6.s64 = 1;
	// srawi r9,r10,31
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 31;
	// addi r30,r8,80
	ctx.r30.s64 = ctx.r8.s64 + 80;
	// xor r5,r9,r10
	ctx.r5.u64 = ctx.r9.u64 ^ ctx.r10.u64;
	// mr r29,r8
	ctx.r29.u64 = ctx.r8.u64;
	// subf r10,r5,r9
	ctx.r10.s64 = ctx.r9.s64 - ctx.r5.s64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// srawi r9,r10,31
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 31;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// and r10,r9,r7
	ctx.r10.u64 = ctx.r9.u64 & ctx.r7.u64;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// subfc r9,r6,r10
	xer.ca = ctx.r10.u32 >= ctx.r6.u32;
	ctx.r9.s64 = ctx.r10.s64 - ctx.r6.s64;
	// addi r8,r10,-1
	ctx.r8.s64 = ctx.r10.s64 + -1;
	// subfze r11,r11
	temp.u8 = ~ctx.r11.u32 + xer.ca < xer.ca;
	ctx.r11.u64 = ~ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// srawi r10,r11,31
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 31;
	// xor r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// subf r6,r7,r10
	ctx.r6.s64 = ctx.r10.s64 - ctx.r7.s64;
	// srawi r5,r6,31
	xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7FFFFFFF) != 0);
	ctx.r5.s64 = ctx.r6.s32 >> 31;
	// and r11,r5,r8
	ctx.r11.u64 = ctx.r5.u64 & ctx.r8.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r11.u32);
	// bl 0x8241f1b0
	ctx.lr = 0x82508C80;
	sub_8241F1B0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// bl 0x825084c8
	ctx.lr = 0x82508C94;
	sub_825084C8(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// b 0x82508e48
	goto loc_82508E48;
loc_82508C9C:
	// lwz r10,180(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// li r9,3
	ctx.r9.s64 = 3;
	// li r11,-1
	ctx.r11.s64 = -1;
	// lwz r8,184(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// subfc r9,r9,r10
	xer.ca = ctx.r10.u32 >= ctx.r9.u32;
	ctx.r9.s64 = ctx.r10.s64 - ctx.r9.s64;
	// addi r7,r10,-3
	ctx.r7.s64 = ctx.r10.s64 + -3;
	// subfze r10,r11
	temp.u8 = ~ctx.r11.u32 + xer.ca < xer.ca;
	ctx.r10.u64 = ~ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// li r6,2
	ctx.r6.s64 = 2;
	// srawi r9,r10,31
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 31;
	// addi r30,r8,160
	ctx.r30.s64 = ctx.r8.s64 + 160;
	// xor r3,r9,r10
	ctx.r3.u64 = ctx.r9.u64 ^ ctx.r10.u64;
	// addi r29,r8,80
	ctx.r29.s64 = ctx.r8.s64 + 80;
	// subf r10,r3,r9
	ctx.r10.s64 = ctx.r9.s64 - ctx.r3.s64;
	// mr r28,r8
	ctx.r28.u64 = ctx.r8.u64;
	// srawi r9,r10,31
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 31;
	// li r5,1
	ctx.r5.s64 = 1;
	// and r10,r9,r7
	ctx.r10.u64 = ctx.r9.u64 & ctx.r7.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r10,r10,3
	ctx.r10.s64 = ctx.r10.s64 + 3;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// subfc r9,r6,r10
	xer.ca = ctx.r10.u32 >= ctx.r6.u32;
	ctx.r9.s64 = ctx.r10.s64 - ctx.r6.s64;
	// addi r8,r10,-2
	ctx.r8.s64 = ctx.r10.s64 + -2;
	// subfze r10,r11
	temp.u8 = ~ctx.r11.u32 + xer.ca < xer.ca;
	ctx.r10.u64 = ~ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// srawi r9,r10,31
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 31;
	// xor r7,r9,r10
	ctx.r7.u64 = ctx.r9.u64 ^ ctx.r10.u64;
	// subf r6,r7,r9
	ctx.r6.s64 = ctx.r9.s64 - ctx.r7.s64;
	// srawi r10,r6,31
	xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7FFFFFFF) != 0);
	ctx.r10.s64 = ctx.r6.s32 >> 31;
	// and r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 & ctx.r8.u64;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// subfc r9,r5,r10
	xer.ca = ctx.r10.u32 >= ctx.r5.u32;
	ctx.r9.s64 = ctx.r10.s64 - ctx.r5.s64;
	// addi r8,r10,-1
	ctx.r8.s64 = ctx.r10.s64 + -1;
	// subfze r11,r11
	temp.u8 = ~ctx.r11.u32 + xer.ca < xer.ca;
	ctx.r11.u64 = ~ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// srawi r10,r11,31
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 31;
	// xor r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// subf r6,r7,r10
	ctx.r6.s64 = ctx.r10.s64 - ctx.r7.s64;
	// srawi r5,r6,31
	xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7FFFFFFF) != 0);
	ctx.r5.s64 = ctx.r6.s32 >> 31;
	// and r11,r5,r8
	ctx.r11.u64 = ctx.r5.u64 & ctx.r8.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r11.u32);
	// bl 0x8241f1b0
	ctx.lr = 0x82508D3C;
	sub_8241F1B0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// bl 0x82508558
	ctx.lr = 0x82508D54;
	sub_82508558(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// b 0x82508e48
	goto loc_82508E48;
loc_82508D5C:
	// lwz r9,180(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// li r8,4
	ctx.r8.s64 = 4;
	// li r11,-1
	ctx.r11.s64 = -1;
	// lwz r10,184(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// subfc r8,r8,r9
	xer.ca = ctx.r9.u32 >= ctx.r8.u32;
	ctx.r8.s64 = ctx.r9.s64 - ctx.r8.s64;
	// addi r7,r9,-4
	ctx.r7.s64 = ctx.r9.s64 + -4;
	// subfze r9,r11
	temp.u8 = ~ctx.r11.u32 + xer.ca < xer.ca;
	ctx.r9.u64 = ~ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// li r6,3
	ctx.r6.s64 = 3;
	// srawi r8,r9,31
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7FFFFFFF) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 31;
	// addi r30,r10,240
	ctx.r30.s64 = ctx.r10.s64 + 240;
	// xor r5,r8,r9
	ctx.r5.u64 = ctx.r8.u64 ^ ctx.r9.u64;
	// addi r29,r10,160
	ctx.r29.s64 = ctx.r10.s64 + 160;
	// subf r4,r5,r8
	ctx.r4.s64 = ctx.r8.s64 - ctx.r5.s64;
	// addi r28,r10,80
	ctx.r28.s64 = ctx.r10.s64 + 80;
	// srawi r3,r4,31
	xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x7FFFFFFF) != 0);
	ctx.r3.s64 = ctx.r4.s32 >> 31;
	// mr r27,r10
	ctx.r27.u64 = ctx.r10.u64;
	// and r9,r3,r7
	ctx.r9.u64 = ctx.r3.u64 & ctx.r7.u64;
	// li r8,2
	ctx.r8.s64 = 2;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// li r7,1
	ctx.r7.s64 = 1;
	// subfc r10,r6,r9
	xer.ca = ctx.r9.u32 >= ctx.r6.u32;
	ctx.r10.s64 = ctx.r9.s64 - ctx.r6.s64;
	// addi r6,r9,-3
	ctx.r6.s64 = ctx.r9.s64 + -3;
	// subfze r10,r11
	temp.u8 = ~ctx.r11.u32 + xer.ca < xer.ca;
	ctx.r10.u64 = ~ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// srawi r9,r10,31
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 31;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// xor r5,r9,r10
	ctx.r5.u64 = ctx.r9.u64 ^ ctx.r10.u64;
	// subf r10,r5,r9
	ctx.r10.s64 = ctx.r9.s64 - ctx.r5.s64;
	// srawi r9,r10,31
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 31;
	// and r10,r9,r6
	ctx.r10.u64 = ctx.r9.u64 & ctx.r6.u64;
	// addi r10,r10,3
	ctx.r10.s64 = ctx.r10.s64 + 3;
	// subfc r9,r8,r10
	xer.ca = ctx.r10.u32 >= ctx.r8.u32;
	ctx.r9.s64 = ctx.r10.s64 - ctx.r8.s64;
	// addi r8,r10,-2
	ctx.r8.s64 = ctx.r10.s64 + -2;
	// subfze r10,r11
	temp.u8 = ~ctx.r11.u32 + xer.ca < xer.ca;
	ctx.r10.u64 = ~ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// srawi r9,r10,31
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 31;
	// xor r6,r9,r10
	ctx.r6.u64 = ctx.r9.u64 ^ ctx.r10.u64;
	// subf r5,r6,r9
	ctx.r5.s64 = ctx.r9.s64 - ctx.r6.s64;
	// srawi r10,r5,31
	xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7FFFFFFF) != 0);
	ctx.r10.s64 = ctx.r5.s32 >> 31;
	// and r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 & ctx.r8.u64;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// subfc r9,r7,r10
	xer.ca = ctx.r10.u32 >= ctx.r7.u32;
	ctx.r9.s64 = ctx.r10.s64 - ctx.r7.s64;
	// addi r8,r10,-1
	ctx.r8.s64 = ctx.r10.s64 + -1;
	// subfze r11,r11
	temp.u8 = ~ctx.r11.u32 + xer.ca < xer.ca;
	ctx.r11.u64 = ~ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// srawi r10,r11,31
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 31;
	// xor r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// subf r6,r7,r10
	ctx.r6.s64 = ctx.r10.s64 - ctx.r7.s64;
	// srawi r5,r6,31
	xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7FFFFFFF) != 0);
	ctx.r5.s64 = ctx.r6.s32 >> 31;
	// and r11,r5,r8
	ctx.r11.u64 = ctx.r5.u64 & ctx.r8.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r11.u32);
	// bl 0x8241f1b0
	ctx.lr = 0x82508E28;
	sub_8241F1B0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// bl 0x82508600
	ctx.lr = 0x82508E44;
	sub_82508600(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
loc_82508E48:
	// bl 0x82573c50
	ctx.lr = 0x82508E4C;
	sub_82573C50(ctx, base);
loc_82508E4C:
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82507f28
	ctx.lr = 0x82508E54;
	sub_82507F28(ctx, base);
loc_82508E54:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,560
	ctx.r1.s64 = ctx.r1.s64 + 560;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82508E60"))) PPC_WEAK_FUNC(sub_82508E60);
PPC_FUNC_IMPL(__imp__sub_82508E60) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82508e74
	if (cr6.eq) goto loc_82508E74;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// b 0x82508a88
	sub_82508A88(ctx, base);
	return;
loc_82508E74:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82508E7C"))) PPC_WEAK_FUNC(sub_82508E7C);
PPC_FUNC_IMPL(__imp__sub_82508E7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82508E80"))) PPC_WEAK_FUNC(sub_82508E80);
PPC_FUNC_IMPL(__imp__sub_82508E80) {
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
	// addi r3,r3,104
	ctx.r3.s64 = ctx.r3.s64 + 104;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x83102db0
	ctx.lr = 0x82508EA4;
	sub_83102DB0(ctx, base);
	// addi r3,r31,56
	ctx.r3.s64 = ctx.r31.s64 + 56;
	// bl 0x824b75b0
	ctx.lr = 0x82508EAC;
	sub_824B75B0(ctx, base);
	// addi r3,r31,48
	ctx.r3.s64 = ctx.r31.s64 + 48;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8241f040
	ctx.lr = 0x82508EB8;
	sub_8241F040(ctx, base);
	// addi r3,r31,40
	ctx.r3.s64 = ctx.r31.s64 + 40;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82572fa0
	ctx.lr = 0x82508EC4;
	sub_82572FA0(ctx, base);
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82572fa0
	ctx.lr = 0x82508ED0;
	sub_82572FA0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82467108
	ctx.lr = 0x82508ED8;
	sub_82467108(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82508ef0
	if (cr6.eq) goto loc_82508EF0;
	// bl 0x8248b818
	ctx.lr = 0x82508EEC;
	sub_8248B818(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82508EF0:
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

__attribute__((alias("__imp__sub_82508F08"))) PPC_WEAK_FUNC(sub_82508F08);
PPC_FUNC_IMPL(__imp__sub_82508F08) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82508F10;
	__savegprlr_27(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x8250901c
	if (cr6.eq) goto loc_8250901C;
	// addi r28,r3,104
	ctx.r28.s64 = ctx.r3.s64 + 104;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8257f080
	ctx.lr = 0x82508F34;
	sub_8257F080(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,56
	ctx.r3.s64 = ctx.r31.s64 + 56;
	// bl 0x825087c0
	ctx.lr = 0x82508F40;
	sub_825087C0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82508f98
	if (!cr6.eq) goto loc_82508F98;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8248e3c8
	ctx.lr = 0x82508F5C;
	sub_8248E3C8(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8251e728
	ctx.lr = 0x82508F68;
	sub_8251E728(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x8241f040
	ctx.lr = 0x82508F78;
	sub_8241F040(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8241f040
	ctx.lr = 0x82508F84;
	sub_8241F040(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8248e4c8
	ctx.lr = 0x82508F8C;
	sub_8248E4C8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82509014
	if (cr6.eq) goto loc_82509014;
loc_82508F98:
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r4,8(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// std r30,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r30.u64);
	// addi r31,r11,32
	ctx.r31.s64 = ctx.r11.s64 + 32;
	// bl 0x82572fa0
	ctx.lr = 0x82508FB0;
	sub_82572FA0(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82508758
	ctx.lr = 0x82508FBC;
	sub_82508758(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// subf r9,r3,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r3.s64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// cntlzw r8,r9
	ctx.r8.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r27,r8,27,31,31
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// bl 0x82572fa0
	ctx.lr = 0x82508FE4;
	sub_82572FA0(ctx, base);
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, xer);
	// beq cr6,0x82509014
	if (cr6.eq) goto loc_82509014;
	// std r30,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r30.u64);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r4,8(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// bl 0x82572fa0
	ctx.lr = 0x82508FFC;
	sub_82572FA0(ctx, base);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83379d60
	ctx.lr = 0x82509008;
	sub_83379D60(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82572fa0
	ctx.lr = 0x82509014;
	sub_82572FA0(ctx, base);
loc_82509014:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8257f158
	ctx.lr = 0x8250901C;
	sub_8257F158(ctx, base);
loc_8250901C:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82509024"))) PPC_WEAK_FUNC(sub_82509024);
PPC_FUNC_IMPL(__imp__sub_82509024) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82509028"))) PPC_WEAK_FUNC(sub_82509028);
PPC_FUNC_IMPL(__imp__sub_82509028) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82509030;
	__savegprlr_27(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x82509124
	if (cr6.eq) goto loc_82509124;
	// addi r28,r3,104
	ctx.r28.s64 = ctx.r3.s64 + 104;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8257f080
	ctx.lr = 0x82509054;
	sub_8257F080(ctx, base);
	// addi r29,r31,56
	ctx.r29.s64 = ctx.r31.s64 + 56;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82424320
	ctx.lr = 0x82509068;
	sub_82424320(ctx, base);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r9,92(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplw cr6,r11,r29
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, xer);
	// bne cr6,0x82509084
	if (!cr6.eq) goto loc_82509084;
	// cmpwi cr6,r9,-1
	cr6.compare<int32_t>(ctx.r9.s32, -1, xer);
	// li r10,0
	ctx.r10.s64 = 0;
	// beq cr6,0x82509088
	if (cr6.eq) goto loc_82509088;
loc_82509084:
	// li r10,1
	ctx.r10.s64 = 1;
loc_82509088:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8250911c
	if (cr6.eq) goto loc_8250911C;
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// rlwinm r10,r9,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8250911c
	if (cr6.eq) goto loc_8250911C;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// addi r31,r11,32
	ctx.r31.s64 = ctx.r11.s64 + 32;
	// bl 0x82572fa0
	ctx.lr = 0x825090C0;
	sub_82572FA0(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82508758
	ctx.lr = 0x825090CC;
	sub_82508758(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82572fa0
	ctx.lr = 0x825090DC;
	sub_82572FA0(ctx, base);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r10,r9,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r30,r8
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r8.u32, xer);
	// beq cr6,0x8250911c
	if (cr6.eq) goto loc_8250911C;
	// subf r11,r11,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r11.s64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// srawi r4,r11,3
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r4.s64 = ctx.r11.s32 >> 3;
	// bl 0x8245cdb0
	ctx.lr = 0x82509104;
	sub_8245CDB0(ctx, base);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bgt cr6,0x8250911c
	if (cr6.gt) goto loc_8250911C;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82523690
	ctx.lr = 0x8250911C;
	sub_82523690(ctx, base);
loc_8250911C:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8257f158
	ctx.lr = 0x82509124;
	sub_8257F158(ctx, base);
loc_82509124:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8250912C"))) PPC_WEAK_FUNC(sub_8250912C);
PPC_FUNC_IMPL(__imp__sub_8250912C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82509130"))) PPC_WEAK_FUNC(sub_82509130);
PPC_FUNC_IMPL(__imp__sub_82509130) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82509138;
	__savegprlr_26(ctx, base);
	// stwu r1,-576(r1)
	ea = -576 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r29,4(r4)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8248bbf8
	ctx.lr = 0x82509150;
	sub_8248BBF8(ctx, base);
	// bl 0x824f3888
	ctx.lr = 0x82509154;
	sub_824F3888(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8250948c
	if (cr6.eq) goto loc_8250948C;
	// li r5,3
	ctx.r5.s64 = 3;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82488fa8
	ctx.lr = 0x82509170;
	sub_82488FA8(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8250948c
	if (cr6.eq) goto loc_8250948C;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82416320
	ctx.lr = 0x82509184;
	sub_82416320(ctx, base);
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82507f70
	ctx.lr = 0x82509194;
	sub_82507F70(ctx, base);
	// cmplwi cr6,r3,4
	cr6.compare<uint32_t>(ctx.r3.u32, 4, xer);
	// bgt cr6,0x82509484
	if (cr6.gt) goto loc_82509484;
	// mtctr r3
	ctr.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bdzf 4*cr6+eq,0x825091d8
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_825091D8;
	// bdzf 4*cr6+eq,0x82509238
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82509238;
	// bdzf 4*cr6+eq,0x825092cc
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_825092CC;
	// bne cr6,0x82509390
	if (!cr6.eq) goto loc_82509390;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x8241f1b0
	ctx.lr = 0x825091C0;
	sub_8241F1B0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825080d0
	ctx.lr = 0x825091D0;
	sub_825080D0(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// b 0x82509480
	goto loc_82509480;
loc_825091D8:
	// lwz r11,180(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,-1
	ctx.r9.s64 = -1;
	// lwz r29,184(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// subfc r10,r10,r11
	xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r10.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// subfze r11,r9
	temp.u8 = ~ctx.r9.u32 + xer.ca < xer.ca;
	ctx.r11.u64 = ~ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// srawi r10,r11,31
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 31;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// xor r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// subf r6,r7,r10
	ctx.r6.s64 = ctx.r10.s64 - ctx.r7.s64;
	// srawi r5,r6,31
	xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7FFFFFFF) != 0);
	ctx.r5.s64 = ctx.r6.s32 >> 31;
	// and r11,r5,r8
	ctx.r11.u64 = ctx.r5.u64 & ctx.r8.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r11.u32);
	// bl 0x8241f1b0
	ctx.lr = 0x8250921C;
	sub_8241F1B0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// bl 0x82508140
	ctx.lr = 0x82509230;
	sub_82508140(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// b 0x82509480
	goto loc_82509480;
loc_82509238:
	// lwz r10,180(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// li r9,2
	ctx.r9.s64 = 2;
	// li r11,-1
	ctx.r11.s64 = -1;
	// lwz r8,184(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// subfc r9,r9,r10
	xer.ca = ctx.r10.u32 >= ctx.r9.u32;
	ctx.r9.s64 = ctx.r10.s64 - ctx.r9.s64;
	// addi r7,r10,-2
	ctx.r7.s64 = ctx.r10.s64 + -2;
	// subfze r10,r11
	temp.u8 = ~ctx.r11.u32 + xer.ca < xer.ca;
	ctx.r10.u64 = ~ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// li r6,1
	ctx.r6.s64 = 1;
	// srawi r9,r10,31
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 31;
	// addi r29,r8,80
	ctx.r29.s64 = ctx.r8.s64 + 80;
	// xor r5,r9,r10
	ctx.r5.u64 = ctx.r9.u64 ^ ctx.r10.u64;
	// mr r28,r8
	ctx.r28.u64 = ctx.r8.u64;
	// subf r10,r5,r9
	ctx.r10.s64 = ctx.r9.s64 - ctx.r5.s64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// srawi r9,r10,31
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 31;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// and r10,r9,r7
	ctx.r10.u64 = ctx.r9.u64 & ctx.r7.u64;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// subfc r9,r6,r10
	xer.ca = ctx.r10.u32 >= ctx.r6.u32;
	ctx.r9.s64 = ctx.r10.s64 - ctx.r6.s64;
	// addi r8,r10,-1
	ctx.r8.s64 = ctx.r10.s64 + -1;
	// subfze r11,r11
	temp.u8 = ~ctx.r11.u32 + xer.ca < xer.ca;
	ctx.r11.u64 = ~ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// srawi r10,r11,31
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 31;
	// xor r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// subf r6,r7,r10
	ctx.r6.s64 = ctx.r10.s64 - ctx.r7.s64;
	// srawi r5,r6,31
	xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7FFFFFFF) != 0);
	ctx.r5.s64 = ctx.r6.s32 >> 31;
	// and r11,r5,r8
	ctx.r11.u64 = ctx.r5.u64 & ctx.r8.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r11.u32);
	// bl 0x8241f1b0
	ctx.lr = 0x825092AC;
	sub_8241F1B0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// bl 0x825081c8
	ctx.lr = 0x825092C4;
	sub_825081C8(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// b 0x82509480
	goto loc_82509480;
loc_825092CC:
	// lwz r10,180(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// li r9,3
	ctx.r9.s64 = 3;
	// li r11,-1
	ctx.r11.s64 = -1;
	// lwz r8,184(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// subfc r9,r9,r10
	xer.ca = ctx.r10.u32 >= ctx.r9.u32;
	ctx.r9.s64 = ctx.r10.s64 - ctx.r9.s64;
	// addi r7,r10,-3
	ctx.r7.s64 = ctx.r10.s64 + -3;
	// subfze r10,r11
	temp.u8 = ~ctx.r11.u32 + xer.ca < xer.ca;
	ctx.r10.u64 = ~ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// li r6,2
	ctx.r6.s64 = 2;
	// srawi r9,r10,31
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 31;
	// addi r29,r8,160
	ctx.r29.s64 = ctx.r8.s64 + 160;
	// xor r3,r9,r10
	ctx.r3.u64 = ctx.r9.u64 ^ ctx.r10.u64;
	// addi r28,r8,80
	ctx.r28.s64 = ctx.r8.s64 + 80;
	// subf r10,r3,r9
	ctx.r10.s64 = ctx.r9.s64 - ctx.r3.s64;
	// mr r27,r8
	ctx.r27.u64 = ctx.r8.u64;
	// srawi r9,r10,31
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 31;
	// li r5,1
	ctx.r5.s64 = 1;
	// and r10,r9,r7
	ctx.r10.u64 = ctx.r9.u64 & ctx.r7.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r10,r10,3
	ctx.r10.s64 = ctx.r10.s64 + 3;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// subfc r9,r6,r10
	xer.ca = ctx.r10.u32 >= ctx.r6.u32;
	ctx.r9.s64 = ctx.r10.s64 - ctx.r6.s64;
	// addi r8,r10,-2
	ctx.r8.s64 = ctx.r10.s64 + -2;
	// subfze r10,r11
	temp.u8 = ~ctx.r11.u32 + xer.ca < xer.ca;
	ctx.r10.u64 = ~ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// srawi r9,r10,31
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 31;
	// xor r7,r9,r10
	ctx.r7.u64 = ctx.r9.u64 ^ ctx.r10.u64;
	// subf r6,r7,r9
	ctx.r6.s64 = ctx.r9.s64 - ctx.r7.s64;
	// srawi r10,r6,31
	xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7FFFFFFF) != 0);
	ctx.r10.s64 = ctx.r6.s32 >> 31;
	// and r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 & ctx.r8.u64;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// subfc r9,r5,r10
	xer.ca = ctx.r10.u32 >= ctx.r5.u32;
	ctx.r9.s64 = ctx.r10.s64 - ctx.r5.s64;
	// addi r8,r10,-1
	ctx.r8.s64 = ctx.r10.s64 + -1;
	// subfze r11,r11
	temp.u8 = ~ctx.r11.u32 + xer.ca < xer.ca;
	ctx.r11.u64 = ~ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// srawi r10,r11,31
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 31;
	// xor r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// subf r6,r7,r10
	ctx.r6.s64 = ctx.r10.s64 - ctx.r7.s64;
	// srawi r5,r6,31
	xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7FFFFFFF) != 0);
	ctx.r5.s64 = ctx.r6.s32 >> 31;
	// and r11,r5,r8
	ctx.r11.u64 = ctx.r5.u64 & ctx.r8.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r11.u32);
	// bl 0x8241f1b0
	ctx.lr = 0x8250936C;
	sub_8241F1B0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// bl 0x82508260
	ctx.lr = 0x82509388;
	sub_82508260(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// b 0x82509480
	goto loc_82509480;
loc_82509390:
	// lwz r9,180(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// li r8,4
	ctx.r8.s64 = 4;
	// li r11,-1
	ctx.r11.s64 = -1;
	// lwz r10,184(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// subfc r8,r8,r9
	xer.ca = ctx.r9.u32 >= ctx.r8.u32;
	ctx.r8.s64 = ctx.r9.s64 - ctx.r8.s64;
	// addi r7,r9,-4
	ctx.r7.s64 = ctx.r9.s64 + -4;
	// subfze r9,r11
	temp.u8 = ~ctx.r11.u32 + xer.ca < xer.ca;
	ctx.r9.u64 = ~ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// li r6,3
	ctx.r6.s64 = 3;
	// srawi r8,r9,31
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7FFFFFFF) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 31;
	// addi r29,r10,240
	ctx.r29.s64 = ctx.r10.s64 + 240;
	// xor r5,r8,r9
	ctx.r5.u64 = ctx.r8.u64 ^ ctx.r9.u64;
	// addi r28,r10,160
	ctx.r28.s64 = ctx.r10.s64 + 160;
	// subf r4,r5,r8
	ctx.r4.s64 = ctx.r8.s64 - ctx.r5.s64;
	// addi r27,r10,80
	ctx.r27.s64 = ctx.r10.s64 + 80;
	// srawi r3,r4,31
	xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x7FFFFFFF) != 0);
	ctx.r3.s64 = ctx.r4.s32 >> 31;
	// mr r26,r10
	ctx.r26.u64 = ctx.r10.u64;
	// and r9,r3,r7
	ctx.r9.u64 = ctx.r3.u64 & ctx.r7.u64;
	// li r8,2
	ctx.r8.s64 = 2;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// li r7,1
	ctx.r7.s64 = 1;
	// subfc r10,r6,r9
	xer.ca = ctx.r9.u32 >= ctx.r6.u32;
	ctx.r10.s64 = ctx.r9.s64 - ctx.r6.s64;
	// addi r6,r9,-3
	ctx.r6.s64 = ctx.r9.s64 + -3;
	// subfze r10,r11
	temp.u8 = ~ctx.r11.u32 + xer.ca < xer.ca;
	ctx.r10.u64 = ~ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// srawi r9,r10,31
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 31;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// xor r5,r9,r10
	ctx.r5.u64 = ctx.r9.u64 ^ ctx.r10.u64;
	// subf r10,r5,r9
	ctx.r10.s64 = ctx.r9.s64 - ctx.r5.s64;
	// srawi r9,r10,31
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 31;
	// and r10,r9,r6
	ctx.r10.u64 = ctx.r9.u64 & ctx.r6.u64;
	// addi r10,r10,3
	ctx.r10.s64 = ctx.r10.s64 + 3;
	// subfc r9,r8,r10
	xer.ca = ctx.r10.u32 >= ctx.r8.u32;
	ctx.r9.s64 = ctx.r10.s64 - ctx.r8.s64;
	// addi r8,r10,-2
	ctx.r8.s64 = ctx.r10.s64 + -2;
	// subfze r10,r11
	temp.u8 = ~ctx.r11.u32 + xer.ca < xer.ca;
	ctx.r10.u64 = ~ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// srawi r9,r10,31
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 31;
	// xor r6,r9,r10
	ctx.r6.u64 = ctx.r9.u64 ^ ctx.r10.u64;
	// subf r5,r6,r9
	ctx.r5.s64 = ctx.r9.s64 - ctx.r6.s64;
	// srawi r10,r5,31
	xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7FFFFFFF) != 0);
	ctx.r10.s64 = ctx.r5.s32 >> 31;
	// and r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 & ctx.r8.u64;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// subfc r9,r7,r10
	xer.ca = ctx.r10.u32 >= ctx.r7.u32;
	ctx.r9.s64 = ctx.r10.s64 - ctx.r7.s64;
	// addi r8,r10,-1
	ctx.r8.s64 = ctx.r10.s64 + -1;
	// subfze r11,r11
	temp.u8 = ~ctx.r11.u32 + xer.ca < xer.ca;
	ctx.r11.u64 = ~ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// srawi r10,r11,31
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 31;
	// xor r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// subf r6,r7,r10
	ctx.r6.s64 = ctx.r10.s64 - ctx.r7.s64;
	// srawi r5,r6,31
	xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7FFFFFFF) != 0);
	ctx.r5.s64 = ctx.r6.s32 >> 31;
	// and r11,r5,r8
	ctx.r11.u64 = ctx.r5.u64 & ctx.r8.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r11.u32);
	// bl 0x8241f1b0
	ctx.lr = 0x8250945C;
	sub_8241F1B0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// bl 0x82508310
	ctx.lr = 0x8250947C;
	sub_82508310(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
loc_82509480:
	// bl 0x82573c50
	ctx.lr = 0x82509484;
	sub_82573C50(ctx, base);
loc_82509484:
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82507f28
	ctx.lr = 0x8250948C;
	sub_82507F28(ctx, base);
loc_8250948C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,576
	ctx.r1.s64 = ctx.r1.s64 + 576;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82509498"))) PPC_WEAK_FUNC(sub_82509498);
PPC_FUNC_IMPL(__imp__sub_82509498) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,4(r4)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82488fa8
	ctx.lr = 0x825094C4;
	sub_82488FA8(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82509510
	if (cr6.eq) goto loc_82509510;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8248bbf8
	ctx.lr = 0x825094DC;
	sub_8248BBF8(ctx, base);
	// bl 0x824f3888
	ctx.lr = 0x825094E0;
	sub_824F3888(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82509510
	if (cr6.eq) goto loc_82509510;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8241f1b0
	ctx.lr = 0x825094F8;
	sub_8241F1B0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82508f08
	ctx.lr = 0x82509508;
	sub_82508F08(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82573c50
	ctx.lr = 0x82509510;
	sub_82573C50(ctx, base);
loc_82509510:
	// li r3,0
	ctx.r3.s64 = 0;
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

__attribute__((alias("__imp__sub_8250952C"))) PPC_WEAK_FUNC(sub_8250952C);
PPC_FUNC_IMPL(__imp__sub_8250952C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82509530"))) PPC_WEAK_FUNC(sub_82509530);
PPC_FUNC_IMPL(__imp__sub_82509530) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,4(r4)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82488fa8
	ctx.lr = 0x8250955C;
	sub_82488FA8(ctx, base);
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825095a0
	if (cr6.eq) goto loc_825095A0;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8248bbf8
	ctx.lr = 0x82509574;
	sub_8248BBF8(ctx, base);
	// bl 0x824f3888
	ctx.lr = 0x82509578;
	sub_824F3888(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825095a0
	if (cr6.eq) goto loc_825095A0;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82488a60
	ctx.lr = 0x82509590;
	sub_82488A60(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82509028
	ctx.lr = 0x825095A0;
	sub_82509028(ctx, base);
loc_825095A0:
	// li r3,0
	ctx.r3.s64 = 0;
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

__attribute__((alias("__imp__sub_825095BC"))) PPC_WEAK_FUNC(sub_825095BC);
PPC_FUNC_IMPL(__imp__sub_825095BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825095C0"))) PPC_WEAK_FUNC(sub_825095C0);
PPC_FUNC_IMPL(__imp__sub_825095C0) {
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
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82489b30
	ctx.lr = 0x825095E4;
	sub_82489B30(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,-10003
	ctx.r4.s64 = -10003;
	// bl 0x8253b268
	ctx.lr = 0x825095F0;
	sub_8253B268(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// bl 0x8248bbf8
	ctx.lr = 0x82509608;
	sub_8248BBF8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x824f3888
	ctx.lr = 0x82509610;
	sub_824F3888(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8250965c
	if (cr6.eq) goto loc_8250965C;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82509630;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r8,r9,12828
	ctx.r8.s64 = ctx.r9.s64 + 12828;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// stw r8,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r8.u32);
	// bl 0x82465ee8
	ctx.lr = 0x82509648;
	sub_82465EE8(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x8257f3f0
	ctx.lr = 0x82509650;
	sub_8257F3F0(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82489378
	ctx.lr = 0x82509658;
	sub_82489378(ctx, base);
	// b 0x825096b4
	goto loc_825096B4;
loc_8250965C:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x82509698
	if (cr6.eq) goto loc_82509698;
	// bl 0x82508040
	ctx.lr = 0x82509668;
	sub_82508040(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82421418
	ctx.lr = 0x82509674;
	sub_82421418(ctx, base);
	// bl 0x8252e3c0
	ctx.lr = 0x82509678;
	sub_8252E3C0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253d060
	ctx.lr = 0x82509688;
	sub_8253D060(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82573c50
	ctx.lr = 0x82509694;
	sub_82573C50(ctx, base);
	// b 0x825096ac
	goto loc_825096AC;
loc_82509698:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-19352
	ctx.r4.s64 = ctx.r11.s64 + -19352;
	// bl 0x8253c558
	ctx.lr = 0x825096A8;
	sub_8253C558(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_825096AC:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x824670b0
	ctx.lr = 0x825096B4;
	sub_824670B0(ctx, base);
loc_825096B4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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

__attribute__((alias("__imp__sub_825096D0"))) PPC_WEAK_FUNC(sub_825096D0);
PPC_FUNC_IMPL(__imp__sub_825096D0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x825096D8;
	__savegprlr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// lwz r31,4(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253c280
	ctx.lr = 0x825096FC;
	sub_8253C280(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82509708
	if (cr6.eq) goto loc_82509708;
	// std r28,0(r3)
	PPC_STORE_U64(ctx.r3.u32 + 0, ctx.r28.u64);
loc_82509708:
	// lis r11,-32175
	ctx.r11.s64 = -2108620800;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r11,-27200
	ctx.r4.s64 = ctx.r11.s64 + -27200;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253b5e8
	ctx.lr = 0x8250971C;
	sub_8253B5E8(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253ba90
	ctx.lr = 0x8250972C;
	sub_8253BA90(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8241f280
	ctx.lr = 0x8250973C;
	sub_8241F280(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82421388
	ctx.lr = 0x82509748;
	sub_82421388(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// stb r10,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r10.u8);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r11,172
	ctx.r3.s64 = ctx.r11.s64 + 172;
	// bl 0x824674c0
	ctx.lr = 0x82509764;
	sub_824674C0(ctx, base);
	// lwz r3,108(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8250977c
	if (cr6.eq) goto loc_8250977C;
	// lis r4,2
	ctx.r4.s64 = 131072;
	// ori r4,r4,2
	ctx.r4.u64 = ctx.r4.u64 | 2;
	// bl 0x82573040
	ctx.lr = 0x8250977C;
	sub_82573040(ctx, base);
loc_8250977C:
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82509794
	if (cr6.eq) goto loc_82509794;
	// lis r4,2
	ctx.r4.s64 = 131072;
	// ori r4,r4,2
	ctx.r4.u64 = ctx.r4.u64 | 2;
	// bl 0x82573040
	ctx.lr = 0x82509794;
	sub_82573040(ctx, base);
loc_82509794:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825097A0"))) PPC_WEAK_FUNC(sub_825097A0);
PPC_FUNC_IMPL(__imp__sub_825097A0) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82508040
	ctx.lr = 0x825097BC;
	sub_82508040(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x824890e0
	ctx.lr = 0x825097CC;
	sub_824890E0(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32175
	ctx.r10.s64 = -2108620800;
	// addi r31,r11,-19380
	ctx.r31.s64 = ctx.r11.s64 + -19380;
	// addi r9,r10,-28368
	ctx.r9.s64 = ctx.r10.s64 + -28368;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r4,r31,-52
	ctx.r4.s64 = ctx.r31.s64 + -52;
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// ld r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x825096d0
	ctx.lr = 0x825097F8;
	sub_825096D0(ctx, base);
	// lis r8,-32175
	ctx.r8.s64 = -2108620800;
	// addi r7,r8,-27496
	ctx.r7.s64 = ctx.r8.s64 + -27496;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// addi r4,r31,-36
	ctx.r4.s64 = ctx.r31.s64 + -36;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r7,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r7.u32);
	// ld r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x825096d0
	ctx.lr = 0x82509818;
	sub_825096D0(ctx, base);
	// lis r6,-32175
	ctx.r6.s64 = -2108620800;
	// addi r5,r6,-27344
	ctx.r5.s64 = ctx.r6.s64 + -27344;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// addi r4,r31,-20
	ctx.r4.s64 = ctx.r31.s64 + -20;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r5,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r5.u32);
	// ld r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x825096d0
	ctx.lr = 0x82509838;
	sub_825096D0(ctx, base);
	// lis r4,-32175
	ctx.r4.s64 = -2108620800;
	// addi r11,r4,-29912
	ctx.r11.s64 = ctx.r4.s64 + -29912;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// ld r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x825096d0
	ctx.lr = 0x82509858;
	sub_825096D0(ctx, base);
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

__attribute__((alias("__imp__sub_82509870"))) PPC_WEAK_FUNC(sub_82509870);
PPC_FUNC_IMPL(__imp__sub_82509870) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82489b30
	ctx.lr = 0x82509888;
	sub_82489B30(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825097a0
	ctx.lr = 0x82509890;
	sub_825097A0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r10,r11,12828
	ctx.r10.s64 = ctx.r11.s64 + 12828;
	// stw r10,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// bl 0x82465ee8
	ctx.lr = 0x825098A4;
	sub_82465EE8(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8257f3f0
	ctx.lr = 0x825098AC;
	sub_8257F3F0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82489378
	ctx.lr = 0x825098B4;
	sub_82489378(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825098C8"))) PPC_WEAK_FUNC(sub_825098C8);
PPC_FUNC_IMPL(__imp__sub_825098C8) {
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
	// bl 0x82508040
	ctx.lr = 0x825098E0;
	sub_82508040(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r31,r11,-19444
	ctx.r31.s64 = ctx.r11.s64 + -19444;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r31,-120
	ctx.r4.s64 = ctx.r31.s64 + -120;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8247b0f0
	ctx.lr = 0x825098FC;
	sub_8247B0F0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8246be10
	ctx.lr = 0x82509908;
	sub_8246BE10(ctx, base);
	// bl 0x82467738
	ctx.lr = 0x8250990C;
	sub_82467738(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8246be18
	ctx.lr = 0x82509918;
	sub_8246BE18(ctx, base);
	// lis r5,1
	ctx.r5.s64 = 65536;
	// li r4,8
	ctx.r4.s64 = 8;
	// ori r5,r5,1
	ctx.r5.u64 = ctx.r5.u64 | 1;
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x825730a8
	ctx.lr = 0x8250992C;
	sub_825730A8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82509948
	if (cr6.eq) goto loc_82509948;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r9,r10,-19336
	ctx.r9.s64 = ctx.r10.s64 + -19336;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// b 0x8250994c
	goto loc_8250994C;
loc_82509948:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8250994C:
	// stw r11,128(r30)
	PPC_STORE_U32(ctx.r30.u32 + 128, ctx.r11.u32);
	// addi r5,r31,-108
	ctx.r5.s64 = ctx.r31.s64 + -108;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r4,21
	ctx.r4.s64 = 21;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824788c8
	ctx.lr = 0x82509964;
	sub_824788C8(ctx, base);
	// bl 0x82467738
	ctx.lr = 0x82509968;
	sub_82467738(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r31,-100
	ctx.r4.s64 = ctx.r31.s64 + -100;
	// li r5,48
	ctx.r5.s64 = 48;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82478598
	ctx.lr = 0x8250997C;
	sub_82478598(ctx, base);
	// bl 0x8251dd98
	ctx.lr = 0x82509980;
	sub_8251DD98(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r31,-84
	ctx.r4.s64 = ctx.r31.s64 + -84;
	// li r5,56
	ctx.r5.s64 = 56;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824786a8
	ctx.lr = 0x82509994;
	sub_824786A8(ctx, base);
	// addi r6,r31,-72
	ctx.r6.s64 = ctx.r31.s64 + -72;
	// addi r5,r31,-68
	ctx.r5.s64 = ctx.r31.s64 + -68;
	// addi r4,r31,-60
	ctx.r4.s64 = ctx.r31.s64 + -60;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82479460
	ctx.lr = 0x825099AC;
	sub_82479460(ctx, base);
	// addi r6,r31,-52
	ctx.r6.s64 = ctx.r31.s64 + -52;
	// addi r5,r31,-48
	ctx.r5.s64 = ctx.r31.s64 + -48;
	// addi r4,r31,-32
	ctx.r4.s64 = ctx.r31.s64 + -32;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82479460
	ctx.lr = 0x825099C4;
	sub_82479460(ctx, base);
	// addi r6,r31,-16
	ctx.r6.s64 = ctx.r31.s64 + -16;
	// addi r5,r31,-12
	ctx.r5.s64 = ctx.r31.s64 + -12;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82479460
	ctx.lr = 0x825099DC;
	sub_82479460(ctx, base);
	// lis r11,-32175
	ctx.r11.s64 = -2108620800;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r11,-26720
	ctx.r4.s64 = ctx.r11.s64 + -26720;
	// bl 0x8246be38
	ctx.lr = 0x825099EC;
	sub_8246BE38(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824894a0
	ctx.lr = 0x825099F4;
	sub_824894A0(ctx, base);
	// lwz r31,4(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lis r10,-32175
	ctx.r10.s64 = -2108620800;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r10,-26512
	ctx.r4.s64 = ctx.r10.s64 + -26512;
	// bl 0x8253b5e8
	ctx.lr = 0x82509A0C;
	sub_8253B5E8(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253be88
	ctx.lr = 0x82509A20;
	sub_8253BE88(ctx, base);
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

__attribute__((alias("__imp__sub_82509A38"))) PPC_WEAK_FUNC(sub_82509A38);
PPC_FUNC_IMPL(__imp__sub_82509A38) {
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
	// stfd f30,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f30.u64);
	// stfd f31,-32(r1)
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x82522658
	ctx.lr = 0x82509A64;
	sub_82522658(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82509a7c
	if (cr6.eq) goto loc_82509A7C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// ld r30,272(r31)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r31.u32 + 272);
	// lfd f31,9000(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r11.u32 + 9000);
loc_82509A7C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfd f30,88(r31)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r31.u32 + 88);
	// std r30,272(r31)
	PPC_STORE_U64(ctx.r31.u32 + 272, ctx.r30.u64);
	// addi r30,r31,112
	ctx.r30.s64 = ctx.r31.s64 + 112;
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lfd f0,17056(r11)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + 17056);
	// stfd f0,88(r31)
	PPC_STORE_U64(ctx.r31.u32 + 88, ctx.f0.u64);
	// bl 0x82573d70
	ctx.lr = 0x82509AA0;
	sub_82573D70(ctx, base);
	// lis r10,-31767
	ctx.r10.s64 = -2081882112;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r10,23704
	ctx.r4.s64 = ctx.r10.s64 + 23704;
	// bl 0x82573d70
	ctx.lr = 0x82509AB0;
	sub_82573D70(ctx, base);
	// stfd f31,40(r31)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r31.u32 + 40, ctx.f31.u64);
	// stfd f30,48(r31)
	PPC_STORE_U64(ctx.r31.u32 + 48, ctx.f30.u64);
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82509ae8
	if (cr6.eq) goto loc_82509AE8;
	// lfd f0,16(r11)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + 16);
	// lfd f13,8(r11)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// lfd f12,72(r31)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r31.u32 + 72);
	// fmadd f11,f0,f13,f12
	ctx.f11.f64 = ctx.f0.f64 * ctx.f13.f64 + ctx.f12.f64;
	// lfd f10,64(r31)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 64);
	// stfd f11,72(r31)
	PPC_STORE_U64(ctx.r31.u32 + 72, ctx.f11.u64);
	// lfd f9,8(r11)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// fadd f8,f9,f10
	ctx.f8.f64 = ctx.f9.f64 + ctx.f10.f64;
	// stfd f8,64(r31)
	PPC_STORE_U64(ctx.r31.u32 + 64, ctx.f8.u64);
loc_82509AE8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f30,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// lfd f31,-32(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82509B08"))) PPC_WEAK_FUNC(sub_82509B08);
PPC_FUNC_IMPL(__imp__sub_82509B08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x82509B10;
	__savegprlr_24(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, xer);
	// beq cr6,0x82509ce4
	if (cr6.eq) goto loc_82509CE4;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x82509b5c
	if (!cr6.eq) goto loc_82509B5C;
	// bl 0x824851c0
	ctx.lr = 0x82509B34;
	sub_824851C0(ctx, base);
	// lwz r3,40(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82509ce4
	if (cr6.eq) goto loc_82509CE4;
	// lis r4,3
	ctx.r4.s64 = 196608;
	// ori r4,r4,1
	ctx.r4.u64 = ctx.r4.u64 | 1;
	// bl 0x82573040
	ctx.lr = 0x82509B4C;
	sub_82573040(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,40(r30)
	PPC_STORE_U32(ctx.r30.u32 + 40, ctx.r11.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_82509B5C:
	// li r29,-1
	ctx.r29.s64 = -1;
	// lis r11,3
	ctx.r11.s64 = 196608;
	// stw r29,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r29.u32);
	// rlwinm r31,r28,5,0,26
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 5) & 0xFFFFFFE0;
	// ori r24,r11,1
	ctx.r24.u64 = ctx.r11.u64 | 1;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825730a8
	ctx.lr = 0x82509B80;
	sub_825730A8(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// rlwinm r3,r28,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x825730a8
	ctx.lr = 0x82509B94;
	sub_825730A8(ctx, base);
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// stw r9,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r9.u32);
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// beq cr6,0x82509bc4
	if (cr6.eq) goto loc_82509BC4;
	// addi r11,r26,-8
	ctx.r11.s64 = ctx.r26.s64 + -8;
	// mtctr r28
	ctr.u64 = ctx.r28.u64;
loc_82509BB4:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// std r9,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r9.u64);
	// stwu r10,32(r11)
	ea = 32 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82509bb4
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82509BB4;
loc_82509BC4:
	// add r11,r31,r26
	ctx.r11.u64 = ctx.r31.u64 + ctx.r26.u64;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// rlwinm r3,r28,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r29,-8(r11)
	PPC_STORE_U32(ctx.r11.u32 + -8, ctx.r29.u32);
	// bl 0x825730a8
	ctx.lr = 0x82509BDC;
	sub_825730A8(ctx, base);
	// rlwinm r11,r28,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82509c00
	if (cr6.eq) goto loc_82509C00;
	// addi r10,r3,-4
	ctx.r10.s64 = ctx.r3.s64 + -4;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
loc_82509BF8:
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82509bf8
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82509BF8;
loc_82509C00:
	// lwz r31,8(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// cmpwi cr6,r31,-1
	cr6.compare<int32_t>(ctx.r31.s32, -1, xer);
	// beq cr6,0x82509c80
	if (cr6.eq) goto loc_82509C80;
loc_82509C10:
	// addi r8,r1,104
	ctx.r8.s64 = ctx.r1.s64 + 104;
	// stw r29,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r29.u32);
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// addi r10,r1,100
	ctx.r10.s64 = ctx.r1.s64 + 100;
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// addi r7,r1,108
	ctx.r7.s64 = ctx.r1.s64 + 108;
	// li r6,2
	ctx.r6.s64 = 2;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82484ee8
	ctx.lr = 0x82509C48;
	sub_82484EE8(ctx, base);
	// lwz r7,96(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add. r11,r11,r25
	ctx.r11.u64 = ctx.r11.u64 + ctx.r25.u64;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x82509c68
	if (cr0.eq) goto loc_82509C68;
	// lwz r10,40(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// rlwinm r9,r31,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r9,r10
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
loc_82509C68:
	// lwz r10,32(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// rlwinm r11,r31,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 5) & 0xFFFFFFE0;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r31,20(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmpwi cr6,r31,-1
	cr6.compare<int32_t>(ctx.r31.s32, -1, xer);
	// bne cr6,0x82509c10
	if (!cr6.eq) goto loc_82509C10;
loc_82509C80:
	// lwz r3,40(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// lwz r31,100(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82509c98
	if (cr6.eq) goto loc_82509C98;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// bl 0x82573040
	ctx.lr = 0x82509C98;
	sub_82573040(ctx, base);
loc_82509C98:
	// lwz r3,32(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82509cac
	if (cr6.eq) goto loc_82509CAC;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// bl 0x82573040
	ctx.lr = 0x82509CAC;
	sub_82573040(ctx, base);
loc_82509CAC:
	// lwz r3,24(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82509cc0
	if (cr6.eq) goto loc_82509CC0;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// bl 0x82573040
	ctx.lr = 0x82509CC0;
	sub_82573040(ctx, base);
loc_82509CC0:
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r10,108(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// stw r28,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r28.u32);
	// stw r31,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r31.u32);
	// stw r26,32(r30)
	PPC_STORE_U32(ctx.r30.u32 + 32, ctx.r26.u32);
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// stw r10,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r10.u32);
	// stw r27,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r27.u32);
	// stw r25,40(r30)
	PPC_STORE_U32(ctx.r30.u32 + 40, ctx.r25.u32);
loc_82509CE4:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82509CEC"))) PPC_WEAK_FUNC(sub_82509CEC);
PPC_FUNC_IMPL(__imp__sub_82509CEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82509CF0"))) PPC_WEAK_FUNC(sub_82509CF0);
PPC_FUNC_IMPL(__imp__sub_82509CF0) {
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
	// lis r10,-31767
	ctx.r10.s64 = -2081882112;
	// lwz r11,23680(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 23680);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82509d64
	if (!cr6.eq) goto loc_82509D64;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-31767
	ctx.r9.s64 = -2081882112;
	// stw r11,23680(r10)
	PPC_STORE_U32(ctx.r10.u32 + 23680, ctx.r11.u32);
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// addi r31,r9,23448
	ctx.r31.s64 = ctx.r9.s64 + 23448;
	// lis r6,4
	ctx.r6.s64 = 262144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r8,-19276
	ctx.r5.s64 = ctx.r8.s64 + -19276;
	// ori r6,r6,4
	ctx.r6.u64 = ctx.r6.u64 | 4;
	// li r4,280
	ctx.r4.s64 = 280;
	// bl 0x82477fc8
	ctx.lr = 0x82509D40;
	sub_82477FC8(ctx, base);
	// lis r7,-31793
	ctx.r7.s64 = -2083586048;
	// addi r3,r7,8992
	ctx.r3.s64 = ctx.r7.s64 + 8992;
	// bl 0x831cdcc8
	ctx.lr = 0x82509D4C;
	sub_831CDCC8(ctx, base);
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
loc_82509D64:
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// addi r3,r11,23448
	ctx.r3.s64 = ctx.r11.s64 + 23448;
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

__attribute__((alias("__imp__sub_82509D80"))) PPC_WEAK_FUNC(sub_82509D80);
PPC_FUNC_IMPL(__imp__sub_82509D80) {
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
	// bl 0x82509cf0
	ctx.lr = 0x82509D98;
	sub_82509CF0(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r31,r11,-19204
	ctx.r31.s64 = ctx.r11.s64 + -19204;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r31,-64
	ctx.r4.s64 = ctx.r31.s64 + -64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8247b0f0
	ctx.lr = 0x82509DB4;
	sub_8247B0F0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8246be10
	ctx.lr = 0x82509DC0;
	sub_8246BE10(ctx, base);
	// bl 0x82467738
	ctx.lr = 0x82509DC4;
	sub_82467738(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8246be18
	ctx.lr = 0x82509DD0;
	sub_8246BE18(ctx, base);
	// addi r5,r31,-52
	ctx.r5.s64 = ctx.r31.s64 + -52;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r6,88
	ctx.r6.s64 = 88;
	// li r4,9
	ctx.r4.s64 = 9;
	// bl 0x824788c8
	ctx.lr = 0x82509DE4;
	sub_824788C8(ctx, base);
	// addi r5,r31,-36
	ctx.r5.s64 = ctx.r31.s64 + -36;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r6,96
	ctx.r6.s64 = 96;
	// li r4,11
	ctx.r4.s64 = 11;
	// bl 0x824788c8
	ctx.lr = 0x82509DF8;
	sub_824788C8(ctx, base);
	// addi r5,r31,-16
	ctx.r5.s64 = ctx.r31.s64 + -16;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r6,112
	ctx.r6.s64 = 112;
	// li r4,11
	ctx.r4.s64 = 11;
	// bl 0x824788c8
	ctx.lr = 0x82509E0C;
	sub_824788C8(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r6,128
	ctx.r6.s64 = 128;
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824783f0
	ctx.lr = 0x82509E20;
	sub_824783F0(ctx, base);
	// bl 0x8248ff18
	ctx.lr = 0x82509E24;
	sub_8248FF18(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82509e34
	if (cr6.eq) goto loc_82509E34;
	// bl 0x8248ff18
	ctx.lr = 0x82509E30;
	sub_8248FF18(ctx, base);
	// bl 0x82490248
	ctx.lr = 0x82509E34;
	sub_82490248(ctx, base);
loc_82509E34:
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

__attribute__((alias("__imp__sub_82509E4C"))) PPC_WEAK_FUNC(sub_82509E4C);
PPC_FUNC_IMPL(__imp__sub_82509E4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82509E50"))) PPC_WEAK_FUNC(sub_82509E50);
PPC_FUNC_IMPL(__imp__sub_82509E50) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82509E58;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// blt cr6,0x82509e84
	if (cr6.lt) goto loc_82509E84;
	// addi r4,r11,2
	ctx.r4.s64 = ctx.r11.s64 + 2;
	// bl 0x82509b08
	ctx.lr = 0x82509E84;
	sub_82509B08(ctx, base);
loc_82509E84:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r29,16(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x83102db0
	ctx.lr = 0x82509E90;
	sub_83102DB0(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// ld r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// divdu r9,r7,r10
	ctx.r9.u64 = PPCDivide(ctx.r7.u64, ctx.r10.u64);
	// tdllei r10,0
	// mulld r8,r9,r10
	ctx.r8.s64 = ctx.r9.s64 * ctx.r10.s64;
	// subf r6,r8,r7
	ctx.r6.s64 = ctx.r7.s64 - ctx.r8.s64;
	// rlwinm r9,r6,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r9,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// cmpwi cr6,r10,-1
	cr6.compare<int32_t>(ctx.r10.s32, -1, xer);
	// bne cr6,0x82509ec8
	if (!cr6.eq) goto loc_82509EC8;
	// stwx r29,r9,r11
	PPC_STORE_U32(ctx.r9.u32 + ctx.r11.u32, ctx.r29.u32);
	// b 0x82509f58
	goto loc_82509F58;
loc_82509EC8:
	// lwz r8,32(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// rlwinm r11,r10,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// add r9,r8,r11
	ctx.r9.u64 = ctx.r8.u64 + ctx.r11.u64;
	// lwz r6,24(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 24);
	// cmpwi cr6,r6,-1
	cr6.compare<int32_t>(ctx.r6.s32, -1, xer);
	// beq cr6,0x82509f28
	if (cr6.eq) goto loc_82509F28;
	// clrldi r6,r7,16
	ctx.r6.u64 = ctx.r7.u64 & 0xFFFFFFFFFFFF;
loc_82509EE4:
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// ld r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// clrldi r5,r9,16
	ctx.r5.u64 = ctx.r9.u64 & 0xFFFFFFFFFFFF;
	// li r9,1
	ctx.r9.s64 = 1;
	// cmpld cr6,r6,r5
	cr6.compare<uint64_t>(ctx.r6.u64, ctx.r5.u64, xer);
	// beq cr6,0x82509f00
	if (cr6.eq) goto loc_82509F00;
	// li r9,0
	ctx.r9.s64 = 0;
loc_82509F00:
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82509ff0
	if (!cr6.eq) goto loc_82509FF0;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// lwz r9,32(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// rlwinm r11,r10,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r5,24(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 24);
	// cmpwi cr6,r5,-1
	cr6.compare<int32_t>(ctx.r5.s32, -1, xer);
	// bne cr6,0x82509ee4
	if (!cr6.eq) goto loc_82509EE4;
loc_82509F28:
	// ldx r6,r8,r11
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r8.u32 + ctx.r11.u32);
	// add r9,r8,r11
	ctx.r9.u64 = ctx.r8.u64 + ctx.r11.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// xor r5,r7,r6
	ctx.r5.u64 = ctx.r7.u64 ^ ctx.r6.u64;
	// clrldi r4,r5,16
	ctx.r4.u64 = ctx.r5.u64 & 0xFFFFFFFFFFFF;
	// cmpldi cr6,r4,0
	cr6.compare<uint64_t>(ctx.r4.u64, 0, xer);
	// beq cr6,0x82509f48
	if (cr6.eq) goto loc_82509F48;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82509F48:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82509ff0
	if (!cr6.eq) goto loc_82509FF0;
	// stw r29,24(r9)
	PPC_STORE_U32(ctx.r9.u32 + 24, ctx.r29.u32);
loc_82509F58:
	// lwz r9,40(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// rlwinm r11,r29,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r29,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 5) & 0xFFFFFFE0;
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// add. r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// lwz r9,32(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// add r30,r10,r9
	ctx.r30.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lwz r7,24(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// stw r7,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r7.u32);
	// beq 0x82509f90
	if (cr0.eq) goto loc_82509F90;
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_82509F90:
	// ld r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r28.u32 + 0);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// ld r9,8(r28)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r28.u32 + 8);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// ld r6,0(r8)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r8.u32 + 0);
	// ld r7,8(r8)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r8.u32 + 8);
	// std r7,8(r30)
	PPC_STORE_U64(ctx.r30.u32 + 8, ctx.r7.u64);
	// std r6,0(r30)
	PPC_STORE_U64(ctx.r30.u32 + 0, ctx.r6.u64);
	// bl 0x82573260
	ctx.lr = 0x82509FC0;
	sub_82573260(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r11.u32);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmpwi cr6,r10,-1
	cr6.compare<int32_t>(ctx.r10.s32, -1, xer);
	// bne cr6,0x8250a018
	if (!cr6.eq) goto loc_8250A018;
	// stw r29,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r29.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r11.u32);
	// stw r11,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r11.u32);
	// stw r29,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r29.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_82509FF0:
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8250a00c
	if (cr6.eq) goto loc_8250A00C;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,0(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// stwx r9,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u32);
loc_8250A00C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_8250A018:
	// stw r10,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r10.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r9,32(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// rlwinm r10,r10,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r29,20(r9)
	PPC_STORE_U32(ctx.r9.u32 + 20, ctx.r29.u32);
	// stw r11,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r11.u32);
	// stw r29,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r29.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8250A044"))) PPC_WEAK_FUNC(sub_8250A044);
PPC_FUNC_IMPL(__imp__sub_8250A044) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8250A048"))) PPC_WEAK_FUNC(sub_8250A048);
PPC_FUNC_IMPL(__imp__sub_8250A048) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x8250A050;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82455560
	ctx.lr = 0x8250A05C;
	sub_82455560(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// addi r6,r11,-19192
	ctx.r6.s64 = ctx.r11.s64 + -19192;
	// addi r5,r8,21716
	ctx.r5.s64 = ctx.r8.s64 + 21716;
	// lfd f0,9000(r10)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r10.u32 + 9000);
	// addi r4,r7,21716
	ctx.r4.s64 = ctx.r7.s64 + 21716;
	// stw r6,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r6.u32);
	// addi r30,r31,32
	ctx.r30.s64 = ctx.r31.s64 + 32;
	// lfd f13,17056(r9)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r9.u32 + 17056);
	// stfd f0,40(r31)
	PPC_STORE_U64(ctx.r31.u32 + 40, ctx.f0.u64);
	// stw r5,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r5.u32);
	// stfd f13,48(r31)
	PPC_STORE_U64(ctx.r31.u32 + 48, ctx.f13.u64);
	// stw r4,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r4.u32);
	// stfd f0,64(r31)
	PPC_STORE_U64(ctx.r31.u32 + 64, ctx.f0.u64);
	// stw r30,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r30.u32);
	// stfd f0,72(r31)
	PPC_STORE_U64(ctx.r31.u32 + 72, ctx.f0.u64);
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// stfd f13,88(r31)
	PPC_STORE_U64(ctx.r31.u32 + 88, ctx.f13.u64);
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// addi r28,r11,23704
	ctx.r28.s64 = ctx.r11.s64 + 23704;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x8241f130
	ctx.lr = 0x8250A0C0;
	sub_8241F130(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r31,112
	ctx.r3.s64 = ctx.r31.s64 + 112;
	// bl 0x8241f130
	ctx.lr = 0x8250A0CC;
	sub_8241F130(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r10,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r10.u32);
	// addi r3,r31,128
	ctx.r3.s64 = ctx.r31.s64 + 128;
	// stw r10,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r10.u32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stw r11,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r11.u32);
	// addi r29,r31,224
	ctx.r29.s64 = ctx.r31.s64 + 224;
	// stw r11,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r11.u32);
	// stw r11,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r11.u32);
	// std r10,152(r31)
	PPC_STORE_U64(ctx.r31.u32 + 152, ctx.r10.u64);
	// std r10,160(r31)
	PPC_STORE_U64(ctx.r31.u32 + 160, ctx.r10.u64);
	// stw r10,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r10.u32);
	// stw r10,176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 176, ctx.r10.u32);
	// stw r10,180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 180, ctx.r10.u32);
	// stw r11,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r11.u32);
	// stw r11,188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 188, ctx.r11.u32);
	// stw r11,192(r31)
	PPC_STORE_U32(ctx.r31.u32 + 192, ctx.r11.u32);
	// std r10,200(r31)
	PPC_STORE_U64(ctx.r31.u32 + 200, ctx.r10.u64);
	// std r10,208(r31)
	PPC_STORE_U64(ctx.r31.u32 + 208, ctx.r10.u64);
	// stw r10,216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 216, ctx.r10.u32);
	// stw r10,224(r31)
	PPC_STORE_U32(ctx.r31.u32 + 224, ctx.r10.u32);
	// stw r10,228(r31)
	PPC_STORE_U32(ctx.r31.u32 + 228, ctx.r10.u32);
	// stw r11,232(r31)
	PPC_STORE_U32(ctx.r31.u32 + 232, ctx.r11.u32);
	// stw r11,236(r31)
	PPC_STORE_U32(ctx.r31.u32 + 236, ctx.r11.u32);
	// stw r11,240(r31)
	PPC_STORE_U32(ctx.r31.u32 + 240, ctx.r11.u32);
	// std r10,248(r31)
	PPC_STORE_U64(ctx.r31.u32 + 248, ctx.r10.u64);
	// std r10,256(r31)
	PPC_STORE_U64(ctx.r31.u32 + 256, ctx.r10.u64);
	// stw r10,264(r31)
	PPC_STORE_U32(ctx.r31.u32 + 264, ctx.r10.u32);
	// std r10,272(r31)
	PPC_STORE_U64(ctx.r31.u32 + 272, ctx.r10.u64);
	// bl 0x824ca7a8
	ctx.lr = 0x8250A148;
	sub_824CA7A8(ctx, base);
	// li r10,500
	ctx.r10.s64 = 500;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82509e50
	ctx.lr = 0x8250A168;
	sub_82509E50(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8250A174"))) PPC_WEAK_FUNC(sub_8250A174);
PPC_FUNC_IMPL(__imp__sub_8250A174) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8250A178"))) PPC_WEAK_FUNC(sub_8250A178);
PPC_FUNC_IMPL(__imp__sub_8250A178) {
	PPC_FUNC_PROLOGUE();
	// b 0x82509cf0
	sub_82509CF0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8250A17C"))) PPC_WEAK_FUNC(sub_8250A17C);
PPC_FUNC_IMPL(__imp__sub_8250A17C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8250A180"))) PPC_WEAK_FUNC(sub_8250A180);
PPC_FUNC_IMPL(__imp__sub_8250A180) {
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
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r3,224
	ctx.r3.s64 = ctx.r3.s64 + 224;
	// addi r10,r11,-19192
	ctx.r10.s64 = ctx.r11.s64 + -19192;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x83328188
	ctx.lr = 0x8250A1A8;
	sub_83328188(ctx, base);
	// addi r3,r31,176
	ctx.r3.s64 = ctx.r31.s64 + 176;
	// bl 0x83328188
	ctx.lr = 0x8250A1B0;
	sub_83328188(ctx, base);
	// addi r3,r31,128
	ctx.r3.s64 = ctx.r31.s64 + 128;
	// bl 0x83328188
	ctx.lr = 0x8250A1B8;
	sub_83328188(ctx, base);
	// addi r3,r31,112
	ctx.r3.s64 = ctx.r31.s64 + 112;
	// bl 0x82573c50
	ctx.lr = 0x8250A1C0;
	sub_82573C50(ctx, base);
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x82573c50
	ctx.lr = 0x8250A1C8;
	sub_82573C50(ctx, base);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// addi r7,r9,21716
	ctx.r7.s64 = ctx.r9.s64 + 21716;
	// addi r6,r8,21716
	ctx.r6.s64 = ctx.r8.s64 + 21716;
	// stw r7,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r7.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r6,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r6.u32);
	// bl 0x82467108
	ctx.lr = 0x8250A1E8;
	sub_82467108(ctx, base);
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

__attribute__((alias("__imp__sub_8250A1FC"))) PPC_WEAK_FUNC(sub_8250A1FC);
PPC_FUNC_IMPL(__imp__sub_8250A1FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8250A200"))) PPC_WEAK_FUNC(sub_8250A200);
PPC_FUNC_IMPL(__imp__sub_8250A200) {
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
	// bl 0x8250a180
	ctx.lr = 0x8250A220;
	sub_8250A180(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8250a238
	if (cr6.eq) goto loc_8250A238;
	// bl 0x8248b818
	ctx.lr = 0x8250A234;
	sub_8248B818(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8250A238:
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

__attribute__((alias("__imp__sub_8250A250"))) PPC_WEAK_FUNC(sub_8250A250);
PPC_FUNC_IMPL(__imp__sub_8250A250) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stfd f31,-16(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,-19124
	ctx.r3.s64 = ctx.r11.s64 + -19124;
	// bl 0x8258f408
	ctx.lr = 0x8250A274;
	sub_8258F408(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8250a298
	if (cr6.eq) goto loc_8250A298;
	// lfs f1,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f1.f64 = double(temp.f32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f31,-16(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_8250A298:
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f31,-16(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8250A2B0"))) PPC_WEAK_FUNC(sub_8250A2B0);
PPC_FUNC_IMPL(__imp__sub_8250A2B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x8250A2B8;
	__savegprlr_29(ctx, base);
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r30,12(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x825891b8
	ctx.lr = 0x8250A2D0;
	sub_825891B8(ctx, base);
	// ld r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r30.u32 + 8);
	// ld r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// subf r29,r11,r10
	ctx.r29.s64 = ctx.r10.s64 - ctx.r11.s64;
	// bl 0x82589210
	ctx.lr = 0x8250A2E0;
	sub_82589210(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// bl 0x831ce710
	ctx.lr = 0x8250A2EC;
	sub_831CE710(ctx, base);
	// fmul f13,f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = ctx.f31.f64 * ctx.f1.f64;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// ld r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// lfs f0,9008(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// stfs f12,16(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// ld r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r30.u32 + 0);
	// stfs f0,80(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 80, temp.u32);
	// ld r7,8(r30)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r30.u32 + 8);
	// subf r6,r7,r8
	ctx.r6.s64 = ctx.r8.s64 - ctx.r7.s64;
	// std r6,56(r30)
	PPC_STORE_U64(ctx.r30.u32 + 56, ctx.r6.u64);
	// ld r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r5,24(r30)
	PPC_STORE_U64(ctx.r30.u32 + 24, ctx.r5.u64);
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// std r4,8(r30)
	PPC_STORE_U64(ctx.r30.u32 + 8, ctx.r4.u64);
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// std r4,32(r30)
	PPC_STORE_U64(ctx.r30.u32 + 32, ctx.r4.u64);
	// std r11,16(r30)
	PPC_STORE_U64(ctx.r30.u32 + 16, ctx.r11.u64);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8250A348"))) PPC_WEAK_FUNC(sub_8250A348);
PPC_FUNC_IMPL(__imp__sub_8250A348) {
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
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r3,r3,172
	ctx.r3.s64 = ctx.r3.s64 + 172;
	// stw r10,168(r11)
	PPC_STORE_U32(ctx.r11.u32 + 168, ctx.r10.u32);
	// bl 0x8257f158
	ctx.lr = 0x8250A368;
	sub_8257F158(ctx, base);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// addi r3,r9,-19060
	ctx.r3.s64 = ctx.r9.s64 + -19060;
	// bl 0x8258f248
	ctx.lr = 0x8250A374;
	sub_8258F248(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8250A384"))) PPC_WEAK_FUNC(sub_8250A384);
PPC_FUNC_IMPL(__imp__sub_8250A384) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8250A388"))) PPC_WEAK_FUNC(sub_8250A388);
PPC_FUNC_IMPL(__imp__sub_8250A388) {
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
	// stfd f31,-32(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,112(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 112);
	ctx.f0.f64 = double(temp.f32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// lfs f31,9008(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f31.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// fcmpu cr6,f0,f31
	cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bgt cr6,0x8250a3c4
	if (cr6.gt) goto loc_8250A3C4;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_8250A3C4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// stb r11,119(r31)
	PPC_STORE_U8(ctx.r31.u32 + 119, ctx.r11.u8);
	// beq cr6,0x8250a3f8
	if (cr6.eq) goto loc_8250A3F8;
	// lfs f13,108(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x8250a3f4
	if (!cr6.lt) goto loc_8250A3F4;
	// lfs f12,104(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f13,f12
	cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// bge cr6,0x8250a3f4
	if (!cr6.lt) goto loc_8250A3F4;
	// fcmpu cr6,f0,f31
	cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bne cr6,0x8250a3f8
	if (!cr6.eq) goto loc_8250A3F8;
loc_8250A3F4:
	// stb r30,119(r31)
	PPC_STORE_U8(ctx.r31.u32 + 119, ctx.r30.u8);
loc_8250A3F8:
	// stb r30,116(r31)
	PPC_STORE_U8(ctx.r31.u32 + 116, ctx.r30.u8);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,364
	ctx.r3.s64 = ctx.r31.s64 + 364;
	// bl 0x8257efb0
	ctx.lr = 0x8250A40C;
	sub_8257EFB0(ctx, base);
	// bl 0x82589158
	ctx.lr = 0x8250A410;
	sub_82589158(ctx, base);
	// bl 0x82589200
	ctx.lr = 0x8250A414;
	sub_82589200(ctx, base);
	// bl 0x831ce710
	ctx.lr = 0x8250A418;
	sub_831CE710(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lfd f0,-18952(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + -18952);
	// lfd f13,15760(r10)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r10.u32 + 15760);
	// fmadd f0,f1,f0,f13
	ctx.f0.f64 = ctx.f1.f64 * ctx.f0.f64 + ctx.f13.f64;
	// fctidz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.f13.u64);
	// bl 0x825891b8
	ctx.lr = 0x8250A43C;
	sub_825891B8(ctx, base);
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// ld r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// stfs f31,88(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 88, temp.u32);
	// ld r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// std r30,72(r31)
	PPC_STORE_U64(ctx.r31.u32 + 72, ctx.r30.u64);
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lfs f0,-24912(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -24912);
	ctx.f0.f64 = double(temp.f32);
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// stfs f0,84(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 84, temp.u32);
	// std r11,8(r31)
	PPC_STORE_U64(ctx.r31.u32 + 8, ctx.r11.u64);
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// std r10,56(r31)
	PPC_STORE_U64(ctx.r31.u32 + 56, ctx.r10.u64);
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// std r9,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r9.u64);
	// std r11,48(r31)
	PPC_STORE_U64(ctx.r31.u32 + 48, ctx.r11.u64);
	// std r11,40(r31)
	PPC_STORE_U64(ctx.r31.u32 + 40, ctx.r11.u64);
	// std r11,24(r31)
	PPC_STORE_U64(ctx.r31.u32 + 24, ctx.r11.u64);
	// std r11,64(r31)
	PPC_STORE_U64(ctx.r31.u32 + 64, ctx.r11.u64);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f31,-32(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8250A4A4"))) PPC_WEAK_FUNC(sub_8250A4A4);
PPC_FUNC_IMPL(__imp__sub_8250A4A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8250A4A8"))) PPC_WEAK_FUNC(sub_8250A4A8);
PPC_FUNC_IMPL(__imp__sub_8250A4A8) {
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
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f0,104(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-19132
	ctx.r11.s64 = ctx.r11.s64 + -19132;
	// stw r4,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r4.u32);
	// lfs f13,-4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f1,f13
	cr6.compare(ctx.f1.f64, ctx.f13.f64);
	// blt cr6,0x8250a4f4
	if (cr6.lt) goto loc_8250A4F4;
	// lfs f0,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bgt cr6,0x8250a4f4
	if (cr6.gt) goto loc_8250A4F4;
	// fdivs f0,f13,f1
	ctx.f0.f64 = double(float(ctx.f13.f64 / ctx.f1.f64));
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
loc_8250A4F4:
	// addi r30,r31,160
	ctx.r30.s64 = ctx.r31.s64 + 160;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8257efd8
	ctx.lr = 0x8250A500;
	sub_8257EFD8(ctx, base);
	// lbz r11,116(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 116);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8250a520
	if (!cr6.eq) goto loc_8250A520;
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// li r10,4
	ctx.r10.s64 = 4;
	// stb r10,116(r31)
	PPC_STORE_U8(ctx.r31.u32 + 116, ctx.r10.u8);
	// std r11,364(r31)
	PPC_STORE_U64(ctx.r31.u32 + 364, ctx.r11.u64);
loc_8250A520:
	// bl 0x8257efc8
	ctx.lr = 0x8250A524;
	sub_8257EFC8(ctx, base);
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

__attribute__((alias("__imp__sub_8250A53C"))) PPC_WEAK_FUNC(sub_8250A53C);
PPC_FUNC_IMPL(__imp__sub_8250A53C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8250A540"))) PPC_WEAK_FUNC(sub_8250A540);
PPC_FUNC_IMPL(__imp__sub_8250A540) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r11,-19036
	ctx.r3.s64 = ctx.r11.s64 + -19036;
	// b 0x8258f240
	sub_8258F240(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8250A54C"))) PPC_WEAK_FUNC(sub_8250A54C);
PPC_FUNC_IMPL(__imp__sub_8250A54C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8250A550"))) PPC_WEAK_FUNC(sub_8250A550);
PPC_FUNC_IMPL(__imp__sub_8250A550) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x8250A558;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x825891b8
	ctx.lr = 0x8250A56C;
	sub_825891B8(ctx, base);
	// ld r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// li r11,1
	ctx.r11.s64 = 1;
	// cmpld cr6,r10,r31
	cr6.compare<uint64_t>(ctx.r10.u64, ctx.r31.u64, xer);
	// ble cr6,0x8250a580
	if (!cr6.gt) goto loc_8250A580;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8250A580:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8250a604
	if (cr6.eq) goto loc_8250A604;
	// subf r29,r10,r31
	ctx.r29.s64 = ctx.r31.s64 - ctx.r10.s64;
	// bl 0x82589200
	ctx.lr = 0x8250A594;
	sub_82589200(ctx, base);
	// lis r11,15
	ctx.r11.s64 = 983040;
	// tdllei r3,0
	// ori r10,r11,16960
	ctx.r10.u64 = ctx.r11.u64 | 16960;
	// mulld r9,r29,r10
	ctx.r9.s64 = ctx.r29.s64 * ctx.r10.s64;
	// divdu r8,r9,r3
	ctx.r8.u64 = PPCDivide(ctx.r9.u64, ctx.r3.u64);
	// rotlwi r11,r8,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// cmplwi cr6,r11,500
	cr6.compare<uint32_t>(ctx.r11.u32, 500, xer);
	// ble cr6,0x8250a5c8
	if (!cr6.gt) goto loc_8250A5C8;
	// addi r11,r11,-500
	ctx.r11.s64 = ctx.r11.s64 + -500;
	// li r10,1000
	ctx.r10.s64 = 1000;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// divwu r4,r11,r10
	ctx.r4.u32 = PPCDivide(ctx.r11.u32, ctx.r10.u32);
	// bl 0x82583480
	ctx.lr = 0x8250A5C8;
	sub_82583480(ctx, base);
loc_8250A5C8:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x825891b8
	ctx.lr = 0x8250A5D0;
	sub_825891B8(ctx, base);
	// ld r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
loc_8250A5D4:
	// cmpld cr6,r10,r31
	cr6.compare<uint64_t>(ctx.r10.u64, ctx.r31.u64, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x8250a5e4
	if (cr6.lt) goto loc_8250A5E4;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8250A5E4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8250a604
	if (cr6.eq) goto loc_8250A604;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825891b8
	ctx.lr = 0x8250A5F8;
	sub_825891B8(ctx, base);
	// ld r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// std r10,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// b 0x8250a5d4
	goto loc_8250A5D4;
loc_8250A604:
	// std r10,0(r30)
	PPC_STORE_U64(ctx.r30.u32 + 0, ctx.r10.u64);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8250A614"))) PPC_WEAK_FUNC(sub_8250A614);
PPC_FUNC_IMPL(__imp__sub_8250A614) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8250A618"))) PPC_WEAK_FUNC(sub_8250A618);
PPC_FUNC_IMPL(__imp__sub_8250A618) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x8250A620;
	__savegprlr_26(ctx, base);
	// stfd f29,-80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.f29.u64);
	// stfd f30,-72(r1)
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f30.u64);
	// stfd f31,-64(r1)
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,12(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// bl 0x825891b8
	ctx.lr = 0x8250A648;
	sub_825891B8(ctx, base);
	// ld r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// ld r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// std r11,24(r31)
	PPC_STORE_U64(ctx.r31.u32 + 24, ctx.r11.u64);
	// ld r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// subf r30,r10,r9
	ctx.r30.s64 = ctx.r9.s64 - ctx.r10.s64;
	// bl 0x82589210
	ctx.lr = 0x8250A660;
	sub_82589210(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// bl 0x831ce710
	ctx.lr = 0x8250A66C;
	sub_831CE710(ctx, base);
	// fmul f13,f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = ctx.f31.f64 * ctx.f1.f64;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// ld r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// lfs f0,80(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// ld r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// ld r8,88(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// li r27,1
	ctx.r27.s64 = 1;
	// lfs f31,9008(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f31.f64 = double(temp.f32);
	// frsp f30,f13
	ctx.f30.f64 = double(float(ctx.f13.f64));
loc_8250A690:
	// extsw r11,r27
	ctx.r11.s64 = ctx.r27.s32;
	// fcmpu cr6,f0,f31
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// mulld r11,r11,r9
	ctx.r11.s64 = ctx.r11.s64 * ctx.r9.s64;
	// add r29,r10,r11
	ctx.r29.u64 = ctx.r10.u64 + ctx.r11.u64;
	// ble cr6,0x8250a6cc
	if (!cr6.gt) goto loc_8250A6CC;
	// ld r7,56(r31)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r31.u32 + 56);
	// ori r28,r28,1
	ctx.r28.u64 = ctx.r28.u64 | 1;
	// cmpld cr6,r11,r7
	cr6.compare<uint64_t>(ctx.r11.u64, ctx.r7.u64, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x8250a6bc
	if (cr6.lt) goto loc_8250A6BC;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8250A6BC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x8250a6d0
	if (!cr6.eq) goto loc_8250A6D0;
loc_8250A6CC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8250A6D0:
	// clrlwi r7,r28,31
	ctx.r7.u64 = ctx.r28.u32 & 0x1;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmpwi cr6,r7,0
	cr6.compare<int32_t>(ctx.r7.s32, 0, xer);
	// beq cr6,0x8250a6e4
	if (cr6.eq) goto loc_8250A6E4;
	// rlwinm r28,r28,0,0,30
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0xFFFFFFFE;
loc_8250A6E4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8250a6f8
	if (cr6.eq) goto loc_8250A6F8;
	// ld r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 56);
	// add r29,r11,r10
	ctx.r29.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_8250A6F8:
	// subf r30,r10,r29
	ctx.r30.s64 = ctx.r29.s64 - ctx.r10.s64;
	// cmpld cr6,r8,r29
	cr6.compare<uint64_t>(ctx.r8.u64, ctx.r29.u64, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x8250a70c
	if (cr6.lt) goto loc_8250A70C;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8250A70C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8250a728
	if (!cr6.eq) goto loc_8250A728;
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// cmpwi cr6,r27,4
	cr6.compare<int32_t>(ctx.r27.s32, 4, xer);
	// ble cr6,0x8250a690
	if (!cr6.gt) goto loc_8250A690;
	// b 0x8250a7c8
	goto loc_8250A7C8;
loc_8250A728:
	// bl 0x82589210
	ctx.lr = 0x8250A72C;
	sub_82589210(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// fmr f29,f1
	ctx.fpscr.disableFlushMode();
	ctx.f29.f64 = ctx.f1.f64;
	// bl 0x831ce710
	ctx.lr = 0x8250A738;
	sub_831CE710(ctx, base);
	// fmul f0,f29,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f29.f64 * ctx.f1.f64;
	// ld r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// subf r28,r11,r29
	ctx.r28.s64 = ctx.r29.s64 - ctx.r11.s64;
	// frsp f13,f0
	ctx.f13.f64 = double(float(ctx.f0.f64));
	// stfs f13,16(r26)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r26.u32 + 16, temp.u32);
	// bl 0x82589210
	ctx.lr = 0x8250A750;
	sub_82589210(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// fmr f29,f1
	ctx.fpscr.disableFlushMode();
	ctx.f29.f64 = ctx.f1.f64;
	// bl 0x831ce710
	ctx.lr = 0x8250A75C;
	sub_831CE710(ctx, base);
	// fmul f12,f29,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = ctx.f29.f64 * ctx.f1.f64;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// li r9,1000
	ctx.r9.s64 = 1000;
	// lfs f0,-18944(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -18944);
	ctx.f0.f64 = double(temp.f32);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fctiwz f9,f10
	ctx.f9.s64 = (ctx.f10.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f10.f64));
	// stfd f9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f9.u64);
	// lwz r8,84(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// subfic r11,r8,-500
	xer.ca = ctx.r8.u32 <= 4294966796;
	ctx.r11.s64 = -500 - ctx.r8.s64;
	// divw. r4,r11,r9
	ctx.r4.s32 = PPCDivide(ctx.r11.s32, ctx.r9.s32);
	cr0.compare<int32_t>(ctx.r4.s32, 0, xer);
	// beq 0x8250a794
	if (cr0.eq) goto loc_8250A794;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82583480
	ctx.lr = 0x8250A794;
	sub_82583480(ctx, base);
loc_8250A794:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825891b8
	ctx.lr = 0x8250A79C;
	sub_825891B8(ctx, base);
	// ld r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// cmpld cr6,r11,r29
	cr6.compare<uint64_t>(ctx.r11.u64, ctx.r29.u64, xer);
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x8250a7b4
	if (cr6.lt) goto loc_8250A7B4;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8250A7B4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8250a794
	if (!cr6.eq) goto loc_8250A794;
	// std r29,8(r31)
	PPC_STORE_U64(ctx.r31.u32 + 8, ctx.r29.u64);
	// ld r8,88(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
loc_8250A7C8:
	// cmpwi cr6,r27,5
	cr6.compare<int32_t>(ctx.r27.s32, 5, xer);
	// bne cr6,0x8250a80c
	if (!cr6.eq) goto loc_8250A80C;
	// stfs f30,16(r26)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r26.u32 + 16, temp.u32);
	// std r8,8(r31)
	PPC_STORE_U64(ctx.r31.u32 + 8, ctx.r8.u64);
	// ld r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// stfs f31,80(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 80, temp.u32);
	// ld r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// std r11,56(r31)
	PPC_STORE_U64(ctx.r31.u32 + 56, ctx.r11.u64);
	// std r8,32(r31)
	PPC_STORE_U64(ctx.r31.u32 + 32, ctx.r8.u64);
	// std r10,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r10.u64);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f29,-80(r1)
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// lfd f30,-72(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// lfd f31,-64(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_8250A80C:
	// cmpwi cr6,r27,4
	cr6.compare<int32_t>(ctx.r27.s32, 4, xer);
	// bge cr6,0x8250a8d4
	if (!cr6.lt) goto loc_8250A8D4;
	// ld r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 56);
	// li r10,1
	ctx.r10.s64 = 1;
	// cmpld cr6,r30,r11
	cr6.compare<uint64_t>(ctx.r30.u64, ctx.r11.u64, xer);
	// ble cr6,0x8250a828
	if (!cr6.gt) goto loc_8250A828;
	// li r10,0
	ctx.r10.s64 = 0;
loc_8250A828:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// ld r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// beq cr6,0x8250a874
	if (cr6.eq) goto loc_8250A874;
	// ld r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// std r11,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r11.u64);
	// bl 0x82589210
	ctx.lr = 0x8250A848;
	sub_82589210(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f1.f64;
	// bl 0x831ce710
	ctx.lr = 0x8250A854;
	sub_831CE710(ctx, base);
	// fmul f0,f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f30.f64 * ctx.f1.f64;
	// lfs f13,80(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// frsp f12,f0
	ctx.f12.f64 = double(float(ctx.f0.f64));
	// fsubs f11,f13,f12
	ctx.f11.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// fneg f10,f11
	ctx.f10.u64 = ctx.f11.u64 ^ 0x8000000000000000;
	// fsel f9,f10,f31,f11
	ctx.f9.f64 = ctx.f10.f64 >= 0.0 ? ctx.f31.f64 : ctx.f11.f64;
	// stfs f9,80(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 80, temp.u32);
	// b 0x8250a888
	goto loc_8250A888;
loc_8250A874:
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// std r11,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r11.u64);
	// lfs f0,-24912(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -24912);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,80(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 80, temp.u32);
loc_8250A888:
	// lfs f0,80(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bne cr6,0x8250a89c
	if (!cr6.eq) goto loc_8250A89C;
	// std r30,56(r31)
	PPC_STORE_U64(ctx.r31.u32 + 56, ctx.r30.u64);
	// b 0x8250a910
	goto loc_8250A910;
loc_8250A89C:
	// ld r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 56);
	// ld r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// subf r8,r30,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r30.s64;
	// subf r7,r11,r30
	ctx.r7.s64 = ctx.r30.s64 - ctx.r11.s64;
	// sradi r6,r8,63
	xer.ca = (ctx.r8.s64 < 0) & ((ctx.r8.u64 & 0x7FFFFFFFFFFFFFFF) != 0);
	ctx.r6.s64 = ctx.r8.s64 >> 63;
	// and r10,r6,r7
	ctx.r10.u64 = ctx.r6.u64 & ctx.r7.u64;
	// std r9,32(r31)
	PPC_STORE_U64(ctx.r31.u32 + 32, ctx.r9.u64);
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// std r5,56(r31)
	PPC_STORE_U64(ctx.r31.u32 + 56, ctx.r5.u64);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f29,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// lfd f30,-72(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// lfd f31,-64(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_8250A8D4:
	// ld r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// ld r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// std r11,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r11.u64);
	// bl 0x82589210
	ctx.lr = 0x8250A8E8;
	sub_82589210(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f1.f64;
	// bl 0x831ce710
	ctx.lr = 0x8250A8F4;
	sub_831CE710(ctx, base);
	// fmul f0,f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f30.f64 * ctx.f1.f64;
	// lfs f13,80(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// frsp f12,f0
	ctx.f12.f64 = double(float(ctx.f0.f64));
	// fsubs f11,f13,f12
	ctx.f11.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// fneg f10,f11
	ctx.f10.u64 = ctx.f11.u64 ^ 0x8000000000000000;
	// fsel f9,f10,f31,f11
	ctx.f9.f64 = ctx.f10.f64 >= 0.0 ? ctx.f31.f64 : ctx.f11.f64;
	// stfs f9,80(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 80, temp.u32);
loc_8250A910:
	// ld r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// std r11,32(r31)
	PPC_STORE_U64(ctx.r31.u32 + 32, ctx.r11.u64);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f29,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// lfd f30,-72(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// lfd f31,-64(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8250A92C"))) PPC_WEAK_FUNC(sub_8250A92C);
PPC_FUNC_IMPL(__imp__sub_8250A92C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8250A930"))) PPC_WEAK_FUNC(sub_8250A930);
PPC_FUNC_IMPL(__imp__sub_8250A930) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x8250A938;
	__savegprlr_26(ctx, base);
	// stfd f30,-72(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f30.u64);
	// stfd f31,-64(r1)
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,12(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// ld r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// lfs f31,84(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	ctx.f31.f64 = double(temp.f32);
	// ld r29,64(r31)
	ctx.r29.u64 = PPC_LOAD_U64(ctx.r31.u32 + 64);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831ce710
	ctx.lr = 0x8250A960;
	sub_831CE710(ctx, base);
	// frsp f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = double(float(ctx.f1.f64));
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// fmuls f0,f30,f31
	ctx.f0.f64 = double(float(ctx.f30.f64 * ctx.f31.f64));
	// fctidz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// subf r29,r11,r29
	ctx.r29.s64 = ctx.r29.s64 - ctx.r11.s64;
	// bl 0x825891b8
	ctx.lr = 0x8250A980;
	sub_825891B8(ctx, base);
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r26,r11
	ctx.r26.u64 = ctx.r11.u64;
	// subf r28,r29,r11
	ctx.r28.s64 = ctx.r11.s64 - ctx.r29.s64;
	// bl 0x831ce710
	ctx.lr = 0x8250A994;
	sub_831CE710(ctx, base);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lfs f12,88(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// ld r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// tdllei r30,0
	// lfs f0,-19136(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -19136);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f11,f0,f12
	ctx.f11.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// lfd f13,-18936(r8)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r8.u32 + -18936);
	// lfs f0,8976(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 8976);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f10,f30,f0
	ctx.f10.f64 = double(float(ctx.f30.f64 * ctx.f0.f64));
	// fmul f9,f11,f13
	ctx.f9.f64 = ctx.f11.f64 * ctx.f13.f64;
	// fctidz f8,f10
	ctx.f8.s64 = (ctx.f10.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f10.f64));
	// stfd f8,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f8.u64);
	// ld r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// fmul f7,f9,f1
	ctx.f7.f64 = ctx.f9.f64 * ctx.f1.f64;
	// fctidz f6,f7
	ctx.f6.s64 = (ctx.f7.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f7.f64));
	// stfd f6,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f6.u64);
	// ld r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// add r6,r10,r28
	ctx.r6.u64 = ctx.r10.u64 + ctx.r28.u64;
	// divdu r5,r6,r30
	ctx.r5.u64 = PPCDivide(ctx.r6.u64, ctx.r30.u64);
	// mulld r10,r5,r30
	ctx.r10.s64 = ctx.r5.s64 * ctx.r30.s64;
	// add r29,r10,r29
	ctx.r29.u64 = ctx.r10.u64 + ctx.r29.u64;
	// cmpld cr6,r11,r29
	cr6.compare<uint64_t>(ctx.r11.u64, ctx.r29.u64, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x8250aa04
	if (cr6.lt) goto loc_8250AA04;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8250AA04:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8250aa1c
	if (cr6.eq) goto loc_8250AA1C;
	// add r29,r29,r30
	ctx.r29.u64 = ctx.r29.u64 + ctx.r30.u64;
loc_8250AA1C:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8250a550
	ctx.lr = 0x8250AA28;
	sub_8250A550(ctx, base);
	// ld r7,8(r31)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// rldicl r10,r30,63,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u64, 63) & 0x7FFFFFFFFFFFFFFF;
	// subf r28,r7,r29
	ctx.r28.s64 = ctx.r29.s64 - ctx.r7.s64;
	// neg r8,r10
	ctx.r8.s64 = -ctx.r10.s64;
	// add r6,r10,r28
	ctx.r6.u64 = ctx.r10.u64 + ctx.r28.u64;
	// tdllei r30,0
	// divdu r11,r6,r30
	ctx.r11.u64 = PPCDivide(ctx.r6.u64, ctx.r30.u64);
	// addi r5,r11,-1
	ctx.r5.s64 = ctx.r11.s64 + -1;
	// sradi r9,r5,63
	xer.ca = (ctx.r5.s64 < 0) & ((ctx.r5.u64 & 0x7FFFFFFFFFFFFFFF) != 0);
	ctx.r9.s64 = ctx.r5.s64 >> 63;
	// subfic r4,r11,1
	xer.ca = ctx.r11.u32 <= 1;
	ctx.r4.s64 = 1 - ctx.r11.s64;
	// and r9,r4,r9
	ctx.r9.u64 = ctx.r4.u64 & ctx.r9.u64;
	// add r3,r9,r11
	ctx.r3.u64 = ctx.r9.u64 + ctx.r11.u64;
	// mulld r9,r3,r30
	ctx.r9.s64 = ctx.r3.s64 * ctx.r30.s64;
	// subf r11,r9,r28
	ctx.r11.s64 = ctx.r28.s64 - ctx.r9.s64;
	// cmpd cr6,r8,r11
	cr6.compare<int64_t>(ctx.r8.s64, ctx.r11.s64, xer);
	// bge cr6,0x8250aa80
	if (!cr6.lt) goto loc_8250AA80;
	// cmpd cr6,r11,r10
	cr6.compare<int64_t>(ctx.r11.s64, ctx.r10.s64, xer);
	// bge cr6,0x8250aa80
	if (!cr6.lt) goto loc_8250AA80;
	// ld r10,72(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 72);
	// mr r28,r9
	ctx.r28.u64 = ctx.r9.u64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// std r11,72(r31)
	PPC_STORE_U64(ctx.r31.u32 + 72, ctx.r11.u64);
loc_8250AA80:
	// ld r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 32);
	// rldicr r9,r30,2,61
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r30.u64, 2) & 0xFFFFFFFFFFFFFFFC;
	// tdllei r30,0
	// subf r8,r11,r29
	ctx.r8.s64 = ctx.r29.s64 - ctx.r11.s64;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// divdu r7,r8,r30
	ctx.r7.u64 = PPCDivide(ctx.r8.u64, ctx.r30.u64);
	// mulld r11,r7,r30
	ctx.r11.s64 = ctx.r7.s64 * ctx.r30.s64;
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + ctx.r11.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// subf r5,r6,r29
	ctx.r5.s64 = ctx.r29.s64 - ctx.r6.s64;
	// std r6,32(r31)
	PPC_STORE_U64(ctx.r31.u32 + 32, ctx.r6.u64);
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// cmpld cr6,r5,r9
	cr6.compare<uint64_t>(ctx.r5.u64, ctx.r9.u64, xer);
	// blt cr6,0x8250aabc
	if (cr6.lt) goto loc_8250AABC;
	// li r10,0
	ctx.r10.s64 = 0;
loc_8250AABC:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8250aaf4
	if (cr6.eq) goto loc_8250AAF4;
	// subf r10,r11,r29
	ctx.r10.s64 = ctx.r29.s64 - ctx.r11.s64;
	// subf r9,r11,r29
	ctx.r9.s64 = ctx.r29.s64 - ctx.r11.s64;
	// divdu r8,r10,r30
	ctx.r8.u64 = PPCDivide(ctx.r10.u64, ctx.r30.u64);
	// tdllei r30,0
	// mulld r7,r8,r30
	ctx.r7.s64 = ctx.r8.s64 * ctx.r30.s64;
	// subf r11,r7,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r7.s64;
	// cmpd cr6,r11,r9
	cr6.compare<int64_t>(ctx.r11.s64, ctx.r9.s64, xer);
	// bge cr6,0x8250aaf8
	if (!cr6.lt) goto loc_8250AAF8;
	// subf r11,r11,r29
	ctx.r11.s64 = ctx.r29.s64 - ctx.r11.s64;
	// std r11,32(r31)
	PPC_STORE_U64(ctx.r31.u32 + 32, ctx.r11.u64);
	// b 0x8250aaf8
	goto loc_8250AAF8;
loc_8250AAF4:
	// std r29,32(r31)
	PPC_STORE_U64(ctx.r31.u32 + 32, ctx.r29.u64);
loc_8250AAF8:
	// bl 0x82589210
	ctx.lr = 0x8250AAFC;
	sub_82589210(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// bl 0x831ce710
	ctx.lr = 0x8250AB08;
	sub_831CE710(ctx, base);
	// fmul f13,f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = ctx.f31.f64 * ctx.f1.f64;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// add r11,r29,r30
	ctx.r11.u64 = ctx.r29.u64 + ctx.r30.u64;
	// lfs f0,9008(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// stfs f12,16(r27)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r27.u32 + 16, temp.u32);
	// stfs f0,80(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 80, temp.u32);
	// std r26,24(r31)
	PPC_STORE_U64(ctx.r31.u32 + 24, ctx.r26.u64);
	// std r29,8(r31)
	PPC_STORE_U64(ctx.r31.u32 + 8, ctx.r29.u64);
	// std r11,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r11.u64);
	// std r30,56(r31)
	PPC_STORE_U64(ctx.r31.u32 + 56, ctx.r30.u64);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f30,-72(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// lfd f31,-64(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8250AB44"))) PPC_WEAK_FUNC(sub_8250AB44);
PPC_FUNC_IMPL(__imp__sub_8250AB44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8250AB48"))) PPC_WEAK_FUNC(sub_8250AB48);
PPC_FUNC_IMPL(__imp__sub_8250AB48) {
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
	// lis r10,0
	ctx.r10.s64 = 0;
	// lis r11,-16676
	ctx.r11.s64 = -1092878336;
	// ori r8,r10,42611
	ctx.r8.u64 = ctx.r10.u64 | 42611;
	// ori r9,r11,65398
	ctx.r9.u64 = ctx.r11.u64 | 65398;
	// lis r7,-31780
	ctx.r7.s64 = -2082734080;
	// rldimi r9,r8,32,0
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r8.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r9.u64 & 0xFFFFFFFF);
	// lis r10,0
	ctx.r10.s64 = 0;
	// cmpld cr6,r3,r9
	cr6.compare<uint64_t>(ctx.r3.u64, ctx.r9.u64, xer);
	// std r3,6496(r7)
	PPC_STORE_U64(ctx.r7.u32 + 6496, ctx.r3.u64);
	// bgt cr6,0x8250ac4c
	if (cr6.gt) goto loc_8250AC4C;
	// lis r11,-16676
	ctx.r11.s64 = -1092878336;
	// ori r8,r10,42611
	ctx.r8.u64 = ctx.r10.u64 | 42611;
	// ori r9,r11,65398
	ctx.r9.u64 = ctx.r11.u64 | 65398;
	// rldimi r9,r8,32,0
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r8.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r9.u64 & 0xFFFFFFFF);
	// cmpld cr6,r3,r9
	cr6.compare<uint64_t>(ctx.r3.u64, ctx.r9.u64, xer);
	// beq cr6,0x8250ac80
	if (cr6.eq) goto loc_8250AC80;
	// lis r11,14956
	ctx.r11.s64 = 980156416;
	// li r10,8679
	ctx.r10.s64 = 8679;
	// ori r9,r11,30231
	ctx.r9.u64 = ctx.r11.u64 | 30231;
	// rldimi r9,r10,32,0
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r9.u64 & 0xFFFFFFFF);
	// cmpld cr6,r3,r9
	cr6.compare<uint64_t>(ctx.r3.u64, ctx.r9.u64, xer);
	// beq cr6,0x8250ac2c
	if (cr6.eq) goto loc_8250AC2C;
	// lis r11,-12707
	ctx.r11.s64 = -832765952;
	// li r10,31103
	ctx.r10.s64 = 31103;
	// ori r9,r11,62968
	ctx.r9.u64 = ctx.r11.u64 | 62968;
	// rldimi r9,r10,32,0
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r9.u64 & 0xFFFFFFFF);
	// cmpld cr6,r3,r9
	cr6.compare<uint64_t>(ctx.r3.u64, ctx.r9.u64, xer);
	// beq cr6,0x8250ac00
	if (cr6.eq) goto loc_8250AC00;
	// lis r11,12706
	ctx.r11.s64 = 832700416;
	// lis r10,0
	ctx.r10.s64 = 0;
	// ori r9,r11,54251
	ctx.r9.u64 = ctx.r11.u64 | 54251;
	// ori r8,r10,39759
	ctx.r8.u64 = ctx.r10.u64 | 39759;
	// rldimi r9,r8,32,0
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r8.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r9.u64 & 0xFFFFFFFF);
	// cmpld cr6,r3,r9
	cr6.compare<uint64_t>(ctx.r3.u64, ctx.r9.u64, xer);
	// bne cr6,0x8250acc4
	if (!cr6.eq) goto loc_8250ACC4;
	// bl 0x82490178
	ctx.lr = 0x8250ABE8;
	sub_82490178(ctx, base);
	// lis r11,-32175
	ctx.r11.s64 = -2108620800;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r10,-18976
	ctx.r3.s64 = ctx.r10.s64 + -18976;
	// addi r4,r11,-22224
	ctx.r4.s64 = ctx.r11.s64 + -22224;
	// b 0x8250acb4
	goto loc_8250ACB4;
loc_8250AC00:
	// bl 0x82490178
	ctx.lr = 0x8250AC04;
	sub_82490178(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-18976
	ctx.r11.s64 = ctx.r11.s64 + -18976;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-48
	ctx.r3.s64 = ctx.r11.s64 + -48;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8258f278
	ctx.lr = 0x8250AC20;
	sub_8258F278(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,96(r31)
	PPC_STORE_U8(ctx.r31.u32 + 96, ctx.r10.u8);
	// b 0x8250acc4
	goto loc_8250ACC4;
loc_8250AC2C:
	// bl 0x82490178
	ctx.lr = 0x8250AC30;
	sub_82490178(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32175
	ctx.r10.s64 = -2108620800;
	// addi r11,r11,-18976
	ctx.r11.s64 = ctx.r11.s64 + -18976;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,-36
	ctx.r3.s64 = ctx.r11.s64 + -36;
	// addi r4,r10,-23016
	ctx.r4.s64 = ctx.r10.s64 + -23016;
	// b 0x8250acb4
	goto loc_8250ACB4;
loc_8250AC4C:
	// lis r11,9745
	ctx.r11.s64 = 638648320;
	// ori r8,r10,51595
	ctx.r8.u64 = ctx.r10.u64 | 51595;
	// ori r9,r11,57002
	ctx.r9.u64 = ctx.r11.u64 | 57002;
	// rldimi r9,r8,32,0
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r8.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r9.u64 & 0xFFFFFFFF);
	// cmpld cr6,r3,r9
	cr6.compare<uint64_t>(ctx.r3.u64, ctx.r9.u64, xer);
	// beq cr6,0x8250ac98
	if (cr6.eq) goto loc_8250AC98;
	// lis r11,-32393
	ctx.r11.s64 = -2122907648;
	// lis r10,0
	ctx.r10.s64 = 0;
	// ori r9,r11,22887
	ctx.r9.u64 = ctx.r11.u64 | 22887;
	// ori r8,r10,58312
	ctx.r8.u64 = ctx.r10.u64 | 58312;
	// rldimi r9,r8,32,0
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r8.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r9.u64 & 0xFFFFFFFF);
	// cmpld cr6,r3,r9
	cr6.compare<uint64_t>(ctx.r3.u64, ctx.r9.u64, xer);
	// bne cr6,0x8250acc4
	if (!cr6.eq) goto loc_8250ACC4;
loc_8250AC80:
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
loc_8250AC98:
	// bl 0x82490178
	ctx.lr = 0x8250AC9C;
	sub_82490178(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32175
	ctx.r10.s64 = -2108620800;
	// addi r11,r11,-18976
	ctx.r11.s64 = ctx.r11.s64 + -18976;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,-24
	ctx.r3.s64 = ctx.r11.s64 + -24;
	// addi r4,r10,-23888
	ctx.r4.s64 = ctx.r10.s64 + -23888;
loc_8250ACB4:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x8258f278
	ctx.lr = 0x8250ACBC;
	sub_8258F278(ctx, base);
	// li r9,1
	ctx.r9.s64 = 1;
	// stb r9,96(r31)
	PPC_STORE_U8(ctx.r31.u32 + 96, ctx.r9.u8);
loc_8250ACC4:
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

__attribute__((alias("__imp__sub_8250ACDC"))) PPC_WEAK_FUNC(sub_8250ACDC);
PPC_FUNC_IMPL(__imp__sub_8250ACDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8250ACE0"))) PPC_WEAK_FUNC(sub_8250ACE0);
PPC_FUNC_IMPL(__imp__sub_8250ACE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82488f38
	ctx.lr = 0x8250AD00;
	sub_82488F38(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82488a60
	ctx.lr = 0x8250AD0C;
	sub_82488A60(ctx, base);
	// ld r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x8250ab48
	ctx.lr = 0x8250AD14;
	sub_8250AB48(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8250AD24"))) PPC_WEAK_FUNC(sub_8250AD24);
PPC_FUNC_IMPL(__imp__sub_8250AD24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8250AD28"))) PPC_WEAK_FUNC(sub_8250AD28);
PPC_FUNC_IMPL(__imp__sub_8250AD28) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x8250AD30;
	__savegprlr_28(ctx, base);
	// stfd f30,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f30.u64);
	// stfd f31,-48(r1)
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r3,172
	ctx.r3.s64 = ctx.r3.s64 + 172;
	// bl 0x8257f080
	ctx.lr = 0x8250AD48;
	sub_8257F080(ctx, base);
	// li r30,1
	ctx.r30.s64 = 1;
	// addi r29,r31,160
	ctx.r29.s64 = ctx.r31.s64 + 160;
	// stw r30,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r30.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8257efd8
	ctx.lr = 0x8250AD5C;
	sub_8257EFD8(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r10,r11,-19136
	ctx.r10.s64 = ctx.r11.s64 + -19136;
	// lfs f31,-19136(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -19136);
	ctx.f31.f64 = double(temp.f32);
	// lbz r11,116(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 116);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8250ae6c
	if (cr6.eq) goto loc_8250AE6C;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// bgt cr6,0x8250ae68
	if (cr6.gt) goto loc_8250AE68;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x8250ade0
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8250ADE0;
	// bdzf 4*cr6+eq,0x8250ae14
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8250AE14;
	// bne cr6,0x8250ae1c
	if (!cr6.eq) goto loc_8250AE1C;
	// lwz r11,360(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 360);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8250adc8
	if (!cr6.eq) goto loc_8250ADC8;
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x82416260
	ctx.lr = 0x8250ADAC;
	sub_82416260(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8250adc0
	if (cr6.eq) goto loc_8250ADC0;
	// lwz r4,364(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 364);
	// bl 0x8252dfa8
	ctx.lr = 0x8250ADBC;
	sub_8252DFA8(ctx, base);
	// b 0x8250adc4
	goto loc_8250ADC4;
loc_8250ADC0:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
loc_8250ADC4:
	// stw r3,360(r31)
	PPC_STORE_U32(ctx.r31.u32 + 360, ctx.r3.u32);
loc_8250ADC8:
	// lwz r3,360(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 360);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8250ae68
	if (cr6.eq) goto loc_8250AE68;
	// lwz r4,364(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 364);
	// bl 0x8252dea0
	ctx.lr = 0x8250ADDC;
	sub_8252DEA0(ctx, base);
	// b 0x8250ae68
	goto loc_8250AE68;
loc_8250ADE0:
	// lwz r3,360(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 360);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8250ae68
	if (cr6.eq) goto loc_8250AE68;
	// bl 0x8252dcb0
	ctx.lr = 0x8250ADF0;
	sub_8252DCB0(ctx, base);
	// lwz r30,360(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 360);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x8250ae0c
	if (cr6.eq) goto loc_8250AE0C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8252de10
	ctx.lr = 0x8250AE04;
	sub_8252DE10(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82416268
	ctx.lr = 0x8250AE0C;
	sub_82416268(ctx, base);
loc_8250AE0C:
	// stw r28,360(r31)
	PPC_STORE_U32(ctx.r31.u32 + 360, ctx.r28.u32);
	// b 0x8250ae68
	goto loc_8250AE68;
loc_8250AE14:
	// stb r30,117(r31)
	PPC_STORE_U8(ctx.r31.u32 + 117, ctx.r30.u8);
	// b 0x8250ae68
	goto loc_8250AE68;
loc_8250AE1C:
	// lwz r11,364(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 364);
	// lfs f13,104(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,368(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 368);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
	// beq cr6,0x8250ae68
	if (cr6.eq) goto loc_8250AE68;
	// addi r3,r10,64
	ctx.r3.s64 = ctx.r10.s64 + 64;
	// fdivs f1,f31,f0
	ctx.f1.f64 = double(float(ctx.f31.f64 / ctx.f0.f64));
	// bl 0x8258f390
	ctx.lr = 0x8250AE40;
	sub_8258F390(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8250ae68
	if (cr6.eq) goto loc_8250AE68;
	// lfs f1,368(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 368);
	ctx.f1.f64 = double(temp.f32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stfs f1,104(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 104, temp.u32);
	// bl 0x824e2f78
	ctx.lr = 0x8250AE5C;
	sub_824E2F78(ctx, base);
	// ld r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// std r11,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r11.u64);
	// std r11,56(r31)
	PPC_STORE_U64(ctx.r31.u32 + 56, ctx.r11.u64);
loc_8250AE68:
	// stb r28,116(r31)
	PPC_STORE_U8(ctx.r31.u32 + 116, ctx.r28.u8);
loc_8250AE6C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8257efc8
	ctx.lr = 0x8250AE74;
	sub_8257EFC8(ctx, base);
	// lwz r11,312(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 312);
	// addi r30,r31,312
	ctx.r30.s64 = ctx.r31.s64 + 312;
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// stw r3,312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 312, ctx.r3.u32);
	// bl 0x83102db0
	ctx.lr = 0x8250AE88;
	sub_83102DB0(ctx, base);
	// lbz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 96);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8250aea4
	if (cr6.eq) goto loc_8250AEA4;
	// ld r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 32);
	// ld r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// std r10,344(r31)
	PPC_STORE_U64(ctx.r31.u32 + 344, ctx.r10.u64);
	// b 0x8250aeb4
	goto loc_8250AEB4;
loc_8250AEA4:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x825891b8
	ctx.lr = 0x8250AEAC;
	sub_825891B8(ctx, base);
	// ld r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// std r11,344(r31)
	PPC_STORE_U64(ctx.r31.u32 + 344, ctx.r11.u64);
loc_8250AEB4:
	// std r11,336(r31)
	PPC_STORE_U64(ctx.r31.u32 + 336, ctx.r11.u64);
	// ld r11,352(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 352);
	// cmpldi cr6,r11,0
	cr6.compare<uint64_t>(ctx.r11.u64, 0, xer);
	// bne cr6,0x8250aecc
	if (!cr6.eq) goto loc_8250AECC;
	// ld r11,336(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 336);
	// std r11,352(r31)
	PPC_STORE_U64(ctx.r31.u32 + 352, ctx.r11.u64);
loc_8250AECC:
	// addi r29,r31,152
	ctx.r29.s64 = ctx.r31.s64 + 152;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8257efd8
	ctx.lr = 0x8250AED8;
	sub_8257EFD8(ctx, base);
	// lbz r11,120(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 120);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8250b010
	if (!cr6.eq) goto loc_8250B010;
	// lbz r11,117(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 117);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8250af38
	if (cr6.eq) goto loc_8250AF38;
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x8250af18
	if (!cr6.eq) goto loc_8250AF18;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,104(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,128(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 128, temp.u32);
	// stb r28,117(r31)
	PPC_STORE_U8(ctx.r31.u32 + 117, ctx.r28.u8);
	// lfs f0,9008(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,124(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 124, temp.u32);
	// b 0x8250afd4
	goto loc_8250AFD4;
loc_8250AF18:
	// lfs f1,104(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8250a250
	ctx.lr = 0x8250AF20;
	sub_8250A250(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f1,128(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 128, temp.u32);
	// stb r28,117(r31)
	PPC_STORE_U8(ctx.r31.u32 + 117, ctx.r28.u8);
	// lfs f0,9008(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,124(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 124, temp.u32);
	// b 0x8250afd4
	goto loc_8250AFD4;
loc_8250AF38:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,100(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// cmpwi cr6,r10,1
	cr6.compare<int32_t>(ctx.r10.s32, 1, xer);
	// stw r11,316(r31)
	PPC_STORE_U32(ctx.r31.u32 + 316, ctx.r11.u32);
	// bne cr6,0x8250af58
	if (!cr6.eq) goto loc_8250AF58;
	// lfs f0,104(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,124(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 124, temp.u32);
	// b 0x8250af64
	goto loc_8250AF64;
loc_8250AF58:
	// lfs f1,104(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8250a250
	ctx.lr = 0x8250AF60;
	sub_8250A250(ctx, base);
	// stfs f1,124(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 124, temp.u32);
loc_8250AF64:
	// lbz r11,119(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 119);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8250af90
	if (cr6.eq) goto loc_8250AF90;
	// lfs f0,124(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,108(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f11,112(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	ctx.f11.f64 = double(temp.f32);
	// fsel f10,f12,f0,f13
	ctx.f10.f64 = ctx.f12.f64 >= 0.0 ? ctx.f0.f64 : ctx.f13.f64;
	// fsubs f9,f11,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 - ctx.f10.f64));
	// fsel f8,f9,f10,f11
	ctx.f8.f64 = ctx.f9.f64 >= 0.0 ? ctx.f10.f64 : ctx.f11.f64;
	// stfs f8,124(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 124, temp.u32);
loc_8250AF90:
	// lbz r11,118(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 118);
	// lfs f0,124(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,128(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 128, temp.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8250afd4
	if (cr6.eq) goto loc_8250AFD4;
	// lfs f0,324(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 324);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,328(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 328);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f30,f0,f13
	ctx.f30.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// bl 0x82490188
	ctx.lr = 0x8250AFB4;
	sub_82490188(ctx, base);
	// stfd f30,88(r3)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r3.u32 + 88, ctx.f30.u64);
	// bl 0x82490188
	ctx.lr = 0x8250AFBC;
	sub_82490188(ctx, base);
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// addi r3,r3,112
	ctx.r3.s64 = ctx.r3.s64 + 112;
	// addi r4,r11,23728
	ctx.r4.s64 = ctx.r11.s64 + 23728;
	// bl 0x82573d70
	ctx.lr = 0x8250AFCC;
	sub_82573D70(ctx, base);
	// stfs f31,328(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 328, temp.u32);
	// stb r28,118(r31)
	PPC_STORE_U8(ctx.r31.u32 + 118, ctx.r28.u8);
loc_8250AFD4:
	// lwz r3,360(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 360);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8250b080
	if (cr6.eq) goto loc_8250B080;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lfs f0,128(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	ctx.f0.f64 = double(temp.f32);
	// ld r10,336(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 336);
	// lfs f13,124(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// stfs f13,104(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// std r10,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r10.u64);
	// bl 0x8252df60
	ctx.lr = 0x8250B00C;
	sub_8252DF60(ctx, base);
	// b 0x8250b080
	goto loc_8250B080;
loc_8250B010:
	// ld r11,144(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 144);
	// lfs f0,132(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	ctx.f0.f64 = double(temp.f32);
	// lwz r10,320(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 320);
	// lfs f13,136(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,124(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 124, temp.u32);
	// stfs f13,128(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 128, temp.u32);
	// lfs f1,104(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	ctx.f1.f64 = double(temp.f32);
	// std r11,336(r31)
	PPC_STORE_U64(ctx.r31.u32 + 336, ctx.r11.u64);
	// stw r10,316(r31)
	PPC_STORE_U32(ctx.r31.u32 + 316, ctx.r10.u32);
	// std r11,344(r31)
	PPC_STORE_U64(ctx.r31.u32 + 344, ctx.r11.u64);
	// bl 0x8250a250
	ctx.lr = 0x8250B03C;
	sub_8250A250(ctx, base);
	// lfs f12,128(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f0,f12,f1
	ctx.f0.f64 = double(float(ctx.f12.f64 - ctx.f1.f64));
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f13,9008(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 9008);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x8250b07c
	if (!cr6.gt) goto loc_8250B07C;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r10,1000
	ctx.r10.s64 = 1000;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lfs f13,-18928(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -18928);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// fctiwz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f13.u64);
	// lwz r9,92(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// divw r4,r9,r10
	ctx.r4.s32 = PPCDivide(ctx.r9.s32, ctx.r10.s32);
	// bl 0x82583480
	ctx.lr = 0x8250B07C;
	sub_82583480(ctx, base);
loc_8250B07C:
	// stb r28,120(r31)
	PPC_STORE_U8(ctx.r31.u32 + 120, ctx.r28.u8);
loc_8250B080:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8257efc8
	ctx.lr = 0x8250B088;
	sub_8257EFC8(ctx, base);
	// lis r10,-31767
	ctx.r10.s64 = -2081882112;
	// lis r9,-31767
	ctx.r9.s64 = -2081882112;
	// addi r11,r31,316
	ctx.r11.s64 = ctx.r31.s64 + 316;
	// li r4,7
	ctx.r4.s64 = 7;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r30,23720(r10)
	PPC_STORE_U32(ctx.r10.u32 + 23720, ctx.r30.u32);
	// stw r11,23724(r9)
	PPC_STORE_U32(ctx.r9.u32 + 23724, ctx.r11.u32);
	// lwz r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// bl 0x8258f5e8
	ctx.lr = 0x8250B0B0;
	sub_8258F5E8(ctx, base);
	// bl 0x82522b78
	ctx.lr = 0x8250B0B4;
	sub_82522B78(ctx, base);
	// ld r30,344(r31)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r31.u32 + 344);
	// lfs f31,124(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	ctx.f31.f64 = double(temp.f32);
	// bl 0x82490188
	ctx.lr = 0x8250B0C0;
	sub_82490188(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82509a38
	ctx.lr = 0x8250B0CC;
	sub_82509A38(ctx, base);
	// bl 0x824f6ab0
	ctx.lr = 0x8250B0D0;
	sub_824F6AB0(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f30,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f31,-48(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8250B0E0"))) PPC_WEAK_FUNC(sub_8250B0E0);
PPC_FUNC_IMPL(__imp__sub_8250B0E0) {
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
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824894a0
	ctx.lr = 0x8250B0F8;
	sub_824894A0(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32175
	ctx.r10.s64 = -2108620800;
	// lwz r31,4(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r4,r11,-19088
	ctx.r4.s64 = ctx.r11.s64 + -19088;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r4,-24
	ctx.r9.s64 = ctx.r4.s64 + -24;
	// addi r8,r10,-21280
	ctx.r8.s64 = ctx.r10.s64 + -21280;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// bl 0x82489568
	ctx.lr = 0x8250B130;
	sub_82489568(ctx, base);
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253aa70
	ctx.lr = 0x8250B13C;
	sub_8253AA70(ctx, base);
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

__attribute__((alias("__imp__sub_8250B150"))) PPC_WEAK_FUNC(sub_8250B150);
PPC_FUNC_IMPL(__imp__sub_8250B150) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x8250B158;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,32(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// addi r30,r3,24
	ctx.r30.s64 = ctx.r3.s64 + 24;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, xer);
	// beq cr6,0x8250b19c
	if (cr6.eq) goto loc_8250B19C;
loc_8250B170:
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8250b190
	if (cr6.eq) goto loc_8250B190;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8250B190;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8250B190:
	// lwz r31,8(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, xer);
	// bne cr6,0x8250b170
	if (!cr6.eq) goto loc_8250B170;
loc_8250B19C:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8247e950
	ctx.lr = 0x8250B1A8;
	sub_8247E950(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8250B1B0"))) PPC_WEAK_FUNC(sub_8250B1B0);
PPC_FUNC_IMPL(__imp__sub_8250B1B0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x8250B1B8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r30,r3,184
	ctx.r30.s64 = ctx.r3.s64 + 184;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8250b150
	ctx.lr = 0x8250B1CC;
	sub_8250B150(ctx, base);
	// addi r29,r31,248
	ctx.r29.s64 = ctx.r31.s64 + 248;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8250b150
	ctx.lr = 0x8250B1D8;
	sub_8250B150(ctx, base);
	// lwz r28,360(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 360);
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// beq cr6,0x8250b1f4
	if (cr6.eq) goto loc_8250B1F4;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8252de10
	ctx.lr = 0x8250B1EC;
	sub_8252DE10(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82416268
	ctx.lr = 0x8250B1F4;
	sub_82416268(ctx, base);
loc_8250B1F4:
	// addi r3,r31,376
	ctx.r3.s64 = ctx.r31.s64 + 376;
	// bl 0x83328188
	ctx.lr = 0x8250B1FC;
	sub_83328188(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8247f2e8
	ctx.lr = 0x8250B204;
	sub_8247F2E8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8247f2e8
	ctx.lr = 0x8250B20C;
	sub_8247F2E8(ctx, base);
	// addi r3,r31,172
	ctx.r3.s64 = ctx.r31.s64 + 172;
	// bl 0x83102db0
	ctx.lr = 0x8250B214;
	sub_83102DB0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8250B21C"))) PPC_WEAK_FUNC(sub_8250B21C);
PPC_FUNC_IMPL(__imp__sub_8250B21C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8250B220"))) PPC_WEAK_FUNC(sub_8250B220);
PPC_FUNC_IMPL(__imp__sub_8250B220) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x8250B228;
	__savegprlr_26(ctx, base);
	// stfd f30,-72(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f30.u64);
	// stfd f31,-64(r1)
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	ctx.r30.s64 = 0;
	// fmr f30,f1
	ctx.f30.f64 = ctx.f1.f64;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// std r30,0(r3)
	PPC_STORE_U64(ctx.r3.u32 + 0, ctx.r30.u64);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// std r30,8(r3)
	PPC_STORE_U64(ctx.r3.u32 + 8, ctx.r30.u64);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// std r30,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r30.u64);
	// addi r27,r11,-19136
	ctx.r27.s64 = ctx.r11.s64 + -19136;
	// std r30,24(r3)
	PPC_STORE_U64(ctx.r3.u32 + 24, ctx.r30.u64);
	// std r30,32(r3)
	PPC_STORE_U64(ctx.r3.u32 + 32, ctx.r30.u64);
	// lfs f31,-19136(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -19136);
	ctx.f31.f64 = double(temp.f32);
	// std r30,40(r3)
	PPC_STORE_U64(ctx.r3.u32 + 40, ctx.r30.u64);
	// lfs f0,9008(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// std r30,48(r3)
	PPC_STORE_U64(ctx.r3.u32 + 48, ctx.r30.u64);
	// fdivs f13,f31,f1
	ctx.f13.f64 = double(float(ctx.f31.f64 / ctx.f1.f64));
	// std r30,56(r3)
	PPC_STORE_U64(ctx.r3.u32 + 56, ctx.r30.u64);
	// fcmpu cr6,f2,f0
	cr6.compare(ctx.f2.f64, ctx.f0.f64);
	// std r30,64(r3)
	PPC_STORE_U64(ctx.r3.u32 + 64, ctx.r30.u64);
	// stfs f13,104(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 104, temp.u32);
	// stb r30,96(r3)
	PPC_STORE_U8(ctx.r3.u32 + 96, ctx.r30.u8);
	// stw r4,100(r3)
	PPC_STORE_U32(ctx.r3.u32 + 100, ctx.r4.u32);
	// ble cr6,0x8250b298
	if (!cr6.gt) goto loc_8250B298;
	// fdivs f13,f31,f2
	ctx.f13.f64 = double(float(ctx.f31.f64 / ctx.f2.f64));
	// b 0x8250b29c
	goto loc_8250B29C;
loc_8250B298:
	// fmr f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = ctx.f0.f64;
loc_8250B29C:
	// stfs f13,108(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 108, temp.u32);
	// fcmpu cr6,f3,f0
	cr6.compare(ctx.f3.f64, ctx.f0.f64);
	// ble cr6,0x8250b2b0
	if (!cr6.gt) goto loc_8250B2B0;
	// fdivs f13,f31,f3
	ctx.f13.f64 = double(float(ctx.f31.f64 / ctx.f3.f64));
	// b 0x8250b2b4
	goto loc_8250B2B4;
loc_8250B2B0:
	// fmr f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = ctx.f0.f64;
loc_8250B2B4:
	// stfs f13,112(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 112, temp.u32);
	// stb r30,116(r31)
	PPC_STORE_U8(ctx.r31.u32 + 116, ctx.r30.u8);
	// stfs f0,124(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 124, temp.u32);
	// stb r30,117(r31)
	PPC_STORE_U8(ctx.r31.u32 + 117, ctx.r30.u8);
	// stfs f0,128(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 128, temp.u32);
	// stb r30,118(r31)
	PPC_STORE_U8(ctx.r31.u32 + 118, ctx.r30.u8);
	// stfs f0,132(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 132, temp.u32);
	// stb r30,120(r31)
	PPC_STORE_U8(ctx.r31.u32 + 120, ctx.r30.u8);
	// stfs f0,136(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 136, temp.u32);
	// std r30,144(r31)
	PPC_STORE_U64(ctx.r31.u32 + 144, ctx.r30.u64);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,152
	ctx.r3.s64 = ctx.r31.s64 + 152;
	// bl 0x8257efb8
	ctx.lr = 0x8250B2E8;
	sub_8257EFB8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,160
	ctx.r3.s64 = ctx.r31.s64 + 160;
	// bl 0x8257efb8
	ctx.lr = 0x8250B2F4;
	sub_8257EFB8(ctx, base);
	// stw r30,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r30.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r31,172
	ctx.r3.s64 = ctx.r31.s64 + 172;
	// bl 0x831f3ad8
	ctx.lr = 0x8250B304;
	sub_831F3AD8(ctx, base);
	// addi r29,r31,184
	ctx.r29.s64 = ctx.r31.s64 + 184;
	// lis r7,2
	ctx.r7.s64 = 131072;
	// li r6,0
	ctx.r6.s64 = 0;
	// ori r7,r7,1
	ctx.r7.u64 = ctx.r7.u64 | 1;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8257ec20
	ctx.lr = 0x8250B324;
	sub_8257EC20(ctx, base);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// addi r11,r29,24
	ctx.r11.s64 = ctx.r29.s64 + 24;
	// addi r10,r29,40
	ctx.r10.s64 = ctx.r29.s64 + 40;
	// addi r26,r9,20684
	ctx.r26.s64 = ctx.r9.s64 + 20684;
	// stw r11,208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 208, ctx.r11.u32);
	// li r28,32
	ctx.r28.s64 = 32;
	// stw r11,216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 216, ctx.r11.u32);
	// stw r10,224(r31)
	PPC_STORE_U32(ctx.r31.u32 + 224, ctx.r10.u32);
	// addi r29,r31,248
	ctx.r29.s64 = ctx.r31.s64 + 248;
	// stw r10,232(r31)
	PPC_STORE_U32(ctx.r31.u32 + 232, ctx.r10.u32);
	// lis r7,2
	ctx.r7.s64 = 131072;
	// stw r30,240(r31)
	PPC_STORE_U32(ctx.r31.u32 + 240, ctx.r30.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r28,244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 244, ctx.r28.u32);
	// ori r7,r7,1
	ctx.r7.u64 = ctx.r7.u64 | 1;
	// stw r26,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r26.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8257ec20
	ctx.lr = 0x8250B374;
	sub_8257EC20(ctx, base);
	// addi r10,r29,24
	ctx.r10.s64 = ctx.r29.s64 + 24;
	// addi r9,r29,40
	ctx.r9.s64 = ctx.r29.s64 + 40;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// stw r10,272(r31)
	PPC_STORE_U32(ctx.r31.u32 + 272, ctx.r10.u32);
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r10,280(r31)
	PPC_STORE_U32(ctx.r31.u32 + 280, ctx.r10.u32);
	// lis r8,-31767
	ctx.r8.s64 = -2081882112;
	// stw r9,288(r31)
	PPC_STORE_U32(ctx.r31.u32 + 288, ctx.r9.u32);
	// addi r10,r31,312
	ctx.r10.s64 = ctx.r31.s64 + 312;
	// stw r9,296(r31)
	PPC_STORE_U32(ctx.r31.u32 + 296, ctx.r9.u32);
	// addi r9,r31,316
	ctx.r9.s64 = ctx.r31.s64 + 316;
	// stw r30,304(r31)
	PPC_STORE_U32(ctx.r31.u32 + 304, ctx.r30.u32);
	// lis r7,-31767
	ctx.r7.s64 = -2081882112;
	// stw r28,308(r31)
	PPC_STORE_U32(ctx.r31.u32 + 308, ctx.r28.u32);
	// stw r26,248(r31)
	PPC_STORE_U32(ctx.r31.u32 + 248, ctx.r26.u32);
	// stfs f31,324(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 324, temp.u32);
	// stfs f31,328(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 328, temp.u32);
	// stw r30,312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 312, ctx.r30.u32);
	// stw r30,316(r31)
	PPC_STORE_U32(ctx.r31.u32 + 316, ctx.r30.u32);
	// stw r11,320(r31)
	PPC_STORE_U32(ctx.r31.u32 + 320, ctx.r11.u32);
	// std r30,336(r31)
	PPC_STORE_U64(ctx.r31.u32 + 336, ctx.r30.u64);
	// std r30,344(r31)
	PPC_STORE_U64(ctx.r31.u32 + 344, ctx.r30.u64);
	// std r30,352(r31)
	PPC_STORE_U64(ctx.r31.u32 + 352, ctx.r30.u64);
	// stw r30,360(r31)
	PPC_STORE_U32(ctx.r31.u32 + 360, ctx.r30.u32);
	// stw r30,376(r31)
	PPC_STORE_U32(ctx.r31.u32 + 376, ctx.r30.u32);
	// stw r30,380(r31)
	PPC_STORE_U32(ctx.r31.u32 + 380, ctx.r30.u32);
	// stw r11,384(r31)
	PPC_STORE_U32(ctx.r31.u32 + 384, ctx.r11.u32);
	// stw r11,388(r31)
	PPC_STORE_U32(ctx.r31.u32 + 388, ctx.r11.u32);
	// stw r11,392(r31)
	PPC_STORE_U32(ctx.r31.u32 + 392, ctx.r11.u32);
	// std r30,400(r31)
	PPC_STORE_U64(ctx.r31.u32 + 400, ctx.r30.u64);
	// std r30,408(r31)
	PPC_STORE_U64(ctx.r31.u32 + 408, ctx.r30.u64);
	// stw r30,416(r31)
	PPC_STORE_U32(ctx.r31.u32 + 416, ctx.r30.u32);
	// stw r10,23720(r8)
	PPC_STORE_U32(ctx.r8.u32 + 23720, ctx.r10.u32);
	// stw r9,23724(r7)
	PPC_STORE_U32(ctx.r7.u32 + 23724, ctx.r9.u32);
	// addi r3,r27,88
	ctx.r3.s64 = ctx.r27.s64 + 88;
	// bl 0x8258f1c0
	ctx.lr = 0x8250B404;
	sub_8258F1C0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8250a388
	ctx.lr = 0x8250B40C;
	sub_8250A388(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f30,-72(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// lfd f31,-64(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8250B420"))) PPC_WEAK_FUNC(sub_8250B420);
PPC_FUNC_IMPL(__imp__sub_8250B420) {
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
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// addi r4,r3,48
	ctx.r4.s64 = ctx.r3.s64 + 48;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x8248b870
	ctx.lr = 0x8250B43C;
	sub_8248B870(ctx, base);
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

__attribute__((alias("__imp__sub_8250B450"))) PPC_WEAK_FUNC(sub_8250B450);
PPC_FUNC_IMPL(__imp__sub_8250B450) {
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
	// lis r10,-31767
	ctx.r10.s64 = -2081882112;
	// lwz r11,23976(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 23976);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x8250b4c4
	if (!cr6.eq) goto loc_8250B4C4;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-31767
	ctx.r9.s64 = -2081882112;
	// stw r11,23976(r10)
	PPC_STORE_U32(ctx.r10.u32 + 23976, ctx.r11.u32);
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// addi r31,r9,23744
	ctx.r31.s64 = ctx.r9.s64 + 23744;
	// lis r6,4
	ctx.r6.s64 = 262144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r8,-18900
	ctx.r5.s64 = ctx.r8.s64 + -18900;
	// ori r6,r6,4
	ctx.r6.u64 = ctx.r6.u64 | 4;
	// li r4,88
	ctx.r4.s64 = 88;
	// bl 0x82477fc8
	ctx.lr = 0x8250B4A0;
	sub_82477FC8(ctx, base);
	// lis r7,-31793
	ctx.r7.s64 = -2083586048;
	// addi r3,r7,9024
	ctx.r3.s64 = ctx.r7.s64 + 9024;
	// bl 0x831cdcc8
	ctx.lr = 0x8250B4AC;
	sub_831CDCC8(ctx, base);
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
loc_8250B4C4:
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// addi r3,r11,23744
	ctx.r3.s64 = ctx.r11.s64 + 23744;
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

__attribute__((alias("__imp__sub_8250B4E0"))) PPC_WEAK_FUNC(sub_8250B4E0);
PPC_FUNC_IMPL(__imp__sub_8250B4E0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// ble cr6,0x8250b514
	if (!cr6.gt) goto loc_8250B514;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_8250B4F8:
	// lwz r8,40(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwx r9,r8,r11
	PPC_STORE_U32(ctx.r8.u32 + ctx.r11.u32, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r7,32(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmplw cr6,r10,r7
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, xer);
	// blt cr6,0x8250b4f8
	if (cr6.lt) goto loc_8250B4F8;
loc_8250B514:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8250B51C"))) PPC_WEAK_FUNC(sub_8250B51C);
PPC_FUNC_IMPL(__imp__sub_8250B51C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8250B520"))) PPC_WEAK_FUNC(sub_8250B520);
PPC_FUNC_IMPL(__imp__sub_8250B520) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8250b574
	if (cr6.eq) goto loc_8250B574;
	// bl 0x8250b450
	ctx.lr = 0x8250B544;
	sub_8250B450(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8250B55C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8246be58
	ctx.lr = 0x8250B564;
	sub_8246BE58(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x8250b578
	if (!cr6.eq) goto loc_8250B578;
loc_8250B574:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8250B578:
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

__attribute__((alias("__imp__sub_8250B590"))) PPC_WEAK_FUNC(sub_8250B590);
PPC_FUNC_IMPL(__imp__sub_8250B590) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad0
	ctx.lr = 0x8250B598;
	__savegprlr_22(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// bl 0x82455560
	ctx.lr = 0x8250B5AC;
	sub_82455560(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r24,0
	ctx.r24.s64 = 0;
	// addi r10,r11,-18740
	ctx.r10.s64 = ctx.r11.s64 + -18740;
	// addi r31,r27,32
	ctx.r31.s64 = ctx.r27.s64 + 32;
	// stw r10,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r10.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r24,32(r27)
	PPC_STORE_U32(ctx.r27.u32 + 32, ctx.r24.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r24,36(r27)
	PPC_STORE_U32(ctx.r27.u32 + 36, ctx.r24.u32);
	// addi r28,r31,4
	ctx.r28.s64 = ctx.r31.s64 + 4;
	// std r24,40(r27)
	PPC_STORE_U64(ctx.r27.u32 + 40, ctx.r24.u64);
	// addi r29,r31,8
	ctx.r29.s64 = ctx.r31.s64 + 8;
	// bl 0x82423930
	ctx.lr = 0x8250B5E0;
	sub_82423930(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r27,48
	ctx.r3.s64 = ctx.r27.s64 + 48;
	// bl 0x8241f130
	ctx.lr = 0x8250B5EC;
	sub_8241F130(ctx, base);
	// stw r30,64(r27)
	PPC_STORE_U32(ctx.r27.u32 + 64, ctx.r30.u32);
	// bl 0x8241f278
	ctx.lr = 0x8250B5F4;
	sub_8241F278(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r27,72
	ctx.r3.s64 = ctx.r27.s64 + 72;
	// bl 0x8241f130
	ctx.lr = 0x8250B600;
	sub_8241F130(ctx, base);
	// addi r9,r30,31
	ctx.r9.s64 = ctx.r30.s64 + 31;
	// mr r23,r24
	ctx.r23.u64 = ctx.r24.u64;
	// rlwinm r11,r9,27,5,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x7FFFFFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8250b6bc
	if (cr6.eq) goto loc_8250B6BC;
	// mr r22,r11
	ctx.r22.u64 = ctx.r11.u64;
	// mr r23,r11
	ctx.r23.u64 = ctx.r11.u64;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32204
	ctx.r10.s64 = -2110521344;
	// li r30,4
	ctx.r30.s64 = 4;
	// addi r26,r11,8980
	ctx.r26.s64 = ctx.r11.s64 + 8980;
	// addi r25,r10,26164
	ctx.r25.s64 = ctx.r10.s64 + 26164;
loc_8250B630:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x8250b690
	if (cr6.lt) goto loc_8250B690;
	// addi r4,r11,2
	ctx.r4.s64 = ctx.r11.s64 + 2;
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// ble cr6,0x8250b680
	if (!cr6.gt) goto loc_8250B680;
	// stw r29,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r29.u32);
	// lis r5,11
	ctx.r5.s64 = 720896;
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stw r28,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r28.u32);
	// ori r5,r5,1
	ctx.r5.u64 = ctx.r5.u64 | 1;
	// stw r30,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r30.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r30.u32);
	// stw r25,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r25.u32);
	// bl 0x8247b270
	ctx.lr = 0x8250B678;
	sub_8247B270(ctx, base);
	// stw r26,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r26.u32);
	// b 0x8250b684
	goto loc_8250B684;
loc_8250B680:
	// li r3,1
	ctx.r3.s64 = 1;
loc_8250B684:
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8250b6b4
	if (cr6.eq) goto loc_8250B6B4;
loc_8250B690:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x8250b6a8
	if (cr0.eq) goto loc_8250B6A8;
	// stw r24,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r24.u32);
loc_8250B6A8:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_8250B6B4:
	// addic. r22,r22,-1
	xer.ca = ctx.r22.u32 > 0;
	ctx.r22.s64 = ctx.r22.s64 + -1;
	cr0.compare<int32_t>(ctx.r22.s32, 0, xer);
	// bne 0x8250b630
	if (!cr0.eq) goto loc_8250B630;
loc_8250B6BC:
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824baea8
	ctx.lr = 0x8250B6C8;
	sub_824BAEA8(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8250B6D4"))) PPC_WEAK_FUNC(sub_8250B6D4);
PPC_FUNC_IMPL(__imp__sub_8250B6D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8250B6D8"))) PPC_WEAK_FUNC(sub_8250B6D8);
PPC_FUNC_IMPL(__imp__sub_8250B6D8) {
	PPC_FUNC_PROLOGUE();
	// b 0x8250b450
	sub_8250B450(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8250B6DC"))) PPC_WEAK_FUNC(sub_8250B6DC);
PPC_FUNC_IMPL(__imp__sub_8250B6DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8250B6E0"))) PPC_WEAK_FUNC(sub_8250B6E0);
PPC_FUNC_IMPL(__imp__sub_8250B6E0) {
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
	// bl 0x82452290
	ctx.lr = 0x8250B700;
	sub_82452290(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r31,48
	ctx.r3.s64 = ctx.r31.s64 + 48;
	// addi r10,r11,-18740
	ctx.r10.s64 = ctx.r11.s64 + -18740;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x8241f160
	ctx.lr = 0x8250B718;
	sub_8241F160(ctx, base);
	// bl 0x8241f278
	ctx.lr = 0x8250B71C;
	sub_8241F278(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,72
	ctx.r3.s64 = ctx.r31.s64 + 72;
	// bl 0x8241f130
	ctx.lr = 0x8250B728;
	sub_8241F130(ctx, base);
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

__attribute__((alias("__imp__sub_8250B744"))) PPC_WEAK_FUNC(sub_8250B744);
PPC_FUNC_IMPL(__imp__sub_8250B744) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8250B748"))) PPC_WEAK_FUNC(sub_8250B748);
PPC_FUNC_IMPL(__imp__sub_8250B748) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8250b75c
	if (cr6.eq) goto loc_8250B75C;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// b 0x8250b6e0
	sub_8250B6E0(ctx, base);
	return;
loc_8250B75C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8250B764"))) PPC_WEAK_FUNC(sub_8250B764);
PPC_FUNC_IMPL(__imp__sub_8250B764) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8250B768"))) PPC_WEAK_FUNC(sub_8250B768);
PPC_FUNC_IMPL(__imp__sub_8250B768) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x8250B770;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x82467738
	ctx.lr = 0x8250B784;
	sub_82467738(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// li r3,88
	ctx.r3.s64 = 88;
	// lwz r5,24(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// bl 0x8248b768
	ctx.lr = 0x8250B798;
	sub_8248B768(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8250b7b4
	if (cr6.eq) goto loc_8250B7B4;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8250b590
	ctx.lr = 0x8250B7AC;
	sub_8250B590(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x8250b7b8
	goto loc_8250B7B8;
loc_8250B7B4:
	// li r4,0
	ctx.r4.s64 = 0;
loc_8250B7B8:
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// std r11,0(r29)
	PPC_STORE_U64(ctx.r29.u32 + 0, ctx.r11.u64);
	// bl 0x8241f040
	ctx.lr = 0x8250B7C8;
	sub_8241F040(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8250B7D4"))) PPC_WEAK_FUNC(sub_8250B7D4);
PPC_FUNC_IMPL(__imp__sub_8250B7D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8250B7D8"))) PPC_WEAK_FUNC(sub_8250B7D8);
PPC_FUNC_IMPL(__imp__sub_8250B7D8) {
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
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r3,72
	ctx.r3.s64 = ctx.r3.s64 + 72;
	// addi r10,r11,-18740
	ctx.r10.s64 = ctx.r11.s64 + -18740;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x82573c50
	ctx.lr = 0x8250B808;
	sub_82573C50(ctx, base);
	// addi r3,r31,48
	ctx.r3.s64 = ctx.r31.s64 + 48;
	// bl 0x82573c50
	ctx.lr = 0x8250B810;
	sub_82573C50(ctx, base);
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// bl 0x824238b8
	ctx.lr = 0x8250B818;
	sub_824238B8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82467108
	ctx.lr = 0x8250B820;
	sub_82467108(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8250b838
	if (cr6.eq) goto loc_8250B838;
	// bl 0x8248b818
	ctx.lr = 0x8250B834;
	sub_8248B818(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8250B838:
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

__attribute__((alias("__imp__sub_8250B850"))) PPC_WEAK_FUNC(sub_8250B850);
PPC_FUNC_IMPL(__imp__sub_8250B850) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad4
	ctx.lr = 0x8250B858;
	__savegprlr_23(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// bl 0x8241f278
	ctx.lr = 0x8250B864;
	sub_8241F278(ctx, base);
	// addi r30,r25,72
	ctx.r30.s64 = ctx.r25.s64 + 72;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x8250B874;
	sub_82573D70(ctx, base);
	// addi r3,r25,48
	ctx.r3.s64 = ctx.r25.s64 + 48;
	// bl 0x82486278
	ctx.lr = 0x8250B87C;
	sub_82486278(ctx, base);
	// lwz r11,32(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 32);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// ble cr6,0x8250b91c
	if (!cr6.gt) goto loc_8250B91C;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r26,r11,-18768
	ctx.r26.s64 = ctx.r11.s64 + -18768;
loc_8250B89C:
	// li r31,0
	ctx.r31.s64 = 0;
	// li r29,1
	ctx.r29.s64 = 1;
	// rlwinm r24,r27,2,0,29
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
loc_8250B8A8:
	// lwz r11,40(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 40);
	// lwzx r10,r24,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + ctx.r11.u32);
	// and r9,r10,r29
	ctx.r9.u64 = ctx.r10.u64 & ctx.r29.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8250b8ec
	if (cr6.eq) goto loc_8250B8EC;
	// add r5,r28,r31
	ctx.r5.u64 = ctx.r28.u64 + ctx.r31.u64;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8248be18
	ctx.lr = 0x8250B8CC;
	sub_8248BE18(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82574980
	ctx.lr = 0x8250B8D8;
	sub_82574980(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82573c50
	ctx.lr = 0x8250B8E0;
	sub_82573C50(ctx, base);
	// addi r4,r26,-4
	ctx.r4.s64 = ctx.r26.s64 + -4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82574770
	ctx.lr = 0x8250B8EC;
	sub_82574770(ctx, base);
loc_8250B8EC:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// rotlwi r29,r29,1
	ctx.r29.u64 = __builtin_rotateleft32(ctx.r29.u32, 1);
	// cmpwi cr6,r31,32
	cr6.compare<int32_t>(ctx.r31.s32, 32, xer);
	// blt cr6,0x8250b8a8
	if (cr6.lt) goto loc_8250B8A8;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82574770
	ctx.lr = 0x8250B908;
	sub_82574770(ctx, base);
	// lwz r11,32(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 32);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r28,r28,32
	ctx.r28.s64 = ctx.r28.s64 + 32;
	// cmplw cr6,r27,r11
	cr6.compare<uint32_t>(ctx.r27.u32, ctx.r11.u32, xer);
	// blt cr6,0x8250b89c
	if (cr6.lt) goto loc_8250B89C;
loc_8250B91C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8250B928"))) PPC_WEAK_FUNC(sub_8250B928);
PPC_FUNC_IMPL(__imp__sub_8250B928) {
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
	// lwz r31,4(r4)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// bl 0x8250b850
	ctx.lr = 0x8250B940;
	sub_8250B850(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8248b870
	ctx.lr = 0x8250B94C;
	sub_8248B870(ctx, base);
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

__attribute__((alias("__imp__sub_8250B964"))) PPC_WEAK_FUNC(sub_8250B964);
PPC_FUNC_IMPL(__imp__sub_8250B964) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8250B968"))) PPC_WEAK_FUNC(sub_8250B968);
PPC_FUNC_IMPL(__imp__sub_8250B968) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,-1
	ctx.r11.s64 = -1;
	// lwz r31,4(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x8241f278
	ctx.lr = 0x8250B988;
	sub_8241F278(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8241f130
	ctx.lr = 0x8250B994;
	sub_8241F130(ctx, base);
	// bl 0x8241f278
	ctx.lr = 0x8250B998;
	sub_8241F278(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8241f130
	ctx.lr = 0x8250B9A4;
	sub_8241F130(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8248b848
	ctx.lr = 0x8250B9B0;
	sub_8248B848(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8250ba74
	if (cr6.eq) goto loc_8250BA74;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8248b848
	ctx.lr = 0x8250B9C8;
	sub_8248B848(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8250ba74
	if (cr6.eq) goto loc_8250BA74;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82488f38
	ctx.lr = 0x8250B9E8;
	sub_82488F38(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8241f3f8
	ctx.lr = 0x8250B9F4;
	sub_8241F3F8(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,3
	ctx.r5.s64 = 3;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82488f38
	ctx.lr = 0x8250BA08;
	sub_82488F38(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8241f3f8
	ctx.lr = 0x8250BA14;
	sub_8241F3F8(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82486278
	ctx.lr = 0x8250BA1C;
	sub_82486278(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x8248c420
	ctx.lr = 0x8250BA30;
	sub_8248C420(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// not r10,r11
	ctx.r10.u64 = ~ctx.r11.u64;
	// rlwinm r9,r10,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8250ba74
	if (cr6.eq) goto loc_8250BA74;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8250b768
	ctx.lr = 0x8250BA54;
	sub_8250B768(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x8248b9b8
	ctx.lr = 0x8250BA64;
	sub_8248B9B8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8241f040
	ctx.lr = 0x8250BA70;
	sub_8241F040(ctx, base);
	// b 0x8250ba80
	goto loc_8250BA80;
loc_8250BA74:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8248b9b8
	ctx.lr = 0x8250BA80;
	sub_8248B9B8(ctx, base);
loc_8250BA80:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82573c50
	ctx.lr = 0x8250BA88;
	sub_82573C50(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82573c50
	ctx.lr = 0x8250BA90;
	sub_82573C50(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8250BAA8"))) PPC_WEAK_FUNC(sub_8250BAA8);
PPC_FUNC_IMPL(__imp__sub_8250BAA8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x8250BAB0;
	__savegprlr_26(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x8241f278
	ctx.lr = 0x8250BAC0;
	sub_8241F278(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8241f130
	ctx.lr = 0x8250BACC;
	sub_8241F130(ctx, base);
	// li r28,1
	ctx.r28.s64 = 1;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// lwz r31,4(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253ad28
	ctx.lr = 0x8250BAE4;
	sub_8253AD28(ctx, base);
	// cmpwi cr6,r3,5
	cr6.compare<int32_t>(ctx.r3.s32, 5, xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne cr6,0x8250bc00
	if (!cr6.eq) goto loc_8250BC00;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfd f1,17056(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r11.u32 + 17056);
	// bl 0x8253b3c0
	ctx.lr = 0x8250BAFC;
	sub_8253B3C0(ctx, base);
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253b740
	ctx.lr = 0x8250BB08;
	sub_8253B740(ctx, base);
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253ae28
	ctx.lr = 0x8250BB14;
	sub_8253AE28(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x8250bbe0
	if (cr6.eq) goto loc_8250BBE0;
	// addi r27,r30,48
	ctx.r27.s64 = ctx.r30.s64 + 48;
	// li r26,-1
	ctx.r26.s64 = -1;
loc_8250BB24:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,-1
	ctx.r5.s64 = -1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82488f38
	ctx.lr = 0x8250BB38;
	sub_82488F38(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8241f3f8
	ctx.lr = 0x8250BB44;
	sub_8241F3F8(ctx, base);
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253aa70
	ctx.lr = 0x8250BB50;
	sub_8253AA70(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r26,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r26.u32);
	// bl 0x82486278
	ctx.lr = 0x8250BB5C;
	sub_82486278(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x8248c420
	ctx.lr = 0x8250BB70;
	sub_8248C420(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// not r10,r11
	ctx.r10.u64 = ~ctx.r11.u64;
	// rlwinm r9,r10,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8250bba4
	if (cr6.eq) goto loc_8250BBA4;
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,40(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// rlwinm r10,r9,29,3,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 29) & 0x1FFFFFFC;
	// clrlwi r9,r9,27
	ctx.r9.u64 = ctx.r9.u32 & 0x1F;
	// slw r8,r28,r9
	ctx.r8.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r28.u32 << (ctx.r9.u8 & 0x3F));
	// lwzx r7,r10,r11
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// or r6,r8,r7
	ctx.r6.u64 = ctx.r8.u64 | ctx.r7.u64;
	// stwx r6,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r6.u32);
loc_8250BBA4:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// extsw r11,r29
	ctx.r11.s64 = ctx.r29.s32;
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f1,f0
	ctx.f1.f64 = double(ctx.f0.s64);
	// bl 0x8253b3c0
	ctx.lr = 0x8250BBC0;
	sub_8253B3C0(ctx, base);
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253b740
	ctx.lr = 0x8250BBCC;
	sub_8253B740(ctx, base);
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253ae28
	ctx.lr = 0x8250BBD8;
	sub_8253AE28(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8250bb24
	if (!cr6.eq) goto loc_8250BB24;
loc_8250BBE0:
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253aa70
	ctx.lr = 0x8250BBEC;
	sub_8253AA70(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82573c50
	ctx.lr = 0x8250BBF4;
	sub_82573C50(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_8250BC00:
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x8253ae28
	ctx.lr = 0x8250BC08;
	sub_8253AE28(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x8250bcac
	if (cr6.eq) goto loc_8250BCAC;
	// addi r29,r30,48
	ctx.r29.s64 = ctx.r30.s64 + 48;
	// li r26,-1
	ctx.r26.s64 = -1;
loc_8250BC18:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82488f38
	ctx.lr = 0x8250BC2C;
	sub_82488F38(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8241f3f8
	ctx.lr = 0x8250BC38;
	sub_8241F3F8(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253aae8
	ctx.lr = 0x8250BC44;
	sub_8253AAE8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r26,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r26.u32);
	// bl 0x82486278
	ctx.lr = 0x8250BC50;
	sub_82486278(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x8248c420
	ctx.lr = 0x8250BC64;
	sub_8248C420(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// not r10,r11
	ctx.r10.u64 = ~ctx.r11.u64;
	// rlwinm r9,r10,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8250bc98
	if (cr6.eq) goto loc_8250BC98;
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,40(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// rlwinm r10,r9,29,3,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 29) & 0x1FFFFFFC;
	// clrlwi r9,r9,27
	ctx.r9.u64 = ctx.r9.u32 & 0x1F;
	// slw r8,r28,r9
	ctx.r8.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r28.u32 << (ctx.r9.u8 & 0x3F));
	// lwzx r7,r10,r11
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// or r6,r8,r7
	ctx.r6.u64 = ctx.r8.u64 | ctx.r7.u64;
	// stwx r6,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r6.u32);
loc_8250BC98:
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253ae28
	ctx.lr = 0x8250BCA4;
	sub_8253AE28(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8250bc18
	if (!cr6.eq) goto loc_8250BC18;
loc_8250BCAC:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82573c50
	ctx.lr = 0x8250BCB4;
	sub_82573C50(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8250BCC0"))) PPC_WEAK_FUNC(sub_8250BCC0);
PPC_FUNC_IMPL(__imp__sub_8250BCC0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x8250BCC8;
	__savegprlr_26(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x8241f278
	ctx.lr = 0x8250BCD8;
	sub_8241F278(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8241f130
	ctx.lr = 0x8250BCE4;
	sub_8241F130(ctx, base);
	// li r28,1
	ctx.r28.s64 = 1;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// lwz r31,4(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253ad28
	ctx.lr = 0x8250BCFC;
	sub_8253AD28(ctx, base);
	// cmpwi cr6,r3,5
	cr6.compare<int32_t>(ctx.r3.s32, 5, xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne cr6,0x8250be18
	if (!cr6.eq) goto loc_8250BE18;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfd f1,17056(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r11.u32 + 17056);
	// bl 0x8253b3c0
	ctx.lr = 0x8250BD14;
	sub_8253B3C0(ctx, base);
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253b740
	ctx.lr = 0x8250BD20;
	sub_8253B740(ctx, base);
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253ae28
	ctx.lr = 0x8250BD2C;
	sub_8253AE28(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x8250bdf8
	if (cr6.eq) goto loc_8250BDF8;
	// addi r27,r30,48
	ctx.r27.s64 = ctx.r30.s64 + 48;
	// li r26,-1
	ctx.r26.s64 = -1;
loc_8250BD3C:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,-1
	ctx.r5.s64 = -1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82488f38
	ctx.lr = 0x8250BD50;
	sub_82488F38(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8241f3f8
	ctx.lr = 0x8250BD5C;
	sub_8241F3F8(ctx, base);
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253aa70
	ctx.lr = 0x8250BD68;
	sub_8253AA70(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r26,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r26.u32);
	// bl 0x82486278
	ctx.lr = 0x8250BD74;
	sub_82486278(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x8248c420
	ctx.lr = 0x8250BD88;
	sub_8248C420(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// not r10,r11
	ctx.r10.u64 = ~ctx.r11.u64;
	// rlwinm r9,r10,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8250bdbc
	if (cr6.eq) goto loc_8250BDBC;
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,40(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// rlwinm r10,r9,29,3,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 29) & 0x1FFFFFFC;
	// clrlwi r9,r9,27
	ctx.r9.u64 = ctx.r9.u32 & 0x1F;
	// slw r8,r28,r9
	ctx.r8.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r28.u32 << (ctx.r9.u8 & 0x3F));
	// lwzx r7,r10,r11
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// andc r6,r7,r8
	ctx.r6.u64 = ctx.r7.u64 & ~ctx.r8.u64;
	// stwx r6,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r6.u32);
loc_8250BDBC:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// extsw r11,r29
	ctx.r11.s64 = ctx.r29.s32;
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f1,f0
	ctx.f1.f64 = double(ctx.f0.s64);
	// bl 0x8253b3c0
	ctx.lr = 0x8250BDD8;
	sub_8253B3C0(ctx, base);
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253b740
	ctx.lr = 0x8250BDE4;
	sub_8253B740(ctx, base);
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253ae28
	ctx.lr = 0x8250BDF0;
	sub_8253AE28(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8250bd3c
	if (!cr6.eq) goto loc_8250BD3C;
loc_8250BDF8:
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253aa70
	ctx.lr = 0x8250BE04;
	sub_8253AA70(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82573c50
	ctx.lr = 0x8250BE0C;
	sub_82573C50(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_8250BE18:
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x8253ae28
	ctx.lr = 0x8250BE20;
	sub_8253AE28(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x8250bec4
	if (cr6.eq) goto loc_8250BEC4;
	// addi r29,r30,48
	ctx.r29.s64 = ctx.r30.s64 + 48;
	// li r26,-1
	ctx.r26.s64 = -1;
loc_8250BE30:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82488f38
	ctx.lr = 0x8250BE44;
	sub_82488F38(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8241f3f8
	ctx.lr = 0x8250BE50;
	sub_8241F3F8(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253aae8
	ctx.lr = 0x8250BE5C;
	sub_8253AAE8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r26,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r26.u32);
	// bl 0x82486278
	ctx.lr = 0x8250BE68;
	sub_82486278(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x8248c420
	ctx.lr = 0x8250BE7C;
	sub_8248C420(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// not r10,r11
	ctx.r10.u64 = ~ctx.r11.u64;
	// rlwinm r9,r10,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8250beb0
	if (cr6.eq) goto loc_8250BEB0;
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,40(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// rlwinm r10,r9,29,3,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 29) & 0x1FFFFFFC;
	// clrlwi r9,r9,27
	ctx.r9.u64 = ctx.r9.u32 & 0x1F;
	// slw r8,r28,r9
	ctx.r8.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r28.u32 << (ctx.r9.u8 & 0x3F));
	// lwzx r7,r10,r11
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// andc r6,r7,r8
	ctx.r6.u64 = ctx.r7.u64 & ~ctx.r8.u64;
	// stwx r6,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r6.u32);
loc_8250BEB0:
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253ae28
	ctx.lr = 0x8250BEBC;
	sub_8253AE28(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8250be30
	if (!cr6.eq) goto loc_8250BE30;
loc_8250BEC4:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82573c50
	ctx.lr = 0x8250BECC;
	sub_82573C50(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8250BED8"))) PPC_WEAK_FUNC(sub_8250BED8);
PPC_FUNC_IMPL(__imp__sub_8250BED8) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r11,-1
	ctx.r11.s64 = -1;
	// addi r3,r3,48
	ctx.r3.s64 = ctx.r3.s64 + 48;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82486278
	ctx.lr = 0x8250BF04;
	sub_82486278(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x8248c420
	ctx.lr = 0x8250BF18;
	sub_8248C420(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// not r9,r10
	ctx.r9.u64 = ~ctx.r10.u64;
	// rlwinm r8,r9,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x8250bf58
	if (cr6.eq) goto loc_8250BF58;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r9,40(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// rlwinm r8,r11,29,3,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFC;
	// clrlwi r7,r11,27
	ctx.r7.u64 = ctx.r11.u32 & 0x1F;
	// slw r6,r10,r7
	ctx.r6.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r7.u8 & 0x3F));
	// lwzx r5,r8,r9
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// and r4,r5,r6
	ctx.r4.u64 = ctx.r5.u64 & ctx.r6.u64;
	// addic r3,r4,-1
	xer.ca = ctx.r4.u32 > 0;
	ctx.r3.s64 = ctx.r4.s64 + -1;
	// subfe r3,r3,r4
	temp.u8 = (~ctx.r3.u32 + ctx.r4.u32 < ~ctx.r3.u32) | (~ctx.r3.u32 + ctx.r4.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~ctx.r3.u64 + ctx.r4.u64 + xer.ca;
	xer.ca = temp.u8;
	// b 0x8250bf5c
	goto loc_8250BF5C;
loc_8250BF58:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8250BF5C:
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

__attribute__((alias("__imp__sub_8250BF74"))) PPC_WEAK_FUNC(sub_8250BF74);
PPC_FUNC_IMPL(__imp__sub_8250BF74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8250BF78"))) PPC_WEAK_FUNC(sub_8250BF78);
PPC_FUNC_IMPL(__imp__sub_8250BF78) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x8250BF80;
	__savegprlr_28(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x8241f278
	ctx.lr = 0x8250BF90;
	sub_8241F278(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8241f130
	ctx.lr = 0x8250BF9C;
	sub_8241F130(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
	// li r28,0
	ctx.r28.s64 = 0;
	// li r30,1
	ctx.r30.s64 = 1;
	// lwz r31,4(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253ad28
	ctx.lr = 0x8250BFB4;
	sub_8253AD28(ctx, base);
	// cmpwi cr6,r3,5
	cr6.compare<int32_t>(ctx.r3.s32, 5, xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne cr6,0x8250c07c
	if (!cr6.eq) goto loc_8250C07C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfd f1,17056(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r11.u32 + 17056);
	// bl 0x8253b3c0
	ctx.lr = 0x8250BFCC;
	sub_8253B3C0(ctx, base);
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253b740
	ctx.lr = 0x8250BFD8;
	sub_8253B740(ctx, base);
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253ae28
	ctx.lr = 0x8250BFE4;
	sub_8253AE28(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x8250c06c
	if (cr6.eq) goto loc_8250C06C;
loc_8250BFEC:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,-1
	ctx.r5.s64 = -1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82488f38
	ctx.lr = 0x8250C000;
	sub_82488F38(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8241f3f8
	ctx.lr = 0x8250C00C;
	sub_8241F3F8(ctx, base);
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253aa70
	ctx.lr = 0x8250C018;
	sub_8253AA70(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8250bed8
	ctx.lr = 0x8250C024;
	sub_8250BED8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8250c0e8
	if (!cr6.eq) goto loc_8250C0E8;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// extsw r11,r30
	ctx.r11.s64 = ctx.r30.s32;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f1,f0
	ctx.f1.f64 = double(ctx.f0.s64);
	// bl 0x8253b3c0
	ctx.lr = 0x8250C04C;
	sub_8253B3C0(ctx, base);
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253b740
	ctx.lr = 0x8250C058;
	sub_8253B740(ctx, base);
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253ae28
	ctx.lr = 0x8250C064;
	sub_8253AE28(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8250bfec
	if (!cr6.eq) goto loc_8250BFEC;
loc_8250C06C:
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253aa70
	ctx.lr = 0x8250C078;
	sub_8253AA70(ctx, base);
	// b 0x8250c0ec
	goto loc_8250C0EC;
loc_8250C07C:
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x8253ae28
	ctx.lr = 0x8250C084;
	sub_8253AE28(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x8250c0ec
	if (cr6.eq) goto loc_8250C0EC;
loc_8250C08C:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82488f38
	ctx.lr = 0x8250C0A0;
	sub_82488F38(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8241f3f8
	ctx.lr = 0x8250C0AC;
	sub_8241F3F8(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253aae8
	ctx.lr = 0x8250C0B8;
	sub_8253AAE8(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8250bed8
	ctx.lr = 0x8250C0C4;
	sub_8250BED8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8250c0e8
	if (!cr6.eq) goto loc_8250C0E8;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253ae28
	ctx.lr = 0x8250C0DC;
	sub_8253AE28(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8250c08c
	if (!cr6.eq) goto loc_8250C08C;
	// b 0x8250c0ec
	goto loc_8250C0EC;
loc_8250C0E8:
	// li r28,1
	ctx.r28.s64 = 1;
loc_8250C0EC:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253b6c0
	ctx.lr = 0x8250C0F8;
	sub_8253B6C0(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82573c50
	ctx.lr = 0x8250C100;
	sub_82573C50(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8250C10C"))) PPC_WEAK_FUNC(sub_8250C10C);
PPC_FUNC_IMPL(__imp__sub_8250C10C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8250C110"))) PPC_WEAK_FUNC(sub_8250C110);
PPC_FUNC_IMPL(__imp__sub_8250C110) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x8250C118;
	__savegprlr_28(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x8241f278
	ctx.lr = 0x8250C128;
	sub_8241F278(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8241f130
	ctx.lr = 0x8250C134;
	sub_8241F130(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
	// li r28,1
	ctx.r28.s64 = 1;
	// li r30,1
	ctx.r30.s64 = 1;
	// lwz r31,4(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253ad28
	ctx.lr = 0x8250C14C;
	sub_8253AD28(ctx, base);
	// cmpwi cr6,r3,5
	cr6.compare<int32_t>(ctx.r3.s32, 5, xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne cr6,0x8250c214
	if (!cr6.eq) goto loc_8250C214;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfd f1,17056(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r11.u32 + 17056);
	// bl 0x8253b3c0
	ctx.lr = 0x8250C164;
	sub_8253B3C0(ctx, base);
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253b740
	ctx.lr = 0x8250C170;
	sub_8253B740(ctx, base);
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253ae28
	ctx.lr = 0x8250C17C;
	sub_8253AE28(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x8250c204
	if (cr6.eq) goto loc_8250C204;
loc_8250C184:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,-1
	ctx.r5.s64 = -1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82488f38
	ctx.lr = 0x8250C198;
	sub_82488F38(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8241f3f8
	ctx.lr = 0x8250C1A4;
	sub_8241F3F8(ctx, base);
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253aa70
	ctx.lr = 0x8250C1B0;
	sub_8253AA70(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8250bed8
	ctx.lr = 0x8250C1BC;
	sub_8250BED8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8250c280
	if (cr6.eq) goto loc_8250C280;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// extsw r11,r30
	ctx.r11.s64 = ctx.r30.s32;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f1,f0
	ctx.f1.f64 = double(ctx.f0.s64);
	// bl 0x8253b3c0
	ctx.lr = 0x8250C1E4;
	sub_8253B3C0(ctx, base);
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253b740
	ctx.lr = 0x8250C1F0;
	sub_8253B740(ctx, base);
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253ae28
	ctx.lr = 0x8250C1FC;
	sub_8253AE28(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8250c184
	if (!cr6.eq) goto loc_8250C184;
loc_8250C204:
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253aa70
	ctx.lr = 0x8250C210;
	sub_8253AA70(ctx, base);
	// b 0x8250c284
	goto loc_8250C284;
loc_8250C214:
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x8253ae28
	ctx.lr = 0x8250C21C;
	sub_8253AE28(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x8250c284
	if (cr6.eq) goto loc_8250C284;
loc_8250C224:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82488f38
	ctx.lr = 0x8250C238;
	sub_82488F38(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8241f3f8
	ctx.lr = 0x8250C244;
	sub_8241F3F8(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253aae8
	ctx.lr = 0x8250C250;
	sub_8253AAE8(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8250bed8
	ctx.lr = 0x8250C25C;
	sub_8250BED8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8250c280
	if (cr6.eq) goto loc_8250C280;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253ae28
	ctx.lr = 0x8250C274;
	sub_8253AE28(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8250c224
	if (!cr6.eq) goto loc_8250C224;
	// b 0x8250c284
	goto loc_8250C284;
loc_8250C280:
	// li r28,0
	ctx.r28.s64 = 0;
loc_8250C284:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253b6c0
	ctx.lr = 0x8250C290;
	sub_8253B6C0(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82573c50
	ctx.lr = 0x8250C298;
	sub_82573C50(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8250C2A4"))) PPC_WEAK_FUNC(sub_8250C2A4);
PPC_FUNC_IMPL(__imp__sub_8250C2A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8250C2A8"))) PPC_WEAK_FUNC(sub_8250C2A8);
PPC_FUNC_IMPL(__imp__sub_8250C2A8) {
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
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82489b30
	ctx.lr = 0x8250C2CC;
	sub_82489B30(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,-10003
	ctx.r4.s64 = -10003;
	// bl 0x8253b268
	ctx.lr = 0x8250C2D8;
	sub_8253B268(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// bl 0x8248bbf8
	ctx.lr = 0x8250C2F0;
	sub_8248BBF8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x8250b520
	ctx.lr = 0x8250C2F8;
	sub_8250B520(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8250c344
	if (cr6.eq) goto loc_8250C344;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8250C318;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r8,r9,12828
	ctx.r8.s64 = ctx.r9.s64 + 12828;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// stw r8,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r8.u32);
	// bl 0x82465ee8
	ctx.lr = 0x8250C330;
	sub_82465EE8(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x8257f3f0
	ctx.lr = 0x8250C338;
	sub_8257F3F0(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82489378
	ctx.lr = 0x8250C340;
	sub_82489378(ctx, base);
	// b 0x8250c39c
	goto loc_8250C39C;
loc_8250C344:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x8250c380
	if (cr6.eq) goto loc_8250C380;
	// bl 0x8250b450
	ctx.lr = 0x8250C350;
	sub_8250B450(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82421418
	ctx.lr = 0x8250C35C;
	sub_82421418(ctx, base);
	// bl 0x8252e3c0
	ctx.lr = 0x8250C360;
	sub_8252E3C0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253d060
	ctx.lr = 0x8250C370;
	sub_8253D060(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82573c50
	ctx.lr = 0x8250C37C;
	sub_82573C50(ctx, base);
	// b 0x8250c394
	goto loc_8250C394;
loc_8250C380:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-18764
	ctx.r4.s64 = ctx.r11.s64 + -18764;
	// bl 0x8253c558
	ctx.lr = 0x8250C390;
	sub_8253C558(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_8250C394:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x824670b0
	ctx.lr = 0x8250C39C;
	sub_824670B0(ctx, base);
loc_8250C39C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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

__attribute__((alias("__imp__sub_8250C3B8"))) PPC_WEAK_FUNC(sub_8250C3B8);
PPC_FUNC_IMPL(__imp__sub_8250C3B8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// ble cr6,0x8250c3ec
	if (!cr6.gt) goto loc_8250C3EC;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_8250C3D0:
	// lwz r8,40(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwx r9,r8,r10
	PPC_STORE_U32(ctx.r8.u32 + ctx.r10.u32, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lwz r7,32(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmplw cr6,r11,r7
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, xer);
	// blt cr6,0x8250c3d0
	if (cr6.lt) goto loc_8250C3D0;
loc_8250C3EC:
	// b 0x8250baa8
	sub_8250BAA8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8250C3F0"))) PPC_WEAK_FUNC(sub_8250C3F0);
PPC_FUNC_IMPL(__imp__sub_8250C3F0) {
	PPC_FUNC_PROLOGUE();
	// b 0x8250bf78
	sub_8250BF78(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8250C3F4"))) PPC_WEAK_FUNC(sub_8250C3F4);
PPC_FUNC_IMPL(__imp__sub_8250C3F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8250C3F8"))) PPC_WEAK_FUNC(sub_8250C3F8);
PPC_FUNC_IMPL(__imp__sub_8250C3F8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x8250C400;
	__savegprlr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// lwz r31,4(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253c280
	ctx.lr = 0x8250C424;
	sub_8253C280(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8250c430
	if (cr6.eq) goto loc_8250C430;
	// std r28,0(r3)
	PPC_STORE_U64(ctx.r3.u32 + 0, ctx.r28.u64);
loc_8250C430:
	// lis r11,-32175
	ctx.r11.s64 = -2108620800;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r11,-15704
	ctx.r4.s64 = ctx.r11.s64 + -15704;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253b5e8
	ctx.lr = 0x8250C444;
	sub_8253B5E8(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253ba90
	ctx.lr = 0x8250C454;
	sub_8253BA90(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8241f280
	ctx.lr = 0x8250C464;
	sub_8241F280(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82421388
	ctx.lr = 0x8250C470;
	sub_82421388(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// stb r10,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r10.u8);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r11,172
	ctx.r3.s64 = ctx.r11.s64 + 172;
	// bl 0x824674c0
	ctx.lr = 0x8250C48C;
	sub_824674C0(ctx, base);
	// lwz r3,108(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8250c4a4
	if (cr6.eq) goto loc_8250C4A4;
	// lis r4,2
	ctx.r4.s64 = 131072;
	// ori r4,r4,2
	ctx.r4.u64 = ctx.r4.u64 | 2;
	// bl 0x82573040
	ctx.lr = 0x8250C4A4;
	sub_82573040(ctx, base);
loc_8250C4A4:
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8250c4bc
	if (cr6.eq) goto loc_8250C4BC;
	// lis r4,2
	ctx.r4.s64 = 131072;
	// ori r4,r4,2
	ctx.r4.u64 = ctx.r4.u64 | 2;
	// bl 0x82573040
	ctx.lr = 0x8250C4BC;
	sub_82573040(ctx, base);
loc_8250C4BC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8250C4C8"))) PPC_WEAK_FUNC(sub_8250C4C8);
PPC_FUNC_IMPL(__imp__sub_8250C4C8) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8250b450
	ctx.lr = 0x8250C4E4;
	sub_8250B450(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x824890e0
	ctx.lr = 0x8250C4F4;
	sub_824890E0(ctx, base);
	// lis r11,-32175
	ctx.r11.s64 = -2108620800;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-18072
	ctx.r4.s64 = ctx.r11.s64 + -18072;
	// bl 0x82489208
	ctx.lr = 0x8250C504;
	sub_82489208(ctx, base);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32175
	ctx.r9.s64 = -2108620800;
	// addi r31,r10,-18788
	ctx.r31.s64 = ctx.r10.s64 + -18788;
	// addi r8,r9,-15432
	ctx.r8.s64 = ctx.r9.s64 + -15432;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r4,r31,-68
	ctx.r4.s64 = ctx.r31.s64 + -68;
	// stw r8,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r8.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// ld r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x8250c3f8
	ctx.lr = 0x8250C530;
	sub_8250C3F8(ctx, base);
	// lis r7,-32175
	ctx.r7.s64 = -2108620800;
	// addi r6,r7,-17752
	ctx.r6.s64 = ctx.r7.s64 + -17752;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// addi r4,r31,-64
	ctx.r4.s64 = ctx.r31.s64 + -64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r6,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r6.u32);
	// ld r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x8250c3f8
	ctx.lr = 0x8250C550;
	sub_8250C3F8(ctx, base);
	// lis r5,-32175
	ctx.r5.s64 = -2108620800;
	// addi r11,r5,-17216
	ctx.r11.s64 = ctx.r5.s64 + -17216;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// addi r4,r31,-60
	ctx.r4.s64 = ctx.r31.s64 + -60;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// ld r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x8250c3f8
	ctx.lr = 0x8250C570;
	sub_8250C3F8(ctx, base);
	// lis r10,-32175
	ctx.r10.s64 = -2108620800;
	// addi r9,r10,-15376
	ctx.r9.s64 = ctx.r10.s64 + -15376;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// addi r4,r31,-52
	ctx.r4.s64 = ctx.r31.s64 + -52;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// ld r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x8250c3f8
	ctx.lr = 0x8250C590;
	sub_8250C3F8(ctx, base);
	// lis r8,-32175
	ctx.r8.s64 = -2108620800;
	// addi r7,r8,-16520
	ctx.r7.s64 = ctx.r8.s64 + -16520;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// addi r4,r31,-44
	ctx.r4.s64 = ctx.r31.s64 + -44;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r7,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r7.u32);
	// ld r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x8250c3f8
	ctx.lr = 0x8250C5B0;
	sub_8250C3F8(ctx, base);
	// lis r6,-32175
	ctx.r6.s64 = -2108620800;
	// addi r5,r6,-16112
	ctx.r5.s64 = ctx.r6.s64 + -16112;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// addi r4,r31,-36
	ctx.r4.s64 = ctx.r31.s64 + -36;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r5,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r5.u32);
	// ld r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x8250c3f8
	ctx.lr = 0x8250C5D0;
	sub_8250C3F8(ctx, base);
	// lis r4,-32175
	ctx.r4.s64 = -2108620800;
	// addi r11,r4,-19232
	ctx.r11.s64 = ctx.r4.s64 + -19232;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// addi r4,r31,-24
	ctx.r4.s64 = ctx.r31.s64 + -24;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// ld r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x8250c3f8
	ctx.lr = 0x8250C5F0;
	sub_8250C3F8(ctx, base);
	// lis r10,-32175
	ctx.r10.s64 = -2108620800;
	// addi r9,r10,-19424
	ctx.r9.s64 = ctx.r10.s64 + -19424;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// addi r4,r31,-12
	ctx.r4.s64 = ctx.r31.s64 + -12;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// ld r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x8250c3f8
	ctx.lr = 0x8250C610;
	sub_8250C3F8(ctx, base);
	// lis r8,-32175
	ctx.r8.s64 = -2108620800;
	// addi r7,r8,-18136
	ctx.r7.s64 = ctx.r8.s64 + -18136;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r7,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r7.u32);
	// ld r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x8250c3f8
	ctx.lr = 0x8250C630;
	sub_8250C3F8(ctx, base);
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

__attribute__((alias("__imp__sub_8250C648"))) PPC_WEAK_FUNC(sub_8250C648);
PPC_FUNC_IMPL(__imp__sub_8250C648) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82489b30
	ctx.lr = 0x8250C660;
	sub_82489B30(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8250c4c8
	ctx.lr = 0x8250C668;
	sub_8250C4C8(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r10,r11,12828
	ctx.r10.s64 = ctx.r11.s64 + 12828;
	// stw r10,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// bl 0x82465ee8
	ctx.lr = 0x8250C67C;
	sub_82465EE8(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8257f3f0
	ctx.lr = 0x8250C684;
	sub_8257F3F0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82489378
	ctx.lr = 0x8250C68C;
	sub_82489378(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8250C6A0"))) PPC_WEAK_FUNC(sub_8250C6A0);
PPC_FUNC_IMPL(__imp__sub_8250C6A0) {
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
	// bl 0x8250b450
	ctx.lr = 0x8250C6B8;
	sub_8250B450(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r30,r11,-18864
	ctx.r30.s64 = ctx.r11.s64 + -18864;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r30,-28
	ctx.r4.s64 = ctx.r30.s64 + -28;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8247b0f0
	ctx.lr = 0x8250C6D4;
	sub_8247B0F0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8246be10
	ctx.lr = 0x8250C6E0;
	sub_8246BE10(ctx, base);
	// bl 0x82467738
	ctx.lr = 0x8250C6E4;
	sub_82467738(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8246be18
	ctx.lr = 0x8250C6F0;
	sub_8246BE18(ctx, base);
	// lis r5,1
	ctx.r5.s64 = 65536;
	// li r4,8
	ctx.r4.s64 = 8;
	// ori r5,r5,1
	ctx.r5.u64 = ctx.r5.u64 | 1;
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x825730a8
	ctx.lr = 0x8250C704;
	sub_825730A8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8250c720
	if (cr6.eq) goto loc_8250C720;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r9,r10,-18748
	ctx.r9.s64 = ctx.r10.s64 + -18748;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// b 0x8250c724
	goto loc_8250C724;
loc_8250C720:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8250C724:
	// stw r11,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r11.u32);
	// addi r5,r30,-8
	ctx.r5.s64 = ctx.r30.s64 + -8;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82478360
	ctx.lr = 0x8250C73C;
	sub_82478360(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r4,11
	ctx.r4.s64 = 11;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824788c8
	ctx.lr = 0x8250C750;
	sub_824788C8(ctx, base);
	// lis r11,-32175
	ctx.r11.s64 = -2108620800;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-15160
	ctx.r4.s64 = ctx.r11.s64 + -15160;
	// bl 0x8246be38
	ctx.lr = 0x8250C760;
	sub_8246BE38(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824894a0
	ctx.lr = 0x8250C768;
	sub_824894A0(ctx, base);
	// lwz r31,4(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lis r10,-32175
	ctx.r10.s64 = -2108620800;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r10,-14776
	ctx.r4.s64 = ctx.r10.s64 + -14776;
	// bl 0x8253b5e8
	ctx.lr = 0x8250C780;
	sub_8253B5E8(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253be88
	ctx.lr = 0x8250C794;
	sub_8253BE88(ctx, base);
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

__attribute__((alias("__imp__sub_8250C7AC"))) PPC_WEAK_FUNC(sub_8250C7AC);
PPC_FUNC_IMPL(__imp__sub_8250C7AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8250C7B0"))) PPC_WEAK_FUNC(sub_8250C7B0);
PPC_FUNC_IMPL(__imp__sub_8250C7B0) {
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
	// lis r10,-31767
	ctx.r10.s64 = -2081882112;
	// lwz r11,24216(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24216);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x8250c824
	if (!cr6.eq) goto loc_8250C824;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-31767
	ctx.r9.s64 = -2081882112;
	// stw r11,24216(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24216, ctx.r11.u32);
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// addi r31,r9,23984
	ctx.r31.s64 = ctx.r9.s64 + 23984;
	// lis r6,17
	ctx.r6.s64 = 1114112;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r8,-18656
	ctx.r5.s64 = ctx.r8.s64 + -18656;
	// ori r6,r6,4
	ctx.r6.u64 = ctx.r6.u64 | 4;
	// li r4,464
	ctx.r4.s64 = 464;
	// bl 0x82477fc8
	ctx.lr = 0x8250C800;
	sub_82477FC8(ctx, base);
	// lis r7,-31793
	ctx.r7.s64 = -2083586048;
	// addi r3,r7,9088
	ctx.r3.s64 = ctx.r7.s64 + 9088;
	// bl 0x831cdcc8
	ctx.lr = 0x8250C80C;
	sub_831CDCC8(ctx, base);
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
loc_8250C824:
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// addi r3,r11,23984
	ctx.r3.s64 = ctx.r11.s64 + 23984;
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

__attribute__((alias("__imp__sub_8250C840"))) PPC_WEAK_FUNC(sub_8250C840);
PPC_FUNC_IMPL(__imp__sub_8250C840) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x8250C848;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x82467738
	ctx.lr = 0x8250C858;
	sub_82467738(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// li r3,112
	ctx.r3.s64 = 112;
	// lwz r5,24(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// bl 0x8248b768
	ctx.lr = 0x8250C86C;
	sub_8248B768(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8250c894
	if (cr6.eq) goto loc_8250C894;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x824fcca8
	ctx.lr = 0x8250C880;
	sub_824FCCA8(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r10,r11,-18336
	ctx.r10.s64 = ctx.r11.s64 + -18336;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// b 0x8250c898
	goto loc_8250C898;
loc_8250C894:
	// li r4,0
	ctx.r4.s64 = 0;
loc_8250C898:
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// std r11,0(r30)
	PPC_STORE_U64(ctx.r30.u32 + 0, ctx.r11.u64);
	// bl 0x8241f040
	ctx.lr = 0x8250C8A8;
	sub_8241F040(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8250C8B4"))) PPC_WEAK_FUNC(sub_8250C8B4);
PPC_FUNC_IMPL(__imp__sub_8250C8B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8250C8B8"))) PPC_WEAK_FUNC(sub_8250C8B8);
PPC_FUNC_IMPL(__imp__sub_8250C8B8) {
	PPC_FUNC_PROLOGUE();
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r3,312
	ctx.r3.s64 = ctx.r3.s64 + 312;
	// b 0x8241f040
	sub_8241F040(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8250C8C4"))) PPC_WEAK_FUNC(sub_8250C8C4);
PPC_FUNC_IMPL(__imp__sub_8250C8C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8250C8C8"))) PPC_WEAK_FUNC(sub_8250C8C8);
PPC_FUNC_IMPL(__imp__sub_8250C8C8) {
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
	// lis r10,-31767
	ctx.r10.s64 = -2081882112;
	// lwz r11,24456(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24456);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x8250c93c
	if (!cr6.eq) goto loc_8250C93C;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-31767
	ctx.r9.s64 = -2081882112;
	// stw r11,24456(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24456, ctx.r11.u32);
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// addi r31,r9,24224
	ctx.r31.s64 = ctx.r9.s64 + 24224;
	// lis r6,17
	ctx.r6.s64 = 1114112;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r8,-18436
	ctx.r5.s64 = ctx.r8.s64 + -18436;
	// ori r6,r6,4
	ctx.r6.u64 = ctx.r6.u64 | 4;
	// li r4,112
	ctx.r4.s64 = 112;
	// bl 0x82477fc8
	ctx.lr = 0x8250C918;
	sub_82477FC8(ctx, base);
	// lis r7,-31793
	ctx.r7.s64 = -2083586048;
	// addi r3,r7,9104
	ctx.r3.s64 = ctx.r7.s64 + 9104;
	// bl 0x831cdcc8
	ctx.lr = 0x8250C924;
	sub_831CDCC8(ctx, base);
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
loc_8250C93C:
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// addi r3,r11,24224
	ctx.r3.s64 = ctx.r11.s64 + 24224;
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

__attribute__((alias("__imp__sub_8250C958"))) PPC_WEAK_FUNC(sub_8250C958);
PPC_FUNC_IMPL(__imp__sub_8250C958) {
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
	// bl 0x8250c8c8
	ctx.lr = 0x8250C96C;
	sub_8250C8C8(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,-18428
	ctx.r4.s64 = ctx.r11.s64 + -18428;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8247b0f0
	ctx.lr = 0x8250C984;
	sub_8247B0F0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8246be10
	ctx.lr = 0x8250C990;
	sub_8246BE10(ctx, base);
	// bl 0x824fd170
	ctx.lr = 0x8250C994;
	sub_824FD170(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8246be18
	ctx.lr = 0x8250C9A0;
	sub_8246BE18(ctx, base);
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

__attribute__((alias("__imp__sub_8250C9B4"))) PPC_WEAK_FUNC(sub_8250C9B4);
PPC_FUNC_IMPL(__imp__sub_8250C9B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8250C9B8"))) PPC_WEAK_FUNC(sub_8250C9B8);
PPC_FUNC_IMPL(__imp__sub_8250C9B8) {
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
	// bl 0x824fcd10
	ctx.lr = 0x8250C9D8;
	sub_824FCD10(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8250c9f0
	if (cr6.eq) goto loc_8250C9F0;
	// bl 0x8248b818
	ctx.lr = 0x8250C9EC;
	sub_8248B818(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8250C9F0:
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

__attribute__((alias("__imp__sub_8250CA08"))) PPC_WEAK_FUNC(sub_8250CA08);
PPC_FUNC_IMPL(__imp__sub_8250CA08) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8250ca5c
	if (cr6.eq) goto loc_8250CA5C;
	// bl 0x8251f5d0
	ctx.lr = 0x8250CA2C;
	sub_8251F5D0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8250CA44;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8246be58
	ctx.lr = 0x8250CA4C;
	sub_8246BE58(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x8250ca60
	if (!cr6.eq) goto loc_8250CA60;
loc_8250CA5C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8250CA60:
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

__attribute__((alias("__imp__sub_8250CA78"))) PPC_WEAK_FUNC(sub_8250CA78);
PPC_FUNC_IMPL(__imp__sub_8250CA78) {
	PPC_FUNC_PROLOGUE();
	// b 0x8250c8c8
	sub_8250C8C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8250CA7C"))) PPC_WEAK_FUNC(sub_8250CA7C);
PPC_FUNC_IMPL(__imp__sub_8250CA7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8250CA80"))) PPC_WEAK_FUNC(sub_8250CA80);
PPC_FUNC_IMPL(__imp__sub_8250CA80) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x8250CA88;
	__savegprlr_29(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// lwz r30,0(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r4,24(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_8250CAA0:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8250caa0
	if (!cr6.eq) goto loc_8250CAA0;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8241f0d0
	ctx.lr = 0x8250CAC4;
	sub_8241F0D0(ctx, base);
	// lis r10,-31767
	ctx.r10.s64 = -2081882112;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r10,24464
	ctx.r4.s64 = ctx.r10.s64 + 24464;
	// bl 0x82573280
	ctx.lr = 0x8250CAD4;
	sub_82573280(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82573c50
	ctx.lr = 0x8250CAE0;
	sub_82573C50(ctx, base);
	// clrlwi r9,r29,24
	ctx.r9.u64 = ctx.r29.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8250cbe8
	if (cr6.eq) goto loc_8250CBE8;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r31,r30,288
	ctx.r31.s64 = ctx.r30.s64 + 288;
	// bl 0x8241b918
	ctx.lr = 0x8250CAFC;
	sub_8241B918(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8241fa70
	ctx.lr = 0x8250CB08;
	sub_8241FA70(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8241fb00
	ctx.lr = 0x8250CB10;
	sub_8241FB00(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8241fad0
	ctx.lr = 0x8250CB18;
	sub_8241FAD0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8250cb88
	if (cr6.eq) goto loc_8250CB88;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// std r31,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.r31.u64);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x8241f040
	ctx.lr = 0x8250CB38;
	sub_8241F040(ctx, base);
	// bl 0x8241fb80
	ctx.lr = 0x8250CB3C;
	sub_8241FB80(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,152
	ctx.r3.s64 = ctx.r1.s64 + 152;
	// bl 0x8241fa28
	ctx.lr = 0x8250CB48;
	sub_8241FA28(ctx, base);
	// stw r31,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r31.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x8241f040
	ctx.lr = 0x8250CB58;
	sub_8241F040(ctx, base);
	// bl 0x8241fb80
	ctx.lr = 0x8250CB5C;
	sub_8241FB80(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,152
	ctx.r3.s64 = ctx.r1.s64 + 152;
	// bl 0x8241fa70
	ctx.lr = 0x8250CB68;
	sub_8241FA70(ctx, base);
	// addi r3,r30,328
	ctx.r3.s64 = ctx.r30.s64 + 328;
	// lwz r4,144(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// bl 0x83323038
	ctx.lr = 0x8250CB74;
	sub_83323038(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x83308d20
	ctx.lr = 0x8250CB7C;
	sub_83308D20(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_8250CB88:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8246aa80
	ctx.lr = 0x8250CB94;
	sub_8246AA80(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r30,328
	ctx.r3.s64 = ctx.r30.s64 + 328;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x83323038
	ctx.lr = 0x8250CBA4;
	sub_83323038(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x83308d20
	ctx.lr = 0x8250CBAC;
	sub_83308D20(ctx, base);
	// lwz r4,328(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 328);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8250cbcc
	if (cr6.eq) goto loc_8250CBCC;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82468e10
	ctx.lr = 0x8250CBC0;
	sub_82468E10(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_8250CBCC:
	// bl 0x8241fb80
	ctx.lr = 0x8250CBD0;
	sub_8241FB80(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8241fa70
	ctx.lr = 0x8250CBDC;
	sub_8241FA70(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_8250CBE8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8250CBF4"))) PPC_WEAK_FUNC(sub_8250CBF4);
PPC_FUNC_IMPL(__imp__sub_8250CBF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8250CBF8"))) PPC_WEAK_FUNC(sub_8250CBF8);
PPC_FUNC_IMPL(__imp__sub_8250CBF8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdac4
	ctx.lr = 0x8250CC00;
	__savegprlr_19(ctx, base);
	// stwu r1,-720(r1)
	ea = -720 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r22,12(r3)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// li r26,0
	ctx.r26.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r26,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r26.u32);
	// mr r24,r26
	ctx.r24.u64 = ctx.r26.u64;
	// addi r20,r22,312
	ctx.r20.s64 = ctx.r22.s64 + 312;
	// lwz r3,312(r22)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + 312);
	// lwz r11,328(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 328);
	// addi r21,r11,32
	ctx.r21.s64 = ctx.r11.s64 + 32;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8250cc38
	if (cr6.eq) goto loc_8250CC38;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// bl 0x824d44c0
	ctx.lr = 0x8250CC38;
	sub_824D44C0(ctx, base);
loc_8250CC38:
	// addi r3,r1,168
	ctx.r3.s64 = ctx.r1.s64 + 168;
	// lwz r4,328(r22)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r22.u32 + 328);
	// bl 0x82468e10
	ctx.lr = 0x8250CC44;
	sub_82468E10(ctx, base);
	// lwz r11,168(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// not r10,r11
	ctx.r10.u64 = ~ctx.r11.u64;
	// rlwinm r9,r10,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8250d348
	if (cr6.eq) goto loc_8250D348;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r29,24(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8250cca8
	if (cr6.eq) goto loc_8250CCA8;
	// bl 0x824a3948
	ctx.lr = 0x8250CC6C;
	sub_824A3948(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// mr r6,r21
	ctx.r6.u64 = ctx.r21.u64;
	// bl 0x8248b500
	ctx.lr = 0x8250CC80;
	sub_8248B500(ctx, base);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x8241fad0
	ctx.lr = 0x8250CC88;
	sub_8241FAD0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8250cca4
	if (!cr6.eq) goto loc_8250CCA4;
	// bl 0x8241fb00
	ctx.lr = 0x8250CC9C;
	sub_8241FB00(ctx, base);
	// addi r1,r1,720
	ctx.r1.s64 = ctx.r1.s64 + 720;
	// b 0x831cdb14
	__restgprlr_19(ctx, base);
	return;
loc_8250CCA4:
	// bl 0x8241fb00
	ctx.lr = 0x8250CCA8;
	sub_8241FB00(ctx, base);
loc_8250CCA8:
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8248a2f0
	ctx.lr = 0x8250CCB4;
	sub_8248A2F0(ctx, base);
	// bl 0x8241f278
	ctx.lr = 0x8250CCB8;
	sub_8241F278(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x8241f130
	ctx.lr = 0x8250CCC4;
	sub_8241F130(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r30,r11,-18228
	ctx.r30.s64 = ctx.r11.s64 + -18228;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8250cd60
	if (cr6.eq) goto loc_8250CD60;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// bl 0x8241f0a0
	ctx.lr = 0x8250CCE4;
	sub_8241F0A0(ctx, base);
	// addi r4,r1,320
	ctx.r4.s64 = ctx.r1.s64 + 320;
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// bl 0x8247b9c0
	ctx.lr = 0x8250CCF0;
	sub_8247B9C0(ctx, base);
	// bl 0x8250ca08
	ctx.lr = 0x8250CCF4;
	sub_8250CA08(ctx, base);
	// std r26,200(r1)
	PPC_STORE_U64(ctx.r1.u32 + 200, ctx.r26.u64);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,200
	ctx.r3.s64 = ctx.r1.s64 + 200;
	// bl 0x8241f040
	ctx.lr = 0x8250CD04;
	sub_8241F040(ctx, base);
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// bl 0x82573c50
	ctx.lr = 0x8250CD0C;
	sub_82573C50(ctx, base);
	// lwz r4,200(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 200);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8250cd54
	if (cr6.eq) goto loc_8250CD54;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r3,r1,528
	ctx.r3.s64 = ctx.r1.s64 + 528;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8250CD2C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// bl 0x8241b8c8
	ctx.lr = 0x8250CD38;
	sub_8241B8C8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82573d70
	ctx.lr = 0x8250CD44;
	sub_82573D70(ctx, base);
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// bl 0x82573c50
	ctx.lr = 0x8250CD4C;
	sub_82573C50(ctx, base);
	// addi r3,r1,528
	ctx.r3.s64 = ctx.r1.s64 + 528;
	// bl 0x8241d6c0
	ctx.lr = 0x8250CD54;
	sub_8241D6C0(ctx, base);
loc_8250CD54:
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,200
	ctx.r3.s64 = ctx.r1.s64 + 200;
	// bl 0x8241f040
	ctx.lr = 0x8250CD60;
	sub_8241F040(ctx, base);
loc_8250CD60:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// addi r4,r11,17684
	ctx.r4.s64 = ctx.r11.s64 + 17684;
	// bl 0x82574770
	ctx.lr = 0x8250CD70;
	sub_82574770(ctx, base);
	// addi r4,r22,32
	ctx.r4.s64 = ctx.r22.s64 + 32;
	// bl 0x82574980
	ctx.lr = 0x8250CD78;
	sub_82574980(ctx, base);
	// std r26,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r26.u64);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8241f040
	ctx.lr = 0x8250CD88;
	sub_8241F040(ctx, base);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x824a38d8
	ctx.lr = 0x8250CD90;
	sub_824A38D8(ctx, base);
	// stw r29,216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 216, ctx.r29.u32);
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// addi r3,r1,368
	ctx.r3.s64 = ctx.r1.s64 + 368;
	// bl 0x824a5400
	ctx.lr = 0x8250CDA0;
	sub_824A5400(ctx, base);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// addi r3,r1,280
	ctx.r3.s64 = ctx.r1.s64 + 280;
	// stw r10,432(r1)
	PPC_STORE_U32(ctx.r1.u32 + 432, ctx.r10.u32);
	// bl 0x82521180
	ctx.lr = 0x8250CDB4;
	sub_82521180(ctx, base);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// addi r3,r1,184
	ctx.r3.s64 = ctx.r1.s64 + 184;
	// lwz r4,0(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// std r26,184(r1)
	PPC_STORE_U64(ctx.r1.u32 + 184, ctx.r26.u64);
	// bl 0x8241f040
	ctx.lr = 0x8250CDC8;
	sub_8241F040(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// bl 0x8241f0a0
	ctx.lr = 0x8250CDD4;
	sub_8241F0A0(ctx, base);
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r1,184
	ctx.r5.s64 = ctx.r1.s64 + 184;
	// addi r4,r1,304
	ctx.r4.s64 = ctx.r1.s64 + 304;
	// addi r3,r1,464
	ctx.r3.s64 = ctx.r1.s64 + 464;
	// bl 0x824b7380
	ctx.lr = 0x8250CDE8;
	sub_824B7380(ctx, base);
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// bl 0x82573c50
	ctx.lr = 0x8250CDF0;
	sub_82573C50(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,184
	ctx.r3.s64 = ctx.r1.s64 + 184;
	// bl 0x8241f040
	ctx.lr = 0x8250CDFC;
	sub_8241F040(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,280
	ctx.r3.s64 = ctx.r1.s64 + 280;
	// bl 0x8241f040
	ctx.lr = 0x8250CE08;
	sub_8241F040(ctx, base);
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// addi r4,r1,368
	ctx.r4.s64 = ctx.r1.s64 + 368;
	// addi r3,r1,124
	ctx.r3.s64 = ctx.r1.s64 + 124;
	// bl 0x824a4a10
	ctx.lr = 0x8250CE18;
	sub_824A4A10(ctx, base);
	// lwz r8,124(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// not r7,r8
	ctx.r7.u64 = ~ctx.r8.u64;
	// rlwinm r6,r7,1,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0x1;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// bne cr6,0x8250ce38
	if (!cr6.eq) goto loc_8250CE38;
	// addi r3,r1,368
	ctx.r3.s64 = ctx.r1.s64 + 368;
	// bl 0x824a4d40
	ctx.lr = 0x8250CE34;
	sub_824A4D40(ctx, base);
	// b 0x8250d328
	goto loc_8250D328;
loc_8250CE38:
	// lwz r10,412(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 412);
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
	// lwz r11,408(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 408);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi. r29,r9,3
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7) != 0);
	ctx.r29.s64 = ctx.r9.s32 >> 3;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// beq 0x8250cea8
	if (cr0.eq) goto loc_8250CEA8;
	// mr r31,r26
	ctx.r31.u64 = ctx.r26.u64;
	// b 0x8250ce5c
	goto loc_8250CE5C;
loc_8250CE58:
	// lwz r11,408(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 408);
loc_8250CE5C:
	// lwzx r3,r31,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// bl 0x82489fa8
	ctx.lr = 0x8250CE64;
	sub_82489FA8(ctx, base);
	// std r26,152(r1)
	PPC_STORE_U64(ctx.r1.u32 + 152, ctx.r26.u64);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,152
	ctx.r3.s64 = ctx.r1.s64 + 152;
	// bl 0x8241f040
	ctx.lr = 0x8250CE74;
	sub_8241F040(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,152(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// bl 0x8241f040
	ctx.lr = 0x8250CE80;
	sub_8241F040(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,152
	ctx.r3.s64 = ctx.r1.s64 + 152;
	// bl 0x8241f040
	ctx.lr = 0x8250CE8C;
	sub_8241F040(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8250cea8
	if (!cr6.eq) goto loc_8250CEA8;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// cmplw cr6,r30,r29
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, xer);
	// blt cr6,0x8250ce58
	if (cr6.lt) goto loc_8250CE58;
loc_8250CEA8:
	// addi r3,r1,368
	ctx.r3.s64 = ctx.r1.s64 + 368;
	// bl 0x824a4d40
	ctx.lr = 0x8250CEB0;
	sub_824A4D40(ctx, base);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8250d328
	if (cr6.eq) goto loc_8250D328;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8248b150
	ctx.lr = 0x8250CEC8;
	sub_8248B150(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r29,r11,200
	ctx.r29.s64 = ctx.r11.s64 + 200;
	// addi r27,r22,360
	ctx.r27.s64 = ctx.r22.s64 + 360;
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// stw r26,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r26.u32);
	// stw r26,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r26.u32);
	// std r26,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r26.u64);
	// bl 0x83308fb8
	ctx.lr = 0x8250CEEC;
	sub_83308FB8(ctx, base);
	// li r23,-1
	ctx.r23.s64 = -1;
	// lwz r30,8(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// lwz r28,32(r29)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
loc_8250CEF8:
	// subf r11,r30,r23
	ctx.r11.s64 = ctx.r23.s64 - ctx.r30.s64;
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r11,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r9,r11,24
	ctx.r9.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8250cfa4
	if (cr6.eq) goto loc_8250CFA4;
	// lwz r11,40(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 40);
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r10,r11
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x8250cf94
	if (cr6.eq) goto loc_8250CF94;
	// std r26,160(r1)
	PPC_STORE_U64(ctx.r1.u32 + 160, ctx.r26.u64);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x8241f040
	ctx.lr = 0x8250CF34;
	sub_8241F040(ctx, base);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x83324e08
	ctx.lr = 0x8250CF40;
	sub_83324E08(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x8241f040
	ctx.lr = 0x8250CF4C;
	sub_8241F040(ctx, base);
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// std r26,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.r26.u64);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82572fa0
	ctx.lr = 0x8250CF5C;
	sub_82572FA0(ctx, base);
	// addi r5,r31,64
	ctx.r5.s64 = ctx.r31.s64 + 64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// bl 0x824af898
	ctx.lr = 0x8250CF6C;
	sub_824AF898(ctx, base);
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// addi r4,r1,336
	ctx.r4.s64 = ctx.r1.s64 + 336;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8242e650
	ctx.lr = 0x8250CF80;
	sub_8242E650(ctx, base);
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// bl 0x82573c50
	ctx.lr = 0x8250CF88;
	sub_82573C50(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82572fa0
	ctx.lr = 0x8250CF94;
	sub_82572FA0(ctx, base);
loc_8250CF94:
	// rlwinm r11,r30,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 5) & 0xFFFFFFE0;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// lwz r30,20(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// b 0x8250cef8
	goto loc_8250CEF8;
loc_8250CFA4:
	// lwz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// add r25,r10,r11
	ctx.r25.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r25
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r25.u32, xer);
	// beq cr6,0x8250d170
	if (cr6.eq) goto loc_8250D170;
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// addi r28,r11,24496
	ctx.r28.s64 = ctx.r11.s64 + 24496;
loc_8250CFC8:
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// std r26,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r26.u64);
	// bl 0x8241f040
	ctx.lr = 0x8250CFD8;
	sub_8241F040(ctx, base);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// lwz r10,56(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8250d008
	if (!cr6.eq) goto loc_8250D008;
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// bl 0x824b0cb0
	ctx.lr = 0x8250CFF8;
	sub_824B0CB0(ctx, base);
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x824b1d00
	ctx.lr = 0x8250D004;
	sub_824B1D00(ctx, base);
	// b 0x8250d010
	goto loc_8250D010;
loc_8250D008:
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x824b1508
	ctx.lr = 0x8250D010;
	sub_824B1508(ctx, base);
loc_8250D010:
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8250d028
	if (cr6.eq) goto loc_8250D028;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,276
	ctx.r3.s64 = ctx.r1.s64 + 276;
	// bl 0x824b12f0
	ctx.lr = 0x8250D028;
	sub_824B12F0(ctx, base);
loc_8250D028:
	// lwz r31,88(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x8250d1f0
	if (cr6.eq) goto loc_8250D1F0;
	// bl 0x824ffb68
	ctx.lr = 0x8250D038;
	sub_824FFB68(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8250D050;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8246be58
	ctx.lr = 0x8250D058;
	sub_8246BE58(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8250d1f0
	if (cr6.eq) goto loc_8250D1F0;
	// addi r4,r31,104
	ctx.r4.s64 = ctx.r31.s64 + 104;
	// addi r3,r1,264
	ctx.r3.s64 = ctx.r1.s64 + 264;
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
	// ori r24,r24,1
	ctx.r24.u64 = ctx.r24.u64 | 1;
	// bl 0x82451c28
	ctx.lr = 0x8250D078;
	sub_82451C28(ctx, base);
	// lwz r31,0(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x8250d0b8
	if (cr6.eq) goto loc_8250D0B8;
	// bl 0x824ffb68
	ctx.lr = 0x8250D088;
	sub_824FFB68(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r19,r3
	ctx.r19.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8250D0A0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// bl 0x8246be58
	ctx.lr = 0x8250D0A8;
	sub_8246BE58(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x8250d0bc
	if (!cr6.eq) goto loc_8250D0BC;
loc_8250D0B8:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
loc_8250D0BC:
	// std r26,176(r1)
	PPC_STORE_U64(ctx.r1.u32 + 176, ctx.r26.u64);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x8241f040
	ctx.lr = 0x8250D0C8;
	sub_8241F040(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,264
	ctx.r3.s64 = ctx.r1.s64 + 264;
	// bl 0x8241f040
	ctx.lr = 0x8250D0D4;
	sub_8241F040(ctx, base);
	// lwz r11,176(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x8250d0e8
	if (cr6.eq) goto loc_8250D0E8;
loc_8250D0E4:
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
loc_8250D0E8:
	// clrlwi r10,r24,31
	ctx.r10.u64 = ctx.r24.u32 & 0x1;
	// clrlwi r31,r11,24
	ctx.r31.u64 = ctx.r11.u32 & 0xFF;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x8250d108
	if (cr6.eq) goto loc_8250D108;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// rlwinm r24,r24,0,0,30
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 0) & 0xFFFFFFFE;
	// bl 0x8241f040
	ctx.lr = 0x8250D108;
	sub_8241F040(ctx, base);
loc_8250D108:
	// clrlwi r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8250d158
	if (cr6.eq) goto loc_8250D158;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83102db0
	ctx.lr = 0x8250D11C;
	sub_83102DB0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82452360
	ctx.lr = 0x8250D128;
	sub_82452360(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// addi r3,r1,528
	ctx.r3.s64 = ctx.r1.s64 + 528;
	// bl 0x8241e628
	ctx.lr = 0x8250D138;
	sub_8241E628(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r7,1
	ctx.r7.s64 = 1;
	// bl 0x8245f020
	ctx.lr = 0x8250D150;
	sub_8245F020(ctx, base);
	// addi r3,r1,528
	ctx.r3.s64 = ctx.r1.s64 + 528;
	// bl 0x8241d6c0
	ctx.lr = 0x8250D158;
	sub_8241D6C0(ctx, base);
loc_8250D158:
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8241f040
	ctx.lr = 0x8250D164;
	sub_8241F040(ctx, base);
	// addi r29,r29,8
	ctx.r29.s64 = ctx.r29.s64 + 8;
	// cmplw cr6,r29,r25
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r25.u32, xer);
	// bne cr6,0x8250cfc8
	if (!cr6.eq) goto loc_8250CFC8;
loc_8250D170:
	// addi r29,r22,408
	ctx.r29.s64 = ctx.r22.s64 + 408;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x824b75b0
	ctx.lr = 0x8250D17C;
	sub_824B75B0(ctx, base);
	// lwz r31,8(r27)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
loc_8250D180:
	// subf r11,r31,r23
	ctx.r11.s64 = ctx.r23.s64 - ctx.r31.s64;
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r11,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r9,r11,24
	ctx.r9.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8250d248
	if (cr6.eq) goto loc_8250D248;
	// lwz r11,40(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 40);
	// rlwinm r10,r31,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r3,r1,296
	ctx.r3.s64 = ctx.r1.s64 + 296;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x82451c28
	ctx.lr = 0x8250D1AC;
	sub_82451C28(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,296
	ctx.r3.s64 = ctx.r1.s64 + 296;
	// lwz r30,0(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x8241f040
	ctx.lr = 0x8250D1C0;
	sub_8241F040(ctx, base);
	// bl 0x824b7200
	ctx.lr = 0x8250D1C4;
	sub_824B7200(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// li r3,136
	ctx.r3.s64 = 136;
	// lwz r5,24(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// bl 0x8248b840
	ctx.lr = 0x8250D1D8;
	sub_8248B840(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8250d1f8
	if (cr6.eq) goto loc_8250D1F8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x824bc250
	ctx.lr = 0x8250D1E8;
	sub_824BC250(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x8250d1fc
	goto loc_8250D1FC;
loc_8250D1F0:
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
	// b 0x8250d0e4
	goto loc_8250D0E4;
loc_8250D1F8:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
loc_8250D1FC:
	// std r26,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r26.u64);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8241f040
	ctx.lr = 0x8250D208;
	sub_8241F040(ctx, base);
	// lwz r3,128(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x824d3e30
	ctx.lr = 0x8250D210;
	sub_824D3E30(ctx, base);
	// lwz r11,32(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 32);
	// rlwinm r31,r31,5,0,26
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 5) & 0xFFFFFFE0;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// add r4,r31,r11
	ctx.r4.u64 = ctx.r31.u64 + ctx.r11.u64;
	// bl 0x824b7380
	ctx.lr = 0x8250D22C;
	sub_824B7380(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8241f040
	ctx.lr = 0x8250D238;
	sub_8241F040(ctx, base);
	// lwz r11,32(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 32);
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// lwz r31,20(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// b 0x8250d180
	goto loc_8250D180;
loc_8250D248:
	// lwz r4,0(r20)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// std r26,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, ctx.r26.u64);
	// bl 0x8241f040
	ctx.lr = 0x8250D258;
	sub_8241F040(ctx, base);
	// lwz r3,136(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8250d2b0
	if (cr6.eq) goto loc_8250D2B0;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// bl 0x824d4348
	ctx.lr = 0x8250D270;
	sub_824D4348(ctx, base);
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8250d288
	if (!cr6.eq) goto loc_8250D288;
	// addi r3,r22,320
	ctx.r3.s64 = ctx.r22.s64 + 320;
	// lwz r4,136(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// bl 0x8241f040
	ctx.lr = 0x8250D288;
	sub_8241F040(ctx, base);
loc_8250D288:
	// std r26,192(r1)
	PPC_STORE_U64(ctx.r1.u32 + 192, ctx.r26.u64);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x8241f040
	ctx.lr = 0x8250D298;
	sub_8241F040(ctx, base);
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// lwz r4,192(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// bl 0x8241f040
	ctx.lr = 0x8250D2A4;
	sub_8241F040(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x8241f040
	ctx.lr = 0x8250D2B0;
	sub_8241F040(ctx, base);
loc_8250D2B0:
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// bl 0x8241f040
	ctx.lr = 0x8250D2BC;
	sub_8241F040(ctx, base);
	// lis r10,-32220
	ctx.r10.s64 = -2111569920;
	// li r11,8
	ctx.r11.s64 = 8;
	// addi r9,r1,104
	ctx.r9.s64 = ctx.r1.s64 + 104;
	// addi r8,r10,-9828
	ctx.r8.s64 = ctx.r10.s64 + -9828;
	// stw r11,252(r1)
	PPC_STORE_U32(ctx.r1.u32 + 252, ctx.r11.u32);
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// stw r9,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r9.u32);
	// addi r6,r1,100
	ctx.r6.s64 = ctx.r1.s64 + 100;
	// stw r8,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r8.u32);
	// stw r7,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r7.u32);
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// stw r6,248(r1)
	PPC_STORE_U32(ctx.r1.u32 + 248, ctx.r6.u32);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// stw r11,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, ctx.r11.u32);
	// bl 0x8247b7d8
	ctx.lr = 0x8250D2F8;
	sub_8247B7D8(ctx, base);
	// lwz r3,104(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// stw r26,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r26.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8250d31c
	if (cr6.eq) goto loc_8250D31C;
	// lis r4,11
	ctx.r4.s64 = 720896;
	// ori r4,r4,1
	ctx.r4.u64 = ctx.r4.u64 | 1;
	// bl 0x8247b268
	ctx.lr = 0x8250D314;
	sub_8247B268(ctx, base);
	// stw r26,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r26.u32);
	// stw r26,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r26.u32);
loc_8250D31C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r10,r11,8980
	ctx.r10.s64 = ctx.r11.s64 + 8980;
	// stw r10,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r10.u32);
loc_8250D328:
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8241f040
	ctx.lr = 0x8250D334;
	sub_8241F040(ctx, base);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82573c50
	ctx.lr = 0x8250D33C;
	sub_82573C50(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8241f040
	ctx.lr = 0x8250D348;
	sub_8241F040(ctx, base);
loc_8250D348:
	// addi r1,r1,720
	ctx.r1.s64 = ctx.r1.s64 + 720;
	// b 0x831cdb14
	__restgprlr_19(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8250D350"))) PPC_WEAK_FUNC(sub_8250D350);
PPC_FUNC_IMPL(__imp__sub_8250D350) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x8250D358;
	__savegprlr_26(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// bl 0x824b24a0
	ctx.lr = 0x8250D364;
	sub_824B24A0(ctx, base);
	// addi r29,r27,360
	ctx.r29.s64 = ctx.r27.s64 + 360;
	// li r28,0
	ctx.r28.s64 = 0;
	// lwz r30,368(r27)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r27.u32 + 368);
loc_8250D370:
	// cmplw cr6,r29,r29
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r29.u32, xer);
	// bne cr6,0x8250d384
	if (!cr6.eq) goto loc_8250D384;
	// cmpwi cr6,r30,-1
	cr6.compare<int32_t>(ctx.r30.s32, -1, xer);
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// beq cr6,0x8250d388
	if (cr6.eq) goto loc_8250D388;
loc_8250D384:
	// li r11,1
	ctx.r11.s64 = 1;
loc_8250D388:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8250d448
	if (cr6.eq) goto loc_8250D448;
	// lwz r10,40(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 40);
	// rlwinm r11,r30,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x82451c28
	ctx.lr = 0x8250D3A8;
	sub_82451C28(ctx, base);
	// lwz r31,0(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x8250d3e8
	if (cr6.eq) goto loc_8250D3E8;
	// bl 0x824b4418
	ctx.lr = 0x8250D3B8;
	sub_824B4418(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8250D3D0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x8246be58
	ctx.lr = 0x8250D3D8;
	sub_8246BE58(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x8250d3ec
	if (!cr6.eq) goto loc_8250D3EC;
loc_8250D3E8:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_8250D3EC:
	// std r28,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r28.u64);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8241f040
	ctx.lr = 0x8250D3F8;
	sub_8241F040(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r31,80(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8241f040
	ctx.lr = 0x8250D408;
	sub_8241F040(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8241f040
	ctx.lr = 0x8250D414;
	sub_8241F040(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x8250d434
	if (cr6.eq) goto loc_8250D434;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r31,32
	ctx.r4.s64 = ctx.r31.s64 + 32;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8250D434;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8250D434:
	// lwz r11,32(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// rlwinm r10,r30,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 5) & 0xFFFFFFE0;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r30,20(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// b 0x8250d370
	goto loc_8250D370;
loc_8250D448:
	// addi r3,r27,32
	ctx.r3.s64 = ctx.r27.s64 + 32;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8250D454"))) PPC_WEAK_FUNC(sub_8250D454);
PPC_FUNC_IMPL(__imp__sub_8250D454) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8250D458"))) PPC_WEAK_FUNC(sub_8250D458);
PPC_FUNC_IMPL(__imp__sub_8250D458) {
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
	// addi r30,r3,312
	ctx.r30.s64 = ctx.r3.s64 + 312;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8241f040
	ctx.lr = 0x8250D480;
	sub_8241F040(ctx, base);
	// addi r5,r31,408
	ctx.r5.s64 = ctx.r31.s64 + 408;
	// addi r4,r31,360
	ctx.r4.s64 = ctx.r31.s64 + 360;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x824e0868
	ctx.lr = 0x8250D490;
	sub_824E0868(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x8241f040
	ctx.lr = 0x8250D4A0;
	sub_8241F040(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8241f040
	ctx.lr = 0x8250D4AC;
	sub_8241F040(ctx, base);
	// lwz r3,312(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 312);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8250d4c0
	if (cr6.eq) goto loc_8250D4C0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x824d44c0
	ctx.lr = 0x8250D4C0;
	sub_824D44C0(ctx, base);
loc_8250D4C0:
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

__attribute__((alias("__imp__sub_8250D4D8"))) PPC_WEAK_FUNC(sub_8250D4D8);
PPC_FUNC_IMPL(__imp__sub_8250D4D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x8250D4E0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x824fe5f8
	ctx.lr = 0x8250D4EC;
	sub_824FE5F8(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r10,r11,-18212
	ctx.r10.s64 = ctx.r11.s64 + -18212;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x8241fb80
	ctx.lr = 0x8250D4FC;
	sub_8241FB80(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,288
	ctx.r3.s64 = ctx.r31.s64 + 288;
	// bl 0x8241fa28
	ctx.lr = 0x8250D508;
	sub_8241FA28(ctx, base);
	// li r9,1
	ctx.r9.s64 = 1;
	// li r30,0
	ctx.r30.s64 = 0;
	// stb r9,304(r31)
	PPC_STORE_U8(ctx.r31.u32 + 304, ctx.r9.u8);
	// addi r3,r31,312
	ctx.r3.s64 = ctx.r31.s64 + 312;
	// std r30,312(r31)
	PPC_STORE_U64(ctx.r31.u32 + 312, ctx.r30.u64);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8241f040
	ctx.lr = 0x8250D524;
	sub_8241F040(ctx, base);
	// std r30,320(r31)
	PPC_STORE_U64(ctx.r31.u32 + 320, ctx.r30.u64);
	// addi r3,r31,320
	ctx.r3.s64 = ctx.r31.s64 + 320;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8241f040
	ctx.lr = 0x8250D534;
	sub_8241F040(ctx, base);
	// std r30,328(r31)
	PPC_STORE_U64(ctx.r31.u32 + 328, ctx.r30.u64);
	// addi r29,r31,328
	ctx.r29.s64 = ctx.r31.s64 + 328;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8241f040
	ctx.lr = 0x8250D548;
	sub_8241F040(ctx, base);
	// addi r28,r29,8
	ctx.r28.s64 = ctx.r29.s64 + 8;
	// bl 0x8241fb80
	ctx.lr = 0x8250D550;
	sub_8241FB80(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8241fa28
	ctx.lr = 0x8250D55C;
	sub_8241FA28(ctx, base);
	// stw r30,352(r31)
	PPC_STORE_U32(ctx.r31.u32 + 352, ctx.r30.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8241f040
	ctx.lr = 0x8250D56C;
	sub_8241F040(ctx, base);
	// bl 0x8241fb80
	ctx.lr = 0x8250D570;
	sub_8241FB80(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8241fa70
	ctx.lr = 0x8250D57C;
	sub_8241FA70(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r30,360(r31)
	PPC_STORE_U32(ctx.r31.u32 + 360, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,364(r31)
	PPC_STORE_U32(ctx.r31.u32 + 364, ctx.r30.u32);
	// stw r11,368(r31)
	PPC_STORE_U32(ctx.r31.u32 + 368, ctx.r11.u32);
	// stw r11,372(r31)
	PPC_STORE_U32(ctx.r31.u32 + 372, ctx.r11.u32);
	// stw r11,376(r31)
	PPC_STORE_U32(ctx.r31.u32 + 376, ctx.r11.u32);
	// std r30,384(r31)
	PPC_STORE_U64(ctx.r31.u32 + 384, ctx.r30.u64);
	// std r30,392(r31)
	PPC_STORE_U64(ctx.r31.u32 + 392, ctx.r30.u64);
	// stw r30,400(r31)
	PPC_STORE_U32(ctx.r31.u32 + 400, ctx.r30.u32);
	// stw r30,408(r31)
	PPC_STORE_U32(ctx.r31.u32 + 408, ctx.r30.u32);
	// stw r30,412(r31)
	PPC_STORE_U32(ctx.r31.u32 + 412, ctx.r30.u32);
	// stw r11,416(r31)
	PPC_STORE_U32(ctx.r31.u32 + 416, ctx.r11.u32);
	// stw r11,420(r31)
	PPC_STORE_U32(ctx.r31.u32 + 420, ctx.r11.u32);
	// stw r11,424(r31)
	PPC_STORE_U32(ctx.r31.u32 + 424, ctx.r11.u32);
	// std r30,432(r31)
	PPC_STORE_U64(ctx.r31.u32 + 432, ctx.r30.u64);
	// std r30,440(r31)
	PPC_STORE_U64(ctx.r31.u32 + 440, ctx.r30.u64);
	// stw r30,448(r31)
	PPC_STORE_U32(ctx.r31.u32 + 448, ctx.r30.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8250D5CC"))) PPC_WEAK_FUNC(sub_8250D5CC);
PPC_FUNC_IMPL(__imp__sub_8250D5CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8250D5D0"))) PPC_WEAK_FUNC(sub_8250D5D0);
PPC_FUNC_IMPL(__imp__sub_8250D5D0) {
	PPC_FUNC_PROLOGUE();
	// b 0x8250c7b0
	sub_8250C7B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8250D5D4"))) PPC_WEAK_FUNC(sub_8250D5D4);
PPC_FUNC_IMPL(__imp__sub_8250D5D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8250D5D8"))) PPC_WEAK_FUNC(sub_8250D5D8);
PPC_FUNC_IMPL(__imp__sub_8250D5D8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x8250D5E0;
	__savegprlr_26(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// bl 0x824fe060
	ctx.lr = 0x8250D5F0;
	sub_824FE060(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r27,r31,288
	ctx.r27.s64 = ctx.r31.s64 + 288;
	// addi r10,r11,-18212
	ctx.r10.s64 = ctx.r11.s64 + -18212;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x824201f0
	ctx.lr = 0x8250D60C;
	sub_824201F0(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// ld r4,312(r31)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r31.u32 + 312);
	// addi r29,r31,312
	ctx.r29.s64 = ctx.r31.s64 + 312;
	// bl 0x8247c5e8
	ctx.lr = 0x8250D61C;
	sub_8247C5E8(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// std r30,312(r31)
	PPC_STORE_U64(ctx.r31.u32 + 312, ctx.r30.u64);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8241f040
	ctx.lr = 0x8250D630;
	sub_8241F040(ctx, base);
	// std r30,320(r31)
	PPC_STORE_U64(ctx.r31.u32 + 320, ctx.r30.u64);
	// addi r3,r31,320
	ctx.r3.s64 = ctx.r31.s64 + 320;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8241f040
	ctx.lr = 0x8250D640;
	sub_8241F040(ctx, base);
	// std r30,328(r31)
	PPC_STORE_U64(ctx.r31.u32 + 328, ctx.r30.u64);
	// addi r29,r31,328
	ctx.r29.s64 = ctx.r31.s64 + 328;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8241f040
	ctx.lr = 0x8250D654;
	sub_8241F040(ctx, base);
	// addi r26,r29,8
	ctx.r26.s64 = ctx.r29.s64 + 8;
	// bl 0x8241fb80
	ctx.lr = 0x8250D65C;
	sub_8241FB80(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8241fa28
	ctx.lr = 0x8250D668;
	sub_8241FA28(ctx, base);
	// stw r30,352(r31)
	PPC_STORE_U32(ctx.r31.u32 + 352, ctx.r30.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8241f040
	ctx.lr = 0x8250D678;
	sub_8241F040(ctx, base);
	// bl 0x8241fb80
	ctx.lr = 0x8250D67C;
	sub_8241FB80(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8241fa70
	ctx.lr = 0x8250D688;
	sub_8241FA70(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r30,360(r31)
	PPC_STORE_U32(ctx.r31.u32 + 360, ctx.r30.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r30,364(r31)
	PPC_STORE_U32(ctx.r31.u32 + 364, ctx.r30.u32);
	// stw r11,368(r31)
	PPC_STORE_U32(ctx.r31.u32 + 368, ctx.r11.u32);
	// stw r11,372(r31)
	PPC_STORE_U32(ctx.r31.u32 + 372, ctx.r11.u32);
	// stw r11,376(r31)
	PPC_STORE_U32(ctx.r31.u32 + 376, ctx.r11.u32);
	// std r30,384(r31)
	PPC_STORE_U64(ctx.r31.u32 + 384, ctx.r30.u64);
	// std r30,392(r31)
	PPC_STORE_U64(ctx.r31.u32 + 392, ctx.r30.u64);
	// stw r30,400(r31)
	PPC_STORE_U32(ctx.r31.u32 + 400, ctx.r30.u32);
	// stw r30,408(r31)
	PPC_STORE_U32(ctx.r31.u32 + 408, ctx.r30.u32);
	// stw r30,412(r31)
	PPC_STORE_U32(ctx.r31.u32 + 412, ctx.r30.u32);
	// stw r11,416(r31)
	PPC_STORE_U32(ctx.r31.u32 + 416, ctx.r11.u32);
	// stw r11,420(r31)
	PPC_STORE_U32(ctx.r31.u32 + 420, ctx.r11.u32);
	// stw r11,424(r31)
	PPC_STORE_U32(ctx.r31.u32 + 424, ctx.r11.u32);
	// std r30,432(r31)
	PPC_STORE_U64(ctx.r31.u32 + 432, ctx.r30.u64);
	// std r30,440(r31)
	PPC_STORE_U64(ctx.r31.u32 + 440, ctx.r30.u64);
	// stw r30,448(r31)
	PPC_STORE_U32(ctx.r31.u32 + 448, ctx.r30.u32);
	// bl 0x8241fad0
	ctx.lr = 0x8250D6D4;
	sub_8241FAD0(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x8250d7dc
	if (!cr6.eq) goto loc_8250D7DC;
	// bl 0x8248e508
	ctx.lr = 0x8250D6E4;
	sub_8248E508(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// bl 0x8248e518
	ctx.lr = 0x8250D6EC;
	sub_8248E518(ctx, base);
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(ctx.r26.u32, 0, xer);
	// beq cr6,0x8250d700
	if (cr6.eq) goto loc_8250D700;
	// subfic r11,r3,0
	xer.ca = ctx.r3.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r3.s64;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r26,r9,r26
	ctx.r26.u64 = ctx.r9.u64 & ctx.r26.u64;
loc_8250D700:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8248e3c8
	ctx.lr = 0x8250D70C;
	sub_8248E3C8(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8246aa80
	ctx.lr = 0x8250D718;
	sub_8246AA80(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x83323038
	ctx.lr = 0x8250D728;
	sub_83323038(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x83308d20
	ctx.lr = 0x8250D730;
	sub_83308D20(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8250d7d4
	if (cr6.eq) goto loc_8250D7D4;
	// lwz r11,56(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// not r10,r11
	ctx.r10.u64 = ~ctx.r11.u64;
	// rlwinm r9,r10,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8250d7d4
	if (cr6.eq) goto loc_8250D7D4;
	// bl 0x8248e508
	ctx.lr = 0x8250D754;
	sub_8248E508(ctx, base);
	// lis r5,1
	ctx.r5.s64 = 65536;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// ori r5,r5,1
	ctx.r5.u64 = ctx.r5.u64 | 1;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x825730a8
	ctx.lr = 0x8250D76C;
	sub_825730A8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8250d7ac
	if (cr6.eq) goto loc_8250D7AC;
	// lwz r11,188(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 188);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lwz r9,184(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 184);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r8,176(r28)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r28.u32 + 176);
	// addi r7,r10,-18404
	ctx.r7.s64 = ctx.r10.s64 + -18404;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r31.u32);
	// stw r30,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r30.u32);
	// stw r7,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
	// stw r9,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r9.u32);
	// stw r8,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r8.u32);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stw r29,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r29.u32);
	// b 0x8250d7b0
	goto loc_8250D7B0;
loc_8250D7AC:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_8250D7B0:
	// std r30,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r30.u64);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82572fa0
	ctx.lr = 0x8250D7BC;
	sub_82572FA0(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8247d938
	ctx.lr = 0x8250D7C8;
	sub_8247D938(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82572fa0
	ctx.lr = 0x8250D7D4;
	sub_82572FA0(ctx, base);
loc_8250D7D4:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8248e4c8
	ctx.lr = 0x8250D7DC;
	sub_8248E4C8(ctx, base);
loc_8250D7DC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8250D7E8"))) PPC_WEAK_FUNC(sub_8250D7E8);
PPC_FUNC_IMPL(__imp__sub_8250D7E8) {
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
	// bl 0x82467738
	ctx.lr = 0x8250D800;
	sub_82467738(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// li r3,464
	ctx.r3.s64 = 464;
	// lwz r5,24(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// bl 0x8248b768
	ctx.lr = 0x8250D814;
	sub_8248B768(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8250d838
	if (cr6.eq) goto loc_8250D838;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8250d4d8
	ctx.lr = 0x8250D824;
	sub_8250D4D8(ctx, base);
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
loc_8250D838:
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

__attribute__((alias("__imp__sub_8250D850"))) PPC_WEAK_FUNC(sub_8250D850);
PPC_FUNC_IMPL(__imp__sub_8250D850) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8250d864
	if (cr6.eq) goto loc_8250D864;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// b 0x8250d5d8
	sub_8250D5D8(ctx, base);
	return;
loc_8250D864:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8250D86C"))) PPC_WEAK_FUNC(sub_8250D86C);
PPC_FUNC_IMPL(__imp__sub_8250D86C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8250D870"))) PPC_WEAK_FUNC(sub_8250D870);
PPC_FUNC_IMPL(__imp__sub_8250D870) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x8250c7b0
	ctx.lr = 0x8250D888;
	sub_8250C7B0(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r30,r11,-18464
	ctx.r30.s64 = ctx.r11.s64 + -18464;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r30,-184
	ctx.r4.s64 = ctx.r30.s64 + -184;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8247b0f0
	ctx.lr = 0x8250D8A4;
	sub_8247B0F0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x8246be10
	ctx.lr = 0x8250D8B0;
	sub_8246BE10(ctx, base);
	// bl 0x824ffb68
	ctx.lr = 0x8250D8B4;
	sub_824FFB68(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8246be18
	ctx.lr = 0x8250D8C0;
	sub_8246BE18(ctx, base);
	// lis r5,1
	ctx.r5.s64 = 65536;
	// li r4,8
	ctx.r4.s64 = 8;
	// ori r5,r5,1
	ctx.r5.u64 = ctx.r5.u64 | 1;
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x825730a8
	ctx.lr = 0x8250D8D4;
	sub_825730A8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8250d8f0
	if (cr6.eq) goto loc_8250D8F0;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r9,r10,-18236
	ctx.r9.s64 = ctx.r10.s64 + -18236;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// b 0x8250d8f4
	goto loc_8250D8F4;
loc_8250D8F0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8250D8F4:
	// stw r11,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r11.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8246be48
	ctx.lr = 0x8250D904;
	sub_8246BE48(ctx, base);
	// addi r5,r30,-164
	ctx.r5.s64 = ctx.r30.s64 + -164;
	// li r6,288
	ctx.r6.s64 = 288;
	// li r4,12
	ctx.r4.s64 = 12;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824788c8
	ctx.lr = 0x8250D918;
	sub_824788C8(ctx, base);
	// addi r5,r30,-144
	ctx.r5.s64 = ctx.r30.s64 + -144;
	// li r6,304
	ctx.r6.s64 = 304;
	// li r4,10
	ctx.r4.s64 = 10;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824788c8
	ctx.lr = 0x8250D92C;
	sub_824788C8(ctx, base);
	// bl 0x824b7290
	ctx.lr = 0x8250D930;
	sub_824B7290(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r30,-124
	ctx.r4.s64 = ctx.r30.s64 + -124;
	// li r5,312
	ctx.r5.s64 = 312;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82478598
	ctx.lr = 0x8250D944;
	sub_82478598(ctx, base);
	// addi r4,r30,-104
	ctx.r4.s64 = ctx.r30.s64 + -104;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824751d8
	ctx.lr = 0x8250D950;
	sub_824751D8(ctx, base);
	// addi r4,r30,-84
	ctx.r4.s64 = ctx.r30.s64 + -84;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8246c3a0
	ctx.lr = 0x8250D95C;
	sub_8246C3A0(ctx, base);
	// addi r4,r30,-76
	ctx.r4.s64 = ctx.r30.s64 + -76;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8241f280
	ctx.lr = 0x8250D96C;
	sub_8241F280(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x824f5ee0
	ctx.lr = 0x8250D974;
	sub_824F5EE0(ctx, base);
	// lwz r3,108(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8250d994
	if (cr6.eq) goto loc_8250D994;
	// lis r4,2
	ctx.r4.s64 = 131072;
	// ori r4,r4,2
	ctx.r4.u64 = ctx.r4.u64 | 2;
	// bl 0x82573040
	ctx.lr = 0x8250D98C;
	sub_82573040(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
loc_8250D994:
	// lis r11,-32175
	ctx.r11.s64 = -2108620800;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-10264
	ctx.r4.s64 = ctx.r11.s64 + -10264;
	// bl 0x8246be80
	ctx.lr = 0x8250D9A4;
	sub_8246BE80(ctx, base);
	// lis r10,-31780
	ctx.r10.s64 = -2082734080;
	// addi r6,r30,-68
	ctx.r6.s64 = ctx.r30.s64 + -68;
	// addi r7,r10,6560
	ctx.r7.s64 = ctx.r10.s64 + 6560;
	// addi r5,r30,-64
	ctx.r5.s64 = ctx.r30.s64 + -64;
	// addi r4,r30,-44
	ctx.r4.s64 = ctx.r30.s64 + -44;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82479460
	ctx.lr = 0x8250D9C0;
	sub_82479460(ctx, base);
	// addi r6,r30,-24
	ctx.r6.s64 = ctx.r30.s64 + -24;
	// addi r5,r30,-20
	ctx.r5.s64 = ctx.r30.s64 + -20;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82479460
	ctx.lr = 0x8250D9D8;
	sub_82479460(ctx, base);
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

__attribute__((alias("__imp__sub_8250D9F0"))) PPC_WEAK_FUNC(sub_8250D9F0);
PPC_FUNC_IMPL(__imp__sub_8250D9F0) {
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
	// addi r3,r3,408
	ctx.r3.s64 = ctx.r3.s64 + 408;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x824b75b0
	ctx.lr = 0x8250DA14;
	sub_824B75B0(ctx, base);
	// addi r3,r31,360
	ctx.r3.s64 = ctx.r31.s64 + 360;
	// bl 0x8252e708
	ctx.lr = 0x8250DA1C;
	sub_8252E708(ctx, base);
	// addi r3,r31,328
	ctx.r3.s64 = ctx.r31.s64 + 328;
	// bl 0x83308d20
	ctx.lr = 0x8250DA24;
	sub_83308D20(ctx, base);
	// addi r3,r31,320
	ctx.r3.s64 = ctx.r31.s64 + 320;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8241f040
	ctx.lr = 0x8250DA30;
	sub_8241F040(ctx, base);
	// addi r3,r31,312
	ctx.r3.s64 = ctx.r31.s64 + 312;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8241f040
	ctx.lr = 0x8250DA3C;
	sub_8241F040(ctx, base);
	// addi r3,r31,288
	ctx.r3.s64 = ctx.r31.s64 + 288;
	// bl 0x8241fb00
	ctx.lr = 0x8250DA44;
	sub_8241FB00(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824fe228
	ctx.lr = 0x8250DA4C;
	sub_824FE228(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8250da64
	if (cr6.eq) goto loc_8250DA64;
	// bl 0x8248b818
	ctx.lr = 0x8250DA60;
	sub_8248B818(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8250DA64:
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

__attribute__((alias("__imp__sub_8250DA7C"))) PPC_WEAK_FUNC(sub_8250DA7C);
PPC_FUNC_IMPL(__imp__sub_8250DA7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8250DA80"))) PPC_WEAK_FUNC(sub_8250DA80);
PPC_FUNC_IMPL(__imp__sub_8250DA80) {
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
	// lis r10,-31767
	ctx.r10.s64 = -2081882112;
	// lwz r11,24656(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24656);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x8250dae0
	if (!cr6.eq) goto loc_8250DAE0;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-31767
	ctx.r9.s64 = -2081882112;
	// stw r11,24656(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24656, ctx.r11.u32);
	// addi r31,r9,24512
	ctx.r31.s64 = ctx.r9.s64 + 24512;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8256e148
	ctx.lr = 0x8250DABC;
	sub_8256E148(ctx, base);
	// lis r8,-31793
	ctx.r8.s64 = -2083586048;
	// addi r3,r8,9144
	ctx.r3.s64 = ctx.r8.s64 + 9144;
	// bl 0x831cdcc8
	ctx.lr = 0x8250DAC8;
	sub_831CDCC8(ctx, base);
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
loc_8250DAE0:
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// addi r3,r11,24512
	ctx.r3.s64 = ctx.r11.s64 + 24512;
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

__attribute__((alias("__imp__sub_8250DAFC"))) PPC_WEAK_FUNC(sub_8250DAFC);
PPC_FUNC_IMPL(__imp__sub_8250DAFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8250DB00"))) PPC_WEAK_FUNC(sub_8250DB00);
PPC_FUNC_IMPL(__imp__sub_8250DB00) {
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
	// lis r10,-31767
	ctx.r10.s64 = -2081882112;
	// lwz r11,24896(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24896);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x8250db74
	if (!cr6.eq) goto loc_8250DB74;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-31767
	ctx.r9.s64 = -2081882112;
	// stw r11,24896(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24896, ctx.r11.u32);
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// addi r31,r9,24664
	ctx.r31.s64 = ctx.r9.s64 + 24664;
	// lis r6,4
	ctx.r6.s64 = 262144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r8,-18132
	ctx.r5.s64 = ctx.r8.s64 + -18132;
	// ori r6,r6,4
	ctx.r6.u64 = ctx.r6.u64 | 4;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82477fc8
	ctx.lr = 0x8250DB50;
	sub_82477FC8(ctx, base);
	// lis r7,-31793
	ctx.r7.s64 = -2083586048;
	// addi r3,r7,9160
	ctx.r3.s64 = ctx.r7.s64 + 9160;
	// bl 0x831cdcc8
	ctx.lr = 0x8250DB5C;
	sub_831CDCC8(ctx, base);
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
loc_8250DB74:
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// addi r3,r11,24664
	ctx.r3.s64 = ctx.r11.s64 + 24664;
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

__attribute__((alias("__imp__sub_8250DB90"))) PPC_WEAK_FUNC(sub_8250DB90);
PPC_FUNC_IMPL(__imp__sub_8250DB90) {
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
	// bl 0x8250da80
	ctx.lr = 0x8250DBA0;
	sub_8250DA80(ctx, base);
	// bl 0x83102db0
	ctx.lr = 0x8250DBA4;
	sub_83102DB0(ctx, base);
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

__attribute__((alias("__imp__sub_8250DBB8"))) PPC_WEAK_FUNC(sub_8250DBB8);
PPC_FUNC_IMPL(__imp__sub_8250DBB8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x8250DBC0;
	__savegprlr_29(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,4(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8253b0c0
	ctx.lr = 0x8250DBD8;
	sub_8253B0C0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8253b0c0
	ctx.lr = 0x8250DBEC;
	sub_8253B0C0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x8250dc5c
	if (cr6.eq) goto loc_8250DC5C;
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8250dc5c
	if (cr6.eq) goto loc_8250DC5C;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8250dc5c
	if (cr6.eq) goto loc_8250DC5C;
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8250dc5c
	if (cr6.eq) goto loc_8250DC5C;
	// bl 0x8250da80
	ctx.lr = 0x8250DC1C;
	sub_8250DA80(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82576848
	ctx.lr = 0x8250DC2C;
	sub_82576848(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82576848
	ctx.lr = 0x8250DC3C;
	sub_82576848(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x8256e050
	ctx.lr = 0x8250DC4C;
	sub_8256E050(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8241ff70
	ctx.lr = 0x8250DC54;
	sub_8241FF70(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8241ff70
	ctx.lr = 0x8250DC5C;
	sub_8241FF70(ctx, base);
loc_8250DC5C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8250DC68"))) PPC_WEAK_FUNC(sub_8250DC68);
PPC_FUNC_IMPL(__imp__sub_8250DC68) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x8250DC70;
	__savegprlr_29(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,4(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8253b0c0
	ctx.lr = 0x8250DC88;
	sub_8253B0C0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8253b0c0
	ctx.lr = 0x8250DC9C;
	sub_8253B0C0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x8250dd0c
	if (cr6.eq) goto loc_8250DD0C;
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8250dd0c
	if (cr6.eq) goto loc_8250DD0C;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8250dd0c
	if (cr6.eq) goto loc_8250DD0C;
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8250dd0c
	if (cr6.eq) goto loc_8250DD0C;
	// bl 0x8250da80
	ctx.lr = 0x8250DCCC;
	sub_8250DA80(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82576848
	ctx.lr = 0x8250DCDC;
	sub_82576848(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82576848
	ctx.lr = 0x8250DCEC;
	sub_82576848(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x8256e140
	ctx.lr = 0x8250DCFC;
	sub_8256E140(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8241ff70
	ctx.lr = 0x8250DD04;
	sub_8241FF70(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8241ff70
	ctx.lr = 0x8250DD0C;
	sub_8241FF70(ctx, base);
loc_8250DD0C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8250DD18"))) PPC_WEAK_FUNC(sub_8250DD18);
PPC_FUNC_IMPL(__imp__sub_8250DD18) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x8250DD20;
	__savegprlr_29(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,4(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8253b0c0
	ctx.lr = 0x8250DD38;
	sub_8253B0C0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8253b0c0
	ctx.lr = 0x8250DD4C;
	sub_8253B0C0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x8250ddbc
	if (cr6.eq) goto loc_8250DDBC;
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8250ddbc
	if (cr6.eq) goto loc_8250DDBC;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8250ddbc
	if (cr6.eq) goto loc_8250DDBC;
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8250ddbc
	if (cr6.eq) goto loc_8250DDBC;
	// bl 0x8250da80
	ctx.lr = 0x8250DD7C;
	sub_8250DA80(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82576848
	ctx.lr = 0x8250DD8C;
	sub_82576848(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82576848
	ctx.lr = 0x8250DD9C;
	sub_82576848(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x8256c718
	ctx.lr = 0x8250DDAC;
	sub_8256C718(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8241ff70
	ctx.lr = 0x8250DDB4;
	sub_8241FF70(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8241ff70
	ctx.lr = 0x8250DDBC;
	sub_8241FF70(ctx, base);
loc_8250DDBC:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8250DDC8"))) PPC_WEAK_FUNC(sub_8250DDC8);
PPC_FUNC_IMPL(__imp__sub_8250DDC8) {
	PPC_FUNC_PROLOGUE();
	// b 0x8250dc68
	sub_8250DC68(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8250DDCC"))) PPC_WEAK_FUNC(sub_8250DDCC);
PPC_FUNC_IMPL(__imp__sub_8250DDCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8250DDD0"))) PPC_WEAK_FUNC(sub_8250DDD0);
PPC_FUNC_IMPL(__imp__sub_8250DDD0) {
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
	// bl 0x8250db00
	ctx.lr = 0x8250DDE8;
	sub_8250DB00(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x824890e0
	ctx.lr = 0x8250DDF8;
	sub_824890E0(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32175
	ctx.r10.s64 = -2108620800;
	// addi r31,r11,-18068
	ctx.r31.s64 = ctx.r11.s64 + -18068;
	// addi r5,r10,-9288
	ctx.r5.s64 = ctx.r10.s64 + -9288;
	// addi r4,r31,-44
	ctx.r4.s64 = ctx.r31.s64 + -44;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82489138
	ctx.lr = 0x8250DE14;
	sub_82489138(ctx, base);
	// lis r9,-32175
	ctx.r9.s64 = -2108620800;
	// addi r4,r31,-40
	ctx.r4.s64 = ctx.r31.s64 + -40;
	// addi r5,r9,-8760
	ctx.r5.s64 = ctx.r9.s64 + -8760;
	// bl 0x82489138
	ctx.lr = 0x8250DE24;
	sub_82489138(ctx, base);
	// lis r8,-32175
	ctx.r8.s64 = -2108620800;
	// addi r4,r31,-32
	ctx.r4.s64 = ctx.r31.s64 + -32;
	// addi r5,r8,-9112
	ctx.r5.s64 = ctx.r8.s64 + -9112;
	// bl 0x82489138
	ctx.lr = 0x8250DE34;
	sub_82489138(ctx, base);
	// lis r7,-32175
	ctx.r7.s64 = -2108620800;
	// addi r4,r31,-20
	ctx.r4.s64 = ctx.r31.s64 + -20;
	// addi r5,r7,-8936
	ctx.r5.s64 = ctx.r7.s64 + -8936;
	// bl 0x82489138
	ctx.lr = 0x8250DE44;
	sub_82489138(ctx, base);
	// lis r6,-32175
	ctx.r6.s64 = -2108620800;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r5,r6,-9328
	ctx.r5.s64 = ctx.r6.s64 + -9328;
	// bl 0x82489138
	ctx.lr = 0x8250DE54;
	sub_82489138(ctx, base);
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

__attribute__((alias("__imp__sub_8250DE68"))) PPC_WEAK_FUNC(sub_8250DE68);
PPC_FUNC_IMPL(__imp__sub_8250DE68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82489b30
	ctx.lr = 0x8250DE80;
	sub_82489B30(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8250ddd0
	ctx.lr = 0x8250DE88;
	sub_8250DDD0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r10,r11,12828
	ctx.r10.s64 = ctx.r11.s64 + 12828;
	// stw r10,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// bl 0x82465ee8
	ctx.lr = 0x8250DE9C;
	sub_82465EE8(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8257f3f0
	ctx.lr = 0x8250DEA4;
	sub_8257F3F0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82489378
	ctx.lr = 0x8250DEAC;
	sub_82489378(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8250DEC0"))) PPC_WEAK_FUNC(sub_8250DEC0);
PPC_FUNC_IMPL(__imp__sub_8250DEC0) {
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
	// bl 0x8250db00
	ctx.lr = 0x8250DED4;
	sub_8250DB00(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,-18124
	ctx.r4.s64 = ctx.r11.s64 + -18124;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8247b0f0
	ctx.lr = 0x8250DEEC;
	sub_8247B0F0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8246be10
	ctx.lr = 0x8250DEF8;
	sub_8246BE10(ctx, base);
	// bl 0x82467738
	ctx.lr = 0x8250DEFC;
	sub_82467738(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8246be18
	ctx.lr = 0x8250DF08;
	sub_8246BE18(ctx, base);
	// lis r10,-32175
	ctx.r10.s64 = -2108620800;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r10,-8752
	ctx.r4.s64 = ctx.r10.s64 + -8752;
	// bl 0x8246be38
	ctx.lr = 0x8250DF18;
	sub_8246BE38(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824894a0
	ctx.lr = 0x8250DF20;
	sub_824894A0(ctx, base);
	// lwz r31,4(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lis r9,-32175
	ctx.r9.s64 = -2108620800;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r9,-8600
	ctx.r4.s64 = ctx.r9.s64 + -8600;
	// bl 0x8253b5e8
	ctx.lr = 0x8250DF38;
	sub_8253B5E8(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253be88
	ctx.lr = 0x8250DF4C;
	sub_8253BE88(ctx, base);
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

__attribute__((alias("__imp__sub_8250DF60"))) PPC_WEAK_FUNC(sub_8250DF60);
PPC_FUNC_IMPL(__imp__sub_8250DF60) {
	PPC_FUNC_PROLOGUE();
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x824b3de0
	ctx.lr = 0x8250DF7C;
	sub_824B3DE0(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r10,r11,-17380
	ctx.r10.s64 = ctx.r11.s64 + -17380;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x8241f278
	ctx.lr = 0x8250DF8C;
	sub_8241F278(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,104
	ctx.r3.s64 = ctx.r31.s64 + 104;
	// bl 0x8241f130
	ctx.lr = 0x8250DF98;
	sub_8241F130(ctx, base);
	// bl 0x8241fb80
	ctx.lr = 0x8250DF9C;
	sub_8241FB80(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,120
	ctx.r3.s64 = ctx.r31.s64 + 120;
	// bl 0x8241fa28
	ctx.lr = 0x8250DFA8;
	sub_8241FA28(ctx, base);
	// bl 0x8241fb80
	ctx.lr = 0x8250DFAC;
	sub_8241FB80(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,136
	ctx.r3.s64 = ctx.r31.s64 + 136;
	// bl 0x8241fa28
	ctx.lr = 0x8250DFB8;
	sub_8241FA28(ctx, base);
	// bl 0x8241fb80
	ctx.lr = 0x8250DFBC;
	sub_8241FB80(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,152
	ctx.r3.s64 = ctx.r31.s64 + 152;
	// bl 0x8241fa28
	ctx.lr = 0x8250DFC8;
	sub_8241FA28(ctx, base);
	// bl 0x8241fb80
	ctx.lr = 0x8250DFCC;
	sub_8241FB80(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,168
	ctx.r3.s64 = ctx.r31.s64 + 168;
	// bl 0x8241fa28
	ctx.lr = 0x8250DFD8;
	sub_8241FA28(ctx, base);
	// bl 0x8241fb80
	ctx.lr = 0x8250DFDC;
	sub_8241FB80(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,184
	ctx.r3.s64 = ctx.r31.s64 + 184;
	// bl 0x8241fa28
	ctx.lr = 0x8250DFE8;
	sub_8241FA28(ctx, base);
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r8,r9,-26260
	ctx.r8.s64 = ctx.r9.s64 + -26260;
	// stb r30,200(r31)
	PPC_STORE_U8(ctx.r31.u32 + 200, ctx.r30.u8);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// li r6,208
	ctx.r6.s64 = 208;
	// addi r5,r7,9008
	ctx.r5.s64 = ctx.r7.s64 + 9008;
	// li r4,224
	ctx.r4.s64 = 224;
	// lvlx128 v63,r0,r8
	temp.u32 = ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v62,v63,0
	simde_mm_store_si128((simde__m128i*)ctx.v62.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0xFF));
	// stvx128 v62,r31,r6
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r31.u32 + ctx.r6.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvlx128 v61,r0,r5
	temp.u32 = ctx.r5.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v60,v61,0
	simde_mm_store_si128((simde__m128i*)ctx.v60.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v61.u32), 0xFF));
	// stvx128 v60,r31,r4
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r31.u32 + ctx.r4.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x8241fb80
	ctx.lr = 0x8250E024;
	sub_8241FB80(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,240
	ctx.r3.s64 = ctx.r31.s64 + 240;
	// bl 0x8241fa28
	ctx.lr = 0x8250E030;
	sub_8241FA28(ctx, base);
	// stb r30,256(r31)
	PPC_STORE_U8(ctx.r31.u32 + 256, ctx.r30.u8);
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

__attribute__((alias("__imp__sub_8250E050"))) PPC_WEAK_FUNC(sub_8250E050);
PPC_FUNC_IMPL(__imp__sub_8250E050) {
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
	// bl 0x824b3ea8
	ctx.lr = 0x8250E070;
	sub_824B3EA8(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r10,r11,-17380
	ctx.r10.s64 = ctx.r11.s64 + -17380;
	// addi r3,r31,104
	ctx.r3.s64 = ctx.r31.s64 + 104;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x8241f160
	ctx.lr = 0x8250E088;
	sub_8241F160(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,120
	ctx.r3.s64 = ctx.r31.s64 + 120;
	// bl 0x824201f0
	ctx.lr = 0x8250E094;
	sub_824201F0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,136
	ctx.r3.s64 = ctx.r31.s64 + 136;
	// bl 0x824201f0
	ctx.lr = 0x8250E0A0;
	sub_824201F0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,152
	ctx.r3.s64 = ctx.r31.s64 + 152;
	// bl 0x824201f0
	ctx.lr = 0x8250E0AC;
	sub_824201F0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,168
	ctx.r3.s64 = ctx.r31.s64 + 168;
	// bl 0x824201f0
	ctx.lr = 0x8250E0B8;
	sub_824201F0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,184
	ctx.r3.s64 = ctx.r31.s64 + 184;
	// bl 0x824201f0
	ctx.lr = 0x8250E0C4;
	sub_824201F0(ctx, base);
	// addi r3,r31,240
	ctx.r3.s64 = ctx.r31.s64 + 240;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x824201f0
	ctx.lr = 0x8250E0D0;
	sub_824201F0(ctx, base);
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

__attribute__((alias("__imp__sub_8250E0EC"))) PPC_WEAK_FUNC(sub_8250E0EC);
PPC_FUNC_IMPL(__imp__sub_8250E0EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8250E0F0"))) PPC_WEAK_FUNC(sub_8250E0F0);
PPC_FUNC_IMPL(__imp__sub_8250E0F0) {
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
	// bl 0x82467738
	ctx.lr = 0x8250E108;
	sub_82467738(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// li r3,272
	ctx.r3.s64 = 272;
	// lwz r5,24(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// bl 0x8248b768
	ctx.lr = 0x8250E11C;
	sub_8248B768(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8250e140
	if (cr6.eq) goto loc_8250E140;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8250df60
	ctx.lr = 0x8250E12C;
	sub_8250DF60(ctx, base);
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
loc_8250E140:
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

__attribute__((alias("__imp__sub_8250E158"))) PPC_WEAK_FUNC(sub_8250E158);
PPC_FUNC_IMPL(__imp__sub_8250E158) {
	PPC_FUNC_PROLOGUE();
	// b 0x8251b678
	sub_8251B678(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8250E15C"))) PPC_WEAK_FUNC(sub_8250E15C);
PPC_FUNC_IMPL(__imp__sub_8250E15C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8250E160"))) PPC_WEAK_FUNC(sub_8250E160);
PPC_FUNC_IMPL(__imp__sub_8250E160) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8250e174
	if (cr6.eq) goto loc_8250E174;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// b 0x8250e050
	sub_8250E050(ctx, base);
	return;
loc_8250E174:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8250E17C"))) PPC_WEAK_FUNC(sub_8250E17C);
PPC_FUNC_IMPL(__imp__sub_8250E17C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8250E180"))) PPC_WEAK_FUNC(sub_8250E180);
PPC_FUNC_IMPL(__imp__sub_8250E180) {
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
	// lis r10,-31767
	ctx.r10.s64 = -2081882112;
	// lwz r11,25152(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 25152);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x8250e1f4
	if (!cr6.eq) goto loc_8250E1F4;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-31767
	ctx.r9.s64 = -2081882112;
	// stw r11,25152(r10)
	PPC_STORE_U32(ctx.r10.u32 + 25152, ctx.r11.u32);
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// addi r31,r9,24920
	ctx.r31.s64 = ctx.r9.s64 + 24920;
	// lis r6,17
	ctx.r6.s64 = 1114112;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r8,-18036
	ctx.r5.s64 = ctx.r8.s64 + -18036;
	// ori r6,r6,4
	ctx.r6.u64 = ctx.r6.u64 | 4;
	// li r4,272
	ctx.r4.s64 = 272;
	// bl 0x82477fc8
	ctx.lr = 0x8250E1D0;
	sub_82477FC8(ctx, base);
	// lis r7,-31793
	ctx.r7.s64 = -2083586048;
	// addi r3,r7,9176
	ctx.r3.s64 = ctx.r7.s64 + 9176;
	// bl 0x831cdcc8
	ctx.lr = 0x8250E1DC;
	sub_831CDCC8(ctx, base);
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
loc_8250E1F4:
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// addi r3,r11,24920
	ctx.r3.s64 = ctx.r11.s64 + 24920;
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

__attribute__((alias("__imp__sub_8250E210"))) PPC_WEAK_FUNC(sub_8250E210);
PPC_FUNC_IMPL(__imp__sub_8250E210) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x8250E218;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x82467738
	ctx.lr = 0x8250E228;
	sub_82467738(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// li r3,64
	ctx.r3.s64 = 64;
	// lwz r5,24(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// bl 0x8248b768
	ctx.lr = 0x8250E23C;
	sub_8248B768(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8250e264
	if (cr6.eq) goto loc_8250E264;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x8251b010
	ctx.lr = 0x8250E250;
	sub_8251B010(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r10,r11,-17320
	ctx.r10.s64 = ctx.r11.s64 + -17320;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// b 0x8250e268
	goto loc_8250E268;
loc_8250E264:
	// li r4,0
	ctx.r4.s64 = 0;
loc_8250E268:
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// std r11,0(r30)
	PPC_STORE_U64(ctx.r30.u32 + 0, ctx.r11.u64);
	// bl 0x8241f040
	ctx.lr = 0x8250E278;
	sub_8241F040(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8250E284"))) PPC_WEAK_FUNC(sub_8250E284);
PPC_FUNC_IMPL(__imp__sub_8250E284) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8250E288"))) PPC_WEAK_FUNC(sub_8250E288);
PPC_FUNC_IMPL(__imp__sub_8250E288) {
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
	// lis r10,-31767
	ctx.r10.s64 = -2081882112;
	// lwz r11,25392(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 25392);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x8250e2fc
	if (!cr6.eq) goto loc_8250E2FC;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-31767
	ctx.r9.s64 = -2081882112;
	// stw r11,25392(r10)
	PPC_STORE_U32(ctx.r10.u32 + 25392, ctx.r11.u32);
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// addi r31,r9,25160
	ctx.r31.s64 = ctx.r9.s64 + 25160;
	// lis r6,17
	ctx.r6.s64 = 1114112;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r8,-17456
	ctx.r5.s64 = ctx.r8.s64 + -17456;
	// ori r6,r6,4
	ctx.r6.u64 = ctx.r6.u64 | 4;
	// li r4,64
	ctx.r4.s64 = 64;
	// bl 0x82477fc8
	ctx.lr = 0x8250E2D8;
	sub_82477FC8(ctx, base);
	// lis r7,-31793
	ctx.r7.s64 = -2083586048;
	// addi r3,r7,9192
	ctx.r3.s64 = ctx.r7.s64 + 9192;
	// bl 0x831cdcc8
	ctx.lr = 0x8250E2E4;
	sub_831CDCC8(ctx, base);
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
loc_8250E2FC:
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// addi r3,r11,25160
	ctx.r3.s64 = ctx.r11.s64 + 25160;
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

__attribute__((alias("__imp__sub_8250E318"))) PPC_WEAK_FUNC(sub_8250E318);
PPC_FUNC_IMPL(__imp__sub_8250E318) {
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
	// bl 0x8250e288
	ctx.lr = 0x8250E32C;
	sub_8250E288(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,-17448
	ctx.r4.s64 = ctx.r11.s64 + -17448;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8247b0f0
	ctx.lr = 0x8250E344;
	sub_8247B0F0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8246be10
	ctx.lr = 0x8250E350;
	sub_8246BE10(ctx, base);
	// bl 0x8251af80
	ctx.lr = 0x8250E354;
	sub_8251AF80(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8246be18
	ctx.lr = 0x8250E360;
	sub_8246BE18(ctx, base);
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

__attribute__((alias("__imp__sub_8250E374"))) PPC_WEAK_FUNC(sub_8250E374);
PPC_FUNC_IMPL(__imp__sub_8250E374) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8250E378"))) PPC_WEAK_FUNC(sub_8250E378);
PPC_FUNC_IMPL(__imp__sub_8250E378) {
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
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,-17320
	ctx.r10.s64 = ctx.r11.s64 + -17320;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x8251b278
	ctx.lr = 0x8250E3A4;
	sub_8251B278(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8250e3bc
	if (cr6.eq) goto loc_8250E3BC;
	// bl 0x8248b818
	ctx.lr = 0x8250E3B8;
	sub_8248B818(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8250E3BC:
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

__attribute__((alias("__imp__sub_8250E3D4"))) PPC_WEAK_FUNC(sub_8250E3D4);
PPC_FUNC_IMPL(__imp__sub_8250E3D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8250E3D8"))) PPC_WEAK_FUNC(sub_8250E3D8);
PPC_FUNC_IMPL(__imp__sub_8250E3D8) {
	PPC_FUNC_PROLOGUE();
	// b 0x8250e180
	sub_8250E180(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8250E3DC"))) PPC_WEAK_FUNC(sub_8250E3DC);
PPC_FUNC_IMPL(__imp__sub_8250E3DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8250E3E0"))) PPC_WEAK_FUNC(sub_8250E3E0);
PPC_FUNC_IMPL(__imp__sub_8250E3E0) {
	PPC_FUNC_PROLOGUE();
	// b 0x8250e288
	sub_8250E288(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8250E3E4"))) PPC_WEAK_FUNC(sub_8250E3E4);
PPC_FUNC_IMPL(__imp__sub_8250E3E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8250E3E8"))) PPC_WEAK_FUNC(sub_8250E3E8);
PPC_FUNC_IMPL(__imp__sub_8250E3E8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x8250E3F0;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x8250e180
	ctx.lr = 0x8250E3F8;
	sub_8250E180(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r31,r11,-17472
	ctx.r31.s64 = ctx.r11.s64 + -17472;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r31,-556
	ctx.r4.s64 = ctx.r31.s64 + -556;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8247b0f0
	ctx.lr = 0x8250E414;
	sub_8247B0F0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r4,6
	ctx.r4.s64 = 6;
	// bl 0x8246be10
	ctx.lr = 0x8250E420;
	sub_8246BE10(ctx, base);
	// bl 0x824b4418
	ctx.lr = 0x8250E424;
	sub_824B4418(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8246be18
	ctx.lr = 0x8250E430;
	sub_8246BE18(ctx, base);
	// lis r5,1
	ctx.r5.s64 = 65536;
	// li r4,8
	ctx.r4.s64 = 8;
	// ori r5,r5,1
	ctx.r5.u64 = ctx.r5.u64 | 1;
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x825730a8
	ctx.lr = 0x8250E444;
	sub_825730A8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8250e460
	if (cr6.eq) goto loc_8250E460;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r9,r10,-17228
	ctx.r9.s64 = ctx.r10.s64 + -17228;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// b 0x8250e464
	goto loc_8250E464;
loc_8250E460:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8250E464:
	// stw r11,128(r30)
	PPC_STORE_U32(ctx.r30.u32 + 128, ctx.r11.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8246be48
	ctx.lr = 0x8250E474;
	sub_8246BE48(ctx, base);
	// addi r5,r31,-544
	ctx.r5.s64 = ctx.r31.s64 + -544;
	// li r6,104
	ctx.r6.s64 = 104;
	// li r4,11
	ctx.r4.s64 = 11;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824788c8
	ctx.lr = 0x8250E488;
	sub_824788C8(ctx, base);
	// addi r5,r31,-528
	ctx.r5.s64 = ctx.r31.s64 + -528;
	// li r6,120
	ctx.r6.s64 = 120;
	// li r4,12
	ctx.r4.s64 = 12;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824788c8
	ctx.lr = 0x8250E49C;
	sub_824788C8(ctx, base);
	// addi r5,r31,-520
	ctx.r5.s64 = ctx.r31.s64 + -520;
	// li r6,136
	ctx.r6.s64 = 136;
	// li r4,12
	ctx.r4.s64 = 12;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824788c8
	ctx.lr = 0x8250E4B0;
	sub_824788C8(ctx, base);
	// addi r5,r31,-504
	ctx.r5.s64 = ctx.r31.s64 + -504;
	// li r6,168
	ctx.r6.s64 = 168;
	// li r4,12
	ctx.r4.s64 = 12;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824788c8
	ctx.lr = 0x8250E4C4;
	sub_824788C8(ctx, base);
	// addi r5,r31,-492
	ctx.r5.s64 = ctx.r31.s64 + -492;
	// li r6,152
	ctx.r6.s64 = 152;
	// li r4,12
	ctx.r4.s64 = 12;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824788c8
	ctx.lr = 0x8250E4D8;
	sub_824788C8(ctx, base);
	// addi r5,r31,-476
	ctx.r5.s64 = ctx.r31.s64 + -476;
	// li r6,184
	ctx.r6.s64 = 184;
	// li r4,12
	ctx.r4.s64 = 12;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824788c8
	ctx.lr = 0x8250E4EC;
	sub_824788C8(ctx, base);
	// addi r5,r31,-456
	ctx.r5.s64 = ctx.r31.s64 + -456;
	// li r6,200
	ctx.r6.s64 = 200;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824788c8
	ctx.lr = 0x8250E500;
	sub_824788C8(ctx, base);
	// addi r5,r31,-440
	ctx.r5.s64 = ctx.r31.s64 + -440;
	// li r6,208
	ctx.r6.s64 = 208;
	// li r4,19
	ctx.r4.s64 = 19;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824788c8
	ctx.lr = 0x8250E514;
	sub_824788C8(ctx, base);
	// addi r5,r31,-424
	ctx.r5.s64 = ctx.r31.s64 + -424;
	// li r6,224
	ctx.r6.s64 = 224;
	// li r4,19
	ctx.r4.s64 = 19;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824788c8
	ctx.lr = 0x8250E528;
	sub_824788C8(ctx, base);
	// addi r5,r31,-408
	ctx.r5.s64 = ctx.r31.s64 + -408;
	// li r6,240
	ctx.r6.s64 = 240;
	// li r4,12
	ctx.r4.s64 = 12;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824788c8
	ctx.lr = 0x8250E53C;
	sub_824788C8(ctx, base);
	// addi r5,r31,-396
	ctx.r5.s64 = ctx.r31.s64 + -396;
	// li r6,256
	ctx.r6.s64 = 256;
	// li r4,10
	ctx.r4.s64 = 10;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824788c8
	ctx.lr = 0x8250E550;
	sub_824788C8(ctx, base);
	// addi r4,r31,-380
	ctx.r4.s64 = ctx.r31.s64 + -380;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8246c3a0
	ctx.lr = 0x8250E55C;
	sub_8246C3A0(ctx, base);
	// addi r4,r31,-368
	ctx.r4.s64 = ctx.r31.s64 + -368;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8241f280
	ctx.lr = 0x8250E56C;
	sub_8241F280(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x824f5ee0
	ctx.lr = 0x8250E574;
	sub_824F5EE0(ctx, base);
	// lwz r3,108(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8250e594
	if (cr6.eq) goto loc_8250E594;
	// lis r4,2
	ctx.r4.s64 = 131072;
	// ori r4,r4,2
	ctx.r4.u64 = ctx.r4.u64 | 2;
	// bl 0x82573040
	ctx.lr = 0x8250E58C;
	sub_82573040(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
loc_8250E594:
	// lis r11,-32175
	ctx.r11.s64 = -2108620800;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r11,-7952
	ctx.r4.s64 = ctx.r11.s64 + -7952;
	// bl 0x8246be80
	ctx.lr = 0x8250E5A4;
	sub_8246BE80(ctx, base);
	// addi r6,r31,-356
	ctx.r6.s64 = ctx.r31.s64 + -356;
	// addi r5,r31,-352
	ctx.r5.s64 = ctx.r31.s64 + -352;
	// addi r4,r31,-336
	ctx.r4.s64 = ctx.r31.s64 + -336;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82479460
	ctx.lr = 0x8250E5BC;
	sub_82479460(ctx, base);
	// addi r6,r31,-320
	ctx.r6.s64 = ctx.r31.s64 + -320;
	// addi r5,r31,-316
	ctx.r5.s64 = ctx.r31.s64 + -316;
	// addi r4,r31,-308
	ctx.r4.s64 = ctx.r31.s64 + -308;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82479460
	ctx.lr = 0x8250E5D4;
	sub_82479460(ctx, base);
	// lis r10,-31780
	ctx.r10.s64 = -2082734080;
	// addi r6,r31,-300
	ctx.r6.s64 = ctx.r31.s64 + -300;
	// addi r29,r10,6672
	ctx.r29.s64 = ctx.r10.s64 + 6672;
	// addi r5,r31,-296
	ctx.r5.s64 = ctx.r31.s64 + -296;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// addi r4,r31,-280
	ctx.r4.s64 = ctx.r31.s64 + -280;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82479460
	ctx.lr = 0x8250E5F4;
	sub_82479460(ctx, base);
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// addi r6,r31,-264
	ctx.r6.s64 = ctx.r31.s64 + -264;
	// addi r5,r31,-260
	ctx.r5.s64 = ctx.r31.s64 + -260;
	// addi r4,r31,-248
	ctx.r4.s64 = ctx.r31.s64 + -248;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82479460
	ctx.lr = 0x8250E60C;
	sub_82479460(ctx, base);
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// addi r6,r31,-236
	ctx.r6.s64 = ctx.r31.s64 + -236;
	// addi r5,r31,-232
	ctx.r5.s64 = ctx.r31.s64 + -232;
	// addi r4,r31,-216
	ctx.r4.s64 = ctx.r31.s64 + -216;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82479460
	ctx.lr = 0x8250E624;
	sub_82479460(ctx, base);
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// addi r6,r31,-200
	ctx.r6.s64 = ctx.r31.s64 + -200;
	// addi r5,r31,-196
	ctx.r5.s64 = ctx.r31.s64 + -196;
	// addi r4,r31,-176
	ctx.r4.s64 = ctx.r31.s64 + -176;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82479460
	ctx.lr = 0x8250E63C;
	sub_82479460(ctx, base);
	// addi r6,r31,-156
	ctx.r6.s64 = ctx.r31.s64 + -156;
	// addi r5,r31,-152
	ctx.r5.s64 = ctx.r31.s64 + -152;
	// addi r4,r31,-136
	ctx.r4.s64 = ctx.r31.s64 + -136;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82479460
	ctx.lr = 0x8250E654;
	sub_82479460(ctx, base);
	// addi r6,r31,-120
	ctx.r6.s64 = ctx.r31.s64 + -120;
	// addi r5,r31,-116
	ctx.r5.s64 = ctx.r31.s64 + -116;
	// addi r4,r31,-100
	ctx.r4.s64 = ctx.r31.s64 + -100;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82479460
	ctx.lr = 0x8250E66C;
	sub_82479460(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r31,-84
	ctx.r6.s64 = ctx.r31.s64 + -84;
	// addi r5,r31,-80
	ctx.r5.s64 = ctx.r31.s64 + -80;
	// addi r4,r31,-64
	ctx.r4.s64 = ctx.r31.s64 + -64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82479460
	ctx.lr = 0x8250E684;
	sub_82479460(ctx, base);
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// addi r6,r31,-48
	ctx.r6.s64 = ctx.r31.s64 + -48;
	// addi r5,r31,-44
	ctx.r5.s64 = ctx.r31.s64 + -44;
	// addi r4,r31,-32
	ctx.r4.s64 = ctx.r31.s64 + -32;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82479460
	ctx.lr = 0x8250E69C;
	sub_82479460(ctx, base);
	// addi r6,r31,-20
	ctx.r6.s64 = ctx.r31.s64 + -20;
	// addi r5,r31,-16
	ctx.r5.s64 = ctx.r31.s64 + -16;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82479460
	ctx.lr = 0x8250E6B4;
	sub_82479460(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8250E6BC"))) PPC_WEAK_FUNC(sub_8250E6BC);
PPC_FUNC_IMPL(__imp__sub_8250E6BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8250E6C0"))) PPC_WEAK_FUNC(sub_8250E6C0);
PPC_FUNC_IMPL(__imp__sub_8250E6C0) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8250e714
	if (cr6.eq) goto loc_8250E714;
	// bl 0x8250e180
	ctx.lr = 0x8250E6E4;
	sub_8250E180(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8250E6FC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8246be58
	ctx.lr = 0x8250E704;
	sub_8246BE58(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x8250e718
	if (!cr6.eq) goto loc_8250E718;
loc_8250E714:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8250E718:
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

__attribute__((alias("__imp__sub_8250E730"))) PPC_WEAK_FUNC(sub_8250E730);
PPC_FUNC_IMPL(__imp__sub_8250E730) {
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
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// lhz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 12);
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// blt cr6,0x8250e7a0
	if (cr6.lt) goto loc_8250E7A0;
	// cmplwi cr6,r11,6
	cr6.compare<uint32_t>(ctx.r11.u32, 6, xer);
	// ble cr6,0x8250e764
	if (!cr6.gt) goto loc_8250E764;
	// cmplwi cr6,r11,10
	cr6.compare<uint32_t>(ctx.r11.u32, 10, xer);
	// bne cr6,0x8250e7a0
	if (!cr6.eq) goto loc_8250E7A0;
loc_8250E764:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-17220
	ctx.r4.s64 = ctx.r11.s64 + -17220;
	// bl 0x8241f0a0
	ctx.lr = 0x8250E774;
	sub_8241F0A0(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8241f758
	ctx.lr = 0x8250E780;
	sub_8241F758(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82573c50
	ctx.lr = 0x8250E788;
	sub_82573C50(ctx, base);
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
loc_8250E7A0:
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

__attribute__((alias("__imp__sub_8250E7B8"))) PPC_WEAK_FUNC(sub_8250E7B8);
PPC_FUNC_IMPL(__imp__sub_8250E7B8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x8250E7C0;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r28,r11,24912
	ctx.r28.s64 = ctx.r11.s64 + 24912;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8257efd8
	ctx.lr = 0x8250E7D8;
	sub_8257EFD8(ctx, base);
	// addi r29,r30,32
	ctx.r29.s64 = ctx.r30.s64 + 32;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83102db0
	ctx.lr = 0x8250E7E4;
	sub_83102DB0(ctx, base);
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r31,r11,6624
	ctx.r31.s64 = ctx.r11.s64 + 6624;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82424320
	ctx.lr = 0x8250E7FC;
	sub_82424320(ctx, base);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplw cr6,r11,r31
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, xer);
	// bne cr6,0x8250e818
	if (!cr6.eq) goto loc_8250E818;
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(ctx.r11.s32, -1, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x8250e81c
	if (cr6.eq) goto loc_8250E81C;
loc_8250E818:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8250E81C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8250e85c
	if (cr6.eq) goto loc_8250E85C;
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// bl 0x82572fa0
	ctx.lr = 0x8250E83C;
	sub_82572FA0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x8242e650
	ctx.lr = 0x8250E850;
	sub_8242E650(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82572fa0
	ctx.lr = 0x8250E85C;
	sub_82572FA0(ctx, base);
loc_8250E85C:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8257efc8
	ctx.lr = 0x8250E864;
	sub_8257EFC8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8250E86C"))) PPC_WEAK_FUNC(sub_8250E86C);
PPC_FUNC_IMPL(__imp__sub_8250E86C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8250E870"))) PPC_WEAK_FUNC(sub_8250E870);
PPC_FUNC_IMPL(__imp__sub_8250E870) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x8250E878;
	__savegprlr_26(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r28,r11,24912
	ctx.r28.s64 = ctx.r11.s64 + 24912;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8257efd8
	ctx.lr = 0x8250E890;
	sub_8257EFD8(ctx, base);
	// addi r29,r30,32
	ctx.r29.s64 = ctx.r30.s64 + 32;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83102db0
	ctx.lr = 0x8250E89C;
	sub_83102DB0(ctx, base);
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r31,r11,6624
	ctx.r31.s64 = ctx.r11.s64 + 6624;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82424320
	ctx.lr = 0x8250E8B4;
	sub_82424320(ctx, base);
	// lwz r27,88(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r26,92(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplw cr6,r27,r31
	cr6.compare<uint32_t>(ctx.r27.u32, ctx.r31.u32, xer);
	// bne cr6,0x8250e8d0
	if (!cr6.eq) goto loc_8250E8D0;
	// cmpwi cr6,r26,-1
	cr6.compare<int32_t>(ctx.r26.s32, -1, xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// beq cr6,0x8250e8d4
	if (cr6.eq) goto loc_8250E8D4;
loc_8250E8D0:
	// li r11,1
	ctx.r11.s64 = 1;
loc_8250E8D4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8250e938
	if (cr6.eq) goto loc_8250E938;
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// bl 0x82572fa0
	ctx.lr = 0x8250E8F4;
	sub_82572FA0(ctx, base);
	// lwz r9,40(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 40);
	// rlwinm r10,r26,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwzx r7,r9,r10
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// subf r6,r7,r8
	ctx.r6.s64 = ctx.r8.s64 - ctx.r7.s64;
	// cntlzw r5,r6
	ctx.r5.u64 = ctx.r6.u32 == 0 ? 32 : __builtin_clz(ctx.r6.u32);
	// rlwinm r30,r5,27,31,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 27) & 0x1;
	// bl 0x82572fa0
	ctx.lr = 0x8250E91C;
	sub_82572FA0(ctx, base);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x8250e938
	if (cr6.eq) goto loc_8250E938;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83102db0
	ctx.lr = 0x8250E92C;
	sub_83102DB0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8245eda0
	ctx.lr = 0x8250E938;
	sub_8245EDA0(ctx, base);
loc_8250E938:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8257efc8
	ctx.lr = 0x8250E940;
	sub_8257EFC8(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8250E948"))) PPC_WEAK_FUNC(sub_8250E948);
PPC_FUNC_IMPL(__imp__sub_8250E948) {
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
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lbz r10,256(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 256);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r9,r11,-17380
	ctx.r9.s64 = ctx.r11.s64 + -17380;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// beq cr6,0x8250e978
	if (cr6.eq) goto loc_8250E978;
	// bl 0x8250e870
	ctx.lr = 0x8250E978;
	sub_8250E870(ctx, base);
loc_8250E978:
	// addi r3,r31,240
	ctx.r3.s64 = ctx.r31.s64 + 240;
	// bl 0x8241fb00
	ctx.lr = 0x8250E980;
	sub_8241FB00(ctx, base);
	// addi r3,r31,184
	ctx.r3.s64 = ctx.r31.s64 + 184;
	// bl 0x8241fb00
	ctx.lr = 0x8250E988;
	sub_8241FB00(ctx, base);
	// addi r3,r31,168
	ctx.r3.s64 = ctx.r31.s64 + 168;
	// bl 0x8241fb00
	ctx.lr = 0x8250E990;
	sub_8241FB00(ctx, base);
	// addi r3,r31,152
	ctx.r3.s64 = ctx.r31.s64 + 152;
	// bl 0x8241fb00
	ctx.lr = 0x8250E998;
	sub_8241FB00(ctx, base);
	// addi r3,r31,136
	ctx.r3.s64 = ctx.r31.s64 + 136;
	// bl 0x8241fb00
	ctx.lr = 0x8250E9A0;
	sub_8241FB00(ctx, base);
	// addi r3,r31,120
	ctx.r3.s64 = ctx.r31.s64 + 120;
	// bl 0x8241fb00
	ctx.lr = 0x8250E9A8;
	sub_8241FB00(ctx, base);
	// addi r3,r31,104
	ctx.r3.s64 = ctx.r31.s64 + 104;
	// bl 0x82573c50
	ctx.lr = 0x8250E9B0;
	sub_82573C50(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824b40a8
	ctx.lr = 0x8250E9B8;
	sub_824B40A8(ctx, base);
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

__attribute__((alias("__imp__sub_8250E9CC"))) PPC_WEAK_FUNC(sub_8250E9CC);
PPC_FUNC_IMPL(__imp__sub_8250E9CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8250E9D0"))) PPC_WEAK_FUNC(sub_8250E9D0);
PPC_FUNC_IMPL(__imp__sub_8250E9D0) {
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
	// bl 0x8250e948
	ctx.lr = 0x8250E9F0;
	sub_8250E948(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8250ea08
	if (cr6.eq) goto loc_8250EA08;
	// bl 0x8248b818
	ctx.lr = 0x8250EA04;
	sub_8248B818(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8250EA08:
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

__attribute__((alias("__imp__sub_8250EA20"))) PPC_WEAK_FUNC(sub_8250EA20);
PPC_FUNC_IMPL(__imp__sub_8250EA20) {
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
	// bl 0x825c7398
	ctx.lr = 0x8250EA3C;
	sub_825C7398(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8251b068
	ctx.lr = 0x8250EA44;
	sub_8251B068(ctx, base);
	// bl 0x8250e6c0
	ctx.lr = 0x8250EA48;
	sub_8250E6C0(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// std r30,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r30.u64);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8241f040
	ctx.lr = 0x8250EA5C;
	sub_8241F040(ctx, base);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lbz r10,256(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 256);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8250eaa4
	if (cr6.eq) goto loc_8250EAA4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8251b068
	ctx.lr = 0x8250EA74;
	sub_8251B068(ctx, base);
	// bl 0x8250e6c0
	ctx.lr = 0x8250EA78;
	sub_8250E6C0(ctx, base);
	// std r30,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r30.u64);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8241f040
	ctx.lr = 0x8250EA88;
	sub_8241F040(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8250ea98
	if (cr6.eq) goto loc_8250EA98;
	// bl 0x8250e7b8
	ctx.lr = 0x8250EA98;
	sub_8250E7B8(ctx, base);
loc_8250EA98:
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8241f040
	ctx.lr = 0x8250EAA4;
	sub_8241F040(ctx, base);
loc_8250EAA4:
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8241f040
	ctx.lr = 0x8250EAB0;
	sub_8241F040(ctx, base);
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

__attribute__((alias("__imp__sub_8250EAC8"))) PPC_WEAK_FUNC(sub_8250EAC8);
PPC_FUNC_IMPL(__imp__sub_8250EAC8) {
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
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x83102db0
	ctx.lr = 0x8250EAE4;
	sub_83102DB0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8251b068
	ctx.lr = 0x8250EAEC;
	sub_8251B068(ctx, base);
	// bl 0x8250e6c0
	ctx.lr = 0x8250EAF0;
	sub_8250E6C0(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// std r31,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r31.u64);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8241f040
	ctx.lr = 0x8250EB04;
	sub_8241F040(ctx, base);
	// lwz r11,56(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// rlwinm r10,r11,2,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r4,8(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// beq cr6,0x8250eb54
	if (cr6.eq) goto loc_8250EB54;
	// std r31,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r31.u64);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82572fa0
	ctx.lr = 0x8250EB28;
	sub_82572FA0(ctx, base);
	// lis r10,-31767
	ctx.r10.s64 = -2081882112;
	// lwz r3,24900(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24900);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8250eb4c
	if (cr6.eq) goto loc_8250EB4C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8250EB4C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8250EB4C:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// b 0x8250eb88
	goto loc_8250EB88;
loc_8250EB54:
	// std r31,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r31.u64);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82572fa0
	ctx.lr = 0x8250EB60;
	sub_82572FA0(ctx, base);
	// lis r10,-31767
	ctx.r10.s64 = -2081882112;
	// lwz r3,24900(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24900);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8250eb84
	if (cr6.eq) goto loc_8250EB84;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8250EB84;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8250EB84:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
loc_8250EB88:
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82572fa0
	ctx.lr = 0x8250EB90;
	sub_82572FA0(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lbz r10,256(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 256);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8250ebd4
	if (cr6.eq) goto loc_8250EBD4;
	// bl 0x8251b068
	ctx.lr = 0x8250EBA8;
	sub_8251B068(ctx, base);
	// bl 0x8250e6c0
	ctx.lr = 0x8250EBAC;
	sub_8250E6C0(ctx, base);
	// std r31,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r31.u64);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x8241f040
	ctx.lr = 0x8250EBBC;
	sub_8241F040(ctx, base);
	// lwz r3,104(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8250ebcc
	if (cr6.eq) goto loc_8250EBCC;
	// bl 0x8250e7b8
	ctx.lr = 0x8250EBCC;
	sub_8250E7B8(ctx, base);
loc_8250EBCC:
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// b 0x8250ec00
	goto loc_8250EC00;
loc_8250EBD4:
	// bl 0x8251b068
	ctx.lr = 0x8250EBD8;
	sub_8251B068(ctx, base);
	// bl 0x8250e6c0
	ctx.lr = 0x8250EBDC;
	sub_8250E6C0(ctx, base);
	// std r31,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r31.u64);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8241f040
	ctx.lr = 0x8250EBEC;
	sub_8241F040(ctx, base);
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8250ebfc
	if (cr6.eq) goto loc_8250EBFC;
	// bl 0x8250e870
	ctx.lr = 0x8250EBFC;
	sub_8250E870(ctx, base);
loc_8250EBFC:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
loc_8250EC00:
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8241f040
	ctx.lr = 0x8250EC08;
	sub_8241F040(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8241f040
	ctx.lr = 0x8250EC14;
	sub_8241F040(ctx, base);
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

__attribute__((alias("__imp__sub_8250EC2C"))) PPC_WEAK_FUNC(sub_8250EC2C);
PPC_FUNC_IMPL(__imp__sub_8250EC2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8250EC30"))) PPC_WEAK_FUNC(sub_8250EC30);
PPC_FUNC_IMPL(__imp__sub_8250EC30) {
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
	// bl 0x83102db0
	ctx.lr = 0x8250EC4C;
	sub_83102DB0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8251b068
	ctx.lr = 0x8250EC54;
	sub_8251B068(ctx, base);
	// bl 0x8250e6c0
	ctx.lr = 0x8250EC58;
	sub_8250E6C0(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// std r30,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r30.u64);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8241f040
	ctx.lr = 0x8250EC6C;
	sub_8241F040(ctx, base);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lbz r10,256(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 256);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8250ecb4
	if (cr6.eq) goto loc_8250ECB4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8251b068
	ctx.lr = 0x8250EC84;
	sub_8251B068(ctx, base);
	// bl 0x8250e6c0
	ctx.lr = 0x8250EC88;
	sub_8250E6C0(ctx, base);
	// std r30,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r30.u64);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8241f040
	ctx.lr = 0x8250EC98;
	sub_8241F040(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8250eca8
	if (cr6.eq) goto loc_8250ECA8;
	// bl 0x8250e7b8
	ctx.lr = 0x8250ECA8;
	sub_8250E7B8(ctx, base);
loc_8250ECA8:
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8241f040
	ctx.lr = 0x8250ECB4;
	sub_8241F040(ctx, base);
loc_8250ECB4:
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8241f040
	ctx.lr = 0x8250ECC0;
	sub_8241F040(ctx, base);
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

__attribute__((alias("__imp__sub_8250ECD8"))) PPC_WEAK_FUNC(sub_8250ECD8);
PPC_FUNC_IMPL(__imp__sub_8250ECD8) {
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
	// lis r10,-31767
	ctx.r10.s64 = -2081882112;
	// lwz r11,25632(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 25632);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x8250ed4c
	if (!cr6.eq) goto loc_8250ED4C;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-31767
	ctx.r9.s64 = -2081882112;
	// stw r11,25632(r10)
	PPC_STORE_U32(ctx.r10.u32 + 25632, ctx.r11.u32);
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// addi r31,r9,25400
	ctx.r31.s64 = ctx.r9.s64 + 25400;
	// lis r6,4
	ctx.r6.s64 = 262144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r8,-17188
	ctx.r5.s64 = ctx.r8.s64 + -17188;
	// ori r6,r6,4
	ctx.r6.u64 = ctx.r6.u64 | 4;
	// li r4,96
	ctx.r4.s64 = 96;
	// bl 0x82477fc8
	ctx.lr = 0x8250ED28;
	sub_82477FC8(ctx, base);
	// lis r7,-31793
	ctx.r7.s64 = -2083586048;
	// addi r3,r7,9248
	ctx.r3.s64 = ctx.r7.s64 + 9248;
	// bl 0x831cdcc8
	ctx.lr = 0x8250ED34;
	sub_831CDCC8(ctx, base);
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
loc_8250ED4C:
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// addi r3,r11,25400
	ctx.r3.s64 = ctx.r11.s64 + 25400;
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

__attribute__((alias("__imp__sub_8250ED68"))) PPC_WEAK_FUNC(sub_8250ED68);
PPC_FUNC_IMPL(__imp__sub_8250ED68) {
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
	// bl 0x8250ecd8
	ctx.lr = 0x8250ED80;
	sub_8250ECD8(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r30,r11,-17156
	ctx.r30.s64 = ctx.r11.s64 + -17156;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r30,-24
	ctx.r4.s64 = ctx.r30.s64 + -24;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8247b0f0
	ctx.lr = 0x8250ED9C;
	sub_8247B0F0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8246be10
	ctx.lr = 0x8250EDA8;
	sub_8246BE10(ctx, base);
	// bl 0x82467738
	ctx.lr = 0x8250EDAC;
	sub_82467738(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8246be18
	ctx.lr = 0x8250EDB8;
	sub_8246BE18(ctx, base);
	// lis r5,1
	ctx.r5.s64 = 65536;
	// li r4,8
	ctx.r4.s64 = 8;
	// ori r5,r5,1
	ctx.r5.u64 = ctx.r5.u64 | 1;
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x825730a8
	ctx.lr = 0x8250EDCC;
	sub_825730A8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8250ede8
	if (cr6.eq) goto loc_8250EDE8;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r9,r10,-17124
	ctx.r9.s64 = ctx.r10.s64 + -17124;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// b 0x8250edec
	goto loc_8250EDEC;
loc_8250EDE8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8250EDEC:
	// stw r11,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r11.u32);
	// addi r5,r30,-16
	ctx.r5.s64 = ctx.r30.s64 + -16;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r4,12
	ctx.r4.s64 = 12;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824783f0
	ctx.lr = 0x8250EE04;
	sub_824783F0(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r6,80
	ctx.r6.s64 = 80;
	// li r4,12
	ctx.r4.s64 = 12;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824788c8
	ctx.lr = 0x8250EE18;
	sub_824788C8(ctx, base);
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

__attribute__((alias("__imp__sub_8250EE30"))) PPC_WEAK_FUNC(sub_8250EE30);
PPC_FUNC_IMPL(__imp__sub_8250EE30) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8250ee84
	if (cr6.eq) goto loc_8250EE84;
	// bl 0x8250ecd8
	ctx.lr = 0x8250EE54;
	sub_8250ECD8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8250EE6C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8246be58
	ctx.lr = 0x8250EE74;
	sub_8246BE58(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x8250ee88
	if (!cr6.eq) goto loc_8250EE88;
loc_8250EE84:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8250EE88:
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

__attribute__((alias("__imp__sub_8250EEA0"))) PPC_WEAK_FUNC(sub_8250EEA0);
PPC_FUNC_IMPL(__imp__sub_8250EEA0) {
	PPC_FUNC_PROLOGUE();
	// b 0x8250ecd8
	sub_8250ECD8(ctx, base);
	return;
}

