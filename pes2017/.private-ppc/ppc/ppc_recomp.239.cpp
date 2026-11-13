#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_82F35564"))) PPC_WEAK_FUNC(sub_82F35564);
PPC_FUNC_IMPL(__imp__sub_82F35564) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F35568"))) PPC_WEAK_FUNC(sub_82F35568);
PPC_FUNC_IMPL(__imp__sub_82F35568) {
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
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82f3558c
	if (cr6.lt) goto loc_82F3558C;
	// lwz r31,0(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82f35590
	goto loc_82F35590;
loc_82F3558C:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_82F35590:
	// li r11,31
	ctx.r11.s64 = 31;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,116
	ctx.r4.s64 = 116;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82F355A8;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82f355c0
	if (cr6.eq) goto loc_82F355C0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82f35320
	ctx.lr = 0x82F355B8;
	sub_82F35320(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82f355c4
	if (!cr6.eq) goto loc_82F355C4;
loc_82F355C0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82F355C4:
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

__attribute__((alias("__imp__sub_82F355D8"))) PPC_WEAK_FUNC(sub_82F355D8);
PPC_FUNC_IMPL(__imp__sub_82F355D8) {
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
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,-13104
	ctx.r10.s64 = ctx.r11.s64 + -13104;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x83524210
	ctx.lr = 0x82F35604;
	sub_83524210(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82f35624
	if (cr6.eq) goto loc_82F35624;
	// bl 0x82595188
	ctx.lr = 0x82F35614;
	sub_82595188(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x82F35624;
	sub_825952B8(ctx, base);
loc_82F35624:
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

__attribute__((alias("__imp__sub_82F35640"))) PPC_WEAK_FUNC(sub_82F35640);
PPC_FUNC_IMPL(__imp__sub_82F35640) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
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
	// lwz r3,116(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82f356b8
	if (cr6.eq) goto loc_82F356B8;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x835242e8
	ctx.lr = 0x82F35668;
	sub_835242E8(ctx, base);
	// lwz r3,116(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// lwsync 
	// li r10,-1
	ctx.r10.s64 = -1;
	// addi r7,r3,4
	ctx.r7.s64 = ctx.r3.s64 + 4;
loc_82F35678:
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
	// bne 0x82f35678
	if (!cr0.eq) goto loc_82F35678;
	// mr r11,r11
	ctx.r11.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82f356b0
	if (!cr6.eq) goto loc_82F356B0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82F356B0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82F356B0:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r11.u32);
loc_82F356B8:
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

__attribute__((alias("__imp__sub_82F356D0"))) PPC_WEAK_FUNC(sub_82F356D0);
PPC_FUNC_IMPL(__imp__sub_82F356D0) {
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
	// bl 0x82f42220
	ctx.lr = 0x82F356EC;
	sub_82F42220(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-13088
	ctx.r9.s64 = ctx.r11.s64 + -13088;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// li r7,15
	ctx.r7.s64 = 15;
	// stw r8,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r8.u32);
	// stw r30,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r30.u32);
	// lis r6,-32229
	ctx.r6.s64 = -2112159744;
	// stw r7,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r7.u32);
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// stb r30,88(r31)
	PPC_STORE_U8(ctx.r31.u32 + 88, ctx.r30.u8);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r6,-13545
	ctx.r4.s64 = ctx.r6.s64 + -13545;
	// bl 0x8259cc28
	ctx.lr = 0x82F3572C;
	sub_8259CC28(ctx, base);
	// stw r30,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r30.u32);
	// stb r30,120(r31)
	PPC_STORE_U8(ctx.r31.u32 + 120, ctx.r30.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r30.u32);
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

__attribute__((alias("__imp__sub_82F35754"))) PPC_WEAK_FUNC(sub_82F35754);
PPC_FUNC_IMPL(__imp__sub_82F35754) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F35758"))) PPC_WEAK_FUNC(sub_82F35758);
PPC_FUNC_IMPL(__imp__sub_82F35758) {
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
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-13088
	ctx.r9.s64 = ctx.r11.s64 + -13088;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r8,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r8.u32);
	// addi r31,r3,88
	ctx.r31.s64 = ctx.r3.s64 + 88;
	// lwz r7,108(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 108);
	// cmplwi cr6,r7,16
	cr6.compare<uint32_t>(ctx.r7.u32, 16, xer);
	// blt cr6,0x82f357ac
	if (cr6.lt) goto loc_82F357AC;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82F357AC;
	sub_825952B8(ctx, base);
loc_82F357AC:
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
	// bl 0x82f42278
	ctx.lr = 0x82F357C8;
	sub_82F42278(ctx, base);
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

__attribute__((alias("__imp__sub_82F357E0"))) PPC_WEAK_FUNC(sub_82F357E0);
PPC_FUNC_IMPL(__imp__sub_82F357E0) {
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
	// bl 0x82f35758
	ctx.lr = 0x82F35800;
	sub_82F35758(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82f35818
	if (cr6.eq) goto loc_82F35818;
	// bl 0x82416268
	ctx.lr = 0x82F35814;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82F35818:
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

__attribute__((alias("__imp__sub_82F35830"))) PPC_WEAK_FUNC(sub_82F35830);
PPC_FUNC_IMPL(__imp__sub_82F35830) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82F35838;
	__savegprlr_29(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,124(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 124);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(ctx.r11.u32, 4, xer);
	// bgt cr6,0x82f359dc
	if (cr6.gt) goto loc_82F359DC;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x82f35954
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82F35954;
	// bdzf 4*cr6+eq,0x82f359dc
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82F359DC;
	// bdzf 4*cr6+eq,0x82f3598c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82F3598C;
	// bne cr6,0x82f359c4
	if (!cr6.eq) goto loc_82F359C4;
	// bl 0x82fe0df0
	ctx.lr = 0x82F35868;
	sub_82FE0DF0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82f35880
	if (cr6.eq) goto loc_82F35880;
	// bl 0x82fe5550
	ctx.lr = 0x82F35878;
	sub_82FE5550(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82416268
	ctx.lr = 0x82F35880;
	sub_82416268(ctx, base);
loc_82F35880:
	// lwz r11,116(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 116);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82f359e4
	if (!cr6.eq) goto loc_82F359E4;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// li r4,16
	ctx.r4.s64 = 16;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82F358A4;
	sub_82595718(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82f358cc
	if (cr6.eq) goto loc_82F358CC;
	// bl 0x835242a0
	ctx.lr = 0x82F358B4;
	sub_835242A0(ctx, base);
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// stw r31,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r31.u32);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// addi r9,r10,-13104
	ctx.r9.s64 = ctx.r10.s64 + -13104;
	// stw r9,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r9.u32);
	// b 0x82f358d0
	goto loc_82F358D0;
loc_82F358CC:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_82F358D0:
	// stw r11,116(r29)
	PPC_STORE_U32(ctx.r29.u32 + 116, ctx.r11.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82f35938
	if (cr6.eq) goto loc_82F35938;
	// stw r29,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r29.u32);
	// li r11,15
	ctx.r11.s64 = 15;
	// li r30,3
	ctx.r30.s64 = 3;
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// stb r31,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r31.u8);
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r5,18
	ctx.r5.s64 = 18;
	// std r31,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r31.u64);
	// addi r4,r10,-13316
	ctx.r4.s64 = ctx.r10.s64 + -13316;
	// stw r30,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r30.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r31,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r31.u32);
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// bl 0x8259cc28
	ctx.lr = 0x82F35918;
	sub_8259CC28(ctx, base);
	// lis r9,1
	ctx.r9.s64 = 65536;
	// stw r30,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r30.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r9,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r9.u32);
	// lwz r3,116(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 116);
	// bl 0x835249e8
	ctx.lr = 0x82F35930;
	sub_835249E8(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8387e8e0
	ctx.lr = 0x82F35938;
	sub_8387E8E0(ctx, base);
loc_82F35938:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82d17aa0
	ctx.lr = 0x82F35940;
	sub_82D17AA0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,124(r29)
	PPC_STORE_U32(ctx.r29.u32 + 124, ctx.r11.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82F35954:
	// lbz r11,120(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 120);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82f359e4
	if (cr6.eq) goto loc_82F359E4;
	// lwz r3,116(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 116);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82f35978
	if (cr6.eq) goto loc_82F35978;
	// bl 0x83b4b558
	ctx.lr = 0x82F35970;
	sub_83B4B558(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,116(r29)
	PPC_STORE_U32(ctx.r29.u32 + 116, ctx.r11.u32);
loc_82F35978:
	// li r11,3
	ctx.r11.s64 = 3;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,124(r29)
	PPC_STORE_U32(ctx.r29.u32 + 124, ctx.r11.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82F3598C:
	// bl 0x831156e8
	ctx.lr = 0x82F35990;
	sub_831156E8(ctx, base);
	// lis r11,220
	ctx.r11.s64 = 14417920;
	// lwz r10,48(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// ori r9,r11,46752
	ctx.r9.u64 = ctx.r11.u64 | 46752;
	// lbzx r8,r10,r9
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r9.u32);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x82f359b0
	if (!cr6.eq) goto loc_82F359B0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82d17aa0
	ctx.lr = 0x82F359B0;
	sub_82D17AA0(ctx, base);
loc_82F359B0:
	// li r11,4
	ctx.r11.s64 = 4;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,124(r29)
	PPC_STORE_U32(ctx.r29.u32 + 124, ctx.r11.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82F359C4:
	// addi r4,r29,88
	ctx.r4.s64 = ctx.r29.s64 + 88;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82e88020
	ctx.lr = 0x82F359D0;
	sub_82E88020(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82F359DC:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,124(r29)
	PPC_STORE_U32(ctx.r29.u32 + 124, ctx.r11.u32);
loc_82F359E4:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F359F0"))) PPC_WEAK_FUNC(sub_82F359F0);
PPC_FUNC_IMPL(__imp__sub_82F359F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad0
	ctx.lr = 0x82F359F8;
	__savegprlr_22(ctx, base);
	// stwu r1,-928(r1)
	ea = -928 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82f360d0
	if (cr6.eq) goto loc_82F360D0;
	// bl 0x831156e8
	ctx.lr = 0x82F35A10;
	sub_831156E8(ctx, base);
	// lwz r31,48(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// bl 0x830ff290
	ctx.lr = 0x82F35A18;
	sub_830FF290(ctx, base);
	// bl 0x830ffaa8
	ctx.lr = 0x82F35A1C;
	sub_830FFAA8(ctx, base);
	// li r22,0
	ctx.r22.s64 = 0;
	// addi r11,r3,-8
	ctx.r11.s64 = ctx.r3.s64 + -8;
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// li r26,1
	ctx.r26.s64 = 1;
	// mr r29,r22
	ctx.r29.u64 = ctx.r22.u64;
	// cmplwi cr6,r11,5
	cr6.compare<uint32_t>(ctx.r11.u32, 5, xer);
	// bgt cr6,0x82f35c78
	if (cr6.gt) goto loc_82F35C78;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x82f35c78
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82F35C78;
	// bdzf 4*cr6+eq,0x82f35c78
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82F35C78;
	// bdzf 4*cr6+eq,0x82f35ae4
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82F35AE4;
	// bdzf 4*cr6+eq,0x82f35ba8
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82F35BA8;
	// bne cr6,0x82f35c10
	if (!cr6.eq) goto loc_82F35C10;
	// addis r3,r31,192
	ctx.r3.s64 = ctx.r31.s64 + 12582912;
	// addi r3,r3,-10964
	ctx.r3.s64 = ctx.r3.s64 + -10964;
	// bl 0x83126788
	ctx.lr = 0x82F35A60;
	sub_83126788(ctx, base);
	// cmplwi cr6,r3,65535
	cr6.compare<uint32_t>(ctx.r3.u32, 65535, xer);
	// bne cr6,0x82f35a94
	if (!cr6.eq) goto loc_82F35A94;
	// bl 0x83198688
	ctx.lr = 0x82F35A6C;
	sub_83198688(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// beq cr6,0x82f35a94
	if (cr6.eq) goto loc_82F35A94;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lwz r10,12(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 12);
	// addi r30,r11,-13548
	ctx.r30.s64 = ctx.r11.s64 + -13548;
	// addi r3,r10,88
	ctx.r3.s64 = ctx.r10.s64 + 88;
	// addi r4,r30,276
	ctx.r4.s64 = ctx.r30.s64 + 276;
	// bl 0x8259d6c0
	ctx.lr = 0x82F35A90;
	sub_8259D6C0(ctx, base);
	// b 0x82f35ca0
	goto loc_82F35CA0;
loc_82F35A94:
	// bl 0x83198688
	ctx.lr = 0x82F35A98;
	sub_83198688(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82f35ab0
	if (cr6.eq) goto loc_82F35AB0;
	// lis r11,221
	ctx.r11.s64 = 14483456;
	// ori r10,r11,1612
	ctx.r10.u64 = ctx.r11.u64 | 1612;
	// stbx r26,r31,r10
	PPC_STORE_U8(ctx.r31.u32 + ctx.r10.u32, ctx.r26.u8);
loc_82F35AB0:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lwz r10,12(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 12);
	// addi r30,r11,-13548
	ctx.r30.s64 = ctx.r11.s64 + -13548;
	// addi r3,r10,88
	ctx.r3.s64 = ctx.r10.s64 + 88;
	// addi r4,r30,264
	ctx.r4.s64 = ctx.r30.s64 + 264;
	// bl 0x8259d6c0
	ctx.lr = 0x82F35AC8;
	sub_8259D6C0(ctx, base);
	// lis r11,221
	ctx.r11.s64 = 14483456;
	// li r3,1
	ctx.r3.s64 = 1;
	// ori r10,r11,1621
	ctx.r10.u64 = ctx.r11.u64 | 1621;
	// stbx r26,r31,r10
	PPC_STORE_U8(ctx.r31.u32 + ctx.r10.u32, ctx.r26.u8);
	// bl 0x8316bc30
	ctx.lr = 0x82F35ADC;
	sub_8316BC30(ctx, base);
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
	// b 0x82f35ca0
	goto loc_82F35CA0;
loc_82F35AE4:
	// addis r3,r31,192
	ctx.r3.s64 = ctx.r31.s64 + 12582912;
	// addi r3,r3,-10964
	ctx.r3.s64 = ctx.r3.s64 + -10964;
	// bl 0x83126788
	ctx.lr = 0x82F35AF0;
	sub_83126788(ctx, base);
	// cmplwi cr6,r3,65535
	cr6.compare<uint32_t>(ctx.r3.u32, 65535, xer);
	// bne cr6,0x82f35b68
	if (!cr6.eq) goto loc_82F35B68;
	// lis r11,194
	ctx.r11.s64 = 12713984;
	// li r10,23
	ctx.r10.s64 = 23;
	// ori r9,r11,52144
	ctx.r9.u64 = ctx.r11.u64 | 52144;
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lhzx r8,r31,r9
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r31.u32 + ctx.r9.u32);
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// bl 0x8314d470
	ctx.lr = 0x82F35B1C;
	sub_8314D470(ctx, base);
	// clrlwi r7,r3,24
	ctx.r7.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// bne cr6,0x82f35b68
	if (!cr6.eq) goto loc_82F35B68;
	// stb r22,92(r1)
	PPC_STORE_U8(ctx.r1.u32 + 92, ctx.r22.u8);
	// lis r11,-31756
	ctx.r11.s64 = -2081161216;
	// stb r22,91(r1)
	PPC_STORE_U8(ctx.r1.u32 + 91, ctx.r22.u8);
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// addi r3,r11,15344
	ctx.r3.s64 = ctx.r11.s64 + 15344;
	// addi r4,r1,91
	ctx.r4.s64 = ctx.r1.s64 + 91;
	// bl 0x8316d690
	ctx.lr = 0x82F35B44;
	sub_8316D690(ctx, base);
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// beq cr6,0x82f35b68
	if (cr6.eq) goto loc_82F35B68;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lwz r10,12(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 12);
	// addi r30,r11,-13548
	ctx.r30.s64 = ctx.r11.s64 + -13548;
	// addi r3,r10,88
	ctx.r3.s64 = ctx.r10.s64 + 88;
	// addi r4,r30,300
	ctx.r4.s64 = ctx.r30.s64 + 300;
	// bl 0x8259d6c0
	ctx.lr = 0x82F35B64;
	sub_8259D6C0(ctx, base);
	// b 0x82f35ca0
	goto loc_82F35CA0;
loc_82F35B68:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lwz r10,12(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 12);
	// addi r30,r11,-13548
	ctx.r30.s64 = ctx.r11.s64 + -13548;
	// addi r3,r10,88
	ctx.r3.s64 = ctx.r10.s64 + 88;
	// addi r4,r30,288
	ctx.r4.s64 = ctx.r30.s64 + 288;
	// bl 0x8259d6c0
	ctx.lr = 0x82F35B80;
	sub_8259D6C0(ctx, base);
	// lis r11,221
	ctx.r11.s64 = 14483456;
	// lis r10,220
	ctx.r10.s64 = 14417920;
	// ori r9,r11,1621
	ctx.r9.u64 = ctx.r11.u64 | 1621;
	// ori r8,r10,46744
	ctx.r8.u64 = ctx.r10.u64 | 46744;
	// li r3,1
	ctx.r3.s64 = 1;
	// stbx r26,r31,r9
	PPC_STORE_U8(ctx.r31.u32 + ctx.r9.u32, ctx.r26.u8);
	// stbx r26,r31,r8
	PPC_STORE_U8(ctx.r31.u32 + ctx.r8.u32, ctx.r26.u8);
	// bl 0x8316bc30
	ctx.lr = 0x82F35BA0;
	sub_8316BC30(ctx, base);
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
	// b 0x82f35ca0
	goto loc_82F35CA0;
loc_82F35BA8:
	// stb r22,93(r1)
	PPC_STORE_U8(ctx.r1.u32 + 93, ctx.r22.u8);
	// lis r11,-31756
	ctx.r11.s64 = -2081161216;
	// stb r22,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r22.u8);
	// addi r5,r1,93
	ctx.r5.s64 = ctx.r1.s64 + 93;
	// addi r3,r11,15344
	ctx.r3.s64 = ctx.r11.s64 + 15344;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// bl 0x8316d690
	ctx.lr = 0x82F35BC4;
	sub_8316D690(ctx, base);
	// lwz r10,12(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 12);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// addi r30,r11,-13548
	ctx.r30.s64 = ctx.r11.s64 + -13548;
	// addi r3,r10,88
	ctx.r3.s64 = ctx.r10.s64 + 88;
	// bne cr6,0x82f35c04
	if (!cr6.eq) goto loc_82F35C04;
	// addi r4,r30,312
	ctx.r4.s64 = ctx.r30.s64 + 312;
	// bl 0x8259d6c0
	ctx.lr = 0x82F35BE4;
	sub_8259D6C0(ctx, base);
	// lis r11,221
	ctx.r11.s64 = 14483456;
	// lis r10,220
	ctx.r10.s64 = 14417920;
	// ori r9,r11,1621
	ctx.r9.u64 = ctx.r11.u64 | 1621;
	// ori r8,r10,46744
	ctx.r8.u64 = ctx.r10.u64 | 46744;
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
	// stbx r26,r31,r9
	PPC_STORE_U8(ctx.r31.u32 + ctx.r9.u32, ctx.r26.u8);
	// stbx r26,r31,r8
	PPC_STORE_U8(ctx.r31.u32 + ctx.r8.u32, ctx.r26.u8);
	// b 0x82f35ca0
	goto loc_82F35CA0;
loc_82F35C04:
	// addi r4,r30,324
	ctx.r4.s64 = ctx.r30.s64 + 324;
	// bl 0x8259d6c0
	ctx.lr = 0x82F35C0C;
	sub_8259D6C0(ctx, base);
	// b 0x82f35ca0
	goto loc_82F35CA0;
loc_82F35C10:
	// stb r22,89(r1)
	PPC_STORE_U8(ctx.r1.u32 + 89, ctx.r22.u8);
	// lis r11,-31756
	ctx.r11.s64 = -2081161216;
	// stb r22,90(r1)
	PPC_STORE_U8(ctx.r1.u32 + 90, ctx.r22.u8);
	// addi r5,r1,89
	ctx.r5.s64 = ctx.r1.s64 + 89;
	// addi r3,r11,15344
	ctx.r3.s64 = ctx.r11.s64 + 15344;
	// addi r4,r1,90
	ctx.r4.s64 = ctx.r1.s64 + 90;
	// bl 0x8316d690
	ctx.lr = 0x82F35C2C;
	sub_8316D690(ctx, base);
	// lwz r10,12(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 12);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// addi r30,r11,-13548
	ctx.r30.s64 = ctx.r11.s64 + -13548;
	// addi r3,r10,88
	ctx.r3.s64 = ctx.r10.s64 + 88;
	// bne cr6,0x82f35c6c
	if (!cr6.eq) goto loc_82F35C6C;
	// addi r4,r30,336
	ctx.r4.s64 = ctx.r30.s64 + 336;
	// bl 0x8259d6c0
	ctx.lr = 0x82F35C4C;
	sub_8259D6C0(ctx, base);
	// lis r11,221
	ctx.r11.s64 = 14483456;
	// lis r10,220
	ctx.r10.s64 = 14417920;
	// ori r9,r11,1621
	ctx.r9.u64 = ctx.r11.u64 | 1621;
	// ori r8,r10,46744
	ctx.r8.u64 = ctx.r10.u64 | 46744;
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
	// stbx r26,r31,r9
	PPC_STORE_U8(ctx.r31.u32 + ctx.r9.u32, ctx.r26.u8);
	// stbx r26,r31,r8
	PPC_STORE_U8(ctx.r31.u32 + ctx.r8.u32, ctx.r26.u8);
	// b 0x82f35ca0
	goto loc_82F35CA0;
loc_82F35C6C:
	// addi r4,r30,348
	ctx.r4.s64 = ctx.r30.s64 + 348;
	// bl 0x8259d6c0
	ctx.lr = 0x82F35C74;
	sub_8259D6C0(ctx, base);
	// b 0x82f35ca0
	goto loc_82F35CA0;
loc_82F35C78:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lwz r10,12(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 12);
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r30,r11,-13548
	ctx.r30.s64 = ctx.r11.s64 + -13548;
	// addi r3,r10,88
	ctx.r3.s64 = ctx.r10.s64 + 88;
	// addi r4,r30,252
	ctx.r4.s64 = ctx.r30.s64 + 252;
	// bl 0x8259cc28
	ctx.lr = 0x82F35C94;
	sub_8259CC28(ctx, base);
	// lis r11,221
	ctx.r11.s64 = 14483456;
	// ori r10,r11,1621
	ctx.r10.u64 = ctx.r11.u64 | 1621;
	// stbx r26,r31,r10
	PPC_STORE_U8(ctx.r31.u32 + ctx.r10.u32, ctx.r26.u8);
loc_82F35CA0:
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// li r24,3
	ctx.r24.s64 = 3;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82f35e40
	if (cr6.eq) goto loc_82F35E40;
	// lis r11,220
	ctx.r11.s64 = 14417920;
	// ori r10,r11,46620
	ctx.r10.u64 = ctx.r11.u64 | 46620;
	// stbx r22,r31,r10
	PPC_STORE_U8(ctx.r31.u32 + ctx.r10.u32, ctx.r22.u8);
	// bl 0x830ff290
	ctx.lr = 0x82F35CC0;
	sub_830FF290(ctx, base);
	// bl 0x830ffaa8
	ctx.lr = 0x82F35CC4;
	sub_830FFAA8(ctx, base);
	// lis r9,220
	ctx.r9.s64 = 14417920;
	// lis r8,221
	ctx.r8.s64 = 14483456;
	// lis r7,7
	ctx.r7.s64 = 458752;
	// ori r27,r9,46740
	ctx.r27.u64 = ctx.r9.u64 | 46740;
	// ori r28,r8,57072
	ctx.r28.u64 = ctx.r8.u64 | 57072;
	// ori r29,r7,1924
	ctx.r29.u64 = ctx.r7.u64 | 1924;
	// cmplwi cr6,r3,12
	cr6.compare<uint32_t>(ctx.r3.u32, 12, xer);
	// bne cr6,0x82f35d3c
	if (!cr6.eq) goto loc_82F35D3C;
	// addi r3,r30,-32
	ctx.r3.s64 = ctx.r30.s64 + -32;
	// bl 0x831525a0
	ctx.lr = 0x82F35CEC;
	sub_831525A0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82f35d28
	if (!cr6.eq) goto loc_82F35D28;
	// lwzx r11,r31,r27
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r27.u32);
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// bl 0x8317c510
	ctx.lr = 0x82F35D08;
	sub_8317C510(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82f35d28
	if (!cr6.eq) goto loc_82F35D28;
	// add r11,r31,r28
	ctx.r11.u64 = ctx.r31.u64 + ctx.r28.u64;
	// add r10,r11,r29
	ctx.r10.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r8,r9,0,29,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7;
	// b 0x82f35d38
	goto loc_82F35D38;
loc_82F35D28:
	// add r11,r31,r28
	ctx.r11.u64 = ctx.r31.u64 + ctx.r28.u64;
	// add r10,r11,r29
	ctx.r10.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// ori r8,r9,8
	ctx.r8.u64 = ctx.r9.u64 | 8;
loc_82F35D38:
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
loc_82F35D3C:
	// bl 0x830ff290
	ctx.lr = 0x82F35D40;
	sub_830FF290(ctx, base);
	// bl 0x830ffaa8
	ctx.lr = 0x82F35D44;
	sub_830FFAA8(ctx, base);
	// cmplwi cr6,r3,13
	cr6.compare<uint32_t>(ctx.r3.u32, 13, xer);
	// bne cr6,0x82f35d78
	if (!cr6.eq) goto loc_82F35D78;
	// addi r3,r30,-32
	ctx.r3.s64 = ctx.r30.s64 + -32;
	// bl 0x831525a0
	ctx.lr = 0x82F35D54;
	sub_831525A0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// add r11,r31,r28
	ctx.r11.u64 = ctx.r31.u64 + ctx.r28.u64;
	// add r10,r11,r29
	ctx.r10.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// ori r8,r9,8
	ctx.r8.u64 = ctx.r9.u64 | 8;
	// bne cr6,0x82f35d74
	if (!cr6.eq) goto loc_82F35D74;
	// rlwinm r8,r9,0,29,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7;
loc_82F35D74:
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
loc_82F35D78:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8319dc20
	ctx.lr = 0x82F35D80;
	sub_8319DC20(ctx, base);
	// add r11,r31,r28
	ctx.r11.u64 = ctx.r31.u64 + ctx.r28.u64;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// add r9,r11,r29
	ctx.r9.u64 = ctx.r11.u64 + ctx.r29.u64;
	// stwx r10,r31,r27
	PPC_STORE_U32(ctx.r31.u32 + ctx.r27.u32, ctx.r10.u32);
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// rlwinm r7,r8,0,28,26
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFFFFFFFEF;
	// stw r7,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r7.u32);
	// bl 0x831156e8
	ctx.lr = 0x82F35DA0;
	sub_831156E8(ctx, base);
	// lwz r6,52(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// addis r3,r6,5
	ctx.r3.s64 = ctx.r6.s64 + 327680;
	// addi r3,r3,14904
	ctx.r3.s64 = ctx.r3.s64 + 14904;
	// bl 0x83123768
	ctx.lr = 0x82F35DB0;
	sub_83123768(ctx, base);
	// clrlwi r5,r3,16
	ctx.r5.u64 = ctx.r3.u32 & 0xFFFF;
	// cmplwi cr6,r5,65535
	cr6.compare<uint32_t>(ctx.r5.u32, 65535, xer);
	// bne cr6,0x82f35e40
	if (!cr6.eq) goto loc_82F35E40;
	// stw r22,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r22.u32);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x831178a0
	ctx.lr = 0x82F35DD4;
	sub_831178A0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x8311bdf0
	ctx.lr = 0x82F35DE4;
	sub_8311BDF0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82f35e40
	if (cr6.eq) goto loc_82F35E40;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r4,504(r29)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r29.u32 + 504);
	// bl 0x8311be78
	ctx.lr = 0x82F35DFC;
	sub_8311BE78(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82f35e40
	if (cr6.eq) goto loc_82F35E40;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82d8c428
	ctx.lr = 0x82F35E10;
	sub_82D8C428(ctx, base);
	// bl 0x830ff290
	ctx.lr = 0x82F35E14;
	sub_830FF290(ctx, base);
	// bl 0x830ffaa8
	ctx.lr = 0x82F35E18;
	sub_830FFAA8(ctx, base);
	// cmplwi cr6,r3,13
	cr6.compare<uint32_t>(ctx.r3.u32, 13, xer);
	// stw r24,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r24.u32);
	// beq cr6,0x82f35e28
	if (cr6.eq) goto loc_82F35E28;
	// stw r26,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r26.u32);
loc_82F35E28:
	// lis r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// ori r6,r6,65535
	ctx.r6.u64 = ctx.r6.u64 | 65535;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8314aca0
	ctx.lr = 0x82F35E40;
	sub_8314ACA0(ctx, base);
loc_82F35E40:
	// addis r11,r31,222
	ctx.r11.s64 = ctx.r31.s64 + 14548992;
	// addi r11,r11,-12692
	ctx.r11.s64 = ctx.r11.s64 + -12692;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82f35e58
	if (cr6.eq) goto loc_82F35E58;
	// stb r22,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r22.u8);
loc_82F35E58:
	// bl 0x8310cc00
	ctx.lr = 0x82F35E5C;
	sub_8310CC00(ctx, base);
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x82f35e7c
	if (cr6.lt) goto loc_82F35E7C;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// ble cr6,0x82f35e80
	if (!cr6.gt) goto loc_82F35E80;
loc_82F35E7C:
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
loc_82F35E80:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82f360c8
	if (cr6.eq) goto loc_82F360C8;
	// bl 0x83105358
	ctx.lr = 0x82F35E90;
	sub_83105358(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x82b1b708
	ctx.lr = 0x82F35E9C;
	sub_82B1B708(ctx, base);
	// stw r22,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r22.u32);
	// addis r29,r31,231
	ctx.r29.s64 = ctx.r31.s64 + 15138816;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r29,r29,28152
	ctx.r29.s64 = ctx.r29.s64 + 28152;
	// bl 0x831178a0
	ctx.lr = 0x82F35EBC;
	sub_831178A0(ctx, base);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x8319dc20
	ctx.lr = 0x82F35EC4;
	sub_8319DC20(ctx, base);
	// cmplwi cr6,r23,13
	cr6.compare<uint32_t>(ctx.r23.u32, 13, xer);
	// bne cr6,0x82f360c8
	if (!cr6.eq) goto loc_82F360C8;
	// li r11,27
	ctx.r11.s64 = 27;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8319ee58
	ctx.lr = 0x82F35EE0;
	sub_8319EE58(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// lis r9,228
	ctx.r9.s64 = 14942208;
	// lis r28,-31758
	ctx.r28.s64 = -2081292288;
	// ori r30,r9,42280
	ctx.r30.u64 = ctx.r9.u64 | 42280;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82f35f7c
	if (cr6.eq) goto loc_82F35F7C;
	// stw r26,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r26.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82b1b488
	ctx.lr = 0x82F35F08;
	sub_82B1B488(ctx, base);
	// ldx r11,r31,r30
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + ctx.r30.u32);
	// ld r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r3.u32 + 8);
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82f35f34
	if (!cr6.eq) goto loc_82F35F34;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r10,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// b 0x82f35f5c
	goto loc_82F35F5C;
loc_82F35F34:
	// lhz r8,96(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + 96);
	// lhz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// cmplw cr6,r7,r8
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, xer);
	// bne cr6,0x82f35f54
	if (!cr6.eq) goto loc_82F35F54;
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// beq cr6,0x82f35f58
	if (cr6.eq) goto loc_82F35F58;
loc_82F35F54:
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
loc_82F35F58:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_82F35F5C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82f35f7c
	if (cr6.eq) goto loc_82F35F7C;
	// lwz r11,24080(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 24080);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82f35f7c
	if (cr6.eq) goto loc_82F35F7C;
	// li r3,351
	ctx.r3.s64 = 351;
	// bl 0x82d84728
	ctx.lr = 0x82F35F7C;
	sub_82D84728(ctx, base);
loc_82F35F7C:
	// li r11,28
	ctx.r11.s64 = 28;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8319ee58
	ctx.lr = 0x82F35F90;
	sub_8319EE58(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82f36024
	if (cr6.eq) goto loc_82F36024;
	// li r11,2
	ctx.r11.s64 = 2;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82b1b488
	ctx.lr = 0x82F35FB0;
	sub_82B1B488(ctx, base);
	// ldx r10,r31,r30
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + ctx.r30.u32);
	// ld r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r3.u32 + 8);
	// std r10,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r10.u64);
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// bne cr6,0x82f35fdc
	if (!cr6.eq) goto loc_82F35FDC;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r10,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// b 0x82f36004
	goto loc_82F36004;
loc_82F35FDC:
	// lhz r8,96(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + 96);
	// lhz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// cmplw cr6,r7,r8
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, xer);
	// bne cr6,0x82f35ffc
	if (!cr6.eq) goto loc_82F35FFC;
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// beq cr6,0x82f36000
	if (cr6.eq) goto loc_82F36000;
loc_82F35FFC:
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
loc_82F36000:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_82F36004:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82f36024
	if (cr6.eq) goto loc_82F36024;
	// lwz r11,24080(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 24080);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82f36024
	if (cr6.eq) goto loc_82F36024;
	// li r3,352
	ctx.r3.s64 = 352;
	// bl 0x82d84728
	ctx.lr = 0x82F36024;
	sub_82D84728(ctx, base);
loc_82F36024:
	// li r11,29
	ctx.r11.s64 = 29;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8319ee58
	ctx.lr = 0x82F36038;
	sub_8319EE58(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82f360c8
	if (cr6.eq) goto loc_82F360C8;
	// stw r24,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r24.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82b1b488
	ctx.lr = 0x82F36054;
	sub_82B1B488(ctx, base);
	// ldx r11,r31,r30
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + ctx.r30.u32);
	// ld r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r3.u32 + 8);
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// bne cr6,0x82f36080
	if (!cr6.eq) goto loc_82F36080;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r10,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// b 0x82f360a8
	goto loc_82F360A8;
loc_82F36080:
	// lhz r8,96(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + 96);
	// lhz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// cmplw cr6,r7,r8
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, xer);
	// bne cr6,0x82f360a0
	if (!cr6.eq) goto loc_82F360A0;
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// beq cr6,0x82f360a4
	if (cr6.eq) goto loc_82F360A4;
loc_82F360A0:
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
loc_82F360A4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_82F360A8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82f360c8
	if (cr6.eq) goto loc_82F360C8;
	// lwz r11,24080(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 24080);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82f360c8
	if (cr6.eq) goto loc_82F360C8;
	// li r3,353
	ctx.r3.s64 = 353;
	// bl 0x82d84728
	ctx.lr = 0x82F360C8;
	sub_82D84728(ctx, base);
loc_82F360C8:
	// lwz r11,12(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 12);
	// stb r26,120(r11)
	PPC_STORE_U8(ctx.r11.u32 + 120, ctx.r26.u8);
loc_82F360D0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,928
	ctx.r1.s64 = ctx.r1.s64 + 928;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F360DC"))) PPC_WEAK_FUNC(sub_82F360DC);
PPC_FUNC_IMPL(__imp__sub_82F360DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F360E0"))) PPC_WEAK_FUNC(sub_82F360E0);
PPC_FUNC_IMPL(__imp__sub_82F360E0) {
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
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82f36104
	if (cr6.lt) goto loc_82F36104;
	// lwz r31,0(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82f36108
	goto loc_82F36108;
loc_82F36104:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_82F36108:
	// li r11,31
	ctx.r11.s64 = 31;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,128
	ctx.r4.s64 = 128;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82F36120;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82f36138
	if (cr6.eq) goto loc_82F36138;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82f356d0
	ctx.lr = 0x82F36130;
	sub_82F356D0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82f3613c
	if (!cr6.eq) goto loc_82F3613C;
loc_82F36138:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82F3613C:
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

__attribute__((alias("__imp__sub_82F36150"))) PPC_WEAK_FUNC(sub_82F36150);
PPC_FUNC_IMPL(__imp__sub_82F36150) {
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
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-12824
	ctx.r9.s64 = ctx.r11.s64 + -12824;
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
	// bl 0x82f42278
	ctx.lr = 0x82F36188;
	sub_82F42278(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82f361a0
	if (cr6.eq) goto loc_82F361A0;
	// bl 0x82416268
	ctx.lr = 0x82F3619C;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82F361A0:
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

__attribute__((alias("__imp__sub_82F361B8"))) PPC_WEAK_FUNC(sub_82F361B8);
PPC_FUNC_IMPL(__imp__sub_82F361B8) {
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
	// li r11,31
	ctx.r11.s64 = 31;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,88
	ctx.r4.s64 = 88;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82F361E8;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82f3621c
	if (cr6.eq) goto loc_82F3621C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82f42220
	ctx.lr = 0x82F361FC;
	sub_82F42220(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-12824
	ctx.r9.s64 = ctx.r11.s64 + -12824;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r8,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r8.u32);
	// b 0x82f36220
	goto loc_82F36220;
loc_82F3621C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82F36220:
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

__attribute__((alias("__imp__sub_82F36238"))) PPC_WEAK_FUNC(sub_82F36238);
PPC_FUNC_IMPL(__imp__sub_82F36238) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82f36248
	if (cr6.lt) goto loc_82F36248;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_82F36248:
	// b 0x82f361b8
	sub_82F361B8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3624C"))) PPC_WEAK_FUNC(sub_82F3624C);
PPC_FUNC_IMPL(__imp__sub_82F3624C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F36250"))) PPC_WEAK_FUNC(sub_82F36250);
PPC_FUNC_IMPL(__imp__sub_82F36250) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// stb r11,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r11.u8);
	// bl 0x831156e8
	ctx.lr = 0x82F3627C;
	sub_831156E8(ctx, base);
	// lis r9,5
	ctx.r9.s64 = 327680;
	// lwz r8,52(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// ori r7,r9,35067
	ctx.r7.u64 = ctx.r9.u64 | 35067;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lbzx r6,r8,r7
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r7.u32);
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x82f362ac
	if (cr6.eq) goto loc_82F362AC;
	// addi r11,r11,-12924
	ctx.r11.s64 = ctx.r11.s64 + -12924;
	// li r5,7
	ctx.r5.s64 = 7;
	// addi r4,r11,-8
	ctx.r4.s64 = ctx.r11.s64 + -8;
	// b 0x82f362b4
	goto loc_82F362B4;
loc_82F362AC:
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r4,r11,-12924
	ctx.r4.s64 = ctx.r11.s64 + -12924;
loc_82F362B4:
	// bl 0x8259cc28
	ctx.lr = 0x82F362B8;
	sub_8259CC28(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x82F362C4;
	sub_82E88020(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82f362e4
	if (cr6.lt) goto loc_82F362E4;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82F362E4;
	sub_825952B8(ctx, base);
loc_82F362E4:
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

__attribute__((alias("__imp__sub_82F362FC"))) PPC_WEAK_FUNC(sub_82F362FC);
PPC_FUNC_IMPL(__imp__sub_82F362FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F36300"))) PPC_WEAK_FUNC(sub_82F36300);
PPC_FUNC_IMPL(__imp__sub_82F36300) {
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
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-12480
	ctx.r9.s64 = ctx.r11.s64 + -12480;
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
	// bl 0x82f42278
	ctx.lr = 0x82F36338;
	sub_82F42278(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82f36350
	if (cr6.eq) goto loc_82F36350;
	// bl 0x82416268
	ctx.lr = 0x82F3634C;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82F36350:
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

__attribute__((alias("__imp__sub_82F36368"))) PPC_WEAK_FUNC(sub_82F36368);
PPC_FUNC_IMPL(__imp__sub_82F36368) {
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
	// li r11,31
	ctx.r11.s64 = 31;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,88
	ctx.r4.s64 = 88;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82F36398;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82f363cc
	if (cr6.eq) goto loc_82F363CC;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82f42220
	ctx.lr = 0x82F363AC;
	sub_82F42220(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-12480
	ctx.r9.s64 = ctx.r11.s64 + -12480;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r8,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r8.u32);
	// b 0x82f363d0
	goto loc_82F363D0;
loc_82F363CC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82F363D0:
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

__attribute__((alias("__imp__sub_82F363E8"))) PPC_WEAK_FUNC(sub_82F363E8);
PPC_FUNC_IMPL(__imp__sub_82F363E8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82f363f8
	if (cr6.lt) goto loc_82F363F8;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_82F363F8:
	// b 0x82f36368
	sub_82F36368(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F363FC"))) PPC_WEAK_FUNC(sub_82F363FC);
PPC_FUNC_IMPL(__imp__sub_82F363FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F36400"))) PPC_WEAK_FUNC(sub_82F36400);
PPC_FUNC_IMPL(__imp__sub_82F36400) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,15
	ctx.r10.s64 = 15;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// stb r11,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r11.u8);
	// bl 0x831156e8
	ctx.lr = 0x82F3642C;
	sub_831156E8(ctx, base);
	// lis r9,220
	ctx.r9.s64 = 14417920;
	// lwz r8,48(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// ori r7,r9,40312
	ctx.r7.u64 = ctx.r9.u64 | 40312;
	// lwzx r11,r8,r7
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// cmplwi cr6,r11,34
	cr6.compare<uint32_t>(ctx.r11.u32, 34, xer);
	// bgt cr6,0x82f36528
	if (cr6.gt) goto loc_82F36528;
	// beq cr6,0x82f36518
	if (cr6.eq) goto loc_82F36518;
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// cmplwi cr6,r11,31
	cr6.compare<uint32_t>(ctx.r11.u32, 31, xer);
	// bgt cr6,0x82f365b0
	if (cr6.gt) goto loc_82F365B0;
	// lis r12,-32013
	ctx.r12.s64 = -2098003968;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,25708
	ctx.r12.s64 = ctx.r12.s64 + 25708;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_82F3650C;
	case 1:
		goto loc_82F3650C;
	case 2:
		goto loc_82F365B0;
	case 3:
		goto loc_82F365C0;
	case 4:
		goto loc_82F365C0;
	case 5:
		goto loc_82F365B0;
	case 6:
		goto loc_82F3650C;
	case 7:
		goto loc_82F36598;
	case 8:
		goto loc_82F36598;
	case 9:
		goto loc_82F36598;
	case 10:
		goto loc_82F36598;
	case 11:
		goto loc_82F36598;
	case 12:
		goto loc_82F36598;
	case 13:
		goto loc_82F365B0;
	case 14:
		goto loc_82F365B0;
	case 15:
		goto loc_82F365B0;
	case 16:
		goto loc_82F365B0;
	case 17:
		goto loc_82F365B0;
	case 18:
		goto loc_82F365B0;
	case 19:
		goto loc_82F36598;
	case 20:
		goto loc_82F36598;
	case 21:
		goto loc_82F36598;
	case 22:
		goto loc_82F365B0;
	case 23:
		goto loc_82F365B0;
	case 24:
		goto loc_82F365B0;
	case 25:
		goto loc_82F364EC;
	case 26:
		goto loc_82F365B0;
	case 27:
		goto loc_82F365B0;
	case 28:
		goto loc_82F365B0;
	case 29:
		goto loc_82F365B0;
	case 30:
		goto loc_82F365B0;
	case 31:
		goto loc_82F364FC;
	default:
		return;
	}
	// lwz r23,25868(r19)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r19.u32 + 25868);
	// lwz r23,25868(r19)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r19.u32 + 25868);
	// lwz r23,26032(r19)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r19.u32 + 26032);
	// lwz r23,26048(r19)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r19.u32 + 26048);
	// lwz r23,26048(r19)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r19.u32 + 26048);
	// lwz r23,26032(r19)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r19.u32 + 26032);
	// lwz r23,25868(r19)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r19.u32 + 25868);
	// lwz r23,26008(r19)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r19.u32 + 26008);
	// lwz r23,26008(r19)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r19.u32 + 26008);
	// lwz r23,26008(r19)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r19.u32 + 26008);
	// lwz r23,26008(r19)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r19.u32 + 26008);
	// lwz r23,26008(r19)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r19.u32 + 26008);
	// lwz r23,26008(r19)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r19.u32 + 26008);
	// lwz r23,26032(r19)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r19.u32 + 26032);
	// lwz r23,26032(r19)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r19.u32 + 26032);
	// lwz r23,26032(r19)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r19.u32 + 26032);
	// lwz r23,26032(r19)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r19.u32 + 26032);
	// lwz r23,26032(r19)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r19.u32 + 26032);
	// lwz r23,26032(r19)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r19.u32 + 26032);
	// lwz r23,26008(r19)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r19.u32 + 26008);
	// lwz r23,26008(r19)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r19.u32 + 26008);
	// lwz r23,26008(r19)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r19.u32 + 26008);
	// lwz r23,26032(r19)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r19.u32 + 26032);
	// lwz r23,26032(r19)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r19.u32 + 26032);
	// lwz r23,26032(r19)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r19.u32 + 26032);
	// lwz r23,25836(r19)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r19.u32 + 25836);
	// lwz r23,26032(r19)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r19.u32 + 26032);
	// lwz r23,26032(r19)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r19.u32 + 26032);
	// lwz r23,26032(r19)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r19.u32 + 26032);
	// lwz r23,26032(r19)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r19.u32 + 26032);
	// lwz r23,26032(r19)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r19.u32 + 26032);
	// lwz r23,25852(r19)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r19.u32 + 25852);
loc_82F364EC:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r11,r11,-12568
	ctx.r11.s64 = ctx.r11.s64 + -12568;
	// addi r4,r11,-84
	ctx.r4.s64 = ctx.r11.s64 + -84;
	// b 0x82f365cc
	goto loc_82F365CC;
loc_82F364FC:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r11,r11,-12568
	ctx.r11.s64 = ctx.r11.s64 + -12568;
	// addi r4,r11,-72
	ctx.r4.s64 = ctx.r11.s64 + -72;
	// b 0x82f365cc
	goto loc_82F365CC;
loc_82F3650C:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r4,r11,-12568
	ctx.r4.s64 = ctx.r11.s64 + -12568;
	// b 0x82f365cc
	goto loc_82F365CC;
loc_82F36518:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r11,r11,-12568
	ctx.r11.s64 = ctx.r11.s64 + -12568;
	// addi r4,r11,-60
	ctx.r4.s64 = ctx.r11.s64 + -60;
	// b 0x82f365cc
	goto loc_82F365CC;
loc_82F36528:
	// cmplwi cr6,r11,40
	cr6.compare<uint32_t>(ctx.r11.u32, 40, xer);
	// bgt cr6,0x82f36580
	if (cr6.gt) goto loc_82F36580;
	// cmplwi cr6,r11,39
	cr6.compare<uint32_t>(ctx.r11.u32, 39, xer);
	// bge cr6,0x82f36598
	if (!cr6.lt) goto loc_82F36598;
	// cmplwi cr6,r11,35
	cr6.compare<uint32_t>(ctx.r11.u32, 35, xer);
	// beq cr6,0x82f36570
	if (cr6.eq) goto loc_82F36570;
	// cmplwi cr6,r11,36
	cr6.compare<uint32_t>(ctx.r11.u32, 36, xer);
	// beq cr6,0x82f36560
	if (cr6.eq) goto loc_82F36560;
	// cmplwi cr6,r11,37
	cr6.compare<uint32_t>(ctx.r11.u32, 37, xer);
	// bne cr6,0x82f365b0
	if (!cr6.eq) goto loc_82F365B0;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r11,r11,-12568
	ctx.r11.s64 = ctx.r11.s64 + -12568;
	// addi r4,r11,-96
	ctx.r4.s64 = ctx.r11.s64 + -96;
	// b 0x82f365cc
	goto loc_82F365CC;
loc_82F36560:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r11,r11,-12568
	ctx.r11.s64 = ctx.r11.s64 + -12568;
	// addi r4,r11,-48
	ctx.r4.s64 = ctx.r11.s64 + -48;
	// b 0x82f365cc
	goto loc_82F365CC;
loc_82F36570:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r11,r11,-12568
	ctx.r11.s64 = ctx.r11.s64 + -12568;
	// addi r4,r11,-36
	ctx.r4.s64 = ctx.r11.s64 + -36;
	// b 0x82f365cc
	goto loc_82F365CC;
loc_82F36580:
	// cmplwi cr6,r11,69
	cr6.compare<uint32_t>(ctx.r11.u32, 69, xer);
	// bgt cr6,0x82f365a8
	if (cr6.gt) goto loc_82F365A8;
	// cmplwi cr6,r11,66
	cr6.compare<uint32_t>(ctx.r11.u32, 66, xer);
	// bge cr6,0x82f36598
	if (!cr6.lt) goto loc_82F36598;
	// cmplwi cr6,r11,48
	cr6.compare<uint32_t>(ctx.r11.u32, 48, xer);
	// b 0x82f365ac
	goto loc_82F365AC;
loc_82F36598:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r11,r11,-12568
	ctx.r11.s64 = ctx.r11.s64 + -12568;
	// addi r4,r11,-12
	ctx.r4.s64 = ctx.r11.s64 + -12;
	// b 0x82f365cc
	goto loc_82F365CC;
loc_82F365A8:
	// cmplwi cr6,r11,91
	cr6.compare<uint32_t>(ctx.r11.u32, 91, xer);
loc_82F365AC:
	// beq cr6,0x82f365c0
	if (cr6.eq) goto loc_82F365C0;
loc_82F365B0:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r11,r11,-12568
	ctx.r11.s64 = ctx.r11.s64 + -12568;
	// addi r4,r11,-100
	ctx.r4.s64 = ctx.r11.s64 + -100;
	// b 0x82f365cc
	goto loc_82F365CC;
loc_82F365C0:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r11,r11,-12568
	ctx.r11.s64 = ctx.r11.s64 + -12568;
	// addi r4,r11,-24
	ctx.r4.s64 = ctx.r11.s64 + -24;
loc_82F365CC:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8259d6c0
	ctx.lr = 0x82F365D4;
	sub_8259D6C0(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x82F365E0;
	sub_82E88020(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82f36600
	if (cr6.lt) goto loc_82F36600;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82F36600;
	sub_825952B8(ctx, base);
loc_82F36600:
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

__attribute__((alias("__imp__sub_82F36618"))) PPC_WEAK_FUNC(sub_82F36618);
PPC_FUNC_IMPL(__imp__sub_82F36618) {
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
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-11928
	ctx.r9.s64 = ctx.r11.s64 + -11928;
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
	// bl 0x82f42278
	ctx.lr = 0x82F36650;
	sub_82F42278(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82f36668
	if (cr6.eq) goto loc_82F36668;
	// bl 0x82416268
	ctx.lr = 0x82F36664;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82F36668:
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

__attribute__((alias("__imp__sub_82F36680"))) PPC_WEAK_FUNC(sub_82F36680);
PPC_FUNC_IMPL(__imp__sub_82F36680) {
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
	// li r11,31
	ctx.r11.s64 = 31;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,88
	ctx.r4.s64 = 88;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82F366B0;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82f366e4
	if (cr6.eq) goto loc_82F366E4;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82f42220
	ctx.lr = 0x82F366C4;
	sub_82F42220(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-11928
	ctx.r9.s64 = ctx.r11.s64 + -11928;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r8,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r8.u32);
	// b 0x82f366e8
	goto loc_82F366E8;
loc_82F366E4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82F366E8:
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

__attribute__((alias("__imp__sub_82F36700"))) PPC_WEAK_FUNC(sub_82F36700);
PPC_FUNC_IMPL(__imp__sub_82F36700) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82f36710
	if (cr6.lt) goto loc_82F36710;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_82F36710:
	// b 0x82f36680
	sub_82F36680(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F36714"))) PPC_WEAK_FUNC(sub_82F36714);
PPC_FUNC_IMPL(__imp__sub_82F36714) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F36718"))) PPC_WEAK_FUNC(sub_82F36718);
PPC_FUNC_IMPL(__imp__sub_82F36718) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82F36720;
	__savegprlr_29(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,15
	ctx.r10.s64 = 15;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// stb r11,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r11.u8);
	// bl 0x831156e8
	ctx.lr = 0x82F36740;
	sub_831156E8(ctx, base);
	// lwz r9,48(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// addis r31,r9,221
	ctx.r31.s64 = ctx.r9.s64 + 14483456;
	// addi r31,r31,-26512
	ctx.r31.s64 = ctx.r31.s64 + -26512;
	// bl 0x830ff290
	ctx.lr = 0x82F36750;
	sub_830FF290(ctx, base);
	// bl 0x830ffaa8
	ctx.lr = 0x82F36754;
	sub_830FFAA8(ctx, base);
	// lwz r11,1288(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1288);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,34
	cr6.compare<uint32_t>(ctx.r11.u32, 34, xer);
	// bgt cr6,0x82f36820
	if (cr6.gt) goto loc_82F36820;
	// beq cr6,0x82f36810
	if (cr6.eq) goto loc_82F36810;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,32
	cr6.compare<uint32_t>(ctx.r11.u32, 32, xer);
	// bgt cr6,0x82f368a8
	if (cr6.gt) goto loc_82F368A8;
	// lis r12,-32013
	ctx.r12.s64 = -2098003968;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,26508
	ctx.r12.s64 = ctx.r12.s64 + 26508;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_82F368D0;
	case 1:
		goto loc_82F368DC;
	case 2:
		goto loc_82F368DC;
	case 3:
		goto loc_82F368A8;
	case 4:
		goto loc_82F368DC;
	case 5:
		goto loc_82F368DC;
	case 6:
		goto loc_82F368A8;
	case 7:
		goto loc_82F368DC;
	case 8:
		goto loc_82F368A8;
	case 9:
		goto loc_82F368A8;
	case 10:
		goto loc_82F368A8;
	case 11:
		goto loc_82F368A8;
	case 12:
		goto loc_82F368A8;
	case 13:
		goto loc_82F368A8;
	case 14:
		goto loc_82F368D0;
	case 15:
		goto loc_82F368D0;
	case 16:
		goto loc_82F368D0;
	case 17:
		goto loc_82F368D0;
	case 18:
		goto loc_82F368D0;
	case 19:
		goto loc_82F368D0;
	case 20:
		goto loc_82F368A8;
	case 21:
		goto loc_82F368A8;
	case 22:
		goto loc_82F368A8;
	case 23:
		goto loc_82F368D0;
	case 24:
		goto loc_82F368A8;
	case 25:
		goto loc_82F368A8;
	case 26:
		goto loc_82F368DC;
	case 27:
		goto loc_82F368A8;
	case 28:
		goto loc_82F368A8;
	case 29:
		goto loc_82F368A8;
	case 30:
		goto loc_82F368A8;
	case 31:
		goto loc_82F368A8;
	case 32:
		goto loc_82F368DC;
	default:
		return;
	}
	// lwz r23,26832(r19)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r19.u32 + 26832);
	// lwz r23,26844(r19)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r19.u32 + 26844);
	// lwz r23,26844(r19)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r19.u32 + 26844);
	// lwz r23,26792(r19)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r19.u32 + 26792);
	// lwz r23,26844(r19)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r19.u32 + 26844);
	// lwz r23,26844(r19)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r19.u32 + 26844);
	// lwz r23,26792(r19)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r19.u32 + 26792);
	// lwz r23,26844(r19)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r19.u32 + 26844);
	// lwz r23,26792(r19)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r19.u32 + 26792);
	// lwz r23,26792(r19)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r19.u32 + 26792);
	// lwz r23,26792(r19)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r19.u32 + 26792);
	// lwz r23,26792(r19)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r19.u32 + 26792);
	// lwz r23,26792(r19)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r19.u32 + 26792);
	// lwz r23,26792(r19)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r19.u32 + 26792);
	// lwz r23,26832(r19)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r19.u32 + 26832);
	// lwz r23,26832(r19)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r19.u32 + 26832);
	// lwz r23,26832(r19)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r19.u32 + 26832);
	// lwz r23,26832(r19)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r19.u32 + 26832);
	// lwz r23,26832(r19)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r19.u32 + 26832);
	// lwz r23,26832(r19)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r19.u32 + 26832);
	// lwz r23,26792(r19)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r19.u32 + 26792);
	// lwz r23,26792(r19)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r19.u32 + 26792);
	// lwz r23,26792(r19)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r19.u32 + 26792);
	// lwz r23,26832(r19)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r19.u32 + 26832);
	// lwz r23,26792(r19)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r19.u32 + 26792);
	// lwz r23,26792(r19)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r19.u32 + 26792);
	// lwz r23,26844(r19)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r19.u32 + 26844);
	// lwz r23,26792(r19)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r19.u32 + 26792);
	// lwz r23,26792(r19)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r19.u32 + 26792);
	// lwz r23,26792(r19)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r19.u32 + 26792);
	// lwz r23,26792(r19)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r19.u32 + 26792);
	// lwz r23,26792(r19)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r19.u32 + 26792);
	// lwz r23,26844(r19)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r19.u32 + 26844);
loc_82F36810:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r11,r11,-12024
	ctx.r11.s64 = ctx.r11.s64 + -12024;
	// addi r4,r11,-32
	ctx.r4.s64 = ctx.r11.s64 + -32;
	// b 0x82f368e8
	goto loc_82F368E8;
loc_82F36820:
	// cmplwi cr6,r11,44
	cr6.compare<uint32_t>(ctx.r11.u32, 44, xer);
	// bgt cr6,0x82f36890
	if (cr6.gt) goto loc_82F36890;
	// cmplwi cr6,r11,42
	cr6.compare<uint32_t>(ctx.r11.u32, 42, xer);
	// bge cr6,0x82f368d0
	if (!cr6.lt) goto loc_82F368D0;
	// cmplwi cr6,r11,35
	cr6.compare<uint32_t>(ctx.r11.u32, 35, xer);
	// beq cr6,0x82f36880
	if (cr6.eq) goto loc_82F36880;
	// cmplwi cr6,r11,36
	cr6.compare<uint32_t>(ctx.r11.u32, 36, xer);
	// beq cr6,0x82f36870
	if (cr6.eq) goto loc_82F36870;
	// cmplwi cr6,r11,37
	cr6.compare<uint32_t>(ctx.r11.u32, 37, xer);
	// bne cr6,0x82f368a8
	if (!cr6.eq) goto loc_82F368A8;
	// lwz r11,1104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1104);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r11,r11,-12024
	ctx.r11.s64 = ctx.r11.s64 + -12024;
	// bne cr6,0x82f36868
	if (!cr6.eq) goto loc_82F36868;
	// addi r4,r11,-60
	ctx.r4.s64 = ctx.r11.s64 + -60;
	// b 0x82f368ec
	goto loc_82F368EC;
loc_82F36868:
	// addi r4,r11,-52
	ctx.r4.s64 = ctx.r11.s64 + -52;
	// b 0x82f368ec
	goto loc_82F368EC;
loc_82F36870:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r11,r11,-12024
	ctx.r11.s64 = ctx.r11.s64 + -12024;
	// addi r4,r11,-20
	ctx.r4.s64 = ctx.r11.s64 + -20;
	// b 0x82f368e8
	goto loc_82F368E8;
loc_82F36880:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r11,r11,-12024
	ctx.r11.s64 = ctx.r11.s64 + -12024;
	// addi r4,r11,-8
	ctx.r4.s64 = ctx.r11.s64 + -8;
	// b 0x82f368e8
	goto loc_82F368E8;
loc_82F36890:
	// cmplwi cr6,r11,48
	cr6.compare<uint32_t>(ctx.r11.u32, 48, xer);
	// beq cr6,0x82f368dc
	if (cr6.eq) goto loc_82F368DC;
	// cmplwi cr6,r11,49
	cr6.compare<uint32_t>(ctx.r11.u32, 49, xer);
	// beq cr6,0x82f368d0
	if (cr6.eq) goto loc_82F368D0;
	// cmplwi cr6,r11,91
	cr6.compare<uint32_t>(ctx.r11.u32, 91, xer);
	// beq cr6,0x82f368dc
	if (cr6.eq) goto loc_82F368DC;
loc_82F368A8:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// cmplwi cr6,r30,13
	cr6.compare<uint32_t>(ctx.r30.u32, 13, xer);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r11,r11,-12024
	ctx.r11.s64 = ctx.r11.s64 + -12024;
	// bne cr6,0x82f368c8
	if (!cr6.eq) goto loc_82F368C8;
	// addi r4,r11,-80
	ctx.r4.s64 = ctx.r11.s64 + -80;
	// bl 0x8259d6c0
	ctx.lr = 0x82F368C4;
	sub_8259D6C0(ctx, base);
	// b 0x82f368f8
	goto loc_82F368F8;
loc_82F368C8:
	// addi r4,r11,-72
	ctx.r4.s64 = ctx.r11.s64 + -72;
	// b 0x82f368ec
	goto loc_82F368EC;
loc_82F368D0:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r4,r11,-12024
	ctx.r4.s64 = ctx.r11.s64 + -12024;
	// b 0x82f368e8
	goto loc_82F368E8;
loc_82F368DC:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r11,r11,-12024
	ctx.r11.s64 = ctx.r11.s64 + -12024;
	// addi r4,r11,-40
	ctx.r4.s64 = ctx.r11.s64 + -40;
loc_82F368E8:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
loc_82F368EC:
	// bl 0x8259d6c0
	ctx.lr = 0x82F368F0;
	sub_8259D6C0(ctx, base);
	// cmplwi cr6,r30,13
	cr6.compare<uint32_t>(ctx.r30.u32, 13, xer);
	// bne cr6,0x82f36918
	if (!cr6.eq) goto loc_82F36918;
loc_82F368F8:
	// bl 0x830ee560
	ctx.lr = 0x82F368FC;
	sub_830EE560(ctx, base);
	// bl 0x83763ef8
	ctx.lr = 0x82F36900;
	sub_83763EF8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82f36920
	if (cr6.eq) goto loc_82F36920;
	// bl 0x83763ef8
	ctx.lr = 0x82F3690C;
	sub_83763EF8(ctx, base);
	// addi r3,r3,84
	ctx.r3.s64 = ctx.r3.s64 + 84;
	// bl 0x8376ea18
	ctx.lr = 0x82F36914;
	sub_8376EA18(ctx, base);
	// b 0x82f36920
	goto loc_82F36920;
loc_82F36918:
	// cmplwi cr6,r30,12
	cr6.compare<uint32_t>(ctx.r30.u32, 12, xer);
	// bne cr6,0x82f36930
	if (!cr6.eq) goto loc_82F36930;
loc_82F36920:
	// bl 0x831156e8
	ctx.lr = 0x82F36924;
	sub_831156E8(ctx, base);
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stb r10,1121(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1121, ctx.r10.u8);
loc_82F36930:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82e88020
	ctx.lr = 0x82F3693C;
	sub_82E88020(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82f3695c
	if (cr6.lt) goto loc_82F3695C;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82F3695C;
	sub_825952B8(ctx, base);
loc_82F3695C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F36968"))) PPC_WEAK_FUNC(sub_82F36968);
PPC_FUNC_IMPL(__imp__sub_82F36968) {
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
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-11672
	ctx.r9.s64 = ctx.r11.s64 + -11672;
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
	// bl 0x82f42278
	ctx.lr = 0x82F369A0;
	sub_82F42278(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82f369b8
	if (cr6.eq) goto loc_82F369B8;
	// bl 0x82416268
	ctx.lr = 0x82F369B4;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82F369B8:
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

__attribute__((alias("__imp__sub_82F369D0"))) PPC_WEAK_FUNC(sub_82F369D0);
PPC_FUNC_IMPL(__imp__sub_82F369D0) {
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
	// li r11,31
	ctx.r11.s64 = 31;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,88
	ctx.r4.s64 = 88;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82F36A00;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82f36a34
	if (cr6.eq) goto loc_82F36A34;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82f42220
	ctx.lr = 0x82F36A14;
	sub_82F42220(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-11672
	ctx.r9.s64 = ctx.r11.s64 + -11672;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r8,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r8.u32);
	// b 0x82f36a38
	goto loc_82F36A38;
loc_82F36A34:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82F36A38:
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

__attribute__((alias("__imp__sub_82F36A50"))) PPC_WEAK_FUNC(sub_82F36A50);
PPC_FUNC_IMPL(__imp__sub_82F36A50) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82f36a60
	if (cr6.lt) goto loc_82F36A60;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_82F36A60:
	// b 0x82f369d0
	sub_82F369D0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F36A64"))) PPC_WEAK_FUNC(sub_82F36A64);
PPC_FUNC_IMPL(__imp__sub_82F36A64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F36A68"))) PPC_WEAK_FUNC(sub_82F36A68);
PPC_FUNC_IMPL(__imp__sub_82F36A68) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// stb r11,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r11.u8);
	// bl 0x831156e8
	ctx.lr = 0x82F36A94;
	sub_831156E8(ctx, base);
	// lis r9,220
	ctx.r9.s64 = 14417920;
	// lwz r8,48(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// ori r7,r9,40124
	ctx.r7.u64 = ctx.r9.u64 | 40124;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lbzx r6,r8,r7
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r7.u32);
	// cmplwi cr6,r6,1
	cr6.compare<uint32_t>(ctx.r6.u32, 1, xer);
	// bne cr6,0x82f36ac4
	if (!cr6.eq) goto loc_82F36AC4;
	// addi r11,r11,-11768
	ctx.r11.s64 = ctx.r11.s64 + -11768;
	// li r5,3
	ctx.r5.s64 = 3;
	// addi r4,r11,-4
	ctx.r4.s64 = ctx.r11.s64 + -4;
	// b 0x82f36acc
	goto loc_82F36ACC;
loc_82F36AC4:
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r11,-11768
	ctx.r4.s64 = ctx.r11.s64 + -11768;
loc_82F36ACC:
	// bl 0x8259cc28
	ctx.lr = 0x82F36AD0;
	sub_8259CC28(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x82F36ADC;
	sub_82E88020(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82f36afc
	if (cr6.lt) goto loc_82F36AFC;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82F36AFC;
	sub_825952B8(ctx, base);
loc_82F36AFC:
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

__attribute__((alias("__imp__sub_82F36B14"))) PPC_WEAK_FUNC(sub_82F36B14);
PPC_FUNC_IMPL(__imp__sub_82F36B14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F36B18"))) PPC_WEAK_FUNC(sub_82F36B18);
PPC_FUNC_IMPL(__imp__sub_82F36B18) {
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
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-11416
	ctx.r9.s64 = ctx.r11.s64 + -11416;
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
	// bl 0x82f42278
	ctx.lr = 0x82F36B50;
	sub_82F42278(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82f36b68
	if (cr6.eq) goto loc_82F36B68;
	// bl 0x82416268
	ctx.lr = 0x82F36B64;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82F36B68:
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

__attribute__((alias("__imp__sub_82F36B80"))) PPC_WEAK_FUNC(sub_82F36B80);
PPC_FUNC_IMPL(__imp__sub_82F36B80) {
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
	// li r11,31
	ctx.r11.s64 = 31;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,88
	ctx.r4.s64 = 88;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82F36BB0;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82f36be4
	if (cr6.eq) goto loc_82F36BE4;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82f42220
	ctx.lr = 0x82F36BC4;
	sub_82F42220(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-11416
	ctx.r9.s64 = ctx.r11.s64 + -11416;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r8,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r8.u32);
	// b 0x82f36be8
	goto loc_82F36BE8;
loc_82F36BE4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82F36BE8:
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

__attribute__((alias("__imp__sub_82F36C00"))) PPC_WEAK_FUNC(sub_82F36C00);
PPC_FUNC_IMPL(__imp__sub_82F36C00) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82f36c10
	if (cr6.lt) goto loc_82F36C10;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_82F36C10:
	// b 0x82f36b80
	sub_82F36B80(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F36C14"))) PPC_WEAK_FUNC(sub_82F36C14);
PPC_FUNC_IMPL(__imp__sub_82F36C14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F36C18"))) PPC_WEAK_FUNC(sub_82F36C18);
PPC_FUNC_IMPL(__imp__sub_82F36C18) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// stb r11,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r11.u8);
	// bl 0x83129510
	ctx.lr = 0x82F36C44;
	sub_83129510(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82f36c6c
	if (cr6.eq) goto loc_82F36C6C;
	// lwz r11,72(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// cmplwi cr6,r11,255
	cr6.compare<uint32_t>(ctx.r11.u32, 255, xer);
	// beq cr6,0x82f36c60
	if (cr6.eq) goto loc_82F36C60;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r11.u32);
loc_82F36C60:
	// lwz r11,72(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82f36c80
	if (!cr6.eq) goto loc_82F36C80;
loc_82F36C6C:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// li r5,5
	ctx.r5.s64 = 5;
	// addi r11,r11,-11512
	ctx.r11.s64 = ctx.r11.s64 + -11512;
	// addi r4,r11,-8
	ctx.r4.s64 = ctx.r11.s64 + -8;
	// b 0x82f36c8c
	goto loc_82F36C8C;
loc_82F36C80:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r4,r11,-11512
	ctx.r4.s64 = ctx.r11.s64 + -11512;
loc_82F36C8C:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8259cc28
	ctx.lr = 0x82F36C94;
	sub_8259CC28(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x82F36CA0;
	sub_82E88020(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82f36cc0
	if (cr6.lt) goto loc_82F36CC0;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82F36CC0;
	sub_825952B8(ctx, base);
loc_82F36CC0:
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

__attribute__((alias("__imp__sub_82F36CD8"))) PPC_WEAK_FUNC(sub_82F36CD8);
PPC_FUNC_IMPL(__imp__sub_82F36CD8) {
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
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-11160
	ctx.r9.s64 = ctx.r11.s64 + -11160;
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
	// bl 0x82f42278
	ctx.lr = 0x82F36D10;
	sub_82F42278(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82f36d28
	if (cr6.eq) goto loc_82F36D28;
	// bl 0x82416268
	ctx.lr = 0x82F36D24;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82F36D28:
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

__attribute__((alias("__imp__sub_82F36D40"))) PPC_WEAK_FUNC(sub_82F36D40);
PPC_FUNC_IMPL(__imp__sub_82F36D40) {
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
	// li r11,31
	ctx.r11.s64 = 31;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,88
	ctx.r4.s64 = 88;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82F36D70;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82f36da4
	if (cr6.eq) goto loc_82F36DA4;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82f42220
	ctx.lr = 0x82F36D84;
	sub_82F42220(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-11160
	ctx.r9.s64 = ctx.r11.s64 + -11160;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r8,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r8.u32);
	// b 0x82f36da8
	goto loc_82F36DA8;
loc_82F36DA4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82F36DA8:
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

__attribute__((alias("__imp__sub_82F36DC0"))) PPC_WEAK_FUNC(sub_82F36DC0);
PPC_FUNC_IMPL(__imp__sub_82F36DC0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82f36dd0
	if (cr6.lt) goto loc_82F36DD0;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_82F36DD0:
	// b 0x82f36d40
	sub_82F36D40(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F36DD4"))) PPC_WEAK_FUNC(sub_82F36DD4);
PPC_FUNC_IMPL(__imp__sub_82F36DD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F36DD8"))) PPC_WEAK_FUNC(sub_82F36DD8);
PPC_FUNC_IMPL(__imp__sub_82F36DD8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82F36DE0;
	__savegprlr_27(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r11,15
	ctx.r11.s64 = 15;
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r30.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// stb r30,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r30.u8);
	// bl 0x831156e8
	ctx.lr = 0x82F36E00;
	sub_831156E8(ctx, base);
	// lis r10,220
	ctx.r10.s64 = 14417920;
	// lwz r9,48(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// ori r8,r10,40124
	ctx.r8.u64 = ctx.r10.u64 | 40124;
	// addis r31,r9,221
	ctx.r31.s64 = ctx.r9.s64 + 14483456;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r31,r31,-26512
	ctx.r31.s64 = ctx.r31.s64 + -26512;
	// lbzx r7,r9,r8
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r8.u32);
	// cmplwi cr6,r7,1
	cr6.compare<uint32_t>(ctx.r7.u32, 1, xer);
	// bne cr6,0x82f36e70
	if (!cr6.eq) goto loc_82F36E70;
	// addi r11,r11,-11256
	ctx.r11.s64 = ctx.r11.s64 + -11256;
	// li r5,3
	ctx.r5.s64 = 3;
	// addi r4,r11,-4
	ctx.r4.s64 = ctx.r11.s64 + -4;
	// bl 0x8259cc28
	ctx.lr = 0x82F36E38;
	sub_8259CC28(ctx, base);
	// bl 0x831156e8
	ctx.lr = 0x82F36E3C;
	sub_831156E8(ctx, base);
	// lwz r10,52(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// lis r9,-31774
	ctx.r9.s64 = -2082340864;
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stb r8,1121(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1121, ctx.r8.u8);
	// lwz r11,7916(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 7916);
	// lwz r6,1156(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1156);
	// rlwimi r6,r11,0,0,13
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0xFFFC0000) | (ctx.r6.u64 & 0xFFFFFFFF0003FFFF);
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// stw r6,1156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1156, ctx.r6.u32);
	// lwz r11,7916(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 7916);
	// rlwimi r5,r11,0,14,31
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0x3FFFF) | (ctx.r5.u64 & 0xFFFFFFFFFFFC0000);
	// stw r5,1156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1156, ctx.r5.u32);
	// b 0x82f36f70
	goto loc_82F36F70;
loc_82F36E70:
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r11,-11256
	ctx.r4.s64 = ctx.r11.s64 + -11256;
	// bl 0x8259cc28
	ctx.lr = 0x82F36E7C;
	sub_8259CC28(ctx, base);
	// li r10,2
	ctx.r10.s64 = 2;
	// lis r11,-31774
	ctx.r11.s64 = -2082340864;
loc_82F36E84:
	// addi r9,r10,254
	ctx.r9.s64 = ctx.r10.s64 + 254;
	// addi r8,r10,255
	ctx.r8.s64 = ctx.r10.s64 + 255;
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	// addi r6,r10,1
	ctx.r6.s64 = ctx.r10.s64 + 1;
	// add r5,r9,r31
	ctx.r5.u64 = ctx.r9.u64 + ctx.r31.u64;
	// addi r4,r9,289
	ctx.r4.s64 = ctx.r9.s64 + 289;
	// clrlwi r9,r8,24
	ctx.r9.u64 = ctx.r8.u32 & 0xFF;
	// rlwinm r8,r4,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r9,r31
	ctx.r3.u64 = ctx.r9.u64 + ctx.r31.u64;
	// addi r7,r9,289
	ctx.r7.s64 = ctx.r9.s64 + 289;
	// stb r30,1121(r5)
	PPC_STORE_U8(ctx.r5.u32 + 1121, ctx.r30.u8);
	// clrlwi r9,r10,24
	ctx.r9.u64 = ctx.r10.u32 & 0xFF;
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r9,r31
	ctx.r4.u64 = ctx.r9.u64 + ctx.r31.u64;
	// lwzx r5,r8,r31
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r31.u32);
	// addi r28,r9,289
	ctx.r28.s64 = ctx.r9.s64 + 289;
	// clrlwi r9,r6,24
	ctx.r9.u64 = ctx.r6.u32 & 0xFF;
	// rlwinm r6,r28,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r27,r9,289
	ctx.r27.s64 = ctx.r9.s64 + 289;
	// add r28,r9,r31
	ctx.r28.u64 = ctx.r9.u64 + ctx.r31.u64;
	// lwz r9,7916(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 7916);
	// rlwimi r9,r5,0,14,31
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r5.u32, 0) & 0x3FFFF) | (ctx.r9.u64 & 0xFFFFFFFFFFFC0000);
	// rlwinm r5,r27,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r9,r8,r31
	PPC_STORE_U32(ctx.r8.u32 + ctx.r31.u32, ctx.r9.u32);
	// mr r27,r9
	ctx.r27.u64 = ctx.r9.u64;
	// lwz r9,7916(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 7916);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// rlwimi r27,r9,0,14,31
	ctx.r27.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0x3FFFF) | (ctx.r27.u64 & 0xFFFFFFFFFFFC0000);
	// stwx r27,r8,r31
	PPC_STORE_U32(ctx.r8.u32 + ctx.r31.u32, ctx.r27.u32);
	// addi r8,r10,-2
	ctx.r8.s64 = ctx.r10.s64 + -2;
	// stb r30,1121(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1121, ctx.r30.u8);
	// lwzx r3,r7,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r31.u32);
	// cmplwi cr6,r8,32
	cr6.compare<uint32_t>(ctx.r8.u32, 32, xer);
	// lwz r9,7916(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 7916);
	// rlwimi r9,r3,0,14,31
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r3.u32, 0) & 0x3FFFF) | (ctx.r9.u64 & 0xFFFFFFFFFFFC0000);
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// stwx r9,r7,r31
	PPC_STORE_U32(ctx.r7.u32 + ctx.r31.u32, ctx.r9.u32);
	// lwz r9,7916(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 7916);
	// rlwimi r8,r9,0,14,31
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0x3FFFF) | (ctx.r8.u64 & 0xFFFFFFFFFFFC0000);
	// stwx r8,r7,r31
	PPC_STORE_U32(ctx.r7.u32 + ctx.r31.u32, ctx.r8.u32);
	// stb r30,1121(r4)
	PPC_STORE_U8(ctx.r4.u32 + 1121, ctx.r30.u8);
	// lwz r9,7916(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 7916);
	// lwzx r7,r6,r31
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r31.u32);
	// rlwimi r9,r7,0,14,31
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r7.u32, 0) & 0x3FFFF) | (ctx.r9.u64 & 0xFFFFFFFFFFFC0000);
	// mr r4,r9
	ctx.r4.u64 = ctx.r9.u64;
	// stwx r9,r6,r31
	PPC_STORE_U32(ctx.r6.u32 + ctx.r31.u32, ctx.r9.u32);
	// lwz r9,7916(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 7916);
	// rlwimi r4,r9,0,14,31
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0x3FFFF) | (ctx.r4.u64 & 0xFFFFFFFFFFFC0000);
	// stwx r4,r6,r31
	PPC_STORE_U32(ctx.r6.u32 + ctx.r31.u32, ctx.r4.u32);
	// stb r30,1121(r28)
	PPC_STORE_U8(ctx.r28.u32 + 1121, ctx.r30.u8);
	// lwz r9,7916(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 7916);
	// lwzx r3,r5,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r31.u32);
	// rlwimi r9,r3,0,14,31
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r3.u32, 0) & 0x3FFFF) | (ctx.r9.u64 & 0xFFFFFFFFFFFC0000);
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// stwx r9,r5,r31
	PPC_STORE_U32(ctx.r5.u32 + ctx.r31.u32, ctx.r9.u32);
	// lwz r9,7916(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 7916);
	// rlwimi r8,r9,0,14,31
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0x3FFFF) | (ctx.r8.u64 & 0xFFFFFFFFFFFC0000);
	// stwx r8,r5,r31
	PPC_STORE_U32(ctx.r5.u32 + ctx.r31.u32, ctx.r8.u32);
	// blt cr6,0x82f36e84
	if (cr6.lt) goto loc_82F36E84;
loc_82F36F70:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82e88020
	ctx.lr = 0x82F36F7C;
	sub_82E88020(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82f36f9c
	if (cr6.lt) goto loc_82F36F9C;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82F36F9C;
	sub_825952B8(ctx, base);
loc_82F36F9C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F36FA8"))) PPC_WEAK_FUNC(sub_82F36FA8);
PPC_FUNC_IMPL(__imp__sub_82F36FA8) {
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
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-10904
	ctx.r9.s64 = ctx.r11.s64 + -10904;
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
	// bl 0x82f42278
	ctx.lr = 0x82F36FE0;
	sub_82F42278(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82f36ff8
	if (cr6.eq) goto loc_82F36FF8;
	// bl 0x82416268
	ctx.lr = 0x82F36FF4;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82F36FF8:
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

__attribute__((alias("__imp__sub_82F37010"))) PPC_WEAK_FUNC(sub_82F37010);
PPC_FUNC_IMPL(__imp__sub_82F37010) {
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
	// li r11,31
	ctx.r11.s64 = 31;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,88
	ctx.r4.s64 = 88;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82F37040;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82f37074
	if (cr6.eq) goto loc_82F37074;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82f42220
	ctx.lr = 0x82F37054;
	sub_82F42220(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-10904
	ctx.r9.s64 = ctx.r11.s64 + -10904;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r8,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r8.u32);
	// b 0x82f37078
	goto loc_82F37078;
loc_82F37074:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82F37078:
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

__attribute__((alias("__imp__sub_82F37090"))) PPC_WEAK_FUNC(sub_82F37090);
PPC_FUNC_IMPL(__imp__sub_82F37090) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82f370a0
	if (cr6.lt) goto loc_82F370A0;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_82F370A0:
	// b 0x82f37010
	sub_82F37010(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F370A4"))) PPC_WEAK_FUNC(sub_82F370A4);
PPC_FUNC_IMPL(__imp__sub_82F370A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F370A8"))) PPC_WEAK_FUNC(sub_82F370A8);
PPC_FUNC_IMPL(__imp__sub_82F370A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82F370B0;
	__savegprlr_28(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r11,15
	ctx.r11.s64 = 15;
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r30.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// stb r30,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r30.u8);
	// bl 0x831156e8
	ctx.lr = 0x82F370D0;
	sub_831156E8(ctx, base);
	// lis r10,220
	ctx.r10.s64 = 14417920;
	// lwz r31,48(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// ori r9,r10,40124
	ctx.r9.u64 = ctx.r10.u64 | 40124;
	// lbzx r8,r31,r9
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r9.u32);
	// cmplwi cr6,r8,1
	cr6.compare<uint32_t>(ctx.r8.u32, 1, xer);
	// ble cr6,0x82f370fc
	if (!cr6.gt) goto loc_82F370FC;
	// addi r11,r11,-10996
	ctx.r11.s64 = ctx.r11.s64 + -10996;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r11,-8
	ctx.r4.s64 = ctx.r11.s64 + -8;
	// b 0x82f3718c
	goto loc_82F3718C;
loc_82F370FC:
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// addi r29,r11,-10996
	ctx.r29.s64 = ctx.r11.s64 + -10996;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r5,r29,-12
	ctx.r5.s64 = ctx.r29.s64 + -12;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x831178a0
	ctx.lr = 0x82F37118;
	sub_831178A0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x8311bdf0
	ctx.lr = 0x82F37124;
	sub_8311BDF0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82f37138
	if (cr6.eq) goto loc_82F37138;
	// lwz r11,788(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 788);
	// rlwinm r10,r11,0,15,6
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFE01FFFF;
	// stw r10,788(r3)
	PPC_STORE_U32(ctx.r3.u32 + 788, ctx.r10.u32);
loc_82F37138:
	// li r11,32
	ctx.r11.s64 = 32;
	// addis r8,r31,221
	ctx.r8.s64 = ctx.r31.s64 + 14483456;
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// addi r8,r8,-26512
	ctx.r8.s64 = ctx.r8.s64 + -26512;
	// lis r7,-31774
	ctx.r7.s64 = -2082340864;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
loc_82F37150:
	// clrlwi r10,r9,24
	ctx.r10.u64 = ctx.r9.u32 & 0xFF;
	// lwz r11,8044(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8044);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r10,r10,289
	ctx.r10.s64 = ctx.r10.s64 + 289;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r10,r8
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// rlwimi r11,r6,0,14,31
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r6.u32, 0) & 0x3FFFF) | (ctx.r11.u64 & 0xFFFFFFFFFFFC0000);
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// stwx r11,r10,r8
	PPC_STORE_U32(ctx.r10.u32 + ctx.r8.u32, ctx.r11.u32);
	// lwz r11,8044(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8044);
	// rlwimi r5,r11,0,14,31
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0x3FFFF) | (ctx.r5.u64 & 0xFFFFFFFFFFFC0000);
	// stwx r5,r10,r8
	PPC_STORE_U32(ctx.r10.u32 + ctx.r8.u32, ctx.r5.u32);
	// bdnz 0x82f37150
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82F37150;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r5,3
	ctx.r5.s64 = 3;
loc_82F3718C:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8259cc28
	ctx.lr = 0x82F37194;
	sub_8259CC28(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82e88020
	ctx.lr = 0x82F371A0;
	sub_82E88020(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82f371c0
	if (cr6.lt) goto loc_82F371C0;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82F371C0;
	sub_825952B8(ctx, base);
loc_82F371C0:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F371CC"))) PPC_WEAK_FUNC(sub_82F371CC);
PPC_FUNC_IMPL(__imp__sub_82F371CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F371D0"))) PPC_WEAK_FUNC(sub_82F371D0);
PPC_FUNC_IMPL(__imp__sub_82F371D0) {
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
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-10352
	ctx.r9.s64 = ctx.r11.s64 + -10352;
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
	// bl 0x82f42278
	ctx.lr = 0x82F37208;
	sub_82F42278(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82f37220
	if (cr6.eq) goto loc_82F37220;
	// bl 0x82416268
	ctx.lr = 0x82F3721C;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82F37220:
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

__attribute__((alias("__imp__sub_82F37238"))) PPC_WEAK_FUNC(sub_82F37238);
PPC_FUNC_IMPL(__imp__sub_82F37238) {
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
	// li r11,31
	ctx.r11.s64 = 31;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,96
	ctx.r4.s64 = 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82F37268;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82f372a8
	if (cr6.eq) goto loc_82F372A8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82f42220
	ctx.lr = 0x82F3727C;
	sub_82F42220(ctx, base);
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// lis r9,-32239
	ctx.r9.s64 = -2112815104;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r8,r10,-10352
	ctx.r8.s64 = ctx.r10.s64 + -10352;
	// addi r7,r9,-17088
	ctx.r7.s64 = ctx.r9.s64 + -17088;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r7,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r7.u32);
	// stw r11,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r11.u32);
	// b 0x82f372ac
	goto loc_82F372AC;
loc_82F372A8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82F372AC:
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

__attribute__((alias("__imp__sub_82F372C4"))) PPC_WEAK_FUNC(sub_82F372C4);
PPC_FUNC_IMPL(__imp__sub_82F372C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F372C8"))) PPC_WEAK_FUNC(sub_82F372C8);
PPC_FUNC_IMPL(__imp__sub_82F372C8) {
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
	// lwz r11,92(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82f3736c
	if (cr6.eq) goto loc_82F3736C;
	// bl 0x830ffbc0
	ctx.lr = 0x82F372F0;
	sub_830FFBC0(ctx, base);
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(ctx.r11.u32, 4, xer);
	// bgt cr6,0x82f3736c
	if (cr6.gt) goto loc_82F3736C;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x82f3731c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82F3731C;
	// bdzf 4*cr6+eq,0x82f3736c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82F3736C;
	// bdzf 4*cr6+eq,0x82f37324
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82F37324;
	// bne cr6,0x82f37340
	if (!cr6.eq) goto loc_82F37340;
loc_82F3731C:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82f37370
	goto loc_82F37370;
loc_82F37324:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,92(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// bl 0x831015e0
	ctx.lr = 0x82F37330;
	sub_831015E0(ctx, base);
	// li r11,5
	ctx.r11.s64 = 5;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// b 0x82f37370
	goto loc_82F37370;
loc_82F37340:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,92(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// bl 0x83100028
	ctx.lr = 0x82F3734C;
	sub_83100028(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82f3731c
	if (cr6.eq) goto loc_82F3731C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,92(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// bl 0x83100880
	ctx.lr = 0x82F37364;
	sub_83100880(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r11.u32);
loc_82F3736C:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82F37370:
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

__attribute__((alias("__imp__sub_82F37388"))) PPC_WEAK_FUNC(sub_82F37388);
PPC_FUNC_IMPL(__imp__sub_82F37388) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82f37398
	if (cr6.lt) goto loc_82F37398;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_82F37398:
	// b 0x82f37238
	sub_82F37238(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3739C"))) PPC_WEAK_FUNC(sub_82F3739C);
PPC_FUNC_IMPL(__imp__sub_82F3739C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F373A0"))) PPC_WEAK_FUNC(sub_82F373A0);
PPC_FUNC_IMPL(__imp__sub_82F373A0) {
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
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stfd f31,-32(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,88(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,5
	cr6.compare<uint32_t>(ctx.r11.u32, 5, xer);
	// bgt cr6,0x82f3743c
	if (cr6.gt) goto loc_82F3743C;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x82f37410
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82F37410;
	// bdzf 4*cr6+eq,0x82f3745c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82F3745C;
	// bdzf 4*cr6+eq,0x82f374f4
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82F374F4;
	// bdzf 4*cr6+eq,0x82f37524
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82F37524;
	// bne cr6,0x82f37620
	if (!cr6.eq) goto loc_82F37620;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82d17aa0
	ctx.lr = 0x82F373EC;
	sub_82D17AA0(ctx, base);
	// bl 0x830f0f30
	ctx.lr = 0x82F373F0;
	sub_830F0F30(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x82f37408
	if (!cr6.eq) goto loc_82F37408;
	// bl 0x82d26ed8
	ctx.lr = 0x82F37400;
	sub_82D26ED8(ctx, base);
	// li r4,200
	ctx.r4.s64 = 200;
	// bl 0x82d26960
	ctx.lr = 0x82F37408;
	sub_82D26960(ctx, base);
loc_82F37408:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
loc_82F37410:
	// bl 0x8378cba8
	ctx.lr = 0x82F37414;
	sub_8378CBA8(ctx, base);
	// bl 0x8378cc20
	ctx.lr = 0x82F37418;
	sub_8378CC20(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82f3743c
	if (cr6.eq) goto loc_82F3743C;
	// bl 0x830f0f30
	ctx.lr = 0x82F37428;
	sub_830F0F30(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82f3743c
	if (!cr6.eq) goto loc_82F3743C;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
loc_82F3743C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82F37440:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
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
loc_82F3745C:
	// bl 0x830ffbc0
	ctx.lr = 0x82F37460;
	sub_830FFBC0(ctx, base);
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// lfs f1,-26260(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -26260);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x83101530
	ctx.lr = 0x82F37474;
	sub_83101530(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r3,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82f3743c
	if (cr6.eq) goto loc_82F3743C;
	// bl 0x830ffbc0
	ctx.lr = 0x82F37488;
	sub_830FFBC0(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r11,r11,-10448
	ctx.r11.s64 = ctx.r11.s64 + -10448;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-80
	ctx.r5.s64 = ctx.r11.s64 + -80;
	// li r7,2
	ctx.r7.s64 = 2;
	// bl 0x83101ba0
	ctx.lr = 0x82F374A4;
	sub_83101BA0(ctx, base);
	// bl 0x831156e8
	ctx.lr = 0x82F374A8;
	sub_831156E8(ctx, base);
	// lis r10,1
	ctx.r10.s64 = 65536;
	// lwz r9,52(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// ori r7,r10,24081
	ctx.r7.u64 = ctx.r10.u64 | 24081;
	// lwz r30,92(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// lfs f0,24556(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 24556);
	ctx.f0.f64 = double(temp.f32);
	// lbzx r5,r9,r7
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r7.u32);
	// std r5,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r5.u64);
	// lfd f13,88(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fmuls f31,f11,f0
	ctx.f31.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// bl 0x830ffbc0
	ctx.lr = 0x82F374DC;
	sub_830FFBC0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x831001a8
	ctx.lr = 0x82F374E8;
	sub_831001A8(ctx, base);
	// li r4,3
	ctx.r4.s64 = 3;
	// stw r4,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r4.u32);
	// b 0x82f3743c
	goto loc_82F3743C;
loc_82F374F4:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82d17aa0
	ctx.lr = 0x82F374FC;
	sub_82D17AA0(ctx, base);
	// bl 0x831021a0
	ctx.lr = 0x82F37500;
	sub_831021A0(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lis r4,259
	ctx.r4.s64 = 16973824;
	// addi r11,r11,-10448
	ctx.r11.s64 = ctx.r11.s64 + -10448;
	// ori r4,r4,9
	ctx.r4.u64 = ctx.r4.u64 | 9;
	// addi r5,r11,-52
	ctx.r5.s64 = ctx.r11.s64 + -52;
	// bl 0x83102a08
	ctx.lr = 0x82F37518;
	sub_83102A08(ctx, base);
	// li r10,4
	ctx.r10.s64 = 4;
	// stw r10,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r10.u32);
	// b 0x82f3743c
	goto loc_82F3743C;
loc_82F37524:
	// bl 0x825d8390
	ctx.lr = 0x82F37528;
	sub_825D8390(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r10,r11,-4
	ctx.r10.s64 = ctx.r11.s64 + -4;
	// subfic r10,r10,0
	xer.ca = ctx.r10.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r10.s64;
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r7,r8,r11
	ctx.r7.u64 = ctx.r8.u64 & ctx.r11.u64;
	// stw r7,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r7.u32);
	// bl 0x8353b168
	ctx.lr = 0x82F37548;
	sub_8353B168(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82f37598
	if (cr6.eq) goto loc_82F37598;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82F37564;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82f37598
	if (cr6.eq) goto loc_82F37598;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82F37588;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82f3759c
	if (!cr6.eq) goto loc_82F3759C;
loc_82F37598:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82F3759C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82f375c4
	if (!cr6.eq) goto loc_82F375C4;
	// lwz r30,92(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// bl 0x830ffbc0
	ctx.lr = 0x82F375B0;
	sub_830FFBC0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x83100028
	ctx.lr = 0x82F375B8;
	sub_83100028(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82f375f8
	if (cr6.eq) goto loc_82F375F8;
loc_82F375C4:
	// lwz r30,92(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// bl 0x830ffbc0
	ctx.lr = 0x82F375CC;
	sub_830FFBC0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x831015e0
	ctx.lr = 0x82F375D4;
	sub_831015E0(ctx, base);
	// bl 0x831021a0
	ctx.lr = 0x82F375D8;
	sub_831021A0(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lis r4,259
	ctx.r4.s64 = 16973824;
	// addi r11,r11,-10448
	ctx.r11.s64 = ctx.r11.s64 + -10448;
	// ori r4,r4,9
	ctx.r4.u64 = ctx.r4.u64 | 9;
	// addi r5,r11,-28
	ctx.r5.s64 = ctx.r11.s64 + -28;
	// bl 0x83102a08
	ctx.lr = 0x82F375F0;
	sub_83102A08(ctx, base);
	// li r10,5
	ctx.r10.s64 = 5;
	// stw r10,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r10.u32);
loc_82F375F8:
	// lwz r30,92(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// bl 0x830ffbc0
	ctx.lr = 0x82F37600;
	sub_830FFBC0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x830ffea0
	ctx.lr = 0x82F37608;
	sub_830FFEA0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82f3743c
	if (cr6.eq) goto loc_82F3743C;
	// lwz r3,92(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// bl 0x82f51720
	ctx.lr = 0x82F3761C;
	sub_82F51720(ctx, base);
	// b 0x82f3743c
	goto loc_82F3743C;
loc_82F37620:
	// lwz r30,92(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// bl 0x830ffbc0
	ctx.lr = 0x82F37628;
	sub_830FFBC0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x83100028
	ctx.lr = 0x82F37630;
	sub_83100028(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82f3743c
	if (cr6.eq) goto loc_82F3743C;
	// lwz r30,92(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// bl 0x830ffbc0
	ctx.lr = 0x82F37644;
	sub_830FFBC0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x83100880
	ctx.lr = 0x82F3764C;
	sub_83100880(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// stw r11,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r11.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r10,-10448
	ctx.r4.s64 = ctx.r10.s64 + -10448;
	// bl 0x837b0c10
	ctx.lr = 0x82F37664;
	sub_837B0C10(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x82F37670;
	sub_82E88020(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8387e8e0
	ctx.lr = 0x82F37678;
	sub_8387E8E0(ctx, base);
	// bl 0x82d26ed8
	ctx.lr = 0x82F3767C;
	sub_82D26ED8(ctx, base);
	// li r4,-1
	ctx.r4.s64 = -1;
	// bl 0x82d26900
	ctx.lr = 0x82F37684;
	sub_82D26900(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82f37440
	goto loc_82F37440;
}

__attribute__((alias("__imp__sub_82F3768C"))) PPC_WEAK_FUNC(sub_82F3768C);
PPC_FUNC_IMPL(__imp__sub_82F3768C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F37690"))) PPC_WEAK_FUNC(sub_82F37690);
PPC_FUNC_IMPL(__imp__sub_82F37690) {
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
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-9888
	ctx.r9.s64 = ctx.r11.s64 + -9888;
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
	// bl 0x82f42278
	ctx.lr = 0x82F376C8;
	sub_82F42278(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82f376e0
	if (cr6.eq) goto loc_82F376E0;
	// bl 0x82416268
	ctx.lr = 0x82F376DC;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82F376E0:
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

__attribute__((alias("__imp__sub_82F376F8"))) PPC_WEAK_FUNC(sub_82F376F8);
PPC_FUNC_IMPL(__imp__sub_82F376F8) {
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
	// li r11,31
	ctx.r11.s64 = 31;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,88
	ctx.r4.s64 = 88;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82F37728;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82f3775c
	if (cr6.eq) goto loc_82F3775C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82f42220
	ctx.lr = 0x82F3773C;
	sub_82F42220(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-9888
	ctx.r9.s64 = ctx.r11.s64 + -9888;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r8,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r8.u32);
	// b 0x82f37760
	goto loc_82F37760;
loc_82F3775C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82F37760:
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

__attribute__((alias("__imp__sub_82F37778"))) PPC_WEAK_FUNC(sub_82F37778);
PPC_FUNC_IMPL(__imp__sub_82F37778) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82f37788
	if (cr6.lt) goto loc_82F37788;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_82F37788:
	// b 0x82f376f8
	sub_82F376F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3778C"))) PPC_WEAK_FUNC(sub_82F3778C);
PPC_FUNC_IMPL(__imp__sub_82F3778C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F37790"))) PPC_WEAK_FUNC(sub_82F37790);
PPC_FUNC_IMPL(__imp__sub_82F37790) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82f51718
	ctx.lr = 0x82F377A8;
	sub_82F51718(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,15
	ctx.r10.s64 = 15;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// lis r9,-32229
	ctx.r9.s64 = -2112159744;
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// li r5,7
	ctx.r5.s64 = 7;
	// stb r11,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r11.u8);
	// addi r4,r9,-9980
	ctx.r4.s64 = ctx.r9.s64 + -9980;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8259cc28
	ctx.lr = 0x82F377D0;
	sub_8259CC28(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x82F377DC;
	sub_82E88020(ctx, base);
	// lwz r8,116(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r8,16
	cr6.compare<uint32_t>(ctx.r8.u32, 16, xer);
	// blt cr6,0x82f377fc
	if (cr6.lt) goto loc_82F377FC;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82F377FC;
	sub_825952B8(ctx, base);
loc_82F377FC:
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

__attribute__((alias("__imp__sub_82F37814"))) PPC_WEAK_FUNC(sub_82F37814);
PPC_FUNC_IMPL(__imp__sub_82F37814) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F37818"))) PPC_WEAK_FUNC(sub_82F37818);
PPC_FUNC_IMPL(__imp__sub_82F37818) {
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
	// bl 0x82f42220
	ctx.lr = 0x82F37830;
	sub_82F42220(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-9624
	ctx.r9.s64 = ctx.r11.s64 + -9624;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// lis r7,-32254
	ctx.r7.s64 = -2113798144;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r8,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r8.u32);
	// addi r6,r7,-24636
	ctx.r6.s64 = ctx.r7.s64 + -24636;
	// stb r11,92(r31)
	PPC_STORE_U8(ctx.r31.u32 + 92, ctx.r11.u8);
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// stw r6,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r6.u32);
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
	// stw r11,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r11.u32);
	// bl 0x825aa080
	ctx.lr = 0x82F37870;
	sub_825AA080(ctx, base);
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

__attribute__((alias("__imp__sub_82F37888"))) PPC_WEAK_FUNC(sub_82F37888);
PPC_FUNC_IMPL(__imp__sub_82F37888) {
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
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// addi r8,r11,-9624
	ctx.r8.s64 = ctx.r11.s64 + -9624;
	// addi r7,r10,-17088
	ctx.r7.s64 = ctx.r10.s64 + -17088;
	// addi r6,r9,-24712
	ctx.r6.s64 = ctx.r9.s64 + -24712;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// stw r7,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r7.u32);
	// addi r30,r3,88
	ctx.r30.s64 = ctx.r3.s64 + 88;
	// stw r6,88(r3)
	PPC_STORE_U32(ctx.r3.u32 + 88, ctx.r6.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825e0cf8
	ctx.lr = 0x82F378D0;
	sub_825E0CF8(ctx, base);
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82f378fc
	if (cr6.eq) goto loc_82F378FC;
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r5,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r5.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// bl 0x8353f3b8
	ctx.lr = 0x82F378F4;
	sub_8353F3B8(ctx, base);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r9.u32);
loc_82F378FC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f42278
	ctx.lr = 0x82F37904;
	sub_82F42278(ctx, base);
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

__attribute__((alias("__imp__sub_82F3791C"))) PPC_WEAK_FUNC(sub_82F3791C);
PPC_FUNC_IMPL(__imp__sub_82F3791C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F37920"))) PPC_WEAK_FUNC(sub_82F37920);
PPC_FUNC_IMPL(__imp__sub_82F37920) {
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
	// bl 0x82f37888
	ctx.lr = 0x82F37940;
	sub_82F37888(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82f37958
	if (cr6.eq) goto loc_82F37958;
	// bl 0x82416268
	ctx.lr = 0x82F37954;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82F37958:
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

__attribute__((alias("__imp__sub_82F37970"))) PPC_WEAK_FUNC(sub_82F37970);
PPC_FUNC_IMPL(__imp__sub_82F37970) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82F37978;
	__savegprlr_29(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,92(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 92);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r31,r3,88
	ctx.r31.s64 = ctx.r3.s64 + 88;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82f37998
	if (!cr6.eq) goto loc_82F37998;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825aa080
	ctx.lr = 0x82F37998;
	sub_825AA080(ctx, base);
loc_82F37998:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82f379b4
	if (!cr6.eq) goto loc_82F379B4;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
loc_82F379B4:
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x82dad040
	ctx.lr = 0x82F379BC;
	sub_82DAD040(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82f379d0
	if (cr6.eq) goto loc_82F379D0;
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
loc_82F379D0:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82f37a10
	if (cr6.eq) goto loc_82F37A10;
	// cmplwi cr6,r3,29
	cr6.compare<uint32_t>(ctx.r3.u32, 29, xer);
	// beq cr6,0x82f37a10
	if (cr6.eq) goto loc_82F37A10;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r4,r11,-9720
	ctx.r4.s64 = ctx.r11.s64 + -9720;
	// bl 0x837b0c10
	ctx.lr = 0x82F379F0;
	sub_837B0C10(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82e88020
	ctx.lr = 0x82F379FC;
	sub_82E88020(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8387e8e0
	ctx.lr = 0x82F37A04;
	sub_8387E8E0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82F37A10:
	// bl 0x831021a0
	ctx.lr = 0x82F37A14;
	sub_831021A0(ctx, base);
	// lis r4,261
	ctx.r4.s64 = 17104896;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,19
	ctx.r4.u64 = ctx.r4.u64 | 19;
	// bl 0x83102a08
	ctx.lr = 0x82F37A24;
	sub_83102A08(ctx, base);
	// bl 0x831021a0
	ctx.lr = 0x82F37A28;
	sub_831021A0(ctx, base);
	// lis r4,261
	ctx.r4.s64 = 17104896;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,33
	ctx.r4.u64 = ctx.r4.u64 | 33;
	// bl 0x83102a08
	ctx.lr = 0x82F37A38;
	sub_83102A08(ctx, base);
	// li r11,15
	ctx.r11.s64 = 15;
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r30.u32);
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// stb r30,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r30.u8);
	// addi r11,r10,-9720
	ctx.r11.s64 = ctx.r10.s64 + -9720;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-8
	ctx.r4.s64 = ctx.r11.s64 + -8;
	// bl 0x8259cc28
	ctx.lr = 0x82F37A60;
	sub_8259CC28(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82e88020
	ctx.lr = 0x82F37A6C;
	sub_82E88020(ctx, base);
	// lwz r9,116(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// blt cr6,0x82f37a8c
	if (cr6.lt) goto loc_82F37A8C;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82F37A8C;
	sub_825952B8(ctx, base);
loc_82F37A8C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F37A98"))) PPC_WEAK_FUNC(sub_82F37A98);
PPC_FUNC_IMPL(__imp__sub_82F37A98) {
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
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82f37abc
	if (cr6.lt) goto loc_82F37ABC;
	// lwz r31,0(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82f37ac0
	goto loc_82F37AC0;
loc_82F37ABC:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_82F37AC0:
	// li r11,31
	ctx.r11.s64 = 31;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,108
	ctx.r4.s64 = 108;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82F37AD8;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82f37af0
	if (cr6.eq) goto loc_82F37AF0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82f37818
	ctx.lr = 0x82F37AE8;
	sub_82F37818(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82f37af4
	if (!cr6.eq) goto loc_82F37AF4;
loc_82F37AF0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82F37AF4:
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

__attribute__((alias("__imp__sub_82F37B08"))) PPC_WEAK_FUNC(sub_82F37B08);
PPC_FUNC_IMPL(__imp__sub_82F37B08) {
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
	// bl 0x831156e8
	ctx.lr = 0x82F37B28;
	sub_831156E8(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,52(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// bl 0x8312ae08
	ctx.lr = 0x82F37B34;
	sub_8312AE08(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82f37bb8
	if (cr6.eq) goto loc_82F37BB8;
	// bl 0x831156e8
	ctx.lr = 0x82F37B44;
	sub_831156E8(ctx, base);
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// li r9,0
	ctx.r9.s64 = 0;
	// addis r8,r11,6
	ctx.r8.s64 = ctx.r11.s64 + 393216;
	// cmpwi cr6,r31,1
	cr6.compare<int32_t>(ctx.r31.s32, 1, xer);
	// addi r8,r8,-30316
	ctx.r8.s64 = ctx.r8.s64 + -30316;
	// bne cr6,0x82f37b60
	if (!cr6.eq) goto loc_82F37B60;
	// li r9,11
	ctx.r9.s64 = 11;
loc_82F37B60:
	// addi r7,r9,11
	ctx.r7.s64 = ctx.r9.s64 + 11;
	// cmplw cr6,r9,r7
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, xer);
	// bge cr6,0x82f37bb8
	if (!cr6.lt) goto loc_82F37BB8;
loc_82F37B6C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82F37B70:
	// cmplw cr6,r11,r30
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, xer);
	// beq cr6,0x82f37b8c
	if (cr6.eq) goto loc_82F37B8C;
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// lbz r6,93(r10)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + 93);
	// cmplw cr6,r6,r9
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r9.u32, xer);
	// bne cr6,0x82f37ba8
	if (!cr6.eq) goto loc_82F37BA8;
loc_82F37B8C:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r11,24
	cr6.compare<uint32_t>(ctx.r11.u32, 24, xer);
	// blt cr6,0x82f37b70
	if (cr6.lt) goto loc_82F37B70;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmplw cr6,r9,r7
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, xer);
	// blt cr6,0x82f37b6c
	if (cr6.lt) goto loc_82F37B6C;
	// b 0x82f37bb8
	goto loc_82F37BB8;
loc_82F37BA8:
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// add r9,r11,r8
	ctx.r9.u64 = ctx.r11.u64 + ctx.r8.u64;
	// stb r10,93(r9)
	PPC_STORE_U8(ctx.r9.u32 + 93, ctx.r10.u8);
loc_82F37BB8:
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

__attribute__((alias("__imp__sub_82F37BD0"))) PPC_WEAK_FUNC(sub_82F37BD0);
PPC_FUNC_IMPL(__imp__sub_82F37BD0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x82F37BD8;
	__savegprlr_24(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// bl 0x82f42220
	ctx.lr = 0x82F37BE8;
	sub_82F42220(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// stb r31,88(r27)
	PPC_STORE_U8(ctx.r27.u32 + 88, ctx.r31.u8);
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-9344
	ctx.r9.s64 = ctx.r11.s64 + -9344;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// li r24,0
	ctx.r24.s64 = 0;
	// stw r9,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r9.u32);
	// stw r8,72(r27)
	PPC_STORE_U32(ctx.r27.u32 + 72, ctx.r8.u32);
	// stb r24,89(r27)
	PPC_STORE_U8(ctx.r27.u32 + 89, ctx.r24.u8);
	// bl 0x830ff290
	ctx.lr = 0x82F37C10;
	sub_830FF290(ctx, base);
	// bl 0x830ff948
	ctx.lr = 0x82F37C14;
	sub_830FF948(ctx, base);
	// clrlwi r7,r3,24
	ctx.r7.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// bne cr6,0x82f37da4
	if (!cr6.eq) goto loc_82F37DA4;
	// bl 0x830ff290
	ctx.lr = 0x82F37C24;
	sub_830FF290(ctx, base);
	// bl 0x830ffaa8
	ctx.lr = 0x82F37C28;
	sub_830FFAA8(ctx, base);
	// cmplwi cr6,r3,13
	cr6.compare<uint32_t>(ctx.r3.u32, 13, xer);
	// beq cr6,0x82f37da4
	if (cr6.eq) goto loc_82F37DA4;
	// bl 0x831156e8
	ctx.lr = 0x82F37C34;
	sub_831156E8(ctx, base);
	// lwz r25,56(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// bl 0x831156e8
	ctx.lr = 0x82F37C3C;
	sub_831156E8(ctx, base);
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// stb r24,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r24.u8);
	// mr r31,r24
	ctx.r31.u64 = ctx.r24.u64;
	// addis r28,r11,6
	ctx.r28.s64 = ctx.r11.s64 + 393216;
	// stb r24,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r24.u8);
	// li r26,1
	ctx.r26.s64 = 1;
	// addi r28,r28,-30316
	ctx.r28.s64 = ctx.r28.s64 + -30316;
loc_82F37C58:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82b64ac0
	ctx.lr = 0x82F37C64;
	sub_82B64AC0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82f37ca0
	if (cr6.eq) goto loc_82F37CA0;
	// clrlwi r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// blt cr6,0x82f37c84
	if (cr6.lt) goto loc_82F37C84;
	// li r11,255
	ctx.r11.s64 = 255;
	// b 0x82f37c8c
	goto loc_82F37C8C;
loc_82F37C84:
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// lbz r11,169(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 169);
loc_82F37C8C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,255
	cr6.compare<uint32_t>(ctx.r11.u32, 255, xer);
	// bne cr6,0x82f37ca0
	if (!cr6.eq) goto loc_82F37CA0;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// stbx r26,r31,r11
	PPC_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r26.u8);
loc_82F37CA0:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r31,2
	cr6.compare<int32_t>(ctx.r31.s32, 2, xer);
	// blt cr6,0x82f37c58
	if (cr6.lt) goto loc_82F37C58;
	// lbz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82f37cc4
	if (!cr6.eq) goto loc_82F37CC4;
	// lbz r10,81(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82f37da4
	if (cr6.eq) goto loc_82F37DA4;
loc_82F37CC4:
	// mr r29,r24
	ctx.r29.u64 = ctx.r24.u64;
loc_82F37CC8:
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// add r30,r11,r28
	ctx.r30.u64 = ctx.r11.u64 + ctx.r28.u64;
	// lbz r31,69(r30)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r30.u32 + 69);
	// cmplwi cr6,r31,32
	cr6.compare<uint32_t>(ctx.r31.u32, 32, xer);
	// bge cr6,0x82f37d78
	if (!cr6.lt) goto loc_82F37D78;
	// bl 0x831156e8
	ctx.lr = 0x82F37CE0;
	sub_831156E8(ctx, base);
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// mulli r10,r31,2800
	ctx.r10.s64 = ctx.r31.s64 * 2800;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r3,r11,690
	ctx.r3.s64 = ctx.r11.s64 + 690;
	// bl 0x8312a600
	ctx.lr = 0x82F37CF4;
	sub_8312A600(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// bne cr6,0x82f37d78
	if (!cr6.eq) goto loc_82F37D78;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8312b888
	ctx.lr = 0x82F37D10;
	sub_8312B888(ctx, base);
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// bne cr6,0x82f37d90
	if (!cr6.eq) goto loc_82F37D90;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8312b8c8
	ctx.lr = 0x82F37D24;
	sub_8312B8C8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x82f37d4c
	if (!cr6.eq) goto loc_82F37D4C;
	// bl 0x831156e8
	ctx.lr = 0x82F37D34;
	sub_831156E8(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,52(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// bl 0x8312ae08
	ctx.lr = 0x82F37D40;
	sub_8312AE08(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82f37d90
	if (cr6.eq) goto loc_82F37D90;
loc_82F37D4C:
	// lbz r11,45(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 45);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// beq cr6,0x82f37d68
	if (cr6.eq) goto loc_82F37D68;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bne cr6,0x82f37d78
	if (!cr6.eq) goto loc_82F37D78;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// b 0x82f37d6c
	goto loc_82F37D6C;
loc_82F37D68:
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
loc_82F37D6C:
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmpw cr6,r11,r4
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r4.s32, xer);
	// bne cr6,0x82f37d94
	if (!cr6.eq) goto loc_82F37D94;
loc_82F37D78:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmplwi cr6,r29,24
	cr6.compare<uint32_t>(ctx.r29.u32, 24, xer);
	// blt cr6,0x82f37cc8
	if (cr6.lt) goto loc_82F37CC8;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_82F37D90:
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
loc_82F37D94:
	// stb r26,89(r27)
	PPC_STORE_U8(ctx.r27.u32 + 89, ctx.r26.u8);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82f37b08
	ctx.lr = 0x82F37DA4;
	sub_82F37B08(ctx, base);
loc_82F37DA4:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F37DB0"))) PPC_WEAK_FUNC(sub_82F37DB0);
PPC_FUNC_IMPL(__imp__sub_82F37DB0) {
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
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-9344
	ctx.r9.s64 = ctx.r11.s64 + -9344;
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
	// bl 0x82f42278
	ctx.lr = 0x82F37DE8;
	sub_82F42278(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82f37e00
	if (cr6.eq) goto loc_82F37E00;
	// bl 0x82416268
	ctx.lr = 0x82F37DFC;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82F37E00:
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

__attribute__((alias("__imp__sub_82F37E18"))) PPC_WEAK_FUNC(sub_82F37E18);
PPC_FUNC_IMPL(__imp__sub_82F37E18) {
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
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82f37e3c
	if (cr6.lt) goto loc_82F37E3C;
	// lwz r31,0(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82f37e40
	goto loc_82F37E40;
loc_82F37E3C:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_82F37E40:
	// li r11,31
	ctx.r11.s64 = 31;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,92
	ctx.r4.s64 = 92;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82F37E58;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82f37e74
	if (cr6.eq) goto loc_82F37E74;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82f37bd0
	ctx.lr = 0x82F37E6C;
	sub_82F37BD0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82f37e78
	if (!cr6.eq) goto loc_82F37E78;
loc_82F37E74:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82F37E78:
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

__attribute__((alias("__imp__sub_82F37E8C"))) PPC_WEAK_FUNC(sub_82F37E8C);
PPC_FUNC_IMPL(__imp__sub_82F37E8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F37E90"))) PPC_WEAK_FUNC(sub_82F37E90);
PPC_FUNC_IMPL(__imp__sub_82F37E90) {
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
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82f37eb4
	if (cr6.lt) goto loc_82F37EB4;
	// lwz r31,0(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82f37eb8
	goto loc_82F37EB8;
loc_82F37EB4:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_82F37EB8:
	// li r11,31
	ctx.r11.s64 = 31;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,92
	ctx.r4.s64 = 92;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82F37ED0;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82f37eec
	if (cr6.eq) goto loc_82F37EEC;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82f37bd0
	ctx.lr = 0x82F37EE4;
	sub_82F37BD0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82f37ef0
	if (!cr6.eq) goto loc_82F37EF0;
loc_82F37EEC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82F37EF0:
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

__attribute__((alias("__imp__sub_82F37F04"))) PPC_WEAK_FUNC(sub_82F37F04);
PPC_FUNC_IMPL(__imp__sub_82F37F04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F37F08"))) PPC_WEAK_FUNC(sub_82F37F08);
PPC_FUNC_IMPL(__imp__sub_82F37F08) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x831156e8
	ctx.lr = 0x82F37F20;
	sub_831156E8(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,52(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// bl 0x8312ae08
	ctx.lr = 0x82F37F2C;
	sub_8312AE08(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82f37f60
	if (cr6.eq) goto loc_82F37F60;
	// lbz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 88);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r11,r11,-9440
	ctx.r11.s64 = ctx.r11.s64 + -9440;
	// beq cr6,0x82f37f58
	if (cr6.eq) goto loc_82F37F58;
	// addi r4,r11,-28
	ctx.r4.s64 = ctx.r11.s64 + -28;
	// b 0x82f37f80
	goto loc_82F37F80;
loc_82F37F58:
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// b 0x82f37f80
	goto loc_82F37F80;
loc_82F37F60:
	// lbz r11,89(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 89);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// beq cr6,0x82f37f7c
	if (cr6.eq) goto loc_82F37F7C;
	// addi r11,r11,-9440
	ctx.r11.s64 = ctx.r11.s64 + -9440;
	// addi r4,r11,-8
	ctx.r4.s64 = ctx.r11.s64 + -8;
	// b 0x82f37f80
	goto loc_82F37F80;
loc_82F37F7C:
	// addi r4,r11,-9440
	ctx.r4.s64 = ctx.r11.s64 + -9440;
loc_82F37F80:
	// bl 0x837b0c10
	ctx.lr = 0x82F37F84;
	sub_837B0C10(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x82F37F90;
	sub_82E88020(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8387e8e0
	ctx.lr = 0x82F37F98;
	sub_8387E8E0(ctx, base);
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

__attribute__((alias("__imp__sub_82F37FB0"))) PPC_WEAK_FUNC(sub_82F37FB0);
PPC_FUNC_IMPL(__imp__sub_82F37FB0) {
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
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-8824
	ctx.r9.s64 = ctx.r11.s64 + -8824;
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
	// bl 0x82f42278
	ctx.lr = 0x82F37FE8;
	sub_82F42278(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82f38000
	if (cr6.eq) goto loc_82F38000;
	// bl 0x82416268
	ctx.lr = 0x82F37FFC;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82F38000:
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

__attribute__((alias("__imp__sub_82F38018"))) PPC_WEAK_FUNC(sub_82F38018);
PPC_FUNC_IMPL(__imp__sub_82F38018) {
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
	// bl 0x831021a0
	ctx.lr = 0x82F38028;
	sub_831021A0(ctx, base);
	// lis r4,261
	ctx.r4.s64 = 17104896;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,19
	ctx.r4.u64 = ctx.r4.u64 | 19;
	// bl 0x83102a08
	ctx.lr = 0x82F38038;
	sub_83102A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F38048"))) PPC_WEAK_FUNC(sub_82F38048);
PPC_FUNC_IMPL(__imp__sub_82F38048) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82F38050;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,261
	ctx.r11.s64 = 17104896;
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// ori r9,r11,20
	ctx.r9.u64 = ctx.r11.u64 | 20;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bne cr6,0x82f380e0
	if (!cr6.eq) goto loc_82F380E0;
	// bl 0x82dad2e0
	ctx.lr = 0x82F38074;
	sub_82DAD2E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82f38090
	if (cr6.eq) goto loc_82F38090;
	// bl 0x82dad2e0
	ctx.lr = 0x82F38080;
	sub_82DAD2E0(ctx, base);
	// lis r5,4
	ctx.r5.s64 = 262144;
	// li r4,17
	ctx.r4.s64 = 17;
	// ori r5,r5,37856
	ctx.r5.u64 = ctx.r5.u64 | 37856;
	// bl 0x82dae510
	ctx.lr = 0x82F38090;
	sub_82DAE510(ctx, base);
loc_82F38090:
	// bl 0x831021a0
	ctx.lr = 0x82F38094;
	sub_831021A0(ctx, base);
	// lis r4,261
	ctx.r4.s64 = 17104896;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,21
	ctx.r4.u64 = ctx.r4.u64 | 21;
	// bl 0x83102a08
	ctx.lr = 0x82F380A4;
	sub_83102A08(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// lis r29,-31778
	ctx.r29.s64 = -2082603008;
	// stb r11,88(r31)
	PPC_STORE_U8(ctx.r31.u32 + 88, ctx.r11.u8);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,2056(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 2056);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,392(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 392);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82F380C8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,2056(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 2056);
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r7,384(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 384);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82F380E0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82F380E0:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83824d80
	ctx.lr = 0x82F380EC;
	sub_83824D80(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F380F4"))) PPC_WEAK_FUNC(sub_82F380F4);
PPC_FUNC_IMPL(__imp__sub_82F380F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F380F8"))) PPC_WEAK_FUNC(sub_82F380F8);
PPC_FUNC_IMPL(__imp__sub_82F380F8) {
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
	// li r11,31
	ctx.r11.s64 = 31;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,92
	ctx.r4.s64 = 92;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82F38128;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82f38164
	if (cr6.eq) goto loc_82F38164;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82f42220
	ctx.lr = 0x82F3813C;
	sub_82F42220(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-8824
	ctx.r9.s64 = ctx.r11.s64 + -8824;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r8,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r8.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r7,88(r31)
	PPC_STORE_U8(ctx.r31.u32 + 88, ctx.r7.u8);
	// b 0x82f38168
	goto loc_82F38168;
loc_82F38164:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82F38168:
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

__attribute__((alias("__imp__sub_82F38180"))) PPC_WEAK_FUNC(sub_82F38180);
PPC_FUNC_IMPL(__imp__sub_82F38180) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82f38190
	if (cr6.lt) goto loc_82F38190;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_82F38190:
	// b 0x82f380f8
	sub_82F380F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F38194"))) PPC_WEAK_FUNC(sub_82F38194);
PPC_FUNC_IMPL(__imp__sub_82F38194) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F38198"))) PPC_WEAK_FUNC(sub_82F38198);
PPC_FUNC_IMPL(__imp__sub_82F38198) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,88(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 88);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82f3820c
	if (cr6.eq) goto loc_82F3820C;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-8920
	ctx.r4.s64 = ctx.r11.s64 + -8920;
	// bl 0x837b0c10
	ctx.lr = 0x82F381C8;
	sub_837B0C10(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x82F381D4;
	sub_82E88020(ctx, base);
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82f381f4
	if (cr6.lt) goto loc_82F381F4;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82F381F4;
	sub_825952B8(ctx, base);
loc_82F381F4:
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
loc_82F3820C:
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
}

__attribute__((alias("__imp__sub_82F38224"))) PPC_WEAK_FUNC(sub_82F38224);
PPC_FUNC_IMPL(__imp__sub_82F38224) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F38228"))) PPC_WEAK_FUNC(sub_82F38228);
PPC_FUNC_IMPL(__imp__sub_82F38228) {
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
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-8264
	ctx.r9.s64 = ctx.r11.s64 + -8264;
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
	// bl 0x82f42278
	ctx.lr = 0x82F38260;
	sub_82F42278(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82f38278
	if (cr6.eq) goto loc_82F38278;
	// bl 0x82416268
	ctx.lr = 0x82F38274;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82F38278:
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

__attribute__((alias("__imp__sub_82F38290"))) PPC_WEAK_FUNC(sub_82F38290);
PPC_FUNC_IMPL(__imp__sub_82F38290) {
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
	// bl 0x82dad2e0
	ctx.lr = 0x82F382A0;
	sub_82DAD2E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82f382bc
	if (cr6.eq) goto loc_82F382BC;
	// bl 0x82dad2e0
	ctx.lr = 0x82F382AC;
	sub_82DAD2E0(ctx, base);
	// lis r5,4
	ctx.r5.s64 = 262144;
	// li r4,17
	ctx.r4.s64 = 17;
	// ori r5,r5,37856
	ctx.r5.u64 = ctx.r5.u64 | 37856;
	// bl 0x82dae510
	ctx.lr = 0x82F382BC;
	sub_82DAE510(ctx, base);
loc_82F382BC:
	// lis r11,-31778
	ctx.r11.s64 = -2082603008;
	// lwz r3,2056(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2056);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,388(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 388);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82F382D4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x82f382e4
	if (cr6.eq) goto loc_82F382E4;
	// bl 0x82d4db10
	ctx.lr = 0x82F382E4;
	sub_82D4DB10(ctx, base);
loc_82F382E4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F382F4"))) PPC_WEAK_FUNC(sub_82F382F4);
PPC_FUNC_IMPL(__imp__sub_82F382F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F382F8"))) PPC_WEAK_FUNC(sub_82F382F8);
PPC_FUNC_IMPL(__imp__sub_82F382F8) {
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
	// li r11,31
	ctx.r11.s64 = 31;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,88
	ctx.r4.s64 = 88;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82F38328;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82f3835c
	if (cr6.eq) goto loc_82F3835C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82f42220
	ctx.lr = 0x82F3833C;
	sub_82F42220(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-8264
	ctx.r9.s64 = ctx.r11.s64 + -8264;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r8,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r8.u32);
	// b 0x82f38360
	goto loc_82F38360;
loc_82F3835C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82F38360:
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

__attribute__((alias("__imp__sub_82F38378"))) PPC_WEAK_FUNC(sub_82F38378);
PPC_FUNC_IMPL(__imp__sub_82F38378) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82f38388
	if (cr6.lt) goto loc_82F38388;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_82F38388:
	// b 0x82f382f8
	sub_82F382F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3838C"))) PPC_WEAK_FUNC(sub_82F3838C);
PPC_FUNC_IMPL(__imp__sub_82F3838C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F38390"))) PPC_WEAK_FUNC(sub_82F38390);
PPC_FUNC_IMPL(__imp__sub_82F38390) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82F38398;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31743
	ctx.r31.s64 = -2080309248;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r11,-22208(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22208);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r30,16(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r10,-1
	cr6.compare<int32_t>(ctx.r10.s32, -1, xer);
	// bne cr6,0x82f383f0
	if (!cr6.eq) goto loc_82F383F0;
	// bl 0x8399f8b8
	ctx.lr = 0x82F383BC;
	sub_8399F8B8(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// bne cr6,0x82f383f0
	if (!cr6.eq) goto loc_82F383F0;
	// bl 0x82dad2e0
	ctx.lr = 0x82F383CC;
	sub_82DAD2E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82f383e0
	if (cr6.eq) goto loc_82F383E0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,17
	ctx.r4.s64 = 17;
	// bl 0x82dafab0
	ctx.lr = 0x82F383E0;
	sub_82DAFAB0(ctx, base);
loc_82F383E0:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r11,r11,-8360
	ctx.r11.s64 = ctx.r11.s64 + -8360;
	// addi r4,r11,-40
	ctx.r4.s64 = ctx.r11.s64 + -40;
	// b 0x82f384a0
	goto loc_82F384A0;
loc_82F383F0:
	// cmplwi cr6,r30,1
	cr6.compare<uint32_t>(ctx.r30.u32, 1, xer);
	// bne cr6,0x82f38408
	if (!cr6.eq) goto loc_82F38408;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r11,r11,-8360
	ctx.r11.s64 = ctx.r11.s64 + -8360;
	// addi r4,r11,-32
	ctx.r4.s64 = ctx.r11.s64 + -32;
	// b 0x82f384a0
	goto loc_82F384A0;
loc_82F38408:
	// cmplwi cr6,r30,2
	cr6.compare<uint32_t>(ctx.r30.u32, 2, xer);
	// bne cr6,0x82f3843c
	if (!cr6.eq) goto loc_82F3843C;
	// bl 0x831156e8
	ctx.lr = 0x82F38414;
	sub_831156E8(ctx, base);
	// lwz r11,56(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82f3842c
	if (cr6.eq) goto loc_82F3842C;
	// bl 0x831156e8
	ctx.lr = 0x82F38424;
	sub_831156E8(ctx, base);
	// lwz r3,56(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// bl 0x8312ba50
	ctx.lr = 0x82F3842C;
	sub_8312BA50(ctx, base);
loc_82F3842C:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r11,r11,-8360
	ctx.r11.s64 = ctx.r11.s64 + -8360;
	// addi r4,r11,-24
	ctx.r4.s64 = ctx.r11.s64 + -24;
	// b 0x82f384a0
	goto loc_82F384A0;
loc_82F3843C:
	// lis r11,-31778
	ctx.r11.s64 = -2082603008;
	// lwz r3,2056(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2056);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,388(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 388);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82F38454;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x82f3847c
	if (!cr6.eq) goto loc_82F3847C;
	// lwz r11,-22208(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22208);
	// lbz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82f3847c
	if (!cr6.eq) goto loc_82F3847C;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r4,r11,-8360
	ctx.r4.s64 = ctx.r11.s64 + -8360;
	// b 0x82f384a0
	goto loc_82F384A0;
loc_82F3847C:
	// bl 0x82dad2e0
	ctx.lr = 0x82F38480;
	sub_82DAD2E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82f38494
	if (cr6.eq) goto loc_82F38494;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,17
	ctx.r4.s64 = 17;
	// bl 0x82dafab0
	ctx.lr = 0x82F38494;
	sub_82DAFAB0(ctx, base);
loc_82F38494:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r11,r11,-8360
	ctx.r11.s64 = ctx.r11.s64 + -8360;
	// addi r4,r11,-8
	ctx.r4.s64 = ctx.r11.s64 + -8;
loc_82F384A0:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x837b0c10
	ctx.lr = 0x82F384A8;
	sub_837B0C10(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82e88020
	ctx.lr = 0x82F384B4;
	sub_82E88020(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8387e8e0
	ctx.lr = 0x82F384BC;
	sub_8387E8E0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F384C8"))) PPC_WEAK_FUNC(sub_82F384C8);
PPC_FUNC_IMPL(__imp__sub_82F384C8) {
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
	// bl 0x831021a0
	ctx.lr = 0x82F384D8;
	sub_831021A0(ctx, base);
	// lis r4,261
	ctx.r4.s64 = 17104896;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,29
	ctx.r4.u64 = ctx.r4.u64 | 29;
	// bl 0x83102a08
	ctx.lr = 0x82F384E8;
	sub_83102A08(ctx, base);
	// bl 0x830ff290
	ctx.lr = 0x82F384EC;
	sub_830FF290(ctx, base);
	// bl 0x830ff988
	ctx.lr = 0x82F384F0;
	sub_830FF988(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82f3850c
	if (!cr6.eq) goto loc_82F3850C;
	// bl 0x830ff290
	ctx.lr = 0x82F38500;
	sub_830FF290(ctx, base);
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmplwi cr6,r11,58
	cr6.compare<uint32_t>(ctx.r11.u32, 58, xer);
	// bne cr6,0x82f38510
	if (!cr6.eq) goto loc_82F38510;
loc_82F3850C:
	// bl 0x82d47978
	ctx.lr = 0x82F38510;
	sub_82D47978(ctx, base);
loc_82F38510:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F38520"))) PPC_WEAK_FUNC(sub_82F38520);
PPC_FUNC_IMPL(__imp__sub_82F38520) {
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
	// li r11,31
	ctx.r11.s64 = 31;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,92
	ctx.r4.s64 = 92;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82F38550;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82f38594
	if (cr6.eq) goto loc_82F38594;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82f42220
	ctx.lr = 0x82F38564;
	sub_82F42220(ctx, base);
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// lis r9,-32239
	ctx.r9.s64 = -2112815104;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r8,r10,-7776
	ctx.r8.s64 = ctx.r10.s64 + -7776;
	// addi r7,r9,-17088
	ctx.r7.s64 = ctx.r9.s64 + -17088;
	// stb r11,88(r31)
	PPC_STORE_U8(ctx.r31.u32 + 88, ctx.r11.u8);
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r7,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r7.u32);
	// stb r11,89(r31)
	PPC_STORE_U8(ctx.r31.u32 + 89, ctx.r11.u8);
	// stb r11,90(r31)
	PPC_STORE_U8(ctx.r31.u32 + 90, ctx.r11.u8);
	// b 0x82f38598
	goto loc_82F38598;
loc_82F38594:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82F38598:
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

__attribute__((alias("__imp__sub_82F385B0"))) PPC_WEAK_FUNC(sub_82F385B0);
PPC_FUNC_IMPL(__imp__sub_82F385B0) {
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
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-7776
	ctx.r9.s64 = ctx.r11.s64 + -7776;
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
	// bl 0x82f42278
	ctx.lr = 0x82F385E8;
	sub_82F42278(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82f38600
	if (cr6.eq) goto loc_82F38600;
	// bl 0x82416268
	ctx.lr = 0x82F385FC;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82F38600:
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

__attribute__((alias("__imp__sub_82F38618"))) PPC_WEAK_FUNC(sub_82F38618);
PPC_FUNC_IMPL(__imp__sub_82F38618) {
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
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addis r11,r11,-261
	ctx.r11.s64 = ctx.r11.s64 + -17104896;
	// addic. r11,r11,-30
	xer.ca = ctx.r11.u32 > 29;
	ctx.r11.s64 = ctx.r11.s64 + -30;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x82f38658
	if (cr0.eq) goto loc_82F38658;
	// cmplwi cr6,r11,15
	cr6.compare<uint32_t>(ctx.r11.u32, 15, xer);
	// bne cr6,0x82f386a0
	if (!cr6.eq) goto loc_82F386A0;
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,90(r3)
	PPC_STORE_U8(ctx.r3.u32 + 90, ctx.r11.u8);
	// b 0x82f3869c
	goto loc_82F3869C;
loc_82F38658:
	// lbz r11,89(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 89);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82f386a0
	if (!cr6.eq) goto loc_82F386A0;
	// bl 0x831021a0
	ctx.lr = 0x82F38668;
	sub_831021A0(ctx, base);
	// lis r4,261
	ctx.r4.s64 = 17104896;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,31
	ctx.r4.u64 = ctx.r4.u64 | 31;
	// bl 0x83102a08
	ctx.lr = 0x82F38678;
	sub_83102A08(ctx, base);
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// lwz r11,-3564(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// lwz r10,292(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 292);
	// lwz r11,4456(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4456);
	// cmpwi cr6,r11,8
	cr6.compare<int32_t>(ctx.r11.s32, 8, xer);
	// beq cr6,0x82f386a0
	if (cr6.eq) goto loc_82F386A0;
	// cmpwi cr6,r11,9
	cr6.compare<int32_t>(ctx.r11.s32, 9, xer);
	// beq cr6,0x82f386a0
	if (cr6.eq) goto loc_82F386A0;
	// li r11,1
	ctx.r11.s64 = 1;
loc_82F3869C:
	// stb r11,89(r31)
	PPC_STORE_U8(ctx.r31.u32 + 89, ctx.r11.u8);
loc_82F386A0:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83824d80
	ctx.lr = 0x82F386AC;
	sub_83824D80(ctx, base);
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

__attribute__((alias("__imp__sub_82F386C4"))) PPC_WEAK_FUNC(sub_82F386C4);
PPC_FUNC_IMPL(__imp__sub_82F386C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F386C8"))) PPC_WEAK_FUNC(sub_82F386C8);
PPC_FUNC_IMPL(__imp__sub_82F386C8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82f386d8
	if (cr6.lt) goto loc_82F386D8;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_82F386D8:
	// b 0x82f38520
	sub_82F38520(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F386DC"))) PPC_WEAK_FUNC(sub_82F386DC);
PPC_FUNC_IMPL(__imp__sub_82F386DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F386E0"))) PPC_WEAK_FUNC(sub_82F386E0);
PPC_FUNC_IMPL(__imp__sub_82F386E0) {
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
	// lbz r11,89(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 89);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82f387a0
	if (cr6.eq) goto loc_82F387A0;
	// lis r10,-31743
	ctx.r10.s64 = -2080309248;
	// lbz r9,90(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 90);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r8,15
	ctx.r8.s64 = 15;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// stb r11,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r11.u8);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lwz r31,2376(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 2376);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stw r8,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r8.u32);
	// beq cr6,0x82f38740
	if (cr6.eq) goto loc_82F38740;
	// addi r11,r11,-7868
	ctx.r11.s64 = ctx.r11.s64 + -7868;
	// addi r4,r11,-4
	ctx.r4.s64 = ctx.r11.s64 + -4;
	// b 0x82f38744
	goto loc_82F38744;
loc_82F38740:
	// addi r4,r11,-7868
	ctx.r4.s64 = ctx.r11.s64 + -7868;
loc_82F38744:
	// bl 0x837b0c10
	ctx.lr = 0x82F38748;
	sub_837B0C10(ctx, base);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83824758
	ctx.lr = 0x82F38758;
	sub_83824758(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8387e8e0
	ctx.lr = 0x82F38760;
	sub_8387E8E0(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82e88020
	ctx.lr = 0x82F3876C;
	sub_82E88020(ctx, base);
	// bl 0x82d14ce8
	ctx.lr = 0x82F38770;
	sub_82D14CE8(ctx, base);
	// bl 0x82d130b8
	ctx.lr = 0x82F38774;
	sub_82D130B8(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// lbz r31,89(r30)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r30.u32 + 89);
	// blt cr6,0x82f38798
	if (cr6.lt) goto loc_82F38798;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82F38798;
	sub_825952B8(ctx, base);
loc_82F38798:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x82f387a4
	goto loc_82F387A4;
loc_82F387A0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82F387A4:
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

__attribute__((alias("__imp__sub_82F387BC"))) PPC_WEAK_FUNC(sub_82F387BC);
PPC_FUNC_IMPL(__imp__sub_82F387BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F387C0"))) PPC_WEAK_FUNC(sub_82F387C0);
PPC_FUNC_IMPL(__imp__sub_82F387C0) {
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
	// bl 0x830ff290
	ctx.lr = 0x82F387D8;
	sub_830FF290(ctx, base);
	// bl 0x830ff988
	ctx.lr = 0x82F387DC;
	sub_830FF988(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82f38800
	if (cr6.eq) goto loc_82F38800;
	// bl 0x82dad2e0
	ctx.lr = 0x82F387EC;
	sub_82DAD2E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82f38800
	if (cr6.eq) goto loc_82F38800;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,18
	ctx.r4.s64 = 18;
	// bl 0x82dafab0
	ctx.lr = 0x82F38800;
	sub_82DAFAB0(ctx, base);
loc_82F38800:
	// bl 0x831021a0
	ctx.lr = 0x82F38804;
	sub_831021A0(ctx, base);
	// lis r4,261
	ctx.r4.s64 = 17104896;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,5
	ctx.r4.u64 = ctx.r4.u64 | 5;
	// bl 0x83102a08
	ctx.lr = 0x82F38814;
	sub_83102A08(ctx, base);
	// addi r3,r31,128
	ctx.r3.s64 = ctx.r31.s64 + 128;
	// bl 0x83102db0
	ctx.lr = 0x82F3881C;
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

__attribute__((alias("__imp__sub_82F38830"))) PPC_WEAK_FUNC(sub_82F38830);
PPC_FUNC_IMPL(__imp__sub_82F38830) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r10,261
	ctx.r10.s64 = 17104896;
	// lwz r9,4(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// ori r8,r10,6
	ctx.r8.u64 = ctx.r10.u64 | 6;
	// li r3,1
	ctx.r3.s64 = 1;
	// cmplw cr6,r9,r8
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, xer);
	// beq cr6,0x82f38854
	if (cr6.eq) goto loc_82F38854;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// b 0x83824d80
	sub_83824D80(ctx, base);
	return;
loc_82F38854:
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,92(r11)
	PPC_STORE_U32(ctx.r11.u32 + 92, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F38860"))) PPC_WEAK_FUNC(sub_82F38860);
PPC_FUNC_IMPL(__imp__sub_82F38860) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,128
	ctx.r3.s64 = ctx.r3.s64 + 128;
	// b 0x830033f0
	sub_830033F0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F38868"))) PPC_WEAK_FUNC(sub_82F38868);
PPC_FUNC_IMPL(__imp__sub_82F38868) {
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
	ctx.lr = 0x82F38878;
	sub_831156E8(ctx, base);
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// addis r3,r11,2
	ctx.r3.s64 = ctx.r11.s64 + 131072;
	// addi r3,r3,-21268
	ctx.r3.s64 = ctx.r3.s64 + -21268;
	// bl 0x8311ef18
	ctx.lr = 0x82F38888;
	sub_8311EF18(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F38898"))) PPC_WEAK_FUNC(sub_82F38898);
PPC_FUNC_IMPL(__imp__sub_82F38898) {
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
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r10,r11,-7000
	ctx.r10.s64 = ctx.r11.s64 + -7000;
	// stb r30,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, ctx.r30.u8);
	// addi r3,r3,32
	ctx.r3.s64 = ctx.r3.s64 + 32;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// stw r30,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r30.u32);
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// std r30,32(r31)
	PPC_STORE_U64(ctx.r31.u32 + 32, ctx.r30.u64);
	// bl 0x82572fa0
	ctx.lr = 0x82F388E4;
	sub_82572FA0(ctx, base);
	// std r30,40(r31)
	PPC_STORE_U64(ctx.r31.u32 + 40, ctx.r30.u64);
	// addi r3,r31,40
	ctx.r3.s64 = ctx.r31.s64 + 40;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82572fa0
	ctx.lr = 0x82F388F4;
	sub_82572FA0(ctx, base);
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

__attribute__((alias("__imp__sub_82F38910"))) PPC_WEAK_FUNC(sub_82F38910);
PPC_FUNC_IMPL(__imp__sub_82F38910) {
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
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r10,r11,-7000
	ctx.r10.s64 = ctx.r11.s64 + -7000;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// addi r3,r3,40
	ctx.r3.s64 = ctx.r3.s64 + 40;
	// bl 0x82572fa0
	ctx.lr = 0x82F38944;
	sub_82572FA0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// bl 0x82572fa0
	ctx.lr = 0x82F38950;
	sub_82572FA0(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82f38968
	if (cr6.eq) goto loc_82F38968;
	// bl 0x82416268
	ctx.lr = 0x82F38964;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82F38968:
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

__attribute__((alias("__imp__sub_82F38980"))) PPC_WEAK_FUNC(sub_82F38980);
PPC_FUNC_IMPL(__imp__sub_82F38980) {
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
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x82f42220
	ctx.lr = 0x82F389A0;
	sub_82F42220(ctx, base);
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// stw r30,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r30.u32);
	// lis r9,-32239
	ctx.r9.s64 = -2112815104;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r8,r10,-6992
	ctx.r8.s64 = ctx.r10.s64 + -6992;
	// addi r7,r9,-17088
	ctx.r7.s64 = ctx.r9.s64 + -17088;
	// stw r11,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r11.u32);
	// li r6,15
	ctx.r6.s64 = 15;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// stw r7,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r7.u32);
	// lis r4,-32203
	ctx.r4.s64 = -2110455808;
	// stw r6,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r6.u32);
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// stw r11,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r11,96(r31)
	PPC_STORE_U8(ctx.r31.u32 + 96, ctx.r11.u8);
	// addi r4,r4,-22544
	ctx.r4.s64 = ctx.r4.s64 + -22544;
	// bl 0x8259cc28
	ctx.lr = 0x82F389E8;
	sub_8259CC28(ctx, base);
	// addi r3,r31,128
	ctx.r3.s64 = ctx.r31.s64 + 128;
	// bl 0x82f38898
	ctx.lr = 0x82F389F0;
	sub_82F38898(ctx, base);
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

__attribute__((alias("__imp__sub_82F38A0C"))) PPC_WEAK_FUNC(sub_82F38A0C);
PPC_FUNC_IMPL(__imp__sub_82F38A0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F38A10"))) PPC_WEAK_FUNC(sub_82F38A10);
PPC_FUNC_IMPL(__imp__sub_82F38A10) {
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
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// lis r9,-32229
	ctx.r9.s64 = -2112159744;
	// addi r8,r11,-6992
	ctx.r8.s64 = ctx.r11.s64 + -6992;
	// addi r7,r10,-17088
	ctx.r7.s64 = ctx.r10.s64 + -17088;
	// addi r6,r9,-7000
	ctx.r6.s64 = ctx.r9.s64 + -7000;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// stw r7,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r7.u32);
	// addi r30,r3,128
	ctx.r30.s64 = ctx.r3.s64 + 128;
	// stw r6,128(r3)
	PPC_STORE_U32(ctx.r3.u32 + 128, ctx.r6.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r30,40
	ctx.r3.s64 = ctx.r30.s64 + 40;
	// bl 0x82572fa0
	ctx.lr = 0x82F38A5C;
	sub_82572FA0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r30,32
	ctx.r3.s64 = ctx.r30.s64 + 32;
	// bl 0x82572fa0
	ctx.lr = 0x82F38A68;
	sub_82572FA0(ctx, base);
	// lwz r5,116(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// addi r30,r31,96
	ctx.r30.s64 = ctx.r31.s64 + 96;
	// cmplwi cr6,r5,16
	cr6.compare<uint32_t>(ctx.r5.u32, 16, xer);
	// blt cr6,0x82f38a8c
	if (cr6.lt) goto loc_82F38A8C;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82F38A8C;
	sub_825952B8(ctx, base);
loc_82F38A8C:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,15
	ctx.r10.s64 = 15;
	// stw r11,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r10.u32);
	// stb r11,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r11.u8);
	// bl 0x82f42278
	ctx.lr = 0x82F38AA8;
	sub_82F42278(ctx, base);
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

__attribute__((alias("__imp__sub_82F38AC0"))) PPC_WEAK_FUNC(sub_82F38AC0);
PPC_FUNC_IMPL(__imp__sub_82F38AC0) {
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
	// bl 0x82f38a10
	ctx.lr = 0x82F38AE0;
	sub_82F38A10(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82f38af8
	if (cr6.eq) goto loc_82F38AF8;
	// bl 0x82416268
	ctx.lr = 0x82F38AF4;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82F38AF8:
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

__attribute__((alias("__imp__sub_82F38B10"))) PPC_WEAK_FUNC(sub_82F38B10);
PPC_FUNC_IMPL(__imp__sub_82F38B10) {
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
	// bl 0x830ff290
	ctx.lr = 0x82F38B28;
	sub_830FF290(ctx, base);
	// bl 0x830ffaa8
	ctx.lr = 0x82F38B2C;
	sub_830FFAA8(ctx, base);
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x82f38bd8
	if (!cr6.eq) goto loc_82F38BD8;
	// addi r11,r3,-6
	ctx.r11.s64 = ctx.r3.s64 + -6;
	// cmplwi cr6,r11,7
	cr6.compare<uint32_t>(ctx.r11.u32, 7, xer);
	// bgt cr6,0x82f38b88
	if (cr6.gt) goto loc_82F38B88;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x82f38b78
	if (cr6.eq) goto loc_82F38B78;
	// bdz 0x82f38b78
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_82F38B78;
	// bdz 0x82f38b68
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_82F38B68;
	// bdz 0x82f38b68
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_82F38B68;
	// bdz 0x82f38b68
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_82F38B68;
	// bdz 0x82f38b68
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_82F38B68;
	// bdz 0x82f38b68
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_82F38B68;
loc_82F38B68:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r11,r11,-7096
	ctx.r11.s64 = ctx.r11.s64 + -7096;
	// addi r4,r11,-244
	ctx.r4.s64 = ctx.r11.s64 + -244;
	// b 0x82f38cdc
	goto loc_82F38CDC;
loc_82F38B78:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r11,r11,-7096
	ctx.r11.s64 = ctx.r11.s64 + -7096;
	// addi r4,r11,-236
	ctx.r4.s64 = ctx.r11.s64 + -236;
	// b 0x82f38cdc
	goto loc_82F38CDC;
loc_82F38B88:
	// bl 0x830ff290
	ctx.lr = 0x82F38B8C;
	sub_830FF290(ctx, base);
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmplwi cr6,r11,57
	cr6.compare<uint32_t>(ctx.r11.u32, 57, xer);
	// beq cr6,0x82f38bc8
	if (cr6.eq) goto loc_82F38BC8;
	// bl 0x830ff290
	ctx.lr = 0x82F38B9C;
	sub_830FF290(ctx, base);
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmplwi cr6,r11,58
	cr6.compare<uint32_t>(ctx.r11.u32, 58, xer);
	// beq cr6,0x82f38bc8
	if (cr6.eq) goto loc_82F38BC8;
	// bl 0x830ff290
	ctx.lr = 0x82F38BAC;
	sub_830FF290(ctx, base);
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmplwi cr6,r11,59
	cr6.compare<uint32_t>(ctx.r11.u32, 59, xer);
	// beq cr6,0x82f38bc8
	if (cr6.eq) goto loc_82F38BC8;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r11,r11,-7096
	ctx.r11.s64 = ctx.r11.s64 + -7096;
	// addi r4,r11,-164
	ctx.r4.s64 = ctx.r11.s64 + -164;
	// b 0x82f38cdc
	goto loc_82F38CDC;
loc_82F38BC8:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r11,r11,-7096
	ctx.r11.s64 = ctx.r11.s64 + -7096;
	// addi r4,r11,-180
	ctx.r4.s64 = ctx.r11.s64 + -180;
	// b 0x82f38cdc
	goto loc_82F38CDC;
loc_82F38BD8:
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// bne cr6,0x82f38bf0
	if (!cr6.eq) goto loc_82F38BF0;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r11,r11,-7096
	ctx.r11.s64 = ctx.r11.s64 + -7096;
	// addi r4,r11,-152
	ctx.r4.s64 = ctx.r11.s64 + -152;
	// b 0x82f38cdc
	goto loc_82F38CDC;
loc_82F38BF0:
	// cmplwi cr6,r3,13
	cr6.compare<uint32_t>(ctx.r3.u32, 13, xer);
	// bgt cr6,0x82f38c48
	if (cr6.gt) goto loc_82F38C48;
	// cmplwi cr6,r3,8
	cr6.compare<uint32_t>(ctx.r3.u32, 8, xer);
	// bge cr6,0x82f38c38
	if (!cr6.lt) goto loc_82F38C38;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82f38c28
	if (cr6.eq) goto loc_82F38C28;
	// cmplwi cr6,r3,5
	cr6.compare<uint32_t>(ctx.r3.u32, 5, xer);
	// ble cr6,0x82f38c50
	if (!cr6.gt) goto loc_82F38C50;
	// cmplwi cr6,r3,7
	cr6.compare<uint32_t>(ctx.r3.u32, 7, xer);
	// bgt cr6,0x82f38c50
	if (cr6.gt) goto loc_82F38C50;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r11,r11,-7096
	ctx.r11.s64 = ctx.r11.s64 + -7096;
	// addi r4,r11,-132
	ctx.r4.s64 = ctx.r11.s64 + -132;
	// b 0x82f38cdc
	goto loc_82F38CDC;
loc_82F38C28:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r11,r11,-7096
	ctx.r11.s64 = ctx.r11.s64 + -7096;
	// addi r4,r11,-84
	ctx.r4.s64 = ctx.r11.s64 + -84;
	// b 0x82f38cdc
	goto loc_82F38CDC;
loc_82F38C38:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r11,r11,-7096
	ctx.r11.s64 = ctx.r11.s64 + -7096;
	// addi r4,r11,-144
	ctx.r4.s64 = ctx.r11.s64 + -144;
	// b 0x82f38cdc
	goto loc_82F38CDC;
loc_82F38C48:
	// cmplwi cr6,r3,26
	cr6.compare<uint32_t>(ctx.r3.u32, 26, xer);
	// beq cr6,0x82f38cd0
	if (cr6.eq) goto loc_82F38CD0;
loc_82F38C50:
	// bl 0x830ff290
	ctx.lr = 0x82F38C54;
	sub_830FF290(ctx, base);
	// bl 0x830ff948
	ctx.lr = 0x82F38C58;
	sub_830FF948(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82f38c94
	if (cr6.eq) goto loc_82F38C94;
	// bl 0x830ff290
	ctx.lr = 0x82F38C68;
	sub_830FF290(ctx, base);
	// bl 0x830ff988
	ctx.lr = 0x82F38C6C;
	sub_830FF988(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r11,r11,-7096
	ctx.r11.s64 = ctx.r11.s64 + -7096;
	// beq cr6,0x82f38c8c
	if (cr6.eq) goto loc_82F38C8C;
	// addi r4,r11,-72
	ctx.r4.s64 = ctx.r11.s64 + -72;
	// b 0x82f38ce0
	goto loc_82F38CE0;
loc_82F38C8C:
	// addi r4,r11,-56
	ctx.r4.s64 = ctx.r11.s64 + -56;
	// b 0x82f38ce0
	goto loc_82F38CE0;
loc_82F38C94:
	// bl 0x830ff290
	ctx.lr = 0x82F38C98;
	sub_830FF290(ctx, base);
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmplwi cr6,r11,57
	cr6.compare<uint32_t>(ctx.r11.u32, 57, xer);
	// beq cr6,0x82f38cc0
	if (cr6.eq) goto loc_82F38CC0;
	// bl 0x830ff290
	ctx.lr = 0x82F38CA8;
	sub_830FF290(ctx, base);
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmplwi cr6,r11,58
	cr6.compare<uint32_t>(ctx.r11.u32, 58, xer);
	// beq cr6,0x82f38cc0
	if (cr6.eq) goto loc_82F38CC0;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r4,r11,-7096
	ctx.r4.s64 = ctx.r11.s64 + -7096;
	// b 0x82f38cdc
	goto loc_82F38CDC;
loc_82F38CC0:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r11,r11,-7096
	ctx.r11.s64 = ctx.r11.s64 + -7096;
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// b 0x82f38cdc
	goto loc_82F38CDC;
loc_82F38CD0:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r11,r11,-7096
	ctx.r11.s64 = ctx.r11.s64 + -7096;
	// addi r4,r11,-96
	ctx.r4.s64 = ctx.r11.s64 + -96;
loc_82F38CDC:
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
loc_82F38CE0:
	// bl 0x8259d6c0
	ctx.lr = 0x82F38CE4;
	sub_8259D6C0(ctx, base);
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

__attribute__((alias("__imp__sub_82F38CF8"))) PPC_WEAK_FUNC(sub_82F38CF8);
PPC_FUNC_IMPL(__imp__sub_82F38CF8) {
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
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82f38d1c
	if (cr6.lt) goto loc_82F38D1C;
	// lwz r31,0(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82f38d20
	goto loc_82F38D20;
loc_82F38D1C:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_82F38D20:
	// li r11,31
	ctx.r11.s64 = 31;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,176
	ctx.r4.s64 = 176;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82F38D38;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82f38d54
	if (cr6.eq) goto loc_82F38D54;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82f38980
	ctx.lr = 0x82F38D4C;
	sub_82F38980(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82f38d58
	if (!cr6.eq) goto loc_82F38D58;
loc_82F38D54:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82F38D58:
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

__attribute__((alias("__imp__sub_82F38D6C"))) PPC_WEAK_FUNC(sub_82F38D6C);
PPC_FUNC_IMPL(__imp__sub_82F38D6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F38D70"))) PPC_WEAK_FUNC(sub_82F38D70);
PPC_FUNC_IMPL(__imp__sub_82F38D70) {
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
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82f38d94
	if (cr6.lt) goto loc_82F38D94;
	// lwz r31,0(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82f38d98
	goto loc_82F38D98;
loc_82F38D94:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_82F38D98:
	// li r11,31
	ctx.r11.s64 = 31;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,176
	ctx.r4.s64 = 176;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82F38DB0;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82f38dcc
	if (cr6.eq) goto loc_82F38DCC;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82f38980
	ctx.lr = 0x82F38DC4;
	sub_82F38980(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82f38dd0
	if (!cr6.eq) goto loc_82F38DD0;
loc_82F38DCC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82F38DD0:
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

__attribute__((alias("__imp__sub_82F38DE4"))) PPC_WEAK_FUNC(sub_82F38DE4);
PPC_FUNC_IMPL(__imp__sub_82F38DE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F38DE8"))) PPC_WEAK_FUNC(sub_82F38DE8);
PPC_FUNC_IMPL(__imp__sub_82F38DE8) {
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
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82f38e0c
	if (cr6.lt) goto loc_82F38E0C;
	// lwz r31,0(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82f38e10
	goto loc_82F38E10;
loc_82F38E0C:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_82F38E10:
	// li r11,31
	ctx.r11.s64 = 31;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,176
	ctx.r4.s64 = 176;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82F38E28;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82f38e44
	if (cr6.eq) goto loc_82F38E44;
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82f38980
	ctx.lr = 0x82F38E3C;
	sub_82F38980(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82f38e48
	if (!cr6.eq) goto loc_82F38E48;
loc_82F38E44:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82F38E48:
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

__attribute__((alias("__imp__sub_82F38E5C"))) PPC_WEAK_FUNC(sub_82F38E5C);
PPC_FUNC_IMPL(__imp__sub_82F38E5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F38E60"))) PPC_WEAK_FUNC(sub_82F38E60);
PPC_FUNC_IMPL(__imp__sub_82F38E60) {
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
	// bl 0x82d34e50
	ctx.lr = 0x82F38E7C;
	sub_82D34E50(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82f38ea0
	if (cr6.eq) goto loc_82F38EA0;
	// bl 0x82d34e50
	ctx.lr = 0x82F38E88;
	sub_82D34E50(ctx, base);
	// bl 0x82d34d38
	ctx.lr = 0x82F38E8C;
	sub_82D34D38(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82f38ea0
	if (!cr6.eq) goto loc_82F38EA0;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82f38f30
	goto loc_82F38F30;
loc_82F38EA0:
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82f38ec4
	if (!cr6.eq) goto loc_82F38EC4;
	// bl 0x830ff290
	ctx.lr = 0x82F38EB0;
	sub_830FF290(ctx, base);
	// bl 0x830ffaa8
	ctx.lr = 0x82F38EB4;
	sub_830FFAA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82f38ec4
	if (cr6.eq) goto loc_82F38EC4;
	// cmplwi cr6,r3,6
	cr6.compare<uint32_t>(ctx.r3.u32, 6, xer);
	// bne cr6,0x82f38ecc
	if (!cr6.eq) goto loc_82F38ECC;
loc_82F38EC4:
	// bl 0x839837e8
	ctx.lr = 0x82F38EC8;
	sub_839837E8(ctx, base);
	// bl 0x83983aa0
	ctx.lr = 0x82F38ECC;
	sub_83983AA0(ctx, base);
loc_82F38ECC:
	// bl 0x839844b8
	ctx.lr = 0x82F38ED0;
	sub_839844B8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f38b10
	ctx.lr = 0x82F38ED8;
	sub_82F38B10(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r30,r31,96
	ctx.r30.s64 = ctx.r31.s64 + 96;
	// lwz r5,112(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// li r7,9
	ctx.r7.s64 = 9;
	// addi r6,r11,-7352
	ctx.r6.s64 = ctx.r11.s64 + -7352;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x827a8810
	ctx.lr = 0x82F38EF8;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82f38f20
	if (cr6.eq) goto loc_82F38F20;
	// bl 0x82f51718
	ctx.lr = 0x82F38F04;
	sub_82F51718(ctx, base);
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// bne cr6,0x82f38f20
	if (!cr6.eq) goto loc_82F38F20;
	// li r11,3
	ctx.r11.s64 = 3;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r11.u32);
	// b 0x82f38f30
	goto loc_82F38F30;
loc_82F38F20:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x82F38F2C;
	sub_82E88020(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
loc_82F38F30:
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

__attribute__((alias("__imp__sub_82F38F48"))) PPC_WEAK_FUNC(sub_82F38F48);
PPC_FUNC_IMPL(__imp__sub_82F38F48) {
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
	// lwz r11,92(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// beq cr6,0x82f38fd8
	if (cr6.eq) goto loc_82F38FD8;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// beq cr6,0x82f38ff4
	if (cr6.eq) goto loc_82F38FF4;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// bne cr6,0x82f38f9c
	if (!cr6.eq) goto loc_82F38F9C;
	// lis r11,-31754
	ctx.r11.s64 = -2081030144;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,21944(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21944);
	// bl 0x8308b280
	ctx.lr = 0x82F38F90;
	sub_8308B280(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82f38fb4
	if (cr6.eq) goto loc_82F38FB4;
loc_82F38F9C:
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
loc_82F38FB4:
	// addi r4,r31,96
	ctx.r4.s64 = ctx.r31.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x82F38FC0;
	sub_82E88020(ctx, base);
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
loc_82F38FD8:
	// addi r3,r31,128
	ctx.r3.s64 = ctx.r31.s64 + 128;
	// bl 0x83003a90
	ctx.lr = 0x82F38FE0;
	sub_83003A90(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82f38f9c
	if (cr6.eq) goto loc_82F38F9C;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r11.u32);
loc_82F38FF4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f38e60
	ctx.lr = 0x82F38FFC;
	sub_82F38E60(ctx, base);
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

__attribute__((alias("__imp__sub_82F39010"))) PPC_WEAK_FUNC(sub_82F39010);
PPC_FUNC_IMPL(__imp__sub_82F39010) {
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
	// bl 0x82f42220
	ctx.lr = 0x82F39028;
	sub_82F42220(ctx, base);
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// lis r9,-32239
	ctx.r9.s64 = -2112815104;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r8,r10,-6352
	ctx.r8.s64 = ctx.r10.s64 + -6352;
	// addi r7,r9,-17088
	ctx.r7.s64 = ctx.r9.s64 + -17088;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r7,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r7.u32);
	// stw r11,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r11.u32);
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
	// stw r11,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r11.u32);
	// stw r11,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r11.u32);
	// stw r11,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82F39078"))) PPC_WEAK_FUNC(sub_82F39078);
PPC_FUNC_IMPL(__imp__sub_82F39078) {
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
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-6352
	ctx.r9.s64 = ctx.r11.s64 + -6352;
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
	// bl 0x82f42278
	ctx.lr = 0x82F390B0;
	sub_82F42278(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82f390c8
	if (cr6.eq) goto loc_82F390C8;
	// bl 0x82416268
	ctx.lr = 0x82F390C4;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82F390C8:
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

__attribute__((alias("__imp__sub_82F390E0"))) PPC_WEAK_FUNC(sub_82F390E0);
PPC_FUNC_IMPL(__imp__sub_82F390E0) {
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
	// lwz r11,88(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82f39148
	if (cr6.eq) goto loc_82F39148;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595150
	ctx.lr = 0x82F39118;
	sub_82595150(ctx, base);
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82f39138
	if (cr6.eq) goto loc_82F39138;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82F39138;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82F39138:
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595170
	ctx.lr = 0x82F39140;
	sub_82595170(ctx, base);
	// stw r30,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r30.u32);
	// b 0x82f39150
	goto loc_82F39150;
loc_82F39148:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
loc_82F39150:
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

__attribute__((alias("__imp__sub_82F39168"))) PPC_WEAK_FUNC(sub_82F39168);
PPC_FUNC_IMPL(__imp__sub_82F39168) {
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
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82f3918c
	if (cr6.lt) goto loc_82F3918C;
	// lwz r31,0(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82f39190
	goto loc_82F39190;
loc_82F3918C:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_82F39190:
	// li r11,31
	ctx.r11.s64 = 31;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,116
	ctx.r4.s64 = 116;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82F391A8;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82f391c0
	if (cr6.eq) goto loc_82F391C0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82f39010
	ctx.lr = 0x82F391B8;
	sub_82F39010(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82f391c4
	if (!cr6.eq) goto loc_82F391C4;
loc_82F391C0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82F391C4:
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

__attribute__((alias("__imp__sub_82F391D8"))) PPC_WEAK_FUNC(sub_82F391D8);
PPC_FUNC_IMPL(__imp__sub_82F391D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x82F391E0;
	__savegprlr_24(ctx, base);
	// stwu r1,-768(r1)
	ea = -768 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	ctx.r31.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r31,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r31.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,68
	ctx.r4.s64 = 68;
	// addi r3,r1,164
	ctx.r3.s64 = ctx.r1.s64 + 164;
	// bl 0x82595718
	ctx.lr = 0x82F39200;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82f39224
	if (cr6.eq) goto loc_82F39224;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// lfs f2,30444(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 30444);
	ctx.f2.f64 = double(temp.f32);
	// fmr f1,f2
	ctx.f1.f64 = ctx.f2.f64;
	// bl 0x837872a0
	ctx.lr = 0x82F39220;
	sub_837872A0(ctx, base);
	// b 0x82f39228
	goto loc_82F39228;
loc_82F39224:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82F39228:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r3,88(r30)
	PPC_STORE_U32(ctx.r30.u32 + 88, ctx.r3.u32);
	// beq cr6,0x82f39be0
	if (cr6.eq) goto loc_82F39BE0;
	// bl 0x831156e8
	ctx.lr = 0x82F39238;
	sub_831156E8(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lwz r10,52(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// addi r29,r11,-6472
	ctx.r29.s64 = ctx.r11.s64 + -6472;
	// addis r25,r10,6
	ctx.r25.s64 = ctx.r10.s64 + 393216;
	// addi r3,r29,-364
	ctx.r3.s64 = ctx.r29.s64 + -364;
	// addi r25,r25,-30316
	ctx.r25.s64 = ctx.r25.s64 + -30316;
	// bl 0x83787b20
	ctx.lr = 0x82F39254;
	sub_83787B20(ctx, base);
	// li r28,15
	ctx.r28.s64 = 15;
	// li r24,2
	ctx.r24.s64 = 2;
	// stw r3,92(r30)
	PPC_STORE_U32(ctx.r30.u32 + 92, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82f39398
	if (cr6.eq) goto loc_82F39398;
	// addi r11,r29,-352
	ctx.r11.s64 = ctx.r29.s64 + -352;
	// addi r10,r29,-336
	ctx.r10.s64 = ctx.r29.s64 + -336;
	// addi r9,r29,-320
	ctx.r9.s64 = ctx.r29.s64 + -320;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r8,r29,-304
	ctx.r8.s64 = ctx.r29.s64 + -304;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r7,r29,-288
	ctx.r7.s64 = ctx.r29.s64 + -288;
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// addi r6,r29,-272
	ctx.r6.s64 = ctx.r29.s64 + -272;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// addi r5,r29,-256
	ctx.r5.s64 = ctx.r29.s64 + -256;
	// stw r7,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r7.u32);
	// stw r6,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r6.u32);
	// addi r27,r1,80
	ctx.r27.s64 = ctx.r1.s64 + 80;
	// stw r5,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r5.u32);
	// li r26,7
	ctx.r26.s64 = 7;
loc_82F392A8:
	// lwz r4,0(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// stw r28,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r28.u32);
	// stw r31,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r31.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stb r31,176(r1)
	PPC_STORE_U8(ctx.r1.u32 + 176, ctx.r31.u8);
loc_82F392BC:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82f392bc
	if (!cr6.eq) goto loc_82F392BC;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x82F392E0;
	sub_8259CC28(ctx, base);
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// lwz r3,92(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 92);
	// bl 0x83787b18
	ctx.lr = 0x82F392EC;
	sub_83787B18(ctx, base);
	// lwz r10,196(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82f39308
	if (cr6.lt) goto loc_82F39308;
	// stw r24,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r24.u32);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// lwz r4,176(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// bl 0x825952b8
	ctx.lr = 0x82F39308;
	sub_825952B8(ctx, base);
loc_82F39308:
	// addic. r26,r26,-1
	xer.ca = ctx.r26.u32 > 0;
	ctx.r26.s64 = ctx.r26.s64 + -1;
	cr0.compare<int32_t>(ctx.r26.s32, 0, xer);
	// stw r28,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r28.u32);
	// stw r31,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r31.u32);
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// stb r31,176(r1)
	PPC_STORE_U8(ctx.r1.u32 + 176, ctx.r31.u8);
	// bne 0x82f392a8
	if (!cr0.eq) goto loc_82F392A8;
	// lwz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,6
	cr6.compare<uint32_t>(ctx.r11.u32, 6, xer);
	// bgt cr6,0x82f39384
	if (cr6.gt) goto loc_82F39384;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x82f39358
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82F39358;
	// bdzf 4*cr6+eq,0x82f39360
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82F39360;
	// bdzf 4*cr6+eq,0x82f39368
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82F39368;
	// bdzf 4*cr6+eq,0x82f39370
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82F39370;
	// bdzf 4*cr6+eq,0x82f39378
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82F39378;
	// bne cr6,0x82f39380
	if (!cr6.eq) goto loc_82F39380;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// b 0x82f39384
	goto loc_82F39384;
loc_82F39358:
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x82f39384
	goto loc_82F39384;
loc_82F39360:
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// b 0x82f39384
	goto loc_82F39384;
loc_82F39368:
	// li r4,3
	ctx.r4.s64 = 3;
	// b 0x82f39384
	goto loc_82F39384;
loc_82F39370:
	// li r4,4
	ctx.r4.s64 = 4;
	// b 0x82f39384
	goto loc_82F39384;
loc_82F39378:
	// li r4,5
	ctx.r4.s64 = 5;
	// b 0x82f39384
	goto loc_82F39384;
loc_82F39380:
	// li r4,6
	ctx.r4.s64 = 6;
loc_82F39384:
	// lwz r3,92(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 92);
	// bl 0x837877f0
	ctx.lr = 0x82F3938C;
	sub_837877F0(ctx, base);
	// lwz r4,92(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 92);
	// lwz r3,88(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 88);
	// bl 0x83787740
	ctx.lr = 0x82F39398;
	sub_83787740(ctx, base);
loc_82F39398:
	// addi r3,r29,-240
	ctx.r3.s64 = ctx.r29.s64 + -240;
	// bl 0x83787b20
	ctx.lr = 0x82F393A0;
	sub_83787B20(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r3,96(r30)
	PPC_STORE_U32(ctx.r30.u32 + 96, ctx.r3.u32);
	// beq cr6,0x82f396e8
	if (cr6.eq) goto loc_82F396E8;
	// stw r28,676(r1)
	PPC_STORE_U32(ctx.r1.u32 + 676, ctx.r28.u32);
	// addi r4,r29,-228
	ctx.r4.s64 = ctx.r29.s64 + -228;
	// stw r31,672(r1)
	PPC_STORE_U32(ctx.r1.u32 + 672, ctx.r31.u32);
	// li r5,2
	ctx.r5.s64 = 2;
	// stb r31,656(r1)
	PPC_STORE_U8(ctx.r1.u32 + 656, ctx.r31.u8);
	// addi r3,r1,656
	ctx.r3.s64 = ctx.r1.s64 + 656;
	// bl 0x8259cc28
	ctx.lr = 0x82F393C8;
	sub_8259CC28(ctx, base);
	// addi r4,r1,656
	ctx.r4.s64 = ctx.r1.s64 + 656;
	// lwz r3,96(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	// bl 0x83787b18
	ctx.lr = 0x82F393D4;
	sub_83787B18(ctx, base);
	// lwz r11,676(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 676);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82f393f0
	if (cr6.lt) goto loc_82F393F0;
	// stw r24,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r24.u32);
	// addi r3,r1,172
	ctx.r3.s64 = ctx.r1.s64 + 172;
	// lwz r4,656(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 656);
	// bl 0x825952b8
	ctx.lr = 0x82F393F0;
	sub_825952B8(ctx, base);
loc_82F393F0:
	// stw r28,676(r1)
	PPC_STORE_U32(ctx.r1.u32 + 676, ctx.r28.u32);
	// addi r4,r29,-224
	ctx.r4.s64 = ctx.r29.s64 + -224;
	// stw r31,672(r1)
	PPC_STORE_U32(ctx.r1.u32 + 672, ctx.r31.u32);
	// li r5,2
	ctx.r5.s64 = 2;
	// stb r31,656(r1)
	PPC_STORE_U8(ctx.r1.u32 + 656, ctx.r31.u8);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// stw r28,260(r1)
	PPC_STORE_U32(ctx.r1.u32 + 260, ctx.r28.u32);
	// stw r31,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, ctx.r31.u32);
	// stb r31,240(r1)
	PPC_STORE_U8(ctx.r1.u32 + 240, ctx.r31.u8);
	// bl 0x8259cc28
	ctx.lr = 0x82F39418;
	sub_8259CC28(ctx, base);
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// lwz r3,96(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	// bl 0x83787b18
	ctx.lr = 0x82F39424;
	sub_83787B18(ctx, base);
	// lwz r11,260(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 260);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82f39440
	if (cr6.lt) goto loc_82F39440;
	// stw r24,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r24.u32);
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// lwz r4,240(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 240);
	// bl 0x825952b8
	ctx.lr = 0x82F39440;
	sub_825952B8(ctx, base);
loc_82F39440:
	// stw r28,260(r1)
	PPC_STORE_U32(ctx.r1.u32 + 260, ctx.r28.u32);
	// addi r4,r29,-220
	ctx.r4.s64 = ctx.r29.s64 + -220;
	// stw r31,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, ctx.r31.u32);
	// li r5,2
	ctx.r5.s64 = 2;
	// stb r31,240(r1)
	PPC_STORE_U8(ctx.r1.u32 + 240, ctx.r31.u8);
	// addi r3,r1,560
	ctx.r3.s64 = ctx.r1.s64 + 560;
	// stw r28,580(r1)
	PPC_STORE_U32(ctx.r1.u32 + 580, ctx.r28.u32);
	// stw r31,576(r1)
	PPC_STORE_U32(ctx.r1.u32 + 576, ctx.r31.u32);
	// stb r31,560(r1)
	PPC_STORE_U8(ctx.r1.u32 + 560, ctx.r31.u8);
	// bl 0x8259cc28
	ctx.lr = 0x82F39468;
	sub_8259CC28(ctx, base);
	// addi r4,r1,560
	ctx.r4.s64 = ctx.r1.s64 + 560;
	// lwz r3,96(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	// bl 0x83787b18
	ctx.lr = 0x82F39474;
	sub_83787B18(ctx, base);
	// lwz r11,580(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 580);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82f39490
	if (cr6.lt) goto loc_82F39490;
	// stw r24,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r24.u32);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// lwz r4,560(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 560);
	// bl 0x825952b8
	ctx.lr = 0x82F39490;
	sub_825952B8(ctx, base);
loc_82F39490:
	// stw r28,580(r1)
	PPC_STORE_U32(ctx.r1.u32 + 580, ctx.r28.u32);
	// addi r4,r29,-216
	ctx.r4.s64 = ctx.r29.s64 + -216;
	// stw r31,576(r1)
	PPC_STORE_U32(ctx.r1.u32 + 576, ctx.r31.u32);
	// li r5,2
	ctx.r5.s64 = 2;
	// stb r31,560(r1)
	PPC_STORE_U8(ctx.r1.u32 + 560, ctx.r31.u8);
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// stw r28,324(r1)
	PPC_STORE_U32(ctx.r1.u32 + 324, ctx.r28.u32);
	// stw r31,320(r1)
	PPC_STORE_U32(ctx.r1.u32 + 320, ctx.r31.u32);
	// stb r31,304(r1)
	PPC_STORE_U8(ctx.r1.u32 + 304, ctx.r31.u8);
	// bl 0x8259cc28
	ctx.lr = 0x82F394B8;
	sub_8259CC28(ctx, base);
	// addi r4,r1,304
	ctx.r4.s64 = ctx.r1.s64 + 304;
	// lwz r3,96(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	// bl 0x83787b18
	ctx.lr = 0x82F394C4;
	sub_83787B18(ctx, base);
	// lwz r11,324(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 324);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82f394e0
	if (cr6.lt) goto loc_82F394E0;
	// stw r24,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r24.u32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lwz r4,304(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 304);
	// bl 0x825952b8
	ctx.lr = 0x82F394E0;
	sub_825952B8(ctx, base);
loc_82F394E0:
	// stw r28,324(r1)
	PPC_STORE_U32(ctx.r1.u32 + 324, ctx.r28.u32);
	// addi r4,r29,-212
	ctx.r4.s64 = ctx.r29.s64 + -212;
	// stw r31,320(r1)
	PPC_STORE_U32(ctx.r1.u32 + 320, ctx.r31.u32);
	// li r5,2
	ctx.r5.s64 = 2;
	// stb r31,304(r1)
	PPC_STORE_U8(ctx.r1.u32 + 304, ctx.r31.u8);
	// addi r3,r1,496
	ctx.r3.s64 = ctx.r1.s64 + 496;
	// stw r28,516(r1)
	PPC_STORE_U32(ctx.r1.u32 + 516, ctx.r28.u32);
	// stw r31,512(r1)
	PPC_STORE_U32(ctx.r1.u32 + 512, ctx.r31.u32);
	// stb r31,496(r1)
	PPC_STORE_U8(ctx.r1.u32 + 496, ctx.r31.u8);
	// bl 0x8259cc28
	ctx.lr = 0x82F39508;
	sub_8259CC28(ctx, base);
	// addi r4,r1,496
	ctx.r4.s64 = ctx.r1.s64 + 496;
	// lwz r3,96(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	// bl 0x83787b18
	ctx.lr = 0x82F39514;
	sub_83787B18(ctx, base);
	// lwz r11,516(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 516);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82f39530
	if (cr6.lt) goto loc_82F39530;
	// stw r24,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r24.u32);
	// addi r3,r1,152
	ctx.r3.s64 = ctx.r1.s64 + 152;
	// lwz r4,496(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 496);
	// bl 0x825952b8
	ctx.lr = 0x82F39530;
	sub_825952B8(ctx, base);
loc_82F39530:
	// stw r28,516(r1)
	PPC_STORE_U32(ctx.r1.u32 + 516, ctx.r28.u32);
	// addi r4,r29,-208
	ctx.r4.s64 = ctx.r29.s64 + -208;
	// stw r31,512(r1)
	PPC_STORE_U32(ctx.r1.u32 + 512, ctx.r31.u32);
	// li r5,2
	ctx.r5.s64 = 2;
	// stb r31,496(r1)
	PPC_STORE_U8(ctx.r1.u32 + 496, ctx.r31.u8);
	// addi r3,r1,368
	ctx.r3.s64 = ctx.r1.s64 + 368;
	// stw r28,388(r1)
	PPC_STORE_U32(ctx.r1.u32 + 388, ctx.r28.u32);
	// stw r31,384(r1)
	PPC_STORE_U32(ctx.r1.u32 + 384, ctx.r31.u32);
	// stb r31,368(r1)
	PPC_STORE_U8(ctx.r1.u32 + 368, ctx.r31.u8);
	// bl 0x8259cc28
	ctx.lr = 0x82F39558;
	sub_8259CC28(ctx, base);
	// addi r4,r1,368
	ctx.r4.s64 = ctx.r1.s64 + 368;
	// lwz r3,96(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	// bl 0x83787b18
	ctx.lr = 0x82F39564;
	sub_83787B18(ctx, base);
	// lwz r11,388(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 388);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82f39580
	if (cr6.lt) goto loc_82F39580;
	// stw r24,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r24.u32);
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// lwz r4,368(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 368);
	// bl 0x825952b8
	ctx.lr = 0x82F39580;
	sub_825952B8(ctx, base);
loc_82F39580:
	// stw r28,388(r1)
	PPC_STORE_U32(ctx.r1.u32 + 388, ctx.r28.u32);
	// addi r4,r29,-204
	ctx.r4.s64 = ctx.r29.s64 + -204;
	// stw r31,384(r1)
	PPC_STORE_U32(ctx.r1.u32 + 384, ctx.r31.u32);
	// li r5,2
	ctx.r5.s64 = 2;
	// stb r31,368(r1)
	PPC_STORE_U8(ctx.r1.u32 + 368, ctx.r31.u8);
	// addi r3,r1,624
	ctx.r3.s64 = ctx.r1.s64 + 624;
	// stw r28,644(r1)
	PPC_STORE_U32(ctx.r1.u32 + 644, ctx.r28.u32);
	// stw r31,640(r1)
	PPC_STORE_U32(ctx.r1.u32 + 640, ctx.r31.u32);
	// stb r31,624(r1)
	PPC_STORE_U8(ctx.r1.u32 + 624, ctx.r31.u8);
	// bl 0x8259cc28
	ctx.lr = 0x82F395A8;
	sub_8259CC28(ctx, base);
	// addi r4,r1,624
	ctx.r4.s64 = ctx.r1.s64 + 624;
	// lwz r3,96(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	// bl 0x83787b18
	ctx.lr = 0x82F395B4;
	sub_83787B18(ctx, base);
	// lwz r11,644(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 644);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82f395d0
	if (cr6.lt) goto loc_82F395D0;
	// stw r24,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r24.u32);
	// addi r3,r1,168
	ctx.r3.s64 = ctx.r1.s64 + 168;
	// lwz r4,624(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 624);
	// bl 0x825952b8
	ctx.lr = 0x82F395D0;
	sub_825952B8(ctx, base);
loc_82F395D0:
	// stw r28,644(r1)
	PPC_STORE_U32(ctx.r1.u32 + 644, ctx.r28.u32);
	// addi r4,r29,-200
	ctx.r4.s64 = ctx.r29.s64 + -200;
	// stw r31,640(r1)
	PPC_STORE_U32(ctx.r1.u32 + 640, ctx.r31.u32);
	// li r5,2
	ctx.r5.s64 = 2;
	// stb r31,624(r1)
	PPC_STORE_U8(ctx.r1.u32 + 624, ctx.r31.u8);
	// addi r3,r1,432
	ctx.r3.s64 = ctx.r1.s64 + 432;
	// stw r28,452(r1)
	PPC_STORE_U32(ctx.r1.u32 + 452, ctx.r28.u32);
	// stw r31,448(r1)
	PPC_STORE_U32(ctx.r1.u32 + 448, ctx.r31.u32);
	// stb r31,432(r1)
	PPC_STORE_U8(ctx.r1.u32 + 432, ctx.r31.u8);
	// bl 0x8259cc28
	ctx.lr = 0x82F395F8;
	sub_8259CC28(ctx, base);
	// addi r4,r1,432
	ctx.r4.s64 = ctx.r1.s64 + 432;
	// lwz r3,96(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	// bl 0x83787b18
	ctx.lr = 0x82F39604;
	sub_83787B18(ctx, base);
	// lwz r11,452(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 452);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82f39620
	if (cr6.lt) goto loc_82F39620;
	// stw r24,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r24.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r4,432(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 432);
	// bl 0x825952b8
	ctx.lr = 0x82F39620;
	sub_825952B8(ctx, base);
loc_82F39620:
	// stw r28,452(r1)
	PPC_STORE_U32(ctx.r1.u32 + 452, ctx.r28.u32);
	// addi r4,r29,-196
	ctx.r4.s64 = ctx.r29.s64 + -196;
	// stw r31,448(r1)
	PPC_STORE_U32(ctx.r1.u32 + 448, ctx.r31.u32);
	// li r5,2
	ctx.r5.s64 = 2;
	// stb r31,432(r1)
	PPC_STORE_U8(ctx.r1.u32 + 432, ctx.r31.u8);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// stw r28,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r28.u32);
	// stw r31,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r31.u32);
	// stb r31,208(r1)
	PPC_STORE_U8(ctx.r1.u32 + 208, ctx.r31.u8);
	// bl 0x8259cc28
	ctx.lr = 0x82F39648;
	sub_8259CC28(ctx, base);
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// lwz r3,96(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	// bl 0x83787b18
	ctx.lr = 0x82F39654;
	sub_83787B18(ctx, base);
	// lwz r11,228(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82f39670
	if (cr6.lt) goto loc_82F39670;
	// stw r24,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r24.u32);
	// addi r3,r1,116
	ctx.r3.s64 = ctx.r1.s64 + 116;
	// lwz r4,208(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// bl 0x825952b8
	ctx.lr = 0x82F39670;
	sub_825952B8(ctx, base);
loc_82F39670:
	// stw r28,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r28.u32);
	// addi r4,r29,-192
	ctx.r4.s64 = ctx.r29.s64 + -192;
	// stw r31,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r31.u32);
	// li r5,2
	ctx.r5.s64 = 2;
	// stb r31,208(r1)
	PPC_STORE_U8(ctx.r1.u32 + 208, ctx.r31.u8);
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// stw r28,292(r1)
	PPC_STORE_U32(ctx.r1.u32 + 292, ctx.r28.u32);
	// stw r31,288(r1)
	PPC_STORE_U32(ctx.r1.u32 + 288, ctx.r31.u32);
	// stb r31,272(r1)
	PPC_STORE_U8(ctx.r1.u32 + 272, ctx.r31.u8);
	// bl 0x8259cc28
	ctx.lr = 0x82F39698;
	sub_8259CC28(ctx, base);
	// addi r4,r1,272
	ctx.r4.s64 = ctx.r1.s64 + 272;
	// lwz r3,96(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	// bl 0x83787b18
	ctx.lr = 0x82F396A4;
	sub_83787B18(ctx, base);
	// lwz r11,292(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 292);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82f396c0
	if (cr6.lt) goto loc_82F396C0;
	// stw r24,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r24.u32);
	// addi r3,r1,124
	ctx.r3.s64 = ctx.r1.s64 + 124;
	// lwz r4,272(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 272);
	// bl 0x825952b8
	ctx.lr = 0x82F396C0;
	sub_825952B8(ctx, base);
loc_82F396C0:
	// stw r28,292(r1)
	PPC_STORE_U32(ctx.r1.u32 + 292, ctx.r28.u32);
	// stw r31,288(r1)
	PPC_STORE_U32(ctx.r1.u32 + 288, ctx.r31.u32);
	// stb r31,272(r1)
	PPC_STORE_U8(ctx.r1.u32 + 272, ctx.r31.u8);
	// lwz r11,24(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 24);
	// addi r4,r11,-2
	ctx.r4.s64 = ctx.r11.s64 + -2;
	// lwz r3,96(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	// bl 0x837877f0
	ctx.lr = 0x82F396DC;
	sub_837877F0(ctx, base);
	// lwz r4,96(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	// lwz r3,88(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 88);
	// bl 0x83787740
	ctx.lr = 0x82F396E8;
	sub_83787740(ctx, base);
loc_82F396E8:
	// addi r3,r29,-188
	ctx.r3.s64 = ctx.r29.s64 + -188;
	// bl 0x83787b20
	ctx.lr = 0x82F396F0;
	sub_83787B20(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r3,100(r30)
	PPC_STORE_U32(ctx.r30.u32 + 100, ctx.r3.u32);
	// beq cr6,0x82f39984
	if (cr6.eq) goto loc_82F39984;
	// stw r28,356(r1)
	PPC_STORE_U32(ctx.r1.u32 + 356, ctx.r28.u32);
	// addi r4,r29,-176
	ctx.r4.s64 = ctx.r29.s64 + -176;
	// stw r31,352(r1)
	PPC_STORE_U32(ctx.r1.u32 + 352, ctx.r31.u32);
	// li r5,2
	ctx.r5.s64 = 2;
	// stb r31,336(r1)
	PPC_STORE_U8(ctx.r1.u32 + 336, ctx.r31.u8);
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// bl 0x8259cc28
	ctx.lr = 0x82F39718;
	sub_8259CC28(ctx, base);
	// addi r4,r1,336
	ctx.r4.s64 = ctx.r1.s64 + 336;
	// lwz r3,100(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 100);
	// bl 0x83787b18
	ctx.lr = 0x82F39724;
	sub_83787B18(ctx, base);
	// lwz r11,356(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 356);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82f39740
	if (cr6.lt) goto loc_82F39740;
	// stw r24,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r24.u32);
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// lwz r4,336(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 336);
	// bl 0x825952b8
	ctx.lr = 0x82F39740;
	sub_825952B8(ctx, base);
loc_82F39740:
	// stw r28,356(r1)
	PPC_STORE_U32(ctx.r1.u32 + 356, ctx.r28.u32);
	// addi r4,r29,-172
	ctx.r4.s64 = ctx.r29.s64 + -172;
	// stw r31,352(r1)
	PPC_STORE_U32(ctx.r1.u32 + 352, ctx.r31.u32);
	// li r5,2
	ctx.r5.s64 = 2;
	// stb r31,336(r1)
	PPC_STORE_U8(ctx.r1.u32 + 336, ctx.r31.u8);
	// addi r3,r1,400
	ctx.r3.s64 = ctx.r1.s64 + 400;
	// stw r28,420(r1)
	PPC_STORE_U32(ctx.r1.u32 + 420, ctx.r28.u32);
	// stw r31,416(r1)
	PPC_STORE_U32(ctx.r1.u32 + 416, ctx.r31.u32);
	// stb r31,400(r1)
	PPC_STORE_U8(ctx.r1.u32 + 400, ctx.r31.u8);
	// bl 0x8259cc28
	ctx.lr = 0x82F39768;
	sub_8259CC28(ctx, base);
	// addi r4,r1,400
	ctx.r4.s64 = ctx.r1.s64 + 400;
	// lwz r3,100(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 100);
	// bl 0x83787b18
	ctx.lr = 0x82F39774;
	sub_83787B18(ctx, base);
	// lwz r11,420(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 420);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82f39790
	if (cr6.lt) goto loc_82F39790;
	// stw r24,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r24.u32);
	// addi r3,r1,140
	ctx.r3.s64 = ctx.r1.s64 + 140;
	// lwz r4,400(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 400);
	// bl 0x825952b8
	ctx.lr = 0x82F39790;
	sub_825952B8(ctx, base);
loc_82F39790:
	// stw r28,420(r1)
	PPC_STORE_U32(ctx.r1.u32 + 420, ctx.r28.u32);
	// addi r4,r29,-168
	ctx.r4.s64 = ctx.r29.s64 + -168;
	// stw r31,416(r1)
	PPC_STORE_U32(ctx.r1.u32 + 416, ctx.r31.u32);
	// li r5,2
	ctx.r5.s64 = 2;
	// stb r31,400(r1)
	PPC_STORE_U8(ctx.r1.u32 + 400, ctx.r31.u8);
	// addi r3,r1,464
	ctx.r3.s64 = ctx.r1.s64 + 464;
	// stw r28,484(r1)
	PPC_STORE_U32(ctx.r1.u32 + 484, ctx.r28.u32);
	// stw r31,480(r1)
	PPC_STORE_U32(ctx.r1.u32 + 480, ctx.r31.u32);
	// stb r31,464(r1)
	PPC_STORE_U8(ctx.r1.u32 + 464, ctx.r31.u8);
	// bl 0x8259cc28
	ctx.lr = 0x82F397B8;
	sub_8259CC28(ctx, base);
	// addi r4,r1,464
	ctx.r4.s64 = ctx.r1.s64 + 464;
	// lwz r3,100(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 100);
	// bl 0x83787b18
	ctx.lr = 0x82F397C4;
	sub_83787B18(ctx, base);
	// lwz r11,484(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 484);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82f397e0
	if (cr6.lt) goto loc_82F397E0;
	// stw r24,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r24.u32);
	// addi r3,r1,148
	ctx.r3.s64 = ctx.r1.s64 + 148;
	// lwz r4,464(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 464);
	// bl 0x825952b8
	ctx.lr = 0x82F397E0;
	sub_825952B8(ctx, base);
loc_82F397E0:
	// stw r28,484(r1)
	PPC_STORE_U32(ctx.r1.u32 + 484, ctx.r28.u32);
	// addi r4,r29,-164
	ctx.r4.s64 = ctx.r29.s64 + -164;
	// stw r31,480(r1)
	PPC_STORE_U32(ctx.r1.u32 + 480, ctx.r31.u32);
	// li r5,2
	ctx.r5.s64 = 2;
	// stb r31,464(r1)
	PPC_STORE_U8(ctx.r1.u32 + 464, ctx.r31.u8);
	// addi r3,r1,528
	ctx.r3.s64 = ctx.r1.s64 + 528;
	// stw r28,548(r1)
	PPC_STORE_U32(ctx.r1.u32 + 548, ctx.r28.u32);
	// stw r31,544(r1)
	PPC_STORE_U32(ctx.r1.u32 + 544, ctx.r31.u32);
	// stb r31,528(r1)
	PPC_STORE_U8(ctx.r1.u32 + 528, ctx.r31.u8);
	// bl 0x8259cc28
	ctx.lr = 0x82F39808;
	sub_8259CC28(ctx, base);
	// addi r4,r1,528
	ctx.r4.s64 = ctx.r1.s64 + 528;
	// lwz r3,100(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 100);
	// bl 0x83787b18
	ctx.lr = 0x82F39814;
	sub_83787B18(ctx, base);
	// lwz r11,548(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 548);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82f39830
	if (cr6.lt) goto loc_82F39830;
	// stw r24,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r24.u32);
	// addi r3,r1,156
	ctx.r3.s64 = ctx.r1.s64 + 156;
	// lwz r4,528(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 528);
	// bl 0x825952b8
	ctx.lr = 0x82F39830;
	sub_825952B8(ctx, base);
loc_82F39830:
	// stw r28,548(r1)
	PPC_STORE_U32(ctx.r1.u32 + 548, ctx.r28.u32);
	// addi r4,r29,-160
	ctx.r4.s64 = ctx.r29.s64 + -160;
	// stw r31,544(r1)
	PPC_STORE_U32(ctx.r1.u32 + 544, ctx.r31.u32);
	// li r5,2
	ctx.r5.s64 = 2;
	// stb r31,528(r1)
	PPC_STORE_U8(ctx.r1.u32 + 528, ctx.r31.u8);
	// addi r3,r1,592
	ctx.r3.s64 = ctx.r1.s64 + 592;
	// stw r28,612(r1)
	PPC_STORE_U32(ctx.r1.u32 + 612, ctx.r28.u32);
	// stw r31,608(r1)
	PPC_STORE_U32(ctx.r1.u32 + 608, ctx.r31.u32);
	// stb r31,592(r1)
	PPC_STORE_U8(ctx.r1.u32 + 592, ctx.r31.u8);
	// bl 0x8259cc28
	ctx.lr = 0x82F39858;
	sub_8259CC28(ctx, base);
	// addi r4,r1,592
	ctx.r4.s64 = ctx.r1.s64 + 592;
	// lwz r3,100(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 100);
	// bl 0x83787b18
	ctx.lr = 0x82F39864;
	sub_83787B18(ctx, base);
	// lwz r11,612(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 612);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82f39880
	if (cr6.lt) goto loc_82F39880;
	// stw r24,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r24.u32);
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// lwz r4,592(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 592);
	// bl 0x825952b8
	ctx.lr = 0x82F39880;
	sub_825952B8(ctx, base);
loc_82F39880:
	// stw r28,612(r1)
	PPC_STORE_U32(ctx.r1.u32 + 612, ctx.r28.u32);
	// addi r4,r29,-156
	ctx.r4.s64 = ctx.r29.s64 + -156;
	// stw r31,608(r1)
	PPC_STORE_U32(ctx.r1.u32 + 608, ctx.r31.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stb r31,592(r1)
	PPC_STORE_U8(ctx.r1.u32 + 592, ctx.r31.u8);
	// bl 0x837b0c10
	ctx.lr = 0x82F39898;
	sub_837B0C10(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,100(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 100);
	// bl 0x83787b18
	ctx.lr = 0x82F398A4;
	sub_83787B18(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8387e8e0
	ctx.lr = 0x82F398AC;
	sub_8387E8E0(ctx, base);
	// addi r4,r29,-152
	ctx.r4.s64 = ctx.r29.s64 + -152;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x837b0c10
	ctx.lr = 0x82F398B8;
	sub_837B0C10(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,100(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 100);
	// bl 0x83787b18
	ctx.lr = 0x82F398C4;
	sub_83787B18(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8387e8e0
	ctx.lr = 0x82F398CC;
	sub_8387E8E0(ctx, base);
	// addi r4,r29,-148
	ctx.r4.s64 = ctx.r29.s64 + -148;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x837b0c10
	ctx.lr = 0x82F398D8;
	sub_837B0C10(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,100(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 100);
	// bl 0x83787b18
	ctx.lr = 0x82F398E4;
	sub_83787B18(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8387e8e0
	ctx.lr = 0x82F398EC;
	sub_8387E8E0(ctx, base);
	// addi r4,r29,-144
	ctx.r4.s64 = ctx.r29.s64 + -144;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x837b0c10
	ctx.lr = 0x82F398F8;
	sub_837B0C10(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,100(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 100);
	// bl 0x83787b18
	ctx.lr = 0x82F39904;
	sub_83787B18(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8387e8e0
	ctx.lr = 0x82F3990C;
	sub_8387E8E0(ctx, base);
	// addi r4,r29,-140
	ctx.r4.s64 = ctx.r29.s64 + -140;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x837b0c10
	ctx.lr = 0x82F39918;
	sub_837B0C10(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,100(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 100);
	// bl 0x83787b18
	ctx.lr = 0x82F39924;
	sub_83787B18(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8387e8e0
	ctx.lr = 0x82F3992C;
	sub_8387E8E0(ctx, base);
	// addi r4,r29,-136
	ctx.r4.s64 = ctx.r29.s64 + -136;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x837b0c10
	ctx.lr = 0x82F39938;
	sub_837B0C10(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,100(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 100);
	// bl 0x83787b18
	ctx.lr = 0x82F39944;
	sub_83787B18(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8387e8e0
	ctx.lr = 0x82F3994C;
	sub_8387E8E0(ctx, base);
	// addi r4,r29,-132
	ctx.r4.s64 = ctx.r29.s64 + -132;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x837b0c10
	ctx.lr = 0x82F39958;
	sub_837B0C10(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,100(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 100);
	// bl 0x83787b18
	ctx.lr = 0x82F39964;
	sub_83787B18(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8387e8e0
	ctx.lr = 0x82F3996C;
	sub_8387E8E0(ctx, base);
	// lwz r4,28(r25)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r25.u32 + 28);
	// lwz r3,100(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 100);
	// bl 0x837877f0
	ctx.lr = 0x82F39978;
	sub_837877F0(ctx, base);
	// lwz r4,100(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 100);
	// lwz r3,88(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 88);
	// bl 0x83787740
	ctx.lr = 0x82F39984;
	sub_83787740(ctx, base);
loc_82F39984:
	// addi r3,r29,-128
	ctx.r3.s64 = ctx.r29.s64 + -128;
	// bl 0x83787b20
	ctx.lr = 0x82F3998C;
	sub_83787B20(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r3,104(r30)
	PPC_STORE_U32(ctx.r30.u32 + 104, ctx.r3.u32);
	// beq cr6,0x82f39ac4
	if (cr6.eq) goto loc_82F39AC4;
	// addi r4,r29,-116
	ctx.r4.s64 = ctx.r29.s64 + -116;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x837b0c10
	ctx.lr = 0x82F399A4;
	sub_837B0C10(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,104(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 104);
	// bl 0x83787b18
	ctx.lr = 0x82F399B0;
	sub_83787B18(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8387e8e0
	ctx.lr = 0x82F399B8;
	sub_8387E8E0(ctx, base);
	// addi r4,r29,-104
	ctx.r4.s64 = ctx.r29.s64 + -104;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x837b0c10
	ctx.lr = 0x82F399C4;
	sub_837B0C10(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,104(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 104);
	// bl 0x83787b18
	ctx.lr = 0x82F399D0;
	sub_83787B18(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8387e8e0
	ctx.lr = 0x82F399D8;
	sub_8387E8E0(ctx, base);
	// addi r4,r29,-92
	ctx.r4.s64 = ctx.r29.s64 + -92;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x837b0c10
	ctx.lr = 0x82F399E4;
	sub_837B0C10(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,104(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 104);
	// bl 0x83787b18
	ctx.lr = 0x82F399F0;
	sub_83787B18(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8387e8e0
	ctx.lr = 0x82F399F8;
	sub_8387E8E0(ctx, base);
	// addi r4,r29,-80
	ctx.r4.s64 = ctx.r29.s64 + -80;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x837b0c10
	ctx.lr = 0x82F39A04;
	sub_837B0C10(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,104(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 104);
	// bl 0x83787b18
	ctx.lr = 0x82F39A10;
	sub_83787B18(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8387e8e0
	ctx.lr = 0x82F39A18;
	sub_8387E8E0(ctx, base);
	// addi r4,r29,-68
	ctx.r4.s64 = ctx.r29.s64 + -68;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x837b0c10
	ctx.lr = 0x82F39A24;
	sub_837B0C10(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,104(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 104);
	// bl 0x83787b18
	ctx.lr = 0x82F39A30;
	sub_83787B18(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8387e8e0
	ctx.lr = 0x82F39A38;
	sub_8387E8E0(ctx, base);
	// addi r4,r29,-56
	ctx.r4.s64 = ctx.r29.s64 + -56;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x837b0c10
	ctx.lr = 0x82F39A44;
	sub_837B0C10(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,104(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 104);
	// bl 0x83787b18
	ctx.lr = 0x82F39A50;
	sub_83787B18(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8387e8e0
	ctx.lr = 0x82F39A58;
	sub_8387E8E0(ctx, base);
	// lwz r11,8(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,5
	cr6.compare<uint32_t>(ctx.r11.u32, 5, xer);
	// bgt cr6,0x82f39ab0
	if (cr6.gt) goto loc_82F39AB0;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x82f39a8c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82F39A8C;
	// bdzf 4*cr6+eq,0x82f39a94
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82F39A94;
	// bdzf 4*cr6+eq,0x82f39a9c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82F39A9C;
	// bdzf 4*cr6+eq,0x82f39aa4
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82F39AA4;
	// bne cr6,0x82f39aac
	if (!cr6.eq) goto loc_82F39AAC;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// b 0x82f39ab0
	goto loc_82F39AB0;
loc_82F39A8C:
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x82f39ab0
	goto loc_82F39AB0;
loc_82F39A94:
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// b 0x82f39ab0
	goto loc_82F39AB0;
loc_82F39A9C:
	// li r4,3
	ctx.r4.s64 = 3;
	// b 0x82f39ab0
	goto loc_82F39AB0;
loc_82F39AA4:
	// li r4,4
	ctx.r4.s64 = 4;
	// b 0x82f39ab0
	goto loc_82F39AB0;
loc_82F39AAC:
	// li r4,5
	ctx.r4.s64 = 5;
loc_82F39AB0:
	// lwz r3,104(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 104);
	// bl 0x837877f0
	ctx.lr = 0x82F39AB8;
	sub_837877F0(ctx, base);
	// lwz r4,104(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 104);
	// lwz r3,88(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 88);
	// bl 0x83787740
	ctx.lr = 0x82F39AC4;
	sub_83787740(ctx, base);
loc_82F39AC4:
	// addi r3,r29,-44
	ctx.r3.s64 = ctx.r29.s64 + -44;
	// bl 0x83787b20
	ctx.lr = 0x82F39ACC;
	sub_83787B20(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r3,108(r30)
	PPC_STORE_U32(ctx.r30.u32 + 108, ctx.r3.u32);
	// beq cr6,0x82f39b4c
	if (cr6.eq) goto loc_82F39B4C;
	// addi r4,r29,-32
	ctx.r4.s64 = ctx.r29.s64 + -32;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x837b0c10
	ctx.lr = 0x82F39AE4;
	sub_837B0C10(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,108(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 108);
	// bl 0x83787b18
	ctx.lr = 0x82F39AF0;
	sub_83787B18(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8387e8e0
	ctx.lr = 0x82F39AF8;
	sub_8387E8E0(ctx, base);
	// addi r4,r29,-28
	ctx.r4.s64 = ctx.r29.s64 + -28;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x837b0c10
	ctx.lr = 0x82F39B04;
	sub_837B0C10(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,108(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 108);
	// bl 0x83787b18
	ctx.lr = 0x82F39B10;
	sub_83787B18(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8387e8e0
	ctx.lr = 0x82F39B18;
	sub_8387E8E0(ctx, base);
	// lwz r11,16(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 16);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// blt cr6,0x82f39b34
	if (cr6.lt) goto loc_82F39B34;
	// bne cr6,0x82f39b38
	if (!cr6.eq) goto loc_82F39B38;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x82f39b38
	goto loc_82F39B38;
loc_82F39B34:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
loc_82F39B38:
	// lwz r3,108(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 108);
	// bl 0x837877f0
	ctx.lr = 0x82F39B40;
	sub_837877F0(ctx, base);
	// lwz r4,108(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 108);
	// lwz r3,88(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 88);
	// bl 0x83787740
	ctx.lr = 0x82F39B4C;
	sub_83787740(ctx, base);
loc_82F39B4C:
	// addi r3,r29,-24
	ctx.r3.s64 = ctx.r29.s64 + -24;
	// bl 0x83787b20
	ctx.lr = 0x82F39B54;
	sub_83787B20(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r3,112(r30)
	PPC_STORE_U32(ctx.r30.u32 + 112, ctx.r3.u32);
	// beq cr6,0x82f39bd4
	if (cr6.eq) goto loc_82F39BD4;
	// addi r4,r29,-12
	ctx.r4.s64 = ctx.r29.s64 + -12;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x837b0c10
	ctx.lr = 0x82F39B6C;
	sub_837B0C10(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,112(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 112);
	// bl 0x83787b18
	ctx.lr = 0x82F39B78;
	sub_83787B18(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8387e8e0
	ctx.lr = 0x82F39B80;
	sub_8387E8E0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x837b0c10
	ctx.lr = 0x82F39B8C;
	sub_837B0C10(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,112(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 112);
	// bl 0x83787b18
	ctx.lr = 0x82F39B98;
	sub_83787B18(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8387e8e0
	ctx.lr = 0x82F39BA0;
	sub_8387E8E0(ctx, base);
	// lwz r11,20(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 20);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// blt cr6,0x82f39bbc
	if (cr6.lt) goto loc_82F39BBC;
	// bne cr6,0x82f39bc0
	if (!cr6.eq) goto loc_82F39BC0;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x82f39bc0
	goto loc_82F39BC0;
loc_82F39BBC:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
loc_82F39BC0:
	// lwz r3,112(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 112);
	// bl 0x837877f0
	ctx.lr = 0x82F39BC8;
	sub_837877F0(ctx, base);
	// lwz r4,112(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 112);
	// lwz r3,88(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 88);
	// bl 0x83787740
	ctx.lr = 0x82F39BD4;
	sub_83787740(ctx, base);
loc_82F39BD4:
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,88(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 88);
	// bl 0x83787180
	ctx.lr = 0x82F39BE0;
	sub_83787180(ctx, base);
loc_82F39BE0:
	// addi r1,r1,768
	ctx.r1.s64 = ctx.r1.s64 + 768;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F39BE8"))) PPC_WEAK_FUNC(sub_82F39BE8);
PPC_FUNC_IMPL(__imp__sub_82F39BE8) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,88(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// bl 0x83787370
	ctx.lr = 0x82F39C08;
	sub_83787370(ctx, base);
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// beq cr6,0x82f39e3c
	if (cr6.eq) goto loc_82F39E3C;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bne cr6,0x82f39c5c
	if (!cr6.eq) goto loc_82F39C5C;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-6460
	ctx.r4.s64 = ctx.r11.s64 + -6460;
	// bl 0x837b0c10
	ctx.lr = 0x82F39C30;
	sub_837B0C10(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x82F39C3C;
	sub_82E88020(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8387e8e0
	ctx.lr = 0x82F39C44;
	sub_8387E8E0(ctx, base);
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
loc_82F39C5C:
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// bne cr6,0x82f39e3c
	if (!cr6.eq) goto loc_82F39E3C;
	// bl 0x831156e8
	ctx.lr = 0x82F39C68;
	sub_831156E8(ctx, base);
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// lwz r10,52(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// addis r10,r10,6
	ctx.r10.s64 = ctx.r10.s64 + 393216;
	// lwz r11,56(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// addi r10,r10,-30316
	ctx.r10.s64 = ctx.r10.s64 + -30316;
	// cmplwi cr6,r11,5
	cr6.compare<uint32_t>(ctx.r11.u32, 5, xer);
	// bgt cr6,0x82f39e3c
	if (cr6.gt) goto loc_82F39E3C;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x82f39d2c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82F39D2C;
	// bdzf 4*cr6+eq,0x82f39d48
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82F39D48;
	// bdzf 4*cr6+eq,0x82f39d60
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82F39D60;
	// bdzf 4*cr6+eq,0x82f39ddc
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82F39DDC;
	// bne cr6,0x82f39e10
	if (!cr6.eq) goto loc_82F39E10;
	// lwz r11,92(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82f39e3c
	if (cr6.eq) goto loc_82F39E3C;
	// lwz r11,52(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// cmplwi cr6,r11,6
	cr6.compare<uint32_t>(ctx.r11.u32, 6, xer);
	// bgt cr6,0x82f39e3c
	if (cr6.gt) goto loc_82F39E3C;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x82f39ce4
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82F39CE4;
	// bdzf 4*cr6+eq,0x82f39cf0
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82F39CF0;
	// bdzf 4*cr6+eq,0x82f39cfc
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82F39CFC;
	// bdzf 4*cr6+eq,0x82f39d08
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82F39D08;
	// bdzf 4*cr6+eq,0x82f39d14
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82F39D14;
	// bne cr6,0x82f39d20
	if (!cr6.eq) goto loc_82F39D20;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// b 0x82f39e3c
	goto loc_82F39E3C;
loc_82F39CE4:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// b 0x82f39e3c
	goto loc_82F39E3C;
loc_82F39CF0:
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// b 0x82f39e3c
	goto loc_82F39E3C;
loc_82F39CFC:
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// b 0x82f39e3c
	goto loc_82F39E3C;
loc_82F39D08:
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// b 0x82f39e3c
	goto loc_82F39E3C;
loc_82F39D14:
	// li r11,5
	ctx.r11.s64 = 5;
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// b 0x82f39e3c
	goto loc_82F39E3C;
loc_82F39D20:
	// li r11,6
	ctx.r11.s64 = 6;
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// b 0x82f39e3c
	goto loc_82F39E3C;
loc_82F39D2C:
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82f39e3c
	if (cr6.eq) goto loc_82F39E3C;
	// lwz r11,52(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// stw r11,24(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24, ctx.r11.u32);
	// b 0x82f39e3c
	goto loc_82F39E3C;
loc_82F39D48:
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82f39e3c
	if (cr6.eq) goto loc_82F39E3C;
	// lwz r11,52(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// stw r11,28(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28, ctx.r11.u32);
	// b 0x82f39e3c
	goto loc_82F39E3C;
loc_82F39D60:
	// lwz r11,104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82f39e3c
	if (cr6.eq) goto loc_82F39E3C;
	// lwz r11,52(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// cmplwi cr6,r11,5
	cr6.compare<uint32_t>(ctx.r11.u32, 5, xer);
	// bgt cr6,0x82f39e3c
	if (cr6.gt) goto loc_82F39E3C;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x82f39da0
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82F39DA0;
	// bdzf 4*cr6+eq,0x82f39dac
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82F39DAC;
	// bdzf 4*cr6+eq,0x82f39db8
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82F39DB8;
	// bdzf 4*cr6+eq,0x82f39dc4
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82F39DC4;
	// bne cr6,0x82f39dd0
	if (!cr6.eq) goto loc_82F39DD0;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
	// b 0x82f39e3c
	goto loc_82F39E3C;
loc_82F39DA0:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
	// b 0x82f39e3c
	goto loc_82F39E3C;
loc_82F39DAC:
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
	// b 0x82f39e3c
	goto loc_82F39E3C;
loc_82F39DB8:
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
	// b 0x82f39e3c
	goto loc_82F39E3C;
loc_82F39DC4:
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
	// b 0x82f39e3c
	goto loc_82F39E3C;
loc_82F39DD0:
	// li r11,5
	ctx.r11.s64 = 5;
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
	// b 0x82f39e3c
	goto loc_82F39E3C;
loc_82F39DDC:
	// lwz r11,108(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82f39e3c
	if (cr6.eq) goto loc_82F39E3C;
	// lwz r11,52(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// blt cr6,0x82f39e04
	if (cr6.lt) goto loc_82F39E04;
	// bne cr6,0x82f39e3c
	if (!cr6.eq) goto loc_82F39E3C;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,16(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16, ctx.r11.u32);
	// b 0x82f39e3c
	goto loc_82F39E3C;
loc_82F39E04:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,16(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16, ctx.r11.u32);
	// b 0x82f39e3c
	goto loc_82F39E3C;
loc_82F39E10:
	// lwz r11,112(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82f39e3c
	if (cr6.eq) goto loc_82F39E3C;
	// lwz r11,52(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// blt cr6,0x82f39e34
	if (cr6.lt) goto loc_82F39E34;
	// bne cr6,0x82f39e3c
	if (!cr6.eq) goto loc_82F39E3C;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82f39e38
	goto loc_82F39E38;
loc_82F39E34:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82F39E38:
	// stw r11,20(r10)
	PPC_STORE_U32(ctx.r10.u32 + 20, ctx.r11.u32);
loc_82F39E3C:
	// li r3,0
	ctx.r3.s64 = 0;
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

__attribute__((alias("__imp__sub_82F39E54"))) PPC_WEAK_FUNC(sub_82F39E54);
PPC_FUNC_IMPL(__imp__sub_82F39E54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F39E58"))) PPC_WEAK_FUNC(sub_82F39E58);
PPC_FUNC_IMPL(__imp__sub_82F39E58) {
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
	// bl 0x830ff290
	ctx.lr = 0x82F39E68;
	sub_830FF290(ctx, base);
	// bl 0x830ff988
	ctx.lr = 0x82F39E6C;
	sub_830FF988(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82f39ed0
	if (cr6.eq) goto loc_82F39ED0;
	// bl 0x82dad2e0
	ctx.lr = 0x82F39E7C;
	sub_82DAD2E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82f39e94
	if (cr6.eq) goto loc_82F39E94;
	// lis r5,4
	ctx.r5.s64 = 262144;
	// li r4,18
	ctx.r4.s64 = 18;
	// ori r5,r5,37856
	ctx.r5.u64 = ctx.r5.u64 | 37856;
	// bl 0x82dae510
	ctx.lr = 0x82F39E94;
	sub_82DAE510(ctx, base);
loc_82F39E94:
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r11,-3564(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// lwz r10,292(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 292);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lwz r9,4456(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4456);
	// cmpwi cr6,r9,10
	cr6.compare<int32_t>(ctx.r9.s32, 10, xer);
	// bne cr6,0x82f39ec0
	if (!cr6.eq) goto loc_82F39EC0;
	// addi r11,r11,-6112
	ctx.r11.s64 = ctx.r11.s64 + -6112;
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// b 0x82f39ec4
	goto loc_82F39EC4;
loc_82F39EC0:
	// addi r4,r11,-6112
	ctx.r4.s64 = ctx.r11.s64 + -6112;
loc_82F39EC4:
	// bl 0x837b0c10
	ctx.lr = 0x82F39EC8;
	sub_837B0C10(ctx, base);
	// bl 0x82d47bb8
	ctx.lr = 0x82F39ECC;
	sub_82D47BB8(ctx, base);
	// bl 0x82d476f0
	ctx.lr = 0x82F39ED0;
	sub_82D476F0(ctx, base);
loc_82F39ED0:
	// bl 0x831021a0
	ctx.lr = 0x82F39ED4;
	sub_831021A0(ctx, base);
	// lis r4,261
	ctx.r4.s64 = 17104896;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,44
	ctx.r4.u64 = ctx.r4.u64 | 44;
	// bl 0x83102a08
	ctx.lr = 0x82F39EE4;
	sub_83102A08(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F39EF4"))) PPC_WEAK_FUNC(sub_82F39EF4);
PPC_FUNC_IMPL(__imp__sub_82F39EF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F39EF8"))) PPC_WEAK_FUNC(sub_82F39EF8);
PPC_FUNC_IMPL(__imp__sub_82F39EF8) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x831156e8
	ctx.lr = 0x82F39F14;
	sub_831156E8(ctx, base);
	// lwz r31,56(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8312b868
	ctx.lr = 0x82F39F20;
	sub_8312B868(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82f39f7c
	if (cr6.eq) goto loc_82F39F7C;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8312b998
	ctx.lr = 0x82F39F38;
	sub_8312B998(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-6088
	ctx.r4.s64 = ctx.r11.s64 + -6088;
	// bl 0x837b0c10
	ctx.lr = 0x82F39F48;
	sub_837B0C10(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82e88020
	ctx.lr = 0x82F39F54;
	sub_82E88020(ctx, base);
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82f39f74
	if (cr6.lt) goto loc_82F39F74;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82F39F74;
	sub_825952B8(ctx, base);
loc_82F39F74:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82f39f80
	goto loc_82F39F80;
loc_82F39F7C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82F39F80:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
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

__attribute__((alias("__imp__sub_82F39F98"))) PPC_WEAK_FUNC(sub_82F39F98);
PPC_FUNC_IMPL(__imp__sub_82F39F98) {
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
	// bl 0x82f42220
	ctx.lr = 0x82F39FB0;
	sub_82F42220(ctx, base);
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// lis r9,-32239
	ctx.r9.s64 = -2112815104;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r8,r10,-5992
	ctx.r8.s64 = ctx.r10.s64 + -5992;
	// addi r7,r9,-17088
	ctx.r7.s64 = ctx.r9.s64 + -17088;
	// stb r11,88(r31)
	PPC_STORE_U8(ctx.r31.u32 + 88, ctx.r11.u8);
	// lis r6,-32254
	ctx.r6.s64 = -2113798144;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// stw r7,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r7.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r6,-22824
	ctx.r5.s64 = ctx.r6.s64 + -22824;
	// stb r11,96(r31)
	PPC_STORE_U8(ctx.r31.u32 + 96, ctx.r11.u8);
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
	// stw r5,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r5.u32);
	// stw r11,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r11.u32);
	// stw r11,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82F3A004"))) PPC_WEAK_FUNC(sub_82F3A004);
PPC_FUNC_IMPL(__imp__sub_82F3A004) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3A008"))) PPC_WEAK_FUNC(sub_82F3A008);
PPC_FUNC_IMPL(__imp__sub_82F3A008) {
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
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// addi r8,r11,-5992
	ctx.r8.s64 = ctx.r11.s64 + -5992;
	// addi r7,r10,-17088
	ctx.r7.s64 = ctx.r10.s64 + -17088;
	// addi r6,r9,-24712
	ctx.r6.s64 = ctx.r9.s64 + -24712;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// stw r7,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r7.u32);
	// addi r30,r3,92
	ctx.r30.s64 = ctx.r3.s64 + 92;
	// stw r6,92(r3)
	PPC_STORE_U32(ctx.r3.u32 + 92, ctx.r6.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825e0cf8
	ctx.lr = 0x82F3A050;
	sub_825E0CF8(ctx, base);
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82f3a07c
	if (cr6.eq) goto loc_82F3A07C;
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r5,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r5.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// bl 0x8353f3b8
	ctx.lr = 0x82F3A074;
	sub_8353F3B8(ctx, base);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r9.u32);
loc_82F3A07C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f42278
	ctx.lr = 0x82F3A084;
	sub_82F42278(ctx, base);
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

__attribute__((alias("__imp__sub_82F3A09C"))) PPC_WEAK_FUNC(sub_82F3A09C);
PPC_FUNC_IMPL(__imp__sub_82F3A09C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3A0A0"))) PPC_WEAK_FUNC(sub_82F3A0A0);
PPC_FUNC_IMPL(__imp__sub_82F3A0A0) {
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
	// bl 0x82f3a008
	ctx.lr = 0x82F3A0C0;
	sub_82F3A008(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82f3a0d8
	if (cr6.eq) goto loc_82F3A0D8;
	// bl 0x82416268
	ctx.lr = 0x82F3A0D4;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82F3A0D8:
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

__attribute__((alias("__imp__sub_82F3A0F0"))) PPC_WEAK_FUNC(sub_82F3A0F0);
PPC_FUNC_IMPL(__imp__sub_82F3A0F0) {
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
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82f3a114
	if (cr6.lt) goto loc_82F3A114;
	// lwz r31,0(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82f3a118
	goto loc_82F3A118;
loc_82F3A114:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_82F3A118:
	// li r11,31
	ctx.r11.s64 = 31;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,112
	ctx.r4.s64 = 112;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82F3A130;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82f3a148
	if (cr6.eq) goto loc_82F3A148;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82f39f98
	ctx.lr = 0x82F3A140;
	sub_82F39F98(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82f3a14c
	if (!cr6.eq) goto loc_82F3A14C;
loc_82F3A148:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82F3A14C:
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

__attribute__((alias("__imp__sub_82F3A160"))) PPC_WEAK_FUNC(sub_82F3A160);
PPC_FUNC_IMPL(__imp__sub_82F3A160) {
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
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-5440
	ctx.r9.s64 = ctx.r11.s64 + -5440;
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
	// bl 0x82f42278
	ctx.lr = 0x82F3A198;
	sub_82F42278(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82f3a1b0
	if (cr6.eq) goto loc_82F3A1B0;
	// bl 0x82416268
	ctx.lr = 0x82F3A1AC;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82F3A1B0:
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

__attribute__((alias("__imp__sub_82F3A1C8"))) PPC_WEAK_FUNC(sub_82F3A1C8);
PPC_FUNC_IMPL(__imp__sub_82F3A1C8) {
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
	// li r11,31
	ctx.r11.s64 = 31;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,92
	ctx.r4.s64 = 92;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82F3A1F8;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82f3a234
	if (cr6.eq) goto loc_82F3A234;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82f42220
	ctx.lr = 0x82F3A20C;
	sub_82F42220(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-5440
	ctx.r9.s64 = ctx.r11.s64 + -5440;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r8,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r8.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r7,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r7.u32);
	// b 0x82f3a238
	goto loc_82F3A238;
loc_82F3A234:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82F3A238:
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

__attribute__((alias("__imp__sub_82F3A250"))) PPC_WEAK_FUNC(sub_82F3A250);
PPC_FUNC_IMPL(__imp__sub_82F3A250) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82f3a260
	if (cr6.lt) goto loc_82F3A260;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_82F3A260:
	// b 0x82f3a1c8
	sub_82F3A1C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3A264"))) PPC_WEAK_FUNC(sub_82F3A264);
PPC_FUNC_IMPL(__imp__sub_82F3A264) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3A268"))) PPC_WEAK_FUNC(sub_82F3A268);
PPC_FUNC_IMPL(__imp__sub_82F3A268) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82F3A270;
	__savegprlr_28(ctx, base);
	// stfd f30,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f30.u64);
	// stfd f31,-48(r1)
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,68
	ctx.r4.s64 = 68;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82F3A298;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82f3a2bc
	if (cr6.eq) goto loc_82F3A2BC;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// lfs f2,30444(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 30444);
	ctx.f2.f64 = double(temp.f32);
	// fmr f1,f2
	ctx.f1.f64 = ctx.f2.f64;
	// bl 0x837872a0
	ctx.lr = 0x82F3A2B8;
	sub_837872A0(ctx, base);
	// b 0x82f3a2c0
	goto loc_82F3A2C0;
loc_82F3A2BC:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_82F3A2C0:
	// li r11,15
	ctx.r11.s64 = 15;
	// stw r3,88(r30)
	PPC_STORE_U32(ctx.r30.u32 + 88, ctx.r3.u32);
	// stw r29,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r29.u32);
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// stw r11,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r11.u32);
	// stb r29,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r29.u8);
	// addi r31,r10,-5588
	ctx.r31.s64 = ctx.r10.s64 + -5588;
	// addi r3,r31,-252
	ctx.r3.s64 = ctx.r31.s64 + -252;
	// bl 0x83787b20
	ctx.lr = 0x82F3A2E4;
	sub_83787B20(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,88(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 88);
	// bl 0x83787740
	ctx.lr = 0x82F3A2F0;
	sub_83787740(ctx, base);
	// lwz r9,88(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 88);
	// addi r4,r31,-240
	ctx.r4.s64 = ctx.r31.s64 + -240;
	// li r5,10
	ctx.r5.s64 = 10;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r28,0(r8)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// bl 0x8259cc28
	ctx.lr = 0x82F3A30C;
	sub_8259CC28(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// bl 0x83787b18
	ctx.lr = 0x82F3A318;
	sub_83787B18(ctx, base);
	// addi r4,r31,-228
	ctx.r4.s64 = ctx.r31.s64 + -228;
	// li r5,3
	ctx.r5.s64 = 3;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8259cc28
	ctx.lr = 0x82F3A328;
	sub_8259CC28(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// bl 0x83787b18
	ctx.lr = 0x82F3A334;
	sub_83787B18(ctx, base);
	// addi r4,r31,-224
	ctx.r4.s64 = ctx.r31.s64 + -224;
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8259cc28
	ctx.lr = 0x82F3A344;
	sub_8259CC28(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// bl 0x83787b18
	ctx.lr = 0x82F3A350;
	sub_83787B18(ctx, base);
	// addi r4,r31,-220
	ctx.r4.s64 = ctx.r31.s64 + -220;
	// li r5,13
	ctx.r5.s64 = 13;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8259cc28
	ctx.lr = 0x82F3A360;
	sub_8259CC28(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// bl 0x83787b18
	ctx.lr = 0x82F3A36C;
	sub_83787B18(ctx, base);
	// addi r4,r31,-204
	ctx.r4.s64 = ctx.r31.s64 + -204;
	// li r5,15
	ctx.r5.s64 = 15;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8259cc28
	ctx.lr = 0x82F3A37C;
	sub_8259CC28(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// bl 0x83787b18
	ctx.lr = 0x82F3A388;
	sub_83787B18(ctx, base);
	// addi r4,r31,-188
	ctx.r4.s64 = ctx.r31.s64 + -188;
	// li r5,11
	ctx.r5.s64 = 11;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8259cc28
	ctx.lr = 0x82F3A398;
	sub_8259CC28(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// bl 0x83787b18
	ctx.lr = 0x82F3A3A4;
	sub_83787B18(ctx, base);
	// addi r3,r31,-176
	ctx.r3.s64 = ctx.r31.s64 + -176;
	// bl 0x83787b20
	ctx.lr = 0x82F3A3AC;
	sub_83787B20(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,88(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 88);
	// bl 0x83787740
	ctx.lr = 0x82F3A3B8;
	sub_83787740(ctx, base);
	// lwz r7,88(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 88);
	// addi r4,r31,-156
	ctx.r4.s64 = ctx.r31.s64 + -156;
	// li r5,3
	ctx.r5.s64 = 3;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lwz r6,4(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// lwz r28,4(r6)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// bl 0x8259cc28
	ctx.lr = 0x82F3A3D4;
	sub_8259CC28(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// bl 0x83787b18
	ctx.lr = 0x82F3A3E0;
	sub_83787B18(ctx, base);
	// li r5,3
	ctx.r5.s64 = 3;
	// addi r4,r31,-152
	ctx.r4.s64 = ctx.r31.s64 + -152;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8259cc28
	ctx.lr = 0x82F3A3F0;
	sub_8259CC28(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// bl 0x83787b18
	ctx.lr = 0x82F3A3FC;
	sub_83787B18(ctx, base);
	// addi r4,r31,-148
	ctx.r4.s64 = ctx.r31.s64 + -148;
	// li r5,3
	ctx.r5.s64 = 3;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8259cc28
	ctx.lr = 0x82F3A40C;
	sub_8259CC28(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// bl 0x83787b18
	ctx.lr = 0x82F3A418;
	sub_83787B18(ctx, base);
	// addi r4,r31,-144
	ctx.r4.s64 = ctx.r31.s64 + -144;
	// li r5,3
	ctx.r5.s64 = 3;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8259cc28
	ctx.lr = 0x82F3A428;
	sub_8259CC28(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// bl 0x83787b18
	ctx.lr = 0x82F3A434;
	sub_83787B18(ctx, base);
	// addi r4,r31,-140
	ctx.r4.s64 = ctx.r31.s64 + -140;
	// li r5,3
	ctx.r5.s64 = 3;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8259cc28
	ctx.lr = 0x82F3A444;
	sub_8259CC28(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// bl 0x83787b18
	ctx.lr = 0x82F3A450;
	sub_83787B18(ctx, base);
	// addi r4,r31,-136
	ctx.r4.s64 = ctx.r31.s64 + -136;
	// li r5,3
	ctx.r5.s64 = 3;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8259cc28
	ctx.lr = 0x82F3A460;
	sub_8259CC28(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// bl 0x83787b18
	ctx.lr = 0x82F3A46C;
	sub_83787B18(ctx, base);
	// addi r4,r31,-132
	ctx.r4.s64 = ctx.r31.s64 + -132;
	// li r5,3
	ctx.r5.s64 = 3;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8259cc28
	ctx.lr = 0x82F3A47C;
	sub_8259CC28(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// bl 0x83787b18
	ctx.lr = 0x82F3A488;
	sub_83787B18(ctx, base);
	// addi r4,r31,-128
	ctx.r4.s64 = ctx.r31.s64 + -128;
	// li r5,3
	ctx.r5.s64 = 3;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8259cc28
	ctx.lr = 0x82F3A498;
	sub_8259CC28(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// bl 0x83787b18
	ctx.lr = 0x82F3A4A4;
	sub_83787B18(ctx, base);
	// addi r4,r31,-124
	ctx.r4.s64 = ctx.r31.s64 + -124;
	// li r5,3
	ctx.r5.s64 = 3;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8259cc28
	ctx.lr = 0x82F3A4B4;
	sub_8259CC28(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// bl 0x83787b18
	ctx.lr = 0x82F3A4C0;
	sub_83787B18(ctx, base);
	// addi r4,r31,-120
	ctx.r4.s64 = ctx.r31.s64 + -120;
	// li r5,3
	ctx.r5.s64 = 3;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8259cc28
	ctx.lr = 0x82F3A4D0;
	sub_8259CC28(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// bl 0x83787b18
	ctx.lr = 0x82F3A4DC;
	sub_83787B18(ctx, base);
	// addi r4,r31,-116
	ctx.r4.s64 = ctx.r31.s64 + -116;
	// li r5,3
	ctx.r5.s64 = 3;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8259cc28
	ctx.lr = 0x82F3A4EC;
	sub_8259CC28(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83787b18
	ctx.lr = 0x82F3A4F8;
	sub_83787B18(ctx, base);
	// addi r3,r31,-112
	ctx.r3.s64 = ctx.r31.s64 + -112;
	// bl 0x83787b20
	ctx.lr = 0x82F3A500;
	sub_83787B20(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,88(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 88);
	// bl 0x83787740
	ctx.lr = 0x82F3A50C;
	sub_83787740(ctx, base);
	// lwz r11,88(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 88);
	// addi r4,r31,-96
	ctx.r4.s64 = ctx.r31.s64 + -96;
	// li r5,3
	ctx.r5.s64 = 3;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r28,8(r10)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// bl 0x8259cc28
	ctx.lr = 0x82F3A528;
	sub_8259CC28(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// bl 0x83787b18
	ctx.lr = 0x82F3A534;
	sub_83787B18(ctx, base);
	// addi r4,r31,-92
	ctx.r4.s64 = ctx.r31.s64 + -92;
	// li r5,3
	ctx.r5.s64 = 3;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8259cc28
	ctx.lr = 0x82F3A544;
	sub_8259CC28(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// bl 0x83787b18
	ctx.lr = 0x82F3A550;
	sub_83787B18(ctx, base);
	// addi r4,r31,-88
	ctx.r4.s64 = ctx.r31.s64 + -88;
	// li r5,3
	ctx.r5.s64 = 3;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8259cc28
	ctx.lr = 0x82F3A560;
	sub_8259CC28(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// bl 0x83787b18
	ctx.lr = 0x82F3A56C;
	sub_83787B18(ctx, base);
	// addi r4,r31,-84
	ctx.r4.s64 = ctx.r31.s64 + -84;
	// li r5,3
	ctx.r5.s64 = 3;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8259cc28
	ctx.lr = 0x82F3A57C;
	sub_8259CC28(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// bl 0x83787b18
	ctx.lr = 0x82F3A588;
	sub_83787B18(ctx, base);
	// addi r4,r31,-80
	ctx.r4.s64 = ctx.r31.s64 + -80;
	// li r5,3
	ctx.r5.s64 = 3;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8259cc28
	ctx.lr = 0x82F3A598;
	sub_8259CC28(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// bl 0x83787b18
	ctx.lr = 0x82F3A5A4;
	sub_83787B18(ctx, base);
	// addi r4,r31,-76
	ctx.r4.s64 = ctx.r31.s64 + -76;
	// li r5,3
	ctx.r5.s64 = 3;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8259cc28
	ctx.lr = 0x82F3A5B4;
	sub_8259CC28(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// bl 0x83787b18
	ctx.lr = 0x82F3A5C0;
	sub_83787B18(ctx, base);
	// addi r4,r31,-72
	ctx.r4.s64 = ctx.r31.s64 + -72;
	// li r5,3
	ctx.r5.s64 = 3;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8259cc28
	ctx.lr = 0x82F3A5D0;
	sub_8259CC28(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// bl 0x83787b18
	ctx.lr = 0x82F3A5DC;
	sub_83787B18(ctx, base);
	// addi r4,r31,-68
	ctx.r4.s64 = ctx.r31.s64 + -68;
	// li r5,3
	ctx.r5.s64 = 3;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8259cc28
	ctx.lr = 0x82F3A5EC;
	sub_8259CC28(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// bl 0x83787b18
	ctx.lr = 0x82F3A5F8;
	sub_83787B18(ctx, base);
	// addi r4,r31,-64
	ctx.r4.s64 = ctx.r31.s64 + -64;
	// li r5,3
	ctx.r5.s64 = 3;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8259cc28
	ctx.lr = 0x82F3A608;
	sub_8259CC28(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// bl 0x83787b18
	ctx.lr = 0x82F3A614;
	sub_83787B18(ctx, base);
	// addi r4,r31,-60
	ctx.r4.s64 = ctx.r31.s64 + -60;
	// li r5,3
	ctx.r5.s64 = 3;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8259cc28
	ctx.lr = 0x82F3A624;
	sub_8259CC28(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// bl 0x83787b18
	ctx.lr = 0x82F3A630;
	sub_83787B18(ctx, base);
	// addi r4,r31,-56
	ctx.r4.s64 = ctx.r31.s64 + -56;
	// li r5,3
	ctx.r5.s64 = 3;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8259cc28
	ctx.lr = 0x82F3A640;
	sub_8259CC28(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// bl 0x83787b18
	ctx.lr = 0x82F3A64C;
	sub_83787B18(ctx, base);
	// addi r3,r31,-52
	ctx.r3.s64 = ctx.r31.s64 + -52;
	// bl 0x83787b20
	ctx.lr = 0x82F3A654;
	sub_83787B20(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,88(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 88);
	// bl 0x83787740
	ctx.lr = 0x82F3A660;
	sub_83787740(ctx, base);
	// lwz r9,88(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 88);
	// addi r4,r31,-40
	ctx.r4.s64 = ctx.r31.s64 + -40;
	// li r5,3
	ctx.r5.s64 = 3;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r28,12(r8)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// bl 0x8259cc28
	ctx.lr = 0x82F3A67C;
	sub_8259CC28(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// bl 0x83787b18
	ctx.lr = 0x82F3A688;
	sub_83787B18(ctx, base);
	// addi r4,r31,-36
	ctx.r4.s64 = ctx.r31.s64 + -36;
	// li r5,3
	ctx.r5.s64 = 3;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8259cc28
	ctx.lr = 0x82F3A698;
	sub_8259CC28(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// bl 0x83787b18
	ctx.lr = 0x82F3A6A4;
	sub_83787B18(ctx, base);
	// addi r4,r31,-32
	ctx.r4.s64 = ctx.r31.s64 + -32;
	// li r5,3
	ctx.r5.s64 = 3;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8259cc28
	ctx.lr = 0x82F3A6B4;
	sub_8259CC28(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// bl 0x83787b18
	ctx.lr = 0x82F3A6C0;
	sub_83787B18(ctx, base);
	// addi r4,r31,-28
	ctx.r4.s64 = ctx.r31.s64 + -28;
	// li r5,3
	ctx.r5.s64 = 3;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8259cc28
	ctx.lr = 0x82F3A6D0;
	sub_8259CC28(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// bl 0x83787b18
	ctx.lr = 0x82F3A6DC;
	sub_83787B18(ctx, base);
	// addi r4,r31,-24
	ctx.r4.s64 = ctx.r31.s64 + -24;
	// li r5,3
	ctx.r5.s64 = 3;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8259cc28
	ctx.lr = 0x82F3A6EC;
	sub_8259CC28(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// bl 0x83787b18
	ctx.lr = 0x82F3A6F8;
	sub_83787B18(ctx, base);
	// addi r4,r31,-20
	ctx.r4.s64 = ctx.r31.s64 + -20;
	// li r5,3
	ctx.r5.s64 = 3;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8259cc28
	ctx.lr = 0x82F3A708;
	sub_8259CC28(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// bl 0x83787b18
	ctx.lr = 0x82F3A714;
	sub_83787B18(ctx, base);
	// addi r4,r31,-16
	ctx.r4.s64 = ctx.r31.s64 + -16;
	// li r5,3
	ctx.r5.s64 = 3;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8259cc28
	ctx.lr = 0x82F3A724;
	sub_8259CC28(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// bl 0x83787b18
	ctx.lr = 0x82F3A730;
	sub_83787B18(ctx, base);
	// addi r4,r31,-12
	ctx.r4.s64 = ctx.r31.s64 + -12;
	// li r5,3
	ctx.r5.s64 = 3;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8259cc28
	ctx.lr = 0x82F3A740;
	sub_8259CC28(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// bl 0x83787b18
	ctx.lr = 0x82F3A74C;
	sub_83787B18(ctx, base);
	// addi r4,r31,-8
	ctx.r4.s64 = ctx.r31.s64 + -8;
	// li r5,3
	ctx.r5.s64 = 3;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8259cc28
	ctx.lr = 0x82F3A75C;
	sub_8259CC28(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// bl 0x83787b18
	ctx.lr = 0x82F3A768;
	sub_83787B18(ctx, base);
	// addi r4,r31,-4
	ctx.r4.s64 = ctx.r31.s64 + -4;
	// li r5,3
	ctx.r5.s64 = 3;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8259cc28
	ctx.lr = 0x82F3A778;
	sub_8259CC28(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// bl 0x83787b18
	ctx.lr = 0x82F3A784;
	sub_83787B18(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r5,3
	ctx.r5.s64 = 3;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8259cc28
	ctx.lr = 0x82F3A794;
	sub_8259CC28(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83787b18
	ctx.lr = 0x82F3A7A0;
	sub_83787B18(ctx, base);
	// lis r7,-32254
	ctx.r7.s64 = -2113798144;
	// stb r29,100(r1)
	PPC_STORE_U8(ctx.r1.u32 + 100, ctx.r29.u8);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r6,r7,-24672
	ctx.r6.s64 = ctx.r7.s64 + -24672;
	// stw r29,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r29.u32);
	// stw r29,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r29.u32);
	// stw r29,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r29.u32);
	// stw r6,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r6.u32);
	// bl 0x825a9e30
	ctx.lr = 0x82F3A7C4;
	sub_825A9E30(ctx, base);
	// lbz r4,100(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + 100);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x82f3a7d8
	if (!cr6.eq) goto loc_82F3A7D8;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x825a9e30
	ctx.lr = 0x82F3A7D8;
	sub_825A9E30(ctx, base);
loc_82F3A7D8:
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82f3a7f4
	if (!cr6.eq) goto loc_82F3A7F4;
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r11,r11,140
	ctx.r11.s64 = ctx.r11.s64 + 140;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
loc_82F3A7F4:
	// lwz r10,88(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 88);
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// lbz r11,64(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 64);
	// addi r4,r11,-1
	ctx.r4.s64 = ctx.r11.s64 + -1;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r3,0(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// bl 0x837877f0
	ctx.lr = 0x82F3A810;
	sub_837877F0(ctx, base);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lfs f0,68(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	ctx.f0.f64 = double(temp.f32);
	// lis r7,-32242
	ctx.r7.s64 = -2113011712;
	// lwz r6,88(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 88);
	// lfs f31,8976(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 8976);
	ctx.f31.f64 = double(temp.f32);
	// fadds f13,f0,f31
	ctx.f13.f64 = double(float(ctx.f0.f64 + ctx.f31.f64));
	// lfs f30,-23848(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -23848);
	ctx.f30.f64 = double(temp.f32);
	// lwz r5,4(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// lwz r3,4(r5)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// fmuls f12,f13,f30
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f30.f64));
	// fctiwz f11,f12
	ctx.f11.s64 = (ctx.f12.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f12.f64));
	// stfd f11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f11.u64);
	// lwz r4,92(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// bl 0x837877f0
	ctx.lr = 0x82F3A848;
	sub_837877F0(ctx, base);
	// lfs f10,72(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	ctx.f10.f64 = double(temp.f32);
	// lwz r4,88(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 88);
	// fadds f9,f10,f31
	ctx.f9.f64 = double(float(ctx.f10.f64 + ctx.f31.f64));
	// lwz r3,4(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// fmuls f8,f9,f30
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f30.f64));
	// fctiwz f7,f8
	ctx.f7.s64 = (ctx.f8.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f8.f64));
	// stfd f7,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f7.u64);
	// lwz r4,92(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// bl 0x837877f0
	ctx.lr = 0x82F3A870;
	sub_837877F0(ctx, base);
	// lfs f6,76(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	ctx.f6.f64 = double(temp.f32);
	// lwz r11,88(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 88);
	// fadds f5,f6,f31
	ctx.f5.f64 = double(float(ctx.f6.f64 + ctx.f31.f64));
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r3,12(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// fmuls f4,f5,f30
	ctx.f4.f64 = double(float(ctx.f5.f64 * ctx.f30.f64));
	// fctiwz f3,f4
	ctx.f3.s64 = (ctx.f4.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f4.f64));
	// stfd f3,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f3.u64);
	// lwz r4,92(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// bl 0x837877f0
	ctx.lr = 0x82F3A898;
	sub_837877F0(ctx, base);
	// lwz r9,112(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82f3a8b0
	if (cr6.eq) goto loc_82F3A8B0;
	// lwz r3,104(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// bl 0x825a5c98
	ctx.lr = 0x82F3A8AC;
	sub_825A5C98(ctx, base);
	// stw r29,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r29.u32);
loc_82F3A8B0:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r10,r11,-24712
	ctx.r10.s64 = ctx.r11.s64 + -24712;
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// bl 0x825e0cf8
	ctx.lr = 0x82F3A8C4;
	sub_825E0CF8(ctx, base);
	// lwz r4,104(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82f3a8e8
	if (cr6.eq) goto loc_82F3A8E8;
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
	ctx.lr = 0x82F3A8E4;
	sub_8353F3B8(ctx, base);
	// stw r29,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r29.u32);
loc_82F3A8E8:
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82f3a908
	if (cr6.lt) goto loc_82F3A908;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82F3A908;
	sub_825952B8(ctx, base);
loc_82F3A908:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// lfd f30,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f31,-48(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3A918"))) PPC_WEAK_FUNC(sub_82F3A918);
PPC_FUNC_IMPL(__imp__sub_82F3A918) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82F3A920;
	__savegprlr_29(ctx, base);
	// stfd f29,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f29.u64);
	// stfd f30,-48(r1)
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f30.u64);
	// stfd f31,-40(r1)
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,88(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// bl 0x83787370
	ctx.lr = 0x82F3A940;
	sub_83787370(ctx, base);
	// lwz r8,88(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r10,r11,-24672
	ctx.r10.s64 = ctx.r11.s64 + -24672;
	// lwz r7,4(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lfs f0,20048(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 20048);
	ctx.f0.f64 = double(temp.f32);
	// lwz r6,4(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// lwz r5,8(r7)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// lwz r4,12(r7)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	// lwz r9,52(r6)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + 52);
	// lwz r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// lwz r8,52(r5)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r5.u32 + 52);
	// extsw r7,r9
	ctx.r7.s64 = ctx.r9.s32;
	// lwz r6,52(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 52);
	// extsw r5,r8
	ctx.r5.s64 = ctx.r8.s32;
	// std r7,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r7.u64);
	// lfd f13,88(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// extsw r4,r6
	ctx.r4.s64 = ctx.r6.s32;
	// std r5,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r5.u64);
	// lfd f12,88(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// std r4,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r4.u64);
	// lfd f11,88(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f8,f13
	ctx.f8.f64 = double(ctx.f13.s64);
	// lwz r11,52(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// fcfid f9,f12
	ctx.f9.f64 = double(ctx.f12.s64);
	// stb r30,100(r1)
	PPC_STORE_U8(ctx.r1.u32 + 100, ctx.r30.u8);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// stw r30,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r30.u32);
	// stw r30,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r30.u32);
	// frsp f5,f8
	ctx.f5.f64 = double(float(ctx.f8.f64));
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r30.u32);
	// addi r29,r11,1
	ctx.r29.s64 = ctx.r11.s64 + 1;
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// frsp f6,f9
	ctx.f6.f64 = double(float(ctx.f9.f64));
	// frsp f7,f10
	ctx.f7.f64 = double(float(ctx.f10.f64));
	// fmuls f31,f5,f0
	ctx.f31.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// fmuls f30,f6,f0
	ctx.f30.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// fmuls f29,f7,f0
	ctx.f29.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// bl 0x825a9e30
	ctx.lr = 0x82F3A9E4;
	sub_825A9E30(ctx, base);
	// lbz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 100);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82f3a9f8
	if (!cr6.eq) goto loc_82F3A9F8;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x825a9e30
	ctx.lr = 0x82F3A9F8;
	sub_825A9E30(ctx, base);
loc_82F3A9F8:
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82f3aa14
	if (!cr6.eq) goto loc_82F3AA14;
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r11,r11,140
	ctx.r11.s64 = ctx.r11.s64 + 140;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
loc_82F3AA14:
	// stfs f31,68(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 68, temp.u32);
	// stb r29,64(r11)
	PPC_STORE_U8(ctx.r11.u32 + 64, ctx.r29.u8);
	// stfs f30,72(r11)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r11.u32 + 72, temp.u32);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// stfs f29,76(r11)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r11.u32 + 76, temp.u32);
	// lwz r8,112(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x82f3aa40
	if (cr6.eq) goto loc_82F3AA40;
	// lwz r3,104(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// bl 0x825a5c98
	ctx.lr = 0x82F3AA3C;
	sub_825A5C98(ctx, base);
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r30.u32);
loc_82F3AA40:
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x82f3aac0
	if (!cr6.eq) goto loc_82F3AAC0;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r11,r11,-5556
	ctx.r11.s64 = ctx.r11.s64 + -5556;
	// addi r4,r11,-28
	ctx.r4.s64 = ctx.r11.s64 + -28;
	// bl 0x837b0c10
	ctx.lr = 0x82F3AA64;
	sub_837B0C10(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x82F3AA70;
	sub_82E88020(ctx, base);
	// lwz r10,148(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82f3aa90
	if (cr6.lt) goto loc_82F3AA90;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82F3AA90;
	sub_825952B8(ctx, base);
loc_82F3AA90:
	// li r11,15
	ctx.r11.s64 = 15;
	// stw r30,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r30.u32);
	// stb r30,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r30.u8);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r11,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r11.u32);
	// bl 0x825a8d40
	ctx.lr = 0x82F3AAA8;
	sub_825A8D40(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// lfd f29,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f30,-48(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f31,-40(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82F3AAC0:
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bne cr6,0x82f3ab0c
	if (!cr6.eq) goto loc_82F3AB0C;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// addi r4,r11,-5556
	ctx.r4.s64 = ctx.r11.s64 + -5556;
	// bl 0x837b0c10
	ctx.lr = 0x82F3AAD8;
	sub_837B0C10(ctx, base);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x82F3AAE4;
	sub_82E88020(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x8387e8e0
	ctx.lr = 0x82F3AAEC;
	sub_8387E8E0(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x825a8d40
	ctx.lr = 0x82F3AAF4;
	sub_825A8D40(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// lfd f29,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f30,-48(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f31,-40(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82F3AB0C:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x825a8d40
	ctx.lr = 0x82F3AB14;
	sub_825A8D40(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// lfd f29,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f30,-48(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f31,-40(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3AB2C"))) PPC_WEAK_FUNC(sub_82F3AB2C);
PPC_FUNC_IMPL(__imp__sub_82F3AB2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3AB30"))) PPC_WEAK_FUNC(sub_82F3AB30);
PPC_FUNC_IMPL(__imp__sub_82F3AB30) {
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
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-5136
	ctx.r9.s64 = ctx.r11.s64 + -5136;
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
	// bl 0x82f42278
	ctx.lr = 0x82F3AB68;
	sub_82F42278(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82f3ab80
	if (cr6.eq) goto loc_82F3AB80;
	// bl 0x82416268
	ctx.lr = 0x82F3AB7C;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82F3AB80:
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

__attribute__((alias("__imp__sub_82F3AB98"))) PPC_WEAK_FUNC(sub_82F3AB98);
PPC_FUNC_IMPL(__imp__sub_82F3AB98) {
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
	// li r11,31
	ctx.r11.s64 = 31;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,92
	ctx.r4.s64 = 92;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82F3ABC8;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82f3ac04
	if (cr6.eq) goto loc_82F3AC04;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82f42220
	ctx.lr = 0x82F3ABDC;
	sub_82F42220(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-5136
	ctx.r9.s64 = ctx.r11.s64 + -5136;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r8,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r8.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r7,88(r31)
	PPC_STORE_U8(ctx.r31.u32 + 88, ctx.r7.u8);
	// b 0x82f3ac08
	goto loc_82F3AC08;
loc_82F3AC04:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82F3AC08:
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

__attribute__((alias("__imp__sub_82F3AC20"))) PPC_WEAK_FUNC(sub_82F3AC20);
PPC_FUNC_IMPL(__imp__sub_82F3AC20) {
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
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r31,r11,-5240
	ctx.r31.s64 = ctx.r11.s64 + -5240;
	// addi r4,r31,-40
	ctx.r4.s64 = ctx.r31.s64 + -40;
	// bl 0x82f42480
	ctx.lr = 0x82F3AC48;
	sub_82F42480(ctx, base);
	// addi r4,r31,-24
	ctx.r4.s64 = ctx.r31.s64 + -24;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82f42480
	ctx.lr = 0x82F3AC54;
	sub_82F42480(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82f42480
	ctx.lr = 0x82F3AC60;
	sub_82F42480(ctx, base);
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

__attribute__((alias("__imp__sub_82F3AC78"))) PPC_WEAK_FUNC(sub_82F3AC78);
PPC_FUNC_IMPL(__imp__sub_82F3AC78) {
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
	// bl 0x830ff290
	ctx.lr = 0x82F3AC90;
	sub_830FF290(ctx, base);
	// li r11,69
	ctx.r11.s64 = 69;
	// stw r11,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
	// lbz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r31.u32 + 88);
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

__attribute__((alias("__imp__sub_82F3ACB0"))) PPC_WEAK_FUNC(sub_82F3ACB0);
PPC_FUNC_IMPL(__imp__sub_82F3ACB0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82f3acc0
	if (cr6.lt) goto loc_82F3ACC0;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_82F3ACC0:
	// b 0x82f3ab98
	sub_82F3AB98(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3ACC4"))) PPC_WEAK_FUNC(sub_82F3ACC4);
PPC_FUNC_IMPL(__imp__sub_82F3ACC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3ACC8"))) PPC_WEAK_FUNC(sub_82F3ACC8);
PPC_FUNC_IMPL(__imp__sub_82F3ACC8) {
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
	// lis r10,261
	ctx.r10.s64 = 17104896;
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// ori r9,r10,5
	ctx.r9.u64 = ctx.r10.u64 | 5;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// blt cr6,0x82f3ad34
	if (cr6.lt) goto loc_82F3AD34;
	// lis r10,261
	ctx.r10.s64 = 17104896;
	// ori r9,r10,6
	ctx.r9.u64 = ctx.r10.u64 | 6;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// bgt cr6,0x82f3ad34
	if (cr6.gt) goto loc_82F3AD34;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-5288
	ctx.r4.s64 = ctx.r11.s64 + -5288;
	// bl 0x837b0c10
	ctx.lr = 0x82F3AD18;
	sub_837B0C10(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x82F3AD24;
	sub_82E88020(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stb r10,88(r31)
	PPC_STORE_U8(ctx.r31.u32 + 88, ctx.r10.u8);
	// bl 0x8387e8e0
	ctx.lr = 0x82F3AD34;
	sub_8387E8E0(ctx, base);
loc_82F3AD34:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83824d80
	ctx.lr = 0x82F3AD40;
	sub_83824D80(ctx, base);
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

__attribute__((alias("__imp__sub_82F3AD58"))) PPC_WEAK_FUNC(sub_82F3AD58);
PPC_FUNC_IMPL(__imp__sub_82F3AD58) {
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
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-4864
	ctx.r9.s64 = ctx.r11.s64 + -4864;
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
	// bl 0x82f42278
	ctx.lr = 0x82F3AD90;
	sub_82F42278(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82f3ada8
	if (cr6.eq) goto loc_82F3ADA8;
	// bl 0x82416268
	ctx.lr = 0x82F3ADA4;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82F3ADA8:
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

__attribute__((alias("__imp__sub_82F3ADC0"))) PPC_WEAK_FUNC(sub_82F3ADC0);
PPC_FUNC_IMPL(__imp__sub_82F3ADC0) {
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
	// li r11,31
	ctx.r11.s64 = 31;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,92
	ctx.r4.s64 = 92;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82F3ADF0;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82f3ae2c
	if (cr6.eq) goto loc_82F3AE2C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82f42220
	ctx.lr = 0x82F3AE04;
	sub_82F42220(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-4864
	ctx.r9.s64 = ctx.r11.s64 + -4864;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r8,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r8.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r7,88(r31)
	PPC_STORE_U8(ctx.r31.u32 + 88, ctx.r7.u8);
	// b 0x82f3ae30
	goto loc_82F3AE30;
loc_82F3AE2C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82F3AE30:
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

__attribute__((alias("__imp__sub_82F3AE48"))) PPC_WEAK_FUNC(sub_82F3AE48);
PPC_FUNC_IMPL(__imp__sub_82F3AE48) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r11,261
	ctx.r11.s64 = 17104896;
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// ori r9,r11,15
	ctx.r9.u64 = ctx.r11.u64 | 15;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bne cr6,0x82f3ae64
	if (!cr6.eq) goto loc_82F3AE64;
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,88(r3)
	PPC_STORE_U8(ctx.r3.u32 + 88, ctx.r11.u8);
loc_82F3AE64:
	// b 0x83824d80
	sub_83824D80(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3AE68"))) PPC_WEAK_FUNC(sub_82F3AE68);
PPC_FUNC_IMPL(__imp__sub_82F3AE68) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82f3ae78
	if (cr6.lt) goto loc_82F3AE78;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_82F3AE78:
	// b 0x82f3adc0
	sub_82F3ADC0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3AE7C"))) PPC_WEAK_FUNC(sub_82F3AE7C);
PPC_FUNC_IMPL(__imp__sub_82F3AE7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3AE80"))) PPC_WEAK_FUNC(sub_82F3AE80);
PPC_FUNC_IMPL(__imp__sub_82F3AE80) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,88(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 88);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82f3af24
	if (cr6.eq) goto loc_82F3AF24;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,15
	ctx.r10.s64 = 15;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// stb r11,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r11.u8);
	// bl 0x830ff290
	ctx.lr = 0x82F3AEB8;
	sub_830FF290(ctx, base);
	// bl 0x830ffaa8
	ctx.lr = 0x82F3AEBC;
	sub_830FFAA8(ctx, base);
	// cmplwi cr6,r3,15
	cr6.compare<uint32_t>(ctx.r3.u32, 15, xer);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bne cr6,0x82f3aed8
	if (!cr6.eq) goto loc_82F3AED8;
	// addi r11,r11,-4968
	ctx.r11.s64 = ctx.r11.s64 + -4968;
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// b 0x82f3aedc
	goto loc_82F3AEDC;
loc_82F3AED8:
	// addi r4,r11,-4968
	ctx.r4.s64 = ctx.r11.s64 + -4968;
loc_82F3AEDC:
	// bl 0x8259d6c0
	ctx.lr = 0x82F3AEE0;
	sub_8259D6C0(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x82F3AEEC;
	sub_82E88020(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82f3af0c
	if (cr6.lt) goto loc_82F3AF0C;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82F3AF0C;
	sub_825952B8(ctx, base);
loc_82F3AF0C:
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
loc_82F3AF24:
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
}

__attribute__((alias("__imp__sub_82F3AF3C"))) PPC_WEAK_FUNC(sub_82F3AF3C);
PPC_FUNC_IMPL(__imp__sub_82F3AF3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3AF40"))) PPC_WEAK_FUNC(sub_82F3AF40);
PPC_FUNC_IMPL(__imp__sub_82F3AF40) {
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
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-4200
	ctx.r9.s64 = ctx.r11.s64 + -4200;
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
	// bl 0x82f42278
	ctx.lr = 0x82F3AF78;
	sub_82F42278(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82f3af90
	if (cr6.eq) goto loc_82F3AF90;
	// bl 0x82416268
	ctx.lr = 0x82F3AF8C;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82F3AF90:
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

__attribute__((alias("__imp__sub_82F3AFA8"))) PPC_WEAK_FUNC(sub_82F3AFA8);
PPC_FUNC_IMPL(__imp__sub_82F3AFA8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82F3AFB0;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,31
	ctx.r11.s64 = 31;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,92
	ctx.r4.s64 = 92;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82F3AFD4;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82f3b01c
	if (cr6.eq) goto loc_82F3B01C;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82f42220
	ctx.lr = 0x82F3AFE8;
	sub_82F42220(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r8,r11,-4200
	ctx.r8.s64 = ctx.r11.s64 + -4200;
	// addi r7,r10,-17088
	ctx.r7.s64 = ctx.r10.s64 + -17088;
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// stw r7,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r7.u32);
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
	// stw r6,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r6.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r30.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82F3B01C:
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r30,88(0)
	PPC_STORE_U32(88, ctx.r30.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3B02C"))) PPC_WEAK_FUNC(sub_82F3B02C);
PPC_FUNC_IMPL(__imp__sub_82F3B02C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3B030"))) PPC_WEAK_FUNC(sub_82F3B030);
PPC_FUNC_IMPL(__imp__sub_82F3B030) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-2528(r1)
	ea = -2528 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r4,r11,-4444
	ctx.r4.s64 = ctx.r11.s64 + -4444;
	// bl 0x82f42480
	ctx.lr = 0x82F3B048;
	sub_82F42480(ctx, base);
	// bl 0x82d14ce8
	ctx.lr = 0x82F3B04C;
	sub_82D14CE8(ctx, base);
	// bl 0x82d130b8
	ctx.lr = 0x82F3B050;
	sub_82D130B8(ctx, base);
	// bl 0x830ff290
	ctx.lr = 0x82F3B054;
	sub_830FF290(ctx, base);
	// bl 0x830ff988
	ctx.lr = 0x82F3B058;
	sub_830FF988(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82f3b084
	if (cr6.eq) goto loc_82F3B084;
	// li r11,3
	ctx.r11.s64 = 3;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// bl 0x82e765e8
	ctx.lr = 0x82F3B07C;
	sub_82E765E8(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82e76b28
	ctx.lr = 0x82F3B084;
	sub_82E76B28(ctx, base);
loc_82F3B084:
	// addi r1,r1,2528
	ctx.r1.s64 = ctx.r1.s64 + 2528;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F3B094"))) PPC_WEAK_FUNC(sub_82F3B094);
PPC_FUNC_IMPL(__imp__sub_82F3B094) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3B098"))) PPC_WEAK_FUNC(sub_82F3B098);
PPC_FUNC_IMPL(__imp__sub_82F3B098) {
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
	// bl 0x831156e8
	ctx.lr = 0x82F3B0B0;
	sub_831156E8(ctx, base);
	// lwz r31,52(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// addis r30,r31,2
	ctx.r30.s64 = ctx.r31.s64 + 131072;
	// addi r30,r30,-21268
	ctx.r30.s64 = ctx.r30.s64 + -21268;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8311ef00
	ctx.lr = 0x82F3B0C4;
	sub_8311EF00(ctx, base);
	// bl 0x830ff290
	ctx.lr = 0x82F3B0C8;
	sub_830FF290(ctx, base);
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmplwi cr6,r11,68
	cr6.compare<uint32_t>(ctx.r11.u32, 68, xer);
	// beq cr6,0x82f3b0f8
	if (cr6.eq) goto loc_82F3B0F8;
	// cmplwi cr6,r11,67
	cr6.compare<uint32_t>(ctx.r11.u32, 67, xer);
	// beq cr6,0x82f3b0f8
	if (cr6.eq) goto loc_82F3B0F8;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// ori r10,r11,24108
	ctx.r10.u64 = ctx.r11.u64 | 24108;
	// lwzx r3,r31,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// bl 0x8314f2b8
	ctx.lr = 0x82F3B0EC;
	sub_8314F2B8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8311e7a8
	ctx.lr = 0x82F3B0F8;
	sub_8311E7A8(ctx, base);
loc_82F3B0F8:
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

__attribute__((alias("__imp__sub_82F3B110"))) PPC_WEAK_FUNC(sub_82F3B110);
PPC_FUNC_IMPL(__imp__sub_82F3B110) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82f3b120
	if (cr6.lt) goto loc_82F3B120;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_82F3B120:
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x82f3afa8
	sub_82F3AFA8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3B128"))) PPC_WEAK_FUNC(sub_82F3B128);
PPC_FUNC_IMPL(__imp__sub_82F3B128) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82f3b138
	if (cr6.lt) goto loc_82F3B138;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_82F3B138:
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x82f3afa8
	sub_82F3AFA8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3B140"))) PPC_WEAK_FUNC(sub_82F3B140);
PPC_FUNC_IMPL(__imp__sub_82F3B140) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82f3b150
	if (cr6.lt) goto loc_82F3B150;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_82F3B150:
	// li r4,2
	ctx.r4.s64 = 2;
	// b 0x82f3afa8
	sub_82F3AFA8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3B158"))) PPC_WEAK_FUNC(sub_82F3B158);
PPC_FUNC_IMPL(__imp__sub_82F3B158) {
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
	// bl 0x82d154a0
	ctx.lr = 0x82F3B170;
	sub_82D154A0(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82f3b184
	if (cr6.lt) goto loc_82F3B184;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// b 0x82f3b188
	goto loc_82F3B188;
loc_82F3B184:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82F3B188:
	// li r4,5
	ctx.r4.s64 = 5;
	// bl 0x82f3afa8
	ctx.lr = 0x82F3B190;
	sub_82F3AFA8(ctx, base);
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

__attribute__((alias("__imp__sub_82F3B1A4"))) PPC_WEAK_FUNC(sub_82F3B1A4);
PPC_FUNC_IMPL(__imp__sub_82F3B1A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3B1A8"))) PPC_WEAK_FUNC(sub_82F3B1A8);
PPC_FUNC_IMPL(__imp__sub_82F3B1A8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82f3b1b8
	if (cr6.lt) goto loc_82F3B1B8;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_82F3B1B8:
	// li r4,4
	ctx.r4.s64 = 4;
	// b 0x82f3afa8
	sub_82F3AFA8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3B1C0"))) PPC_WEAK_FUNC(sub_82F3B1C0);
PPC_FUNC_IMPL(__imp__sub_82F3B1C0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82f3b1d0
	if (cr6.lt) goto loc_82F3B1D0;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_82F3B1D0:
	// li r4,3
	ctx.r4.s64 = 3;
	// b 0x82f3afa8
	sub_82F3AFA8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3B1D8"))) PPC_WEAK_FUNC(sub_82F3B1D8);
PPC_FUNC_IMPL(__imp__sub_82F3B1D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82F3B1E0;
	__savegprlr_29(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,88(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// li r29,2
	ctx.r29.s64 = 2;
	// addi r30,r10,-4296
	ctx.r30.s64 = ctx.r10.s64 + -4296;
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(ctx.r11.u32, 4, xer);
	// bgt cr6,0x82f3b344
	if (cr6.gt) goto loc_82F3B344;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x82f3b33c
	if (cr6.eq) goto loc_82F3B33C;
	// bdz 0x82f3b2f4
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_82F3B2F4;
	// bdz 0x82f3b220
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_82F3B220;
	// bdz 0x82f3b268
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_82F3B268;
	// b 0x82f3b2b0
	goto loc_82F3B2B0;
loc_82F3B220:
	// bl 0x830ff290
	ctx.lr = 0x82F3B224;
	sub_830FF290(ctx, base);
	// li r11,8
	ctx.r11.s64 = 8;
	// stw r11,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
	// bl 0x831156e8
	ctx.lr = 0x82F3B230;
	sub_831156E8(ctx, base);
	// bl 0x82d26640
	ctx.lr = 0x82F3B234;
	sub_82D26640(ctx, base);
	// bl 0x82d25ab8
	ctx.lr = 0x82F3B238;
	sub_82D25AB8(ctx, base);
	// addi r4,r30,-132
	ctx.r4.s64 = ctx.r30.s64 + -132;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f42480
	ctx.lr = 0x82F3B244;
	sub_82F42480(ctx, base);
	// li r3,108
	ctx.r3.s64 = 108;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x83156d28
	ctx.lr = 0x82F3B254;
	sub_83156D28(ctx, base);
	// li r3,52
	ctx.r3.s64 = 52;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x83156d28
	ctx.lr = 0x82F3B264;
	sub_83156D28(ctx, base);
	// b 0x82f3b3a8
	goto loc_82F3B3A8;
loc_82F3B268:
	// bl 0x830ff290
	ctx.lr = 0x82F3B26C;
	sub_830FF290(ctx, base);
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
	// bl 0x831156e8
	ctx.lr = 0x82F3B278;
	sub_831156E8(ctx, base);
	// bl 0x82d26640
	ctx.lr = 0x82F3B27C;
	sub_82D26640(ctx, base);
	// bl 0x82d25ab8
	ctx.lr = 0x82F3B280;
	sub_82D25AB8(ctx, base);
	// addi r4,r30,-116
	ctx.r4.s64 = ctx.r30.s64 + -116;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f42480
	ctx.lr = 0x82F3B28C;
	sub_82F42480(ctx, base);
	// li r3,108
	ctx.r3.s64 = 108;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x83156d28
	ctx.lr = 0x82F3B29C;
	sub_83156D28(ctx, base);
	// li r3,52
	ctx.r3.s64 = 52;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x83156d28
	ctx.lr = 0x82F3B2AC;
	sub_83156D28(ctx, base);
	// b 0x82f3b3a8
	goto loc_82F3B3A8;
loc_82F3B2B0:
	// bl 0x830ff290
	ctx.lr = 0x82F3B2B4;
	sub_830FF290(ctx, base);
	// stw r29,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r29.u32);
	// bl 0x831156e8
	ctx.lr = 0x82F3B2BC;
	sub_831156E8(ctx, base);
	// bl 0x82d26640
	ctx.lr = 0x82F3B2C0;
	sub_82D26640(ctx, base);
	// bl 0x82d25ab8
	ctx.lr = 0x82F3B2C4;
	sub_82D25AB8(ctx, base);
	// addi r4,r30,-104
	ctx.r4.s64 = ctx.r30.s64 + -104;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f42480
	ctx.lr = 0x82F3B2D0;
	sub_82F42480(ctx, base);
	// li r3,108
	ctx.r3.s64 = 108;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x83156d28
	ctx.lr = 0x82F3B2E0;
	sub_83156D28(ctx, base);
	// li r3,52
	ctx.r3.s64 = 52;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x83156d28
	ctx.lr = 0x82F3B2F0;
	sub_83156D28(ctx, base);
	// b 0x82f3b3a8
	goto loc_82F3B3A8;
loc_82F3B2F4:
	// bl 0x830ff290
	ctx.lr = 0x82F3B2F8;
	sub_830FF290(ctx, base);
	// li r11,68
	ctx.r11.s64 = 68;
	// stw r11,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
	// bl 0x831156e8
	ctx.lr = 0x82F3B304;
	sub_831156E8(ctx, base);
	// bl 0x82d26640
	ctx.lr = 0x82F3B308;
	sub_82D26640(ctx, base);
	// bl 0x82d25ab8
	ctx.lr = 0x82F3B30C;
	sub_82D25AB8(ctx, base);
	// addi r4,r30,-88
	ctx.r4.s64 = ctx.r30.s64 + -88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f42480
	ctx.lr = 0x82F3B318;
	sub_82F42480(ctx, base);
	// li r3,108
	ctx.r3.s64 = 108;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x83156d28
	ctx.lr = 0x82F3B328;
	sub_83156D28(ctx, base);
	// li r3,52
	ctx.r3.s64 = 52;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x83156d28
	ctx.lr = 0x82F3B338;
	sub_83156D28(ctx, base);
	// b 0x82f3b3a8
	goto loc_82F3B3A8;
loc_82F3B33C:
	// addi r4,r30,-8
	ctx.r4.s64 = ctx.r30.s64 + -8;
	// b 0x82f3b3a0
	goto loc_82F3B3A0;
loc_82F3B344:
	// bl 0x830ff290
	ctx.lr = 0x82F3B348;
	sub_830FF290(ctx, base);
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// beq cr6,0x82f3b39c
	if (cr6.eq) goto loc_82F3B39C;
	// cmplwi cr6,r11,67
	cr6.compare<uint32_t>(ctx.r11.u32, 67, xer);
	// beq cr6,0x82f3b3a8
	if (cr6.eq) goto loc_82F3B3A8;
	// cmplwi cr6,r11,68
	cr6.compare<uint32_t>(ctx.r11.u32, 68, xer);
	// beq cr6,0x82f3b394
	if (cr6.eq) goto loc_82F3B394;
	// bl 0x830ff290
	ctx.lr = 0x82F3B368;
	sub_830FF290(ctx, base);
	// bl 0x830ff988
	ctx.lr = 0x82F3B36C;
	sub_830FF988(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82f3b38c
	if (cr6.eq) goto loc_82F3B38C;
	// bl 0x82dad2e0
	ctx.lr = 0x82F3B37C;
	sub_82DAD2E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82f3b3a8
	if (cr6.eq) goto loc_82F3B3A8;
	// addi r4,r30,-36
	ctx.r4.s64 = ctx.r30.s64 + -36;
	// b 0x82f3b3a0
	goto loc_82F3B3A0;
loc_82F3B38C:
	// addi r4,r30,-20
	ctx.r4.s64 = ctx.r30.s64 + -20;
	// b 0x82f3b3a0
	goto loc_82F3B3A0;
loc_82F3B394:
	// addi r4,r30,-64
	ctx.r4.s64 = ctx.r30.s64 + -64;
	// b 0x82f3b3a0
	goto loc_82F3B3A0;
loc_82F3B39C:
	// addi r4,r30,-48
	ctx.r4.s64 = ctx.r30.s64 + -48;
loc_82F3B3A0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f42480
	ctx.lr = 0x82F3B3A8;
	sub_82F42480(ctx, base);
loc_82F3B3A8:
	// bl 0x830ff290
	ctx.lr = 0x82F3B3AC;
	sub_830FF290(ctx, base);
	// bl 0x830ffaa8
	ctx.lr = 0x82F3B3B0;
	sub_830FFAA8(ctx, base);
	// cmplwi cr6,r3,14
	cr6.compare<uint32_t>(ctx.r3.u32, 14, xer);
	// blt cr6,0x82f3b3c0
	if (cr6.lt) goto loc_82F3B3C0;
	// cmplwi cr6,r3,15
	cr6.compare<uint32_t>(ctx.r3.u32, 15, xer);
	// ble cr6,0x82f3b3c4
	if (!cr6.gt) goto loc_82F3B3C4;
loc_82F3B3C0:
	// bl 0x839841b0
	ctx.lr = 0x82F3B3C4;
	sub_839841B0(ctx, base);
loc_82F3B3C4:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,15
	ctx.r10.s64 = 15;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// li r5,11
	ctx.r5.s64 = 11;
	// stb r11,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r11.u8);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8259cc28
	ctx.lr = 0x82F3B3E8;
	sub_8259CC28(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x82F3B3F4;
	sub_82E88020(ctx, base);
	// lwz r9,116(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// blt cr6,0x82f3b410
	if (cr6.lt) goto loc_82F3B410;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x825952b8
	ctx.lr = 0x82F3B410;
	sub_825952B8(ctx, base);
loc_82F3B410:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3B41C"))) PPC_WEAK_FUNC(sub_82F3B41C);
PPC_FUNC_IMPL(__imp__sub_82F3B41C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3B420"))) PPC_WEAK_FUNC(sub_82F3B420);
PPC_FUNC_IMPL(__imp__sub_82F3B420) {
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
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r4,r11,-3568
	ctx.r4.s64 = ctx.r11.s64 + -3568;
	// bl 0x82f42480
	ctx.lr = 0x82F3B438;
	sub_82F42480(ctx, base);
	// bl 0x831021a0
	ctx.lr = 0x82F3B43C;
	sub_831021A0(ctx, base);
	// lis r4,261
	ctx.r4.s64 = 17104896;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,49
	ctx.r4.u64 = ctx.r4.u64 | 49;
	// bl 0x83102a08
	ctx.lr = 0x82F3B44C;
	sub_83102A08(ctx, base);
	// bl 0x82d4dbb0
	ctx.lr = 0x82F3B450;
	sub_82D4DBB0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F3B460"))) PPC_WEAK_FUNC(sub_82F3B460);
PPC_FUNC_IMPL(__imp__sub_82F3B460) {
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
	// bl 0x82f42220
	ctx.lr = 0x82F3B478;
	sub_82F42220(ctx, base);
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// lis r9,-32239
	ctx.r9.s64 = -2112815104;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r8,r10,-3448
	ctx.r8.s64 = ctx.r10.s64 + -3448;
	// addi r7,r9,-17088
	ctx.r7.s64 = ctx.r9.s64 + -17088;
	// stb r11,88(r31)
	PPC_STORE_U8(ctx.r31.u32 + 88, ctx.r11.u8);
	// lis r6,-32254
	ctx.r6.s64 = -2113798144;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// stw r7,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r7.u32);
	// lis r5,-32254
	ctx.r5.s64 = -2113798144;
	// stb r11,89(r31)
	PPC_STORE_U8(ctx.r31.u32 + 89, ctx.r11.u8);
	// addi r4,r6,-19064
	ctx.r4.s64 = ctx.r6.s64 + -19064;
	// stb r11,96(r31)
	PPC_STORE_U8(ctx.r31.u32 + 96, ctx.r11.u8);
	// addi r3,r5,-24692
	ctx.r3.s64 = ctx.r5.s64 + -24692;
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// stw r4,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r4.u32);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// stw r11,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r11.u32);
	// addi r8,r10,-22824
	ctx.r8.s64 = ctx.r10.s64 + -22824;
	// stw r11,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r11.u32);
	// addi r7,r9,-22864
	ctx.r7.s64 = ctx.r9.s64 + -22864;
	// stb r11,116(r31)
	PPC_STORE_U8(ctx.r31.u32 + 116, ctx.r11.u8);
	// stw r11,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r11.u32);
	// stw r3,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r11.u32);
	// stw r11,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r11.u32);
	// stb r11,136(r31)
	PPC_STORE_U8(ctx.r31.u32 + 136, ctx.r11.u8);
	// stw r11,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r11.u32);
	// stw r8,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r8.u32);
	// stw r11,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r11.u32);
	// stw r11,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r11.u32);
	// stb r11,156(r31)
	PPC_STORE_U8(ctx.r31.u32 + 156, ctx.r11.u8);
	// stw r11,160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 160, ctx.r11.u32);
	// stw r7,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r7.u32);
	// stw r11,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r11.u32);
	// stw r11,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82F3B524"))) PPC_WEAK_FUNC(sub_82F3B524);
PPC_FUNC_IMPL(__imp__sub_82F3B524) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3B528"))) PPC_WEAK_FUNC(sub_82F3B528);
PPC_FUNC_IMPL(__imp__sub_82F3B528) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82F3B530;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// addi r8,r11,-3448
	ctx.r8.s64 = ctx.r11.s64 + -3448;
	// addi r7,r10,-17088
	ctx.r7.s64 = ctx.r10.s64 + -17088;
	// addi r6,r9,-16652
	ctx.r6.s64 = ctx.r9.s64 + -16652;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// stw r7,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r7.u32);
	// addi r3,r3,152
	ctx.r3.s64 = ctx.r3.s64 + 152;
	// stw r6,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r6.u32);
	// bl 0x825c3358
	ctx.lr = 0x82F3B564;
	sub_825C3358(ctx, base);
	// lis r5,-32254
	ctx.r5.s64 = -2113798144;
	// addi r30,r31,132
	ctx.r30.s64 = ctx.r31.s64 + 132;
	// addi r4,r5,-24712
	ctx.r4.s64 = ctx.r5.s64 + -24712;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r4,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r4.u32);
	// bl 0x825e0cf8
	ctx.lr = 0x82F3B57C;
	sub_825E0CF8(ctx, base);
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82f3b5a8
	if (cr6.eq) goto loc_82F3B5A8;
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r5,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r5.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// bl 0x8353f3b8
	ctx.lr = 0x82F3B5A4;
	sub_8353F3B8(ctx, base);
	// stw r29,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r29.u32);
loc_82F3B5A8:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r30,r31,112
	ctx.r30.s64 = ctx.r31.s64 + 112;
	// addi r10,r11,-24712
	ctx.r10.s64 = ctx.r11.s64 + -24712;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r10,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r10.u32);
	// bl 0x825e0cf8
	ctx.lr = 0x82F3B5C0;
	sub_825E0CF8(ctx, base);
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82f3b5e8
	if (cr6.eq) goto loc_82F3B5E8;
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r5,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r5.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// bl 0x8353f3b8
	ctx.lr = 0x82F3B5E4;
	sub_8353F3B8(ctx, base);
	// stw r29,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r29.u32);
loc_82F3B5E8:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r30,r31,92
	ctx.r30.s64 = ctx.r31.s64 + 92;
	// addi r10,r11,-24712
	ctx.r10.s64 = ctx.r11.s64 + -24712;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r10,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r10.u32);
	// bl 0x825e0cf8
	ctx.lr = 0x82F3B600;
	sub_825E0CF8(ctx, base);
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82f3b628
	if (cr6.eq) goto loc_82F3B628;
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r5,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r5.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// bl 0x8353f3b8
	ctx.lr = 0x82F3B624;
	sub_8353F3B8(ctx, base);
	// stw r29,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r29.u32);
loc_82F3B628:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f42278
	ctx.lr = 0x82F3B630;
	sub_82F42278(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3B638"))) PPC_WEAK_FUNC(sub_82F3B638);
PPC_FUNC_IMPL(__imp__sub_82F3B638) {
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
	// bl 0x82f3b528
	ctx.lr = 0x82F3B658;
	sub_82F3B528(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82f3b670
	if (cr6.eq) goto loc_82F3B670;
	// bl 0x82416268
	ctx.lr = 0x82F3B66C;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82F3B670:
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

__attribute__((alias("__imp__sub_82F3B688"))) PPC_WEAK_FUNC(sub_82F3B688);
PPC_FUNC_IMPL(__imp__sub_82F3B688) {
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
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82f3b6ac
	if (cr6.lt) goto loc_82F3B6AC;
	// lwz r31,0(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82f3b6b0
	goto loc_82F3B6B0;
loc_82F3B6AC:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_82F3B6B0:
	// li r11,31
	ctx.r11.s64 = 31;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,172
	ctx.r4.s64 = 172;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82F3B6C8;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82f3b6e0
	if (cr6.eq) goto loc_82F3B6E0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82f3b460
	ctx.lr = 0x82F3B6D8;
	sub_82F3B460(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82f3b6e4
	if (!cr6.eq) goto loc_82F3B6E4;
loc_82F3B6E0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82F3B6E4:
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

__attribute__((alias("__imp__sub_82F3B6F8"))) PPC_WEAK_FUNC(sub_82F3B6F8);
PPC_FUNC_IMPL(__imp__sub_82F3B6F8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82F3B700;
	__savegprlr_28(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,136(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 136);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r31,r3,132
	ctx.r31.s64 = ctx.r3.s64 + 132;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82f3b720
	if (!cr6.eq) goto loc_82F3B720;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825b4670
	ctx.lr = 0x82F3B720;
	sub_825B4670(ctx, base);
loc_82F3B720:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82f3b73c
	if (!cr6.eq) goto loc_82F3B73C;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r10,r11,3312
	ctx.r10.s64 = ctx.r11.s64 + 3312;
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
loc_82F3B73C:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r30,0
	ctx.r30.s64 = 0;
	// rotlwi r10,r11,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// addi r29,r11,36
	ctx.r29.s64 = ctx.r11.s64 + 36;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82f3b760
	if (cr6.eq) goto loc_82F3B760;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x825b33f0
	ctx.lr = 0x82F3B75C;
	sub_825B33F0(ctx, base);
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
loc_82F3B760:
	// stb r30,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r30.u8);
	// li r5,44
	ctx.r5.s64 = 44;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831ce980
	ctx.lr = 0x82F3B774;
	sub_831CE980(ctx, base);
	// bl 0x830ff290
	ctx.lr = 0x82F3B778;
	sub_830FF290(ctx, base);
	// bl 0x830ff988
	ctx.lr = 0x82F3B77C;
	sub_830FF988(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// li r29,15
	ctx.r29.s64 = 15;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// addi r31,r11,-3632
	ctx.r31.s64 = ctx.r11.s64 + -3632;
	// bne cr6,0x82f3b7a4
	if (!cr6.eq) goto loc_82F3B7A4;
	// bl 0x830ff290
	ctx.lr = 0x82F3B798;
	sub_830FF290(ctx, base);
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmplwi cr6,r11,58
	cr6.compare<uint32_t>(ctx.r11.u32, 58, xer);
	// bne cr6,0x82f3b7fc
	if (!cr6.eq) goto loc_82F3B7FC;
loc_82F3B7A4:
	// bl 0x82dad2e0
	ctx.lr = 0x82F3B7A8;
	sub_82DAD2E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82f3b7c0
	if (cr6.eq) goto loc_82F3B7C0;
	// lis r5,4
	ctx.r5.s64 = 262144;
	// li r4,18
	ctx.r4.s64 = 18;
	// ori r5,r5,37856
	ctx.r5.u64 = ctx.r5.u64 | 37856;
	// bl 0x82dae510
	ctx.lr = 0x82F3B7C0;
	sub_82DAE510(ctx, base);
loc_82F3B7C0:
	// bl 0x831156e8
	ctx.lr = 0x82F3B7C4;
	sub_831156E8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,56(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// bl 0x8312b8d0
	ctx.lr = 0x82F3B7D0;
	sub_8312B8D0(ctx, base);
	// bl 0x82d47a58
	ctx.lr = 0x82F3B7D4;
	sub_82D47A58(ctx, base);
	// stw r29,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r29.u32);
	// stw r30,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r30.u32);
	// addi r4,r31,-24
	ctx.r4.s64 = ctx.r31.s64 + -24;
	// stb r30,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r30.u8);
	// li r5,23
	ctx.r5.s64 = 23;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8259cc28
	ctx.lr = 0x82F3B7F0;
	sub_8259CC28(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82d47bb8
	ctx.lr = 0x82F3B7F8;
	sub_82D47BB8(ctx, base);
	// bl 0x82d476f0
	ctx.lr = 0x82F3B7FC;
	sub_82D476F0(ctx, base);
loc_82F3B7FC:
	// stw r29,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r29.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r30.u32);
	// li r5,14
	ctx.r5.s64 = 14;
	// stb r30,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r30.u8);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8259cc28
	ctx.lr = 0x82F3B818;
	sub_8259CC28(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82e88020
	ctx.lr = 0x82F3B824;
	sub_82E88020(ctx, base);
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// stb r11,88(r28)
	PPC_STORE_U8(ctx.r28.u32 + 88, ctx.r11.u8);
	// blt cr6,0x82f3b84c
	if (cr6.lt) goto loc_82F3B84C;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82F3B84C;
	sub_825952B8(ctx, base);
loc_82F3B84C:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3B854"))) PPC_WEAK_FUNC(sub_82F3B854);
PPC_FUNC_IMPL(__imp__sub_82F3B854) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3B858"))) PPC_WEAK_FUNC(sub_82F3B858);
PPC_FUNC_IMPL(__imp__sub_82F3B858) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82F3B860;
	__savegprlr_28(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,136(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 136);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r31,r3,132
	ctx.r31.s64 = ctx.r3.s64 + 132;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82f3b880
	if (!cr6.eq) goto loc_82F3B880;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825b4670
	ctx.lr = 0x82F3B880;
	sub_825B4670(ctx, base);
loc_82F3B880:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82f3b89c
	if (!cr6.eq) goto loc_82F3B89C;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r10,r11,3312
	ctx.r10.s64 = ctx.r11.s64 + 3312;
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
loc_82F3B89C:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r29,0
	ctx.r29.s64 = 0;
	// rotlwi r10,r11,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// addi r30,r11,36
	ctx.r30.s64 = ctx.r11.s64 + 36;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82f3b8c0
	if (cr6.eq) goto loc_82F3B8C0;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x825b33f0
	ctx.lr = 0x82F3B8BC;
	sub_825B33F0(ctx, base);
	// stw r29,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r29.u32);
loc_82F3B8C0:
	// stb r29,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r29.u8);
	// li r5,44
	ctx.r5.s64 = 44;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831ce980
	ctx.lr = 0x82F3B8D4;
	sub_831CE980(ctx, base);
	// bl 0x830ff290
	ctx.lr = 0x82F3B8D8;
	sub_830FF290(ctx, base);
	// bl 0x830ff988
	ctx.lr = 0x82F3B8DC;
	sub_830FF988(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82f3b904
	if (cr6.eq) goto loc_82F3B904;
	// bl 0x82dad2e0
	ctx.lr = 0x82F3B8EC;
	sub_82DAD2E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82f3b904
	if (cr6.eq) goto loc_82F3B904;
	// lis r5,4
	ctx.r5.s64 = 262144;
	// li r4,18
	ctx.r4.s64 = 18;
	// ori r5,r5,37856
	ctx.r5.u64 = ctx.r5.u64 | 37856;
	// bl 0x82dae510
	ctx.lr = 0x82F3B904;
	sub_82DAE510(ctx, base);
loc_82F3B904:
	// li r11,15
	ctx.r11.s64 = 15;
	// stw r29,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r29.u32);
	// stb r29,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r29.u8);
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// bl 0x830ff290
	ctx.lr = 0x82F3B918;
	sub_830FF290(ctx, base);
	// bl 0x830ffaa8
	ctx.lr = 0x82F3B91C;
	sub_830FFAA8(ctx, base);
	// cmplwi cr6,r3,15
	cr6.compare<uint32_t>(ctx.r3.u32, 15, xer);
	// bne cr6,0x82f3b940
	if (!cr6.eq) goto loc_82F3B940;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// li r5,15
	ctx.r5.s64 = 15;
	// addi r11,r11,-3584
	ctx.r11.s64 = ctx.r11.s64 + -3584;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-32
	ctx.r4.s64 = ctx.r11.s64 + -32;
	// bl 0x8259cc28
	ctx.lr = 0x82F3B93C;
	sub_8259CC28(ctx, base);
	// b 0x82f3b9c8
	goto loc_82F3B9C8;
loc_82F3B940:
	// lbz r11,156(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 156);
	// addi r31,r28,152
	ctx.r31.s64 = ctx.r28.s64 + 152;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82f3b958
	if (!cr6.eq) goto loc_82F3B958;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825b4da8
	ctx.lr = 0x82F3B958;
	sub_825B4DA8(ctx, base);
loc_82F3B958:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82f3b974
	if (!cr6.eq) goto loc_82F3B974;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
loc_82F3B974:
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x82a225d0
	ctx.lr = 0x82F3B97C;
	sub_82A225D0(ctx, base);
	// lis r11,5
	ctx.r11.s64 = 327680;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// ori r9,r11,8025
	ctx.r9.u64 = ctx.r11.u64 | 8025;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// lbzx r8,r3,r9
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + ctx.r9.u32);
	// addic r7,r8,-1
	xer.ca = ctx.r8.u32 > 0;
	ctx.r7.s64 = ctx.r8.s64 + -1;
	// subfe r11,r7,r8
	temp.u8 = (~ctx.r7.u32 + ctx.r8.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r7.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// beq cr6,0x82f3b9a0
	if (cr6.eq) goto loc_82F3B9A0;
	// stw r29,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r29.u32);
loc_82F3B9A0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// beq cr6,0x82f3b9c0
	if (cr6.eq) goto loc_82F3B9C0;
	// addi r11,r11,-3584
	ctx.r11.s64 = ctx.r11.s64 + -3584;
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// b 0x82f3b9c4
	goto loc_82F3B9C4;
loc_82F3B9C0:
	// addi r4,r11,-3584
	ctx.r4.s64 = ctx.r11.s64 + -3584;
loc_82F3B9C4:
	// bl 0x8259d6c0
	ctx.lr = 0x82F3B9C8;
	sub_8259D6C0(ctx, base);
loc_82F3B9C8:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82e88020
	ctx.lr = 0x82F3B9D4;
	sub_82E88020(ctx, base);
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// stb r11,88(r28)
	PPC_STORE_U8(ctx.r28.u32 + 88, ctx.r11.u8);
	// blt cr6,0x82f3b9fc
	if (cr6.lt) goto loc_82F3B9FC;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82F3B9FC;
	sub_825952B8(ctx, base);
loc_82F3B9FC:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3BA04"))) PPC_WEAK_FUNC(sub_82F3BA04);
PPC_FUNC_IMPL(__imp__sub_82F3BA04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3BA08"))) PPC_WEAK_FUNC(sub_82F3BA08);
PPC_FUNC_IMPL(__imp__sub_82F3BA08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82F3BA10;
	__savegprlr_27(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,261
	ctx.r10.s64 = 17104896;
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// ori r10,r10,22
	ctx.r10.u64 = ctx.r10.u64 | 22;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bgt cr6,0x82f3bc3c
	if (cr6.gt) goto loc_82F3BC3C;
	// beq cr6,0x82f3bc20
	if (cr6.eq) goto loc_82F3BC20;
	// addis r11,r11,-261
	ctx.r11.s64 = ctx.r11.s64 + -17104896;
	// addi r11,r11,-5
	ctx.r11.s64 = ctx.r11.s64 + -5;
	// cmplwi cr6,r11,13
	cr6.compare<uint32_t>(ctx.r11.u32, 13, xer);
	// bgt cr6,0x82f3bc98
	if (cr6.gt) goto loc_82F3BC98;
	// lis r12,-32012
	ctx.r12.s64 = -2097938432;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-17828
	ctx.r12.s64 = ctx.r12.s64 + -17828;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_82F3BBDC;
	case 1:
		goto loc_82F3BC98;
	case 2:
		goto loc_82F3BC98;
	case 3:
		goto loc_82F3BC98;
	case 4:
		goto loc_82F3BC98;
	case 5:
		goto loc_82F3BA94;
	case 6:
		goto loc_82F3BA94;
	case 7:
		goto loc_82F3BC98;
	case 8:
		goto loc_82F3BC98;
	case 9:
		goto loc_82F3BC98;
	case 10:
		goto loc_82F3BC98;
	case 11:
		goto loc_82F3BC98;
	case 12:
		goto loc_82F3BC98;
	case 13:
		goto loc_82F3BAD8;
	default:
		return;
	}
	// lwz r23,-17444(r19)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r19.u32 + -17444);
	// lwz r23,-17256(r19)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r19.u32 + -17256);
	// lwz r23,-17256(r19)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r19.u32 + -17256);
	// lwz r23,-17256(r19)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r19.u32 + -17256);
	// lwz r23,-17256(r19)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r19.u32 + -17256);
	// lwz r23,-17772(r19)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r19.u32 + -17772);
	// lwz r23,-17772(r19)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r19.u32 + -17772);
	// lwz r23,-17256(r19)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r19.u32 + -17256);
	// lwz r23,-17256(r19)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r19.u32 + -17256);
	// lwz r23,-17256(r19)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r19.u32 + -17256);
	// lwz r23,-17256(r19)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r19.u32 + -17256);
	// lwz r23,-17256(r19)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r19.u32 + -17256);
	// lwz r23,-17256(r19)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r19.u32 + -17256);
	// lwz r23,-17704(r19)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r19.u32 + -17704);
loc_82F3BA94:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r11,r11,-3660
	ctx.r11.s64 = ctx.r11.s64 + -3660;
	// addi r4,r11,-100
	ctx.r4.s64 = ctx.r11.s64 + -100;
	// bl 0x837b0c10
	ctx.lr = 0x82F3BAA8;
	sub_837B0C10(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82e88020
	ctx.lr = 0x82F3BAB4;
	sub_82E88020(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stb r10,88(r29)
	PPC_STORE_U8(ctx.r29.u32 + 88, ctx.r10.u8);
	// bl 0x8387e8e0
	ctx.lr = 0x82F3BAC4;
	sub_8387E8E0(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83824d80
	ctx.lr = 0x82F3BAD0;
	sub_83824D80(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_82F3BAD8:
	// lbz r11,88(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 88);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82f3bc98
	if (!cr6.eq) goto loc_82F3BC98;
	// lis r31,-31743
	ctx.r31.s64 = -2080309248;
	// lwz r11,-22208(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22208);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82f3bb00
	if (!cr6.eq) goto loc_82F3BB00;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x830eb538
	ctx.lr = 0x82F3BB00;
	sub_830EB538(ctx, base);
loc_82F3BB00:
	// addi r30,r29,92
	ctx.r30.s64 = ctx.r29.s64 + 92;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825bf9b0
	ctx.lr = 0x82F3BB0C;
	sub_825BF9B0(ctx, base);
	// lwz r11,-22208(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22208);
	// li r28,0
	ctx.r28.s64 = 0;
	// li r10,15
	ctx.r10.s64 = 15;
	// stw r28,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r28.u32);
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// stb r28,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r28.u8);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// bne cr6,0x82f3bb40
	if (!cr6.eq) goto loc_82F3BB40;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r11,r11,-3660
	ctx.r11.s64 = ctx.r11.s64 + -3660;
	// addi r4,r11,-84
	ctx.r4.s64 = ctx.r11.s64 + -84;
	// b 0x82f3bb94
	goto loc_82F3BB94;
loc_82F3BB40:
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(ctx.r11.u32, 4, xer);
	// bne cr6,0x82f3bb58
	if (!cr6.eq) goto loc_82F3BB58;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r11,r11,-3660
	ctx.r11.s64 = ctx.r11.s64 + -3660;
	// addi r4,r11,-64
	ctx.r4.s64 = ctx.r11.s64 + -64;
	// b 0x82f3bb94
	goto loc_82F3BB94;
loc_82F3BB58:
	// bl 0x82a47d40
	ctx.lr = 0x82F3BB5C;
	sub_82A47D40(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82f3bb88
	if (cr6.eq) goto loc_82F3BB88;
	// lwz r11,-22208(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22208);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// beq cr6,0x82f3bb88
	if (cr6.eq) goto loc_82F3BB88;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r11,r11,-3660
	ctx.r11.s64 = ctx.r11.s64 + -3660;
	// addi r4,r11,-48
	ctx.r4.s64 = ctx.r11.s64 + -48;
	// b 0x82f3bb94
	goto loc_82F3BB94;
loc_82F3BB88:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r11,r11,-3660
	ctx.r11.s64 = ctx.r11.s64 + -3660;
	// addi r4,r11,-28
	ctx.r4.s64 = ctx.r11.s64 + -28;
loc_82F3BB94:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8259d6c0
	ctx.lr = 0x82F3BB9C;
	sub_8259D6C0(ctx, base);
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82f3bbac
	if (cr6.eq) goto loc_82F3BBAC;
	// stw r28,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r28.u32);
loc_82F3BBAC:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82e88020
	ctx.lr = 0x82F3BBB8;
	sub_82E88020(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stb r11,88(r29)
	PPC_STORE_U8(ctx.r29.u32 + 88, ctx.r11.u8);
	// bl 0x8387e8e0
	ctx.lr = 0x82F3BBC8;
	sub_8387E8E0(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83824d80
	ctx.lr = 0x82F3BBD4;
	sub_83824D80(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_82F3BBDC:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r11,r11,-3660
	ctx.r11.s64 = ctx.r11.s64 + -3660;
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// bl 0x837b0c10
	ctx.lr = 0x82F3BBF0;
	sub_837B0C10(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82e88020
	ctx.lr = 0x82F3BBFC;
	sub_82E88020(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stb r10,88(r29)
	PPC_STORE_U8(ctx.r29.u32 + 88, ctx.r10.u8);
	// bl 0x8387e8e0
	ctx.lr = 0x82F3BC0C;
	sub_8387E8E0(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83824d80
	ctx.lr = 0x82F3BC18;
	sub_83824D80(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_82F3BC20:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82f3b858
	ctx.lr = 0x82F3BC28;
	sub_82F3B858(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83824d80
	ctx.lr = 0x82F3BC34;
	sub_83824D80(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_82F3BC3C:
	// addis r11,r11,-261
	ctx.r11.s64 = ctx.r11.s64 + -17104896;
	// addic. r11,r11,-27
	xer.ca = ctx.r11.u32 > 26;
	ctx.r11.s64 = ctx.r11.s64 + -27;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x82f3bc90
	if (cr0.eq) goto loc_82F3BC90;
	// cmplwi cr6,r11,18
	cr6.compare<uint32_t>(ctx.r11.u32, 18, xer);
	// bne cr6,0x82f3bc98
	if (!cr6.eq) goto loc_82F3BC98;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r4,r11,-3660
	ctx.r4.s64 = ctx.r11.s64 + -3660;
	// bl 0x837b0c10
	ctx.lr = 0x82F3BC60;
	sub_837B0C10(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82e88020
	ctx.lr = 0x82F3BC6C;
	sub_82E88020(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stb r10,88(r29)
	PPC_STORE_U8(ctx.r29.u32 + 88, ctx.r10.u8);
	// bl 0x8387e8e0
	ctx.lr = 0x82F3BC7C;
	sub_8387E8E0(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83824d80
	ctx.lr = 0x82F3BC88;
	sub_83824D80(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_82F3BC90:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82f3b6f8
	ctx.lr = 0x82F3BC98;
	sub_82F3B6F8(ctx, base);
loc_82F3BC98:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83824d80
	ctx.lr = 0x82F3BCA4;
	sub_83824D80(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3BCAC"))) PPC_WEAK_FUNC(sub_82F3BCAC);
PPC_FUNC_IMPL(__imp__sub_82F3BCAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3BCB0"))) PPC_WEAK_FUNC(sub_82F3BCB0);
PPC_FUNC_IMPL(__imp__sub_82F3BCB0) {
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
	// lbz r11,89(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 89);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82f3bd40
	if (!cr6.eq) goto loc_82F3BD40;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// li r10,5
	ctx.r10.s64 = 5;
	// addi r9,r11,-3552
	ctx.r9.s64 = ctx.r11.s64 + -3552;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// bl 0x8353f380
	ctx.lr = 0x82F3BCEC;
	sub_8353F380(ctx, base);
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r7,12(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82F3BD00;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82f3bd40
	if (cr6.eq) goto loc_82F3BD40;
	// addi r31,r30,112
	ctx.r31.s64 = ctx.r30.s64 + 112;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825afb50
	ctx.lr = 0x82F3BD14;
	sub_825AFB50(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82a1a728
	ctx.lr = 0x82F3BD1C;
	sub_82A1A728(ctx, base);
	// lwz r11,128(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 128);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82f3bd38
	if (cr6.eq) goto loc_82F3BD38;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x825a8a78
	ctx.lr = 0x82F3BD30;
	sub_825A8A78(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
loc_82F3BD38:
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,89(r30)
	PPC_STORE_U8(ctx.r30.u32 + 89, ctx.r11.u8);
loc_82F3BD40:
	// lbz r3,88(r30)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r30.u32 + 88);
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

__attribute__((alias("__imp__sub_82F3BD5C"))) PPC_WEAK_FUNC(sub_82F3BD5C);
PPC_FUNC_IMPL(__imp__sub_82F3BD5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3BD60"))) PPC_WEAK_FUNC(sub_82F3BD60);
PPC_FUNC_IMPL(__imp__sub_82F3BD60) {
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
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// li r10,5
	ctx.r10.s64 = 5;
	// addi r9,r11,-3544
	ctx.r9.s64 = ctx.r11.s64 + -3544;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// bl 0x8353f380
	ctx.lr = 0x82F3BD8C;
	sub_8353F380(ctx, base);
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r7,12(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82F3BDA0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82f3bde8
	if (cr6.eq) goto loc_82F3BDE8;
	// bl 0x830ff290
	ctx.lr = 0x82F3BDAC;
	sub_830FF290(ctx, base);
	// bl 0x830ffaa8
	ctx.lr = 0x82F3BDB0;
	sub_830FFAA8(ctx, base);
	// cmplwi cr6,r3,19
	cr6.compare<uint32_t>(ctx.r3.u32, 19, xer);
	// beq cr6,0x82f3bde8
	if (cr6.eq) goto loc_82F3BDE8;
	// addi r31,r31,112
	ctx.r31.s64 = ctx.r31.s64 + 112;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825afb50
	ctx.lr = 0x82F3BDC4;
	sub_825AFB50(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82a1a728
	ctx.lr = 0x82F3BDCC;
	sub_82A1A728(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82f3bde8
	if (cr6.eq) goto loc_82F3BDE8;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x825a8a78
	ctx.lr = 0x82F3BDE0;
	sub_825A8A78(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
loc_82F3BDE8:
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

__attribute__((alias("__imp__sub_82F3BDFC"))) PPC_WEAK_FUNC(sub_82F3BDFC);
PPC_FUNC_IMPL(__imp__sub_82F3BDFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3BE00"))) PPC_WEAK_FUNC(sub_82F3BE00);
PPC_FUNC_IMPL(__imp__sub_82F3BE00) {
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
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-2984
	ctx.r9.s64 = ctx.r11.s64 + -2984;
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
	// bl 0x82f42278
	ctx.lr = 0x82F3BE38;
	sub_82F42278(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82f3be50
	if (cr6.eq) goto loc_82F3BE50;
	// bl 0x82416268
	ctx.lr = 0x82F3BE4C;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82F3BE50:
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

__attribute__((alias("__imp__sub_82F3BE68"))) PPC_WEAK_FUNC(sub_82F3BE68);
PPC_FUNC_IMPL(__imp__sub_82F3BE68) {
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
	// li r11,31
	ctx.r11.s64 = 31;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,88
	ctx.r4.s64 = 88;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82F3BE98;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82f3becc
	if (cr6.eq) goto loc_82F3BECC;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82f42220
	ctx.lr = 0x82F3BEAC;
	sub_82F42220(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-2984
	ctx.r9.s64 = ctx.r11.s64 + -2984;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r8,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r8.u32);
	// b 0x82f3bed0
	goto loc_82F3BED0;
loc_82F3BECC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82F3BED0:
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

__attribute__((alias("__imp__sub_82F3BEE8"))) PPC_WEAK_FUNC(sub_82F3BEE8);
PPC_FUNC_IMPL(__imp__sub_82F3BEE8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82f3bef8
	if (cr6.lt) goto loc_82F3BEF8;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_82F3BEF8:
	// b 0x82f3be68
	sub_82F3BE68(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3BEFC"))) PPC_WEAK_FUNC(sub_82F3BEFC);
PPC_FUNC_IMPL(__imp__sub_82F3BEFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3BF00"))) PPC_WEAK_FUNC(sub_82F3BF00);
PPC_FUNC_IMPL(__imp__sub_82F3BF00) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x830ff290
	ctx.lr = 0x82F3BF18;
	sub_830FF290(ctx, base);
	// bl 0x830ffaa8
	ctx.lr = 0x82F3BF1C;
	sub_830FFAA8(ctx, base);
	// cmplwi cr6,r3,14
	cr6.compare<uint32_t>(ctx.r3.u32, 14, xer);
	// blt cr6,0x82f3bf2c
	if (cr6.lt) goto loc_82F3BF2C;
	// cmplwi cr6,r3,15
	cr6.compare<uint32_t>(ctx.r3.u32, 15, xer);
	// ble cr6,0x82f3bf30
	if (!cr6.gt) goto loc_82F3BF30;
loc_82F3BF2C:
	// bl 0x83983a00
	ctx.lr = 0x82F3BF30;
	sub_83983A00(ctx, base);
loc_82F3BF30:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,15
	ctx.r10.s64 = 15;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// lis r9,-32229
	ctx.r9.s64 = -2112159744;
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// li r5,7
	ctx.r5.s64 = 7;
	// stb r11,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r11.u8);
	// addi r4,r9,-3076
	ctx.r4.s64 = ctx.r9.s64 + -3076;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8259cc28
	ctx.lr = 0x82F3BF58;
	sub_8259CC28(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x82F3BF64;
	sub_82E88020(ctx, base);
	// lwz r8,116(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r8,16
	cr6.compare<uint32_t>(ctx.r8.u32, 16, xer);
	// blt cr6,0x82f3bf84
	if (cr6.lt) goto loc_82F3BF84;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82F3BF84;
	sub_825952B8(ctx, base);
loc_82F3BF84:
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

__attribute__((alias("__imp__sub_82F3BF9C"))) PPC_WEAK_FUNC(sub_82F3BF9C);
PPC_FUNC_IMPL(__imp__sub_82F3BF9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3BFA0"))) PPC_WEAK_FUNC(sub_82F3BFA0);
PPC_FUNC_IMPL(__imp__sub_82F3BFA0) {
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
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-2472
	ctx.r9.s64 = ctx.r11.s64 + -2472;
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
	// bl 0x82f42278
	ctx.lr = 0x82F3BFD8;
	sub_82F42278(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82f3bff0
	if (cr6.eq) goto loc_82F3BFF0;
	// bl 0x82416268
	ctx.lr = 0x82F3BFEC;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82F3BFF0:
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

__attribute__((alias("__imp__sub_82F3C008"))) PPC_WEAK_FUNC(sub_82F3C008);
PPC_FUNC_IMPL(__imp__sub_82F3C008) {
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
	// li r11,31
	ctx.r11.s64 = 31;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,92
	ctx.r4.s64 = 92;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82F3C038;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82f3c074
	if (cr6.eq) goto loc_82F3C074;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82f42220
	ctx.lr = 0x82F3C04C;
	sub_82F42220(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-2472
	ctx.r9.s64 = ctx.r11.s64 + -2472;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r8,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r8.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r7,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r7.u32);
	// b 0x82f3c078
	goto loc_82F3C078;
loc_82F3C074:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82F3C078:
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

__attribute__((alias("__imp__sub_82F3C090"))) PPC_WEAK_FUNC(sub_82F3C090);
PPC_FUNC_IMPL(__imp__sub_82F3C090) {
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
	// lwz r11,88(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// blt cr6,0x82f3c128
	if (cr6.lt) goto loc_82F3C128;
	// beq cr6,0x82f3c104
	if (cr6.eq) goto loc_82F3C104;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// blt cr6,0x82f3c0d4
	if (cr6.lt) goto loc_82F3C0D4;
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
loc_82F3C0D4:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-2564
	ctx.r4.s64 = ctx.r11.s64 + -2564;
	// bl 0x837b0c10
	ctx.lr = 0x82F3C0E4;
	sub_837B0C10(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x82F3C0F0;
	sub_82E88020(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8387e8e0
	ctx.lr = 0x82F3C0F8;
	sub_8387E8E0(ctx, base);
	// li r10,3
	ctx.r10.s64 = 3;
	// stw r10,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r10.u32);
	// b 0x82f3c138
	goto loc_82F3C138;
loc_82F3C104:
	// bl 0x82e6f960
	ctx.lr = 0x82F3C108;
	sub_82E6F960(ctx, base);
	// bl 0x82e6fa68
	ctx.lr = 0x82F3C10C;
	sub_82E6FA68(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82f3c138
	if (cr6.eq) goto loc_82F3C138;
	// bl 0x82e6f960
	ctx.lr = 0x82F3C11C;
	sub_82E6F960(ctx, base);
	// bl 0x82e6fd48
	ctx.lr = 0x82F3C120;
	sub_82E6FD48(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// b 0x82f3c134
	goto loc_82F3C134;
loc_82F3C128:
	// bl 0x82e6f960
	ctx.lr = 0x82F3C12C;
	sub_82E6F960(ctx, base);
	// bl 0x82e6fdb0
	ctx.lr = 0x82F3C130;
	sub_82E6FDB0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
loc_82F3C134:
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
loc_82F3C138:
	// li r3,0
	ctx.r3.s64 = 0;
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

__attribute__((alias("__imp__sub_82F3C150"))) PPC_WEAK_FUNC(sub_82F3C150);
PPC_FUNC_IMPL(__imp__sub_82F3C150) {
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
	// lwz r3,8464(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8464);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82f3c1a0
	if (!cr6.eq) goto loc_82F3C1A0;
	// li r11,29
	ctx.r11.s64 = 29;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,96
	ctx.r4.s64 = 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82F3C188;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82f3c198
	if (cr6.eq) goto loc_82F3C198;
	// bl 0x82e568e0
	ctx.lr = 0x82F3C194;
	sub_82E568E0(ctx, base);
	// b 0x82f3c19c
	goto loc_82F3C19C;
loc_82F3C198:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82F3C19C:
	// stw r3,8464(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8464, ctx.r3.u32);
loc_82F3C1A0:
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

__attribute__((alias("__imp__sub_82F3C1B4"))) PPC_WEAK_FUNC(sub_82F3C1B4);
PPC_FUNC_IMPL(__imp__sub_82F3C1B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3C1B8"))) PPC_WEAK_FUNC(sub_82F3C1B8);
PPC_FUNC_IMPL(__imp__sub_82F3C1B8) {
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
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-2008
	ctx.r9.s64 = ctx.r11.s64 + -2008;
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
	// bl 0x82f42278
	ctx.lr = 0x82F3C1F0;
	sub_82F42278(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82f3c208
	if (cr6.eq) goto loc_82F3C208;
	// bl 0x82416268
	ctx.lr = 0x82F3C204;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82F3C208:
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

__attribute__((alias("__imp__sub_82F3C220"))) PPC_WEAK_FUNC(sub_82F3C220);
PPC_FUNC_IMPL(__imp__sub_82F3C220) {
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
	// lwz r11,88(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// bgt cr6,0x82f3c2f8
	if (cr6.gt) goto loc_82F3C2F8;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x82f3c260
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82F3C260;
	// bdzf 4*cr6+eq,0x82f3c2b0
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82F3C2B0;
	// bne cr6,0x82f3c2d4
	if (!cr6.eq) goto loc_82F3C2D4;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
loc_82F3C260:
	// bl 0x831021a0
	ctx.lr = 0x82F3C264;
	sub_831021A0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82f3c2f8
	if (cr6.eq) goto loc_82F3C2F8;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82da45f8
	ctx.lr = 0x82F3C274;
	sub_82DA45F8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82f3c2f8
	if (cr6.eq) goto loc_82F3C2F8;
	// lis r11,-31757
	ctx.r11.s64 = -2081226752;
	// lwz r11,8464(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8464);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82f3c2a0
	if (!cr6.eq) goto loc_82F3C2A0;
	// bl 0x82f3c150
	ctx.lr = 0x82F3C294;
	sub_82F3C150(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83103100
	ctx.lr = 0x82F3C2A0;
	sub_83103100(ctx, base);
loc_82F3C2A0:
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
loc_82F3C2A8:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82f3c2fc
	goto loc_82F3C2FC;
loc_82F3C2B0:
	// bl 0x839ec908
	ctx.lr = 0x82F3C2B4;
	sub_839EC908(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r3,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82f3c2cc
	if (cr6.eq) goto loc_82F3C2CC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83103100
	ctx.lr = 0x82F3C2CC;
	sub_83103100(ctx, base);
loc_82F3C2CC:
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
loc_82F3C2D4:
	// lwz r3,92(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82f3c2f8
	if (cr6.eq) goto loc_82F3C2F8;
	// bl 0x839ec8f8
	ctx.lr = 0x82F3C2E4;
	sub_839EC8F8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82f3c2a8
	if (cr6.eq) goto loc_82F3C2A8;
	// lwz r3,92(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// bl 0x839ec900
	ctx.lr = 0x82F3C2F8;
	sub_839EC900(ctx, base);
loc_82F3C2F8:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82F3C2FC:
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

__attribute__((alias("__imp__sub_82F3C314"))) PPC_WEAK_FUNC(sub_82F3C314);
PPC_FUNC_IMPL(__imp__sub_82F3C314) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3C318"))) PPC_WEAK_FUNC(sub_82F3C318);
PPC_FUNC_IMPL(__imp__sub_82F3C318) {
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
	// bl 0x830ff290
	ctx.lr = 0x82F3C334;
	sub_830FF290(ctx, base);
	// li r11,4
	ctx.r11.s64 = 4;
	// li r10,31
	ctx.r10.s64 = 31;
	// stw r11,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// li r4,96
	ctx.r4.s64 = 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82F3C354;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82f3c394
	if (cr6.eq) goto loc_82F3C394;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82f42220
	ctx.lr = 0x82F3C368;
	sub_82F42220(ctx, base);
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// lis r9,-32239
	ctx.r9.s64 = -2112815104;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r8,r10,-2008
	ctx.r8.s64 = ctx.r10.s64 + -2008;
	// addi r7,r9,-17088
	ctx.r7.s64 = ctx.r9.s64 + -17088;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r7,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r7.u32);
	// stw r11,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r11.u32);
	// b 0x82f3c398
	goto loc_82F3C398;
loc_82F3C394:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82F3C398:
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

__attribute__((alias("__imp__sub_82F3C3B0"))) PPC_WEAK_FUNC(sub_82F3C3B0);
PPC_FUNC_IMPL(__imp__sub_82F3C3B0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82f3c3c0
	if (cr6.lt) goto loc_82F3C3C0;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_82F3C3C0:
	// b 0x82f3c318
	sub_82F3C318(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3C3C4"))) PPC_WEAK_FUNC(sub_82F3C3C4);
PPC_FUNC_IMPL(__imp__sub_82F3C3C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3C3C8"))) PPC_WEAK_FUNC(sub_82F3C3C8);
PPC_FUNC_IMPL(__imp__sub_82F3C3C8) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82f3c220
	ctx.lr = 0x82F3C3E0;
	sub_82F3C220(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82f3c440
	if (cr6.eq) goto loc_82F3C440;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-2100
	ctx.r4.s64 = ctx.r11.s64 + -2100;
	// bl 0x837b0c10
	ctx.lr = 0x82F3C3FC;
	sub_837B0C10(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x82F3C408;
	sub_82E88020(ctx, base);
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82f3c428
	if (cr6.lt) goto loc_82F3C428;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82F3C428;
	sub_825952B8(ctx, base);
loc_82F3C428:
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
loc_82F3C440:
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
}

__attribute__((alias("__imp__sub_82F3C458"))) PPC_WEAK_FUNC(sub_82F3C458);
PPC_FUNC_IMPL(__imp__sub_82F3C458) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82F3C460;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,88(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,92(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	// addi r30,r3,88
	ctx.r30.s64 = ctx.r3.s64 + 88;
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x82f3c490
	if (cr6.eq) goto loc_82F3C490;
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
loc_82F3C484:
	// addi r11,r11,28
	ctx.r11.s64 = ctx.r11.s64 + 28;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82f3c484
	if (!cr6.eq) goto loc_82F3C484;
loc_82F3C490:
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8353b168
	ctx.lr = 0x82F3C49C;
	sub_8353B168(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82f3c67c
	if (cr6.eq) goto loc_82F3C67C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82F3C4B8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82f3c67c
	if (cr6.eq) goto loc_82F3C67C;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r4,37
	ctx.r4.s64 = 37;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82F3C4DC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82f3c530
	if (cr6.eq) goto loc_82F3C530;
	// lwz r11,104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82f3c508
	if (cr6.eq) goto loc_82F3C508;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r11,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82F3C508:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// li r10,28
	ctx.r10.s64 = 28;
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// subf r8,r9,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r9.s64;
	// divw r11,r8,r10
	ctx.r11.s32 = PPCDivide(ctx.r8.s32, ctx.r10.s32);
	// addi r7,r11,-1
	ctx.r7.s64 = ctx.r11.s64 + -1;
	// stw r7,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r7.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82F3C530:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r4,38
	ctx.r4.s64 = 38;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82F3C548;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82f3c59c
	if (cr6.eq) goto loc_82F3C59C;
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// li r9,28
	ctx.r9.s64 = 28;
	// lwz r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// subf r7,r8,r10
	ctx.r7.s64 = ctx.r10.s64 - ctx.r8.s64;
	// divw r10,r7,r9
	ctx.r10.s32 = PPCDivide(ctx.r7.s32, ctx.r9.s32);
	// addi r6,r10,-1
	ctx.r6.s64 = ctx.r10.s64 + -1;
	// cmplw cr6,r11,r6
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r6.u32, xer);
	// bge cr6,0x82f3c58c
	if (!cr6.lt) goto loc_82F3C58C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r11,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82F3C58C:
	// stw r28,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r28.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82F3C59C:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r4,36
	ctx.r4.s64 = 36;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82F3C5B4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82f3c67c
	if (cr6.eq) goto loc_82F3C67C;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r29,28
	ctx.r29.s64 = 28;
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r10,104(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// subf r8,r11,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r11.s64;
	// divw r7,r8,r29
	ctx.r7.s32 = PPCDivide(ctx.r8.s32, ctx.r29.s32);
	// cmplw cr6,r7,r10
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r10.u32, xer);
	// bgt cr6,0x82f3c5ec
	if (cr6.gt) goto loc_82F3C5EC;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82F3C5EC;
	sub_831CC188(ctx, base);
loc_82F3C5EC:
	// mulli r10,r10,28
	ctx.r10.s64 = ctx.r10.s64 * 28;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x82F3C5FC;
	sub_82E88020(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r10,104(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// subf r8,r11,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r11.s64;
	// divw r7,r8,r29
	ctx.r7.s32 = PPCDivide(ctx.r8.s32, ctx.r29.s32);
	// cmplw cr6,r7,r10
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r10.u32, xer);
	// bgt cr6,0x82f3c624
	if (cr6.gt) goto loc_82F3C624;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82F3C624;
	sub_831CC188(ctx, base);
loc_82F3C624:
	// mulli r10,r10,28
	ctx.r10.s64 = ctx.r10.s64 * 28;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82f3c63c
	if (cr6.lt) goto loc_82F3C63C;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82F3C63C:
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// addi r10,r10,-1636
	ctx.r10.s64 = ctx.r10.s64 + -1636;
loc_82F3C644:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x82f3c668
	if (cr6.eq) goto loc_82F3C668;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x82f3c644
	if (cr6.eq) goto loc_82F3C644;
loc_82F3C668:
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x82f3c678
	if (cr6.eq) goto loc_82F3C678;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82d17aa0
	ctx.lr = 0x82F3C678;
	sub_82D17AA0(ctx, base);
loc_82F3C678:
	// li r28,1
	ctx.r28.s64 = 1;
loc_82F3C67C:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3C688"))) PPC_WEAK_FUNC(sub_82F3C688);
PPC_FUNC_IMPL(__imp__sub_82F3C688) {
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
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-1544
	ctx.r9.s64 = ctx.r11.s64 + -1544;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// addi r31,r3,88
	ctx.r31.s64 = ctx.r3.s64 + 88;
	// stw r8,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r8.u32);
	// lwz r3,88(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82f3c6ec
	if (cr6.eq) goto loc_82F3C6EC;
	// addi r5,r31,12
	ctx.r5.s64 = ctx.r31.s64 + 12;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x838adab0
	ctx.lr = 0x82F3C6D8;
	sub_838ADAB0(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82F3C6EC;
	sub_825952B8(ctx, base);
loc_82F3C6EC:
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
	// bl 0x82f42278
	ctx.lr = 0x82F3C704;
	sub_82F42278(ctx, base);
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

__attribute__((alias("__imp__sub_82F3C71C"))) PPC_WEAK_FUNC(sub_82F3C71C);
PPC_FUNC_IMPL(__imp__sub_82F3C71C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3C720"))) PPC_WEAK_FUNC(sub_82F3C720);
PPC_FUNC_IMPL(__imp__sub_82F3C720) {
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
	// bl 0x82f3c688
	ctx.lr = 0x82F3C740;
	sub_82F3C688(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82f3c758
	if (cr6.eq) goto loc_82F3C758;
	// bl 0x82416268
	ctx.lr = 0x82F3C754;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82F3C758:
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

__attribute__((alias("__imp__sub_82F3C770"))) PPC_WEAK_FUNC(sub_82F3C770);
PPC_FUNC_IMPL(__imp__sub_82F3C770) {
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
	// li r11,31
	ctx.r11.s64 = 31;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,112
	ctx.r4.s64 = 112;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82F3C7A0;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82f3c7ec
	if (cr6.eq) goto loc_82F3C7EC;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82f42220
	ctx.lr = 0x82F3C7B4;
	sub_82F42220(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-1544
	ctx.r9.s64 = ctx.r11.s64 + -1544;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r8,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r8.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// stw r11,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r11.u32);
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// stw r11,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r11.u32);
	// stb r11,108(r31)
	PPC_STORE_U8(ctx.r31.u32 + 108, ctx.r11.u8);
	// b 0x82f3c7f0
	goto loc_82F3C7F0;
loc_82F3C7EC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82F3C7F0:
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

__attribute__((alias("__imp__sub_82F3C808"))) PPC_WEAK_FUNC(sub_82F3C808);
PPC_FUNC_IMPL(__imp__sub_82F3C808) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82f3c818
	if (cr6.lt) goto loc_82F3C818;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_82F3C818:
	// b 0x82f3c770
	sub_82F3C770(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3C81C"))) PPC_WEAK_FUNC(sub_82F3C81C);
PPC_FUNC_IMPL(__imp__sub_82F3C81C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3C820"))) PPC_WEAK_FUNC(sub_82F3C820);
PPC_FUNC_IMPL(__imp__sub_82F3C820) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x82F3C828;
	__savegprlr_25(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r11,2376(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2376);
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
	// bl 0x82cbc378
	ctx.lr = 0x82F3C844;
	sub_82CBC378(ctx, base);
	// li r25,2
	ctx.r25.s64 = 2;
	// lwz r26,96(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r28,100(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplw cr6,r26,r28
	cr6.compare<uint32_t>(ctx.r26.u32, ctx.r28.u32, xer);
	// beq cr6,0x82f3c8f8
	if (cr6.eq) goto loc_82F3C8F8;
	// addi r27,r31,88
	ctx.r27.s64 = ctx.r31.s64 + 88;
	// addi r31,r26,28
	ctx.r31.s64 = ctx.r26.s64 + 28;
	// li r29,15
	ctx.r29.s64 = 15;
	// li r30,0
	ctx.r30.s64 = 0;
loc_82F3C868:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82f3c87c
	if (cr6.lt) goto loc_82F3C87C;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// b 0x82f3c880
	goto loc_82F3C880;
loc_82F3C87C:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
loc_82F3C880:
	// stw r29,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r29.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r30,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r30.u32);
	// stb r30,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r30.u8);
loc_82F3C890:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82f3c890
	if (!cr6.eq) goto loc_82F3C890;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x82F3C8B4;
	sub_8259CC28(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8291fdc8
	ctx.lr = 0x82F3C8C0;
	sub_8291FDC8(ctx, base);
	// lwz r10,132(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82f3c8dc
	if (cr6.lt) goto loc_82F3C8DC;
	// stw r25,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r25.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x825952b8
	ctx.lr = 0x82F3C8DC;
	sub_825952B8(ctx, base);
loc_82F3C8DC:
	// addi r31,r31,88
	ctx.r31.s64 = ctx.r31.s64 + 88;
	// stw r29,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r29.u32);
	// stw r30,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r30.u32);
	// addi r11,r31,-28
	ctx.r11.s64 = ctx.r31.s64 + -28;
	// stb r30,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r30.u8);
	// cmplw cr6,r11,r28
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, xer);
	// bne cr6,0x82f3c868
	if (!cr6.eq) goto loc_82F3C868;
loc_82F3C8F8:
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(ctx.r26.u32, 0, xer);
	// beq cr6,0x82f3c930
	if (cr6.eq) goto loc_82F3C930;
	// mr r31,r26
	ctx.r31.u64 = ctx.r26.u64;
	// cmplw cr6,r26,r28
	cr6.compare<uint32_t>(ctx.r26.u32, ctx.r28.u32, xer);
	// beq cr6,0x82f3c920
	if (cr6.eq) goto loc_82F3C920;
loc_82F3C90C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d636d8
	ctx.lr = 0x82F3C914;
	sub_82D636D8(ctx, base);
	// addi r31,r31,88
	ctx.r31.s64 = ctx.r31.s64 + 88;
	// cmplw cr6,r31,r28
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r28.u32, xer);
	// bne cr6,0x82f3c90c
	if (!cr6.eq) goto loc_82F3C90C;
loc_82F3C920:
	// stw r25,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r25.u32);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x825952b8
	ctx.lr = 0x82F3C930;
	sub_825952B8(ctx, base);
loc_82F3C930:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3C938"))) PPC_WEAK_FUNC(sub_82F3C938);
PPC_FUNC_IMPL(__imp__sub_82F3C938) {
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
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-1072
	ctx.r9.s64 = ctx.r11.s64 + -1072;
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
	// bl 0x82f42278
	ctx.lr = 0x82F3C970;
	sub_82F42278(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82f3c988
	if (cr6.eq) goto loc_82F3C988;
	// bl 0x82416268
	ctx.lr = 0x82F3C984;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82F3C988:
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

__attribute__((alias("__imp__sub_82F3C9A0"))) PPC_WEAK_FUNC(sub_82F3C9A0);
PPC_FUNC_IMPL(__imp__sub_82F3C9A0) {
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
	// li r11,31
	ctx.r11.s64 = 31;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,88
	ctx.r4.s64 = 88;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82F3C9D0;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82f3ca04
	if (cr6.eq) goto loc_82F3CA04;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82f42220
	ctx.lr = 0x82F3C9E4;
	sub_82F42220(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-1072
	ctx.r9.s64 = ctx.r11.s64 + -1072;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r8,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r8.u32);
	// b 0x82f3ca08
	goto loc_82F3CA08;
loc_82F3CA04:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82F3CA08:
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

__attribute__((alias("__imp__sub_82F3CA20"))) PPC_WEAK_FUNC(sub_82F3CA20);
PPC_FUNC_IMPL(__imp__sub_82F3CA20) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82f3ca30
	if (cr6.lt) goto loc_82F3CA30;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_82F3CA30:
	// b 0x82f3c9a0
	sub_82F3C9A0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3CA34"))) PPC_WEAK_FUNC(sub_82F3CA34);
PPC_FUNC_IMPL(__imp__sub_82F3CA34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3CA38"))) PPC_WEAK_FUNC(sub_82F3CA38);
PPC_FUNC_IMPL(__imp__sub_82F3CA38) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x830ff290
	ctx.lr = 0x82F3CA50;
	sub_830FF290(ctx, base);
	// li r11,4
	ctx.r11.s64 = 4;
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// stw r11,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r10,-1172
	ctx.r4.s64 = ctx.r10.s64 + -1172;
	// bl 0x837b0c10
	ctx.lr = 0x82F3CA68;
	sub_837B0C10(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x82F3CA74;
	sub_82E88020(ctx, base);
	// lwz r9,116(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// blt cr6,0x82f3ca94
	if (cr6.lt) goto loc_82F3CA94;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82F3CA94;
	sub_825952B8(ctx, base);
loc_82F3CA94:
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

__attribute__((alias("__imp__sub_82F3CAAC"))) PPC_WEAK_FUNC(sub_82F3CAAC);
PPC_FUNC_IMPL(__imp__sub_82F3CAAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3CAB0"))) PPC_WEAK_FUNC(sub_82F3CAB0);
PPC_FUNC_IMPL(__imp__sub_82F3CAB0) {
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
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-824
	ctx.r9.s64 = ctx.r11.s64 + -824;
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
	// bl 0x82f42278
	ctx.lr = 0x82F3CAE8;
	sub_82F42278(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82f3cb00
	if (cr6.eq) goto loc_82F3CB00;
	// bl 0x82416268
	ctx.lr = 0x82F3CAFC;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82F3CB00:
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

__attribute__((alias("__imp__sub_82F3CB18"))) PPC_WEAK_FUNC(sub_82F3CB18);
PPC_FUNC_IMPL(__imp__sub_82F3CB18) {
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
	// li r11,31
	ctx.r11.s64 = 31;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,96
	ctx.r4.s64 = 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82F3CB48;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82f3cb88
	if (cr6.eq) goto loc_82F3CB88;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82f42220
	ctx.lr = 0x82F3CB5C;
	sub_82F42220(ctx, base);
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// lis r9,-32239
	ctx.r9.s64 = -2112815104;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r8,r10,-824
	ctx.r8.s64 = ctx.r10.s64 + -824;
	// addi r7,r9,-17088
	ctx.r7.s64 = ctx.r9.s64 + -17088;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r7,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r7.u32);
	// stw r11,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r11.u32);
	// b 0x82f3cb8c
	goto loc_82F3CB8C;
loc_82F3CB88:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82F3CB8C:
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

__attribute__((alias("__imp__sub_82F3CBA4"))) PPC_WEAK_FUNC(sub_82F3CBA4);
PPC_FUNC_IMPL(__imp__sub_82F3CBA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3CBA8"))) PPC_WEAK_FUNC(sub_82F3CBA8);
PPC_FUNC_IMPL(__imp__sub_82F3CBA8) {
	PPC_FUNC_PROLOGUE();
	// b 0x82d73e70
	sub_82D73E70(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3CBAC"))) PPC_WEAK_FUNC(sub_82F3CBAC);
PPC_FUNC_IMPL(__imp__sub_82F3CBAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3CBB0"))) PPC_WEAK_FUNC(sub_82F3CBB0);
PPC_FUNC_IMPL(__imp__sub_82F3CBB0) {
	PPC_FUNC_PROLOGUE();
	// b 0x82d73f90
	sub_82D73F90(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3CBB4"))) PPC_WEAK_FUNC(sub_82F3CBB4);
PPC_FUNC_IMPL(__imp__sub_82F3CBB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3CBB8"))) PPC_WEAK_FUNC(sub_82F3CBB8);
PPC_FUNC_IMPL(__imp__sub_82F3CBB8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82f3cbc8
	if (cr6.lt) goto loc_82F3CBC8;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_82F3CBC8:
	// b 0x82f3cb18
	sub_82F3CB18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3CBCC"))) PPC_WEAK_FUNC(sub_82F3CBCC);
PPC_FUNC_IMPL(__imp__sub_82F3CBCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3CBD0"))) PPC_WEAK_FUNC(sub_82F3CBD0);
PPC_FUNC_IMPL(__imp__sub_82F3CBD0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82F3CBD8;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// bl 0x83105358
	ctx.lr = 0x82F3CBE8;
	sub_83105358(ctx, base);
	// lwz r11,88(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 88);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// bgt cr6,0x82f3ccfc
	if (cr6.gt) goto loc_82F3CCFC;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x82f3cc68
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82F3CC68;
	// bdzf 4*cr6+eq,0x82f3ccb8
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82F3CCB8;
	// bne cr6,0x82f3ccd0
	if (!cr6.eq) goto loc_82F3CCD0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82F3CC20;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82f3cc40
	if (cr6.eq) goto loc_82F3CC40;
	// li r11,3
	ctx.r11.s64 = 3;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,88(r30)
	PPC_STORE_U32(ctx.r30.u32 + 88, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82F3CC40:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82F3CC54;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r9,88(r30)
	PPC_STORE_U32(ctx.r30.u32 + 88, ctx.r9.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82F3CC68:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82F3CC7C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82f3ccfc
	if (cr6.eq) goto loc_82F3CCFC;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82F3CC9C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cntlzw r9,r3
	ctx.r9.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// rlwinm r11,r9,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// addi r8,r11,2
	ctx.r8.s64 = ctx.r11.s64 + 2;
	// stw r8,88(r30)
	PPC_STORE_U32(ctx.r30.u32 + 88, ctx.r8.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82F3CCB8:
	// bl 0x830ff290
	ctx.lr = 0x82F3CCBC;
	sub_830FF290(ctx, base);
	// li r29,1
	ctx.r29.s64 = 1;
	// stb r29,60(r3)
	PPC_STORE_U8(ctx.r3.u32 + 60, ctx.r29.u8);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82F3CCD0:
	// bl 0x82d86488
	ctx.lr = 0x82F3CCD4;
	sub_82D86488(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-920
	ctx.r4.s64 = ctx.r11.s64 + -920;
	// bl 0x837b0c10
	ctx.lr = 0x82F3CCE4;
	sub_837B0C10(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82e88020
	ctx.lr = 0x82F3CCF0;
	sub_82E88020(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8387e8e0
	ctx.lr = 0x82F3CCF8;
	sub_8387E8E0(ctx, base);
	// li r29,1
	ctx.r29.s64 = 1;
loc_82F3CCFC:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3CD08"))) PPC_WEAK_FUNC(sub_82F3CD08);
PPC_FUNC_IMPL(__imp__sub_82F3CD08) {
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
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-88
	ctx.r9.s64 = ctx.r11.s64 + -88;
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
	// bl 0x82f42278
	ctx.lr = 0x82F3CD40;
	sub_82F42278(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82f3cd58
	if (cr6.eq) goto loc_82F3CD58;
	// bl 0x82416268
	ctx.lr = 0x82F3CD54;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82F3CD58:
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

__attribute__((alias("__imp__sub_82F3CD70"))) PPC_WEAK_FUNC(sub_82F3CD70);
PPC_FUNC_IMPL(__imp__sub_82F3CD70) {
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
	// li r11,31
	ctx.r11.s64 = 31;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,88
	ctx.r4.s64 = 88;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82F3CDA0;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82f3cdd4
	if (cr6.eq) goto loc_82F3CDD4;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82f42220
	ctx.lr = 0x82F3CDB4;
	sub_82F42220(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-88
	ctx.r9.s64 = ctx.r11.s64 + -88;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r8,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r8.u32);
	// b 0x82f3cdd8
	goto loc_82F3CDD8;
loc_82F3CDD4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82F3CDD8:
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

__attribute__((alias("__imp__sub_82F3CDF0"))) PPC_WEAK_FUNC(sub_82F3CDF0);
PPC_FUNC_IMPL(__imp__sub_82F3CDF0) {
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
	// bl 0x82d34e50
	ctx.lr = 0x82F3CE00;
	sub_82D34E50(ctx, base);
	// bl 0x82d34d38
	ctx.lr = 0x82F3CE04;
	sub_82D34D38(ctx, base);
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
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F3CE20"))) PPC_WEAK_FUNC(sub_82F3CE20);
PPC_FUNC_IMPL(__imp__sub_82F3CE20) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82f3ce30
	if (cr6.lt) goto loc_82F3CE30;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_82F3CE30:
	// b 0x82f3cd70
	sub_82F3CD70(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3CE34"))) PPC_WEAK_FUNC(sub_82F3CE34);
PPC_FUNC_IMPL(__imp__sub_82F3CE34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3CE38"))) PPC_WEAK_FUNC(sub_82F3CE38);
PPC_FUNC_IMPL(__imp__sub_82F3CE38) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad4
	ctx.lr = 0x82F3CE40;
	__savegprlr_23(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82d34e50
	ctx.lr = 0x82F3CE48;
	sub_82D34E50(ctx, base);
	// li r4,6
	ctx.r4.s64 = 6;
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x82d35038
	ctx.lr = 0x82F3CE54;
	sub_82D35038(ctx, base);
	// bl 0x82d26ed8
	ctx.lr = 0x82F3CE58;
	sub_82D26ED8(ctx, base);
	// li r4,27
	ctx.r4.s64 = 27;
	// bl 0x82d26900
	ctx.lr = 0x82F3CE60;
	sub_82D26900(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82d17aa0
	ctx.lr = 0x82F3CE68;
	sub_82D17AA0(ctx, base);
	// li r28,0
	ctx.r28.s64 = 0;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// mr r27,r28
	ctx.r27.u64 = ctx.r28.u64;
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// li r25,15
	ctx.r25.s64 = 15;
	// li r23,2
	ctx.r23.s64 = 2;
	// ori r24,r10,24064
	ctx.r24.u64 = ctx.r10.u64 | 24064;
	// addi r26,r11,-670
	ctx.r26.s64 = ctx.r11.s64 + -670;
loc_82F3CE8C:
	// bl 0x831156e8
	ctx.lr = 0x82F3CE90;
	sub_831156E8(ctx, base);
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_82F3CEA0:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x82f3cec4
	if (cr6.eq) goto loc_82F3CEC4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x82f3cea0
	if (cr6.eq) goto loc_82F3CEA0;
loc_82F3CEC4:
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne cr6,0x82f3cf54
	if (!cr6.eq) goto loc_82F3CF54;
	// stw r25,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r25.u32);
	// lis r4,81
	ctx.r4.s64 = 5308416;
	// stw r28,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r28.u32);
	// addi r5,r27,1
	ctx.r5.s64 = ctx.r27.s64 + 1;
	// stb r28,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r28.u8);
	// ori r4,r4,308
	ctx.r4.u64 = ctx.r4.u64 | 308;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82d042a8
	ctx.lr = 0x82F3CEEC;
	sub_82D042A8(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// lwz r30,96(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bge cr6,0x82f3cf00
	if (!cr6.lt) goto loc_82F3CF00;
	// addi r30,r1,96
	ctx.r30.s64 = ctx.r1.s64 + 96;
loc_82F3CF00:
	// bl 0x831156e8
	ctx.lr = 0x82F3CF04;
	sub_831156E8(ctx, base);
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r31,r11,4
	ctx.r31.s64 = ctx.r11.s64 + 4;
	// beq cr6,0x82f3cf2c
	if (cr6.eq) goto loc_82F3CF2C;
	// li r5,46
	ctx.r5.s64 = 46;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831ce980
	ctx.lr = 0x82F3CF28;
	sub_831CE980(ctx, base);
	// stb r28,45(r31)
	PPC_STORE_U8(ctx.r31.u32 + 45, ctx.r28.u8);
loc_82F3CF2C:
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82f3cf48
	if (cr6.lt) goto loc_82F3CF48;
	// stw r23,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r23.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x825952b8
	ctx.lr = 0x82F3CF48;
	sub_825952B8(ctx, base);
loc_82F3CF48:
	// stw r25,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r25.u32);
	// stw r28,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r28.u32);
	// stb r28,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r28.u8);
loc_82F3CF54:
	// addi r29,r29,2800
	ctx.r29.s64 = ctx.r29.s64 + 2800;
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// cmplw cr6,r29,r24
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r24.u32, xer);
	// blt cr6,0x82f3ce8c
	if (cr6.lt) goto loc_82F3CE8C;
	// bl 0x831156e8
	ctx.lr = 0x82F3CF68;
	sub_831156E8(ctx, base);
	// bl 0x831156e8
	ctx.lr = 0x82F3CF6C;
	sub_831156E8(ctx, base);
	// lwz r30,52(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// li r4,18
	ctx.r4.s64 = 18;
	// addis r31,r30,5
	ctx.r31.s64 = ctx.r30.s64 + 327680;
	// addi r31,r31,14904
	ctx.r31.s64 = ctx.r31.s64 + 14904;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83123898
	ctx.lr = 0x82F3CF84;
	sub_83123898(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,-1
	ctx.r4.s64 = -1;
	// bl 0x83123780
	ctx.lr = 0x82F3CF90;
	sub_83123780(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x83123978
	ctx.lr = 0x82F3CFA0;
	sub_83123978(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x83123978
	ctx.lr = 0x82F3CFB0;
	sub_83123978(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82a47360
	ctx.lr = 0x82F3CFBC;
	sub_82A47360(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x831238a8
	ctx.lr = 0x82F3CFC8;
	sub_831238A8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831340b8
	ctx.lr = 0x82F3CFD4;
	sub_831340B8(ctx, base);
	// addis r30,r30,6
	ctx.r30.s64 = ctx.r30.s64 + 393216;
	// addi r30,r30,-30316
	ctx.r30.s64 = ctx.r30.s64 + -30316;
	// bl 0x825d8390
	ctx.lr = 0x82F3CFE0;
	sub_825D8390(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// li r29,1
	ctx.r29.s64 = 1;
	// add r11,r10,r30
	ctx.r11.u64 = ctx.r10.u64 + ctx.r30.u64;
	// stb r29,44(r30)
	PPC_STORE_U8(ctx.r30.u32 + 44, ctx.r29.u8);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// stb r29,45(r11)
	PPC_STORE_U8(ctx.r11.u32 + 45, ctx.r29.u8);
	// stb r28,69(r11)
	PPC_STORE_U8(ctx.r11.u32 + 69, ctx.r28.u8);
	// stb r10,117(r11)
	PPC_STORE_U8(ctx.r11.u32 + 117, ctx.r10.u8);
loc_82F3D000:
	// addi r30,r5,1
	ctx.r30.s64 = ctx.r5.s64 + 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x83123900
	ctx.lr = 0x82F3D010;
	sub_83123900(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// cmplwi cr6,r30,5
	cr6.compare<uint32_t>(ctx.r30.u32, 5, xer);
	// blt cr6,0x82f3d000
	if (cr6.lt) goto loc_82F3D000;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83123838
	ctx.lr = 0x82F3D028;
	sub_83123838(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83123860
	ctx.lr = 0x82F3D034;
	sub_83123860(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82583338
	ctx.lr = 0x82F3D040;
	sub_82583338(ctx, base);
	// bl 0x830ff290
	ctx.lr = 0x82F3D044;
	sub_830FF290(ctx, base);
	// stb r29,64(r3)
	PPC_STORE_U8(ctx.r3.u32 + 64, ctx.r29.u8);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3D050"))) PPC_WEAK_FUNC(sub_82F3D050);
PPC_FUNC_IMPL(__imp__sub_82F3D050) {
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
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,376
	ctx.r9.s64 = ctx.r11.s64 + 376;
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
	// bl 0x82f42278
	ctx.lr = 0x82F3D088;
	sub_82F42278(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82f3d0a0
	if (cr6.eq) goto loc_82F3D0A0;
	// bl 0x82416268
	ctx.lr = 0x82F3D09C;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82F3D0A0:
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

__attribute__((alias("__imp__sub_82F3D0B8"))) PPC_WEAK_FUNC(sub_82F3D0B8);
PPC_FUNC_IMPL(__imp__sub_82F3D0B8) {
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
	// li r11,31
	ctx.r11.s64 = 31;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,92
	ctx.r4.s64 = 92;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82F3D0E8;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82f3d124
	if (cr6.eq) goto loc_82F3D124;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82f42220
	ctx.lr = 0x82F3D0FC;
	sub_82F42220(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,376
	ctx.r9.s64 = ctx.r11.s64 + 376;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r8,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r8.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r7,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r7.u32);
	// b 0x82f3d128
	goto loc_82F3D128;
loc_82F3D124:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82F3D128:
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

__attribute__((alias("__imp__sub_82F3D140"))) PPC_WEAK_FUNC(sub_82F3D140);
PPC_FUNC_IMPL(__imp__sub_82F3D140) {
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
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82d17aa0
	ctx.lr = 0x82F3D154;
	sub_82D17AA0(ctx, base);
	// bl 0x82d34e50
	ctx.lr = 0x82F3D158;
	sub_82D34E50(ctx, base);
	// li r4,6
	ctx.r4.s64 = 6;
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x82d35038
	ctx.lr = 0x82F3D164;
	sub_82D35038(ctx, base);
	// bl 0x831021a0
	ctx.lr = 0x82F3D168;
	sub_831021A0(ctx, base);
	// lis r4,261
	ctx.r4.s64 = 17104896;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,5
	ctx.r4.u64 = ctx.r4.u64 | 5;
	// bl 0x83102a08
	ctx.lr = 0x82F3D178;
	sub_83102A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F3D188"))) PPC_WEAK_FUNC(sub_82F3D188);
PPC_FUNC_IMPL(__imp__sub_82F3D188) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r10,261
	ctx.r10.s64 = 17104896;
	// lwz r9,4(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// ori r8,r10,6
	ctx.r8.u64 = ctx.r10.u64 | 6;
	// li r3,1
	ctx.r3.s64 = 1;
	// cmplw cr6,r9,r8
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, xer);
	// beq cr6,0x82f3d1ac
	if (cr6.eq) goto loc_82F3D1AC;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// b 0x83824d80
	sub_83824D80(ctx, base);
	return;
loc_82F3D1AC:
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,88(r11)
	PPC_STORE_U32(ctx.r11.u32 + 88, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F3D1B8"))) PPC_WEAK_FUNC(sub_82F3D1B8);
PPC_FUNC_IMPL(__imp__sub_82F3D1B8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82f3d1c8
	if (cr6.lt) goto loc_82F3D1C8;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_82F3D1C8:
	// b 0x82f3d0b8
	sub_82F3D0B8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3D1CC"))) PPC_WEAK_FUNC(sub_82F3D1CC);
PPC_FUNC_IMPL(__imp__sub_82F3D1CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3D1D0"))) PPC_WEAK_FUNC(sub_82F3D1D0);
PPC_FUNC_IMPL(__imp__sub_82F3D1D0) {
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
	// lwz r11,88(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x82f3d204
	if (!cr6.eq) goto loc_82F3D204;
	// bl 0x82d34e50
	ctx.lr = 0x82F3D1F4;
	sub_82D34E50(ctx, base);
	// bl 0x82d34d38
	ctx.lr = 0x82F3D1F8;
	sub_82D34D38(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82f3d21c
	if (!cr6.eq) goto loc_82F3D21C;
loc_82F3D204:
	// li r3,0
	ctx.r3.s64 = 0;
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
loc_82F3D21C:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,284
	ctx.r4.s64 = ctx.r11.s64 + 284;
	// bl 0x837b0c10
	ctx.lr = 0x82F3D22C;
	sub_837B0C10(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x82F3D238;
	sub_82E88020(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8387e8e0
	ctx.lr = 0x82F3D240;
	sub_8387E8E0(ctx, base);
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

__attribute__((alias("__imp__sub_82F3D258"))) PPC_WEAK_FUNC(sub_82F3D258);
PPC_FUNC_IMPL(__imp__sub_82F3D258) {
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
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,1120
	ctx.r9.s64 = ctx.r11.s64 + 1120;
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
	// bl 0x82f42278
	ctx.lr = 0x82F3D290;
	sub_82F42278(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82f3d2a8
	if (cr6.eq) goto loc_82F3D2A8;
	// bl 0x82416268
	ctx.lr = 0x82F3D2A4;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82F3D2A8:
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

__attribute__((alias("__imp__sub_82F3D2C0"))) PPC_WEAK_FUNC(sub_82F3D2C0);
PPC_FUNC_IMPL(__imp__sub_82F3D2C0) {
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
	// li r11,31
	ctx.r11.s64 = 31;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,96
	ctx.r4.s64 = 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82F3D2F0;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82f3d330
	if (cr6.eq) goto loc_82F3D330;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82f42220
	ctx.lr = 0x82F3D304;
	sub_82F42220(ctx, base);
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// lis r9,-32239
	ctx.r9.s64 = -2112815104;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r8,r10,1120
	ctx.r8.s64 = ctx.r10.s64 + 1120;
	// addi r7,r9,-17088
	ctx.r7.s64 = ctx.r9.s64 + -17088;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r7,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r7.u32);
	// stb r11,92(r31)
	PPC_STORE_U8(ctx.r31.u32 + 92, ctx.r11.u8);
	// b 0x82f3d334
	goto loc_82F3D334;
loc_82F3D330:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82F3D334:
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

__attribute__((alias("__imp__sub_82F3D34C"))) PPC_WEAK_FUNC(sub_82F3D34C);
PPC_FUNC_IMPL(__imp__sub_82F3D34C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3D350"))) PPC_WEAK_FUNC(sub_82F3D350);
PPC_FUNC_IMPL(__imp__sub_82F3D350) {
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
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82d17aa0
	ctx.lr = 0x82F3D36C;
	sub_82D17AA0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,92(r31)
	PPC_STORE_U8(ctx.r31.u32 + 92, ctx.r11.u8);
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

__attribute__((alias("__imp__sub_82F3D388"))) PPC_WEAK_FUNC(sub_82F3D388);
PPC_FUNC_IMPL(__imp__sub_82F3D388) {
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
	// bl 0x83824d80
	ctx.lr = 0x82F3D3A8;
	sub_83824D80(ctx, base);
	// lis r11,264
	ctx.r11.s64 = 17301504;
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// li r3,0
	ctx.r3.s64 = 0;
	// ori r10,r11,20480
	ctx.r10.u64 = ctx.r11.u64 | 20480;
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// bne cr6,0x82f3d3d0
	if (!cr6.eq) goto loc_82F3D3D0;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// stb r10,92(r31)
	PPC_STORE_U8(ctx.r31.u32 + 92, ctx.r10.u8);
loc_82F3D3D0:
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

__attribute__((alias("__imp__sub_82F3D3E8"))) PPC_WEAK_FUNC(sub_82F3D3E8);
PPC_FUNC_IMPL(__imp__sub_82F3D3E8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82f3d3f8
	if (cr6.lt) goto loc_82F3D3F8;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_82F3D3F8:
	// b 0x82f3d2c0
	sub_82F3D2C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3D3FC"))) PPC_WEAK_FUNC(sub_82F3D3FC);
PPC_FUNC_IMPL(__imp__sub_82F3D3FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3D400"))) PPC_WEAK_FUNC(sub_82F3D400);
PPC_FUNC_IMPL(__imp__sub_82F3D400) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,92(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 92);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82f3d488
	if (cr6.eq) goto loc_82F3D488;
	// lis r31,-31756
	ctx.r31.s64 = -2081161216;
	// lbz r11,24928(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 24928);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82f3d444
	if (cr6.eq) goto loc_82F3D444;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82d17b90
	ctx.lr = 0x82F3D43C;
	sub_82D17B90(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,24928(r31)
	PPC_STORE_U8(ctx.r31.u32 + 24928, ctx.r11.u8);
loc_82F3D444:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,1024
	ctx.r4.s64 = ctx.r11.s64 + 1024;
	// bl 0x837b0c10
	ctx.lr = 0x82F3D454;
	sub_837B0C10(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82e88020
	ctx.lr = 0x82F3D460;
	sub_82E88020(ctx, base);
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82f3d480
	if (cr6.lt) goto loc_82F3D480;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82F3D480;
	sub_825952B8(ctx, base);
loc_82F3D480:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82f3d48c
	goto loc_82F3D48C;
loc_82F3D488:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82F3D48C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
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

__attribute__((alias("__imp__sub_82F3D4A4"))) PPC_WEAK_FUNC(sub_82F3D4A4);
PPC_FUNC_IMPL(__imp__sub_82F3D4A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3D4A8"))) PPC_WEAK_FUNC(sub_82F3D4A8);
PPC_FUNC_IMPL(__imp__sub_82F3D4A8) {
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
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,1864
	ctx.r9.s64 = ctx.r11.s64 + 1864;
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
	// bl 0x82f42278
	ctx.lr = 0x82F3D4E0;
	sub_82F42278(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82f3d4f8
	if (cr6.eq) goto loc_82F3D4F8;
	// bl 0x82416268
	ctx.lr = 0x82F3D4F4;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82F3D4F8:
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

__attribute__((alias("__imp__sub_82F3D510"))) PPC_WEAK_FUNC(sub_82F3D510);
PPC_FUNC_IMPL(__imp__sub_82F3D510) {
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
	// li r11,31
	ctx.r11.s64 = 31;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,92
	ctx.r4.s64 = 92;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82F3D540;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82f3d57c
	if (cr6.eq) goto loc_82F3D57C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82f42220
	ctx.lr = 0x82F3D554;
	sub_82F42220(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,1864
	ctx.r9.s64 = ctx.r11.s64 + 1864;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// li r7,1
	ctx.r7.s64 = 1;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r8,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r8.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r7,88(r31)
	PPC_STORE_U8(ctx.r31.u32 + 88, ctx.r7.u8);
	// b 0x82f3d580
	goto loc_82F3D580;
loc_82F3D57C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82F3D580:
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

