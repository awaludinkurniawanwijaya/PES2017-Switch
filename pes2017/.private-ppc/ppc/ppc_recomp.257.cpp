#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_83054138"))) PPC_WEAK_FUNC(sub_83054138);
PPC_FUNC_IMPL(__imp__sub_83054138) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,88(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(ctx.r11.u32, 4, xer);
	// bgt cr6,0x83054290
	if (cr6.gt) goto loc_83054290;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x83054198
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83054198;
	// bdzf 4*cr6+eq,0x830541b0
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_830541B0;
	// bdzf 4*cr6+eq,0x83054238
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83054238;
	// bne cr6,0x83054278
	if (!cr6.eq) goto loc_83054278;
	// bl 0x82e6f960
	ctx.lr = 0x83054174;
	sub_82E6F960(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82e6fa08
	ctx.lr = 0x8305417C;
	sub_82E6FA08(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// subfic r10,r11,0
	xer.ca = ctx.r11.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r11.s64;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// rlwinm r11,r9,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r8,r11,3
	ctx.r8.s64 = ctx.r11.s64 + 3;
	// stw r8,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r8.u32);
	// b 0x83054298
	goto loc_83054298;
loc_83054198:
	// bl 0x82d89830
	ctx.lr = 0x8305419C;
	sub_82D89830(ctx, base);
	// bl 0x82e6f960
	ctx.lr = 0x830541A0;
	sub_82E6F960(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82e6fa38
	ctx.lr = 0x830541A8;
	sub_82E6FA38(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// b 0x83054294
	goto loc_83054294;
loc_830541B0:
	// bl 0x82e6f960
	ctx.lr = 0x830541B4;
	sub_82E6F960(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82e6fa50
	ctx.lr = 0x830541BC;
	sub_82E6FA50(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83054298
	if (cr6.eq) goto loc_83054298;
	// bl 0x82d897b0
	ctx.lr = 0x830541CC;
	sub_82D897B0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83054230
	if (!cr6.eq) goto loc_83054230;
	// lwz r11,92(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83054230
	if (!cr6.eq) goto loc_83054230;
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// li r6,3
	ctx.r6.s64 = 3;
	// addi r11,r11,-31780
	ctx.r11.s64 = ctx.r11.s64 + -31780;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r11,-24
	ctx.r3.s64 = ctx.r11.s64 + -24;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2ee48
	ctx.lr = 0x83054200;
	sub_82D2EE48(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83054230
	if (cr6.eq) goto loc_83054230;
	// stw r3,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r3.u32);
	// lis r4,206
	ctx.r4.s64 = 13500416;
	// ori r4,r4,303
	ctx.r4.u64 = ctx.r4.u64 | 303;
	// bl 0x82d2ada8
	ctx.lr = 0x83054218;
	sub_82D2ADA8(ctx, base);
	// li r4,3
	ctx.r4.s64 = 3;
	// lwz r3,92(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// bl 0x82d19a30
	ctx.lr = 0x83054224;
	sub_82D19A30(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,92(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// bl 0x83103100
	ctx.lr = 0x83054230;
	sub_83103100(ctx, base);
loc_83054230:
	// li r11,3
	ctx.r11.s64 = 3;
	// b 0x83054294
	goto loc_83054294;
loc_83054238:
	// lwz r11,92(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83054298
	if (!cr6.eq) goto loc_83054298;
	// bl 0x82d73f90
	ctx.lr = 0x83054248;
	sub_82D73F90(ctx, base);
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-31780
	ctx.r4.s64 = ctx.r11.s64 + -31780;
	// bl 0x837b0c10
	ctx.lr = 0x83054258;
	sub_837B0C10(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x83054264;
	sub_82E88020(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8387e8e0
	ctx.lr = 0x8305426C;
	sub_8387E8E0(ctx, base);
	// li r10,4
	ctx.r10.s64 = 4;
	// stw r10,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r10.u32);
	// b 0x83054298
	goto loc_83054298;
loc_83054278:
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
loc_83054290:
	// li r11,0
	ctx.r11.s64 = 0;
loc_83054294:
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
loc_83054298:
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

__attribute__((alias("__imp__sub_830542B0"))) PPC_WEAK_FUNC(sub_830542B0);
PPC_FUNC_IMPL(__imp__sub_830542B0) {
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
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-31424
	ctx.r9.s64 = ctx.r11.s64 + -31424;
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
	ctx.lr = 0x830542E8;
	sub_82F42278(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x83054300
	if (cr6.eq) goto loc_83054300;
	// bl 0x82416268
	ctx.lr = 0x830542FC;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_83054300:
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

__attribute__((alias("__imp__sub_83054318"))) PPC_WEAK_FUNC(sub_83054318);
PPC_FUNC_IMPL(__imp__sub_83054318) {
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
	ctx.lr = 0x83054348;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8305437c
	if (cr6.eq) goto loc_8305437C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82f42220
	ctx.lr = 0x8305435C;
	sub_82F42220(ctx, base);
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-31424
	ctx.r9.s64 = ctx.r11.s64 + -31424;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r8,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r8.u32);
	// b 0x83054380
	goto loc_83054380;
loc_8305437C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83054380:
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

__attribute__((alias("__imp__sub_83054398"))) PPC_WEAK_FUNC(sub_83054398);
PPC_FUNC_IMPL(__imp__sub_83054398) {
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
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82daa920
	ctx.lr = 0x830543B4;
	sub_82DAA920(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830543c4
	if (cr6.eq) goto loc_830543C4;
	// bl 0x82daa958
	ctx.lr = 0x830543C4;
	sub_82DAA958(ctx, base);
loc_830543C4:
	// bl 0x82aa87f0
	ctx.lr = 0x830543C8;
	sub_82AA87F0(ctx, base);
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// bne cr6,0x83054414
	if (!cr6.eq) goto loc_83054414;
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r11,r11,-31512
	ctx.r11.s64 = ctx.r11.s64 + -31512;
	// addi r4,r11,-24
	ctx.r4.s64 = ctx.r11.s64 + -24;
	// bl 0x837b0c10
	ctx.lr = 0x830543E4;
	sub_837B0C10(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82e88020
	ctx.lr = 0x830543F0;
	sub_82E88020(ctx, base);
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x830544a4
	if (cr6.lt) goto loc_830544A4;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x83054410;
	sub_825952B8(ctx, base);
	// b 0x830544a4
	goto loc_830544A4;
loc_83054414:
	// bl 0x82d86078
	ctx.lr = 0x83054418;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83054430
	if (!cr6.eq) goto loc_83054430;
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// addi r11,r11,-31512
	ctx.r11.s64 = ctx.r11.s64 + -31512;
	// addi r4,r11,-12
	ctx.r4.s64 = ctx.r11.s64 + -12;
	// b 0x83054488
	goto loc_83054488;
loc_83054430:
	// bl 0x82d5ee78
	ctx.lr = 0x83054434;
	sub_82D5EE78(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83054450
	if (!cr6.eq) goto loc_83054450;
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// addi r11,r11,-31512
	ctx.r11.s64 = ctx.r11.s64 + -31512;
	// addi r4,r11,-8
	ctx.r4.s64 = ctx.r11.s64 + -8;
	// b 0x83054488
	goto loc_83054488;
loc_83054450:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a47e40
	ctx.lr = 0x83054458;
	sub_82A47E40(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// lis r10,-32225
	ctx.r10.s64 = -2111897600;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8305447c
	if (cr6.eq) goto loc_8305447C;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r11.u32);
	// addi r11,r10,-31512
	ctx.r11.s64 = ctx.r10.s64 + -31512;
	// addi r4,r11,-4
	ctx.r4.s64 = ctx.r11.s64 + -4;
	// b 0x83054488
	goto loc_83054488;
loc_8305447C:
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r10,-31512
	ctx.r4.s64 = ctx.r10.s64 + -31512;
	// stw r11,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r11.u32);
loc_83054488:
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x837b0c10
	ctx.lr = 0x83054490;
	sub_837B0C10(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82e88020
	ctx.lr = 0x8305449C;
	sub_82E88020(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8387e8e0
	ctx.lr = 0x830544A4;
	sub_8387E8E0(ctx, base);
loc_830544A4:
	// li r3,1
	ctx.r3.s64 = 1;
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

__attribute__((alias("__imp__sub_830544C0"))) PPC_WEAK_FUNC(sub_830544C0);
PPC_FUNC_IMPL(__imp__sub_830544C0) {
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
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-31160
	ctx.r9.s64 = ctx.r11.s64 + -31160;
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
	ctx.lr = 0x830544F8;
	sub_82F42278(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x83054510
	if (cr6.eq) goto loc_83054510;
	// bl 0x82416268
	ctx.lr = 0x8305450C;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_83054510:
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

__attribute__((alias("__imp__sub_83054528"))) PPC_WEAK_FUNC(sub_83054528);
PPC_FUNC_IMPL(__imp__sub_83054528) {
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
	ctx.lr = 0x83054558;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8305458c
	if (cr6.eq) goto loc_8305458C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82f42220
	ctx.lr = 0x8305456C;
	sub_82F42220(ctx, base);
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-31160
	ctx.r9.s64 = ctx.r11.s64 + -31160;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r8,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r8.u32);
	// b 0x83054590
	goto loc_83054590;
loc_8305458C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83054590:
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

__attribute__((alias("__imp__sub_830545A8"))) PPC_WEAK_FUNC(sub_830545A8);
PPC_FUNC_IMPL(__imp__sub_830545A8) {
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
	// bl 0x82daaa50
	ctx.lr = 0x830545C0;
	sub_82DAAA50(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,15
	ctx.r10.s64 = 15;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// lis r9,-32225
	ctx.r9.s64 = -2111897600;
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// li r5,5
	ctx.r5.s64 = 5;
	// stb r11,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r11.u8);
	// addi r4,r9,-31256
	ctx.r4.s64 = ctx.r9.s64 + -31256;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8259cc28
	ctx.lr = 0x830545E8;
	sub_8259CC28(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x830545F4;
	sub_82E88020(ctx, base);
	// lwz r8,116(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r8,16
	cr6.compare<uint32_t>(ctx.r8.u32, 16, xer);
	// blt cr6,0x83054614
	if (cr6.lt) goto loc_83054614;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x83054614;
	sub_825952B8(ctx, base);
loc_83054614:
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

__attribute__((alias("__imp__sub_83054628"))) PPC_WEAK_FUNC(sub_83054628);
PPC_FUNC_IMPL(__imp__sub_83054628) {
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
	// bl 0x82d86078
	ctx.lr = 0x83054640;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830546bc
	if (cr6.eq) goto loc_830546BC;
	// bl 0x82d5ee78
	ctx.lr = 0x8305464C;
	sub_82D5EE78(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830546bc
	if (cr6.eq) goto loc_830546BC;
	// bl 0x82a47e40
	ctx.lr = 0x83054658;
	sub_82A47E40(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83054684
	if (cr6.eq) goto loc_83054684;
	// bl 0x82daa920
	ctx.lr = 0x83054668;
	sub_82DAA920(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8305467c
	if (cr6.eq) goto loc_8305467C;
	// bl 0x82daa978
	ctx.lr = 0x83054678;
	sub_82DAA978(ctx, base);
	// b 0x83054688
	goto loc_83054688;
loc_8305467C:
	// bl 0x82dab1c0
	ctx.lr = 0x83054680;
	sub_82DAB1C0(ctx, base);
	// b 0x83054688
	goto loc_83054688;
loc_83054684:
	// bl 0x82daaa50
	ctx.lr = 0x83054688;
	sub_82DAAA50(ctx, base);
loc_83054688:
	// bl 0x830ff290
	ctx.lr = 0x8305468C;
	sub_830FF290(ctx, base);
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmplwi cr6,r11,44
	cr6.compare<uint32_t>(ctx.r11.u32, 44, xer);
	// beq cr6,0x830546c8
	if (cr6.eq) goto loc_830546C8;
	// cmplwi cr6,r11,45
	cr6.compare<uint32_t>(ctx.r11.u32, 45, xer);
	// beq cr6,0x830546c8
	if (cr6.eq) goto loc_830546C8;
	// cmplwi cr6,r11,51
	cr6.compare<uint32_t>(ctx.r11.u32, 51, xer);
	// beq cr6,0x830546c8
	if (cr6.eq) goto loc_830546C8;
	// cmplwi cr6,r11,46
	cr6.compare<uint32_t>(ctx.r11.u32, 46, xer);
	// bne cr6,0x830546bc
	if (!cr6.eq) goto loc_830546BC;
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// addi r4,r11,-31264
	ctx.r4.s64 = ctx.r11.s64 + -31264;
	// b 0x830546d4
	goto loc_830546D4;
loc_830546BC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830545a8
	ctx.lr = 0x830546C4;
	sub_830545A8(ctx, base);
	// b 0x830546f0
	goto loc_830546F0;
loc_830546C8:
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// addi r11,r11,-31264
	ctx.r11.s64 = ctx.r11.s64 + -31264;
	// addi r4,r11,-8
	ctx.r4.s64 = ctx.r11.s64 + -8;
loc_830546D4:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x837b0c10
	ctx.lr = 0x830546DC;
	sub_837B0C10(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x830546E8;
	sub_82E88020(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8387e8e0
	ctx.lr = 0x830546F0;
	sub_8387E8E0(ctx, base);
loc_830546F0:
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

__attribute__((alias("__imp__sub_83054708"))) PPC_WEAK_FUNC(sub_83054708);
PPC_FUNC_IMPL(__imp__sub_83054708) {
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
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-30912
	ctx.r9.s64 = ctx.r11.s64 + -30912;
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
	ctx.lr = 0x83054740;
	sub_82F42278(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x83054758
	if (cr6.eq) goto loc_83054758;
	// bl 0x82416268
	ctx.lr = 0x83054754;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_83054758:
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

__attribute__((alias("__imp__sub_83054770"))) PPC_WEAK_FUNC(sub_83054770);
PPC_FUNC_IMPL(__imp__sub_83054770) {
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
	ctx.lr = 0x830547A0;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830547d4
	if (cr6.eq) goto loc_830547D4;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82f42220
	ctx.lr = 0x830547B4;
	sub_82F42220(ctx, base);
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-30912
	ctx.r9.s64 = ctx.r11.s64 + -30912;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r8,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r8.u32);
	// b 0x830547d8
	goto loc_830547D8;
loc_830547D4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_830547D8:
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

__attribute__((alias("__imp__sub_830547F0"))) PPC_WEAK_FUNC(sub_830547F0);
PPC_FUNC_IMPL(__imp__sub_830547F0) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82d86078
	ctx.lr = 0x83054808;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83054850
	if (!cr6.eq) goto loc_83054850;
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r11,r11,-31004
	ctx.r11.s64 = ctx.r11.s64 + -31004;
	// addi r4,r11,-4
	ctx.r4.s64 = ctx.r11.s64 + -4;
	// bl 0x837b0c10
	ctx.lr = 0x83054824;
	sub_837B0C10(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x83054830;
	sub_82E88020(ctx, base);
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x8305489c
	if (cr6.lt) goto loc_8305489C;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// b 0x83054898
	goto loc_83054898;
loc_83054850:
	// bl 0x82d5ee78
	ctx.lr = 0x83054854;
	sub_82D5EE78(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83054860
	if (cr6.eq) goto loc_83054860;
	// bl 0x82da3498
	ctx.lr = 0x83054860;
	sub_82DA3498(ctx, base);
loc_83054860:
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r4,r11,-31004
	ctx.r4.s64 = ctx.r11.s64 + -31004;
	// bl 0x837b0c10
	ctx.lr = 0x83054870;
	sub_837B0C10(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x8305487C;
	sub_82E88020(ctx, base);
	// lwz r10,148(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x8305489c
	if (cr6.lt) goto loc_8305489C;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
loc_83054898:
	// bl 0x825952b8
	ctx.lr = 0x8305489C;
	sub_825952B8(ctx, base);
loc_8305489C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830548B4"))) PPC_WEAK_FUNC(sub_830548B4);
PPC_FUNC_IMPL(__imp__sub_830548B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830548B8"))) PPC_WEAK_FUNC(sub_830548B8);
PPC_FUNC_IMPL(__imp__sub_830548B8) {
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
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-30368
	ctx.r9.s64 = ctx.r11.s64 + -30368;
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
	ctx.lr = 0x830548F0;
	sub_82F42278(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x83054908
	if (cr6.eq) goto loc_83054908;
	// bl 0x82416268
	ctx.lr = 0x83054904;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_83054908:
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

__attribute__((alias("__imp__sub_83054920"))) PPC_WEAK_FUNC(sub_83054920);
PPC_FUNC_IMPL(__imp__sub_83054920) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x83054928;
	__savegprlr_25(ctx, base);
	// stwu r1,-976(r1)
	ea = -976 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82e58ec0
	ctx.lr = 0x83054944;
	sub_82E58EC0(ctx, base);
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,384
	ctx.r3.s64 = ctx.r1.s64 + 384;
	// bl 0x82e59698
	ctx.lr = 0x83054958;
	sub_82E59698(ctx, base);
	// bl 0x82d86078
	ctx.lr = 0x8305495C;
	sub_82D86078(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83054a84
	if (cr6.eq) goto loc_83054A84;
	// lwz r3,116(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// bl 0x825832d8
	ctx.lr = 0x83054970;
	sub_825832D8(ctx, base);
	// bl 0x82d99c10
	ctx.lr = 0x83054974;
	sub_82D99C10(ctx, base);
	// bl 0x825832f0
	ctx.lr = 0x83054978;
	sub_825832F0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83054a84
	if (cr6.eq) goto loc_83054A84;
	// addi r4,r1,384
	ctx.r4.s64 = ctx.r1.s64 + 384;
	// bl 0x82d99658
	ctx.lr = 0x83054988;
	sub_82D99658(ctx, base);
	// bl 0x831156e8
	ctx.lr = 0x8305498C;
	sub_831156E8(ctx, base);
	// li r10,32
	ctx.r10.s64 = 32;
	// lwz r9,52(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// addi r11,r1,124
	ctx.r11.s64 = ctx.r1.s64 + 124;
	// addis r26,r9,5
	ctx.r26.s64 = ctx.r9.s64 + 327680;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// lis r10,0
	ctx.r10.s64 = 0;
	// addi r26,r26,14904
	ctx.r26.s64 = ctx.r26.s64 + 14904;
	// ori r10,r10,65535
	ctx.r10.u64 = ctx.r10.u64 | 65535;
loc_830549AC:
	// sth r10,4(r11)
	PPC_STORE_U16(ctx.r11.u32 + 4, ctx.r10.u16);
	// stwu r28,8(r11)
	ea = 8 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r28.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x830549ac
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_830549AC;
	// li r5,31
	ctx.r5.s64 = 31;
	// stb r28,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r28.u8);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,97
	ctx.r3.s64 = ctx.r1.s64 + 97;
	// bl 0x831cdcf0
	ctx.lr = 0x830549CC;
	sub_831CDCF0(ctx, base);
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
	// addi r30,r1,128
	ctx.r30.s64 = ctx.r1.s64 + 128;
	// subfic r29,r11,248
	xer.ca = ctx.r11.u32 <= 248;
	ctx.r29.s64 = 248 - ctx.r11.s64;
	// lis r27,-31773
	ctx.r27.s64 = -2082275328;
loc_830549E0:
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x83123a08
	ctx.lr = 0x830549F0;
	sub_83123A08(ctx, base);
	// lhz r11,808(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 808);
	// ld r10,-9384(r27)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r27.u32 + -9384);
	// clrlwi r9,r11,25
	ctx.r9.u64 = ctx.r11.u32 & 0x7F;
	// cmplw cr6,r31,r9
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r9.u32, xer);
	// bge cr6,0x83054a24
	if (!cr6.lt) goto loc_83054A24;
	// add r10,r29,r30
	ctx.r10.u64 = ctx.r29.u64 + ctx.r30.u64;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// add. r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ldx r10,r10,r3
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r10.u32 + ctx.r3.u32);
	// beq 0x83054a24
	if (cr0.eq) goto loc_83054A24;
	// add r9,r3,r31
	ctx.r9.u64 = ctx.r3.u64 + ctx.r31.u64;
	// lbz r8,512(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 512);
	// stb r8,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r8.u8);
loc_83054A24:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// std r10,0(r30)
	PPC_STORE_U64(ctx.r30.u32 + 0, ctx.r10.u64);
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// cmplwi cr6,r31,32
	cr6.compare<uint32_t>(ctx.r31.u32, 32, xer);
	// blt cr6,0x830549e0
	if (cr6.lt) goto loc_830549E0;
	// lwz r3,116(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 116);
	// bl 0x82dab6d0
	ctx.lr = 0x83054A40;
	sub_82DAB6D0(ctx, base);
	// addi r11,r1,132
	ctx.r11.s64 = ctx.r1.s64 + 132;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r30,r11,-8
	ctx.r30.s64 = ctx.r11.s64 + -8;
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
loc_83054A54:
	// lbzx r11,r31,r11
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// lwzu r10,8(r30)
	ea = 8 + ctx.r30.u32;
	ctx.r10.u64 = PPC_LOAD_U32(ea);
	ctx.r30.u32 = ea;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stb r11,92(r1)
	PPC_STORE_U8(ctx.r1.u32 + 92, ctx.r11.u8);
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// bl 0x82d97588
	ctx.lr = 0x83054A74;
	sub_82D97588(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// cmplwi cr6,r31,18
	cr6.compare<uint32_t>(ctx.r31.u32, 18, xer);
	// blt cr6,0x83054a54
	if (cr6.lt) goto loc_83054A54;
loc_83054A84:
	// addi r1,r1,976
	ctx.r1.s64 = ctx.r1.s64 + 976;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83054A8C"))) PPC_WEAK_FUNC(sub_83054A8C);
PPC_FUNC_IMPL(__imp__sub_83054A8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83054A90"))) PPC_WEAK_FUNC(sub_83054A90);
PPC_FUNC_IMPL(__imp__sub_83054A90) {
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
	ctx.lr = 0x83054AC0;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83054af4
	if (cr6.eq) goto loc_83054AF4;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82f42220
	ctx.lr = 0x83054AD4;
	sub_82F42220(ctx, base);
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-30368
	ctx.r9.s64 = ctx.r11.s64 + -30368;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r8,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r8.u32);
	// b 0x83054af8
	goto loc_83054AF8;
loc_83054AF4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83054AF8:
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

__attribute__((alias("__imp__sub_83054B10"))) PPC_WEAK_FUNC(sub_83054B10);
PPC_FUNC_IMPL(__imp__sub_83054B10) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83054B18;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x831156e8
	ctx.lr = 0x83054B24;
	sub_831156E8(ctx, base);
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addis r28,r11,5
	ctx.r28.s64 = ctx.r11.s64 + 327680;
	// addi r28,r28,14904
	ctx.r28.s64 = ctx.r28.s64 + 14904;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83123a08
	ctx.lr = 0x83054B3C;
	sub_83123A08(ctx, base);
	// lhz r10,808(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 808);
	// li r9,0
	ctx.r9.s64 = 0;
	// clrlwi r30,r10,25
	ctx.r30.u64 = ctx.r10.u32 & 0x7F;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x83054ba8
	if (cr6.eq) goto loc_83054BA8;
loc_83054B54:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83123ba8
	ctx.lr = 0x83054B64;
	sub_83123BA8(ctx, base);
	// ld r11,44(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 44);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// bl 0x831513a8
	ctx.lr = 0x83054B78;
	sub_831513A8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,5
	cr6.compare<uint32_t>(ctx.r3.u32, 5, xer);
	// blt cr6,0x83054b88
	if (cr6.lt) goto loc_83054B88;
	// li r5,5
	ctx.r5.s64 = 5;
loc_83054B88:
	// li r4,96
	ctx.r4.s64 = 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83121088
	ctx.lr = 0x83054B94;
	sub_83121088(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// cmplw cr6,r11,r30
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, xer);
	// blt cr6,0x83054b54
	if (cr6.lt) goto loc_83054B54;
loc_83054BA8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83054BB0"))) PPC_WEAK_FUNC(sub_83054BB0);
PPC_FUNC_IMPL(__imp__sub_83054BB0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83054BB8;
	__savegprlr_28(ctx, base);
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x82a504f0
	ctx.lr = 0x83054BD0;
	sub_82A504F0(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
loc_83054BD4:
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82ac0af0
	ctx.lr = 0x83054BDC;
	sub_82AC0AF0(ctx, base);
	// clrlwi r30,r31,24
	ctx.r30.u64 = ctx.r31.u32 & 0xFF;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// cmplwi cr6,r30,3
	cr6.compare<uint32_t>(ctx.r30.u32, 3, xer);
	// bge cr6,0x83054c04
	if (!cr6.lt) goto loc_83054C04;
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// add r4,r11,r29
	ctx.r4.u64 = ctx.r11.u64 + ctx.r29.u64;
	// bl 0x82abfda0
	ctx.lr = 0x83054C04;
	sub_82ABFDA0(ctx, base);
loc_83054C04:
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8399ed80
	ctx.lr = 0x83054C14;
	sub_8399ED80(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplwi cr6,r31,3
	cr6.compare<uint32_t>(ctx.r31.u32, 3, xer);
	// blt cr6,0x83054bd4
	if (cr6.lt) goto loc_83054BD4;
	// addi r4,r29,480
	ctx.r4.s64 = ctx.r29.s64 + 480;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r5,47
	ctx.r5.s64 = 47;
	// bl 0x831ce980
	ctx.lr = 0x83054C30;
	sub_831CE980(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8399ee10
	ctx.lr = 0x83054C3C;
	sub_8399EE10(ctx, base);
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83054C44"))) PPC_WEAK_FUNC(sub_83054C44);
PPC_FUNC_IMPL(__imp__sub_83054C44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83054C48"))) PPC_WEAK_FUNC(sub_83054C48);
PPC_FUNC_IMPL(__imp__sub_83054C48) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x83054C50;
	__savegprlr_24(ctx, base);
	// ld r12,-4096(r1)
	ctx.r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -4096);
	// stwu r1,-5360(r1)
	ea = -5360 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// bl 0x8399f8b8
	ctx.lr = 0x83054C60;
	sub_8399F8B8(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// bl 0x82d86078
	ctx.lr = 0x83054C68;
	sub_82D86078(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(ctx.r26.u32, 0, xer);
	// beq cr6,0x83054dbc
	if (cr6.eq) goto loc_83054DBC;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83054dbc
	if (cr6.eq) goto loc_83054DBC;
	// lis r25,-31773
	ctx.r25.s64 = -2082275328;
	// addi r30,r1,628
	ctx.r30.s64 = ctx.r1.s64 + 628;
	// li r31,2
	ctx.r31.s64 = 2;
	// lwz r11,-9336(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + -9336);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
loc_83054C90:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ac0af0
	ctx.lr = 0x83054C98;
	sub_82AC0AF0(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// addi r30,r30,160
	ctx.r30.s64 = ctx.r30.s64 + 160;
	// bge 0x83054c90
	if (!cr0.lt) goto loc_83054C90;
	// addi r3,r1,624
	ctx.r3.s64 = ctx.r1.s64 + 624;
	// bl 0x839a0ad8
	ctx.lr = 0x83054CAC;
	sub_839A0AD8(ctx, base);
	// bl 0x831156e8
	ctx.lr = 0x83054CB0;
	sub_831156E8(ctx, base);
	// lwz r30,48(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// bl 0x831156e8
	ctx.lr = 0x83054CB8;
	sub_831156E8(ctx, base);
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// addis r28,r11,5
	ctx.r28.s64 = ctx.r11.s64 + 327680;
	// addi r28,r28,14904
	ctx.r28.s64 = ctx.r28.s64 + 14904;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83124548
	ctx.lr = 0x83054CCC;
	sub_83124548(ctx, base);
	// addis r29,r30,222
	ctx.r29.s64 = ctx.r30.s64 + 14548992;
	// addi r29,r29,-12208
	ctx.r29.s64 = ctx.r29.s64 + -12208;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83132aa8
	ctx.lr = 0x83054CDC;
	sub_83132AA8(ctx, base);
	// bl 0x82d8a698
	ctx.lr = 0x83054CE0;
	sub_82D8A698(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83054dc8
	if (!cr6.eq) goto loc_83054DC8;
	// bl 0x82db7320
	ctx.lr = 0x83054CF0;
	sub_82DB7320(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83054dc8
	if (!cr6.eq) goto loc_83054DC8;
	// bl 0x82d95ee0
	ctx.lr = 0x83054D00;
	sub_82D95EE0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83054db8
	if (cr6.eq) goto loc_83054DB8;
	// bl 0x82d95f98
	ctx.lr = 0x83054D10;
	sub_82D95F98(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83054dbc
	if (!cr6.eq) goto loc_83054DBC;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82d96e60
	ctx.lr = 0x83054D24;
	sub_82D96E60(ctx, base);
	// bl 0x82d96df8
	ctx.lr = 0x83054D28;
	sub_82D96DF8(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
	// addis r4,r30,222
	ctx.r4.s64 = ctx.r30.s64 + 14548992;
	// stb r31,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r31.u8);
	// addi r3,r1,1696
	ctx.r3.s64 = ctx.r1.s64 + 1696;
	// addi r4,r4,-10256
	ctx.r4.s64 = ctx.r4.s64 + -10256;
	// bl 0x82b818d0
	ctx.lr = 0x83054D40;
	sub_82B818D0(ctx, base);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,1696
	ctx.r4.s64 = ctx.r1.s64 + 1696;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82e58ec0
	ctx.lr = 0x83054D54;
	sub_82E58EC0(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// rlwimi r11,r10,0,0,13
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0xFFFC0000) | (ctx.r11.u64 & 0xFFFFFFFF0003FFFF);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwimi r11,r9,0,14,31
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0x3FFFF) | (ctx.r11.u64 & 0xFFFFFFFFFFFC0000);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lwz r3,28(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 28);
	// bl 0x82da2858
	ctx.lr = 0x83054D78;
	sub_82DA2858(ctx, base);
	// bl 0x82da8160
	ctx.lr = 0x83054D7C;
	sub_82DA8160(ctx, base);
	// clrlwi r28,r3,24
	ctx.r28.u64 = ctx.r3.u32 & 0xFF;
	// addi r29,r1,96
	ctx.r29.s64 = ctx.r1.s64 + 96;
	// li r30,2
	ctx.r30.s64 = 2;
loc_83054D88:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82ac0af0
	ctx.lr = 0x83054D90;
	sub_82AC0AF0(ctx, base);
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// addi r29,r29,160
	ctx.r29.s64 = ctx.r29.s64 + 160;
	// bge 0x83054d88
	if (!cr0.lt) goto loc_83054D88;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82d8cc78
	ctx.lr = 0x83054DA4;
	sub_82D8CC78(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82da40e0
	ctx.lr = 0x83054DB0;
	sub_82DA40E0(ctx, base);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// b 0x83054e44
	goto loc_83054E44;
loc_83054DB8:
	// bl 0x830ff290
	ctx.lr = 0x83054DBC;
	sub_830FF290(ctx, base);
loc_83054DBC:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,5360
	ctx.r1.s64 = ctx.r1.s64 + 5360;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_83054DC8:
	// bl 0x82d91ad0
	ctx.lr = 0x83054DCC;
	sub_82D91AD0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83054dbc
	if (cr6.eq) goto loc_83054DBC;
	// bl 0x82d96970
	ctx.lr = 0x83054DDC;
	sub_82D96970(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
	// addis r4,r30,222
	ctx.r4.s64 = ctx.r30.s64 + 14548992;
	// stb r31,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r31.u8);
	// addi r3,r1,3488
	ctx.r3.s64 = ctx.r1.s64 + 3488;
	// addi r4,r4,-10256
	ctx.r4.s64 = ctx.r4.s64 + -10256;
	// bl 0x82b818d0
	ctx.lr = 0x83054DF4;
	sub_82B818D0(ctx, base);
	// addi r3,r1,3488
	ctx.r3.s64 = ctx.r1.s64 + 3488;
	// bl 0x83054920
	ctx.lr = 0x83054DFC;
	sub_83054920(ctx, base);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83123a08
	ctx.lr = 0x83054E0C;
	sub_83123A08(ctx, base);
	// lhz r11,808(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 808);
	// addi r29,r1,1168
	ctx.r29.s64 = ctx.r1.s64 + 1168;
	// li r30,2
	ctx.r30.s64 = 2;
	// clrlwi r28,r11,25
	ctx.r28.u64 = ctx.r11.u32 & 0x7F;
loc_83054E1C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82ac0af0
	ctx.lr = 0x83054E24;
	sub_82AC0AF0(ctx, base);
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// addi r29,r29,160
	ctx.r29.s64 = ctx.r29.s64 + 160;
	// bge 0x83054e1c
	if (!cr0.lt) goto loc_83054E1C;
	// addi r3,r1,1168
	ctx.r3.s64 = ctx.r1.s64 + 1168;
	// bl 0x82d8cc78
	ctx.lr = 0x83054E38;
	sub_82D8CC78(ctx, base);
	// addi r3,r1,1168
	ctx.r3.s64 = ctx.r1.s64 + 1168;
	// bl 0x82d8e2c0
	ctx.lr = 0x83054E40;
	sub_82D8E2C0(ctx, base);
	// addi r5,r1,1168
	ctx.r5.s64 = ctx.r1.s64 + 1168;
loc_83054E44:
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r4,r1,624
	ctx.r4.s64 = ctx.r1.s64 + 624;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x83054bb0
	ctx.lr = 0x83054E54;
	sub_83054BB0(ctx, base);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x83054b10
	ctx.lr = 0x83054E64;
	sub_83054B10(ctx, base);
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r10,9
	ctx.r10.s64 = 9;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// stw r9,4112(r26)
	PPC_STORE_U32(ctx.r26.u32 + 4112, ctx.r9.u32);
	// lwz r11,-9336(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + -9336);
	// stw r11,4116(r26)
	PPC_STORE_U32(ctx.r26.u32 + 4116, ctx.r11.u32);
	// stw r10,4(r26)
	PPC_STORE_U32(ctx.r26.u32 + 4, ctx.r10.u32);
	// bl 0x839a1ec8
	ctx.lr = 0x83054E84;
	sub_839A1EC8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,5360
	ctx.r1.s64 = ctx.r1.s64 + 5360;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83054E90"))) PPC_WEAK_FUNC(sub_83054E90);
PPC_FUNC_IMPL(__imp__sub_83054E90) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82d86078
	ctx.lr = 0x83054EA8;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83054ef4
	if (!cr6.eq) goto loc_83054EF4;
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r11,r11,-30460
	ctx.r11.s64 = ctx.r11.s64 + -30460;
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// bl 0x837b0c10
	ctx.lr = 0x83054EC4;
	sub_837B0C10(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x83054ED0;
	sub_82E88020(ctx, base);
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x83054f48
	if (cr6.lt) goto loc_83054F48;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x83054EF0;
	sub_825952B8(ctx, base);
	// b 0x83054f48
	goto loc_83054F48;
loc_83054EF4:
	// bl 0x8399f8b8
	ctx.lr = 0x83054EF8;
	sub_8399F8B8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83054f04
	if (!cr6.eq) goto loc_83054F04;
	// bl 0x839a1610
	ctx.lr = 0x83054F04;
	sub_839A1610(ctx, base);
loc_83054F04:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83054c48
	ctx.lr = 0x83054F0C;
	sub_83054C48(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// bne cr6,0x83054f2c
	if (!cr6.eq) goto loc_83054F2C;
	// addi r11,r11,-30460
	ctx.r11.s64 = ctx.r11.s64 + -30460;
	// addi r4,r11,-8
	ctx.r4.s64 = ctx.r11.s64 + -8;
	// b 0x83054f30
	goto loc_83054F30;
loc_83054F2C:
	// addi r4,r11,-30460
	ctx.r4.s64 = ctx.r11.s64 + -30460;
loc_83054F30:
	// bl 0x837b0c10
	ctx.lr = 0x83054F34;
	sub_837B0C10(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x83054F40;
	sub_82E88020(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8387e8e0
	ctx.lr = 0x83054F48;
	sub_8387E8E0(ctx, base);
loc_83054F48:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83054F60"))) PPC_WEAK_FUNC(sub_83054F60);
PPC_FUNC_IMPL(__imp__sub_83054F60) {
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
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-29832
	ctx.r9.s64 = ctx.r11.s64 + -29832;
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
	ctx.lr = 0x83054F98;
	sub_82F42278(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x83054fb0
	if (cr6.eq) goto loc_83054FB0;
	// bl 0x82416268
	ctx.lr = 0x83054FAC;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_83054FB0:
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

__attribute__((alias("__imp__sub_83054FC8"))) PPC_WEAK_FUNC(sub_83054FC8);
PPC_FUNC_IMPL(__imp__sub_83054FC8) {
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
	ctx.lr = 0x83054FF8;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8305502c
	if (cr6.eq) goto loc_8305502C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82f42220
	ctx.lr = 0x8305500C;
	sub_82F42220(ctx, base);
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-29832
	ctx.r9.s64 = ctx.r11.s64 + -29832;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r8,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r8.u32);
	// b 0x83055030
	goto loc_83055030;
loc_8305502C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83055030:
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

__attribute__((alias("__imp__sub_83055048"))) PPC_WEAK_FUNC(sub_83055048);
PPC_FUNC_IMPL(__imp__sub_83055048) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83055050;
	__savegprlr_28(ctx, base);
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// li r30,0
	ctx.r30.s64 = 0;
loc_83055060:
	// clrlwi r31,r30,24
	ctx.r31.u64 = ctx.r30.u32 & 0xFF;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8399edb0
	ctx.lr = 0x83055074;
	sub_8399EDB0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// cmplwi cr6,r31,3
	cr6.compare<uint32_t>(ctx.r31.u32, 3, xer);
	// bge cr6,0x83055098
	if (!cr6.lt) goto loc_83055098;
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + ctx.r29.u64;
	// bl 0x82abfda0
	ctx.lr = 0x83055098;
	sub_82ABFDA0(ctx, base);
loc_83055098:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplwi cr6,r30,3
	cr6.compare<uint32_t>(ctx.r30.u32, 3, xer);
	// blt cr6,0x83055060
	if (cr6.lt) goto loc_83055060;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8399ee20
	ctx.lr = 0x830550B0;
	sub_8399EE20(ctx, base);
	// addi r11,r29,480
	ctx.r11.s64 = ctx.r29.s64 + 480;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,47
	ctx.r5.s64 = 47;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x831ce980
	ctx.lr = 0x830550C4;
	sub_831CE980(ctx, base);
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830550CC"))) PPC_WEAK_FUNC(sub_830550CC);
PPC_FUNC_IMPL(__imp__sub_830550CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830550D0"))) PPC_WEAK_FUNC(sub_830550D0);
PPC_FUNC_IMPL(__imp__sub_830550D0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x830550D8;
	__savegprlr_28(ctx, base);
	// stwu r1,-1728(r1)
	ea = -1728 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x8399f8b8
	ctx.lr = 0x830550E4;
	sub_8399F8B8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82d86078
	ctx.lr = 0x830550EC;
	sub_82D86078(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x830551f4
	if (cr6.eq) goto loc_830551F4;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830551f4
	if (cr6.eq) goto loc_830551F4;
	// bl 0x830ff290
	ctx.lr = 0x83055104;
	sub_830FF290(ctx, base);
	// bl 0x82d8a698
	ctx.lr = 0x83055108;
	sub_82D8A698(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83055198
	if (!cr6.eq) goto loc_83055198;
	// bl 0x82db7320
	ctx.lr = 0x83055118;
	sub_82DB7320(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83055198
	if (!cr6.eq) goto loc_83055198;
	// bl 0x82d95ee0
	ctx.lr = 0x83055128;
	sub_82D95EE0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830551f4
	if (cr6.eq) goto loc_830551F4;
	// addi r4,r31,8
	ctx.r4.s64 = ctx.r31.s64 + 8;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r5,532
	ctx.r5.s64 = 532;
	// bl 0x831ce980
	ctx.lr = 0x83055144;
	sub_831CE980(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8399ed38
	ctx.lr = 0x8305514C;
	sub_8399ED38(ctx, base);
	// addi r30,r1,1152
	ctx.r30.s64 = ctx.r1.s64 + 1152;
	// li r31,2
	ctx.r31.s64 = 2;
loc_83055154:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ac0af0
	ctx.lr = 0x8305515C;
	sub_82AC0AF0(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// addi r30,r30,160
	ctx.r30.s64 = ctx.r30.s64 + 160;
	// bge 0x83055154
	if (!cr0.lt) goto loc_83055154;
	// addi r3,r1,1152
	ctx.r3.s64 = ctx.r1.s64 + 1152;
	// bl 0x82d8cc78
	ctx.lr = 0x83055170;
	sub_82D8CC78(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,1152
	ctx.r4.s64 = ctx.r1.s64 + 1152;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83055048
	ctx.lr = 0x83055180;
	sub_83055048(ctx, base);
	// lwz r3,28(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// bl 0x82da2c00
	ctx.lr = 0x83055188;
	sub_82DA2C00(ctx, base);
	// addi r4,r1,1152
	ctx.r4.s64 = ctx.r1.s64 + 1152;
	// bl 0x82e58b40
	ctx.lr = 0x83055190;
	sub_82E58B40(ctx, base);
	// addi r1,r1,1728
	ctx.r1.s64 = ctx.r1.s64 + 1728;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_83055198:
	// addi r4,r31,8
	ctx.r4.s64 = ctx.r31.s64 + 8;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r5,532
	ctx.r5.s64 = 532;
	// bl 0x831ce980
	ctx.lr = 0x830551A8;
	sub_831CE980(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8399ed38
	ctx.lr = 0x830551B0;
	sub_8399ED38(ctx, base);
	// addi r30,r1,624
	ctx.r30.s64 = ctx.r1.s64 + 624;
	// li r31,2
	ctx.r31.s64 = 2;
loc_830551B8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ac0af0
	ctx.lr = 0x830551C0;
	sub_82AC0AF0(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// addi r30,r30,160
	ctx.r30.s64 = ctx.r30.s64 + 160;
	// bge 0x830551b8
	if (!cr0.lt) goto loc_830551B8;
	// addi r3,r1,624
	ctx.r3.s64 = ctx.r1.s64 + 624;
	// bl 0x82d8cc78
	ctx.lr = 0x830551D4;
	sub_82D8CC78(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,624
	ctx.r4.s64 = ctx.r1.s64 + 624;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83055048
	ctx.lr = 0x830551E4;
	sub_83055048(ctx, base);
	// lwz r3,116(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 116);
	// bl 0x82dab6d0
	ctx.lr = 0x830551EC;
	sub_82DAB6D0(ctx, base);
	// addi r4,r1,624
	ctx.r4.s64 = ctx.r1.s64 + 624;
	// bl 0x82d97698
	ctx.lr = 0x830551F4;
	sub_82D97698(ctx, base);
loc_830551F4:
	// addi r1,r1,1728
	ctx.r1.s64 = ctx.r1.s64 + 1728;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830551FC"))) PPC_WEAK_FUNC(sub_830551FC);
PPC_FUNC_IMPL(__imp__sub_830551FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83055200"))) PPC_WEAK_FUNC(sub_83055200);
PPC_FUNC_IMPL(__imp__sub_83055200) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82d86078
	ctx.lr = 0x83055218;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83055260
	if (!cr6.eq) goto loc_83055260;
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r11,r11,-29924
	ctx.r11.s64 = ctx.r11.s64 + -29924;
	// addi r4,r11,-8
	ctx.r4.s64 = ctx.r11.s64 + -8;
	// bl 0x837b0c10
	ctx.lr = 0x83055234;
	sub_837B0C10(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x83055240;
	sub_82E88020(ctx, base);
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x830552b4
	if (cr6.lt) goto loc_830552B4;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// b 0x830552b0
	goto loc_830552B0;
loc_83055260:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830550d0
	ctx.lr = 0x83055268;
	sub_830550D0(ctx, base);
	// bl 0x8399f8b8
	ctx.lr = 0x8305526C;
	sub_8399F8B8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83055278
	if (cr6.eq) goto loc_83055278;
	// bl 0x839a04b8
	ctx.lr = 0x83055278;
	sub_839A04B8(ctx, base);
loc_83055278:
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r4,r11,-29924
	ctx.r4.s64 = ctx.r11.s64 + -29924;
	// bl 0x837b0c10
	ctx.lr = 0x83055288;
	sub_837B0C10(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x83055294;
	sub_82E88020(ctx, base);
	// lwz r10,148(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x830552b4
	if (cr6.lt) goto loc_830552B4;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
loc_830552B0:
	// bl 0x825952b8
	ctx.lr = 0x830552B4;
	sub_825952B8(ctx, base);
loc_830552B4:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830552CC"))) PPC_WEAK_FUNC(sub_830552CC);
PPC_FUNC_IMPL(__imp__sub_830552CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830552D0"))) PPC_WEAK_FUNC(sub_830552D0);
PPC_FUNC_IMPL(__imp__sub_830552D0) {
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
	// lis r31,-31758
	ctx.r31.s64 = -2081292288;
	// lwz r3,30272(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 30272);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83055320
	if (!cr6.eq) goto loc_83055320;
	// li r11,29
	ctx.r11.s64 = 29;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,12
	ctx.r4.s64 = 12;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x83055308;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83055318
	if (cr6.eq) goto loc_83055318;
	// bl 0x82dab228
	ctx.lr = 0x83055314;
	sub_82DAB228(ctx, base);
	// b 0x8305531c
	goto loc_8305531C;
loc_83055318:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8305531C:
	// stw r3,30272(r31)
	PPC_STORE_U32(ctx.r31.u32 + 30272, ctx.r3.u32);
loc_83055320:
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

__attribute__((alias("__imp__sub_83055334"))) PPC_WEAK_FUNC(sub_83055334);
PPC_FUNC_IMPL(__imp__sub_83055334) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83055338"))) PPC_WEAK_FUNC(sub_83055338);
PPC_FUNC_IMPL(__imp__sub_83055338) {
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
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// lis r10,-32225
	ctx.r10.s64 = -2111897600;
	// addi r9,r11,-29224
	ctx.r9.s64 = ctx.r11.s64 + -29224;
	// addi r8,r10,-29232
	ctx.r8.s64 = ctx.r10.s64 + -29232;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r8,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r8.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82f42278
	ctx.lr = 0x83055370;
	sub_82F42278(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x83055388
	if (cr6.eq) goto loc_83055388;
	// bl 0x82416268
	ctx.lr = 0x83055384;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_83055388:
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

__attribute__((alias("__imp__sub_830553A0"))) PPC_WEAK_FUNC(sub_830553A0);
PPC_FUNC_IMPL(__imp__sub_830553A0) {
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
	// lis r10,-32225
	ctx.r10.s64 = -2111897600;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r9,r10,-29120
	ctx.r9.s64 = ctx.r10.s64 + -29120;
	// stw r30,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r30.u32);
	// stw r30,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r30.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stb r11,12(r3)
	PPC_STORE_U8(ctx.r3.u32 + 12, ctx.r11.u8);
	// stb r11,13(r3)
	PPC_STORE_U8(ctx.r3.u32 + 13, ctx.r11.u8);
	// stb r30,16(r3)
	PPC_STORE_U8(ctx.r3.u32 + 16, ctx.r30.u8);
	// stb r30,17(r3)
	PPC_STORE_U8(ctx.r3.u32 + 17, ctx.r30.u8);
	// stw r30,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r30.u32);
	// bl 0x830ff290
	ctx.lr = 0x830553EC;
	sub_830FF290(ctx, base);
	// bl 0x830ffaa8
	ctx.lr = 0x830553F0;
	sub_830FFAA8(ctx, base);
	// cmplwi cr6,r3,20
	cr6.compare<uint32_t>(ctx.r3.u32, 20, xer);
	// beq cr6,0x83055408
	if (cr6.eq) goto loc_83055408;
	// bl 0x830ff290
	ctx.lr = 0x830553FC;
	sub_830FF290(ctx, base);
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmplwi cr6,r11,61
	cr6.compare<uint32_t>(ctx.r11.u32, 61, xer);
	// bne cr6,0x8305540c
	if (!cr6.eq) goto loc_8305540C;
loc_83055408:
	// stb r30,13(r31)
	PPC_STORE_U8(ctx.r31.u32 + 13, ctx.r30.u8);
loc_8305540C:
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

__attribute__((alias("__imp__sub_83055428"))) PPC_WEAK_FUNC(sub_83055428);
PPC_FUNC_IMPL(__imp__sub_83055428) {
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
	ctx.lr = 0x83055458;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8305548c
	if (cr6.eq) goto loc_8305548C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82f42220
	ctx.lr = 0x8305546C;
	sub_82F42220(ctx, base);
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// lis r10,-32225
	ctx.r10.s64 = -2111897600;
	// addi r9,r11,-29224
	ctx.r9.s64 = ctx.r11.s64 + -29224;
	// addi r8,r10,-29232
	ctx.r8.s64 = ctx.r10.s64 + -29232;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r8,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r8.u32);
	// b 0x83055490
	goto loc_83055490;
loc_8305548C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83055490:
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

__attribute__((alias("__imp__sub_830554A8"))) PPC_WEAK_FUNC(sub_830554A8);
PPC_FUNC_IMPL(__imp__sub_830554A8) {
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
	// li r11,31
	ctx.r11.s64 = 31;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,24
	ctx.r4.s64 = 24;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595718
	ctx.lr = 0x830554D4;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830554e8
	if (cr6.eq) goto loc_830554E8;
	// bl 0x830553a0
	ctx.lr = 0x830554E0;
	sub_830553A0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x830554ec
	goto loc_830554EC;
loc_830554E8:
	// li r4,0
	ctx.r4.s64 = 0;
loc_830554EC:
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
	ctx.lr = 0x83055508;
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

__attribute__((alias("__imp__sub_83055520"))) PPC_WEAK_FUNC(sub_83055520);
PPC_FUNC_IMPL(__imp__sub_83055520) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83055528;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 16);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83055578
	if (!cr6.eq) goto loc_83055578;
	// bl 0x82e58d58
	ctx.lr = 0x83055540;
	sub_82E58D58(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// stb r3,16(r31)
	PPC_STORE_U8(ctx.r31.u32 + 16, ctx.r3.u8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83055578
	if (cr6.eq) goto loc_83055578;
	// bl 0x82d95ee0
	ctx.lr = 0x83055554;
	sub_82D95EE0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83055574
	if (!cr6.eq) goto loc_83055574;
	// lis r11,-31757
	ctx.r11.s64 = -2081226752;
	// lwz r3,25496(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25496);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83055574
	if (cr6.eq) goto loc_83055574;
	// bl 0x82e9bda0
	ctx.lr = 0x83055574;
	sub_82E9BDA0(ctx, base);
loc_83055574:
	// bl 0x82d47978
	ctx.lr = 0x83055578;
	sub_82D47978(ctx, base);
loc_83055578:
	// lbz r11,17(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 17);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83055614
	if (!cr6.eq) goto loc_83055614;
	// bl 0x82e6f960
	ctx.lr = 0x8305558C;
	sub_82E6F960(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83055608
	if (cr6.eq) goto loc_83055608;
	// bl 0x82e6f960
	ctx.lr = 0x83055598;
	sub_82E6F960(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82e6fa08
	ctx.lr = 0x830555A0;
	sub_82E6FA08(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83055608
	if (cr6.eq) goto loc_83055608;
	// bl 0x82dcea28
	ctx.lr = 0x830555B0;
	sub_82DCEA28(ctx, base);
	// bl 0x82daf868
	ctx.lr = 0x830555B4;
	sub_82DAF868(ctx, base);
	// bl 0x82d86078
	ctx.lr = 0x830555B8;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830555c8
	if (cr6.eq) goto loc_830555C8;
	// lwz r3,32(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// bl 0x82dfa580
	ctx.lr = 0x830555C8;
	sub_82DFA580(ctx, base);
loc_830555C8:
	// bl 0x831021a0
	ctx.lr = 0x830555CC;
	sub_831021A0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82da45f8
	ctx.lr = 0x830555D4;
	sub_82DA45F8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83055608
	if (cr6.eq) goto loc_83055608;
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-29412
	ctx.r4.s64 = ctx.r11.s64 + -29412;
	// bl 0x837b0c10
	ctx.lr = 0x830555F0;
	sub_837B0C10(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d894e0
	ctx.lr = 0x830555FC;
	sub_82D894E0(ctx, base);
	// stw r3,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r3.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8387e8e0
	ctx.lr = 0x83055608;
	sub_8387E8E0(ctx, base);
loc_83055608:
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,17(r31)
	PPC_STORE_U8(ctx.r31.u32 + 17, ctx.r11.u8);
	// b 0x83055660
	goto loc_83055660;
loc_83055614:
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8305565c
	if (cr6.eq) goto loc_8305565C;
	// bl 0x82ddcec8
	ctx.lr = 0x83055624;
	sub_82DDCEC8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x83055660
	if (cr6.eq) goto loc_83055660;
	// bl 0x82daf8c0
	ctx.lr = 0x83055630;
	sub_82DAF8C0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83055660
	if (cr6.eq) goto loc_83055660;
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8305565c
	if (cr6.eq) goto loc_8305565C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83055658;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r29,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r29.u32);
loc_8305565C:
	// li r29,1
	ctx.r29.s64 = 1;
loc_83055660:
	// lbz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8305567c
	if (cr6.eq) goto loc_8305567C;
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// li r3,1
	ctx.r3.s64 = 1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83055680
	if (!cr6.eq) goto loc_83055680;
loc_8305567C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83055680:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83055688"))) PPC_WEAK_FUNC(sub_83055688);
PPC_FUNC_IMPL(__imp__sub_83055688) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83055690;
	__savegprlr_29(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x82d86078
	ctx.lr = 0x8305569C;
	sub_82D86078(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x830556f4
	if (!cr6.eq) goto loc_830556F4;
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r11,r11,-29324
	ctx.r11.s64 = ctx.r11.s64 + -29324;
	// addi r4,r11,-68
	ctx.r4.s64 = ctx.r11.s64 + -68;
	// bl 0x837b0c10
	ctx.lr = 0x830556BC;
	sub_837B0C10(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82e88020
	ctx.lr = 0x830556C8;
	sub_82E88020(ctx, base);
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x83055860
	if (cr6.lt) goto loc_83055860;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x830556E8;
	sub_825952B8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_830556F4:
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x82daa6c8
	ctx.lr = 0x830556FC;
	sub_82DAA6C8(ctx, base);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x82daa480
	ctx.lr = 0x83055704;
	sub_82DAA480(ctx, base);
	// lis r30,-31758
	ctx.r30.s64 = -2081292288;
	// lwz r3,30272(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 30272);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83055730
	if (cr6.eq) goto loc_83055730;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83055728;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,30272(r30)
	PPC_STORE_U32(ctx.r30.u32 + 30272, ctx.r11.u32);
loc_83055730:
	// bl 0x830552d0
	ctx.lr = 0x83055734;
	sub_830552D0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8305574c
	if (!cr6.eq) goto loc_8305574C;
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// addi r11,r11,-29324
	ctx.r11.s64 = ctx.r11.s64 + -29324;
	// addi r4,r11,-60
	ctx.r4.s64 = ctx.r11.s64 + -60;
	// b 0x83055844
	goto loc_83055844;
loc_8305574C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d5ee78
	ctx.lr = 0x83055754;
	sub_82D5EE78(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83055764
	if (cr6.eq) goto loc_83055764;
	// bl 0x82da3498
	ctx.lr = 0x83055760;
	sub_82DA3498(ctx, base);
	// b 0x8305576c
	goto loc_8305576C;
loc_83055764:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d86088
	ctx.lr = 0x8305576C;
	sub_82D86088(ctx, base);
loc_8305576C:
	// lis r11,-31757
	ctx.r11.s64 = -2081226752;
	// lwz r11,25496(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25496);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x830557cc
	if (!cr6.eq) goto loc_830557CC;
	// bl 0x831021a0
	ctx.lr = 0x83055780;
	sub_831021A0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82da45f8
	ctx.lr = 0x83055788;
	sub_82DA45F8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x830557a4
	if (!cr6.eq) goto loc_830557A4;
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// addi r11,r11,-29324
	ctx.r11.s64 = ctx.r11.s64 + -29324;
	// addi r4,r11,-52
	ctx.r4.s64 = ctx.r11.s64 + -52;
	// b 0x83055844
	goto loc_83055844;
loc_830557A4:
	// bl 0x82e5ac00
	ctx.lr = 0x830557A8;
	sub_82E5AC00(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x830557c4
	if (!cr6.eq) goto loc_830557C4;
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// addi r11,r11,-29324
	ctx.r11.s64 = ctx.r11.s64 + -29324;
	// addi r4,r11,-44
	ctx.r4.s64 = ctx.r11.s64 + -44;
	// b 0x83055844
	goto loc_83055844;
loc_830557C4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83103100
	ctx.lr = 0x830557CC;
	sub_83103100(ctx, base);
loc_830557CC:
	// bl 0x82d95ee0
	ctx.lr = 0x830557D0;
	sub_82D95EE0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830557ec
	if (cr6.eq) goto loc_830557EC;
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// addi r11,r11,-29324
	ctx.r11.s64 = ctx.r11.s64 + -29324;
	// addi r4,r11,-36
	ctx.r4.s64 = ctx.r11.s64 + -36;
	// b 0x83055844
	goto loc_83055844;
loc_830557EC:
	// bl 0x82d8a698
	ctx.lr = 0x830557F0;
	sub_82D8A698(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8305583c
	if (cr6.eq) goto loc_8305583C;
	// bl 0x82d8a750
	ctx.lr = 0x83055800;
	sub_82D8A750(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8305581c
	if (cr6.eq) goto loc_8305581C;
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// addi r11,r11,-29324
	ctx.r11.s64 = ctx.r11.s64 + -29324;
	// addi r4,r11,-28
	ctx.r4.s64 = ctx.r11.s64 + -28;
	// b 0x83055844
	goto loc_83055844;
loc_8305581C:
	// bl 0x82d8a820
	ctx.lr = 0x83055820;
	sub_82D8A820(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8305583c
	if (cr6.eq) goto loc_8305583C;
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// addi r11,r11,-29324
	ctx.r11.s64 = ctx.r11.s64 + -29324;
	// addi r4,r11,-20
	ctx.r4.s64 = ctx.r11.s64 + -20;
	// b 0x83055844
	goto loc_83055844;
loc_8305583C:
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// addi r4,r11,-29324
	ctx.r4.s64 = ctx.r11.s64 + -29324;
loc_83055844:
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x837b0c10
	ctx.lr = 0x8305584C;
	sub_837B0C10(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82e88020
	ctx.lr = 0x83055858;
	sub_82E88020(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8387e8e0
	ctx.lr = 0x83055860;
	sub_8387E8E0(ctx, base);
loc_83055860:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8305586C"))) PPC_WEAK_FUNC(sub_8305586C);
PPC_FUNC_IMPL(__imp__sub_8305586C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83055870"))) PPC_WEAK_FUNC(sub_83055870);
PPC_FUNC_IMPL(__imp__sub_83055870) {
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
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-28880
	ctx.r9.s64 = ctx.r11.s64 + -28880;
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
	ctx.lr = 0x830558A8;
	sub_82F42278(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x830558c0
	if (cr6.eq) goto loc_830558C0;
	// bl 0x82416268
	ctx.lr = 0x830558BC;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_830558C0:
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

__attribute__((alias("__imp__sub_830558D8"))) PPC_WEAK_FUNC(sub_830558D8);
PPC_FUNC_IMPL(__imp__sub_830558D8) {
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
	ctx.lr = 0x83055908;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8305593c
	if (cr6.eq) goto loc_8305593C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82f42220
	ctx.lr = 0x8305591C;
	sub_82F42220(ctx, base);
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-28880
	ctx.r9.s64 = ctx.r11.s64 + -28880;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r8,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r8.u32);
	// b 0x83055940
	goto loc_83055940;
loc_8305593C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83055940:
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

__attribute__((alias("__imp__sub_83055958"))) PPC_WEAK_FUNC(sub_83055958);
PPC_FUNC_IMPL(__imp__sub_83055958) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82d8a750
	ctx.lr = 0x83055970;
	sub_82D8A750(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830559c0
	if (cr6.eq) goto loc_830559C0;
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r11,r11,-28984
	ctx.r11.s64 = ctx.r11.s64 + -28984;
	// addi r4,r11,-68
	ctx.r4.s64 = ctx.r11.s64 + -68;
	// bl 0x837b0c10
	ctx.lr = 0x83055990;
	sub_837B0C10(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x8305599C;
	sub_82E88020(ctx, base);
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x83055a48
	if (cr6.lt) goto loc_83055A48;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x830559BC;
	sub_825952B8(ctx, base);
	// b 0x83055a48
	goto loc_83055A48;
loc_830559C0:
	// bl 0x82d8a820
	ctx.lr = 0x830559C4;
	sub_82D8A820(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830559e4
	if (cr6.eq) goto loc_830559E4;
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r11,r11,-28984
	ctx.r11.s64 = ctx.r11.s64 + -28984;
	// addi r4,r11,-52
	ctx.r4.s64 = ctx.r11.s64 + -52;
	// b 0x83055a30
	goto loc_83055A30;
loc_830559E4:
	// bl 0x82d95ee0
	ctx.lr = 0x830559E8;
	sub_82D95EE0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83055a08
	if (cr6.eq) goto loc_83055A08;
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r11,r11,-28984
	ctx.r11.s64 = ctx.r11.s64 + -28984;
	// addi r4,r11,-24
	ctx.r4.s64 = ctx.r11.s64 + -24;
	// b 0x83055a30
	goto loc_83055A30;
loc_83055A08:
	// bl 0x830ff290
	ctx.lr = 0x83055A0C;
	sub_830FF290(ctx, base);
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// cmplwi cr6,r11,44
	cr6.compare<uint32_t>(ctx.r11.u32, 44, xer);
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// bne cr6,0x83055a2c
	if (!cr6.eq) goto loc_83055A2C;
	// addi r11,r11,-28984
	ctx.r11.s64 = ctx.r11.s64 + -28984;
	// addi r4,r11,-8
	ctx.r4.s64 = ctx.r11.s64 + -8;
	// b 0x83055a30
	goto loc_83055A30;
loc_83055A2C:
	// addi r4,r11,-28984
	ctx.r4.s64 = ctx.r11.s64 + -28984;
loc_83055A30:
	// bl 0x837b0c10
	ctx.lr = 0x83055A34;
	sub_837B0C10(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x83055A40;
	sub_82E88020(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8387e8e0
	ctx.lr = 0x83055A48;
	sub_8387E8E0(ctx, base);
loc_83055A48:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83055A60"))) PPC_WEAK_FUNC(sub_83055A60);
PPC_FUNC_IMPL(__imp__sub_83055A60) {
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
	// bl 0x82dcea28
	ctx.lr = 0x83055A70;
	sub_82DCEA28(ctx, base);
	// bl 0x83102db0
	ctx.lr = 0x83055A74;
	sub_83102DB0(ctx, base);
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

__attribute__((alias("__imp__sub_83055A88"))) PPC_WEAK_FUNC(sub_83055A88);
PPC_FUNC_IMPL(__imp__sub_83055A88) {
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
	ctx.lr = 0x83055AA0;
	sub_82F42220(ctx, base);
	// lis r10,-32225
	ctx.r10.s64 = -2111897600;
	// lis r9,-32225
	ctx.r9.s64 = -2111897600;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r8,r10,-28312
	ctx.r8.s64 = ctx.r10.s64 + -28312;
	// addi r7,r9,-28316
	ctx.r7.s64 = ctx.r9.s64 + -28316;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// stw r7,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r7.u32);
	// stw r11,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r11.u32);
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// std r11,104(r31)
	PPC_STORE_U64(ctx.r31.u32 + 104, ctx.r11.u64);
	// stb r6,84(r31)
	PPC_STORE_U8(ctx.r31.u32 + 84, ctx.r6.u8);
	// bl 0x82dcecf8
	ctx.lr = 0x83055AD8;
	sub_82DCECF8(ctx, base);
	// bl 0x83102db0
	ctx.lr = 0x83055ADC;
	sub_83102DB0(ctx, base);
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

__attribute__((alias("__imp__sub_83055AF4"))) PPC_WEAK_FUNC(sub_83055AF4);
PPC_FUNC_IMPL(__imp__sub_83055AF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83055AF8"))) PPC_WEAK_FUNC(sub_83055AF8);
PPC_FUNC_IMPL(__imp__sub_83055AF8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r11,264
	ctx.r11.s64 = 17301504;
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// ori r9,r11,5
	ctx.r9.u64 = ctx.r11.u64 | 5;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bne cr6,0x83055b20
	if (!cr6.eq) goto loc_83055B20;
	// lwz r11,96(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83055b20
	if (cr6.eq) goto loc_83055B20;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,96(r3)
	PPC_STORE_U32(ctx.r3.u32 + 96, ctx.r11.u32);
loc_83055B20:
	// b 0x83824d80
	sub_83824D80(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83055B24"))) PPC_WEAK_FUNC(sub_83055B24);
PPC_FUNC_IMPL(__imp__sub_83055B24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83055B28"))) PPC_WEAK_FUNC(sub_83055B28);
PPC_FUNC_IMPL(__imp__sub_83055B28) {
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
	// lwz r11,96(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83055bc8
	if (!cr6.eq) goto loc_83055BC8;
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// li r6,3
	ctx.r6.s64 = 3;
	// addi r3,r11,-28416
	ctx.r3.s64 = ctx.r11.s64 + -28416;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2ee48
	ctx.lr = 0x83055B60;
	sub_82D2EE48(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83055bc8
	if (cr6.eq) goto loc_83055BC8;
	// lis r11,44
	ctx.r11.s64 = 2883584;
	// stw r3,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r3.u32);
	// lis r10,507
	ctx.r10.s64 = 33226752;
	// ori r9,r11,118
	ctx.r9.u64 = ctx.r11.u64 | 118;
	// ori r8,r10,21
	ctx.r8.u64 = ctx.r10.u64 | 21;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// li r5,2
	ctx.r5.s64 = 2;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82d2ac30
	ctx.lr = 0x83055B90;
	sub_82D2AC30(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// bl 0x82d19788
	ctx.lr = 0x83055BA0;
	sub_82D19788(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// bl 0x82d19788
	ctx.lr = 0x83055BB0;
	sub_82D19788(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// bl 0x83102db0
	ctx.lr = 0x83055BBC;
	sub_83102DB0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,96(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// bl 0x83103100
	ctx.lr = 0x83055BC8;
	sub_83103100(ctx, base);
loc_83055BC8:
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
}

__attribute__((alias("__imp__sub_83055BE0"))) PPC_WEAK_FUNC(sub_83055BE0);
PPC_FUNC_IMPL(__imp__sub_83055BE0) {
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
	// li r11,31
	ctx.r11.s64 = 31;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,112
	ctx.r4.s64 = 112;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x83055C0C;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83055c30
	if (cr6.eq) goto loc_83055C30;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x83055a88
	ctx.lr = 0x83055C1C;
	sub_83055A88(ctx, base);
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
loc_83055C30:
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

__attribute__((alias("__imp__sub_83055C48"))) PPC_WEAK_FUNC(sub_83055C48);
PPC_FUNC_IMPL(__imp__sub_83055C48) {
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
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// lis r10,-32225
	ctx.r10.s64 = -2111897600;
	// addi r9,r11,-28312
	ctx.r9.s64 = ctx.r11.s64 + -28312;
	// addi r8,r10,-28316
	ctx.r8.s64 = ctx.r10.s64 + -28316;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r8,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r8.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82d482c0
	ctx.lr = 0x83055C84;
	sub_82D482C0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f42278
	ctx.lr = 0x83055C8C;
	sub_82F42278(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x83055ca4
	if (cr6.eq) goto loc_83055CA4;
	// bl 0x82416268
	ctx.lr = 0x83055CA0;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_83055CA4:
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

__attribute__((alias("__imp__sub_83055CBC"))) PPC_WEAK_FUNC(sub_83055CBC);
PPC_FUNC_IMPL(__imp__sub_83055CBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83055CC0"))) PPC_WEAK_FUNC(sub_83055CC0);
PPC_FUNC_IMPL(__imp__sub_83055CC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83055CC8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,88(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r11,7
	cr6.compare<uint32_t>(ctx.r11.u32, 7, xer);
	// bgt cr6,0x83055e70
	if (cr6.gt) goto loc_83055E70;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x83055d48
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83055D48;
	// bdzf 4*cr6+eq,0x83055da4
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83055DA4;
	// bdzf 4*cr6+eq,0x83055dbc
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83055DBC;
	// bdzf 4*cr6+eq,0x83055de4
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83055DE4;
	// bdzf 4*cr6+eq,0x83055e1c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83055E1C;
	// bdzf 4*cr6+eq,0x83055e60
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83055E60;
	// bne cr6,0x83055e60
	if (!cr6.eq) goto loc_83055E60;
	// bl 0x82dcede8
	ctx.lr = 0x83055D08;
	sub_82DCEDE8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83055d90
	if (!cr6.eq) goto loc_83055D90;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83055b28
	ctx.lr = 0x83055D1C;
	sub_83055B28(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82d482c0
	ctx.lr = 0x83055D24;
	sub_82D482C0(ctx, base);
	// bl 0x83a7d958
	ctx.lr = 0x83055D28;
	sub_83A7D958(ctx, base);
	// bl 0x83524138
	ctx.lr = 0x83055D2C;
	sub_83524138(ctx, base);
	// addi r11,r3,30000
	ctx.r11.s64 = ctx.r3.s64 + 30000;
	// li r10,1
	ctx.r10.s64 = 1;
	// std r11,104(r31)
	PPC_STORE_U64(ctx.r31.u32 + 104, ctx.r11.u64);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r10,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r10.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83055D48:
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// bl 0x82dcede8
	ctx.lr = 0x83055D50;
	sub_82DCEDE8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83055d80
	if (!cr6.eq) goto loc_83055D80;
	// ld r11,104(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 104);
	// cmpldi cr6,r11,0
	cr6.compare<uint64_t>(ctx.r11.u64, 0, xer);
	// ble cr6,0x83055d84
	if (!cr6.gt) goto loc_83055D84;
	// bl 0x83a7d958
	ctx.lr = 0x83055D6C;
	sub_83A7D958(ctx, base);
	// bl 0x83524138
	ctx.lr = 0x83055D70;
	sub_83524138(ctx, base);
	// ld r11,104(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 104);
	// cmpld cr6,r3,r11
	cr6.compare<uint64_t>(ctx.r3.u64, ctx.r11.u64, xer);
	// ble cr6,0x83055d84
	if (!cr6.gt) goto loc_83055D84;
	// std r29,104(r31)
	PPC_STORE_U64(ctx.r31.u32 + 104, ctx.r29.u64);
loc_83055D80:
	// li r30,1
	ctx.r30.s64 = 1;
loc_83055D84:
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83055e78
	if (cr6.eq) goto loc_83055E78;
loc_83055D90:
	// li r11,2
	ctx.r11.s64 = 2;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83055DA4:
	// bl 0x82dced48
	ctx.lr = 0x83055DA8;
	sub_82DCED48(ctx, base);
	// li r11,3
	ctx.r11.s64 = 3;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83055DBC:
	// bl 0x82dced70
	ctx.lr = 0x83055DC0;
	sub_82DCED70(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83055e78
	if (cr6.eq) goto loc_83055E78;
	// bl 0x82dcedc0
	ctx.lr = 0x83055DD0;
	sub_82DCEDC0(ctx, base);
	// li r11,6
	ctx.r11.s64 = 6;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83055DE4:
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// addi r3,r11,-28428
	ctx.r3.s64 = ctx.r11.s64 + -28428;
	// bl 0x82e6c8f0
	ctx.lr = 0x83055DF0;
	sub_82E6C8F0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r3,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83055e70
	if (cr6.eq) goto loc_83055E70;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83103100
	ctx.lr = 0x83055E08;
	sub_83103100(ctx, base);
	// li r11,5
	ctx.r11.s64 = 5;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83055E1C:
	// lwz r3,92(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83055e70
	if (cr6.eq) goto loc_83055E70;
	// bl 0x82e6c620
	ctx.lr = 0x83055E2C;
	sub_82E6C620(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83055e78
	if (cr6.eq) goto loc_83055E78;
	// lwz r11,92(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,76(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r8,r9,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// xori r11,r8,1
	ctx.r11.u64 = ctx.r8.u64 ^ 1;
	// addi r7,r11,6
	ctx.r7.s64 = ctx.r11.s64 + 6;
	// stw r7,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r7.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83055E60:
	// li r29,1
	ctx.r29.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83055E70:
	// li r11,7
	ctx.r11.s64 = 7;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
loc_83055E78:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83055E84"))) PPC_WEAK_FUNC(sub_83055E84);
PPC_FUNC_IMPL(__imp__sub_83055E84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83055E88"))) PPC_WEAK_FUNC(sub_83055E88);
PPC_FUNC_IMPL(__imp__sub_83055E88) {
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
	// lwz r31,72(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x83055ed8
	if (cr6.eq) goto loc_83055ED8;
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595150
	ctx.lr = 0x83055EB8;
	sub_82595150(ctx, base);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x83055ED0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595170
	ctx.lr = 0x83055ED8;
	sub_82595170(ctx, base);
loc_83055ED8:
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

__attribute__((alias("__imp__sub_83055EEC"))) PPC_WEAK_FUNC(sub_83055EEC);
PPC_FUNC_IMPL(__imp__sub_83055EEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83055EF0"))) PPC_WEAK_FUNC(sub_83055EF0);
PPC_FUNC_IMPL(__imp__sub_83055EF0) {
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
	// li r11,31
	ctx.r11.s64 = 31;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595718
	ctx.lr = 0x83055F1C;
	sub_82595718(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83055f38
	if (cr6.eq) goto loc_83055F38;
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// addi r10,r11,-28208
	ctx.r10.s64 = ctx.r11.s64 + -28208;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// b 0x83055f3c
	goto loc_83055F3C;
loc_83055F38:
	// li r4,0
	ctx.r4.s64 = 0;
loc_83055F3C:
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
	ctx.lr = 0x83055F58;
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

__attribute__((alias("__imp__sub_83055F70"))) PPC_WEAK_FUNC(sub_83055F70);
PPC_FUNC_IMPL(__imp__sub_83055F70) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x83055cc0
	ctx.lr = 0x83055F8C;
	sub_83055CC0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83055fa0
	if (!cr6.eq) goto loc_83055FA0;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8305603c
	goto loc_8305603C;
loc_83055FA0:
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// cmplwi cr6,r11,7
	cr6.compare<uint32_t>(ctx.r11.u32, 7, xer);
	// bne cr6,0x83055fbc
	if (!cr6.eq) goto loc_83055FBC;
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// addi r11,r11,-28436
	ctx.r11.s64 = ctx.r11.s64 + -28436;
	// addi r4,r11,-24
	ctx.r4.s64 = ctx.r11.s64 + -24;
	// b 0x8305601c
	goto loc_8305601C;
loc_83055FBC:
	// lis r11,-31758
	ctx.r11.s64 = -2081292288;
	// lwz r30,30272(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 30272);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x83056014
	if (cr6.eq) goto loc_83056014;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82dab430
	ctx.lr = 0x83055FD4;
	sub_82DAB430(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83055ff0
	if (!cr6.eq) goto loc_83055FF0;
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// addi r11,r11,-28436
	ctx.r11.s64 = ctx.r11.s64 + -28436;
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// b 0x8305601c
	goto loc_8305601C;
loc_83055FF0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82dab400
	ctx.lr = 0x83055FF8;
	sub_82DAB400(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83056014
	if (cr6.eq) goto loc_83056014;
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// addi r11,r11,-28436
	ctx.r11.s64 = ctx.r11.s64 + -28436;
	// addi r4,r11,-8
	ctx.r4.s64 = ctx.r11.s64 + -8;
	// b 0x8305601c
	goto loc_8305601C;
loc_83056014:
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// addi r4,r11,-28436
	ctx.r4.s64 = ctx.r11.s64 + -28436;
loc_8305601C:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x837b0c10
	ctx.lr = 0x83056024;
	sub_837B0C10(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x83056030;
	sub_82E88020(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8387e8e0
	ctx.lr = 0x83056038;
	sub_8387E8E0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
loc_8305603C:
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

__attribute__((alias("__imp__sub_83056054"))) PPC_WEAK_FUNC(sub_83056054);
PPC_FUNC_IMPL(__imp__sub_83056054) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83056058"))) PPC_WEAK_FUNC(sub_83056058);
PPC_FUNC_IMPL(__imp__sub_83056058) {
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
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-27696
	ctx.r9.s64 = ctx.r11.s64 + -27696;
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
	ctx.lr = 0x83056090;
	sub_82F42278(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x830560a8
	if (cr6.eq) goto loc_830560A8;
	// bl 0x82416268
	ctx.lr = 0x830560A4;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_830560A8:
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

__attribute__((alias("__imp__sub_830560C0"))) PPC_WEAK_FUNC(sub_830560C0);
PPC_FUNC_IMPL(__imp__sub_830560C0) {
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
	ctx.lr = 0x830560F0;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83056124
	if (cr6.eq) goto loc_83056124;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82f42220
	ctx.lr = 0x83056104;
	sub_82F42220(ctx, base);
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-27696
	ctx.r9.s64 = ctx.r11.s64 + -27696;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r8,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r8.u32);
	// b 0x83056128
	goto loc_83056128;
loc_83056124:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83056128:
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

__attribute__((alias("__imp__sub_83056140"))) PPC_WEAK_FUNC(sub_83056140);
PPC_FUNC_IMPL(__imp__sub_83056140) {
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
	// lis r11,-31758
	ctx.r11.s64 = -2081292288;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,30272(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 30272);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83056180
	if (cr6.eq) goto loc_83056180;
	// bl 0x82dab430
	ctx.lr = 0x8305616C;
	sub_82DAB430(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83056180
	if (!cr6.eq) goto loc_83056180;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x830562e0
	goto loc_830562E0;
loc_83056180:
	// bl 0x82d86078
	ctx.lr = 0x83056184;
	sub_82D86078(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x830561a0
	if (!cr6.eq) goto loc_830561A0;
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// addi r11,r11,-27792
	ctx.r11.s64 = ctx.r11.s64 + -27792;
	// addi r4,r11,-92
	ctx.r4.s64 = ctx.r11.s64 + -92;
	// b 0x830562c0
	goto loc_830562C0;
loc_830561A0:
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// bl 0x82daa490
	ctx.lr = 0x830561A8;
	sub_82DAA490(ctx, base);
	// bl 0x825832f0
	ctx.lr = 0x830561AC;
	sub_825832F0(ctx, base);
	// cmplwi cr6,r3,9
	cr6.compare<uint32_t>(ctx.r3.u32, 9, xer);
	// bgt cr6,0x830561fc
	if (cr6.gt) goto loc_830561FC;
	// lis r12,-31995
	ctx.r12.s64 = -2096824320;
	// rlwinm r0,r3,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,25036
	ctx.r12.s64 = ctx.r12.s64 + 25036;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r3.u32) {
	case 0:
		goto loc_830561FC;
	case 1:
		goto loc_830561FC;
	case 2:
		goto loc_830561FC;
	case 3:
		goto loc_830561FC;
	case 4:
		goto loc_830561F4;
	case 5:
		goto loc_830561FC;
	case 6:
		goto loc_830561FC;
	case 7:
		goto loc_830561FC;
	case 8:
		goto loc_830561FC;
	case 9:
		goto loc_830561FC;
	default:
		return;
	}
	// lwz r24,25084(r5)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r5.u32 + 25084);
	// lwz r24,25084(r5)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r5.u32 + 25084);
	// lwz r24,25084(r5)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r5.u32 + 25084);
	// lwz r24,25084(r5)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r5.u32 + 25084);
	// lwz r24,25076(r5)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r5.u32 + 25076);
	// lwz r24,25084(r5)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r5.u32 + 25084);
	// lwz r24,25084(r5)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r5.u32 + 25084);
	// lwz r24,25084(r5)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r5.u32 + 25084);
	// lwz r24,25084(r5)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r5.u32 + 25084);
	// lwz r24,25084(r5)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r5.u32 + 25084);
loc_830561F4:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x83056200
	goto loc_83056200;
loc_830561FC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_83056200:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83056264
	if (cr6.eq) goto loc_83056264;
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// bl 0x82daa560
	ctx.lr = 0x83056214;
	sub_82DAA560(ctx, base);
	// bl 0x82da9d58
	ctx.lr = 0x83056218;
	sub_82DA9D58(ctx, base);
	// bl 0x830ff290
	ctx.lr = 0x8305621C;
	sub_830FF290(ctx, base);
	// bl 0x830ffaa8
	ctx.lr = 0x83056220;
	sub_830FFAA8(ctx, base);
	// cmplwi cr6,r3,21
	cr6.compare<uint32_t>(ctx.r3.u32, 21, xer);
	// bne cr6,0x83056238
	if (!cr6.eq) goto loc_83056238;
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// addi r11,r11,-27792
	ctx.r11.s64 = ctx.r11.s64 + -27792;
	// addi r4,r11,-84
	ctx.r4.s64 = ctx.r11.s64 + -84;
	// b 0x830562c0
	goto loc_830562C0;
loc_83056238:
	// bl 0x82d95f50
	ctx.lr = 0x8305623C;
	sub_82D95F50(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// addi r11,r11,-27792
	ctx.r11.s64 = ctx.r11.s64 + -27792;
	// beq cr6,0x8305625c
	if (cr6.eq) goto loc_8305625C;
	// addi r4,r11,-68
	ctx.r4.s64 = ctx.r11.s64 + -68;
	// b 0x830562c4
	goto loc_830562C4;
loc_8305625C:
	// addi r4,r11,-52
	ctx.r4.s64 = ctx.r11.s64 + -52;
	// b 0x830562c4
	goto loc_830562C4;
loc_83056264:
	// bl 0x82d8a820
	ctx.lr = 0x83056268;
	sub_82D8A820(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83056284
	if (cr6.eq) goto loc_83056284;
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// addi r11,r11,-27792
	ctx.r11.s64 = ctx.r11.s64 + -27792;
	// addi r4,r11,-44
	ctx.r4.s64 = ctx.r11.s64 + -44;
	// b 0x830562c0
	goto loc_830562C0;
loc_83056284:
	// bl 0x82d95ee0
	ctx.lr = 0x83056288;
	sub_82D95EE0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830562a4
	if (cr6.eq) goto loc_830562A4;
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// addi r11,r11,-27792
	ctx.r11.s64 = ctx.r11.s64 + -27792;
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// b 0x830562c0
	goto loc_830562C0;
loc_830562A4:
	// bl 0x82dceaf8
	ctx.lr = 0x830562A8;
	sub_82DCEAF8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830562b8
	if (cr6.eq) goto loc_830562B8;
	// bl 0x82dcecd0
	ctx.lr = 0x830562B8;
	sub_82DCECD0(ctx, base);
loc_830562B8:
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// addi r4,r11,-27792
	ctx.r4.s64 = ctx.r11.s64 + -27792;
loc_830562C0:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
loc_830562C4:
	// bl 0x837b0c10
	ctx.lr = 0x830562C8;
	sub_837B0C10(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x830562D4;
	sub_82E88020(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8387e8e0
	ctx.lr = 0x830562DC;
	sub_8387E8E0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
loc_830562E0:
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

__attribute__((alias("__imp__sub_830562F8"))) PPC_WEAK_FUNC(sub_830562F8);
PPC_FUNC_IMPL(__imp__sub_830562F8) {
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
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-27448
	ctx.r9.s64 = ctx.r11.s64 + -27448;
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
	ctx.lr = 0x83056330;
	sub_82F42278(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x83056348
	if (cr6.eq) goto loc_83056348;
	// bl 0x82416268
	ctx.lr = 0x83056344;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_83056348:
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

__attribute__((alias("__imp__sub_83056360"))) PPC_WEAK_FUNC(sub_83056360);
PPC_FUNC_IMPL(__imp__sub_83056360) {
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
	ctx.lr = 0x83056390;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830563c4
	if (cr6.eq) goto loc_830563C4;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82f42220
	ctx.lr = 0x830563A4;
	sub_82F42220(ctx, base);
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-27448
	ctx.r9.s64 = ctx.r11.s64 + -27448;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r8,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r8.u32);
	// b 0x830563c8
	goto loc_830563C8;
loc_830563C4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_830563C8:
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

__attribute__((alias("__imp__sub_830563E0"))) PPC_WEAK_FUNC(sub_830563E0);
PPC_FUNC_IMPL(__imp__sub_830563E0) {
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
	// lis r9,-32225
	ctx.r9.s64 = -2111897600;
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stb r11,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r11.u8);
	// li r5,7
	ctx.r5.s64 = 7;
	// addi r4,r9,-27544
	ctx.r4.s64 = ctx.r9.s64 + -27544;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8259cc28
	ctx.lr = 0x8305641C;
	sub_8259CC28(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x83056428;
	sub_82E88020(ctx, base);
	// lwz r8,116(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r8,16
	cr6.compare<uint32_t>(ctx.r8.u32, 16, xer);
	// blt cr6,0x83056448
	if (cr6.lt) goto loc_83056448;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x83056448;
	sub_825952B8(ctx, base);
loc_83056448:
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

__attribute__((alias("__imp__sub_83056460"))) PPC_WEAK_FUNC(sub_83056460);
PPC_FUNC_IMPL(__imp__sub_83056460) {
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
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// lis r10,-32225
	ctx.r10.s64 = -2111897600;
	// addi r9,r11,-27176
	ctx.r9.s64 = ctx.r11.s64 + -27176;
	// addi r8,r10,-27180
	ctx.r8.s64 = ctx.r10.s64 + -27180;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r8,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r8.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82f42278
	ctx.lr = 0x83056498;
	sub_82F42278(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x830564b0
	if (cr6.eq) goto loc_830564B0;
	// bl 0x82416268
	ctx.lr = 0x830564AC;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_830564B0:
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

__attribute__((alias("__imp__sub_830564C8"))) PPC_WEAK_FUNC(sub_830564C8);
PPC_FUNC_IMPL(__imp__sub_830564C8) {
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
	// bl 0x82d47978
	ctx.lr = 0x830564D8;
	sub_82D47978(ctx, base);
	// bl 0x82e64168
	ctx.lr = 0x830564DC;
	sub_82E64168(ctx, base);
	// bl 0x82dcbcb0
	ctx.lr = 0x830564E0;
	sub_82DCBCB0(ctx, base);
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

__attribute__((alias("__imp__sub_830564F4"))) PPC_WEAK_FUNC(sub_830564F4);
PPC_FUNC_IMPL(__imp__sub_830564F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830564F8"))) PPC_WEAK_FUNC(sub_830564F8);
PPC_FUNC_IMPL(__imp__sub_830564F8) {
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
	ctx.lr = 0x83056528;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8305655c
	if (cr6.eq) goto loc_8305655C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82f42220
	ctx.lr = 0x8305653C;
	sub_82F42220(ctx, base);
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// lis r10,-32225
	ctx.r10.s64 = -2111897600;
	// addi r9,r11,-27176
	ctx.r9.s64 = ctx.r11.s64 + -27176;
	// addi r8,r10,-27180
	ctx.r8.s64 = ctx.r10.s64 + -27180;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r8,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r8.u32);
	// b 0x83056560
	goto loc_83056560;
loc_8305655C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83056560:
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

__attribute__((alias("__imp__sub_83056578"))) PPC_WEAK_FUNC(sub_83056578);
PPC_FUNC_IMPL(__imp__sub_83056578) {
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
	// li r11,31
	ctx.r11.s64 = 31;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595718
	ctx.lr = 0x830565A4;
	sub_82595718(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830565c0
	if (cr6.eq) goto loc_830565C0;
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// addi r10,r11,-27072
	ctx.r10.s64 = ctx.r11.s64 + -27072;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// b 0x830565c4
	goto loc_830565C4;
loc_830565C0:
	// li r4,0
	ctx.r4.s64 = 0;
loc_830565C4:
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
	ctx.lr = 0x830565E0;
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

__attribute__((alias("__imp__sub_830565F8"))) PPC_WEAK_FUNC(sub_830565F8);
PPC_FUNC_IMPL(__imp__sub_830565F8) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82d86078
	ctx.lr = 0x83056610;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8305665c
	if (!cr6.eq) goto loc_8305665C;
	// bl 0x82d89740
	ctx.lr = 0x8305661C;
	sub_82D89740(ctx, base);
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r11,r11,-27272
	ctx.r11.s64 = ctx.r11.s64 + -27272;
	// addi r4,r11,-8
	ctx.r4.s64 = ctx.r11.s64 + -8;
	// bl 0x837b0c10
	ctx.lr = 0x83056630;
	sub_837B0C10(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x8305663C;
	sub_82E88020(ctx, base);
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x830566c0
	if (cr6.lt) goto loc_830566C0;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// b 0x830566bc
	goto loc_830566BC;
loc_8305665C:
	// lwz r3,20(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lbz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83056674
	if (cr6.eq) goto loc_83056674;
	// bl 0x82dbb808
	ctx.lr = 0x83056670;
	sub_82DBB808(ctx, base);
	// b 0x83056678
	goto loc_83056678;
loc_83056674:
	// bl 0x82dbb8f8
	ctx.lr = 0x83056678;
	sub_82DBB8F8(ctx, base);
loc_83056678:
	// bl 0x82e640b0
	ctx.lr = 0x8305667C;
	sub_82E640B0(ctx, base);
	// bl 0x82e64158
	ctx.lr = 0x83056680;
	sub_82E64158(ctx, base);
	// bl 0x82e61f50
	ctx.lr = 0x83056684;
	sub_82E61F50(ctx, base);
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r4,r11,-27272
	ctx.r4.s64 = ctx.r11.s64 + -27272;
	// bl 0x837b0c10
	ctx.lr = 0x83056694;
	sub_837B0C10(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x830566A0;
	sub_82E88020(ctx, base);
	// lwz r10,148(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x830566c0
	if (cr6.lt) goto loc_830566C0;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
loc_830566BC:
	// bl 0x825952b8
	ctx.lr = 0x830566C0;
	sub_825952B8(ctx, base);
loc_830566C0:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830566D8"))) PPC_WEAK_FUNC(sub_830566D8);
PPC_FUNC_IMPL(__imp__sub_830566D8) {
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
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// lis r10,-32225
	ctx.r10.s64 = -2111897600;
	// addi r9,r11,-26912
	ctx.r9.s64 = ctx.r11.s64 + -26912;
	// addi r8,r10,-26916
	ctx.r8.s64 = ctx.r10.s64 + -26916;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r8,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r8.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82f42278
	ctx.lr = 0x83056710;
	sub_82F42278(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x83056728
	if (cr6.eq) goto loc_83056728;
	// bl 0x82416268
	ctx.lr = 0x83056724;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_83056728:
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

__attribute__((alias("__imp__sub_83056740"))) PPC_WEAK_FUNC(sub_83056740);
PPC_FUNC_IMPL(__imp__sub_83056740) {
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
	// lwz r3,8856(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8856);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83056790
	if (!cr6.eq) goto loc_83056790;
	// li r11,29
	ctx.r11.s64 = 29;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x83056778;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83056788
	if (cr6.eq) goto loc_83056788;
	// bl 0x82e57b88
	ctx.lr = 0x83056784;
	sub_82E57B88(ctx, base);
	// b 0x8305678c
	goto loc_8305678C;
loc_83056788:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8305678C:
	// stw r3,8856(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8856, ctx.r3.u32);
loc_83056790:
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

__attribute__((alias("__imp__sub_830567A4"))) PPC_WEAK_FUNC(sub_830567A4);
PPC_FUNC_IMPL(__imp__sub_830567A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830567A8"))) PPC_WEAK_FUNC(sub_830567A8);
PPC_FUNC_IMPL(__imp__sub_830567A8) {
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
	// lbz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 16);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x830567f0
	if (!cr6.eq) goto loc_830567F0;
	// bl 0x82d96430
	ctx.lr = 0x830567CC;
	sub_82D96430(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// stb r3,16(r31)
	PPC_STORE_U8(ctx.r31.u32 + 16, ctx.r3.u8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83056830
	if (cr6.eq) goto loc_83056830;
	// lis r11,-31757
	ctx.r11.s64 = -2081226752;
	// lwz r3,25496(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25496);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830567f0
	if (cr6.eq) goto loc_830567F0;
	// bl 0x82e9bda0
	ctx.lr = 0x830567F0;
	sub_82E9BDA0(ctx, base);
loc_830567F0:
	// bl 0x82d47978
	ctx.lr = 0x830567F4;
	sub_82D47978(ctx, base);
	// bl 0x839e4200
	ctx.lr = 0x830567F8;
	sub_839E4200(ctx, base);
	// bl 0x83779190
	ctx.lr = 0x830567FC;
	sub_83779190(ctx, base);
	// lis r11,-31757
	ctx.r11.s64 = -2081226752;
	// lwz r11,8856(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8856);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83056810
	if (cr6.eq) goto loc_83056810;
	// bl 0x82d95e90
	ctx.lr = 0x83056810;
	sub_82D95E90(ctx, base);
loc_83056810:
	// lbz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 16);
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
loc_83056830:
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

__attribute__((alias("__imp__sub_83056848"))) PPC_WEAK_FUNC(sub_83056848);
PPC_FUNC_IMPL(__imp__sub_83056848) {
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
	ctx.lr = 0x83056878;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830568b4
	if (cr6.eq) goto loc_830568B4;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82f42220
	ctx.lr = 0x8305688C;
	sub_82F42220(ctx, base);
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// lis r10,-32225
	ctx.r10.s64 = -2111897600;
	// addi r9,r11,-26912
	ctx.r9.s64 = ctx.r11.s64 + -26912;
	// addi r8,r10,-26916
	ctx.r8.s64 = ctx.r10.s64 + -26916;
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
	// b 0x830568b8
	goto loc_830568B8;
loc_830568B4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_830568B8:
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

__attribute__((alias("__imp__sub_830568D0"))) PPC_WEAK_FUNC(sub_830568D0);
PPC_FUNC_IMPL(__imp__sub_830568D0) {
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
	// li r11,31
	ctx.r11.s64 = 31;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,20
	ctx.r4.s64 = 20;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595718
	ctx.lr = 0x830568FC;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// beq cr6,0x83056934
	if (cr6.eq) goto loc_83056934;
	// lis r9,-32225
	ctx.r9.s64 = -2111897600;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// addi r8,r9,-26808
	ctx.r8.s64 = ctx.r9.s64 + -26808;
	// stb r11,16(r3)
	PPC_STORE_U8(ctx.r3.u32 + 16, ctx.r11.u8);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stb r10,12(r3)
	PPC_STORE_U8(ctx.r3.u32 + 12, ctx.r10.u8);
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// stb r10,13(r3)
	PPC_STORE_U8(ctx.r3.u32 + 13, ctx.r10.u8);
	// b 0x83056938
	goto loc_83056938;
loc_83056934:
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
loc_83056938:
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// stw r4,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r4.u32);
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// stb r11,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r11.u8);
	// lbz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x83878e28
	ctx.lr = 0x83056950;
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

__attribute__((alias("__imp__sub_83056968"))) PPC_WEAK_FUNC(sub_83056968);
PPC_FUNC_IMPL(__imp__sub_83056968) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83056970;
	__savegprlr_29(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,88(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// bgt cr6,0x83056acc
	if (cr6.gt) goto loc_83056ACC;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x83056a20
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83056A20;
	// bdzf 4*cr6+eq,0x83056a60
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83056A60;
	// bne cr6,0x83056a98
	if (!cr6.eq) goto loc_83056A98;
	// bl 0x82d86078
	ctx.lr = 0x830569A0;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83056acc
	if (cr6.eq) goto loc_83056ACC;
	// lwz r3,28(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// bl 0x82da2390
	ctx.lr = 0x830569B0;
	sub_82DA2390(ctx, base);
	// bl 0x83056740
	ctx.lr = 0x830569B4;
	sub_83056740(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83056acc
	if (cr6.eq) goto loc_83056ACC;
	// bl 0x82e589d0
	ctx.lr = 0x830569C0;
	sub_82E589D0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83056acc
	if (cr6.eq) goto loc_83056ACC;
	// lis r11,-31757
	ctx.r11.s64 = -2081226752;
	// lwz r11,25496(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25496);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83056a0c
	if (!cr6.eq) goto loc_83056A0C;
	// bl 0x831021a0
	ctx.lr = 0x830569E0;
	sub_831021A0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82da45f8
	ctx.lr = 0x830569E8;
	sub_82DA45F8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83056acc
	if (cr6.eq) goto loc_83056ACC;
	// bl 0x82e5ac00
	ctx.lr = 0x830569F8;
	sub_82E5AC00(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83056acc
	if (cr6.eq) goto loc_83056ACC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83103100
	ctx.lr = 0x83056A0C;
	sub_83103100(ctx, base);
loc_83056A0C:
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83056A20:
	// lis r11,-31757
	ctx.r11.s64 = -2081226752;
	// lwz r30,8856(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8856);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x83056a4c
	if (cr6.eq) goto loc_83056A4C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82e58ab0
	ctx.lr = 0x83056A38;
	sub_82E58AB0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83056ad4
	if (cr6.eq) goto loc_83056AD4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82e57e60
	ctx.lr = 0x83056A4C;
	sub_82E57E60(ctx, base);
loc_83056A4C:
	// li r11,2
	ctx.r11.s64 = 2;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83056A60:
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r11,r11,-27008
	ctx.r11.s64 = ctx.r11.s64 + -27008;
	// addi r4,r11,-8
	ctx.r4.s64 = ctx.r11.s64 + -8;
	// bl 0x837b0c10
	ctx.lr = 0x83056A74;
	sub_837B0C10(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x83056A80;
	sub_82E88020(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8387e8e0
	ctx.lr = 0x83056A88;
	sub_8387E8E0(ctx, base);
	// li r29,1
	ctx.r29.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83056A98:
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r4,r11,-27008
	ctx.r4.s64 = ctx.r11.s64 + -27008;
	// bl 0x837b0c10
	ctx.lr = 0x83056AA8;
	sub_837B0C10(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x83056AB4;
	sub_82E88020(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8387e8e0
	ctx.lr = 0x83056ABC;
	sub_8387E8E0(ctx, base);
	// li r29,1
	ctx.r29.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83056ACC:
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
loc_83056AD4:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83056AE0"))) PPC_WEAK_FUNC(sub_83056AE0);
PPC_FUNC_IMPL(__imp__sub_83056AE0) {
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
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-26408
	ctx.r9.s64 = ctx.r11.s64 + -26408;
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
	ctx.lr = 0x83056B18;
	sub_82F42278(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x83056b30
	if (cr6.eq) goto loc_83056B30;
	// bl 0x82416268
	ctx.lr = 0x83056B2C;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_83056B30:
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

__attribute__((alias("__imp__sub_83056B48"))) PPC_WEAK_FUNC(sub_83056B48);
PPC_FUNC_IMPL(__imp__sub_83056B48) {
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
	// bl 0x82d34e50
	ctx.lr = 0x83056B58;
	sub_82D34E50(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83056b70
	if (cr6.eq) goto loc_83056B70;
	// bl 0x82d34e50
	ctx.lr = 0x83056B64;
	sub_82D34E50(ctx, base);
	// li r4,6
	ctx.r4.s64 = 6;
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x82d35038
	ctx.lr = 0x83056B70;
	sub_82D35038(ctx, base);
loc_83056B70:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83056B80"))) PPC_WEAK_FUNC(sub_83056B80);
PPC_FUNC_IMPL(__imp__sub_83056B80) {
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
	ctx.lr = 0x83056BB0;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83056bec
	if (cr6.eq) goto loc_83056BEC;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82f42220
	ctx.lr = 0x83056BC4;
	sub_82F42220(ctx, base);
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-26408
	ctx.r9.s64 = ctx.r11.s64 + -26408;
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
	// stb r7,84(r31)
	PPC_STORE_U8(ctx.r31.u32 + 84, ctx.r7.u8);
	// b 0x83056bf0
	goto loc_83056BF0;
loc_83056BEC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83056BF0:
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

__attribute__((alias("__imp__sub_83056C08"))) PPC_WEAK_FUNC(sub_83056C08);
PPC_FUNC_IMPL(__imp__sub_83056C08) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82d96430
	ctx.lr = 0x83056C20;
	sub_82D96430(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83056c44
	if (!cr6.eq) goto loc_83056C44;
loc_83056C2C:
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
loc_83056C44:
	// bl 0x82d34e50
	ctx.lr = 0x83056C48;
	sub_82D34E50(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83056c64
	if (cr6.eq) goto loc_83056C64;
	// bl 0x82d34e50
	ctx.lr = 0x83056C54;
	sub_82D34E50(ctx, base);
	// bl 0x82d34d38
	ctx.lr = 0x83056C58;
	sub_82D34D38(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83056c2c
	if (cr6.eq) goto loc_83056C2C;
loc_83056C64:
	// bl 0x82d95ee0
	ctx.lr = 0x83056C68;
	sub_82D95EE0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83056c94
	if (!cr6.eq) goto loc_83056C94;
	// lis r11,-31757
	ctx.r11.s64 = -2081226752;
	// lwz r3,25496(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25496);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83056c94
	if (cr6.eq) goto loc_83056C94;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83056C94;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83056C94:
	// bl 0x82d95f98
	ctx.lr = 0x83056C98;
	sub_82D95F98(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83056cc0
	if (!cr6.eq) goto loc_83056CC0;
	// bl 0x82d8a698
	ctx.lr = 0x83056CA8;
	sub_82D8A698(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83056cc0
	if (!cr6.eq) goto loc_83056CC0;
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// addi r4,r11,-26508
	ctx.r4.s64 = ctx.r11.s64 + -26508;
	// b 0x83056ccc
	goto loc_83056CCC;
loc_83056CC0:
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// addi r11,r11,-26508
	ctx.r11.s64 = ctx.r11.s64 + -26508;
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
loc_83056CCC:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x837b0c10
	ctx.lr = 0x83056CD4;
	sub_837B0C10(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x83056CE0;
	sub_82E88020(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8387e8e0
	ctx.lr = 0x83056CE8;
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

__attribute__((alias("__imp__sub_83056D00"))) PPC_WEAK_FUNC(sub_83056D00);
PPC_FUNC_IMPL(__imp__sub_83056D00) {
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
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-26120
	ctx.r9.s64 = ctx.r11.s64 + -26120;
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
	ctx.lr = 0x83056D38;
	sub_82F42278(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x83056d50
	if (cr6.eq) goto loc_83056D50;
	// bl 0x82416268
	ctx.lr = 0x83056D4C;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_83056D50:
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

__attribute__((alias("__imp__sub_83056D68"))) PPC_WEAK_FUNC(sub_83056D68);
PPC_FUNC_IMPL(__imp__sub_83056D68) {
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
	ctx.lr = 0x83056D98;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83056dcc
	if (cr6.eq) goto loc_83056DCC;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82f42220
	ctx.lr = 0x83056DAC;
	sub_82F42220(ctx, base);
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-26120
	ctx.r9.s64 = ctx.r11.s64 + -26120;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r8,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r8.u32);
	// b 0x83056dd0
	goto loc_83056DD0;
loc_83056DCC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83056DD0:
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

__attribute__((alias("__imp__sub_83056DE8"))) PPC_WEAK_FUNC(sub_83056DE8);
PPC_FUNC_IMPL(__imp__sub_83056DE8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83056DF0;
	__savegprlr_29(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82d86078
	ctx.lr = 0x83056DFC;
	sub_82D86078(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83056e54
	if (!cr6.eq) goto loc_83056E54;
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r11,r11,-26220
	ctx.r11.s64 = ctx.r11.s64 + -26220;
	// addi r4,r11,-36
	ctx.r4.s64 = ctx.r11.s64 + -36;
	// bl 0x837b0c10
	ctx.lr = 0x83056E1C;
	sub_837B0C10(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82e88020
	ctx.lr = 0x83056E28;
	sub_82E88020(ctx, base);
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x83056ee4
	if (cr6.lt) goto loc_83056EE4;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x83056E48;
	sub_825952B8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83056E54:
	// lwz r3,28(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// bl 0x82da24b0
	ctx.lr = 0x83056E5C;
	sub_82DA24B0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82583300
	ctx.lr = 0x83056E68;
	sub_82583300(ctx, base);
	// lwz r3,28(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// bl 0x82da2788
	ctx.lr = 0x83056E70;
	sub_82DA2788(ctx, base);
	// bl 0x82df00b0
	ctx.lr = 0x83056E74;
	sub_82DF00B0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83056e90
	if (cr6.eq) goto loc_83056E90;
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// addi r11,r11,-26220
	ctx.r11.s64 = ctx.r11.s64 + -26220;
	// addi r4,r11,-28
	ctx.r4.s64 = ctx.r11.s64 + -28;
	// b 0x83056ec8
	goto loc_83056EC8;
loc_83056E90:
	// bl 0x82d95f98
	ctx.lr = 0x83056E94;
	sub_82D95F98(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// li r4,1
	ctx.r4.s64 = 1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x83056ebc
	if (cr6.eq) goto loc_83056EBC;
	// bl 0x82da1d20
	ctx.lr = 0x83056EAC;
	sub_82DA1D20(ctx, base);
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// addi r11,r11,-26220
	ctx.r11.s64 = ctx.r11.s64 + -26220;
	// addi r4,r11,-12
	ctx.r4.s64 = ctx.r11.s64 + -12;
	// b 0x83056ec8
	goto loc_83056EC8;
loc_83056EBC:
	// bl 0x82da1d20
	ctx.lr = 0x83056EC0;
	sub_82DA1D20(ctx, base);
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// addi r4,r11,-26220
	ctx.r4.s64 = ctx.r11.s64 + -26220;
loc_83056EC8:
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x837b0c10
	ctx.lr = 0x83056ED0;
	sub_837B0C10(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82e88020
	ctx.lr = 0x83056EDC;
	sub_82E88020(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8387e8e0
	ctx.lr = 0x83056EE4;
	sub_8387E8E0(ctx, base);
loc_83056EE4:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83056EF0"))) PPC_WEAK_FUNC(sub_83056EF0);
PPC_FUNC_IMPL(__imp__sub_83056EF0) {
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
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-25840
	ctx.r9.s64 = ctx.r11.s64 + -25840;
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
	ctx.lr = 0x83056F28;
	sub_82F42278(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x83056f40
	if (cr6.eq) goto loc_83056F40;
	// bl 0x82416268
	ctx.lr = 0x83056F3C;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_83056F40:
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

__attribute__((alias("__imp__sub_83056F58"))) PPC_WEAK_FUNC(sub_83056F58);
PPC_FUNC_IMPL(__imp__sub_83056F58) {
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
	ctx.lr = 0x83056F88;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83056fbc
	if (cr6.eq) goto loc_83056FBC;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82f42220
	ctx.lr = 0x83056F9C;
	sub_82F42220(ctx, base);
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-25840
	ctx.r9.s64 = ctx.r11.s64 + -25840;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r8,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r8.u32);
	// b 0x83056fc0
	goto loc_83056FC0;
loc_83056FBC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83056FC0:
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

__attribute__((alias("__imp__sub_83056FD8"))) PPC_WEAK_FUNC(sub_83056FD8);
PPC_FUNC_IMPL(__imp__sub_83056FD8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83056FE0;
	__savegprlr_29(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x82d86078
	ctx.lr = 0x83056FEC;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83057040
	if (!cr6.eq) goto loc_83057040;
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r11,r11,-25936
	ctx.r11.s64 = ctx.r11.s64 + -25936;
	// addi r4,r11,-32
	ctx.r4.s64 = ctx.r11.s64 + -32;
	// bl 0x837b0c10
	ctx.lr = 0x83057008;
	sub_837B0C10(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82e88020
	ctx.lr = 0x83057014;
	sub_82E88020(ctx, base);
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x83057190
	if (cr6.lt) goto loc_83057190;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x83057034;
	sub_825952B8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83057040:
	// lwz r3,28(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// bl 0x82da24b0
	ctx.lr = 0x83057048;
	sub_82DA24B0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82cbc718
	ctx.lr = 0x83057050;
	sub_82CBC718(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830570b0
	if (cr6.eq) goto loc_830570B0;
	// lis r11,-31757
	ctx.r11.s64 = -2081226752;
	// lwz r30,8856(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8856);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// bne cr6,0x8305707c
	if (!cr6.eq) goto loc_8305707C;
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// addi r11,r11,-25936
	ctx.r11.s64 = ctx.r11.s64 + -25936;
	// addi r4,r11,-24
	ctx.r4.s64 = ctx.r11.s64 + -24;
	// b 0x83057174
	goto loc_83057174;
loc_8305707C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82e58208
	ctx.lr = 0x83057084;
	sub_82E58208(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8305709c
	if (!cr6.eq) goto loc_8305709C;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_8305709C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82e65d08
	ctx.lr = 0x830570A4;
	sub_82E65D08(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cbc710
	ctx.lr = 0x830570B0;
	sub_82CBC710(ctx, base);
loc_830570B0:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c38170
	ctx.lr = 0x830570BC;
	sub_82C38170(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82da1d50
	ctx.lr = 0x830570C8;
	sub_82DA1D50(ctx, base);
	// bl 0x839e4200
	ctx.lr = 0x830570CC;
	sub_839E4200(ctx, base);
	// bl 0x83779190
	ctx.lr = 0x830570D0;
	sub_83779190(ctx, base);
	// bl 0x830ff290
	ctx.lr = 0x830570D4;
	sub_830FF290(ctx, base);
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmplwi cr6,r11,48
	cr6.compare<uint32_t>(ctx.r11.u32, 48, xer);
	// bne cr6,0x830570ec
	if (!cr6.eq) goto loc_830570EC;
	// bl 0x830ff290
	ctx.lr = 0x830570E4;
	sub_830FF290(ctx, base);
	// li r11,49
	ctx.r11.s64 = 49;
	// stw r11,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
loc_830570EC:
	// bl 0x830ff290
	ctx.lr = 0x830570F0;
	sub_830FF290(ctx, base);
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmplwi cr6,r11,54
	cr6.compare<uint32_t>(ctx.r11.u32, 54, xer);
	// bne cr6,0x83057108
	if (!cr6.eq) goto loc_83057108;
	// bl 0x830ff290
	ctx.lr = 0x83057100;
	sub_830FF290(ctx, base);
	// li r11,55
	ctx.r11.s64 = 55;
	// stw r11,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
loc_83057108:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825832d8
	ctx.lr = 0x83057110;
	sub_825832D8(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x83057158
	if (!cr6.eq) goto loc_83057158;
	// bl 0x830ff290
	ctx.lr = 0x8305711C;
	sub_830FF290(ctx, base);
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmplwi cr6,r11,50
	cr6.compare<uint32_t>(ctx.r11.u32, 50, xer);
	// beq cr6,0x8305713c
	if (cr6.eq) goto loc_8305713C;
	// bl 0x830ff290
	ctx.lr = 0x8305712C;
	sub_830FF290(ctx, base);
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// li r4,2
	ctx.r4.s64 = 2;
	// cmplwi cr6,r11,56
	cr6.compare<uint32_t>(ctx.r11.u32, 56, xer);
	// bne cr6,0x83057140
	if (!cr6.eq) goto loc_83057140;
loc_8305713C:
	// li r4,6
	ctx.r4.s64 = 6;
loc_83057140:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82583300
	ctx.lr = 0x83057148;
	sub_82583300(ctx, base);
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// addi r11,r11,-25936
	ctx.r11.s64 = ctx.r11.s64 + -25936;
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// b 0x83057174
	goto loc_83057174;
loc_83057158:
	// cmpwi cr6,r3,9
	cr6.compare<int32_t>(ctx.r3.s32, 9, xer);
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// bne cr6,0x83057170
	if (!cr6.eq) goto loc_83057170;
	// addi r11,r11,-25936
	ctx.r11.s64 = ctx.r11.s64 + -25936;
	// addi r4,r11,-8
	ctx.r4.s64 = ctx.r11.s64 + -8;
	// b 0x83057174
	goto loc_83057174;
loc_83057170:
	// addi r4,r11,-25936
	ctx.r4.s64 = ctx.r11.s64 + -25936;
loc_83057174:
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x837b0c10
	ctx.lr = 0x8305717C;
	sub_837B0C10(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82e88020
	ctx.lr = 0x83057188;
	sub_82E88020(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8387e8e0
	ctx.lr = 0x83057190;
	sub_8387E8E0(ctx, base);
loc_83057190:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8305719C"))) PPC_WEAK_FUNC(sub_8305719C);
PPC_FUNC_IMPL(__imp__sub_8305719C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830571A0"))) PPC_WEAK_FUNC(sub_830571A0);
PPC_FUNC_IMPL(__imp__sub_830571A0) {
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
	ctx.lr = 0x830571B8;
	sub_82F42220(ctx, base);
	// lis r10,-32225
	ctx.r10.s64 = -2111897600;
	// lis r9,-32239
	ctx.r9.s64 = -2112815104;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r8,r10,-25152
	ctx.r8.s64 = ctx.r10.s64 + -25152;
	// addi r7,r9,-17088
	ctx.r7.s64 = ctx.r9.s64 + -17088;
	// stw r11,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r11.u32);
	// li r6,2
	ctx.r6.s64 = 2;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// stw r7,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r7.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r6,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r6.u32);
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_83057208"))) PPC_WEAK_FUNC(sub_83057208);
PPC_FUNC_IMPL(__imp__sub_83057208) {
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
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-25152
	ctx.r9.s64 = ctx.r11.s64 + -25152;
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
	ctx.lr = 0x83057240;
	sub_82F42278(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x83057258
	if (cr6.eq) goto loc_83057258;
	// bl 0x82416268
	ctx.lr = 0x83057254;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_83057258:
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

__attribute__((alias("__imp__sub_83057270"))) PPC_WEAK_FUNC(sub_83057270);
PPC_FUNC_IMPL(__imp__sub_83057270) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x83057278;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82d86078
	ctx.lr = 0x83057280;
	sub_82D86078(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83057440
	if (cr6.eq) goto loc_83057440;
	// lwz r3,28(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// bl 0x82da24b0
	ctx.lr = 0x83057294;
	sub_82DA24B0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x825832d8
	ctx.lr = 0x8305729C;
	sub_825832D8(ctx, base);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82da2650
	ctx.lr = 0x830572AC;
	sub_82DA2650(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// bl 0x82d95f98
	ctx.lr = 0x830572B4;
	sub_82D95F98(ctx, base);
	// clrlwi r29,r3,24
	ctx.r29.u64 = ctx.r3.u32 & 0xFF;
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x830572d0
	if (cr6.eq) goto loc_830572D0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82dedbe0
	ctx.lr = 0x830572CC;
	sub_82DEDBE0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_830572D0:
	// cmpwi cr6,r28,8
	cr6.compare<int32_t>(ctx.r28.s32, 8, xer);
	// beq cr6,0x83057308
	if (cr6.eq) goto loc_83057308;
	// cmpwi cr6,r28,6
	cr6.compare<int32_t>(ctx.r28.s32, 6, xer);
	// beq cr6,0x83057308
	if (cr6.eq) goto loc_83057308;
	// cmpwi cr6,r28,4
	cr6.compare<int32_t>(ctx.r28.s32, 4, xer);
	// beq cr6,0x83057410
	if (cr6.eq) goto loc_83057410;
	// cmpwi cr6,r28,2
	cr6.compare<int32_t>(ctx.r28.s32, 2, xer);
	// bne cr6,0x83057440
	if (!cr6.eq) goto loc_83057440;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x83057440
	if (cr6.eq) goto loc_83057440;
	// li r3,250
	ctx.r3.s64 = 250;
	// bl 0x82d84728
	ctx.lr = 0x83057300;
	sub_82D84728(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_83057308:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825832e8
	ctx.lr = 0x83057310;
	sub_825832E8(ctx, base);
	// cmplwi cr6,r3,4
	cr6.compare<uint32_t>(ctx.r3.u32, 4, xer);
	// bgt cr6,0x83057440
	if (cr6.gt) goto loc_83057440;
	// mtctr r3
	ctr.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bdzf 4*cr6+eq,0x83057368
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83057368;
	// bdzf 4*cr6+eq,0x830573a0
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_830573A0;
	// bdzf 4*cr6+eq,0x830573d8
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_830573D8;
	// bne cr6,0x83057410
	if (!cr6.eq) goto loc_83057410;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// bne cr6,0x83057348
	if (!cr6.eq) goto loc_83057348;
	// li r3,204
	ctx.r3.s64 = 204;
	// bl 0x82d84728
	ctx.lr = 0x83057340;
	sub_82D84728(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_83057348:
	// clrlwi r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	// subfic r10,r11,0
	xer.ca = ctx.r11.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r11.s64;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// rlwinm r11,r9,0,29,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x6;
	// addi r3,r11,238
	ctx.r3.s64 = ctx.r11.s64 + 238;
	// bl 0x82d84728
	ctx.lr = 0x83057360;
	sub_82D84728(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_83057368:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// bne cr6,0x83057380
	if (!cr6.eq) goto loc_83057380;
	// li r3,203
	ctx.r3.s64 = 203;
	// bl 0x82d84728
	ctx.lr = 0x83057378;
	sub_82D84728(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_83057380:
	// clrlwi r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	// subfic r10,r11,0
	xer.ca = ctx.r11.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r11.s64;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// rlwinm r11,r9,0,29,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x6;
	// addi r3,r11,237
	ctx.r3.s64 = ctx.r11.s64 + 237;
	// bl 0x82d84728
	ctx.lr = 0x83057398;
	sub_82D84728(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_830573A0:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// bne cr6,0x830573b8
	if (!cr6.eq) goto loc_830573B8;
	// li r3,202
	ctx.r3.s64 = 202;
	// bl 0x82d84728
	ctx.lr = 0x830573B0;
	sub_82D84728(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_830573B8:
	// clrlwi r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	// subfic r10,r11,0
	xer.ca = ctx.r11.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r11.s64;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// rlwinm r11,r9,0,29,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x6;
	// addi r3,r11,236
	ctx.r3.s64 = ctx.r11.s64 + 236;
	// bl 0x82d84728
	ctx.lr = 0x830573D0;
	sub_82D84728(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_830573D8:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// bne cr6,0x830573f0
	if (!cr6.eq) goto loc_830573F0;
	// li r3,201
	ctx.r3.s64 = 201;
	// bl 0x82d84728
	ctx.lr = 0x830573E8;
	sub_82D84728(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_830573F0:
	// clrlwi r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	// subfic r10,r11,0
	xer.ca = ctx.r11.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r11.s64;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// rlwinm r11,r9,0,29,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x6;
	// addi r3,r11,235
	ctx.r3.s64 = ctx.r11.s64 + 235;
	// bl 0x82d84728
	ctx.lr = 0x83057408;
	sub_82D84728(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_83057410:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// bne cr6,0x83057428
	if (!cr6.eq) goto loc_83057428;
	// li r3,200
	ctx.r3.s64 = 200;
	// bl 0x82d84728
	ctx.lr = 0x83057420;
	sub_82D84728(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_83057428:
	// clrlwi r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	// subfic r10,r11,0
	xer.ca = ctx.r11.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r11.s64;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// rlwinm r11,r9,0,29,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x6;
	// addi r3,r11,234
	ctx.r3.s64 = ctx.r11.s64 + 234;
	// bl 0x82d84728
	ctx.lr = 0x83057440;
	sub_82D84728(ctx, base);
loc_83057440:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83057448"))) PPC_WEAK_FUNC(sub_83057448);
PPC_FUNC_IMPL(__imp__sub_83057448) {
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
	// bl 0x82d968e8
	ctx.lr = 0x83057460;
	sub_82D968E8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830574e8
	if (cr6.eq) goto loc_830574E8;
	// li r30,1
	ctx.r30.s64 = 1;
	// bl 0x82d86078
	ctx.lr = 0x83057470;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83057480
	if (!cr6.eq) goto loc_83057480;
loc_83057478:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x830574e8
	goto loc_830574E8;
loc_83057480:
	// lwz r3,28(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// bl 0x82da24b0
	ctx.lr = 0x83057488;
	sub_82DA24B0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x825832e8
	ctx.lr = 0x83057490;
	sub_825832E8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x83057478
	if (cr6.eq) goto loc_83057478;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82da1d58
	ctx.lr = 0x830574A0;
	sub_82DA1D58(ctx, base);
	// lwz r11,1948(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1948);
	// cmpwi cr6,r11,7
	cr6.compare<int32_t>(ctx.r11.s32, 7, xer);
	// bgt cr6,0x830574d8
	if (cr6.gt) goto loc_830574D8;
	// beq cr6,0x830574e0
	if (cr6.eq) goto loc_830574E0;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(ctx.r11.u32, 4, xer);
	// bgt cr6,0x830574e4
	if (cr6.gt) goto loc_830574E4;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x830574e0
	if (cr6.eq) goto loc_830574E0;
	// bdz 0x830574e0
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_830574E0;
	// bdz 0x830574e4
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_830574E4;
	// bdz 0x830574e0
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_830574E0;
	// b 0x830574e0
	goto loc_830574E0;
loc_830574D8:
	// cmpwi cr6,r11,30
	cr6.compare<int32_t>(ctx.r11.s32, 30, xer);
	// bne cr6,0x830574e4
	if (!cr6.eq) goto loc_830574E4;
loc_830574E0:
	// li r30,0
	ctx.r30.s64 = 0;
loc_830574E4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_830574E8:
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

__attribute__((alias("__imp__sub_83057500"))) PPC_WEAK_FUNC(sub_83057500);
PPC_FUNC_IMPL(__imp__sub_83057500) {
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
	// li r11,31
	ctx.r11.s64 = 31;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,112
	ctx.r4.s64 = 112;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x8305752C;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83057550
	if (cr6.eq) goto loc_83057550;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x830571a0
	ctx.lr = 0x8305753C;
	sub_830571A0(ctx, base);
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
loc_83057550:
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

__attribute__((alias("__imp__sub_83057568"))) PPC_WEAK_FUNC(sub_83057568);
PPC_FUNC_IMPL(__imp__sub_83057568) {
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
	// lwz r11,92(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,8
	cr6.compare<uint32_t>(ctx.r11.u32, 8, xer);
	// bgt cr6,0x83057850
	if (cr6.gt) goto loc_83057850;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x830575bc
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_830575BC;
	// bdzf 4*cr6+eq,0x83057604
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83057604;
	// bdzf 4*cr6+eq,0x83057668
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83057668;
	// bdzf 4*cr6+eq,0x830576a8
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_830576A8;
	// bdzf 4*cr6+eq,0x8305770c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8305770C;
	// bdzf 4*cr6+eq,0x8305774c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8305774C;
	// bdzf 4*cr6+eq,0x830577b0
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_830577B0;
	// bne cr6,0x830577ec
	if (!cr6.eq) goto loc_830577EC;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r11.u32);
loc_830575BC:
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r11,r11,-25264
	ctx.r11.s64 = ctx.r11.s64 + -25264;
	// addi r4,r11,-72
	ctx.r4.s64 = ctx.r11.s64 + -72;
	// bl 0x837b0c10
	ctx.lr = 0x830575D0;
	sub_837B0C10(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d894e0
	ctx.lr = 0x830575DC;
	sub_82D894E0(ctx, base);
	// stw r3,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r3.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8387e8e0
	ctx.lr = 0x830575E8;
	sub_8387E8E0(ctx, base);
	// lwz r10,96(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x830575fc
	if (!cr6.eq) goto loc_830575FC;
loc_830575F4:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83057854
	goto loc_83057854;
loc_830575FC:
	// li r11,2
	ctx.r11.s64 = 2;
	// b 0x8305784c
	goto loc_8305784C;
loc_83057604:
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830575f4
	if (cr6.eq) goto loc_830575F4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83057620;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x83057850
	if (cr6.eq) goto loc_83057850;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// lbz r30,108(r3)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r3.u32 + 108);
	// beq cr6,0x83057654
	if (cr6.eq) goto loc_83057654;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8305764C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r9.u32);
loc_83057654:
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x830575f4
	if (!cr6.eq) goto loc_830575F4;
	// li r11,3
	ctx.r11.s64 = 3;
	// b 0x8305784c
	goto loc_8305784C;
loc_83057668:
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r11,r11,-25264
	ctx.r11.s64 = ctx.r11.s64 + -25264;
	// addi r4,r11,-48
	ctx.r4.s64 = ctx.r11.s64 + -48;
	// bl 0x837b0c10
	ctx.lr = 0x8305767C;
	sub_837B0C10(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d894e0
	ctx.lr = 0x83057688;
	sub_82D894E0(ctx, base);
	// stw r3,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r3.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8387e8e0
	ctx.lr = 0x83057694;
	sub_8387E8E0(ctx, base);
	// lwz r10,100(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x830575f4
	if (cr6.eq) goto loc_830575F4;
	// li r11,4
	ctx.r11.s64 = 4;
	// b 0x8305784c
	goto loc_8305784C;
loc_830576A8:
	// lwz r3,100(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830575f4
	if (cr6.eq) goto loc_830575F4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x830576C4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x83057850
	if (cr6.eq) goto loc_83057850;
	// lwz r3,100(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// lbz r30,108(r3)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r3.u32 + 108);
	// beq cr6,0x830576f8
	if (cr6.eq) goto loc_830576F8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x830576F0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r9.u32);
loc_830576F8:
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x830575f4
	if (!cr6.eq) goto loc_830575F4;
	// li r11,5
	ctx.r11.s64 = 5;
	// b 0x8305784c
	goto loc_8305784C;
loc_8305770C:
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// addi r11,r11,-25264
	ctx.r11.s64 = ctx.r11.s64 + -25264;
	// addi r4,r11,-24
	ctx.r4.s64 = ctx.r11.s64 + -24;
	// bl 0x837b0c10
	ctx.lr = 0x83057720;
	sub_837B0C10(ctx, base);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d894e0
	ctx.lr = 0x8305772C;
	sub_82D894E0(ctx, base);
	// stw r3,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r3.u32);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x8387e8e0
	ctx.lr = 0x83057738;
	sub_8387E8E0(ctx, base);
	// lwz r10,104(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x830575f4
	if (cr6.eq) goto loc_830575F4;
	// li r11,6
	ctx.r11.s64 = 6;
	// b 0x8305784c
	goto loc_8305784C;
loc_8305774C:
	// lwz r3,104(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830575f4
	if (cr6.eq) goto loc_830575F4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83057768;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x83057850
	if (cr6.eq) goto loc_83057850;
	// lwz r3,104(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// lbz r30,108(r3)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r3.u32 + 108);
	// beq cr6,0x8305779c
	if (cr6.eq) goto loc_8305779C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83057794;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r9.u32);
loc_8305779C:
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x830575f4
	if (!cr6.eq) goto loc_830575F4;
	// li r11,7
	ctx.r11.s64 = 7;
	// b 0x8305784c
	goto loc_8305784C;
loc_830577B0:
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// addi r4,r11,-25264
	ctx.r4.s64 = ctx.r11.s64 + -25264;
	// bl 0x837b0c10
	ctx.lr = 0x830577C0;
	sub_837B0C10(ctx, base);
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d894e0
	ctx.lr = 0x830577CC;
	sub_82D894E0(ctx, base);
	// stw r3,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r3.u32);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x8387e8e0
	ctx.lr = 0x830577D8;
	sub_8387E8E0(ctx, base);
	// lwz r10,108(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x830575f4
	if (cr6.eq) goto loc_830575F4;
	// li r11,8
	ctx.r11.s64 = 8;
	// b 0x8305784c
	goto loc_8305784C;
loc_830577EC:
	// lwz r3,108(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830575f4
	if (cr6.eq) goto loc_830575F4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83057808;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x83057850
	if (cr6.eq) goto loc_83057850;
	// lwz r3,108(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// lbz r30,108(r3)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r3.u32 + 108);
	// beq cr6,0x8305783c
	if (cr6.eq) goto loc_8305783C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83057834;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r9.u32);
loc_8305783C:
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x830575f4
	if (!cr6.eq) goto loc_830575F4;
	// li r11,9
	ctx.r11.s64 = 9;
loc_8305784C:
	// stw r11,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r11.u32);
loc_83057850:
	// li r3,1
	ctx.r3.s64 = 1;
loc_83057854:
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

__attribute__((alias("__imp__sub_8305786C"))) PPC_WEAK_FUNC(sub_8305786C);
PPC_FUNC_IMPL(__imp__sub_8305786C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83057870"))) PPC_WEAK_FUNC(sub_83057870);
PPC_FUNC_IMPL(__imp__sub_83057870) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x83057878;
	__savegprlr_26(ctx, base);
	// stwu r1,-352(r1)
	ea = -352 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,88(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// beq cr6,0x83057934
	if (cr6.eq) goto loc_83057934;
	// bl 0x83057568
	ctx.lr = 0x83057890;
	sub_83057568(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x830578d0
	if (!cr6.eq) goto loc_830578D0;
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r11,r11,-25344
	ctx.r11.s64 = ctx.r11.s64 + -25344;
	// addi r4,r11,-124
	ctx.r4.s64 = ctx.r11.s64 + -124;
	// bl 0x837b0c10
	ctx.lr = 0x830578B0;
	sub_837B0C10(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82e88020
	ctx.lr = 0x830578BC;
	sub_82E88020(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8387e8e0
	ctx.lr = 0x830578C4;
	sub_8387E8E0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_830578D0:
	// lwz r11,92(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 92);
	// cmpwi cr6,r11,9
	cr6.compare<int32_t>(ctx.r11.s32, 9, xer);
	// bne cr6,0x83057928
	if (!cr6.eq) goto loc_83057928;
	// lwz r11,88(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 88);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x830578f8
	if (!cr6.eq) goto loc_830578F8;
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// addi r11,r11,-25344
	ctx.r11.s64 = ctx.r11.s64 + -25344;
	// addi r4,r11,-116
	ctx.r4.s64 = ctx.r11.s64 + -116;
	// b 0x8305790c
	goto loc_8305790C;
loc_830578F8:
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x83057d1c
	if (!cr6.eq) goto loc_83057D1C;
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// addi r11,r11,-25344
	ctx.r11.s64 = ctx.r11.s64 + -25344;
	// addi r4,r11,-100
	ctx.r4.s64 = ctx.r11.s64 + -100;
loc_8305790C:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x837b0c10
	ctx.lr = 0x83057914;
	sub_837B0C10(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82e88020
	ctx.lr = 0x83057920;
	sub_82E88020(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// b 0x83057d18
	goto loc_83057D18;
loc_83057928:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_83057934:
	// bl 0x82d86078
	ctx.lr = 0x83057938;
	sub_82D86078(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83057978
	if (!cr6.eq) goto loc_83057978;
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r11,r11,-25344
	ctx.r11.s64 = ctx.r11.s64 + -25344;
	// addi r4,r11,-80
	ctx.r4.s64 = ctx.r11.s64 + -80;
	// bl 0x837b0c10
	ctx.lr = 0x83057958;
	sub_837B0C10(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82e88020
	ctx.lr = 0x83057964;
	sub_82E88020(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8387e8e0
	ctx.lr = 0x8305796C;
	sub_8387E8E0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_83057978:
	// lis r11,-31757
	ctx.r11.s64 = -2081226752;
	// lwz r26,8856(r11)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8856);
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(ctx.r26.u32, 0, xer);
	// bne cr6,0x830579bc
	if (!cr6.eq) goto loc_830579BC;
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r11,r11,-25344
	ctx.r11.s64 = ctx.r11.s64 + -25344;
	// addi r4,r11,-72
	ctx.r4.s64 = ctx.r11.s64 + -72;
	// bl 0x837b0c10
	ctx.lr = 0x8305799C;
	sub_837B0C10(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82e88020
	ctx.lr = 0x830579A8;
	sub_82E88020(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8387e8e0
	ctx.lr = 0x830579B0;
	sub_8387E8E0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_830579BC:
	// lwz r3,28(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// bl 0x82da24b0
	ctx.lr = 0x830579C4;
	sub_82DA24B0(ctx, base);
	// lwz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82da27f0
	ctx.lr = 0x830579D4;
	sub_82DA27F0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x825832d8
	ctx.lr = 0x830579E0;
	sub_825832D8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// beq cr6,0x83057a04
	if (cr6.eq) goto loc_83057A04;
	// cmpwi cr6,r3,3
	cr6.compare<int32_t>(ctx.r3.s32, 3, xer);
	// beq cr6,0x83057a04
	if (cr6.eq) goto loc_83057A04;
	// cmpwi cr6,r3,4
	cr6.compare<int32_t>(ctx.r3.s32, 4, xer);
	// beq cr6,0x83057a04
	if (cr6.eq) goto loc_83057A04;
	// cmpwi cr6,r3,6
	cr6.compare<int32_t>(ctx.r3.s32, 6, xer);
	// bne cr6,0x83057a64
	if (!cr6.eq) goto loc_83057A64;
loc_83057A04:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82e580e8
	ctx.lr = 0x83057A0C;
	sub_82E580E8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83057928
	if (cr6.eq) goto loc_83057928;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82e57bd8
	ctx.lr = 0x83057A20;
	sub_82E57BD8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x83057a60
	if (!cr6.eq) goto loc_83057A60;
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r11,r11,-25344
	ctx.r11.s64 = ctx.r11.s64 + -25344;
	// addi r4,r11,-64
	ctx.r4.s64 = ctx.r11.s64 + -64;
	// bl 0x837b0c10
	ctx.lr = 0x83057A40;
	sub_837B0C10(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82e88020
	ctx.lr = 0x83057A4C;
	sub_82E88020(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8387e8e0
	ctx.lr = 0x83057A54;
	sub_8387E8E0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_83057A60:
	// bl 0x82d96540
	ctx.lr = 0x83057A64;
	sub_82D96540(ctx, base);
loc_83057A64:
	// bl 0x82d96608
	ctx.lr = 0x83057A68;
	sub_82D96608(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83057af0
	if (!cr6.eq) goto loc_83057AF0;
	// bl 0x82d96060
	ctx.lr = 0x83057A78;
	sub_82D96060(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x83057af0
	if (!cr6.eq) goto loc_83057AF0;
	// li r4,7
	ctx.r4.s64 = 7;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82583300
	ctx.lr = 0x83057A90;
	sub_82583300(ctx, base);
	// lwz r3,28(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// li r31,7
	ctx.r31.s64 = 7;
	// bl 0x82da27f0
	ctx.lr = 0x83057A9C;
	sub_82DA27F0(ctx, base);
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x82583300
	ctx.lr = 0x83057AA4;
	sub_82583300(ctx, base);
loc_83057AA4:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82e58b28
	ctx.lr = 0x83057AAC;
	sub_82E58B28(ctx, base);
	// cmpwi cr6,r31,2
	cr6.compare<int32_t>(ctx.r31.s32, 2, xer);
	// bne cr6,0x83057b44
	if (!cr6.eq) goto loc_83057B44;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82da1d18
	ctx.lr = 0x83057ABC;
	sub_82DA1D18(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83057ba4
	if (cr6.eq) goto loc_83057BA4;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82dad038
	ctx.lr = 0x83057AD4;
	sub_82DAD038(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82dad048
	ctx.lr = 0x83057AE0;
	sub_82DAD048(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82da1d20
	ctx.lr = 0x83057AEC;
	sub_82DA1D20(ctx, base);
	// b 0x83057ba4
	goto loc_83057BA4;
loc_83057AF0:
	// cmpwi cr6,r31,6
	cr6.compare<int32_t>(ctx.r31.s32, 6, xer);
	// bne cr6,0x83057aa4
	if (!cr6.eq) goto loc_83057AA4;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82e58b30
	ctx.lr = 0x83057B00;
	sub_82E58B30(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82e58250
	ctx.lr = 0x83057B08;
	sub_82E58250(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82da1d28
	ctx.lr = 0x83057B10;
	sub_82DA1D28(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83057ba4
	if (cr6.eq) goto loc_83057BA4;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82dad038
	ctx.lr = 0x83057B28;
	sub_82DAD038(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82dad048
	ctx.lr = 0x83057B34;
	sub_82DAD048(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82da1d30
	ctx.lr = 0x83057B40;
	sub_82DA1D30(ctx, base);
	// b 0x83057ba4
	goto loc_83057BA4;
loc_83057B44:
	// cmpwi cr6,r31,5
	cr6.compare<int32_t>(ctx.r31.s32, 5, xer);
	// bne cr6,0x83057b98
	if (!cr6.eq) goto loc_83057B98;
	// lwz r3,28(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// bl 0x82da2518
	ctx.lr = 0x83057B54;
	sub_82DA2518(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// bl 0x82df1438
	ctx.lr = 0x83057B5C;
	sub_82DF1438(ctx, base);
	// lbz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 116);
	// li r4,1
	ctx.r4.s64 = 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// beq cr6,0x83057b84
	if (cr6.eq) goto loc_83057B84;
	// bl 0x82dad038
	ctx.lr = 0x83057B74;
	sub_82DAD038(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82dad048
	ctx.lr = 0x83057B80;
	sub_82DAD048(ctx, base);
	// b 0x83057ba4
	goto loc_83057BA4;
loc_83057B84:
	// bl 0x82dad038
	ctx.lr = 0x83057B88;
	sub_82DAD038(ctx, base);
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82dad048
	ctx.lr = 0x83057B94;
	sub_82DAD048(ctx, base);
	// b 0x83057ba4
	goto loc_83057BA4;
loc_83057B98:
	// cmpwi cr6,r31,4
	cr6.compare<int32_t>(ctx.r31.s32, 4, xer);
	// bne cr6,0x83057ba4
	if (!cr6.eq) goto loc_83057BA4;
	// bl 0x82dced20
	ctx.lr = 0x83057BA4;
	sub_82DCED20(ctx, base);
loc_83057BA4:
	// addi r11,r31,-2
	ctx.r11.s64 = ctx.r31.s64 + -2;
	// cmplwi cr6,r11,6
	cr6.compare<uint32_t>(ctx.r11.u32, 6, xer);
	// bgt cr6,0x83057cf8
	if (cr6.gt) goto loc_83057CF8;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x83057bd0
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83057BD0;
	// bdzf 4*cr6+eq,0x83057bd0
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83057BD0;
	// bdzf 4*cr6+eq,0x83057bf8
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83057BF8;
	// bdzf 4*cr6+eq,0x83057c44
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83057C44;
	// bdzf 4*cr6+eq,0x83057c6c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83057C6C;
	// bne cr6,0x83057c6c
	if (!cr6.eq) goto loc_83057C6C;
loc_83057BD0:
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r11,r11,-25344
	ctx.r11.s64 = ctx.r11.s64 + -25344;
	// addi r4,r11,-56
	ctx.r4.s64 = ctx.r11.s64 + -56;
	// bl 0x837b0c10
	ctx.lr = 0x83057BE4;
	sub_837B0C10(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82e88020
	ctx.lr = 0x83057BF0;
	sub_82E88020(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// b 0x83057d18
	goto loc_83057D18;
loc_83057BF8:
	// li r3,5
	ctx.r3.s64 = 5;
	// bl 0x82d96848
	ctx.lr = 0x83057C00;
	sub_82D96848(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83057c1c
	if (cr6.eq) goto loc_83057C1C;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,88(r27)
	PPC_STORE_U32(ctx.r27.u32 + 88, ctx.r11.u32);
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_83057C1C:
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// addi r11,r11,-25344
	ctx.r11.s64 = ctx.r11.s64 + -25344;
	// addi r4,r11,-44
	ctx.r4.s64 = ctx.r11.s64 + -44;
	// bl 0x837b0c10
	ctx.lr = 0x83057C30;
	sub_837B0C10(ctx, base);
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82e88020
	ctx.lr = 0x83057C3C;
	sub_82E88020(ctx, base);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// b 0x83057d18
	goto loc_83057D18;
loc_83057C44:
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r11,r11,-25344
	ctx.r11.s64 = ctx.r11.s64 + -25344;
	// addi r4,r11,-32
	ctx.r4.s64 = ctx.r11.s64 + -32;
	// bl 0x837b0c10
	ctx.lr = 0x83057C58;
	sub_837B0C10(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82e88020
	ctx.lr = 0x83057C64;
	sub_82E88020(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// b 0x83057d18
	goto loc_83057D18;
loc_83057C6C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82da1d38
	ctx.lr = 0x83057C74;
	sub_82DA1D38(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83057cd0
	if (cr6.eq) goto loc_83057CD0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x83057448
	ctx.lr = 0x83057C88;
	sub_83057448(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83057cbc
	if (!cr6.eq) goto loc_83057CBC;
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// addi r11,r11,-25344
	ctx.r11.s64 = ctx.r11.s64 + -25344;
	// addi r4,r11,-24
	ctx.r4.s64 = ctx.r11.s64 + -24;
	// bl 0x837b0c10
	ctx.lr = 0x83057CA8;
	sub_837B0C10(ctx, base);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82e88020
	ctx.lr = 0x83057CB4;
	sub_82E88020(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// b 0x83057d18
	goto loc_83057D18;
loc_83057CBC:
	// li r11,1
	ctx.r11.s64 = 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,88(r27)
	PPC_STORE_U32(ctx.r27.u32 + 88, ctx.r11.u32);
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_83057CD0:
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// addi r11,r11,-25344
	ctx.r11.s64 = ctx.r11.s64 + -25344;
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// bl 0x837b0c10
	ctx.lr = 0x83057CE4;
	sub_837B0C10(ctx, base);
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82e88020
	ctx.lr = 0x83057CF0;
	sub_82E88020(ctx, base);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// b 0x83057d18
	goto loc_83057D18;
loc_83057CF8:
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// addi r4,r11,-25344
	ctx.r4.s64 = ctx.r11.s64 + -25344;
	// bl 0x837b0c10
	ctx.lr = 0x83057D08;
	sub_837B0C10(ctx, base);
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82e88020
	ctx.lr = 0x83057D14;
	sub_82E88020(ctx, base);
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
loc_83057D18:
	// bl 0x8387e8e0
	ctx.lr = 0x83057D1C;
	sub_8387E8E0(ctx, base);
loc_83057D1C:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x83057270
	ctx.lr = 0x83057D24;
	sub_83057270(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83057D30"))) PPC_WEAK_FUNC(sub_83057D30);
PPC_FUNC_IMPL(__imp__sub_83057D30) {
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
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-24848
	ctx.r9.s64 = ctx.r11.s64 + -24848;
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
	ctx.lr = 0x83057D68;
	sub_82F42278(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x83057d80
	if (cr6.eq) goto loc_83057D80;
	// bl 0x82416268
	ctx.lr = 0x83057D7C;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_83057D80:
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

__attribute__((alias("__imp__sub_83057D98"))) PPC_WEAK_FUNC(sub_83057D98);
PPC_FUNC_IMPL(__imp__sub_83057D98) {
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
	ctx.lr = 0x83057DC8;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83057dfc
	if (cr6.eq) goto loc_83057DFC;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82f42220
	ctx.lr = 0x83057DDC;
	sub_82F42220(ctx, base);
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-24848
	ctx.r9.s64 = ctx.r11.s64 + -24848;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r8,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r8.u32);
	// b 0x83057e00
	goto loc_83057E00;
loc_83057DFC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83057E00:
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

__attribute__((alias("__imp__sub_83057E18"))) PPC_WEAK_FUNC(sub_83057E18);
PPC_FUNC_IMPL(__imp__sub_83057E18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83057E20;
	__savegprlr_28(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x82d86078
	ctx.lr = 0x83057E2C;
	sub_82D86078(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83057e84
	if (!cr6.eq) goto loc_83057E84;
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r11,r11,-24944
	ctx.r11.s64 = ctx.r11.s64 + -24944;
	// addi r4,r11,-56
	ctx.r4.s64 = ctx.r11.s64 + -56;
	// bl 0x837b0c10
	ctx.lr = 0x83057E4C;
	sub_837B0C10(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82e88020
	ctx.lr = 0x83057E58;
	sub_82E88020(ctx, base);
	// lwz r10,132(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x83058038
	if (cr6.lt) goto loc_83058038;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x83057E78;
	sub_825952B8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_83057E84:
	// lis r11,-31757
	ctx.r11.s64 = -2081226752;
	// lwz r28,8856(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8856);
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// bne cr6,0x83057ea4
	if (!cr6.eq) goto loc_83057EA4;
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// addi r11,r11,-24944
	ctx.r11.s64 = ctx.r11.s64 + -24944;
	// addi r4,r11,-48
	ctx.r4.s64 = ctx.r11.s64 + -48;
	// b 0x8305801c
	goto loc_8305801C;
loc_83057EA4:
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82e74328
	ctx.lr = 0x83057EB0;
	sub_82E74328(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83057ef0
	if (cr6.eq) goto loc_83057EF0;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82e74260
	ctx.lr = 0x83057EC4;
	sub_82E74260(ctx, base);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// rotlwi r30,r3,0
	ctx.r30.u64 = __builtin_rotateleft32(ctx.r3.u32, 0);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82da27f0
	ctx.lr = 0x83057ED4;
	sub_82DA27F0(ctx, base);
	// bl 0x82dad028
	ctx.lr = 0x83057ED8;
	sub_82DAD028(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, xer);
	// ble cr6,0x83057ef0
	if (!cr6.gt) goto loc_83057EF0;
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// addi r11,r11,-24944
	ctx.r11.s64 = ctx.r11.s64 + -24944;
	// addi r4,r11,-40
	ctx.r4.s64 = ctx.r11.s64 + -40;
	// b 0x8305801c
	goto loc_8305801C;
loc_83057EF0:
	// bl 0x82d96608
	ctx.lr = 0x83057EF4;
	sub_82D96608(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83057f10
	if (!cr6.eq) goto loc_83057F10;
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// addi r11,r11,-24944
	ctx.r11.s64 = ctx.r11.s64 + -24944;
	// addi r4,r11,-28
	ctx.r4.s64 = ctx.r11.s64 + -28;
	// b 0x8305801c
	goto loc_8305801C;
loc_83057F10:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82e580e8
	ctx.lr = 0x83057F18;
	sub_82E580E8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83057f34
	if (!cr6.eq) goto loc_83057F34;
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// addi r11,r11,-24944
	ctx.r11.s64 = ctx.r11.s64 + -24944;
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// b 0x8305801c
	goto loc_8305801C;
loc_83057F34:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82e57bd8
	ctx.lr = 0x83057F3C;
	sub_82E57BD8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83057f58
	if (cr6.eq) goto loc_83057F58;
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// addi r11,r11,-24944
	ctx.r11.s64 = ctx.r11.s64 + -24944;
	// addi r4,r11,-8
	ctx.r4.s64 = ctx.r11.s64 + -8;
	// b 0x8305801c
	goto loc_8305801C;
loc_83057F58:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82e61bb8
	ctx.lr = 0x83057F60;
	sub_82E61BB8(ctx, base);
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// bl 0x82da24b0
	ctx.lr = 0x83057F68;
	sub_82DA24B0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82c38170
	ctx.lr = 0x83057F70;
	sub_82C38170(ctx, base);
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// bl 0x82da24b0
	ctx.lr = 0x83057F78;
	sub_82DA24B0(ctx, base);
	// bl 0x82da1d58
	ctx.lr = 0x83057F7C;
	sub_82DA1D58(ctx, base);
	// bl 0x82da1c70
	ctx.lr = 0x83057F80;
	sub_82DA1C70(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82e74328
	ctx.lr = 0x83057F8C;
	sub_82E74328(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8305800c
	if (cr6.eq) goto loc_8305800C;
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// bl 0x82da24b0
	ctx.lr = 0x83057FA0;
	sub_82DA24B0(ctx, base);
	// bl 0x835d3140
	ctx.lr = 0x83057FA4;
	sub_835D3140(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82e74260
	ctx.lr = 0x83057FB0;
	sub_82E74260(ctx, base);
	// rotlwi r30,r3,0
	ctx.r30.u64 = __builtin_rotateleft32(ctx.r3.u32, 0);
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, xer);
	// ble cr6,0x8305800c
	if (!cr6.gt) goto loc_8305800C;
	// bl 0x839e4200
	ctx.lr = 0x83057FC0;
	sub_839E4200(ctx, base);
	// subf r4,r30,r31
	ctx.r4.s64 = ctx.r31.s64 - ctx.r30.s64;
	// bl 0x82927038
	ctx.lr = 0x83057FC8;
	sub_82927038(ctx, base);
	// bl 0x839e4200
	ctx.lr = 0x83057FCC;
	sub_839E4200(ctx, base);
	// li r4,60
	ctx.r4.s64 = 60;
	// bl 0x82927028
	ctx.lr = 0x83057FD4;
	sub_82927028(ctx, base);
	// bl 0x839e4200
	ctx.lr = 0x83057FD8;
	sub_839E4200(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// clrldi r4,r30,32
	ctx.r4.u64 = ctx.r30.u64 & 0xFFFFFFFF;
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83057FEC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// bl 0x839e4200
	ctx.lr = 0x83057FF0;
	sub_839E4200(ctx, base);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// clrldi r4,r31,32
	ctx.r4.u64 = ctx.r31.u64 & 0xFFFFFFFF;
	// lwz r8,32(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 32);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x83058004;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// bl 0x839e4200
	ctx.lr = 0x83058008;
	sub_839E4200(ctx, base);
	// bl 0x839e4268
	ctx.lr = 0x8305800C;
	sub_839E4268(ctx, base);
loc_8305800C:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82e58250
	ctx.lr = 0x83058014;
	sub_82E58250(ctx, base);
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// addi r4,r11,-24944
	ctx.r4.s64 = ctx.r11.s64 + -24944;
loc_8305801C:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x837b0c10
	ctx.lr = 0x83058024;
	sub_837B0C10(ctx, base);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82e88020
	ctx.lr = 0x83058030;
	sub_82E88020(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x8387e8e0
	ctx.lr = 0x83058038;
	sub_8387E8E0(ctx, base);
loc_83058038:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83058044"))) PPC_WEAK_FUNC(sub_83058044);
PPC_FUNC_IMPL(__imp__sub_83058044) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83058048"))) PPC_WEAK_FUNC(sub_83058048);
PPC_FUNC_IMPL(__imp__sub_83058048) {
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
	// bl 0x82f42220
	ctx.lr = 0x83058060;
	sub_82F42220(ctx, base);
	// lis r10,-32225
	ctx.r10.s64 = -2111897600;
	// lis r9,-32239
	ctx.r9.s64 = -2112815104;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r8,r10,-24136
	ctx.r8.s64 = ctx.r10.s64 + -24136;
	// addi r7,r9,-17088
	ctx.r7.s64 = ctx.r9.s64 + -17088;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// stw r7,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r7.u32);
	// std r11,96(r31)
	PPC_STORE_U64(ctx.r31.u32 + 96, ctx.r11.u64);
	// stw r11,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r11.u32);
	// stw r11,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r11.u32);
	// stw r11,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r11.u32);
	// stw r11,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r11.u32);
	// stw r11,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r11.u32);
	// stw r11,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r11.u32);
	// bl 0x82d96060
	ctx.lr = 0x830580A0;
	sub_82D96060(ctx, base);
	// clrlwi r6,r3,24
	ctx.r6.u64 = ctx.r3.u32 & 0xFF;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x830580b8
	if (cr6.eq) goto loc_830580B8;
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,84(r31)
	PPC_STORE_U8(ctx.r31.u32 + 84, ctx.r11.u8);
loc_830580B8:
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

__attribute__((alias("__imp__sub_830580CC"))) PPC_WEAK_FUNC(sub_830580CC);
PPC_FUNC_IMPL(__imp__sub_830580CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830580D0"))) PPC_WEAK_FUNC(sub_830580D0);
PPC_FUNC_IMPL(__imp__sub_830580D0) {
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
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-24136
	ctx.r9.s64 = ctx.r11.s64 + -24136;
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
	ctx.lr = 0x83058108;
	sub_82F42278(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x83058120
	if (cr6.eq) goto loc_83058120;
	// bl 0x82416268
	ctx.lr = 0x8305811C;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_83058120:
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

__attribute__((alias("__imp__sub_83058138"))) PPC_WEAK_FUNC(sub_83058138);
PPC_FUNC_IMPL(__imp__sub_83058138) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r11,264
	ctx.r11.s64 = 17301504;
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// ori r9,r11,5
	ctx.r9.u64 = ctx.r11.u64 | 5;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bne cr6,0x830581bc
	if (!cr6.eq) goto loc_830581BC;
	// lwz r11,88(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// addi r11,r11,-9
	ctx.r11.s64 = ctx.r11.s64 + -9;
	// cmplwi cr6,r11,8
	cr6.compare<uint32_t>(ctx.r11.u32, 8, xer);
	// bgt cr6,0x830581bc
	if (cr6.gt) goto loc_830581BC;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x830581bc
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_830581BC;
	// bdzf 4*cr6+eq,0x83058190
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83058190;
	// bdzf 4*cr6+eq,0x830581bc
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_830581BC;
	// bdzf 4*cr6+eq,0x8305819c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8305819C;
	// bdzf 4*cr6+eq,0x830581bc
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_830581BC;
	// bdzf 4*cr6+eq,0x830581a8
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_830581A8;
	// bdzf 4*cr6+eq,0x830581bc
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_830581BC;
	// bne cr6,0x830581b4
	if (!cr6.eq) goto loc_830581B4;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,104(r3)
	PPC_STORE_U32(ctx.r3.u32 + 104, ctx.r11.u32);
	// b 0x830581bc
	goto loc_830581BC;
loc_83058190:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,108(r3)
	PPC_STORE_U32(ctx.r3.u32 + 108, ctx.r11.u32);
	// b 0x830581bc
	goto loc_830581BC;
loc_8305819C:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,112(r3)
	PPC_STORE_U32(ctx.r3.u32 + 112, ctx.r11.u32);
	// b 0x830581bc
	goto loc_830581BC;
loc_830581A8:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,116(r3)
	PPC_STORE_U32(ctx.r3.u32 + 116, ctx.r11.u32);
	// b 0x830581bc
	goto loc_830581BC;
loc_830581B4:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,120(r3)
	PPC_STORE_U32(ctx.r3.u32 + 120, ctx.r11.u32);
loc_830581BC:
	// b 0x83824d80
	sub_83824D80(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830581C0"))) PPC_WEAK_FUNC(sub_830581C0);
PPC_FUNC_IMPL(__imp__sub_830581C0) {
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
	// bl 0x82d86078
	ctx.lr = 0x830581D8;
	sub_82D86078(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83058290
	if (cr6.eq) goto loc_83058290;
	// lwz r3,28(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// bl 0x82da24b0
	ctx.lr = 0x830581EC;
	sub_82DA24B0(ctx, base);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82da2518
	ctx.lr = 0x830581FC;
	sub_82DA2518(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825832d8
	ctx.lr = 0x83058208;
	sub_825832D8(ctx, base);
	// cmpwi cr6,r3,8
	cr6.compare<int32_t>(ctx.r3.s32, 8, xer);
	// beq cr6,0x83058290
	if (cr6.eq) goto loc_83058290;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825832d8
	ctx.lr = 0x83058218;
	sub_825832D8(ctx, base);
	// cmpwi cr6,r3,9
	cr6.compare<int32_t>(ctx.r3.s32, 9, xer);
	// beq cr6,0x83058290
	if (cr6.eq) goto loc_83058290;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82df15f0
	ctx.lr = 0x8305822C;
	sub_82DF15F0(ctx, base);
	// bl 0x82d860f0
	ctx.lr = 0x83058230;
	sub_82D860F0(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r11,r3
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x8305824c
	if (cr6.eq) goto loc_8305824C;
	// li r4,7
	ctx.r4.s64 = 7;
	// bl 0x82583300
	ctx.lr = 0x83058248;
	sub_82583300(ctx, base);
	// b 0x83058290
	goto loc_83058290;
loc_8305824C:
	// bl 0x825832e8
	ctx.lr = 0x83058250;
	sub_825832E8(ctx, base);
	// cmplwi cr6,r3,4
	cr6.compare<uint32_t>(ctx.r3.u32, 4, xer);
	// bgt cr6,0x83058290
	if (cr6.gt) goto loc_83058290;
	// mtctr r3
	ctr.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x83058290
	if (cr6.eq) goto loc_83058290;
	// bdz 0x83058290
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_83058290;
	// bdz 0x83058274
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_83058274;
	// bdz 0x8305827c
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_8305827C;
	// b 0x83058284
	goto loc_83058284;
loc_83058274:
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x83058288
	goto loc_83058288;
loc_8305827C:
	// li r4,2
	ctx.r4.s64 = 2;
	// b 0x83058288
	goto loc_83058288;
loc_83058284:
	// li r4,3
	ctx.r4.s64 = 3;
loc_83058288:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a7a980
	ctx.lr = 0x83058290;
	sub_83A7A980(ctx, base);
loc_83058290:
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

__attribute__((alias("__imp__sub_830582A8"))) PPC_WEAK_FUNC(sub_830582A8);
PPC_FUNC_IMPL(__imp__sub_830582A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x830582B0;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82d86078
	ctx.lr = 0x830582B8;
	sub_82D86078(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x830582cc
	if (!cr6.eq) goto loc_830582CC;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_830582CC:
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// bl 0x82da2518
	ctx.lr = 0x830582D4;
	sub_82DA2518(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82df15f0
	ctx.lr = 0x830582DC;
	sub_82DF15F0(ctx, base);
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// bl 0x83578d58
	ctx.lr = 0x830582E4;
	sub_83578D58(ctx, base);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// bl 0x82da24b0
	ctx.lr = 0x830582F8;
	sub_82DA24B0(ctx, base);
	// bl 0x825832d8
	ctx.lr = 0x830582FC;
	sub_825832D8(ctx, base);
	// cmpwi cr6,r3,8
	cr6.compare<int32_t>(ctx.r3.s32, 8, xer);
	// bne cr6,0x83058308
	if (!cr6.eq) goto loc_83058308;
	// li r29,1
	ctx.r29.s64 = 1;
loc_83058308:
	// lbz r10,91(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 91);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83058320
	if (cr6.eq) goto loc_83058320;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83058320:
	// lbz r10,90(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 90);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83058338
	if (cr6.eq) goto loc_83058338;
	// li r3,4
	ctx.r3.s64 = 4;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83058338:
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// bl 0x82dfa5c8
	ctx.lr = 0x83058340;
	sub_82DFA5C8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83058458
	if (cr6.eq) goto loc_83058458;
	// lwz r11,1948(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1948);
	// cmplwi cr6,r11,30
	cr6.compare<uint32_t>(ctx.r11.u32, 30, xer);
	// bgt cr6,0x83058458
	if (cr6.gt) goto loc_83058458;
	// lis r12,-31994
	ctx.r12.s64 = -2096758784;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-31888
	ctx.r12.s64 = ctx.r12.s64 + -31888;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_830583EC;
	case 1:
		goto loc_830583EC;
	case 2:
		goto loc_830583EC;
	case 3:
		goto loc_8305844C;
	case 4:
		goto loc_830583EC;
	case 5:
		goto loc_830583F8;
	case 6:
		goto loc_830583EC;
	case 7:
		goto loc_83058458;
	case 8:
		goto loc_83058458;
	case 9:
		goto loc_83058458;
	case 10:
		goto loc_83058430;
	case 11:
		goto loc_83058458;
	case 12:
		goto loc_83058458;
	case 13:
		goto loc_83058458;
	case 14:
		goto loc_83058458;
	case 15:
		goto loc_83058458;
	case 16:
		goto loc_83058458;
	case 17:
		goto loc_83058414;
	case 18:
		goto loc_83058458;
	case 19:
		goto loc_83058458;
	case 20:
		goto loc_83058458;
	case 21:
		goto loc_83058458;
	case 22:
		goto loc_83058458;
	case 23:
		goto loc_83058458;
	case 24:
		goto loc_83058458;
	case 25:
		goto loc_83058458;
	case 26:
		goto loc_83058458;
	case 27:
		goto loc_83058458;
	case 28:
		goto loc_83058458;
	case 29:
		goto loc_83058458;
	case 30:
		goto loc_830583EC;
	default:
		return;
	}
	// lwz r24,-31764(r5)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r5.u32 + -31764);
	// lwz r24,-31764(r5)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r5.u32 + -31764);
	// lwz r24,-31764(r5)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r5.u32 + -31764);
	// lwz r24,-31668(r5)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r5.u32 + -31668);
	// lwz r24,-31764(r5)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r5.u32 + -31764);
	// lwz r24,-31752(r5)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r5.u32 + -31752);
	// lwz r24,-31764(r5)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r5.u32 + -31764);
	// lwz r24,-31656(r5)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r5.u32 + -31656);
	// lwz r24,-31656(r5)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r5.u32 + -31656);
	// lwz r24,-31656(r5)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r5.u32 + -31656);
	// lwz r24,-31696(r5)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r5.u32 + -31696);
	// lwz r24,-31656(r5)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r5.u32 + -31656);
	// lwz r24,-31656(r5)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r5.u32 + -31656);
	// lwz r24,-31656(r5)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r5.u32 + -31656);
	// lwz r24,-31656(r5)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r5.u32 + -31656);
	// lwz r24,-31656(r5)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r5.u32 + -31656);
	// lwz r24,-31656(r5)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r5.u32 + -31656);
	// lwz r24,-31724(r5)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r5.u32 + -31724);
	// lwz r24,-31656(r5)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r5.u32 + -31656);
	// lwz r24,-31656(r5)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r5.u32 + -31656);
	// lwz r24,-31656(r5)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r5.u32 + -31656);
	// lwz r24,-31656(r5)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r5.u32 + -31656);
	// lwz r24,-31656(r5)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r5.u32 + -31656);
	// lwz r24,-31656(r5)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r5.u32 + -31656);
	// lwz r24,-31656(r5)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r5.u32 + -31656);
	// lwz r24,-31656(r5)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r5.u32 + -31656);
	// lwz r24,-31656(r5)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r5.u32 + -31656);
	// lwz r24,-31656(r5)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r5.u32 + -31656);
	// lwz r24,-31656(r5)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r5.u32 + -31656);
	// lwz r24,-31656(r5)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r5.u32 + -31656);
	// lwz r24,-31764(r5)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r5.u32 + -31764);
loc_830583EC:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_830583F8:
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// li r10,5
	ctx.r10.s64 = 5;
	// addic r9,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r3,r7,r10
	ctx.r3.u64 = ctx.r7.u64 & ctx.r10.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83058414:
	// bl 0x82e58e20
	ctx.lr = 0x83058418;
	sub_82E58E20(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r10,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// addi r3,r11,7
	ctx.r3.s64 = ctx.r11.s64 + 7;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83058430:
	// lbz r10,89(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 89);
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r8,r9,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// xori r11,r8,1
	ctx.r11.u64 = ctx.r8.u64 ^ 1;
	// addi r3,r11,2
	ctx.r3.s64 = ctx.r11.s64 + 2;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_8305844C:
	// li r3,6
	ctx.r3.s64 = 6;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83058458:
	// li r3,8
	ctx.r3.s64 = 8;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83058464"))) PPC_WEAK_FUNC(sub_83058464);
PPC_FUNC_IMPL(__imp__sub_83058464) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83058468"))) PPC_WEAK_FUNC(sub_83058468);
PPC_FUNC_IMPL(__imp__sub_83058468) {
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
	// li r30,0
	ctx.r30.s64 = 0;
	// bl 0x82d86078
	ctx.lr = 0x83058484;
	sub_82D86078(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83058498
	if (!cr6.eq) goto loc_83058498;
loc_83058490:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x830584cc
	goto loc_830584CC;
loc_83058498:
	// bl 0x82d96060
	ctx.lr = 0x8305849C;
	sub_82D96060(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83058490
	if (cr6.eq) goto loc_83058490;
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// bl 0x82da2518
	ctx.lr = 0x830584B0;
	sub_82DA2518(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82df15f0
	ctx.lr = 0x830584B8;
	sub_82DF15F0(ctx, base);
	// lbz r10,91(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 91);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x830584c8
	if (cr6.eq) goto loc_830584C8;
	// li r30,1
	ctx.r30.s64 = 1;
loc_830584C8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_830584CC:
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

__attribute__((alias("__imp__sub_830584E4"))) PPC_WEAK_FUNC(sub_830584E4);
PPC_FUNC_IMPL(__imp__sub_830584E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830584E8"))) PPC_WEAK_FUNC(sub_830584E8);
PPC_FUNC_IMPL(__imp__sub_830584E8) {
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
	// li r11,31
	ctx.r11.s64 = 31;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,128
	ctx.r4.s64 = 128;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x83058514;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83058538
	if (cr6.eq) goto loc_83058538;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x83058048
	ctx.lr = 0x83058524;
	sub_83058048(ctx, base);
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
loc_83058538:
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

__attribute__((alias("__imp__sub_83058550"))) PPC_WEAK_FUNC(sub_83058550);
PPC_FUNC_IMPL(__imp__sub_83058550) {
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
	// lwz r11,120(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 120);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8305864c
	if (!cr6.eq) goto loc_8305864C;
	// bl 0x82d86078
	ctx.lr = 0x83058578;
	sub_82D86078(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8305864c
	if (cr6.eq) goto loc_8305864C;
	// bl 0x82d96608
	ctx.lr = 0x83058588;
	sub_82D96608(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8305864c
	if (!cr6.eq) goto loc_8305864C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83058468
	ctx.lr = 0x8305859C;
	sub_83058468(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8305864c
	if (!cr6.eq) goto loc_8305864C;
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// bl 0x82da24b0
	ctx.lr = 0x830585B0;
	sub_82DA24B0(ctx, base);
	// bl 0x825832d8
	ctx.lr = 0x830585B4;
	sub_825832D8(ctx, base);
	// cmpwi cr6,r3,8
	cr6.compare<int32_t>(ctx.r3.s32, 8, xer);
	// beq cr6,0x8305864c
	if (cr6.eq) goto loc_8305864C;
	// cmpwi cr6,r3,7
	cr6.compare<int32_t>(ctx.r3.s32, 7, xer);
	// beq cr6,0x8305864c
	if (cr6.eq) goto loc_8305864C;
	// cmpwi cr6,r3,5
	cr6.compare<int32_t>(ctx.r3.s32, 5, xer);
	// beq cr6,0x8305864c
	if (cr6.eq) goto loc_8305864C;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,15
	ctx.r10.s64 = 15;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// bl 0x82d96060
	ctx.lr = 0x830585E4;
	sub_82D96060(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x83058600
	if (cr6.eq) goto loc_83058600;
	// lis r4,225
	ctx.r4.s64 = 14745600;
	// ori r4,r4,69
	ctx.r4.u64 = ctx.r4.u64 | 69;
	// b 0x83058608
	goto loc_83058608;
loc_83058600:
	// lis r4,275
	ctx.r4.s64 = 18022400;
	// ori r4,r4,92
	ctx.r4.u64 = ctx.r4.u64 | 92;
loc_83058608:
	// bl 0x82d04220
	ctx.lr = 0x8305860C;
	sub_82D04220(ctx, base);
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// li r6,3
	ctx.r6.s64 = 3;
	// addi r3,r11,-24244
	ctx.r3.s64 = ctx.r11.s64 + -24244;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2fa90
	ctx.lr = 0x83058624;
	sub_82D2FA90(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83058644
	if (cr6.eq) goto loc_83058644;
	// stw r3,120(r30)
	PPC_STORE_U32(ctx.r30.u32 + 120, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82d2aab0
	ctx.lr = 0x83058638;
	sub_82D2AAB0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,120(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 120);
	// bl 0x83103100
	ctx.lr = 0x83058644;
	sub_83103100(ctx, base);
loc_83058644:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8387e8e0
	ctx.lr = 0x8305864C;
	sub_8387E8E0(ctx, base);
loc_8305864C:
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

__attribute__((alias("__imp__sub_83058664"))) PPC_WEAK_FUNC(sub_83058664);
PPC_FUNC_IMPL(__imp__sub_83058664) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83058668"))) PPC_WEAK_FUNC(sub_83058668);
PPC_FUNC_IMPL(__imp__sub_83058668) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x83058670;
	__savegprlr_27(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,104(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83058960
	if (!cr6.eq) goto loc_83058960;
	// bl 0x82d86078
	ctx.lr = 0x83058688;
	sub_82D86078(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83058960
	if (cr6.eq) goto loc_83058960;
	// bl 0x82d96060
	ctx.lr = 0x83058698;
	sub_82D96060(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83058960
	if (cr6.eq) goto loc_83058960;
	// li r31,0
	ctx.r31.s64 = 0;
	// lwz r3,28(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// mr r28,r31
	ctx.r28.u64 = ctx.r31.u64;
	// bl 0x82da24b0
	ctx.lr = 0x830586B4;
	sub_82DA24B0(ctx, base);
	// bl 0x825832d8
	ctx.lr = 0x830586B8;
	sub_825832D8(ctx, base);
	// cmpwi cr6,r3,8
	cr6.compare<int32_t>(ctx.r3.s32, 8, xer);
	// bne cr6,0x830586c8
	if (!cr6.eq) goto loc_830586C8;
	// li r28,1
	ctx.r28.s64 = 1;
	// b 0x830586d0
	goto loc_830586D0;
loc_830586C8:
	// cmpwi cr6,r3,9
	cr6.compare<int32_t>(ctx.r3.s32, 9, xer);
	// beq cr6,0x83058960
	if (cr6.eq) goto loc_83058960;
loc_830586D0:
	// li r29,15
	ctx.r29.s64 = 15;
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// stb r31,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r31.u8);
	// stw r29,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r29.u32);
	// lwz r3,28(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// bl 0x82da2518
	ctx.lr = 0x830586E8;
	sub_82DA2518(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82df15f0
	ctx.lr = 0x830586F0;
	sub_82DF15F0(ctx, base);
	// bl 0x82d860f0
	ctx.lr = 0x830586F4;
	sub_82D860F0(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r11,r3
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, xer);
	// bne cr6,0x8305875c
	if (!cr6.eq) goto loc_8305875C;
	// li r30,1
	ctx.r30.s64 = 1;
	// bl 0x82e6e978
	ctx.lr = 0x83058708;
	sub_82E6E978(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83058770
	if (cr6.eq) goto loc_83058770;
	// stw r29,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r29.u32);
	// li r6,-1
	ctx.r6.s64 = -1;
	// stw r31,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r31.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r31,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, ctx.r31.u8);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// addi r4,r11,8
	ctx.r4.s64 = ctx.r11.s64 + 8;
	// bl 0x82470e60
	ctx.lr = 0x83058734;
	sub_82470E60(ctx, base);
	// lwz r11,180(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r4,160(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x83058748
	if (!cr6.lt) goto loc_83058748;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
loc_83058748:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8259d6c0
	ctx.lr = 0x83058750;
	sub_8259D6C0(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x824707c8
	ctx.lr = 0x83058758;
	sub_824707C8(ctx, base);
	// b 0x83058770
	goto loc_83058770;
loc_8305875C:
	// lwz r3,28(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
	// bl 0x82da2518
	ctx.lr = 0x83058768;
	sub_82DA2518(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x82df1850
	ctx.lr = 0x83058770;
	sub_82DF1850(ctx, base);
loc_83058770:
	// stw r29,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r29.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// stb r31,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r31.u8);
	// bl 0x830582a8
	ctx.lr = 0x83058784;
	sub_830582A8(ctx, base);
	// cmplwi cr6,r3,8
	cr6.compare<uint32_t>(ctx.r3.u32, 8, xer);
	// bgt cr6,0x83058950
	if (cr6.gt) goto loc_83058950;
	// mtctr r3
	ctr.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x83058950
	if (cr6.eq) goto loc_83058950;
	// bdz 0x830587b8
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_830587B8;
	// bdz 0x830587d8
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_830587D8;
	// bdz 0x830587f8
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_830587F8;
	// bdz 0x83058818
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_83058818;
	// bdz 0x83058844
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_83058844;
	// bdz 0x8305889c
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_8305889C;
	// bdz 0x830588bc
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_830588BC;
	// b 0x830588dc
	goto loc_830588DC;
loc_830587B8:
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x830587cc
	if (!cr6.lt) goto loc_830587CC;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
loc_830587CC:
	// lis r4,513
	ctx.r4.s64 = 33619968;
	// ori r4,r4,123
	ctx.r4.u64 = ctx.r4.u64 | 123;
	// b 0x83058900
	goto loc_83058900;
loc_830587D8:
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x830587ec
	if (!cr6.lt) goto loc_830587EC;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
loc_830587EC:
	// lis r4,513
	ctx.r4.s64 = 33619968;
	// ori r4,r4,120
	ctx.r4.u64 = ctx.r4.u64 | 120;
	// b 0x83058900
	goto loc_83058900;
loc_830587F8:
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x8305880c
	if (!cr6.lt) goto loc_8305880C;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
loc_8305880C:
	// lis r4,513
	ctx.r4.s64 = 33619968;
	// ori r4,r4,119
	ctx.r4.u64 = ctx.r4.u64 | 119;
	// b 0x83058900
	goto loc_83058900;
loc_83058818:
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// lis r4,513
	ctx.r4.s64 = 33619968;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// beq cr6,0x83058838
	if (cr6.eq) goto loc_83058838;
	// ori r4,r4,158
	ctx.r4.u64 = ctx.r4.u64 | 158;
	// bl 0x82d04220
	ctx.lr = 0x83058834;
	sub_82D04220(ctx, base);
	// b 0x83058908
	goto loc_83058908;
loc_83058838:
	// ori r4,r4,157
	ctx.r4.u64 = ctx.r4.u64 | 157;
	// bl 0x82d04220
	ctx.lr = 0x83058840;
	sub_82D04220(ctx, base);
	// b 0x83058908
	goto loc_83058908;
loc_83058844:
	// clrlwi r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8305887c
	if (cr6.eq) goto loc_8305887C;
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// lis r4,510
	ctx.r4.s64 = 33423360;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// beq cr6,0x83058870
	if (cr6.eq) goto loc_83058870;
	// ori r4,r4,18
	ctx.r4.u64 = ctx.r4.u64 | 18;
	// bl 0x82d04220
	ctx.lr = 0x8305886C;
	sub_82D04220(ctx, base);
	// b 0x83058908
	goto loc_83058908;
loc_83058870:
	// ori r4,r4,19
	ctx.r4.u64 = ctx.r4.u64 | 19;
	// bl 0x82d04220
	ctx.lr = 0x83058878;
	sub_82D04220(ctx, base);
	// b 0x83058908
	goto loc_83058908;
loc_8305887C:
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x83058890
	if (!cr6.lt) goto loc_83058890;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
loc_83058890:
	// lis r4,513
	ctx.r4.s64 = 33619968;
	// ori r4,r4,180
	ctx.r4.u64 = ctx.r4.u64 | 180;
	// b 0x83058900
	goto loc_83058900;
loc_8305889C:
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x830588b0
	if (!cr6.lt) goto loc_830588B0;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
loc_830588B0:
	// lis r4,513
	ctx.r4.s64 = 33619968;
	// ori r4,r4,182
	ctx.r4.u64 = ctx.r4.u64 | 182;
	// b 0x83058900
	goto loc_83058900;
loc_830588BC:
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x830588d0
	if (!cr6.lt) goto loc_830588D0;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
loc_830588D0:
	// lis r4,513
	ctx.r4.s64 = 33619968;
	// ori r4,r4,183
	ctx.r4.u64 = ctx.r4.u64 | 183;
	// b 0x83058900
	goto loc_83058900;
loc_830588DC:
	// clrlwi r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x830588f8
	if (!cr6.lt) goto loc_830588F8;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
loc_830588F8:
	// lis r4,513
	ctx.r4.s64 = 33619968;
	// ori r4,r4,122
	ctx.r4.u64 = ctx.r4.u64 | 122;
loc_83058900:
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82d042a8
	ctx.lr = 0x83058908;
	sub_82D042A8(ctx, base);
loc_83058908:
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// li r6,3
	ctx.r6.s64 = 3;
	// addi r3,r11,-24376
	ctx.r3.s64 = ctx.r11.s64 + -24376;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2fa90
	ctx.lr = 0x83058920;
	sub_82D2FA90(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83058950
	if (cr6.eq) goto loc_83058950;
	// stw r3,104(r27)
	PPC_STORE_U32(ctx.r27.u32 + 104, ctx.r3.u32);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// bl 0x82d2aab0
	ctx.lr = 0x83058934;
	sub_82D2AAB0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,5000
	ctx.r4.s64 = 5000;
	// lwz r3,104(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 104);
	// bl 0x82d29e28
	ctx.lr = 0x83058944;
	sub_82D29E28(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r4,104(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 104);
	// bl 0x83103100
	ctx.lr = 0x83058950;
	sub_83103100(ctx, base);
loc_83058950:
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8387e8e0
	ctx.lr = 0x83058958;
	sub_8387E8E0(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8387e8e0
	ctx.lr = 0x83058960;
	sub_8387E8E0(ctx, base);
loc_83058960:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83058968"))) PPC_WEAK_FUNC(sub_83058968);
PPC_FUNC_IMPL(__imp__sub_83058968) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad0
	ctx.lr = 0x83058970;
	__savegprlr_22(ctx, base);
	// stwu r1,-432(r1)
	ea = -432 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,108(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 108);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83058cfc
	if (!cr6.eq) goto loc_83058CFC;
	// bl 0x82d86078
	ctx.lr = 0x83058988;
	sub_82D86078(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83058cfc
	if (cr6.eq) goto loc_83058CFC;
	// bl 0x831156e8
	ctx.lr = 0x83058998;
	sub_831156E8(ctx, base);
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// li r24,0
	ctx.r24.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830589bc
	if (cr6.eq) goto loc_830589BC;
	// bl 0x83115808
	ctx.lr = 0x830589AC;
	sub_83115808(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x830589c0
	if (!cr6.eq) goto loc_830589C0;
loc_830589BC:
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
loc_830589C0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83058cfc
	if (cr6.eq) goto loc_83058CFC;
	// bl 0x831156e8
	ctx.lr = 0x830589D0;
	sub_831156E8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// lwz r23,48(r11)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// bl 0x83058468
	ctx.lr = 0x830589E0;
	sub_83058468(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83058cfc
	if (!cr6.eq) goto loc_83058CFC;
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// bl 0x82da24b0
	ctx.lr = 0x830589F4;
	sub_82DA24B0(ctx, base);
	// bl 0x825832d8
	ctx.lr = 0x830589F8;
	sub_825832D8(ctx, base);
	// cmpwi cr6,r3,8
	cr6.compare<int32_t>(ctx.r3.s32, 8, xer);
	// beq cr6,0x83058cfc
	if (cr6.eq) goto loc_83058CFC;
	// cmpwi cr6,r3,7
	cr6.compare<int32_t>(ctx.r3.s32, 7, xer);
	// beq cr6,0x83058cfc
	if (cr6.eq) goto loc_83058CFC;
	// cmpwi cr6,r3,5
	cr6.compare<int32_t>(ctx.r3.s32, 5, xer);
	// beq cr6,0x83058cfc
	if (cr6.eq) goto loc_83058CFC;
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// mr r30,r24
	ctx.r30.u64 = ctx.r24.u64;
	// stw r24,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r24.u32);
	// stw r24,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r24.u32);
	// stw r24,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r24.u32);
	// bl 0x82da24b0
	ctx.lr = 0x83058A28;
	sub_82DA24B0(ctx, base);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82da2858
	ctx.lr = 0x83058A38;
	sub_82DA2858(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r28,r24
	ctx.r28.u64 = ctx.r24.u64;
	// bl 0x82da8160
	ctx.lr = 0x83058A44;
	sub_82DA8160(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83058b48
	if (cr6.eq) goto loc_83058B48;
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r26,r11,65535
	ctx.r26.u64 = ctx.r11.u64 | 65535;
loc_83058A54:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82da81e0
	ctx.lr = 0x83058A60;
	sub_82DA81E0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83058b30
	if (cr6.eq) goto loc_83058B30;
	// sth r26,312(r1)
	PPC_STORE_U16(ctx.r1.u32 + 312, ctx.r26.u16);
	// addi r5,r1,272
	ctx.r5.s64 = ctx.r1.s64 + 272;
	// stw r24,316(r1)
	PPC_STORE_U32(ctx.r1.u32 + 316, ctx.r24.u32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82da8178
	ctx.lr = 0x83058A84;
	sub_82DA8178(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r30,1
	ctx.r30.s64 = 1;
	// mr r31,r24
	ctx.r31.u64 = ctx.r24.u64;
	// bl 0x82da1d60
	ctx.lr = 0x83058A94;
	sub_82DA1D60(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83058b18
	if (cr6.eq) goto loc_83058B18;
loc_83058A9C:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x82da1e70
	ctx.lr = 0x83058AAC;
	sub_82DA1E70(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83058ac8
	if (!cr6.eq) goto loc_83058AC8;
	// lwz r11,316(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 316);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r10,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// b 0x83058af0
	goto loc_83058AF0;
loc_83058AC8:
	// lhz r8,312(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + 312);
	// lhz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// cmplw cr6,r8,r9
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, xer);
	// bne cr6,0x83058ae8
	if (!cr6.eq) goto loc_83058AE8;
	// lwz r10,316(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 316);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x83058aec
	if (cr6.eq) goto loc_83058AEC;
loc_83058AE8:
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
loc_83058AEC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_83058AF0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83058b14
	if (!cr6.eq) goto loc_83058B14;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// bl 0x82da1d60
	ctx.lr = 0x83058B08;
	sub_82DA1D60(ctx, base);
	// cmplw cr6,r31,r3
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r3.u32, xer);
	// blt cr6,0x83058a9c
	if (cr6.lt) goto loc_83058A9C;
	// b 0x83058b18
	goto loc_83058B18;
loc_83058B14:
	// mr r30,r24
	ctx.r30.u64 = ctx.r24.u64;
loc_83058B18:
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83058b30
	if (cr6.eq) goto loc_83058B30;
	// addi r4,r1,312
	ctx.r4.s64 = ctx.r1.s64 + 312;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83546fd8
	ctx.lr = 0x83058B30;
	sub_83546FD8(ctx, base);
loc_83058B30:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// bl 0x82da8160
	ctx.lr = 0x83058B3C;
	sub_82DA8160(ctx, base);
	// cmplw cr6,r28,r3
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r3.u32, xer);
	// blt cr6,0x83058a54
	if (cr6.lt) goto loc_83058A54;
	// lwz r30,80(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_83058B48:
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// subf r10,r30,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r30.s64;
	// srawi. r29,r10,3
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7) != 0);
	ctx.r29.s64 = ctx.r10.s32 >> 3;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// beq 0x83058cf4
	if (cr0.eq) goto loc_83058CF4;
	// li r25,15
	ctx.r25.s64 = 15;
	// stw r24,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r24.u32);
	// stb r24,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r24.u8);
	// lis r4,550
	ctx.r4.s64 = 36044800;
	// stw r25,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r25.u32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stw r25,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r25.u32);
	// ori r4,r4,64
	ctx.r4.u64 = ctx.r4.u64 | 64;
	// stw r24,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r24.u32);
	// stb r24,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r24.u8);
	// bl 0x82d04220
	ctx.lr = 0x83058B84;
	sub_82D04220(ctx, base);
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r27,r11,-24340
	ctx.r27.s64 = ctx.r11.s64 + -24340;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// addi r5,r27,-12
	ctx.r5.s64 = ctx.r27.s64 + -12;
	// bl 0x82ab6970
	ctx.lr = 0x83058B9C;
	sub_82AB6970(ctx, base);
	// li r26,-1
	ctx.r26.s64 = -1;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8259cb28
	ctx.lr = 0x83058BB4;
	sub_8259CB28(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x8387e8e0
	ctx.lr = 0x83058BBC;
	sub_8387E8E0(ctx, base);
	// mr r31,r24
	ctx.r31.u64 = ctx.r24.u64;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x83058c3c
	if (cr6.eq) goto loc_83058C3C;
loc_83058BC8:
	// cmplwi cr6,r31,3
	cr6.compare<uint32_t>(ctx.r31.u32, 3, xer);
	// bge cr6,0x83058c3c
	if (!cr6.lt) goto loc_83058C3C;
	// cmplw cr6,r29,r31
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r31.u32, xer);
	// ble cr6,0x83058d04
	if (!cr6.gt) goto loc_83058D04;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// ld r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r30.u32 + 0);
	// bl 0x8311bf98
	ctx.lr = 0x83058BE4;
	sub_8311BF98(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r5,r27,-8
	ctx.r5.s64 = ctx.r27.s64 + -8;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82ab6970
	ctx.lr = 0x83058BF8;
	sub_82AB6970(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// addi r5,r28,56
	ctx.r5.s64 = ctx.r28.s64 + 56;
	// bl 0x8292a568
	ctx.lr = 0x83058C08;
	sub_8292A568(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8259cb28
	ctx.lr = 0x83058C1C;
	sub_8259CB28(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x8387e8e0
	ctx.lr = 0x83058C24;
	sub_8387E8E0(ctx, base);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x8387e8e0
	ctx.lr = 0x83058C2C;
	sub_8387E8E0(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// cmplw cr6,r31,r29
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, xer);
	// blt cr6,0x83058bc8
	if (cr6.lt) goto loc_83058BC8;
loc_83058C3C:
	// cmplwi cr6,r29,3
	cr6.compare<uint32_t>(ctx.r29.u32, 3, xer);
	// ble cr6,0x83058cb0
	if (!cr6.gt) goto loc_83058CB0;
	// stw r25,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r25.u32);
	// lis r4,561
	ctx.r4.s64 = 36765696;
	// stw r24,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r24.u32);
	// addi r5,r29,-3
	ctx.r5.s64 = ctx.r29.s64 + -3;
	// stb r24,192(r1)
	PPC_STORE_U8(ctx.r1.u32 + 192, ctx.r24.u8);
	// ori r4,r4,21
	ctx.r4.u64 = ctx.r4.u64 | 21;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82d042a8
	ctx.lr = 0x83058C64;
	sub_82D042A8(ctx, base);
	// addi r5,r27,-4
	ctx.r5.s64 = ctx.r27.s64 + -4;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82ab6970
	ctx.lr = 0x83058C74;
	sub_82AB6970(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// addi r5,r1,192
	ctx.r5.s64 = ctx.r1.s64 + 192;
	// bl 0x82ac8718
	ctx.lr = 0x83058C84;
	sub_82AC8718(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8259cb28
	ctx.lr = 0x83058C98;
	sub_8259CB28(ctx, base);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x8387e8e0
	ctx.lr = 0x83058CA0;
	sub_8387E8E0(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x8387e8e0
	ctx.lr = 0x83058CA8;
	sub_8387E8E0(ctx, base);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x8387e8e0
	ctx.lr = 0x83058CB0;
	sub_8387E8E0(ctx, base);
loc_83058CB0:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// li r6,3
	ctx.r6.s64 = 3;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2fa90
	ctx.lr = 0x83058CC4;
	sub_82D2FA90(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83058ce4
	if (cr6.eq) goto loc_83058CE4;
	// stw r3,108(r22)
	PPC_STORE_U32(ctx.r22.u32 + 108, ctx.r3.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x82d2aab0
	ctx.lr = 0x83058CD8;
	sub_82D2AAB0(ctx, base);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// lwz r4,108(r22)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r22.u32 + 108);
	// bl 0x83103100
	ctx.lr = 0x83058CE4;
	sub_83103100(ctx, base);
loc_83058CE4:
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8387e8e0
	ctx.lr = 0x83058CEC;
	sub_8387E8E0(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8387e8e0
	ctx.lr = 0x83058CF4;
	sub_8387E8E0(ctx, base);
loc_83058CF4:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82f73d60
	ctx.lr = 0x83058CFC;
	sub_82F73D60(ctx, base);
loc_83058CFC:
	// addi r1,r1,432
	ctx.r1.s64 = ctx.r1.s64 + 432;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
loc_83058D04:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x83058D10;
	sub_831CC188(ctx, base);
}

__attribute__((alias("__imp__sub_83058D10"))) PPC_WEAK_FUNC(sub_83058D10);
PPC_FUNC_IMPL(__imp__sub_83058D10) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdac8
	ctx.lr = 0x83058D18;
	__savegprlr_20(ctx, base);
	// stwu r1,-480(r1)
	ea = -480 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,112(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 112);
	// mr r20,r3
	ctx.r20.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x830591bc
	if (!cr6.eq) goto loc_830591BC;
	// bl 0x82d86078
	ctx.lr = 0x83058D30;
	sub_82D86078(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830591bc
	if (cr6.eq) goto loc_830591BC;
	// bl 0x831156e8
	ctx.lr = 0x83058D40;
	sub_831156E8(ctx, base);
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// li r23,0
	ctx.r23.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83058d64
	if (cr6.eq) goto loc_83058D64;
	// bl 0x83115808
	ctx.lr = 0x83058D54;
	sub_83115808(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x83058d68
	if (!cr6.eq) goto loc_83058D68;
loc_83058D64:
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
loc_83058D68:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830591bc
	if (cr6.eq) goto loc_830591BC;
	// bl 0x831156e8
	ctx.lr = 0x83058D78;
	sub_831156E8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// lwz r21,48(r11)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// bl 0x83058468
	ctx.lr = 0x83058D88;
	sub_83058468(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x830591bc
	if (!cr6.eq) goto loc_830591BC;
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// bl 0x82da24b0
	ctx.lr = 0x83058D9C;
	sub_82DA24B0(ctx, base);
	// bl 0x825832d8
	ctx.lr = 0x83058DA0;
	sub_825832D8(ctx, base);
	// cmpwi cr6,r3,8
	cr6.compare<int32_t>(ctx.r3.s32, 8, xer);
	// beq cr6,0x830591bc
	if (cr6.eq) goto loc_830591BC;
	// cmpwi cr6,r3,7
	cr6.compare<int32_t>(ctx.r3.s32, 7, xer);
	// beq cr6,0x830591bc
	if (cr6.eq) goto loc_830591BC;
	// cmpwi cr6,r3,5
	cr6.compare<int32_t>(ctx.r3.s32, 5, xer);
	// beq cr6,0x830591bc
	if (cr6.eq) goto loc_830591BC;
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// mr r24,r23
	ctx.r24.u64 = ctx.r23.u64;
	// stw r23,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r23.u32);
	// stw r23,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r23.u32);
	// stw r23,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r23.u32);
	// bl 0x82da24b0
	ctx.lr = 0x83058DD0;
	sub_82DA24B0(ctx, base);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82da2858
	ctx.lr = 0x83058DE0;
	sub_82DA2858(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r22,r23
	ctx.r22.u64 = ctx.r23.u64;
	// stw r23,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r23.u32);
	// stw r23,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r23.u32);
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
	// stw r23,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r23.u32);
	// bl 0x82da8160
	ctx.lr = 0x83058DFC;
	sub_82DA8160(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83058e60
	if (cr6.eq) goto loc_83058E60;
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r29,r11,65535
	ctx.r29.u64 = ctx.r11.u64 | 65535;
loc_83058E0C:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82da81e0
	ctx.lr = 0x83058E18;
	sub_82DA81E0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83058e48
	if (cr6.eq) goto loc_83058E48;
	// sth r29,344(r1)
	PPC_STORE_U16(ctx.r1.u32 + 344, ctx.r29.u16);
	// addi r5,r1,304
	ctx.r5.s64 = ctx.r1.s64 + 304;
	// stw r23,348(r1)
	PPC_STORE_U32(ctx.r1.u32 + 348, ctx.r23.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82da8178
	ctx.lr = 0x83058E3C;
	sub_82DA8178(ctx, base);
	// addi r4,r1,344
	ctx.r4.s64 = ctx.r1.s64 + 344;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x83546fd8
	ctx.lr = 0x83058E48;
	sub_83546FD8(ctx, base);
loc_83058E48:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// bl 0x82da8160
	ctx.lr = 0x83058E54;
	sub_82DA8160(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, xer);
	// blt cr6,0x83058e0c
	if (cr6.lt) goto loc_83058E0C;
	// lwz r22,176(r1)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
loc_83058E60:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
	// bl 0x82da1d60
	ctx.lr = 0x83058E6C;
	sub_82DA1D60(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83058f44
	if (cr6.eq) goto loc_83058F44;
	// lwz r11,180(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// subf r10,r22,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r22.s64;
	// srawi r31,r10,3
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7) != 0);
	ctx.r31.s64 = ctx.r10.s32 >> 3;
loc_83058E80:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82da1e70
	ctx.lr = 0x83058E90;
	sub_82DA1E70(ctx, base);
	// li r8,1
	ctx.r8.s64 = 1;
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x83058f14
	if (cr6.eq) goto loc_83058F14;
	// lwz r7,100(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// addi r9,r22,4
	ctx.r9.s64 = ctx.r22.s64 + 4;
	// lhz r6,96(r1)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r1.u32 + 96);
loc_83058EAC:
	// cmplw cr6,r31,r10
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, xer);
	// ble cr6,0x83058f6c
	if (!cr6.gt) goto loc_83058F6C;
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83058ed0
	if (!cr6.eq) goto loc_83058ED0;
	// subf r11,r7,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r7.s64;
	// cntlzw r5,r11
	ctx.r5.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r5,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 27) & 0x1;
	// b 0x83058ef4
	goto loc_83058EF4;
loc_83058ED0:
	// lhz r3,-4(r9)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r9.u32 + -4);
	// clrlwi r4,r6,16
	ctx.r4.u64 = ctx.r6.u32 & 0xFFFF;
	// cmplw cr6,r4,r3
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r3.u32, xer);
	// bne cr6,0x83058eec
	if (!cr6.eq) goto loc_83058EEC;
	// cmplw cr6,r7,r11
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r11.u32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x83058ef0
	if (cr6.eq) goto loc_83058EF0;
loc_83058EEC:
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
loc_83058EF0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_83058EF4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addic r5,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r5.s64 = ctx.r11.s64 + -1;
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// subfe r3,r4,r4
	temp.u8 = (~ctx.r4.u32 + ctx.r4.u32 < ~ctx.r4.u32) | (~ctx.r4.u32 + ctx.r4.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~ctx.r4.u64 + ctx.r4.u64 + xer.ca;
	xer.ca = temp.u8;
	// cmplw cr6,r10,r31
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r31.u32, xer);
	// and r8,r3,r8
	ctx.r8.u64 = ctx.r3.u64 & ctx.r8.u64;
	// blt cr6,0x83058eac
	if (cr6.lt) goto loc_83058EAC;
loc_83058F14:
	// clrlwi r11,r8,24
	ctx.r11.u64 = ctx.r8.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83058f2c
	if (cr6.eq) goto loc_83058F2C;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x83546fd8
	ctx.lr = 0x83058F2C;
	sub_83546FD8(ctx, base);
loc_83058F2C:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// bl 0x82da1d60
	ctx.lr = 0x83058F38;
	sub_82DA1D60(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, xer);
	// blt cr6,0x83058e80
	if (cr6.lt) goto loc_83058E80;
	// lwz r24,112(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
loc_83058F44:
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// subf r10,r24,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r24.s64;
	// srawi. r29,r10,3
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7) != 0);
	ctx.r29.s64 = ctx.r10.s32 >> 3;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// bne 0x83058f78
	if (!cr0.eq) goto loc_83058F78;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82f73d60
	ctx.lr = 0x83058F5C;
	sub_82F73D60(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82f73d60
	ctx.lr = 0x83058F64;
	sub_82F73D60(ctx, base);
	// addi r1,r1,480
	ctx.r1.s64 = ctx.r1.s64 + 480;
	// b 0x831cdb18
	__restgprlr_20(ctx, base);
	return;
loc_83058F6C:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x83058F78;
	sub_831CC188(ctx, base);
loc_83058F78:
	// li r25,15
	ctx.r25.s64 = 15;
	// stw r23,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r23.u32);
	// stb r23,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r23.u8);
	// lis r4,279
	ctx.r4.s64 = 18284544;
	// stw r25,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r25.u32);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// stw r25,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r25.u32);
	// ori r4,r4,263
	ctx.r4.u64 = ctx.r4.u64 | 263;
	// stw r23,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r23.u32);
	// stb r23,208(r1)
	PPC_STORE_U8(ctx.r1.u32 + 208, ctx.r23.u8);
	// bl 0x82d04220
	ctx.lr = 0x83058FA4;
	sub_82D04220(ctx, base);
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// addi r27,r11,-24304
	ctx.r27.s64 = ctx.r11.s64 + -24304;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r5,r27,-12
	ctx.r5.s64 = ctx.r27.s64 + -12;
	// bl 0x82ab6970
	ctx.lr = 0x83058FBC;
	sub_82AB6970(ctx, base);
	// li r26,-1
	ctx.r26.s64 = -1;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x8259cb28
	ctx.lr = 0x83058FD4;
	sub_8259CB28(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8387e8e0
	ctx.lr = 0x83058FDC;
	sub_8387E8E0(ctx, base);
	// mr r31,r23
	ctx.r31.u64 = ctx.r23.u64;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x83059060
	if (cr6.eq) goto loc_83059060;
	// mr r30,r24
	ctx.r30.u64 = ctx.r24.u64;
loc_83058FEC:
	// cmplwi cr6,r31,3
	cr6.compare<uint32_t>(ctx.r31.u32, 3, xer);
	// bge cr6,0x83059060
	if (!cr6.lt) goto loc_83059060;
	// cmplw cr6,r29,r31
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r31.u32, xer);
	// ble cr6,0x83059154
	if (!cr6.gt) goto loc_83059154;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// ld r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r30.u32 + 0);
	// bl 0x8311bf98
	ctx.lr = 0x83059008;
	sub_8311BF98(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r5,r27,-8
	ctx.r5.s64 = ctx.r27.s64 + -8;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82ab6970
	ctx.lr = 0x8305901C;
	sub_82AB6970(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r5,r28,56
	ctx.r5.s64 = ctx.r28.s64 + 56;
	// bl 0x8292a568
	ctx.lr = 0x8305902C;
	sub_8292A568(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x8259cb28
	ctx.lr = 0x83059040;
	sub_8259CB28(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8387e8e0
	ctx.lr = 0x83059048;
	sub_8387E8E0(ctx, base);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x8387e8e0
	ctx.lr = 0x83059050;
	sub_8387E8E0(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// cmplw cr6,r31,r29
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, xer);
	// blt cr6,0x83058fec
	if (cr6.lt) goto loc_83058FEC;
loc_83059060:
	// cmplwi cr6,r29,3
	cr6.compare<uint32_t>(ctx.r29.u32, 3, xer);
	// ble cr6,0x830590ec
	if (!cr6.gt) goto loc_830590EC;
	// stw r25,292(r1)
	PPC_STORE_U32(ctx.r1.u32 + 292, ctx.r25.u32);
	// lis r4,561
	ctx.r4.s64 = 36765696;
	// stw r23,288(r1)
	PPC_STORE_U32(ctx.r1.u32 + 288, ctx.r23.u32);
	// addi r5,r29,-3
	ctx.r5.s64 = ctx.r29.s64 + -3;
	// stb r23,272(r1)
	PPC_STORE_U8(ctx.r1.u32 + 272, ctx.r23.u8);
	// ori r4,r4,21
	ctx.r4.u64 = ctx.r4.u64 | 21;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x82d042a8
	ctx.lr = 0x83059088;
	sub_82D042A8(ctx, base);
	// addi r5,r27,-4
	ctx.r5.s64 = ctx.r27.s64 + -4;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82ab6970
	ctx.lr = 0x83059098;
	sub_82AB6970(ctx, base);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,272
	ctx.r4.s64 = ctx.r1.s64 + 272;
	// bl 0x825a1da8
	ctx.lr = 0x830590A8;
	sub_825A1DA8(ctx, base);
	// stw r25,260(r1)
	PPC_STORE_U32(ctx.r1.u32 + 260, ctx.r25.u32);
	// stw r23,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, ctx.r23.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stb r23,240(r1)
	PPC_STORE_U8(ctx.r1.u32 + 240, ctx.r23.u8);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x8292a448
	ctx.lr = 0x830590C0;
	sub_8292A448(ctx, base);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x8259cb28
	ctx.lr = 0x830590D4;
	sub_8259CB28(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x8387e8e0
	ctx.lr = 0x830590DC;
	sub_8387E8E0(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8387e8e0
	ctx.lr = 0x830590E4;
	sub_8387E8E0(ctx, base);
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x8387e8e0
	ctx.lr = 0x830590EC;
	sub_8387E8E0(ctx, base);
loc_830590EC:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// li r6,3
	ctx.r6.s64 = 3;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2fa90
	ctx.lr = 0x83059100;
	sub_82D2FA90(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83059160
	if (!cr6.eq) goto loc_83059160;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x8387e8e0
	ctx.lr = 0x83059110;
	sub_8387E8E0(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x8387e8e0
	ctx.lr = 0x83059118;
	sub_8387E8E0(ctx, base);
	// li r31,2
	ctx.r31.s64 = 2;
	// cmplwi cr6,r22,0
	cr6.compare<uint32_t>(ctx.r22.u32, 0, xer);
	// beq cr6,0x83059134
	if (cr6.eq) goto loc_83059134;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x825952b8
	ctx.lr = 0x83059134;
	sub_825952B8(ctx, base);
loc_83059134:
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(ctx.r24.u32, 0, xer);
	// beq cr6,0x830591bc
	if (cr6.eq) goto loc_830591BC;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// bl 0x825952b8
	ctx.lr = 0x8305914C;
	sub_825952B8(ctx, base);
	// addi r1,r1,480
	ctx.r1.s64 = ctx.r1.s64 + 480;
	// b 0x831cdb18
	__restgprlr_20(ctx, base);
	return;
loc_83059154:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x83059160;
	sub_831CC188(ctx, base);
loc_83059160:
	// stw r3,112(r20)
	PPC_STORE_U32(ctx.r20.u32 + 112, ctx.r3.u32);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// bl 0x82d2aab0
	ctx.lr = 0x8305916C;
	sub_82D2AAB0(ctx, base);
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// lwz r4,112(r20)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r20.u32 + 112);
	// bl 0x83103100
	ctx.lr = 0x83059178;
	sub_83103100(ctx, base);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x8387e8e0
	ctx.lr = 0x83059180;
	sub_8387E8E0(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x8387e8e0
	ctx.lr = 0x83059188;
	sub_8387E8E0(ctx, base);
	// li r31,2
	ctx.r31.s64 = 2;
	// cmplwi cr6,r22,0
	cr6.compare<uint32_t>(ctx.r22.u32, 0, xer);
	// beq cr6,0x830591a4
	if (cr6.eq) goto loc_830591A4;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r31.u32);
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x825952b8
	ctx.lr = 0x830591A4;
	sub_825952B8(ctx, base);
loc_830591A4:
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(ctx.r24.u32, 0, xer);
	// beq cr6,0x830591bc
	if (cr6.eq) goto loc_830591BC;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// bl 0x825952b8
	ctx.lr = 0x830591BC;
	sub_825952B8(ctx, base);
loc_830591BC:
	// addi r1,r1,480
	ctx.r1.s64 = ctx.r1.s64 + 480;
	// b 0x831cdb18
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830591C4"))) PPC_WEAK_FUNC(sub_830591C4);
PPC_FUNC_IMPL(__imp__sub_830591C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830591C8"))) PPC_WEAK_FUNC(sub_830591C8);
PPC_FUNC_IMPL(__imp__sub_830591C8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad0
	ctx.lr = 0x830591D0;
	__savegprlr_22(ctx, base);
	// stwu r1,-416(r1)
	ea = -416 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,116(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x830594c4
	if (!cr6.eq) goto loc_830594C4;
	// bl 0x82d86078
	ctx.lr = 0x830591E8;
	sub_82D86078(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830594c4
	if (cr6.eq) goto loc_830594C4;
	// bl 0x831156e8
	ctx.lr = 0x830591F8;
	sub_831156E8(ctx, base);
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// li r25,0
	ctx.r25.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8305921c
	if (cr6.eq) goto loc_8305921C;
	// bl 0x83115808
	ctx.lr = 0x8305920C;
	sub_83115808(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x83059220
	if (!cr6.eq) goto loc_83059220;
loc_8305921C:
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
loc_83059220:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830594c4
	if (cr6.eq) goto loc_830594C4;
	// bl 0x831156e8
	ctx.lr = 0x83059230;
	sub_831156E8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// lwz r23,48(r11)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// bl 0x83058468
	ctx.lr = 0x83059240;
	sub_83058468(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x830594c4
	if (!cr6.eq) goto loc_830594C4;
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// bl 0x82da24b0
	ctx.lr = 0x83059254;
	sub_82DA24B0(ctx, base);
	// bl 0x825832d8
	ctx.lr = 0x83059258;
	sub_825832D8(ctx, base);
	// cmpwi cr6,r3,8
	cr6.compare<int32_t>(ctx.r3.s32, 8, xer);
	// beq cr6,0x830594c4
	if (cr6.eq) goto loc_830594C4;
	// cmpwi cr6,r3,7
	cr6.compare<int32_t>(ctx.r3.s32, 7, xer);
	// beq cr6,0x830594c4
	if (cr6.eq) goto loc_830594C4;
	// cmpwi cr6,r3,5
	cr6.compare<int32_t>(ctx.r3.s32, 5, xer);
	// beq cr6,0x830594c4
	if (cr6.eq) goto loc_830594C4;
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// mr r30,r25
	ctx.r30.u64 = ctx.r25.u64;
	// stw r25,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r25.u32);
	// stw r25,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r25.u32);
	// stw r25,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r25.u32);
	// bl 0x82da2858
	ctx.lr = 0x83059288;
	sub_82DA2858(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r25
	ctx.r31.u64 = ctx.r25.u64;
	// bl 0x82da8160
	ctx.lr = 0x83059294;
	sub_82DA8160(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83059310
	if (cr6.eq) goto loc_83059310;
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r30,r11,65535
	ctx.r30.u64 = ctx.r11.u64 | 65535;
loc_830592A4:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82da8220
	ctx.lr = 0x830592B0;
	sub_82DA8220(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x830592d4
	if (!cr6.eq) goto loc_830592D4;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82da81e0
	ctx.lr = 0x830592C8;
	sub_82DA81E0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830592f8
	if (cr6.eq) goto loc_830592F8;
loc_830592D4:
	// sth r30,296(r1)
	PPC_STORE_U16(ctx.r1.u32 + 296, ctx.r30.u16);
	// addi r5,r1,256
	ctx.r5.s64 = ctx.r1.s64 + 256;
	// stw r25,300(r1)
	PPC_STORE_U32(ctx.r1.u32 + 300, ctx.r25.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82da8178
	ctx.lr = 0x830592EC;
	sub_82DA8178(ctx, base);
	// addi r4,r1,296
	ctx.r4.s64 = ctx.r1.s64 + 296;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83546fd8
	ctx.lr = 0x830592F8;
	sub_83546FD8(ctx, base);
loc_830592F8:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// bl 0x82da8160
	ctx.lr = 0x83059304;
	sub_82DA8160(ctx, base);
	// cmplw cr6,r31,r3
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r3.u32, xer);
	// blt cr6,0x830592a4
	if (cr6.lt) goto loc_830592A4;
	// lwz r30,80(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_83059310:
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// subf r10,r30,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r30.s64;
	// srawi. r29,r10,3
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7) != 0);
	ctx.r29.s64 = ctx.r10.s32 >> 3;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// beq 0x830594bc
	if (cr0.eq) goto loc_830594BC;
	// li r24,15
	ctx.r24.s64 = 15;
	// stw r25,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r25.u32);
	// stb r25,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r25.u8);
	// lis r4,274
	ctx.r4.s64 = 17956864;
	// stw r24,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r24.u32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stw r24,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r24.u32);
	// ori r4,r4,12
	ctx.r4.u64 = ctx.r4.u64 | 12;
	// stw r25,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r25.u32);
	// stb r25,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r25.u8);
	// bl 0x82d04220
	ctx.lr = 0x8305934C;
	sub_82D04220(ctx, base);
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r27,r11,-24268
	ctx.r27.s64 = ctx.r11.s64 + -24268;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// addi r5,r27,-12
	ctx.r5.s64 = ctx.r27.s64 + -12;
	// bl 0x82ab6970
	ctx.lr = 0x83059364;
	sub_82AB6970(ctx, base);
	// li r26,-1
	ctx.r26.s64 = -1;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8259cb28
	ctx.lr = 0x8305937C;
	sub_8259CB28(ctx, base);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x8387e8e0
	ctx.lr = 0x83059384;
	sub_8387E8E0(ctx, base);
	// mr r31,r25
	ctx.r31.u64 = ctx.r25.u64;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x83059404
	if (cr6.eq) goto loc_83059404;
loc_83059390:
	// cmplwi cr6,r31,3
	cr6.compare<uint32_t>(ctx.r31.u32, 3, xer);
	// bge cr6,0x83059404
	if (!cr6.lt) goto loc_83059404;
	// cmplw cr6,r29,r31
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r31.u32, xer);
	// ble cr6,0x830594cc
	if (!cr6.gt) goto loc_830594CC;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// ld r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r30.u32 + 0);
	// bl 0x8311bf98
	ctx.lr = 0x830593AC;
	sub_8311BF98(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r5,r27,-8
	ctx.r5.s64 = ctx.r27.s64 + -8;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82ab6970
	ctx.lr = 0x830593C0;
	sub_82AB6970(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// addi r5,r28,56
	ctx.r5.s64 = ctx.r28.s64 + 56;
	// bl 0x8292a568
	ctx.lr = 0x830593D0;
	sub_8292A568(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8259cb28
	ctx.lr = 0x830593E4;
	sub_8259CB28(ctx, base);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x8387e8e0
	ctx.lr = 0x830593EC;
	sub_8387E8E0(ctx, base);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x8387e8e0
	ctx.lr = 0x830593F4;
	sub_8387E8E0(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// cmplw cr6,r31,r29
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, xer);
	// blt cr6,0x83059390
	if (cr6.lt) goto loc_83059390;
loc_83059404:
	// cmplwi cr6,r29,3
	cr6.compare<uint32_t>(ctx.r29.u32, 3, xer);
	// ble cr6,0x83059478
	if (!cr6.gt) goto loc_83059478;
	// stw r24,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r24.u32);
	// lis r4,561
	ctx.r4.s64 = 36765696;
	// stw r25,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r25.u32);
	// addi r5,r29,-3
	ctx.r5.s64 = ctx.r29.s64 + -3;
	// stb r25,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, ctx.r25.u8);
	// ori r4,r4,21
	ctx.r4.u64 = ctx.r4.u64 | 21;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82d042a8
	ctx.lr = 0x8305942C;
	sub_82D042A8(ctx, base);
	// addi r5,r27,-4
	ctx.r5.s64 = ctx.r27.s64 + -4;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82ab6970
	ctx.lr = 0x8305943C;
	sub_82AB6970(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// bl 0x82ac8718
	ctx.lr = 0x8305944C;
	sub_82AC8718(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8259cb28
	ctx.lr = 0x83059460;
	sub_8259CB28(ctx, base);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x8387e8e0
	ctx.lr = 0x83059468;
	sub_8387E8E0(ctx, base);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x8387e8e0
	ctx.lr = 0x83059470;
	sub_8387E8E0(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x8387e8e0
	ctx.lr = 0x83059478;
	sub_8387E8E0(ctx, base);
loc_83059478:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// li r6,3
	ctx.r6.s64 = 3;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2fa90
	ctx.lr = 0x8305948C;
	sub_82D2FA90(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830594ac
	if (cr6.eq) goto loc_830594AC;
	// stw r3,116(r22)
	PPC_STORE_U32(ctx.r22.u32 + 116, ctx.r3.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x82d2aab0
	ctx.lr = 0x830594A0;
	sub_82D2AAB0(ctx, base);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// lwz r4,116(r22)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r22.u32 + 116);
	// bl 0x83103100
	ctx.lr = 0x830594AC;
	sub_83103100(ctx, base);
loc_830594AC:
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8387e8e0
	ctx.lr = 0x830594B4;
	sub_8387E8E0(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8387e8e0
	ctx.lr = 0x830594BC;
	sub_8387E8E0(ctx, base);
loc_830594BC:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82f73d60
	ctx.lr = 0x830594C4;
	sub_82F73D60(ctx, base);
loc_830594C4:
	// addi r1,r1,416
	ctx.r1.s64 = ctx.r1.s64 + 416;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
loc_830594CC:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x830594D8;
	sub_831CC188(ctx, base);
}

__attribute__((alias("__imp__sub_830594D8"))) PPC_WEAK_FUNC(sub_830594D8);
PPC_FUNC_IMPL(__imp__sub_830594D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x830594E0;
	__savegprlr_27(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// bl 0x82d86078
	ctx.lr = 0x830594F0;
	sub_82D86078(ctx, base);
	// lis r11,-31757
	ctx.r11.s64 = -2081226752;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r28,21
	ctx.r28.s64 = 21;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// lwz r29,8856(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8856);
	// beq cr6,0x83059510
	if (cr6.eq) goto loc_83059510;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// bne cr6,0x83059514
	if (!cr6.eq) goto loc_83059514;
loc_83059510:
	// stw r28,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r28.u32);
loc_83059514:
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// cmplwi cr6,r11,20
	cr6.compare<uint32_t>(ctx.r11.u32, 20, xer);
	// bgt cr6,0x830599a8
	if (cr6.gt) goto loc_830599A8;
	// lis r12,-31994
	ctx.r12.s64 = -2096758784;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-27336
	ctx.r12.s64 = ctx.r12.s64 + -27336;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_8305958C;
	case 1:
		goto loc_830595B4;
	case 2:
		goto loc_830595E4;
	case 3:
		goto loc_8305965C;
	case 4:
		goto loc_83059678;
	case 5:
		goto loc_8305969C;
	case 6:
		goto loc_830596E0;
	case 7:
		goto loc_83059758;
	case 8:
		goto loc_8305979C;
	case 9:
		goto loc_830597B8;
	case 10:
		goto loc_830597D8;
	case 11:
		goto loc_830597F4;
	case 12:
		goto loc_83059814;
	case 13:
		goto loc_83059830;
	case 14:
		goto loc_83059850;
	case 15:
		goto loc_8305986C;
	case 16:
		goto loc_83059890;
	case 17:
		goto loc_830598AC;
	case 18:
		goto loc_830598CC;
	case 19:
		goto loc_830598F8;
	case 20:
		goto loc_83059930;
	default:
		return;
	}
	// lwz r24,-27252(r5)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r5.u32 + -27252);
	// lwz r24,-27212(r5)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r5.u32 + -27212);
	// lwz r24,-27164(r5)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r5.u32 + -27164);
	// lwz r24,-27044(r5)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r5.u32 + -27044);
	// lwz r24,-27016(r5)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r5.u32 + -27016);
	// lwz r24,-26980(r5)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r5.u32 + -26980);
	// lwz r24,-26912(r5)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r5.u32 + -26912);
	// lwz r24,-26792(r5)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r5.u32 + -26792);
	// lwz r24,-26724(r5)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r5.u32 + -26724);
	// lwz r24,-26696(r5)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r5.u32 + -26696);
	// lwz r24,-26664(r5)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r5.u32 + -26664);
	// lwz r24,-26636(r5)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r5.u32 + -26636);
	// lwz r24,-26604(r5)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r5.u32 + -26604);
	// lwz r24,-26576(r5)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r5.u32 + -26576);
	// lwz r24,-26544(r5)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r5.u32 + -26544);
	// lwz r24,-26516(r5)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r5.u32 + -26516);
	// lwz r24,-26480(r5)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r5.u32 + -26480);
	// lwz r24,-26452(r5)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r5.u32 + -26452);
	// lwz r24,-26420(r5)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r5.u32 + -26420);
	// lwz r24,-26376(r5)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r5.u32 + -26376);
	// lwz r24,-26320(r5)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r5.u32 + -26320);
loc_8305958C:
	// lwz r3,28(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// bl 0x82da24b0
	ctx.lr = 0x83059594;
	sub_82DA24B0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82c38170
	ctx.lr = 0x8305959C;
	sub_82C38170(ctx, base);
	// bl 0x82dcea28
	ctx.lr = 0x830595A0;
	sub_82DCEA28(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_830595B4:
	// bl 0x82d96060
	ctx.lr = 0x830595B8;
	sub_82D96060(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83059664
	if (cr6.eq) goto loc_83059664;
	// bl 0x83a7d958
	ctx.lr = 0x830595C8;
	sub_83A7D958(ctx, base);
	// bl 0x83524138
	ctx.lr = 0x830595CC;
	sub_83524138(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// std r3,96(r31)
	PPC_STORE_U64(ctx.r31.u32 + 96, ctx.r3.u64);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_830595E4:
	// bl 0x83a7d958
	ctx.lr = 0x830595E8;
	sub_83A7D958(ctx, base);
	// bl 0x83524138
	ctx.lr = 0x830595EC;
	sub_83524138(ctx, base);
	// ld r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 96);
	// addi r11,r11,30000
	ctx.r11.s64 = ctx.r11.s64 + 30000;
	// cmpld cr6,r11,r3
	cr6.compare<uint64_t>(ctx.r11.u64, ctx.r3.u64, xer);
	// bge cr6,0x8305960c
	if (!cr6.lt) goto loc_8305960C;
loc_830595FC:
	// stw r28,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r28.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_8305960C:
	// lwz r3,28(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// bl 0x82da24b0
	ctx.lr = 0x83059614;
	sub_82DA24B0(ctx, base);
	// bl 0x82da1d00
	ctx.lr = 0x83059618;
	sub_82DA1D00(ctx, base);
	// lwz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82da2518
	ctx.lr = 0x83059628;
	sub_82DA2518(ctx, base);
	// bl 0x82df15e8
	ctx.lr = 0x8305962C;
	sub_82DF15E8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpld cr6,r28,r3
	cr6.compare<uint64_t>(ctx.r28.u64, ctx.r3.u64, xer);
	// beq cr6,0x830599e8
	if (cr6.eq) goto loc_830599E8;
	// lwz r3,28(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// bl 0x82da24b0
	ctx.lr = 0x83059640;
	sub_82DA24B0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82da1d08
	ctx.lr = 0x83059648;
	sub_82DA1D08(ctx, base);
	// li r11,3
	ctx.r11.s64 = 3;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_8305965C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830581c0
	ctx.lr = 0x83059664;
	sub_830581C0(ctx, base);
loc_83059664:
	// li r11,6
	ctx.r11.s64 = 6;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_83059678:
	// bl 0x82e6f5c8
	ctx.lr = 0x8305967C;
	sub_82E6F5C8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830595fc
	if (cr6.eq) goto loc_830595FC;
	// bl 0x82e6f5c8
	ctx.lr = 0x83059688;
	sub_82E6F5C8(ctx, base);
	// li r11,6
	ctx.r11.s64 = 6;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_8305969C:
	// lwz r3,124(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830595fc
	if (cr6.eq) goto loc_830595FC;
	// bl 0x82e6c620
	ctx.lr = 0x830596AC;
	sub_82E6C620(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830599e8
	if (cr6.eq) goto loc_830599E8;
	// lwz r11,124(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r10,76(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// subfic r9,r10,0
	xer.ca = ctx.r10.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r10.s64;
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r11,r8,28
	ctx.r11.u64 = ctx.r8.u32 & 0xF;
	// addi r7,r11,6
	ctx.r7.s64 = ctx.r11.s64 + 6;
	// stw r7,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r7.u32);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_830596E0:
	// lwz r3,28(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// bl 0x82da24b0
	ctx.lr = 0x830596E8;
	sub_82DA24B0(ctx, base);
	// bl 0x825832d8
	ctx.lr = 0x830596EC;
	sub_825832D8(ctx, base);
	// cmpwi cr6,r3,8
	cr6.compare<int32_t>(ctx.r3.s32, 8, xer);
	// beq cr6,0x83059744
	if (cr6.eq) goto loc_83059744;
	// cmpwi cr6,r3,7
	cr6.compare<int32_t>(ctx.r3.s32, 7, xer);
	// beq cr6,0x83059744
	if (cr6.eq) goto loc_83059744;
	// cmpwi cr6,r3,5
	cr6.compare<int32_t>(ctx.r3.s32, 5, xer);
	// beq cr6,0x83059744
	if (cr6.eq) goto loc_83059744;
	// cmpwi cr6,r3,9
	cr6.compare<int32_t>(ctx.r3.s32, 9, xer);
	// beq cr6,0x83059744
	if (cr6.eq) goto loc_83059744;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82e61bb8
	ctx.lr = 0x83059714;
	sub_82E61BB8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82e580e0
	ctx.lr = 0x8305971C;
	sub_82E580E0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// subfic r10,r11,0
	xer.ca = ctx.r11.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r11.s64;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// rlwinm r11,r9,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFE;
	// rlwinm r11,r11,0,30,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF3;
	// addi r8,r11,21
	ctx.r8.s64 = ctx.r11.s64 + 21;
	// stw r8,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r8.u32);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_83059744:
	// li r11,8
	ctx.r11.s64 = 8;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_83059758:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82e580e8
	ctx.lr = 0x83059760;
	sub_82E580E8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830599e8
	if (cr6.eq) goto loc_830599E8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82e57bd8
	ctx.lr = 0x83059774;
	sub_82E57BD8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// subfic r10,r11,0
	xer.ca = ctx.r11.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r11.s64;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r11,r9,28
	ctx.r11.u64 = ctx.r9.u32 & 0xF;
	// rlwinm r11,r11,0,31,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// addi r8,r11,8
	ctx.r8.s64 = ctx.r11.s64 + 8;
	// stw r8,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r8.u32);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_8305979C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83058668
	ctx.lr = 0x830597A4;
	sub_83058668(ctx, base);
	// li r11,9
	ctx.r11.s64 = 9;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_830597B8:
	// lwz r11,104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x830599e8
	if (!cr6.eq) goto loc_830599E8;
	// li r11,10
	ctx.r11.s64 = 10;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_830597D8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83058968
	ctx.lr = 0x830597E0;
	sub_83058968(ctx, base);
	// li r11,11
	ctx.r11.s64 = 11;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_830597F4:
	// lwz r11,108(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x830599e8
	if (!cr6.eq) goto loc_830599E8;
	// li r11,12
	ctx.r11.s64 = 12;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_83059814:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83058d10
	ctx.lr = 0x8305981C;
	sub_83058D10(ctx, base);
	// li r11,13
	ctx.r11.s64 = 13;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_83059830:
	// lwz r11,112(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x830599e8
	if (!cr6.eq) goto loc_830599E8;
	// li r11,14
	ctx.r11.s64 = 14;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_83059850:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830591c8
	ctx.lr = 0x83059858;
	sub_830591C8(ctx, base);
	// li r11,15
	ctx.r11.s64 = 15;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_8305986C:
	// lwz r11,116(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x830599e8
	if (!cr6.eq) goto loc_830599E8;
	// li r11,16
	ctx.r11.s64 = 16;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82d96540
	ctx.lr = 0x83059884;
	sub_82D96540(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_83059890:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83058550
	ctx.lr = 0x83059898;
	sub_83058550(ctx, base);
	// li r11,17
	ctx.r11.s64 = 17;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_830598AC:
	// lwz r11,120(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x830599e8
	if (!cr6.eq) goto loc_830599E8;
	// li r11,18
	ctx.r11.s64 = 18;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_830598CC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83058468
	ctx.lr = 0x830598D4;
	sub_83058468(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xori r11,r9,1
	ctx.r11.u64 = ctx.r9.u64 ^ 1;
	// addi r8,r11,19
	ctx.r8.s64 = ctx.r11.s64 + 19;
	// stw r8,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r8.u32);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_830598F8:
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r11,r11,-24384
	ctx.r11.s64 = ctx.r11.s64 + -24384;
	// addi r4,r11,-32
	ctx.r4.s64 = ctx.r11.s64 + -32;
	// bl 0x837b0c10
	ctx.lr = 0x8305990C;
	sub_837B0C10(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x83059918;
	sub_82E88020(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8387e8e0
	ctx.lr = 0x83059920;
	sub_8387E8E0(ctx, base);
	// li r27,1
	ctx.r27.s64 = 1;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_83059930:
	// bl 0x82d95f98
	ctx.lr = 0x83059934;
	sub_82D95F98(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// addi r11,r11,-24384
	ctx.r11.s64 = ctx.r11.s64 + -24384;
	// beq cr6,0x83059978
	if (cr6.eq) goto loc_83059978;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// addi r4,r11,-24
	ctx.r4.s64 = ctx.r11.s64 + -24;
	// bl 0x837b0c10
	ctx.lr = 0x83059954;
	sub_837B0C10(ctx, base);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x83059960;
	sub_82E88020(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x8387e8e0
	ctx.lr = 0x83059968;
	sub_8387E8E0(ctx, base);
	// li r27,1
	ctx.r27.s64 = 1;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_83059978:
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// addi r4,r11,-8
	ctx.r4.s64 = ctx.r11.s64 + -8;
	// bl 0x837b0c10
	ctx.lr = 0x83059984;
	sub_837B0C10(ctx, base);
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x83059990;
	sub_82E88020(ctx, base);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x8387e8e0
	ctx.lr = 0x83059998;
	sub_8387E8E0(ctx, base);
	// li r27,1
	ctx.r27.s64 = 1;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_830599A8:
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-24384
	ctx.r4.s64 = ctx.r11.s64 + -24384;
	// bl 0x837b0c10
	ctx.lr = 0x830599B8;
	sub_837B0C10(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x830599C4;
	sub_82E88020(ctx, base);
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x830599e4
	if (cr6.lt) goto loc_830599E4;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x830599E4;
	sub_825952B8(ctx, base);
loc_830599E4:
	// li r27,1
	ctx.r27.s64 = 1;
loc_830599E8:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830599F4"))) PPC_WEAK_FUNC(sub_830599F4);
PPC_FUNC_IMPL(__imp__sub_830599F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830599F8"))) PPC_WEAK_FUNC(sub_830599F8);
PPC_FUNC_IMPL(__imp__sub_830599F8) {
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
	ctx.lr = 0x83059A10;
	sub_82F42220(ctx, base);
	// lis r10,-32225
	ctx.r10.s64 = -2111897600;
	// lis r9,-32239
	ctx.r9.s64 = -2112815104;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r8,r10,-23584
	ctx.r8.s64 = ctx.r10.s64 + -23584;
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
	// std r11,96(r31)
	PPC_STORE_U64(ctx.r31.u32 + 96, ctx.r11.u64);
	// stw r11,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r11.u32);
	// stw r11,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r11.u32);
	// stw r11,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r11.u32);
	// stb r11,116(r31)
	PPC_STORE_U8(ctx.r31.u32 + 116, ctx.r11.u8);
	// stb r11,117(r31)
	PPC_STORE_U8(ctx.r31.u32 + 117, ctx.r11.u8);
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

__attribute__((alias("__imp__sub_83059A60"))) PPC_WEAK_FUNC(sub_83059A60);
PPC_FUNC_IMPL(__imp__sub_83059A60) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,108(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 108);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83059a8c
	if (cr6.eq) goto loc_83059A8C;
	// lis r11,264
	ctx.r11.s64 = 17301504;
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// ori r9,r11,9
	ctx.r9.u64 = ctx.r11.u64 | 9;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bne cr6,0x83059abc
	if (!cr6.eq) goto loc_83059ABC;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,108(r3)
	PPC_STORE_U32(ctx.r3.u32 + 108, ctx.r11.u32);
	// b 0x83059abc
	goto loc_83059ABC;
loc_83059A8C:
	// lwz r11,112(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 112);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83059abc
	if (cr6.eq) goto loc_83059ABC;
	// lis r11,264
	ctx.r11.s64 = 17301504;
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// ori r9,r11,9
	ctx.r9.u64 = ctx.r11.u64 | 9;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bne cr6,0x83059abc
	if (!cr6.eq) goto loc_83059ABC;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,112(r3)
	PPC_STORE_U32(ctx.r3.u32 + 112, ctx.r11.u32);
	// stb r10,117(r3)
	PPC_STORE_U8(ctx.r3.u32 + 117, ctx.r10.u8);
loc_83059ABC:
	// b 0x83824d80
	sub_83824D80(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83059AC0"))) PPC_WEAK_FUNC(sub_83059AC0);
PPC_FUNC_IMPL(__imp__sub_83059AC0) {
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
	// li r11,31
	ctx.r11.s64 = 31;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,120
	ctx.r4.s64 = 120;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x83059AEC;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83059b10
	if (cr6.eq) goto loc_83059B10;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x830599f8
	ctx.lr = 0x83059AFC;
	sub_830599F8(ctx, base);
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
loc_83059B10:
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

__attribute__((alias("__imp__sub_83059B28"))) PPC_WEAK_FUNC(sub_83059B28);
PPC_FUNC_IMPL(__imp__sub_83059B28) {
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
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-23584
	ctx.r9.s64 = ctx.r11.s64 + -23584;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r8,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r8.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82d482c0
	ctx.lr = 0x83059B64;
	sub_82D482C0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f42278
	ctx.lr = 0x83059B6C;
	sub_82F42278(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x83059b84
	if (cr6.eq) goto loc_83059B84;
	// bl 0x82416268
	ctx.lr = 0x83059B80;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_83059B84:
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

__attribute__((alias("__imp__sub_83059B9C"))) PPC_WEAK_FUNC(sub_83059B9C);
PPC_FUNC_IMPL(__imp__sub_83059B9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83059BA0"))) PPC_WEAK_FUNC(sub_83059BA0);
PPC_FUNC_IMPL(__imp__sub_83059BA0) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82d86078
	ctx.lr = 0x83059BBC;
	sub_82D86078(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83059c0c
	if (!cr6.eq) goto loc_83059C0C;
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r11,r11,-23692
	ctx.r11.s64 = ctx.r11.s64 + -23692;
	// addi r4,r11,-24
	ctx.r4.s64 = ctx.r11.s64 + -24;
	// bl 0x837b0c10
	ctx.lr = 0x83059BDC;
	sub_837B0C10(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x83059BE8;
	sub_82E88020(ctx, base);
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x83059cb4
	if (cr6.lt) goto loc_83059CB4;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x83059C08;
	sub_825952B8(ctx, base);
	// b 0x83059cb4
	goto loc_83059CB4;
loc_83059C0C:
	// lwz r3,28(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// bl 0x82da24b0
	ctx.lr = 0x83059C14;
	sub_82DA24B0(ctx, base);
	// li r4,6
	ctx.r4.s64 = 6;
	// bl 0x82583300
	ctx.lr = 0x83059C1C;
	sub_82583300(ctx, base);
	// bl 0x82d95f98
	ctx.lr = 0x83059C20;
	sub_82D95F98(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83059c38
	if (cr6.eq) goto loc_83059C38;
	// bl 0x830ff290
	ctx.lr = 0x83059C30;
	sub_830FF290(ctx, base);
	// li r11,56
	ctx.r11.s64 = 56;
	// b 0x83059c40
	goto loc_83059C40;
loc_83059C38:
	// bl 0x830ff290
	ctx.lr = 0x83059C3C;
	sub_830FF290(ctx, base);
	// li r11,50
	ctx.r11.s64 = 50;
loc_83059C40:
	// stw r11,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
	// lwz r3,28(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// bl 0x82da24b0
	ctx.lr = 0x83059C4C;
	sub_82DA24B0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82da1d30
	ctx.lr = 0x83059C54;
	sub_82DA1D30(ctx, base);
	// bl 0x82d96138
	ctx.lr = 0x83059C58;
	sub_82D96138(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83059c74
	if (cr6.eq) goto loc_83059C74;
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// addi r11,r11,-23692
	ctx.r11.s64 = ctx.r11.s64 + -23692;
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// b 0x83059c98
	goto loc_83059C98;
loc_83059C74:
	// bl 0x83572958
	ctx.lr = 0x83059C78;
	sub_83572958(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// beq cr6,0x83059c94
	if (cr6.eq) goto loc_83059C94;
	// addi r11,r11,-23692
	ctx.r11.s64 = ctx.r11.s64 + -23692;
	// addi r4,r11,-8
	ctx.r4.s64 = ctx.r11.s64 + -8;
	// b 0x83059c98
	goto loc_83059C98;
loc_83059C94:
	// addi r4,r11,-23692
	ctx.r4.s64 = ctx.r11.s64 + -23692;
loc_83059C98:
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x837b0c10
	ctx.lr = 0x83059CA0;
	sub_837B0C10(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x83059CAC;
	sub_82E88020(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8387e8e0
	ctx.lr = 0x83059CB4;
	sub_8387E8E0(ctx, base);
loc_83059CB4:
	// li r3,1
	ctx.r3.s64 = 1;
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

__attribute__((alias("__imp__sub_83059CD0"))) PPC_WEAK_FUNC(sub_83059CD0);
PPC_FUNC_IMPL(__imp__sub_83059CD0) {
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
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-23296
	ctx.r9.s64 = ctx.r11.s64 + -23296;
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
	ctx.lr = 0x83059D08;
	sub_82F42278(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x83059d20
	if (cr6.eq) goto loc_83059D20;
	// bl 0x82416268
	ctx.lr = 0x83059D1C;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_83059D20:
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

__attribute__((alias("__imp__sub_83059D38"))) PPC_WEAK_FUNC(sub_83059D38);
PPC_FUNC_IMPL(__imp__sub_83059D38) {
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
	ctx.lr = 0x83059D68;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83059d9c
	if (cr6.eq) goto loc_83059D9C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82f42220
	ctx.lr = 0x83059D7C;
	sub_82F42220(ctx, base);
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-23296
	ctx.r9.s64 = ctx.r11.s64 + -23296;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r8,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r8.u32);
	// b 0x83059da0
	goto loc_83059DA0;
loc_83059D9C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83059DA0:
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

__attribute__((alias("__imp__sub_83059DB8"))) PPC_WEAK_FUNC(sub_83059DB8);
PPC_FUNC_IMPL(__imp__sub_83059DB8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83059DC0;
	__savegprlr_29(ctx, base);
	// stwu r1,-992(r1)
	ea = -992 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x82d86078
	ctx.lr = 0x83059DCC;
	sub_82D86078(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83059e24
	if (!cr6.eq) goto loc_83059E24;
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r11,r11,-23392
	ctx.r11.s64 = ctx.r11.s64 + -23392;
	// addi r4,r11,-40
	ctx.r4.s64 = ctx.r11.s64 + -40;
	// bl 0x837b0c10
	ctx.lr = 0x83059DEC;
	sub_837B0C10(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82e88020
	ctx.lr = 0x83059DF8;
	sub_82E88020(ctx, base);
	// lwz r10,148(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x8305a07c
	if (cr6.lt) goto loc_8305A07C;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x83059E18;
	sub_825952B8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,992
	ctx.r1.s64 = ctx.r1.s64 + 992;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83059E24:
	// lis r11,-31757
	ctx.r11.s64 = -2081226752;
	// lwz r30,8856(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8856);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// bne cr6,0x83059e68
	if (!cr6.eq) goto loc_83059E68;
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r11,r11,-23392
	ctx.r11.s64 = ctx.r11.s64 + -23392;
	// addi r4,r11,-32
	ctx.r4.s64 = ctx.r11.s64 + -32;
	// bl 0x837b0c10
	ctx.lr = 0x83059E48;
	sub_837B0C10(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82e88020
	ctx.lr = 0x83059E54;
	sub_82E88020(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8387e8e0
	ctx.lr = 0x83059E5C;
	sub_8387E8E0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,992
	ctx.r1.s64 = ctx.r1.s64 + 992;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83059E68:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82e580e8
	ctx.lr = 0x83059E70;
	sub_82E580E8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83059eb0
	if (!cr6.eq) goto loc_83059EB0;
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r11,r11,-23392
	ctx.r11.s64 = ctx.r11.s64 + -23392;
	// addi r4,r11,-24
	ctx.r4.s64 = ctx.r11.s64 + -24;
	// bl 0x837b0c10
	ctx.lr = 0x83059E90;
	sub_837B0C10(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82e88020
	ctx.lr = 0x83059E9C;
	sub_82E88020(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8387e8e0
	ctx.lr = 0x83059EA4;
	sub_8387E8E0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,992
	ctx.r1.s64 = ctx.r1.s64 + 992;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83059EB0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82e57bd8
	ctx.lr = 0x83059EB8;
	sub_82E57BD8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83059ef8
	if (cr6.eq) goto loc_83059EF8;
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r11,r11,-23392
	ctx.r11.s64 = ctx.r11.s64 + -23392;
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// bl 0x837b0c10
	ctx.lr = 0x83059ED8;
	sub_837B0C10(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82e88020
	ctx.lr = 0x83059EE4;
	sub_82E88020(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8387e8e0
	ctx.lr = 0x83059EEC;
	sub_8387E8E0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,992
	ctx.r1.s64 = ctx.r1.s64 + 992;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83059EF8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82e61bb8
	ctx.lr = 0x83059F00;
	sub_82E61BB8(ctx, base);
	// bl 0x82d95f98
	ctx.lr = 0x83059F04;
	sub_82D95F98(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83059f1c
	if (cr6.eq) goto loc_83059F1C;
	// bl 0x830ff290
	ctx.lr = 0x83059F14;
	sub_830FF290(ctx, base);
	// li r11,56
	ctx.r11.s64 = 56;
	// b 0x83059f24
	goto loc_83059F24;
loc_83059F1C:
	// bl 0x830ff290
	ctx.lr = 0x83059F20;
	sub_830FF290(ctx, base);
	// li r11,50
	ctx.r11.s64 = 50;
loc_83059F24:
	// stw r11,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82e582a0
	ctx.lr = 0x83059F30;
	sub_82E582A0(ctx, base);
	// addi r3,r1,560
	ctx.r3.s64 = ctx.r1.s64 + 560;
	// bl 0x82b61088
	ctx.lr = 0x83059F38;
	sub_82B61088(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82b61088
	ctx.lr = 0x83059F40;
	sub_82B61088(ctx, base);
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// bl 0x82da29f8
	ctx.lr = 0x83059F48;
	sub_82DA29F8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r5,r1,560
	ctx.r5.s64 = ctx.r1.s64 + 560;
	// bl 0x82dee440
	ctx.lr = 0x83059F54;
	sub_82DEE440(ctx, base);
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// bl 0x82da29f8
	ctx.lr = 0x83059F5C;
	sub_82DA29F8(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// bl 0x82dee440
	ctx.lr = 0x83059F68;
	sub_82DEE440(ctx, base);
	// lwz r11,592(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 592);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8305a044
	if (cr6.eq) goto loc_8305A044;
	// lwz r11,192(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8305a044
	if (cr6.eq) goto loc_8305A044;
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// bl 0x82da24b0
	ctx.lr = 0x83059F88;
	sub_82DA24B0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82c38170
	ctx.lr = 0x83059F90;
	sub_82C38170(ctx, base);
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// bl 0x82dfa580
	ctx.lr = 0x83059F98;
	sub_82DFA580(ctx, base);
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// bl 0x82da24b0
	ctx.lr = 0x83059FA0;
	sub_82DA24B0(ctx, base);
	// bl 0x82da1d58
	ctx.lr = 0x83059FA4;
	sub_82DA1D58(ctx, base);
	// bl 0x82da1c70
	ctx.lr = 0x83059FA8;
	sub_82DA1C70(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82e74328
	ctx.lr = 0x83059FB4;
	sub_82E74328(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8305a038
	if (cr6.eq) goto loc_8305A038;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82e74260
	ctx.lr = 0x83059FC8;
	sub_82E74260(ctx, base);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// rotlwi r31,r3,0
	ctx.r31.u64 = __builtin_rotateleft32(ctx.r3.u32, 0);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82da2518
	ctx.lr = 0x83059FD8;
	sub_82DA2518(ctx, base);
	// bl 0x82927030
	ctx.lr = 0x83059FDC;
	sub_82927030(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplw cr6,r3,r31
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, xer);
	// ble cr6,0x8305a038
	if (!cr6.gt) goto loc_8305A038;
	// bl 0x839e4200
	ctx.lr = 0x83059FEC;
	sub_839E4200(ctx, base);
	// subf r4,r31,r30
	ctx.r4.s64 = ctx.r30.s64 - ctx.r31.s64;
	// bl 0x82927038
	ctx.lr = 0x83059FF4;
	sub_82927038(ctx, base);
	// bl 0x839e4200
	ctx.lr = 0x83059FF8;
	sub_839E4200(ctx, base);
	// li r4,60
	ctx.r4.s64 = 60;
	// bl 0x82927028
	ctx.lr = 0x8305A000;
	sub_82927028(ctx, base);
	// bl 0x839e4200
	ctx.lr = 0x8305A004;
	sub_839E4200(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// clrldi r4,r31,32
	ctx.r4.u64 = ctx.r31.u64 & 0xFFFFFFFF;
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8305A018;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// bl 0x839e4200
	ctx.lr = 0x8305A01C;
	sub_839E4200(ctx, base);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// clrldi r4,r30,32
	ctx.r4.u64 = ctx.r30.u64 & 0xFFFFFFFF;
	// lwz r8,32(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 32);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8305A030;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// bl 0x839e4200
	ctx.lr = 0x8305A034;
	sub_839E4200(ctx, base);
	// bl 0x839e4268
	ctx.lr = 0x8305A038;
	sub_839E4268(ctx, base);
loc_8305A038:
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// addi r4,r11,-23392
	ctx.r4.s64 = ctx.r11.s64 + -23392;
	// b 0x8305a050
	goto loc_8305A050;
loc_8305A044:
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// addi r11,r11,-23392
	ctx.r11.s64 = ctx.r11.s64 + -23392;
	// addi r4,r11,-8
	ctx.r4.s64 = ctx.r11.s64 + -8;
loc_8305A050:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x837b0c10
	ctx.lr = 0x8305A058;
	sub_837B0C10(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82e88020
	ctx.lr = 0x8305A064;
	sub_82E88020(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8387e8e0
	ctx.lr = 0x8305A06C;
	sub_8387E8E0(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82b60a58
	ctx.lr = 0x8305A074;
	sub_82B60A58(ctx, base);
	// addi r3,r1,560
	ctx.r3.s64 = ctx.r1.s64 + 560;
	// bl 0x82b60a58
	ctx.lr = 0x8305A07C;
	sub_82B60A58(ctx, base);
loc_8305A07C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,992
	ctx.r1.s64 = ctx.r1.s64 + 992;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8305A088"))) PPC_WEAK_FUNC(sub_8305A088);
PPC_FUNC_IMPL(__imp__sub_8305A088) {
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
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-23048
	ctx.r9.s64 = ctx.r11.s64 + -23048;
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
	ctx.lr = 0x8305A0C0;
	sub_82F42278(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x8305a0d8
	if (cr6.eq) goto loc_8305A0D8;
	// bl 0x82416268
	ctx.lr = 0x8305A0D4;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8305A0D8:
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

__attribute__((alias("__imp__sub_8305A0F0"))) PPC_WEAK_FUNC(sub_8305A0F0);
PPC_FUNC_IMPL(__imp__sub_8305A0F0) {
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
	ctx.lr = 0x8305A120;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8305a154
	if (cr6.eq) goto loc_8305A154;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82f42220
	ctx.lr = 0x8305A134;
	sub_82F42220(ctx, base);
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-23048
	ctx.r9.s64 = ctx.r11.s64 + -23048;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r8,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r8.u32);
	// b 0x8305a158
	goto loc_8305A158;
loc_8305A154:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8305A158:
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

__attribute__((alias("__imp__sub_8305A170"))) PPC_WEAK_FUNC(sub_8305A170);
PPC_FUNC_IMPL(__imp__sub_8305A170) {
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
	// lis r9,-32225
	ctx.r9.s64 = -2111897600;
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stb r11,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r11.u8);
	// li r5,10
	ctx.r5.s64 = 10;
	// addi r4,r9,-23144
	ctx.r4.s64 = ctx.r9.s64 + -23144;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8259cc28
	ctx.lr = 0x8305A1AC;
	sub_8259CC28(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x8305A1B8;
	sub_82E88020(ctx, base);
	// lwz r8,116(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r8,16
	cr6.compare<uint32_t>(ctx.r8.u32, 16, xer);
	// blt cr6,0x8305a1d8
	if (cr6.lt) goto loc_8305A1D8;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x8305A1D8;
	sub_825952B8(ctx, base);
loc_8305A1D8:
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

__attribute__((alias("__imp__sub_8305A1F0"))) PPC_WEAK_FUNC(sub_8305A1F0);
PPC_FUNC_IMPL(__imp__sub_8305A1F0) {
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
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-22784
	ctx.r9.s64 = ctx.r11.s64 + -22784;
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
	ctx.lr = 0x8305A228;
	sub_82F42278(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x8305a240
	if (cr6.eq) goto loc_8305A240;
	// bl 0x82416268
	ctx.lr = 0x8305A23C;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8305A240:
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

__attribute__((alias("__imp__sub_8305A258"))) PPC_WEAK_FUNC(sub_8305A258);
PPC_FUNC_IMPL(__imp__sub_8305A258) {
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
	ctx.lr = 0x8305A288;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8305a2bc
	if (cr6.eq) goto loc_8305A2BC;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82f42220
	ctx.lr = 0x8305A29C;
	sub_82F42220(ctx, base);
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-22784
	ctx.r9.s64 = ctx.r11.s64 + -22784;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r8,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r8.u32);
	// b 0x8305a2c0
	goto loc_8305A2C0;
loc_8305A2BC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8305A2C0:
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

__attribute__((alias("__imp__sub_8305A2D8"))) PPC_WEAK_FUNC(sub_8305A2D8);
PPC_FUNC_IMPL(__imp__sub_8305A2D8) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82d86078
	ctx.lr = 0x8305A2F0;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8305a33c
	if (!cr6.eq) goto loc_8305A33C;
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r11,r11,-22880
	ctx.r11.s64 = ctx.r11.s64 + -22880;
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// bl 0x837b0c10
	ctx.lr = 0x8305A30C;
	sub_837B0C10(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x8305A318;
	sub_82E88020(ctx, base);
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x8305a380
	if (cr6.lt) goto loc_8305A380;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x8305A338;
	sub_825952B8(ctx, base);
	// b 0x8305a380
	goto loc_8305A380;
loc_8305A33C:
	// lwz r3,28(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// bl 0x82da2a60
	ctx.lr = 0x8305A344;
	sub_82DA2A60(ctx, base);
	// bl 0x82db6558
	ctx.lr = 0x8305A348;
	sub_82DB6558(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bne cr6,0x8305a364
	if (!cr6.eq) goto loc_8305A364;
	// addi r11,r11,-22880
	ctx.r11.s64 = ctx.r11.s64 + -22880;
	// addi r4,r11,-8
	ctx.r4.s64 = ctx.r11.s64 + -8;
	// b 0x8305a368
	goto loc_8305A368;
loc_8305A364:
	// addi r4,r11,-22880
	ctx.r4.s64 = ctx.r11.s64 + -22880;
loc_8305A368:
	// bl 0x837b0c10
	ctx.lr = 0x8305A36C;
	sub_837B0C10(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x8305A378;
	sub_82E88020(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8387e8e0
	ctx.lr = 0x8305A380;
	sub_8387E8E0(ctx, base);
loc_8305A380:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8305A398"))) PPC_WEAK_FUNC(sub_8305A398);
PPC_FUNC_IMPL(__imp__sub_8305A398) {
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
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-22488
	ctx.r9.s64 = ctx.r11.s64 + -22488;
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
	ctx.lr = 0x8305A3D0;
	sub_82F42278(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x8305a3e8
	if (cr6.eq) goto loc_8305A3E8;
	// bl 0x82416268
	ctx.lr = 0x8305A3E4;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8305A3E8:
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

__attribute__((alias("__imp__sub_8305A400"))) PPC_WEAK_FUNC(sub_8305A400);
PPC_FUNC_IMPL(__imp__sub_8305A400) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82d86078
	ctx.lr = 0x8305A410;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8305a43c
	if (cr6.eq) goto loc_8305A43C;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// lwz r3,28(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// bl 0x82da2b98
	ctx.lr = 0x8305A434;
	sub_82DA2B98(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82df08a8
	ctx.lr = 0x8305A43C;
	sub_82DF08A8(ctx, base);
loc_8305A43C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8305A44C"))) PPC_WEAK_FUNC(sub_8305A44C);
PPC_FUNC_IMPL(__imp__sub_8305A44C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8305A450"))) PPC_WEAK_FUNC(sub_8305A450);
PPC_FUNC_IMPL(__imp__sub_8305A450) {
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
	ctx.lr = 0x8305A460;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8305a478
	if (!cr6.eq) goto loc_8305A478;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8305A478:
	// lwz r3,28(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// bl 0x82da2b98
	ctx.lr = 0x8305A480;
	sub_82DA2B98(ctx, base);
	// bl 0x82df08c8
	ctx.lr = 0x8305A484;
	sub_82DF08C8(ctx, base);
	// addic r11,r3,-1
	xer.ca = ctx.r3.u32 > 0;
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// subfe r3,r11,r3
	temp.u8 = (~ctx.r11.u32 + ctx.r3.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r3.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~ctx.r11.u64 + ctx.r3.u64 + xer.ca;
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

__attribute__((alias("__imp__sub_8305A49C"))) PPC_WEAK_FUNC(sub_8305A49C);
PPC_FUNC_IMPL(__imp__sub_8305A49C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8305A4A0"))) PPC_WEAK_FUNC(sub_8305A4A0);
PPC_FUNC_IMPL(__imp__sub_8305A4A0) {
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
	ctx.lr = 0x8305A4D0;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8305a510
	if (cr6.eq) goto loc_8305A510;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82f42220
	ctx.lr = 0x8305A4E4;
	sub_82F42220(ctx, base);
	// lis r10,-32225
	ctx.r10.s64 = -2111897600;
	// lis r9,-32239
	ctx.r9.s64 = -2112815104;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r8,r10,-22488
	ctx.r8.s64 = ctx.r10.s64 + -22488;
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
	// b 0x8305a514
	goto loc_8305A514;
loc_8305A510:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8305A514:
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

__attribute__((alias("__imp__sub_8305A52C"))) PPC_WEAK_FUNC(sub_8305A52C);
PPC_FUNC_IMPL(__imp__sub_8305A52C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8305A530"))) PPC_WEAK_FUNC(sub_8305A530);
PPC_FUNC_IMPL(__imp__sub_8305A530) {
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
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,88(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// bgt cr6,0x8305a6cc
	if (cr6.gt) goto loc_8305A6CC;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x8305a57c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8305A57C;
	// bdzf 4*cr6+eq,0x8305a5d0
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8305A5D0;
	// bne cr6,0x8305a618
	if (!cr6.eq) goto loc_8305A618;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// b 0x8305a73c
	goto loc_8305A73C;
loc_8305A57C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8305a400
	ctx.lr = 0x8305A584;
	sub_8305A400(ctx, base);
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r11,r11,-22584
	ctx.r11.s64 = ctx.r11.s64 + -22584;
	// addi r4,r11,-48
	ctx.r4.s64 = ctx.r11.s64 + -48;
	// bl 0x837b0c10
	ctx.lr = 0x8305A598;
	sub_837B0C10(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d894e0
	ctx.lr = 0x8305A5A4;
	sub_82D894E0(ctx, base);
	// stw r3,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r3.u32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8387e8e0
	ctx.lr = 0x8305A5B0;
	sub_8387E8E0(ctx, base);
	// lwz r10,92(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// subfic r9,r10,0
	xer.ca = ctx.r10.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r10.s64;
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// rlwinm r11,r8,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r7,r11,4
	ctx.r7.s64 = ctx.r11.s64 + 4;
	// stw r7,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r7.u32);
	// b 0x8305a73c
	goto loc_8305A73C;
loc_8305A5D0:
	// lwz r3,92(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8305a5ec
	if (!cr6.eq) goto loc_8305A5EC;
	// li r11,4
	ctx.r11.s64 = 4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// b 0x8305a73c
	goto loc_8305A73C;
loc_8305A5EC:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8305A5FC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8305a610
	if (cr6.eq) goto loc_8305A610;
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
loc_8305A610:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x8305a73c
	goto loc_8305A73C;
loc_8305A618:
	// lwz r11,92(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8305a630
	if (!cr6.eq) goto loc_8305A630;
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// b 0x8305a718
	goto loc_8305A718;
loc_8305A630:
	// lbz r11,108(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 108);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8305a668
	if (cr6.eq) goto loc_8305A668;
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// addi r11,r11,-22584
	ctx.r11.s64 = ctx.r11.s64 + -22584;
	// addi r4,r11,-24
	ctx.r4.s64 = ctx.r11.s64 + -24;
	// bl 0x837b0c10
	ctx.lr = 0x8305A650;
	sub_837B0C10(ctx, base);
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x8305A65C;
	sub_82E88020(ctx, base);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x8387e8e0
	ctx.lr = 0x8305A664;
	sub_8387E8E0(ctx, base);
	// b 0x8305a718
	goto loc_8305A718;
loc_8305A668:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8305a450
	ctx.lr = 0x8305A670;
	sub_8305A450(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// addi r11,r11,-22584
	ctx.r11.s64 = ctx.r11.s64 + -22584;
	// bne cr6,0x8305a6a8
	if (!cr6.eq) goto loc_8305A6A8;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// bl 0x837b0c10
	ctx.lr = 0x8305A690;
	sub_837B0C10(ctx, base);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x8305A69C;
	sub_82E88020(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x8387e8e0
	ctx.lr = 0x8305A6A4;
	sub_8387E8E0(ctx, base);
	// b 0x8305a718
	goto loc_8305A718;
loc_8305A6A8:
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// addi r4,r11,-8
	ctx.r4.s64 = ctx.r11.s64 + -8;
	// bl 0x837b0c10
	ctx.lr = 0x8305A6B4;
	sub_837B0C10(ctx, base);
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x8305A6C0;
	sub_82E88020(ctx, base);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x8387e8e0
	ctx.lr = 0x8305A6C8;
	sub_8387E8E0(ctx, base);
	// b 0x8305a718
	goto loc_8305A718;
loc_8305A6CC:
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-22584
	ctx.r4.s64 = ctx.r11.s64 + -22584;
	// bl 0x837b0c10
	ctx.lr = 0x8305A6DC;
	sub_837B0C10(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x8305A6E8;
	sub_82E88020(ctx, base);
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x8305a708
	if (cr6.lt) goto loc_8305A708;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x8305A708;
	sub_825952B8(ctx, base);
loc_8305A708:
	// li r11,15
	ctx.r11.s64 = 15;
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r30.u32);
	// stb r30,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r30.u8);
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
loc_8305A718:
	// lwz r3,92(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8305a738
	if (cr6.eq) goto loc_8305A738;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8305A734;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r30,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r30.u32);
loc_8305A738:
	// li r3,1
	ctx.r3.s64 = 1;
loc_8305A73C:
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
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

__attribute__((alias("__imp__sub_8305A754"))) PPC_WEAK_FUNC(sub_8305A754);
PPC_FUNC_IMPL(__imp__sub_8305A754) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8305A758"))) PPC_WEAK_FUNC(sub_8305A758);
PPC_FUNC_IMPL(__imp__sub_8305A758) {
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
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-22216
	ctx.r9.s64 = ctx.r11.s64 + -22216;
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
	ctx.lr = 0x8305A790;
	sub_82F42278(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x8305a7a8
	if (cr6.eq) goto loc_8305A7A8;
	// bl 0x82416268
	ctx.lr = 0x8305A7A4;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8305A7A8:
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

__attribute__((alias("__imp__sub_8305A7C0"))) PPC_WEAK_FUNC(sub_8305A7C0);
PPC_FUNC_IMPL(__imp__sub_8305A7C0) {
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
	ctx.lr = 0x8305A7F0;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8305a824
	if (cr6.eq) goto loc_8305A824;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82f42220
	ctx.lr = 0x8305A804;
	sub_82F42220(ctx, base);
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-22216
	ctx.r9.s64 = ctx.r11.s64 + -22216;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r8,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r8.u32);
	// b 0x8305a828
	goto loc_8305A828;
loc_8305A824:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8305A828:
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

__attribute__((alias("__imp__sub_8305A840"))) PPC_WEAK_FUNC(sub_8305A840);
PPC_FUNC_IMPL(__imp__sub_8305A840) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdac4
	ctx.lr = 0x8305A848;
	__savegprlr_19(ctx, base);
	// stwu r1,-528(r1)
	ea = -528 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r20,r3
	ctx.r20.u64 = ctx.r3.u64;
	// bl 0x82d86078
	ctx.lr = 0x8305A854;
	sub_82D86078(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8305a8ac
	if (!cr6.eq) goto loc_8305A8AC;
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// addi r3,r1,384
	ctx.r3.s64 = ctx.r1.s64 + 384;
	// addi r11,r11,-22312
	ctx.r11.s64 = ctx.r11.s64 + -22312;
	// addi r4,r11,-24
	ctx.r4.s64 = ctx.r11.s64 + -24;
	// bl 0x837b0c10
	ctx.lr = 0x8305A874;
	sub_837B0C10(ctx, base);
	// addi r4,r1,384
	ctx.r4.s64 = ctx.r1.s64 + 384;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x82e88020
	ctx.lr = 0x8305A880;
	sub_82E88020(ctx, base);
	// lwz r10,404(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 404);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x8305ac64
	if (cr6.lt) goto loc_8305AC64;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,384(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 384);
	// addi r3,r1,152
	ctx.r3.s64 = ctx.r1.s64 + 152;
	// stw r11,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x8305A8A0;
	sub_825952B8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,528
	ctx.r1.s64 = ctx.r1.s64 + 528;
	// b 0x831cdb14
	__restgprlr_19(ctx, base);
	return;
loc_8305A8AC:
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// bl 0x82da24b0
	ctx.lr = 0x8305A8B4;
	sub_82DA24B0(ctx, base);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// bl 0x825832d8
	ctx.lr = 0x8305A8BC;
	sub_825832D8(ctx, base);
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// bl 0x82da28c0
	ctx.lr = 0x8305A8C4;
	sub_82DA28C0(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// bl 0x82def9d8
	ctx.lr = 0x8305A8CC;
	sub_82DEF9D8(ctx, base);
	// li r27,0
	ctx.r27.s64 = 0;
	// li r22,15
	ctx.r22.s64 = 15;
	// stw r27,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r27.u32);
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// stb r27,192(r1)
	PPC_STORE_U8(ctx.r1.u32 + 192, ctx.r27.u8);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// stw r22,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r22.u32);
	// mr r21,r27
	ctx.r21.u64 = ctx.r27.u64;
	// bl 0x82dedf88
	ctx.lr = 0x8305A8F0;
	sub_82DEDF88(ctx, base);
	// lwz r11,212(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// lwz r4,192(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x8305a904
	if (!cr6.lt) goto loc_8305A904;
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
loc_8305A904:
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// bl 0x837b0c10
	ctx.lr = 0x8305A90C;
	sub_837B0C10(ctx, base);
	// addi r4,r1,320
	ctx.r4.s64 = ctx.r1.s64 + 320;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82def780
	ctx.lr = 0x8305A918;
	sub_82DEF780(ctx, base);
	// lwz r11,340(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 340);
	// li r19,2
	ctx.r19.s64 = 2;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8305a938
	if (cr6.lt) goto loc_8305A938;
	// stw r19,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r19.u32);
	// addi r3,r1,140
	ctx.r3.s64 = ctx.r1.s64 + 140;
	// lwz r4,320(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 320);
	// bl 0x825952b8
	ctx.lr = 0x8305A938;
	sub_825952B8(ctx, base);
loc_8305A938:
	// stw r22,340(r1)
	PPC_STORE_U32(ctx.r1.u32 + 340, ctx.r22.u32);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// stw r27,336(r1)
	PPC_STORE_U32(ctx.r1.u32 + 336, ctx.r27.u32);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// stb r27,320(r1)
	PPC_STORE_U8(ctx.r1.u32 + 320, ctx.r27.u8);
	// stw r22,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r22.u32);
	// stw r27,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r27.u32);
	// stb r27,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, ctx.r27.u8);
	// bl 0x82da1f00
	ctx.lr = 0x8305A95C;
	sub_82DA1F00(ctx, base);
	// lwz r11,180(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r4,160(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x8305a970
	if (!cr6.lt) goto loc_8305A970;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
loc_8305A970:
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// bl 0x837b0c10
	ctx.lr = 0x8305A978;
	sub_837B0C10(ctx, base);
	// addi r4,r1,288
	ctx.r4.s64 = ctx.r1.s64 + 288;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82defbe0
	ctx.lr = 0x8305A984;
	sub_82DEFBE0(ctx, base);
	// lwz r11,308(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 308);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8305a9a0
	if (cr6.lt) goto loc_8305A9A0;
	// stw r19,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r19.u32);
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// lwz r4,288(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 288);
	// bl 0x825952b8
	ctx.lr = 0x8305A9A0;
	sub_825952B8(ctx, base);
loc_8305A9A0:
	// stw r22,308(r1)
	PPC_STORE_U32(ctx.r1.u32 + 308, ctx.r22.u32);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// stw r27,304(r1)
	PPC_STORE_U32(ctx.r1.u32 + 304, ctx.r27.u32);
	// stb r27,288(r1)
	PPC_STORE_U8(ctx.r1.u32 + 288, ctx.r27.u8);
	// bl 0x83815cb0
	ctx.lr = 0x8305A9B4;
	sub_83815CB0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x831238a8
	ctx.lr = 0x8305A9C0;
	sub_831238A8(ctx, base);
	// stw r22,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r22.u32);
	// stw r27,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r27.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r27,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r27.u32);
	// stb r27,100(r1)
	PPC_STORE_U8(ctx.r1.u32 + 100, ctx.r27.u8);
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x82da90b8
	ctx.lr = 0x8305A9DC;
	sub_82DA90B8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8305aa34
	if (!cr6.eq) goto loc_8305AA34;
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// addi r11,r11,-22312
	ctx.r11.s64 = ctx.r11.s64 + -22312;
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// bl 0x837b0c10
	ctx.lr = 0x8305A9FC;
	sub_837B0C10(ctx, base);
	// addi r4,r1,352
	ctx.r4.s64 = ctx.r1.s64 + 352;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x82e88020
	ctx.lr = 0x8305AA08;
	sub_82E88020(ctx, base);
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// bl 0x8387e8e0
	ctx.lr = 0x8305AA10;
	sub_8387E8E0(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x838760e0
	ctx.lr = 0x8305AA18;
	sub_838760E0(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x8387e8e0
	ctx.lr = 0x8305AA20;
	sub_8387E8E0(ctx, base);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x8387e8e0
	ctx.lr = 0x8305AA28;
	sub_8387E8E0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,528
	ctx.r1.s64 = ctx.r1.s64 + 528;
	// b 0x831cdb14
	__restgprlr_19(ctx, base);
	return;
loc_8305AA34:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x82583318
	ctx.lr = 0x8305AA40;
	sub_82583318(ctx, base);
	// lwz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// lwz r4,100(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x8305aa54
	if (!cr6.lt) goto loc_8305AA54;
	// addi r4,r1,100
	ctx.r4.s64 = ctx.r1.s64 + 100;
loc_8305AA54:
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// bl 0x837b0c10
	ctx.lr = 0x8305AA5C;
	sub_837B0C10(ctx, base);
	// addi r4,r1,352
	ctx.r4.s64 = ctx.r1.s64 + 352;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82defc08
	ctx.lr = 0x8305AA68;
	sub_82DEFC08(ctx, base);
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// bl 0x8387e8e0
	ctx.lr = 0x8305AA70;
	sub_8387E8E0(ctx, base);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x825832e8
	ctx.lr = 0x8305AA78;
	sub_825832E8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82927060
	ctx.lr = 0x8305AA84;
	sub_82927060(ctx, base);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82da1d58
	ctx.lr = 0x8305AA8C;
	sub_82DA1D58(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r25,r27
	ctx.r25.u64 = ctx.r27.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8305ab14
	if (cr6.eq) goto loc_8305AB14;
	// addi r28,r3,56
	ctx.r28.s64 = ctx.r3.s64 + 56;
loc_8305AAA4:
	// lwz r11,-16(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -16);
	// lwz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x8305aaf8
	if (!cr6.eq) goto loc_8305AAF8;
	// lwz r31,0(r28)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r30,8(r28)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, xer);
	// ble cr6,0x8305aacc
	if (!cr6.gt) goto loc_8305AACC;
	// subf r29,r30,r31
	ctx.r29.s64 = ctx.r31.s64 - ctx.r30.s64;
loc_8305AACC:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x829270f8
	ctx.lr = 0x8305AAD8;
	sub_829270F8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x83580aa8
	ctx.lr = 0x8305AAE4;
	sub_83580AA8(ctx, base);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// bne cr6,0x8305aaf8
	if (!cr6.eq) goto loc_8305AAF8;
	// cmplwi cr6,r29,9999
	cr6.compare<uint32_t>(ctx.r29.u32, 9999, xer);
	// beq cr6,0x8305aaf8
	if (cr6.eq) goto loc_8305AAF8;
	// li r21,1
	ctx.r21.s64 = 1;
loc_8305AAF8:
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// addi r28,r28,88
	ctx.r28.s64 = ctx.r28.s64 + 88;
	// cmplw cr6,r25,r11
	cr6.compare<uint32_t>(ctx.r25.u32, ctx.r11.u32, xer);
	// blt cr6,0x8305aaa4
	if (cr6.lt) goto loc_8305AAA4;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8305ab18
	if (!cr6.eq) goto loc_8305AB18;
loc_8305AB14:
	// li r21,1
	ctx.r21.s64 = 1;
loc_8305AB18:
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82da1d38
	ctx.lr = 0x8305AB20;
	sub_82DA1D38(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8305ab3c
	if (cr6.eq) goto loc_8305AB3C;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82da1d40
	ctx.lr = 0x8305AB38;
	sub_82DA1D40(ctx, base);
	// b 0x8305ab40
	goto loc_8305AB40;
loc_8305AB3C:
	// li r21,1
	ctx.r21.s64 = 1;
loc_8305AB40:
	// clrlwi r11,r21,24
	ctx.r11.u64 = ctx.r21.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// bne cr6,0x8305aba8
	if (!cr6.eq) goto loc_8305ABA8;
	// stw r22,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r22.u32);
	// addi r11,r11,-22312
	ctx.r11.s64 = ctx.r11.s64 + -22312;
	// stw r27,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r27.u32);
	// li r5,7
	ctx.r5.s64 = 7;
	// stb r27,224(r1)
	PPC_STORE_U8(ctx.r1.u32 + 224, ctx.r27.u8);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// addi r4,r11,-8
	ctx.r4.s64 = ctx.r11.s64 + -8;
	// bl 0x8259cc28
	ctx.lr = 0x8305AB70;
	sub_8259CC28(ctx, base);
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x82e88020
	ctx.lr = 0x8305AB7C;
	sub_82E88020(ctx, base);
	// lwz r10,244(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x8305ab98
	if (cr6.lt) goto loc_8305AB98;
	// stw r19,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r19.u32);
	// addi r3,r1,148
	ctx.r3.s64 = ctx.r1.s64 + 148;
	// lwz r4,224(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// bl 0x825952b8
	ctx.lr = 0x8305AB98;
	sub_825952B8(ctx, base);
loc_8305AB98:
	// stw r22,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r22.u32);
	// stw r27,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r27.u32);
	// stb r27,224(r1)
	PPC_STORE_U8(ctx.r1.u32 + 224, ctx.r27.u8);
	// b 0x8305abf8
	goto loc_8305ABF8;
loc_8305ABA8:
	// stw r22,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r22.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// stw r27,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r27.u32);
	// addi r4,r11,-22312
	ctx.r4.s64 = ctx.r11.s64 + -22312;
	// stb r27,256(r1)
	PPC_STORE_U8(ctx.r1.u32 + 256, ctx.r27.u8);
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x8259cc28
	ctx.lr = 0x8305ABC4;
	sub_8259CC28(ctx, base);
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x82e88020
	ctx.lr = 0x8305ABD0;
	sub_82E88020(ctx, base);
	// lwz r10,276(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x8305abec
	if (cr6.lt) goto loc_8305ABEC;
	// stw r19,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r19.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,256(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 256);
	// bl 0x825952b8
	ctx.lr = 0x8305ABEC;
	sub_825952B8(ctx, base);
loc_8305ABEC:
	// stw r22,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r22.u32);
	// stw r27,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r27.u32);
	// stb r27,256(r1)
	PPC_STORE_U8(ctx.r1.u32 + 256, ctx.r27.u8);
loc_8305ABF8:
	// lwz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8305ac14
	if (cr6.lt) goto loc_8305AC14;
	// stw r19,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r19.u32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lwz r4,100(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// bl 0x825952b8
	ctx.lr = 0x8305AC14;
	sub_825952B8(ctx, base);
loc_8305AC14:
	// lwz r11,180(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// stw r22,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r22.u32);
	// stw r27,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r27.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r27,100(r1)
	PPC_STORE_U8(ctx.r1.u32 + 100, ctx.r27.u8);
	// blt cr6,0x8305ac3c
	if (cr6.lt) goto loc_8305AC3C;
	// stw r19,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r19.u32);
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// lwz r4,160(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// bl 0x825952b8
	ctx.lr = 0x8305AC3C;
	sub_825952B8(ctx, base);
loc_8305AC3C:
	// lwz r11,212(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// stw r22,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r22.u32);
	// stw r27,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r27.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r27,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, ctx.r27.u8);
	// blt cr6,0x8305ac64
	if (cr6.lt) goto loc_8305AC64;
	// stw r19,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r19.u32);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// lwz r4,192(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// bl 0x825952b8
	ctx.lr = 0x8305AC64;
	sub_825952B8(ctx, base);
loc_8305AC64:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,528
	ctx.r1.s64 = ctx.r1.s64 + 528;
	// b 0x831cdb14
	__restgprlr_19(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8305AC70"))) PPC_WEAK_FUNC(sub_8305AC70);
PPC_FUNC_IMPL(__imp__sub_8305AC70) {
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
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-21944
	ctx.r9.s64 = ctx.r11.s64 + -21944;
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
	ctx.lr = 0x8305ACA8;
	sub_82F42278(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x8305acc0
	if (cr6.eq) goto loc_8305ACC0;
	// bl 0x82416268
	ctx.lr = 0x8305ACBC;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8305ACC0:
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

__attribute__((alias("__imp__sub_8305ACD8"))) PPC_WEAK_FUNC(sub_8305ACD8);
PPC_FUNC_IMPL(__imp__sub_8305ACD8) {
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
	ctx.lr = 0x8305AD08;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8305ad3c
	if (cr6.eq) goto loc_8305AD3C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82f42220
	ctx.lr = 0x8305AD1C;
	sub_82F42220(ctx, base);
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-21944
	ctx.r9.s64 = ctx.r11.s64 + -21944;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r8,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r8.u32);
	// b 0x8305ad40
	goto loc_8305AD40;
loc_8305AD3C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8305AD40:
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

__attribute__((alias("__imp__sub_8305AD58"))) PPC_WEAK_FUNC(sub_8305AD58);
PPC_FUNC_IMPL(__imp__sub_8305AD58) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82d86078
	ctx.lr = 0x8305AD70;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8305adbc
	if (!cr6.eq) goto loc_8305ADBC;
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r11,r11,-22048
	ctx.r11.s64 = ctx.r11.s64 + -22048;
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// bl 0x837b0c10
	ctx.lr = 0x8305AD8C;
	sub_837B0C10(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x8305AD98;
	sub_82E88020(ctx, base);
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x8305ae00
	if (cr6.lt) goto loc_8305AE00;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x8305ADB8;
	sub_825952B8(ctx, base);
	// b 0x8305ae00
	goto loc_8305AE00;
loc_8305ADBC:
	// lwz r3,28(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// bl 0x82da24b0
	ctx.lr = 0x8305ADC4;
	sub_82DA24B0(ctx, base);
	// bl 0x825832d8
	ctx.lr = 0x8305ADC8;
	sub_825832D8(ctx, base);
	// cmpwi cr6,r3,7
	cr6.compare<int32_t>(ctx.r3.s32, 7, xer);
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bne cr6,0x8305ade4
	if (!cr6.eq) goto loc_8305ADE4;
	// addi r11,r11,-22048
	ctx.r11.s64 = ctx.r11.s64 + -22048;
	// addi r4,r11,-8
	ctx.r4.s64 = ctx.r11.s64 + -8;
	// b 0x8305ade8
	goto loc_8305ADE8;
loc_8305ADE4:
	// addi r4,r11,-22048
	ctx.r4.s64 = ctx.r11.s64 + -22048;
loc_8305ADE8:
	// bl 0x837b0c10
	ctx.lr = 0x8305ADEC;
	sub_837B0C10(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x8305ADF8;
	sub_82E88020(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8387e8e0
	ctx.lr = 0x8305AE00;
	sub_8387E8E0(ctx, base);
loc_8305AE00:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8305AE18"))) PPC_WEAK_FUNC(sub_8305AE18);
PPC_FUNC_IMPL(__imp__sub_8305AE18) {
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
	// lwz r11,96(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8305ae60
	if (cr6.eq) goto loc_8305AE60;
	// lis r11,264
	ctx.r11.s64 = 17301504;
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// ori r9,r11,5
	ctx.r9.u64 = ctx.r11.u64 | 5;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bne cr6,0x8305ae60
	if (!cr6.eq) goto loc_8305AE60;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,96(r3)
	PPC_STORE_U32(ctx.r3.u32 + 96, ctx.r11.u32);
	// bl 0x82d47978
	ctx.lr = 0x8305AE60;
	sub_82D47978(ctx, base);
loc_8305AE60:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83824d80
	ctx.lr = 0x8305AE6C;
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

__attribute__((alias("__imp__sub_8305AE84"))) PPC_WEAK_FUNC(sub_8305AE84);
PPC_FUNC_IMPL(__imp__sub_8305AE84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8305AE88"))) PPC_WEAK_FUNC(sub_8305AE88);
PPC_FUNC_IMPL(__imp__sub_8305AE88) {
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
	// bl 0x82d47978
	ctx.lr = 0x8305AEA4;
	sub_82D47978(ctx, base);
	// lwz r3,100(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8305aec8
	if (cr6.eq) goto loc_8305AEC8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8305AEC4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r30,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r30.u32);
loc_8305AEC8:
	// lwz r3,104(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8305aee8
	if (cr6.eq) goto loc_8305AEE8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8305AEE4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r30,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r30.u32);
loc_8305AEE8:
	// lwz r3,108(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8305af08
	if (cr6.eq) goto loc_8305AF08;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8305AF04;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r30,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r30.u32);
loc_8305AF08:
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

__attribute__((alias("__imp__sub_8305AF20"))) PPC_WEAK_FUNC(sub_8305AF20);
PPC_FUNC_IMPL(__imp__sub_8305AF20) {
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
	ctx.lr = 0x8305AF30;
	sub_830FF290(ctx, base);
	// bl 0x830ffaa8
	ctx.lr = 0x8305AF34;
	sub_830FFAA8(ctx, base);
	// cmplwi cr6,r3,18
	cr6.compare<uint32_t>(ctx.r3.u32, 18, xer);
	// blt cr6,0x8305af70
	if (cr6.lt) goto loc_8305AF70;
	// cmplwi cr6,r3,19
	cr6.compare<uint32_t>(ctx.r3.u32, 19, xer);
	// ble cr6,0x8305af5c
	if (!cr6.gt) goto loc_8305AF5C;
	// cmplwi cr6,r3,21
	cr6.compare<uint32_t>(ctx.r3.u32, 21, xer);
	// bne cr6,0x8305af70
	if (!cr6.eq) goto loc_8305AF70;
	// bl 0x830ff290
	ctx.lr = 0x8305AF50;
	sub_830FF290(ctx, base);
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmplwi cr6,r11,60
	cr6.compare<uint32_t>(ctx.r11.u32, 60, xer);
	// bne cr6,0x8305af70
	if (!cr6.eq) goto loc_8305AF70;
loc_8305AF5C:
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
loc_8305AF70:
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

__attribute__((alias("__imp__sub_8305AF84"))) PPC_WEAK_FUNC(sub_8305AF84);
PPC_FUNC_IMPL(__imp__sub_8305AF84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8305AF88"))) PPC_WEAK_FUNC(sub_8305AF88);
PPC_FUNC_IMPL(__imp__sub_8305AF88) {
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
	// bl 0x82d86078
	ctx.lr = 0x8305AFA4;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8305afe0
	if (cr6.eq) goto loc_8305AFE0;
	// lwz r31,32(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82dfa5c8
	ctx.lr = 0x8305AFB8;
	sub_82DFA5C8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x8305afdc
	if (!cr6.eq) goto loc_8305AFDC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83578d58
	ctx.lr = 0x8305AFCC;
	sub_83578D58(ctx, base);
	// lwz r11,1948(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1948);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x8305afdc
	if (!cr6.eq) goto loc_8305AFDC;
	// li r30,1
	ctx.r30.s64 = 1;
loc_8305AFDC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_8305AFE0:
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

__attribute__((alias("__imp__sub_8305AFF8"))) PPC_WEAK_FUNC(sub_8305AFF8);
PPC_FUNC_IMPL(__imp__sub_8305AFF8) {
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
	ctx.lr = 0x8305B008;
	sub_830FF290(ctx, base);
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmplwi cr6,r11,46
	cr6.compare<uint32_t>(ctx.r11.u32, 46, xer);
	// beq cr6,0x8305b030
	if (cr6.eq) goto loc_8305B030;
	// cmplwi cr6,r11,60
	cr6.compare<uint32_t>(ctx.r11.u32, 60, xer);
	// beq cr6,0x8305b030
	if (cr6.eq) goto loc_8305B030;
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
loc_8305B030:
	// bl 0x82d86078
	ctx.lr = 0x8305B034;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8305b050
	if (!cr6.eq) goto loc_8305B050;
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
loc_8305B050:
	// lwz r3,32(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// bl 0x83578d58
	ctx.lr = 0x8305B058;
	sub_83578D58(ctx, base);
	// lwz r11,1948(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1948);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
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

__attribute__((alias("__imp__sub_8305B078"))) PPC_WEAK_FUNC(sub_8305B078);
PPC_FUNC_IMPL(__imp__sub_8305B078) {
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
	// bl 0x82d95ee0
	ctx.lr = 0x8305B088;
	sub_82D95EE0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8305b0c8
	if (cr6.eq) goto loc_8305B0C8;
	// bl 0x82d96138
	ctx.lr = 0x8305B098;
	sub_82D96138(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8305b0c0
	if (cr6.eq) goto loc_8305B0C0;
loc_8305B0A4:
	// bl 0x82d26ed8
	ctx.lr = 0x8305B0A8;
	sub_82D26ED8(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82d26900
	ctx.lr = 0x8305B0B0;
	sub_82D26900(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8305B0C0:
	// bl 0x83572958
	ctx.lr = 0x8305B0C4;
	sub_83572958(ctx, base);
	// b 0x8305b0ec
	goto loc_8305B0EC;
loc_8305B0C8:
	// bl 0x82d8a820
	ctx.lr = 0x8305B0CC;
	sub_82D8A820(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8305b0f0
	if (cr6.eq) goto loc_8305B0F0;
	// bl 0x82d8a978
	ctx.lr = 0x8305B0DC;
	sub_82D8A978(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8305b0a4
	if (!cr6.eq) goto loc_8305B0A4;
	// bl 0x82d8a9e0
	ctx.lr = 0x8305B0EC;
	sub_82D8A9E0(ctx, base);
loc_8305B0EC:
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
loc_8305B0F0:
	// bl 0x82d26ed8
	ctx.lr = 0x8305B0F4;
	sub_82D26ED8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d26900
	ctx.lr = 0x8305B0FC;
	sub_82D26900(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8305B10C"))) PPC_WEAK_FUNC(sub_8305B10C);
PPC_FUNC_IMPL(__imp__sub_8305B10C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8305B110"))) PPC_WEAK_FUNC(sub_8305B110);
PPC_FUNC_IMPL(__imp__sub_8305B110) {
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
	// li r31,0
	ctx.r31.s64 = 0;
	// bl 0x830ff290
	ctx.lr = 0x8305B128;
	sub_830FF290(ctx, base);
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmplwi cr6,r11,52
	cr6.compare<uint32_t>(ctx.r11.u32, 52, xer);
	// blt cr6,0x8305b15c
	if (cr6.lt) goto loc_8305B15C;
	// cmplwi cr6,r11,59
	cr6.compare<uint32_t>(ctx.r11.u32, 59, xer);
	// ble cr6,0x8305b144
	if (!cr6.gt) goto loc_8305B144;
	// cmplwi cr6,r11,61
	cr6.compare<uint32_t>(ctx.r11.u32, 61, xer);
	// bne cr6,0x8305b15c
	if (!cr6.eq) goto loc_8305B15C;
loc_8305B144:
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
loc_8305B15C:
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

__attribute__((alias("__imp__sub_8305B174"))) PPC_WEAK_FUNC(sub_8305B174);
PPC_FUNC_IMPL(__imp__sub_8305B174) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8305B178"))) PPC_WEAK_FUNC(sub_8305B178);
PPC_FUNC_IMPL(__imp__sub_8305B178) {
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
	// bl 0x82d86078
	ctx.lr = 0x8305B190;
	sub_82D86078(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8305b1bc
	if (cr6.eq) goto loc_8305B1BC;
	// lwz r3,32(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r31,28(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// bl 0x83578d58
	ctx.lr = 0x8305B1A8;
	sub_83578D58(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82da24b0
	ctx.lr = 0x8305B1B4;
	sub_82DA24B0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82da1eb0
	ctx.lr = 0x8305B1BC;
	sub_82DA1EB0(ctx, base);
loc_8305B1BC:
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

__attribute__((alias("__imp__sub_8305B1D4"))) PPC_WEAK_FUNC(sub_8305B1D4);
PPC_FUNC_IMPL(__imp__sub_8305B1D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8305B1D8"))) PPC_WEAK_FUNC(sub_8305B1D8);
PPC_FUNC_IMPL(__imp__sub_8305B1D8) {
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
	ctx.lr = 0x8305B1F0;
	sub_830FF290(ctx, base);
	// bl 0x830ffaa8
	ctx.lr = 0x8305B1F4;
	sub_830FFAA8(ctx, base);
	// cmplwi cr6,r3,18
	cr6.compare<uint32_t>(ctx.r3.u32, 18, xer);
	// blt cr6,0x8305b224
	if (cr6.lt) goto loc_8305B224;
	// cmplwi cr6,r3,19
	cr6.compare<uint32_t>(ctx.r3.u32, 19, xer);
	// ble cr6,0x8305b21c
	if (!cr6.gt) goto loc_8305B21C;
	// cmplwi cr6,r3,21
	cr6.compare<uint32_t>(ctx.r3.u32, 21, xer);
	// bne cr6,0x8305b224
	if (!cr6.eq) goto loc_8305B224;
	// bl 0x830ff290
	ctx.lr = 0x8305B210;
	sub_830FF290(ctx, base);
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmplwi cr6,r11,60
	cr6.compare<uint32_t>(ctx.r11.u32, 60, xer);
	// bne cr6,0x8305b224
	if (!cr6.eq) goto loc_8305B224;
loc_8305B21C:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x8305b228
	goto loc_8305B228;
loc_8305B224:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8305B228:
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

__attribute__((alias("__imp__sub_8305B240"))) PPC_WEAK_FUNC(sub_8305B240);
PPC_FUNC_IMPL(__imp__sub_8305B240) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x8305B248;
	__savegprlr_29(ctx, base);
	// stwu r1,-2064(r1)
	ea = -2064 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r29,0
	ctx.r29.s64 = 0;
	// bl 0x82d86078
	ctx.lr = 0x8305B254;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8305b264
	if (!cr6.eq) goto loc_8305B264;
	// addi r1,r1,2064
	ctx.r1.s64 = ctx.r1.s64 + 2064;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_8305B264:
	// lwz r3,32(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// bl 0x83578d58
	ctx.lr = 0x8305B26C;
	sub_83578D58(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8301afe0
	ctx.lr = 0x8305B278;
	sub_8301AFE0(ctx, base);
	// bl 0x82d860f0
	ctx.lr = 0x8305B27C;
	sub_82D860F0(ctx, base);
	// lwz r10,2024(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 2024);
	// li r11,2
	ctx.r11.s64 = 2;
	// cmpwi cr6,r10,1
	cr6.compare<int32_t>(ctx.r10.s32, 1, xer);
	// bne cr6,0x8305b294
	if (!cr6.eq) goto loc_8305B294;
	// li r9,1
	ctx.r9.s64 = 1;
	// b 0x8305b2a4
	goto loc_8305B2A4;
loc_8305B294:
	// addi r10,r10,-2
	ctx.r10.s64 = ctx.r10.s64 + -2;
	// subfic r10,r10,0
	xer.ca = ctx.r10.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r10.s64;
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r9,r8,r11
	ctx.r9.u64 = ctx.r8.u64 & ctx.r11.u64;
loc_8305B2A4:
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8305b2dc
	if (cr6.eq) goto loc_8305B2DC;
	// addi r11,r1,164
	ctx.r11.s64 = ctx.r1.s64 + 164;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_8305B2B8:
	// lwz r10,-44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -44);
	// cmplw cr6,r10,r3
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r3.u32, xer);
	// bne cr6,0x8305b2d4
	if (!cr6.eq) goto loc_8305B2D4;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, xer);
	// bne cr6,0x8305b2d4
	if (!cr6.eq) goto loc_8305B2D4;
	// li r29,1
	ctx.r29.s64 = 1;
loc_8305B2D4:
	// addi r11,r11,88
	ctx.r11.s64 = ctx.r11.s64 + 88;
	// bdnz 0x8305b2b8
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8305B2B8;
loc_8305B2DC:
	// addi r31,r1,2024
	ctx.r31.s64 = ctx.r1.s64 + 2024;
	// li r30,21
	ctx.r30.s64 = 21;
loc_8305B2E4:
	// addi r31,r31,-88
	ctx.r31.s64 = ctx.r31.s64 + -88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82da8c38
	ctx.lr = 0x8305B2F0;
	sub_82DA8C38(ctx, base);
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// bge 0x8305b2e4
	if (!cr0.lt) goto loc_8305B2E4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,2064
	ctx.r1.s64 = ctx.r1.s64 + 2064;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8305B304"))) PPC_WEAK_FUNC(sub_8305B304);
PPC_FUNC_IMPL(__imp__sub_8305B304) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8305B308"))) PPC_WEAK_FUNC(sub_8305B308);
PPC_FUNC_IMPL(__imp__sub_8305B308) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x8305B310;
	__savegprlr_29(ctx, base);
	// stwu r1,-2064(r1)
	ea = -2064 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r29,0
	ctx.r29.s64 = 0;
	// bl 0x82d86078
	ctx.lr = 0x8305B31C;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8305b32c
	if (!cr6.eq) goto loc_8305B32C;
	// addi r1,r1,2064
	ctx.r1.s64 = ctx.r1.s64 + 2064;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_8305B32C:
	// lwz r3,32(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// bl 0x83578d58
	ctx.lr = 0x8305B334;
	sub_83578D58(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8301afe0
	ctx.lr = 0x8305B340;
	sub_8301AFE0(ctx, base);
	// bl 0x82d860f0
	ctx.lr = 0x8305B344;
	sub_82D860F0(ctx, base);
	// lwz r11,2024(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 2024);
	// li r9,2
	ctx.r9.s64 = 2;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x8305b35c
	if (!cr6.eq) goto loc_8305B35C;
	// li r9,0
	ctx.r9.s64 = 0;
	// b 0x8305b368
	goto loc_8305B368;
loc_8305B35C:
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bne cr6,0x8305b368
	if (!cr6.eq) goto loc_8305B368;
	// li r9,1
	ctx.r9.s64 = 1;
loc_8305B368:
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8305b3a0
	if (cr6.eq) goto loc_8305B3A0;
	// addi r11,r1,164
	ctx.r11.s64 = ctx.r1.s64 + 164;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_8305B37C:
	// lwz r10,-44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -44);
	// cmplw cr6,r10,r3
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r3.u32, xer);
	// bne cr6,0x8305b398
	if (!cr6.eq) goto loc_8305B398;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, xer);
	// bne cr6,0x8305b398
	if (!cr6.eq) goto loc_8305B398;
	// li r29,1
	ctx.r29.s64 = 1;
loc_8305B398:
	// addi r11,r11,88
	ctx.r11.s64 = ctx.r11.s64 + 88;
	// bdnz 0x8305b37c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8305B37C;
loc_8305B3A0:
	// addi r31,r1,2024
	ctx.r31.s64 = ctx.r1.s64 + 2024;
	// li r30,21
	ctx.r30.s64 = 21;
loc_8305B3A8:
	// addi r31,r31,-88
	ctx.r31.s64 = ctx.r31.s64 + -88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82da8c38
	ctx.lr = 0x8305B3B4;
	sub_82DA8C38(ctx, base);
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// bge 0x8305b3a8
	if (!cr0.lt) goto loc_8305B3A8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,2064
	ctx.r1.s64 = ctx.r1.s64 + 2064;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8305B3C8"))) PPC_WEAK_FUNC(sub_8305B3C8);
PPC_FUNC_IMPL(__imp__sub_8305B3C8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x8305B3D0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// bl 0x82dad2e0
	ctx.lr = 0x8305B3E0;
	sub_82DAD2E0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82d86078
	ctx.lr = 0x8305B3E8;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8305b408
	if (cr6.eq) goto loc_8305B408;
	// lwz r3,32(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// bl 0x825832f0
	ctx.lr = 0x8305B3F8;
	sub_825832F0(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// beq cr6,0x8305b40c
	if (cr6.eq) goto loc_8305B40C;
	// cmpwi cr6,r3,27
	cr6.compare<int32_t>(ctx.r3.s32, 27, xer);
	// beq cr6,0x8305b40c
	if (cr6.eq) goto loc_8305B40C;
loc_8305B408:
	// li r31,1
	ctx.r31.s64 = 1;
loc_8305B40C:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x8305b46c
	if (cr6.eq) goto loc_8305B46C;
	// bl 0x830ff290
	ctx.lr = 0x8305B418;
	sub_830FF290(ctx, base);
	// bl 0x830ffaa8
	ctx.lr = 0x8305B41C;
	sub_830FFAA8(ctx, base);
	// cmplwi cr6,r3,18
	cr6.compare<uint32_t>(ctx.r3.u32, 18, xer);
	// beq cr6,0x8305b434
	if (cr6.eq) goto loc_8305B434;
	// bl 0x830ff290
	ctx.lr = 0x8305B428;
	sub_830FF290(ctx, base);
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmplwi cr6,r11,60
	cr6.compare<uint32_t>(ctx.r11.u32, 60, xer);
	// bne cr6,0x8305b46c
	if (!cr6.eq) goto loc_8305B46C;
loc_8305B434:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8305aff8
	ctx.lr = 0x8305B43C;
	sub_8305AFF8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8305b46c
	if (!cr6.eq) goto loc_8305B46C;
	// lwz r3,564(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 564);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8305b45c
	if (!cr6.eq) goto loc_8305B45C;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8305b460
	goto loc_8305B460;
loc_8305B45C:
	// bl 0x82e744e0
	ctx.lr = 0x8305B460;
	sub_82E744E0(ctx, base);
loc_8305B460:
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8305b470
	if (cr6.eq) goto loc_8305B470;
loc_8305B46C:
	// li r31,1
	ctx.r31.s64 = 1;
loc_8305B470:
	// clrlwi r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8305b49c
	if (cr6.eq) goto loc_8305B49C;
	// bl 0x82dcdfe0
	ctx.lr = 0x8305B480;
	sub_82DCDFE0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8305af20
	ctx.lr = 0x8305B488;
	sub_8305AF20(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8305b498
	if (cr6.eq) goto loc_8305B498;
	// bl 0x82daaa50
	ctx.lr = 0x8305B498;
	sub_82DAAA50(ctx, base);
loc_8305B498:
	// bl 0x82daed20
	ctx.lr = 0x8305B49C;
	sub_82DAED20(ctx, base);
loc_8305B49C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8305B4A4"))) PPC_WEAK_FUNC(sub_8305B4A4);
PPC_FUNC_IMPL(__imp__sub_8305B4A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8305B4A8"))) PPC_WEAK_FUNC(sub_8305B4A8);
PPC_FUNC_IMPL(__imp__sub_8305B4A8) {
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
	// bl 0x82dad2e0
	ctx.lr = 0x8305B4B8;
	sub_82DAD2E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8305b4e8
	if (cr6.eq) goto loc_8305B4E8;
	// lwz r3,564(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 564);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8305b4d4
	if (!cr6.eq) goto loc_8305B4D4;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8305b4d8
	goto loc_8305B4D8;
loc_8305B4D4:
	// bl 0x82e744e0
	ctx.lr = 0x8305B4D8;
	sub_82E744E0(ctx, base);
loc_8305B4D8:
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8305b4e8
	if (cr6.eq) goto loc_8305B4E8;
	// bl 0x82daf868
	ctx.lr = 0x8305B4E8;
	sub_82DAF868(ctx, base);
loc_8305B4E8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8305B4F8"))) PPC_WEAK_FUNC(sub_8305B4F8);
PPC_FUNC_IMPL(__imp__sub_8305B4F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x8305B500;
	__savegprlr_26(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,96(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8305ba5c
	if (!cr6.eq) goto loc_8305BA5C;
	// bl 0x82d86078
	ctx.lr = 0x8305B518;
	sub_82D86078(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8305ba5c
	if (cr6.eq) goto loc_8305BA5C;
	// lwz r30,32(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lis r11,527
	ctx.r11.s64 = 34537472;
	// ori r31,r11,87
	ctx.r31.u64 = ctx.r11.u64 | 87;
	// lbz r10,9(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 9);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8305ba5c
	if (!cr6.eq) goto loc_8305BA5C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83129788
	ctx.lr = 0x8305B544;
	sub_83129788(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// lis r10,506
	ctx.r10.s64 = 33161216;
	// lis r9,506
	ctx.r9.s64 = 33161216;
	// ori r26,r10,48
	ctx.r26.u64 = ctx.r10.u64 | 48;
	// ori r27,r9,57
	ctx.r27.u64 = ctx.r9.u64 | 57;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8305b57c
	if (cr6.eq) goto loc_8305B57C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825832f0
	ctx.lr = 0x8305B568;
	sub_825832F0(ctx, base);
	// cmpwi cr6,r3,4
	cr6.compare<int32_t>(ctx.r3.s32, 4, xer);
	// bne cr6,0x8305b57c
	if (!cr6.eq) goto loc_8305B57C;
	// lis r31,510
	ctx.r31.s64 = 33423360;
	// ori r31,r31,37
	ctx.r31.u64 = ctx.r31.u64 | 37;
	// b 0x8305b8dc
	goto loc_8305B8DC;
loc_8305B57C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82dfa5c8
	ctx.lr = 0x8305B584;
	sub_82DFA5C8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8305b810
	if (cr6.eq) goto loc_8305B810;
	// bl 0x83578d58
	ctx.lr = 0x8305B598;
	sub_83578D58(ctx, base);
	// lwz r11,1948(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1948);
	// cmplwi cr6,r11,30
	cr6.compare<uint32_t>(ctx.r11.u32, 30, xer);
	// bgt cr6,0x8305b8dc
	if (cr6.gt) goto loc_8305B8DC;
	// lis r12,-31994
	ctx.r12.s64 = -2096758784;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-19012
	ctx.r12.s64 = ctx.r12.s64 + -19012;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_8305B8DC;
	case 1:
		goto loc_8305B638;
	case 2:
		goto loc_8305B640;
	case 3:
		goto loc_8305B8B4;
	case 4:
		goto loc_8305B638;
	case 5:
		goto loc_8305B668;
	case 6:
		goto loc_8305B7B4;
	case 7:
		goto loc_8305B7B4;
	case 8:
		goto loc_8305B7B4;
	case 9:
		goto loc_8305B7B4;
	case 10:
		goto loc_8305B690;
	case 11:
		goto loc_8305B8DC;
	case 12:
		goto loc_8305B8DC;
	case 13:
		goto loc_8305B8DC;
	case 14:
		goto loc_8305B8DC;
	case 15:
		goto loc_8305B638;
	case 16:
		goto loc_8305B8B4;
	case 17:
		goto loc_8305B70C;
	case 18:
		goto loc_8305B728;
	case 19:
		goto loc_8305B638;
	case 20:
		goto loc_8305B638;
	case 21:
		goto loc_8305B8DC;
	case 22:
		goto loc_8305B8DC;
	case 23:
		goto loc_8305B8DC;
	case 24:
		goto loc_8305B8DC;
	case 25:
		goto loc_8305B8DC;
	case 26:
		goto loc_8305B8DC;
	case 27:
		goto loc_8305B638;
	case 28:
		goto loc_8305B638;
	case 29:
		goto loc_8305B744;
	case 30:
		goto loc_8305B744;
	default:
		return;
	}
	// lwz r24,-18212(r5)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r5.u32 + -18212);
	// lwz r24,-18888(r5)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r5.u32 + -18888);
	// lwz r24,-18880(r5)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r5.u32 + -18880);
	// lwz r24,-18252(r5)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r5.u32 + -18252);
	// lwz r24,-18888(r5)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r5.u32 + -18888);
	// lwz r24,-18840(r5)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r5.u32 + -18840);
	// lwz r24,-18508(r5)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r5.u32 + -18508);
	// lwz r24,-18508(r5)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r5.u32 + -18508);
	// lwz r24,-18508(r5)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r5.u32 + -18508);
	// lwz r24,-18508(r5)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r5.u32 + -18508);
	// lwz r24,-18800(r5)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r5.u32 + -18800);
	// lwz r24,-18212(r5)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r5.u32 + -18212);
	// lwz r24,-18212(r5)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r5.u32 + -18212);
	// lwz r24,-18212(r5)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r5.u32 + -18212);
	// lwz r24,-18212(r5)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r5.u32 + -18212);
	// lwz r24,-18888(r5)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r5.u32 + -18888);
	// lwz r24,-18252(r5)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r5.u32 + -18252);
	// lwz r24,-18676(r5)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r5.u32 + -18676);
	// lwz r24,-18648(r5)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r5.u32 + -18648);
	// lwz r24,-18888(r5)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r5.u32 + -18888);
	// lwz r24,-18888(r5)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r5.u32 + -18888);
	// lwz r24,-18212(r5)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r5.u32 + -18212);
	// lwz r24,-18212(r5)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r5.u32 + -18212);
	// lwz r24,-18212(r5)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r5.u32 + -18212);
	// lwz r24,-18212(r5)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r5.u32 + -18212);
	// lwz r24,-18212(r5)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r5.u32 + -18212);
	// lwz r24,-18212(r5)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r5.u32 + -18212);
	// lwz r24,-18888(r5)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r5.u32 + -18888);
	// lwz r24,-18888(r5)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r5.u32 + -18888);
	// lwz r24,-18620(r5)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r5.u32 + -18620);
	// lwz r24,-18620(r5)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r5.u32 + -18620);
loc_8305B638:
	// mr r31,r26
	ctx.r31.u64 = ctx.r26.u64;
	// b 0x8305b8dc
	goto loc_8305B8DC;
loc_8305B640:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8305b308
	ctx.lr = 0x8305B648;
	sub_8305B308(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// lis r31,510
	ctx.r31.s64 = 33423360;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8305b660
	if (cr6.eq) goto loc_8305B660;
	// ori r31,r31,16
	ctx.r31.u64 = ctx.r31.u64 | 16;
	// b 0x8305b8dc
	goto loc_8305B8DC;
loc_8305B660:
	// ori r31,r31,17
	ctx.r31.u64 = ctx.r31.u64 | 17;
	// b 0x8305b8dc
	goto loc_8305B8DC;
loc_8305B668:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8305b308
	ctx.lr = 0x8305B670;
	sub_8305B308(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// lis r31,510
	ctx.r31.s64 = 33423360;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8305b688
	if (cr6.eq) goto loc_8305B688;
	// ori r31,r31,18
	ctx.r31.u64 = ctx.r31.u64 | 18;
	// b 0x8305b8dc
	goto loc_8305B8DC;
loc_8305B688:
	// ori r31,r31,19
	ctx.r31.u64 = ctx.r31.u64 | 19;
	// b 0x8305b8dc
	goto loc_8305B8DC;
loc_8305B690:
	// bl 0x82d86078
	ctx.lr = 0x8305B694;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8305b8dc
	if (cr6.eq) goto loc_8305B8DC;
	// lwz r3,28(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// bl 0x82da24b0
	ctx.lr = 0x8305B6A4;
	sub_82DA24B0(ctx, base);
	// bl 0x825832e8
	ctx.lr = 0x8305B6A8;
	sub_825832E8(ctx, base);
	// addi r11,r3,-2
	ctx.r11.s64 = ctx.r3.s64 + -2;
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(ctx.r11.u32, 4, xer);
	// bgt cr6,0x8305b8dc
	if (cr6.gt) goto loc_8305B8DC;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x8305b700
	if (cr6.eq) goto loc_8305B700;
	// bdz 0x8305b6f4
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_8305B6F4;
	// bdz 0x8305b6d8
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_8305B6D8;
	// bdz 0x8305b6d8
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_8305B6D8;
	// lis r31,299
	ctx.r31.s64 = 19595264;
loc_8305B6D0:
	// ori r31,r31,131
	ctx.r31.u64 = ctx.r31.u64 | 131;
	// b 0x8305b8dc
	goto loc_8305B8DC;
loc_8305B6D8:
	// bl 0x82d96060
	ctx.lr = 0x8305B6DC;
	sub_82D96060(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// lis r31,299
	ctx.r31.s64 = 19595264;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8305b6d0
	if (cr6.eq) goto loc_8305B6D0;
	// ori r31,r31,132
	ctx.r31.u64 = ctx.r31.u64 | 132;
	// b 0x8305b8dc
	goto loc_8305B8DC;
loc_8305B6F4:
	// lis r31,299
	ctx.r31.s64 = 19595264;
	// ori r31,r31,133
	ctx.r31.u64 = ctx.r31.u64 | 133;
	// b 0x8305b8dc
	goto loc_8305B8DC;
loc_8305B700:
	// lis r31,299
	ctx.r31.s64 = 19595264;
	// ori r31,r31,134
	ctx.r31.u64 = ctx.r31.u64 | 134;
	// b 0x8305b8dc
	goto loc_8305B8DC;
loc_8305B70C:
	// bl 0x82e58e20
	ctx.lr = 0x8305B710;
	sub_82E58E20(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8305b8c8
	if (cr6.eq) goto loc_8305B8C8;
	// lis r31,527
	ctx.r31.s64 = 34537472;
	// ori r31,r31,169
	ctx.r31.u64 = ctx.r31.u64 | 169;
	// b 0x8305b8dc
	goto loc_8305B8DC;
loc_8305B728:
	// bl 0x82e58e20
	ctx.lr = 0x8305B72C;
	sub_82E58E20(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8305b8c0
	if (cr6.eq) goto loc_8305B8C0;
	// lis r31,515
	ctx.r31.s64 = 33751040;
	// ori r31,r31,38
	ctx.r31.u64 = ctx.r31.u64 | 38;
	// b 0x8305b8dc
	goto loc_8305B8DC;
loc_8305B744:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8305b308
	ctx.lr = 0x8305B74C;
	sub_8305B308(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8305b764
	if (cr6.eq) goto loc_8305B764;
	// lis r31,506
	ctx.r31.s64 = 33161216;
	// ori r31,r31,222
	ctx.r31.u64 = ctx.r31.u64 | 222;
	// b 0x8305b8dc
	goto loc_8305B8DC;
loc_8305B764:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8305b240
	ctx.lr = 0x8305B76C;
	sub_8305B240(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8305b784
	if (cr6.eq) goto loc_8305B784;
	// lis r31,506
	ctx.r31.s64 = 33161216;
	// ori r31,r31,221
	ctx.r31.u64 = ctx.r31.u64 | 221;
	// b 0x8305b8dc
	goto loc_8305B8DC;
loc_8305B784:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83129788
	ctx.lr = 0x8305B78C;
	sub_83129788(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8305b8c8
	if (!cr6.eq) goto loc_8305B8C8;
	// bl 0x830ff290
	ctx.lr = 0x8305B79C;
	sub_830FF290(ctx, base);
	// bl 0x830ffaa8
	ctx.lr = 0x8305B7A0;
	sub_830FFAA8(ctx, base);
	// cmplwi cr6,r3,19
	cr6.compare<uint32_t>(ctx.r3.u32, 19, xer);
	// bne cr6,0x8305b8c8
	if (!cr6.eq) goto loc_8305B8C8;
	// lis r31,506
	ctx.r31.s64 = 33161216;
	// ori r31,r31,225
	ctx.r31.u64 = ctx.r31.u64 | 225;
	// b 0x8305b8dc
	goto loc_8305B8DC;
loc_8305B7B4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83129788
	ctx.lr = 0x8305B7BC;
	sub_83129788(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8305b7e4
	if (!cr6.eq) goto loc_8305B7E4;
	// bl 0x830ff290
	ctx.lr = 0x8305B7CC;
	sub_830FF290(ctx, base);
	// bl 0x830ffaa8
	ctx.lr = 0x8305B7D0;
	sub_830FFAA8(ctx, base);
	// cmplwi cr6,r3,19
	cr6.compare<uint32_t>(ctx.r3.u32, 19, xer);
	// bne cr6,0x8305b7e4
	if (!cr6.eq) goto loc_8305B7E4;
	// lis r31,506
	ctx.r31.s64 = 33161216;
	// ori r31,r31,225
	ctx.r31.u64 = ctx.r31.u64 | 225;
	// b 0x8305b8dc
	goto loc_8305B8DC;
loc_8305B7E4:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8305b308
	ctx.lr = 0x8305B7EC;
	sub_8305B308(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8305b804
	if (cr6.eq) goto loc_8305B804;
	// lis r31,515
	ctx.r31.s64 = 33751040;
	// ori r31,r31,64
	ctx.r31.u64 = ctx.r31.u64 | 64;
	// b 0x8305b8dc
	goto loc_8305B8DC;
loc_8305B804:
	// lis r31,510
	ctx.r31.s64 = 33423360;
	// ori r31,r31,12
	ctx.r31.u64 = ctx.r31.u64 | 12;
	// b 0x8305b8dc
	goto loc_8305B8DC;
loc_8305B810:
	// bl 0x83129788
	ctx.lr = 0x8305B814;
	sub_83129788(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8305b8dc
	if (cr6.eq) goto loc_8305B8DC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825832f0
	ctx.lr = 0x8305B828;
	sub_825832F0(ctx, base);
	// cmplwi cr6,r3,26
	cr6.compare<uint32_t>(ctx.r3.u32, 26, xer);
	// bgt cr6,0x8305b8dc
	if (cr6.gt) goto loc_8305B8DC;
	// lis r12,-31994
	ctx.r12.s64 = -2096758784;
	// rlwinm r0,r3,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-18360
	ctx.r12.s64 = ctx.r12.s64 + -18360;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r3.u32) {
	case 0:
		goto loc_8305B8C0;
	case 1:
		goto loc_8305B8D4;
	case 2:
		goto loc_8305B8DC;
	case 3:
		goto loc_8305B8DC;
	case 4:
		goto loc_8305B8DC;
	case 5:
		goto loc_8305B8DC;
	case 6:
		goto loc_8305B8DC;
	case 7:
		goto loc_8305B8DC;
	case 8:
		goto loc_8305B8DC;
	case 9:
		goto loc_8305B8DC;
	case 10:
		goto loc_8305B8DC;
	case 11:
		goto loc_8305B8DC;
	case 12:
		goto loc_8305B8B4;
	case 13:
		goto loc_8305B8C8;
	case 14:
		goto loc_8305B8C0;
	case 15:
		goto loc_8305B8C0;
	case 16:
		goto loc_8305B8DC;
	case 17:
		goto loc_8305B8DC;
	case 18:
		goto loc_8305B8DC;
	case 19:
		goto loc_8305B8DC;
	case 20:
		goto loc_8305B8DC;
	case 21:
		goto loc_8305B8DC;
	case 22:
		goto loc_8305B8DC;
	case 23:
		goto loc_8305B8DC;
	case 24:
		goto loc_8305B8DC;
	case 25:
		goto loc_8305B8C8;
	case 26:
		goto loc_8305B8C8;
	default:
		return;
	}
	// lwz r24,-18240(r5)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r5.u32 + -18240);
	// lwz r24,-18220(r5)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r5.u32 + -18220);
	// lwz r24,-18212(r5)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r5.u32 + -18212);
	// lwz r24,-18212(r5)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r5.u32 + -18212);
	// lwz r24,-18212(r5)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r5.u32 + -18212);
	// lwz r24,-18212(r5)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r5.u32 + -18212);
	// lwz r24,-18212(r5)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r5.u32 + -18212);
	// lwz r24,-18212(r5)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r5.u32 + -18212);
	// lwz r24,-18212(r5)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r5.u32 + -18212);
	// lwz r24,-18212(r5)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r5.u32 + -18212);
	// lwz r24,-18212(r5)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r5.u32 + -18212);
	// lwz r24,-18212(r5)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r5.u32 + -18212);
	// lwz r24,-18252(r5)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r5.u32 + -18252);
	// lwz r24,-18232(r5)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r5.u32 + -18232);
	// lwz r24,-18240(r5)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r5.u32 + -18240);
	// lwz r24,-18240(r5)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r5.u32 + -18240);
	// lwz r24,-18212(r5)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r5.u32 + -18212);
	// lwz r24,-18212(r5)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r5.u32 + -18212);
	// lwz r24,-18212(r5)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r5.u32 + -18212);
	// lwz r24,-18212(r5)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r5.u32 + -18212);
	// lwz r24,-18212(r5)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r5.u32 + -18212);
	// lwz r24,-18212(r5)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r5.u32 + -18212);
	// lwz r24,-18212(r5)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r5.u32 + -18212);
	// lwz r24,-18212(r5)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r5.u32 + -18212);
	// lwz r24,-18212(r5)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r5.u32 + -18212);
	// lwz r24,-18232(r5)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r5.u32 + -18232);
	// lwz r24,-18232(r5)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r5.u32 + -18232);
loc_8305B8B4:
	// lis r31,515
	ctx.r31.s64 = 33751040;
	// ori r31,r31,38
	ctx.r31.u64 = ctx.r31.u64 | 38;
	// b 0x8305b8dc
	goto loc_8305B8DC;
loc_8305B8C0:
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
	// b 0x8305b8dc
	goto loc_8305B8DC;
loc_8305B8C8:
	// lis r31,506
	ctx.r31.s64 = 33161216;
	// ori r31,r31,223
	ctx.r31.u64 = ctx.r31.u64 | 223;
	// b 0x8305b8dc
	goto loc_8305B8DC;
loc_8305B8D4:
	// lis r31,506
	ctx.r31.s64 = 33161216;
	// ori r31,r31,56
	ctx.r31.u64 = ctx.r31.u64 | 56;
loc_8305B8DC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82dfa5c8
	ctx.lr = 0x8305B8E4;
	sub_82DFA5C8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8305b924
	if (!cr6.eq) goto loc_8305B924;
	// bl 0x82d95ee0
	ctx.lr = 0x8305B8F4;
	sub_82D95EE0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x8305b924
	if (!cr6.eq) goto loc_8305B924;
	// bl 0x82d96060
	ctx.lr = 0x8305B904;
	sub_82D96060(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8305b924
	if (!cr6.eq) goto loc_8305B924;
	// lwz r3,28(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// bl 0x82da2518
	ctx.lr = 0x8305B918;
	sub_82DA2518(ctx, base);
	// bl 0x82df14e0
	ctx.lr = 0x8305B91C;
	sub_82DF14E0(ctx, base);
	// cmpldi cr6,r3,0
	cr6.compare<uint64_t>(ctx.r3.u64, 0, xer);
	// bgt cr6,0x8305ba5c
	if (cr6.gt) goto loc_8305BA5C;
loc_8305B924:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x8305ba5c
	if (cr6.eq) goto loc_8305BA5C;
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// li r6,6
	ctx.r6.s64 = 6;
	// addi r3,r11,-21276
	ctx.r3.s64 = ctx.r11.s64 + -21276;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2fa90
	ctx.lr = 0x8305B944;
	sub_82D2FA90(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8305ba5c
	if (cr6.eq) goto loc_8305BA5C;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x82d19a30
	ctx.lr = 0x8305B958;
	sub_82D19A30(ctx, base);
	// lwz r9,124(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 124);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,15
	ctx.r10.s64 = 15;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// cmplwi cr6,r9,1
	cr6.compare<uint32_t>(ctx.r9.u32, 1, xer);
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// bne cr6,0x8305ba78
	if (!cr6.eq) goto loc_8305BA78;
	// lwz r9,120(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 120);
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r7,24(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 24);
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x8305ba78
	if (cr6.eq) goto loc_8305BA78;
	// cmplw cr6,r31,r27
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r27.u32, xer);
	// bne cr6,0x8305ba64
	if (!cr6.eq) goto loc_8305BA64;
	// lis r31,506
	ctx.r31.s64 = 33161216;
	// ori r31,r31,242
	ctx.r31.u64 = ctx.r31.u64 | 242;
loc_8305B99C:
	// lwz r9,120(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 120);
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// stb r11,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r11.u8);
	// stw r10,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r10.u32);
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// lwz r8,20(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmplwi cr6,r8,16
	cr6.compare<uint32_t>(ctx.r8.u32, 16, xer);
	// blt cr6,0x8305b9c4
	if (cr6.lt) goto loc_8305B9C4;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_8305B9C4:
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82d042a8
	ctx.lr = 0x8305B9D4;
	sub_82D042A8(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8387e8e0
	ctx.lr = 0x8305B9DC;
	sub_8387E8E0(ctx, base);
loc_8305B9DC:
	// stw r30,96(r28)
	PPC_STORE_U32(ctx.r28.u32 + 96, ctx.r30.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d19788
	ctx.lr = 0x8305B9F0;
	sub_82D19788(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,96(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 96);
	// bl 0x82d2aab0
	ctx.lr = 0x8305B9FC;
	sub_82D2AAB0(ctx, base);
	// bl 0x830ff290
	ctx.lr = 0x8305BA00;
	sub_830FF290(ctx, base);
	// bl 0x830ffaa8
	ctx.lr = 0x8305BA04;
	sub_830FFAA8(ctx, base);
	// cmplwi cr6,r3,19
	cr6.compare<uint32_t>(ctx.r3.u32, 19, xer);
	// bne cr6,0x8305ba28
	if (!cr6.eq) goto loc_8305BA28;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,96(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 96);
	// li r4,30000
	ctx.r4.s64 = 30000;
	// bl 0x82d29e28
	ctx.lr = 0x8305BA1C;
	sub_82D29E28(ctx, base);
	// li r3,30
	ctx.r3.s64 = 30;
	// bl 0x82d47a58
	ctx.lr = 0x8305BA24;
	sub_82D47A58(ctx, base);
	// bl 0x82d476f0
	ctx.lr = 0x8305BA28;
	sub_82D476F0(ctx, base);
loc_8305BA28:
	// bl 0x82d95ee0
	ctx.lr = 0x8305BA2C;
	sub_82D95EE0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x8305ba48
	if (!cr6.eq) goto loc_8305BA48;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,96(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 96);
	// li r4,5000
	ctx.r4.s64 = 5000;
	// bl 0x82d29e28
	ctx.lr = 0x8305BA48;
	sub_82D29E28(ctx, base);
loc_8305BA48:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r4,96(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 96);
	// bl 0x83103100
	ctx.lr = 0x8305BA54;
	sub_83103100(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8387e8e0
	ctx.lr = 0x8305BA5C;
	sub_8387E8E0(ctx, base);
loc_8305BA5C:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_8305BA64:
	// cmplw cr6,r31,r26
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r26.u32, xer);
	// bne cr6,0x8305ba78
	if (!cr6.eq) goto loc_8305BA78;
	// lis r31,506
	ctx.r31.s64 = 33161216;
	// ori r31,r31,241
	ctx.r31.u64 = ctx.r31.u64 | 241;
	// b 0x8305b99c
	goto loc_8305B99C;
loc_8305BA78:
	// lis r9,506
	ctx.r9.s64 = 33161216;
	// ori r8,r9,241
	ctx.r8.u64 = ctx.r9.u64 | 241;
	// cmplw cr6,r31,r8
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r8.u32, xer);
	// beq cr6,0x8305b99c
	if (cr6.eq) goto loc_8305B99C;
	// lis r9,506
	ctx.r9.s64 = 33161216;
	// ori r8,r9,242
	ctx.r8.u64 = ctx.r9.u64 | 242;
	// cmplw cr6,r31,r8
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r8.u32, xer);
	// beq cr6,0x8305b99c
	if (cr6.eq) goto loc_8305B99C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82d04220
	ctx.lr = 0x8305BAA4;
	sub_82D04220(ctx, base);
	// b 0x8305b9dc
	goto loc_8305B9DC;
}

__attribute__((alias("__imp__sub_8305BAA8"))) PPC_WEAK_FUNC(sub_8305BAA8);
PPC_FUNC_IMPL(__imp__sub_8305BAA8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x8305BAB0;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82e6f960
	ctx.lr = 0x8305BAB8;
	sub_82E6F960(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x82d86078
	ctx.lr = 0x8305BAC0;
	sub_82D86078(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82e6e978
	ctx.lr = 0x8305BAC8;
	sub_82E6E978(ctx, base);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x8305bba0
	if (cr6.eq) goto loc_8305BBA0;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x8305bba0
	if (cr6.eq) goto loc_8305BBA0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8305bba0
	if (cr6.eq) goto loc_8305BBA0;
	// lwz r31,32(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r30,32(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82dfa5c8
	ctx.lr = 0x8305BAF0;
	sub_82DFA5C8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8305bb0c
	if (cr6.eq) goto loc_8305BB0C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83578d58
	ctx.lr = 0x8305BB04;
	sub_83578D58(ctx, base);
	// lwz r11,1948(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1948);
	// stw r11,224(r30)
	PPC_STORE_U32(ctx.r30.u32 + 224, ctx.r11.u32);
loc_8305BB0C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825832f0
	ctx.lr = 0x8305BB14;
	sub_825832F0(ctx, base);
	// stw r3,228(r30)
	PPC_STORE_U32(ctx.r30.u32 + 228, ctx.r3.u32);
	// bl 0x82e7e2f8
	ctx.lr = 0x8305BB1C;
	sub_82E7E2F8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8305bb84
	if (cr6.eq) goto loc_8305BB84;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,15
	ctx.r10.s64 = 15;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// bl 0x82e7e8e8
	ctx.lr = 0x8305BB40;
	sub_82E7E8E8(ctx, base);
	// lwz r9,100(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// bge cr6,0x8305bb54
	if (!cr6.lt) goto loc_8305BB54;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
loc_8305BB54:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_8305BB58:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8305bb58
	if (!cr6.eq) goto loc_8305BB58;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r30,232
	ctx.r3.s64 = ctx.r30.s64 + 232;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x8305BB7C;
	sub_8259CC28(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8387e8e0
	ctx.lr = 0x8305BB84;
	sub_8387E8E0(ctx, base);
loc_8305BB84:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82e70510
	ctx.lr = 0x8305BB8C;
	sub_82E70510(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8305bba0
	if (!cr6.eq) goto loc_8305BBA0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82e70610
	ctx.lr = 0x8305BBA0;
	sub_82E70610(ctx, base);
loc_8305BBA0:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8305BBA8"))) PPC_WEAK_FUNC(sub_8305BBA8);
PPC_FUNC_IMPL(__imp__sub_8305BBA8) {
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
	// lbz r11,117(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 117);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8305bc24
	if (!cr6.eq) goto loc_8305BC24;
	// bl 0x82d86078
	ctx.lr = 0x8305BBD4;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8305bc24
	if (cr6.eq) goto loc_8305BC24;
	// lwz r3,32(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// bl 0x82a47e40
	ctx.lr = 0x8305BBE4;
	sub_82A47E40(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// beq cr6,0x8305bc24
	if (cr6.eq) goto loc_8305BC24;
	// cmpldi cr6,r30,30000
	cr6.compare<uint64_t>(ctx.r30.u64, 30000, xer);
	// blt cr6,0x8305bc24
	if (cr6.lt) goto loc_8305BC24;
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-21252
	ctx.r4.s64 = ctx.r11.s64 + -21252;
	// bl 0x837b0c10
	ctx.lr = 0x8305BC08;
	sub_837B0C10(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d894e0
	ctx.lr = 0x8305BC14;
	sub_82D894E0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8387e8e0
	ctx.lr = 0x8305BC1C;
	sub_8387E8E0(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,117(r31)
	PPC_STORE_U8(ctx.r31.u32 + 117, ctx.r10.u8);
loc_8305BC24:
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

__attribute__((alias("__imp__sub_8305BC3C"))) PPC_WEAK_FUNC(sub_8305BC3C);
PPC_FUNC_IMPL(__imp__sub_8305BC3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8305BC40"))) PPC_WEAK_FUNC(sub_8305BC40);
PPC_FUNC_IMPL(__imp__sub_8305BC40) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x8305BC48;
	__savegprlr_25(ctx, base);
	// stwu r1,-2368(r1)
	ea = -2368 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// bl 0x82d86078
	ctx.lr = 0x8305BC5C;
	sub_82D86078(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8305bfbc
	if (cr6.eq) goto loc_8305BFBC;
	// lwz r25,32(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// li r30,0
	ctx.r30.s64 = 0;
	// bl 0x82d860f0
	ctx.lr = 0x8305BC74;
	sub_82D860F0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x83578d58
	ctx.lr = 0x8305BC80;
	sub_83578D58(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// bl 0x8301afe0
	ctx.lr = 0x8305BC8C;
	sub_8301AFE0(ctx, base);
	// lwz r9,352(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 352);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8305bcd0
	if (cr6.eq) goto loc_8305BCD0;
	// addi r10,r1,392
	ctx.r10.s64 = ctx.r1.s64 + 392;
loc_8305BCA0:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r8,r31
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r31.u32, xer);
	// beq cr6,0x8305bcc0
	if (cr6.eq) goto loc_8305BCC0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,88
	ctx.r10.s64 = ctx.r10.s64 + 88;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// blt cr6,0x8305bca0
	if (cr6.lt) goto loc_8305BCA0;
	// b 0x8305bcd0
	goto loc_8305BCD0;
loc_8305BCC0:
	// mulli r11,r11,88
	ctx.r11.s64 = ctx.r11.s64 * 88;
	// addi r10,r1,440
	ctx.r10.s64 = ctx.r1.s64 + 440;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// clrlwi r30,r9,24
	ctx.r30.u64 = ctx.r9.u32 & 0xFF;
loc_8305BCD0:
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r11,5
	cr6.compare<uint32_t>(ctx.r11.u32, 5, xer);
	// blt cr6,0x8305bd20
	if (cr6.lt) goto loc_8305BD20;
	// bl 0x830ff290
	ctx.lr = 0x8305BCE0;
	sub_830FF290(ctx, base);
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmplwi cr6,r11,44
	cr6.compare<uint32_t>(ctx.r11.u32, 44, xer);
	// beq cr6,0x8305bd18
	if (cr6.eq) goto loc_8305BD18;
	// cmplwi cr6,r11,53
	cr6.compare<uint32_t>(ctx.r11.u32, 53, xer);
	// bne cr6,0x8305bd20
	if (!cr6.eq) goto loc_8305BD20;
	// lwz r3,116(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 116);
	// bl 0x825832f0
	ctx.lr = 0x8305BCFC;
	sub_825832F0(ctx, base);
	// lbz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8305bd10
	if (cr6.eq) goto loc_8305BD10;
	// li r3,218
	ctx.r3.s64 = 218;
	// b 0x8305bd1c
	goto loc_8305BD1C;
loc_8305BD10:
	// li r3,208
	ctx.r3.s64 = 208;
	// b 0x8305bd1c
	goto loc_8305BD1C;
loc_8305BD18:
	// li r3,198
	ctx.r3.s64 = 198;
loc_8305BD1C:
	// bl 0x82d84728
	ctx.lr = 0x8305BD20;
	sub_82D84728(ctx, base);
loc_8305BD20:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8305b308
	ctx.lr = 0x8305BD28;
	sub_8305B308(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8305be58
	if (cr6.eq) goto loc_8305BE58;
	// bl 0x830ff290
	ctx.lr = 0x8305BD38;
	sub_830FF290(ctx, base);
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmplwi cr6,r11,46
	cr6.compare<uint32_t>(ctx.r11.u32, 46, xer);
	// beq cr6,0x8305be50
	if (cr6.eq) goto loc_8305BE50;
	// cmplwi cr6,r11,47
	cr6.compare<uint32_t>(ctx.r11.u32, 47, xer);
	// bne cr6,0x8305be58
	if (!cr6.eq) goto loc_8305BE58;
	// li r3,376
	ctx.r3.s64 = 376;
	// bl 0x82d84728
	ctx.lr = 0x8305BD54;
	sub_82D84728(ctx, base);
	// bl 0x82d86078
	ctx.lr = 0x8305BD58;
	sub_82D86078(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8305be58
	if (cr6.eq) goto loc_8305BE58;
	// lwz r3,20(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// bl 0x82dbb5c0
	ctx.lr = 0x8305BD6C;
	sub_82DBB5C0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8305be58
	if (cr6.eq) goto loc_8305BE58;
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// li r30,0
	ctx.r30.s64 = 0;
	// bl 0x831f81f8
	ctx.lr = 0x8305BD84;
	sub_831F81F8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82b73340
	ctx.lr = 0x8305BD90;
	sub_82B73340(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82dbbf30
	ctx.lr = 0x8305BD9C;
	sub_82DBBF30(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x8305bdd0
	if (!cr6.eq) goto loc_8305BDD0;
	// lwz r3,224(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// bl 0x82dcb990
	ctx.lr = 0x8305BDB0;
	sub_82DCB990(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8305bdc4
	if (cr6.eq) goto loc_8305BDC4;
	// li r30,1
	ctx.r30.s64 = 1;
	// b 0x8305bdd0
	goto loc_8305BDD0;
loc_8305BDC4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82dbc190
	ctx.lr = 0x8305BDCC;
	sub_82DBC190(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_8305BDD0:
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8305be44
	if (cr6.eq) goto loc_8305BE44;
	// lwz r11,300(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 300);
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// bgt cr6,0x8305be44
	if (cr6.gt) goto loc_8305BE44;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x8305be3c
	if (cr6.eq) goto loc_8305BE3C;
	// bdz 0x8305be28
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_8305BE28;
	// bdz 0x8305be14
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_8305BE14;
	// li r3,379
	ctx.r3.s64 = 379;
	// bl 0x82d84728
	ctx.lr = 0x8305BE08;
	sub_82D84728(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82b73218
	ctx.lr = 0x8305BE10;
	sub_82B73218(ctx, base);
	// b 0x8305be58
	goto loc_8305BE58;
loc_8305BE14:
	// li r3,380
	ctx.r3.s64 = 380;
	// bl 0x82d84728
	ctx.lr = 0x8305BE1C;
	sub_82D84728(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82b73218
	ctx.lr = 0x8305BE24;
	sub_82B73218(ctx, base);
	// b 0x8305be58
	goto loc_8305BE58;
loc_8305BE28:
	// li r3,381
	ctx.r3.s64 = 381;
	// bl 0x82d84728
	ctx.lr = 0x8305BE30;
	sub_82D84728(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82b73218
	ctx.lr = 0x8305BE38;
	sub_82B73218(ctx, base);
	// b 0x8305be58
	goto loc_8305BE58;
loc_8305BE3C:
	// li r3,382
	ctx.r3.s64 = 382;
	// bl 0x82d84728
	ctx.lr = 0x8305BE44;
	sub_82D84728(ctx, base);
loc_8305BE44:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82b73218
	ctx.lr = 0x8305BE4C;
	sub_82B73218(ctx, base);
	// b 0x8305be58
	goto loc_8305BE58;
loc_8305BE50:
	// li r3,375
	ctx.r3.s64 = 375;
	// bl 0x82d84728
	ctx.lr = 0x8305BE58;
	sub_82D84728(ctx, base);
loc_8305BE58:
	// li r30,0
	ctx.r30.s64 = 0;
	// bl 0x82d86078
	ctx.lr = 0x8305BE60;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8305be70
	if (!cr6.eq) goto loc_8305BE70;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x8305bea4
	goto loc_8305BEA4;
loc_8305BE70:
	// lwz r31,32(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82dfa5c8
	ctx.lr = 0x8305BE7C;
	sub_82DFA5C8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x8305bea0
	if (!cr6.eq) goto loc_8305BEA0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83578d58
	ctx.lr = 0x8305BE90;
	sub_83578D58(ctx, base);
	// lwz r11,1948(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1948);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x8305bea0
	if (!cr6.eq) goto loc_8305BEA0;
	// li r30,1
	ctx.r30.s64 = 1;
loc_8305BEA0:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_8305BEA4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8305bed4
	if (!cr6.eq) goto loc_8305BED4;
	// addi r31,r1,2296
	ctx.r31.s64 = ctx.r1.s64 + 2296;
	// li r30,21
	ctx.r30.s64 = 21;
loc_8305BEB8:
	// addi r31,r31,-88
	ctx.r31.s64 = ctx.r31.s64 + -88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82da8c38
	ctx.lr = 0x8305BEC4;
	sub_82DA8C38(ctx, base);
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// bge 0x8305beb8
	if (!cr0.lt) goto loc_8305BEB8;
	// addi r1,r1,2368
	ctx.r1.s64 = ctx.r1.s64 + 2368;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_8305BED4:
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, xer);
	// beq cr6,0x8305bfb4
	if (cr6.eq) goto loc_8305BFB4;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r27,4
	ctx.r3.s64 = ctx.r27.s64 + 4;
	// bl 0x8291ad98
	ctx.lr = 0x8305BEE8;
	sub_8291AD98(ctx, base);
	// li r4,5
	ctx.r4.s64 = 5;
	// bl 0x82919698
	ctx.lr = 0x8305BEF0;
	sub_82919698(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// blt cr6,0x8305bfb4
	if (cr6.lt) goto loc_8305BFB4;
	// bl 0x82d95ee0
	ctx.lr = 0x8305BF00;
	sub_82D95EE0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8305bf60
	if (cr6.eq) goto loc_8305BF60;
	// bl 0x82d95f98
	ctx.lr = 0x8305BF10;
	sub_82D95F98(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8305bf48
	if (cr6.eq) goto loc_8305BF48;
	// bl 0x82d95fe0
	ctx.lr = 0x8305BF20;
	sub_82D95FE0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// subfic r10,r11,0
	xer.ca = ctx.r11.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r11.s64;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// rlwinm r11,r9,0,29,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x6;
	// addi r3,r11,233
	ctx.r3.s64 = ctx.r11.s64 + 233;
	// bl 0x82d84728
	ctx.lr = 0x8305BF38;
	sub_82D84728(ctx, base);
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// bl 0x82da1e28
	ctx.lr = 0x8305BF40;
	sub_82DA1E28(ctx, base);
	// addi r1,r1,2368
	ctx.r1.s64 = ctx.r1.s64 + 2368;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_8305BF48:
	// li r3,199
	ctx.r3.s64 = 199;
	// bl 0x82d84728
	ctx.lr = 0x8305BF50;
	sub_82D84728(ctx, base);
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// bl 0x82da1e28
	ctx.lr = 0x8305BF58;
	sub_82DA1E28(ctx, base);
	// addi r1,r1,2368
	ctx.r1.s64 = ctx.r1.s64 + 2368;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_8305BF60:
	// bl 0x830ff290
	ctx.lr = 0x8305BF64;
	sub_830FF290(ctx, base);
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmplwi cr6,r11,44
	cr6.compare<uint32_t>(ctx.r11.u32, 44, xer);
	// beq cr6,0x8305bfac
	if (cr6.eq) goto loc_8305BFAC;
	// cmplwi cr6,r11,53
	cr6.compare<uint32_t>(ctx.r11.u32, 53, xer);
	// bne cr6,0x8305bfb4
	if (!cr6.eq) goto loc_8305BFB4;
	// lwz r3,116(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 116);
	// bl 0x825832f0
	ctx.lr = 0x8305BF80;
	sub_825832F0(ctx, base);
	// lbz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 8);
	// subfic r10,r11,0
	xer.ca = ctx.r11.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r11.s64;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// rlwinm r11,r9,0,28,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xE;
	// rlwinm r11,r11,0,30,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// addi r3,r11,207
	ctx.r3.s64 = ctx.r11.s64 + 207;
	// bl 0x82d84728
	ctx.lr = 0x8305BF9C;
	sub_82D84728(ctx, base);
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// bl 0x82da1e28
	ctx.lr = 0x8305BFA4;
	sub_82DA1E28(ctx, base);
	// addi r1,r1,2368
	ctx.r1.s64 = ctx.r1.s64 + 2368;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_8305BFAC:
	// li r3,197
	ctx.r3.s64 = 197;
	// bl 0x82d84728
	ctx.lr = 0x8305BFB4;
	sub_82D84728(ctx, base);
loc_8305BFB4:
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// bl 0x82da1e28
	ctx.lr = 0x8305BFBC;
	sub_82DA1E28(ctx, base);
loc_8305BFBC:
	// addi r1,r1,2368
	ctx.r1.s64 = ctx.r1.s64 + 2368;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8305BFC4"))) PPC_WEAK_FUNC(sub_8305BFC4);
PPC_FUNC_IMPL(__imp__sub_8305BFC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8305BFC8"))) PPC_WEAK_FUNC(sub_8305BFC8);
PPC_FUNC_IMPL(__imp__sub_8305BFC8) {
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
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-21144
	ctx.r9.s64 = ctx.r11.s64 + -21144;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r8,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r8.u32);
	// bl 0x82e6e978
	ctx.lr = 0x8305BFF8;
	sub_82E6E978(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8305c008
	if (cr6.eq) goto loc_8305C008;
	// lwz r3,32(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// bl 0x82e8ec10
	ctx.lr = 0x8305C008;
	sub_82E8EC10(ctx, base);
loc_8305C008:
	// bl 0x839837e8
	ctx.lr = 0x8305C00C;
	sub_839837E8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8305c018
	if (cr6.eq) goto loc_8305C018;
	// bl 0x83983aa0
	ctx.lr = 0x8305C018;
	sub_83983AA0(ctx, base);
loc_8305C018:
	// bl 0x82e7e2f8
	ctx.lr = 0x8305C01C;
	sub_82E7E2F8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8305c02c
	if (cr6.eq) goto loc_8305C02C;
	// bl 0x82e7e2f8
	ctx.lr = 0x8305C028;
	sub_82E7E2F8(ctx, base);
	// bl 0x82e7ef40
	ctx.lr = 0x8305C02C;
	sub_82E7EF40(ctx, base);
loc_8305C02C:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82d482c0
	ctx.lr = 0x8305C034;
	sub_82D482C0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82d17aa0
	ctx.lr = 0x8305C03C;
	sub_82D17AA0(ctx, base);
	// bl 0x82d73f90
	ctx.lr = 0x8305C040;
	sub_82D73F90(ctx, base);
	// addi r3,r31,120
	ctx.r3.s64 = ctx.r31.s64 + 120;
	// bl 0x82dc0998
	ctx.lr = 0x8305C048;
	sub_82DC0998(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,120(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x8305C05C;
	sub_825952B8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f42278
	ctx.lr = 0x8305C064;
	sub_82F42278(ctx, base);
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

__attribute__((alias("__imp__sub_8305C078"))) PPC_WEAK_FUNC(sub_8305C078);
PPC_FUNC_IMPL(__imp__sub_8305C078) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad4
	ctx.lr = 0x8305C080;
	__savegprlr_23(ctx, base);
	// stfd f31,-88(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -88, ctx.f31.u64);
	// stwu r1,-2144(r1)
	ea = -2144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82d86078
	ctx.lr = 0x8305C090;
	sub_82D86078(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8305c148
	if (cr6.eq) goto loc_8305C148;
	// lwz r3,124(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 124);
	// bl 0x82df8200
	ctx.lr = 0x8305C0A4;
	sub_82DF8200(ctx, base);
	// bl 0x82d95ee0
	ctx.lr = 0x8305C0A8;
	sub_82D95EE0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8305c0bc
	if (cr6.eq) goto loc_8305C0BC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8305b178
	ctx.lr = 0x8305C0BC;
	sub_8305B178(ctx, base);
loc_8305C0BC:
	// bl 0x839837e8
	ctx.lr = 0x8305C0C0;
	sub_839837E8(ctx, base);
	// lwz r11,32(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x83578d58
	ctx.lr = 0x8305C0D0;
	sub_83578D58(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8301afe0
	ctx.lr = 0x8305C0DC;
	sub_8301AFE0(ctx, base);
	// bl 0x82d860f0
	ctx.lr = 0x8305C0E0;
	sub_82D860F0(ctx, base);
	// lwz r9,96(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r23,0
	ctx.r23.s64 = 0;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
	// beq cr6,0x8305c12c
	if (cr6.eq) goto loc_8305C12C;
	// addi r10,r1,136
	ctx.r10.s64 = ctx.r1.s64 + 136;
loc_8305C0F8:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r8,r3
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r3.u32, xer);
	// beq cr6,0x8305c118
	if (cr6.eq) goto loc_8305C118;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,88
	ctx.r10.s64 = ctx.r10.s64 + 88;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// blt cr6,0x8305c0f8
	if (cr6.lt) goto loc_8305C0F8;
	// b 0x8305c12c
	goto loc_8305C12C;
loc_8305C118:
	// mulli r11,r11,88
	ctx.r11.s64 = ctx.r11.s64 * 88;
	// addi r10,r1,180
	ctx.r10.s64 = ctx.r1.s64 + 180;
	// lwzx r30,r11,r10
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmpwi cr6,r30,2
	cr6.compare<int32_t>(ctx.r30.s32, 2, xer);
	// blt cr6,0x8305c158
	if (cr6.lt) goto loc_8305C158;
loc_8305C12C:
	// addi r31,r1,2040
	ctx.r31.s64 = ctx.r1.s64 + 2040;
	// li r30,21
	ctx.r30.s64 = 21;
loc_8305C134:
	// addi r31,r31,-88
	ctx.r31.s64 = ctx.r31.s64 + -88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82da8c38
	ctx.lr = 0x8305C140;
	sub_82DA8C38(ctx, base);
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// bge 0x8305c134
	if (!cr0.lt) goto loc_8305C134;
loc_8305C148:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,2144
	ctx.r1.s64 = ctx.r1.s64 + 2144;
	// lfd f31,-88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
loc_8305C158:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8305bc40
	ctx.lr = 0x8305C168;
	sub_8305BC40(ctx, base);
	// mr r31,r23
	ctx.r31.u64 = ctx.r23.u64;
	// bl 0x82d86078
	ctx.lr = 0x8305C170;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8305c17c
	if (!cr6.eq) goto loc_8305C17C;
	// b 0x8305c1ac
	goto loc_8305C1AC;
loc_8305C17C:
	// lwz r29,32(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82dfa5c8
	ctx.lr = 0x8305C188;
	sub_82DFA5C8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x8305c1ac
	if (!cr6.eq) goto loc_8305C1AC;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83578d58
	ctx.lr = 0x8305C19C;
	sub_83578D58(ctx, base);
	// lwz r11,1948(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1948);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x8305c1ac
	if (!cr6.eq) goto loc_8305C1AC;
	// li r31,1
	ctx.r31.s64 = 1;
loc_8305C1AC:
	// clrlwi r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8305c1d0
	if (!cr6.eq) goto loc_8305C1D0;
loc_8305C1B8:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82da1e28
	ctx.lr = 0x8305C1C0;
	sub_82DA1E28(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,2144
	ctx.r1.s64 = ctx.r1.s64 + 2144;
	// lfd f31,-88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
loc_8305C1D0:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// beq cr6,0x8305c310
	if (cr6.eq) goto loc_8305C310;
	// bl 0x82d86078
	ctx.lr = 0x8305C1DC;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8305c1f0
	if (cr6.eq) goto loc_8305C1F0;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r3,124(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 124);
	// bl 0x82df8370
	ctx.lr = 0x8305C1F0;
	sub_82DF8370(ctx, base);
loc_8305C1F0:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r28,4
	ctx.r3.s64 = ctx.r28.s64 + 4;
	// bl 0x8291ad98
	ctx.lr = 0x8305C1FC;
	sub_8291AD98(ctx, base);
	// lwz r11,104(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 104);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lbz r25,524(r11)
	ctx.r25.u64 = PPC_LOAD_U8(ctx.r11.u32 + 524);
	// ld r24,516(r11)
	ctx.r24.u64 = PPC_LOAD_U64(ctx.r11.u32 + 516);
	// bl 0x82dd92d0
	ctx.lr = 0x8305C218;
	sub_82DD92D0(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-31773
	ctx.r11.s64 = -2082275328;
	// mr r29,r23
	ctx.r29.u64 = ctx.r23.u64;
	// mr r28,r23
	ctx.r28.u64 = ctx.r23.u64;
	// addi r30,r11,-6644
	ctx.r30.s64 = ctx.r11.s64 + -6644;
	// lfs f31,9008(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9008);
	ctx.f31.f64 = double(temp.f32);
loc_8305C230:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x829197e0
	ctx.lr = 0x8305C23C;
	sub_829197E0(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8305c25c
	if (!cr6.eq) goto loc_8305C25C;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r10,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// b 0x8305c284
	goto loc_8305C284;
loc_8305C25C:
	// lhz r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// lhz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// cmplw cr6,r9,r8
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, xer);
	// bne cr6,0x8305c27c
	if (!cr6.eq) goto loc_8305C27C;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x8305c280
	if (cr6.eq) goto loc_8305C280;
loc_8305C27C:
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
loc_8305C280:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_8305C284:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8305c2d8
	if (!cr6.eq) goto loc_8305C2D8;
	// lwz r11,4088(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4088);
	// cmpwi cr6,r11,13
	cr6.compare<int32_t>(ctx.r11.s32, 13, xer);
	// beq cr6,0x8305c2d8
	if (cr6.eq) goto loc_8305C2D8;
	// ld r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r30.u32 + 0);
	// stfs f31,92(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stw r23,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r23.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// ld r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// bl 0x8291aa00
	ctx.lr = 0x8305C2BC;
	sub_8291AA00(ctx, base);
	// stw r3,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// lfs f0,4148(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4148);
	ctx.f0.f64 = double(temp.f32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// lwz r3,104(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 104);
	// bl 0x82dd9310
	ctx.lr = 0x8305C2D4;
	sub_82DD9310(ctx, base);
	// li r29,1
	ctx.r29.s64 = 1;
loc_8305C2D8:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// cmplwi cr6,r28,32
	cr6.compare<uint32_t>(ctx.r28.u32, 32, xer);
	// blt cr6,0x8305c230
	if (cr6.lt) goto loc_8305C230;
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8305c1b8
	if (cr6.eq) goto loc_8305C1B8;
	// lwz r11,104(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 104);
	// clrlwi r10,r25,24
	ctx.r10.u64 = ctx.r25.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// std r24,516(r11)
	PPC_STORE_U64(ctx.r11.u32 + 516, ctx.r24.u64);
	// beq cr6,0x8305c310
	if (cr6.eq) goto loc_8305C310;
	// lwz r11,104(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 104);
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,524(r11)
	PPC_STORE_U8(ctx.r11.u32 + 524, ctx.r10.u8);
loc_8305C310:
	// addi r31,r1,2040
	ctx.r31.s64 = ctx.r1.s64 + 2040;
	// li r30,21
	ctx.r30.s64 = 21;
loc_8305C318:
	// addi r31,r31,-88
	ctx.r31.s64 = ctx.r31.s64 + -88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82da8c38
	ctx.lr = 0x8305C324;
	sub_82DA8C38(ctx, base);
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// bge 0x8305c318
	if (!cr0.lt) goto loc_8305C318;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,2144
	ctx.r1.s64 = ctx.r1.s64 + 2144;
	// lfd f31,-88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8305C33C"))) PPC_WEAK_FUNC(sub_8305C33C);
PPC_FUNC_IMPL(__imp__sub_8305C33C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8305C340"))) PPC_WEAK_FUNC(sub_8305C340);
PPC_FUNC_IMPL(__imp__sub_8305C340) {
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
	// bl 0x8305bfc8
	ctx.lr = 0x8305C360;
	sub_8305BFC8(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8305c378
	if (cr6.eq) goto loc_8305C378;
	// bl 0x82416268
	ctx.lr = 0x8305C374;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8305C378:
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

__attribute__((alias("__imp__sub_8305C390"))) PPC_WEAK_FUNC(sub_8305C390);
PPC_FUNC_IMPL(__imp__sub_8305C390) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x8305C398;
	__savegprlr_28(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82e6f960
	ctx.lr = 0x8305C3A4;
	sub_82E6F960(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82e6fa08
	ctx.lr = 0x8305C3AC;
	sub_82E6FA08(ctx, base);
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,18
	cr6.compare<uint32_t>(ctx.r11.u32, 18, xer);
	// bgt cr6,0x8305c460
	if (cr6.gt) goto loc_8305C460;
	// lis r12,-31994
	ctx.r12.s64 = -2096758784;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-15404
	ctx.r12.s64 = ctx.r12.s64 + -15404;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_8305C420;
	case 1:
		goto loc_8305C4C0;
	case 2:
		goto loc_8305C560;
	case 3:
		goto loc_8305C588;
	case 4:
		goto loc_8305C5E0;
	case 5:
		goto loc_8305C64C;
	case 6:
		goto loc_8305C690;
	case 7:
		goto loc_8305C6F8;
	case 8:
		goto loc_8305C724;
	case 9:
		goto loc_8305C770;
	case 10:
		goto loc_8305C7D8;
	case 11:
		goto loc_8305C460;
	case 12:
		goto loc_8305C460;
	case 13:
		goto loc_8305C82C;
	case 14:
		goto loc_8305C874;
	case 15:
		goto loc_8305C8C0;
	case 16:
		goto loc_8305C92C;
	case 17:
		goto loc_8305C984;
	case 18:
		goto loc_8305C9F0;
	default:
		return;
	}
	// lwz r24,-15328(r5)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r5.u32 + -15328);
	// lwz r24,-15168(r5)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r5.u32 + -15168);
	// lwz r24,-15008(r5)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r5.u32 + -15008);
	// lwz r24,-14968(r5)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r5.u32 + -14968);
	// lwz r24,-14880(r5)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r5.u32 + -14880);
	// lwz r24,-14772(r5)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r5.u32 + -14772);
	// lwz r24,-14704(r5)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r5.u32 + -14704);
	// lwz r24,-14600(r5)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r5.u32 + -14600);
	// lwz r24,-14556(r5)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r5.u32 + -14556);
	// lwz r24,-14480(r5)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r5.u32 + -14480);
	// lwz r24,-14376(r5)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r5.u32 + -14376);
	// lwz r24,-15264(r5)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r5.u32 + -15264);
	// lwz r24,-15264(r5)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r5.u32 + -15264);
	// lwz r24,-14292(r5)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r5.u32 + -14292);
	// lwz r24,-14220(r5)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r5.u32 + -14220);
	// lwz r24,-14144(r5)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r5.u32 + -14144);
	// lwz r24,-14036(r5)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r5.u32 + -14036);
	// lwz r24,-13948(r5)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r5.u32 + -13948);
	// lwz r24,-13840(r5)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r5.u32 + -13840);
loc_8305C420:
	// bl 0x82eb2d10
	ctx.lr = 0x8305C424;
	sub_82EB2D10(ctx, base);
	// bl 0x82dad2e0
	ctx.lr = 0x8305C428;
	sub_82DAD2E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8305c43c
	if (cr6.eq) goto loc_8305C43C;
	// bl 0x82dad2e0
	ctx.lr = 0x8305C434;
	sub_82DAD2E0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82dad3e0
	ctx.lr = 0x8305C43C;
	sub_82DAD3E0(ctx, base);
loc_8305C43C:
	// bl 0x82d86078
	ctx.lr = 0x8305C440;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8305c46c
	if (cr6.eq) goto loc_8305C46C;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lbz r10,11(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 11);
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// bne cr6,0x8305c46c
	if (!cr6.eq) goto loc_8305C46C;
	// li r11,14
	ctx.r11.s64 = 14;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
loc_8305C460:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_8305C46C:
	// bl 0x82dad2f0
	ctx.lr = 0x8305C470;
	sub_82DAD2F0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8305b3c8
	ctx.lr = 0x8305C478;
	sub_8305B3C8(ctx, base);
	// bl 0x82d47978
	ctx.lr = 0x8305C47C;
	sub_82D47978(ctx, base);
	// bl 0x82f00728
	ctx.lr = 0x8305C480;
	sub_82F00728(ctx, base);
	// addis r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 65536;
	// addi r3,r3,19024
	ctx.r3.s64 = ctx.r3.s64 + 19024;
	// bl 0x82f11130
	ctx.lr = 0x8305C48C;
	sub_82F11130(ctx, base);
	// bl 0x831156e8
	ctx.lr = 0x8305C490;
	sub_831156E8(ctx, base);
	// lis r11,5
	ctx.r11.s64 = 327680;
	// lwz r10,52(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r8,r11,37454
	ctx.r8.u64 = ctx.r11.u64 | 37454;
	// stbx r9,r10,r8
	PPC_STORE_U8(ctx.r10.u32 + ctx.r8.u32, ctx.r9.u8);
	// bl 0x83a7d958
	ctx.lr = 0x8305C4A8;
	sub_83A7D958(ctx, base);
	// li r7,1
	ctx.r7.s64 = 1;
	// stw r3,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r3.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r7,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r7.u32);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_8305C4C0:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82d482c0
	ctx.lr = 0x8305C4C8;
	sub_82D482C0(ctx, base);
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8305c548
	if (cr6.eq) goto loc_8305C548;
	// bl 0x82d86078
	ctx.lr = 0x8305C4D8;
	sub_82D86078(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8305c548
	if (cr6.eq) goto loc_8305C548;
	// lwz r3,32(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// bl 0x82dfa5c8
	ctx.lr = 0x8305C4EC;
	sub_82DFA5C8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8305c548
	if (!cr6.eq) goto loc_8305C548;
	// lwz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// lbz r10,9(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 9);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8305c548
	if (!cr6.eq) goto loc_8305C548;
	// bl 0x82dce718
	ctx.lr = 0x8305C50C;
	sub_82DCE718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8305c548
	if (cr6.eq) goto loc_8305C548;
	// bl 0x83a7d958
	ctx.lr = 0x8305C518;
	sub_83A7D958(ctx, base);
	// bl 0x83524138
	ctx.lr = 0x8305C51C;
	sub_83524138(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,112(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// bl 0x83524138
	ctx.lr = 0x8305C528;
	sub_83524138(ctx, base);
	// subf r4,r3,r30
	ctx.r4.s64 = ctx.r30.s64 - ctx.r3.s64;
	// cmpldi cr6,r4,50000
	cr6.compare<uint64_t>(ctx.r4.u64, 50000, xer);
	// bge cr6,0x8305c548
	if (!cr6.lt) goto loc_8305C548;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8305bba8
	ctx.lr = 0x8305C53C;
	sub_8305BBA8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_8305C548:
	// bl 0x82dcea28
	ctx.lr = 0x8305C54C;
	sub_82DCEA28(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_8305C560:
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8305c574
	if (cr6.eq) goto loc_8305C574;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8305baa8
	ctx.lr = 0x8305C574;
	sub_8305BAA8(ctx, base);
loc_8305C574:
	// li r11,3
	ctx.r11.s64 = 3;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_8305C588:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8305c078
	ctx.lr = 0x8305C590;
	sub_8305C078(ctx, base);
	// bl 0x830ff290
	ctx.lr = 0x8305C594;
	sub_830FF290(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8305c5a0
	if (cr6.eq) goto loc_8305C5A0;
	// bl 0x830ffaa8
	ctx.lr = 0x8305C5A0;
	sub_830FFAA8(ctx, base);
loc_8305C5A0:
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r11,r11,-21284
	ctx.r11.s64 = ctx.r11.s64 + -21284;
	// addi r4,r11,-204
	ctx.r4.s64 = ctx.r11.s64 + -204;
	// bl 0x837b0c10
	ctx.lr = 0x8305C5B4;
	sub_837B0C10(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d894e0
	ctx.lr = 0x8305C5C0;
	sub_82D894E0(ctx, base);
	// stw r3,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r3.u32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8387e8e0
	ctx.lr = 0x8305C5CC;
	sub_8387E8E0(ctx, base);
	// li r10,4
	ctx.r10.s64 = 4;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r10,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r10.u32);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_8305C5E0:
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8305c638
	if (cr6.eq) goto loc_8305C638;
	// lwz r3,104(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8305c614
	if (cr6.eq) goto loc_8305C614;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8305C608;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8305c460
	if (cr6.eq) goto loc_8305C460;
loc_8305C614:
	// lwz r3,104(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8305c638
	if (cr6.eq) goto loc_8305C638;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8305C630;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r9.u32);
loc_8305C638:
	// li r11,5
	ctx.r11.s64 = 5;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_8305C64C:
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8305c674
	if (cr6.eq) goto loc_8305C674;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8305af88
	ctx.lr = 0x8305C660;
	sub_8305AF88(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8305c674
	if (!cr6.eq) goto loc_8305C674;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8305b4f8
	ctx.lr = 0x8305C674;
	sub_8305B4F8(ctx, base);
loc_8305C674:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82d482c0
	ctx.lr = 0x8305C67C;
	sub_82D482C0(ctx, base);
	// li r11,6
	ctx.r11.s64 = 6;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_8305C690:
	// bl 0x830ff290
	ctx.lr = 0x8305C694;
	sub_830FF290(ctx, base);
	// bl 0x82df1558
	ctx.lr = 0x8305C698;
	sub_82DF1558(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// beq cr6,0x8305c460
	if (cr6.eq) goto loc_8305C460;
	// bl 0x830ff290
	ctx.lr = 0x8305C6A8;
	sub_830FF290(ctx, base);
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmplwi cr6,r11,45
	cr6.compare<uint32_t>(ctx.r11.u32, 45, xer);
	// bne cr6,0x8305c6c0
	if (!cr6.eq) goto loc_8305C6C0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8305b078
	ctx.lr = 0x8305C6BC;
	sub_8305B078(ctx, base);
	// b 0x8305c6cc
	goto loc_8305C6CC;
loc_8305C6C0:
	// bl 0x82d26ed8
	ctx.lr = 0x8305C6C4;
	sub_82D26ED8(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82d26960
	ctx.lr = 0x8305C6CC;
	sub_82D26960(ctx, base);
loc_8305C6CC:
	// bl 0x837d59a0
	ctx.lr = 0x8305C6D0;
	sub_837D59A0(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// lfs f1,-24912(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -24912);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x837d60f8
	ctx.lr = 0x8305C6E4;
	sub_837D60F8(ctx, base);
	// li r10,7
	ctx.r10.s64 = 7;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r10,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r10.u32);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_8305C6F8:
	// bl 0x837d59a0
	ctx.lr = 0x8305C6FC;
	sub_837D59A0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x837d5c78
	ctx.lr = 0x8305C704;
	sub_837D5C78(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8305c460
	if (cr6.eq) goto loc_8305C460;
	// li r11,8
	ctx.r11.s64 = 8;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_8305C724:
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8305c75c
	if (cr6.eq) goto loc_8305C75C;
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// addi r11,r11,-21284
	ctx.r11.s64 = ctx.r11.s64 + -21284;
	// addi r4,r11,-184
	ctx.r4.s64 = ctx.r11.s64 + -184;
	// bl 0x837b0c10
	ctx.lr = 0x8305C744;
	sub_837B0C10(ctx, base);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d894e0
	ctx.lr = 0x8305C750;
	sub_82D894E0(ctx, base);
	// stw r3,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r3.u32);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x8387e8e0
	ctx.lr = 0x8305C75C;
	sub_8387E8E0(ctx, base);
loc_8305C75C:
	// li r11,9
	ctx.r11.s64 = 9;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_8305C770:
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8305c788
	if (cr6.eq) goto loc_8305C788;
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8305c460
	if (!cr6.eq) goto loc_8305C460;
loc_8305C788:
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8305c7c4
	if (cr6.eq) goto loc_8305C7C4;
	// bl 0x82d19a68
	ctx.lr = 0x8305C798;
	sub_82D19A68(ctx, base);
	// bl 0x82d2b0f8
	ctx.lr = 0x8305C79C;
	sub_82D2B0F8(ctx, base);
	// bl 0x82d39100
	ctx.lr = 0x8305C7A0;
	sub_82D39100(ctx, base);
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8305c7c4
	if (cr6.eq) goto loc_8305C7C4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8305C7BC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r9.u32);
loc_8305C7C4:
	// li r11,10
	ctx.r11.s64 = 10;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_8305C7D8:
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8305c7f4
	if (cr6.eq) goto loc_8305C7F4;
	// lwz r3,108(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// bl 0x82ddcec8
	ctx.lr = 0x8305C7EC;
	sub_82DDCEC8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x8305c460
	if (cr6.eq) goto loc_8305C460;
loc_8305C7F4:
	// lwz r3,108(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8305c818
	if (cr6.eq) goto loc_8305C818;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8305C810;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r9.u32);
loc_8305C818:
	// li r11,13
	ctx.r11.s64 = 13;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_8305C82C:
	// bl 0x830ff290
	ctx.lr = 0x8305C830;
	sub_830FF290(ctx, base);
	// bl 0x830ffaa8
	ctx.lr = 0x8305C834;
	sub_830FFAA8(ctx, base);
	// cmplwi cr6,r3,19
	cr6.compare<uint32_t>(ctx.r3.u32, 19, xer);
	// bne cr6,0x8305c84c
	if (!cr6.eq) goto loc_8305C84C;
	// bl 0x82dcc1e8
	ctx.lr = 0x8305C840;
	sub_82DCC1E8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8305c460
	if (cr6.eq) goto loc_8305C460;
loc_8305C84C:
	// bl 0x831156e8
	ctx.lr = 0x8305C850;
	sub_831156E8(ctx, base);
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// addis r3,r11,5
	ctx.r3.s64 = ctx.r11.s64 + 327680;
	// addi r3,r3,14904
	ctx.r3.s64 = ctx.r3.s64 + 14904;
	// bl 0x83124548
	ctx.lr = 0x8305C860;
	sub_83124548(ctx, base);
	// li r10,14
	ctx.r10.s64 = 14;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r10,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r10.u32);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_8305C874:
	// bl 0x82d86078
	ctx.lr = 0x8305C878;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8305c88c
	if (cr6.eq) goto loc_8305C88C;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,11(r11)
	PPC_STORE_U8(ctx.r11.u32 + 11, ctx.r10.u8);
loc_8305C88C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8305b4a8
	ctx.lr = 0x8305C894;
	sub_8305B4A8(ctx, base);
	// bl 0x82dad2e0
	ctx.lr = 0x8305C898;
	sub_82DAD2E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8305c8ac
	if (cr6.eq) goto loc_8305C8AC;
	// bl 0x82dad2e0
	ctx.lr = 0x8305C8A4;
	sub_82DAD2E0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82dad3e0
	ctx.lr = 0x8305C8AC;
	sub_82DAD3E0(ctx, base);
loc_8305C8AC:
	// li r11,15
	ctx.r11.s64 = 15;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_8305C8C0:
	// bl 0x82dad2e0
	ctx.lr = 0x8305C8C4;
	sub_82DAD2E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8305c8f0
	if (!cr6.eq) goto loc_8305C8F0;
	// bl 0x82daf8c0
	ctx.lr = 0x8305C8D0;
	sub_82DAF8C0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8305c8f0
	if (!cr6.eq) goto loc_8305C8F0;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82d482c0
	ctx.lr = 0x8305C8E4;
	sub_82D482C0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_8305C8F0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8305af20
	ctx.lr = 0x8305C8F8;
	sub_8305AF20(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8305c918
	if (!cr6.eq) goto loc_8305C918;
	// lis r11,-31757
	ctx.r11.s64 = -2081226752;
	// lwz r3,25496(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25496);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8305c918
	if (cr6.eq) goto loc_8305C918;
	// bl 0x82e9bda0
	ctx.lr = 0x8305C918;
	sub_82E9BDA0(ctx, base);
loc_8305C918:
	// li r11,16
	ctx.r11.s64 = 16;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_8305C92C:
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8305c970
	if (cr6.eq) goto loc_8305C970;
	// lbz r11,92(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 92);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8305c970
	if (!cr6.eq) goto loc_8305C970;
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// addi r11,r11,-21284
	ctx.r11.s64 = ctx.r11.s64 + -21284;
	// addi r4,r11,-164
	ctx.r4.s64 = ctx.r11.s64 + -164;
	// bl 0x837b0c10
	ctx.lr = 0x8305C958;
	sub_837B0C10(ctx, base);
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d894e0
	ctx.lr = 0x8305C964;
	sub_82D894E0(ctx, base);
	// stw r3,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r3.u32);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x8387e8e0
	ctx.lr = 0x8305C970;
	sub_8387E8E0(ctx, base);
loc_8305C970:
	// li r11,17
	ctx.r11.s64 = 17;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_8305C984:
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8305c9b8
	if (cr6.eq) goto loc_8305C9B8;
	// lwz r3,100(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8305c9b8
	if (cr6.eq) goto loc_8305C9B8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8305C9AC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8305c460
	if (cr6.eq) goto loc_8305C460;
loc_8305C9B8:
	// lwz r3,100(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8305c9dc
	if (cr6.eq) goto loc_8305C9DC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8305C9D4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r9.u32);
loc_8305C9DC:
	// li r11,18
	ctx.r11.s64 = 18;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_8305C9F0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8305b110
	ctx.lr = 0x8305C9F8;
	sub_8305B110(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// li r28,1
	ctx.r28.s64 = 1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8305ca34
	if (cr6.eq) goto loc_8305CA34;
	// bl 0x82d86078
	ctx.lr = 0x8305CA0C;
	sub_82D86078(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8305cc2c
	if (cr6.eq) goto loc_8305CC2C;
	// lwz r3,116(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// bl 0x82dab6d0
	ctx.lr = 0x8305CA20;
	sub_82DAB6D0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82d976e0
	ctx.lr = 0x8305CA28;
	sub_82D976E0(ctx, base);
	// lwz r3,116(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 116);
	// bl 0x824ce1d8
	ctx.lr = 0x8305CA30;
	sub_824CE1D8(ctx, base);
	// stb r28,80(r3)
	PPC_STORE_U8(ctx.r3.u32 + 80, ctx.r28.u8);
loc_8305CA34:
	// bl 0x830ff290
	ctx.lr = 0x8305CA38;
	sub_830FF290(ctx, base);
	// bl 0x830ffaa8
	ctx.lr = 0x8305CA3C;
	sub_830FFAA8(ctx, base);
	// cmplwi cr6,r3,16
	cr6.compare<uint32_t>(ctx.r3.u32, 16, xer);
	// beq cr6,0x8305ca54
	if (cr6.eq) goto loc_8305CA54;
	// cmplwi cr6,r3,21
	cr6.compare<uint32_t>(ctx.r3.u32, 21, xer);
	// beq cr6,0x8305ca54
	if (cr6.eq) goto loc_8305CA54;
	// cmplwi cr6,r3,20
	cr6.compare<uint32_t>(ctx.r3.u32, 20, xer);
	// bne cr6,0x8305ca78
	if (!cr6.eq) goto loc_8305CA78;
loc_8305CA54:
	// bl 0x82d95ee0
	ctx.lr = 0x8305CA58;
	sub_82D95EE0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8305ca78
	if (!cr6.eq) goto loc_8305CA78;
	// bl 0x82dceaf8
	ctx.lr = 0x8305CA68;
	sub_82DCEAF8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8305ca78
	if (cr6.eq) goto loc_8305CA78;
	// bl 0x82dcecd0
	ctx.lr = 0x8305CA78;
	sub_82DCECD0(ctx, base);
loc_8305CA78:
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r29,r11,-21284
	ctx.r29.s64 = ctx.r11.s64 + -21284;
	// addi r4,r29,-505
	ctx.r4.s64 = ctx.r29.s64 + -505;
	// bl 0x837b0c10
	ctx.lr = 0x8305CA8C;
	sub_837B0C10(ctx, base);
	// bl 0x830ff290
	ctx.lr = 0x8305CA90;
	sub_830FF290(ctx, base);
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// addi r11,r11,-44
	ctx.r11.s64 = ctx.r11.s64 + -44;
	// cmplwi cr6,r11,17
	cr6.compare<uint32_t>(ctx.r11.u32, 17, xer);
	// bgt cr6,0x8305cbe4
	if (cr6.gt) goto loc_8305CBE4;
	// lis r12,-31994
	ctx.r12.s64 = -2096758784;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-13640
	ctx.r12.s64 = ctx.r12.s64 + -13640;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_8305CB00;
	case 1:
		goto loc_8305CB08;
	case 2:
		goto loc_8305CB10;
	case 3:
		goto loc_8305CB38;
	case 4:
		goto loc_8305CBE4;
	case 5:
		goto loc_8305CBDC;
	case 6:
		goto loc_8305CBDC;
	case 7:
		goto loc_8305CB08;
	case 8:
		goto loc_8305CBE4;
	case 9:
		goto loc_8305CBD4;
	case 10:
		goto loc_8305CBE4;
	case 11:
		goto loc_8305CBD4;
	case 12:
		goto loc_8305CBD4;
	case 13:
		goto loc_8305CBE4;
	case 14:
		goto loc_8305CBE4;
	case 15:
		goto loc_8305CBE4;
	case 16:
		goto loc_8305CB10;
	case 17:
		goto loc_8305CBD4;
	default:
		return;
	}
	// lwz r24,-13568(r5)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r5.u32 + -13568);
	// lwz r24,-13560(r5)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r5.u32 + -13560);
	// lwz r24,-13552(r5)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r5.u32 + -13552);
	// lwz r24,-13512(r5)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r5.u32 + -13512);
	// lwz r24,-13340(r5)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r5.u32 + -13340);
	// lwz r24,-13348(r5)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r5.u32 + -13348);
	// lwz r24,-13348(r5)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r5.u32 + -13348);
	// lwz r24,-13560(r5)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r5.u32 + -13560);
	// lwz r24,-13340(r5)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r5.u32 + -13340);
	// lwz r24,-13356(r5)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r5.u32 + -13356);
	// lwz r24,-13340(r5)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r5.u32 + -13340);
	// lwz r24,-13356(r5)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r5.u32 + -13356);
	// lwz r24,-13356(r5)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r5.u32 + -13356);
	// lwz r24,-13340(r5)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r5.u32 + -13340);
	// lwz r24,-13340(r5)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r5.u32 + -13340);
	// lwz r24,-13340(r5)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r5.u32 + -13340);
	// lwz r24,-13552(r5)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r5.u32 + -13552);
	// lwz r24,-13356(r5)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r5.u32 + -13356);
loc_8305CB00:
	// addi r4,r29,-148
	ctx.r4.s64 = ctx.r29.s64 + -148;
	// b 0x8305cbe8
	goto loc_8305CBE8;
loc_8305CB08:
	// addi r4,r29,-136
	ctx.r4.s64 = ctx.r29.s64 + -136;
	// b 0x8305cbe8
	goto loc_8305CBE8;
loc_8305CB10:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8305aff8
	ctx.lr = 0x8305CB18;
	sub_8305AFF8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8305cb30
	if (cr6.eq) goto loc_8305CB30;
	// addi r4,r29,-124
	ctx.r4.s64 = ctx.r29.s64 + -124;
	// b 0x8305cbec
	goto loc_8305CBEC;
loc_8305CB30:
	// addi r4,r29,-104
	ctx.r4.s64 = ctx.r29.s64 + -104;
	// b 0x8305cbec
	goto loc_8305CBEC;
loc_8305CB38:
	// bl 0x82d86078
	ctx.lr = 0x8305CB3C;
	sub_82D86078(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8305cbb4
	if (cr6.eq) goto loc_8305CBB4;
	// lwz r11,104(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// lis r10,-31773
	ctx.r10.s64 = -2082275328;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r10,-6644
	ctx.r4.s64 = ctx.r10.s64 + -6644;
	// ld r9,516(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 516);
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// bl 0x825a2298
	ctx.lr = 0x8305CB64;
	sub_825A2298(ctx, base);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x8305cb74
	if (cr6.eq) goto loc_8305CB74;
	// stb r28,116(r31)
	PPC_STORE_U8(ctx.r31.u32 + 116, ctx.r28.u8);
loc_8305CB74:
	// lwz r3,20(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// bl 0x82dbb5c0
	ctx.lr = 0x8305CB7C;
	sub_82DBB5C0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8305cbb4
	if (cr6.eq) goto loc_8305CBB4;
	// lwz r3,20(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// bl 0x831f81f8
	ctx.lr = 0x8305CB90;
	sub_831F81F8(ctx, base);
	// lbz r11,116(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 116);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8305cbac
	if (cr6.eq) goto loc_8305CBAC;
	// lbz r11,304(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 304);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// bne cr6,0x8305cbb0
	if (!cr6.eq) goto loc_8305CBB0;
loc_8305CBAC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8305CBB0:
	// stb r11,116(r31)
	PPC_STORE_U8(ctx.r31.u32 + 116, ctx.r11.u8);
loc_8305CBB4:
	// lbz r11,116(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 116);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x8305cbcc
	if (!cr6.eq) goto loc_8305CBCC;
	// addi r4,r29,-92
	ctx.r4.s64 = ctx.r29.s64 + -92;
	// b 0x8305cbec
	goto loc_8305CBEC;
loc_8305CBCC:
	// addi r4,r29,-72
	ctx.r4.s64 = ctx.r29.s64 + -72;
	// b 0x8305cbec
	goto loc_8305CBEC;
loc_8305CBD4:
	// addi r4,r29,-60
	ctx.r4.s64 = ctx.r29.s64 + -60;
	// b 0x8305cbe8
	goto loc_8305CBE8;
loc_8305CBDC:
	// addi r4,r29,-44
	ctx.r4.s64 = ctx.r29.s64 + -44;
	// b 0x8305cbe8
	goto loc_8305CBE8;
loc_8305CBE4:
	// addi r4,r29,-32
	ctx.r4.s64 = ctx.r29.s64 + -32;
loc_8305CBE8:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
loc_8305CBEC:
	// bl 0x8259d6c0
	ctx.lr = 0x8305CBF0;
	sub_8259D6C0(ctx, base);
	// addi r4,r29,-20
	ctx.r4.s64 = ctx.r29.s64 + -20;
	// li r6,17
	ctx.r6.s64 = 17;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// bl 0x82574d38
	ctx.lr = 0x8305CC04;
	sub_82574D38(ctx, base);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x8305cc18
	if (cr6.eq) goto loc_8305CC18;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8259d6c0
	ctx.lr = 0x8305CC18;
	sub_8259D6C0(ctx, base);
loc_8305CC18:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x8305CC24;
	sub_82E88020(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8387e8e0
	ctx.lr = 0x8305CC2C;
	sub_8387E8E0(ctx, base);
loc_8305CC2C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8305CC38"))) PPC_WEAK_FUNC(sub_8305CC38);
PPC_FUNC_IMPL(__imp__sub_8305CC38) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x8305CC40;
	__savegprlr_24(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82f42220
	ctx.lr = 0x8305CC4C;
	sub_82F42220(ctx, base);
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r9,r11,-21144
	ctx.r9.s64 = ctx.r11.s64 + -21144;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// stw r31,88(r30)
	PPC_STORE_U32(ctx.r30.u32 + 88, ctx.r31.u32);
	// stw r9,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r9.u32);
	// li r24,2
	ctx.r24.s64 = 2;
	// stw r8,72(r30)
	PPC_STORE_U32(ctx.r30.u32 + 72, ctx.r8.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// stb r31,92(r30)
	PPC_STORE_U8(ctx.r30.u32 + 92, ctx.r31.u8);
	// li r4,36
	ctx.r4.s64 = 36;
	// stw r31,96(r30)
	PPC_STORE_U32(ctx.r30.u32 + 96, ctx.r31.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stw r31,100(r30)
	PPC_STORE_U32(ctx.r30.u32 + 100, ctx.r31.u32);
	// addi r27,r30,120
	ctx.r27.s64 = ctx.r30.s64 + 120;
	// stw r31,104(r30)
	PPC_STORE_U32(ctx.r30.u32 + 104, ctx.r31.u32);
	// stw r31,108(r30)
	PPC_STORE_U32(ctx.r30.u32 + 108, ctx.r31.u32);
	// stw r31,112(r30)
	PPC_STORE_U32(ctx.r30.u32 + 112, ctx.r31.u32);
	// stb r31,116(r30)
	PPC_STORE_U8(ctx.r30.u32 + 116, ctx.r31.u8);
	// stb r31,117(r30)
	PPC_STORE_U8(ctx.r30.u32 + 117, ctx.r31.u8);
	// stw r31,124(r30)
	PPC_STORE_U32(ctx.r30.u32 + 124, ctx.r31.u32);
	// stw r24,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r24.u32);
	// bl 0x82595718
	ctx.lr = 0x8305CCAC;
	sub_82595718(ctx, base);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r7,120(r30)
	PPC_STORE_U32(ctx.r30.u32 + 120, ctx.r7.u32);
	// stw r7,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r7.u32);
	// lwz r6,120(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 120);
	// stw r6,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, ctx.r6.u32);
	// bl 0x82dc0998
	ctx.lr = 0x8305CCC8;
	sub_82DC0998(ctx, base);
	// bl 0x82dad2e0
	ctx.lr = 0x8305CCCC;
	sub_82DAD2E0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8305cde4
	if (cr6.eq) goto loc_8305CDE4;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82c5bc60
	ctx.lr = 0x8305CCE8;
	sub_82C5BC60(ctx, base);
	// addi r28,r29,344
	ctx.r28.s64 = ctx.r29.s64 + 344;
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// cmplw cr6,r11,r28
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, xer);
	// lwz r25,60(r29)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r29.u32 + 60);
	// beq cr6,0x8305cd1c
	if (cr6.eq) goto loc_8305CD1C;
	// lwz r6,116(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r5,0(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// bl 0x82c5d148
	ctx.lr = 0x8305CD10;
	sub_82C5D148(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82c5d268
	ctx.lr = 0x8305CD1C;
	sub_82C5D268(ctx, base);
loc_8305CD1C:
	// lwz r29,116(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplw cr6,r11,r29
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, xer);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// beq cr6,0x8305cdc0
	if (cr6.eq) goto loc_8305CDC0;
	// li r28,15
	ctx.r28.s64 = 15;
	// li r26,-1
	ctx.r26.s64 = -1;
loc_8305CD38:
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplw cr6,r10,r25
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r25.u32, xer);
	// beq cr6,0x8305cdac
	if (cr6.eq) goto loc_8305CDAC;
	// stw r28,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r28.u32);
	// addi r4,r11,148
	ctx.r4.s64 = ctx.r11.s64 + 148;
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// stb r31,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r31.u8);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8259cb28
	ctx.lr = 0x8305CD64;
	sub_8259CB28(ctx, base);
	// lwz r11,144(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8305cd80
	if (cr6.eq) goto loc_8305CD80;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// lwz r4,0(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82ee0780
	ctx.lr = 0x8305CD80;
	sub_82EE0780(ctx, base);
loc_8305CD80:
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8305cd9c
	if (cr6.lt) goto loc_8305CD9C;
	// stw r24,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r24.u32);
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x825952b8
	ctx.lr = 0x8305CD9C;
	sub_825952B8(ctx, base);
loc_8305CD9C:
	// lwz r29,116(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// stw r28,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r28.u32);
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// stb r31,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r31.u8);
loc_8305CDAC:
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82c5ba08
	ctx.lr = 0x8305CDB4;
	sub_82C5BA08(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r11,r29
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, xer);
	// bne cr6,0x8305cd38
	if (!cr6.eq) goto loc_8305CD38;
loc_8305CDC0:
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// lwz r5,0(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82c5d148
	ctx.lr = 0x8305CDD4;
	sub_82C5D148(ctx, base);
	// stw r24,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r24.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,116(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// bl 0x825952b8
	ctx.lr = 0x8305CDE4;
	sub_825952B8(ctx, base);
loc_8305CDE4:
	// bl 0x82d73e70
	ctx.lr = 0x8305CDE8;
	sub_82D73E70(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82d482c0
	ctx.lr = 0x8305CDF0;
	sub_82D482C0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stb r11,84(r30)
	PPC_STORE_U8(ctx.r30.u32 + 84, ctx.r11.u8);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8305CE04"))) PPC_WEAK_FUNC(sub_8305CE04);
PPC_FUNC_IMPL(__imp__sub_8305CE04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8305CE08"))) PPC_WEAK_FUNC(sub_8305CE08);
PPC_FUNC_IMPL(__imp__sub_8305CE08) {
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
	// li r11,31
	ctx.r11.s64 = 31;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,132
	ctx.r4.s64 = 132;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x8305CE34;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8305ce58
	if (cr6.eq) goto loc_8305CE58;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8305cc38
	ctx.lr = 0x8305CE44;
	sub_8305CC38(ctx, base);
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
loc_8305CE58:
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

__attribute__((alias("__imp__sub_8305CE70"))) PPC_WEAK_FUNC(sub_8305CE70);
PPC_FUNC_IMPL(__imp__sub_8305CE70) {
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
	// bl 0x830ff290
	ctx.lr = 0x8305CE80;
	sub_830FF290(ctx, base);
	// bl 0x830ffaa8
	ctx.lr = 0x8305CE84;
	sub_830FFAA8(ctx, base);
	// addi r11,r3,-16
	ctx.r11.s64 = ctx.r3.s64 + -16;
	// cmplwi cr6,r11,5
	cr6.compare<uint32_t>(ctx.r11.u32, 5, xer);
	// bgt cr6,0x8305ced4
	if (cr6.gt) goto loc_8305CED4;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x8305ceac
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8305CEAC;
	// bdzf 4*cr6+eq,0x8305ced4
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8305CED4;
	// bdzf 4*cr6+eq,0x8305ced4
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8305CED4;
	// bdzf 4*cr6+eq,0x8305ceac
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8305CEAC;
	// bne cr6,0x8305cec0
	if (!cr6.eq) goto loc_8305CEC0;
loc_8305CEAC:
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
loc_8305CEC0:
	// bl 0x830ff290
	ctx.lr = 0x8305CEC4;
	sub_830FF290(ctx, base);
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// li r3,1
	ctx.r3.s64 = 1;
	// cmplwi cr6,r11,60
	cr6.compare<uint32_t>(ctx.r11.u32, 60, xer);
	// bne cr6,0x8305ced8
	if (!cr6.eq) goto loc_8305CED8;
loc_8305CED4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8305CED8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8305CEE8"))) PPC_WEAK_FUNC(sub_8305CEE8);
PPC_FUNC_IMPL(__imp__sub_8305CEE8) {
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
	// li r4,100
	ctx.r4.s64 = 100;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x8305CF18;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8305cf5c
	if (cr6.eq) goto loc_8305CF5C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82f42220
	ctx.lr = 0x8305CF2C;
	sub_82F42220(ctx, base);
	// lis r10,-32225
	ctx.r10.s64 = -2111897600;
	// lis r9,-32239
	ctx.r9.s64 = -2112815104;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r8,r10,-20584
	ctx.r8.s64 = ctx.r10.s64 + -20584;
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
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// stw r11,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r11.u32);
	// b 0x8305cf60
	goto loc_8305CF60;
loc_8305CF5C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8305CF60:
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

__attribute__((alias("__imp__sub_8305CF78"))) PPC_WEAK_FUNC(sub_8305CF78);
PPC_FUNC_IMPL(__imp__sub_8305CF78) {
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
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-20584
	ctx.r9.s64 = ctx.r11.s64 + -20584;
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
	ctx.lr = 0x8305CFB0;
	sub_82F42278(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x8305cfc8
	if (cr6.eq) goto loc_8305CFC8;
	// bl 0x82416268
	ctx.lr = 0x8305CFC4;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8305CFC8:
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

__attribute__((alias("__imp__sub_8305CFE0"))) PPC_WEAK_FUNC(sub_8305CFE0);
PPC_FUNC_IMPL(__imp__sub_8305CFE0) {
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
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,88(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,5
	cr6.compare<uint32_t>(ctx.r11.u32, 5, xer);
	// bgt cr6,0x8305d164
	if (cr6.gt) goto loc_8305D164;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x8305d06c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8305D06C;
	// bdzf 4*cr6+eq,0x8305d0a4
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8305D0A4;
	// bdzf 4*cr6+eq,0x8305d0e0
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8305D0E0;
	// bdzf 4*cr6+eq,0x8305d114
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8305D114;
	// bne cr6,0x8305d14c
	if (!cr6.eq) goto loc_8305D14C;
	// bl 0x82db4bd0
	ctx.lr = 0x8305D020;
	sub_82DB4BD0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8305d164
	if (cr6.eq) goto loc_8305D164;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8305ce70
	ctx.lr = 0x8305D034;
	sub_8305CE70(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8305d048
	if (cr6.eq) goto loc_8305D048;
	// li r11,4
	ctx.r11.s64 = 4;
	// b 0x8305d168
	goto loc_8305D168;
loc_8305D048:
	// bl 0x82dad2e0
	ctx.lr = 0x8305D04C;
	sub_82DAD2E0(ctx, base);
	// bl 0x82db0a70
	ctx.lr = 0x8305D050;
	sub_82DB0A70(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// subfic r10,r11,0
	xer.ca = ctx.r11.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r11.s64;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// rlwinm r11,r9,0,31,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// addi r8,r11,4
	ctx.r8.s64 = ctx.r11.s64 + 4;
	// stw r8,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r8.u32);
	// b 0x8305d16c
	goto loc_8305D16C;
loc_8305D06C:
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r11,r11,-20680
	ctx.r11.s64 = ctx.r11.s64 + -20680;
	// addi r4,r11,-28
	ctx.r4.s64 = ctx.r11.s64 + -28;
	// bl 0x837b0c10
	ctx.lr = 0x8305D080;
	sub_837B0C10(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d894e0
	ctx.lr = 0x8305D08C;
	sub_82D894E0(ctx, base);
	// stw r3,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r3.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8387e8e0
	ctx.lr = 0x8305D098;
	sub_8387E8E0(ctx, base);
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r10,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r10.u32);
	// b 0x8305d16c
	goto loc_8305D16C;
loc_8305D0A4:
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8305D0B8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8305d16c
	if (cr6.eq) goto loc_8305D16C;
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// lbz r10,108(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 108);
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r11,r9,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// addi r8,r11,3
	ctx.r8.s64 = ctx.r11.s64 + 3;
	// stw r8,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r8.u32);
	// b 0x8305d16c
	goto loc_8305D16C;
loc_8305D0E0:
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r11,r11,-20680
	ctx.r11.s64 = ctx.r11.s64 + -20680;
	// addi r4,r11,-8
	ctx.r4.s64 = ctx.r11.s64 + -8;
	// bl 0x837b0c10
	ctx.lr = 0x8305D0F4;
	sub_837B0C10(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x8305D100;
	sub_82E88020(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8387e8e0
	ctx.lr = 0x8305D108;
	sub_8387E8E0(ctx, base);
	// li r10,5
	ctx.r10.s64 = 5;
	// stw r10,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r10.u32);
	// b 0x8305d16c
	goto loc_8305D16C;
loc_8305D114:
	// bl 0x83983a00
	ctx.lr = 0x8305D118;
	sub_83983A00(ctx, base);
	// bl 0x82db4868
	ctx.lr = 0x8305D11C;
	sub_82DB4868(ctx, base);
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// addi r4,r11,-20680
	ctx.r4.s64 = ctx.r11.s64 + -20680;
	// bl 0x837b0c10
	ctx.lr = 0x8305D12C;
	sub_837B0C10(ctx, base);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x8305D138;
	sub_82E88020(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x8387e8e0
	ctx.lr = 0x8305D140;
	sub_8387E8E0(ctx, base);
	// li r10,5
	ctx.r10.s64 = 5;
	// stw r10,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r10.u32);
	// b 0x8305d16c
	goto loc_8305D16C;
loc_8305D14C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_8305D164:
	// li r11,3
	ctx.r11.s64 = 3;
loc_8305D168:
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
loc_8305D16C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8305D184"))) PPC_WEAK_FUNC(sub_8305D184);
PPC_FUNC_IMPL(__imp__sub_8305D184) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8305D188"))) PPC_WEAK_FUNC(sub_8305D188);
PPC_FUNC_IMPL(__imp__sub_8305D188) {
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
	// stwu r1,-2544(r1)
	ea = -2544 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82f42220
	ctx.lr = 0x8305D1A4;
	sub_82F42220(ctx, base);
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r9,r11,-20032
	ctx.r9.s64 = ctx.r11.s64 + -20032;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// stw r30,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r30.u32);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r8,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r8.u32);
	// stw r30,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r30.u32);
	// stw r30,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r30.u32);
	// bl 0x830ff290
	ctx.lr = 0x8305D1D0;
	sub_830FF290(ctx, base);
	// bl 0x830ff988
	ctx.lr = 0x8305D1D4;
	sub_830FF988(ctx, base);
	// clrlwi r7,r3,24
	ctx.r7.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x8305d200
	if (cr6.eq) goto loc_8305D200;
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// bl 0x82e765e8
	ctx.lr = 0x8305D1F8;
	sub_82E765E8(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82e76b28
	ctx.lr = 0x8305D200;
	sub_82E76B28(ctx, base);
loc_8305D200:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,2544
	ctx.r1.s64 = ctx.r1.s64 + 2544;
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

__attribute__((alias("__imp__sub_8305D21C"))) PPC_WEAK_FUNC(sub_8305D21C);
PPC_FUNC_IMPL(__imp__sub_8305D21C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8305D220"))) PPC_WEAK_FUNC(sub_8305D220);
PPC_FUNC_IMPL(__imp__sub_8305D220) {
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
	// lwz r3,92(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8305d258
	if (cr6.eq) goto loc_8305D258;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8305D250;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r9.u32);
loc_8305D258:
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

__attribute__((alias("__imp__sub_8305D26C"))) PPC_WEAK_FUNC(sub_8305D26C);
PPC_FUNC_IMPL(__imp__sub_8305D26C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8305D270"))) PPC_WEAK_FUNC(sub_8305D270);
PPC_FUNC_IMPL(__imp__sub_8305D270) {
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
	// li r11,31
	ctx.r11.s64 = 31;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,100
	ctx.r4.s64 = 100;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x8305D29C;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8305d2c0
	if (cr6.eq) goto loc_8305D2C0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8305d188
	ctx.lr = 0x8305D2AC;
	sub_8305D188(ctx, base);
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
loc_8305D2C0:
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

__attribute__((alias("__imp__sub_8305D2D8"))) PPC_WEAK_FUNC(sub_8305D2D8);
PPC_FUNC_IMPL(__imp__sub_8305D2D8) {
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
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-20032
	ctx.r9.s64 = ctx.r11.s64 + -20032;
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
	ctx.lr = 0x8305D310;
	sub_82F42278(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x8305d328
	if (cr6.eq) goto loc_8305D328;
	// bl 0x82416268
	ctx.lr = 0x8305D324;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8305D328:
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

__attribute__((alias("__imp__sub_8305D340"))) PPC_WEAK_FUNC(sub_8305D340);
PPC_FUNC_IMPL(__imp__sub_8305D340) {
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
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82d48260
	ctx.lr = 0x8305D358;
	sub_82D48260(ctx, base);
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// cmplwi cr6,r11,7
	cr6.compare<uint32_t>(ctx.r11.u32, 7, xer);
	// bgt cr6,0x8305d500
	if (cr6.gt) goto loc_8305D500;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x8305d390
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8305D390;
	// bdzf 4*cr6+eq,0x8305d3d8
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8305D3D8;
	// bdzf 4*cr6+eq,0x8305d418
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8305D418;
	// bdzf 4*cr6+eq,0x8305d450
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8305D450;
	// bdzf 4*cr6+eq,0x8305d4b8
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8305D4B8;
	// bdzf 4*cr6+eq,0x8305d480
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8305D480;
	// bne cr6,0x8305d4e8
	if (!cr6.eq) goto loc_8305D4E8;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x8305d504
	goto loc_8305D504;
loc_8305D390:
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r11,r11,-20124
	ctx.r11.s64 = ctx.r11.s64 + -20124;
	// addi r4,r11,-40
	ctx.r4.s64 = ctx.r11.s64 + -40;
	// bl 0x837b0c10
	ctx.lr = 0x8305D3A4;
	sub_837B0C10(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d894e0
	ctx.lr = 0x8305D3B0;
	sub_82D894E0(ctx, base);
	// stw r3,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r3.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8387e8e0
	ctx.lr = 0x8305D3BC;
	sub_8387E8E0(ctx, base);
	// lwz r10,92(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// subfic r9,r10,0
	xer.ca = ctx.r10.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r10.s64;
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// rlwinm r11,r8,0,31,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// addi r7,r11,5
	ctx.r7.s64 = ctx.r11.s64 + 5;
	// stw r7,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r7.u32);
	// b 0x8305d508
	goto loc_8305D508;
loc_8305D3D8:
	// lwz r3,92(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8305D3EC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8305d508
	if (cr6.eq) goto loc_8305D508;
	// lwz r11,92(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// lbz r10,108(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 108);
	// subfic r9,r10,0
	xer.ca = ctx.r10.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r10.s64;
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// rlwinm r11,r8,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x2;
	// addi r7,r11,3
	ctx.r7.s64 = ctx.r11.s64 + 3;
	// stw r7,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r7.u32);
	// b 0x8305d508
	goto loc_8305D508;
loc_8305D418:
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r11,r11,-20124
	ctx.r11.s64 = ctx.r11.s64 + -20124;
	// addi r4,r11,-24
	ctx.r4.s64 = ctx.r11.s64 + -24;
	// bl 0x837b0c10
	ctx.lr = 0x8305D42C;
	sub_837B0C10(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d894e0
	ctx.lr = 0x8305D438;
	sub_82D894E0(ctx, base);
	// stw r3,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r3.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8387e8e0
	ctx.lr = 0x8305D444;
	sub_8387E8E0(ctx, base);
	// li r10,4
	ctx.r10.s64 = 4;
	// stw r10,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r10.u32);
	// b 0x8305d508
	goto loc_8305D508;
loc_8305D450:
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8305d478
	if (cr6.eq) goto loc_8305D478;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8305D46C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8305d508
	if (cr6.eq) goto loc_8305D508;
loc_8305D478:
	// li r11,6
	ctx.r11.s64 = 6;
	// b 0x8305d504
	goto loc_8305D504;
loc_8305D480:
	// bl 0x83983a00
	ctx.lr = 0x8305D484;
	sub_83983A00(ctx, base);
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// addi r11,r11,-20124
	ctx.r11.s64 = ctx.r11.s64 + -20124;
	// addi r4,r11,-8
	ctx.r4.s64 = ctx.r11.s64 + -8;
	// bl 0x837b0c10
	ctx.lr = 0x8305D498;
	sub_837B0C10(ctx, base);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x8305D4A4;
	sub_82E88020(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x8387e8e0
	ctx.lr = 0x8305D4AC;
	sub_8387E8E0(ctx, base);
	// li r10,7
	ctx.r10.s64 = 7;
	// stw r10,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r10.u32);
	// b 0x8305d508
	goto loc_8305D508;
loc_8305D4B8:
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// addi r4,r11,-20124
	ctx.r4.s64 = ctx.r11.s64 + -20124;
	// bl 0x837b0c10
	ctx.lr = 0x8305D4C8;
	sub_837B0C10(ctx, base);
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x8305D4D4;
	sub_82E88020(ctx, base);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x8387e8e0
	ctx.lr = 0x8305D4DC;
	sub_8387E8E0(ctx, base);
	// li r10,7
	ctx.r10.s64 = 7;
	// stw r10,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r10.u32);
	// b 0x8305d508
	goto loc_8305D508;
loc_8305D4E8:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_8305D500:
	// li r11,5
	ctx.r11.s64 = 5;
loc_8305D504:
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
loc_8305D508:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8305D520"))) PPC_WEAK_FUNC(sub_8305D520);
PPC_FUNC_IMPL(__imp__sub_8305D520) {
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
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-19480
	ctx.r9.s64 = ctx.r11.s64 + -19480;
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
	ctx.lr = 0x8305D558;
	sub_82F42278(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x8305d570
	if (cr6.eq) goto loc_8305D570;
	// bl 0x82416268
	ctx.lr = 0x8305D56C;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8305D570:
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

__attribute__((alias("__imp__sub_8305D588"))) PPC_WEAK_FUNC(sub_8305D588);
PPC_FUNC_IMPL(__imp__sub_8305D588) {
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
	ctx.lr = 0x8305D5B8;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8305d5ec
	if (cr6.eq) goto loc_8305D5EC;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82f42220
	ctx.lr = 0x8305D5CC;
	sub_82F42220(ctx, base);
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-19480
	ctx.r9.s64 = ctx.r11.s64 + -19480;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r8,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r8.u32);
	// b 0x8305d5f0
	goto loc_8305D5F0;
loc_8305D5EC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8305D5F0:
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

__attribute__((alias("__imp__sub_8305D608"))) PPC_WEAK_FUNC(sub_8305D608);
PPC_FUNC_IMPL(__imp__sub_8305D608) {
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
	// stwu r1,-2064(r1)
	ea = -2064 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r30,3
	ctx.r30.s64 = 3;
	// bl 0x82d86078
	ctx.lr = 0x8305D628;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8305d638
	if (!cr6.eq) goto loc_8305D638;
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x8305d6cc
	goto loc_8305D6CC;
loc_8305D638:
	// lwz r3,32(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// bl 0x83578d58
	ctx.lr = 0x8305D640;
	sub_83578D58(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8301afe0
	ctx.lr = 0x8305D64C;
	sub_8301AFE0(ctx, base);
	// lwz r11,2024(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 2024);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x8305d670
	if (!cr6.eq) goto loc_8305D670;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, xer);
	// beq cr6,0x8305d688
	if (cr6.eq) goto loc_8305D688;
	// cmpwi cr6,r31,1
	cr6.compare<int32_t>(ctx.r31.s32, 1, xer);
	// bne cr6,0x8305d6c0
	if (!cr6.eq) goto loc_8305D6C0;
loc_8305D668:
	// li r30,1
	ctx.r30.s64 = 1;
	// b 0x8305d6c0
	goto loc_8305D6C0;
loc_8305D670:
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bne cr6,0x8305d690
	if (!cr6.eq) goto loc_8305D690;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, xer);
	// beq cr6,0x8305d668
	if (cr6.eq) goto loc_8305D668;
	// cmpwi cr6,r31,1
	cr6.compare<int32_t>(ctx.r31.s32, 1, xer);
	// bne cr6,0x8305d6c0
	if (!cr6.eq) goto loc_8305D6C0;
loc_8305D688:
	// li r30,0
	ctx.r30.s64 = 0;
	// b 0x8305d6c0
	goto loc_8305D6C0;
loc_8305D690:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x8305d6c0
	if (!cr6.eq) goto loc_8305D6C0;
	// bl 0x82d86078
	ctx.lr = 0x8305D69C;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8305d6ac
	if (cr6.eq) goto loc_8305D6AC;
	// lwz r3,32(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// bl 0x82dfa5e8
	ctx.lr = 0x8305D6AC;
	sub_82DFA5E8(ctx, base);
loc_8305D6AC:
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xori r11,r9,1
	ctx.r11.u64 = ctx.r9.u64 ^ 1;
	// addi r30,r11,2
	ctx.r30.s64 = ctx.r11.s64 + 2;
loc_8305D6C0:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82da1e28
	ctx.lr = 0x8305D6C8;
	sub_82DA1E28(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_8305D6CC:
	// addi r1,r1,2064
	ctx.r1.s64 = ctx.r1.s64 + 2064;
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

__attribute__((alias("__imp__sub_8305D6E4"))) PPC_WEAK_FUNC(sub_8305D6E4);
PPC_FUNC_IMPL(__imp__sub_8305D6E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8305D6E8"))) PPC_WEAK_FUNC(sub_8305D6E8);
PPC_FUNC_IMPL(__imp__sub_8305D6E8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x8305D6F0;
	__savegprlr_26(ctx, base);
	// stwu r1,-2464(r1)
	ea = -2464 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x830ff290
	ctx.lr = 0x8305D6FC;
	sub_830FF290(ctx, base);
	// bl 0x830ffaa8
	ctx.lr = 0x8305D700;
	sub_830FFAA8(ctx, base);
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// cmplwi cr6,r3,16
	cr6.compare<uint32_t>(ctx.r3.u32, 16, xer);
	// addi r27,r11,-19572
	ctx.r27.s64 = ctx.r11.s64 + -19572;
	// beq cr6,0x8305d740
	if (cr6.eq) goto loc_8305D740;
	// cmplwi cr6,r3,19
	cr6.compare<uint32_t>(ctx.r3.u32, 19, xer);
	// ble cr6,0x8305d720
	if (!cr6.gt) goto loc_8305D720;
	// cmplwi cr6,r3,21
	cr6.compare<uint32_t>(ctx.r3.u32, 21, xer);
	// ble cr6,0x8305d740
	if (!cr6.gt) goto loc_8305D740;
loc_8305D720:
	// addi r4,r27,-40
	ctx.r4.s64 = ctx.r27.s64 + -40;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x837b0c10
	ctx.lr = 0x8305D72C;
	sub_837B0C10(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82e88020
	ctx.lr = 0x8305D738;
	sub_82E88020(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8387e8e0
	ctx.lr = 0x8305D740;
	sub_8387E8E0(ctx, base);
loc_8305D740:
	// bl 0x82d86078
	ctx.lr = 0x8305D744;
	sub_82D86078(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8305d794
	if (!cr6.eq) goto loc_8305D794;
	// addi r4,r27,-32
	ctx.r4.s64 = ctx.r27.s64 + -32;
	// addi r3,r1,416
	ctx.r3.s64 = ctx.r1.s64 + 416;
	// bl 0x837b0c10
	ctx.lr = 0x8305D75C;
	sub_837B0C10(ctx, base);
	// addi r4,r1,416
	ctx.r4.s64 = ctx.r1.s64 + 416;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82e88020
	ctx.lr = 0x8305D768;
	sub_82E88020(ctx, base);
	// lwz r11,436(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 436);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8305da54
	if (cr6.lt) goto loc_8305DA54;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,416(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 416);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x8305D788;
	sub_825952B8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,2464
	ctx.r1.s64 = ctx.r1.s64 + 2464;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_8305D794:
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x82a47dc0
	ctx.lr = 0x8305D79C;
	sub_82A47DC0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8305d7d4
	if (!cr6.eq) goto loc_8305D7D4;
	// addi r4,r27,-24
	ctx.r4.s64 = ctx.r27.s64 + -24;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x837b0c10
	ctx.lr = 0x8305D7B4;
	sub_837B0C10(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82e88020
	ctx.lr = 0x8305D7C0;
	sub_82E88020(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8387e8e0
	ctx.lr = 0x8305D7C8;
	sub_8387E8E0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,2464
	ctx.r1.s64 = ctx.r1.s64 + 2464;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_8305D7D4:
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// bl 0x83578d58
	ctx.lr = 0x8305D7DC;
	sub_83578D58(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,448
	ctx.r3.s64 = ctx.r1.s64 + 448;
	// bl 0x8301afe0
	ctx.lr = 0x8305D7E8;
	sub_8301AFE0(ctx, base);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x82daa560
	ctx.lr = 0x8305D7F0;
	sub_82DAA560(ctx, base);
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82dfa5c8
	ctx.lr = 0x8305D800;
	sub_82DFA5C8(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8305d840
	if (!cr6.eq) goto loc_8305D840;
	// addi r4,r27,-16
	ctx.r4.s64 = ctx.r27.s64 + -16;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x837b0c10
	ctx.lr = 0x8305D818;
	sub_837B0C10(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82e88020
	ctx.lr = 0x8305D824;
	sub_82E88020(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8387e8e0
	ctx.lr = 0x8305D82C;
	sub_8387E8E0(ctx, base);
	// addi r3,r1,448
	ctx.r3.s64 = ctx.r1.s64 + 448;
	// bl 0x82da1e28
	ctx.lr = 0x8305D834;
	sub_82DA1E28(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,2464
	ctx.r1.s64 = ctx.r1.s64 + 2464;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_8305D840:
	// bl 0x82e58e20
	ctx.lr = 0x8305D844;
	sub_82E58E20(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// li r26,0
	ctx.r26.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8305d8b0
	if (cr6.eq) goto loc_8305D8B0;
	// bl 0x82d86078
	ctx.lr = 0x8305D858;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8305d868
	if (!cr6.eq) goto loc_8305D868;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// b 0x8305d870
	goto loc_8305D870;
loc_8305D868:
	// lwz r3,32(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// bl 0x82dfa5e8
	ctx.lr = 0x8305D870;
	sub_82DFA5E8(ctx, base);
loc_8305D870:
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8305d8b0
	if (cr6.eq) goto loc_8305D8B0;
	// addi r4,r27,-8
	ctx.r4.s64 = ctx.r27.s64 + -8;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x837b0c10
	ctx.lr = 0x8305D888;
	sub_837B0C10(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82e88020
	ctx.lr = 0x8305D894;
	sub_82E88020(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8387e8e0
	ctx.lr = 0x8305D89C;
	sub_8387E8E0(ctx, base);
	// addi r3,r1,448
	ctx.r3.s64 = ctx.r1.s64 + 448;
	// bl 0x82da1e28
	ctx.lr = 0x8305D8A4;
	sub_82DA1E28(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,2464
	ctx.r1.s64 = ctx.r1.s64 + 2464;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_8305D8B0:
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// bl 0x82b5e0a8
	ctx.lr = 0x8305D8B8;
	sub_82B5E0A8(ctx, base);
	// addi r4,r1,336
	ctx.r4.s64 = ctx.r1.s64 + 336;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82da9b98
	ctx.lr = 0x8305D8C4;
	sub_82DA9B98(ctx, base);
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x82b5e0a8
	ctx.lr = 0x8305D8CC;
	sub_82B5E0A8(ctx, base);
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82da9c78
	ctx.lr = 0x8305D8D8;
	sub_82DA9C78(ctx, base);
	// lwz r11,448(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 448);
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8305d9e8
	if (cr6.eq) goto loc_8305D9E8;
	// addi r28,r1,456
	ctx.r28.s64 = ctx.r1.s64 + 456;
loc_8305D8EC:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x8301ae70
	ctx.lr = 0x8305D8F8;
	sub_8301AE70(ctx, base);
	// bl 0x82d860f0
	ctx.lr = 0x8305D8FC;
	sub_82D860F0(ctx, base);
	// lwz r11,192(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// cmplw cr6,r11,r3
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, xer);
	// bne cr6,0x8305d974
	if (!cr6.eq) goto loc_8305D974;
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// bl 0x82da8e68
	ctx.lr = 0x8305D914;
	sub_82DA8E68(ctx, base);
	// lwz r4,236(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 236);
	// lwz r9,212(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// lwz r11,208(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// lwz r10,216(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 216);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// stw r4,384(r1)
	PPC_STORE_U32(ctx.r1.u32 + 384, ctx.r4.u32);
	// stw r9,396(r1)
	PPC_STORE_U32(ctx.r1.u32 + 396, ctx.r9.u32);
	// ble cr6,0x8305d938
	if (!cr6.gt) goto loc_8305D938;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
loc_8305D938:
	// lwz r10,228(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r9,232(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 232);
	// stw r11,392(r1)
	PPC_STORE_U32(ctx.r1.u32 + 392, ctx.r11.u32);
	// stw r10,400(r1)
	PPC_STORE_U32(ctx.r1.u32 + 400, ctx.r10.u32);
	// stw r9,404(r1)
	PPC_STORE_U32(ctx.r1.u32 + 404, ctx.r9.u32);
	// bl 0x8305d608
	ctx.lr = 0x8305D954;
	sub_8305D608(ctx, base);
	// stw r3,388(r1)
	PPC_STORE_U32(ctx.r1.u32 + 388, ctx.r3.u32);
	// addi r4,r1,336
	ctx.r4.s64 = ctx.r1.s64 + 336;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82da9c08
	ctx.lr = 0x8305D964;
	sub_82DA9C08(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,224(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// bl 0x82583300
	ctx.lr = 0x8305D970;
	sub_82583300(ctx, base);
	// b 0x8305d9cc
	goto loc_8305D9CC;
loc_8305D974:
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x82da8e68
	ctx.lr = 0x8305D97C;
	sub_82DA8E68(ctx, base);
	// lwz r4,236(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 236);
	// lwz r9,212(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// lwz r11,208(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// lwz r10,216(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 216);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// stw r4,304(r1)
	PPC_STORE_U32(ctx.r1.u32 + 304, ctx.r4.u32);
	// stw r9,316(r1)
	PPC_STORE_U32(ctx.r1.u32 + 316, ctx.r9.u32);
	// ble cr6,0x8305d9a0
	if (!cr6.gt) goto loc_8305D9A0;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
loc_8305D9A0:
	// lwz r10,228(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r9,232(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 232);
	// stw r11,312(r1)
	PPC_STORE_U32(ctx.r1.u32 + 312, ctx.r11.u32);
	// stw r10,320(r1)
	PPC_STORE_U32(ctx.r1.u32 + 320, ctx.r10.u32);
	// stw r9,324(r1)
	PPC_STORE_U32(ctx.r1.u32 + 324, ctx.r9.u32);
	// bl 0x8305d608
	ctx.lr = 0x8305D9BC;
	sub_8305D608(ctx, base);
	// stw r3,308(r1)
	PPC_STORE_U32(ctx.r1.u32 + 308, ctx.r3.u32);
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82da9ce8
	ctx.lr = 0x8305D9CC;
	sub_82DA9CE8(ctx, base);
loc_8305D9CC:
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82da8c38
	ctx.lr = 0x8305D9D4;
	sub_82DA8C38(ctx, base);
	// lwz r11,448(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 448);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r28,r28,88
	ctx.r28.s64 = ctx.r28.s64 + 88;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, xer);
	// blt cr6,0x8305d8ec
	if (cr6.lt) goto loc_8305D8EC;
loc_8305D9E8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,2396(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 2396);
	// bl 0x83a7a980
	ctx.lr = 0x8305D9F4;
	sub_83A7A980(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x837b0c10
	ctx.lr = 0x8305DA00;
	sub_837B0C10(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82e88020
	ctx.lr = 0x8305DA0C;
	sub_82E88020(ctx, base);
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8305da2c
	if (cr6.lt) goto loc_8305DA2C;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x8305DA2C;
	sub_825952B8(ctx, base);
loc_8305DA2C:
	// li r11,15
	ctx.r11.s64 = 15;
	// stw r26,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r26.u32);
	// stb r26,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r26.u8);
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// stw r11,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r11.u32);
	// bl 0x82da8c38
	ctx.lr = 0x8305DA44;
	sub_82DA8C38(ctx, base);
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// bl 0x82da8c38
	ctx.lr = 0x8305DA4C;
	sub_82DA8C38(ctx, base);
	// addi r3,r1,448
	ctx.r3.s64 = ctx.r1.s64 + 448;
	// bl 0x82da1e28
	ctx.lr = 0x8305DA54;
	sub_82DA1E28(ctx, base);
loc_8305DA54:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,2464
	ctx.r1.s64 = ctx.r1.s64 + 2464;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8305DA60"))) PPC_WEAK_FUNC(sub_8305DA60);
PPC_FUNC_IMPL(__imp__sub_8305DA60) {
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
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-19200
	ctx.r9.s64 = ctx.r11.s64 + -19200;
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
	ctx.lr = 0x8305DA98;
	sub_82F42278(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x8305dab0
	if (cr6.eq) goto loc_8305DAB0;
	// bl 0x82416268
	ctx.lr = 0x8305DAAC;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8305DAB0:
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

__attribute__((alias("__imp__sub_8305DAC8"))) PPC_WEAK_FUNC(sub_8305DAC8);
PPC_FUNC_IMPL(__imp__sub_8305DAC8) {
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
	ctx.lr = 0x8305DAF8;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8305db2c
	if (cr6.eq) goto loc_8305DB2C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82f42220
	ctx.lr = 0x8305DB0C;
	sub_82F42220(ctx, base);
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-19200
	ctx.r9.s64 = ctx.r11.s64 + -19200;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r8,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r8.u32);
	// b 0x8305db30
	goto loc_8305DB30;
loc_8305DB2C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8305DB30:
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

__attribute__((alias("__imp__sub_8305DB48"))) PPC_WEAK_FUNC(sub_8305DB48);
PPC_FUNC_IMPL(__imp__sub_8305DB48) {
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
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x830ff290
	ctx.lr = 0x8305DB60;
	sub_830FF290(ctx, base);
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// addi r11,r11,-44
	ctx.r11.s64 = ctx.r11.s64 + -44;
	// cmplwi cr6,r11,17
	cr6.compare<uint32_t>(ctx.r11.u32, 17, xer);
	// bgt cr6,0x8305dc54
	if (cr6.gt) goto loc_8305DC54;
	// lis r12,-31994
	ctx.r12.s64 = -2096758784;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-9336
	ctx.r12.s64 = ctx.r12.s64 + -9336;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_8305DBD0;
	case 1:
		goto loc_8305DC54;
	case 2:
		goto loc_8305DC54;
	case 3:
		goto loc_8305DC54;
	case 4:
		goto loc_8305DC54;
	case 5:
		goto loc_8305DC28;
	case 6:
		goto loc_8305DC28;
	case 7:
		goto loc_8305DC54;
	case 8:
		goto loc_8305DC54;
	case 9:
		goto loc_8305DBFC;
	case 10:
		goto loc_8305DC54;
	case 11:
		goto loc_8305DBFC;
	case 12:
		goto loc_8305DBFC;
	case 13:
		goto loc_8305DC54;
	case 14:
		goto loc_8305DC54;
	case 15:
		goto loc_8305DC54;
	case 16:
		goto loc_8305DC54;
	case 17:
		goto loc_8305DBFC;
	default:
		return;
	}
	// lwz r24,-9264(r5)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r5.u32 + -9264);
	// lwz r24,-9132(r5)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r5.u32 + -9132);
	// lwz r24,-9132(r5)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r5.u32 + -9132);
	// lwz r24,-9132(r5)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r5.u32 + -9132);
	// lwz r24,-9132(r5)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r5.u32 + -9132);
	// lwz r24,-9176(r5)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r5.u32 + -9176);
	// lwz r24,-9176(r5)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r5.u32 + -9176);
	// lwz r24,-9132(r5)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r5.u32 + -9132);
	// lwz r24,-9132(r5)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r5.u32 + -9132);
	// lwz r24,-9220(r5)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r5.u32 + -9220);
	// lwz r24,-9132(r5)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r5.u32 + -9132);
	// lwz r24,-9220(r5)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r5.u32 + -9220);
	// lwz r24,-9220(r5)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r5.u32 + -9220);
	// lwz r24,-9132(r5)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r5.u32 + -9132);
	// lwz r24,-9132(r5)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r5.u32 + -9132);
	// lwz r24,-9132(r5)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r5.u32 + -9132);
	// lwz r24,-9132(r5)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r5.u32 + -9132);
	// lwz r24,-9220(r5)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r5.u32 + -9220);
loc_8305DBD0:
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r11,r11,-19300
	ctx.r11.s64 = ctx.r11.s64 + -19300;
	// addi r4,r11,-28
	ctx.r4.s64 = ctx.r11.s64 + -28;
	// bl 0x837b0c10
	ctx.lr = 0x8305DBE4;
	sub_837B0C10(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x8305DBF0;
	sub_82E88020(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8387e8e0
	ctx.lr = 0x8305DBF8;
	sub_8387E8E0(ctx, base);
	// b 0x8305dc90
	goto loc_8305DC90;
loc_8305DBFC:
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// addi r11,r11,-19300
	ctx.r11.s64 = ctx.r11.s64 + -19300;
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// bl 0x837b0c10
	ctx.lr = 0x8305DC10;
	sub_837B0C10(ctx, base);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x8305DC1C;
	sub_82E88020(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x8387e8e0
	ctx.lr = 0x8305DC24;
	sub_8387E8E0(ctx, base);
	// b 0x8305dc90
	goto loc_8305DC90;
loc_8305DC28:
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// addi r11,r11,-19300
	ctx.r11.s64 = ctx.r11.s64 + -19300;
	// addi r4,r11,-8
	ctx.r4.s64 = ctx.r11.s64 + -8;
	// bl 0x837b0c10
	ctx.lr = 0x8305DC3C;
	sub_837B0C10(ctx, base);
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x8305DC48;
	sub_82E88020(ctx, base);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x8387e8e0
	ctx.lr = 0x8305DC50;
	sub_8387E8E0(ctx, base);
	// b 0x8305dc90
	goto loc_8305DC90;
loc_8305DC54:
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-19300
	ctx.r4.s64 = ctx.r11.s64 + -19300;
	// bl 0x837b0c10
	ctx.lr = 0x8305DC64;
	sub_837B0C10(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x8305DC70;
	sub_82E88020(ctx, base);
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x8305dc90
	if (cr6.lt) goto loc_8305DC90;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x8305DC90;
	sub_825952B8(ctx, base);
loc_8305DC90:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8305DCA8"))) PPC_WEAK_FUNC(sub_8305DCA8);
PPC_FUNC_IMPL(__imp__sub_8305DCA8) {
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
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-18952
	ctx.r9.s64 = ctx.r11.s64 + -18952;
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
	ctx.lr = 0x8305DCE0;
	sub_82F42278(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x8305dcf8
	if (cr6.eq) goto loc_8305DCF8;
	// bl 0x82416268
	ctx.lr = 0x8305DCF4;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8305DCF8:
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

__attribute__((alias("__imp__sub_8305DD10"))) PPC_WEAK_FUNC(sub_8305DD10);
PPC_FUNC_IMPL(__imp__sub_8305DD10) {
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
	ctx.lr = 0x8305DD40;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8305dd74
	if (cr6.eq) goto loc_8305DD74;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82f42220
	ctx.lr = 0x8305DD54;
	sub_82F42220(ctx, base);
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-18952
	ctx.r9.s64 = ctx.r11.s64 + -18952;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r8,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r8.u32);
	// b 0x8305dd78
	goto loc_8305DD78;
loc_8305DD74:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8305DD78:
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

__attribute__((alias("__imp__sub_8305DD90"))) PPC_WEAK_FUNC(sub_8305DD90);
PPC_FUNC_IMPL(__imp__sub_8305DD90) {
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
	// stwu r1,-2320(r1)
	ea = -2320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82d86078
	ctx.lr = 0x8305DDAC;
	sub_82D86078(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x831156e8
	ctx.lr = 0x8305DDB4;
	sub_831156E8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// li r5,2164
	ctx.r5.s64 = 2164;
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// addis r4,r10,1
	ctx.r4.s64 = ctx.r10.s64 + 65536;
	// addi r4,r4,30440
	ctx.r4.s64 = ctx.r4.s64 + 30440;
	// bl 0x831ce980
	ctx.lr = 0x8305DDD0;
	sub_831CE980(ctx, base);
	// lwz r9,68(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 68);
	// lbz r6,1282(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 1282);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r8,15
	ctx.r8.s64 = 15;
	// lis r7,-32225
	ctx.r7.s64 = -2111897600;
	// li r5,7
	ctx.r5.s64 = 7;
	// addi r4,r7,-19044
	ctx.r4.s64 = ctx.r7.s64 + -19044;
	// stb r6,160(r9)
	PPC_STORE_U8(ctx.r9.u32 + 160, ctx.r6.u8);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r8,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r8.u32);
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// stb r11,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r11.u8);
	// bl 0x8259cc28
	ctx.lr = 0x8305DE04;
	sub_8259CC28(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x8305DE10;
	sub_82E88020(ctx, base);
	// lwz r5,116(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r5,16
	cr6.compare<uint32_t>(ctx.r5.u32, 16, xer);
	// blt cr6,0x8305de30
	if (cr6.lt) goto loc_8305DE30;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x8305DE30;
	sub_825952B8(ctx, base);
loc_8305DE30:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,2320
	ctx.r1.s64 = ctx.r1.s64 + 2320;
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

__attribute__((alias("__imp__sub_8305DE4C"))) PPC_WEAK_FUNC(sub_8305DE4C);
PPC_FUNC_IMPL(__imp__sub_8305DE4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8305DE50"))) PPC_WEAK_FUNC(sub_8305DE50);
PPC_FUNC_IMPL(__imp__sub_8305DE50) {
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
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-18704
	ctx.r9.s64 = ctx.r11.s64 + -18704;
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
	ctx.lr = 0x8305DE88;
	sub_82F42278(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x8305dea0
	if (cr6.eq) goto loc_8305DEA0;
	// bl 0x82416268
	ctx.lr = 0x8305DE9C;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8305DEA0:
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

__attribute__((alias("__imp__sub_8305DEB8"))) PPC_WEAK_FUNC(sub_8305DEB8);
PPC_FUNC_IMPL(__imp__sub_8305DEB8) {
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
	ctx.lr = 0x8305DEE8;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8305df1c
	if (cr6.eq) goto loc_8305DF1C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82f42220
	ctx.lr = 0x8305DEFC;
	sub_82F42220(ctx, base);
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-18704
	ctx.r9.s64 = ctx.r11.s64 + -18704;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r8,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r8.u32);
	// b 0x8305df20
	goto loc_8305DF20;
loc_8305DF1C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8305DF20:
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

__attribute__((alias("__imp__sub_8305DF38"))) PPC_WEAK_FUNC(sub_8305DF38);
PPC_FUNC_IMPL(__imp__sub_8305DF38) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82d86078
	ctx.lr = 0x8305DF54;
	sub_82D86078(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x831156e8
	ctx.lr = 0x8305DF5C;
	sub_831156E8(ctx, base);
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// lwz r10,68(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 68);
	// addis r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 65536;
	// addi r11,r11,30440
	ctx.r11.s64 = ctx.r11.s64 + 30440;
	// lbz r10,160(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 160);
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// lbz r8,1154(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1154);
	// cmplw cr6,r8,r10
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, xer);
	// beq cr6,0x8305df9c
	if (cr6.eq) goto loc_8305DF9C;
	// stb r10,1154(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1154, ctx.r10.u8);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8305df9c
	if (!cr6.eq) goto loc_8305DF9C;
	// li r5,65
	ctx.r5.s64 = 65;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,1669
	ctx.r3.s64 = ctx.r11.s64 + 1669;
	// bl 0x831cdcf0
	ctx.lr = 0x8305DF9C;
	sub_831CDCF0(ctx, base);
loc_8305DF9C:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,15
	ctx.r10.s64 = 15;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// lis r9,-32225
	ctx.r9.s64 = -2111897600;
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// li r5,7
	ctx.r5.s64 = 7;
	// stb r11,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r11.u8);
	// addi r4,r9,-18796
	ctx.r4.s64 = ctx.r9.s64 + -18796;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8259cc28
	ctx.lr = 0x8305DFC4;
	sub_8259CC28(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x8305DFD0;
	sub_82E88020(ctx, base);
	// lwz r8,116(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r8,16
	cr6.compare<uint32_t>(ctx.r8.u32, 16, xer);
	// blt cr6,0x8305dff0
	if (cr6.lt) goto loc_8305DFF0;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x8305DFF0;
	sub_825952B8(ctx, base);
loc_8305DFF0:
	// li r3,1
	ctx.r3.s64 = 1;
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

__attribute__((alias("__imp__sub_8305E00C"))) PPC_WEAK_FUNC(sub_8305E00C);
PPC_FUNC_IMPL(__imp__sub_8305E00C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8305E010"))) PPC_WEAK_FUNC(sub_8305E010);
PPC_FUNC_IMPL(__imp__sub_8305E010) {
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
	ctx.lr = 0x8305E040;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8305e080
	if (cr6.eq) goto loc_8305E080;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82f42220
	ctx.lr = 0x8305E054;
	sub_82F42220(ctx, base);
	// lis r10,-32225
	ctx.r10.s64 = -2111897600;
	// lis r9,-32239
	ctx.r9.s64 = -2112815104;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r8,r10,-18448
	ctx.r8.s64 = ctx.r10.s64 + -18448;
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
	// b 0x8305e084
	goto loc_8305E084;
loc_8305E080:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8305E084:
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

__attribute__((alias("__imp__sub_8305E09C"))) PPC_WEAK_FUNC(sub_8305E09C);
PPC_FUNC_IMPL(__imp__sub_8305E09C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8305E0A0"))) PPC_WEAK_FUNC(sub_8305E0A0);
PPC_FUNC_IMPL(__imp__sub_8305E0A0) {
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
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-18448
	ctx.r9.s64 = ctx.r11.s64 + -18448;
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
	ctx.lr = 0x8305E0D8;
	sub_82F42278(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x8305e0f0
	if (cr6.eq) goto loc_8305E0F0;
	// bl 0x82416268
	ctx.lr = 0x8305E0EC;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8305E0F0:
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

__attribute__((alias("__imp__sub_8305E108"))) PPC_WEAK_FUNC(sub_8305E108);
PPC_FUNC_IMPL(__imp__sub_8305E108) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x8305E110;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82d86078
	ctx.lr = 0x8305E118;
	sub_82D86078(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8305e188
	if (cr6.eq) goto loc_8305E188;
	// li r3,6
	ctx.r3.s64 = 6;
	// lwz r29,52(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// lwz r31,100(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// bl 0x82da9f18
	ctx.lr = 0x8305E134;
	sub_82DA9F18(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r6,400
	ctx.r6.s64 = 400;
	// bl 0x82da9890
	ctx.lr = 0x8305E148;
	sub_82DA9890(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83767d18
	ctx.lr = 0x8305E150;
	sub_83767D18(ctx, base);
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r31,0(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, xer);
	// beq cr6,0x8305e178
	if (cr6.eq) goto loc_8305E178;
loc_8305E160:
	// addi r4,r31,8
	ctx.r4.s64 = ctx.r31.s64 + 8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82da9740
	ctx.lr = 0x8305E16C;
	sub_82DA9740(ctx, base);
	// lwz r31,0(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, xer);
	// bne cr6,0x8305e160
	if (!cr6.eq) goto loc_8305E160;
loc_8305E178:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82da9248
	ctx.lr = 0x8305E180;
	sub_82DA9248(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_8305E188:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8305E194"))) PPC_WEAK_FUNC(sub_8305E194);
PPC_FUNC_IMPL(__imp__sub_8305E194) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8305E198"))) PPC_WEAK_FUNC(sub_8305E198);
PPC_FUNC_IMPL(__imp__sub_8305E198) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x8305E1A0;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,88(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// blt cr6,0x8305e1e4
	if (cr6.lt) goto loc_8305E1E4;
	// bne cr6,0x8305e1f0
	if (!cr6.eq) goto loc_8305E1F0;
	// bl 0x82dcd4a0
	ctx.lr = 0x8305E1C4;
	sub_82DCD4A0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8305e1f0
	if (cr6.eq) goto loc_8305E1F0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8305e108
	ctx.lr = 0x8305E1D8;
	sub_8305E108(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r30,1
	ctx.r30.s64 = 1;
	// b 0x8305e1f0
	goto loc_8305E1F0;
loc_8305E1E4:
	// bl 0x82dcd050
	ctx.lr = 0x8305E1E8;
	sub_82DCD050(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
loc_8305E1F0:
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8305e234
	if (cr6.eq) goto loc_8305E234;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bne cr6,0x8305e218
	if (!cr6.eq) goto loc_8305E218;
	// addi r11,r11,-18540
	ctx.r11.s64 = ctx.r11.s64 + -18540;
	// addi r4,r11,-12
	ctx.r4.s64 = ctx.r11.s64 + -12;
	// b 0x8305e21c
	goto loc_8305E21C;
loc_8305E218:
	// addi r4,r11,-18540
	ctx.r4.s64 = ctx.r11.s64 + -18540;
loc_8305E21C:
	// bl 0x837b0c10
	ctx.lr = 0x8305E220;
	sub_837B0C10(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x8305E22C;
	sub_82E88020(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8387e8e0
	ctx.lr = 0x8305E234;
	sub_8387E8E0(ctx, base);
loc_8305E234:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8305E240"))) PPC_WEAK_FUNC(sub_8305E240);
PPC_FUNC_IMPL(__imp__sub_8305E240) {
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
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-17984
	ctx.r9.s64 = ctx.r11.s64 + -17984;
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
	ctx.lr = 0x8305E278;
	sub_82F42278(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x8305e290
	if (cr6.eq) goto loc_8305E290;
	// bl 0x82416268
	ctx.lr = 0x8305E28C;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8305E290:
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

__attribute__((alias("__imp__sub_8305E2A8"))) PPC_WEAK_FUNC(sub_8305E2A8);
PPC_FUNC_IMPL(__imp__sub_8305E2A8) {
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
	ctx.lr = 0x8305E2D8;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8305e30c
	if (cr6.eq) goto loc_8305E30C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82f42220
	ctx.lr = 0x8305E2EC;
	sub_82F42220(ctx, base);
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-17984
	ctx.r9.s64 = ctx.r11.s64 + -17984;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r8,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r8.u32);
	// b 0x8305e310
	goto loc_8305E310;
loc_8305E30C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8305E310:
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

__attribute__((alias("__imp__sub_8305E328"))) PPC_WEAK_FUNC(sub_8305E328);
PPC_FUNC_IMPL(__imp__sub_8305E328) {
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
	// lis r9,-32225
	ctx.r9.s64 = -2111897600;
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stb r11,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r11.u8);
	// li r5,7
	ctx.r5.s64 = 7;
	// addi r4,r9,-18076
	ctx.r4.s64 = ctx.r9.s64 + -18076;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8259cc28
	ctx.lr = 0x8305E364;
	sub_8259CC28(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x8305E370;
	sub_82E88020(ctx, base);
	// lwz r8,116(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r8,16
	cr6.compare<uint32_t>(ctx.r8.u32, 16, xer);
	// blt cr6,0x8305e390
	if (cr6.lt) goto loc_8305E390;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x8305E390;
	sub_825952B8(ctx, base);
loc_8305E390:
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

__attribute__((alias("__imp__sub_8305E3A8"))) PPC_WEAK_FUNC(sub_8305E3A8);
PPC_FUNC_IMPL(__imp__sub_8305E3A8) {
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
	ctx.lr = 0x8305E3C0;
	sub_82F42220(ctx, base);
	// lis r10,-32225
	ctx.r10.s64 = -2111897600;
	// lis r9,-32239
	ctx.r9.s64 = -2112815104;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r8,r10,-17480
	ctx.r8.s64 = ctx.r10.s64 + -17480;
	// addi r7,r9,-17088
	ctx.r7.s64 = ctx.r9.s64 + -17088;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// li r5,2048
	ctx.r5.s64 = 2048;
	// stw r7,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r7.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r11.u32);
	// bl 0x831cdcf0
	ctx.lr = 0x8305E3F4;
	sub_831CDCF0(ctx, base);
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

__attribute__((alias("__imp__sub_8305E40C"))) PPC_WEAK_FUNC(sub_8305E40C);
PPC_FUNC_IMPL(__imp__sub_8305E40C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8305E410"))) PPC_WEAK_FUNC(sub_8305E410);
PPC_FUNC_IMPL(__imp__sub_8305E410) {
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
	// li r11,31
	ctx.r11.s64 = 31;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,2144
	ctx.r4.s64 = 2144;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x8305E43C;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8305e460
	if (cr6.eq) goto loc_8305E460;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8305e3a8
	ctx.lr = 0x8305E44C;
	sub_8305E3A8(ctx, base);
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
loc_8305E460:
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

__attribute__((alias("__imp__sub_8305E478"))) PPC_WEAK_FUNC(sub_8305E478);
PPC_FUNC_IMPL(__imp__sub_8305E478) {
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
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// lwz r10,92(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	// lis r9,-32239
	ctx.r9.s64 = -2112815104;
	// addi r8,r11,-17480
	ctx.r8.s64 = ctx.r11.s64 + -17480;
	// addi r7,r9,-17088
	ctx.r7.s64 = ctx.r9.s64 + -17088;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r7,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r7.u32);
	// beq cr6,0x8305e4f4
	if (cr6.eq) goto loc_8305E4F4;
	// li r11,31
	ctx.r11.s64 = 31;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595150
	ctx.lr = 0x8305E4C4;
	sub_82595150(ctx, base);
	// lwz r3,92(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8305e4e4
	if (cr6.eq) goto loc_8305E4E4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8305E4E4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8305E4E4:
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595170
	ctx.lr = 0x8305E4EC;
	sub_82595170(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r11.u32);
loc_8305E4F4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f42278
	ctx.lr = 0x8305E4FC;
	sub_82F42278(ctx, base);
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

__attribute__((alias("__imp__sub_8305E510"))) PPC_WEAK_FUNC(sub_8305E510);
PPC_FUNC_IMPL(__imp__sub_8305E510) {
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
	// bl 0x8305e478
	ctx.lr = 0x8305E530;
	sub_8305E478(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8305e548
	if (cr6.eq) goto loc_8305E548;
	// bl 0x82416268
	ctx.lr = 0x8305E544;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8305E548:
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

__attribute__((alias("__imp__sub_8305E560"))) PPC_WEAK_FUNC(sub_8305E560);
PPC_FUNC_IMPL(__imp__sub_8305E560) {
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
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,-17016
	ctx.r10.s64 = ctx.r11.s64 + -17016;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x831032a0
	ctx.lr = 0x8305E58C;
	sub_831032A0(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8305e5a4
	if (cr6.eq) goto loc_8305E5A4;
	// bl 0x82416268
	ctx.lr = 0x8305E5A0;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8305E5A4:
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

__attribute__((alias("__imp__sub_8305E5BC"))) PPC_WEAK_FUNC(sub_8305E5BC);
PPC_FUNC_IMPL(__imp__sub_8305E5BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8305E5C0"))) PPC_WEAK_FUNC(sub_8305E5C0);
PPC_FUNC_IMPL(__imp__sub_8305E5C0) {
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
	// li r4,76
	ctx.r4.s64 = 76;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x8305E5F0;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8305e620
	if (cr6.eq) goto loc_8305E620;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x83103328
	ctx.lr = 0x8305E604;
	sub_83103328(ctx, base);
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,-17016
	ctx.r9.s64 = ctx.r11.s64 + -17016;
	// stw r10,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// b 0x8305e624
	goto loc_8305E624;
loc_8305E620:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8305E624:
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

__attribute__((alias("__imp__sub_8305E63C"))) PPC_WEAK_FUNC(sub_8305E63C);
PPC_FUNC_IMPL(__imp__sub_8305E63C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8305E640"))) PPC_WEAK_FUNC(sub_8305E640);
PPC_FUNC_IMPL(__imp__sub_8305E640) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// addis r11,r11,-259
	ctx.r11.s64 = ctx.r11.s64 + -16973824;
	// addic. r11,r11,-5
	xer.ca = ctx.r11.u32 > 4;
	ctx.r11.s64 = ctx.r11.s64 + -5;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x8305e66c
	if (cr0.eq) goto loc_8305E66C;
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// li r11,6
	ctx.r11.s64 = 6;
	// stw r11,72(r10)
	PPC_STORE_U32(ctx.r10.u32 + 72, ctx.r11.u32);
	// blr 
	return;
loc_8305E66C:
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,72(r10)
	PPC_STORE_U32(ctx.r10.u32 + 72, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8305E678"))) PPC_WEAK_FUNC(sub_8305E678);
PPC_FUNC_IMPL(__imp__sub_8305E678) {
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
	// lwz r11,72(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,6
	cr6.compare<uint32_t>(ctx.r11.u32, 6, xer);
	// bgt cr6,0x8305e770
	if (cr6.gt) goto loc_8305E770;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x8305e6c0
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8305E6C0;
	// bdzf 4*cr6+eq,0x8305e770
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8305E770;
	// bdzf 4*cr6+eq,0x8305e6dc
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8305E6DC;
	// bdzf 4*cr6+eq,0x8305e700
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8305E700;
	// bdzf 4*cr6+eq,0x8305e770
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8305E770;
	// bne cr6,0x8305e754
	if (!cr6.eq) goto loc_8305E754;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x8305e76c
	goto loc_8305E76C;
loc_8305E6C0:
	// bl 0x831021a0
	ctx.lr = 0x8305E6C4;
	sub_831021A0(ctx, base);
	// lis r4,259
	ctx.r4.s64 = 16973824;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,4
	ctx.r4.u64 = ctx.r4.u64 | 4;
	// bl 0x83102a08
	ctx.lr = 0x8305E6D4;
	sub_83102A08(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// b 0x8305e76c
	goto loc_8305E76C;
loc_8305E6DC:
	// bl 0x82d16ed0
	ctx.lr = 0x8305E6E0;
	sub_82D16ED0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8305e770
	if (cr6.eq) goto loc_8305E770;
	// bl 0x82d15400
	ctx.lr = 0x8305E6EC;
	sub_82D15400(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8305e770
	if (cr6.eq) goto loc_8305E770;
	// li r11,4
	ctx.r11.s64 = 4;
	// b 0x8305e76c
	goto loc_8305E76C;
loc_8305E700:
	// bl 0x82d16ed0
	ctx.lr = 0x8305E704;
	sub_82D16ED0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8305e720
	if (cr6.eq) goto loc_8305E720;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82d17018
	ctx.lr = 0x8305E720;
	sub_82D17018(ctx, base);
loc_8305E720:
	// bl 0x831021a0
	ctx.lr = 0x8305E724;
	sub_831021A0(ctx, base);
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// lis r4,259
	ctx.r4.s64 = 16973824;
	// addi r5,r11,-17108
	ctx.r5.s64 = ctx.r11.s64 + -17108;
	// ori r4,r4,6
	ctx.r4.u64 = ctx.r4.u64 | 6;
	// bl 0x83102a08
	ctx.lr = 0x8305E738;
	sub_83102A08(ctx, base);
	// li r10,5
	ctx.r10.s64 = 5;
	// stw r10,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r10.u32);
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
loc_8305E754:
	// bl 0x831021a0
	ctx.lr = 0x8305E758;
	sub_831021A0(ctx, base);
	// lis r4,259
	ctx.r4.s64 = 16973824;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,3
	ctx.r4.u64 = ctx.r4.u64 | 3;
	// bl 0x83102a08
	ctx.lr = 0x8305E768;
	sub_83102A08(ctx, base);
	// li r11,7
	ctx.r11.s64 = 7;
loc_8305E76C:
	// stw r11,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
loc_8305E770:
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

__attribute__((alias("__imp__sub_8305E784"))) PPC_WEAK_FUNC(sub_8305E784);
PPC_FUNC_IMPL(__imp__sub_8305E784) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8305E788"))) PPC_WEAK_FUNC(sub_8305E788);
PPC_FUNC_IMPL(__imp__sub_8305E788) {
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
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-16600
	ctx.r9.s64 = ctx.r11.s64 + -16600;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r8,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r8.u32);
	// addi r31,r3,92
	ctx.r31.s64 = ctx.r3.s64 + 92;
	// lwz r7,112(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 112);
	// cmplwi cr6,r7,16
	cr6.compare<uint32_t>(ctx.r7.u32, 16, xer);
	// blt cr6,0x8305e7dc
	if (cr6.lt) goto loc_8305E7DC;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x8305E7DC;
	sub_825952B8(ctx, base);
loc_8305E7DC:
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
	ctx.lr = 0x8305E7F8;
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

__attribute__((alias("__imp__sub_8305E810"))) PPC_WEAK_FUNC(sub_8305E810);
PPC_FUNC_IMPL(__imp__sub_8305E810) {
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
	ctx.lr = 0x8305E828;
	sub_82F42220(ctx, base);
	// lis r10,-32225
	ctx.r10.s64 = -2111897600;
	// lis r9,-32239
	ctx.r9.s64 = -2112815104;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r8,r10,-16600
	ctx.r8.s64 = ctx.r10.s64 + -16600;
	// addi r7,r9,-17088
	ctx.r7.s64 = ctx.r9.s64 + -17088;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// li r6,15
	ctx.r6.s64 = 15;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// stw r7,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r7.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r6,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r6.u32);
	// stw r11,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r11.u32);
	// stb r11,92(r31)
	PPC_STORE_U8(ctx.r31.u32 + 92, ctx.r11.u8);
	// stw r11,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_8305E874"))) PPC_WEAK_FUNC(sub_8305E874);
PPC_FUNC_IMPL(__imp__sub_8305E874) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8305E878"))) PPC_WEAK_FUNC(sub_8305E878);
PPC_FUNC_IMPL(__imp__sub_8305E878) {
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
	// bl 0x8305e788
	ctx.lr = 0x8305E898;
	sub_8305E788(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8305e8b0
	if (cr6.eq) goto loc_8305E8B0;
	// bl 0x82416268
	ctx.lr = 0x8305E8AC;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8305E8B0:
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

__attribute__((alias("__imp__sub_8305E8C8"))) PPC_WEAK_FUNC(sub_8305E8C8);
PPC_FUNC_IMPL(__imp__sub_8305E8C8) {
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
	// li r11,31
	ctx.r11.s64 = 31;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,124
	ctx.r4.s64 = 124;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x8305E8F4;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8305e918
	if (cr6.eq) goto loc_8305E918;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8305e810
	ctx.lr = 0x8305E904;
	sub_8305E810(ctx, base);
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
loc_8305E918:
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

__attribute__((alias("__imp__sub_8305E930"))) PPC_WEAK_FUNC(sub_8305E930);
PPC_FUNC_IMPL(__imp__sub_8305E930) {
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
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8305e9a4
	if (cr6.eq) goto loc_8305E9A4;
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// bne cr6,0x8305e9bc
	if (!cr6.eq) goto loc_8305E9BC;
	// lwz r10,112(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 112);
	// addi r11,r3,92
	ctx.r11.s64 = ctx.r3.s64 + 92;
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x8305e96c
	if (cr6.lt) goto loc_8305E96C;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_8305E96C:
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x837b0c10
	ctx.lr = 0x8305E978;
	sub_837B0C10(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x8305E984;
	sub_82E88020(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8387e8e0
	ctx.lr = 0x8305E98C;
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
loc_8305E9A4:
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// addi r3,r31,92
	ctx.r3.s64 = ctx.r31.s64 + 92;
	// addi r4,r11,-16692
	ctx.r4.s64 = ctx.r11.s64 + -16692;
	// bl 0x8259d6c0
	ctx.lr = 0x8305E9B4;
	sub_8259D6C0(ctx, base);
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r10,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r10.u32);
loc_8305E9BC:
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

__attribute__((alias("__imp__sub_8305E9D4"))) PPC_WEAK_FUNC(sub_8305E9D4);
PPC_FUNC_IMPL(__imp__sub_8305E9D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8305E9D8"))) PPC_WEAK_FUNC(sub_8305E9D8);
PPC_FUNC_IMPL(__imp__sub_8305E9D8) {
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
	ctx.lr = 0x8305E9F0;
	sub_82F42220(ctx, base);
	// lis r9,-32225
	ctx.r9.s64 = -2111897600;
	// lis r8,-32239
	ctx.r8.s64 = -2112815104;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,2
	ctx.r10.s64 = 2;
	// addi r7,r9,-15824
	ctx.r7.s64 = ctx.r9.s64 + -15824;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// addi r6,r8,-17088
	ctx.r6.s64 = ctx.r8.s64 + -17088;
	// stw r10,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r10.u32);
	// stw r7,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r7.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r6,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r6.u32);
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// stb r11,100(r31)
	PPC_STORE_U8(ctx.r31.u32 + 100, ctx.r11.u8);
	// stw r10,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r10.u32);
	// stb r11,108(r31)
	PPC_STORE_U8(ctx.r31.u32 + 108, ctx.r11.u8);
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

__attribute__((alias("__imp__sub_8305EA44"))) PPC_WEAK_FUNC(sub_8305EA44);
PPC_FUNC_IMPL(__imp__sub_8305EA44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8305EA48"))) PPC_WEAK_FUNC(sub_8305EA48);
PPC_FUNC_IMPL(__imp__sub_8305EA48) {
	PPC_FUNC_PROLOGUE();
	// b 0x82deab28
	sub_82DEAB28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8305EA4C"))) PPC_WEAK_FUNC(sub_8305EA4C);
PPC_FUNC_IMPL(__imp__sub_8305EA4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8305EA50"))) PPC_WEAK_FUNC(sub_8305EA50);
PPC_FUNC_IMPL(__imp__sub_8305EA50) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r10,88(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// li r9,1
	ctx.r9.s64 = 1;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// beq cr6,0x8305ead0
	if (cr6.eq) goto loc_8305EAD0;
	// cmplwi cr6,r10,2
	cr6.compare<uint32_t>(ctx.r10.u32, 2, xer);
	// beq cr6,0x8305eaac
	if (cr6.eq) goto loc_8305EAAC;
	// cmplwi cr6,r10,3
	cr6.compare<uint32_t>(ctx.r10.u32, 3, xer);
	// beq cr6,0x8305ea80
	if (cr6.eq) goto loc_8305EA80;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// b 0x83824d80
	sub_83824D80(ctx, base);
	return;
loc_8305EA80:
	// lis r10,264
	ctx.r10.s64 = 17301504;
	// lwz r8,4(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// ori r7,r10,5
	ctx.r7.u64 = ctx.r10.u64 | 5;
	// cmplw cr6,r8,r7
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, xer);
	// bne cr6,0x8305eaa4
	if (!cr6.eq) goto loc_8305EAA4;
	// li r10,4
	ctx.r10.s64 = 4;
	// stw r9,92(r11)
	PPC_STORE_U32(ctx.r11.u32 + 92, ctx.r9.u32);
	// stw r10,88(r11)
	PPC_STORE_U32(ctx.r11.u32 + 88, ctx.r10.u32);
	// blr 
	return;
loc_8305EAA4:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// b 0x83824d80
	sub_83824D80(ctx, base);
	return;
loc_8305EAAC:
	// lis r10,265
	ctx.r10.s64 = 17367040;
	// lwz r8,4(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// ori r7,r10,5
	ctx.r7.u64 = ctx.r10.u64 | 5;
	// cmplw cr6,r8,r7
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, xer);
	// bne cr6,0x8305eac8
	if (!cr6.eq) goto loc_8305EAC8;
	// stb r9,108(r11)
	PPC_STORE_U8(ctx.r11.u32 + 108, ctx.r9.u8);
	// blr 
	return;
loc_8305EAC8:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// b 0x83824d80
	sub_83824D80(ctx, base);
	return;
loc_8305EAD0:
	// lis r10,264
	ctx.r10.s64 = 17301504;
	// lwz r9,4(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// ori r8,r10,5
	ctx.r8.u64 = ctx.r10.u64 | 5;
	// cmplw cr6,r9,r8
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, xer);
	// bne cr6,0x8305eaf0
	if (!cr6.eq) goto loc_8305EAF0;
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r10,88(r11)
	PPC_STORE_U32(ctx.r11.u32 + 88, ctx.r10.u32);
	// blr 
	return;
loc_8305EAF0:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// b 0x83824d80
	sub_83824D80(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8305EAF8"))) PPC_WEAK_FUNC(sub_8305EAF8);
PPC_FUNC_IMPL(__imp__sub_8305EAF8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x8305EB00;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x831099d8
	ctx.lr = 0x8305EB08;
	sub_831099D8(ctx, base);
	// bl 0x83109e28
	ctx.lr = 0x8305EB0C;
	sub_83109E28(ctx, base);
	// bl 0x82d06eb8
	ctx.lr = 0x8305EB10;
	sub_82D06EB8(ctx, base);
	// bl 0x82d05818
	ctx.lr = 0x8305EB14;
	sub_82D05818(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
	// lis r10,-32225
	ctx.r10.s64 = -2111897600;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r30,r10,-16446
	ctx.r30.s64 = ctx.r10.s64 + -16446;
loc_8305EB28:
	// addi r10,r30,506
	ctx.r10.s64 = ctx.r30.s64 + 506;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwzx r4,r11,r10
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x82d069f0
	ctx.lr = 0x8305EB38;
	sub_82D069F0(ctx, base);
	// addi r9,r31,1
	ctx.r9.s64 = ctx.r31.s64 + 1;
	// clrlwi r11,r9,24
	ctx.r11.u64 = ctx.r9.u32 & 0xFF;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// blt cr6,0x8305eb28
	if (cr6.lt) goto loc_8305EB28;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d12258
	ctx.lr = 0x8305EB58;
	sub_82D12258(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8305EB60"))) PPC_WEAK_FUNC(sub_8305EB60);
PPC_FUNC_IMPL(__imp__sub_8305EB60) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x8305EB68;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82d06e28
	ctx.lr = 0x8305EB70;
	sub_82D06E28(ctx, base);
	// bl 0x82d05818
	ctx.lr = 0x8305EB74;
	sub_82D05818(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
	// lis r10,-32225
	ctx.r10.s64 = -2111897600;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r30,r10,-16445
	ctx.r30.s64 = ctx.r10.s64 + -16445;
loc_8305EB88:
	// addi r10,r30,505
	ctx.r10.s64 = ctx.r30.s64 + 505;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwzx r4,r11,r10
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x82d06870
	ctx.lr = 0x8305EB98;
	sub_82D06870(ctx, base);
	// addi r9,r31,1
	ctx.r9.s64 = ctx.r31.s64 + 1;
	// clrlwi r11,r9,24
	ctx.r11.u64 = ctx.r9.u32 & 0xFF;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// blt cr6,0x8305eb88
	if (cr6.lt) goto loc_8305EB88;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d12638
	ctx.lr = 0x8305EBB8;
	sub_82D12638(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8305EBC0"))) PPC_WEAK_FUNC(sub_8305EBC0);
PPC_FUNC_IMPL(__imp__sub_8305EBC0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x8305EBC8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82d05818
	ctx.lr = 0x8305EBD0;
	sub_82D05818(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x82d06e70
	ctx.lr = 0x8305EBD8;
	sub_82D06E70(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8305ebf0
	if (!cr6.eq) goto loc_8305EBF0;
loc_8305EBE4:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_8305EBF0:
	// li r31,0
	ctx.r31.s64 = 0;
	// lis r10,-32225
	ctx.r10.s64 = -2111897600;
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r30,r10,-16414
	ctx.r30.s64 = ctx.r10.s64 + -16414;
loc_8305EC00:
	// addi r10,r30,474
	ctx.r10.s64 = ctx.r30.s64 + 474;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwzx r4,r11,r10
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x82d060f8
	ctx.lr = 0x8305EC10;
	sub_82D060F8(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8305ebe4
	if (cr6.eq) goto loc_8305EBE4;
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// blt cr6,0x8305ec00
	if (cr6.lt) goto loc_8305EC00;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d12638
	ctx.lr = 0x8305EC3C;
	sub_82D12638(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// addi r11,r11,0
	ctx.r11.s64 = ctx.r11.s64 + 0;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8305EC54"))) PPC_WEAK_FUNC(sub_8305EC54);
PPC_FUNC_IMPL(__imp__sub_8305EC54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8305EC58"))) PPC_WEAK_FUNC(sub_8305EC58);
PPC_FUNC_IMPL(__imp__sub_8305EC58) {
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
	ctx.lr = 0x8305EC68;
	sub_831156E8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8305ec80
	if (!cr6.eq) goto loc_8305EC80;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8305EC80:
	// bl 0x831156e8
	ctx.lr = 0x8305EC84;
	sub_831156E8(ctx, base);
	// bl 0x83115808
	ctx.lr = 0x8305EC88;
	sub_83115808(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
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

__attribute__((alias("__imp__sub_8305ECA4"))) PPC_WEAK_FUNC(sub_8305ECA4);
PPC_FUNC_IMPL(__imp__sub_8305ECA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8305ECA8"))) PPC_WEAK_FUNC(sub_8305ECA8);
PPC_FUNC_IMPL(__imp__sub_8305ECA8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad4
	ctx.lr = 0x8305ECB0;
	__savegprlr_23(ctx, base);
	// stwu r1,-1200(r1)
	ea = -1200 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x831156e8
	ctx.lr = 0x8305ECB8;
	sub_831156E8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8305eec4
	if (cr6.eq) goto loc_8305EEC4;
	// li r23,0
	ctx.r23.s64 = 0;
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r23,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r23.u32);
	// addis r26,r11,1
	ctx.r26.s64 = ctx.r11.s64 + 65536;
	// addi r26,r26,24336
	ctx.r26.s64 = ctx.r26.s64 + 24336;
	// bl 0x830f1028
	ctx.lr = 0x8305ECDC;
	sub_830F1028(ctx, base);
	// li r5,512
	ctx.r5.s64 = 512;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,608
	ctx.r3.s64 = ctx.r1.s64 + 608;
	// bl 0x831cdcf0
	ctx.lr = 0x8305ECEC;
	sub_831CDCF0(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r31,r23
	ctx.r31.u64 = ctx.r23.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8305ed28
	if (cr6.eq) goto loc_8305ED28;
	// addi r30,r1,608
	ctx.r30.s64 = ctx.r1.s64 + 608;
loc_8305ED00:
	// cmplwi cr6,r11,128
	cr6.compare<uint32_t>(ctx.r11.u32, 128, xer);
	// bge cr6,0x8305ed28
	if (!cr6.lt) goto loc_8305ED28;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830f1030
	ctx.lr = 0x8305ED14;
	sub_830F1030(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// blt cr6,0x8305ed00
	if (cr6.lt) goto loc_8305ED00;
loc_8305ED28:
	// mr r24,r23
	ctx.r24.u64 = ctx.r23.u64;
loc_8305ED2C:
	// lbz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8305eea0
	if (cr6.eq) goto loc_8305EEA0;
	// li r5,512
	ctx.r5.s64 = 512;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x831cdcf0
	ctx.lr = 0x8305ED48;
	sub_831CDCF0(ctx, base);
	// add r27,r24,r26
	ctx.r27.u64 = ctx.r24.u64 + ctx.r26.u64;
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
	// lbz r28,6021(r27)
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r27.u32 + 6021);
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// beq cr6,0x8305ed84
	if (cr6.eq) goto loc_8305ED84;
	// addi r10,r1,92
	ctx.r10.s64 = ctx.r1.s64 + 92;
	// mtctr r28
	ctr.u64 = ctx.r28.u64;
	// rlwinm r8,r24,6,0,25
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 6) & 0xFFFFFFC0;
loc_8305ED68:
	// add r9,r8,r11
	ctx.r9.u64 = ctx.r8.u64 + ctx.r11.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r9,r9,5,0,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 5) & 0xFFFFFFE0;
	// add r9,r9,r26
	ctx.r9.u64 = ctx.r9.u64 + ctx.r26.u64;
	// addi r9,r9,1925
	ctx.r9.s64 = ctx.r9.s64 + 1925;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8305ed68
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8305ED68;
loc_8305ED84:
	// stw r23,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r23.u32);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x830f1040
	ctx.lr = 0x8305ED94;
	sub_830F1040(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
	// mr r31,r23
	ctx.r31.u64 = ctx.r23.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8305ee10
	if (cr6.eq) goto loc_8305EE10;
	// rlwinm r11,r28,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r29,r11,-4
	ctx.r29.s64 = ctx.r11.s64 + -4;
loc_8305EDB8:
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x830f1048
	ctx.lr = 0x8305EDC8;
	sub_830F1048(ctx, base);
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, xer);
	// bge cr6,0x8305ee00
	if (!cr6.lt) goto loc_8305EE00;
	// bl 0x830f1038
	ctx.lr = 0x8305EDDC;
	sub_830F1038(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8305ee00
	if (cr6.eq) goto loc_8305EE00;
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r10,r1,608
	ctx.r10.s64 = ctx.r1.s64 + 608;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r9,r10
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// stwu r8,4(r29)
	ea = 4 + ctx.r29.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r29.u32 = ea;
loc_8305EE00:
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// blt cr6,0x8305edb8
	if (cr6.lt) goto loc_8305EDB8;
loc_8305EE10:
	// add. r25,r30,r28
	ctx.r25.u64 = ctx.r30.u64 + ctx.r28.u64;
	cr0.compare<int32_t>(ctx.r25.s32, 0, xer);
	// stb r23,6021(r27)
	PPC_STORE_U8(ctx.r27.u32 + 6021, ctx.r23.u8);
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
	// beq 0x8305ee84
	if (cr0.eq) goto loc_8305EE84;
	// clrlwi r29,r24,24
	ctx.r29.u64 = ctx.r24.u32 & 0xFF;
	// addi r28,r1,96
	ctx.r28.s64 = ctx.r1.s64 + 96;
	// mr r27,r25
	ctx.r27.u64 = ctx.r25.u64;
loc_8305EE2C:
	// add r10,r29,r26
	ctx.r10.u64 = ctx.r29.u64 + ctx.r26.u64;
	// lwz r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r30,r11,1
	ctx.r30.s64 = ctx.r11.s64 + 1;
	// lbz r9,6021(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 6021);
	// cmplw cr6,r9,r30
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r30.u32, xer);
	// bge cr6,0x8305ee48
	if (!cr6.lt) goto loc_8305EE48;
	// stb r30,6021(r10)
	PPC_STORE_U8(ctx.r10.u32 + 6021, ctx.r30.u8);
loc_8305EE48:
	// rlwinm r10,r29,6,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 6) & 0xFFFFFFC0;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// add r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 + ctx.r26.u64;
	// addi r31,r11,1925
	ctx.r31.s64 = ctx.r11.s64 + 1925;
	// beq cr6,0x8305ee74
	if (cr6.eq) goto loc_8305EE74;
	// li r5,32
	ctx.r5.s64 = 32;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831ce980
	ctx.lr = 0x8305EE70;
	sub_831CE980(ctx, base);
	// stb r23,31(r31)
	PPC_STORE_U8(ctx.r31.u32 + 31, ctx.r23.u8);
loc_8305EE74:
	// addic. r27,r27,-1
	xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	cr0.compare<int32_t>(ctx.r27.s32, 0, xer);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// bne 0x8305ee2c
	if (!cr0.eq) goto loc_8305EE2C;
loc_8305EE84:
	// bl 0x82d26ed8
	ctx.lr = 0x8305EE88;
	sub_82D26ED8(ctx, base);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82d269b8
	ctx.lr = 0x8305EE9C;
	sub_82D269B8(ctx, base);
	// b 0x8305eeac
	goto loc_8305EEAC;
loc_8305EEA0:
	// bl 0x82d26ed8
	ctx.lr = 0x8305EEA4;
	sub_82D26ED8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d26ef8
	ctx.lr = 0x8305EEAC;
	sub_82D26EF8(ctx, base);
loc_8305EEAC:
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
	// cmpwi cr6,r24,2
	cr6.compare<int32_t>(ctx.r24.s32, 2, xer);
	// blt cr6,0x8305ed2c
	if (cr6.lt) goto loc_8305ED2C;
	// bl 0x82d26ed8
	ctx.lr = 0x8305EEBC;
	sub_82D26ED8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d26900
	ctx.lr = 0x8305EEC4;
	sub_82D26900(ctx, base);
loc_8305EEC4:
	// addi r1,r1,1200
	ctx.r1.s64 = ctx.r1.s64 + 1200;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8305EECC"))) PPC_WEAK_FUNC(sub_8305EECC);
PPC_FUNC_IMPL(__imp__sub_8305EECC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8305EED0"))) PPC_WEAK_FUNC(sub_8305EED0);
PPC_FUNC_IMPL(__imp__sub_8305EED0) {
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
	// li r11,31
	ctx.r11.s64 = 31;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,116
	ctx.r4.s64 = 116;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x8305EEFC;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8305ef20
	if (cr6.eq) goto loc_8305EF20;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8305e9d8
	ctx.lr = 0x8305EF0C;
	sub_8305E9D8(ctx, base);
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
loc_8305EF20:
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

__attribute__((alias("__imp__sub_8305EF38"))) PPC_WEAK_FUNC(sub_8305EF38);
PPC_FUNC_IMPL(__imp__sub_8305EF38) {
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
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-15824
	ctx.r9.s64 = ctx.r11.s64 + -15824;
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
	ctx.lr = 0x8305EF70;
	sub_82F42278(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x8305ef88
	if (cr6.eq) goto loc_8305EF88;
	// bl 0x82416268
	ctx.lr = 0x8305EF84;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8305EF88:
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

__attribute__((alias("__imp__sub_8305EFA0"))) PPC_WEAK_FUNC(sub_8305EFA0);
PPC_FUNC_IMPL(__imp__sub_8305EFA0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x8305EFA8;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,88(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,12
	cr6.compare<uint32_t>(ctx.r11.u32, 12, xer);
	// bgt cr6,0x8305f08c
	if (cr6.gt) goto loc_8305F08C;
	// lis r12,-31994
	ctx.r12.s64 = -2096758784;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-4140
	ctx.r12.s64 = ctx.r12.s64 + -4140;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_8305F008;
	case 1:
		goto loc_8305F098;
	case 2:
		goto loc_8305F130;
	case 3:
		goto loc_8305F08C;
	case 4:
		goto loc_8305F1D0;
	case 5:
		goto loc_8305F20C;
	case 6:
		goto loc_8305F228;
	case 7:
		goto loc_8305F258;
	case 8:
		goto loc_8305F280;
	case 9:
		goto loc_8305F2A8;
	case 10:
		goto loc_8305F2F4;
	case 11:
		goto loc_8305F310;
	case 12:
		goto loc_8305F32C;
	default:
		return;
	}
	// lwz r24,-4088(r5)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r5.u32 + -4088);
	// lwz r24,-3944(r5)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r5.u32 + -3944);
	// lwz r24,-3792(r5)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r5.u32 + -3792);
	// lwz r24,-3956(r5)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r5.u32 + -3956);
	// lwz r24,-3632(r5)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r5.u32 + -3632);
	// lwz r24,-3572(r5)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r5.u32 + -3572);
	// lwz r24,-3544(r5)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r5.u32 + -3544);
	// lwz r24,-3496(r5)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r5.u32 + -3496);
	// lwz r24,-3456(r5)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r5.u32 + -3456);
	// lwz r24,-3416(r5)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r5.u32 + -3416);
	// lwz r24,-3340(r5)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r5.u32 + -3340);
	// lwz r24,-3312(r5)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r5.u32 + -3312);
	// lwz r24,-3284(r5)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r5.u32 + -3284);
loc_8305F008:
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// li r6,3
	ctx.r6.s64 = 3;
	// addi r3,r11,-15932
	ctx.r3.s64 = ctx.r11.s64 + -15932;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2ee48
	ctx.lr = 0x8305F020;
	sub_82D2EE48(ctx, base);
	// stw r3,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r3.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,1000
	ctx.r4.s64 = 1000;
	// bl 0x82d29e28
	ctx.lr = 0x8305F030;
	sub_82D29E28(ctx, base);
	// lis r4,247
	ctx.r4.s64 = 16187392;
	// lwz r3,112(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// ori r4,r4,174
	ctx.r4.u64 = ctx.r4.u64 | 174;
	// bl 0x82d2ada8
	ctx.lr = 0x8305F040;
	sub_82D2ADA8(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,112(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// bl 0x82d19788
	ctx.lr = 0x8305F050;
	sub_82D19788(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,112(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// bl 0x82d19788
	ctx.lr = 0x8305F060;
	sub_82D19788(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,112(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// bl 0x83103100
	ctx.lr = 0x8305F06C;
	sub_83103100(ctx, base);
	// bl 0x831156e8
	ctx.lr = 0x8305F070;
	sub_831156E8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x83115be8
	ctx.lr = 0x8305F078;
	sub_83115BE8(ctx, base);
	// bl 0x830eab08
	ctx.lr = 0x8305F07C;
	sub_830EAB08(ctx, base);
	// bl 0x8378cba8
	ctx.lr = 0x8305F080;
	sub_8378CBA8(ctx, base);
	// bl 0x8378ce30
	ctx.lr = 0x8305F084;
	sub_8378CE30(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r10.u32);
loc_8305F08C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_8305F098:
	// lwz r11,112(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8305f08c
	if (cr6.eq) goto loc_8305F08C;
	// bl 0x831156e8
	ctx.lr = 0x8305F0A8;
	sub_831156E8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x8378cba8
	ctx.lr = 0x8305F0B0;
	sub_8378CBA8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x8378cce0
	ctx.lr = 0x8305F0B8;
	sub_8378CCE0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8305f0f0
	if (cr6.eq) goto loc_8305F0F0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8378cd10
	ctx.lr = 0x8305F0CC;
	sub_8378CD10(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8305f0f0
	if (cr6.eq) goto loc_8305F0F0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8378cd40
	ctx.lr = 0x8305F0E0;
	sub_8378CD40(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// li r30,1
	ctx.r30.s64 = 1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8305f0f4
	if (!cr6.eq) goto loc_8305F0F4;
loc_8305F0F0:
	// li r30,0
	ctx.r30.s64 = 0;
loc_8305F0F4:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83115808
	ctx.lr = 0x8305F0FC;
	sub_83115808(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x8305f08c
	if (!cr6.eq) goto loc_8305F08C;
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x8305f08c
	if (!cr6.eq) goto loc_8305F08C;
	// lwz r3,112(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// bl 0x82d29e18
	ctx.lr = 0x8305F11C;
	sub_82D29E18(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_8305F130:
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8305f164
	if (!cr6.eq) goto loc_8305F164;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r31,104
	ctx.r5.s64 = ctx.r31.s64 + 104;
	// addi r4,r31,100
	ctx.r4.s64 = ctx.r31.s64 + 100;
	// li r3,14
	ctx.r3.s64 = 14;
	// bl 0x8308cc88
	ctx.lr = 0x8305F150;
	sub_8308CC88(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// bl 0x83103100
	ctx.lr = 0x8305F164;
	sub_83103100(ctx, base);
loc_8305F164:
	// lbz r11,108(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 108);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8305f08c
	if (cr6.eq) goto loc_8305F08C;
	// lbz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 100);
	// li r10,4
	ctx.r10.s64 = 4;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8305f198
	if (cr6.eq) goto loc_8305F198;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r10.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_8305F198:
	// lwz r11,104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// stw r10,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r10.u32);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bne cr6,0x8305f1bc
	if (!cr6.eq) goto loc_8305F1BC;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_8305F1BC:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_8305F1D0:
	// bl 0x82d14ce8
	ctx.lr = 0x8305F1D4;
	sub_82D14CE8(ctx, base);
	// bl 0x82d130b8
	ctx.lr = 0x8305F1D8;
	sub_82D130B8(ctx, base);
	// bl 0x82d26ed8
	ctx.lr = 0x8305F1DC;
	sub_82D26ED8(ctx, base);
	// bl 0x82d26b00
	ctx.lr = 0x8305F1E0;
	sub_82D26B00(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8305f1f8
	if (cr6.eq) goto loc_8305F1F8;
	// bl 0x82d26ed8
	ctx.lr = 0x8305F1F0;
	sub_82D26ED8(ctx, base);
	// li r4,1000
	ctx.r4.s64 = 1000;
	// bl 0x82d26960
	ctx.lr = 0x8305F1F8;
	sub_82D26960(ctx, base);
loc_8305F1F8:
	// li r11,5
	ctx.r11.s64 = 5;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_8305F20C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8305eaf8
	ctx.lr = 0x8305F214;
	sub_8305EAF8(ctx, base);
	// li r11,6
	ctx.r11.s64 = 6;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_8305F228:
	// bl 0x831099d8
	ctx.lr = 0x8305F22C;
	sub_831099D8(ctx, base);
	// bl 0x831099e8
	ctx.lr = 0x8305F230;
	sub_831099E8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8305f08c
	if (cr6.eq) goto loc_8305F08C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8305eb60
	ctx.lr = 0x8305F244;
	sub_8305EB60(ctx, base);
	// li r11,7
	ctx.r11.s64 = 7;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_8305F258:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8305ebc0
	ctx.lr = 0x8305F260;
	sub_8305EBC0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8305f08c
	if (!cr6.eq) goto loc_8305F08C;
	// li r11,8
	ctx.r11.s64 = 8;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_8305F280:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f0f7a8
	ctx.lr = 0x8305F288;
	sub_82F0F7A8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8305f08c
	if (!cr6.eq) goto loc_8305F08C;
	// li r11,9
	ctx.r11.s64 = 9;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_8305F2A8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8305ec58
	ctx.lr = 0x8305F2B0;
	sub_8305EC58(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8305f08c
	if (!cr6.eq) goto loc_8305F08C;
	// bl 0x830eab38
	ctx.lr = 0x8305F2C0;
	sub_830EAB38(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8305f08c
	if (!cr6.eq) goto loc_8305F08C;
	// bl 0x82d14ce8
	ctx.lr = 0x8305F2D0;
	sub_82D14CE8(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82d13048
	ctx.lr = 0x8305F2D8;
	sub_82D13048(ctx, base);
	// bl 0x82d26ed8
	ctx.lr = 0x8305F2DC;
	sub_82D26ED8(ctx, base);
	// li r4,-1
	ctx.r4.s64 = -1;
	// bl 0x82d26900
	ctx.lr = 0x8305F2E4;
	sub_82D26900(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8305eca8
	ctx.lr = 0x8305F2EC;
	sub_8305ECA8(ctx, base);
	// li r11,10
	ctx.r11.s64 = 10;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
loc_8305F2F4:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82d46378
	ctx.lr = 0x8305F2FC;
	sub_82D46378(ctx, base);
	// li r11,11
	ctx.r11.s64 = 11;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_8305F310:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82d462e8
	ctx.lr = 0x8305F318;
	sub_82D462E8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8305f08c
	if (cr6.eq) goto loc_8305F08C;
	// li r11,12
	ctx.r11.s64 = 12;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
loc_8305F32C:
	// lwz r11,92(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// bge cr6,0x8305f374
	if (!cr6.lt) goto loc_8305F374;
	// lis r10,-31773
	ctx.r10.s64 = -2082275328;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r10,-5120
	ctx.r8.s64 = ctx.r10.s64 + -5120;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwzx r4,r9,r8
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// bl 0x837b0c10
	ctx.lr = 0x8305F350;
	sub_837B0C10(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x8305F35C;
	sub_82E88020(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8387e8e0
	ctx.lr = 0x8305F364;
	sub_8387E8E0(ctx, base);
	// lwz r7,92(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// cmplwi cr6,r7,1
	cr6.compare<uint32_t>(ctx.r7.u32, 1, xer);
	// bne cr6,0x8305f374
	if (!cr6.eq) goto loc_8305F374;
	// bl 0x82deab48
	ctx.lr = 0x8305F374;
	sub_82DEAB48(ctx, base);
loc_8305F374:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8305F380"))) PPC_WEAK_FUNC(sub_8305F380);
PPC_FUNC_IMPL(__imp__sub_8305F380) {
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
	ctx.lr = 0x8305F398;
	sub_82F42220(ctx, base);
	// lis r10,-32225
	ctx.r10.s64 = -2111897600;
	// lis r9,-32239
	ctx.r9.s64 = -2112815104;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r8,r10,-15336
	ctx.r8.s64 = ctx.r10.s64 + -15336;
	// addi r7,r9,-17088
	ctx.r7.s64 = ctx.r9.s64 + -17088;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// li r6,15
	ctx.r6.s64 = 15;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// stw r7,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r7.u32);
	// lis r4,-32203
	ctx.r4.s64 = -2110455808;
	// stw r6,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r6.u32);
	// addi r3,r31,92
	ctx.r3.s64 = ctx.r31.s64 + 92;
	// stw r11,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r11,92(r31)
	PPC_STORE_U8(ctx.r31.u32 + 92, ctx.r11.u8);
	// addi r4,r4,-22544
	ctx.r4.s64 = ctx.r4.s64 + -22544;
	// bl 0x8259cc28
	ctx.lr = 0x8305F3DC;
	sub_8259CC28(ctx, base);
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

__attribute__((alias("__imp__sub_8305F3F4"))) PPC_WEAK_FUNC(sub_8305F3F4);
PPC_FUNC_IMPL(__imp__sub_8305F3F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

