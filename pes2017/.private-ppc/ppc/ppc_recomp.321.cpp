#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_832C3310"))) PPC_WEAK_FUNC(sub_832C3310);
PPC_FUNC_IMPL(__imp__sub_832C3310) {
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
	// lis r11,-31747
	ctx.r11.s64 = -2080571392;
	// addi r31,r11,-29496
	ctx.r31.s64 = ctx.r11.s64 + -29496;
	// lwz r11,-29496(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29496);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x832c334c
	if (!cr6.eq) goto loc_832C334C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,792
	ctx.r3.s64 = 792;
	// bl 0x832c32a8
	ctx.lr = 0x832C3340;
	sub_832C32A8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x832c335c
	if (cr6.eq) goto loc_832C335C;
loc_832C334C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832C3358;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x832c3360
	goto loc_832C3360;
loc_832C335C:
	// li r3,2
	ctx.r3.s64 = 2;
loc_832C3360:
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

__attribute__((alias("__imp__sub_832C3374"))) PPC_WEAK_FUNC(sub_832C3374);
PPC_FUNC_IMPL(__imp__sub_832C3374) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832C3378"))) PPC_WEAK_FUNC(sub_832C3378);
PPC_FUNC_IMPL(__imp__sub_832C3378) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x832C3380;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31747
	ctx.r11.s64 = -2080571392;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r31,r11,-29492
	ctx.r31.s64 = ctx.r11.s64 + -29492;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r11,-29492(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29492);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x832c33b8
	if (!cr6.eq) goto loc_832C33B8;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,794
	ctx.r3.s64 = 794;
	// bl 0x832c32a8
	ctx.lr = 0x832C33AC;
	sub_832C32A8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x832c33d0
	if (cr6.eq) goto loc_832C33D0;
loc_832C33B8:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832C33CC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x832c33d8
	goto loc_832C33D8;
loc_832C33D0:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,1167
	ctx.r3.u64 = ctx.r3.u64 | 1167;
loc_832C33D8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832C33E0"))) PPC_WEAK_FUNC(sub_832C33E0);
PPC_FUNC_IMPL(__imp__sub_832C33E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x832C33E8;
	__savegprlr_28(ctx, base);
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
	// li r5,12
	ctx.r5.s64 = 12;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// bl 0x832d27b0
	ctx.lr = 0x832C340C;
	sub_832D27B0(ctx, base);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r28,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r28.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x832c5be0
	ctx.lr = 0x832C3424;
	sub_832C5BE0(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// bge 0x832c3454
	if (!cr0.lt) goto loc_832C3454;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x832c3474
	if (cr6.eq) goto loc_832C3474;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832C3448;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x832c3474
	goto loc_832C3474;
loc_832C3454:
	// lis r9,-31747
	ctx.r9.s64 = -2080571392;
	// lis r11,-31956
	ctx.r11.s64 = -2094268416;
	// lis r10,-31956
	ctx.r10.s64 = -2094268416;
	// addi r8,r9,-29504
	ctx.r8.s64 = ctx.r9.s64 + -29504;
	// addi r11,r11,12664
	ctx.r11.s64 = ctx.r11.s64 + 12664;
	// addi r10,r10,12824
	ctx.r10.s64 = ctx.r10.s64 + 12824;
	// stw r11,-29504(r9)
	PPC_STORE_U32(ctx.r9.u32 + -29504, ctx.r11.u32);
	// stw r10,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r10.u32);
loc_832C3474:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832C3480"))) PPC_WEAK_FUNC(sub_832C3480);
PPC_FUNC_IMPL(__imp__sub_832C3480) {
	PPC_FUNC_PROLOGUE();
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// b 0x832c33e0
	sub_832C33E0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832C348C"))) PPC_WEAK_FUNC(sub_832C348C);
PPC_FUNC_IMPL(__imp__sub_832C348C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832C3490"))) PPC_WEAK_FUNC(sub_832C3490);
PPC_FUNC_IMPL(__imp__sub_832C3490) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// li r11,10
	ctx.r11.s64 = 10;
	// stw r11,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r11.u32);
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x832c34b0
	if (!cr6.eq) goto loc_832C34B0;
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// addi r11,r11,22236
	ctx.r11.s64 = ctx.r11.s64 + 22236;
	// b 0x832c34b8
	goto loc_832C34B8;
loc_832C34B0:
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// addi r11,r11,22204
	ctx.r11.s64 = ctx.r11.s64 + 22204;
loc_832C34B8:
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832C34C0"))) PPC_WEAK_FUNC(sub_832C34C0);
PPC_FUNC_IMPL(__imp__sub_832C34C0) {
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
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x832d27b0
	ctx.lr = 0x832C34F0;
	sub_832D27B0(ctx, base);
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r4,12(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// bl 0x832c77e0
	ctx.lr = 0x832C3500;
	sub_832C77E0(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge 0x832c3520
	if (!cr0.lt) goto loc_832C3520;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
loc_832C3520:
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// addi r11,r30,44
	ctx.r11.s64 = ctx.r30.s64 + 44;
	// lwz r10,48(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x832c353c
	if (cr6.eq) goto loc_832C353C;
	// stw r31,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r31.u32);
	// b 0x832c3540
	goto loc_832C3540;
loc_832C353C:
	// stw r31,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
loc_832C3540:
	// stw r31,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r31.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832C355C"))) PPC_WEAK_FUNC(sub_832C355C);
PPC_FUNC_IMPL(__imp__sub_832C355C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832C3560"))) PPC_WEAK_FUNC(sub_832C3560);
PPC_FUNC_IMPL(__imp__sub_832C3560) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x832C3568;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r4,52(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r30,r3,52
	ctx.r30.s64 = ctx.r3.s64 + 52;
	// li r28,0
	ctx.r28.s64 = 0;
loc_832C357C:
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x832c35cc
	if (cr6.eq) goto loc_832C35CC;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r11,259
	cr6.compare<int32_t>(ctx.r11.s32, 259, xer);
	// beq cr6,0x832c35cc
	if (cr6.eq) goto loc_832C35CC;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x832c35bc
	if (cr6.eq) goto loc_832C35BC;
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x832c35b0
	if (!cr6.eq) goto loc_832C35B0;
	// stw r28,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r28.u32);
loc_832C35B0:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// stw r28,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r28.u32);
loc_832C35BC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832c34c0
	ctx.lr = 0x832C35C4;
	sub_832C34C0(ctx, base);
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// b 0x832c357c
	goto loc_832C357C;
loc_832C35CC:
	// lwz r4,44(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// addi r29,r31,44
	ctx.r29.s64 = ctx.r31.s64 + 44;
loc_832C35D4:
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x832c3710
	if (cr6.eq) goto loc_832C3710;
	// lwz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmpwi cr6,r11,259
	cr6.compare<int32_t>(ctx.r11.s32, 259, xer);
	// beq cr6,0x832c3710
	if (cr6.eq) goto loc_832C3710;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x832c3618
	if (cr6.eq) goto loc_832C3618;
	// lwz r8,4(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplw cr6,r10,r8
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, xer);
	// bne cr6,0x832c360c
	if (!cr6.eq) goto loc_832C360C;
	// stw r28,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r28.u32);
loc_832C360C:
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r8,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r8.u32);
	// stw r28,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r28.u32);
loc_832C3618:
	// lwz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x832c3700
	if (!cr6.eq) goto loc_832C3700;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lbz r9,60(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 60);
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lbz r10,140(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 140);
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// beq cr6,0x832c3644
	if (cr6.eq) goto loc_832C3644;
	// stb r10,60(r31)
	PPC_STORE_U8(ctx.r31.u32 + 60, ctx.r10.u8);
loc_832C3644:
	// lhz r10,62(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 62);
	// cmplwi cr6,r10,2048
	cr6.compare<uint32_t>(ctx.r10.u32, 2048, xer);
	// blt cr6,0x832c3654
	if (cr6.lt) goto loc_832C3654;
	// sth r28,62(r31)
	PPC_STORE_U16(ctx.r31.u32 + 62, ctx.r28.u16);
loc_832C3654:
	// lhz r10,-2(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + -2);
	// lis r9,1
	ctx.r9.s64 = 65536;
	// lbz r8,60(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 60);
	// li r7,259
	ctx.r7.s64 = 259;
	// rlwimi r10,r8,12,0,19
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r8.u32, 12) & 0xFFFFF000) | (ctx.r10.u64 & 0xFFFFFFFF00000FFF);
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// sth r10,-2(r11)
	PPC_STORE_U16(ctx.r11.u32 + -2, ctx.r10.u16);
	// lhz r10,62(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 62);
	// rlwimi r8,r10,1,20,30
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r10.u32, 1) & 0xFFE) | (ctx.r8.u64 & 0xFFFFFFFFFFFFF001);
	// sth r8,-2(r11)
	PPC_STORE_U16(ctx.r11.u32 + -2, ctx.r8.u16);
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lhz r10,62(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 62);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// sth r10,62(r31)
	PPC_STORE_U16(ctx.r31.u32 + 62, ctx.r10.u16);
	// lhz r10,-2(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + -2);
	// lwz r8,212(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 212);
	// rlwinm r8,r8,0,12,15
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xF0000;
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// cntlzw r9,r9
	ctx.r9.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwimi r10,r9,27,31,31
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r9.u32, 27) & 0x1) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFFFE);
	// sth r10,-2(r11)
	PPC_STORE_U16(ctx.r11.u32 + -2, ctx.r10.u16);
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// stw r7,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// stw r28,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r28.u32);
	// stw r28,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r28.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x832c36d4
	if (cr6.eq) goto loc_832C36D4;
	// stw r4,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r4.u32);
	// b 0x832c36d8
	goto loc_832C36D8;
loc_832C36D4:
	// stw r4,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r4.u32);
loc_832C36D8:
	// stw r4,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r4.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r8,240(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 240);
	// lwz r9,0(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// slw r10,r10,r9
	ctx.r10.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r9.u8 & 0x3F));
	// or r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 | ctx.r8.u64;
	// stw r10,240(r11)
	PPC_STORE_U32(ctx.r11.u32 + 240, ctx.r10.u32);
	// b 0x832c3708
	goto loc_832C3708;
loc_832C3700:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832c34c0
	ctx.lr = 0x832C3708;
	sub_832C34C0(ctx, base);
loc_832C3708:
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// b 0x832c35d4
	goto loc_832C35D4;
loc_832C3710:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832C371C"))) PPC_WEAK_FUNC(sub_832C371C);
PPC_FUNC_IMPL(__imp__sub_832C371C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832C3720"))) PPC_WEAK_FUNC(sub_832C3720);
PPC_FUNC_IMPL(__imp__sub_832C3720) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdac8
	ctx.lr = 0x832C3728;
	__savegprlr_20(ctx, base);
	// stfd f31,-112(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -112, ctx.f31.u64);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r26,0
	ctx.r26.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r5,32
	ctx.r5.s64 = 32;
	// stw r26,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r26.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// mr r23,r26
	ctx.r23.u64 = ctx.r26.u64;
	// mr r21,r26
	ctx.r21.u64 = ctx.r26.u64;
	// bl 0x831cdcf0
	ctx.lr = 0x832C3754;
	sub_831CDCF0(ctx, base);
	// lwz r3,76(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// lwz r20,68(r31)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// lwz r24,72(r31)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// bl 0x832c8668
	ctx.lr = 0x832C3764;
	sub_832C8668(ctx, base);
	// lwz r4,52(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// addi r27,r31,52
	ctx.r27.s64 = ctx.r31.s64 + 52;
	// b 0x832c37b4
	goto loc_832C37B4;
loc_832C3770:
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r11,259
	cr6.compare<int32_t>(ctx.r11.s32, 259, xer);
	// beq cr6,0x832c37bc
	if (cr6.eq) goto loc_832C37BC;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x832c37a8
	if (cr6.eq) goto loc_832C37A8;
	// lwz r10,4(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x832c379c
	if (!cr6.eq) goto loc_832C379C;
	// stw r26,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r26.u32);
loc_832C379C:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r10.u32);
	// stw r26,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r26.u32);
loc_832C37A8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832c34c0
	ctx.lr = 0x832C37B0;
	sub_832C34C0(ctx, base);
	// lwz r4,0(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
loc_832C37B4:
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x832c3770
	if (!cr6.eq) goto loc_832C3770;
loc_832C37BC:
	// lwz r28,44(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// addi r25,r31,44
	ctx.r25.s64 = ctx.r31.s64 + 44;
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// beq cr6,0x832c37d4
	if (cr6.eq) goto loc_832C37D4;
	// lwz r30,0(r28)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
loc_832C37D4:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x832c7bf0
	ctx.lr = 0x832C37DC;
	sub_832C7BF0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r22,1
	ctx.r22.s64 = 1;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x832c37f8
	if (cr6.eq) goto loc_832C37F8;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r11,259
	cr6.compare<int32_t>(ctx.r11.s32, 259, xer);
	// bne cr6,0x832c384c
	if (!cr6.eq) goto loc_832C384C;
loc_832C37F8:
	// cmplwi cr6,r29,1
	cr6.compare<uint32_t>(ctx.r29.u32, 1, xer);
	// bgt cr6,0x832c384c
	if (cr6.gt) goto loc_832C384C;
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x832c384c
	if (!cr6.eq) goto loc_832C384C;
	// lwz r3,60(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// stw r22,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r22.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,92(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832C3824;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,60(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832C3840;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr. r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r23.s32, 0, xer);
	// blt 0x832c384c
	if (cr0.lt) goto loc_832C384C;
	// stw r26,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r26.u32);
loc_832C384C:
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lwz r10,68(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lfs f31,-26260(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -26260);
	ctx.f31.f64 = double(temp.f32);
	// bne cr6,0x832c38c0
	if (!cr6.eq) goto loc_832C38C0;
	// cmplwi cr6,r29,2
	cr6.compare<uint32_t>(ctx.r29.u32, 2, xer);
	// bgt cr6,0x832c3878
	if (cr6.gt) goto loc_832C3878;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stw r26,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r26.u32);
	// lfs f1,22108(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 22108);
	ctx.f1.f64 = double(temp.f32);
	// b 0x832c389c
	goto loc_832C389C;
loc_832C3878:
	// cmplwi cr6,r29,9
	cr6.compare<uint32_t>(ctx.r29.u32, 9, xer);
	// blt cr6,0x832c3894
	if (cr6.lt) goto loc_832C3894;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r10,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r10.u32);
	// lfs f1,18608(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 18608);
	ctx.f1.f64 = double(temp.f32);
	// b 0x832c389c
	goto loc_832C389C;
loc_832C3894:
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// stw r22,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r22.u32);
loc_832C389C:
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// cmpw cr6,r24,r11
	cr6.compare<int32_t>(ctx.r24.s32, ctx.r11.s32, xer);
	// beq cr6,0x832c38c0
	if (cr6.eq) goto loc_832C38C0;
	// lwz r3,60(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,104(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832C38C0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_832C38C0:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// beq cr6,0x832c39a0
	if (cr6.eq) goto loc_832C39A0;
loc_832C38C8:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r11,259
	cr6.compare<int32_t>(ctx.r11.s32, 259, xer);
	// beq cr6,0x832c39a0
	if (cr6.eq) goto loc_832C39A0;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplw cr6,r21,r11
	cr6.compare<uint32_t>(ctx.r21.u32, ctx.r11.u32, xer);
	// bge cr6,0x832c39a0
	if (!cr6.lt) goto loc_832C39A0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x832c7bf0
	ctx.lr = 0x832C38E8;
	sub_832C7BF0(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, xer);
	// bge cr6,0x832c39a0
	if (!cr6.lt) goto loc_832C39A0;
	// li r11,259
	ctx.r11.s64 = 259;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// stw r26,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r26.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lwz r3,60(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// stw r28,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r28.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,84(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832C3930;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr. r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r23.s32, 0, xer);
	// blt 0x832c3998
	if (cr0.lt) goto loc_832C3998;
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x832c3960
	if (cr6.eq) goto loc_832C3960;
	// lwz r10,4(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x832c3954
	if (!cr6.eq) goto loc_832C3954;
	// stw r26,4(r25)
	PPC_STORE_U32(ctx.r25.u32 + 4, ctx.r26.u32);
loc_832C3954:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r10.u32);
	// stw r26,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r26.u32);
loc_832C3960:
	// stw r26,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r26.u32);
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x832c3978
	if (cr6.eq) goto loc_832C3978;
	// stw r28,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r28.u32);
	// b 0x832c397c
	goto loc_832C397C;
loc_832C3978:
	// stw r28,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r28.u32);
loc_832C397C:
	// stw r28,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r28.u32);
	// addi r21,r21,1
	ctx.r21.s64 = ctx.r21.s64 + 1;
	// lwz r28,0(r25)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// beq cr6,0x832c39a0
	if (cr6.eq) goto loc_832C39A0;
	// lwz r30,0(r28)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// b 0x832c38c8
	goto loc_832C38C8;
loc_832C3998:
	// mr r23,r26
	ctx.r23.u64 = ctx.r26.u64;
	// stw r26,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r26.u32);
loc_832C39A0:
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x832c3a24
	if (!cr6.eq) goto loc_832C3A24;
	// cmpwi cr6,r20,1
	cr6.compare<int32_t>(ctx.r20.s32, 1, xer);
	// bne cr6,0x832c3a24
	if (!cr6.eq) goto loc_832C3A24;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x832c7bf0
	ctx.lr = 0x832C39BC;
	sub_832C7BF0(ctx, base);
	// cmplwi cr6,r3,3
	cr6.compare<uint32_t>(ctx.r3.u32, 3, xer);
	// blt cr6,0x832c3a24
	if (cr6.lt) goto loc_832C3A24;
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x832c3a20
	if (!cr6.eq) goto loc_832C3A20;
	// lwz r3,60(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// li r5,0
	ctx.r5.s64 = 0;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,104(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832C39EC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr. r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r23.s32, 0, xer);
	// blt 0x832c3a20
	if (cr0.lt) goto loc_832C3A20;
	// lwz r3,60(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r22,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r22.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,76(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832C3A14;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr. r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r23.s32, 0, xer);
	// blt 0x832c3a20
	if (cr0.lt) goto loc_832C3A20;
	// stw r22,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r22.u32);
loc_832C3A20:
	// stw r26,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r26.u32);
loc_832C3A24:
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// lfd f31,-112(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -112);
	// b 0x831cdb18
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832C3A34"))) PPC_WEAK_FUNC(sub_832C3A34);
PPC_FUNC_IMPL(__imp__sub_832C3A34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832C3A38"))) PPC_WEAK_FUNC(sub_832C3A38);
PPC_FUNC_IMPL(__imp__sub_832C3A38) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x832c3a48
	if (!cr6.eq) goto loc_832C3A48;
	// b 0x832c3720
	sub_832C3720(ctx, base);
	return;
loc_832C3A48:
	// b 0x832c3560
	sub_832C3560(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832C3A4C"))) PPC_WEAK_FUNC(sub_832C3A4C);
PPC_FUNC_IMPL(__imp__sub_832C3A4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832C3A50"))) PPC_WEAK_FUNC(sub_832C3A50);
PPC_FUNC_IMPL(__imp__sub_832C3A50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x832c72e0
	ctx.lr = 0x832C3A6C;
	sub_832C72E0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x832c3b00
	if (cr0.lt) goto loc_832C3B00;
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x832c3aac
	if (!cr6.eq) goto loc_832C3AAC;
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// b 0x832c3aa4
	goto loc_832C3AA4;
loc_832C3A8C:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r30,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r30.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
loc_832C3AA4:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x832c3a8c
	if (!cr6.eq) goto loc_832C3A8C;
loc_832C3AAC:
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x832c3b00
	if (!cr6.eq) goto loc_832C3B00;
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x832c3b00
	if (cr6.eq) goto loc_832C3B00;
	// lwz r10,64(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r9,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r9.u32);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x832c3b00
	if (cr6.eq) goto loc_832C3B00;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,80(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 80);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832C3AF4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x832c3b00
	if (cr0.lt) goto loc_832C3B00;
	// stw r30,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r30.u32);
loc_832C3B00:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832C3B18"))) PPC_WEAK_FUNC(sub_832C3B18);
PPC_FUNC_IMPL(__imp__sub_832C3B18) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x832C3B20;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r6,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r6.u32);
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r5,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r5.u32);
	// addi r28,r3,16
	ctx.r28.s64 = ctx.r3.s64 + 16;
	// lwz r9,24(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 24);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// li r4,24
	ctx.r4.s64 = 24;
	// lwz r5,20(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// subfic r11,r11,0
	xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r11.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 & ctx.r10.u64;
	// lwz r10,28(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 28);
	// add r3,r10,r6
	ctx.r3.u64 = ctx.r10.u64 + ctx.r6.u64;
	// bl 0x832c7ed8
	ctx.lr = 0x832C3B68;
	sub_832C7ED8(ctx, base);
	// mr. r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r27.s32, 0, xer);
	// blt 0x832c3be0
	if (cr0.lt) goto loc_832C3BE0;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// ble cr6,0x832c3bc4
	if (!cr6.gt) goto loc_832C3BC4;
	// li r30,0
	ctx.r30.s64 = 0;
loc_832C3B84:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,40(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mullw r10,r10,r29
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r29.s32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stwx r11,r30,r9
	PPC_STORE_U32(ctx.r30.u32 + ctx.r9.u32, ctx.r11.u32);
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// add r4,r30,r11
	ctx.r4.u64 = ctx.r30.u64 + ctx.r11.u64;
	// bl 0x832c34c0
	ctx.lr = 0x832C3BB0;
	sub_832C34C0(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, xer);
	// blt cr6,0x832c3b84
	if (cr6.lt) goto loc_832C3B84;
loc_832C3BC4:
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x832c3be0
	if (!cr6.eq) goto loc_832C3BE0;
	// addi r4,r31,76
	ctx.r4.s64 = ctx.r31.s64 + 76;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x832c8b28
	ctx.lr = 0x832C3BDC;
	sub_832C8B28(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
loc_832C3BE0:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832C3BEC"))) PPC_WEAK_FUNC(sub_832C3BEC);
PPC_FUNC_IMPL(__imp__sub_832C3BEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832C3BF0"))) PPC_WEAK_FUNC(sub_832C3BF0);
PPC_FUNC_IMPL(__imp__sub_832C3BF0) {
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
	// beq cr6,0x832c3c7c
	if (cr6.eq) goto loc_832C3C7C;
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x832c3c48
	if (!cr6.eq) goto loc_832C3C48;
	// lwz r3,60(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x832c3c40
	if (cr6.eq) goto loc_832C3C40;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,72(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832C3C3C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r30,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r30.u32);
loc_832C3C40:
	// lwz r3,76(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// bl 0x832c85f0
	ctx.lr = 0x832C3C48;
	sub_832C85F0(ctx, base);
loc_832C3C48:
	// lwz r3,40(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x832c3c64
	if (cr6.eq) goto loc_832C3C64;
	// lis r4,24970
	ctx.r4.s64 = 1636433920;
	// ori r4,r4,3
	ctx.r4.u64 = ctx.r4.u64 | 3;
	// bl 0x832d53c8
	ctx.lr = 0x832C3C60;
	sub_832D53C8(ctx, base);
	// stw r30,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r30.u32);
loc_832C3C64:
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x832c7d90
	ctx.lr = 0x832C3C6C;
	sub_832C7D90(ctx, base);
	// lis r4,24970
	ctx.r4.s64 = 1636433920;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r4,r4,32785
	ctx.r4.u64 = ctx.r4.u64 | 32785;
	// bl 0x832d53c8
	ctx.lr = 0x832C3C7C;
	sub_832D53C8(ctx, base);
loc_832C3C7C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832C3C94"))) PPC_WEAK_FUNC(sub_832C3C94);
PPC_FUNC_IMPL(__imp__sub_832C3C94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832C3C98"))) PPC_WEAK_FUNC(sub_832C3C98);
PPC_FUNC_IMPL(__imp__sub_832C3C98) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x832C3CA0;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// li r26,0
	ctx.r26.s64 = 0;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
	// ori r3,r3,10
	ctx.r3.u64 = ctx.r3.u64 | 10;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x832c3cd0
	if (cr6.eq) goto loc_832C3CD0;
	// stw r26,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r26.u32);
loc_832C3CD0:
	// lwz r29,52(r24)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r24.u32 + 52);
	// b 0x832c3d78
	goto loc_832C3D78;
loc_832C3CD8:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x832c3d74
	if (cr6.eq) goto loc_832C3D74;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r8,0(r25)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// subf r9,r10,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r10.s64;
	// subf r8,r30,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r30.s64;
	// addi r31,r9,2
	ctx.r31.s64 = ctx.r9.s64 + 2;
	// cmplw cr6,r31,r8
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r8.u32, xer);
	// bgt cr6,0x832c3dac
	if (cr6.gt) goto loc_832C3DAC;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// add r3,r30,r27
	ctx.r3.u64 = ctx.r30.u64 + ctx.r27.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r4,r11,-2
	ctx.r4.s64 = ctx.r11.s64 + -2;
	// bl 0x831ce980
	ctx.lr = 0x832C3D20;
	sub_831CE980(ctx, base);
	// add r30,r31,r30
	ctx.r30.u64 = ctx.r31.u64 + ctx.r30.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// beq cr6,0x832c3d3c
	if (cr6.eq) goto loc_832C3D3C;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
loc_832C3D3C:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r9,r31,-2
	ctx.r9.s64 = ctx.r31.s64 + -2;
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// bge cr6,0x832c3d5c
	if (!cr6.lt) goto loc_832C3D5C;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_832C3D5C:
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bne cr6,0x832c3d78
	if (!cr6.eq) goto loc_832C3D78;
	// stw r26,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r26.u32);
loc_832C3D74:
	// lwz r29,4(r29)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
loc_832C3D78:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// bne cr6,0x832c3cd8
	if (!cr6.eq) goto loc_832C3CD8;
	// lwz r10,4(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r11,32(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 32);
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r8,240(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 240);
	// slw r10,r9,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r10.u8 & 0x3F));
	// andc r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 & ~ctx.r10.u64;
	// stw r10,240(r11)
	PPC_STORE_U32(ctx.r11.u32 + 240, ctx.r10.u32);
loc_832C3DA0:
	// stw r30,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r30.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_832C3DAC:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// bne cr6,0x832c3da0
	if (!cr6.eq) goto loc_832C3DA0;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x832c3da0
	goto loc_832C3DA0;
}

__attribute__((alias("__imp__sub_832C3DC4"))) PPC_WEAK_FUNC(sub_832C3DC4);
PPC_FUNC_IMPL(__imp__sub_832C3DC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832C3DC8"))) PPC_WEAK_FUNC(sub_832C3DC8);
PPC_FUNC_IMPL(__imp__sub_832C3DC8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x832C3DD0;
	__savegprlr_27(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r10,r1,84
	ctx.r10.s64 = ctx.r1.s64 + 84;
	// lwz r9,36(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// lis r8,-32768
	ctx.r8.s64 = -2147483648;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// ori r3,r8,16385
	ctx.r3.u64 = ctx.r8.u64 | 16385;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r30,1
	ctx.r30.s64 = 1;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// beq cr6,0x832c3ec0
	if (cr6.eq) goto loc_832C3EC0;
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// addi r29,r31,60
	ctx.r29.s64 = ctx.r31.s64 + 60;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x832c3e44
	if (cr6.eq) goto loc_832C3E44;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x832c3ebc
	if (cr6.eq) goto loc_832C3EBC;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832C3E40;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x832c3ebc
	goto loc_832C3EBC;
loc_832C3E44:
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,98
	ctx.r3.s64 = ctx.r1.s64 + 98;
	// bl 0x831cdcf0
	ctx.lr = 0x832C3E54;
	sub_831CDCF0(ctx, base);
	// li r10,16000
	ctx.r10.s64 = 16000;
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// li r9,16
	ctx.r9.s64 = 16;
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// li r8,2
	ctx.r8.s64 = 2;
	// li r10,32000
	ctx.r10.s64 = 32000;
	// sth r30,96(r1)
	PPC_STORE_U16(ctx.r1.u32 + 96, ctx.r30.u16);
	// sth r30,98(r1)
	PPC_STORE_U16(ctx.r1.u32 + 98, ctx.r30.u16);
	// sth r9,110(r1)
	PPC_STORE_U16(ctx.r1.u32 + 110, ctx.r9.u16);
	// sth r8,108(r1)
	PPC_STORE_U16(ctx.r1.u32 + 108, ctx.r8.u16);
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// lwz r27,60(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// lwz r28,0(r27)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// bl 0x832c8ca8
	ctx.lr = 0x832C3E8C;
	sub_832C8CA8(ctx, base);
	// lwz r7,32(r28)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r28.u32 + 32);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lfs f1,4328(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4328);
	ctx.f1.f64 = double(temp.f32);
	// addi r9,r1,88
	ctx.r9.s64 = ctx.r1.s64 + 88;
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// bctrl 
	ctx.lr = 0x832C3EBC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_832C3EBC:
	// stw r30,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r30.u32);
loc_832C3EC0:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832C3EC8"))) PPC_WEAK_FUNC(sub_832C3EC8);
PPC_FUNC_IMPL(__imp__sub_832C3EC8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x832C3ED0;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x832c3efc
	if (!cr6.eq) goto loc_832C3EFC;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16385
	ctx.r3.u64 = ctx.r3.u64 | 16385;
	// b 0x832c3f60
	goto loc_832C3F60;
loc_832C3EFC:
	// lwz r11,8(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// stw r29,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r29.u32);
	// addi r31,r11,2
	ctx.r31.s64 = ctx.r11.s64 + 2;
	// divwu. r27,r10,r31
	ctx.r27.u32 = PPCDivide(ctx.r10.u32, ctx.r31.u32);
	cr0.compare<int32_t>(ctx.r27.s32, 0, xer);
	// twllei r31,0
	// beq 0x832c3f60
	if (cr0.eq) goto loc_832C3F60;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
loc_832C3F24:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwz r3,76(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 76);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x832c88e0
	ctx.lr = 0x832C3F34;
	sub_832C88E0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x832c3f60
	if (cr0.lt) goto loc_832C3F60;
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// beq cr6,0x832c3f60
	if (cr6.eq) goto loc_832C3F60;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// add r28,r28,r31
	ctx.r28.u64 = ctx.r28.u64 + ctx.r31.u64;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// cmplw cr6,r29,r27
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r27.u32, xer);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// blt cr6,0x832c3f24
	if (cr6.lt) goto loc_832C3F24;
loc_832C3F60:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832C3F68"))) PPC_WEAK_FUNC(sub_832C3F68);
PPC_FUNC_IMPL(__imp__sub_832C3F68) {
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
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x832c3fa0
	if (!cr6.eq) goto loc_832C3FA0;
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x832c3fa0
	if (!cr6.eq) goto loc_832C3FA0;
	// lwz r3,76(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	// bl 0x832c8a70
	ctx.lr = 0x832C3FA0;
	sub_832C8A70(ctx, base);
loc_832C3FA0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832c72b8
	ctx.lr = 0x832C3FA8;
	sub_832C72B8(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// bge 0x832c3fb8
	if (!cr0.lt) goto loc_832C3FB8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832c3a50
	ctx.lr = 0x832C3FB8;
	sub_832C3A50(ctx, base);
loc_832C3FB8:
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

__attribute__((alias("__imp__sub_832C3FD4"))) PPC_WEAK_FUNC(sub_832C3FD4);
PPC_FUNC_IMPL(__imp__sub_832C3FD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832C3FD8"))) PPC_WEAK_FUNC(sub_832C3FD8);
PPC_FUNC_IMPL(__imp__sub_832C3FD8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x832C3FE0;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// lis r4,24970
	ctx.r4.s64 = 1636433920;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// ori r4,r4,32785
	ctx.r4.u64 = ctx.r4.u64 | 32785;
	// li r3,80
	ctx.r3.s64 = 80;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// mr r26,r27
	ctx.r26.u64 = ctx.r27.u64;
	// bl 0x832d5290
	ctx.lr = 0x832C400C;
	sub_832D5290(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// beq 0x832c4094
	if (cr0.eq) goto loc_832C4094;
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// stw r29,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r29.u32);
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r30,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r30.u32);
	// addi r11,r11,22148
	ctx.r11.s64 = ctx.r11.s64 + 22148;
	// stw r27,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r27.u32);
	// li r9,10
	ctx.r9.s64 = 10;
	// stw r10,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r10.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// cmpwi cr6,r30,1
	cr6.compare<int32_t>(ctx.r30.s32, 1, xer);
	// stw r9,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r9.u32);
	// stw r27,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r27.u32);
	// stw r28,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r28.u32);
	// bne cr6,0x832c406c
	if (!cr6.eq) goto loc_832C406C;
	// lwz r4,72(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 72);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x832c4074
	if (cr6.eq) goto loc_832C4074;
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832C4068;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x832c4074
	goto loc_832C4074;
loc_832C406C:
	// li r11,255
	ctx.r11.s64 = 255;
	// stb r11,60(r31)
	PPC_STORE_U8(ctx.r31.u32 + 60, ctx.r11.u8);
loc_832C4074:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lis r4,24970
	ctx.r4.s64 = 1636433920;
	// ori r4,r4,3
	ctx.r4.u64 = ctx.r4.u64 | 3;
	// rlwinm r3,r11,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x832d5290
	ctx.lr = 0x832C4088;
	sub_832D5290(ctx, base);
	// stw r3,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x832c40a8
	if (!cr0.eq) goto loc_832C40A8;
loc_832C4094:
	// lis r26,-32761
	ctx.r26.s64 = -2147024896;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r26,r26,14
	ctx.r26.u64 = ctx.r26.u64 | 14;
	// bl 0x832c3bf0
	ctx.lr = 0x832C40A4;
	sub_832C3BF0(ctx, base);
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
loc_832C40A8:
	// stw r31,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r31.u32);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832C40B8"))) PPC_WEAK_FUNC(sub_832C40B8);
PPC_FUNC_IMPL(__imp__sub_832C40B8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	// clrlwi. r5,r5,24
	ctx.r5.u64 = ctx.r5.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r5.s32, 0, xer);
	// bne 0x832c40c8
	if (!cr0.eq) goto loc_832C40C8;
	// li r5,0
	ctx.r5.s64 = 0;
	// b 0x832c3fd8
	sub_832C3FD8(ctx, base);
	return;
loc_832C40C8:
	// b 0x832c3fd8
	sub_832C3FD8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832C40CC"))) PPC_WEAK_FUNC(sub_832C40CC);
PPC_FUNC_IMPL(__imp__sub_832C40CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832C40D0"))) PPC_WEAK_FUNC(sub_832C40D0);
PPC_FUNC_IMPL(__imp__sub_832C40D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31956
	ctx.r11.s64 = -2094268416;
	// addi r3,r11,16568
	ctx.r3.s64 = ctx.r11.s64 + 16568;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832C40DC"))) PPC_WEAK_FUNC(sub_832C40DC);
PPC_FUNC_IMPL(__imp__sub_832C40DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832C40E0"))) PPC_WEAK_FUNC(sub_832C40E0);
PPC_FUNC_IMPL(__imp__sub_832C40E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x832C40E8;
	__savegprlr_27(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmpwi cr6,r4,1
	cr6.compare<int32_t>(ctx.r4.s32, 1, xer);
	// bne cr6,0x832c4168
	if (!cr6.eq) goto loc_832C4168;
	// li r9,4
	ctx.r9.s64 = 4;
	// lwz r31,292(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 292);
	// addi r10,r5,87
	ctx.r10.s64 = ctx.r5.s64 + 87;
	// addi r7,r11,300
	ctx.r7.s64 = ctx.r11.s64 + 300;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r29,r11,348
	ctx.r29.s64 = ctx.r11.s64 + 348;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// addi r9,r11,84
	ctx.r9.s64 = ctx.r11.s64 + 84;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r10,4
	ctx.r10.s64 = 4;
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
loc_832C4124:
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x832c4140
	if (cr6.eq) goto loc_832C4140;
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x832c4140
	if (cr6.eq) goto loc_832C4140;
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
loc_832C4140:
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// bdnz 0x832c4124
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_832C4124;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x832c4178
	if (cr6.eq) goto loc_832C4178;
	// divwu r11,r31,r4
	ctx.r11.u32 = PPCDivide(ctx.r31.u32, ctx.r4.u32);
	// twllei r4,0
	// mullw r11,r11,r4
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r4.s32);
	// subf r31,r11,r31
	ctx.r31.s64 = ctx.r31.s64 - ctx.r11.s64;
	// b 0x832c4178
	goto loc_832C4178;
loc_832C4168:
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r7,r11,396
	ctx.r7.s64 = ctx.r11.s64 + 396;
	// addi r29,r11,804
	ctx.r29.s64 = ctx.r11.s64 + 804;
	// li r10,34
	ctx.r10.s64 = 34;
loc_832C4178:
	// mulli r11,r10,12
	ctx.r11.s64 = ctx.r10.s64 * 12;
	// add r28,r11,r7
	ctx.r28.u64 = ctx.r11.u64 + ctx.r7.u64;
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// cmplw cr6,r7,r28
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r28.u32, xer);
	// bge cr6,0x832c41ac
	if (!cr6.lt) goto loc_832C41AC;
	// rlwinm r8,r5,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
loc_832C4190:
	// add r9,r8,r11
	ctx.r9.u64 = ctx.r8.u64 + ctx.r11.u64;
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// cmplw cr6,r11,r28
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, xer);
	// lwz r4,0(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// neg r4,r4
	ctx.r4.s64 = -ctx.r4.s64;
	// stw r4,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r4.u32);
	// blt cr6,0x832c4190
	if (cr6.lt) goto loc_832C4190;
loc_832C41AC:
	// li r30,0
	ctx.r30.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x832c4230
	if (cr6.eq) goto loc_832C4230;
loc_832C41BC:
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x832c4220
	if (cr6.eq) goto loc_832C4220;
	// add r11,r4,r31
	ctx.r11.u64 = ctx.r4.u64 + ctx.r31.u64;
	// rlwinm r8,r5,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// divwu r9,r11,r10
	ctx.r9.u32 = PPCDivide(ctx.r11.u32, ctx.r10.u32);
	// twllei r10,0
	// mullw r9,r9,r10
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// mulli r9,r11,3
	ctx.r9.s64 = ctx.r11.s64 * 3;
	// add r9,r9,r5
	ctx.r9.u64 = ctx.r9.u64 + ctx.r5.u64;
	// mulli r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 * 12;
	// rlwinm r27,r9,2,0,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// lwzx r27,r27,r29
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r29.u32);
	// lwzx r9,r8,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// cmpw cr6,r9,r27
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r27.s32, xer);
	// bge cr6,0x832c4214
	if (!cr6.lt) goto loc_832C4214;
	// addic. r9,r9,1
	xer.ca = ctx.r9.u32 > 4294967294;
	ctx.r9.s64 = ctx.r9.s64 + 1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// stwx r9,r8,r11
	PPC_STORE_U32(ctx.r8.u32 + ctx.r11.u32, ctx.r9.u32);
	// ble 0x832c4214
	if (!cr0.gt) goto loc_832C4214;
	// addi r6,r6,-1
	ctx.r6.s64 = ctx.r6.s64 + -1;
loc_832C4214:
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// blt cr6,0x832c41bc
	if (cr6.lt) goto loc_832C41BC;
loc_832C4220:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x832c4230
	if (cr6.eq) goto loc_832C4230;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// bne cr6,0x832c41ac
	if (!cr6.eq) goto loc_832C41AC;
loc_832C4230:
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// cmplw cr6,r7,r28
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r28.u32, xer);
	// bge cr6,0x832c4268
	if (!cr6.lt) goto loc_832C4268;
	// rlwinm r10,r5,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
loc_832C4240:
	// lwzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bge cr6,0x832c4254
	if (!cr6.lt) goto loc_832C4254;
	// li r9,0
	ctx.r9.s64 = 0;
	// stwx r9,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u32);
loc_832C4254:
	// lwzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// add r3,r3,r9
	ctx.r3.u64 = ctx.r3.u64 + ctx.r9.u64;
	// cmplw cr6,r11,r28
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, xer);
	// blt cr6,0x832c4240
	if (cr6.lt) goto loc_832C4240;
loc_832C4268:
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832C426C"))) PPC_WEAK_FUNC(sub_832C426C);
PPC_FUNC_IMPL(__imp__sub_832C426C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832C4270"))) PPC_WEAK_FUNC(sub_832C4270);
PPC_FUNC_IMPL(__imp__sub_832C4270) {
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
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r4,1
	cr6.compare<uint32_t>(ctx.r4.u32, 1, xer);
	// blt cr6,0x832c42d4
	if (cr6.lt) goto loc_832C42D4;
	// beq cr6,0x832c42b0
	if (cr6.eq) goto loc_832C42B0;
	// cmplwi cr6,r4,3
	cr6.compare<uint32_t>(ctx.r4.u32, 3, xer);
	// blt cr6,0x832c42a4
	if (cr6.lt) goto loc_832C42A4;
	// lis r31,-32761
	ctx.r31.s64 = -2147024896;
	// ori r31,r31,87
	ctx.r31.u64 = ctx.r31.u64 | 87;
	// b 0x832c42dc
	goto loc_832C42DC;
loc_832C42A4:
	// addi r3,r3,244
	ctx.r3.s64 = ctx.r3.s64 + 244;
	// bl 0x83d7553c
	ctx.lr = 0x832C42AC;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// b 0x832c42dc
	goto loc_832C42DC;
loc_832C42B0:
	// addi r3,r3,244
	ctx.r3.s64 = ctx.r3.s64 + 244;
	// bl 0x83d7563c
	ctx.lr = 0x832C42B8;
	__imp__RtlTryEnterCriticalSection(ctx, base);
	// addi r11,r3,-1
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// lis r10,-32768
	ctx.r10.s64 = -2147483648;
	// subfic r11,r11,0
	xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r11.s64;
	// ori r10,r10,16388
	ctx.r10.u64 = ctx.r10.u64 | 16388;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r31,r11,r10
	ctx.r31.u64 = ctx.r11.u64 & ctx.r10.u64;
	// b 0x832c42dc
	goto loc_832C42DC;
loc_832C42D4:
	// addi r3,r3,244
	ctx.r3.s64 = ctx.r3.s64 + 244;
	// bl 0x83d7554c
	ctx.lr = 0x832C42DC;
	__imp__RtlEnterCriticalSection(ctx, base);
loc_832C42DC:
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

__attribute__((alias("__imp__sub_832C42F4"))) PPC_WEAK_FUNC(sub_832C42F4);
PPC_FUNC_IMPL(__imp__sub_832C42F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832C42F8"))) PPC_WEAK_FUNC(sub_832C42F8);
PPC_FUNC_IMPL(__imp__sub_832C42F8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x832C4300;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r27,r3,244
	ctx.r27.s64 = ctx.r3.s64 + 244;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// bl 0x83d7554c
	ctx.lr = 0x832C4320;
	__imp__RtlEnterCriticalSection(ctx, base);
	// addi r11,r30,21
	ctx.r11.s64 = ctx.r30.s64 + 21;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x832c4340
	if (!cr6.eq) goto loc_832C4340;
	// lis r31,-32761
	ctx.r31.s64 = -2147024896;
	// ori r31,r31,87
	ctx.r31.u64 = ctx.r31.u64 | 87;
	// b 0x832c4350
	goto loc_832C4350;
loc_832C4340:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x832c67c8
	ctx.lr = 0x832C434C;
	sub_832C67C8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_832C4350:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x83d7553c
	ctx.lr = 0x832C4358;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832C4364"))) PPC_WEAK_FUNC(sub_832C4364);
PPC_FUNC_IMPL(__imp__sub_832C4364) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832C4368"))) PPC_WEAK_FUNC(sub_832C4368);
PPC_FUNC_IMPL(__imp__sub_832C4368) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x832C4370;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r27,r3,244
	ctx.r27.s64 = ctx.r3.s64 + 244;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// bl 0x83d7554c
	ctx.lr = 0x832C4390;
	__imp__RtlEnterCriticalSection(ctx, base);
	// addi r11,r30,21
	ctx.r11.s64 = ctx.r30.s64 + 21;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x832c43b0
	if (!cr6.eq) goto loc_832C43B0;
	// lis r31,-32761
	ctx.r31.s64 = -2147024896;
	// ori r31,r31,87
	ctx.r31.u64 = ctx.r31.u64 | 87;
	// b 0x832c43c0
	goto loc_832C43C0;
loc_832C43B0:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x832c68e0
	ctx.lr = 0x832C43BC;
	sub_832C68E0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_832C43C0:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x83d7553c
	ctx.lr = 0x832C43C8;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832C43D4"))) PPC_WEAK_FUNC(sub_832C43D4);
PPC_FUNC_IMPL(__imp__sub_832C43D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832C43D8"))) PPC_WEAK_FUNC(sub_832C43D8);
PPC_FUNC_IMPL(__imp__sub_832C43D8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	uint32_t ea{};
	// addi r11,r3,296
	ctx.r11.s64 = ctx.r3.s64 + 296;
loc_832C43DC:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r11
	ea = ctx.r11.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// stwcx. r4,0,r11
	ea = ctx.r11.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r4.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x832c43dc
	if (!cr0.eq) goto loc_832C43DC;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832C43FC"))) PPC_WEAK_FUNC(sub_832C43FC);
PPC_FUNC_IMPL(__imp__sub_832C43FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832C4400"))) PPC_WEAK_FUNC(sub_832C4400);
PPC_FUNC_IMPL(__imp__sub_832C4400) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x832C4408;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r28,r3,244
	ctx.r28.s64 = ctx.r3.s64 + 244;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// bl 0x83d7554c
	ctx.lr = 0x832C4424;
	__imp__RtlEnterCriticalSection(ctx, base);
	// li r11,4
	ctx.r11.s64 = 4;
	// addi r10,r31,84
	ctx.r10.s64 = ctx.r31.s64 + 84;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
loc_832C4430:
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x832c4444
	if (!cr6.eq) goto loc_832C4444;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
loc_832C4444:
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x832c4430
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_832C4430;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, xer);
	// ble cr6,0x832c4464
	if (!cr6.gt) goto loc_832C4464;
	// lis r30,-32768
	ctx.r30.s64 = -2147483648;
	// ori r30,r30,16389
	ctx.r30.u64 = ctx.r30.u64 | 16389;
	// b 0x832c4488
	goto loc_832C4488;
loc_832C4464:
	// addi r11,r29,21
	ctx.r11.s64 = ctx.r29.s64 + 21;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// bl 0x832c6e68
	ctx.lr = 0x832C4478;
	sub_832C6E68(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// blt 0x832c4488
	if (cr0.lt) goto loc_832C4488;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,288(r31)
	PPC_STORE_U32(ctx.r31.u32 + 288, ctx.r11.u32);
loc_832C4488:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83d7553c
	ctx.lr = 0x832C4490;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832C449C"))) PPC_WEAK_FUNC(sub_832C449C);
PPC_FUNC_IMPL(__imp__sub_832C449C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832C44A0"))) PPC_WEAK_FUNC(sub_832C44A0);
PPC_FUNC_IMPL(__imp__sub_832C44A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x832C44A8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r31,r3,244
	ctx.r31.s64 = ctx.r3.s64 + 244;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x83d7554c
	ctx.lr = 0x832C44C0;
	__imp__RtlEnterCriticalSection(ctx, base);
	// addi r11,r29,21
	ctx.r11.s64 = ctx.r29.s64 + 21;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r30
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// bl 0x832c6688
	ctx.lr = 0x832C44D0;
	sub_832C6688(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83d7553c
	ctx.lr = 0x832C44D8;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832C44E4"))) PPC_WEAK_FUNC(sub_832C44E4);
PPC_FUNC_IMPL(__imp__sub_832C44E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832C44E8"))) PPC_WEAK_FUNC(sub_832C44E8);
PPC_FUNC_IMPL(__imp__sub_832C44E8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x832C44F0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r30,r3,244
	ctx.r30.s64 = ctx.r3.s64 + 244;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// bl 0x83d7554c
	ctx.lr = 0x832C450C;
	__imp__RtlEnterCriticalSection(ctx, base);
	// addi r11,r29,21
	ctx.r11.s64 = ctx.r29.s64 + 21;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x832c4528
	if (cr6.eq) goto loc_832C4528;
	// bl 0x832c5f80
	ctx.lr = 0x832C4524;
	sub_832C5F80(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
loc_832C4528:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83d7553c
	ctx.lr = 0x832C4530;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832C453C"))) PPC_WEAK_FUNC(sub_832C453C);
PPC_FUNC_IMPL(__imp__sub_832C453C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832C4540"))) PPC_WEAK_FUNC(sub_832C4540);
PPC_FUNC_IMPL(__imp__sub_832C4540) {
	PPC_FUNC_PROLOGUE();
	// stw r4,1216(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1216, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832C4548"))) PPC_WEAK_FUNC(sub_832C4548);
PPC_FUNC_IMPL(__imp__sub_832C4548) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,1216(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1216);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832C4550"))) PPC_WEAK_FUNC(sub_832C4550);
PPC_FUNC_IMPL(__imp__sub_832C4550) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// addi r11,r4,21
	ctx.r11.s64 = ctx.r4.s64 + 21;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r3
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x832c4578
	if (cr6.eq) goto loc_832C4578;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x832c4578
	if (cr6.eq) goto loc_832C4578;
	// lwz r3,144(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 144);
	// blr 
	return;
loc_832C4578:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832C4580"))) PPC_WEAK_FUNC(sub_832C4580);
PPC_FUNC_IMPL(__imp__sub_832C4580) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,240(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 240);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832C4588"))) PPC_WEAK_FUNC(sub_832C4588);
PPC_FUNC_IMPL(__imp__sub_832C4588) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x832C4590;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r26,r3,244
	ctx.r26.s64 = ctx.r3.s64 + 244;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// bl 0x83d7554c
	ctx.lr = 0x832C45B4;
	__imp__RtlEnterCriticalSection(ctx, base);
	// addi r11,r30,21
	ctx.r11.s64 = ctx.r30.s64 + 21;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x832c45d4
	if (!cr6.eq) goto loc_832C45D4;
	// lis r31,-32761
	ctx.r31.s64 = -2147024896;
	// ori r31,r31,87
	ctx.r31.u64 = ctx.r31.u64 | 87;
	// b 0x832c45f0
	goto loc_832C45F0;
loc_832C45D4:
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r4,-18804(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -18804);
	// bl 0x832c6c70
	ctx.lr = 0x832C45EC;
	sub_832C6C70(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_832C45F0:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x83d7553c
	ctx.lr = 0x832C45F8;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832C4604"))) PPC_WEAK_FUNC(sub_832C4604);
PPC_FUNC_IMPL(__imp__sub_832C4604) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832C4608"))) PPC_WEAK_FUNC(sub_832C4608);
PPC_FUNC_IMPL(__imp__sub_832C4608) {
	PPC_FUNC_PROLOGUE();
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x83d75e2c
	ctx.lr = 0x832C4620;
	__imp__XAudioGetDuckerLevel(ctx, base);
	// stfs f1,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
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

__attribute__((alias("__imp__sub_832C463C"))) PPC_WEAK_FUNC(sub_832C463C);
PPC_FUNC_IMPL(__imp__sub_832C463C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832C4640"))) PPC_WEAK_FUNC(sub_832C4640);
PPC_FUNC_IMPL(__imp__sub_832C4640) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x832C4648;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r28,r3,244
	ctx.r28.s64 = ctx.r3.s64 + 244;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// bl 0x83d7554c
	ctx.lr = 0x832C4664;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x832c46b8
	if (cr6.eq) goto loc_832C46B8;
	// cmplwi cr6,r29,4
	cr6.compare<uint32_t>(ctx.r29.u32, 4, xer);
	// bge cr6,0x832c46b8
	if (!cr6.lt) goto loc_832C46B8;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,4
	ctx.r4.s64 = 4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832C4694;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// rlwinm r11,r29,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// li r30,1
	ctx.r30.s64 = 1;
	// lfsx f13,r11,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,9008(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x832c46b8
	if (cr6.gt) goto loc_832C46B8;
	// li r30,0
	ctx.r30.s64 = 0;
loc_832C46B8:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83d7553c
	ctx.lr = 0x832C46C0;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832C46CC"))) PPC_WEAK_FUNC(sub_832C46CC);
PPC_FUNC_IMPL(__imp__sub_832C46CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832C46D0"))) PPC_WEAK_FUNC(sub_832C46D0);
PPC_FUNC_IMPL(__imp__sub_832C46D0) {
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
	ctx.lr = 0x832C46D8;
	__savegprlr_24(ctx, base);
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// li r5,92
	ctx.r5.s64 = 92;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// lfs f0,9008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,128(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// bl 0x831cdcf0
	ctx.lr = 0x832C4700;
	sub_831CDCF0(ctx, base);
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lwz r3,48(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 48);
	// li r24,0
	ctx.r24.s64 = 0;
	// stw r24,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r24.u32);
	// lfs f0,-26260(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -26260);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stw r3,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r3.u32);
	// stfs f0,116(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f0,120(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f0,124(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832C4738;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x832c95e8
	ctx.lr = 0x832C4744;
	sub_832C95E8(ctx, base);
	// mr. r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r28.s32, 0, xer);
	// blt 0x832c487c
	if (cr0.lt) goto loc_832C487C;
	// lwz r11,44(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 44);
	// li r25,1
	ctx.r25.s64 = 1;
	// mr r26,r25
	ctx.r26.u64 = ctx.r25.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x832c4768
	if (cr6.eq) goto loc_832C4768;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r26,r11,1
	ctx.r26.s64 = ctx.r11.s64 + 1;
loc_832C4768:
	// mulli r29,r26,12
	ctx.r29.s64 = ctx.r26.s64 * 12;
	// lis r4,24714
	ctx.r4.s64 = 1619656704;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// ori r4,r4,8194
	ctx.r4.u64 = ctx.r4.u64 | 8194;
	// bl 0x832d5290
	ctx.lr = 0x832C477C;
	sub_832D5290(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// beq 0x832c47c4
	if (cr0.eq) goto loc_832C47C4;
	// lwz r11,44(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x832c47a8
	if (cr6.eq) goto loc_832C47A8;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mulli r5,r10,12
	ctx.r5.s64 = ctx.r10.s64 * 12;
	// bl 0x831ce980
	ctx.lr = 0x832C47A8;
	sub_831CE980(ctx, base);
loc_832C47A8:
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// add r11,r29,r30
	ctx.r11.u64 = ctx.r29.u64 + ctx.r30.u64;
	// li r9,4
	ctx.r9.s64 = 4;
	// stw r10,-12(r11)
	PPC_STORE_U32(ctx.r11.u32 + -12, ctx.r10.u32);
	// stw r9,-4(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4, ctx.r9.u32);
	// stw r25,-8(r11)
	PPC_STORE_U32(ctx.r11.u32 + -8, ctx.r25.u32);
	// b 0x832c47cc
	goto loc_832C47CC;
loc_832C47C4:
	// lis r28,-32761
	ctx.r28.s64 = -2147024896;
	// ori r28,r28,14
	ctx.r28.u64 = ctx.r28.u64 | 14;
loc_832C47CC:
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(ctx.r28.s32, 0, xer);
	// blt cr6,0x832c487c
	if (cr6.lt) goto loc_832C487C;
	// lwz r3,60(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// addi r29,r31,68
	ctx.r29.s64 = ctx.r31.s64 + 68;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,3
	ctx.r8.s64 = 3;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,16125
	ctx.r6.s64 = 16125;
	// li r5,6
	ctx.r5.s64 = 6;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832C4808;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr. r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r28.s32, 0, xer);
	// blt 0x832c486c
	if (cr0.lt) goto loc_832C486C;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// lwz r3,60(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// stw r5,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r5.u32);
	// addi r9,r1,104
	ctx.r9.s64 = ctx.r1.s64 + 104;
	// stw r26,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r26.u32);
	// li r8,2
	ctx.r8.s64 = 2;
	// stw r25,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r25.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r24,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r24.u32);
	// li r6,16125
	ctx.r6.s64 = 16125;
	// stw r24,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r24.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// stw r25,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r25.u32);
	// addi r4,r31,64
	ctx.r4.s64 = ctx.r31.s64 + 64;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832C4868;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
loc_832C486C:
	// lis r4,24714
	ctx.r4.s64 = 1619656704;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// ori r4,r4,8194
	ctx.r4.u64 = ctx.r4.u64 | 8194;
	// bl 0x832d53c8
	ctx.lr = 0x832C487C;
	sub_832D53C8(ctx, base);
loc_832C487C:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x832c488c
	if (cr6.eq) goto loc_832C488C;
	// bl 0x832c8cc8
	ctx.lr = 0x832C488C;
	sub_832C8CC8(ctx, base);
loc_832C488C:
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(ctx.r28.s32, 0, xer);
	// blt cr6,0x832c4900
	if (cr6.lt) goto loc_832C4900;
	// addi r10,r1,160
	ctx.r10.s64 = ctx.r1.s64 + 160;
	// lwz r3,64(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// lis r11,16256
	ctx.r11.s64 = 1065353216;
	// lwz r4,68(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r1,128
	ctx.r7.s64 = ctx.r1.s64 + 128;
	// li r6,6
	ctx.r6.s64 = 6;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
	// stw r11,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r11.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,64(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832C48D4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr. r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r28.s32, 0, xer);
	// blt 0x832c4900
	if (cr0.lt) goto loc_832C4900;
	// lwz r3,64(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// li r4,4
	ctx.r4.s64 = 4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,56(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832C48FC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
loc_832C4900:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832C490C"))) PPC_WEAK_FUNC(sub_832C490C);
PPC_FUNC_IMPL(__imp__sub_832C490C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832C4910"))) PPC_WEAK_FUNC(sub_832C4910);
PPC_FUNC_IMPL(__imp__sub_832C4910) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x832c4944
	if (cr6.eq) goto loc_832C4944;
	// addi r10,r3,100
	ctx.r10.s64 = ctx.r3.s64 + 100;
loc_832C4924:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// ld r8,0(r8)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r8.u32 + 0);
	// cmpld cr6,r4,r8
	cr6.compare<uint64_t>(ctx.r4.u64, ctx.r8.u64, xer);
	// beq cr6,0x832c4944
	if (cr6.eq) goto loc_832C4944;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// blt cr6,0x832c4924
	if (cr6.lt) goto loc_832C4924;
loc_832C4944:
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x832c495c
	if (!cr6.lt) goto loc_832C495C;
	// addi r11,r11,25
	ctx.r11.s64 = ctx.r11.s64 + 25;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r3
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// blr 
	return;
loc_832C495C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832C4964"))) PPC_WEAK_FUNC(sub_832C4964);
PPC_FUNC_IMPL(__imp__sub_832C4964) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832C4968"))) PPC_WEAK_FUNC(sub_832C4968);
PPC_FUNC_IMPL(__imp__sub_832C4968) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdacc
	ctx.lr = 0x832C4970;
	__savegprlr_21(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r24,r3,348
	ctx.r24.s64 = ctx.r3.s64 + 348;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r22,0
	ctx.r22.s64 = 0;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// li r5,48
	ctx.r5.s64 = 48;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r21,r22
	ctx.r21.u64 = ctx.r22.u64;
	// bl 0x832d27b0
	ctx.lr = 0x832C4994;
	sub_832D27B0(ctx, base);
	// addi r25,r28,84
	ctx.r25.s64 = ctx.r28.s64 + 84;
	// mr r31,r24
	ctx.r31.u64 = ctx.r24.u64;
	// mr r30,r25
	ctx.r30.u64 = ctx.r25.u64;
	// li r29,4
	ctx.r29.s64 = 4;
loc_832C49A4:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x832c49b8
	if (cr6.eq) goto loc_832C49B8;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x832c6cc8
	ctx.lr = 0x832C49B8;
	sub_832C6CC8(ctx, base);
loc_832C49B8:
	// addic. r29,r29,-1
	xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// addi r31,r31,12
	ctx.r31.s64 = ctx.r31.s64 + 12;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// bne 0x832c49a4
	if (!cr0.eq) goto loc_832C49A4;
	// addi r23,r28,804
	ctx.r23.s64 = ctx.r28.s64 + 804;
	// li r5,408
	ctx.r5.s64 = 408;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x832d27b0
	ctx.lr = 0x832C49DC;
	sub_832D27B0(ctx, base);
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// mr r29,r22
	ctx.r29.u64 = ctx.r22.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// ble cr6,0x832c4b24
	if (!cr6.gt) goto loc_832C4B24;
	// addi r31,r28,100
	ctx.r31.s64 = ctx.r28.s64 + 100;
	// mr r26,r23
	ctx.r26.u64 = ctx.r23.u64;
	// li r27,-1
	ctx.r27.s64 = -1;
loc_832C49F8:
	// lwz r11,280(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 280);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x832c4af4
	if (!cr6.eq) goto loc_832C4AF4;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// ld r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// cmpldi cr6,r11,0
	cr6.compare<uint64_t>(ctx.r11.u64, 0, xer);
	// beq cr6,0x832c4a48
	if (cr6.eq) goto loc_832C4A48;
	// li r10,4
	ctx.r10.s64 = 4;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// addi r9,r3,36
	ctx.r9.s64 = ctx.r3.s64 + 36;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_832C4A28:
	// lwz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x832c4a38
	if (cr6.lt) goto loc_832C4A38;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_832C4A38:
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bdnz 0x832c4a28
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_832C4A28;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// b 0x832c4a4c
	goto loc_832C4A4C;
loc_832C4A48:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
loc_832C4A4C:
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// addi r6,r29,1
	ctx.r6.s64 = ctx.r29.s64 + 1;
	// cmplw cr6,r6,r11
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r11.u32, xer);
	// bge cr6,0x832c4af4
	if (!cr6.lt) goto loc_832C4AF4;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// addi r7,r31,4
	ctx.r7.s64 = ctx.r31.s64 + 4;
loc_832C4A64:
	// li r9,4
	ctx.r9.s64 = 4;
	// lwz r10,0(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// addi r8,r10,36
	ctx.r8.s64 = ctx.r10.s64 + 36;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_832C4A78:
	// lwz r9,0(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// blt cr6,0x832c4a88
	if (cr6.lt) goto loc_832C4A88;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_832C4A88:
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// bdnz 0x832c4a78
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_832C4A78;
	// ld r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// cmpldi cr6,r10,0
	cr6.compare<uint64_t>(ctx.r10.u64, 0, xer);
	// beq cr6,0x832c4aac
	if (cr6.eq) goto loc_832C4AAC;
	// cmplw cr6,r11,r4
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, xer);
	// bge cr6,0x832c4aac
	if (!cr6.lt) goto loc_832C4AAC;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
loc_832C4AAC:
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// cmplw cr6,r6,r5
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r5.u32, xer);
	// blt cr6,0x832c4a64
	if (cr6.lt) goto loc_832C4A64;
	// cmplw cr6,r30,r29
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, xer);
	// beq cr6,0x832c4af4
	if (cr6.eq) goto loc_832C4AF4;
	// addi r11,r30,25
	ctx.r11.s64 = ctx.r30.s64 + 25;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r28
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r28.u32);
	// xor r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 ^ ctx.r3.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// lwzx r10,r11,r28
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r28.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// xor r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 ^ ctx.r9.u64;
	// stwx r10,r11,r28
	PPC_STORE_U32(ctx.r11.u32 + ctx.r28.u32, ctx.r10.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// xor r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_832C4AF4:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// ld r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// cmpldi cr6,r11,0
	cr6.compare<uint64_t>(ctx.r11.u64, 0, xer);
	// beq cr6,0x832c4b0c
	if (cr6.eq) goto loc_832C4B0C;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x832ca6b0
	ctx.lr = 0x832C4B0C;
	sub_832CA6B0(ctx, base);
loc_832C4B0C:
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r26,r26,12
	ctx.r26.s64 = ctx.r26.s64 + 12;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, xer);
	// blt cr6,0x832c49f8
	if (cr6.lt) goto loc_832C49F8;
loc_832C4B24:
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// stw r22,280(r28)
	PPC_STORE_U32(ctx.r28.u32 + 280, ctx.r22.u32);
	// addi r6,r28,300
	ctx.r6.s64 = ctx.r28.s64 + 300;
	// addi r10,r11,23916
	ctx.r10.s64 = ctx.r11.s64 + 23916;
	// addi r8,r6,48
	ctx.r8.s64 = ctx.r6.s64 + 48;
	// mr r9,r22
	ctx.r9.u64 = ctx.r22.u64;
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// cmplw cr6,r6,r8
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r8.u32, xer);
	// lwz r7,12(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// bge cr6,0x832c4b88
	if (!cr6.lt) goto loc_832C4B88;
	// addi r5,r24,48
	ctx.r5.s64 = ctx.r24.s64 + 48;
	// subf r4,r6,r24
	ctx.r4.s64 = ctx.r24.s64 - ctx.r6.s64;
loc_832C4B54:
	// add r10,r4,r11
	ctx.r10.u64 = ctx.r4.u64 + ctx.r11.u64;
	// cmplw cr6,r10,r5
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r5.u32, xer);
	// bge cr6,0x832c4b7c
	if (!cr6.lt) goto loc_832C4B7C;
	// rlwinm r3,r7,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r3,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r10.u32);
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stwx r10,r3,r11
	PPC_STORE_U32(ctx.r3.u32 + ctx.r11.u32, ctx.r10.u32);
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, xer);
	// blt cr6,0x832c4b54
	if (cr6.lt) goto loc_832C4B54;
loc_832C4B7C:
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x832c4b88
	if (cr6.eq) goto loc_832C4B88;
	// mr r21,r9
	ctx.r21.u64 = ctx.r9.u64;
loc_832C4B88:
	// lis r10,-31772
	ctx.r10.s64 = -2082209792;
	// lwz r5,292(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 292);
	// li r11,4
	ctx.r11.s64 = 4;
	// addi r8,r10,22204
	ctx.r8.s64 = ctx.r10.s64 + 22204;
	// li r31,2
	ctx.r31.s64 = 2;
	// mr r30,r22
	ctx.r30.u64 = ctx.r22.u64;
	// mr r9,r22
	ctx.r9.u64 = ctx.r22.u64;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
	// lwz r8,12(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// addi r11,r8,87
	ctx.r11.s64 = ctx.r8.s64 + 87;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
loc_832C4BBC:
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x832c4bd8
	if (cr6.eq) goto loc_832C4BD8;
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x832c4bd8
	if (cr6.eq) goto loc_832C4BD8;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
loc_832C4BD8:
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// bdnz 0x832c4bbc
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_832C4BBC;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x832c4bfc
	if (cr6.eq) goto loc_832C4BFC;
	// divwu r11,r5,r9
	ctx.r11.u32 = PPCDivide(ctx.r5.u32, ctx.r9.u32);
	// twllei r9,0
	// mullw r11,r11,r9
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r9.s32);
	// subf r5,r11,r5
	ctx.r5.s64 = ctx.r5.s64 - ctx.r11.s64;
loc_832C4BFC:
	// addi r3,r6,48
	ctx.r3.s64 = ctx.r6.s64 + 48;
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// cmplw cr6,r6,r3
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r3.u32, xer);
	// bge cr6,0x832c4c2c
	if (!cr6.lt) goto loc_832C4C2C;
	// rlwinm r9,r8,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
loc_832C4C10:
	// add r10,r9,r11
	ctx.r10.u64 = ctx.r9.u64 + ctx.r11.u64;
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// cmplw cr6,r11,r3
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, xer);
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// neg r7,r7
	ctx.r7.s64 = -ctx.r7.s64;
	// stw r7,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r7.u32);
	// blt cr6,0x832c4c10
	if (cr6.lt) goto loc_832C4C10;
loc_832C4C2C:
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r7,r22
	ctx.r7.u64 = ctx.r22.u64;
loc_832C4C34:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x832c4c8c
	if (cr6.eq) goto loc_832C4C8C;
	// add r11,r7,r5
	ctx.r11.u64 = ctx.r7.u64 + ctx.r5.u64;
	// rlwinm r9,r8,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// clrlwi r11,r11,30
	ctx.r11.u64 = ctx.r11.u32 & 0x3;
	// mulli r10,r11,3
	ctx.r10.s64 = ctx.r11.s64 * 3;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// mulli r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 * 12;
	// rlwinm r29,r10,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// lwzx r29,r29,r24
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r24.u32);
	// lwzx r10,r9,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// cmpw cr6,r10,r29
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r29.s32, xer);
	// bge cr6,0x832c4c80
	if (!cr6.lt) goto loc_832C4C80;
	// addic. r10,r10,1
	xer.ca = ctx.r10.u32 > 4294967294;
	ctx.r10.s64 = ctx.r10.s64 + 1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// stwx r10,r9,r11
	PPC_STORE_U32(ctx.r9.u32 + ctx.r11.u32, ctx.r10.u32);
	// ble 0x832c4c80
	if (!cr0.gt) goto loc_832C4C80;
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
loc_832C4C80:
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// cmplwi cr6,r7,4
	cr6.compare<uint32_t>(ctx.r7.u32, 4, xer);
	// blt cr6,0x832c4c34
	if (cr6.lt) goto loc_832C4C34;
loc_832C4C8C:
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x832c4c9c
	if (cr6.eq) goto loc_832C4C9C;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// bne cr6,0x832c4c2c
	if (!cr6.eq) goto loc_832C4C2C;
loc_832C4C9C:
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// cmplw cr6,r6,r3
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r3.u32, xer);
	// bge cr6,0x832c4cdc
	if (!cr6.lt) goto loc_832C4CDC;
	// rlwinm r10,r8,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
loc_832C4CAC:
	// lwzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bge cr6,0x832c4cbc
	if (!cr6.lt) goto loc_832C4CBC;
	// stwx r22,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r22.u32);
loc_832C4CBC:
	// lwzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// add r30,r9,r30
	ctx.r30.u64 = ctx.r9.u64 + ctx.r30.u64;
	// cmplw cr6,r11,r3
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, xer);
	// blt cr6,0x832c4cac
	if (cr6.lt) goto loc_832C4CAC;
	// cmplw cr6,r30,r21
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r21.u32, xer);
	// ble cr6,0x832c4cdc
	if (!cr6.gt) goto loc_832C4CDC;
	// mr r21,r30
	ctx.r21.u64 = ctx.r30.u64;
loc_832C4CDC:
	// lwz r11,296(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 296);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x832c4cf0
	if (!cr6.eq) goto loc_832C4CF0;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,296(r28)
	PPC_STORE_U32(ctx.r28.u32 + 296, ctx.r11.u32);
loc_832C4CF0:
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// lwz r6,296(r28)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r28.u32 + 296);
	// addi r30,r23,408
	ctx.r30.s64 = ctx.r23.s64 + 408;
	// addi r10,r11,22236
	ctx.r10.s64 = ctx.r11.s64 + 22236;
	// addi r31,r28,396
	ctx.r31.s64 = ctx.r28.s64 + 396;
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
	// cmplw cr6,r23,r30
	cr6.compare<uint32_t>(ctx.r23.u32, ctx.r30.u32, xer);
	// lwz r5,12(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// bge cr6,0x832c4d38
	if (!cr6.lt) goto loc_832C4D38;
	// rlwinm r10,r5,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
loc_832C4D18:
	// lwzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r9,1
	cr6.compare<uint32_t>(ctx.r9.u32, 1, xer);
	// ble cr6,0x832c4d2c
	if (!cr6.gt) goto loc_832C4D2C;
	// li r9,1
	ctx.r9.s64 = 1;
	// stwx r9,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u32);
loc_832C4D2C:
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// cmplw cr6,r11,r30
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, xer);
	// blt cr6,0x832c4d18
	if (cr6.lt) goto loc_832C4D18;
loc_832C4D38:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x832c40e0
	ctx.lr = 0x832C4D44;
	sub_832C40E0(ctx, base);
	// addi r10,r31,408
	ctx.r10.s64 = ctx.r31.s64 + 408;
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
	// cmplw cr6,r31,r10
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, xer);
	// bge cr6,0x832c4d80
	if (!cr6.lt) goto loc_832C4D80;
	// subf r8,r23,r31
	ctx.r8.s64 = ctx.r31.s64 - ctx.r23.s64;
loc_832C4D58:
	// cmplw cr6,r11,r30
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, xer);
	// bge cr6,0x832c4d80
	if (!cr6.lt) goto loc_832C4D80;
	// rlwinm r9,r5,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r9,r8
	ctx.r7.u64 = ctx.r9.u64 + ctx.r8.u64;
	// lwzx r7,r7,r11
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r11.u32);
	// stwx r7,r9,r11
	PPC_STORE_U32(ctx.r9.u32 + ctx.r11.u32, ctx.r7.u32);
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// add r9,r8,r11
	ctx.r9.u64 = ctx.r8.u64 + ctx.r11.u64;
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// blt cr6,0x832c4d58
	if (cr6.lt) goto loc_832C4D58;
loc_832C4D80:
	// cmplw cr6,r3,r21
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r21.u32, xer);
	// ble cr6,0x832c4d8c
	if (!cr6.gt) goto loc_832C4D8C;
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
loc_832C4D8C:
	// cmplwi cr6,r21,0
	cr6.compare<uint32_t>(ctx.r21.u32, 0, xer);
	// beq cr6,0x832c4da0
	if (cr6.eq) goto loc_832C4DA0;
	// lwz r11,292(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 292);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,292(r28)
	PPC_STORE_U32(ctx.r28.u32 + 292, ctx.r11.u32);
loc_832C4DA0:
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb1c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832C4DAC"))) PPC_WEAK_FUNC(sub_832C4DAC);
PPC_FUNC_IMPL(__imp__sub_832C4DAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832C4DB0"))) PPC_WEAK_FUNC(sub_832C4DB0);
PPC_FUNC_IMPL(__imp__sub_832C4DB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// lwz r11,64(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x832c4e60
	if (cr6.eq) goto loc_832C4E60;
	// li r11,4
	ctx.r11.s64 = 4;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r10,r3,84
	ctx.r10.s64 = ctx.r3.s64 + 84;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
loc_832C4DE4:
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x832c4e00
	if (cr6.eq) goto loc_832C4E00;
	// lwz r11,212(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 212);
	// rlwinm. r11,r11,0,12,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xF0000;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne 0x832c4e00
	if (!cr0.eq) goto loc_832C4E00;
	// li r31,1
	ctx.r31.s64 = 1;
loc_832C4E00:
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x832c4de4
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_832C4DE4;
	// lwz r11,212(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 212);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne 0x832c4e38
	if (!cr0.eq) goto loc_832C4E38;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832c5f88
	ctx.lr = 0x832C4E1C;
	sub_832C5F88(ctx, base);
	// lis r11,28672
	ctx.r11.s64 = 1879048192;
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, xer);
	// beq cr6,0x832c4e38
	if (cr6.eq) goto loc_832C4E38;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832c5f80
	ctx.lr = 0x832C4E30;
	sub_832C5F80(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x832c4e54
	if (!cr0.eq) goto loc_832C4E54;
loc_832C4E38:
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, xer);
	// bne cr6,0x832c4e54
	if (!cr6.eq) goto loc_832C4E54;
	// bl 0x83d756dc
	ctx.lr = 0x832C4E44;
	__imp__XamVoiceIsActiveProcess(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x832c4e54
	if (cr0.eq) goto loc_832C4E54;
	// lfs f0,196(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 196);
	ctx.f0.f64 = double(temp.f32);
	// b 0x832c4e5c
	goto loc_832C4E5C;
loc_832C4E54:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,9008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
loc_832C4E5C:
	// stfs f0,208(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 208, temp.u32);
loc_832C4E60:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832C4E78"))) PPC_WEAK_FUNC(sub_832C4E78);
PPC_FUNC_IMPL(__imp__sub_832C4E78) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x832c4eac
	if (cr6.eq) goto loc_832C4EAC;
	// addi r9,r3,100
	ctx.r9.s64 = ctx.r3.s64 + 100;
loc_832C4E8C:
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// ld r8,0(r8)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r8.u32 + 0);
	// cmpld cr6,r4,r8
	cr6.compare<uint64_t>(ctx.r4.u64, ctx.r8.u64, xer);
	// beq cr6,0x832c4eac
	if (cr6.eq) goto loc_832C4EAC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x832c4e8c
	if (cr6.lt) goto loc_832C4E8C;
loc_832C4EAC:
	// addi r9,r11,67
	ctx.r9.s64 = ctx.r11.s64 + 67;
	// lwz r10,12(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	// addi r8,r11,33
	ctx.r8.s64 = ctx.r11.s64 + 33;
	// mulli r11,r9,3
	ctx.r11.s64 = ctx.r9.s64 * 3;
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mulli r11,r8,3
	ctx.r11.s64 = ctx.r8.s64 * 3;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r9,r3
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r3.u32);
	// stw r10,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r10.u32);
	// lwzx r11,r11,r3
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// stw r11,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832C4EE4"))) PPC_WEAK_FUNC(sub_832C4EE4);
PPC_FUNC_IMPL(__imp__sub_832C4EE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832C4EE8"))) PPC_WEAK_FUNC(sub_832C4EE8);
PPC_FUNC_IMPL(__imp__sub_832C4EE8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x832C4EF0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r9,-31747
	ctx.r9.s64 = -2080571392;
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r8,r9,-29504
	ctx.r8.s64 = ctx.r9.s64 + -29504;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// stw r28,-29504(r9)
	PPC_STORE_U32(ctx.r9.u32 + -29504, ctx.r28.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r28,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r28.u32);
	// beq cr6,0x832c5078
	if (cr6.eq) goto loc_832C5078;
	// lwz r11,236(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 236);
	// li r30,-1
	ctx.r30.s64 = -1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x832c4f60
	if (cr6.eq) goto loc_832C4F60;
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(ctx.r11.s32, -1, xer);
	// beq cr6,0x832c4f60
	if (cr6.eq) goto loc_832C4F60;
	// lwz r3,276(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 276);
	// bl 0x832d2b50
	ctx.lr = 0x832C4F3C;
	sub_832D2B50(ctx, base);
	// li r11,3
	ctx.r11.s64 = 3;
	// lwz r3,236(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 236);
	// li r4,-1
	ctx.r4.s64 = -1;
	// stw r11,272(r31)
	PPC_STORE_U32(ctx.r31.u32 + 272, ctx.r11.u32);
	// bl 0x82417108
	ctx.lr = 0x832C4F50;
	sub_82417108(ctx, base);
	// stw r28,272(r31)
	PPC_STORE_U32(ctx.r31.u32 + 272, ctx.r28.u32);
	// lwz r3,236(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 236);
	// bl 0x832d1a68
	ctx.lr = 0x832C4F5C;
	sub_832D1A68(ctx, base);
	// stw r30,236(r31)
	PPC_STORE_U32(ctx.r31.u32 + 236, ctx.r30.u32);
loc_832C4F60:
	// lwz r3,276(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 276);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x832c4f7c
	if (cr6.eq) goto loc_832C4F7C;
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x832c4f7c
	if (cr6.eq) goto loc_832C4F7C;
	// bl 0x832d1a68
	ctx.lr = 0x832C4F78;
	sub_832D1A68(ctx, base);
	// stw r30,276(r31)
	PPC_STORE_U32(ctx.r31.u32 + 276, ctx.r30.u32);
loc_832C4F7C:
	// lwz r3,284(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 284);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x832c4f98
	if (cr6.eq) goto loc_832C4F98;
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x832c4f98
	if (cr6.eq) goto loc_832C4F98;
	// bl 0x832d1a68
	ctx.lr = 0x832C4F94;
	sub_832D1A68(ctx, base);
	// stw r30,284(r31)
	PPC_STORE_U32(ctx.r31.u32 + 284, ctx.r30.u32);
loc_832C4F98:
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x832c4fbc
	if (cr6.eq) goto loc_832C4FBC;
	// stw r28,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r28.u32);
	// b 0x832c4fb0
	goto loc_832C4FB0;
loc_832C4FAC:
	// db16cyc 
loc_832C4FB0:
	// lwz r11,76(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x832c4fac
	if (!cr6.eq) goto loc_832C4FAC;
loc_832C4FBC:
	// addi r29,r31,80
	ctx.r29.s64 = ctx.r31.s64 + 80;
	// li r30,4
	ctx.r30.s64 = 4;
loc_832C4FC4:
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// bl 0x832c6d78
	ctx.lr = 0x832C4FCC;
	sub_832C6D78(ctx, base);
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// stwu r28,4(r29)
	ea = 4 + ctx.r29.u32;
	PPC_STORE_U32(ea, ctx.r28.u32);
	ctx.r29.u32 = ea;
	// bne 0x832c4fc4
	if (!cr0.eq) goto loc_832C4FC4;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// ble cr6,0x832c5008
	if (!cr6.gt) goto loc_832C5008;
	// addi r30,r31,96
	ctx.r30.s64 = ctx.r31.s64 + 96;
loc_832C4FEC:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x832ca070
	ctx.lr = 0x832C4FF4;
	sub_832CA070(ctx, base);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// stwu r28,4(r30)
	ea = 4 + ctx.r30.u32;
	PPC_STORE_U32(ea, ctx.r28.u32);
	ctx.r30.u32 = ea;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, xer);
	// blt cr6,0x832c4fec
	if (cr6.lt) goto loc_832C4FEC;
loc_832C5008:
	// lwz r3,64(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x832c5028
	if (cr6.eq) goto loc_832C5028;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,72(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832C5024;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r28,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r28.u32);
loc_832C5028:
	// lwz r3,68(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x832c5048
	if (cr6.eq) goto loc_832C5048;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,72(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832C5044;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r28,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r28.u32);
loc_832C5048:
	// lwz r3,60(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x832c5068
	if (cr6.eq) goto loc_832C5068;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832C5064;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r28,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r28.u32);
loc_832C5068:
	// lis r4,24970
	ctx.r4.s64 = 1636433920;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r4,r4,32780
	ctx.r4.u64 = ctx.r4.u64 | 32780;
	// bl 0x832d53c8
	ctx.lr = 0x832C5078;
	sub_832D53C8(ctx, base);
loc_832C5078:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832C5080"))) PPC_WEAK_FUNC(sub_832C5080);
PPC_FUNC_IMPL(__imp__sub_832C5080) {
	PPC_FUNC_PROLOGUE();
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
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
loc_832C5094:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r11
	ea = ctx.r11.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stwcx. r10,0,r11
	ea = ctx.r11.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x832c5094
	if (!cr0.eq) goto loc_832C5094;
	// mr r31,r10
	ctx.r31.u64 = ctx.r10.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x832c50e4
	if (!cr6.eq) goto loc_832C50E4;
	// bl 0x832c4ee8
	ctx.lr = 0x832C50C0;
	sub_832C4EE8(ctx, base);
	// lis r11,-31747
	ctx.r11.s64 = -2080571392;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r11,r11,-29372
	ctx.r11.s64 = ctx.r11.s64 + -29372;
loc_832C50CC:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r11
	ea = ctx.r11.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// stwcx. r8,0,r11
	ea = ctx.r11.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r8.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x832c50cc
	if (!cr0.eq) goto loc_832C50CC;
loc_832C50E4:
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

__attribute__((alias("__imp__sub_832C50FC"))) PPC_WEAK_FUNC(sub_832C50FC);
PPC_FUNC_IMPL(__imp__sub_832C50FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832C5100"))) PPC_WEAK_FUNC(sub_832C5100);
PPC_FUNC_IMPL(__imp__sub_832C5100) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x832C5108;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r26,r3,244
	ctx.r26.s64 = ctx.r3.s64 + 244;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// li r27,0
	ctx.r27.s64 = 0;
	// bl 0x83d7554c
	ctx.lr = 0x832C5124;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r11,272(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 272);
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// beq cr6,0x832c5238
	if (cr6.eq) goto loc_832C5238;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// lwz r3,284(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 284);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x83d756cc
	ctx.lr = 0x832C5144;
	__imp__XNotifyGetNext(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x832c51a0
	if (cr0.eq) goto loc_832C51A0;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,10
	cr6.compare<uint32_t>(ctx.r11.u32, 10, xer);
	// beq cr6,0x832c5198
	if (cr6.eq) goto loc_832C5198;
	// cmplwi cr6,r11,14
	cr6.compare<uint32_t>(ctx.r11.u32, 14, xer);
	// beq cr6,0x832c5198
	if (cr6.eq) goto loc_832C5198;
	// lis r10,8
	ctx.r10.s64 = 524288;
	// ori r10,r10,31
	ctx.r10.u64 = ctx.r10.u64 | 31;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x832c5194
	if (cr6.eq) goto loc_832C5194;
	// lis r10,1024
	ctx.r10.s64 = 67108864;
	// ori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 | 1;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// ble cr6,0x832c51a0
	if (!cr6.gt) goto loc_832C51A0;
	// lis r10,1024
	ctx.r10.s64 = 67108864;
	// ori r10,r10,3
	ctx.r10.u64 = ctx.r10.u64 | 3;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// ble cr6,0x832c5198
	if (!cr6.gt) goto loc_832C5198;
	// b 0x832c51a0
	goto loc_832C51A0;
loc_832C5194:
	// li r27,1
	ctx.r27.s64 = 1;
loc_832C5198:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,288(r31)
	PPC_STORE_U32(ctx.r31.u32 + 288, ctx.r11.u32);
loc_832C51A0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832c4968
	ctx.lr = 0x832C51A8;
	sub_832C4968(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r30,r31,80
	ctx.r30.s64 = ctx.r31.s64 + 80;
	// li r29,4
	ctx.r29.s64 = 4;
loc_832C51B4:
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(ctx.r27.s32, 0, xer);
	// beq cr6,0x832c51dc
	if (cr6.eq) goto loc_832C51DC;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x832c5f80
	ctx.lr = 0x832C51C4;
	sub_832C5F80(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x832c51dc
	if (cr0.eq) goto loc_832C51DC;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r10,212(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 212);
	// ori r10,r10,8
	ctx.r10.u64 = ctx.r10.u64 | 8;
	// stw r10,212(r11)
	PPC_STORE_U32(ctx.r11.u32 + 212, ctx.r10.u32);
loc_832C51DC:
	// lwzu r3,4(r30)
	ea = 4 + ctx.r30.u32;
	ctx.r3.u64 = PPC_LOAD_U32(ea);
	ctx.r30.u32 = ea;
	// bl 0x832c6a18
	ctx.lr = 0x832C51E4;
	sub_832C6A18(ctx, base);
	// addic. r29,r29,-1
	xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// bne 0x832c51b4
	if (!cr0.eq) goto loc_832C51B4;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// ble cr6,0x832c5230
	if (!cr6.gt) goto loc_832C5230;
	// addi r30,r31,100
	ctx.r30.s64 = ctx.r31.s64 + 100;
loc_832C5200:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x832c521c
	if (cr6.eq) goto loc_832C521C;
	// ld r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// cmpldi cr6,r11,0
	cr6.compare<uint64_t>(ctx.r11.u64, 0, xer);
	// beq cr6,0x832c521c
	if (cr6.eq) goto loc_832C521C;
	// bl 0x832ca1e0
	ctx.lr = 0x832C521C;
	sub_832CA1E0(ctx, base);
loc_832C521C:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, xer);
	// blt cr6,0x832c5200
	if (cr6.lt) goto loc_832C5200;
loc_832C5230:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,288(r31)
	PPC_STORE_U32(ctx.r31.u32 + 288, ctx.r11.u32);
loc_832C5238:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x83d7553c
	ctx.lr = 0x832C5240;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// cntlzw r11,r28
	ctx.r11.u64 = ctx.r28.u32 == 0 ? 32 : __builtin_clz(ctx.r28.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832C5250"))) PPC_WEAK_FUNC(sub_832C5250);
PPC_FUNC_IMPL(__imp__sub_832C5250) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x832C5258;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r28,r3,244
	ctx.r28.s64 = ctx.r3.s64 + 244;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// bl 0x83d7554c
	ctx.lr = 0x832C5278;
	__imp__RtlEnterCriticalSection(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832c4910
	ctx.lr = 0x832C5284;
	sub_832C4910(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x832c5298
	if (!cr0.eq) goto loc_832C5298;
	// lis r31,-32761
	ctx.r31.s64 = -2147024896;
	// ori r31,r31,87
	ctx.r31.u64 = ctx.r31.u64 | 87;
	// b 0x832c52a8
	goto loc_832C52A8;
loc_832C5298:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x832ca288
	ctx.lr = 0x832C52A4;
	sub_832CA288(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_832C52A8:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83d7553c
	ctx.lr = 0x832C52B0;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832C52BC"))) PPC_WEAK_FUNC(sub_832C52BC);
PPC_FUNC_IMPL(__imp__sub_832C52BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832C52C0"))) PPC_WEAK_FUNC(sub_832C52C0);
PPC_FUNC_IMPL(__imp__sub_832C52C0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x832C52C8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r28,r3,244
	ctx.r28.s64 = ctx.r3.s64 + 244;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// bl 0x83d7554c
	ctx.lr = 0x832C52E8;
	__imp__RtlEnterCriticalSection(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832c4910
	ctx.lr = 0x832C52F4;
	sub_832C4910(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x832c5308
	if (!cr0.eq) goto loc_832C5308;
	// lis r31,-32761
	ctx.r31.s64 = -2147024896;
	// ori r31,r31,87
	ctx.r31.u64 = ctx.r31.u64 | 87;
	// b 0x832c5318
	goto loc_832C5318;
loc_832C5308:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x832ca300
	ctx.lr = 0x832C5314;
	sub_832CA300(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_832C5318:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83d7553c
	ctx.lr = 0x832C5320;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832C532C"))) PPC_WEAK_FUNC(sub_832C532C);
PPC_FUNC_IMPL(__imp__sub_832C532C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832C5330"))) PPC_WEAK_FUNC(sub_832C5330);
PPC_FUNC_IMPL(__imp__sub_832C5330) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x832C5338;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r26,r3,244
	ctx.r26.s64 = ctx.r3.s64 + 244;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// bl 0x83d7554c
	ctx.lr = 0x832C535C;
	__imp__RtlEnterCriticalSection(ctx, base);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x832d27b0
	ctx.lr = 0x832C536C;
	sub_832D27B0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x832c4910
	ctx.lr = 0x832C5378;
	sub_832C4910(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x832c538c
	if (!cr0.eq) goto loc_832C538C;
	// lis r29,-32768
	ctx.r29.s64 = -2147483648;
	// ori r29,r29,16389
	ctx.r29.u64 = ctx.r29.u64 | 16389;
	// b 0x832c5424
	goto loc_832C5424;
loc_832C538C:
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x832ca378
	ctx.lr = 0x832C53A4;
	sub_832CA378(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// blt 0x832c5424
	if (cr0.lt) goto loc_832C5424;
	// lis r12,-1057
	ctx.r12.s64 = -69271552;
	// lis r11,-5413
	ctx.r11.s64 = -354746368;
	// ori r12,r12,221
	ctx.r12.u64 = ctx.r12.u64 | 221;
	// lis r10,-1057
	ctx.r10.s64 = -69271552;
	// rldicr r12,r12,32,31
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 32) & 0xFFFFFFFF00000000;
	// ori r11,r11,61168
	ctx.r11.u64 = ctx.r11.u64 | 61168;
	// oris r12,r12,60123
	ctx.r12.u64 = ctx.r12.u64 | 3940220928;
	// ori r10,r10,221
	ctx.r10.u64 = ctx.r10.u64 | 221;
	// ori r12,r12,61168
	ctx.r12.u64 = ctx.r12.u64 | 61168;
	// rldimi r11,r10,32,0
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r11.u64 & 0xFFFFFFFF);
	// and r9,r31,r12
	ctx.r9.u64 = ctx.r31.u64 & ctx.r12.u64;
	// cmpld cr6,r9,r11
	cr6.compare<uint64_t>(ctx.r9.u64, ctx.r11.u64, xer);
	// beq cr6,0x832c5424
	if (cr6.eq) goto loc_832C5424;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r30,84
	ctx.r11.s64 = ctx.r30.s64 + 84;
loc_832C53E8:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x832c5408
	if (cr6.eq) goto loc_832C5408;
	// lwz r9,212(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 212);
	// lis r8,1
	ctx.r8.s64 = 65536;
	// rlwinm r9,r9,0,12,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xF0000;
	// cmplw cr6,r9,r8
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, xer);
	// beq cr6,0x832c541c
	if (cr6.eq) goto loc_832C541C;
loc_832C5408:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplwi cr6,r10,4
	cr6.compare<uint32_t>(ctx.r10.u32, 4, xer);
	// blt cr6,0x832c53e8
	if (cr6.lt) goto loc_832C53E8;
	// b 0x832c5424
	goto loc_832C5424;
loc_832C541C:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,288(r30)
	PPC_STORE_U32(ctx.r30.u32 + 288, ctx.r11.u32);
loc_832C5424:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x83d7553c
	ctx.lr = 0x832C542C;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832C5438"))) PPC_WEAK_FUNC(sub_832C5438);
PPC_FUNC_IMPL(__imp__sub_832C5438) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x832C5440;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r30,r3,244
	ctx.r30.s64 = ctx.r3.s64 + 244;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x83d7554c
	ctx.lr = 0x832C5458;
	__imp__RtlEnterCriticalSection(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832c4910
	ctx.lr = 0x832C5464;
	sub_832C4910(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x832c5478
	if (!cr0.eq) goto loc_832C5478;
	// lis r31,-32761
	ctx.r31.s64 = -2147024896;
	// ori r31,r31,87
	ctx.r31.u64 = ctx.r31.u64 | 87;
	// b 0x832c5480
	goto loc_832C5480;
loc_832C5478:
	// bl 0x832ca440
	ctx.lr = 0x832C547C;
	sub_832CA440(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_832C5480:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83d7553c
	ctx.lr = 0x832C5488;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832C5494"))) PPC_WEAK_FUNC(sub_832C5494);
PPC_FUNC_IMPL(__imp__sub_832C5494) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832C5498"))) PPC_WEAK_FUNC(sub_832C5498);
PPC_FUNC_IMPL(__imp__sub_832C5498) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x832C54A0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r28,r3,244
	ctx.r28.s64 = ctx.r3.s64 + 244;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x83d7554c
	ctx.lr = 0x832C54BC;
	__imp__RtlEnterCriticalSection(ctx, base);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r8,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r8.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// ble cr6,0x832c5540
	if (!cr6.gt) goto loc_832C5540;
	// addi r10,r31,100
	ctx.r10.s64 = ctx.r31.s64 + 100;
	// addi r9,r29,-8
	ctx.r9.s64 = ctx.r29.s64 + -8;
loc_832C54D8:
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// ld r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// cmpldi cr6,r11,0
	cr6.compare<uint64_t>(ctx.r11.u64, 0, xer);
	// beq cr6,0x832c552c
	if (cr6.eq) goto loc_832C552C;
	// lis r12,-1057
	ctx.r12.s64 = -69271552;
	// lis r7,-5413
	ctx.r7.s64 = -354746368;
	// ori r12,r12,221
	ctx.r12.u64 = ctx.r12.u64 | 221;
	// lis r6,-1057
	ctx.r6.s64 = -69271552;
	// rldicr r12,r12,32,31
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 32) & 0xFFFFFFFF00000000;
	// ori r7,r7,61168
	ctx.r7.u64 = ctx.r7.u64 | 61168;
	// oris r12,r12,60123
	ctx.r12.u64 = ctx.r12.u64 | 3940220928;
	// ori r6,r6,221
	ctx.r6.u64 = ctx.r6.u64 | 221;
	// ori r12,r12,61168
	ctx.r12.u64 = ctx.r12.u64 | 61168;
	// rldimi r7,r6,32,0
	ctx.r7.u64 = (__builtin_rotateleft64(ctx.r6.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r7.u64 & 0xFFFFFFFF);
	// and r5,r11,r12
	ctx.r5.u64 = ctx.r11.u64 & ctx.r12.u64;
	// cmpld cr6,r5,r7
	cr6.compare<uint64_t>(ctx.r5.u64, ctx.r7.u64, xer);
	// beq cr6,0x832c552c
	if (cr6.eq) goto loc_832C552C;
	// stdu r11,8(r9)
	ea = 8 + ctx.r9.u32;
	PPC_STORE_U64(ea, ctx.r11.u64);
	ctx.r9.u32 = ea;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
loc_832C552C:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r8,r11
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, xer);
	// blt cr6,0x832c54d8
	if (cr6.lt) goto loc_832C54D8;
loc_832C5540:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83d7553c
	ctx.lr = 0x832C5548;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832C5554"))) PPC_WEAK_FUNC(sub_832C5554);
PPC_FUNC_IMPL(__imp__sub_832C5554) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832C5558"))) PPC_WEAK_FUNC(sub_832C5558);
PPC_FUNC_IMPL(__imp__sub_832C5558) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x832C5560;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r28,r3,244
	ctx.r28.s64 = ctx.r3.s64 + 244;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// bl 0x83d7554c
	ctx.lr = 0x832C557C;
	__imp__RtlEnterCriticalSection(ctx, base);
	// addi r11,r30,21
	ctx.r11.s64 = ctx.r30.s64 + 21;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r11,r31
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x832c55bc
	if (cr6.eq) goto loc_832C55BC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832c5f80
	ctx.lr = 0x832C5598;
	sub_832C5F80(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x832c55b8
	if (cr0.eq) goto loc_832C55B8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832c5f88
	ctx.lr = 0x832C55A8;
	sub_832C5F88(ctx, base);
	// lis r11,28672
	ctx.r11.s64 = 1879048192;
	// li r29,1
	ctx.r29.s64 = 1;
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, xer);
	// beq cr6,0x832c55bc
	if (cr6.eq) goto loc_832C55BC;
loc_832C55B8:
	// li r29,0
	ctx.r29.s64 = 0;
loc_832C55BC:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83d7553c
	ctx.lr = 0x832C55C4;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832C55D0"))) PPC_WEAK_FUNC(sub_832C55D0);
PPC_FUNC_IMPL(__imp__sub_832C55D0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x832C55D8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r29,r3,244
	ctx.r29.s64 = ctx.r3.s64 + 244;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// bl 0x83d7554c
	ctx.lr = 0x832C55F4;
	__imp__RtlEnterCriticalSection(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832c4910
	ctx.lr = 0x832C5600;
	sub_832C4910(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x832c5610
	if (cr0.eq) goto loc_832C5610;
	// bl 0x832ca5f0
	ctx.lr = 0x832C560C;
	sub_832CA5F0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_832C5610:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83d7553c
	ctx.lr = 0x832C5618;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832C5624"))) PPC_WEAK_FUNC(sub_832C5624);
PPC_FUNC_IMPL(__imp__sub_832C5624) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832C5628"))) PPC_WEAK_FUNC(sub_832C5628);
PPC_FUNC_IMPL(__imp__sub_832C5628) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x832C5630;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r29,r3,244
	ctx.r29.s64 = ctx.r3.s64 + 244;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x83d7554c
	ctx.lr = 0x832C564C;
	__imp__RtlEnterCriticalSection(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832c4910
	ctx.lr = 0x832C5658;
	sub_832C4910(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x832c566c
	if (!cr0.eq) goto loc_832C566C;
	// lis r31,-32761
	ctx.r31.s64 = -2147024896;
	// ori r31,r31,87
	ctx.r31.u64 = ctx.r31.u64 | 87;
	// b 0x832c5678
	goto loc_832C5678;
loc_832C566C:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x832c98c0
	ctx.lr = 0x832C5674;
	sub_832C98C0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_832C5678:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83d7553c
	ctx.lr = 0x832C5680;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832C568C"))) PPC_WEAK_FUNC(sub_832C568C);
PPC_FUNC_IMPL(__imp__sub_832C568C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832C5690"))) PPC_WEAK_FUNC(sub_832C5690);
PPC_FUNC_IMPL(__imp__sub_832C5690) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x832C5698;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r26,r3,244
	ctx.r26.s64 = ctx.r3.s64 + 244;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// mr r27,r8
	ctx.r27.u64 = ctx.r8.u64;
	// bl 0x83d7554c
	ctx.lr = 0x832C56C0;
	__imp__RtlEnterCriticalSection(ctx, base);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832c4910
	ctx.lr = 0x832C56CC;
	sub_832C4910(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x832c56e0
	if (!cr0.eq) goto loc_832C56E0;
	// lis r31,-32761
	ctx.r31.s64 = -2147024896;
	// ori r31,r31,87
	ctx.r31.u64 = ctx.r31.u64 | 87;
	// b 0x832c56f8
	goto loc_832C56F8;
loc_832C56E0:
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x832c99e0
	ctx.lr = 0x832C56F4;
	sub_832C99E0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_832C56F8:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x83d7553c
	ctx.lr = 0x832C5700;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832C570C"))) PPC_WEAK_FUNC(sub_832C570C);
PPC_FUNC_IMPL(__imp__sub_832C570C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832C5710"))) PPC_WEAK_FUNC(sub_832C5710);
PPC_FUNC_IMPL(__imp__sub_832C5710) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdacc
	ctx.lr = 0x832C5718;
	__savegprlr_21(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32761
	ctx.r11.s64 = -2147024896;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// mr r22,r6
	ctx.r22.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// mr r30,r8
	ctx.r30.u64 = ctx.r8.u64;
	// ori r28,r11,1167
	ctx.r28.u64 = ctx.r11.u64 | 1167;
	// bl 0x832c3310
	ctx.lr = 0x832C5740;
	sub_832C3310(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x832c5860
	if (!cr6.eq) goto loc_832C5860;
	// addi r21,r31,244
	ctx.r21.s64 = ctx.r31.s64 + 244;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x83d7554c
	ctx.lr = 0x832C5754;
	__imp__RtlEnterCriticalSection(ctx, base);
	// li r23,0
	ctx.r23.s64 = 0;
	// addi r31,r31,84
	ctx.r31.s64 = ctx.r31.s64 + 84;
	// mr r29,r23
	ctx.r29.u64 = ctx.r23.u64;
loc_832C5760:
	// lwz r26,0(r31)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(ctx.r26.u32, 0, xer);
	// beq cr6,0x832c578c
	if (cr6.eq) goto loc_832C578C;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x832c5f88
	ctx.lr = 0x832C5774;
	sub_832C5F88(ctx, base);
	// lis r11,28672
	ctx.r11.s64 = 1879048192;
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, xer);
	// bne cr6,0x832c578c
	if (!cr6.eq) goto loc_832C578C;
	// lwz r3,12(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 12);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x832c57a0
	if (!cr6.eq) goto loc_832C57A0;
loc_832C578C:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplwi cr6,r29,4
	cr6.compare<uint32_t>(ctx.r29.u32, 4, xer);
	// blt cr6,0x832c5760
	if (cr6.lt) goto loc_832C5760;
	// b 0x832c5858
	goto loc_832C5858;
loc_832C57A0:
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, xer);
	// beq cr6,0x832c580c
	if (cr6.eq) goto loc_832C580C;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x832c580c
	if (cr6.eq) goto loc_832C580C;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x832c3378
	ctx.lr = 0x832C57BC;
	sub_832C3378(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// ble cr6,0x832c57d4
	if (!cr6.gt) goto loc_832C57D4;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
loc_832C57D4:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// ble cr6,0x832c5814
	if (!cr6.gt) goto loc_832C5814;
	// addi r11,r1,76
	ctx.r11.s64 = ctx.r1.s64 + 76;
loc_832C57E8:
	// lfs f13,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lfsu f0,8(r11)
	ea = 8 + ctx.r11.u32;
	temp.u32 = PPC_LOAD_U32(ea);
	ctx.f0.f64 = double(temp.f32);
	ctx.r11.u32 = ea;
	// stfs f13,0(r27)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r27.u32 + 0, temp.u32);
	// stfs f0,4(r27)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r27.u32 + 4, temp.u32);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// blt cr6,0x832c57e8
	if (cr6.lt) goto loc_832C57E8;
	// b 0x832c5814
	goto loc_832C5814;
loc_832C580C:
	// mr r28,r23
	ctx.r28.u64 = ctx.r23.u64;
	// stw r23,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r23.u32);
loc_832C5814:
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(ctx.r28.s32, 0, xer);
	// blt cr6,0x832c5858
	if (cr6.lt) goto loc_832C5858;
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(ctx.r24.u32, 0, xer);
	// beq cr6,0x832c5854
	if (cr6.eq) goto loc_832C5854;
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x832c5854
	if (cr6.eq) goto loc_832C5854;
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// mr r7,r22
	ctx.r7.u64 = ctx.r22.u64;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r4,-18804(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -18804);
	// bl 0x832c6c70
	ctx.lr = 0x832C584C;
	sub_832C6C70(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// b 0x832c5858
	goto loc_832C5858;
loc_832C5854:
	// stw r23,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r23.u32);
loc_832C5858:
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x83d7553c
	ctx.lr = 0x832C5860;
	__imp__RtlLeaveCriticalSection(ctx, base);
loc_832C5860:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb1c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832C586C"))) PPC_WEAK_FUNC(sub_832C586C);
PPC_FUNC_IMPL(__imp__sub_832C586C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832C5870"))) PPC_WEAK_FUNC(sub_832C5870);
PPC_FUNC_IMPL(__imp__sub_832C5870) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x832C5878;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r28,r3,244
	ctx.r28.s64 = ctx.r3.s64 + 244;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// bl 0x83d7554c
	ctx.lr = 0x832C5898;
	__imp__RtlEnterCriticalSection(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832c4910
	ctx.lr = 0x832C58A4;
	sub_832C4910(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x832c58b8
	if (!cr0.eq) goto loc_832C58B8;
	// lis r31,-32761
	ctx.r31.s64 = -2147024896;
	// ori r31,r31,87
	ctx.r31.u64 = ctx.r31.u64 | 87;
	// b 0x832c58c8
	goto loc_832C58C8;
loc_832C58B8:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x832ca5c8
	ctx.lr = 0x832C58C4;
	sub_832CA5C8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_832C58C8:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83d7553c
	ctx.lr = 0x832C58D0;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832C58DC"))) PPC_WEAK_FUNC(sub_832C58DC);
PPC_FUNC_IMPL(__imp__sub_832C58DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832C58E0"))) PPC_WEAK_FUNC(sub_832C58E0);
PPC_FUNC_IMPL(__imp__sub_832C58E0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x832C58E8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r28,r3,244
	ctx.r28.s64 = ctx.r3.s64 + 244;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// bl 0x83d7554c
	ctx.lr = 0x832C5908;
	__imp__RtlEnterCriticalSection(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832c4910
	ctx.lr = 0x832C5914;
	sub_832C4910(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x832c5928
	if (!cr0.eq) goto loc_832C5928;
	// lis r31,-32761
	ctx.r31.s64 = -2147024896;
	// ori r31,r31,87
	ctx.r31.u64 = ctx.r31.u64 | 87;
	// b 0x832c5938
	goto loc_832C5938;
loc_832C5928:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x832ca550
	ctx.lr = 0x832C5934;
	sub_832CA550(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_832C5938:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83d7553c
	ctx.lr = 0x832C5940;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832C594C"))) PPC_WEAK_FUNC(sub_832C594C);
PPC_FUNC_IMPL(__imp__sub_832C594C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832C5950"))) PPC_WEAK_FUNC(sub_832C5950);
PPC_FUNC_IMPL(__imp__sub_832C5950) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x832C5958;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r29,r3,244
	ctx.r29.s64 = ctx.r3.s64 + 244;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// bl 0x83d7554c
	ctx.lr = 0x832C5978;
	__imp__RtlEnterCriticalSection(ctx, base);
	// addi r11,r30,21
	ctx.r11.s64 = ctx.r30.s64 + 21;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x832c5998
	if (!cr6.eq) goto loc_832C5998;
	// lis r27,-32761
	ctx.r27.s64 = -2147024896;
	// ori r27,r27,87
	ctx.r27.u64 = ctx.r27.u64 | 87;
	// b 0x832c59a0
	goto loc_832C59A0;
loc_832C5998:
	// lfs f0,196(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 196);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r28)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r28.u32 + 0, temp.u32);
loc_832C59A0:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83d7553c
	ctx.lr = 0x832C59A8;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832C59B4"))) PPC_WEAK_FUNC(sub_832C59B4);
PPC_FUNC_IMPL(__imp__sub_832C59B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832C59B8"))) PPC_WEAK_FUNC(sub_832C59B8);
PPC_FUNC_IMPL(__imp__sub_832C59B8) {
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
	// lis r11,-2
	ctx.r11.s64 = -131072;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// ori r11,r11,31072
	ctx.r11.u64 = ctx.r11.u64 | 31072;
	// li r5,0
	ctx.r5.s64 = 0;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x832d5498
	ctx.lr = 0x832C59EC;
	sub_832D5498(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// bne 0x832c59fc
	if (!cr0.eq) goto loc_832C59FC;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x832d46f8
	ctx.lr = 0x832C59FC;
	sub_832D46F8(ctx, base);
loc_832C59FC:
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,10
	ctx.r5.s64 = 10;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832d5428
	ctx.lr = 0x832C5A18;
	sub_832D5428(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x832c5a28
	if (!cr0.eq) goto loc_832C5A28;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x832d46f8
	ctx.lr = 0x832C5A28;
	sub_832D46F8(ctx, base);
loc_832C5A28:
	// lwz r3,276(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 276);
	// bl 0x832d2b10
	ctx.lr = 0x832C5A30;
	sub_832D2B10(ctx, base);
	// b 0x832c5a44
	goto loc_832C5A44;
loc_832C5A34:
	// li r4,-1
	ctx.r4.s64 = -1;
	// bl 0x82417108
	ctx.lr = 0x832C5A3C;
	sub_82417108(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832c5100
	ctx.lr = 0x832C5A44;
	sub_832C5100(ctx, base);
loc_832C5A44:
	// lwz r11,272(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 272);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// bne cr6,0x832c5a34
	if (!cr6.eq) goto loc_832C5A34;
	// bl 0x832d53e8
	ctx.lr = 0x832C5A58;
	sub_832D53E8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832d1a68
	ctx.lr = 0x832C5A60;
	sub_832D1A68(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x832d46f8
	ctx.lr = 0x832C5A68;
	sub_832D46F8(ctx, base);
}

__attribute__((alias("__imp__sub_832C5A68"))) PPC_WEAK_FUNC(sub_832C5A68);
PPC_FUNC_IMPL(__imp__sub_832C5A68) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdab0
	ctx.lr = 0x832C5A70;
	__savegprlr_14(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x832c5bd8
	if (!cr6.eq) goto loc_832C5BD8;
	// lis r11,-31840
	ctx.r11.s64 = -2086666240;
	// lis r10,-31956
	ctx.r10.s64 = -2094268416;
	// lis r9,-31956
	ctx.r9.s64 = -2094268416;
	// addi r11,r11,-28736
	ctx.r11.s64 = ctx.r11.s64 + -28736;
	// addi r10,r10,20608
	ctx.r10.s64 = ctx.r10.s64 + 20608;
	// addi r9,r9,17008
	ctx.r9.s64 = ctx.r9.s64 + 17008;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lis r8,-31956
	ctx.r8.s64 = -2094268416;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// lis r7,-31956
	ctx.r7.s64 = -2094268416;
	// stw r9,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// lis r6,-31956
	ctx.r6.s64 = -2094268416;
	// addi r11,r8,17144
	ctx.r11.s64 = ctx.r8.s64 + 17144;
	// addi r10,r7,17256
	ctx.r10.s64 = ctx.r7.s64 + 17256;
	// addi r9,r6,21072
	ctx.r9.s64 = ctx.r6.s64 + 21072;
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// lis r5,-31956
	ctx.r5.s64 = -2094268416;
	// stw r10,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// lis r4,-31956
	ctx.r4.s64 = -2094268416;
	// stw r9,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r9.u32);
	// lis r31,-31956
	ctx.r31.s64 = -2094268416;
	// addi r11,r5,21184
	ctx.r11.s64 = ctx.r5.s64 + 21184;
	// addi r10,r4,17368
	ctx.r10.s64 = ctx.r4.s64 + 17368;
	// addi r9,r31,17408
	ctx.r9.s64 = ctx.r31.s64 + 17408;
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// lis r30,-31956
	ctx.r30.s64 = -2094268416;
	// stw r10,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r10.u32);
	// lis r29,-31956
	ctx.r29.s64 = -2094268416;
	// stw r9,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r9.u32);
	// lis r28,-31956
	ctx.r28.s64 = -2094268416;
	// addi r11,r30,17568
	ctx.r11.s64 = ctx.r30.s64 + 17568;
	// addi r10,r29,21296
	ctx.r10.s64 = ctx.r29.s64 + 21296;
	// addi r9,r28,21560
	ctx.r9.s64 = ctx.r28.s64 + 21560;
	// stw r11,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
	// lis r27,-31956
	ctx.r27.s64 = -2094268416;
	// stw r10,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r10.u32);
	// lis r26,-31956
	ctx.r26.s64 = -2094268416;
	// stw r9,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r9.u32);
	// lis r25,-31956
	ctx.r25.s64 = -2094268416;
	// addi r11,r27,21656
	ctx.r11.s64 = ctx.r27.s64 + 21656;
	// addi r10,r26,17640
	ctx.r10.s64 = ctx.r26.s64 + 17640;
	// addi r9,r25,17744
	ctx.r9.s64 = ctx.r25.s64 + 17744;
	// stw r11,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r11.u32);
	// lis r24,-31956
	ctx.r24.s64 = -2094268416;
	// stw r10,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r10.u32);
	// lis r23,-31956
	ctx.r23.s64 = -2094268416;
	// stw r9,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r9.u32);
	// lis r22,-31956
	ctx.r22.s64 = -2094268416;
	// addi r11,r24,21968
	ctx.r11.s64 = ctx.r24.s64 + 21968;
	// addi r10,r23,22056
	ctx.r10.s64 = ctx.r23.s64 + 22056;
	// addi r9,r22,22160
	ctx.r9.s64 = ctx.r22.s64 + 22160;
	// stw r11,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r11.u32);
	// lis r21,-31956
	ctx.r21.s64 = -2094268416;
	// stw r10,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, ctx.r10.u32);
	// lis r20,-31956
	ctx.r20.s64 = -2094268416;
	// stw r9,68(r3)
	PPC_STORE_U32(ctx.r3.u32 + 68, ctx.r9.u32);
	// lis r19,-31956
	ctx.r19.s64 = -2094268416;
	// addi r11,r21,17792
	ctx.r11.s64 = ctx.r21.s64 + 17792;
	// addi r10,r20,17800
	ctx.r10.s64 = ctx.r20.s64 + 17800;
	// addi r9,r19,22640
	ctx.r9.s64 = ctx.r19.s64 + 22640;
	// stw r11,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r11.u32);
	// lis r18,-31956
	ctx.r18.s64 = -2094268416;
	// stw r10,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, ctx.r10.u32);
	// lis r17,-31956
	ctx.r17.s64 = -2094268416;
	// stw r9,84(r3)
	PPC_STORE_U32(ctx.r3.u32 + 84, ctx.r9.u32);
	// lis r16,-31956
	ctx.r16.s64 = -2094268416;
	// addi r11,r18,22752
	ctx.r11.s64 = ctx.r18.s64 + 22752;
	// addi r10,r17,22288
	ctx.r10.s64 = ctx.r17.s64 + 22288;
	// addi r9,r16,21848
	ctx.r9.s64 = ctx.r16.s64 + 21848;
	// stw r11,88(r3)
	PPC_STORE_U32(ctx.r3.u32 + 88, ctx.r11.u32);
	// lis r15,-31956
	ctx.r15.s64 = -2094268416;
	// stw r10,80(r3)
	PPC_STORE_U32(ctx.r3.u32 + 80, ctx.r10.u32);
	// lis r14,-31956
	ctx.r14.s64 = -2094268416;
	// stw r9,92(r3)
	PPC_STORE_U32(ctx.r3.u32 + 92, ctx.r9.u32);
	// addi r11,r15,17928
	ctx.r11.s64 = ctx.r15.s64 + 17928;
	// addi r10,r14,22864
	ctx.r10.s64 = ctx.r14.s64 + 22864;
	// lis r9,-31956
	ctx.r9.s64 = -2094268416;
	// stw r11,100(r3)
	PPC_STORE_U32(ctx.r3.u32 + 100, ctx.r11.u32);
	// stw r10,96(r3)
	PPC_STORE_U32(ctx.r3.u32 + 96, ctx.r10.u32);
	// lis r10,-31956
	ctx.r10.s64 = -2094268416;
	// addi r11,r9,17984
	ctx.r11.s64 = ctx.r9.s64 + 17984;
	// stw r11,104(r3)
	PPC_STORE_U32(ctx.r3.u32 + 104, ctx.r11.u32);
	// lis r11,-31956
	ctx.r11.s64 = -2094268416;
	// addi r10,r10,17728
	ctx.r10.s64 = ctx.r10.s64 + 17728;
	// addi r11,r11,17736
	ctx.r11.s64 = ctx.r11.s64 + 17736;
	// stw r10,108(r3)
	PPC_STORE_U32(ctx.r3.u32 + 108, ctx.r10.u32);
	// stw r11,112(r3)
	PPC_STORE_U32(ctx.r3.u32 + 112, ctx.r11.u32);
loc_832C5BD8:
	// b 0x831cdb00
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832C5BDC"))) PPC_WEAK_FUNC(sub_832C5BDC);
PPC_FUNC_IMPL(__imp__sub_832C5BDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832C5BE0"))) PPC_WEAK_FUNC(sub_832C5BE0);
PPC_FUNC_IMPL(__imp__sub_832C5BE0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad4
	ctx.lr = 0x832C5BE8;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r23,r4
	ctx.r23.u64 = ctx.r4.u64;
	// lwz r11,36(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x832c5c20
	if (cr6.eq) goto loc_832C5C20;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x832c5c20
	if (cr6.eq) goto loc_832C5C20;
loc_832C5C14:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x832c5c14
	if (cr6.lt) goto loc_832C5C14;
loc_832C5C20:
	// lwz r11,40(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x832c5c48
	if (cr6.eq) goto loc_832C5C48;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x832c5c48
	if (cr6.eq) goto loc_832C5C48;
loc_832C5C3C:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x832c5c3c
	if (cr6.lt) goto loc_832C5C3C;
loc_832C5C48:
	// lis r4,24970
	ctx.r4.s64 = 1636433920;
	// li r3,1224
	ctx.r3.s64 = 1224;
	// ori r4,r4,32780
	ctx.r4.u64 = ctx.r4.u64 | 32780;
	// bl 0x832d5290
	ctx.lr = 0x832C5C58;
	sub_832D5290(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// bne 0x832c5c6c
	if (!cr0.eq) goto loc_832C5C6C;
	// lis r29,-32761
	ctx.r29.s64 = -2147024896;
	// ori r29,r29,14
	ctx.r29.u64 = ctx.r29.u64 | 14;
	// b 0x832c5eb8
	goto loc_832C5EB8;
loc_832C5C6C:
	// lis r11,-31747
	ctx.r11.s64 = -2080571392;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r11,-29372
	ctx.r7.s64 = ctx.r11.s64 + -29372;
loc_832C5C78:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r7
	ea = ctx.r7.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// cmpw cr6,r10,r8
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, xer);
	// bne cr6,0x832c5c9c
	if (!cr6.eq) goto loc_832C5C9C;
	// stwcx. r31,0,r7
	ea = ctx.r7.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r31.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x832c5c78
	if (!cr0.eq) goto loc_832C5C78;
	// b 0x832c5ca4
	goto loc_832C5CA4;
loc_832C5C9C:
	// stwcx. r10,0,r7
	ea = ctx.r7.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
loc_832C5CA4:
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x832c5ccc
	if (cr6.eq) goto loc_832C5CCC;
	// lis r4,24970
	ctx.r4.s64 = 1636433920;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r4,r4,32780
	ctx.r4.u64 = ctx.r4.u64 | 32780;
	// bl 0x832d53c8
	ctx.lr = 0x832C5CC0;
	sub_832D53C8(ctx, base);
	// lis r29,-32768
	ctx.r29.s64 = -2147483648;
	// ori r29,r29,16389
	ctx.r29.u64 = ctx.r29.u64 | 16389;
	// b 0x832c5eb4
	goto loc_832C5EB4;
loc_832C5CCC:
	// lis r11,-31747
	ctx.r11.s64 = -2080571392;
	// addi r29,r11,-29488
	ctx.r29.s64 = ctx.r11.s64 + -29488;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x832c5a68
	ctx.lr = 0x832C5CDC;
	sub_832C5A68(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r25,1
	ctx.r25.s64 = 1;
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// stw r25,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r25.u32);
	// li r5,52
	ctx.r5.s64 = 52;
	// stw r25,1216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1216, ctx.r25.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,1692(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1692);
	// lhz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 4);
	// subfic r11,r11,13200
	xer.ca = ctx.r11.u32 <= 13200;
	ctx.r11.s64 = 13200 - ctx.r11.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// stw r11,1220(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1220, ctx.r11.u32);
	// bl 0x831ce980
	ctx.lr = 0x832C5D18;
	sub_831CE980(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832c46d0
	ctx.lr = 0x832C5D24;
	sub_832C46D0(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// blt 0x832c5eac
	if (cr0.lt) goto loc_832C5EAC;
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r27,r31,84
	ctx.r27.s64 = ctx.r31.s64 + 84;
loc_832C5D34:
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// lwz r5,12(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832c6f28
	ctx.lr = 0x832C5D4C;
	sub_832C6F28(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// blt 0x832c5eac
	if (cr0.lt) goto loc_832C5EAC;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// cmplwi cr6,r28,4
	cr6.compare<uint32_t>(ctx.r28.u32, 4, xer);
	// blt cr6,0x832c5d34
	if (cr6.lt) goto loc_832C5D34;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r26,0
	ctx.r26.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// ble cr6,0x832c5dd4
	if (!cr6.gt) goto loc_832C5DD4;
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r27,r31,100
	ctx.r27.s64 = ctx.r31.s64 + 100;
loc_832C5D7C:
	// lwz r11,36(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x832c5d94
	if (cr6.eq) goto loc_832C5D94;
	// lwzx r6,r28,r11
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r11.u32);
loc_832C5D94:
	// lwz r11,40(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x832c5da4
	if (cr6.eq) goto loc_832C5DA4;
	// lwzx r7,r28,r11
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r11.u32);
loc_832C5DA4:
	// add r8,r27,r28
	ctx.r8.u64 = ctx.r27.u64 + ctx.r28.u64;
	// lwz r5,20(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,16(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// bl 0x832ca760
	ctx.lr = 0x832C5DB8;
	sub_832CA760(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// blt 0x832c5eac
	if (cr0.lt) goto loc_832C5EAC;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// cmplw cr6,r26,r11
	cr6.compare<uint32_t>(ctx.r26.u32, ctx.r11.u32, xer);
	// blt cr6,0x832c5d7c
	if (cr6.lt) goto loc_832C5D7C;
loc_832C5DD4:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x832d2a70
	ctx.lr = 0x832C5DE8;
	sub_832D2A70(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r3,276(r31)
	PPC_STORE_U32(ctx.r31.u32 + 276, ctx.r3.u32);
	// bne 0x832c5e00
	if (!cr0.eq) goto loc_832C5E00;
loc_832C5DF4:
	// lis r29,-32768
	ctx.r29.s64 = -2147483648;
	// ori r29,r29,16389
	ctx.r29.u64 = ctx.r29.u64 | 16389;
	// b 0x832c5eac
	goto loc_832C5EAC;
loc_832C5E00:
	// li r4,10
	ctx.r4.s64 = 10;
	// li r3,5
	ctx.r3.s64 = 5;
	// bl 0x83d756ec
	ctx.lr = 0x832C5E0C;
	__imp__XamNotifyCreateListener(ctx, base);
	// stw r3,284(r31)
	PPC_STORE_U32(ctx.r31.u32 + 284, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x832c5df4
	if (cr0.eq) goto loc_832C5DF4;
	// stw r25,288(r31)
	PPC_STORE_U32(ctx.r31.u32 + 288, ctx.r25.u32);
	// addi r3,r31,244
	ctx.r3.s64 = ctx.r31.s64 + 244;
	// bl 0x83d755dc
	ctx.lr = 0x832C5E24;
	__imp__RtlInitializeCriticalSection(ctx, base);
	// lwz r11,8(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 8);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x832c5ea4
	if (!cr6.eq) goto loc_832C5EA4;
	// lis r11,-31956
	ctx.r11.s64 = -2094268416;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// addi r5,r11,22968
	ctx.r5.s64 = ctx.r11.s64 + 22968;
	// lis r4,1
	ctx.r4.s64 = 65536;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x832d5520
	ctx.lr = 0x832C5E54;
	sub_832D5520(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r3,236(r31)
	PPC_STORE_U32(ctx.r31.u32 + 236, ctx.r3.u32);
	// beq 0x832c5df4
	if (cr0.eq) goto loc_832C5DF4;
	// li r4,-1
	ctx.r4.s64 = -1;
	// lwz r3,276(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 276);
	// bl 0x82417108
	ctx.lr = 0x832C5E6C;
	sub_82417108(ctx, base);
	// lwz r6,4(r24)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x832c5ea4
	if (cr6.eq) goto loc_832C5EA4;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r4,236(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 236);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x832d4fe0
	ctx.lr = 0x832C5E94;
	sub_832D4FE0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x832c5ea4
	if (!cr0.eq) goto loc_832C5EA4;
	// lis r29,-32768
	ctx.r29.s64 = -2147483648;
	// ori r29,r29,16389
	ctx.r29.u64 = ctx.r29.u64 | 16389;
loc_832C5EA4:
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(ctx.r29.s32, 0, xer);
	// bge cr6,0x832c5eb8
	if (!cr6.lt) goto loc_832C5EB8;
loc_832C5EAC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832c5080
	ctx.lr = 0x832C5EB4;
	sub_832C5080(ctx, base);
loc_832C5EB4:
	// li r31,0
	ctx.r31.s64 = 0;
loc_832C5EB8:
	// stw r31,0(r23)
	PPC_STORE_U32(ctx.r23.u32 + 0, ctx.r31.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832C5EC8"))) PPC_WEAK_FUNC(sub_832C5EC8);
PPC_FUNC_IMPL(__imp__sub_832C5EC8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x832C5ED0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31747
	ctx.r11.s64 = -2080571392;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r31,r11,-29368
	ctx.r31.s64 = ctx.r11.s64 + -29368;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r11,-29368(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29368);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x832c5f08
	if (!cr6.eq) goto loc_832C5F08;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,1164
	ctx.r3.s64 = 1164;
	// bl 0x832c32a8
	ctx.lr = 0x832C5EFC;
	sub_832C32A8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x832c5f20
	if (cr6.eq) goto loc_832C5F20;
loc_832C5F08:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832C5F1C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x832c5f28
	goto loc_832C5F28;
loc_832C5F20:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
loc_832C5F28:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832C5F30"))) PPC_WEAK_FUNC(sub_832C5F30);
PPC_FUNC_IMPL(__imp__sub_832C5F30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// li r11,4
	ctx.r11.s64 = 4;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r10,r10,84
	ctx.r10.s64 = ctx.r10.s64 + 84;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
loc_832C5F48:
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x832c5f68
	if (cr6.eq) goto loc_832C5F68;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addic r8,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// subfe r11,r8,r11
	temp.u8 = (~ctx.r8.u32 + ctx.r11.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r8.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// slw r11,r11,r9
	ctx.r11.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r9.u8 & 0x3F));
	// or r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 | ctx.r3.u64;
loc_832C5F68:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x832c5f48
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_832C5F48;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x832c5ec8
	sub_832C5EC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832C5F7C"))) PPC_WEAK_FUNC(sub_832C5F7C);
PPC_FUNC_IMPL(__imp__sub_832C5F7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832C5F80"))) PPC_WEAK_FUNC(sub_832C5F80);
PPC_FUNC_IMPL(__imp__sub_832C5F80) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,204(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 204);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832C5F88"))) PPC_WEAK_FUNC(sub_832C5F88);
PPC_FUNC_IMPL(__imp__sub_832C5F88) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x83d756fc
	ctx.lr = 0x832C5FA4;
	__imp__XamUserGetDeviceContext(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge 0x832c5fb4
	if (!cr0.lt) goto loc_832C5FB4;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x832c5fbc
	goto loc_832C5FBC;
loc_832C5FB4:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r3,r11,0,0,3
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xF0000000;
loc_832C5FBC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832C5FCC"))) PPC_WEAK_FUNC(sub_832C5FCC);
PPC_FUNC_IMPL(__imp__sub_832C5FCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832C5FD0"))) PPC_WEAK_FUNC(sub_832C5FD0);
PPC_FUNC_IMPL(__imp__sub_832C5FD0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x832C5FD8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,44(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// ble cr6,0x832c6028
	if (!cr6.gt) goto loc_832C6028;
	// addi r29,r3,16
	ctx.r29.s64 = ctx.r3.s64 + 16;
loc_832C5FF8:
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832C600C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplw cr6,r28,r3
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r3.u32, xer);
	// beq cr6,0x832c6034
	if (cr6.eq) goto loc_832C6034;
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, xer);
	// blt cr6,0x832c5ff8
	if (cr6.lt) goto loc_832C5FF8;
loc_832C6028:
	// li r3,0
	ctx.r3.s64 = 0;
loc_832C602C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_832C6034:
	// addi r11,r30,4
	ctx.r11.s64 = ctx.r30.s64 + 4;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// b 0x832c602c
	goto loc_832C602C;
}

__attribute__((alias("__imp__sub_832C6044"))) PPC_WEAK_FUNC(sub_832C6044);
PPC_FUNC_IMPL(__imp__sub_832C6044) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832C6048"))) PPC_WEAK_FUNC(sub_832C6048);
PPC_FUNC_IMPL(__imp__sub_832C6048) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x832C6050;
	__savegprlr_26(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// li r26,0
	ctx.r26.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// mr r28,r26
	ctx.r28.u64 = ctx.r26.u64;
	// mr r27,r26
	ctx.r27.u64 = ctx.r26.u64;
	// beq cr6,0x832c60a4
	if (cr6.eq) goto loc_832C60A4;
	// bl 0x83d7573c
	ctx.lr = 0x832C6074;
	__imp__XamVoiceHeadsetPresent(ctx, base);
	// lwz r11,204(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 204);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x832c6090
	if (cr6.eq) goto loc_832C6090;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x832c6098
	if (cr6.eq) goto loc_832C6098;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x832c60a0
	if (!cr6.eq) goto loc_832C60A0;
loc_832C6090:
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x832c60a0
	if (cr6.eq) goto loc_832C60A0;
loc_832C6098:
	// li r28,1
	ctx.r28.s64 = 1;
	// li r27,1
	ctx.r27.s64 = 1;
loc_832C60A0:
	// stw r3,204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 204, ctx.r3.u32);
loc_832C60A4:
	// bl 0x83d756dc
	ctx.lr = 0x832C60A8;
	__imp__XamVoiceIsActiveProcess(ctx, base);
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// addi r30,r11,22188
	ctx.r30.s64 = ctx.r11.s64 + 22188;
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmpw cr6,r11,r3
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r3.s32, xer);
	// beq cr6,0x832c60d0
	if (cr6.eq) goto loc_832C60D0;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// li r28,1
	ctx.r28.s64 = 1;
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// li r27,1
	ctx.r27.s64 = 1;
	// stw r11,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r11.u32);
loc_832C60D0:
	// lwz r11,156(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	// lwz r11,288(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 288);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x832c60ec
	if (!cr6.eq) goto loc_832C60EC;
	// lwz r11,200(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 200);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x832c626c
	if (cr6.eq) goto loc_832C626C;
loc_832C60EC:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x83d7572c
	ctx.lr = 0x832C60F4;
	__imp__XamUserGetSigninState(ctx, base);
	// lwz r11,200(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 200);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x832c62f8
	if (cr6.eq) goto loc_832C62F8;
	// addi r30,r31,160
	ctx.r30.s64 = ctx.r31.s64 + 160;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824168e8
	ctx.lr = 0x832C6118;
	sub_824168E8(ctx, base);
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(ctx.r29.s32, 0, xer);
	// beq cr6,0x832c6240
	if (cr6.eq) goto loc_832C6240;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x832c6240
	if (!cr6.eq) goto loc_832C6240;
	// lwz r11,188(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 188);
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// stw r26,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r26.u32);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// ble cr6,0x832c626c
	if (!cr6.gt) goto loc_832C626C;
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
loc_832C6144:
	// lwz r11,188(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 188);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// addis r10,r10,-4100
	ctx.r10.s64 = ctx.r10.s64 + -268697600;
	// addic. r10,r10,-12
	xer.ca = ctx.r10.u32 > 11;
	ctx.r10.s64 = ctx.r10.s64 + -12;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x832c6204
	if (cr0.eq) goto loc_832C6204;
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// beq cr6,0x832c61c0
	if (cr6.eq) goto loc_832C61C0;
	// cmplwi cr6,r10,2
	cr6.compare<uint32_t>(ctx.r10.u32, 2, xer);
	// bne cr6,0x832c6224
	if (!cr6.eq) goto loc_832C6224;
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// cmpwi cr6,r10,100
	cr6.compare<int32_t>(ctx.r10.s32, 100, xer);
	// ble cr6,0x832c6184
	if (!cr6.gt) goto loc_832C6184;
	// li r10,100
	ctx.r10.s64 = 100;
	// stw r10,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r10.u32);
loc_832C6184:
	// lwa r10,32(r11)
	ctx.r10.s64 = int32_t(PPC_LOAD_U32(ctx.r11.u32 + 32));
	// lfs f0,196(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	ctx.f0.f64 = double(temp.f32);
	// std r10,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r10.u64);
	// lfd f13,104(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// beq cr6,0x832c6224
	if (cr6.eq) goto loc_832C6224;
	// stb r26,214(r31)
	PPC_STORE_U8(ctx.r31.u32 + 214, ctx.r26.u8);
	// li r28,1
	ctx.r28.s64 = 1;
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r10,212(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 212);
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// b 0x832c6220
	goto loc_832C6220;
loc_832C61C0:
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lwz r10,212(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 212);
	// beq cr6,0x832c61d8
	if (cr6.eq) goto loc_832C61D8;
	// ori r10,r10,2
	ctx.r10.u64 = ctx.r10.u64 | 2;
	// b 0x832c61dc
	goto loc_832C61DC;
loc_832C61D8:
	// rlwinm r10,r10,0,31,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
loc_832C61DC:
	// stw r10,212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 212, ctx.r10.u32);
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// beq cr6,0x832c61f8
	if (cr6.eq) goto loc_832C61F8;
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// b 0x832c61fc
	goto loc_832C61FC;
loc_832C61F8:
	// rlwinm r11,r11,0,30,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
loc_832C61FC:
	// li r27,1
	ctx.r27.s64 = 1;
	// b 0x832c6220
	goto loc_832C6220;
loc_832C6204:
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// lwz r11,212(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 212);
	// beq cr6,0x832c621c
	if (cr6.eq) goto loc_832C621C;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// b 0x832c6220
	goto loc_832C6220;
loc_832C621C:
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
loc_832C6220:
	// stw r11,212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 212, ctx.r11.u32);
loc_832C6224:
	// lwz r11,188(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 188);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r9,r9,40
	ctx.r9.s64 = ctx.r9.s64 + 40;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r8,r11
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, xer);
	// blt cr6,0x832c6144
	if (cr6.lt) goto loc_832C6144;
	// b 0x832c626c
	goto loc_832C626C;
loc_832C6240:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,997
	cr6.compare<uint32_t>(ctx.r11.u32, 997, xer);
	// beq cr6,0x832c626c
	if (cr6.eq) goto loc_832C626C;
	// stw r26,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r26.u32);
loc_832C6250:
	// lis r11,2
	ctx.r11.s64 = 131072;
	// lwz r10,212(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 212);
	// ori r11,r11,25604
	ctx.r11.u64 = ctx.r11.u64 | 25604;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// beq cr6,0x832c626c
	if (cr6.eq) goto loc_832C626C;
	// stw r11,212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 212, ctx.r11.u32);
	// li r28,1
	ctx.r28.s64 = 1;
loc_832C626C:
	// cmpwi cr6,r27,1
	cr6.compare<int32_t>(ctx.r27.s32, 1, xer);
	// bne cr6,0x832c62ac
	if (!cr6.eq) goto loc_832C62AC;
loc_832C6274:
	// li r30,100
	ctx.r30.s64 = 100;
loc_832C6278:
	// lwz r11,156(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	// lwzx r10,r30,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x832c629c
	if (cr6.eq) goto loc_832C629C;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// ld r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// cmpldi cr6,r11,0
	cr6.compare<uint64_t>(ctx.r11.u64, 0, xer);
	// beq cr6,0x832c629c
	if (cr6.eq) goto loc_832C629C;
	// bl 0x832c9dc0
	ctx.lr = 0x832C629C;
	sub_832C9DC0(ctx, base);
loc_832C629C:
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplwi cr6,r30,236
	cr6.compare<uint32_t>(ctx.r30.u32, 236, xer);
	// blt cr6,0x832c6278
	if (cr6.lt) goto loc_832C6278;
	// li r28,1
	ctx.r28.s64 = 1;
loc_832C62AC:
	// cmpwi cr6,r28,1
	cr6.compare<int32_t>(ctx.r28.s32, 1, xer);
	// bne cr6,0x832c62f0
	if (!cr6.eq) goto loc_832C62F0;
	// lwz r11,212(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 212);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,156(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	// rlwinm r11,r11,0,29,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7;
	// stw r11,212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 212, ctx.r11.u32);
	// lbz r11,214(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 214);
	// lfs f0,8976(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8976);
	ctx.f0.f64 = double(temp.f32);
	// std r11,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r11.u64);
	// lfd f13,104(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f0,196(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 196, temp.u32);
	// bl 0x832c4db0
	ctx.lr = 0x832C62F0;
	sub_832C4DB0(ctx, base);
loc_832C62F0:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_832C62F8:
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(ctx.r29.s32, 0, xer);
	// beq cr6,0x832c6250
	if (cr6.eq) goto loc_832C6250;
	// lis r3,-2
	ctx.r3.s64 = -131072;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r31,160
	ctx.r11.s64 = ctx.r31.s64 + 160;
	// lwz r10,188(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 188);
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// addi r9,r31,192
	ctx.r9.s64 = ctx.r31.s64 + 192;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,3
	ctx.r7.s64 = 3;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r3,r3,2001
	ctx.r3.u64 = ctx.r3.u64 | 2001;
	// bl 0x83d7571c
	ctx.lr = 0x832C6330;
	__imp__XamUserReadProfileSettings(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x832c635c
	if (cr0.eq) goto loc_832C635C;
	// cmplwi cr6,r3,997
	cr6.compare<uint32_t>(ctx.r3.u32, 997, xer);
	// beq cr6,0x832c635c
	if (cr6.eq) goto loc_832C635C;
	// lis r11,2
	ctx.r11.s64 = 131072;
	// lwz r10,212(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 212);
	// ori r11,r11,25604
	ctx.r11.u64 = ctx.r11.u64 | 25604;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// beq cr6,0x832c6364
	if (cr6.eq) goto loc_832C6364;
	// stw r11,212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 212, ctx.r11.u32);
	// b 0x832c6364
	goto loc_832C6364;
loc_832C635C:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r11.u32);
loc_832C6364:
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,252
	ctx.r4.s64 = 252;
	// bl 0x83d7570c
	ctx.lr = 0x832C6374;
	__imp__XamUserCheckPrivilege(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x832c63bc
	if (!cr0.eq) goto loc_832C63BC;
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// beq cr6,0x832c63bc
	if (cr6.eq) goto loc_832C63BC;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,251
	ctx.r4.s64 = 251;
	// bl 0x83d7570c
	ctx.lr = 0x832C6398;
	__imp__XamUserCheckPrivilege(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x832c63b4
	if (!cr0.eq) goto loc_832C63B4;
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x832c63b4
	if (!cr6.eq) goto loc_832C63B4;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// b 0x832c63c0
	goto loc_832C63C0;
loc_832C63B4:
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// b 0x832c63c0
	goto loc_832C63C0;
loc_832C63BC:
	// lis r11,2
	ctx.r11.s64 = 131072;
loc_832C63C0:
	// lwz r10,156(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	// lwz r10,36(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x832c63d4
	if (cr6.eq) goto loc_832C63D4;
	// lis r11,2
	ctx.r11.s64 = 131072;
loc_832C63D4:
	// lwz r10,212(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 212);
	// rlwinm r10,r10,0,16,11
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFF0FFFF;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// stw r11,212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 212, ctx.r11.u32);
	// b 0x832c6274
	goto loc_832C6274;
}

__attribute__((alias("__imp__sub_832C63E8"))) PPC_WEAK_FUNC(sub_832C63E8);
PPC_FUNC_IMPL(__imp__sub_832C63E8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdac8
	ctx.lr = 0x832C63F0;
	__savegprlr_20(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r22,0
	ctx.r22.s64 = 0;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// li r20,1
	ctx.r20.s64 = 1;
	// li r21,2
	ctx.r21.s64 = 2;
	// mr r29,r22
	ctx.r29.u64 = ctx.r22.u64;
	// addi r23,r3,84
	ctx.r23.s64 = ctx.r3.s64 + 84;
loc_832C6414:
	// mfmsr r10
	ctx.r10.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r23
	ea = ctx.r23.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r11.u64 = __builtin_bswap32(reserved.u32);
	// cmpw cr6,r11,r20
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r20.s32, xer);
	// bne cr6,0x832c6438
	if (!cr6.eq) goto loc_832C6438;
	// stwcx. r21,0,r23
	ea = ctx.r23.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r21.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r10,1
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x832c6414
	if (!cr0.eq) goto loc_832C6414;
	// b 0x832c6440
	goto loc_832C6440;
loc_832C6438:
	// stwcx. r11,0,r23
	ea = ctx.r23.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r10,1
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
loc_832C6440:
	// mr r11,r11
	ctx.r11.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x832c65c4
	if (!cr6.eq) goto loc_832C65C4;
	// lwz r11,12(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x832c65c0
	if (cr6.eq) goto loc_832C65C0;
	// lwz r11,212(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 212);
	// rlwinm. r11,r11,0,12,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xF0000;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x832c65c0
	if (cr0.eq) goto loc_832C65C0;
	// addi r26,r27,80
	ctx.r26.s64 = ctx.r27.s64 + 80;
	// mr r29,r22
	ctx.r29.u64 = ctx.r22.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// mr r31,r22
	ctx.r31.u64 = ctx.r22.u64;
	// bl 0x83d75e4c
	ctx.lr = 0x832C6478;
	__imp__KfAcquireSpinLock(ctx, base);
	// lwz r11,64(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 64);
	// addi r28,r27,64
	ctx.r28.s64 = ctx.r27.s64 + 64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x832c64a8
	goto loc_832C64A8;
loc_832C6488:
	// cmplw cr6,r31,r25
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r25.u32, xer);
	// bge cr6,0x832c64b0
	if (!cr6.lt) goto loc_832C64B0;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// subf r10,r10,r9
	ctx.r10.s64 = ctx.r9.s64 - ctx.r10.s64;
	// add r31,r10,r31
	ctx.r31.u64 = ctx.r10.u64 + ctx.r31.u64;
loc_832C64A8:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x832c6488
	if (!cr6.eq) goto loc_832C6488;
loc_832C64B0:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x83d75e3c
	ctx.lr = 0x832C64B8;
	__imp__KfReleaseSpinLock(ctx, base);
	// cmplw cr6,r31,r25
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r25.u32, xer);
	// blt cr6,0x832c65c4
	if (cr6.lt) goto loc_832C65C4;
	// lwz r31,0(r28)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// b 0x832c65b4
	goto loc_832C65B4;
loc_832C64C8:
	// cmplw cr6,r29,r25
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r25.u32, xer);
	// bge cr6,0x832c65c4
	if (!cr6.lt) goto loc_832C65C4;
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// beq cr6,0x832c65c4
	if (cr6.eq) goto loc_832C65C4;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// subf r9,r29,r25
	ctx.r9.s64 = ctx.r25.s64 - ctx.r29.s64;
	// mr r30,r9
	ctx.r30.u64 = ctx.r9.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// subf r8,r10,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r10.s64;
	// cmplw cr6,r9,r8
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, xer);
	// blt cr6,0x832c6500
	if (cr6.lt) goto loc_832C6500;
	// mr r30,r8
	ctx.r30.u64 = ctx.r8.u64;
loc_832C6500:
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// add r4,r29,r24
	ctx.r4.u64 = ctx.r29.u64 + ctx.r24.u64;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x831ce980
	ctx.lr = 0x832C6514;
	sub_831CE980(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// add r9,r9,r30
	ctx.r9.u64 = ctx.r9.u64 + ctx.r30.u64;
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// bge cr6,0x832c6530
	if (!cr6.lt) goto loc_832C6530;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_832C6530:
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// bne cr6,0x832c65b0
	if (!cr6.eq) goto loc_832C65B0;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x83d75e4c
	ctx.lr = 0x832C654C;
	__imp__KfAcquireSpinLock(ctx, base);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x832c6578
	if (cr6.eq) goto loc_832C6578;
	// lwz r10,4(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x832c656c
	if (!cr6.eq) goto loc_832C656C;
	// stw r22,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r22.u32);
loc_832C656C:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r10.u32);
	// stw r22,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r22.u32);
loc_832C6578:
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// bne cr6,0x832c65a4
	if (!cr6.eq) goto loc_832C65A4;
	// stw r22,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r22.u32);
	// addi r11,r27,72
	ctx.r11.s64 = ctx.r27.s64 + 72;
	// lwz r10,76(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 76);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x832c659c
	if (cr6.eq) goto loc_832C659C;
	// stw r31,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r31.u32);
	// b 0x832c65a0
	goto loc_832C65A0;
loc_832C659C:
	// stw r31,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
loc_832C65A0:
	// stw r31,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r31.u32);
loc_832C65A4:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x83d75e3c
	ctx.lr = 0x832C65AC;
	__imp__KfReleaseSpinLock(ctx, base);
	// lwz r31,0(r28)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
loc_832C65B0:
	// add r29,r30,r29
	ctx.r29.u64 = ctx.r30.u64 + ctx.r29.u64;
loc_832C65B4:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// bne cr6,0x832c64c8
	if (!cr6.eq) goto loc_832C64C8;
	// b 0x832c65c4
	goto loc_832C65C4;
loc_832C65C0:
	// mr r29,r25
	ctx.r29.u64 = ctx.r25.u64;
loc_832C65C4:
	// li r10,3
	ctx.r10.s64 = 3;
loc_832C65C8:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r23
	ea = ctx.r23.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r11.u64 = __builtin_bswap32(reserved.u32);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, xer);
	// bne cr6,0x832c65ec
	if (!cr6.eq) goto loc_832C65EC;
	// stwcx. r22,0,r23
	ea = ctx.r23.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r22.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x832c65c8
	if (!cr0.eq) goto loc_832C65C8;
	// b 0x832c666c
	goto loc_832C666C;
loc_832C65EC:
	// stwcx. r11,0,r23
	ea = ctx.r23.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// b 0x832c666c
	goto loc_832C666C;
loc_832C65F8:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r23
	ea = ctx.r23.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r11.u64 = __builtin_bswap32(reserved.u32);
	// cmpw cr6,r11,r21
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r21.s32, xer);
	// bne cr6,0x832c661c
	if (!cr6.eq) goto loc_832C661C;
	// stwcx. r20,0,r23
	ea = ctx.r23.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r20.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x832c65f8
	if (!cr0.eq) goto loc_832C65F8;
	// b 0x832c6624
	goto loc_832C6624;
loc_832C661C:
	// stwcx. r11,0,r23
	ea = ctx.r23.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
loc_832C6624:
	// mr r11,r11
	ctx.r11.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// beq cr6,0x832c6678
	if (cr6.eq) goto loc_832C6678;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// beq cr6,0x832c6678
	if (cr6.eq) goto loc_832C6678;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x832c6678
	if (cr6.eq) goto loc_832C6678;
loc_832C6640:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r23
	ea = ctx.r23.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r11.u64 = __builtin_bswap32(reserved.u32);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, xer);
	// bne cr6,0x832c6664
	if (!cr6.eq) goto loc_832C6664;
	// stwcx. r22,0,r23
	ea = ctx.r23.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r22.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x832c6640
	if (!cr0.eq) goto loc_832C6640;
	// b 0x832c666c
	goto loc_832C666C;
loc_832C6664:
	// stwcx. r11,0,r23
	ea = ctx.r23.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
loc_832C666C:
	// mr r11,r11
	ctx.r11.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// bne cr6,0x832c65f8
	if (!cr6.eq) goto loc_832C65F8;
loc_832C6678:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb18
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832C6684"))) PPC_WEAK_FUNC(sub_832C6684);
PPC_FUNC_IMPL(__imp__sub_832C6684) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832C6688"))) PPC_WEAK_FUNC(sub_832C6688);
PPC_FUNC_IMPL(__imp__sub_832C6688) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x832C6690;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r3,160
	ctx.r3.s64 = ctx.r3.s64 + 160;
	// addi r30,r31,84
	ctx.r30.s64 = ctx.r31.s64 + 84;
	// bl 0x83d7575c
	ctx.lr = 0x832C66A8;
	__imp__XMsgCancelIORequest(ctx, base);
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// li r29,1
	ctx.r29.s64 = 1;
	// li r28,0
	ctx.r28.s64 = 0;
	// b 0x832c6728
	goto loc_832C6728;
loc_832C66B8:
	// li r11,2
	ctx.r11.s64 = 2;
	// li r8,3
	ctx.r8.s64 = 3;
loc_832C66C0:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r30
	ea = ctx.r30.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, xer);
	// bne cr6,0x832c66e4
	if (!cr6.eq) goto loc_832C66E4;
	// stwcx. r8,0,r30
	ea = ctx.r30.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r8.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x832c66c0
	if (!cr0.eq) goto loc_832C66C0;
	// b 0x832c66ec
	goto loc_832C66EC;
loc_832C66E4:
	// stwcx. r10,0,r30
	ea = ctx.r30.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
loc_832C66EC:
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmplwi cr6,r10,2
	cr6.compare<uint32_t>(ctx.r10.u32, 2, xer);
	// beq cr6,0x832c6734
	if (cr6.eq) goto loc_832C6734;
loc_832C66F8:
	// mfmsr r10
	ctx.r10.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r30
	ea = ctx.r30.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r11.u64 = __builtin_bswap32(reserved.u32);
	// cmpw cr6,r11,r29
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r29.s32, xer);
	// bne cr6,0x832c671c
	if (!cr6.eq) goto loc_832C671C;
	// stwcx. r28,0,r30
	ea = ctx.r30.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r28.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r10,1
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x832c66f8
	if (!cr0.eq) goto loc_832C66F8;
	// b 0x832c6724
	goto loc_832C6724;
loc_832C671C:
	// stwcx. r11,0,r30
	ea = ctx.r30.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r10,1
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
loc_832C6724:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_832C6728:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x832c66b8
	if (!cr6.eq) goto loc_832C66B8;
	// b 0x832c6740
	goto loc_832C6740;
loc_832C6734:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x832c6734
	if (!cr6.eq) goto loc_832C6734;
loc_832C6740:
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x832c6754
	if (cr6.eq) goto loc_832C6754;
	// bl 0x83d7574c
	ctx.lr = 0x832C6750;
	__imp__XamVoiceClose(ctx, base);
	// stw r28,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r28.u32);
loc_832C6754:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x832cc338
	ctx.lr = 0x832C675C;
	sub_832CC338(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r3,156(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lfs f0,9008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,196(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 196, temp.u32);
	// bl 0x832c4db0
	ctx.lr = 0x832C6774;
	sub_832C4DB0(ctx, base);
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
	// lwz r3,156(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	// bl 0x832c5f30
	ctx.lr = 0x832C6780;
	sub_832C5F30(ctx, base);
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// ble cr6,0x832c67bc
	if (!cr6.gt) goto loc_832C67BC;
	// addi r29,r31,32
	ctx.r29.s64 = ctx.r31.s64 + 32;
loc_832C6794:
	// lwz r3,-16(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -16);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832C67A8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// stwu r28,4(r29)
	ea = 4 + ctx.r29.u32;
	PPC_STORE_U32(ea, ctx.r28.u32);
	ctx.r29.u32 = ea;
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, xer);
	// blt cr6,0x832c6794
	if (cr6.lt) goto loc_832C6794;
loc_832C67BC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832C67C4"))) PPC_WEAK_FUNC(sub_832C67C4);
PPC_FUNC_IMPL(__imp__sub_832C67C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832C67C8"))) PPC_WEAK_FUNC(sub_832C67C8);
PPC_FUNC_IMPL(__imp__sub_832C67C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x832C67D0;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r26,-32761
	ctx.r26.s64 = -2147024896;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// ori r26,r26,87
	ctx.r26.u64 = ctx.r26.u64 | 87;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x832c6854
	if (cr6.eq) goto loc_832C6854;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r30,r3,36
	ctx.r30.s64 = ctx.r3.s64 + 36;
loc_832C67F8:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x832c5fd0
	ctx.lr = 0x832C6804;
	sub_832C5FD0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x832c6854
	if (cr0.eq) goto loc_832C6854;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832C681C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// mr. r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r26.s32, 0, xer);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// blt 0x832c6844
	if (cr0.lt) goto loc_832C6844;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplw cr6,r29,r27
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r27.u32, xer);
	// blt cr6,0x832c67f8
	if (cr6.lt) goto loc_832C67F8;
	// b 0x832c6854
	goto loc_832C6854;
loc_832C6844:
	// addi r11,r29,9
	ctx.r11.s64 = ctx.r29.s64 + 9;
	// li r10,0
	ctx.r10.s64 = 0;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r10,r11,r28
	PPC_STORE_U32(ctx.r11.u32 + ctx.r28.u32, ctx.r10.u32);
loc_832C6854:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832C6860"))) PPC_WEAK_FUNC(sub_832C6860);
PPC_FUNC_IMPL(__imp__sub_832C6860) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x832C6868;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x832c68d8
	if (cr6.eq) goto loc_832C68D8;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// addi r30,r3,36
	ctx.r30.s64 = ctx.r3.s64 + 36;
	// subf r27,r5,r4
	ctx.r27.s64 = ctx.r4.s64 - ctx.r5.s64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
loc_832C6888:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwzx r4,r27,r31
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r31.u32);
	// bl 0x832c5fd0
	ctx.lr = 0x832C6894;
	sub_832C5FD0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x832c68c0
	if (cr0.eq) goto loc_832C68C0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x832c68c0
	if (cr6.eq) goto loc_832C68C0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832C68B8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x832c68c4
	goto loc_832C68C4;
loc_832C68C0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_832C68C4:
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// addic. r29,r29,-1
	xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// bne 0x832c6888
	if (!cr0.eq) goto loc_832C6888;
loc_832C68D8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832C68E0"))) PPC_WEAK_FUNC(sub_832C68E0);
PPC_FUNC_IMPL(__imp__sub_832C68E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x832C68E8;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r26,-32761
	ctx.r26.s64 = -2147024896;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// ori r26,r26,87
	ctx.r26.u64 = ctx.r26.u64 | 87;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x832c696c
	if (cr6.eq) goto loc_832C696C;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r31,r3,36
	ctx.r31.s64 = ctx.r3.s64 + 36;
loc_832C6910:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x832c5fd0
	ctx.lr = 0x832C691C;
	sub_832C5FD0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x832c696c
	if (cr0.eq) goto loc_832C696C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832C6934;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr. r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r26.s32, 0, xer);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// blt 0x832c695c
	if (cr0.lt) goto loc_832C695C;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplw cr6,r29,r27
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r27.u32, xer);
	// blt cr6,0x832c6910
	if (cr6.lt) goto loc_832C6910;
	// b 0x832c696c
	goto loc_832C696C;
loc_832C695C:
	// addi r11,r29,9
	ctx.r11.s64 = ctx.r29.s64 + 9;
	// li r10,1
	ctx.r10.s64 = 1;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r10,r11,r28
	PPC_STORE_U32(ctx.r11.u32 + ctx.r28.u32, ctx.r10.u32);
loc_832C696C:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832C6978"))) PPC_WEAK_FUNC(sub_832C6978);
PPC_FUNC_IMPL(__imp__sub_832C6978) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x832C6980;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,44(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// li r25,0
	ctx.r25.s64 = 0;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// mr r28,r25
	ctx.r28.u64 = ctx.r25.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// beq cr6,0x832c6a10
	if (cr6.eq) goto loc_832C6A10;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// addi r31,r3,36
	ctx.r31.s64 = ctx.r3.s64 + 36;
	// subf r27,r5,r4
	ctx.r27.s64 = ctx.r4.s64 - ctx.r5.s64;
loc_832C69AC:
	// lwz r29,-20(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + -20);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832C69C4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stwx r3,r27,r30
	PPC_STORE_U32(ctx.r27.u32 + ctx.r30.u32, ctx.r3.u32);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x832c69f4
	if (cr6.eq) goto loc_832C69F4;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832C69EC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r25,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r25.u32);
	// b 0x832c69f8
	goto loc_832C69F8;
loc_832C69F4:
	// stw r25,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r25.u32);
loc_832C69F8:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplw cr6,r28,r11
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, xer);
	// blt cr6,0x832c69ac
	if (cr6.lt) goto loc_832C69AC;
loc_832C6A10:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832C6A18"))) PPC_WEAK_FUNC(sub_832C6A18);
PPC_FUNC_IMPL(__imp__sub_832C6A18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x832C6A20;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// bl 0x832c6048
	ctx.lr = 0x832C6A2C;
	sub_832C6048(ctx, base);
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x832c6a40
	if (!cr6.eq) goto loc_832C6A40;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x832c6c68
	goto loc_832C6C68;
loc_832C6A40:
	// lwz r31,88(r26)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r26.u32 + 88);
	// addi r29,r26,88
	ctx.r29.s64 = ctx.r26.s64 + 88;
	// li r25,0
	ctx.r25.s64 = 0;
	// b 0x832c6af4
	goto loc_832C6AF4;
loc_832C6A50:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r11,259
	cr6.compare<int32_t>(ctx.r11.s32, 259, xer);
	// beq cr6,0x832c6afc
	if (cr6.eq) goto loc_832C6AFC;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x832c6a88
	if (cr6.eq) goto loc_832C6A88;
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x832c6a7c
	if (!cr6.eq) goto loc_832C6A7C;
	// stw r25,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r25.u32);
loc_832C6A7C:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r10.u32);
	// stw r25,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r25.u32);
loc_832C6A88:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmpwi cr6,r10,1
	cr6.compare<int32_t>(ctx.r10.s32, 1, xer);
	// bne cr6,0x832c6aac
	if (!cr6.eq) goto loc_832C6AAC;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r25,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r25.u32);
loc_832C6AAC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r30,r26,80
	ctx.r30.s64 = ctx.r26.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r25,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r25.u32);
	// bl 0x83d75e4c
	ctx.lr = 0x832C6AC0;
	__imp__KfAcquireSpinLock(ctx, base);
	// stw r25,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r25.u32);
	// lwz r10,68(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 68);
	// addi r11,r26,64
	ctx.r11.s64 = ctx.r26.s64 + 64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x832c6ae0
	if (cr6.eq) goto loc_832C6AE0;
	// stw r31,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r31.u32);
	// b 0x832c6ae4
	goto loc_832C6AE4;
loc_832C6AE0:
	// stw r31,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
loc_832C6AE4:
	// stw r31,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r31.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83d75e3c
	ctx.lr = 0x832C6AF0;
	__imp__KfReleaseSpinLock(ctx, base);
	// lwz r31,0(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
loc_832C6AF4:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// bne cr6,0x832c6a50
	if (!cr6.eq) goto loc_832C6A50;
loc_832C6AFC:
	// lwz r31,72(r26)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r26.u32 + 72);
	// addi r27,r26,72
	ctx.r27.s64 = ctx.r26.s64 + 72;
	// b 0x832c6bf8
	goto loc_832C6BF8;
loc_832C6B08:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// subf. r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne 0x832c6c1c
	if (!cr0.eq) goto loc_832C6C1C;
	// addi r30,r26,80
	ctx.r30.s64 = ctx.r26.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83d75e4c
	ctx.lr = 0x832C6B28;
	__imp__KfAcquireSpinLock(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x832c7bf0
	ctx.lr = 0x832C6B34;
	sub_832C7BF0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x832c6b4c
	if (!cr0.eq) goto loc_832C6B4C;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x832c7bf0
	ctx.lr = 0x832C6B44;
	sub_832C7BF0(ctx, base);
	// cmplwi cr6,r3,1
	cr6.compare<uint32_t>(ctx.r3.u32, 1, xer);
	// ble cr6,0x832c6c04
	if (!cr6.gt) goto loc_832C6C04;
loc_832C6B4C:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x832c6b74
	if (cr6.eq) goto loc_832C6B74;
	// lwz r10,4(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x832c6b68
	if (!cr6.eq) goto loc_832C6B68;
	// stw r25,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r25.u32);
loc_832C6B68:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r10.u32);
	// stw r25,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r25.u32);
loc_832C6B74:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83d75e3c
	ctx.lr = 0x832C6B80;
	__imp__KfReleaseSpinLock(ctx, base);
	// stw r25,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r25.u32);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x832c6b98
	if (cr6.eq) goto loc_832C6B98;
	// stw r31,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r31.u32);
	// b 0x832c6b9c
	goto loc_832C6B9C;
loc_832C6B98:
	// stw r31,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r31.u32);
loc_832C6B9C:
	// stw r31,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r31.u32);
	// addi r7,r26,96
	ctx.r7.s64 = ctx.r26.s64 + 96;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r4,8(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// rlwinm r6,r11,31,1,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// bl 0x832ca9c8
	ctx.lr = 0x832C6BC0;
	sub_832CA9C8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// rlwinm r9,r9,30,2,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x3FFFFFFF;
	// stw r9,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r9.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r3,12(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 12);
	// bl 0x83d7576c
	ctx.lr = 0x832C6BEC;
	__imp__XamVoiceSubmitPacket(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x832c6c14
	if (cr0.lt) goto loc_832C6C14;
	// lwz r31,0(r27)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
loc_832C6BF8:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// bne cr6,0x832c6b08
	if (!cr6.eq) goto loc_832C6B08;
	// b 0x832c6c1c
	goto loc_832C6C1C;
loc_832C6C04:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83d75e3c
	ctx.lr = 0x832C6C10;
	__imp__KfReleaseSpinLock(ctx, base);
	// b 0x832c6c1c
	goto loc_832C6C1C;
loc_832C6C14:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r25,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r25.u32);
loc_832C6C1C:
	// lwz r3,8(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// bl 0x832cc3f8
	ctx.lr = 0x832C6C24;
	sub_832CC3F8(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// blt 0x832c6c64
	if (cr0.lt) goto loc_832C6C64;
	// lwz r11,44(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 44);
	// mr r31,r25
	ctx.r31.u64 = ctx.r25.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// ble cr6,0x832c6c64
	if (!cr6.gt) goto loc_832C6C64;
	// addi r30,r26,12
	ctx.r30.s64 = ctx.r26.s64 + 12;
loc_832C6C40:
	// lwzu r3,4(r30)
	ea = 4 + ctx.r30.u32;
	ctx.r3.u64 = PPC_LOAD_U32(ea);
	ctx.r30.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832C6C54;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,44(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 44);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// blt cr6,0x832c6c40
	if (cr6.lt) goto loc_832C6C40;
loc_832C6C64:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_832C6C68:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832C6C70"))) PPC_WEAK_FUNC(sub_832C6C70);
PPC_FUNC_IMPL(__imp__sub_832C6C70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x832C6C78;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-32761
	ctx.r31.s64 = -2147024896;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// ori r31,r31,87
	ctx.r31.u64 = ctx.r31.u64 | 87;
	// bl 0x832c5fd0
	ctx.lr = 0x832C6C94;
	sub_832C5FD0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x832c6cbc
	if (cr0.eq) goto loc_832C6CBC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832C6CB8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_832C6CBC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832C6CC8"))) PPC_WEAK_FUNC(sub_832C6CC8);
PPC_FUNC_IMPL(__imp__sub_832C6CC8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x832C6CD0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r5,12
	ctx.r5.s64 = 12;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x832d27b0
	ctx.lr = 0x832C6CEC;
	sub_832D27B0(ctx, base);
	// lwz r11,56(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 56);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// ble cr6,0x832c6d5c
	if (!cr6.gt) goto loc_832C6D5C;
	// addi r31,r28,48
	ctx.r31.s64 = ctx.r28.s64 + 48;
loc_832C6D00:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r10,r11,16
	ctx.r10.s64 = ctx.r11.s64 + 16;
	// lwz r8,24(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// lwz r29,12(r8)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
loc_832C6D14:
	// lwz r8,-8(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + -8);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x832c6d2c
	if (cr6.eq) goto loc_832C6D2C;
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r8,1
	cr6.compare<int32_t>(ctx.r8.s32, 1, xer);
	// beq cr6,0x832c6d64
	if (cr6.eq) goto loc_832C6D64;
loc_832C6D2C:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplwi cr6,r9,2
	cr6.compare<uint32_t>(ctx.r9.u32, 2, xer);
	// blt cr6,0x832c6d14
	if (cr6.lt) goto loc_832C6D14;
	// li r3,0
	ctx.r3.s64 = 0;
loc_832C6D40:
	// rlwinm r11,r29,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// stwx r3,r11,r27
	PPC_STORE_U32(ctx.r11.u32 + ctx.r27.u32, ctx.r3.u32);
	// lwz r11,56(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 56);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, xer);
	// blt cr6,0x832c6d00
	if (cr6.lt) goto loc_832C6D00;
loc_832C6D5C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_832C6D64:
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// bl 0x832c7bf0
	ctx.lr = 0x832C6D70;
	sub_832C7BF0(ctx, base);
	// b 0x832c6d40
	goto loc_832C6D40;
}

__attribute__((alias("__imp__sub_832C6D74"))) PPC_WEAK_FUNC(sub_832C6D74);
PPC_FUNC_IMPL(__imp__sub_832C6D74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832C6D78"))) PPC_WEAK_FUNC(sub_832C6D78);
PPC_FUNC_IMPL(__imp__sub_832C6D78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x832C6D80;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x832c6e60
	if (cr6.eq) goto loc_832C6E60;
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x832c6da8
	if (cr6.eq) goto loc_832C6DA8;
	// bl 0x83d7574c
	ctx.lr = 0x832C6DA4;
	__imp__XamVoiceClose(ctx, base);
	// stw r28,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r28.u32);
loc_832C6DA8:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x832cc890
	ctx.lr = 0x832C6DB0;
	sub_832CC890(ctx, base);
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// stw r28,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r28.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// ble cr6,0x832c6de4
	if (!cr6.gt) goto loc_832C6DE4;
	// addi r30,r31,44
	ctx.r30.s64 = ctx.r31.s64 + 44;
loc_832C6DC8:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x832c7a60
	ctx.lr = 0x832C6DD0;
	sub_832C7A60(ctx, base);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// stwu r28,4(r30)
	ea = 4 + ctx.r30.u32;
	PPC_STORE_U32(ea, ctx.r28.u32);
	ctx.r30.u32 = ea;
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, xer);
	// blt cr6,0x832c6dc8
	if (cr6.lt) goto loc_832C6DC8;
loc_832C6DE4:
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// ble cr6,0x832c6e20
	if (!cr6.gt) goto loc_832C6E20;
	// addi r30,r31,12
	ctx.r30.s64 = ctx.r31.s64 + 12;
loc_832C6DF8:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832C6E0C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// stwu r28,4(r30)
	ea = 4 + ctx.r30.u32;
	PPC_STORE_U32(ea, ctx.r28.u32);
	ctx.r30.u32 = ea;
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, xer);
	// blt cr6,0x832c6df8
	if (cr6.lt) goto loc_832C6DF8;
loc_832C6E20:
	// lwz r3,60(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// bl 0x832c7d90
	ctx.lr = 0x832C6E28;
	sub_832C7D90(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r31,160
	ctx.r3.s64 = ctx.r31.s64 + 160;
	// bl 0x83d7575c
	ctx.lr = 0x832C6E34;
	__imp__XMsgCancelIORequest(ctx, base);
	// lwz r3,188(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 188);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x832c6e50
	if (cr6.eq) goto loc_832C6E50;
	// lis r4,24714
	ctx.r4.s64 = 1619656704;
	// ori r4,r4,8194
	ctx.r4.u64 = ctx.r4.u64 | 8194;
	// bl 0x832d53c8
	ctx.lr = 0x832C6E4C;
	sub_832D53C8(ctx, base);
	// stw r28,188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 188, ctx.r28.u32);
loc_832C6E50:
	// lis r4,24970
	ctx.r4.s64 = 1636433920;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r4,r4,32779
	ctx.r4.u64 = ctx.r4.u64 | 32779;
	// bl 0x832d53c8
	ctx.lr = 0x832C6E60;
	sub_832D53C8(ctx, base);
loc_832C6E60:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832C6E68"))) PPC_WEAK_FUNC(sub_832C6E68);
PPC_FUNC_IMPL(__imp__sub_832C6E68) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x832C6E70;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x832c6688
	ctx.lr = 0x832C6E80;
	sub_832C6688(ctx, base);
	// addi r28,r31,12
	ctx.r28.s64 = ctx.r31.s64 + 12;
	// li r4,15
	ctx.r4.s64 = 15;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83d7577c
	ctx.lr = 0x832C6E94;
	__imp__XamVoiceCreate(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// li r27,0
	ctx.r27.s64 = 0;
	// blt 0x832c6f08
	if (cr0.lt) goto loc_832C6F08;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x832cc990
	ctx.lr = 0x832C6EAC;
	sub_832CC990(ctx, base);
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// stw r27,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r27.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r3,156(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	// bl 0x832c5f30
	ctx.lr = 0x832C6EC0;
	sub_832C5F30(ctx, base);
	// lis r11,2
	ctx.r11.s64 = 131072;
	// li r8,1
	ctx.r8.s64 = 1;
	// ori r11,r11,25604
	ctx.r11.u64 = ctx.r11.u64 | 25604;
	// addi r7,r31,84
	ctx.r7.s64 = ctx.r31.s64 + 84;
	// stw r11,212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 212, ctx.r11.u32);
loc_832C6ED4:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r7
	ea = ctx.r7.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// stwcx. r8,0,r7
	ea = ctx.r7.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r8.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x832c6ed4
	if (!cr0.eq) goto loc_832C6ED4;
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// addi r4,r11,-18488
	ctx.r4.s64 = ctx.r11.s64 + -18488;
	// li r5,54
	ctx.r5.s64 = 54;
	// bl 0x831ce980
	ctx.lr = 0x832C6F00;
	sub_831CE980(ctx, base);
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(ctx.r29.s32, 0, xer);
	// bge cr6,0x832c6f1c
	if (!cr6.lt) goto loc_832C6F1C;
loc_832C6F08:
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x832c6f1c
	if (cr6.eq) goto loc_832C6F1C;
	// bl 0x83d7574c
	ctx.lr = 0x832C6F18;
	__imp__XamVoiceClose(ctx, base);
	// stw r27,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r27.u32);
loc_832C6F1C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832C6F28"))) PPC_WEAK_FUNC(sub_832C6F28);
PPC_FUNC_IMPL(__imp__sub_832C6F28) {
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
	ctx.lr = 0x832C6F30;
	__savegprlr_19(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// lis r4,24970
	ctx.r4.s64 = 1636433920;
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// li r3,480
	ctx.r3.s64 = 480;
	// ori r4,r4,32779
	ctx.r4.u64 = ctx.r4.u64 | 32779;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r20,r6
	ctx.r20.u64 = ctx.r6.u64;
	// mr r19,r7
	ctx.r19.u64 = ctx.r7.u64;
	// bl 0x832d5290
	ctx.lr = 0x832C6F58;
	sub_832D5290(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// li r21,0
	ctx.r21.s64 = 0;
	// bne 0x832c6f70
	if (!cr0.eq) goto loc_832C6F70;
loc_832C6F64:
	// lis r24,-32761
	ctx.r24.s64 = -2147024896;
	// ori r24,r24,14
	ctx.r24.u64 = ctx.r24.u64 | 14;
	// b 0x832c729c
	goto loc_832C729C;
loc_832C6F70:
	// lis r11,2
	ctx.r11.s64 = 131072;
	// stw r22,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r22.u32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stw r21,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r21.u32);
	// ori r11,r11,25604
	ctx.r11.u64 = ctx.r11.u64 | 25604;
	// stw r21,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r21.u32);
	// addi r30,r31,192
	ctx.r30.s64 = ctx.r31.s64 + 192;
	// stw r11,212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 212, ctx.r11.u32);
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// lbz r9,214(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 214);
	// lis r3,-2
	ctx.r3.s64 = -131072;
	// std r9,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r9.u64);
	// lfd f0,104(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// addi r8,r11,22188
	ctx.r8.s64 = ctx.r11.s64 + 22188;
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// li r7,3
	ctx.r7.s64 = 3;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,255
	ctx.r4.s64 = 255;
	// ori r3,r3,2001
	ctx.r3.u64 = ctx.r3.u64 | 2001;
	// frsp f13,f0
	ctx.f13.f64 = double(float(ctx.f0.f64));
	// lfs f0,8976(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8976);
	ctx.f0.f64 = double(temp.f32);
	// li r10,0
	ctx.r10.s64 = 0;
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f0,196(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 196, temp.u32);
	// bl 0x83d7571c
	ctx.lr = 0x832C6FDC;
	__imp__XamUserReadProfileSettings(ctx, base);
	// cmplwi cr6,r3,122
	cr6.compare<uint32_t>(ctx.r3.u32, 122, xer);
	// beq cr6,0x832c6ff0
	if (cr6.eq) goto loc_832C6FF0;
	// lis r24,-32768
	ctx.r24.s64 = -2147483648;
	// ori r24,r24,16389
	ctx.r24.u64 = ctx.r24.u64 | 16389;
	// b 0x832c729c
	goto loc_832C729C;
loc_832C6FF0:
	// lis r4,24714
	ctx.r4.s64 = 1619656704;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// ori r4,r4,8194
	ctx.r4.u64 = ctx.r4.u64 | 8194;
	// bl 0x832d5290
	ctx.lr = 0x832C7000;
	sub_832D5290(ctx, base);
	// stw r3,188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 188, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x832c6f64
	if (cr0.eq) goto loc_832C6F64;
	// addi r30,r31,60
	ctx.r30.s64 = ctx.r31.s64 + 60;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// li r5,5
	ctx.r5.s64 = 5;
	// li r4,32
	ctx.r4.s64 = 32;
	// li r3,256
	ctx.r3.s64 = 256;
	// bl 0x832c7ed8
	ctx.lr = 0x832C7028;
	sub_832C7ED8(ctx, base);
	// mr. r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r24.s32, 0, xer);
	// blt 0x832c729c
	if (cr0.lt) goto loc_832C729C;
	// li r11,5
	ctx.r11.s64 = 5;
	// addi r9,r31,64
	ctx.r9.s64 = ctx.r31.s64 + 64;
	// mr r8,r21
	ctx.r8.u64 = ctx.r21.u64;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
loc_832C7040:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mullw r10,r10,r8
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r8.s32);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r11,r10,24
	ctx.r11.s64 = ctx.r10.s64 + 24;
	// stw r10,24(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24, ctx.r10.u32);
	// stw r21,28(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28, ctx.r21.u32);
	// lwz r10,4(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x832c7074
	if (cr6.eq) goto loc_832C7074;
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// b 0x832c7078
	goto loc_832C7078;
loc_832C7074:
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_832C7078:
	// stw r11,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r11.u32);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// bdnz 0x832c7040
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_832C7040;
	// li r5,24
	ctx.r5.s64 = 24;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x832d27b0
	ctx.lr = 0x832C7094;
	sub_832D27B0(ctx, base);
	// li r5,12
	ctx.r5.s64 = 12;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x832d27b0
	ctx.lr = 0x832C70A4;
	sub_832D27B0(ctx, base);
	// mr r29,r21
	ctx.r29.u64 = ctx.r21.u64;
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, xer);
	// beq cr6,0x832c7138
	if (cr6.eq) goto loc_832C7138;
	// addi r30,r31,16
	ctx.r30.s64 = ctx.r31.s64 + 16;
loc_832C70B4:
	// cmplwi cr6,r29,2
	cr6.compare<uint32_t>(ctx.r29.u32, 2, xer);
	// bge cr6,0x832c7138
	if (!cr6.lt) goto loc_832C7138;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832C70D8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr. r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r24.s32, 0, xer);
	// blt 0x832c7138
	if (cr0.lt) goto loc_832C7138;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832C70F8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// addi r8,r1,128
	ctx.r8.s64 = ctx.r1.s64 + 128;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// rlwinm r7,r10,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 + ctx.r29.u64;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// stwx r11,r7,r9
	PPC_STORE_U32(ctx.r7.u32 + ctx.r9.u32, ctx.r11.u32);
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplw cr6,r29,r27
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r27.u32, xer);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// stwx r10,r11,r8
	PPC_STORE_U32(ctx.r11.u32 + ctx.r8.u32, ctx.r10.u32);
	// blt cr6,0x832c70b4
	if (cr6.lt) goto loc_832C70B4;
loc_832C7138:
	// addi r11,r31,44
	ctx.r11.s64 = ctx.r31.s64 + 44;
	// stw r29,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r29.u32);
	// cmpwi cr6,r24,0
	cr6.compare<int32_t>(ctx.r24.s32, 0, xer);
	// blt cr6,0x832c729c
	if (cr6.lt) goto loc_832C729C;
	// mr r26,r21
	ctx.r26.u64 = ctx.r21.u64;
	// mr r25,r21
	ctx.r25.u64 = ctx.r21.u64;
	// addi r23,r1,112
	ctx.r23.s64 = ctx.r1.s64 + 112;
	// mr r27,r11
	ctx.r27.u64 = ctx.r11.u64;
loc_832C7158:
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// mr r29,r21
	ctx.r29.u64 = ctx.r21.u64;
	// bl 0x832d27b0
	ctx.lr = 0x832C716C;
	sub_832D27B0(ctx, base);
	// addi r11,r1,104
	ctx.r11.s64 = ctx.r1.s64 + 104;
	// mr r30,r21
	ctx.r30.u64 = ctx.r21.u64;
	// addi r28,r11,-4
	ctx.r28.s64 = ctx.r11.s64 + -4;
loc_832C7178:
	// add r11,r25,r30
	ctx.r11.u64 = ctx.r25.u64 + ctx.r30.u64;
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x832c71b0
	if (cr6.eq) goto loc_832C71B0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832C71A4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// stwu r11,4(r28)
	ea = 4 + ctx.r28.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r28.u32 = ea;
loc_832C71B0:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplwi cr6,r30,2
	cr6.compare<uint32_t>(ctx.r30.u32, 2, xer);
	// blt cr6,0x832c7178
	if (cr6.lt) goto loc_832C7178;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x832c7240
	if (cr6.eq) goto loc_832C7240;
	// addi r7,r27,4
	ctx.r7.s64 = ctx.r27.s64 + 4;
	// lwz r4,0(r23)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// addi r6,r1,104
	ctx.r6.s64 = ctx.r1.s64 + 104;
	// li r5,10
	ctx.r5.s64 = 10;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x832c7b08
	ctx.lr = 0x832C71DC;
	sub_832C7B08(ctx, base);
	// mr. r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r24.s32, 0, xer);
	// blt 0x832c7250
	if (cr0.lt) goto loc_832C7250;
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// mr r30,r21
	ctx.r30.u64 = ctx.r21.u64;
	// mr r29,r21
	ctx.r29.u64 = ctx.r21.u64;
loc_832C71F4:
	// add r11,r25,r29
	ctx.r11.u64 = ctx.r25.u64 + ctx.r29.u64;
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x832c7234
	if (cr6.eq) goto loc_832C7234;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// lwz r5,0(r27)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832C7228;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr. r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r24.s32, 0, xer);
	// blt 0x832c7250
	if (cr0.lt) goto loc_832C7250;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
loc_832C7234:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmplwi cr6,r29,2
	cr6.compare<uint32_t>(ctx.r29.u32, 2, xer);
	// blt cr6,0x832c71f4
	if (cr6.lt) goto loc_832C71F4;
loc_832C7240:
	// addi r25,r25,2
	ctx.r25.s64 = ctx.r25.s64 + 2;
	// addi r23,r23,4
	ctx.r23.s64 = ctx.r23.s64 + 4;
	// cmplwi cr6,r25,6
	cr6.compare<uint32_t>(ctx.r25.u32, 6, xer);
	// blt cr6,0x832c7158
	if (cr6.lt) goto loc_832C7158;
loc_832C7250:
	// stw r26,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r26.u32);
	// cmpwi cr6,r24,0
	cr6.compare<int32_t>(ctx.r24.s32, 0, xer);
	// blt cr6,0x832c729c
	if (cr6.lt) goto loc_832C729C;
	// addi r8,r31,8
	ctx.r8.s64 = ctx.r31.s64 + 8;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// addi r6,r31,48
	ctx.r6.s64 = ctx.r31.s64 + 48;
	// li r5,10
	ctx.r5.s64 = 10;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x832cca20
	ctx.lr = 0x832C7278;
	sub_832CCA20(ctx, base);
	// li r30,1
	ctx.r30.s64 = 1;
	// stw r20,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r20.u32);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x832c5f30
	ctx.lr = 0x832C7290;
	sub_832C5F30(ctx, base);
	// cmpwi cr6,r24,0
	cr6.compare<int32_t>(ctx.r24.s32, 0, xer);
	// stw r30,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r30.u32);
	// bge cr6,0x832c72a8
	if (!cr6.lt) goto loc_832C72A8;
loc_832C729C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832c6d78
	ctx.lr = 0x832C72A4;
	sub_832C6D78(ctx, base);
	// mr r31,r21
	ctx.r31.u64 = ctx.r21.u64;
loc_832C72A8:
	// stw r31,0(r19)
	PPC_STORE_U32(ctx.r19.u32 + 0, ctx.r31.u32);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x831cdb14
	__restgprlr_19(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832C72B8"))) PPC_WEAK_FUNC(sub_832C72B8);
PPC_FUNC_IMPL(__imp__sub_832C72B8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// lwz r8,8(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// li r3,0
	ctx.r3.s64 = 0;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r10,r11,r8
	PPC_STORE_U32(ctx.r11.u32 + ctx.r8.u32, ctx.r10.u32);
	// stw r10,24(r9)
	PPC_STORE_U32(ctx.r9.u32 + 24, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832C72E0"))) PPC_WEAK_FUNC(sub_832C72E0);
PPC_FUNC_IMPL(__imp__sub_832C72E0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// lwz r8,8(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// li r3,0
	ctx.r3.s64 = 0;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r10,24(r9)
	PPC_STORE_U32(ctx.r9.u32 + 24, ctx.r10.u32);
	// stwx r10,r11,r8
	PPC_STORE_U32(ctx.r11.u32 + ctx.r8.u32, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832C7308"))) PPC_WEAK_FUNC(sub_832C7308);
PPC_FUNC_IMPL(__imp__sub_832C7308) {
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
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x832c7380
	if (!cr6.eq) goto loc_832C7380;
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x832c7380
	if (cr6.eq) goto loc_832C7380;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r9,16
	ctx.r11.s64 = ctx.r9.s64 + 16;
loc_832C7334:
	// lwz r8,-8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x832c734c
	if (cr6.eq) goto loc_832C734C;
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r8,1
	cr6.compare<int32_t>(ctx.r8.s32, 1, xer);
	// beq cr6,0x832c7370
	if (cr6.eq) goto loc_832C7370;
loc_832C734C:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplwi cr6,r10,2
	cr6.compare<uint32_t>(ctx.r10.u32, 2, xer);
	// blt cr6,0x832c7334
	if (cr6.lt) goto loc_832C7334;
	// li r3,0
	ctx.r3.s64 = 0;
loc_832C7360:
	// addi r11,r3,0
	ctx.r11.s64 = ctx.r3.s64 + 0;
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r3,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// b 0x832c7384
	goto loc_832C7384;
loc_832C7370:
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// bl 0x832c7bf0
	ctx.lr = 0x832C737C;
	sub_832C7BF0(ctx, base);
	// b 0x832c7360
	goto loc_832C7360;
loc_832C7380:
	// li r3,0
	ctx.r3.s64 = 0;
loc_832C7384:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832C7394"))) PPC_WEAK_FUNC(sub_832C7394);
PPC_FUNC_IMPL(__imp__sub_832C7394) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832C7398"))) PPC_WEAK_FUNC(sub_832C7398);
PPC_FUNC_IMPL(__imp__sub_832C7398) {
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
	// addi r3,r3,64
	ctx.r3.s64 = ctx.r3.s64 + 64;
	// bl 0x832ccb48
	ctx.lr = 0x832C73AC;
	sub_832CCB48(ctx, base);
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

__attribute__((alias("__imp__sub_832C73C0"))) PPC_WEAK_FUNC(sub_832C73C0);
PPC_FUNC_IMPL(__imp__sub_832C73C0) {
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
	// addi r3,r3,32
	ctx.r3.s64 = ctx.r3.s64 + 32;
	// bl 0x832ccb78
	ctx.lr = 0x832C73D4;
	sub_832CCB78(ctx, base);
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

__attribute__((alias("__imp__sub_832C73E8"))) PPC_WEAK_FUNC(sub_832C73E8);
PPC_FUNC_IMPL(__imp__sub_832C73E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdac8
	ctx.lr = 0x832C73F0;
	__savegprlr_20(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r11,2
	ctx.r11.s64 = 2;
	// li r21,0
	ctx.r21.s64 = 0;
	// addi r24,r3,8
	ctx.r24.s64 = ctx.r3.s64 + 8;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r22,r4
	ctx.r22.u64 = ctx.r4.u64;
	// lwz r25,8(r10)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mr r20,r21
	ctx.r20.u64 = ctx.r21.u64;
	// li r23,1
	ctx.r23.s64 = 1;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// mr r9,r24
	ctx.r9.u64 = ctx.r24.u64;
loc_832C7424:
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x832c7460
	if (cr6.eq) goto loc_832C7460;
	// lwz r8,8(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// cmpwi cr6,r8,1
	cr6.compare<int32_t>(ctx.r8.s32, 1, xer);
	// bne cr6,0x832c7448
	if (!cr6.eq) goto loc_832C7448;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// b 0x832c744c
	goto loc_832C744C;
loc_832C7448:
	// stw r21,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r21.u32);
loc_832C744C:
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x832c7464
	if (cr6.eq) goto loc_832C7464;
	// addi r20,r20,1
	ctx.r20.s64 = ctx.r20.s64 + 1;
	// b 0x832c7464
	goto loc_832C7464;
loc_832C7460:
	// stw r21,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r21.u32);
loc_832C7464:
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x832c7424
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_832C7424;
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(ctx.r25.u32, 0, xer);
	// beq cr6,0x832c75bc
	if (cr6.eq) goto loc_832C75BC;
	// cmplwi cr6,r20,0
	cr6.compare<uint32_t>(ctx.r20.u32, 0, xer);
	// beq cr6,0x832c75bc
	if (cr6.eq) goto loc_832C75BC;
	// mr r23,r21
	ctx.r23.u64 = ctx.r21.u64;
	// b 0x832c75b4
	goto loc_832C75B4;
loc_832C7488:
	// addi r22,r22,-1
	ctx.r22.s64 = ctx.r22.s64 + -1;
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(ctx.r25.u32, 0, xer);
	// beq cr6,0x832c75bc
	if (cr6.eq) goto loc_832C75BC;
	// cmplwi cr6,r20,0
	cr6.compare<uint32_t>(ctx.r20.u32, 0, xer);
	// beq cr6,0x832c75bc
	if (cr6.eq) goto loc_832C75BC;
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// addi r30,r31,1408
	ctx.r30.s64 = ctx.r31.s64 + 1408;
	// lwz r9,24(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r5,24(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 24);
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x831ce980
	ctx.lr = 0x832C74C0;
	sub_831CE980(ctx, base);
	// addi r29,r31,2048
	ctx.r29.s64 = ctx.r31.s64 + 2048;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,64
	ctx.r3.s64 = ctx.r31.s64 + 64;
	// bl 0x832ccbb8
	ctx.lr = 0x832C74D8;
	sub_832CCBB8(ctx, base);
	// mr r23,r21
	ctx.r23.u64 = ctx.r21.u64;
	// addi r28,r1,96
	ctx.r28.s64 = ctx.r1.s64 + 96;
	// mr r27,r24
	ctx.r27.u64 = ctx.r24.u64;
	// li r26,2
	ctx.r26.s64 = 2;
loc_832C74E8:
	// lwz r30,0(r28)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x832c755c
	if (cr6.eq) goto loc_832C755C;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r5,40
	ctx.r5.s64 = 40;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x831ce980
	ctx.lr = 0x832C7510;
	sub_831CE980(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// addi r9,r9,40
	ctx.r9.s64 = ctx.r9.s64 + 40;
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// bge cr6,0x832c752c
	if (!cr6.lt) goto loc_832C752C;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_832C752C:
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// bne cr6,0x832c755c
	if (!cr6.eq) goto loc_832C755C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,0(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// bl 0x832c7c10
	ctx.lr = 0x832C754C;
	sub_832C7C10(ctx, base);
	// stw r3,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x832c755c
	if (!cr0.eq) goto loc_832C755C;
	// addi r20,r20,-1
	ctx.r20.s64 = ctx.r20.s64 + -1;
loc_832C755C:
	// addic. r26,r26,-1
	xer.ca = ctx.r26.u32 > 0;
	ctx.r26.s64 = ctx.r26.s64 + -1;
	cr0.compare<int32_t>(ctx.r26.s32, 0, xer);
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// bne 0x832c74e8
	if (!cr0.eq) goto loc_832C74E8;
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,24(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// bge cr6,0x832c7590
	if (!cr6.lt) goto loc_832C7590;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_832C7590:
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// bne cr6,0x832c75b4
	if (!cr6.eq) goto loc_832C75B4;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x832c7c10
	ctx.lr = 0x832C75B0;
	sub_832C7C10(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
loc_832C75B4:
	// cmplwi cr6,r22,0
	cr6.compare<uint32_t>(ctx.r22.u32, 0, xer);
	// bne cr6,0x832c7488
	if (!cr6.eq) goto loc_832C7488;
loc_832C75BC:
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb18
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832C75C8"))) PPC_WEAK_FUNC(sub_832C75C8);
PPC_FUNC_IMPL(__imp__sub_832C75C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdac8
	ctx.lr = 0x832C75D0;
	__savegprlr_20(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r11,2
	ctx.r11.s64 = 2;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r23,r3,8
	ctx.r23.s64 = ctx.r3.s64 + 8;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r22,r4
	ctx.r22.u64 = ctx.r4.u64;
	// lwz r24,8(r10)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mr r21,r8
	ctx.r21.u64 = ctx.r8.u64;
	// li r20,1
	ctx.r20.s64 = 1;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// mr r9,r23
	ctx.r9.u64 = ctx.r23.u64;
loc_832C7604:
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x832c7640
	if (cr6.eq) goto loc_832C7640;
	// lwz r7,8(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// cmpwi cr6,r7,1
	cr6.compare<int32_t>(ctx.r7.s32, 1, xer);
	// bne cr6,0x832c7628
	if (!cr6.eq) goto loc_832C7628;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// b 0x832c762c
	goto loc_832C762C;
loc_832C7628:
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
loc_832C762C:
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x832c7644
	if (cr6.eq) goto loc_832C7644;
	// addi r21,r21,1
	ctx.r21.s64 = ctx.r21.s64 + 1;
	// b 0x832c7644
	goto loc_832C7644;
loc_832C7640:
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
loc_832C7644:
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x832c7604
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_832C7604;
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(ctx.r24.u32, 0, xer);
	// beq cr6,0x832c77d4
	if (cr6.eq) goto loc_832C77D4;
	// cmplwi cr6,r21,0
	cr6.compare<uint32_t>(ctx.r21.u32, 0, xer);
	// beq cr6,0x832c77d4
	if (cr6.eq) goto loc_832C77D4;
	// mr r20,r8
	ctx.r20.u64 = ctx.r8.u64;
	// b 0x832c77cc
	goto loc_832C77CC;
loc_832C7668:
	// addi r22,r22,-1
	ctx.r22.s64 = ctx.r22.s64 + -1;
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(ctx.r24.u32, 0, xer);
	// beq cr6,0x832c77d4
	if (cr6.eq) goto loc_832C77D4;
	// cmplwi cr6,r21,0
	cr6.compare<uint32_t>(ctx.r21.u32, 0, xer);
	// beq cr6,0x832c77d4
	if (cr6.eq) goto loc_832C77D4;
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// addi r31,r26,1664
	ctx.r31.s64 = ctx.r26.s64 + 1664;
	// lwz r9,24(r26)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + 24);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r5,24(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 24);
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x831ce980
	ctx.lr = 0x832C76A0;
	sub_831CE980(ctx, base);
	// addi r29,r26,1024
	ctx.r29.s64 = ctx.r26.s64 + 1024;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r26,32
	ctx.r3.s64 = ctx.r26.s64 + 32;
	// bl 0x832cd288
	ctx.lr = 0x832C76B8;
	sub_832CD288(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x832c76d0
	if (cr0.eq) goto loc_832C76D0;
	// li r5,640
	ctx.r5.s64 = 640;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831cdcf0
	ctx.lr = 0x832C76D0;
	sub_831CDCF0(ctx, base);
loc_832C76D0:
	// addi r28,r1,80
	ctx.r28.s64 = ctx.r1.s64 + 80;
	// mr r27,r23
	ctx.r27.u64 = ctx.r23.u64;
	// li r25,2
	ctx.r25.s64 = 2;
loc_832C76DC:
	// lwz r31,0(r28)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x832c777c
	if (cr6.eq) goto loc_832C777C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r30,640
	ctx.r30.s64 = 640;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// cmplwi cr6,r11,640
	cr6.compare<uint32_t>(ctx.r11.u32, 640, xer);
	// bgt cr6,0x832c7714
	if (cr6.gt) goto loc_832C7714;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// subf r30,r11,r10
	ctx.r30.s64 = ctx.r10.s64 - ctx.r11.s64;
loc_832C7714:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x831ce980
	ctx.lr = 0x832C7730;
	sub_831CE980(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// add r9,r9,r30
	ctx.r9.u64 = ctx.r9.u64 + ctx.r30.u64;
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// bge cr6,0x832c774c
	if (!cr6.lt) goto loc_832C774C;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_832C774C:
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// bne cr6,0x832c777c
	if (!cr6.eq) goto loc_832C777C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,0(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// bl 0x832c7c10
	ctx.lr = 0x832C776C;
	sub_832C7C10(ctx, base);
	// stw r3,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x832c777c
	if (!cr0.eq) goto loc_832C777C;
	// addi r21,r21,-1
	ctx.r21.s64 = ctx.r21.s64 + -1;
loc_832C777C:
	// addic. r25,r25,-1
	xer.ca = ctx.r25.u32 > 0;
	ctx.r25.s64 = ctx.r25.s64 + -1;
	cr0.compare<int32_t>(ctx.r25.s32, 0, xer);
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// bne 0x832c76dc
	if (!cr0.eq) goto loc_832C76DC;
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// addi r9,r9,640
	ctx.r9.s64 = ctx.r9.s64 + 640;
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// bge cr6,0x832c77a8
	if (!cr6.lt) goto loc_832C77A8;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_832C77A8:
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// bne cr6,0x832c77cc
	if (!cr6.eq) goto loc_832C77CC;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// lwz r3,4(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// bl 0x832c7c10
	ctx.lr = 0x832C77C8;
	sub_832C7C10(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
loc_832C77CC:
	// cmplwi cr6,r22,0
	cr6.compare<uint32_t>(ctx.r22.u32, 0, xer);
	// bne cr6,0x832c7668
	if (!cr6.eq) goto loc_832C7668;
loc_832C77D4:
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb18
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832C77E0"))) PPC_WEAK_FUNC(sub_832C77E0);
PPC_FUNC_IMPL(__imp__sub_832C77E0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,2
	cr6.compare<uint32_t>(ctx.r4.u32, 2, xer);
	// bne cr6,0x832c77f4
	if (!cr6.eq) goto loc_832C77F4;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// b 0x832c7800
	goto loc_832C7800;
loc_832C77F4:
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r3
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
loc_832C7800:
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// b 0x832c7c90
	sub_832C7C90(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832C7808"))) PPC_WEAK_FUNC(sub_832C7808);
PPC_FUNC_IMPL(__imp__sub_832C7808) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x832C7810;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r27,0
	ctx.r27.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// addi r11,r3,16
	ctx.r11.s64 = ctx.r3.s64 + 16;
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
loc_832C7828:
	// lwz r9,-8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x832c7840
	if (cr6.eq) goto loc_832C7840;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r9,1
	cr6.compare<int32_t>(ctx.r9.s32, 1, xer);
	// beq cr6,0x832c786c
	if (cr6.eq) goto loc_832C786C;
loc_832C7840:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplwi cr6,r10,2
	cr6.compare<uint32_t>(ctx.r10.u32, 2, xer);
	// blt cr6,0x832c7828
	if (cr6.lt) goto loc_832C7828;
	// mr r28,r27
	ctx.r28.u64 = ctx.r27.u64;
loc_832C7854:
	// subf r30,r29,r4
	ctx.r30.s64 = ctx.r4.s64 - ctx.r29.s64;
	// cmpwi cr6,r29,-1
	cr6.compare<int32_t>(ctx.r29.s32, -1, xer);
	// beq cr6,0x832c78a8
	if (cr6.eq) goto loc_832C78A8;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r4,8(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x832c78a0
	goto loc_832C78A0;
loc_832C786C:
	// li r28,1
	ctx.r28.s64 = 1;
	// b 0x832c7854
	goto loc_832C7854;
loc_832C7874:
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x832c78a8
	if (cr6.eq) goto loc_832C78A8;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// stw r27,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r27.u32);
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x832c7c10
	ctx.lr = 0x832C789C;
	sub_832C7C10(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_832C78A0:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// bne cr6,0x832c7874
	if (!cr6.eq) goto loc_832C7874;
loc_832C78A8:
	// cmpwi cr6,r28,1
	cr6.compare<int32_t>(ctx.r28.s32, 1, xer);
	// bne cr6,0x832c78e0
	if (!cr6.eq) goto loc_832C78E0;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x832c78d8
	if (cr6.eq) goto loc_832C78D8;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bctrl 
	ctx.lr = 0x832C78D0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// b 0x832c7920
	goto loc_832C7920;
loc_832C78D8:
	// li r27,1
	ctx.r27.s64 = 1;
	// b 0x832c7920
	goto loc_832C7920;
loc_832C78E0:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r4,8(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x832c7918
	goto loc_832C7918;
loc_832C78EC:
	// addi r29,r29,-1
	ctx.r29.s64 = ctx.r29.s64 + -1;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x832c7920
	if (cr6.eq) goto loc_832C7920;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// stw r27,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r27.u32);
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x832c7c10
	ctx.lr = 0x832C7914;
	sub_832C7C10(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_832C7918:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// bne cr6,0x832c78ec
	if (!cr6.eq) goto loc_832C78EC;
loc_832C7920:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832C792C"))) PPC_WEAK_FUNC(sub_832C792C);
PPC_FUNC_IMPL(__imp__sub_832C792C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832C7930"))) PPC_WEAK_FUNC(sub_832C7930);
PPC_FUNC_IMPL(__imp__sub_832C7930) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x832C7938;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x832c795c
	if (cr6.eq) goto loc_832C795C;
	// stw r30,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r30.u32);
loc_832C795C:
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, xer);
	// beq cr6,0x832c7968
	if (cr6.eq) goto loc_832C7968;
	// stw r30,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r30.u32);
loc_832C7968:
	// lwz r10,4(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// lis r9,-16384
	ctx.r9.s64 = -1073741824;
	// ori r31,r9,1
	ctx.r31.u64 = ctx.r9.u64 | 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x832c79cc
	if (cr6.eq) goto loc_832C79CC;
	// lwz r4,8(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x832c79ac
	if (cr6.eq) goto loc_832C79AC;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x832c79cc
	if (cr6.eq) goto loc_832C79CC;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// stw r31,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r31.u32);
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r3,4(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// bl 0x832c7c10
	ctx.lr = 0x832C79A8;
	sub_832C7C10(ctx, base);
	// b 0x832c79cc
	goto loc_832C79CC;
loc_832C79AC:
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x832c79cc
	if (cr6.eq) goto loc_832C79CC;
loc_832C79B4:
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// stw r31,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
	// lwz r3,4(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// bl 0x832c7c10
	ctx.lr = 0x832C79C4;
	sub_832C7C10(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bne 0x832c79b4
	if (!cr0.eq) goto loc_832C79B4;
loc_832C79CC:
	// addi r29,r28,8
	ctx.r29.s64 = ctx.r28.s64 + 8;
loc_832C79D0:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x832c7a18
	if (cr6.eq) goto loc_832C7A18;
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, xer);
	// beq cr6,0x832c79ec
	if (cr6.eq) goto loc_832C79EC;
	// cmplw cr6,r30,r26
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r26.u32, xer);
	// bne cr6,0x832c7a18
	if (!cr6.eq) goto loc_832C7A18;
loc_832C79EC:
	// lwz r4,8(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, xer);
	// bne cr6,0x832c7a2c
	if (!cr6.eq) goto loc_832C7A2C;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x832c7a18
	if (cr6.eq) goto loc_832C7A18;
loc_832C7A00:
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// stw r31,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x832c7c10
	ctx.lr = 0x832C7A10;
	sub_832C7C10(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bne 0x832c7a00
	if (!cr0.eq) goto loc_832C7A00;
loc_832C7A18:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmplwi cr6,r30,2
	cr6.compare<uint32_t>(ctx.r30.u32, 2, xer);
	// blt cr6,0x832c79d0
	if (cr6.lt) goto loc_832C79D0;
	// b 0x832c7a54
	goto loc_832C7A54;
loc_832C7A2C:
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x832c7a54
	if (cr6.eq) goto loc_832C7A54;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r10,r30,2
	ctx.r10.s64 = ctx.r30.s64 + 2;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r31,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
	// lwzx r3,r10,r28
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r28.u32);
	// bl 0x832c7c10
	ctx.lr = 0x832C7A54;
	sub_832C7C10(ctx, base);
loc_832C7A54:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832C7A60"))) PPC_WEAK_FUNC(sub_832C7A60);
PPC_FUNC_IMPL(__imp__sub_832C7A60) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x832C7A68;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x832c7b00
	if (cr6.eq) goto loc_832C7B00;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x832c7930
	ctx.lr = 0x832C7A88;
	sub_832C7930(ctx, base);
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x832c7ab4
	if (cr6.eq) goto loc_832C7AB4;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x832c7ab0
	if (cr6.eq) goto loc_832C7AB0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832C7AB0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_832C7AB0:
	// stw r28,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r28.u32);
loc_832C7AB4:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x832c7ac8
	if (cr6.eq) goto loc_832C7AC8;
	// bl 0x832c7d30
	ctx.lr = 0x832C7AC4;
	sub_832C7D30(ctx, base);
	// stw r28,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r28.u32);
loc_832C7AC8:
	// addi r31,r30,8
	ctx.r31.s64 = ctx.r30.s64 + 8;
	// li r29,2
	ctx.r29.s64 = 2;
loc_832C7AD0:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x832c7ae4
	if (cr6.eq) goto loc_832C7AE4;
	// bl 0x832c7d30
	ctx.lr = 0x832C7AE0;
	sub_832C7D30(ctx, base);
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
loc_832C7AE4:
	// addic. r29,r29,-1
	xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// bne 0x832c7ad0
	if (!cr0.eq) goto loc_832C7AD0;
	// lis r4,25738
	ctx.r4.s64 = 1686765568;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// ori r4,r4,8
	ctx.r4.u64 = ctx.r4.u64 | 8;
	// bl 0x832d53c8
	ctx.lr = 0x832C7B00;
	sub_832D53C8(ctx, base);
loc_832C7B00:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832C7B08"))) PPC_WEAK_FUNC(sub_832C7B08);
PPC_FUNC_IMPL(__imp__sub_832C7B08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x832C7B10;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// lis r4,25738
	ctx.r4.s64 = 1686765568;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// ori r4,r4,8
	ctx.r4.u64 = ctx.r4.u64 | 8;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// lwz r3,16(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 16);
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r25,r7
	ctx.r25.u64 = ctx.r7.u64;
	// bl 0x832d5290
	ctx.lr = 0x832C7B38;
	sub_832D5290(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// bne 0x832c7b4c
	if (!cr0.eq) goto loc_832C7B4C;
	// lis r30,-32761
	ctx.r30.s64 = -2147024896;
	// ori r30,r30,14
	ctx.r30.u64 = ctx.r30.u64 | 14;
	// b 0x832c7bd0
	goto loc_832C7BD0;
loc_832C7B4C:
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// addi r4,r31,4
	ctx.r4.s64 = ctx.r31.s64 + 4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x832c7e18
	ctx.lr = 0x832C7B5C;
	sub_832C7E18(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// blt 0x832c7bd0
	if (cr0.lt) goto loc_832C7BD0;
	// li r27,0
	ctx.r27.s64 = 0;
	// addi r29,r31,8
	ctx.r29.s64 = ctx.r31.s64 + 8;
loc_832C7B6C:
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x832c7b88
	if (cr6.eq) goto loc_832C7B88;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x832c7e18
	ctx.lr = 0x832C7B80;
	sub_832C7E18(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// blt 0x832c7bd0
	if (cr0.lt) goto loc_832C7BD0;
loc_832C7B88:
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// cmplwi cr6,r27,2
	cr6.compare<uint32_t>(ctx.r27.u32, 2, xer);
	// blt cr6,0x832c7b6c
	if (cr6.lt) goto loc_832C7B6C;
	// stw r26,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r26.u32);
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x832c7bc4
	if (cr6.eq) goto loc_832C7BC4;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832C7BBC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x832c7bc8
	goto loc_832C7BC8;
loc_832C7BC4:
	// li r30,1
	ctx.r30.s64 = 1;
loc_832C7BC8:
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// bge cr6,0x832c7bdc
	if (!cr6.lt) goto loc_832C7BDC;
loc_832C7BD0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832c7a60
	ctx.lr = 0x832C7BD8;
	sub_832C7A60(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
loc_832C7BDC:
	// stw r31,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r31.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832C7BEC"))) PPC_WEAK_FUNC(sub_832C7BEC);
PPC_FUNC_IMPL(__imp__sub_832C7BEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832C7BF0"))) PPC_WEAK_FUNC(sub_832C7BF0);
PPC_FUNC_IMPL(__imp__sub_832C7BF0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x832c7c04
	goto loc_832C7C04;
loc_832C7BFC:
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
loc_832C7C04:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x832c7bfc
	if (!cr6.eq) goto loc_832C7BFC;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832C7C10"))) PPC_WEAK_FUNC(sub_832C7C10);
PPC_FUNC_IMPL(__imp__sub_832C7C10) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r9,259
	cr6.compare<int32_t>(ctx.r9.s32, 259, xer);
	// bne cr6,0x832c7c2c
	if (!cr6.eq) goto loc_832C7C2C;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_832C7C2C:
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// addi r11,r8,8
	ctx.r11.s64 = ctx.r8.s64 + 8;
	// lwz r9,8(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// cmplw cr6,r4,r9
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, xer);
	// bne cr6,0x832c7c68
	if (!cr6.eq) goto loc_832C7C68;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x832c7c68
	if (cr6.eq) goto loc_832C7C68;
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r9,r7
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, xer);
	// bne cr6,0x832c7c5c
	if (!cr6.eq) goto loc_832C7C5C;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
loc_832C7C5C:
	// lwz r7,4(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stw r7,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// stw r10,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r10.u32);
loc_832C7C68:
	// stw r10,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r10.u32);
	// lwz r10,4(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x832c7c80
	if (cr6.eq) goto loc_832C7C80;
	// stw r4,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r4.u32);
	// b 0x832c7c84
	goto loc_832C7C84;
loc_832C7C80:
	// stw r4,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r4.u32);
loc_832C7C84:
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r4,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832C7C90"))) PPC_WEAK_FUNC(sub_832C7C90);
PPC_FUNC_IMPL(__imp__sub_832C7C90) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x832C7C98;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,0(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x832c7d0c
	if (cr6.eq) goto loc_832C7D0C;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// bne cr6,0x832c7cc4
	if (!cr6.eq) goto loc_832C7CC4;
	// stw r28,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r28.u32);
loc_832C7CC4:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// stw r28,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r28.u32);
	// bl 0x832d27b0
	ctx.lr = 0x832C7CE0;
	sub_832D27B0(ctx, base);
	// li r10,259
	ctx.r10.s64 = 259;
	// stw r28,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r28.u32);
	// addi r11,r30,8
	ctx.r11.s64 = ctx.r30.s64 + 8;
	// stw r10,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r10.u32);
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
	// stw r28,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r28.u32);
	// lwz r10,12(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x832c7d18
	if (cr6.eq) goto loc_832C7D18;
	// stw r31,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r31.u32);
	// b 0x832c7d1c
	goto loc_832C7D1C;
loc_832C7D0C:
	// lis r28,-32761
	ctx.r28.s64 = -2147024896;
	// ori r28,r28,122
	ctx.r28.u64 = ctx.r28.u64 | 122;
	// b 0x832c7d20
	goto loc_832C7D20;
loc_832C7D18:
	// stw r31,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
loc_832C7D1C:
	// stw r31,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r31.u32);
loc_832C7D20:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832C7D2C"))) PPC_WEAK_FUNC(sub_832C7D2C);
PPC_FUNC_IMPL(__imp__sub_832C7D2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832C7D30"))) PPC_WEAK_FUNC(sub_832C7D30);
PPC_FUNC_IMPL(__imp__sub_832C7D30) {
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
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x832c7d7c
	if (cr6.eq) goto loc_832C7D7C;
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x832c7d6c
	if (cr6.eq) goto loc_832C7D6C;
	// lis r4,24970
	ctx.r4.s64 = 1636433920;
	// ori r4,r4,3
	ctx.r4.u64 = ctx.r4.u64 | 3;
	// bl 0x832d53c8
	ctx.lr = 0x832C7D64;
	sub_832D53C8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
loc_832C7D6C:
	// lis r4,24970
	ctx.r4.s64 = 1636433920;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r4,r4,32773
	ctx.r4.u64 = ctx.r4.u64 | 32773;
	// bl 0x832d53c8
	ctx.lr = 0x832C7D7C;
	sub_832D53C8(ctx, base);
loc_832C7D7C:
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

__attribute__((alias("__imp__sub_832C7D90"))) PPC_WEAK_FUNC(sub_832C7D90);
PPC_FUNC_IMPL(__imp__sub_832C7D90) {
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
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x832c7dfc
	if (cr6.eq) goto loc_832C7DFC;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x832c7dd0
	if (cr6.eq) goto loc_832C7DD0;
	// lis r4,24714
	ctx.r4.s64 = 1619656704;
	// ori r4,r4,8194
	ctx.r4.u64 = ctx.r4.u64 | 8194;
	// bl 0x832d53c8
	ctx.lr = 0x832C7DCC;
	sub_832D53C8(ctx, base);
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
loc_832C7DD0:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x832c7dec
	if (cr6.eq) goto loc_832C7DEC;
	// lis r4,24970
	ctx.r4.s64 = 1636433920;
	// ori r4,r4,9
	ctx.r4.u64 = ctx.r4.u64 | 9;
	// bl 0x832d53c8
	ctx.lr = 0x832C7DE8;
	sub_832D53C8(ctx, base);
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
loc_832C7DEC:
	// lis r4,24970
	ctx.r4.s64 = 1636433920;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r4,r4,32774
	ctx.r4.u64 = ctx.r4.u64 | 32774;
	// bl 0x832d53c8
	ctx.lr = 0x832C7DFC;
	sub_832D53C8(ctx, base);
loc_832C7DFC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832C7E14"))) PPC_WEAK_FUNC(sub_832C7E14);
PPC_FUNC_IMPL(__imp__sub_832C7E14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832C7E18"))) PPC_WEAK_FUNC(sub_832C7E18);
PPC_FUNC_IMPL(__imp__sub_832C7E18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x832C7E20;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// lis r4,24970
	ctx.r4.s64 = 1636433920;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,20
	ctx.r3.s64 = 20;
	// ori r4,r4,32773
	ctx.r4.u64 = ctx.r4.u64 | 32773;
	// li r28,0
	ctx.r28.s64 = 0;
	// bl 0x832d5290
	ctx.lr = 0x832C7E40;
	sub_832D5290(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// bne 0x832c7e6c
	if (!cr0.eq) goto loc_832C7E6C;
loc_832C7E48:
	// lis r28,-32761
	ctx.r28.s64 = -2147024896;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r28,r28,14
	ctx.r28.u64 = ctx.r28.u64 | 14;
	// bl 0x832c7d30
	ctx.lr = 0x832C7E58;
	sub_832C7D30(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
loc_832C7E5C:
	// stw r31,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r31.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_832C7E6C:
	// rlwinm r29,r30,3,0,28
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 3) & 0xFFFFFFF8;
	// lis r4,24970
	ctx.r4.s64 = 1636433920;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// ori r4,r4,3
	ctx.r4.u64 = ctx.r4.u64 | 3;
	// bl 0x832d5290
	ctx.lr = 0x832C7E80;
	sub_832D5290(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r3,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r3.u32);
	// beq 0x832c7e48
	if (cr0.eq) goto loc_832C7E48;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x832c7e5c
	if (cr6.eq) goto loc_832C7E5C;
	// mtctr r30
	ctr.u64 = ctx.r30.u64;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
loc_832C7E9C:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r10,r10,-8
	ctx.r10.s64 = ctx.r10.s64 + -8;
	// li r9,0
	ctx.r9.s64 = 0;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x832c7ec4
	if (cr6.eq) goto loc_832C7EC4;
	// stw r11,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r11.u32);
	// b 0x832c7ec8
	goto loc_832C7EC8;
loc_832C7EC4:
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_832C7EC8:
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bdnz 0x832c7e9c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_832C7E9C;
	// b 0x832c7e5c
	goto loc_832C7E5C;
}

__attribute__((alias("__imp__sub_832C7ED4"))) PPC_WEAK_FUNC(sub_832C7ED4);
PPC_FUNC_IMPL(__imp__sub_832C7ED4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832C7ED8"))) PPC_WEAK_FUNC(sub_832C7ED8);
PPC_FUNC_IMPL(__imp__sub_832C7ED8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x832C7EE0;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// lis r4,24970
	ctx.r4.s64 = 1636433920;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r3,12
	ctx.r3.s64 = 12;
	// ori r4,r4,32774
	ctx.r4.u64 = ctx.r4.u64 | 32774;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r24,r7
	ctx.r24.u64 = ctx.r7.u64;
	// li r25,0
	ctx.r25.s64 = 0;
	// bl 0x832d5290
	ctx.lr = 0x832C7F0C;
	sub_832D5290(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// beq 0x832c7fa0
	if (cr0.eq) goto loc_832C7FA0;
	// stw r28,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r28.u32);
	// mullw r26,r29,r30
	ctx.r26.s64 = int64_t(ctx.r29.s32) * int64_t(ctx.r30.s32);
	// lis r4,24714
	ctx.r4.s64 = 1619656704;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// ori r4,r4,8194
	ctx.r4.u64 = ctx.r4.u64 | 8194;
	// bl 0x832d5290
	ctx.lr = 0x832C7F2C;
	sub_832D5290(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// lis r4,24970
	ctx.r4.s64 = 1636433920;
	// mullw r3,r28,r30
	ctx.r3.s64 = int64_t(ctx.r28.s32) * int64_t(ctx.r30.s32);
	// ori r4,r4,9
	ctx.r4.u64 = ctx.r4.u64 | 9;
	// bl 0x832d5290
	ctx.lr = 0x832C7F40;
	sub_832D5290(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x832c7fa0
	if (cr6.eq) goto loc_832C7FA0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x832c7fa0
	if (cr6.eq) goto loc_832C7FA0;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x832c7fb4
	if (cr6.eq) goto loc_832C7FB4;
	// subf r8,r27,r29
	ctx.r8.s64 = ctx.r29.s64 - ctx.r27.s64;
	// mtctr r30
	ctr.u64 = ctx.r30.u64;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
loc_832C7F6C:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// subf r11,r29,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r29.s64;
	// mullw r10,r10,r30
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r30.s32);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r8,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r8.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// add r9,r9,r27
	ctx.r9.u64 = ctx.r9.u64 + ctx.r27.u64;
	// stw r9,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r9.u32);
	// bdnz 0x832c7f6c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_832C7F6C;
	// b 0x832c7fb4
	goto loc_832C7FB4;
loc_832C7FA0:
	// lis r25,-32761
	ctx.r25.s64 = -2147024896;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r25,r25,14
	ctx.r25.u64 = ctx.r25.u64 | 14;
	// bl 0x832c7d90
	ctx.lr = 0x832C7FB0;
	sub_832C7D90(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
loc_832C7FB4:
	// stw r31,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r31.u32);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832C7FC4"))) PPC_WEAK_FUNC(sub_832C7FC4);
PPC_FUNC_IMPL(__imp__sub_832C7FC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832C7FC8"))) PPC_WEAK_FUNC(sub_832C7FC8);
PPC_FUNC_IMPL(__imp__sub_832C7FC8) {
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
	// lwz r11,76(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x832c8038
	if (cr6.eq) goto loc_832C8038;
	// bl 0x832d30f8
	ctx.lr = 0x832C7FF4;
	sub_832D30F8(ctx, base);
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// li r9,40
	ctx.r9.s64 = 40;
	// ld r8,24(r31)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r31.u32 + 24);
	// subfic r11,r11,0
	xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r11.s64;
	// ld r6,16(r31)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r31.u32 + 16);
	// clrldi r10,r3,32
	ctx.r10.u64 = ctx.r3.u64 & 0xFFFFFFFF;
	// ld r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 40);
	// subfe r7,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r7.u64 + ctx.r7.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r9,r7,r9
	ctx.r9.u64 = ctx.r7.u64 & ctx.r9.u64;
	// extsw r9,r9
	ctx.r9.s64 = ctx.r9.s32;
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// subf r9,r6,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r6.s64;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// cmpld cr6,r10,r11
	cr6.compare<uint64_t>(ctx.r10.u64, ctx.r11.u64, xer);
	// blt cr6,0x832c8038
	if (cr6.lt) goto loc_832C8038;
	// li r30,1
	ctx.r30.s64 = 1;
	// std r11,56(r31)
	PPC_STORE_U64(ctx.r31.u32 + 56, ctx.r11.u64);
loc_832C8038:
	// stw r30,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r30.u32);
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

__attribute__((alias("__imp__sub_832C8058"))) PPC_WEAK_FUNC(sub_832C8058);
PPC_FUNC_IMPL(__imp__sub_832C8058) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// ld r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// li r9,20
	ctx.r9.s64 = 20;
	// lhz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 32);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// divdu r10,r10,r9
	ctx.r10.u64 = PPCDivide(ctx.r10.u64, ctx.r9.u64);
	// lhz r9,70(r3)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r3.u32 + 70);
	// li r6,0
	ctx.r6.s64 = 0;
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// std r6,0(r5)
	PPC_STORE_U64(ctx.r5.u32 + 0, ctx.r6.u64);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// srawi r10,r11,11
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FF) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 11;
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// rlwinm r10,r10,11,0,20
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 11) & 0xFFFFF800;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// addi r10,r11,2048
	ctx.r10.s64 = ctx.r11.s64 + 2048;
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// subf r7,r9,r10
	ctx.r7.s64 = ctx.r10.s64 - ctx.r9.s64;
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// srawi r10,r7,11
	xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7FF) != 0);
	ctx.r10.s64 = ctx.r7.s32 >> 11;
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// srawi r3,r9,11
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7FF) != 0);
	ctx.r3.s64 = ctx.r9.s32 >> 11;
	// rlwinm r10,r10,11,0,20
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 11) & 0xFFFFF800;
	// addze r3,r3
	temp.s64 = ctx.r3.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r3.u32;
	ctx.r3.s64 = temp.s64;
	// subf r10,r10,r7
	ctx.r10.s64 = ctx.r7.s64 - ctx.r10.s64;
	// rlwinm r7,r3,11,0,20
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 11) & 0xFFFFF800;
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// subf r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	// mr r7,r10
	ctx.r7.u64 = ctx.r10.u64;
	// clrlwi r9,r9,16
	ctx.r9.u64 = ctx.r9.u32 & 0xFFFF;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// clrlwi r10,r4,16
	ctx.r10.u64 = ctx.r4.u32 & 0xFFFF;
	// bge cr6,0x832c8104
	if (!cr6.lt) goto loc_832C8104;
	// cmplw cr6,r10,r7
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, xer);
	// blt cr6,0x832c80f0
	if (cr6.lt) goto loc_832C80F0;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// ble cr6,0x832c8140
	if (!cr6.gt) goto loc_832C8140;
loc_832C80F0:
	// lwz r11,376(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 376);
	// li r3,2
	ctx.r3.s64 = 2;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,376(r8)
	PPC_STORE_U32(ctx.r8.u32 + 376, ctx.r11.u32);
	// blr 
	return;
loc_832C8104:
	// cmplw cr6,r10,r7
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, xer);
	// bge cr6,0x832c8114
	if (!cr6.lt) goto loc_832C8114;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bgt cr6,0x832c80f0
	if (cr6.gt) goto loc_832C80F0;
loc_832C8114:
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x832c8138
	if (!cr6.lt) goto loc_832C8138;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bgt cr6,0x832c812c
	if (cr6.gt) goto loc_832C812C;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// ble cr6,0x832c8148
	if (!cr6.gt) goto loc_832C8148;
loc_832C812C:
	// li r3,1
	ctx.r3.s64 = 1;
loc_832C8130:
	// stw r6,376(r8)
	PPC_STORE_U32(ctx.r8.u32 + 376, ctx.r6.u32);
	// blr 
	return;
loc_832C8138:
	// cmplw cr6,r7,r10
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r10.u32, xer);
	// bgt cr6,0x832c8148
	if (cr6.gt) goto loc_832C8148;
loc_832C8140:
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// blt cr6,0x832c812c
	if (cr6.lt) goto loc_832C812C;
loc_832C8148:
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// ld r10,16(r8)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r8.u32 + 16);
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// addi r11,r11,2048
	ctx.r11.s64 = ctx.r11.s64 + 2048;
	// srawi r9,r11,11
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FF) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 11;
	// addze r9,r9
	temp.s64 = ctx.r9.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r9.s64 = temp.s64;
	// rlwinm r9,r9,11,0,20
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 11) & 0xFFFFF800;
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// mulli r11,r11,20
	ctx.r11.s64 = ctx.r11.s64 * 20;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// std r11,0(r5)
	PPC_STORE_U64(ctx.r5.u32 + 0, ctx.r11.u64);
	// b 0x832c8130
	goto loc_832C8130;
}

__attribute__((alias("__imp__sub_832C8180"))) PPC_WEAK_FUNC(sub_832C8180);
PPC_FUNC_IMPL(__imp__sub_832C8180) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// addi r10,r3,392
	ctx.r10.s64 = ctx.r3.s64 + 392;
	// lwz r8,0(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r3,0
	ctx.r3.s64 = 0;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x832c81e0
	if (cr6.eq) goto loc_832C81E0;
	// ld r7,24(r8)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r8.u32 + 24);
loc_832C81A0:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// ld r8,24(r8)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r8.u32 + 24);
	// cmpld cr6,r7,r8
	cr6.compare<uint64_t>(ctx.r7.u64, ctx.r8.u64, xer);
	// blt cr6,0x832c81c0
	if (cr6.lt) goto loc_832C81C0;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x832c81a0
	if (!cr6.eq) goto loc_832C81A0;
loc_832C81C0:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x832c8204
	if (!cr6.eq) goto loc_832C8204;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x832c81e0
	if (cr6.eq) goto loc_832C81E0;
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// ld r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 24);
	// cmpld cr6,r11,r7
	cr6.compare<uint64_t>(ctx.r11.u64, ctx.r7.u64, xer);
	// beq cr6,0x832c8240
	if (cr6.eq) goto loc_832C8240;
loc_832C81E0:
	// stw r3,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r3.u32);
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x832c81f8
	if (cr6.eq) goto loc_832C81F8;
	// stw r4,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r4.u32);
	// b 0x832c81fc
	goto loc_832C81FC;
loc_832C81F8:
	// stw r4,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r4.u32);
loc_832C81FC:
	// stw r4,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r4.u32);
	// blr 
	return;
loc_832C8204:
	// cmpld cr6,r8,r7
	cr6.compare<uint64_t>(ctx.r8.u64, ctx.r7.u64, xer);
	// beq cr6,0x832c8240
	if (cr6.eq) goto loc_832C8240;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x832c8230
	if (!cr6.eq) goto loc_832C8230;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r11,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r11.u32);
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// stw r4,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r4.u32);
	// bnelr cr6
	if (!cr6.eq) return;
	// b 0x832c81fc
	goto loc_832C81FC;
loc_832C8230:
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stw r11,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r11.u32);
	// stw r4,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r4.u32);
	// blr 
	return;
loc_832C8240:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832C824C"))) PPC_WEAK_FUNC(sub_832C824C);
PPC_FUNC_IMPL(__imp__sub_832C824C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832C8250"))) PPC_WEAK_FUNC(sub_832C8250);
PPC_FUNC_IMPL(__imp__sub_832C8250) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// lhz r10,68(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 68);
	// clrlwi r8,r4,16
	ctx.r8.u64 = ctx.r4.u32 & 0xFFFF;
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// li r9,0
	ctx.r9.s64 = 0;
	// subf r7,r10,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r10.s64;
	// ld r8,24(r3)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r3.u32 + 24);
	// std r9,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r9.u64);
	// addi r10,r3,392
	ctx.r10.s64 = ctx.r3.s64 + 392;
	// addi r7,r7,2048
	ctx.r7.s64 = ctx.r7.s64 + 2048;
	// stw r9,312(r3)
	PPC_STORE_U32(ctx.r3.u32 + 312, ctx.r9.u32);
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// stw r9,304(r3)
	PPC_STORE_U32(ctx.r3.u32 + 304, ctx.r9.u32);
	// srawi r8,r7,11
	xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7FF) != 0);
	ctx.r8.s64 = ctx.r7.s32 >> 11;
	// std r11,24(r3)
	PPC_STORE_U64(ctx.r3.u32 + 24, ctx.r11.u64);
	// addze r11,r8
	temp.s64 = ctx.r8.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r11.s64 = temp.s64;
	// rlwinm r11,r11,11,0,20
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 11) & 0xFFFFF800;
	// subf r11,r11,r7
	ctx.r11.s64 = ctx.r7.s64 - ctx.r11.s64;
	// sth r11,32(r3)
	PPC_STORE_U16(ctx.r3.u32 + 32, ctx.r11.u16);
	// lwz r11,392(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 392);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, xer);
	// bne cr6,0x832c82b4
	if (!cr6.eq) goto loc_832C82B4;
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
loc_832C82B4:
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// beqlr cr6
	if (cr6.eq) return;
	// addi r7,r3,384
	ctx.r7.s64 = ctx.r3.s64 + 384;
loc_832C82CC:
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// lwz r8,4(r7)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x832c82e4
	if (cr6.eq) goto loc_832C82E4;
	// stw r11,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r11.u32);
	// b 0x832c82e8
	goto loc_832C82E8;
loc_832C82E4:
	// stw r11,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r11.u32);
loc_832C82E8:
	// stw r11,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r11.u32);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, xer);
	// bne cr6,0x832c8308
	if (!cr6.eq) goto loc_832C8308;
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
loc_832C8308:
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x832c82cc
	if (!cr6.eq) goto loc_832C82CC;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832C8320"))) PPC_WEAK_FUNC(sub_832C8320);
PPC_FUNC_IMPL(__imp__sub_832C8320) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x832C8328;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,304(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 304);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r9,312(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 312);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lhz r8,72(r3)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r3.u32 + 72);
	// lhz r7,68(r3)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r3.u32 + 68);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// lfd f13,17056(r10)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r10.u32 + 17056);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// subf r10,r8,r7
	ctx.r10.s64 = ctx.r7.s64 - ctx.r8.s64;
	// fdiv f11,f12,f0
	ctx.f11.f64 = ctx.f12.f64 / ctx.f0.f64;
	// fcmpu cr6,f11,f13
	cr6.compare(ctx.f11.f64, ctx.f13.f64);
	// bge cr6,0x832c8378
	if (!cr6.lt) goto loc_832C8378;
	// fdiv f12,f12,f0
	ctx.f12.f64 = ctx.f12.f64 / ctx.f0.f64;
	// b 0x832c837c
	goto loc_832C837C;
loc_832C8378:
	// fmr f12,f13
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = ctx.f13.f64;
loc_832C837C:
	// lfd f11,288(r31)
	ctx.fpscr.disableFlushMode();
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 288);
	// fmul f0,f11,f0
	ctx.f0.f64 = ctx.f11.f64 * ctx.f0.f64;
	// fcmpu cr6,f0,f13
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x832c8390
	if (cr6.lt) goto loc_832C8390;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_832C8390:
	// fsub f13,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = ctx.f13.f64 - ctx.f0.f64;
	// addi r11,r10,10
	ctx.r11.s64 = ctx.r10.s64 + 10;
	// fmul f12,f0,f12
	ctx.f12.f64 = ctx.f0.f64 * ctx.f12.f64;
	// stfd f0,296(r31)
	PPC_STORE_U64(ctx.r31.u32 + 296, ctx.f0.u64);
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// li r26,0
	ctx.r26.s64 = 0;
	// lfdx f0,r11,r31
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + ctx.r31.u32);
	// fmadd f0,f13,f0,f12
	ctx.f0.f64 = ctx.f13.f64 * ctx.f0.f64 + ctx.f12.f64;
	// stfdx f0,r11,r31
	PPC_STORE_U64(ctx.r11.u32 + ctx.r31.u32, ctx.f0.u64);
	// lfd f0,280(r31)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r31.u32 + 280);
	// stw r26,304(r31)
	PPC_STORE_U32(ctx.r31.u32 + 304, ctx.r26.u32);
	// stw r26,312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 312, ctx.r26.u32);
	// lfdx f13,r11,r31
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r11.u32 + ctx.r31.u32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x832c84f0
	if (!cr6.lt) goto loc_832C84F0;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x832c854c
	if (cr6.eq) goto loc_832C854C;
	// addi r11,r10,9
	ctx.r11.s64 = ctx.r10.s64 + 9;
	// fsub f13,f13,f0
	ctx.f13.f64 = ctx.f13.f64 - ctx.f0.f64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lfdx f12,r11,r31
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r11.u32 + ctx.r31.u32);
	// fsub f0,f12,f0
	ctx.f0.f64 = ctx.f12.f64 - ctx.f0.f64;
	// fabs f13,f13
	ctx.f13.u64 = ctx.f13.u64 & ~0x8000000000000000;
	// fabs f0,f0
	ctx.f0.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// fcmpu cr6,f0,f13
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x832c854c
	if (!cr6.lt) goto loc_832C854C;
	// ld r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 40);
	// li r10,20
	ctx.r10.s64 = 20;
	// lwz r28,392(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 392);
	// addi r30,r31,392
	ctx.r30.s64 = ctx.r31.s64 + 392;
	// addi r11,r11,-20
	ctx.r11.s64 = ctx.r11.s64 + -20;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// divdu r10,r11,r10
	ctx.r10.u64 = PPCDivide(ctx.r11.u64, ctx.r10.u64);
	// std r11,40(r31)
	PPC_STORE_U64(ctx.r31.u32 + 40, ctx.r11.u64);
	// sth r10,68(r31)
	PPC_STORE_U16(ctx.r31.u32 + 68, ctx.r10.u16);
	// beq cr6,0x832c854c
	if (cr6.eq) goto loc_832C854C;
	// lwz r27,0(r28)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// ld r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 16);
	// addi r11,r11,20
	ctx.r11.s64 = ctx.r11.s64 + 20;
	// ld r29,24(r27)
	ctx.r29.u64 = PPC_LOAD_U64(ctx.r27.u32 + 24);
	// std r11,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r11.u64);
	// bl 0x832c7bf0
	ctx.lr = 0x832C843C;
	sub_832C7BF0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x832c854c
	if (cr0.eq) goto loc_832C854C;
	// ld r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 16);
	// cmpld cr6,r11,r29
	cr6.compare<uint64_t>(ctx.r11.u64, ctx.r29.u64, xer);
	// ble cr6,0x832c854c
	if (!cr6.gt) goto loc_832C854C;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r10,r29,20
	ctx.r10.s64 = ctx.r29.s64 + 20;
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x832c84e0
	if (cr6.eq) goto loc_832C84E0;
loc_832C8464:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// ld r9,24(r9)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r9.u32 + 24);
	// cmpld cr6,r9,r10
	cr6.compare<uint64_t>(ctx.r9.u64, ctx.r10.u64, xer);
	// bgt cr6,0x832c8488
	if (cr6.gt) goto loc_832C8488;
	// bne cr6,0x832c847c
	if (!cr6.eq) goto loc_832C847C;
	// li r8,1
	ctx.r8.s64 = 1;
loc_832C847C:
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x832c8464
	if (!cr6.eq) goto loc_832C8464;
loc_832C8488:
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq cr6,0x832c84e0
	if (cr6.eq) goto loc_832C84E0;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x832c84b8
	if (cr6.eq) goto loc_832C84B8;
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x832c84ac
	if (!cr6.eq) goto loc_832C84AC;
	// stw r26,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r26.u32);
loc_832C84AC:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// stw r26,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r26.u32);
loc_832C84B8:
	// stw r26,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r26.u32);
	// addi r11,r31,384
	ctx.r11.s64 = ctx.r31.s64 + 384;
	// lwz r10,388(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 388);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x832c84d4
	if (cr6.eq) goto loc_832C84D4;
	// stw r28,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r28.u32);
	// b 0x832c84d8
	goto loc_832C84D8;
loc_832C84D4:
	// stw r28,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r28.u32);
loc_832C84D8:
	// stw r28,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r28.u32);
	// b 0x832c854c
	goto loc_832C854C;
loc_832C84E0:
	// ld r11,24(r27)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r27.u32 + 24);
	// addi r11,r11,20
	ctx.r11.s64 = ctx.r11.s64 + 20;
	// std r11,24(r27)
	PPC_STORE_U64(ctx.r27.u32 + 24, ctx.r11.u64);
	// b 0x832c854c
	goto loc_832C854C;
loc_832C84F0:
	// addi r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 1;
	// cmplwi cr6,r11,25
	cr6.compare<uint32_t>(ctx.r11.u32, 25, xer);
	// bge cr6,0x832c854c
	if (!cr6.lt) goto loc_832C854C;
	// addi r11,r10,11
	ctx.r11.s64 = ctx.r10.s64 + 11;
	// fsub f13,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = ctx.f13.f64 - ctx.f0.f64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lfdx f12,r11,r31
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r11.u32 + ctx.r31.u32);
	// fsub f0,f12,f0
	ctx.f0.f64 = ctx.f12.f64 - ctx.f0.f64;
	// fabs f13,f13
	ctx.f13.u64 = ctx.f13.u64 & ~0x8000000000000000;
	// fabs f0,f0
	ctx.f0.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// fcmpu cr6,f0,f13
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x832c854c
	if (!cr6.lt) goto loc_832C854C;
	// ld r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 16);
	// cmpldi cr6,r11,0
	cr6.compare<uint64_t>(ctx.r11.u64, 0, xer);
	// beq cr6,0x832c854c
	if (cr6.eq) goto loc_832C854C;
	// addi r10,r11,-20
	ctx.r10.s64 = ctx.r11.s64 + -20;
	// ld r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 40);
	// li r9,20
	ctx.r9.s64 = 20;
	// addi r11,r11,20
	ctx.r11.s64 = ctx.r11.s64 + 20;
	// std r10,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r10.u64);
	// divdu r10,r11,r9
	ctx.r10.u64 = PPCDivide(ctx.r11.u64, ctx.r9.u64);
	// std r11,40(r31)
	PPC_STORE_U64(ctx.r31.u32 + 40, ctx.r11.u64);
	// sth r10,68(r31)
	PPC_STORE_U16(ctx.r31.u32 + 68, ctx.r10.u16);
loc_832C854C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832C8554"))) PPC_WEAK_FUNC(sub_832C8554);
PPC_FUNC_IMPL(__imp__sub_832C8554) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832C8558"))) PPC_WEAK_FUNC(sub_832C8558);
PPC_FUNC_IMPL(__imp__sub_832C8558) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x832C8560;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,0(r4)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// lwz r3,412(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 412);
	// bl 0x832c77e0
	ctx.lr = 0x832C8598;
	sub_832C77E0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge 0x832c85bc
	if (!cr0.lt) goto loc_832C85BC;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r10,r10,-2
	ctx.r10.s64 = ctx.r10.s64 + -2;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// b 0x832c85e4
	goto loc_832C85E4;
loc_832C85BC:
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r29,400
	ctx.r11.s64 = ctx.r29.s64 + 400;
	// stw r10,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r10.u32);
	// lwz r10,404(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 404);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x832c85dc
	if (cr6.eq) goto loc_832C85DC;
	// stw r30,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r30.u32);
	// b 0x832c85e0
	goto loc_832C85E0;
loc_832C85DC:
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
loc_832C85E0:
	// stw r30,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r30.u32);
loc_832C85E4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832C85EC"))) PPC_WEAK_FUNC(sub_832C85EC);
PPC_FUNC_IMPL(__imp__sub_832C85EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832C85F0"))) PPC_WEAK_FUNC(sub_832C85F0);
PPC_FUNC_IMPL(__imp__sub_832C85F0) {
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
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x832c864c
	if (cr6.eq) goto loc_832C864C;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x832c8630
	if (cr6.eq) goto loc_832C8630;
	// lis r4,24970
	ctx.r4.s64 = 1636433920;
	// ori r4,r4,3
	ctx.r4.u64 = ctx.r4.u64 | 3;
	// bl 0x832d53c8
	ctx.lr = 0x832C862C;
	sub_832D53C8(ctx, base);
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
loc_832C8630:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x832c7d90
	ctx.lr = 0x832C8638;
	sub_832C7D90(ctx, base);
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// lis r4,24970
	ctx.r4.s64 = 1636433920;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r4,r4,32787
	ctx.r4.u64 = ctx.r4.u64 | 32787;
	// bl 0x832d53c8
	ctx.lr = 0x832C864C;
	sub_832D53C8(ctx, base);
loc_832C864C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832C8664"))) PPC_WEAK_FUNC(sub_832C8664);
PPC_FUNC_IMPL(__imp__sub_832C8664) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832C8668"))) PPC_WEAK_FUNC(sub_832C8668);
PPC_FUNC_IMPL(__imp__sub_832C8668) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x832C8670;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r28,-32768
	ctx.r28.s64 = -2147483648;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// ori r28,r28,16389
	ctx.r28.u64 = ctx.r28.u64 | 16389;
	// bl 0x832c7fc8
	ctx.lr = 0x832C8684;
	sub_832C7FC8(ctx, base);
	// li r27,0
	ctx.r27.s64 = 0;
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x832c87dc
	if (cr0.eq) goto loc_832C87DC;
	// lwz r29,392(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 392);
	// addi r31,r30,392
	ctx.r31.s64 = ctx.r30.s64 + 392;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x832c87d8
	if (cr6.eq) goto loc_832C87D8;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// ld r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r30.u32 + 16);
	// ld r9,24(r10)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r10.u32 + 24);
	// cmpld cr6,r9,r11
	cr6.compare<uint64_t>(ctx.r9.u64, ctx.r11.u64, xer);
	// beq cr6,0x832c8754
	if (cr6.eq) goto loc_832C8754;
	// lwz r11,316(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 316);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,316(r30)
	PPC_STORE_U32(ctx.r30.u32 + 316, ctx.r11.u32);
	// lwz r11,372(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 372);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x832c87d0
	if (cr6.eq) goto loc_832C87D0;
	// lwz r31,384(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 384);
	// addi r29,r30,384
	ctx.r29.s64 = ctx.r30.s64 + 384;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x832c8810
	if (cr6.eq) goto loc_832C8810;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// bne cr6,0x832c86ec
	if (!cr6.eq) goto loc_832C86EC;
	// stw r27,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r27.u32);
loc_832C86EC:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r4,r30,328
	ctx.r4.s64 = ctx.r30.s64 + 328;
	// li r5,42
	ctx.r5.s64 = 42;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// stw r27,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r27.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x831ce980
	ctx.lr = 0x832C870C;
	sub_831CE980(ctx, base);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r11,42
	ctx.r11.s64 = 42;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832c8558
	ctx.lr = 0x832C8724;
	sub_832C8558(ctx, base);
	// mr. r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r28.s32, 0, xer);
	// bge 0x832c87c8
	if (!cr0.lt) goto loc_832C87C8;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r27,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r27.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// stw r31,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r31.u32);
	// bne cr6,0x832c87f0
	if (!cr6.eq) goto loc_832C87F0;
	// stw r31,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r31.u32);
	// b 0x832c87f0
	goto loc_832C87F0;
loc_832C8754:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x832c877c
	if (cr6.eq) goto loc_832C877C;
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// bne cr6,0x832c8770
	if (!cr6.eq) goto loc_832C8770;
	// stw r27,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r27.u32);
loc_832C8770:
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r27,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r27.u32);
loc_832C877C:
	// addi r3,r30,328
	ctx.r3.s64 = ctx.r30.s64 + 328;
	// lwz r5,12(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r4,8(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// bl 0x831ce980
	ctx.lr = 0x832C878C;
	sub_831CE980(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stw r11,372(r30)
	PPC_STORE_U32(ctx.r30.u32 + 372, ctx.r11.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832c8558
	ctx.lr = 0x832C87A0;
	sub_832C8558(ctx, base);
	// mr. r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r28.s32, 0, xer);
	// bge 0x832c87e4
	if (!cr0.lt) goto loc_832C87E4;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r11,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r11.u32);
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x832c87f0
	if (!cr6.eq) goto loc_832C87F0;
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
	// b 0x832c87f0
	goto loc_832C87F0;
loc_832C87C8:
	// stw r27,372(r30)
	PPC_STORE_U32(ctx.r30.u32 + 372, ctx.r27.u32);
	// b 0x832c87f0
	goto loc_832C87F0;
loc_832C87D0:
	// mr r28,r27
	ctx.r28.u64 = ctx.r27.u64;
	// b 0x832c87f0
	goto loc_832C87F0;
loc_832C87D8:
	// stw r27,76(r30)
	PPC_STORE_U32(ctx.r30.u32 + 76, ctx.r27.u32);
loc_832C87DC:
	// std r27,56(r30)
	PPC_STORE_U64(ctx.r30.u32 + 56, ctx.r27.u64);
	// b 0x832c87f0
	goto loc_832C87F0;
loc_832C87E4:
	// ld r11,56(r30)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r30.u32 + 56);
	// addi r11,r11,20
	ctx.r11.s64 = ctx.r11.s64 + 20;
	// std r11,56(r30)
	PPC_STORE_U64(ctx.r30.u32 + 56, ctx.r11.u64);
loc_832C87F0:
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(ctx.r28.s32, 0, xer);
	// blt cr6,0x832c8810
	if (cr6.lt) goto loc_832C8810;
	// ld r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r30.u32 + 16);
	// lwz r10,320(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 320);
	// addi r11,r11,20
	ctx.r11.s64 = ctx.r11.s64 + 20;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// std r11,16(r30)
	PPC_STORE_U64(ctx.r30.u32 + 16, ctx.r11.u64);
	// stw r10,320(r30)
	PPC_STORE_U32(ctx.r30.u32 + 320, ctx.r10.u32);
loc_832C8810:
	// ld r11,56(r30)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r30.u32 + 56);
	// cmpdi cr6,r11,0
	cr6.compare<int64_t>(ctx.r11.s64, 0, xer);
	// ble cr6,0x832c8824
	if (!cr6.gt) goto loc_832C8824;
	// addi r11,r11,-20
	ctx.r11.s64 = ctx.r11.s64 + -20;
	// std r11,56(r30)
	PPC_STORE_U64(ctx.r30.u32 + 56, ctx.r11.u64);
loc_832C8824:
	// lwz r31,400(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 400);
	// addi r29,r30,400
	ctx.r29.s64 = ctx.r30.s64 + 400;
	// b 0x832c88cc
	goto loc_832C88CC;
loc_832C8830:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r11,259
	cr6.compare<int32_t>(ctx.r11.s32, 259, xer);
	// beq cr6,0x832c88d4
	if (cr6.eq) goto loc_832C88D4;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x832c8868
	if (cr6.eq) goto loc_832C8868;
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x832c885c
	if (!cr6.eq) goto loc_832C885C;
	// stw r27,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r27.u32);
loc_832C885C:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r10.u32);
	// stw r27,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r27.u32);
loc_832C8868:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r10,r10,-2
	ctx.r10.s64 = ctx.r10.s64 + -2;
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r27,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r27.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r5,12(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x832d27b0
	ctx.lr = 0x832C88A4;
	sub_832D27B0(ctx, base);
	// stw r27,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r27.u32);
	// addi r11,r30,384
	ctx.r11.s64 = ctx.r30.s64 + 384;
	// lwz r10,388(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 388);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x832c88c0
	if (cr6.eq) goto loc_832C88C0;
	// stw r31,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r31.u32);
	// b 0x832c88c4
	goto loc_832C88C4;
loc_832C88C0:
	// stw r31,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
loc_832C88C4:
	// stw r31,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r31.u32);
	// lwz r31,0(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
loc_832C88CC:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// bne cr6,0x832c8830
	if (!cr6.eq) goto loc_832C8830;
loc_832C88D4:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832C88E0"))) PPC_WEAK_FUNC(sub_832C88E0);
PPC_FUNC_IMPL(__imp__sub_832C88E0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x832C88E8;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lhz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// li r25,0
	ctx.r25.s64 = 0;
	// lwz r10,76(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// mr r28,r25
	ctx.r28.u64 = ctx.r25.u64;
	// rlwinm r29,r11,31,21,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FF;
	// rlwinm r30,r11,20,12,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 20) & 0xFFFFF;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x832c893c
	if (!cr6.eq) goto loc_832C893C;
	// lwz r11,324(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 324);
	// bl 0x832d30f8
	ctx.lr = 0x832C8920;
	sub_832D30F8(ctx, base);
	// clrldi r11,r3,32
	ctx.r11.u64 = ctx.r3.u64 & 0xFFFFFFFF;
	// stb r30,308(r31)
	PPC_STORE_U8(ctx.r31.u32 + 308, ctx.r30.u8);
	// sth r29,32(r31)
	PPC_STORE_U16(ctx.r31.u32 + 32, ctx.r29.u16);
	// std r11,24(r31)
	PPC_STORE_U64(ctx.r31.u32 + 24, ctx.r11.u64);
	// li r11,1
	ctx.r11.s64 = 1;
	// std r25,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r25.u64);
	// stw r11,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
loc_832C893C:
	// lbz r11,308(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 308);
	// clrlwi r27,r30,24
	ctx.r27.u64 = ctx.r30.u32 & 0xFF;
	// cmplw cr6,r27,r11
	cr6.compare<uint32_t>(ctx.r27.u32, ctx.r11.u32, xer);
	// beq cr6,0x832c8958
	if (cr6.eq) goto loc_832C8958;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832c8320
	ctx.lr = 0x832C8954;
	sub_832C8320(ctx, base);
	// stb r30,308(r31)
	PPC_STORE_U8(ctx.r31.u32 + 308, ctx.r30.u8);
loc_832C8958:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832c8058
	ctx.lr = 0x832C8968;
	sub_832C8058(ctx, base);
	// lwz r11,304(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 304);
	// cmplwi cr6,r3,1
	cr6.compare<uint32_t>(ctx.r3.u32, 1, xer);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,304(r31)
	PPC_STORE_U32(ctx.r31.u32 + 304, ctx.r11.u32);
	// blt cr6,0x832c89a8
	if (cr6.lt) goto loc_832C89A8;
	// beq cr6,0x832c8a28
	if (cr6.eq) goto loc_832C8A28;
	// cmplwi cr6,r3,3
	cr6.compare<uint32_t>(ctx.r3.u32, 3, xer);
	// bge cr6,0x832c8a60
	if (!cr6.lt) goto loc_832C8A60;
	// lwz r11,380(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 380);
	// lwz r10,376(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 376);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x832c8a5c
	if (!cr6.lt) goto loc_832C8A5C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832c8250
	ctx.lr = 0x832C89A0;
	sub_832C8250(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x832c8058
	ctx.lr = 0x832C89A8;
	sub_832C8058(ctx, base);
loc_832C89A8:
	// lwz r30,384(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 384);
	// addi r29,r31,384
	ctx.r29.s64 = ctx.r31.s64 + 384;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x832c8a5c
	if (cr6.eq) goto loc_832C8A5C;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, xer);
	// bne cr6,0x832c89c8
	if (!cr6.eq) goto loc_832C89C8;
	// stw r25,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r25.u32);
loc_832C89C8:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// ld r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r25,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r25.u32);
	// std r10,24(r11)
	PPC_STORE_U64(ctx.r11.u32 + 24, ctx.r10.u64);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x831ce980
	ctx.lr = 0x832C89F4;
	sub_831CE980(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r24,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r24.u32);
	// bl 0x832c8180
	ctx.lr = 0x832C8A08;
	sub_832C8180(ctx, base);
	// mr. r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r28.s32, 0, xer);
	// bge 0x832c8a60
	if (!cr0.lt) goto loc_832C8A60;
	// stw r25,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r25.u32);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x832c8a48
	if (cr6.eq) goto loc_832C8A48;
	// stw r30,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r30.u32);
	// b 0x832c8a4c
	goto loc_832C8A4C;
loc_832C8A28:
	// lbz r11,308(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 308);
	// li r28,1
	ctx.r28.s64 = 1;
	// cmplw cr6,r27,r11
	cr6.compare<uint32_t>(ctx.r27.u32, ctx.r11.u32, xer);
	// bne cr6,0x832c8a60
	if (!cr6.eq) goto loc_832C8A60;
	// lwz r11,312(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 312);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 312, ctx.r11.u32);
	// b 0x832c8a60
	goto loc_832C8A60;
loc_832C8A48:
	// stw r30,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r30.u32);
loc_832C8A4C:
	// stw r30,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r30.u32);
	// lwz r11,304(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 304);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,304(r31)
	PPC_STORE_U32(ctx.r31.u32 + 304, ctx.r11.u32);
loc_832C8A5C:
	// li r28,1
	ctx.r28.s64 = 1;
loc_832C8A60:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832C8A6C"))) PPC_WEAK_FUNC(sub_832C8A6C);
PPC_FUNC_IMPL(__imp__sub_832C8A6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832C8A70"))) PPC_WEAK_FUNC(sub_832C8A70);
PPC_FUNC_IMPL(__imp__sub_832C8A70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// ld r9,40(r3)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r3.u32 + 40);
	// li r8,20
	ctx.r8.s64 = 20;
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r10,392(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 392);
	// divdu r9,r9,r8
	ctx.r9.u64 = PPCDivide(ctx.r9.u64, ctx.r8.u64);
	// addi r8,r3,392
	ctx.r8.s64 = ctx.r3.s64 + 392;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// std r11,24(r3)
	PPC_STORE_U64(ctx.r3.u32 + 24, ctx.r11.u64);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r11,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, ctx.r11.u32);
	// sth r9,68(r3)
	PPC_STORE_U16(ctx.r3.u32 + 68, ctx.r9.u16);
	// std r11,296(r3)
	PPC_STORE_U64(ctx.r3.u32 + 296, ctx.r11.u64);
	// stw r11,304(r3)
	PPC_STORE_U32(ctx.r3.u32 + 304, ctx.r11.u32);
	// stb r11,308(r3)
	PPC_STORE_U8(ctx.r3.u32 + 308, ctx.r11.u8);
	// stw r11,312(r3)
	PPC_STORE_U32(ctx.r3.u32 + 312, ctx.r11.u32);
	// beq cr6,0x832c8b08
	if (cr6.eq) goto loc_832C8B08;
	// addi r7,r3,384
	ctx.r7.s64 = ctx.r3.s64 + 384;
loc_832C8AB4:
	// lwz r9,0(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x832c8adc
	if (cr6.eq) goto loc_832C8ADC;
	// lwz r6,4(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// cmplw cr6,r9,r6
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r6.u32, xer);
	// bne cr6,0x832c8ad0
	if (!cr6.eq) goto loc_832C8AD0;
	// stw r11,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r11.u32);
loc_832C8AD0:
	// lwz r6,4(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stw r6,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r6.u32);
	// stw r11,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r11.u32);
loc_832C8ADC:
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// lwz r9,4(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x832c8af4
	if (cr6.eq) goto loc_832C8AF4;
	// stw r10,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r10.u32);
	// b 0x832c8af8
	goto loc_832C8AF8;
loc_832C8AF4:
	// stw r10,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r10.u32);
loc_832C8AF8:
	// stw r10,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r10.u32);
	// lwz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x832c8ab4
	if (!cr6.eq) goto loc_832C8AB4;
loc_832C8B08:
	// li r10,25
	ctx.r10.s64 = 25;
	// addi r11,r3,72
	ctx.r11.s64 = ctx.r3.s64 + 72;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_832C8B14:
	// ld r10,280(r3)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r3.u32 + 280);
	// stdu r10,8(r11)
	ea = 8 + ctx.r11.u32;
	PPC_STORE_U64(ea, ctx.r10.u64);
	ctx.r11.u32 = ea;
	// bdnz 0x832c8b14
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_832C8B14;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832C8B24"))) PPC_WEAK_FUNC(sub_832C8B24);
PPC_FUNC_IMPL(__imp__sub_832C8B24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832C8B28"))) PPC_WEAK_FUNC(sub_832C8B28);
PPC_FUNC_IMPL(__imp__sub_832C8B28) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x832C8B30;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// lis r4,24970
	ctx.r4.s64 = 1636433920;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,416
	ctx.r3.s64 = 416;
	// ori r4,r4,32787
	ctx.r4.u64 = ctx.r4.u64 | 32787;
	// bl 0x832d5290
	ctx.lr = 0x832C8B4C;
	sub_832D5290(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// li r29,0
	ctx.r29.s64 = 0;
	// bne 0x832c8b7c
	if (!cr0.eq) goto loc_832C8B7C;
loc_832C8B58:
	// lis r30,-32761
	ctx.r30.s64 = -2147024896;
	// ori r30,r30,14
	ctx.r30.u64 = ctx.r30.u64 | 14;
loc_832C8B60:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832c85f0
	ctx.lr = 0x832C8B68;
	sub_832C85F0(ctx, base);
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
loc_832C8B6C:
	// stw r31,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r31.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_832C8B7C:
	// lis r8,-32220
	ctx.r8.s64 = -2111569920;
	// stw r30,412(r31)
	PPC_STORE_U32(ctx.r31.u32 + 412, ctx.r30.u32);
	// lis r7,-32220
	ctx.r7.s64 = -2111569920;
	// stw r29,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r29.u32);
	// li r11,25
	ctx.r11.s64 = 25;
	// li r10,240
	ctx.r10.s64 = 240;
	// li r9,28
	ctx.r9.s64 = 28;
	// lfd f0,-18720(r8)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r8.u32 + -18720);
	// li r6,12
	ctx.r6.s64 = 12;
	// lfd f13,-18728(r7)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r7.u32 + -18728);
	// li r8,4
	ctx.r8.s64 = 4;
	// li r7,10
	ctx.r7.s64 = 10;
	// std r10,48(r31)
	PPC_STORE_U64(ctx.r31.u32 + 48, ctx.r10.u64);
	// li r5,1
	ctx.r5.s64 = 1;
	// std r10,40(r31)
	PPC_STORE_U64(ctx.r31.u32 + 40, ctx.r10.u64);
	// stfd f0,288(r31)
	PPC_STORE_U64(ctx.r31.u32 + 288, ctx.f0.u64);
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// stfd f13,280(r31)
	PPC_STORE_U64(ctx.r31.u32 + 280, ctx.f13.u64);
	// sth r6,68(r31)
	PPC_STORE_U16(ctx.r31.u32 + 68, ctx.r6.u16);
	// sth r8,72(r31)
	PPC_STORE_U16(ctx.r31.u32 + 72, ctx.r8.u16);
	// addi r10,r31,72
	ctx.r10.s64 = ctx.r31.s64 + 72;
	// sth r9,70(r31)
	PPC_STORE_U16(ctx.r31.u32 + 70, ctx.r9.u16);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// stw r7,380(r31)
	PPC_STORE_U32(ctx.r31.u32 + 380, ctx.r7.u32);
	// stw r5,324(r31)
	PPC_STORE_U32(ctx.r31.u32 + 324, ctx.r5.u32);
loc_832C8BE0:
	// lfd f0,280(r31)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r31.u32 + 280);
	// stfdu f0,8(r10)
	ea = 8 + ctx.r10.u32;
	PPC_STORE_U64(ea, ctx.f0.u64);
	ctx.r10.u32 = ea;
	// bdnz 0x832c8be0
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_832C8BE0;
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r4,32
	ctx.r4.s64 = 32;
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// addi r3,r11,2
	ctx.r3.s64 = ctx.r11.s64 + 2;
	// bl 0x832c7ed8
	ctx.lr = 0x832C8C0C;
	sub_832C7ED8(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// blt 0x832c8b60
	if (cr0.lt) goto loc_832C8B60;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lis r4,24970
	ctx.r4.s64 = 1636433920;
	// ori r4,r4,3
	ctx.r4.u64 = ctx.r4.u64 | 3;
	// rlwinm r3,r11,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x832d5290
	ctx.lr = 0x832C8C28;
	sub_832D5290(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// beq 0x832c8b58
	if (cr0.eq) goto loc_832C8B58;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// ble cr6,0x832c8b6c
	if (!cr6.gt) goto loc_832C8B6C;
	// addi r7,r31,384
	ctx.r7.s64 = ctx.r31.s64 + 384;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_832C8C4C:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mullw r9,r9,r8
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r8.s32);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stwx r10,r6,r11
	PPC_STORE_U32(ctx.r6.u32 + ctx.r11.u32, ctx.r10.u32);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r29,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r29.u32);
	// lwz r9,4(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x832c8c88
	if (cr6.eq) goto loc_832C8C88;
	// stw r10,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r10.u32);
	// b 0x832c8c8c
	goto loc_832C8C8C;
loc_832C8C88:
	// stw r10,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r10.u32);
loc_832C8C8C:
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// stw r10,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r10.u32);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmplw cr6,r8,r10
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, xer);
	// blt cr6,0x832c8c4c
	if (cr6.lt) goto loc_832C8C4C;
	// b 0x832c8b6c
	goto loc_832C8B6C;
}

__attribute__((alias("__imp__sub_832C8CA8"))) PPC_WEAK_FUNC(sub_832C8CA8);
PPC_FUNC_IMPL(__imp__sub_832C8CA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// addi r3,r11,22268
	ctx.r3.s64 = ctx.r11.s64 + 22268;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832C8CB4"))) PPC_WEAK_FUNC(sub_832C8CB4);
PPC_FUNC_IMPL(__imp__sub_832C8CB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832C8CB8"))) PPC_WEAK_FUNC(sub_832C8CB8);
PPC_FUNC_IMPL(__imp__sub_832C8CB8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832C8CC8"))) PPC_WEAK_FUNC(sub_832C8CC8);
PPC_FUNC_IMPL(__imp__sub_832C8CC8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_832C8CD8"))) PPC_WEAK_FUNC(sub_832C8CD8);
PPC_FUNC_IMPL(__imp__sub_832C8CD8) {
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
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r11,22848
	ctx.r4.s64 = ctx.r11.s64 + 22848;
	// bl 0x839fd718
	ctx.lr = 0x832C8CFC;
	sub_839FD718(ctx, base);
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r11,r11,-18672
	ctx.r11.s64 = ctx.r11.s64 + -18672;
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// addi r3,r31,36
	ctx.r3.s64 = ctx.r31.s64 + 36;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// li r5,2064
	ctx.r5.s64 = 2064;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x832d27b0
	ctx.lr = 0x832C8D20;
	sub_832D27B0(ctx, base);
	// addi r3,r31,2100
	ctx.r3.s64 = ctx.r31.s64 + 2100;
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x832d27b0
	ctx.lr = 0x832C8D30;
	sub_832D27B0(ctx, base);
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// stw r30,2120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2120, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,2124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2124, ctx.r30.u32);
	// stw r30,2128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2128, ctx.r30.u32);
	// lfs f0,-26260(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -26260);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,2116(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2116, temp.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832C8D64"))) PPC_WEAK_FUNC(sub_832C8D64);
PPC_FUNC_IMPL(__imp__sub_832C8D64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832C8D68"))) PPC_WEAK_FUNC(sub_832C8D68);
PPC_FUNC_IMPL(__imp__sub_832C8D68) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
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
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r10,r11,-18596
	ctx.r10.s64 = ctx.r11.s64 + -18596;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// addi r9,r4,16
	ctx.r9.s64 = ctx.r4.s64 + 16;
loc_832C8D8C:
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r8,r7,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r7.s64;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bne 0x832c8dac
	if (!cr0.eq) goto loc_832C8DAC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, xer);
	// bne cr6,0x832c8d8c
	if (!cr6.eq) goto loc_832C8D8C;
loc_832C8DAC:
	// cmpwi r8,0
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq 0x832c8dec
	if (cr0.eq) goto loc_832C8DEC;
	// lis r10,-32220
	ctx.r10.s64 = -2111569920;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// addi r10,r10,-18612
	ctx.r10.s64 = ctx.r10.s64 + -18612;
	// addi r8,r4,16
	ctx.r8.s64 = ctx.r4.s64 + 16;
loc_832C8DC4:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x832c8de4
	if (!cr0.eq) goto loc_832C8DE4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, xer);
	// bne cr6,0x832c8dc4
	if (!cr6.eq) goto loc_832C8DC4;
loc_832C8DE4:
	// cmpwi r9,0
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x832c8e04
	if (!cr0.eq) goto loc_832C8E04;
loc_832C8DEC:
	// stw r3,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r3.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832C8E00;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x832c8e14
	goto loc_832C8E14;
loc_832C8E04:
	// lis r31,-32768
	ctx.r31.s64 = -2147483648;
	// li r11,0
	ctx.r11.s64 = 0;
	// ori r31,r31,16386
	ctx.r31.u64 = ctx.r31.u64 | 16386;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
loc_832C8E14:
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

__attribute__((alias("__imp__sub_832C8E2C"))) PPC_WEAK_FUNC(sub_832C8E2C);
PPC_FUNC_IMPL(__imp__sub_832C8E2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832C8E30"))) PPC_WEAK_FUNC(sub_832C8E30);
PPC_FUNC_IMPL(__imp__sub_832C8E30) {
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
	// addi r11,r3,28
	ctx.r11.s64 = ctx.r3.s64 + 28;
loc_832C8E44:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r11
	ea = ctx.r11.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stwcx. r10,0,r11
	ea = ctx.r11.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x832c8e44
	if (!cr0.eq) goto loc_832C8E44;
	// mr r31,r10
	ctx.r31.u64 = ctx.r10.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x832c8e88
	if (!cr6.eq) goto loc_832C8E88;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x832c8e88
	if (cr6.eq) goto loc_832C8E88;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,56(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832C8E88;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_832C8E88:
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

__attribute__((alias("__imp__sub_832C8EA0"))) PPC_WEAK_FUNC(sub_832C8EA0);
PPC_FUNC_IMPL(__imp__sub_832C8EA0) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832C8EA8"))) PPC_WEAK_FUNC(sub_832C8EA8);
PPC_FUNC_IMPL(__imp__sub_832C8EA8) {
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
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// bl 0x839fd3d8
	ctx.lr = 0x832C8EC8;
	sub_839FD3D8(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x832c8f40
	if (cr0.lt) goto loc_832C8F40;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r11,-30569
	ctx.r11.s64 = -2003369984;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lhz r9,2(r10)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + 2);
	// cmplwi cr6,r9,4
	cr6.compare<uint32_t>(ctx.r9.u32, 4, xer);
	// bne cr6,0x832c8ef8
	if (!cr6.eq) goto loc_832C8EF8;
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lhz r9,2(r9)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r9.u32 + 2);
	// cmplwi cr6,r9,4
	cr6.compare<uint32_t>(ctx.r9.u32, 4, xer);
	// beq cr6,0x832c8efc
	if (cr6.eq) goto loc_832C8EFC;
loc_832C8EF8:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
loc_832C8EFC:
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x832c8f40
	if (cr6.lt) goto loc_832C8F40;
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r8,4(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplw cr6,r9,r8
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, xer);
	// beq cr6,0x832c8f18
	if (cr6.eq) goto loc_832C8F18;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
loc_832C8F18:
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x832c8f40
	if (cr6.lt) goto loc_832C8F40;
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplwi cr6,r10,16125
	cr6.compare<uint32_t>(ctx.r10.u32, 16125, xer);
	// bne cr6,0x832c8f3c
	if (!cr6.eq) goto loc_832C8F3C;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplwi cr6,r10,16125
	cr6.compare<uint32_t>(ctx.r10.u32, 16125, xer);
	// beq cr6,0x832c8f40
	if (cr6.eq) goto loc_832C8F40;
loc_832C8F3C:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
loc_832C8F40:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832C8F58"))) PPC_WEAK_FUNC(sub_832C8F58);
PPC_FUNC_IMPL(__imp__sub_832C8F58) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdac0
	ctx.lr = 0x832C8F60;
	__savegprlr_18(ctx, base);
	// addi r12,r1,-120
	ctx.r12.s64 = ctx.r1.s64 + -120;
	// bl 0x831ce774
	ctx.lr = 0x832C8F68;
	__savefpr_27(ctx, base);
	// li r12,-176
	ctx.r12.s64 = -176;
	// stvx128 v127,r1,r12
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r1.u32 + ctx.r12.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v127.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lis r10,-32203
	ctx.r10.s64 = -2110455808;
	// li r22,0
	ctx.r22.s64 = 0;
	// addi r10,r10,9312
	ctx.r10.s64 = ctx.r10.s64 + 9312;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r23,r5
	ctx.r23.u64 = ctx.r5.u64;
	// lwz r9,1220(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1220);
	// mr r20,r7
	ctx.r20.u64 = ctx.r7.u64;
	// li r19,1
	ctx.r19.s64 = 1;
	// lvx128 v127,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v127.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// mr r21,r22
	ctx.r21.u64 = ctx.r22.u64;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x832c8fb8
	if (cr6.eq) goto loc_832C8FB8;
	// lwz r10,1216(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1216);
	// mr r24,r19
	ctx.r24.u64 = ctx.r19.u64;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x832c8fbc
	if (!cr6.eq) goto loc_832C8FBC;
loc_832C8FB8:
	// mr r24,r22
	ctx.r24.u64 = ctx.r22.u64;
loc_832C8FBC:
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mr r18,r22
	ctx.r18.u64 = ctx.r22.u64;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x832c9594
	if (cr6.eq) goto loc_832C9594;
	// stw r19,76(r11)
	PPC_STORE_U32(ctx.r11.u32 + 76, ctx.r19.u32);
	// lwz r11,4(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 4);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x832c94b4
	if (!cr6.eq) goto loc_832C94B4;
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// lwz r26,0(r23)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// mr r27,r22
	ctx.r27.u64 = ctx.r22.u64;
	// addi r31,r28,2100
	ctx.r31.s64 = ctx.r28.s64 + 2100;
	// addi r29,r28,40
	ctx.r29.s64 = ctx.r28.s64 + 40;
	// subfic r25,r28,-2016
	xer.ca = ctx.r28.u32 <= 4294965280;
	ctx.r25.s64 = -2016 - ctx.r28.s64;
	// lfs f31,-18580(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -18580);
	ctx.f31.f64 = double(temp.f32);
loc_832C8FF8:
	// lwz r11,32(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 32);
	// add r10,r25,r31
	ctx.r10.u64 = ctx.r25.u64 + ctx.r31.u64;
	// lwzx r30,r10,r11
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x832c90f0
	if (cr6.eq) goto loc_832C90F0;
	// lwz r11,212(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 212);
	// rlwinm. r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x832c90f0
	if (cr0.eq) goto loc_832C90F0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832c5f88
	ctx.lr = 0x832C9020;
	sub_832C5F88(ctx, base);
	// lis r11,28672
	ctx.r11.s64 = 1879048192;
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, xer);
	// beq cr6,0x832c90f0
	if (cr6.eq) goto loc_832C90F0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lfs f0,196(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 196);
	ctx.f0.f64 = double(temp.f32);
	// lwz r9,8(r23)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r23.u32 + 8);
	// mr r10,r22
	ctx.r10.u64 = ctx.r22.u64;
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// mulli r11,r11,172
	ctx.r11.s64 = ctx.r11.s64 * 172;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// addi r11,r11,36
	ctx.r11.s64 = ctx.r11.s64 + 36;
	// ble cr6,0x832c90a8
	if (!cr6.gt) goto loc_832C90A8;
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
loc_832C9058:
	// lfs f13,0(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fmuls f13,f13,f31
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f31.f64));
	// fctiwz f13,f13
	ctx.f13.s64 = (ctx.f13.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f13,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// lwz r8,84(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r8,32767
	cr6.compare<int32_t>(ctx.r8.s32, 32767, xer);
	// blt cr6,0x832c9080
	if (cr6.lt) goto loc_832C9080;
	// li r8,32767
	ctx.r8.s64 = 32767;
	// b 0x832c908c
	goto loc_832C908C;
loc_832C9080:
	// cmpwi cr6,r8,-32768
	cr6.compare<int32_t>(ctx.r8.s32, -32768, xer);
	// bgt cr6,0x832c908c
	if (cr6.gt) goto loc_832C908C;
	// li r8,-32738
	ctx.r8.s64 = -32738;
loc_832C908C:
	// sth r8,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r8.u16);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// addi r9,r9,16
	ctx.r9.s64 = ctx.r9.s64 + 16;
	// lwz r8,8(r23)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r23.u32 + 8);
	// cmplw cr6,r10,r8
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, xer);
	// blt cr6,0x832c9058
	if (cr6.lt) goto loc_832C9058;
loc_832C90A8:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// blt cr6,0x832c90f4
	if (cr6.lt) goto loc_832C90F4;
	// li r11,128
	ctx.r11.s64 = 128;
	// stw r22,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r22.u32);
	// addi r4,r29,-4
	ctx.r4.s64 = ctx.r29.s64 + -4;
	// addi r9,r29,-4
	ctx.r9.s64 = ctx.r29.s64 + -4;
	// addi r10,r29,-4
	ctx.r10.s64 = ctx.r29.s64 + -4;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
loc_832C90D4:
	// lhzu r11,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r11.u64 = PPC_LOAD_U16(ea);
	ctx.r10.u32 = ea;
	// sthu r11,2(r9)
	ea = 2 + ctx.r9.u32;
	PPC_STORE_U16(ea, ctx.r11.u16);
	ctx.r9.u32 = ea;
	// bdnz 0x832c90d4
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_832C90D4;
	// li r5,258
	ctx.r5.s64 = 258;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832c63e8
	ctx.lr = 0x832C90EC;
	sub_832C63E8(ctx, base);
	// b 0x832c90f4
	goto loc_832C90F4;
loc_832C90F0:
	// stw r22,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r22.u32);
loc_832C90F4:
	// addi r27,r27,3
	ctx.r27.s64 = ctx.r27.s64 + 3;
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// addi r29,r29,516
	ctx.r29.s64 = ctx.r29.s64 + 516;
	// cmplwi cr6,r27,12
	cr6.compare<uint32_t>(ctx.r27.u32, 12, xer);
	// blt cr6,0x832c8ff8
	if (cr6.lt) goto loc_832C8FF8;
	// li r11,4
	ctx.r11.s64 = 4;
	// lwz r9,32(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 32);
	// addi r7,r1,128
	ctx.r7.s64 = ctx.r1.s64 + 128;
	// addi r8,r1,128
	ctx.r8.s64 = ctx.r1.s64 + 128;
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// subfic r8,r8,84
	xer.ca = ctx.r8.u32 <= 84;
	ctx.r8.s64 = 84 - ctx.r8.s64;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stvx128 v127,r0,r7
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r7.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v127.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f27,9008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f27.f64 = double(temp.f32);
loc_832C9134:
	// add r11,r9,r8
	ctx.r11.u64 = ctx.r9.u64 + ctx.r8.u64;
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x832c9158
	if (cr6.eq) goto loc_832C9158;
	// lfs f0,208(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 208);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f27
	cr6.compare(ctx.f0.f64, ctx.f27.f64);
	// ble cr6,0x832c9154
	if (!cr6.gt) goto loc_832C9154;
	// mr r18,r19
	ctx.r18.u64 = ctx.r19.u64;
loc_832C9154:
	// stfs f0,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
loc_832C9158:
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x832c9134
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_832C9134;
	// cmpwi cr6,r24,0
	cr6.compare<int32_t>(ctx.r24.s32, 0, xer);
	// li r9,1376
	ctx.r9.s64 = 1376;
	// beq cr6,0x832c9464
	if (cr6.eq) goto loc_832C9464;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// vor128 v13,v127,v127
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_load_si128((simde__m128i*)ctx.v127.u8));
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// stvx128 v13,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// dcbt r9,r11
	// lwz r10,8(r23)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r23.u32 + 8);
	// mr r9,r22
	ctx.r9.u64 = ctx.r22.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x832c91b0
	if (cr6.eq) goto loc_832C91B0;
loc_832C9190:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// lvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmaddfp v13,v0,v0,v13
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v13.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v0.f32)), simde_mm_load_ps(ctx.v13.f32)));
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// blt cr6,0x832c9190
	if (cr6.lt) goto loc_832C9190;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// stvx128 v13,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
loc_832C91B0:
	// clrldi r11,r10,32
	ctx.r11.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// lfs f29,-26260(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -26260);
	ctx.f29.f64 = double(temp.f32);
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// fdivs f0,f29,f0
	ctx.f0.f64 = double(float(ctx.f29.f64 / ctx.f0.f64));
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// lvx128 v63,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmulfp128 v63,v13,v63
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v63.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v63.f32)));
	// stvx128 v63,r0,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x83d75e9c
	ctx.lr = 0x832C91F8;
	__imp__XAudioGetDuckerThreshold(ctx, base);
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// lfs f0,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f1
	cr6.compare(ctx.f0.f64, ctx.f1.f64);
	// lfs f28,-18568(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -18568);
	ctx.f28.f64 = double(temp.f32);
	// bge cr6,0x832c923c
	if (!cr6.lt) goto loc_832C923C;
	// bl 0x83d75e9c
	ctx.lr = 0x832C9210;
	__imp__XAudioGetDuckerThreshold(ctx, base);
	// lfs f0,100(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f1
	cr6.compare(ctx.f0.f64, ctx.f1.f64);
	// bge cr6,0x832c923c
	if (!cr6.lt) goto loc_832C923C;
	// bl 0x83d75e9c
	ctx.lr = 0x832C9220;
	__imp__XAudioGetDuckerThreshold(ctx, base);
	// lfs f0,104(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f1
	cr6.compare(ctx.f0.f64, ctx.f1.f64);
	// bge cr6,0x832c923c
	if (!cr6.lt) goto loc_832C923C;
	// bl 0x83d75e9c
	ctx.lr = 0x832C9230;
	__imp__XAudioGetDuckerThreshold(ctx, base);
	// lfs f0,108(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f1
	cr6.compare(ctx.f0.f64, ctx.f1.f64);
	// blt cr6,0x832c926c
	if (cr6.lt) goto loc_832C926C;
loc_832C923C:
	// bl 0x83d75e8c
	ctx.lr = 0x832C9240;
	__imp__XAudioGetDuckerHoldTime(ctx, base);
	// lwz r11,8(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 8);
	// fmuls f0,f1,f28
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f28.f64));
	// li r10,2120
	ctx.r10.s64 = 2120;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fdivs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// fctidz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// stfiwx f0,r28,r10
	PPC_STORE_U32(ctx.r28.u32 + ctx.r10.u32, ctx.f0.u32);
	// b 0x832c9280
	goto loc_832C9280;
loc_832C926C:
	// lwz r11,2120(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 2120);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble cr6,0x832c9284
	if (!cr6.gt) goto loc_832C9284;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,2120(r28)
	PPC_STORE_U32(ctx.r28.u32 + 2120, ctx.r11.u32);
loc_832C9280:
	// mr r21,r19
	ctx.r21.u64 = ctx.r19.u64;
loc_832C9284:
	// lwz r11,2128(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 2128);
	// cmpw cr6,r21,r11
	cr6.compare<int32_t>(ctx.r21.s32, ctx.r11.s32, xer);
	// beq cr6,0x832c92d0
	if (cr6.eq) goto loc_832C92D0;
	// lwz r11,2124(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 2124);
	// cmpwi cr6,r21,0
	cr6.compare<int32_t>(ctx.r21.s32, 0, xer);
	// stw r21,2128(r28)
	PPC_STORE_U32(ctx.r28.u32 + 2128, ctx.r21.u32);
	// beq cr6,0x832c92b8
	if (cr6.eq) goto loc_832C92B8;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// beq cr6,0x832c92b0
	if (cr6.eq) goto loc_832C92B0;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x832c92d0
	if (!cr6.eq) goto loc_832C92D0;
loc_832C92B0:
	// stw r19,2124(r28)
	PPC_STORE_U32(ctx.r28.u32 + 2124, ctx.r19.u32);
	// b 0x832c92d0
	goto loc_832C92D0;
loc_832C92B8:
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// beq cr6,0x832c92c8
	if (cr6.eq) goto loc_832C92C8;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bne cr6,0x832c92d0
	if (!cr6.eq) goto loc_832C92D0;
loc_832C92C8:
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,2124(r28)
	PPC_STORE_U32(ctx.r28.u32 + 2124, ctx.r11.u32);
loc_832C92D0:
	// lwz r11,2124(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 2124);
	// fmr f31,f29
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f29.f64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x832c92e8
	if (!cr6.eq) goto loc_832C92E8;
	// fmr f30,f29
	ctx.f30.f64 = ctx.f29.f64;
	// b 0x832c931c
	goto loc_832C931C;
loc_832C92E8:
	// bl 0x83d75e2c
	ctx.lr = 0x832C92EC;
	__imp__XAudioGetDuckerLevel(ctx, base);
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// lfs f0,-18572(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -18572);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bge cr6,0x832c9308
	if (!cr6.lt) goto loc_832C9308;
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// lfs f31,-18576(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -18576);
	ctx.f31.f64 = double(temp.f32);
	// b 0x832c930c
	goto loc_832C930C;
loc_832C9308:
	// fdivs f31,f29,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = double(float(ctx.f29.f64 / ctx.f1.f64));
loc_832C930C:
	// lwz r11,2124(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 2124);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bne cr6,0x832c9328
	if (!cr6.eq) goto loc_832C9328;
	// fmr f30,f31
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f31.f64;
loc_832C931C:
	// mr r31,r22
	ctx.r31.u64 = ctx.r22.u64;
	// fmr f0,f27
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f27.f64;
	// b 0x832c9354
	goto loc_832C9354;
loc_832C9328:
	// lfs f30,2116(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 2116);
	ctx.f30.f64 = double(temp.f32);
	// mr r31,r19
	ctx.r31.u64 = ctx.r19.u64;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x832c9344
	if (!cr6.eq) goto loc_832C9344;
	// bl 0x83d75e7c
	ctx.lr = 0x832C933C;
	__imp__XAudioGetDuckerAttackTime(ctx, base);
	// fsubs f13,f31,f29
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f31.f64 - ctx.f29.f64));
	// b 0x832c934c
	goto loc_832C934C;
loc_832C9344:
	// bl 0x83d75e6c
	ctx.lr = 0x832C9348;
	__imp__XAudioGetDuckerReleaseTime(ctx, base);
	// fsubs f13,f29,f31
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f29.f64 - ctx.f31.f64));
loc_832C934C:
	// fmuls f0,f1,f28
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f28.f64));
	// fdivs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 / ctx.f0.f64));
loc_832C9354:
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// stfs f30,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// stfs f30,84(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f30,88(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// stfs f30,92(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// lwz r10,0(r23)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// lwz r11,0(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// lvx128 v62,r0,r9
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r9,1376
	ctx.r9.s64 = 1376;
	// lvx128 v63,r0,r8
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmulfp128 v63,v63,v62
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v63.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v63.f32), simde_mm_load_ps(ctx.v62.f32)));
	// stfs f0,116(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f0,120(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f0,124(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// stvx128 v63,r0,r7
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r7.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// dcbt r9,r10
	// dcbt r9,r11
	// mr r9,r22
	ctx.r9.u64 = ctx.r22.u64;
	// lwz r8,8(r23)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r23.u32 + 8);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// ble cr6,0x832c9458
	if (!cr6.gt) goto loc_832C9458;
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r11.s64;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r10,r10,-2720
	ctx.r10.s64 = ctx.r10.s64 + -2720;
loc_832C93C0:
	// lvx128 v61,r8,r11
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r8.u32 + ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// clrlwi. r7,r31,24
	ctx.r7.u64 = ctx.r31.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r7.s32, 0, xer);
	// vmulfp128 v61,v61,v63
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v61.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v61.f32), simde_mm_load_ps(ctx.v63.f32)));
	// stvx128 v61,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// beq 0x832c9444
	if (cr0.eq) goto loc_832C9444;
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lvx128 v61,r0,r7
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r7.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddfp128 v63,v63,v61
	simde_mm_store_ps(ctx.v63.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v63.f32), simde_mm_load_ps(ctx.v61.f32)));
	// stvx128 v63,r0,r6
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r6.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// ble cr6,0x832c9410
	if (!cr6.gt) goto loc_832C9410;
	// li r7,2
	ctx.r7.s64 = 2;
	// stfs f31,80(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f31,84(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f31,88(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stw r7,2124(r28)
	PPC_STORE_U32(ctx.r28.u32 + 2124, ctx.r7.u32);
	// stfs f31,92(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// b 0x832c942c
	goto loc_832C942C;
loc_832C9410:
	// lfs f0,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f29
	cr6.compare(ctx.f0.f64, ctx.f29.f64);
	// bge cr6,0x832c9430
	if (!cr6.lt) goto loc_832C9430;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lvx128 v63,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stw r22,2124(r28)
	PPC_STORE_U32(ctx.r28.u32 + 2124, ctx.r22.u32);
	// stvx128 v63,r0,r7
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r7.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
loc_832C942C:
	// mr r31,r22
	ctx.r31.u64 = ctx.r22.u64;
loc_832C9430:
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// lvx128 v63,r0,r7
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r7.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmulfp128 v63,v63,v62
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v63.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v63.f32), simde_mm_load_ps(ctx.v62.f32)));
	// stvx128 v63,r0,r6
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r6.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
loc_832C9444:
	// lwz r7,8(r23)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r23.u32 + 8);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// cmplw cr6,r9,r7
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, xer);
	// blt cr6,0x832c93c0
	if (cr6.lt) goto loc_832C93C0;
loc_832C9458:
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,2116(r28)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r28.u32 + 2116, temp.u32);
	// b 0x832c958c
	goto loc_832C958C;
loc_832C9464:
	// lwz r10,0(r23)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// lwz r11,0(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	// dcbt r9,r10
	// li r9,1376
	ctx.r9.s64 = 1376;
	// dcbt r9,r11
	// mr r9,r22
	ctx.r9.u64 = ctx.r22.u64;
	// lwz r8,8(r23)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r23.u32 + 8);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x832c958c
	if (cr6.eq) goto loc_832C958C;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
loc_832C948C:
	// addi r7,r1,128
	ctx.r7.s64 = ctx.r1.s64 + 128;
	// lvx128 v63,r11,r10
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32 + ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmplw cr6,r9,r8
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, xer);
	// lvx128 v62,r0,r7
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r7.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmulfp128 v63,v63,v62
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v63.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v63.f32), simde_mm_load_ps(ctx.v62.f32)));
	// stvx128 v63,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// blt cr6,0x832c948c
	if (cr6.lt) goto loc_832C948C;
	// b 0x832c958c
	goto loc_832C958C;
loc_832C94B4:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x832c958c
	if (!cr6.eq) goto loc_832C958C;
	// mr r30,r22
	ctx.r30.u64 = ctx.r22.u64;
	// addi r31,r28,2100
	ctx.r31.s64 = ctx.r28.s64 + 2100;
	// addi r27,r28,36
	ctx.r27.s64 = ctx.r28.s64 + 36;
	// subfic r26,r28,-2016
	xer.ca = ctx.r28.u32 <= 4294965280;
	ctx.r26.s64 = -2016 - ctx.r28.s64;
loc_832C94CC:
	// lwz r11,32(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 32);
	// add r10,r31,r26
	ctx.r10.u64 = ctx.r31.u64 + ctx.r26.u64;
	// lwzx r29,r10,r11
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x832c955c
	if (cr6.eq) goto loc_832C955C;
	// lwz r11,212(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 212);
	// rlwinm. r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x832c955c
	if (cr0.eq) goto loc_832C955C;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x832c5f88
	ctx.lr = 0x832C94F4;
	sub_832C5F88(ctx, base);
	// lis r11,28672
	ctx.r11.s64 = 1879048192;
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, xer);
	// beq cr6,0x832c955c
	if (cr6.eq) goto loc_832C955C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,172
	ctx.r5.s64 = 172;
	// li r4,0
	ctx.r4.s64 = 0;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// mulli r11,r11,172
	ctx.r11.s64 = ctx.r11.s64 * 172;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// addi r3,r11,36
	ctx.r3.s64 = ctx.r11.s64 + 36;
	// bl 0x832d27b0
	ctx.lr = 0x832C9520;
	sub_832D27B0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// blt cr6,0x832c9560
	if (cr6.lt) goto loc_832C9560;
	// stw r22,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r22.u32);
	// li r5,256
	ctx.r5.s64 = 256;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r27,2
	ctx.r3.s64 = ctx.r27.s64 + 2;
	// bl 0x832d27b0
	ctx.lr = 0x832C9548;
	sub_832D27B0(ctx, base);
	// li r5,258
	ctx.r5.s64 = 258;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x832c63e8
	ctx.lr = 0x832C9558;
	sub_832C63E8(ctx, base);
	// b 0x832c9560
	goto loc_832C9560;
loc_832C955C:
	// stw r22,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r22.u32);
loc_832C9560:
	// addi r30,r30,3
	ctx.r30.s64 = ctx.r30.s64 + 3;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// addi r27,r27,516
	ctx.r27.s64 = ctx.r27.s64 + 516;
	// cmplwi cr6,r30,12
	cr6.compare<uint32_t>(ctx.r30.u32, 12, xer);
	// blt cr6,0x832c94cc
	if (cr6.lt) goto loc_832C94CC;
	// lwz r11,2120(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 2120);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble cr6,0x832c958c
	if (!cr6.gt) goto loc_832C958C;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mr r21,r19
	ctx.r21.u64 = ctx.r19.u64;
	// stw r11,2120(r28)
	PPC_STORE_U32(ctx.r28.u32 + 2120, ctx.r11.u32);
loc_832C958C:
	// lwz r11,32(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 32);
	// stw r22,76(r11)
	PPC_STORE_U32(ctx.r11.u32 + 76, ctx.r22.u32);
loc_832C9594:
	// lwz r11,32(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 32);
	// lwz r11,1220(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1220);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x832c95c0
	if (cr6.eq) goto loc_832C95C0;
	// cmpwi cr6,r21,0
	cr6.compare<int32_t>(ctx.r21.s32, 0, xer);
	// beq cr6,0x832c95b8
	if (cr6.eq) goto loc_832C95B8;
	// clrlwi. r11,r18,24
	ctx.r11.u64 = ctx.r18.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bne 0x832c95bc
	if (!cr0.eq) goto loc_832C95BC;
loc_832C95B8:
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
loc_832C95BC:
	// bl 0x83d75e5c
	ctx.lr = 0x832C95C0;
	__imp__XAudioEnableDucker(ctx, base);
loc_832C95C0:
	// lwz r11,8(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 8);
	// stw r11,8(r20)
	PPC_STORE_U32(ctx.r20.u32 + 8, ctx.r11.u32);
	// lwz r11,4(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 4);
	// stw r11,4(r20)
	PPC_STORE_U32(ctx.r20.u32 + 4, ctx.r11.u32);
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// li r0,-176
	ctx.r0.s64 = -176;
	// lvx128 v127,r1,r0
	simde_mm_store_si128((simde__m128i*)ctx.v127.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r1.u32 + ctx.r0.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r12,r1,-120
	ctx.r12.s64 = ctx.r1.s64 + -120;
	// bl 0x831ce7c0
	ctx.lr = 0x832C95E4;
	__restfpr_27(ctx, base);
	// b 0x831cdb10
	__restgprlr_18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832C95E8"))) PPC_WEAK_FUNC(sub_832C95E8);
PPC_FUNC_IMPL(__imp__sub_832C95E8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x832C95F0;
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
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x832c9614
	if (!cr6.eq) goto loc_832C9614;
	// lis r29,-32768
	ctx.r29.s64 = -2147483648;
	// ori r29,r29,16387
	ctx.r29.u64 = ctx.r29.u64 | 16387;
	// b 0x832c9654
	goto loc_832C9654;
loc_832C9614:
	// lis r4,24714
	ctx.r4.s64 = 1619656704;
	// li r3,2132
	ctx.r3.s64 = 2132;
	// ori r4,r4,8194
	ctx.r4.u64 = ctx.r4.u64 | 8194;
	// bl 0x832d5290
	ctx.lr = 0x832C9624;
	sub_832D5290(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x832c9634
	if (cr0.eq) goto loc_832C9634;
	// bl 0x832c8cd8
	ctx.lr = 0x832C9630;
	sub_832C8CD8(ctx, base);
	// b 0x832c9638
	goto loc_832C9638;
loc_832C9634:
	// li r3,0
	ctx.r3.s64 = 0;
loc_832C9638:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x832c964c
	if (cr6.eq) goto loc_832C964C;
	// stw r30,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r30.u32);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// b 0x832c9654
	goto loc_832C9654;
loc_832C964C:
	// lis r29,-32761
	ctx.r29.s64 = -2147024896;
	// ori r29,r29,14
	ctx.r29.u64 = ctx.r29.u64 | 14;
loc_832C9654:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832C9660"))) PPC_WEAK_FUNC(sub_832C9660);
PPC_FUNC_IMPL(__imp__sub_832C9660) {
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
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-18672
	ctx.r11.s64 = ctx.r11.s64 + -18672;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x839fbec8
	ctx.lr = 0x832C968C;
	sub_839FBEC8(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x832c96a4
	if (cr0.eq) goto loc_832C96A4;
	// lis r4,24714
	ctx.r4.s64 = 1619656704;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r4,r4,8194
	ctx.r4.u64 = ctx.r4.u64 | 8194;
	// bl 0x832d53c8
	ctx.lr = 0x832C96A4;
	sub_832D53C8(ctx, base);
loc_832C96A4:
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

__attribute__((alias("__imp__sub_832C96C0"))) PPC_WEAK_FUNC(sub_832C96C0);
PPC_FUNC_IMPL(__imp__sub_832C96C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdacc
	ctx.lr = 0x832C96C8;
	__savegprlr_21(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r11,2
	ctx.r11.s64 = 2;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r24,r3,8
	ctx.r24.s64 = ctx.r3.s64 + 8;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r23,r4
	ctx.r23.u64 = ctx.r4.u64;
	// lwz r27,8(r10)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mr r22,r8
	ctx.r22.u64 = ctx.r8.u64;
	// li r21,1
	ctx.r21.s64 = 1;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// mr r9,r24
	ctx.r9.u64 = ctx.r24.u64;
loc_832C96FC:
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x832c9738
	if (cr6.eq) goto loc_832C9738;
	// lwz r7,8(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// cmpwi cr6,r7,1
	cr6.compare<int32_t>(ctx.r7.s32, 1, xer);
	// bne cr6,0x832c9720
	if (!cr6.eq) goto loc_832C9720;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// b 0x832c9724
	goto loc_832C9724;
loc_832C9720:
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
loc_832C9724:
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x832c973c
	if (cr6.eq) goto loc_832C973C;
	// addi r22,r22,1
	ctx.r22.s64 = ctx.r22.s64 + 1;
	// b 0x832c973c
	goto loc_832C973C;
loc_832C9738:
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
loc_832C973C:
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x832c96fc
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_832C96FC;
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, xer);
	// beq cr6,0x832c98b0
	if (cr6.eq) goto loc_832C98B0;
	// cmplwi cr6,r22,0
	cr6.compare<uint32_t>(ctx.r22.u32, 0, xer);
	// beq cr6,0x832c98b0
	if (cr6.eq) goto loc_832C98B0;
	// mr r21,r8
	ctx.r21.u64 = ctx.r8.u64;
	// b 0x832c98a8
	goto loc_832C98A8;
loc_832C9760:
	// addi r23,r23,-1
	ctx.r23.s64 = ctx.r23.s64 + -1;
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, xer);
	// beq cr6,0x832c98b0
	if (cr6.eq) goto loc_832C98B0;
	// cmplwi cr6,r22,0
	cr6.compare<uint32_t>(ctx.r22.u32, 0, xer);
	// beq cr6,0x832c98b0
	if (cr6.eq) goto loc_832C98B0;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r9,0(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// lwz r8,12(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// subf r30,r11,r8
	ctx.r30.s64 = ctx.r8.s64 - ctx.r11.s64;
loc_832C9790:
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x832c97c4
	if (cr6.eq) goto loc_832C97C4;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r8,12(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// lwz r9,4(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// subf r9,r9,r8
	ctx.r9.s64 = ctx.r8.s64 - ctx.r9.s64;
	// cmplw cr6,r30,r9
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r9.u32, xer);
	// blt cr6,0x832c97c4
	if (cr6.lt) goto loc_832C97C4;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// subf r30,r11,r9
	ctx.r30.s64 = ctx.r9.s64 - ctx.r11.s64;
loc_832C97C4:
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x832c9790
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_832C9790;
	// addi r29,r1,80
	ctx.r29.s64 = ctx.r1.s64 + 80;
	// mr r28,r24
	ctx.r28.u64 = ctx.r24.u64;
	// li r26,2
	ctx.r26.s64 = 2;
loc_832C97D8:
	// lwz r31,0(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x832c9858
	if (cr6.eq) goto loc_832C9858;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r8,8(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,4(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r3,r8,r9
	ctx.r3.u64 = ctx.r8.u64 + ctx.r9.u64;
	// bl 0x831ce980
	ctx.lr = 0x832C980C;
	sub_831CE980(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// add r9,r9,r30
	ctx.r9.u64 = ctx.r9.u64 + ctx.r30.u64;
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// bge cr6,0x832c9828
	if (!cr6.lt) goto loc_832C9828;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_832C9828:
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// bne cr6,0x832c9858
	if (!cr6.eq) goto loc_832C9858;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x832c7c10
	ctx.lr = 0x832C9848;
	sub_832C7C10(ctx, base);
	// stw r3,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x832c9858
	if (!cr0.eq) goto loc_832C9858;
	// addi r22,r22,-1
	ctx.r22.s64 = ctx.r22.s64 + -1;
loc_832C9858:
	// addic. r26,r26,-1
	xer.ca = ctx.r26.u32 > 0;
	ctx.r26.s64 = ctx.r26.s64 + -1;
	cr0.compare<int32_t>(ctx.r26.s32, 0, xer);
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// bne 0x832c97d8
	if (!cr0.eq) goto loc_832C97D8;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// add r9,r9,r30
	ctx.r9.u64 = ctx.r9.u64 + ctx.r30.u64;
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// bge cr6,0x832c9884
	if (!cr6.lt) goto loc_832C9884;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_832C9884:
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// bne cr6,0x832c98a8
	if (!cr6.eq) goto loc_832C98A8;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r3,4(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// bl 0x832c7c10
	ctx.lr = 0x832C98A4;
	sub_832C7C10(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
loc_832C98A8:
	// cmplwi cr6,r23,0
	cr6.compare<uint32_t>(ctx.r23.u32, 0, xer);
	// bne cr6,0x832c9760
	if (!cr6.eq) goto loc_832C9760;
loc_832C98B0:
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb1c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832C98BC"))) PPC_WEAK_FUNC(sub_832C98BC);
PPC_FUNC_IMPL(__imp__sub_832C98BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832C98C0"))) PPC_WEAK_FUNC(sub_832C98C0);
PPC_FUNC_IMPL(__imp__sub_832C98C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r10,r1,84
	ctx.r10.s64 = ctx.r1.s64 + 84;
	// lwz r9,76(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplw cr6,r4,r9
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, xer);
	// stw r3,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// beq cr6,0x832c99c8
	if (cr6.eq) goto loc_832C99C8;
	// li r10,4
	ctx.r10.s64 = 4;
	// stw r11,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
	// lis r7,-32222
	ctx.r7.s64 = -2111700992;
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// addi r8,r31,36
	ctx.r8.s64 = ctx.r31.s64 + 36;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,-26260(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -26260);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,9008(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9008);
	ctx.f13.f64 = double(temp.f32);
loc_832C992C:
	// lwz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// cmplwi cr6,r10,65535
	cr6.compare<uint32_t>(ctx.r10.u32, 65535, xer);
	// bgt cr6,0x832c9950
	if (cr6.gt) goto loc_832C9950;
	// lbz r10,64(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 64);
	// slw r7,r3,r11
	ctx.r7.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r3.u32 << (ctx.r11.u8 & 0x3F));
	// and. r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 & ctx.r7.u64;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x832c9950
	if (!cr0.eq) goto loc_832C9950;
	// stfs f0,0(r9)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// b 0x832c9954
	goto loc_832C9954;
loc_832C9950:
	// stfs f13,0(r9)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r9.u32 + 0, temp.u32);
loc_832C9954:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bdnz 0x832c992c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_832C992C;
	// stw r30,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r30.u32);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// bne cr6,0x832c9978
	if (!cr6.eq) goto loc_832C9978;
	// lwz r30,80(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// b 0x832c997c
	goto loc_832C997C;
loc_832C9978:
	// stfs f0,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
loc_832C997C:
	// lwz r3,72(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832C9998;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x832c99c8
	if (cr0.lt) goto loc_832C99C8;
	// lwz r3,72(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,64(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832C99C8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_832C99C8:
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

__attribute__((alias("__imp__sub_832C99E0"))) PPC_WEAK_FUNC(sub_832C99E0);
PPC_FUNC_IMPL(__imp__sub_832C99E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x832c9a04
	if (cr6.eq) goto loc_832C9A04;
	// lwz r3,80(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// b 0x832c9a08
	goto loc_832C9A08;
loc_832C9A04:
	// lwz r3,72(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
loc_832C9A08:
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x832c9a18
	if (cr6.eq) goto loc_832C9A18;
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// b 0x832c9a1c
	goto loc_832C9A1C;
loc_832C9A18:
	// lwz r11,72(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
loc_832C9A1C:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_832C9A30"))) PPC_WEAK_FUNC(sub_832C9A30);
PPC_FUNC_IMPL(__imp__sub_832C9A30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x832C9A38;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// ble cr6,0x832c9a88
	if (!cr6.gt) goto loc_832C9A88;
	// addi r29,r3,12
	ctx.r29.s64 = ctx.r3.s64 + 12;
loc_832C9A58:
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832C9A6C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplw cr6,r28,r3
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r3.u32, xer);
	// beq cr6,0x832c9a94
	if (cr6.eq) goto loc_832C9A94;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, xer);
	// blt cr6,0x832c9a58
	if (cr6.lt) goto loc_832C9A58;
loc_832C9A88:
	// li r3,0
	ctx.r3.s64 = 0;
loc_832C9A8C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_832C9A94:
	// addi r11,r30,3
	ctx.r11.s64 = ctx.r30.s64 + 3;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// b 0x832c9a8c
	goto loc_832C9A8C;
}

__attribute__((alias("__imp__sub_832C9AA4"))) PPC_WEAK_FUNC(sub_832C9AA4);
PPC_FUNC_IMPL(__imp__sub_832C9AA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832C9AA8"))) PPC_WEAK_FUNC(sub_832C9AA8);
PPC_FUNC_IMPL(__imp__sub_832C9AA8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad0
	ctx.lr = 0x832C9AB0;
	__savegprlr_22(ctx, base);
	// stfd f30,-104(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -104, ctx.f30.u64);
	// stfd f31,-96(r1)
	PPC_STORE_U64(ctx.r1.u32 + -96, ctx.f31.u64);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r1,92
	ctx.r11.s64 = ctx.r1.s64 + 92;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r23,0
	ctx.r23.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r22,r4
	ctx.r22.u64 = ctx.r4.u64;
	// stw r23,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r23.u32);
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// stw r23,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r23.u32);
	// addi r9,r1,88
	ctx.r9.s64 = ctx.r1.s64 + 88;
	// lfs f30,9008(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9008);
	ctx.f30.f64 = double(temp.f32);
	// li r26,1
	ctx.r26.s64 = 1;
	// stfs f30,96(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// li r5,60
	ctx.r5.s64 = 60;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r26,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r26.u32);
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// bl 0x831cdcf0
	ctx.lr = 0x832C9B08;
	sub_831CDCF0(ctx, base);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r3,80(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 80);
	// addi r24,r30,80
	ctx.r24.s64 = ctx.r30.s64 + 80;
	// stw r23,76(r30)
	PPC_STORE_U32(ctx.r30.u32 + 76, ctx.r23.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// lwz r29,64(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// lwz r27,60(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r29.u32);
	// bne cr6,0x832c9b60
	if (!cr6.eq) goto loc_832C9B60;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,16125
	ctx.r6.s64 = 16125;
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832C9B5C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x832c9b74
	goto loc_832C9B74;
loc_832C9B60:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832C9B74;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_832C9B74:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x832c9d68
	if (cr6.lt) goto loc_832C9D68;
	// lwz r3,0(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832C9B98;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// blt 0x832c9d68
	if (cr0.lt) goto loc_832C9D68;
	// li r11,4
	ctx.r11.s64 = 4;
	// addi r10,r1,76
	ctx.r10.s64 = ctx.r1.s64 + 76;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lfs f31,-26260(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -26260);
	ctx.f31.f64 = double(temp.f32);
loc_832C9BB4:
	// stfsu f31,20(r10)
	ctx.fpscr.disableFlushMode();
	ea = 20 + ctx.r10.u32;
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ea, temp.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x832c9bb4
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_832C9BB4;
	// lwz r3,0(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,64(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832C9BE4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// blt 0x832c9d68
	if (cr0.lt) goto loc_832C9D68;
	// li r11,4
	ctx.r11.s64 = 4;
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// addi r8,r30,36
	ctx.r8.s64 = ctx.r30.s64 + 36;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
loc_832C9C00:
	// lwz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// cmplwi cr6,r11,65535
	cr6.compare<uint32_t>(ctx.r11.u32, 65535, xer);
	// bgt cr6,0x832c9c24
	if (cr6.gt) goto loc_832C9C24;
	// lbz r11,64(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 64);
	// slw r7,r26,r10
	ctx.r7.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r26.u32 << (ctx.r10.u8 & 0x3F));
	// and. r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 & ctx.r7.u64;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne 0x832c9c24
	if (!cr0.eq) goto loc_832C9C24;
	// stfs f31,0(r9)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// b 0x832c9c28
	goto loc_832C9C28;
loc_832C9C24:
	// stfs f30,0(r9)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r9.u32 + 0, temp.u32);
loc_832C9C28:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bdnz 0x832c9c00
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_832C9C00;
	// stw r25,76(r30)
	PPC_STORE_U32(ctx.r30.u32 + 76, ctx.r25.u32);
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(ctx.r25.u32, 0, xer);
	// bne cr6,0x832c9c4c
	if (!cr6.eq) goto loc_832C9C4C;
	// lwz r25,0(r24)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// b 0x832c9c50
	goto loc_832C9C50;
loc_832C9C4C:
	// stfs f31,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
loc_832C9C50:
	// lwz r3,72(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 72);
	// addi r28,r30,72
	ctx.r28.s64 = ctx.r30.s64 + 72;
	// stw r25,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r25.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x832c9c98
	if (!cr6.eq) goto loc_832C9C98;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,16125
	ctx.r6.s64 = 16125;
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832C9C94;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x832c9cac
	goto loc_832C9CAC;
loc_832C9C98:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832C9CAC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_832C9CAC:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x832c9d68
	if (cr6.lt) goto loc_832C9D68;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832C9CD0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// blt 0x832c9d68
	if (cr0.lt) goto loc_832C9D68;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,64(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832C9D00;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// blt 0x832c9d68
	if (cr0.lt) goto loc_832C9D68;
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// mr r27,r23
	ctx.r27.u64 = ctx.r23.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// ble cr6,0x832c9d60
	if (!cr6.gt) goto loc_832C9D60;
	// addi r29,r30,12
	ctx.r29.s64 = ctx.r30.s64 + 12;
loc_832C9D1C:
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832C9D34;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// bge 0x832c9d4c
	if (!cr0.lt) goto loc_832C9D4C;
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// ori r11,r11,16385
	ctx.r11.u64 = ctx.r11.u64 | 16385;
	// cmpw cr6,r31,r11
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, xer);
	// bne cr6,0x832c9d60
	if (!cr6.eq) goto loc_832C9D60;
loc_832C9D4C:
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmplw cr6,r27,r11
	cr6.compare<uint32_t>(ctx.r27.u32, ctx.r11.u32, xer);
	// blt cr6,0x832c9d1c
	if (cr6.lt) goto loc_832C9D1C;
loc_832C9D60:
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, xer);
	// bge cr6,0x832c9da8
	if (!cr6.lt) goto loc_832C9DA8;
loc_832C9D68:
	// lwz r3,72(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 72);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x832c9d88
	if (cr6.eq) goto loc_832C9D88;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,72(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832C9D84;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r23,72(r30)
	PPC_STORE_U32(ctx.r30.u32 + 72, ctx.r23.u32);
loc_832C9D88:
	// lwz r3,0(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x832c9da8
	if (cr6.eq) goto loc_832C9DA8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,72(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832C9DA4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r23,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r23.u32);
loc_832C9DA8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// lfd f30,-104(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -104);
	// lfd f31,-96(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832C9DBC"))) PPC_WEAK_FUNC(sub_832C9DBC);
PPC_FUNC_IMPL(__imp__sub_832C9DBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832C9DC0"))) PPC_WEAK_FUNC(sub_832C9DC0);
PPC_FUNC_IMPL(__imp__sub_832C9DC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdac8
	ctx.lr = 0x832C9DC8;
	__savegprlr_20(ctx, base);
	// stfd f30,-120(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -120, ctx.f30.u64);
	// stfd f31,-112(r1)
	PPC_STORE_U64(ctx.r1.u32 + -112, ctx.f31.u64);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r10,76(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	// addi r9,r1,116
	ctx.r9.s64 = ctx.r1.s64 + 116;
	// li r25,0
	ctx.r25.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// lfs f30,9008(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f30.f64 = double(temp.f32);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// stfs f30,112(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stw r25,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r25.u32);
	// stw r25,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r25.u32);
	// mr r20,r25
	ctx.r20.u64 = ctx.r25.u64;
	// stw r25,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r25.u32);
	// mr r21,r25
	ctx.r21.u64 = ctx.r25.u64;
	// bne cr6,0x832ca060
	if (!cr6.eq) goto loc_832CA060;
	// li r27,1
	ctx.r27.s64 = 1;
	// lwz r29,68(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 68);
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// stw r27,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r27.u32);
	// mr r22,r27
	ctx.r22.u64 = ctx.r27.u64;
	// stw r27,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r27.u32);
	// li r31,84
	ctx.r31.s64 = 84;
	// stw r27,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r27.u32);
	// addi r23,r30,-48
	ctx.r23.s64 = ctx.r30.s64 + -48;
	// stw r27,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r27.u32);
	// addi r24,r11,-84
	ctx.r24.s64 = ctx.r11.s64 + -84;
loc_832C9E3C:
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwzx r11,r31,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x832c9ed8
	if (cr6.eq) goto loc_832C9ED8;
	// rotlwi r9,r11,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwzx r11,r23,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + ctx.r31.u32);
	// lis r8,1
	ctx.r8.s64 = 65536;
	// cmplwi cr6,r11,65535
	cr6.compare<uint32_t>(ctx.r11.u32, 65535, xer);
	// lwz r11,212(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 212);
	// rlwinm r11,r11,0,12,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xF0000;
	// subf r8,r11,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r11.s64;
	// cntlzw r8,r8
	ctx.r8.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// rlwinm r8,r8,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// ble cr6,0x832c9e78
	if (!cr6.gt) goto loc_832C9E78;
	// mr r20,r27
	ctx.r20.u64 = ctx.r27.u64;
loc_832C9E78:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x832c9e88
	if (!cr6.eq) goto loc_832C9E88;
	// mr r21,r27
	ctx.r21.u64 = ctx.r27.u64;
	// b 0x832c9ed4
	goto loc_832C9ED4;
loc_832C9E88:
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bne cr6,0x832c9ea4
	if (!cr6.eq) goto loc_832C9EA4;
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(ctx.r29.s32, 0, xer);
	// beq cr6,0x832c9ed8
	if (cr6.eq) goto loc_832C9ED8;
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x832c9ed8
	if (!cr6.eq) goto loc_832C9ED8;
loc_832C9EA4:
	// stw r25,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r25.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwzx r11,r31,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x83d7578c
	ctx.lr = 0x832C9EC4;
	__imp__XamUserAreUsersFriends(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x832c9ed8
	if (!cr6.eq) goto loc_832C9ED8;
	// mr r22,r25
	ctx.r22.u64 = ctx.r25.u64;
loc_832C9ED4:
	// stwx r25,r24,r31
	PPC_STORE_U32(ctx.r24.u32 + ctx.r31.u32, ctx.r25.u32);
loc_832C9ED8:
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplwi cr6,r31,100
	cr6.compare<uint32_t>(ctx.r31.u32, 100, xer);
	// blt cr6,0x832c9e3c
	if (cr6.lt) goto loc_832C9E3C;
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// li r31,84
	ctx.r31.s64 = 84;
	// addi r28,r11,-84
	ctx.r28.s64 = ctx.r11.s64 + -84;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lis r26,28672
	ctx.r26.s64 = 1879048192;
	// lfs f31,-26260(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -26260);
	ctx.f31.f64 = double(temp.f32);
loc_832C9EFC:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwzx r10,r31,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x832c9f2c
	if (cr6.eq) goto loc_832C9F2C;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x832c9f2c
	if (!cr6.eq) goto loc_832C9F2C;
	// lwz r11,204(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 204);
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x832c9f30
	if (!cr6.eq) goto loc_832C9F30;
loc_832C9F2C:
	// mr r29,r25
	ctx.r29.u64 = ctx.r25.u64;
loc_832C9F30:
	// cmpwi cr6,r21,0
	cr6.compare<int32_t>(ctx.r21.s32, 0, xer);
	// beq cr6,0x832c9f58
	if (cr6.eq) goto loc_832C9F58;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwzx r11,r31,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// lwz r10,212(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 212);
	// rlwinm r10,r10,0,31,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// stw r10,212(r11)
	PPC_STORE_U32(ctx.r11.u32 + 212, ctx.r10.u32);
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwzx r4,r31,r3
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r3.u32);
	// bl 0x832c4db0
	ctx.lr = 0x832C9F58;
	sub_832C4DB0(ctx, base);
loc_832C9F58:
	// cmpwi cr6,r22,0
	cr6.compare<int32_t>(ctx.r22.s32, 0, xer);
	// bne cr6,0x832c9fa4
	if (!cr6.eq) goto loc_832C9FA4;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwzx r10,r31,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x832c9fa4
	if (cr6.eq) goto loc_832C9FA4;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x832c9fa4
	if (!cr6.eq) goto loc_832C9FA4;
	// lwz r11,212(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 212);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne 0x832c9fa0
	if (!cr0.eq) goto loc_832C9FA0;
	// bl 0x832c5f88
	ctx.lr = 0x832C9F90;
	sub_832C5F88(ctx, base);
	// cmplw cr6,r3,r26
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r26.u32, xer);
	// beq cr6,0x832c9fa0
	if (cr6.eq) goto loc_832C9FA0;
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(ctx.r29.s32, 0, xer);
	// bne cr6,0x832c9fa4
	if (!cr6.eq) goto loc_832C9FA4;
loc_832C9FA0:
	// stwx r25,r31,r24
	PPC_STORE_U32(ctx.r31.u32 + ctx.r24.u32, ctx.r25.u32);
loc_832C9FA4:
	// bl 0x83d756dc
	ctx.lr = 0x832C9FA8;
	__imp__XamVoiceIsActiveProcess(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x832ca02c
	if (cr0.eq) goto loc_832CA02C;
	// lwzx r11,r31,r24
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r24.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x832c9fec
	if (cr6.eq) goto loc_832C9FEC;
	// lwzx r11,r31,r23
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r23.u32);
	// cmplwi cr6,r11,65535
	cr6.compare<uint32_t>(ctx.r11.u32, 65535, xer);
	// bgt cr6,0x832c9fec
	if (cr6.gt) goto loc_832C9FEC;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwzx r10,r31,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x832c9fe8
	if (cr6.eq) goto loc_832C9FE8;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x832c9fec
	if (!cr6.eq) goto loc_832C9FEC;
loc_832C9FE8:
	// stfsx f31,r28,r31
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r28.u32 + ctx.r31.u32, temp.u32);
loc_832C9FEC:
	// cmpwi cr6,r20,0
	cr6.compare<int32_t>(ctx.r20.s32, 0, xer);
	// beq cr6,0x832ca02c
	if (cr6.eq) goto loc_832CA02C;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwzx r10,r31,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x832ca02c
	if (cr6.eq) goto loc_832CA02C;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r11,212(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 212);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne 0x832ca028
	if (!cr0.eq) goto loc_832CA028;
	// bl 0x832c5f88
	ctx.lr = 0x832CA018;
	sub_832C5F88(ctx, base);
	// cmplw cr6,r3,r26
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r26.u32, xer);
	// beq cr6,0x832ca028
	if (cr6.eq) goto loc_832CA028;
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(ctx.r29.s32, 0, xer);
	// bne cr6,0x832ca02c
	if (!cr6.eq) goto loc_832CA02C;
loc_832CA028:
	// stfsx f30,r28,r31
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r28.u32 + ctx.r31.u32, temp.u32);
loc_832CA02C:
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplwi cr6,r31,100
	cr6.compare<uint32_t>(ctx.r31.u32, 100, xer);
	// blt cr6,0x832c9efc
	if (cr6.lt) goto loc_832C9EFC;
	// lwz r3,72(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 72);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// lwz r4,80(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 80);
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,64(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832CA060;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_832CA060:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// lfd f30,-120(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -120);
	// lfd f31,-112(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -112);
	// b 0x831cdb18
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832CA070"))) PPC_WEAK_FUNC(sub_832CA070);
PPC_FUNC_IMPL(__imp__sub_832CA070) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x832CA078;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r1,84
	ctx.r11.s64 = ctx.r1.s64 + 84;
	// li r28,0
	ctx.r28.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// stw r28,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r28.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// beq cr6,0x832ca1d4
	if (cr6.eq) goto loc_832CA1D4;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// ble cr6,0x832ca0d8
	if (!cr6.gt) goto loc_832CA0D8;
	// addi r30,r3,20
	ctx.r30.s64 = ctx.r3.s64 + 20;
loc_832CA0BC:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x832c7a60
	ctx.lr = 0x832CA0C4;
	sub_832C7A60(ctx, base);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// stwu r28,4(r30)
	ea = 4 + ctx.r30.u32;
	PPC_STORE_U32(ea, ctx.r28.u32);
	ctx.r30.u32 = ea;
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, xer);
	// blt cr6,0x832ca0bc
	if (cr6.lt) goto loc_832CA0BC;
loc_832CA0D8:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// ble cr6,0x832ca114
	if (!cr6.gt) goto loc_832CA114;
	// addi r30,r31,8
	ctx.r30.s64 = ctx.r31.s64 + 8;
loc_832CA0EC:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832CA100;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// stwu r28,4(r30)
	ea = 4 + ctx.r30.u32;
	PPC_STORE_U32(ea, ctx.r28.u32);
	ctx.r30.u32 = ea;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, xer);
	// blt cr6,0x832ca0ec
	if (cr6.lt) goto loc_832CA0EC;
loc_832CA114:
	// lwz r11,76(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x832ca184
	if (cr6.eq) goto loc_832CA184;
	// lwz r3,72(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x832ca180
	if (cr6.eq) goto loc_832CA180;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// lfs f1,9008(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9008);
	ctx.f1.f64 = double(temp.f32);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832CA148;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,72(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832CA160;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// lwz r3,72(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832CA180;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_832CA180:
	// stw r28,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r28.u32);
loc_832CA184:
	// lwz r3,72(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x832ca1a4
	if (cr6.eq) goto loc_832CA1A4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,72(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832CA1A0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r28,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r28.u32);
loc_832CA1A4:
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x832ca1c4
	if (cr6.eq) goto loc_832CA1C4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,72(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832CA1C0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r28,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r28.u32);
loc_832CA1C4:
	// lis r4,24970
	ctx.r4.s64 = 1636433920;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r4,r4,32784
	ctx.r4.u64 = ctx.r4.u64 | 32784;
	// bl 0x832d53c8
	ctx.lr = 0x832CA1D4;
	sub_832D53C8(ctx, base);
loc_832CA1D4:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832CA1DC"))) PPC_WEAK_FUNC(sub_832CA1DC);
PPC_FUNC_IMPL(__imp__sub_832CA1DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832CA1E0"))) PPC_WEAK_FUNC(sub_832CA1E0);
PPC_FUNC_IMPL(__imp__sub_832CA1E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x832CA1E8;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// ble cr6,0x832ca240
	if (!cr6.gt) goto loc_832CA240;
	// addi r30,r3,20
	ctx.r30.s64 = ctx.r3.s64 + 20;
loc_832CA204:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// ld r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r5,24(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// bl 0x832c4e78
	ctx.lr = 0x832CA220;
	sub_832C4E78(ctx, base);
	// lwzu r3,4(r30)
	ea = 4 + ctx.r30.u32;
	ctx.r3.u64 = PPC_LOAD_U32(ea);
	ctx.r30.u32 = ea;
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x832c7808
	ctx.lr = 0x832CA230;
	sub_832C7808(ctx, base);
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, xer);
	// blt cr6,0x832ca204
	if (cr6.lt) goto loc_832CA204;
loc_832CA240:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// ble cr6,0x832ca278
	if (!cr6.gt) goto loc_832CA278;
	// addi r29,r31,8
	ctx.r29.s64 = ctx.r31.s64 + 8;
loc_832CA254:
	// lwzu r3,4(r29)
	ea = 4 + ctx.r29.u32;
	ctx.r3.u64 = PPC_LOAD_U32(ea);
	ctx.r29.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832CA268;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, xer);
	// blt cr6,0x832ca254
	if (cr6.lt) goto loc_832CA254;
loc_832CA278:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832CA284"))) PPC_WEAK_FUNC(sub_832CA284);
PPC_FUNC_IMPL(__imp__sub_832CA284) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832CA288"))) PPC_WEAK_FUNC(sub_832CA288);
PPC_FUNC_IMPL(__imp__sub_832CA288) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x832CA290;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r28,-32761
	ctx.r28.s64 = -2147024896;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// ori r28,r28,87
	ctx.r28.u64 = ctx.r28.u64 | 87;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x832ca2f0
	if (cr6.eq) goto loc_832CA2F0;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
loc_832CA2B4:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x832c9a30
	ctx.lr = 0x832CA2C0;
	sub_832C9A30(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x832ca2f0
	if (cr0.eq) goto loc_832CA2F0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832CA2D8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr. r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r28.s32, 0, xer);
	// blt 0x832ca2f0
	if (cr0.lt) goto loc_832CA2F0;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplw cr6,r30,r29
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, xer);
	// blt cr6,0x832ca2b4
	if (cr6.lt) goto loc_832CA2B4;
loc_832CA2F0:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832CA2FC"))) PPC_WEAK_FUNC(sub_832CA2FC);
PPC_FUNC_IMPL(__imp__sub_832CA2FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832CA300"))) PPC_WEAK_FUNC(sub_832CA300);
PPC_FUNC_IMPL(__imp__sub_832CA300) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x832CA308;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r28,-32761
	ctx.r28.s64 = -2147024896;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// ori r28,r28,87
	ctx.r28.u64 = ctx.r28.u64 | 87;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x832ca368
	if (cr6.eq) goto loc_832CA368;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
loc_832CA32C:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x832c9a30
	ctx.lr = 0x832CA338;
	sub_832C9A30(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x832ca368
	if (cr0.eq) goto loc_832CA368;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832CA350;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr. r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r28.s32, 0, xer);
	// blt 0x832ca368
	if (cr0.lt) goto loc_832CA368;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplw cr6,r30,r29
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, xer);
	// blt cr6,0x832ca32c
	if (cr6.lt) goto loc_832CA32C;
loc_832CA368:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832CA374"))) PPC_WEAK_FUNC(sub_832CA374);
PPC_FUNC_IMPL(__imp__sub_832CA374) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832CA378"))) PPC_WEAK_FUNC(sub_832CA378);
PPC_FUNC_IMPL(__imp__sub_832CA378) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x832CA380;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r3,36
	ctx.r3.s64 = ctx.r3.s64 + 36;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// mr r26,r8
	ctx.r26.u64 = ctx.r8.u64;
	// bl 0x832d27b0
	ctx.lr = 0x832CA3AC;
	sub_832D27B0(ctx, base);
	// std r27,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r27.u64);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// stb r26,64(r31)
	PPC_STORE_U8(ctx.r31.u32 + 64, ctx.r26.u8);
	// bne cr6,0x832ca3e4
	if (!cr6.eq) goto loc_832CA3E4;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// bne cr6,0x832ca3e4
	if (!cr6.eq) goto loc_832CA3E4;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832c98c0
	ctx.lr = 0x832CA3D0;
	sub_832C98C0(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x832ca400
	if (!cr6.eq) goto loc_832CA400;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832c9dc0
	ctx.lr = 0x832CA3E0;
	sub_832C9DC0(ctx, base);
	// b 0x832ca400
	goto loc_832CA400;
loc_832CA3E4:
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832c9aa8
	ctx.lr = 0x832CA3F8;
	sub_832C9AA8(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x832ca434
	if (cr0.lt) goto loc_832CA434;
loc_832CA400:
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x832ca428
	if (cr6.lt) goto loc_832CA428;
	// lwz r3,72(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lfs f1,-26260(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -26260);
	ctx.f1.f64 = double(temp.f32);
	// lwz r11,48(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832CA428;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_832CA428:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,280(r11)
	PPC_STORE_U32(ctx.r11.u32 + 280, ctx.r10.u32);
loc_832CA434:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832CA43C"))) PPC_WEAK_FUNC(sub_832CA43C);
PPC_FUNC_IMPL(__imp__sub_832CA43C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832CA440"))) PPC_WEAK_FUNC(sub_832CA440);
PPC_FUNC_IMPL(__imp__sub_832CA440) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x832CA448;
	__savegprlr_26(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r1,84
	ctx.r11.s64 = ctx.r1.s64 + 84;
	// li r27,0
	ctx.r27.s64 = 0;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// li r26,1
	ctx.r26.s64 = 1;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// stw r27,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r27.u32);
	// stw r26,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r26.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r27
	ctx.r28.u64 = ctx.r27.u64;
	// bl 0x832d27b0
	ctx.lr = 0x832CA480;
	sub_832D27B0(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// ble cr6,0x832ca4b8
	if (!cr6.gt) goto loc_832CA4B8;
	// addi r29,r31,8
	ctx.r29.s64 = ctx.r31.s64 + 8;
loc_832CA494:
	// lwzu r3,4(r29)
	ea = 4 + ctx.r29.u32;
	ctx.r3.u64 = PPC_LOAD_U32(ea);
	ctx.r29.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832CA4A8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, xer);
	// blt cr6,0x832ca494
	if (cr6.lt) goto loc_832CA494;
loc_832CA4B8:
	// lwz r11,76(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x832ca53c
	if (cr6.eq) goto loc_832CA53C;
	// lwz r3,72(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x832ca538
	if (cr6.eq) goto loc_832CA538;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// lfs f1,9008(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9008);
	ctx.f1.f64 = double(temp.f32);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832CA4EC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr. r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r28.s32, 0, xer);
	// blt 0x832ca538
	if (cr0.lt) goto loc_832CA538;
	// lwz r3,72(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832CA50C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr. r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r28.s32, 0, xer);
	// blt 0x832ca538
	if (cr0.lt) goto loc_832CA538;
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// lwz r3,72(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832CA534;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
loc_832CA538:
	// stw r27,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r27.u32);
loc_832CA53C:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r26,280(r11)
	PPC_STORE_U32(ctx.r11.u32 + 280, ctx.r26.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832CA550"))) PPC_WEAK_FUNC(sub_832CA550);
PPC_FUNC_IMPL(__imp__sub_832CA550) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x832CA558;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// lis r30,-32768
	ctx.r30.s64 = -2147483648;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// lwz r4,-18804(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -18804);
	// ori r30,r30,16389
	ctx.r30.u64 = ctx.r30.u64 | 16389;
	// bl 0x832c9a30
	ctx.lr = 0x832CA57C;
	sub_832C9A30(ctx, base);
	// mr. r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r28.s32, 0, xer);
	// beq 0x832ca5b8
	if (cr0.eq) goto loc_832CA5B8;
	// lhz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 0);
	// lwz r10,68(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, xer);
	// beq cr6,0x832ca5a4
	if (cr6.eq) goto loc_832CA5A4;
	// stw r11,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832c9dc0
	ctx.lr = 0x832CA5A4;
	sub_832C9DC0(ctx, base);
loc_832CA5A4:
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x832c3ec8
	ctx.lr = 0x832CA5B4;
	sub_832C3EC8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_832CA5B8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832CA5C4"))) PPC_WEAK_FUNC(sub_832CA5C4);
PPC_FUNC_IMPL(__imp__sub_832CA5C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832CA5C8"))) PPC_WEAK_FUNC(sub_832CA5C8);
PPC_FUNC_IMPL(__imp__sub_832CA5C8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// addi r11,r4,9
	ctx.r11.s64 = ctx.r4.s64 + 9;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r3
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// cmplw cr6,r5,r10
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r10.u32, xer);
	// beq cr6,0x832ca5ec
	if (cr6.eq) goto loc_832CA5EC;
	// li r10,1
	ctx.r10.s64 = 1;
	// stwx r5,r11,r3
	PPC_STORE_U32(ctx.r11.u32 + ctx.r3.u32, ctx.r5.u32);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stw r10,280(r11)
	PPC_STORE_U32(ctx.r11.u32 + 280, ctx.r10.u32);
loc_832CA5EC:
	// b 0x832c9dc0
	sub_832C9DC0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832CA5F0"))) PPC_WEAK_FUNC(sub_832CA5F0);
PPC_FUNC_IMPL(__imp__sub_832CA5F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x832CA5F8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r28,1
	ctx.r28.s64 = 1;
	// stw r30,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r30.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// ble cr6,0x832ca650
	if (!cr6.gt) goto loc_832CA650;
	// addi r29,r3,12
	ctx.r29.s64 = ctx.r3.s64 + 12;
loc_832CA61C:
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832CA630;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x832ca63c
	if (!cr6.eq) goto loc_832CA63C;
	// stw r28,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r28.u32);
loc_832CA63C:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, xer);
	// blt cr6,0x832ca61c
	if (cr6.lt) goto loc_832CA61C;
loc_832CA650:
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x832ca668
	if (cr6.eq) goto loc_832CA668;
	// li r11,200
	ctx.r11.s64 = 200;
	// stw r11,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
	// b 0x832ca69c
	goto loc_832CA69C;
loc_832CA668:
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble cr6,0x832ca69c
	if (!cr6.gt) goto loc_832CA69C;
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x832ca698
	if (cr6.eq) goto loc_832CA698;
	// bl 0x832d30f8
	ctx.lr = 0x832CA684;
	sub_832D30F8(ctx, base);
	// lwz r10,60(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// subf r10,r3,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r3.s64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
loc_832CA698:
	// stw r28,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r28.u32);
loc_832CA69C:
	// bl 0x832d30f8
	ctx.lr = 0x832CA6A0;
	sub_832D30F8(ctx, base);
	// stw r3,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r3.u32);
	// lwz r3,52(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832CA6B0"))) PPC_WEAK_FUNC(sub_832CA6B0);
PPC_FUNC_IMPL(__imp__sub_832CA6B0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x832CA6B8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r5,12
	ctx.r5.s64 = 12;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x832d27b0
	ctx.lr = 0x832CA6D4;
	sub_832D27B0(ctx, base);
	// lwz r11,32(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 32);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// ble cr6,0x832ca744
	if (!cr6.gt) goto loc_832CA744;
	// addi r31,r28,24
	ctx.r31.s64 = ctx.r28.s64 + 24;
loc_832CA6E8:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r10,r11,16
	ctx.r10.s64 = ctx.r11.s64 + 16;
	// lwz r8,24(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// lwz r29,12(r8)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
loc_832CA6FC:
	// lwz r8,-8(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + -8);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x832ca714
	if (cr6.eq) goto loc_832CA714;
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r8,1
	cr6.compare<int32_t>(ctx.r8.s32, 1, xer);
	// beq cr6,0x832ca74c
	if (cr6.eq) goto loc_832CA74C;
loc_832CA714:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplwi cr6,r9,2
	cr6.compare<uint32_t>(ctx.r9.u32, 2, xer);
	// blt cr6,0x832ca6fc
	if (cr6.lt) goto loc_832CA6FC;
	// li r3,0
	ctx.r3.s64 = 0;
loc_832CA728:
	// rlwinm r11,r29,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// stwx r3,r11,r27
	PPC_STORE_U32(ctx.r11.u32 + ctx.r27.u32, ctx.r3.u32);
	// lwz r11,32(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 32);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, xer);
	// blt cr6,0x832ca6e8
	if (cr6.lt) goto loc_832CA6E8;
loc_832CA744:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_832CA74C:
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// bl 0x832c7bf0
	ctx.lr = 0x832CA758;
	sub_832C7BF0(ctx, base);
	// b 0x832ca728
	goto loc_832CA728;
}

__attribute__((alias("__imp__sub_832CA75C"))) PPC_WEAK_FUNC(sub_832CA75C);
PPC_FUNC_IMPL(__imp__sub_832CA75C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832CA760"))) PPC_WEAK_FUNC(sub_832CA760);
PPC_FUNC_IMPL(__imp__sub_832CA760) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdac4
	ctx.lr = 0x832CA768;
	__savegprlr_19(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lis r4,24970
	ctx.r4.s64 = 1636433920;
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// li r3,88
	ctx.r3.s64 = 88;
	// ori r4,r4,32784
	ctx.r4.u64 = ctx.r4.u64 | 32784;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r21,r6
	ctx.r21.u64 = ctx.r6.u64;
	// mr r20,r7
	ctx.r20.u64 = ctx.r7.u64;
	// mr r19,r8
	ctx.r19.u64 = ctx.r8.u64;
	// li r26,0
	ctx.r26.s64 = 0;
	// bl 0x832d5290
	ctx.lr = 0x832CA798;
	sub_832D5290(ctx, base);
	// mr. r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r27.s32, 0, xer);
	// bne 0x832ca7ac
	if (!cr0.eq) goto loc_832CA7AC;
	// lis r26,-32761
	ctx.r26.s64 = -2147024896;
	// ori r26,r26,14
	ctx.r26.u64 = ctx.r26.u64 | 14;
	// b 0x832ca9ac
	goto loc_832CA9AC;
loc_832CA7AC:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r22,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r22.u32);
	// li r5,24
	ctx.r5.s64 = 24;
	// stw r11,68(r27)
	PPC_STORE_U32(ctx.r27.u32 + 68, ctx.r11.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x832d27b0
	ctx.lr = 0x832CA7C8;
	sub_832D27B0(ctx, base);
	// li r5,12
	ctx.r5.s64 = 12;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x832d27b0
	ctx.lr = 0x832CA7D8;
	sub_832D27B0(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// beq cr6,0x832ca86c
	if (cr6.eq) goto loc_832CA86C;
	// addi r31,r27,12
	ctx.r31.s64 = ctx.r27.s64 + 12;
loc_832CA7E8:
	// cmplwi cr6,r30,2
	cr6.compare<uint32_t>(ctx.r30.u32, 2, xer);
	// bge cr6,0x832ca86c
	if (!cr6.lt) goto loc_832CA86C;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832CA80C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr. r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r26.s32, 0, xer);
	// blt 0x832ca86c
	if (cr0.lt) goto loc_832CA86C;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832CA82C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// lwz r7,12(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// rlwinm r10,r7,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + ctx.r30.u64;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplw cr6,r30,r28
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r28.u32, xer);
	// stwx r11,r7,r9
	PPC_STORE_U32(ctx.r7.u32 + ctx.r9.u32, ctx.r11.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// stwx r11,r10,r8
	PPC_STORE_U32(ctx.r10.u32 + ctx.r8.u32, ctx.r11.u32);
	// blt cr6,0x832ca7e8
	if (cr6.lt) goto loc_832CA7E8;
loc_832CA86C:
	// addi r11,r27,20
	ctx.r11.s64 = ctx.r27.s64 + 20;
	// stw r30,20(r27)
	PPC_STORE_U32(ctx.r27.u32 + 20, ctx.r30.u32);
	// cmpwi cr6,r26,0
	cr6.compare<int32_t>(ctx.r26.s32, 0, xer);
	// blt cr6,0x832ca9ac
	if (cr6.lt) goto loc_832CA9AC;
	// li r24,0
	ctx.r24.s64 = 0;
	// li r25,0
	ctx.r25.s64 = 0;
	// addi r23,r1,96
	ctx.r23.s64 = ctx.r1.s64 + 96;
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
loc_832CA88C:
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// li r30,0
	ctx.r30.s64 = 0;
	// bl 0x832d27b0
	ctx.lr = 0x832CA8A0;
	sub_832D27B0(ctx, base);
	// addi r11,r1,88
	ctx.r11.s64 = ctx.r1.s64 + 88;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r29,r11,-4
	ctx.r29.s64 = ctx.r11.s64 + -4;
loc_832CA8AC:
	// add r11,r25,r31
	ctx.r11.u64 = ctx.r25.u64 + ctx.r31.u64;
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x832ca8e4
	if (cr6.eq) goto loc_832CA8E4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832CA8D8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// stwu r11,4(r29)
	ea = 4 + ctx.r29.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r29.u32 = ea;
loc_832CA8E4:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplwi cr6,r31,2
	cr6.compare<uint32_t>(ctx.r31.u32, 2, xer);
	// blt cr6,0x832ca8ac
	if (cr6.lt) goto loc_832CA8AC;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x832ca974
	if (cr6.eq) goto loc_832CA974;
	// addi r7,r28,4
	ctx.r7.s64 = ctx.r28.s64 + 4;
	// lwz r4,0(r23)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// li r5,10
	ctx.r5.s64 = 10;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x832c7b08
	ctx.lr = 0x832CA910;
	sub_832C7B08(ctx, base);
	// mr. r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r26.s32, 0, xer);
	// blt 0x832ca984
	if (cr0.lt) goto loc_832CA984;
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r30,0
	ctx.r30.s64 = 0;
loc_832CA928:
	// add r11,r25,r30
	ctx.r11.u64 = ctx.r25.u64 + ctx.r30.u64;
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x832ca968
	if (cr6.eq) goto loc_832CA968;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// lwz r5,0(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832CA95C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr. r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r26.s32, 0, xer);
	// blt 0x832ca984
	if (cr0.lt) goto loc_832CA984;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
loc_832CA968:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplwi cr6,r30,2
	cr6.compare<uint32_t>(ctx.r30.u32, 2, xer);
	// blt cr6,0x832ca928
	if (cr6.lt) goto loc_832CA928;
loc_832CA974:
	// addi r25,r25,2
	ctx.r25.s64 = ctx.r25.s64 + 2;
	// addi r23,r23,4
	ctx.r23.s64 = ctx.r23.s64 + 4;
	// cmplwi cr6,r25,6
	cr6.compare<uint32_t>(ctx.r25.u32, 6, xer);
	// blt cr6,0x832ca88c
	if (cr6.lt) goto loc_832CA88C;
loc_832CA984:
	// stw r24,32(r27)
	PPC_STORE_U32(ctx.r27.u32 + 32, ctx.r24.u32);
	// cmpwi cr6,r26,0
	cr6.compare<int32_t>(ctx.r26.s32, 0, xer);
	// blt cr6,0x832ca9ac
	if (cr6.lt) goto loc_832CA9AC;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r20
	ctx.r5.u64 = ctx.r20.u64;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x832c9aa8
	ctx.lr = 0x832CA9A4;
	sub_832C9AA8(ctx, base);
	// mr. r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r26.s32, 0, xer);
	// bge 0x832ca9b8
	if (!cr0.lt) goto loc_832CA9B8;
loc_832CA9AC:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x832ca070
	ctx.lr = 0x832CA9B4;
	sub_832CA070(ctx, base);
	// li r27,0
	ctx.r27.s64 = 0;
loc_832CA9B8:
	// stw r27,0(r19)
	PPC_STORE_U32(ctx.r19.u32 + 0, ctx.r27.u32);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x831cdb14
	__restgprlr_19(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832CA9C8"))) PPC_WEAK_FUNC(sub_832CA9C8);
PPC_FUNC_IMPL(__imp__sub_832CA9C8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdab0
	ctx.lr = 0x832CA9D0;
	__savegprlr_14(ctx, base);
	// li r14,0
	ctx.r14.s64 = 0;
	// stw r4,28(r1)
	PPC_STORE_U32(ctx.r1.u32 + 28, ctx.r4.u32);
	// mr r8,r4
	ctx.r8.u64 = ctx.r4.u64;
	// stw r5,36(r1)
	PPC_STORE_U32(ctx.r1.u32 + 36, ctx.r5.u32);
	// stw r6,44(r1)
	PPC_STORE_U32(ctx.r1.u32 + 44, ctx.r6.u32);
	// cmpwi cr6,r6,0
	cr6.compare<int32_t>(ctx.r6.s32, 0, xer);
	// stb r14,-160(r1)
	PPC_STORE_U8(ctx.r1.u32 + -160, ctx.r14.u8);
	// ble cr6,0x832cbd64
	if (!cr6.gt) goto loc_832CBD64;
	// xori r11,r3,1
	ctx.r11.u64 = ctx.r3.u64 ^ 1;
	// lis r10,-31772
	ctx.r10.s64 = -2082209792;
	// addi r6,r11,-1
	ctx.r6.s64 = ctx.r11.s64 + -1;
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// lis r9,-31772
	ctx.r9.s64 = -2082209792;
	// not r5,r6
	ctx.r5.u64 = ~ctx.r6.u64;
	// addi r19,r11,23996
	ctx.r19.s64 = ctx.r11.s64 + 23996;
	// addi r15,r10,24012
	ctx.r15.s64 = ctx.r10.s64 + 24012;
	// addi r18,r9,23964
	ctx.r18.s64 = ctx.r9.s64 + 23964;
	// li r17,-1024
	ctx.r17.s64 = -1024;
	// li r16,128
	ctx.r16.s64 = 128;
	// li r4,512
	ctx.r4.s64 = 512;
	// b 0x832caa28
	goto loc_832CAA28;
loc_832CAA24:
	// lwz r8,28(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 28);
loc_832CAA28:
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x832caa50
	if (cr6.eq) goto loc_832CAA50;
	// rlwinm r11,r14,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r14.u32 | (ctx.r14.u64 << 32), 31) & 0x7FFFFFFF;
	// rlwinm r10,r14,2,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r14.u32 | (ctx.r14.u64 << 32), 2) & 0x4;
	// lbzx r8,r11,r8
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r8.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// extsb r10,r8
	ctx.r10.s64 = ctx.r8.s8;
	// sraw r9,r10,r11
	temp.u32 = ctx.r11.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	xer.ca = (ctx.r10.s32 < 0) & (((ctx.r10.s32 >> temp.u32) << temp.u32) != ctx.r10.s32);
	ctx.r9.s64 = ctx.r10.s32 >> temp.u32;
	// clrlwi r24,r9,28
	ctx.r24.u64 = ctx.r9.u32 & 0xF;
	// b 0x832caa94
	goto loc_832CAA94;
loc_832CAA50:
	// rlwinm r11,r14,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r14.u32 | (ctx.r14.u64 << 32), 1) & 0xFFFFFFFE;
	// li r12,7880
	ctx.r12.s64 = 7880;
	// lhzx r10,r11,r8
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r8.u32);
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// addi r9,r10,-7880
	ctx.r9.s64 = ctx.r10.s64 + -7880;
	// srawi r11,r9,16
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFFFF) != 0);
	ctx.r11.s64 = ctx.r9.s32 >> 16;
	// not r8,r11
	ctx.r8.u64 = ~ctx.r11.u64;
	// and r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	// and r10,r8,r12
	ctx.r10.u64 = ctx.r8.u64 & ctx.r12.u64;
	// li r12,-7880
	ctx.r12.s64 = -7880;
	// or r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 | ctx.r11.u64;
	// addi r9,r10,7880
	ctx.r9.s64 = ctx.r10.s64 + 7880;
	// srawi r11,r9,16
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFFFF) != 0);
	ctx.r11.s64 = ctx.r9.s32 >> 16;
	// and r8,r11,r12
	ctx.r8.u64 = ctx.r11.u64 & ctx.r12.u64;
	// andc r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ~ctx.r11.u64;
	// or r10,r11,r8
	ctx.r10.u64 = ctx.r11.u64 | ctx.r8.u64;
	// extsh r24,r10
	ctx.r24.s64 = ctx.r10.s16;
loc_832CAA94:
	// lhz r11,8(r7)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r7.u32 + 8);
	// lhz r9,26(r7)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r7.u32 + 26);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// extsh r11,r9
	ctx.r11.s64 = ctx.r9.s16;
	// srawi r8,r10,15
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFF) != 0);
	ctx.r8.s64 = ctx.r10.s32 >> 15;
	// srawi r10,r10,2
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 2;
	// clrlwi r8,r8,31
	ctx.r8.u64 = ctx.r8.u32 & 0x1;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq cr6,0x832caac0
	if (cr6.eq) goto loc_832CAAC0;
	// neg r9,r10
	ctx.r9.s64 = -ctx.r10.s64;
	// clrlwi r10,r9,19
	ctx.r10.u64 = ctx.r9.u32 & 0x1FFF;
loc_832CAAC0:
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// subfic r9,r9,32
	xer.ca = ctx.r9.u32 <= 32;
	ctx.r9.s64 = 32 - ctx.r9.s64;
	// bne cr6,0x832caad8
	if (!cr6.eq) goto loc_832CAAD8;
	// li r10,32
	ctx.r10.s64 = 32;
	// b 0x832caae0
	goto loc_832CAAE0;
loc_832CAAD8:
	// rlwinm r10,r10,6,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 6) & 0xFFFFFFC0;
	// sraw r10,r10,r9
	temp.u32 = ctx.r9.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	xer.ca = (ctx.r10.s32 < 0) & (((ctx.r10.s32 >> temp.u32) << temp.u32) != ctx.r10.s32);
	ctx.r10.s64 = ctx.r10.s32 >> temp.u32;
loc_832CAAE0:
	// srawi r31,r11,10
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3FF) != 0);
	ctx.r31.s64 = ctx.r11.s32 >> 10;
	// clrlwi r30,r11,26
	ctx.r30.u64 = ctx.r11.u32 & 0x3F;
	// srawi r11,r11,6
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3F) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 6;
	// mullw r10,r30,r10
	ctx.r10.s64 = int64_t(ctx.r30.s32) * int64_t(ctx.r10.s32);
	// clrlwi r11,r11,28
	ctx.r11.u64 = ctx.r11.u32 & 0xF;
	// clrlwi r31,r31,31
	ctx.r31.u64 = ctx.r31.u32 & 0x1;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r10,r10,48
	ctx.r10.s64 = ctx.r10.s64 + 48;
	// xor r9,r31,r8
	ctx.r9.u64 = ctx.r31.u64 ^ ctx.r8.u64;
	// rlwinm r10,r10,3,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFF80;
	// cmpwi cr6,r11,26
	cr6.compare<int32_t>(ctx.r11.s32, 26, xer);
	// bgt cr6,0x832cab1c
	if (cr6.gt) goto loc_832CAB1C;
	// subfic r11,r11,26
	xer.ca = ctx.r11.u32 <= 26;
	ctx.r11.s64 = 26 - ctx.r11.s64;
	// sraw r10,r10,r11
	temp.u32 = ctx.r11.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	xer.ca = (ctx.r10.s32 < 0) & (((ctx.r10.s32 >> temp.u32) << temp.u32) != ctx.r10.s32);
	ctx.r10.s64 = ctx.r10.s32 >> temp.u32;
	// b 0x832cab28
	goto loc_832CAB28;
loc_832CAB1C:
	// addi r11,r11,-26
	ctx.r11.s64 = ctx.r11.s64 + -26;
	// slw r10,r10,r11
	ctx.r10.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r11.u8 & 0x3F));
	// clrlwi r10,r10,17
	ctx.r10.u64 = ctx.r10.u32 & 0x7FFF;
loc_832CAB28:
	// xori r11,r9,1
	ctx.r11.u64 = ctx.r9.u64 ^ 1;
	// lhz r8,10(r7)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r7.u32 + 10);
	// neg r31,r10
	ctx.r31.s64 = -ctx.r10.s64;
	// lhz r30,28(r7)
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r7.u32 + 28);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// extsh r9,r8
	ctx.r9.s64 = ctx.r8.s16;
	// and r8,r31,r11
	ctx.r8.u64 = ctx.r31.u64 & ctx.r11.u64;
	// andc r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ~ctx.r11.u64;
	// srawi r10,r9,15
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7FFF) != 0);
	ctx.r10.s64 = ctx.r9.s32 >> 15;
	// or r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 | ctx.r8.u64;
	// clrlwi r8,r10,31
	ctx.r8.u64 = ctx.r10.u32 & 0x1;
	// extsh r25,r11
	ctx.r25.s64 = ctx.r11.s16;
	// extsh r11,r30
	ctx.r11.s64 = ctx.r30.s16;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// srawi r10,r9,2
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r9.s32 >> 2;
	// beq cr6,0x832cab70
	if (cr6.eq) goto loc_832CAB70;
	// neg r9,r10
	ctx.r9.s64 = -ctx.r10.s64;
	// clrlwi r10,r9,19
	ctx.r10.u64 = ctx.r9.u32 & 0x1FFF;
loc_832CAB70:
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// subfic r9,r9,32
	xer.ca = ctx.r9.u32 <= 32;
	ctx.r9.s64 = 32 - ctx.r9.s64;
	// bne cr6,0x832cab88
	if (!cr6.eq) goto loc_832CAB88;
	// li r10,32
	ctx.r10.s64 = 32;
	// b 0x832cab90
	goto loc_832CAB90;
loc_832CAB88:
	// rlwinm r10,r10,6,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 6) & 0xFFFFFFC0;
	// sraw r10,r10,r9
	temp.u32 = ctx.r9.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	xer.ca = (ctx.r10.s32 < 0) & (((ctx.r10.s32 >> temp.u32) << temp.u32) != ctx.r10.s32);
	ctx.r10.s64 = ctx.r10.s32 >> temp.u32;
loc_832CAB90:
	// srawi r31,r11,10
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3FF) != 0);
	ctx.r31.s64 = ctx.r11.s32 >> 10;
	// clrlwi r30,r11,26
	ctx.r30.u64 = ctx.r11.u32 & 0x3F;
	// srawi r11,r11,6
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3F) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 6;
	// mullw r10,r30,r10
	ctx.r10.s64 = int64_t(ctx.r30.s32) * int64_t(ctx.r10.s32);
	// clrlwi r11,r11,28
	ctx.r11.u64 = ctx.r11.u32 & 0xF;
	// clrlwi r31,r31,31
	ctx.r31.u64 = ctx.r31.u32 & 0x1;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r10,r10,48
	ctx.r10.s64 = ctx.r10.s64 + 48;
	// xor r9,r31,r8
	ctx.r9.u64 = ctx.r31.u64 ^ ctx.r8.u64;
	// rlwinm r10,r10,3,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFF80;
	// cmpwi cr6,r11,26
	cr6.compare<int32_t>(ctx.r11.s32, 26, xer);
	// bgt cr6,0x832cabcc
	if (cr6.gt) goto loc_832CABCC;
	// subfic r11,r11,26
	xer.ca = ctx.r11.u32 <= 26;
	ctx.r11.s64 = 26 - ctx.r11.s64;
	// sraw r10,r10,r11
	temp.u32 = ctx.r11.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	xer.ca = (ctx.r10.s32 < 0) & (((ctx.r10.s32 >> temp.u32) << temp.u32) != ctx.r10.s32);
	ctx.r10.s64 = ctx.r10.s32 >> temp.u32;
	// b 0x832cabd8
	goto loc_832CABD8;
loc_832CABCC:
	// addi r11,r11,-26
	ctx.r11.s64 = ctx.r11.s64 + -26;
	// slw r10,r10,r11
	ctx.r10.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r11.u8 & 0x3F));
	// clrlwi r10,r10,17
	ctx.r10.u64 = ctx.r10.u32 & 0x7FFF;
loc_832CABD8:
	// xori r11,r9,1
	ctx.r11.u64 = ctx.r9.u64 ^ 1;
	// lhz r8,12(r7)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r7.u32 + 12);
	// neg r31,r10
	ctx.r31.s64 = -ctx.r10.s64;
	// lhz r30,30(r7)
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r7.u32 + 30);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// extsh r9,r8
	ctx.r9.s64 = ctx.r8.s16;
	// and r8,r31,r11
	ctx.r8.u64 = ctx.r31.u64 & ctx.r11.u64;
	// andc r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ~ctx.r11.u64;
	// srawi r10,r9,15
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7FFF) != 0);
	ctx.r10.s64 = ctx.r9.s32 >> 15;
	// or r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 | ctx.r11.u64;
	// clrlwi r8,r10,31
	ctx.r8.u64 = ctx.r10.u32 & 0x1;
	// extsh r27,r11
	ctx.r27.s64 = ctx.r11.s16;
	// extsh r11,r30
	ctx.r11.s64 = ctx.r30.s16;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// srawi r10,r9,2
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r9.s32 >> 2;
	// beq cr6,0x832cac20
	if (cr6.eq) goto loc_832CAC20;
	// neg r9,r10
	ctx.r9.s64 = -ctx.r10.s64;
	// clrlwi r10,r9,19
	ctx.r10.u64 = ctx.r9.u32 & 0x1FFF;
loc_832CAC20:
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// subfic r9,r9,32
	xer.ca = ctx.r9.u32 <= 32;
	ctx.r9.s64 = 32 - ctx.r9.s64;
	// bne cr6,0x832cac38
	if (!cr6.eq) goto loc_832CAC38;
	// li r10,32
	ctx.r10.s64 = 32;
	// b 0x832cac40
	goto loc_832CAC40;
loc_832CAC38:
	// rlwinm r10,r10,6,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 6) & 0xFFFFFFC0;
	// sraw r10,r10,r9
	temp.u32 = ctx.r9.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	xer.ca = (ctx.r10.s32 < 0) & (((ctx.r10.s32 >> temp.u32) << temp.u32) != ctx.r10.s32);
	ctx.r10.s64 = ctx.r10.s32 >> temp.u32;
loc_832CAC40:
	// srawi r31,r11,10
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3FF) != 0);
	ctx.r31.s64 = ctx.r11.s32 >> 10;
	// clrlwi r30,r11,26
	ctx.r30.u64 = ctx.r11.u32 & 0x3F;
	// srawi r11,r11,6
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3F) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 6;
	// mullw r10,r30,r10
	ctx.r10.s64 = int64_t(ctx.r30.s32) * int64_t(ctx.r10.s32);
	// clrlwi r11,r11,28
	ctx.r11.u64 = ctx.r11.u32 & 0xF;
	// clrlwi r31,r31,31
	ctx.r31.u64 = ctx.r31.u32 & 0x1;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r10,r10,48
	ctx.r10.s64 = ctx.r10.s64 + 48;
	// xor r9,r31,r8
	ctx.r9.u64 = ctx.r31.u64 ^ ctx.r8.u64;
	// rlwinm r10,r10,3,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFF80;
	// cmpwi cr6,r11,26
	cr6.compare<int32_t>(ctx.r11.s32, 26, xer);
	// bgt cr6,0x832cac7c
	if (cr6.gt) goto loc_832CAC7C;
	// subfic r11,r11,26
	xer.ca = ctx.r11.u32 <= 26;
	ctx.r11.s64 = 26 - ctx.r11.s64;
	// sraw r10,r10,r11
	temp.u32 = ctx.r11.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	xer.ca = (ctx.r10.s32 < 0) & (((ctx.r10.s32 >> temp.u32) << temp.u32) != ctx.r10.s32);
	ctx.r10.s64 = ctx.r10.s32 >> temp.u32;
	// b 0x832cac88
	goto loc_832CAC88;
loc_832CAC7C:
	// addi r11,r11,-26
	ctx.r11.s64 = ctx.r11.s64 + -26;
	// slw r10,r10,r11
	ctx.r10.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r11.u8 & 0x3F));
	// clrlwi r10,r10,17
	ctx.r10.u64 = ctx.r10.u32 & 0x7FFF;
loc_832CAC88:
	// xori r11,r9,1
	ctx.r11.u64 = ctx.r9.u64 ^ 1;
	// lhz r8,14(r7)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r7.u32 + 14);
	// neg r31,r10
	ctx.r31.s64 = -ctx.r10.s64;
	// lhz r30,32(r7)
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r7.u32 + 32);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// extsh r9,r8
	ctx.r9.s64 = ctx.r8.s16;
	// and r8,r31,r11
	ctx.r8.u64 = ctx.r31.u64 & ctx.r11.u64;
	// andc r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ~ctx.r11.u64;
	// srawi r10,r9,15
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7FFF) != 0);
	ctx.r10.s64 = ctx.r9.s32 >> 15;
	// or r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 | ctx.r11.u64;
	// clrlwi r8,r10,31
	ctx.r8.u64 = ctx.r10.u32 & 0x1;
	// extsh r28,r11
	ctx.r28.s64 = ctx.r11.s16;
	// extsh r11,r30
	ctx.r11.s64 = ctx.r30.s16;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// srawi r10,r9,2
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r9.s32 >> 2;
	// beq cr6,0x832cacd0
	if (cr6.eq) goto loc_832CACD0;
	// neg r9,r10
	ctx.r9.s64 = -ctx.r10.s64;
	// clrlwi r10,r9,19
	ctx.r10.u64 = ctx.r9.u32 & 0x1FFF;
loc_832CACD0:
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// subfic r9,r9,32
	xer.ca = ctx.r9.u32 <= 32;
	ctx.r9.s64 = 32 - ctx.r9.s64;
	// bne cr6,0x832cace8
	if (!cr6.eq) goto loc_832CACE8;
	// li r10,32
	ctx.r10.s64 = 32;
	// b 0x832cacf0
	goto loc_832CACF0;
loc_832CACE8:
	// rlwinm r10,r10,6,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 6) & 0xFFFFFFC0;
	// sraw r10,r10,r9
	temp.u32 = ctx.r9.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	xer.ca = (ctx.r10.s32 < 0) & (((ctx.r10.s32 >> temp.u32) << temp.u32) != ctx.r10.s32);
	ctx.r10.s64 = ctx.r10.s32 >> temp.u32;
loc_832CACF0:
	// srawi r31,r11,10
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3FF) != 0);
	ctx.r31.s64 = ctx.r11.s32 >> 10;
	// clrlwi r30,r11,26
	ctx.r30.u64 = ctx.r11.u32 & 0x3F;
	// srawi r11,r11,6
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3F) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 6;
	// mullw r10,r30,r10
	ctx.r10.s64 = int64_t(ctx.r30.s32) * int64_t(ctx.r10.s32);
	// clrlwi r11,r11,28
	ctx.r11.u64 = ctx.r11.u32 & 0xF;
	// clrlwi r31,r31,31
	ctx.r31.u64 = ctx.r31.u32 & 0x1;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r10,r10,48
	ctx.r10.s64 = ctx.r10.s64 + 48;
	// xor r9,r31,r8
	ctx.r9.u64 = ctx.r31.u64 ^ ctx.r8.u64;
	// rlwinm r10,r10,3,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFF80;
	// cmpwi cr6,r11,26
	cr6.compare<int32_t>(ctx.r11.s32, 26, xer);
	// bgt cr6,0x832cad2c
	if (cr6.gt) goto loc_832CAD2C;
	// subfic r11,r11,26
	xer.ca = ctx.r11.u32 <= 26;
	ctx.r11.s64 = 26 - ctx.r11.s64;
	// sraw r10,r10,r11
	temp.u32 = ctx.r11.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	xer.ca = (ctx.r10.s32 < 0) & (((ctx.r10.s32 >> temp.u32) << temp.u32) != ctx.r10.s32);
	ctx.r10.s64 = ctx.r10.s32 >> temp.u32;
	// b 0x832cad38
	goto loc_832CAD38;
loc_832CAD2C:
	// addi r11,r11,-26
	ctx.r11.s64 = ctx.r11.s64 + -26;
	// slw r10,r10,r11
	ctx.r10.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r11.u8 & 0x3F));
	// clrlwi r10,r10,17
	ctx.r10.u64 = ctx.r10.u32 & 0x7FFF;
loc_832CAD38:
	// xori r11,r9,1
	ctx.r11.u64 = ctx.r9.u64 ^ 1;
	// lhz r8,16(r7)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r7.u32 + 16);
	// neg r31,r10
	ctx.r31.s64 = -ctx.r10.s64;
	// lhz r30,34(r7)
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r7.u32 + 34);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// extsh r9,r8
	ctx.r9.s64 = ctx.r8.s16;
	// and r8,r31,r11
	ctx.r8.u64 = ctx.r31.u64 & ctx.r11.u64;
	// andc r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ~ctx.r11.u64;
	// srawi r10,r9,15
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7FFF) != 0);
	ctx.r10.s64 = ctx.r9.s32 >> 15;
	// or r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 | ctx.r11.u64;
	// clrlwi r8,r10,31
	ctx.r8.u64 = ctx.r10.u32 & 0x1;
	// extsh r29,r11
	ctx.r29.s64 = ctx.r11.s16;
	// extsh r11,r30
	ctx.r11.s64 = ctx.r30.s16;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// srawi r10,r9,2
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r9.s32 >> 2;
	// beq cr6,0x832cad80
	if (cr6.eq) goto loc_832CAD80;
	// neg r9,r10
	ctx.r9.s64 = -ctx.r10.s64;
	// clrlwi r10,r9,19
	ctx.r10.u64 = ctx.r9.u32 & 0x1FFF;
loc_832CAD80:
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// subfic r9,r9,32
	xer.ca = ctx.r9.u32 <= 32;
	ctx.r9.s64 = 32 - ctx.r9.s64;
	// bne cr6,0x832cad98
	if (!cr6.eq) goto loc_832CAD98;
	// li r10,32
	ctx.r10.s64 = 32;
	// b 0x832cada0
	goto loc_832CADA0;
loc_832CAD98:
	// rlwinm r10,r10,6,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 6) & 0xFFFFFFC0;
	// sraw r10,r10,r9
	temp.u32 = ctx.r9.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	xer.ca = (ctx.r10.s32 < 0) & (((ctx.r10.s32 >> temp.u32) << temp.u32) != ctx.r10.s32);
	ctx.r10.s64 = ctx.r10.s32 >> temp.u32;
loc_832CADA0:
	// srawi r31,r11,10
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3FF) != 0);
	ctx.r31.s64 = ctx.r11.s32 >> 10;
	// clrlwi r30,r11,26
	ctx.r30.u64 = ctx.r11.u32 & 0x3F;
	// srawi r11,r11,6
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3F) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 6;
	// mullw r10,r30,r10
	ctx.r10.s64 = int64_t(ctx.r30.s32) * int64_t(ctx.r10.s32);
	// clrlwi r11,r11,28
	ctx.r11.u64 = ctx.r11.u32 & 0xF;
	// clrlwi r31,r31,31
	ctx.r31.u64 = ctx.r31.u32 & 0x1;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r10,r10,48
	ctx.r10.s64 = ctx.r10.s64 + 48;
	// xor r9,r31,r8
	ctx.r9.u64 = ctx.r31.u64 ^ ctx.r8.u64;
	// rlwinm r10,r10,3,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFF80;
	// cmpwi cr6,r11,26
	cr6.compare<int32_t>(ctx.r11.s32, 26, xer);
	// bgt cr6,0x832caddc
	if (cr6.gt) goto loc_832CADDC;
	// subfic r11,r11,26
	xer.ca = ctx.r11.u32 <= 26;
	ctx.r11.s64 = 26 - ctx.r11.s64;
	// sraw r10,r10,r11
	temp.u32 = ctx.r11.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	xer.ca = (ctx.r10.s32 < 0) & (((ctx.r10.s32 >> temp.u32) << temp.u32) != ctx.r10.s32);
	ctx.r10.s64 = ctx.r10.s32 >> temp.u32;
	// b 0x832cade8
	goto loc_832CADE8;
loc_832CADDC:
	// addi r11,r11,-26
	ctx.r11.s64 = ctx.r11.s64 + -26;
	// slw r10,r10,r11
	ctx.r10.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r11.u8 & 0x3F));
	// clrlwi r10,r10,17
	ctx.r10.u64 = ctx.r10.u32 & 0x7FFF;
loc_832CADE8:
	// xori r11,r9,1
	ctx.r11.u64 = ctx.r9.u64 ^ 1;
	// lhz r8,18(r7)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r7.u32 + 18);
	// neg r31,r10
	ctx.r31.s64 = -ctx.r10.s64;
	// lhz r26,36(r7)
	ctx.r26.u64 = PPC_LOAD_U16(ctx.r7.u32 + 36);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// extsh r9,r8
	ctx.r9.s64 = ctx.r8.s16;
	// and r8,r31,r11
	ctx.r8.u64 = ctx.r31.u64 & ctx.r11.u64;
	// andc r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ~ctx.r11.u64;
	// srawi r10,r9,15
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7FFF) != 0);
	ctx.r10.s64 = ctx.r9.s32 >> 15;
	// or r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 | ctx.r11.u64;
	// clrlwi r8,r10,31
	ctx.r8.u64 = ctx.r10.u32 & 0x1;
	// extsh r30,r11
	ctx.r30.s64 = ctx.r11.s16;
	// extsh r11,r26
	ctx.r11.s64 = ctx.r26.s16;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// srawi r10,r9,2
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r9.s32 >> 2;
	// beq cr6,0x832cae30
	if (cr6.eq) goto loc_832CAE30;
	// neg r9,r10
	ctx.r9.s64 = -ctx.r10.s64;
	// clrlwi r10,r9,19
	ctx.r10.u64 = ctx.r9.u32 & 0x1FFF;
loc_832CAE30:
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// subfic r31,r9,32
	xer.ca = ctx.r9.u32 <= 32;
	ctx.r31.s64 = 32 - ctx.r9.s64;
	// bne cr6,0x832cae48
	if (!cr6.eq) goto loc_832CAE48;
	// li r10,32
	ctx.r10.s64 = 32;
	// b 0x832cae50
	goto loc_832CAE50;
loc_832CAE48:
	// rlwinm r10,r10,6,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 6) & 0xFFFFFFC0;
	// sraw r10,r10,r31
	temp.u32 = ctx.r31.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	xer.ca = (ctx.r10.s32 < 0) & (((ctx.r10.s32 >> temp.u32) << temp.u32) != ctx.r10.s32);
	ctx.r10.s64 = ctx.r10.s32 >> temp.u32;
loc_832CAE50:
	// srawi r26,r11,10
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3FF) != 0);
	ctx.r26.s64 = ctx.r11.s32 >> 10;
	// clrlwi r9,r11,26
	ctx.r9.u64 = ctx.r11.u32 & 0x3F;
	// srawi r11,r11,6
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3F) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 6;
	// mullw r9,r9,r10
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// clrlwi r11,r11,28
	ctx.r11.u64 = ctx.r11.u32 & 0xF;
	// clrlwi r26,r26,31
	ctx.r26.u64 = ctx.r26.u32 & 0x1;
	// add r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r9,r9,48
	ctx.r9.s64 = ctx.r9.s64 + 48;
	// xor r11,r26,r8
	ctx.r11.u64 = ctx.r26.u64 ^ ctx.r8.u64;
	// rlwinm r9,r9,3,0,24
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFF80;
	// cmpwi cr6,r10,26
	cr6.compare<int32_t>(ctx.r10.s32, 26, xer);
	// bgt cr6,0x832cae8c
	if (cr6.gt) goto loc_832CAE8C;
	// subfic r10,r10,26
	xer.ca = ctx.r10.u32 <= 26;
	ctx.r10.s64 = 26 - ctx.r10.s64;
	// sraw r10,r9,r10
	temp.u32 = ctx.r10.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	xer.ca = (ctx.r9.s32 < 0) & (((ctx.r9.s32 >> temp.u32) << temp.u32) != ctx.r9.s32);
	ctx.r10.s64 = ctx.r9.s32 >> temp.u32;
	// b 0x832cae98
	goto loc_832CAE98;
loc_832CAE8C:
	// addi r10,r10,-26
	ctx.r10.s64 = ctx.r10.s64 + -26;
	// slw r9,r9,r10
	ctx.r9.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r10.u8 & 0x3F));
	// clrlwi r10,r9,17
	ctx.r10.u64 = ctx.r9.u32 & 0x7FFF;
loc_832CAE98:
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// lhz r23,0(r7)
	ctx.r23.u64 = PPC_LOAD_U16(ctx.r7.u32 + 0);
	// neg r8,r10
	ctx.r8.s64 = -ctx.r10.s64;
	// lhz r26,42(r7)
	ctx.r26.u64 = PPC_LOAD_U16(ctx.r7.u32 + 42);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// extsh r9,r30
	ctx.r9.s64 = ctx.r30.s16;
	// andc r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 & ~ctx.r11.u64;
	// and r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 & ctx.r11.u64;
	// extsh r8,r29
	ctx.r8.s64 = ctx.r29.s16;
	// or r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 | ctx.r11.u64;
	// extsh r31,r28
	ctx.r31.s64 = ctx.r28.s16;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// extsh r30,r27
	ctx.r30.s64 = ctx.r27.s16;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// extsh r11,r23
	ctx.r11.s64 = ctx.r23.s16;
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + ctx.r31.u64;
	// srawi r9,r11,15
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFF) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 15;
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + ctx.r30.u64;
	// clrlwi r28,r9,31
	ctx.r28.u64 = ctx.r9.u32 & 0x1;
	// add r8,r10,r25
	ctx.r8.u64 = ctx.r10.u64 + ctx.r25.u64;
	// extsh r27,r26
	ctx.r27.s64 = ctx.r26.s16;
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(ctx.r28.s32, 0, xer);
	// extsh r30,r8
	ctx.r30.s64 = ctx.r8.s16;
	// srawi r11,r11,2
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// beq cr6,0x832caf04
	if (cr6.eq) goto loc_832CAF04;
	// neg r10,r11
	ctx.r10.s64 = -ctx.r11.s64;
	// clrlwi r11,r10,19
	ctx.r11.u64 = ctx.r10.u32 & 0x1FFF;
loc_832CAF04:
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// subfic r9,r10,32
	xer.ca = ctx.r10.u32 <= 32;
	ctx.r9.s64 = 32 - ctx.r10.s64;
	// bne cr6,0x832caf1c
	if (!cr6.eq) goto loc_832CAF1C;
	// li r10,32
	ctx.r10.s64 = 32;
	// b 0x832caf24
	goto loc_832CAF24;
loc_832CAF1C:
	// rlwinm r11,r11,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
	// sraw r10,r11,r9
	temp.u32 = ctx.r9.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	xer.ca = (ctx.r11.s32 < 0) & (((ctx.r11.s32 >> temp.u32) << temp.u32) != ctx.r11.s32);
	ctx.r10.s64 = ctx.r11.s32 >> temp.u32;
loc_832CAF24:
	// srawi r8,r27,10
	xer.ca = (ctx.r27.s32 < 0) & ((ctx.r27.u32 & 0x3FF) != 0);
	ctx.r8.s64 = ctx.r27.s32 >> 10;
	// srawi r11,r27,6
	xer.ca = (ctx.r27.s32 < 0) & ((ctx.r27.u32 & 0x3F) != 0);
	ctx.r11.s64 = ctx.r27.s32 >> 6;
	// clrlwi r31,r27,26
	ctx.r31.u64 = ctx.r27.u32 & 0x3F;
	// clrlwi r11,r11,28
	ctx.r11.u64 = ctx.r11.u32 & 0xF;
	// mullw r10,r31,r10
	ctx.r10.s64 = int64_t(ctx.r31.s32) * int64_t(ctx.r10.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// clrlwi r9,r8,31
	ctx.r9.u64 = ctx.r8.u32 & 0x1;
	// addi r8,r10,48
	ctx.r8.s64 = ctx.r10.s64 + 48;
	// xor r9,r9,r28
	ctx.r9.u64 = ctx.r9.u64 ^ ctx.r28.u64;
	// rlwinm r10,r8,3,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFF80;
	// cmpwi cr6,r11,26
	cr6.compare<int32_t>(ctx.r11.s32, 26, xer);
	// bgt cr6,0x832caf60
	if (cr6.gt) goto loc_832CAF60;
	// subfic r11,r11,26
	xer.ca = ctx.r11.u32 <= 26;
	ctx.r11.s64 = 26 - ctx.r11.s64;
	// sraw r10,r10,r11
	temp.u32 = ctx.r11.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	xer.ca = (ctx.r10.s32 < 0) & (((ctx.r10.s32 >> temp.u32) << temp.u32) != ctx.r10.s32);
	ctx.r10.s64 = ctx.r10.s32 >> temp.u32;
	// b 0x832caf6c
	goto loc_832CAF6C;
loc_832CAF60:
	// addi r11,r11,-26
	ctx.r11.s64 = ctx.r11.s64 + -26;
	// slw r10,r10,r11
	ctx.r10.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r11.u8 & 0x3F));
	// clrlwi r10,r10,17
	ctx.r10.u64 = ctx.r10.u32 & 0x7FFF;
loc_832CAF6C:
	// xori r11,r9,1
	ctx.r11.u64 = ctx.r9.u64 ^ 1;
	// lhz r8,2(r7)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r7.u32 + 2);
	// neg r31,r10
	ctx.r31.s64 = -ctx.r10.s64;
	// lhz r29,44(r7)
	ctx.r29.u64 = PPC_LOAD_U16(ctx.r7.u32 + 44);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// extsh r9,r8
	ctx.r9.s64 = ctx.r8.s16;
	// and r8,r31,r11
	ctx.r8.u64 = ctx.r31.u64 & ctx.r11.u64;
	// andc r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ~ctx.r11.u64;
	// srawi r10,r9,15
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7FFF) != 0);
	ctx.r10.s64 = ctx.r9.s32 >> 15;
	// or r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 | ctx.r8.u64;
	// clrlwi r8,r10,31
	ctx.r8.u64 = ctx.r10.u32 & 0x1;
	// extsh r31,r11
	ctx.r31.s64 = ctx.r11.s16;
	// extsh r11,r29
	ctx.r11.s64 = ctx.r29.s16;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// srawi r10,r9,2
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r9.s32 >> 2;
	// beq cr6,0x832cafb4
	if (cr6.eq) goto loc_832CAFB4;
	// neg r9,r10
	ctx.r9.s64 = -ctx.r10.s64;
	// clrlwi r10,r9,19
	ctx.r10.u64 = ctx.r9.u32 & 0x1FFF;
loc_832CAFB4:
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// subfic r9,r9,32
	xer.ca = ctx.r9.u32 <= 32;
	ctx.r9.s64 = 32 - ctx.r9.s64;
	// bne cr6,0x832cafcc
	if (!cr6.eq) goto loc_832CAFCC;
	// li r10,32
	ctx.r10.s64 = 32;
	// b 0x832cafd4
	goto loc_832CAFD4;
loc_832CAFCC:
	// rlwinm r10,r10,6,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 6) & 0xFFFFFFC0;
	// sraw r10,r10,r9
	temp.u32 = ctx.r9.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	xer.ca = (ctx.r10.s32 < 0) & (((ctx.r10.s32 >> temp.u32) << temp.u32) != ctx.r10.s32);
	ctx.r10.s64 = ctx.r10.s32 >> temp.u32;
loc_832CAFD4:
	// srawi r29,r11,10
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3FF) != 0);
	ctx.r29.s64 = ctx.r11.s32 >> 10;
	// clrlwi r28,r11,26
	ctx.r28.u64 = ctx.r11.u32 & 0x3F;
	// srawi r11,r11,6
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3F) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 6;
	// mullw r10,r28,r10
	ctx.r10.s64 = int64_t(ctx.r28.s32) * int64_t(ctx.r10.s32);
	// clrlwi r11,r11,28
	ctx.r11.u64 = ctx.r11.u32 & 0xF;
	// clrlwi r29,r29,31
	ctx.r29.u64 = ctx.r29.u32 & 0x1;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r10,r10,48
	ctx.r10.s64 = ctx.r10.s64 + 48;
	// xor r9,r29,r8
	ctx.r9.u64 = ctx.r29.u64 ^ ctx.r8.u64;
	// rlwinm r10,r10,3,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFF80;
	// cmpwi cr6,r11,26
	cr6.compare<int32_t>(ctx.r11.s32, 26, xer);
	// bgt cr6,0x832cb010
	if (cr6.gt) goto loc_832CB010;
	// subfic r11,r11,26
	xer.ca = ctx.r11.u32 <= 26;
	ctx.r11.s64 = 26 - ctx.r11.s64;
	// sraw r10,r10,r11
	temp.u32 = ctx.r11.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	xer.ca = (ctx.r10.s32 < 0) & (((ctx.r10.s32 >> temp.u32) << temp.u32) != ctx.r10.s32);
	ctx.r10.s64 = ctx.r10.s32 >> temp.u32;
	// b 0x832cb01c
	goto loc_832CB01C;
loc_832CB010:
	// addi r11,r11,-26
	ctx.r11.s64 = ctx.r11.s64 + -26;
	// slw r10,r10,r11
	ctx.r10.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r11.u8 & 0x3F));
	// clrlwi r10,r10,17
	ctx.r10.u64 = ctx.r10.u32 & 0x7FFF;
loc_832CB01C:
	// xori r11,r9,1
	ctx.r11.u64 = ctx.r9.u64 ^ 1;
	// lhz r9,4(r7)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r7.u32 + 4);
	// neg r29,r10
	ctx.r29.s64 = -ctx.r10.s64;
	// sth r26,44(r7)
	PPC_STORE_U16(ctx.r7.u32 + 44, ctx.r26.u16);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// extsh r8,r31
	ctx.r8.s64 = ctx.r31.s16;
	// andc r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 & ~ctx.r11.u64;
	// and r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 & ctx.r11.u64;
	// or r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 | ctx.r11.u64;
	// extsh r31,r30
	ctx.r31.s64 = ctx.r30.s16;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// srawi r22,r31,1
	xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0x1) != 0);
	ctx.r22.s64 = ctx.r31.s32 >> 1;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpwi cr6,r8,256
	cr6.compare<int32_t>(ctx.r8.s32, 256, xer);
	// srawi r23,r10,1
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r23.s64 = ctx.r10.s32 >> 1;
	// bge cr6,0x832cb070
	if (!cr6.lt) goto loc_832CB070;
	// extsh r11,r9
	ctx.r11.s64 = ctx.r9.s16;
	// srawi r11,r11,2
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// b 0x832cb074
	goto loc_832CB074;
loc_832CB070:
	// li r11,64
	ctx.r11.s64 = 64;
loc_832CB074:
	// lhz r10,52(r7)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r7.u32 + 52);
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// lhz r27,50(r7)
	ctx.r27.u64 = PPC_LOAD_U16(ctx.r7.u32 + 50);
	// subf r8,r27,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r27.s64;
	// extsh r11,r8
	ctx.r11.s64 = ctx.r8.s16;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// srawi r11,r11,15
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 15;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// xor r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// mullw r11,r8,r9
	ctx.r11.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r9.s32);
	// srawi r11,r11,6
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3F) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 6;
	// bge cr6,0x832cb0bc
	if (!cr6.lt) goto loc_832CB0BC;
	// subf r9,r11,r27
	ctx.r9.s64 = ctx.r27.s64 - ctx.r11.s64;
	// extsh r29,r9
	ctx.r29.s64 = ctx.r9.s16;
	// b 0x832cb0c4
	goto loc_832CB0C4;
loc_832CB0BC:
	// add r11,r27,r11
	ctx.r11.u64 = ctx.r27.u64 + ctx.r11.u64;
	// extsh r29,r11
	ctx.r29.s64 = ctx.r11.s16;
loc_832CB0C4:
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x832cb0d4
	if (cr6.eq) goto loc_832CB0D4;
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
	// b 0x832cb34c
	goto loc_832CB34C;
loc_832CB0D4:
	// subf r9,r23,r24
	ctx.r9.s64 = ctx.r24.s64 - ctx.r23.s64;
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// srawi r11,r8,15
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7FFF) != 0);
	ctx.r11.s64 = ctx.r8.s32 >> 15;
	// mr r30,r8
	ctx.r30.u64 = ctx.r8.u64;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// add r10,r8,r11
	ctx.r10.u64 = ctx.r8.u64 + ctx.r11.u64;
	// xor r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// ori r11,r8,1
	ctx.r11.u64 = ctx.r8.u64 | 1;
	// mr r31,r8
	ctx.r31.u64 = ctx.r8.u64;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// rlwinm r11,r10,17,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 17) & 0x1;
	// rlwinm r9,r10,18,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 18) & 0x1;
	// xor r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 ^ ctx.r11.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x832cb11c
	if (cr6.eq) goto loc_832CB11C;
	// li r11,15
	ctx.r11.s64 = 15;
	// b 0x832cb264
	goto loc_832CB264;
loc_832CB11C:
	// rlwinm r9,r10,19,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 19) & 0x1;
	// xor r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 ^ ctx.r11.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x832cb134
	if (cr6.eq) goto loc_832CB134;
	// li r11,14
	ctx.r11.s64 = 14;
	// b 0x832cb264
	goto loc_832CB264;
loc_832CB134:
	// rlwinm r9,r10,20,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 20) & 0x1;
	// xor r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 ^ ctx.r11.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x832cb14c
	if (cr6.eq) goto loc_832CB14C;
	// li r11,13
	ctx.r11.s64 = 13;
	// b 0x832cb264
	goto loc_832CB264;
loc_832CB14C:
	// rlwinm r9,r10,21,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 21) & 0x1;
	// xor r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 ^ ctx.r11.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x832cb164
	if (cr6.eq) goto loc_832CB164;
	// li r11,12
	ctx.r11.s64 = 12;
	// b 0x832cb264
	goto loc_832CB264;
loc_832CB164:
	// rlwinm r9,r10,22,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 22) & 0x1;
	// xor r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 ^ ctx.r11.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x832cb17c
	if (cr6.eq) goto loc_832CB17C;
	// li r11,11
	ctx.r11.s64 = 11;
	// b 0x832cb264
	goto loc_832CB264;
loc_832CB17C:
	// rlwinm r9,r10,23,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 23) & 0x1;
	// xor r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 ^ ctx.r11.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x832cb194
	if (cr6.eq) goto loc_832CB194;
	// li r11,10
	ctx.r11.s64 = 10;
	// b 0x832cb264
	goto loc_832CB264;
loc_832CB194:
	// rlwinm r9,r10,24,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0x1;
	// xor r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 ^ ctx.r11.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x832cb1ac
	if (cr6.eq) goto loc_832CB1AC;
	// li r11,9
	ctx.r11.s64 = 9;
	// b 0x832cb264
	goto loc_832CB264;
loc_832CB1AC:
	// rlwinm r9,r10,25,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 25) & 0x1;
	// xor r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 ^ ctx.r11.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x832cb1c4
	if (cr6.eq) goto loc_832CB1C4;
	// li r11,8
	ctx.r11.s64 = 8;
	// b 0x832cb264
	goto loc_832CB264;
loc_832CB1C4:
	// rlwinm r9,r10,26,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 26) & 0x1;
	// xor r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 ^ ctx.r11.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x832cb1dc
	if (cr6.eq) goto loc_832CB1DC;
	// li r11,7
	ctx.r11.s64 = 7;
	// b 0x832cb264
	goto loc_832CB264;
loc_832CB1DC:
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xor r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 ^ ctx.r11.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x832cb1f4
	if (cr6.eq) goto loc_832CB1F4;
	// li r11,6
	ctx.r11.s64 = 6;
	// b 0x832cb264
	goto loc_832CB264;
loc_832CB1F4:
	// rlwinm r9,r10,28,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0x1;
	// xor r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 ^ ctx.r11.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x832cb20c
	if (cr6.eq) goto loc_832CB20C;
	// li r11,5
	ctx.r11.s64 = 5;
	// b 0x832cb264
	goto loc_832CB264;
loc_832CB20C:
	// rlwinm r9,r10,29,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1;
	// xor r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 ^ ctx.r11.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x832cb224
	if (cr6.eq) goto loc_832CB224;
	// li r11,4
	ctx.r11.s64 = 4;
	// b 0x832cb264
	goto loc_832CB264;
loc_832CB224:
	// rlwinm r9,r10,30,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x1;
	// xor r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 ^ ctx.r11.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x832cb23c
	if (cr6.eq) goto loc_832CB23C;
	// li r11,3
	ctx.r11.s64 = 3;
	// b 0x832cb264
	goto loc_832CB264;
loc_832CB23C:
	// rlwinm r9,r10,31,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x1;
	// xor r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 ^ ctx.r11.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x832cb254
	if (cr6.eq) goto loc_832CB254;
	// li r11,2
	ctx.r11.s64 = 2;
	// b 0x832cb264
	goto loc_832CB264;
loc_832CB254:
	// clrlwi r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	// xor r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// addic r11,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r11.s64 = ctx.r9.s64 + -1;
	// subfe r11,r11,r9
	temp.u8 = (~ctx.r11.u32 + ctx.r9.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
loc_832CB264:
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// subfic r11,r9,7
	xer.ca = ctx.r9.u32 <= 7;
	ctx.r11.s64 = 7 - ctx.r9.s64;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bge cr6,0x832cb290
	if (!cr6.lt) goto loc_832CB290;
	// neg r11,r11
	ctx.r11.s64 = -ctx.r11.s64;
	// extsh r10,r8
	ctx.r10.s64 = ctx.r8.s16;
	// extsh r8,r11
	ctx.r8.s64 = ctx.r11.s16;
	// sraw r11,r10,r8
	temp.u32 = ctx.r8.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	xer.ca = (ctx.r10.s32 < 0) & (((ctx.r10.s32 >> temp.u32) << temp.u32) != ctx.r10.s32);
	ctx.r11.s64 = ctx.r10.s32 >> temp.u32;
	// b 0x832cb298
	goto loc_832CB298;
loc_832CB290:
	// slw r11,r31,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r31.u32 << (ctx.r11.u8 & 0x3F));
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
loc_832CB298:
	// rlwinm r10,r9,7,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 7) & 0xFFFFFF80;
	// extsh r9,r29
	ctx.r9.s64 = ctx.r29.s16;
	// extsh r8,r10
	ctx.r8.s64 = ctx.r10.s16;
	// srawi r9,r9,2
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 2;
	// clrlwi r10,r11,25
	ctx.r10.u64 = ctx.r11.u32 & 0x7F;
	// subf r11,r9,r8
	ctx.r11.s64 = ctx.r8.s64 - ctx.r9.s64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// cmpwi cr6,r11,-124
	cr6.compare<int32_t>(ctx.r11.s32, -124, xer);
	// bge cr6,0x832cb2c8
	if (!cr6.lt) goto loc_832CB2C8;
	// li r11,15
	ctx.r11.s64 = 15;
	// b 0x832cb330
	goto loc_832CB330;
loc_832CB2C8:
	// cmpwi cr6,r11,80
	cr6.compare<int32_t>(ctx.r11.s32, 80, xer);
	// blt cr6,0x832cb32c
	if (cr6.lt) goto loc_832CB32C;
	// cmpwi cr6,r11,178
	cr6.compare<int32_t>(ctx.r11.s32, 178, xer);
	// bge cr6,0x832cb2e0
	if (!cr6.lt) goto loc_832CB2E0;
	// li r11,2
	ctx.r11.s64 = 2;
	// b 0x832cb330
	goto loc_832CB330;
loc_832CB2E0:
	// cmpwi cr6,r11,246
	cr6.compare<int32_t>(ctx.r11.s32, 246, xer);
	// bge cr6,0x832cb2f0
	if (!cr6.lt) goto loc_832CB2F0;
	// li r11,3
	ctx.r11.s64 = 3;
	// b 0x832cb330
	goto loc_832CB330;
loc_832CB2F0:
	// cmpwi cr6,r11,300
	cr6.compare<int32_t>(ctx.r11.s32, 300, xer);
	// bge cr6,0x832cb300
	if (!cr6.lt) goto loc_832CB300;
	// li r11,4
	ctx.r11.s64 = 4;
	// b 0x832cb330
	goto loc_832CB330;
loc_832CB300:
	// cmpwi cr6,r11,349
	cr6.compare<int32_t>(ctx.r11.s32, 349, xer);
	// bge cr6,0x832cb310
	if (!cr6.lt) goto loc_832CB310;
	// li r11,5
	ctx.r11.s64 = 5;
	// b 0x832cb330
	goto loc_832CB330;
loc_832CB310:
	// cmpwi cr6,r11,400
	cr6.compare<int32_t>(ctx.r11.s32, 400, xer);
	// bge cr6,0x832cb320
	if (!cr6.lt) goto loc_832CB320;
	// li r11,6
	ctx.r11.s64 = 6;
	// b 0x832cb330
	goto loc_832CB330;
loc_832CB320:
	// cmpwi cr6,r11,2048
	cr6.compare<int32_t>(ctx.r11.s32, 2048, xer);
	// li r11,7
	ctx.r11.s64 = 7;
	// blt cr6,0x832cb330
	if (cr6.lt) goto loc_832CB330;
loc_832CB32C:
	// li r11,1
	ctx.r11.s64 = 1;
loc_832CB330:
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// bge cr6,0x832cb34c
	if (!cr6.lt) goto loc_832CB34C;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpwi cr6,r10,15
	cr6.compare<int32_t>(ctx.r10.s32, 15, xer);
	// beq cr6,0x832cb34c
	if (cr6.eq) goto loc_832CB34C;
	// not r11,r10
	ctx.r11.u64 = ~ctx.r10.u64;
	// clrlwi r11,r11,28
	ctx.r11.u64 = ctx.r11.u32 & 0xF;
loc_832CB34C:
	// extsh r26,r11
	ctx.r26.s64 = ctx.r11.s16;
	// srawi. r25,r26,3
	xer.ca = (ctx.r26.s32 < 0) & ((ctx.r26.u32 & 0x7) != 0);
	ctx.r25.s64 = ctx.r26.s32 >> 3;
	cr0.compare<int32_t>(ctx.r25.s32, 0, xer);
	// beq 0x832cb360
	if (cr0.eq) goto loc_832CB360;
	// xori r11,r26,15
	ctx.r11.u64 = ctx.r26.u64 ^ 15;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
loc_832CB360:
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// extsh r10,r29
	ctx.r10.s64 = ctx.r29.s16;
	// rlwinm r21,r11,1,0,30
	ctx.r21.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// srawi r10,r10,2
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 2;
	// lhzx r11,r21,r18
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r21.u32 + ctx.r18.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r8,r11,0,21,24
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x780;
	// clrlwi r10,r11,25
	ctx.r10.u64 = ctx.r11.u32 & 0x7F;
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// srawi r11,r8,7
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7F) != 0);
	ctx.r11.s64 = ctx.r8.s32 >> 7;
	// addi r10,r10,128
	ctx.r10.s64 = ctx.r10.s64 + 128;
	// addi r11,r11,-7
	ctx.r11.s64 = ctx.r11.s64 + -7;
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bge cr6,0x832cb3b4
	if (!cr6.lt) goto loc_832CB3B4;
	// neg r11,r11
	ctx.r11.s64 = -ctx.r11.s64;
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// extsh r8,r11
	ctx.r8.s64 = ctx.r11.s16;
	// sraw r8,r10,r8
	temp.u32 = ctx.r8.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	xer.ca = (ctx.r10.s32 < 0) & (((ctx.r10.s32 >> temp.u32) << temp.u32) != ctx.r10.s32);
	ctx.r8.s64 = ctx.r10.s32 >> temp.u32;
	// b 0x832cb3c0
	goto loc_832CB3C0;
loc_832CB3B4:
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// slw r8,r10,r11
	ctx.r8.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r11.u8 & 0x3F));
	// extsh r8,r8
	ctx.r8.s64 = ctx.r8.s16;
loc_832CB3C0:
	// rlwinm r31,r27,0,23,27
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0x1F0;
	// extsh r11,r27
	ctx.r11.s64 = ctx.r27.s16;
	// rlwinm r10,r9,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1;
	// srawi r11,r11,9
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1FF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 9;
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
	// addi r31,r10,-1
	ctx.r31.s64 = ctx.r10.s64 + -1;
	// srawi r10,r9,4
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r9.s32 >> 4;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// and r30,r31,r8
	ctx.r30.u64 = ctx.r31.u64 & ctx.r8.u64;
	// addi r10,r10,32
	ctx.r10.s64 = ctx.r10.s64 + 32;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bge cr6,0x832cb404
	if (!cr6.lt) goto loc_832CB404;
	// neg r9,r11
	ctx.r9.s64 = -ctx.r11.s64;
	// extsh r8,r10
	ctx.r8.s64 = ctx.r10.s16;
	// extsh r10,r9
	ctx.r10.s64 = ctx.r9.s16;
	// sraw r10,r8,r10
	temp.u32 = ctx.r10.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	xer.ca = (ctx.r8.s32 < 0) & (((ctx.r8.s32 >> temp.u32) << temp.u32) != ctx.r8.s32);
	ctx.r10.s64 = ctx.r8.s32 >> temp.u32;
	// b 0x832cb410
	goto loc_832CB410;
loc_832CB404:
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// slw r9,r10,r11
	ctx.r9.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r11.u8 & 0x3F));
	// extsh r10,r9
	ctx.r10.s64 = ctx.r9.s16;
loc_832CB410:
	// cmpwi cr6,r11,8
	cr6.compare<int32_t>(ctx.r11.s32, 8, xer);
	// li r11,15872
	ctx.r11.s64 = 15872;
	// bgt cr6,0x832cb420
	if (cr6.gt) goto loc_832CB420;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_832CB420:
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// extsh r28,r30
	ctx.r28.s64 = ctx.r30.s16;
	// srawi r10,r11,1
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// srawi r10,r11,1
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
	// extsh r8,r10
	ctx.r8.s64 = ctx.r10.s16;
	// cmpw cr6,r28,r8
	cr6.compare<int32_t>(ctx.r28.s32, ctx.r8.s32, xer);
	// ble cr6,0x832cb450
	if (!cr6.gt) goto loc_832CB450;
	// lhz r11,46(r7)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r7.u32 + 46);
	// li r24,-1
	ctx.r24.s64 = -1;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// beq cr6,0x832cb454
	if (cr6.eq) goto loc_832CB454;
loc_832CB450:
	// li r24,0
	ctx.r24.s64 = 0;
loc_832CB454:
	// lhzx r11,r21,r15
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r21.u32 + ctx.r15.u32);
	// extsh r20,r29
	ctx.r20.s64 = ctx.r29.s16;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// rlwinm r9,r10,5,0,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// subf r8,r20,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r20.s64;
	// srawi r11,r8,5
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1F) != 0);
	ctx.r11.s64 = ctx.r8.s32 >> 5;
	// add r11,r11,r20
	ctx.r11.u64 = ctx.r11.u64 + ctx.r20.u64;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,544
	cr6.compare<int32_t>(ctx.r11.s32, 544, xer);
	// bge cr6,0x832cb488
	if (!cr6.lt) goto loc_832CB488;
	// li r11,544
	ctx.r11.s64 = 544;
	// b 0x832cb494
	goto loc_832CB494;
loc_832CB488:
	// cmpwi cr6,r10,5120
	cr6.compare<int32_t>(ctx.r10.s32, 5120, xer);
	// blt cr6,0x832cb494
	if (cr6.lt) goto loc_832CB494;
	// li r11,5120
	ctx.r11.s64 = 5120;
loc_832CB494:
	// lhz r10,48(r7)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r7.u32 + 48);
	// extsh r9,r27
	ctx.r9.s64 = ctx.r27.s16;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// sth r11,52(r7)
	PPC_STORE_U16(ctx.r7.u32 + 52, ctx.r11.u16);
	// rlwinm r9,r9,6,0,25
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 6) & 0xFFFFFFC0;
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// rlwinm r11,r30,17,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 17) & 0x1;
	// add r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r29,r28,18,31,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 18) & 0x1;
	// neg r8,r8
	ctx.r8.s64 = -ctx.r8.s64;
	// xor r29,r29,r11
	ctx.r29.u64 = ctx.r29.u64 ^ ctx.r11.u64;
	// srawi r8,r8,6
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3F) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 6;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// add r8,r8,r31
	ctx.r8.u64 = ctx.r8.u64 + ctx.r31.u64;
	// extsh r8,r8
	ctx.r8.s64 = ctx.r8.s16;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// srawi r9,r10,6
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3F) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 6;
	// clrlwi r8,r10,26
	ctx.r8.u64 = ctx.r10.u32 & 0x3F;
	// sth r9,50(r7)
	PPC_STORE_U16(ctx.r7.u32 + 50, ctx.r9.u16);
	// sth r8,48(r7)
	PPC_STORE_U16(ctx.r7.u32 + 48, ctx.r8.u16);
	// beq cr6,0x832cb4f4
	if (cr6.eq) goto loc_832CB4F4;
	// li r11,15
	ctx.r11.s64 = 15;
	// b 0x832cb63c
	goto loc_832CB63C;
loc_832CB4F4:
	// rlwinm r10,r28,19,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 19) & 0x1;
	// xor r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x832cb50c
	if (cr6.eq) goto loc_832CB50C;
	// li r11,14
	ctx.r11.s64 = 14;
	// b 0x832cb63c
	goto loc_832CB63C;
loc_832CB50C:
	// rlwinm r10,r28,20,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 20) & 0x1;
	// xor r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x832cb524
	if (cr6.eq) goto loc_832CB524;
	// li r11,13
	ctx.r11.s64 = 13;
	// b 0x832cb63c
	goto loc_832CB63C;
loc_832CB524:
	// rlwinm r10,r28,21,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 21) & 0x1;
	// xor r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x832cb53c
	if (cr6.eq) goto loc_832CB53C;
	// li r11,12
	ctx.r11.s64 = 12;
	// b 0x832cb63c
	goto loc_832CB63C;
loc_832CB53C:
	// rlwinm r10,r28,22,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 22) & 0x1;
	// xor r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x832cb554
	if (cr6.eq) goto loc_832CB554;
	// li r11,11
	ctx.r11.s64 = 11;
	// b 0x832cb63c
	goto loc_832CB63C;
loc_832CB554:
	// rlwinm r10,r28,23,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 23) & 0x1;
	// xor r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x832cb56c
	if (cr6.eq) goto loc_832CB56C;
	// li r11,10
	ctx.r11.s64 = 10;
	// b 0x832cb63c
	goto loc_832CB63C;
loc_832CB56C:
	// rlwinm r10,r28,24,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 24) & 0x1;
	// xor r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x832cb584
	if (cr6.eq) goto loc_832CB584;
	// li r11,9
	ctx.r11.s64 = 9;
	// b 0x832cb63c
	goto loc_832CB63C;
loc_832CB584:
	// rlwinm r10,r28,25,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 25) & 0x1;
	// xor r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x832cb59c
	if (cr6.eq) goto loc_832CB59C;
	// li r11,8
	ctx.r11.s64 = 8;
	// b 0x832cb63c
	goto loc_832CB63C;
loc_832CB59C:
	// rlwinm r10,r28,26,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 26) & 0x1;
	// xor r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x832cb5b4
	if (cr6.eq) goto loc_832CB5B4;
	// li r11,7
	ctx.r11.s64 = 7;
	// b 0x832cb63c
	goto loc_832CB63C;
loc_832CB5B4:
	// rlwinm r10,r28,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 27) & 0x1;
	// xor r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x832cb5cc
	if (cr6.eq) goto loc_832CB5CC;
	// li r11,6
	ctx.r11.s64 = 6;
	// b 0x832cb63c
	goto loc_832CB63C;
loc_832CB5CC:
	// rlwinm r10,r28,28,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 28) & 0x1;
	// xor r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x832cb5e4
	if (cr6.eq) goto loc_832CB5E4;
	// li r11,5
	ctx.r11.s64 = 5;
	// b 0x832cb63c
	goto loc_832CB63C;
loc_832CB5E4:
	// rlwinm r10,r28,29,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 29) & 0x1;
	// xor r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x832cb5fc
	if (cr6.eq) goto loc_832CB5FC;
	// li r11,4
	ctx.r11.s64 = 4;
	// b 0x832cb63c
	goto loc_832CB63C;
loc_832CB5FC:
	// rlwinm r10,r28,30,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 30) & 0x1;
	// xor r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x832cb614
	if (cr6.eq) goto loc_832CB614;
	// li r11,3
	ctx.r11.s64 = 3;
	// b 0x832cb63c
	goto loc_832CB63C;
loc_832CB614:
	// rlwinm r10,r28,31,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 31) & 0x1;
	// xor r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x832cb62c
	if (cr6.eq) goto loc_832CB62C;
	// li r11,2
	ctx.r11.s64 = 2;
	// b 0x832cb63c
	goto loc_832CB63C;
loc_832CB62C:
	// clrlwi r10,r28,31
	ctx.r10.u64 = ctx.r28.u32 & 0x1;
	// xor r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// addic r8,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r8.s64 = ctx.r9.s64 + -1;
	// subfe r11,r8,r9
	temp.u8 = (~ctx.r8.u32 + ctx.r9.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r8.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
loc_832CB63C:
	// extsh r8,r11
	ctx.r8.s64 = ctx.r11.s16;
	// subfic r11,r8,6
	xer.ca = ctx.r8.u32 <= 6;
	ctx.r11.s64 = 6 - ctx.r8.s64;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bge cr6,0x832cb664
	if (!cr6.lt) goto loc_832CB664;
	// neg r11,r11
	ctx.r11.s64 = -ctx.r11.s64;
	// extsh r10,r30
	ctx.r10.s64 = ctx.r30.s16;
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// sraw r11,r10,r9
	temp.u32 = ctx.r9.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	xer.ca = (ctx.r10.s32 < 0) & (((ctx.r10.s32 >> temp.u32) << temp.u32) != ctx.r10.s32);
	ctx.r11.s64 = ctx.r10.s32 >> temp.u32;
	// b 0x832cb66c
	goto loc_832CB66C;
loc_832CB664:
	// slw r11,r28,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r28.u32 << (ctx.r11.u8 & 0x3F));
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
loc_832CB66C:
	// ori r10,r11,32
	ctx.r10.u64 = ctx.r11.u64 | 32;
	// cmpwi cr6,r25,0
	cr6.compare<int32_t>(ctx.r25.s32, 0, xer);
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// beq cr6,0x832cb694
	if (cr6.eq) goto loc_832CB694;
	// subf r11,r28,r22
	ctx.r11.s64 = ctx.r22.s64 - ctx.r28.s64;
	// subf r31,r28,r23
	ctx.r31.s64 = ctx.r23.s64 - ctx.r28.s64;
	// extsh r27,r11
	ctx.r27.s64 = ctx.r11.s16;
	// mr r10,r17
	ctx.r10.u64 = ctx.r17.u64;
	// extsh r11,r31
	ctx.r11.s64 = ctx.r31.s16;
	// b 0x832cb6a8
	goto loc_832CB6A8;
loc_832CB694:
	// add r31,r22,r28
	ctx.r31.u64 = ctx.r22.u64 + ctx.r28.u64;
	// add r11,r23,r28
	ctx.r11.u64 = ctx.r23.u64 + ctx.r28.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// extsh r27,r31
	ctx.r27.s64 = ctx.r31.s16;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
loc_832CB6A8:
	// extsh r30,r11
	ctx.r30.s64 = ctx.r11.s16;
	// extsh r25,r11
	ctx.r25.s64 = ctx.r11.s16;
	// addi r11,r30,-8191
	ctx.r11.s64 = ctx.r30.s64 + -8191;
	// extsh r29,r10
	ctx.r29.s64 = ctx.r10.s16;
	// srawi r11,r11,16
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFFFF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 16;
	// extsh r31,r9
	ctx.r31.s64 = ctx.r9.s16;
	// not r10,r11
	ctx.r10.u64 = ~ctx.r11.u64;
	// and r9,r11,r30
	ctx.r9.u64 = ctx.r11.u64 & ctx.r30.u64;
	// clrlwi r11,r10,19
	ctx.r11.u64 = ctx.r10.u32 & 0x1FFF;
	// rlwinm r8,r8,6,0,25
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 6) & 0xFFFFFFC0;
	// or r10,r9,r11
	ctx.r10.u64 = ctx.r9.u64 | ctx.r11.u64;
	// and r26,r5,r26
	ctx.r26.u64 = ctx.r5.u64 & ctx.r26.u64;
	// addi r9,r10,8192
	ctx.r9.s64 = ctx.r10.s64 + 8192;
	// srawi r11,r9,16
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFFFF) != 0);
	ctx.r11.s64 = ctx.r9.s32 >> 16;
	// srawi r9,r25,15
	xer.ca = (ctx.r25.s32 < 0) & ((ctx.r25.u32 & 0x7FFF) != 0);
	ctx.r9.s64 = ctx.r25.s32 >> 15;
	// andc r25,r10,r11
	ctx.r25.u64 = ctx.r10.u64 & ~ctx.r11.u64;
	// extsh r10,r9
	ctx.r10.s64 = ctx.r9.s16;
	// rlwinm r11,r11,0,0,18
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFE000;
	// add r9,r10,r30
	ctx.r9.u64 = ctx.r10.u64 + ctx.r30.u64;
	// or r11,r25,r11
	ctx.r11.u64 = ctx.r25.u64 | ctx.r11.u64;
	// xor r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 ^ ctx.r10.u64;
	// add r10,r8,r31
	ctx.r10.u64 = ctx.r8.u64 + ctx.r31.u64;
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// and r8,r11,r6
	ctx.r8.u64 = ctx.r11.u64 & ctx.r6.u64;
	// rlwinm r31,r9,18,31,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 18) & 0x1;
	// rlwinm r11,r9,17,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 17) & 0x1;
	// add r25,r10,r29
	ctx.r25.u64 = ctx.r10.u64 + ctx.r29.u64;
	// xor r23,r31,r11
	ctx.r23.u64 = ctx.r31.u64 ^ ctx.r11.u64;
	// or r8,r8,r26
	ctx.r8.u64 = ctx.r8.u64 | ctx.r26.u64;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// extsh r31,r25
	ctx.r31.s64 = ctx.r25.s16;
	// extsh r26,r8
	ctx.r26.s64 = ctx.r8.s16;
	// cmplwi cr6,r23,0
	cr6.compare<uint32_t>(ctx.r23.u32, 0, xer);
	// beq cr6,0x832cb738
	if (cr6.eq) goto loc_832CB738;
	// li r11,15
	ctx.r11.s64 = 15;
	// b 0x832cb880
	goto loc_832CB880;
loc_832CB738:
	// rlwinm r8,r10,19,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 19) & 0x1;
	// xor r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 ^ ctx.r11.u64;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x832cb750
	if (cr6.eq) goto loc_832CB750;
	// li r11,14
	ctx.r11.s64 = 14;
	// b 0x832cb880
	goto loc_832CB880;
loc_832CB750:
	// rlwinm r8,r10,20,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 20) & 0x1;
	// xor r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 ^ ctx.r11.u64;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x832cb768
	if (cr6.eq) goto loc_832CB768;
	// li r11,13
	ctx.r11.s64 = 13;
	// b 0x832cb880
	goto loc_832CB880;
loc_832CB768:
	// rlwinm r8,r10,21,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 21) & 0x1;
	// xor r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 ^ ctx.r11.u64;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x832cb780
	if (cr6.eq) goto loc_832CB780;
	// li r11,12
	ctx.r11.s64 = 12;
	// b 0x832cb880
	goto loc_832CB880;
loc_832CB780:
	// rlwinm r8,r10,22,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 22) & 0x1;
	// xor r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 ^ ctx.r11.u64;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x832cb798
	if (cr6.eq) goto loc_832CB798;
	// li r11,11
	ctx.r11.s64 = 11;
	// b 0x832cb880
	goto loc_832CB880;
loc_832CB798:
	// rlwinm r8,r10,23,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 23) & 0x1;
	// xor r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 ^ ctx.r11.u64;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x832cb7b0
	if (cr6.eq) goto loc_832CB7B0;
	// li r11,10
	ctx.r11.s64 = 10;
	// b 0x832cb880
	goto loc_832CB880;
loc_832CB7B0:
	// rlwinm r8,r10,24,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0x1;
	// xor r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 ^ ctx.r11.u64;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x832cb7c8
	if (cr6.eq) goto loc_832CB7C8;
	// li r11,9
	ctx.r11.s64 = 9;
	// b 0x832cb880
	goto loc_832CB880;
loc_832CB7C8:
	// rlwinm r8,r10,25,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 25) & 0x1;
	// xor r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 ^ ctx.r11.u64;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x832cb7e0
	if (cr6.eq) goto loc_832CB7E0;
	// li r11,8
	ctx.r11.s64 = 8;
	// b 0x832cb880
	goto loc_832CB880;
loc_832CB7E0:
	// rlwinm r8,r10,26,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 26) & 0x1;
	// xor r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 ^ ctx.r11.u64;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x832cb7f8
	if (cr6.eq) goto loc_832CB7F8;
	// li r11,7
	ctx.r11.s64 = 7;
	// b 0x832cb880
	goto loc_832CB880;
loc_832CB7F8:
	// rlwinm r8,r10,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xor r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 ^ ctx.r11.u64;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x832cb810
	if (cr6.eq) goto loc_832CB810;
	// li r11,6
	ctx.r11.s64 = 6;
	// b 0x832cb880
	goto loc_832CB880;
loc_832CB810:
	// rlwinm r8,r10,28,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0x1;
	// xor r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 ^ ctx.r11.u64;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x832cb828
	if (cr6.eq) goto loc_832CB828;
	// li r11,5
	ctx.r11.s64 = 5;
	// b 0x832cb880
	goto loc_832CB880;
loc_832CB828:
	// rlwinm r8,r10,29,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1;
	// xor r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 ^ ctx.r11.u64;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x832cb840
	if (cr6.eq) goto loc_832CB840;
	// li r11,4
	ctx.r11.s64 = 4;
	// b 0x832cb880
	goto loc_832CB880;
loc_832CB840:
	// rlwinm r8,r10,30,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x1;
	// xor r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 ^ ctx.r11.u64;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x832cb858
	if (cr6.eq) goto loc_832CB858;
	// li r11,3
	ctx.r11.s64 = 3;
	// b 0x832cb880
	goto loc_832CB880;
loc_832CB858:
	// rlwinm r8,r10,31,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x1;
	// xor r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 ^ ctx.r11.u64;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x832cb870
	if (cr6.eq) goto loc_832CB870;
	// li r11,2
	ctx.r11.s64 = 2;
	// b 0x832cb880
	goto loc_832CB880;
loc_832CB870:
	// clrlwi r8,r10,31
	ctx.r8.u64 = ctx.r10.u32 & 0x1;
	// xor r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 ^ ctx.r11.u64;
	// addic r8,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// subfe r11,r8,r11
	temp.u8 = (~ctx.r8.u32 + ctx.r11.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r8.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
loc_832CB880:
	// extsh r8,r11
	ctx.r8.s64 = ctx.r11.s16;
	// subfic r11,r8,6
	xer.ca = ctx.r8.u32 <= 6;
	ctx.r11.s64 = 6 - ctx.r8.s64;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bge cr6,0x832cb8a8
	if (!cr6.lt) goto loc_832CB8A8;
	// neg r11,r11
	ctx.r11.s64 = -ctx.r11.s64;
	// extsh r10,r9
	ctx.r10.s64 = ctx.r9.s16;
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// sraw r11,r10,r9
	temp.u32 = ctx.r9.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	xer.ca = (ctx.r10.s32 < 0) & (((ctx.r10.s32 >> temp.u32) << temp.u32) != ctx.r10.s32);
	ctx.r11.s64 = ctx.r10.s32 >> temp.u32;
	// b 0x832cb8b0
	goto loc_832CB8B0;
loc_832CB8A8:
	// slw r11,r10,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r11.u8 & 0x3F));
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
loc_832CB8B0:
	// ori r9,r11,32
	ctx.r9.u64 = ctx.r11.u64 | 32;
	// rlwinm r10,r8,6,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 6) & 0xFFFFFFC0;
	// extsh r11,r9
	ctx.r11.s64 = ctx.r9.s16;
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// srawi r8,r30,31
	xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x7FFFFFFF) != 0);
	ctx.r8.s64 = ctx.r30.s32 >> 31;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// and r10,r8,r17
	ctx.r10.u64 = ctx.r8.u64 & ctx.r17.u64;
	// subfic r9,r28,0
	xer.ca = ctx.r28.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r28.s64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// extsh r10,r24
	ctx.r10.s64 = ctx.r24.s16;
	// sth r11,42(r7)
	PPC_STORE_U16(ctx.r7.u32 + 42, ctx.r11.u16);
	// subfe r9,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// lhz r11,8(r7)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r7.u32 + 8);
	// not r8,r10
	ctx.r8.u64 = ~ctx.r10.u64;
	// lhz r10,26(r7)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r7.u32 + 26);
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// xor r25,r10,r29
	ctx.r25.u64 = ctx.r10.u64 ^ ctx.r29.u64;
	// and r10,r9,r16
	ctx.r10.u64 = ctx.r9.u64 & ctx.r16.u64;
	// extsh r30,r11
	ctx.r30.s64 = ctx.r11.s16;
	// extsh r28,r8
	ctx.r28.s64 = ctx.r8.s16;
	// srawi r9,r30,8
	xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0xFF) != 0);
	ctx.r9.s64 = ctx.r30.s32 >> 8;
	// cmpwi cr6,r25,0
	cr6.compare<int32_t>(ctx.r25.s32, 0, xer);
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// bge cr6,0x832cb91c
	if (!cr6.lt) goto loc_832CB91C;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// b 0x832cb924
	goto loc_832CB924;
loc_832CB91C:
	// subf r8,r10,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r10.s64;
	// extsh r9,r8
	ctx.r9.s64 = ctx.r8.s16;
loc_832CB924:
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// lhz r25,28(r7)
	ctx.r25.u64 = PPC_LOAD_U16(ctx.r7.u32 + 28);
	// extsh r8,r11
	ctx.r8.s64 = ctx.r11.s16;
	// lhz r11,10(r7)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r7.u32 + 10);
	// extsh r30,r28
	ctx.r30.s64 = ctx.r28.s16;
	// subf r8,r9,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r9.s64;
	// extsh r9,r25
	ctx.r9.s64 = ctx.r25.s16;
	// and r8,r8,r30
	ctx.r8.u64 = ctx.r8.u64 & ctx.r30.u64;
	// xor r24,r9,r29
	ctx.r24.u64 = ctx.r9.u64 ^ ctx.r29.u64;
	// extsh r25,r11
	ctx.r25.s64 = ctx.r11.s16;
	// sth r8,8(r7)
	PPC_STORE_U16(ctx.r7.u32 + 8, ctx.r8.u16);
	// cmpwi cr6,r24,0
	cr6.compare<int32_t>(ctx.r24.s32, 0, xer);
	// srawi r9,r25,8
	xer.ca = (ctx.r25.s32 < 0) & ((ctx.r25.u32 & 0xFF) != 0);
	ctx.r9.s64 = ctx.r25.s32 >> 8;
	// bge cr6,0x832cb968
	if (!cr6.lt) goto loc_832CB968;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// b 0x832cb970
	goto loc_832CB970;
loc_832CB968:
	// subf r8,r10,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r10.s64;
	// extsh r9,r8
	ctx.r9.s64 = ctx.r8.s16;
loc_832CB970:
	// lhz r8,30(r7)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r7.u32 + 30);
	// extsh r25,r9
	ctx.r25.s64 = ctx.r9.s16;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// lhz r9,12(r7)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r7.u32 + 12);
	// extsh r8,r8
	ctx.r8.s64 = ctx.r8.s16;
	// subf r11,r25,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r25.s64;
	// extsh r25,r9
	ctx.r25.s64 = ctx.r9.s16;
	// and r24,r11,r30
	ctx.r24.u64 = ctx.r11.u64 & ctx.r30.u64;
	// xor r8,r8,r29
	ctx.r8.u64 = ctx.r8.u64 ^ ctx.r29.u64;
	// srawi r11,r25,8
	xer.ca = (ctx.r25.s32 < 0) & ((ctx.r25.u32 & 0xFF) != 0);
	ctx.r11.s64 = ctx.r25.s32 >> 8;
	// sth r24,10(r7)
	PPC_STORE_U16(ctx.r7.u32 + 10, ctx.r24.u16);
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bge cr6,0x832cb9b0
	if (!cr6.lt) goto loc_832CB9B0;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// b 0x832cb9b8
	goto loc_832CB9B8;
loc_832CB9B0:
	// subf r8,r10,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r10.s64;
	// extsh r11,r8
	ctx.r11.s64 = ctx.r8.s16;
loc_832CB9B8:
	// lhz r25,32(r7)
	ctx.r25.u64 = PPC_LOAD_U16(ctx.r7.u32 + 32);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// lhz r9,14(r7)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r7.u32 + 14);
	// extsh r25,r25
	ctx.r25.s64 = ctx.r25.s16;
	// subf r8,r11,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r11.s64;
	// extsh r11,r9
	ctx.r11.s64 = ctx.r9.s16;
	// and r8,r8,r30
	ctx.r8.u64 = ctx.r8.u64 & ctx.r30.u64;
	// xor r25,r25,r29
	ctx.r25.u64 = ctx.r25.u64 ^ ctx.r29.u64;
	// srawi r11,r11,8
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 8;
	// sth r8,12(r7)
	PPC_STORE_U16(ctx.r7.u32 + 12, ctx.r8.u16);
	// cmpwi cr6,r25,0
	cr6.compare<int32_t>(ctx.r25.s32, 0, xer);
	// bge cr6,0x832cb9f8
	if (!cr6.lt) goto loc_832CB9F8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// b 0x832cba00
	goto loc_832CBA00;
loc_832CB9F8:
	// subf r8,r10,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r10.s64;
	// extsh r11,r8
	ctx.r11.s64 = ctx.r8.s16;
loc_832CBA00:
	// lhz r25,34(r7)
	ctx.r25.u64 = PPC_LOAD_U16(ctx.r7.u32 + 34);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// lhz r9,16(r7)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r7.u32 + 16);
	// extsh r25,r25
	ctx.r25.s64 = ctx.r25.s16;
	// subf r8,r11,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r11.s64;
	// extsh r11,r9
	ctx.r11.s64 = ctx.r9.s16;
	// and r8,r8,r30
	ctx.r8.u64 = ctx.r8.u64 & ctx.r30.u64;
	// xor r25,r25,r29
	ctx.r25.u64 = ctx.r25.u64 ^ ctx.r29.u64;
	// srawi r11,r11,8
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 8;
	// sth r8,14(r7)
	PPC_STORE_U16(ctx.r7.u32 + 14, ctx.r8.u16);
	// cmpwi cr6,r25,0
	cr6.compare<int32_t>(ctx.r25.s32, 0, xer);
	// bge cr6,0x832cba40
	if (!cr6.lt) goto loc_832CBA40;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// b 0x832cba48
	goto loc_832CBA48;
loc_832CBA40:
	// subf r8,r10,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r10.s64;
	// extsh r11,r8
	ctx.r11.s64 = ctx.r8.s16;
loc_832CBA48:
	// lhz r25,36(r7)
	ctx.r25.u64 = PPC_LOAD_U16(ctx.r7.u32 + 36);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// lhz r9,18(r7)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r7.u32 + 18);
	// extsh r25,r25
	ctx.r25.s64 = ctx.r25.s16;
	// subf r8,r11,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r11.s64;
	// extsh r11,r9
	ctx.r11.s64 = ctx.r9.s16;
	// and r8,r8,r30
	ctx.r8.u64 = ctx.r8.u64 & ctx.r30.u64;
	// xor r29,r25,r29
	ctx.r29.u64 = ctx.r25.u64 ^ ctx.r29.u64;
	// srawi r11,r11,8
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 8;
	// sth r8,16(r7)
	PPC_STORE_U16(ctx.r7.u32 + 16, ctx.r8.u16);
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(ctx.r29.s32, 0, xer);
	// bge cr6,0x832cba88
	if (!cr6.lt) goto loc_832CBA88;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// b 0x832cba90
	goto loc_832CBA90;
loc_832CBA88:
	// subf r10,r10,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r10.s64;
	// extsh r11,r10
	ctx.r11.s64 = ctx.r10.s16;
loc_832CBA90:
	// extsh r10,r9
	ctx.r10.s64 = ctx.r9.s16;
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// extsh r8,r27
	ctx.r8.s64 = ctx.r27.s16;
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// and r9,r10,r30
	ctx.r9.u64 = ctx.r10.u64 & ctx.r30.u64;
	// sth r9,18(r7)
	PPC_STORE_U16(ctx.r7.u32 + 18, ctx.r9.u16);
	// lhz r9,26(r7)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r7.u32 + 26);
	// lhz r10,38(r7)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r7.u32 + 38);
	// lhz r29,28(r7)
	ctx.r29.u64 = PPC_LOAD_U16(ctx.r7.u32 + 28);
	// lhz r25,30(r7)
	ctx.r25.u64 = PPC_LOAD_U16(ctx.r7.u32 + 30);
	// lhz r24,32(r7)
	ctx.r24.u64 = PPC_LOAD_U16(ctx.r7.u32 + 32);
	// lhz r23,34(r7)
	ctx.r23.u64 = PPC_LOAD_U16(ctx.r7.u32 + 34);
	// lhz r22,40(r7)
	ctx.r22.u64 = PPC_LOAD_U16(ctx.r7.u32 + 40);
	// xor r11,r22,r27
	ctx.r11.u64 = ctx.r22.u64 ^ ctx.r27.u64;
	// sth r9,28(r7)
	PPC_STORE_U16(ctx.r7.u32 + 28, ctx.r9.u16);
	// xor r9,r10,r8
	ctx.r9.u64 = ctx.r10.u64 ^ ctx.r8.u64;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// sth r10,40(r7)
	PPC_STORE_U16(ctx.r7.u32 + 40, ctx.r10.u16);
	// sth r29,30(r7)
	PPC_STORE_U16(ctx.r7.u32 + 30, ctx.r29.u16);
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// sth r25,32(r7)
	PPC_STORE_U16(ctx.r7.u32 + 32, ctx.r25.u16);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// sth r24,34(r7)
	PPC_STORE_U16(ctx.r7.u32 + 34, ctx.r24.u16);
	// li r10,-4096
	ctx.r10.s64 = -4096;
	// sth r23,36(r7)
	PPC_STORE_U16(ctx.r7.u32 + 36, ctx.r23.u16);
	// sth r31,26(r7)
	PPC_STORE_U16(ctx.r7.u32 + 26, ctx.r31.u16);
	// sth r27,38(r7)
	PPC_STORE_U16(ctx.r7.u32 + 38, ctx.r27.u16);
	// blt cr6,0x832cbb04
	if (cr6.lt) goto loc_832CBB04;
	// li r10,4096
	ctx.r10.s64 = 4096;
loc_832CBB04:
	// lhz r29,0(r7)
	ctx.r29.u64 = PPC_LOAD_U16(ctx.r7.u32 + 0);
	// extsh r11,r29
	ctx.r11.s64 = ctx.r29.s16;
	// cmpwi cr6,r11,-8191
	cr6.compare<int32_t>(ctx.r11.s32, -8191, xer);
	// li r11,-8191
	ctx.r11.s64 = -8191;
	// blt cr6,0x832cbb1c
	if (cr6.lt) goto loc_832CBB1C;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_832CBB1C:
	// extsh r31,r11
	ctx.r31.s64 = ctx.r11.s16;
	// cmpwi cr6,r31,8191
	cr6.compare<int32_t>(ctx.r31.s32, 8191, xer);
	// blt cr6,0x832cbb2c
	if (cr6.lt) goto loc_832CBB2C;
	// li r11,8191
	ctx.r11.s64 = 8191;
loc_832CBB2C:
	// extsh r31,r9
	ctx.r31.s64 = ctx.r9.s16;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, xer);
	// bge cr6,0x832cbb44
	if (!cr6.lt) goto loc_832CBB44;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// b 0x832cbb4c
	goto loc_832CBB4C;
loc_832CBB44:
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// extsh r11,r9
	ctx.r11.s64 = ctx.r9.s16;
loc_832CBB4C:
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bne cr6,0x832cbb60
	if (!cr6.eq) goto loc_832CBB60;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// b 0x832cbb6c
	goto loc_832CBB6C;
loc_832CBB60:
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// li r9,192
	ctx.r9.s64 = 192;
	// srawi r11,r11,5
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1F) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 5;
loc_832CBB6C:
	// lhz r10,2(r7)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r7.u32 + 2);
	// extsh r8,r10
	ctx.r8.s64 = ctx.r10.s16;
	// srawi r8,r8,7
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7F) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 7;
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpwi cr6,r10,-12288
	cr6.compare<int32_t>(ctx.r10.s32, -12288, xer);
	// bge cr6,0x832cbb90
	if (!cr6.lt) goto loc_832CBB90;
	// li r11,-12288
	ctx.r11.s64 = -12288;
loc_832CBB90:
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpwi cr6,r10,12288
	cr6.compare<int32_t>(ctx.r10.s32, 12288, xer);
	// blt cr6,0x832cbba0
	if (cr6.lt) goto loc_832CBBA0;
	// li r11,12288
	ctx.r11.s64 = 12288;
loc_832CBBA0:
	// extsh r8,r11
	ctx.r8.s64 = ctx.r11.s16;
	// extsh r11,r29
	ctx.r11.s64 = ctx.r29.s16;
	// and r10,r30,r8
	ctx.r10.u64 = ctx.r30.u64 & ctx.r8.u64;
	// srawi r11,r11,8
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 8;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, xer);
	// sth r10,2(r7)
	PPC_STORE_U16(ctx.r7.u32 + 2, ctx.r10.u16);
	// bge cr6,0x832cbbc8
	if (!cr6.lt) goto loc_832CBBC8;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// b 0x832cbbd0
	goto loc_832CBBD0;
loc_832CBBC8:
	// subf r9,r9,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r9.s64;
	// extsh r11,r9
	ctx.r11.s64 = ctx.r9.s16;
loc_832CBBD0:
	// subfic r10,r8,15360
	xer.ca = ctx.r8.u32 <= 15360;
	ctx.r10.s64 = 15360 - ctx.r8.s64;
	// subf r9,r11,r29
	ctx.r9.s64 = ctx.r29.s64 - ctx.r11.s64;
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// extsh r11,r9
	ctx.r11.s64 = ctx.r9.s16;
	// neg r29,r10
	ctx.r29.s64 = -ctx.r10.s64;
	// mr r31,r10
	ctx.r31.u64 = ctx.r10.u64;
	// extsh r9,r29
	ctx.r9.s64 = ctx.r29.s16;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// mr r27,r9
	ctx.r27.u64 = ctx.r9.u64;
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, xer);
	// bge cr6,0x832cbc00
	if (!cr6.lt) goto loc_832CBC00;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_832CBC00:
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// cmpw cr6,r9,r31
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r31.s32, xer);
	// bge cr6,0x832cbc10
	if (!cr6.lt) goto loc_832CBC10;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_832CBC10:
	// li r11,-11776
	ctx.r11.s64 = -11776;
	// lhz r9,22(r7)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r7.u32 + 22);
	// mr r31,r10
	ctx.r31.u64 = ctx.r10.u64;
	// lhz r10,20(r7)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r7.u32 + 20);
	// subfc r29,r11,r8
	xer.ca = ctx.r8.u32 >= ctx.r11.u32;
	ctx.r29.s64 = ctx.r8.s64 - ctx.r11.s64;
	// eqv r11,r11,r8
	ctx.r11.u64 = ~(ctx.r11.u64 ^ ctx.r8.u64);
	// and r8,r31,r30
	ctx.r8.u64 = ctx.r31.u64 & ctx.r30.u64;
	// rlwinm r11,r11,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// sth r8,0(r7)
	PPC_STORE_U16(ctx.r7.u32 + 0, ctx.r8.u16);
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// clrlwi r8,r11,31
	ctx.r8.u64 = ctx.r11.u32 & 0x1;
	// and r29,r8,r30
	ctx.r29.u64 = ctx.r8.u64 & ctx.r30.u64;
	// sth r29,46(r7)
	PPC_STORE_U16(ctx.r7.u32 + 46, ctx.r29.u16);
	// lhzx r29,r21,r19
	ctx.r29.u64 = PPC_LOAD_U16(ctx.r21.u32 + ctx.r19.u32);
	// extsh r29,r29
	ctx.r29.s64 = ctx.r29.s16;
	// subf r31,r9,r29
	ctx.r31.s64 = ctx.r29.s64 - ctx.r9.s64;
	// rlwinm r29,r29,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// extsh r31,r31
	ctx.r31.s64 = ctx.r31.s16;
	// subf r29,r10,r29
	ctx.r29.s64 = ctx.r29.s64 - ctx.r10.s64;
	// srawi r11,r31,5
	xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0x1F) != 0);
	ctx.r11.s64 = ctx.r31.s32 >> 5;
	// extsh r31,r29
	ctx.r31.s64 = ctx.r29.s16;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// srawi r9,r31,7
	xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0x7F) != 0);
	ctx.r9.s64 = ctx.r31.s32 >> 7;
	// extsh r31,r11
	ctx.r31.s64 = ctx.r11.s16;
	// sth r11,22(r7)
	PPC_STORE_U16(ctx.r7.u32 + 22, ctx.r11.u16);
	// add r11,r9,r10
	ctx.r11.u64 = ctx.r9.u64 + ctx.r10.u64;
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// sth r11,20(r7)
	PPC_STORE_U16(ctx.r7.u32 + 20, ctx.r11.u16);
	// rlwinm r11,r11,29,19,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFF;
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// extsh r11,r10
	ctx.r11.s64 = ctx.r10.s16;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// srawi r11,r11,15
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 15;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// xor r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, xer);
	// blt cr6,0x832cbcbc
	if (cr6.lt) goto loc_832CBCBC;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// b 0x832cbcd8
	goto loc_832CBCD8;
loc_832CBCBC:
	// cmpwi cr6,r20,1536
	cr6.compare<int32_t>(ctx.r20.s32, 1536, xer);
	// bge cr6,0x832cbccc
	if (!cr6.lt) goto loc_832CBCCC;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// b 0x832cbcd8
	goto loc_832CBCD8;
loc_832CBCCC:
	// subfic r11,r8,0
	xer.ca = ctx.r8.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r8.s64;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r10,r9,r4
	ctx.r10.u64 = ctx.r9.u64 & ctx.r4.u64;
loc_832CBCD8:
	// lhz r11,4(r7)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r7.u32 + 4);
	// not r9,r30
	ctx.r9.u64 = ~ctx.r30.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r11.s64;
	// rlwinm r9,r9,0,23,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x100;
	// extsh r10,r8
	ctx.r10.s64 = ctx.r8.s16;
	// srawi r10,r10,4
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 4;
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// and r11,r8,r28
	ctx.r11.u64 = ctx.r8.u64 & ctx.r28.u64;
	// or r10,r11,r9
	ctx.r10.u64 = ctx.r11.u64 | ctx.r9.u64;
	// sth r10,4(r7)
	PPC_STORE_U16(ctx.r7.u32 + 4, ctx.r10.u16);
	// beq cr6,0x832cbd20
	if (cr6.eq) goto loc_832CBD20;
	// lwz r10,36(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 36);
	// extsh r11,r26
	ctx.r11.s64 = ctx.r26.s16;
	// rlwinm r9,r14,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r14.u32 | (ctx.r14.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// sthx r8,r9,r10
	PPC_STORE_U16(ctx.r9.u32 + ctx.r10.u32, ctx.r8.u16);
	// b 0x832cbd54
	goto loc_832CBD54;
loc_832CBD20:
	// clrlwi r11,r14,31
	ctx.r11.u64 = ctx.r14.u32 & 0x1;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x832cbd38
	if (!cr6.eq) goto loc_832CBD38;
	// clrlwi r11,r26,28
	ctx.r11.u64 = ctx.r26.u32 & 0xF;
	// stb r11,-160(r1)
	PPC_STORE_U8(ctx.r1.u32 + -160, ctx.r11.u8);
	// b 0x832cbd54
	goto loc_832CBD54;
loc_832CBD38:
	// extsh r10,r26
	ctx.r10.s64 = ctx.r26.s16;
	// lbz r11,-160(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + -160);
	// lwz r9,36(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 36);
	// rlwinm r8,r14,31,1,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r14.u32 | (ctx.r14.u64 << 32), 31) & 0x7FFFFFFF;
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// stbx r11,r8,r9
	PPC_STORE_U8(ctx.r8.u32 + ctx.r9.u32, ctx.r11.u8);
loc_832CBD54:
	// lwz r11,44(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 44);
	// addi r14,r14,1
	ctx.r14.s64 = ctx.r14.s64 + 1;
	// cmpw cr6,r14,r11
	cr6.compare<int32_t>(ctx.r14.s32, ctx.r11.s32, xer);
	// blt cr6,0x832caa24
	if (cr6.lt) goto loc_832CAA24;
loc_832CBD64:
	// b 0x831cdb00
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832CBD68"))) PPC_WEAK_FUNC(sub_832CBD68);
PPC_FUNC_IMPL(__imp__sub_832CBD68) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x832CBD70;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r8,136(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 136);
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r27,12(r3)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r26,r30
	ctx.r26.u64 = ctx.r30.u64;
	// mr r25,r30
	ctx.r25.u64 = ctx.r30.u64;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x832cbdcc
	if (cr6.eq) goto loc_832CBDCC;
	// rotlwi r7,r8,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// addi r10,r3,80
	ctx.r10.s64 = ctx.r3.s64 + 80;
loc_832CBDA0:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r9,24(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 24);
	// lwz r9,24(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 24);
	// cmplw cr6,r26,r9
	cr6.compare<uint32_t>(ctx.r26.u32, ctx.r9.u32, xer);
	// ble cr6,0x832cbdb8
	if (!cr6.gt) goto loc_832CBDB8;
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
loc_832CBDB8:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// mr r26,r9
	ctx.r26.u64 = ctx.r9.u64;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r11,r7
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, xer);
	// blt cr6,0x832cbda0
	if (cr6.lt) goto loc_832CBDA0;
loc_832CBDCC:
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x832cbe14
	if (cr6.eq) goto loc_832CBE14;
	// lwz r8,136(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// addi r10,r31,80
	ctx.r10.s64 = ctx.r31.s64 + 80;
loc_832CBDE0:
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// divwu r7,r26,r11
	ctx.r7.u32 = PPCDivide(ctx.r26.u32, ctx.r11.u32);
	// twllei r11,0
	// mullw r7,r7,r11
	ctx.r7.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r11.s32);
	// subf. r7,r7,r26
	ctx.r7.s64 = ctx.r26.s64 - ctx.r7.s64;
	cr0.compare<int32_t>(ctx.r7.s32, 0, xer);
	// beq 0x832cbe04
	if (cr0.eq) goto loc_832CBE04;
	// mullw r26,r11,r26
	ctx.r26.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r26.s32);
loc_832CBE04:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r9,r8
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, xer);
	// blt cr6,0x832cbde0
	if (cr6.lt) goto loc_832CBDE0;
loc_832CBE14:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mullw r28,r26,r27
	ctx.r28.s64 = int64_t(ctx.r26.s32) * int64_t(ctx.r27.s32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x832cbee8
	if (!cr6.eq) goto loc_832CBEE8;
	// lis r4,24714
	ctx.r4.s64 = 1619656704;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// ori r4,r4,8194
	ctx.r4.u64 = ctx.r4.u64 | 8194;
	// bl 0x832d5290
	ctx.lr = 0x832CBE34;
	sub_832D5290(ctx, base);
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// lis r4,24970
	ctx.r4.s64 = 1636433920;
	// mulli r3,r27,28
	ctx.r3.s64 = ctx.r27.s64 * 28;
	// ori r4,r4,9
	ctx.r4.u64 = ctx.r4.u64 | 9;
	// bl 0x832d5290
	ctx.lr = 0x832CBE48;
	sub_832D5290(ctx, base);
	// stw r3,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r3.u32);
	// lis r4,24970
	ctx.r4.s64 = 1636433920;
	// rlwinm r3,r27,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 3) & 0xFFFFFFF8;
	// ori r4,r4,3
	ctx.r4.u64 = ctx.r4.u64 | 3;
	// bl 0x832d5290
	ctx.lr = 0x832CBE5C;
	sub_832D5290(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r3,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r3.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x832cbe80
	if (cr6.eq) goto loc_832CBE80;
	// lwz r10,132(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x832cbe80
	if (cr6.eq) goto loc_832CBE80;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x832cbee8
	if (!cr6.eq) goto loc_832CBEE8;
loc_832CBE80:
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// lis r25,-32761
	ctx.r25.s64 = -2147024896;
	// ori r25,r25,14
	ctx.r25.u64 = ctx.r25.u64 | 14;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x832cbea4
	if (cr6.eq) goto loc_832CBEA4;
	// lis r4,24970
	ctx.r4.s64 = 1636433920;
	// ori r4,r4,3
	ctx.r4.u64 = ctx.r4.u64 | 3;
	// bl 0x832d53c8
	ctx.lr = 0x832CBEA0;
	sub_832D53C8(ctx, base);
	// stw r30,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r30.u32);
loc_832CBEA4:
	// lwz r3,132(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x832cbec0
	if (cr6.eq) goto loc_832CBEC0;
	// lis r4,24970
	ctx.r4.s64 = 1636433920;
	// ori r4,r4,9
	ctx.r4.u64 = ctx.r4.u64 | 9;
	// bl 0x832d53c8
	ctx.lr = 0x832CBEBC;
	sub_832D53C8(ctx, base);
	// stw r30,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r30.u32);
loc_832CBEC0:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x832cbedc
	if (cr6.eq) goto loc_832CBEDC;
	// lis r4,24714
	ctx.r4.s64 = 1619656704;
	// ori r4,r4,8194
	ctx.r4.u64 = ctx.r4.u64 | 8194;
	// bl 0x832d53c8
	ctx.lr = 0x832CBED8;
	sub_832D53C8(ctx, base);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
loc_832CBEDC:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_832CBEE8:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x832d27b0
	ctx.lr = 0x832CBEF8;
	sub_832D27B0(ctx, base);
	// mulli r30,r27,28
	ctx.r30.s64 = ctx.r27.s64 * 28;
	// lwz r3,132(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x832d27b0
	ctx.lr = 0x832CBF0C;
	sub_832D27B0(ctx, base);
	// rlwinm r29,r27,3,0,28
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 3) & 0xFFFFFFF8;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x832d27b0
	ctx.lr = 0x832CBF20;
	sub_832D27B0(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r9,132(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, xer);
	// lwz r10,96(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// add r8,r11,r28
	ctx.r8.u64 = ctx.r11.u64 + ctx.r28.u64;
	// add r11,r9,r30
	ctx.r11.u64 = ctx.r9.u64 + ctx.r30.u64;
	// add r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 + ctx.r29.u64;
	// beq cr6,0x832cbedc
	if (cr6.eq) goto loc_832CBEDC;
	// mtctr r27
	ctr.u64 = ctx.r27.u64;
loc_832CBF44:
	// addi r11,r11,-28
	ctx.r11.s64 = ctx.r11.s64 + -28;
	// subf r8,r26,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r26.s64;
	// stw r8,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r8.u32);
	// stw r26,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r26.u32);
	// stwu r11,-8(r10)
	ea = -8 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x832cbf44
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_832CBF44;
	// b 0x832cbedc
	goto loc_832CBEDC;
}

__attribute__((alias("__imp__sub_832CBF60"))) PPC_WEAK_FUNC(sub_832CBF60);
PPC_FUNC_IMPL(__imp__sub_832CBF60) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x832CBF68;
	__savegprlr_27(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// lwz r29,1212(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1212);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// bne cr6,0x832cbf8c
	if (!cr6.eq) goto loc_832CBF8C;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x832cc000
	goto loc_832CC000;
loc_832CBF8C:
	// lwz r31,4(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x832c3378
	ctx.lr = 0x832CBF9C;
	sub_832C3378(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x832cbfb0
	if (cr0.lt) goto loc_832CBFB0;
	// lfs f0,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// addi r28,r1,80
	ctx.r28.s64 = ctx.r1.s64 + 80;
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
loc_832CBFB0:
	// lwz r11,212(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 212);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x832cbfcc
	if (cr0.eq) goto loc_832CBFCC;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,12(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// bl 0x832d27b0
	ctx.lr = 0x832CBFCC;
	sub_832D27B0(ctx, base);
loc_832CBFCC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r27,12(r30)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lwz r31,0(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r30,8(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// bl 0x832c5f88
	ctx.lr = 0x832CBFE0;
	sub_832C5F88(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mtctr r29
	ctr.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// bctrl 
	ctx.lr = 0x832CBFFC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r3,1
	ctx.r3.s64 = 1;
loc_832CC000:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832CC008"))) PPC_WEAK_FUNC(sub_832CC008);
PPC_FUNC_IMPL(__imp__sub_832CC008) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad0
	ctx.lr = 0x832CC010;
	__savegprlr_22(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r22,0
	ctx.r22.s64 = 0;
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r27,8(r4)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r23,144(r3)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r3.u32 + 144);
	// addi r29,r3,144
	ctx.r29.s64 = ctx.r3.s64 + 144;
	// lwz r25,148(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 148);
	// mr r28,r22
	ctx.r28.u64 = ctx.r22.u64;
	// lwz r10,40(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	// rlwinm r26,r11,31,1,31
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x832cc094
	if (cr6.eq) goto loc_832CC094;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r10,212(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 212);
	// clrlwi. r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x832cc06c
	if (cr0.eq) goto loc_832CC06C;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x832d27b0
	ctx.lr = 0x832CC06C;
	sub_832D27B0(ctx, base);
loc_832CC06C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r5,12(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// lwz r3,0(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832CC090;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
loc_832CC094:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r24,16000
	ctx.r24.s64 = 16000;
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x832cc17c
	if (!cr6.eq) goto loc_832CC17C;
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// lis r10,16384
	ctx.r10.s64 = 1073741824;
	// rlwinm r9,r11,0,0,3
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xF0000000;
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// bne cr6,0x832cc0cc
	if (!cr6.eq) goto loc_832CC0CC;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,9
	cr6.compare<uint32_t>(ctx.r11.u32, 9, xer);
	// blt cr6,0x832cc0cc
	if (cr6.lt) goto loc_832CC0CC;
	// addi r25,r25,200
	ctx.r25.s64 = ctx.r25.s64 + 200;
loc_832CC0CC:
	// cmpwi cr6,r5,1
	cr6.compare<int32_t>(ctx.r5.s32, 1, xer);
	// beq cr6,0x832cc128
	if (cr6.eq) goto loc_832CC128;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,212(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 212);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne 0x832cc128
	if (!cr0.eq) goto loc_832CC128;
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(ctx.r26.u32, 0, xer);
	// beq cr6,0x832cc10c
	if (cr6.eq) goto loc_832CC10C;
	// addi r11,r27,-2
	ctx.r11.s64 = ctx.r27.s64 + -2;
	// mtctr r26
	ctr.u64 = ctx.r26.u64;
loc_832CC0F4:
	// lhau r10,2(r11)
	ea = 2 + ctx.r11.u32;
	ctx.r10.s64 = int16_t(PPC_LOAD_U16(ea));
	ctx.r11.u32 = ea;
	// srawi r9,r10,31
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 31;
	// xor r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 ^ ctx.r9.u64;
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// add r28,r10,r28
	ctx.r28.u64 = ctx.r10.u64 + ctx.r28.u64;
	// bdnz 0x832cc0f4
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_832CC0F4;
loc_832CC10C:
	// divwu r11,r28,r26
	ctx.r11.u32 = PPCDivide(ctx.r28.u32, ctx.r26.u32);
	// twllei r26,0
	// subfc r11,r11,r25
	xer.ca = ctx.r25.u32 >= ctx.r11.u32;
	ctx.r11.s64 = ctx.r25.s64 - ctx.r11.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// b 0x832cc12c
	goto loc_832CC12C;
loc_832CC128:
	// stw r22,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r22.u32);
loc_832CC12C:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x832cc14c
	if (!cr6.eq) goto loc_832CC14C;
	// li r11,500
	ctx.r11.s64 = 500;
	// li r10,300
	ctx.r10.s64 = 300;
	// stw r11,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r11.u32);
	// stw r10,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r10.u32);
	// b 0x832cc17c
	goto loc_832CC17C;
loc_832CC14C:
	// lwz r11,152(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble cr6,0x832cc174
	if (!cr6.gt) goto loc_832CC174;
	// mulli r10,r26,1000
	ctx.r10.s64 = ctx.r26.s64 * 1000;
	// divwu r10,r10,r24
	ctx.r10.u32 = PPCDivide(ctx.r10.u32, ctx.r24.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// stw r9,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r9.u32);
	// stw r11,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r11.u32);
	// b 0x832cc17c
	goto loc_832CC17C;
loc_832CC174:
	// li r11,600
	ctx.r11.s64 = 600;
	// stw r11,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r11.u32);
loc_832CC17C:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x832cc190
	if (!cr6.eq) goto loc_832CC190;
	// cmpwi cr6,r23,0
	cr6.compare<int32_t>(ctx.r23.s32, 0, xer);
	// beq cr6,0x832cc19c
	if (cr6.eq) goto loc_832CC19C;
loc_832CC190:
	// lwz r11,156(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	// cmplwi cr6,r11,30000
	cr6.compare<uint32_t>(ctx.r11.u32, 30000, xer);
	// ble cr6,0x832cc1c0
	if (!cr6.gt) goto loc_832CC1C0;
loc_832CC19C:
	// lbz r11,140(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 140);
	// lis r10,-32220
	ctx.r10.s64 = -2111569920;
	// stw r22,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r22.u32);
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r4,r10,-18488
	ctx.r4.s64 = ctx.r10.s64 + -18488;
	// stb r11,140(r31)
	PPC_STORE_U8(ctx.r31.u32 + 140, ctx.r11.u8);
	// li r5,54
	ctx.r5.s64 = 54;
	// bl 0x831ce980
	ctx.lr = 0x832CC1C0;
	sub_831CE980(ctx, base);
loc_832CC1C0:
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x832cc1e0
	if (!cr6.eq) goto loc_832CC1E0;
	// mulli r11,r26,1000
	ctx.r11.s64 = ctx.r26.s64 * 1000;
	// lwz r10,156(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	// divwu r11,r11,r24
	ctx.r11.u32 = PPCDivide(ctx.r11.u32, ctx.r24.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r11.u32);
loc_832CC1E0:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832CC1E8"))) PPC_WEAK_FUNC(sub_832CC1E8);
PPC_FUNC_IMPL(__imp__sub_832CC1E8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x832CC1F0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,0(r4)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x832cc220
	if (!cr6.eq) goto loc_832CC220;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// rlwinm r11,r11,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
loc_832CC220:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r11,152(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 152);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x832cc25c
	if (cr6.eq) goto loc_832CC25C;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r10,212(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 212);
	// rlwinm. r10,r10,0,12,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xF0000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x832cc25c
	if (cr0.eq) goto loc_832CC25C;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwz r3,12(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x83d7576c
	ctx.lr = 0x832CC25C;
	__imp__XamVoiceSubmitPacket(ctx, base);
loc_832CC25C:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x832cc274
	if (cr6.eq) goto loc_832CC274;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge cr6,0x832cc288
	if (!cr6.lt) goto loc_832CC288;
loc_832CC274:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lis r10,-16384
	ctx.r10.s64 = -1073741824;
	// ori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 | 1;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_832CC288:
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r30,116
	ctx.r11.s64 = ctx.r30.s64 + 116;
	// stw r10,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r10.u32);
	// lwz r10,120(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 120);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x832cc2a8
	if (cr6.eq) goto loc_832CC2A8;
	// stw r29,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r29.u32);
	// b 0x832cc2ac
	goto loc_832CC2AC;
loc_832CC2A8:
	// stw r29,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r29.u32);
loc_832CC2AC:
	// stw r29,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r29.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832CC2B8"))) PPC_WEAK_FUNC(sub_832CC2B8);
PPC_FUNC_IMPL(__imp__sub_832CC2B8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x832CC2C0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r4,20
	ctx.r11.s64 = ctx.r4.s64 + 20;
	// lwz r28,0(r5)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwzx r3,r11,r3
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// bl 0x832c77e0
	ctx.lr = 0x832CC2EC;
	sub_832C77E0(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge 0x832cc304
	if (!cr0.lt) goto loc_832CC304;
	// lwz r11,12(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// stw r10,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r10.u32);
	// stw r11,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r11.u32);
loc_832CC304:
	// rlwinm r11,r29,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r11,r11,100
	ctx.r11.s64 = ctx.r11.s64 + 100;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x832cc328
	if (cr6.eq) goto loc_832CC328;
	// stw r31,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r31.u32);
	// b 0x832cc32c
	goto loc_832CC32C;
loc_832CC328:
	// stw r31,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
loc_832CC32C:
	// stw r31,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r31.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832CC338"))) PPC_WEAK_FUNC(sub_832CC338);
PPC_FUNC_IMPL(__imp__sub_832CC338) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x832CC340;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,136(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 136);
	// li r27,0
	ctx.r27.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r28,r27
	ctx.r28.u64 = ctx.r27.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// ble cr6,0x832cc3bc
	if (!cr6.gt) goto loc_832CC3BC;
	// addi r31,r3,100
	ctx.r31.s64 = ctx.r3.s64 + 100;
	// addi r29,r3,80
	ctx.r29.s64 = ctx.r3.s64 + 80;
loc_832CC364:
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x832c7930
	ctx.lr = 0x832CC378;
	sub_832C7930(ctx, base);
loc_832CC378:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x832cc3a4
	if (cr6.eq) goto loc_832CC3A4;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x832cc394
	if (!cr6.eq) goto loc_832CC394;
	// stw r27,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r27.u32);
loc_832CC394:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stw r27,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r27.u32);
	// b 0x832cc378
	goto loc_832CC378;
loc_832CC3A4:
	// lwz r11,136(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 136);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// cmplw cr6,r28,r11
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, xer);
	// blt cr6,0x832cc364
	if (cr6.lt) goto loc_832CC364;
loc_832CC3BC:
	// addi r11,r30,116
	ctx.r11.s64 = ctx.r30.s64 + 116;
loc_832CC3C0:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x832cc3ec
	if (cr6.eq) goto loc_832CC3EC;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bne cr6,0x832cc3dc
	if (!cr6.eq) goto loc_832CC3DC;
	// stw r27,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r27.u32);
loc_832CC3DC:
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// stw r27,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r27.u32);
	// b 0x832cc3c0
	goto loc_832CC3C0;
loc_832CC3EC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832CC3F4"))) PPC_WEAK_FUNC(sub_832CC3F4);
PPC_FUNC_IMPL(__imp__sub_832CC3F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832CC3F8"))) PPC_WEAK_FUNC(sub_832CC3F8);
PPC_FUNC_IMPL(__imp__sub_832CC3F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdab4
	ctx.lr = 0x832CC400;
	__savegprlr_15(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r18,0
	ctx.r18.s64 = 0;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r16,r18
	ctx.r16.u64 = ctx.r18.u64;
	// mr r19,r18
	ctx.r19.u64 = ctx.r18.u64;
	// mr r21,r18
	ctx.r21.u64 = ctx.r18.u64;
	// bl 0x832d30f8
	ctx.lr = 0x832CC41C;
	sub_832D30F8(ctx, base);
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// lwz r10,20(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// li r17,28
	ctx.r17.s64 = 28;
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, xer);
	// lwz r24,116(r29)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r29.u32 + 116);
	// subf r11,r11,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r11.s64;
	// addi r23,r29,116
	ctx.r23.s64 = ctx.r29.s64 + 116;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(ctx.r24.u32, 0, xer);
	// stw r11,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r11.u32);
	// beq cr6,0x832cc6e4
	if (cr6.eq) goto loc_832CC6E4;
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// addi r20,r11,22272
	ctx.r20.s64 = ctx.r11.s64 + 22272;
loc_832CC454:
	// lwz r31,0(r24)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,259
	cr6.compare<int32_t>(ctx.r11.s32, 259, xer);
	// beq cr6,0x832cc6e4
	if (cr6.eq) goto loc_832CC6E4;
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x832cc6e4
	if (!cr6.eq) goto loc_832CC6E4;
	// lwz r10,12(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// cmplw cr6,r19,r10
	cr6.compare<uint32_t>(ctx.r19.u32, ctx.r10.u32, xer);
	// bge cr6,0x832cc6e4
	if (!cr6.lt) goto loc_832CC6E4;
	// lwz r10,20(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// cmpwi cr6,r10,20
	cr6.compare<int32_t>(ctx.r10.s32, 20, xer);
	// blt cr6,0x832cc6e4
	if (cr6.lt) goto loc_832CC6E4;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// beq cr6,0x832cc4d4
	if (cr6.eq) goto loc_832CC4D4;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// beq cr6,0x832cc4a4
	if (cr6.eq) goto loc_832CC4A4;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bne cr6,0x832cc4b4
	if (!cr6.eq) goto loc_832CC4B4;
loc_832CC4A4:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stw r18,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r18.u32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
loc_832CC4B4:
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r5,12(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x832d27b0
	ctx.lr = 0x832CC4C4;
	sub_832D27B0(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r21,1
	ctx.r21.s64 = 1;
	// stw r18,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r18.u32);
	// b 0x832cc5b0
	goto loc_832CC5B0;
loc_832CC4D4:
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x832cc560
	if (!cr6.eq) goto loc_832CC560;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r27,r29,24
	ctx.r27.s64 = ctx.r29.s64 + 24;
	// lwz r28,8(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// srawi r11,r11,2
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// addze r30,r11
	temp.s64 = ctx.r11.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r30.s64 = temp.s64;
	// mulli r11,r30,3
	ctx.r11.s64 = ctx.r30.s64 * 3;
	// add r26,r11,r28
	ctx.r26.u64 = ctx.r11.u64 + ctx.r28.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x831ce980
	ctx.lr = 0x832CC50C;
	sub_831CE980(ctx, base);
	// mulli r11,r30,7
	ctx.r11.s64 = ctx.r30.s64 * 7;
	// add r25,r11,r28
	ctx.r25.u64 = ctx.r11.u64 + ctx.r28.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// add r4,r30,r28
	ctx.r4.u64 = ctx.r30.u64 + ctx.r28.u64;
	// bl 0x831ce980
	ctx.lr = 0x832CC524;
	sub_831CE980(ctx, base);
	// rlwinm r15,r30,1,0,30
	ctx.r15.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r6,r15
	ctx.r6.u64 = ctx.r15.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x832ca9c8
	ctx.lr = 0x832CC540;
	sub_832CA9C8(ctx, base);
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r6,r15
	ctx.r6.u64 = ctx.r15.u64;
	// add r5,r11,r28
	ctx.r5.u64 = ctx.r11.u64 + ctx.r28.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x832ca9c8
	ctx.lr = 0x832CC55C;
	sub_832CA9C8(ctx, base);
	// b 0x832cc5a0
	goto loc_832CC5A0;
loc_832CC560:
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bne cr6,0x832cc5b4
	if (!cr6.eq) goto loc_832CC5B4;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x832cc5a0
	if (cr6.eq) goto loc_832CC5A0;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
loc_832CC588:
	// lbzu r11,-1(r9)
	ea = -1 + ctx.r9.u32;
	ctx.r11.u64 = PPC_LOAD_U8(ea);
	ctx.r9.u32 = ea;
	// rotlwi r11,r11,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// lhzx r11,r11,r20
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r20.u32);
	// sthu r11,-2(r10)
	ea = -2 + ctx.r10.u32;
	PPC_STORE_U16(ea, ctx.r11.u16);
	ctx.r10.u32 = ea;
	// sthu r11,-2(r10)
	ea = -2 + ctx.r10.u32;
	PPC_STORE_U16(ea, ctx.r11.u16);
	ctx.r10.u32 = ea;
	// bdnz 0x832cc588
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_832CC588;
loc_832CC5A0:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stw r18,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r18.u32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
loc_832CC5B0:
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_832CC5B4:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x832cbf60
	ctx.lr = 0x832CC5C0;
	sub_832CBF60(ctx, base);
	// addic r11,r3,-1
	xer.ca = ctx.r3.u32 > 0;
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// and r21,r11,r21
	ctx.r21.u64 = ctx.r11.u64 & ctx.r21.u64;
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// bl 0x832cc008
	ctx.lr = 0x832CC5DC;
	sub_832CC008(ctx, base);
	// lwz r11,144(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 144);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x832cc67c
	if (!cr6.eq) goto loc_832CC67C;
	// lwz r11,136(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 136);
	// mr r28,r18
	ctx.r28.u64 = ctx.r18.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// ble cr6,0x832cc67c
	if (!cr6.gt) goto loc_832CC67C;
	// addi r27,r29,88
	ctx.r27.s64 = ctx.r29.s64 + 88;
loc_832CC5FC:
	// lwz r11,132(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 132);
	// lwz r10,12(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// subf r11,r11,r31
	ctx.r11.s64 = ctx.r31.s64 - ctx.r11.s64;
	// divw r11,r11,r17
	ctx.r11.s32 = PPCDivide(ctx.r11.s32, ctx.r17.s32);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x832cc61c
	if (cr6.lt) goto loc_832CC61C;
	// mr r30,r18
	ctx.r30.u64 = ctx.r18.u64;
	// b 0x832cc628
	goto loc_832CC628;
loc_832CC61C:
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r30,r11,r10
	ctx.r30.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_832CC628:
	// lwz r26,0(r30)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r5,24
	ctx.r5.s64 = 24;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x832d27b0
	ctx.lr = 0x832CC63C;
	sub_832D27B0(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,8(r26)
	PPC_STORE_U32(ctx.r26.u32 + 8, ctx.r11.u32);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stw r11,12(r26)
	PPC_STORE_U32(ctx.r26.u32 + 12, ctx.r11.u32);
	// bl 0x832cc2b8
	ctx.lr = 0x832CC65C;
	sub_832CC2B8(ctx, base);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// lwz r11,136(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 136);
	// cmplw cr6,r28,r11
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, xer);
	// blt cr6,0x832cc5fc
	if (cr6.lt) goto loc_832CC5FC;
loc_832CC67C:
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x832cc6a4
	if (cr6.eq) goto loc_832CC6A4;
	// lwz r10,4(r23)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r23.u32 + 4);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x832cc698
	if (!cr6.eq) goto loc_832CC698;
	// stw r18,4(r23)
	PPC_STORE_U32(ctx.r23.u32 + 4, ctx.r18.u32);
loc_832CC698:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,0(r23)
	PPC_STORE_U32(ctx.r23.u32 + 0, ctx.r10.u32);
	// stw r18,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r18.u32);
loc_832CC6A4:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x832cc6bc
	if (!cr6.eq) goto loc_832CC6BC;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x832cc1e8
	ctx.lr = 0x832CC6BC;
	sub_832CC1E8(ctx, base);
loc_832CC6BC:
	// lwz r11,20(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// addi r19,r19,1
	ctx.r19.s64 = ctx.r19.s64 + 1;
	// stw r22,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r22.u32);
	// addic. r11,r11,-20
	xer.ca = ctx.r11.u32 > 19;
	ctx.r11.s64 = ctx.r11.s64 + -20;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// stw r11,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r11.u32);
	// bge 0x832cc6d8
	if (!cr0.lt) goto loc_832CC6D8;
	// stw r18,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r18.u32);
loc_832CC6D8:
	// lwz r24,0(r23)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(ctx.r24.u32, 0, xer);
	// bne cr6,0x832cc454
	if (!cr6.eq) goto loc_832CC454;
loc_832CC6E4:
	// lwz r11,136(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 136);
	// mr r30,r18
	ctx.r30.u64 = ctx.r18.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// ble cr6,0x832cc794
	if (!cr6.gt) goto loc_832CC794;
	// addi r31,r29,80
	ctx.r31.s64 = ctx.r29.s64 + 80;
loc_832CC6F8:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lwz r8,0(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r10,24(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r9,r11,29
	ctx.r9.s64 = ctx.r11.s64 + 29;
	// addi r7,r11,25
	ctx.r7.s64 = ctx.r11.s64 + 25;
	// lwz r11,12(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mulli r10,r9,3
	ctx.r10.s64 = ctx.r9.s64 * 3;
	// mulli r9,r7,3
	ctx.r9.s64 = ctx.r7.s64 * 3;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r10,r8
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// lwzx r5,r11,r8
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// bl 0x832c7808
	ctx.lr = 0x832CC73C;
	sub_832C7808(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r16,r3
	ctx.r16.u64 = ctx.r3.u64;
	// mr r10,r18
	ctx.r10.u64 = ctx.r18.u64;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
loc_832CC74C:
	// lwz r9,-8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x832cc764
	if (cr6.eq) goto loc_832CC764;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r9,1
	cr6.compare<int32_t>(ctx.r9.s32, 1, xer);
	// beq cr6,0x832cc778
	if (cr6.eq) goto loc_832CC778;
loc_832CC764:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplwi cr6,r10,2
	cr6.compare<uint32_t>(ctx.r10.u32, 2, xer);
	// blt cr6,0x832cc74c
	if (cr6.lt) goto loc_832CC74C;
	// stw r18,144(r29)
	PPC_STORE_U32(ctx.r29.u32 + 144, ctx.r18.u32);
loc_832CC778:
	// lwz r11,136(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 136);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, xer);
	// blt cr6,0x832cc6f8
	if (cr6.lt) goto loc_832CC6F8;
	// cmpwi cr6,r16,0
	cr6.compare<int32_t>(ctx.r16.s32, 0, xer);
	// blt cr6,0x832cc884
	if (cr6.lt) goto loc_832CC884;
loc_832CC794:
	// lwz r11,136(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 136);
	// mr r31,r18
	ctx.r31.u64 = ctx.r18.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// ble cr6,0x832cc884
	if (!cr6.gt) goto loc_832CC884;
	// li r28,24
	ctx.r28.s64 = 24;
loc_832CC7A8:
	// rlwinm r11,r31,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r30,r11,100
	ctx.r30.s64 = ctx.r11.s64 + 100;
	// lwz r11,100(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
loc_832CC7B8:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x832cc874
	if (cr6.eq) goto loc_832CC874;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r31,2
	cr6.compare<uint32_t>(ctx.r31.u32, 2, xer);
	// bne cr6,0x832cc7dc
	if (!cr6.eq) goto loc_832CC7DC;
	// lwz r11,132(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 132);
	// subf r11,r11,r9
	ctx.r11.s64 = ctx.r9.s64 - ctx.r11.s64;
	// divw r11,r11,r17
	ctx.r11.s32 = PPCDivide(ctx.r11.s32, ctx.r17.s32);
	// b 0x832cc7f0
	goto loc_832CC7F0;
loc_832CC7DC:
	// addi r11,r31,31
	ctx.r11.s64 = ctx.r31.s64 + 31;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r29
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// subf r11,r11,r9
	ctx.r11.s64 = ctx.r9.s64 - ctx.r11.s64;
	// divw r11,r11,r28
	ctx.r11.s32 = PPCDivide(ctx.r11.s32, ctx.r28.s32);
loc_832CC7F0:
	// lwz r10,12(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x832cc804
	if (cr6.lt) goto loc_832CC804;
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// b 0x832cc810
	goto loc_832CC810;
loc_832CC804:
	// lwz r10,96(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 96);
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_832CC810:
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmpwi cr6,r11,259
	cr6.compare<int32_t>(ctx.r11.s32, 259, xer);
	// beq cr6,0x832cc874
	if (cr6.eq) goto loc_832CC874;
	// lwz r11,24(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x832cc874
	if (cr6.eq) goto loc_832CC874;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x832cc854
	if (cr6.eq) goto loc_832CC854;
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// bne cr6,0x832cc848
	if (!cr6.eq) goto loc_832CC848;
	// stw r18,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r18.u32);
loc_832CC848:
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r9,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r9.u32);
	// stw r18,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r18.u32);
loc_832CC854:
	// lwz r11,24(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// addic. r11,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// stw r11,24(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24, ctx.r11.u32);
	// bne 0x832cc86c
	if (!cr0.eq) goto loc_832CC86C;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x832cc1e8
	ctx.lr = 0x832CC86C;
	sub_832CC1E8(ctx, base);
loc_832CC86C:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// b 0x832cc7b8
	goto loc_832CC7B8;
loc_832CC874:
	// lwz r11,136(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 136);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// blt cr6,0x832cc7a8
	if (cr6.lt) goto loc_832CC7A8;
loc_832CC884:
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb04
	__restgprlr_15(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832CC890"))) PPC_WEAK_FUNC(sub_832CC890);
PPC_FUNC_IMPL(__imp__sub_832CC890) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x832CC898;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x832cc984
	if (cr6.eq) goto loc_832CC984;
	// lwz r11,136(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 136);
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r28,r29
	ctx.r28.u64 = ctx.r29.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// ble cr6,0x832cc920
	if (!cr6.gt) goto loc_832CC920;
	// addi r31,r3,124
	ctx.r31.s64 = ctx.r3.s64 + 124;
loc_832CC8C0:
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,-44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -44);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x832c7930
	ctx.lr = 0x832CC8D4;
	sub_832C7930(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x832cc8f0
	if (cr6.eq) goto loc_832CC8F0;
	// lis r4,24970
	ctx.r4.s64 = 1636433920;
	// ori r4,r4,9
	ctx.r4.u64 = ctx.r4.u64 | 9;
	// bl 0x832d53c8
	ctx.lr = 0x832CC8EC;
	sub_832D53C8(ctx, base);
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
loc_832CC8F0:
	// lwz r3,-36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -36);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x832cc90c
	if (cr6.eq) goto loc_832CC90C;
	// lis r4,24970
	ctx.r4.s64 = 1636433920;
	// ori r4,r4,3
	ctx.r4.u64 = ctx.r4.u64 | 3;
	// bl 0x832d53c8
	ctx.lr = 0x832CC908;
	sub_832D53C8(ctx, base);
	// stw r29,-36(r31)
	PPC_STORE_U32(ctx.r31.u32 + -36, ctx.r29.u32);
loc_832CC90C:
	// lwz r11,136(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 136);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplw cr6,r28,r11
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, xer);
	// blt cr6,0x832cc8c0
	if (cr6.lt) goto loc_832CC8C0;
loc_832CC920:
	// lwz r3,96(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x832cc93c
	if (cr6.eq) goto loc_832CC93C;
	// lis r4,24970
	ctx.r4.s64 = 1636433920;
	// ori r4,r4,3
	ctx.r4.u64 = ctx.r4.u64 | 3;
	// bl 0x832d53c8
	ctx.lr = 0x832CC938;
	sub_832D53C8(ctx, base);
	// stw r29,96(r30)
	PPC_STORE_U32(ctx.r30.u32 + 96, ctx.r29.u32);
loc_832CC93C:
	// lwz r3,132(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 132);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x832cc958
	if (cr6.eq) goto loc_832CC958;
	// lis r4,24970
	ctx.r4.s64 = 1636433920;
	// ori r4,r4,9
	ctx.r4.u64 = ctx.r4.u64 | 9;
	// bl 0x832d53c8
	ctx.lr = 0x832CC954;
	sub_832D53C8(ctx, base);
	// stw r29,132(r30)
	PPC_STORE_U32(ctx.r30.u32 + 132, ctx.r29.u32);
loc_832CC958:
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x832cc974
	if (cr6.eq) goto loc_832CC974;
	// lis r4,24714
	ctx.r4.s64 = 1619656704;
	// ori r4,r4,8194
	ctx.r4.u64 = ctx.r4.u64 | 8194;
	// bl 0x832d53c8
	ctx.lr = 0x832CC970;
	sub_832D53C8(ctx, base);
	// stw r29,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r29.u32);
loc_832CC974:
	// lis r4,24970
	ctx.r4.s64 = 1636433920;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// ori r4,r4,32781
	ctx.r4.u64 = ctx.r4.u64 | 32781;
	// bl 0x832d53c8
	ctx.lr = 0x832CC984;
	sub_832D53C8(ctx, base);
loc_832CC984:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832CC98C"))) PPC_WEAK_FUNC(sub_832CC98C);
PPC_FUNC_IMPL(__imp__sub_832CC98C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832CC990"))) PPC_WEAK_FUNC(sub_832CC990);
PPC_FUNC_IMPL(__imp__sub_832CC990) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x832CC998;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,12(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x832cc338
	ctx.lr = 0x832CC9A8;
	sub_832CC338(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832cbd68
	ctx.lr = 0x832CC9B0;
	sub_832CBD68(ctx, base);
	// li r29,0
	ctx.r29.s64 = 0;
	// b 0x832cc9ec
	goto loc_832CC9EC;
loc_832CC9B8:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
	// subf r11,r30,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r30.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x832cc9d8
	if (cr6.lt) goto loc_832CC9D8;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// b 0x832cc9e4
	goto loc_832CC9E4;
loc_832CC9D8:
	// lwz r10,96(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_832CC9E4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832cc1e8
	ctx.lr = 0x832CC9EC;
	sub_832CC1E8(ctx, base);
loc_832CC9EC:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// bne cr6,0x832cc9b8
	if (!cr6.eq) goto loc_832CC9B8;
	// li r11,600
	ctx.r11.s64 = 600;
	// stb r29,140(r31)
	PPC_STORE_U8(ctx.r31.u32 + 140, ctx.r29.u8);
	// stw r29,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r29.u32);
	// stw r11,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r11.u32);
	// stw r29,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r29.u32);
	// stw r29,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r29.u32);
	// bl 0x832d30f8
	ctx.lr = 0x832CCA10;
	sub_832D30F8(ctx, base);
	// stw r3,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r3.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832CCA20"))) PPC_WEAK_FUNC(sub_832CCA20);
PPC_FUNC_IMPL(__imp__sub_832CCA20) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x832CCA28;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// lis r4,24970
	ctx.r4.s64 = 1636433920;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r3,160
	ctx.r3.s64 = 160;
	// ori r4,r4,32781
	ctx.r4.u64 = ctx.r4.u64 | 32781;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// mr r25,r8
	ctx.r25.u64 = ctx.r8.u64;
	// bl 0x832d5290
	ctx.lr = 0x832CCA54;
	sub_832D5290(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// beq 0x832ccb38
	if (cr0.eq) goto loc_832CCB38;
	// stw r28,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r28.u32);
	// rlwinm r5,r30,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r30,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r30.u32);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// stw r27,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r27.u32);
	// bl 0x831ce980
	ctx.lr = 0x832CCA7C;
	sub_831CE980(ctx, base);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x832ccb0c
	if (cr6.eq) goto loc_832CCB0C;
	// addi r11,r30,22
	ctx.r11.s64 = ctx.r30.s64 + 22;
	// mulli r27,r28,24
	ctx.r27.s64 = ctx.r28.s64 * 24;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r29,r11,r31
	ctx.r29.u64 = ctx.r11.u64 + ctx.r31.u64;
loc_832CCA94:
	// lis r4,24970
	ctx.r4.s64 = 1636433920;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// ori r4,r4,9
	ctx.r4.u64 = ctx.r4.u64 | 9;
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
	// addi r29,r29,-4
	ctx.r29.s64 = ctx.r29.s64 + -4;
	// bl 0x832d5290
	ctx.lr = 0x832CCAAC;
	sub_832D5290(ctx, base);
	// stw r3,36(r29)
	PPC_STORE_U32(ctx.r29.u32 + 36, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x832ccb38
	if (cr0.eq) goto loc_832CCB38;
	// lis r4,24970
	ctx.r4.s64 = 1636433920;
	// rlwinm r3,r28,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 3) & 0xFFFFFFF8;
	// ori r4,r4,3
	ctx.r4.u64 = ctx.r4.u64 | 3;
	// bl 0x832d5290
	ctx.lr = 0x832CCAC8;
	sub_832D5290(ctx, base);
	// stw r3,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x832ccb38
	if (cr0.eq) goto loc_832CCB38;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// beq cr6,0x832ccb04
	if (cr6.eq) goto loc_832CCB04;
	// li r10,0
	ctx.r10.s64 = 0;
	// mtctr r28
	ctr.u64 = ctx.r28.u64;
	// li r11,0
	ctx.r11.s64 = 0;
loc_832CCAE8:
	// lwz r9,36(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 36);
	// lwz r8,0(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// stwx r9,r8,r10
	PPC_STORE_U32(ctx.r8.u32 + ctx.r10.u32, ctx.r9.u32);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// bdnz 0x832ccae8
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_832CCAE8;
loc_832CCB04:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// bne cr6,0x832cca94
	if (!cr6.eq) goto loc_832CCA94;
loc_832CCB0C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832cbd68
	ctx.lr = 0x832CCB14;
	sub_832CBD68(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// bge 0x832ccb28
	if (!cr0.lt) goto loc_832CCB28;
loc_832CCB1C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832cc890
	ctx.lr = 0x832CCB24;
	sub_832CC890(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
loc_832CCB28:
	// stw r31,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r31.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_832CCB38:
	// lis r30,-32761
	ctx.r30.s64 = -2147024896;
	// ori r30,r30,14
	ctx.r30.u64 = ctx.r30.u64 | 14;
	// b 0x832ccb1c
	goto loc_832CCB1C;
}

__attribute__((alias("__imp__sub_832CCB44"))) PPC_WEAK_FUNC(sub_832CCB44);
PPC_FUNC_IMPL(__imp__sub_832CCB44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832CCB48"))) PPC_WEAK_FUNC(sub_832CCB48);
PPC_FUNC_IMPL(__imp__sub_832CCB48) {
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
	// li r4,160
	ctx.r4.s64 = 160;
	// bl 0x832cdbd8
	ctx.lr = 0x832CCB5C;
	sub_832CDBD8(ctx, base);
	// bl 0x832cd950
	ctx.lr = 0x832CCB60;
	sub_832CD950(ctx, base);
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

__attribute__((alias("__imp__sub_832CCB74"))) PPC_WEAK_FUNC(sub_832CCB74);
PPC_FUNC_IMPL(__imp__sub_832CCB74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832CCB78"))) PPC_WEAK_FUNC(sub_832CCB78);
PPC_FUNC_IMPL(__imp__sub_832CCB78) {
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
	// li r4,160
	ctx.r4.s64 = 160;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x832cdbd8
	ctx.lr = 0x832CCB94;
	sub_832CDBD8(ctx, base);
	// addi r3,r31,640
	ctx.r3.s64 = ctx.r31.s64 + 640;
	// bl 0x832cd968
	ctx.lr = 0x832CCB9C;
	sub_832CD968(ctx, base);
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

__attribute__((alias("__imp__sub_832CCBB4"))) PPC_WEAK_FUNC(sub_832CCBB4);
PPC_FUNC_IMPL(__imp__sub_832CCBB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832CCBB8"))) PPC_WEAK_FUNC(sub_832CCBB8);
PPC_FUNC_IMPL(__imp__sub_832CCBB8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdab8
	ctx.lr = 0x832CCBC0;
	__savegprlr_16(ctx, base);
	// ld r12,-4096(r1)
	ctx.r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -4096);
	// stwu r1,-7904(r1)
	ea = -7904 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// cmplwi cr6,r4,1
	cr6.compare<uint32_t>(ctx.r4.u32, 1, xer);
	// blt cr6,0x832ccc00
	if (cr6.lt) goto loc_832CCC00;
	// beq cr6,0x832ccbf8
	if (cr6.eq) goto loc_832CCBF8;
	// cmplwi cr6,r4,3
	cr6.compare<uint32_t>(ctx.r4.u32, 3, xer);
	// blt cr6,0x832ccbf0
	if (cr6.lt) goto loc_832CCBF0;
	// li r3,3
	ctx.r3.s64 = 3;
	// addi r1,r1,7904
	ctx.r1.s64 = ctx.r1.s64 + 7904;
	// b 0x831cdb08
	__restgprlr_16(ctx, base);
	return;
loc_832CCBF0:
	// li r30,32000
	ctx.r30.s64 = 32000;
	// b 0x832ccc04
	goto loc_832CCC04;
loc_832CCBF8:
	// li r30,24000
	ctx.r30.s64 = 24000;
	// b 0x832ccc04
	goto loc_832CCC04;
loc_832CCC00:
	// li r30,16000
	ctx.r30.s64 = 16000;
loc_832CCC04:
	// li r11,16
	ctx.r11.s64 = 16;
	// lvx128 v63,r0,r5
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r5.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r10,32
	ctx.r10.s64 = 32;
	// li r9,48
	ctx.r9.s64 = 48;
	// vupkhsb128 v62,v63,v96
	simde_mm_store_si128((simde__m128i*)ctx.v62.s32, simde_mm_cvtepi16_epi32(simde_mm_unpackhi_epi64(simde_mm_load_si128((simde__m128i*)ctx.v63.s16), simde_mm_load_si128((simde__m128i*)ctx.v63.s16))));
	// li r8,64
	ctx.r8.s64 = 64;
	// vupklsb128 v61,v63,v96
	simde_mm_store_si128((simde__m128i*)ctx.v61.s32, simde_mm_cvtepi16_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.s16)));
	// li r7,80
	ctx.r7.s64 = 80;
	// lvx128 v60,r5,r11
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r5.u32 + ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r6,96
	ctx.r6.s64 = 96;
	// lvx128 v59,r5,r10
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r5.u32 + ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcsxwfp128 v58,v62,0
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v58.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v62.u32)));
	// lvx128 v57,r5,r9
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r5.u32 + ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vupkhsb128 v56,v60,v96
	simde_mm_store_si128((simde__m128i*)ctx.v56.s32, simde_mm_cvtepi16_epi32(simde_mm_unpackhi_epi64(simde_mm_load_si128((simde__m128i*)ctx.v60.s16), simde_mm_load_si128((simde__m128i*)ctx.v60.s16))));
	// lvx128 v55,r5,r8
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r5.u32 + ctx.r8.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vupklsb128 v54,v60,v96
	simde_mm_store_si128((simde__m128i*)ctx.v54.s32, simde_mm_cvtepi16_epi32(simde_mm_load_si128((simde__m128i*)ctx.v60.s16)));
	// vupkhsb128 v53,v59,v96
	simde_mm_store_si128((simde__m128i*)ctx.v53.s32, simde_mm_cvtepi16_epi32(simde_mm_unpackhi_epi64(simde_mm_load_si128((simde__m128i*)ctx.v59.s16), simde_mm_load_si128((simde__m128i*)ctx.v59.s16))));
	// lvx128 v40,r5,r7
	simde_mm_store_si128((simde__m128i*)ctx.v40.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r5.u32 + ctx.r7.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vupklsb128 v51,v59,v96
	simde_mm_store_si128((simde__m128i*)ctx.v51.s32, simde_mm_cvtepi16_epi32(simde_mm_load_si128((simde__m128i*)ctx.v59.s16)));
	// vcsxwfp128 v52,v61,0
	simde_mm_store_ps(ctx.v52.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v61.u32)));
	// vupkhsb128 v50,v57,v96
	simde_mm_store_si128((simde__m128i*)ctx.v50.s32, simde_mm_cvtepi16_epi32(simde_mm_unpackhi_epi64(simde_mm_load_si128((simde__m128i*)ctx.v57.s16), simde_mm_load_si128((simde__m128i*)ctx.v57.s16))));
	// vcsxwfp128 v49,v56,0
	simde_mm_store_ps(ctx.v49.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v56.u32)));
	// vupklsb128 v48,v57,v96
	simde_mm_store_si128((simde__m128i*)ctx.v48.s32, simde_mm_cvtepi16_epi32(simde_mm_load_si128((simde__m128i*)ctx.v57.s16)));
	// vcsxwfp128 v47,v54,0
	simde_mm_store_ps(ctx.v47.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v54.u32)));
	// vupkhsb128 v46,v55,v96
	simde_mm_store_si128((simde__m128i*)ctx.v46.s32, simde_mm_cvtepi16_epi32(simde_mm_unpackhi_epi64(simde_mm_load_si128((simde__m128i*)ctx.v55.s16), simde_mm_load_si128((simde__m128i*)ctx.v55.s16))));
	// li r4,112
	ctx.r4.s64 = 112;
	// li r3,128
	ctx.r3.s64 = 128;
	// vcsxwfp128 v45,v53,0
	simde_mm_store_ps(ctx.v45.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v53.u32)));
	// li r11,144
	ctx.r11.s64 = 144;
	// vcsxwfp128 v44,v51,0
	simde_mm_store_ps(ctx.v44.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v51.u32)));
	// vcsxwfp128 v43,v50,0
	simde_mm_store_ps(ctx.v43.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v50.u32)));
	// li r10,160
	ctx.r10.s64 = 160;
	// vcsxwfp128 v42,v48,0
	simde_mm_store_ps(ctx.v42.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v48.u32)));
	// li r9,176
	ctx.r9.s64 = 176;
	// vcsxwfp128 v41,v46,0
	simde_mm_store_ps(ctx.v41.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v46.u32)));
	// li r8,192
	ctx.r8.s64 = 192;
	// li r7,208
	ctx.r7.s64 = 208;
	// lvx128 v39,r5,r6
	simde_mm_store_si128((simde__m128i*)ctx.v39.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r5.u32 + ctx.r6.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v38,r5,r4
	simde_mm_store_si128((simde__m128i*)ctx.v38.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r5.u32 + ctx.r4.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lvx128 v37,r5,r3
	simde_mm_store_si128((simde__m128i*)ctx.v37.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r5.u32 + ctx.r3.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lvx128 v36,r5,r11
	simde_mm_store_si128((simde__m128i*)ctx.v36.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r5.u32 + ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// lvx128 v35,r5,r10
	simde_mm_store_si128((simde__m128i*)ctx.v35.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r5.u32 + ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v34,r5,r9
	simde_mm_store_si128((simde__m128i*)ctx.v34.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r5.u32 + ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// lvx128 v33,r5,r8
	simde_mm_store_si128((simde__m128i*)ctx.v33.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r5.u32 + ctx.r8.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r9,r1,160
	ctx.r9.s64 = ctx.r1.s64 + 160;
	// lvx128 v32,r5,r7
	simde_mm_store_si128((simde__m128i*)ctx.v32.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r5.u32 + ctx.r7.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r8,r1,176
	ctx.r8.s64 = ctx.r1.s64 + 176;
	// addi r7,r1,192
	ctx.r7.s64 = ctx.r1.s64 + 192;
	// vupklsb128 v63,v55,v96
	simde_mm_store_si128((simde__m128i*)ctx.v63.s32, simde_mm_cvtepi16_epi32(simde_mm_load_si128((simde__m128i*)ctx.v55.s16)));
	// addi r28,r1,208
	ctx.r28.s64 = ctx.r1.s64 + 208;
	// stvx128 v58,r0,r6
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r6.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v58.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v52,r0,r4
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r4.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v52.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vupkhsb128 v62,v40,v96
	simde_mm_store_si128((simde__m128i*)ctx.v62.s32, simde_mm_cvtepi16_epi32(simde_mm_unpackhi_epi64(simde_mm_load_si128((simde__m128i*)ctx.v40.s16), simde_mm_load_si128((simde__m128i*)ctx.v40.s16))));
	// stvx128 v49,r0,r3
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r3.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v49.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vupklsb128 v61,v40,v96
	simde_mm_store_si128((simde__m128i*)ctx.v61.s32, simde_mm_cvtepi16_epi32(simde_mm_load_si128((simde__m128i*)ctx.v40.s16)));
	// stvx128 v47,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v47.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vupkhsb128 v60,v39,v96
	simde_mm_store_si128((simde__m128i*)ctx.v60.s32, simde_mm_cvtepi16_epi32(simde_mm_unpackhi_epi64(simde_mm_load_si128((simde__m128i*)ctx.v39.s16), simde_mm_load_si128((simde__m128i*)ctx.v39.s16))));
	// vupklsb128 v59,v39,v96
	simde_mm_store_si128((simde__m128i*)ctx.v59.s32, simde_mm_cvtepi16_epi32(simde_mm_load_si128((simde__m128i*)ctx.v39.s16)));
	// stvx128 v45,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v45.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vupkhsb128 v58,v38,v96
	simde_mm_store_si128((simde__m128i*)ctx.v58.s32, simde_mm_cvtepi16_epi32(simde_mm_unpackhi_epi64(simde_mm_load_si128((simde__m128i*)ctx.v38.s16), simde_mm_load_si128((simde__m128i*)ctx.v38.s16))));
	// stvx128 v44,r0,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v44.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vupklsb128 v57,v38,v96
	simde_mm_store_si128((simde__m128i*)ctx.v57.s32, simde_mm_cvtepi16_epi32(simde_mm_load_si128((simde__m128i*)ctx.v38.s16)));
	// stvx128 v43,r0,r8
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v43.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vupkhsb128 v56,v37,v96
	simde_mm_store_si128((simde__m128i*)ctx.v56.s32, simde_mm_cvtepi16_epi32(simde_mm_unpackhi_epi64(simde_mm_load_si128((simde__m128i*)ctx.v37.s16), simde_mm_load_si128((simde__m128i*)ctx.v37.s16))));
	// stvx128 v42,r0,r7
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r7.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v42.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vupklsb128 v55,v37,v96
	simde_mm_store_si128((simde__m128i*)ctx.v55.s32, simde_mm_cvtepi16_epi32(simde_mm_load_si128((simde__m128i*)ctx.v37.s16)));
	// stvx128 v41,r0,r28
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r28.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v41.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vupkhsb128 v54,v36,v96
	simde_mm_store_si128((simde__m128i*)ctx.v54.s32, simde_mm_cvtepi16_epi32(simde_mm_unpackhi_epi64(simde_mm_load_si128((simde__m128i*)ctx.v36.s16), simde_mm_load_si128((simde__m128i*)ctx.v36.s16))));
	// vupklsb128 v53,v36,v96
	simde_mm_store_si128((simde__m128i*)ctx.v53.s32, simde_mm_cvtepi16_epi32(simde_mm_load_si128((simde__m128i*)ctx.v36.s16)));
	// vupkhsb128 v52,v35,v96
	simde_mm_store_si128((simde__m128i*)ctx.v52.s32, simde_mm_cvtepi16_epi32(simde_mm_unpackhi_epi64(simde_mm_load_si128((simde__m128i*)ctx.v35.s16), simde_mm_load_si128((simde__m128i*)ctx.v35.s16))));
	// vupklsb128 v51,v35,v96
	simde_mm_store_si128((simde__m128i*)ctx.v51.s32, simde_mm_cvtepi16_epi32(simde_mm_load_si128((simde__m128i*)ctx.v35.s16)));
	// vupkhsb128 v50,v34,v96
	simde_mm_store_si128((simde__m128i*)ctx.v50.s32, simde_mm_cvtepi16_epi32(simde_mm_unpackhi_epi64(simde_mm_load_si128((simde__m128i*)ctx.v34.s16), simde_mm_load_si128((simde__m128i*)ctx.v34.s16))));
	// vupklsb128 v49,v34,v96
	simde_mm_store_si128((simde__m128i*)ctx.v49.s32, simde_mm_cvtepi16_epi32(simde_mm_load_si128((simde__m128i*)ctx.v34.s16)));
	// vupkhsb128 v48,v33,v96
	simde_mm_store_si128((simde__m128i*)ctx.v48.s32, simde_mm_cvtepi16_epi32(simde_mm_unpackhi_epi64(simde_mm_load_si128((simde__m128i*)ctx.v33.s16), simde_mm_load_si128((simde__m128i*)ctx.v33.s16))));
	// vupklsb128 v47,v33,v96
	simde_mm_store_si128((simde__m128i*)ctx.v47.s32, simde_mm_cvtepi16_epi32(simde_mm_load_si128((simde__m128i*)ctx.v33.s16)));
	// vupkhsb128 v46,v32,v96
	simde_mm_store_si128((simde__m128i*)ctx.v46.s32, simde_mm_cvtepi16_epi32(simde_mm_unpackhi_epi64(simde_mm_load_si128((simde__m128i*)ctx.v32.s16), simde_mm_load_si128((simde__m128i*)ctx.v32.s16))));
	// vcsxwfp128 v44,v63,0
	simde_mm_store_ps(ctx.v44.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v63.u32)));
	// vupklsb128 v45,v32,v96
	simde_mm_store_si128((simde__m128i*)ctx.v45.s32, simde_mm_cvtepi16_epi32(simde_mm_load_si128((simde__m128i*)ctx.v32.s16)));
	// li r6,224
	ctx.r6.s64 = 224;
	// vcsxwfp128 v43,v62,0
	simde_mm_store_ps(ctx.v43.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v62.u32)));
	// li r4,240
	ctx.r4.s64 = 240;
	// vcsxwfp128 v42,v61,0
	simde_mm_store_ps(ctx.v42.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v61.u32)));
	// li r3,256
	ctx.r3.s64 = 256;
	// vcsxwfp128 v41,v60,0
	simde_mm_store_ps(ctx.v41.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v60.u32)));
	// li r11,272
	ctx.r11.s64 = 272;
	// vcsxwfp128 v40,v59,0
	simde_mm_store_ps(ctx.v40.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v59.u32)));
	// addi r10,r1,224
	ctx.r10.s64 = ctx.r1.s64 + 224;
	// vcsxwfp128 v39,v58,0
	simde_mm_store_ps(ctx.v39.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v58.u32)));
	// vcsxwfp128 v38,v57,0
	simde_mm_store_ps(ctx.v38.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v57.u32)));
	// lvx128 v57,r5,r6
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r5.u32 + ctx.r6.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcsxwfp128 v37,v56,0
	simde_mm_store_ps(ctx.v37.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v56.u32)));
	// lvx128 v56,r5,r4
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r5.u32 + ctx.r4.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcsxwfp128 v36,v55,0
	simde_mm_store_ps(ctx.v36.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v55.u32)));
	// lvx128 v55,r5,r3
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r5.u32 + ctx.r3.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcsxwfp128 v35,v54,0
	simde_mm_store_ps(ctx.v35.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v54.u32)));
	// lvx128 v54,r5,r11
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r5.u32 + ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcsxwfp128 v34,v53,0
	simde_mm_store_ps(ctx.v34.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v53.u32)));
	// addi r9,r1,240
	ctx.r9.s64 = ctx.r1.s64 + 240;
	// vcsxwfp128 v33,v52,0
	simde_mm_store_ps(ctx.v33.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v52.u32)));
	// addi r8,r1,256
	ctx.r8.s64 = ctx.r1.s64 + 256;
	// vcsxwfp128 v32,v51,0
	simde_mm_store_ps(ctx.v32.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v51.u32)));
	// addi r7,r1,272
	ctx.r7.s64 = ctx.r1.s64 + 272;
	// vcsxwfp128 v63,v50,0
	simde_mm_store_ps(ctx.v63.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v50.u32)));
	// addi r28,r1,288
	ctx.r28.s64 = ctx.r1.s64 + 288;
	// vcsxwfp128 v62,v49,0
	simde_mm_store_ps(ctx.v62.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v49.u32)));
	// addi r27,r1,304
	ctx.r27.s64 = ctx.r1.s64 + 304;
	// vcsxwfp128 v61,v48,0
	simde_mm_store_ps(ctx.v61.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v48.u32)));
	// addi r26,r1,320
	ctx.r26.s64 = ctx.r1.s64 + 320;
	// vcsxwfp128 v60,v47,0
	simde_mm_store_ps(ctx.v60.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v47.u32)));
	// addi r25,r1,336
	ctx.r25.s64 = ctx.r1.s64 + 336;
	// vcsxwfp128 v59,v46,0
	simde_mm_store_ps(ctx.v59.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v46.u32)));
	// addi r24,r1,352
	ctx.r24.s64 = ctx.r1.s64 + 352;
	// vcsxwfp128 v58,v45,0
	simde_mm_store_ps(ctx.v58.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v45.u32)));
	// addi r23,r1,368
	ctx.r23.s64 = ctx.r1.s64 + 368;
	// addi r22,r1,384
	ctx.r22.s64 = ctx.r1.s64 + 384;
	// vupkhsb128 v53,v57,v96
	simde_mm_store_si128((simde__m128i*)ctx.v53.s32, simde_mm_cvtepi16_epi32(simde_mm_unpackhi_epi64(simde_mm_load_si128((simde__m128i*)ctx.v57.s16), simde_mm_load_si128((simde__m128i*)ctx.v57.s16))));
	// addi r21,r1,400
	ctx.r21.s64 = ctx.r1.s64 + 400;
	// vupklsb128 v51,v57,v96
	simde_mm_store_si128((simde__m128i*)ctx.v51.s32, simde_mm_cvtepi16_epi32(simde_mm_load_si128((simde__m128i*)ctx.v57.s16)));
	// addi r20,r1,416
	ctx.r20.s64 = ctx.r1.s64 + 416;
	// vupkhsb128 v50,v56,v96
	simde_mm_store_si128((simde__m128i*)ctx.v50.s32, simde_mm_cvtepi16_epi32(simde_mm_unpackhi_epi64(simde_mm_load_si128((simde__m128i*)ctx.v56.s16), simde_mm_load_si128((simde__m128i*)ctx.v56.s16))));
	// addi r19,r1,432
	ctx.r19.s64 = ctx.r1.s64 + 432;
	// vupklsb128 v49,v56,v96
	simde_mm_store_si128((simde__m128i*)ctx.v49.s32, simde_mm_cvtepi16_epi32(simde_mm_load_si128((simde__m128i*)ctx.v56.s16)));
	// addi r18,r1,448
	ctx.r18.s64 = ctx.r1.s64 + 448;
	// vupkhsb128 v48,v55,v96
	simde_mm_store_si128((simde__m128i*)ctx.v48.s32, simde_mm_cvtepi16_epi32(simde_mm_unpackhi_epi64(simde_mm_load_si128((simde__m128i*)ctx.v55.s16), simde_mm_load_si128((simde__m128i*)ctx.v55.s16))));
	// addi r6,r1,464
	ctx.r6.s64 = ctx.r1.s64 + 464;
	// vupklsb128 v47,v55,v96
	simde_mm_store_si128((simde__m128i*)ctx.v47.s32, simde_mm_cvtepi16_epi32(simde_mm_load_si128((simde__m128i*)ctx.v55.s16)));
	// addi r4,r1,480
	ctx.r4.s64 = ctx.r1.s64 + 480;
	// vupkhsb128 v46,v54,v96
	simde_mm_store_si128((simde__m128i*)ctx.v46.s32, simde_mm_cvtepi16_epi32(simde_mm_unpackhi_epi64(simde_mm_load_si128((simde__m128i*)ctx.v54.s16), simde_mm_load_si128((simde__m128i*)ctx.v54.s16))));
	// addi r3,r1,496
	ctx.r3.s64 = ctx.r1.s64 + 496;
	// addi r11,r1,512
	ctx.r11.s64 = ctx.r1.s64 + 512;
	// stvx128 v44,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v44.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r10,288
	ctx.r10.s64 = 288;
	// stvx128 v43,r0,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v43.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v42,r0,r8
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v42.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r9,304
	ctx.r9.s64 = 304;
	// stvx128 v41,r0,r7
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r7.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v41.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r8,320
	ctx.r8.s64 = 320;
	// stvx128 v40,r0,r28
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r28.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v40.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r7,336
	ctx.r7.s64 = 336;
	// stvx128 v39,r0,r27
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r27.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v39.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r28,368
	ctx.r28.s64 = 368;
	// lvx128 v52,r5,r10
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r5.u32 + ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r10,352
	ctx.r10.s64 = 352;
	// stvx128 v38,r0,r26
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r26.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v38.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r27,384
	ctx.r27.s64 = 384;
	// stvx128 v37,r0,r25
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r25.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v37.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v36,r0,r24
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r24.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v36.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v35,r0,r23
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r23.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v35.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v34,r0,r22
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r22.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v34.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v33,r0,r21
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r21.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v33.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v32,r0,r20
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r20.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v32.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r19
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r19.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v62,r0,r18
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r18.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v61,r0,r6
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r6.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v60,r0,r4
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r4.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v59,r0,r3
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r3.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v58,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v58.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcsxwfp128 v38,v53,0
	simde_mm_store_ps(ctx.v38.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v53.u32)));
	// lvx128 v45,r5,r9
	simde_mm_store_si128((simde__m128i*)ctx.v45.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r5.u32 + ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v43,r5,r8
	simde_mm_store_si128((simde__m128i*)ctx.v43.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r5.u32 + ctx.r8.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcsxwfp128 v36,v51,0
	simde_mm_store_ps(ctx.v36.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v51.u32)));
	// lvx128 v41,r5,r7
	simde_mm_store_si128((simde__m128i*)ctx.v41.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r5.u32 + ctx.r7.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vupklsb128 v44,v54,v96
	simde_mm_store_si128((simde__m128i*)ctx.v44.s32, simde_mm_cvtepi16_epi32(simde_mm_load_si128((simde__m128i*)ctx.v54.s16)));
	// vupkhsb128 v42,v52,v96
	simde_mm_store_si128((simde__m128i*)ctx.v42.s32, simde_mm_cvtepi16_epi32(simde_mm_unpackhi_epi64(simde_mm_load_si128((simde__m128i*)ctx.v52.s16), simde_mm_load_si128((simde__m128i*)ctx.v52.s16))));
	// li r9,400
	ctx.r9.s64 = 400;
	// vupklsb128 v40,v52,v96
	simde_mm_store_si128((simde__m128i*)ctx.v40.s32, simde_mm_cvtepi16_epi32(simde_mm_load_si128((simde__m128i*)ctx.v52.s16)));
	// li r8,416
	ctx.r8.s64 = 416;
	// vupkhsb128 v39,v45,v96
	simde_mm_store_si128((simde__m128i*)ctx.v39.s32, simde_mm_cvtepi16_epi32(simde_mm_unpackhi_epi64(simde_mm_load_si128((simde__m128i*)ctx.v45.s16), simde_mm_load_si128((simde__m128i*)ctx.v45.s16))));
	// addi r7,r1,528
	ctx.r7.s64 = ctx.r1.s64 + 528;
	// vupklsb128 v37,v45,v96
	simde_mm_store_si128((simde__m128i*)ctx.v37.s32, simde_mm_cvtepi16_epi32(simde_mm_load_si128((simde__m128i*)ctx.v45.s16)));
	// vcsxwfp128 v34,v50,0
	simde_mm_store_ps(ctx.v34.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v50.u32)));
	// vupkhsb128 v35,v43,v96
	simde_mm_store_si128((simde__m128i*)ctx.v35.s32, simde_mm_cvtepi16_epi32(simde_mm_unpackhi_epi64(simde_mm_load_si128((simde__m128i*)ctx.v43.s16), simde_mm_load_si128((simde__m128i*)ctx.v43.s16))));
	// vcsxwfp128 v32,v49,0
	simde_mm_store_ps(ctx.v32.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v49.u32)));
	// vupklsb128 v33,v43,v96
	simde_mm_store_si128((simde__m128i*)ctx.v33.s32, simde_mm_cvtepi16_epi32(simde_mm_load_si128((simde__m128i*)ctx.v43.s16)));
	// addi r6,r1,544
	ctx.r6.s64 = ctx.r1.s64 + 544;
	// vupkhsb128 v63,v41,v96
	simde_mm_store_si128((simde__m128i*)ctx.v63.s32, simde_mm_cvtepi16_epi32(simde_mm_unpackhi_epi64(simde_mm_load_si128((simde__m128i*)ctx.v41.s16), simde_mm_load_si128((simde__m128i*)ctx.v41.s16))));
	// vcsxwfp128 v62,v48,0
	simde_mm_store_ps(ctx.v62.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v48.u32)));
	// vupklsb128 v61,v41,v96
	simde_mm_store_si128((simde__m128i*)ctx.v61.s32, simde_mm_cvtepi16_epi32(simde_mm_load_si128((simde__m128i*)ctx.v41.s16)));
	// vcsxwfp128 v60,v47,0
	simde_mm_store_ps(ctx.v60.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v47.u32)));
	// vcsxwfp128 v59,v46,0
	simde_mm_store_ps(ctx.v59.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v46.u32)));
	// lvx128 v56,r5,r10
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r5.u32 + ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcsxwfp128 v58,v44,0
	simde_mm_store_ps(ctx.v58.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v44.u32)));
	// lvx128 v47,r5,r28
	simde_mm_store_si128((simde__m128i*)ctx.v47.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r5.u32 + ctx.r28.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcsxwfp128 v57,v42,0
	simde_mm_store_ps(ctx.v57.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v42.u32)));
	// lvx128 v46,r5,r27
	simde_mm_store_si128((simde__m128i*)ctx.v46.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r5.u32 + ctx.r27.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcsxwfp128 v55,v40,0
	simde_mm_store_ps(ctx.v55.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v40.u32)));
	// lvx128 v45,r5,r9
	simde_mm_store_si128((simde__m128i*)ctx.v45.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r5.u32 + ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcsxwfp128 v54,v39,0
	simde_mm_store_ps(ctx.v54.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v39.u32)));
	// lvx128 v44,r5,r8
	simde_mm_store_si128((simde__m128i*)ctx.v44.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r5.u32 + ctx.r8.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcsxwfp128 v53,v37,0
	simde_mm_store_ps(ctx.v53.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v37.u32)));
	// addi r4,r1,560
	ctx.r4.s64 = ctx.r1.s64 + 560;
	// vcsxwfp128 v52,v35,0
	simde_mm_store_ps(ctx.v52.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v35.u32)));
	// addi r3,r1,576
	ctx.r3.s64 = ctx.r1.s64 + 576;
	// vcsxwfp128 v51,v33,0
	simde_mm_store_ps(ctx.v51.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v33.u32)));
	// addi r11,r1,592
	ctx.r11.s64 = ctx.r1.s64 + 592;
	// vcsxwfp128 v50,v63,0
	simde_mm_store_ps(ctx.v50.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v63.u32)));
	// addi r10,r1,608
	ctx.r10.s64 = ctx.r1.s64 + 608;
	// vcsxwfp128 v49,v61,0
	simde_mm_store_ps(ctx.v49.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v61.u32)));
	// addi r26,r1,624
	ctx.r26.s64 = ctx.r1.s64 + 624;
	// addi r25,r1,640
	ctx.r25.s64 = ctx.r1.s64 + 640;
	// vupkhsb128 v48,v56,v96
	simde_mm_store_si128((simde__m128i*)ctx.v48.s32, simde_mm_cvtepi16_epi32(simde_mm_unpackhi_epi64(simde_mm_load_si128((simde__m128i*)ctx.v56.s16), simde_mm_load_si128((simde__m128i*)ctx.v56.s16))));
	// addi r24,r1,656
	ctx.r24.s64 = ctx.r1.s64 + 656;
	// vupklsb128 v43,v56,v96
	simde_mm_store_si128((simde__m128i*)ctx.v43.s32, simde_mm_cvtepi16_epi32(simde_mm_load_si128((simde__m128i*)ctx.v56.s16)));
	// addi r28,r1,672
	ctx.r28.s64 = ctx.r1.s64 + 672;
	// vupkhsb128 v42,v47,v96
	simde_mm_store_si128((simde__m128i*)ctx.v42.s32, simde_mm_cvtepi16_epi32(simde_mm_unpackhi_epi64(simde_mm_load_si128((simde__m128i*)ctx.v47.s16), simde_mm_load_si128((simde__m128i*)ctx.v47.s16))));
	// addi r27,r1,688
	ctx.r27.s64 = ctx.r1.s64 + 688;
	// vupklsb128 v41,v47,v96
	simde_mm_store_si128((simde__m128i*)ctx.v41.s32, simde_mm_cvtepi16_epi32(simde_mm_load_si128((simde__m128i*)ctx.v47.s16)));
	// addi r9,r1,704
	ctx.r9.s64 = ctx.r1.s64 + 704;
	// vupkhsb128 v40,v46,v96
	simde_mm_store_si128((simde__m128i*)ctx.v40.s32, simde_mm_cvtepi16_epi32(simde_mm_unpackhi_epi64(simde_mm_load_si128((simde__m128i*)ctx.v46.s16), simde_mm_load_si128((simde__m128i*)ctx.v46.s16))));
	// addi r8,r1,720
	ctx.r8.s64 = ctx.r1.s64 + 720;
	// stvx128 v38,r0,r7
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r7.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v38.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r7,r1,736
	ctx.r7.s64 = ctx.r1.s64 + 736;
	// stvx128 v36,r0,r6
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r6.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v36.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r6,r1,752
	ctx.r6.s64 = ctx.r1.s64 + 752;
	// vupklsb128 v39,v46,v96
	simde_mm_store_si128((simde__m128i*)ctx.v39.s32, simde_mm_cvtepi16_epi32(simde_mm_load_si128((simde__m128i*)ctx.v46.s16)));
	// addi r23,r1,768
	ctx.r23.s64 = ctx.r1.s64 + 768;
	// stvx128 v34,r0,r4
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r4.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v34.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r22,432
	ctx.r22.s64 = 432;
	// vupkhsb128 v38,v45,v96
	simde_mm_store_si128((simde__m128i*)ctx.v38.s32, simde_mm_cvtepi16_epi32(simde_mm_unpackhi_epi64(simde_mm_load_si128((simde__m128i*)ctx.v45.s16), simde_mm_load_si128((simde__m128i*)ctx.v45.s16))));
	// addi r4,r1,784
	ctx.r4.s64 = ctx.r1.s64 + 784;
	// stvx128 v32,r0,r3
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r3.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v32.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v62,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vupklsb128 v36,v45,v96
	simde_mm_store_si128((simde__m128i*)ctx.v36.s32, simde_mm_cvtepi16_epi32(simde_mm_load_si128((simde__m128i*)ctx.v45.s16)));
	// stvx128 v60,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vupkhsb128 v35,v44,v96
	simde_mm_store_si128((simde__m128i*)ctx.v35.s32, simde_mm_cvtepi16_epi32(simde_mm_unpackhi_epi64(simde_mm_load_si128((simde__m128i*)ctx.v44.s16), simde_mm_load_si128((simde__m128i*)ctx.v44.s16))));
	// stvx128 v59,r0,r26
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r26.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vupklsb128 v34,v44,v96
	simde_mm_store_si128((simde__m128i*)ctx.v34.s32, simde_mm_cvtepi16_epi32(simde_mm_load_si128((simde__m128i*)ctx.v44.s16)));
	// lvx128 v37,r5,r22
	simde_mm_store_si128((simde__m128i*)ctx.v37.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r5.u32 + ctx.r22.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcsxwfp128 v33,v48,0
	simde_mm_store_ps(ctx.v33.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v48.u32)));
	// stvx128 v58,r0,r25
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r25.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v58.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v57,r0,r24
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r24.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v57.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v55,r0,r28
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r28.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v55.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v54,r0,r27
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r27.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v54.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v53,r0,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v53.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v52,r0,r8
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v52.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v51,r0,r7
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r7.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v51.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v50,r0,r6
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r6.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v50.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v49,r0,r23
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r23.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v49.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r3,448
	ctx.r3.s64 = 448;
	// vcsxwfp128 v62,v43,0
	simde_mm_store_ps(ctx.v62.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v43.u32)));
	// vcsxwfp128 v61,v42,0
	simde_mm_store_ps(ctx.v61.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v42.u32)));
	// li r11,464
	ctx.r11.s64 = 464;
	// li r10,480
	ctx.r10.s64 = 480;
	// vcsxwfp128 v60,v41,0
	simde_mm_store_ps(ctx.v60.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v41.u32)));
	// li r9,496
	ctx.r9.s64 = 496;
	// vupkhsb128 v32,v37,v96
	simde_mm_store_si128((simde__m128i*)ctx.v32.s32, simde_mm_cvtepi16_epi32(simde_mm_unpackhi_epi64(simde_mm_load_si128((simde__m128i*)ctx.v37.s16), simde_mm_load_si128((simde__m128i*)ctx.v37.s16))));
	// li r8,512
	ctx.r8.s64 = 512;
	// vupklsb128 v63,v37,v96
	simde_mm_store_si128((simde__m128i*)ctx.v63.s32, simde_mm_cvtepi16_epi32(simde_mm_load_si128((simde__m128i*)ctx.v37.s16)));
	// lvx128 v58,r5,r3
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r5.u32 + ctx.r3.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r7,528
	ctx.r7.s64 = 528;
	// li r6,544
	ctx.r6.s64 = 544;
	// vcsxwfp128 v59,v40,0
	simde_mm_store_ps(ctx.v59.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v40.u32)));
	// li r3,560
	ctx.r3.s64 = 560;
	// vupkhsb128 v55,v58,v96
	simde_mm_store_si128((simde__m128i*)ctx.v55.s32, simde_mm_cvtepi16_epi32(simde_mm_unpackhi_epi64(simde_mm_load_si128((simde__m128i*)ctx.v58.s16), simde_mm_load_si128((simde__m128i*)ctx.v58.s16))));
	// li r28,576
	ctx.r28.s64 = 576;
	// vupklsb128 v53,v58,v96
	simde_mm_store_si128((simde__m128i*)ctx.v53.s32, simde_mm_cvtepi16_epi32(simde_mm_load_si128((simde__m128i*)ctx.v58.s16)));
	// addi r27,r1,800
	ctx.r27.s64 = ctx.r1.s64 + 800;
	// vcsxwfp128 v57,v39,0
	simde_mm_store_ps(ctx.v57.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v39.u32)));
	// addi r26,r1,816
	ctx.r26.s64 = ctx.r1.s64 + 816;
	// lvx128 v46,r5,r11
	simde_mm_store_si128((simde__m128i*)ctx.v46.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r5.u32 + ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v45,r5,r10
	simde_mm_store_si128((simde__m128i*)ctx.v45.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r5.u32 + ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,832
	ctx.r11.s64 = ctx.r1.s64 + 832;
	// lvx128 v44,r5,r9
	simde_mm_store_si128((simde__m128i*)ctx.v44.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r5.u32 + ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r10,r1,848
	ctx.r10.s64 = ctx.r1.s64 + 848;
	// lvx128 v43,r5,r8
	simde_mm_store_si128((simde__m128i*)ctx.v43.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r5.u32 + ctx.r8.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r9,r1,864
	ctx.r9.s64 = ctx.r1.s64 + 864;
	// lvx128 v42,r5,r7
	simde_mm_store_si128((simde__m128i*)ctx.v42.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r5.u32 + ctx.r7.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r8,r1,880
	ctx.r8.s64 = ctx.r1.s64 + 880;
	// lvx128 v41,r5,r6
	simde_mm_store_si128((simde__m128i*)ctx.v41.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r5.u32 + ctx.r6.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r7,r1,896
	ctx.r7.s64 = ctx.r1.s64 + 896;
	// lvx128 v40,r5,r3
	simde_mm_store_si128((simde__m128i*)ctx.v40.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r5.u32 + ctx.r3.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r6,r1,912
	ctx.r6.s64 = ctx.r1.s64 + 912;
	// lvx128 v39,r5,r28
	simde_mm_store_si128((simde__m128i*)ctx.v39.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r5.u32 + ctx.r28.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r1,928
	ctx.r3.s64 = ctx.r1.s64 + 928;
	// addi r28,r1,944
	ctx.r28.s64 = ctx.r1.s64 + 944;
	// vcsxwfp128 v56,v38,0
	simde_mm_store_ps(ctx.v56.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v38.u32)));
	// vcsxwfp128 v54,v36,0
	simde_mm_store_ps(ctx.v54.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v36.u32)));
	// stvx128 v33,r0,r4
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r4.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v33.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcsxwfp128 v52,v35,0
	simde_mm_store_ps(ctx.v52.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v35.u32)));
	// addi r4,r1,960
	ctx.r4.s64 = ctx.r1.s64 + 960;
	// vcsxwfp128 v51,v34,0
	simde_mm_store_ps(ctx.v51.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v34.u32)));
	// stvx128 v62,r0,r27
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r27.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcsxwfp128 v50,v32,0
	simde_mm_store_ps(ctx.v50.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v32.u32)));
	// addi r27,r1,976
	ctx.r27.s64 = ctx.r1.s64 + 976;
	// vcsxwfp128 v49,v63,0
	simde_mm_store_ps(ctx.v49.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v63.u32)));
	// stvx128 v61,r0,r26
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r26.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcsxwfp128 v48,v55,0
	simde_mm_store_ps(ctx.v48.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v55.u32)));
	// addi r26,r1,992
	ctx.r26.s64 = ctx.r1.s64 + 992;
	// vcsxwfp128 v47,v53,0
	simde_mm_store_ps(ctx.v47.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v53.u32)));
	// stvx128 v60,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,592
	ctx.r11.s64 = 592;
	// stvx128 v59,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v57,r0,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v57.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vupkhsb128 v38,v46,v96
	simde_mm_store_si128((simde__m128i*)ctx.v38.s32, simde_mm_cvtepi16_epi32(simde_mm_unpackhi_epi64(simde_mm_load_si128((simde__m128i*)ctx.v46.s16), simde_mm_load_si128((simde__m128i*)ctx.v46.s16))));
	// vupklsb128 v37,v46,v96
	simde_mm_store_si128((simde__m128i*)ctx.v37.s32, simde_mm_cvtepi16_epi32(simde_mm_load_si128((simde__m128i*)ctx.v46.s16)));
	// li r10,608
	ctx.r10.s64 = 608;
	// vupkhsb128 v36,v45,v96
	simde_mm_store_si128((simde__m128i*)ctx.v36.s32, simde_mm_cvtepi16_epi32(simde_mm_unpackhi_epi64(simde_mm_load_si128((simde__m128i*)ctx.v45.s16), simde_mm_load_si128((simde__m128i*)ctx.v45.s16))));
	// li r9,624
	ctx.r9.s64 = 624;
	// stvx128 v56,r0,r8
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v56.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vupklsb128 v35,v45,v96
	simde_mm_store_si128((simde__m128i*)ctx.v35.s32, simde_mm_cvtepi16_epi32(simde_mm_load_si128((simde__m128i*)ctx.v45.s16)));
	// lvx128 v34,r5,r11
	simde_mm_store_si128((simde__m128i*)ctx.v34.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r5.u32 + ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vupkhsb128 v33,v44,v96
	simde_mm_store_si128((simde__m128i*)ctx.v33.s32, simde_mm_cvtepi16_epi32(simde_mm_unpackhi_epi64(simde_mm_load_si128((simde__m128i*)ctx.v44.s16), simde_mm_load_si128((simde__m128i*)ctx.v44.s16))));
	// stvx128 v54,r0,r7
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r7.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v54.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vupklsb128 v32,v44,v96
	simde_mm_store_si128((simde__m128i*)ctx.v32.s32, simde_mm_cvtepi16_epi32(simde_mm_load_si128((simde__m128i*)ctx.v44.s16)));
	// stvx128 v52,r0,r6
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r6.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v52.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vupkhsb128 v63,v43,v96
	simde_mm_store_si128((simde__m128i*)ctx.v63.s32, simde_mm_cvtepi16_epi32(simde_mm_unpackhi_epi64(simde_mm_load_si128((simde__m128i*)ctx.v43.s16), simde_mm_load_si128((simde__m128i*)ctx.v43.s16))));
	// stvx128 v51,r0,r3
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r3.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v51.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vupklsb128 v62,v43,v96
	simde_mm_store_si128((simde__m128i*)ctx.v62.s32, simde_mm_cvtepi16_epi32(simde_mm_load_si128((simde__m128i*)ctx.v43.s16)));
	// stvx128 v50,r0,r28
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r28.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v50.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vupkhsb128 v61,v42,v96
	simde_mm_store_si128((simde__m128i*)ctx.v61.s32, simde_mm_cvtepi16_epi32(simde_mm_unpackhi_epi64(simde_mm_load_si128((simde__m128i*)ctx.v42.s16), simde_mm_load_si128((simde__m128i*)ctx.v42.s16))));
	// stvx128 v49,r0,r4
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r4.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v49.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vupklsb128 v60,v42,v96
	simde_mm_store_si128((simde__m128i*)ctx.v60.s32, simde_mm_cvtepi16_epi32(simde_mm_load_si128((simde__m128i*)ctx.v42.s16)));
	// stvx128 v48,r0,r27
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r27.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v48.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vupkhsb128 v59,v41,v96
	simde_mm_store_si128((simde__m128i*)ctx.v59.s32, simde_mm_cvtepi16_epi32(simde_mm_unpackhi_epi64(simde_mm_load_si128((simde__m128i*)ctx.v41.s16), simde_mm_load_si128((simde__m128i*)ctx.v41.s16))));
	// stvx128 v47,r0,r26
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r26.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v47.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vupklsb128 v58,v41,v96
	simde_mm_store_si128((simde__m128i*)ctx.v58.s32, simde_mm_cvtepi16_epi32(simde_mm_load_si128((simde__m128i*)ctx.v41.s16)));
	// vupkhsb128 v57,v40,v96
	simde_mm_store_si128((simde__m128i*)ctx.v57.s32, simde_mm_cvtepi16_epi32(simde_mm_unpackhi_epi64(simde_mm_load_si128((simde__m128i*)ctx.v40.s16), simde_mm_load_si128((simde__m128i*)ctx.v40.s16))));
	// vupklsb128 v56,v40,v96
	simde_mm_store_si128((simde__m128i*)ctx.v56.s32, simde_mm_cvtepi16_epi32(simde_mm_load_si128((simde__m128i*)ctx.v40.s16)));
	// vupkhsb128 v55,v39,v96
	simde_mm_store_si128((simde__m128i*)ctx.v55.s32, simde_mm_cvtepi16_epi32(simde_mm_unpackhi_epi64(simde_mm_load_si128((simde__m128i*)ctx.v39.s16), simde_mm_load_si128((simde__m128i*)ctx.v39.s16))));
	// lvx128 v54,r5,r10
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r5.u32 + ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vupklsb128 v53,v39,v96
	simde_mm_store_si128((simde__m128i*)ctx.v53.s32, simde_mm_cvtepi16_epi32(simde_mm_load_si128((simde__m128i*)ctx.v39.s16)));
	// lvx128 v52,r5,r9
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r5.u32 + ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vupkhsb128 v51,v34,v96
	simde_mm_store_si128((simde__m128i*)ctx.v51.s32, simde_mm_cvtepi16_epi32(simde_mm_unpackhi_epi64(simde_mm_load_si128((simde__m128i*)ctx.v34.s16), simde_mm_load_si128((simde__m128i*)ctx.v34.s16))));
	// vupklsb128 v50,v34,v96
	simde_mm_store_si128((simde__m128i*)ctx.v50.s32, simde_mm_cvtepi16_epi32(simde_mm_load_si128((simde__m128i*)ctx.v34.s16)));
	// vcsxwfp128 v49,v38,0
	simde_mm_store_ps(ctx.v49.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v38.u32)));
	// vupkhsb128 v48,v54,v96
	simde_mm_store_si128((simde__m128i*)ctx.v48.s32, simde_mm_cvtepi16_epi32(simde_mm_unpackhi_epi64(simde_mm_load_si128((simde__m128i*)ctx.v54.s16), simde_mm_load_si128((simde__m128i*)ctx.v54.s16))));
	// vcsxwfp128 v47,v37,0
	simde_mm_store_ps(ctx.v47.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v37.u32)));
	// vupklsb128 v46,v54,v96
	simde_mm_store_si128((simde__m128i*)ctx.v46.s32, simde_mm_cvtepi16_epi32(simde_mm_load_si128((simde__m128i*)ctx.v54.s16)));
	// vcsxwfp128 v45,v36,0
	simde_mm_store_ps(ctx.v45.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v36.u32)));
	// vupkhsb128 v44,v52,v96
	simde_mm_store_si128((simde__m128i*)ctx.v44.s32, simde_mm_cvtepi16_epi32(simde_mm_unpackhi_epi64(simde_mm_load_si128((simde__m128i*)ctx.v52.s16), simde_mm_load_si128((simde__m128i*)ctx.v52.s16))));
	// vcsxwfp128 v43,v35,0
	simde_mm_store_ps(ctx.v43.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v35.u32)));
	// vupklsb128 v42,v52,v96
	simde_mm_store_si128((simde__m128i*)ctx.v42.s32, simde_mm_cvtepi16_epi32(simde_mm_load_si128((simde__m128i*)ctx.v52.s16)));
	// vcsxwfp128 v41,v33,0
	simde_mm_store_ps(ctx.v41.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v33.u32)));
	// vcsxwfp128 v40,v32,0
	simde_mm_store_ps(ctx.v40.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v32.u32)));
	// addi r8,r1,1008
	ctx.r8.s64 = ctx.r1.s64 + 1008;
	// vcsxwfp128 v39,v63,0
	simde_mm_store_ps(ctx.v39.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v63.u32)));
	// addi r7,r1,1024
	ctx.r7.s64 = ctx.r1.s64 + 1024;
	// vcsxwfp128 v38,v62,0
	simde_mm_store_ps(ctx.v38.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v62.u32)));
	// addi r6,r1,1040
	ctx.r6.s64 = ctx.r1.s64 + 1040;
	// vcsxwfp128 v37,v61,0
	simde_mm_store_ps(ctx.v37.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v61.u32)));
	// addi r5,r1,1056
	ctx.r5.s64 = ctx.r1.s64 + 1056;
	// vcsxwfp128 v36,v60,0
	simde_mm_store_ps(ctx.v36.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v60.u32)));
	// addi r4,r1,1072
	ctx.r4.s64 = ctx.r1.s64 + 1072;
	// vcsxwfp128 v35,v59,0
	simde_mm_store_ps(ctx.v35.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v59.u32)));
	// addi r3,r1,1088
	ctx.r3.s64 = ctx.r1.s64 + 1088;
	// vcsxwfp128 v34,v58,0
	simde_mm_store_ps(ctx.v34.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v58.u32)));
	// addi r11,r1,1104
	ctx.r11.s64 = ctx.r1.s64 + 1104;
	// vcsxwfp128 v33,v57,0
	simde_mm_store_ps(ctx.v33.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v57.u32)));
	// addi r10,r1,1120
	ctx.r10.s64 = ctx.r1.s64 + 1120;
	// vcsxwfp128 v32,v56,0
	simde_mm_store_ps(ctx.v32.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v56.u32)));
	// addi r9,r1,1136
	ctx.r9.s64 = ctx.r1.s64 + 1136;
	// vcsxwfp128 v63,v55,0
	simde_mm_store_ps(ctx.v63.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v55.u32)));
	// addi r28,r1,1152
	ctx.r28.s64 = ctx.r1.s64 + 1152;
	// vcsxwfp128 v62,v53,0
	simde_mm_store_ps(ctx.v62.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v53.u32)));
	// addi r27,r1,1168
	ctx.r27.s64 = ctx.r1.s64 + 1168;
	// vcsxwfp128 v61,v51,0
	simde_mm_store_ps(ctx.v61.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v51.u32)));
	// addi r26,r1,1184
	ctx.r26.s64 = ctx.r1.s64 + 1184;
	// vcsxwfp128 v60,v50,0
	simde_mm_store_ps(ctx.v60.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v50.u32)));
	// addi r25,r1,1200
	ctx.r25.s64 = ctx.r1.s64 + 1200;
	// vcsxwfp128 v59,v48,0
	simde_mm_store_ps(ctx.v59.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v48.u32)));
	// addi r24,r1,1216
	ctx.r24.s64 = ctx.r1.s64 + 1216;
	// vcsxwfp128 v58,v46,0
	simde_mm_store_ps(ctx.v58.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v46.u32)));
	// addi r23,r1,1232
	ctx.r23.s64 = ctx.r1.s64 + 1232;
	// vcsxwfp128 v57,v44,0
	simde_mm_store_ps(ctx.v57.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v44.u32)));
	// addi r22,r1,1248
	ctx.r22.s64 = ctx.r1.s64 + 1248;
	// vcsxwfp128 v56,v42,0
	simde_mm_store_ps(ctx.v56.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v42.u32)));
	// addi r21,r1,1264
	ctx.r21.s64 = ctx.r1.s64 + 1264;
	// addi r20,r1,1280
	ctx.r20.s64 = ctx.r1.s64 + 1280;
	// stvx128 v49,r0,r8
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v49.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r19,r1,1296
	ctx.r19.s64 = ctx.r1.s64 + 1296;
	// stvx128 v47,r0,r7
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r7.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v47.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r18,r1,1312
	ctx.r18.s64 = ctx.r1.s64 + 1312;
	// stvx128 v45,r0,r6
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r6.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v45.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r17,r1,1328
	ctx.r17.s64 = ctx.r1.s64 + 1328;
	// stvx128 v43,r0,r5
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r5.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v43.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r16,r1,1344
	ctx.r16.s64 = ctx.r1.s64 + 1344;
	// stvx128 v41,r0,r4
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r4.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v41.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v40,r0,r3
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r3.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v40.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r8,r1,1360
	ctx.r8.s64 = ctx.r1.s64 + 1360;
	// stvx128 v39,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v39.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r7,320
	ctx.r7.s64 = 320;
	// stvx128 v38,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v38.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// stvx128 v37,r0,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v37.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stvx128 v36,r0,r28
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r28.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v36.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r1,2640
	ctx.r4.s64 = ctx.r1.s64 + 2640;
	// stvx128 v35,r0,r27
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r27.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v35.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r1,5200
	ctx.r3.s64 = ctx.r1.s64 + 5200;
	// stvx128 v34,r0,r26
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r26.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v34.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v33,r0,r25
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r25.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v33.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v32,r0,r24
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r24.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v32.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r23
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r23.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v62,r0,r22
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r22.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v61,r0,r21
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r21.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v60,r0,r20
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r20.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v59,r0,r19
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r19.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v58,r0,r18
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r18.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v58.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v57,r0,r17
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r17.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v57.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v56,r0,r16
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r16.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v56.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x832cd9b0
	ctx.lr = 0x832CD25C;
	sub_832CD9B0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x832cd27c
	if (!cr6.eq) goto loc_832CD27C;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// addi r6,r1,1360
	ctx.r6.s64 = ctx.r1.s64 + 1360;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r31,640
	ctx.r3.s64 = ctx.r31.s64 + 640;
	// bl 0x832ce760
	ctx.lr = 0x832CD27C;
	sub_832CE760(ctx, base);
loc_832CD27C:
	// addi r1,r1,7904
	ctx.r1.s64 = ctx.r1.s64 + 7904;
	// b 0x831cdb08
	__restgprlr_16(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832CD284"))) PPC_WEAK_FUNC(sub_832CD284);
PPC_FUNC_IMPL(__imp__sub_832CD284) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832CD288"))) PPC_WEAK_FUNC(sub_832CD288);
PPC_FUNC_IMPL(__imp__sub_832CD288) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdac4
	ctx.lr = 0x832CD290;
	__savegprlr_19(ctx, base);
	// ld r12,-4096(r1)
	ctx.r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -4096);
	// stwu r1,-7872(r1)
	ea = -7872 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// cmplwi cr6,r4,1
	cr6.compare<uint32_t>(ctx.r4.u32, 1, xer);
	// blt cr6,0x832cd2d0
	if (cr6.lt) goto loc_832CD2D0;
	// beq cr6,0x832cd2c8
	if (cr6.eq) goto loc_832CD2C8;
	// cmplwi cr6,r4,3
	cr6.compare<uint32_t>(ctx.r4.u32, 3, xer);
	// blt cr6,0x832cd2c0
	if (cr6.lt) goto loc_832CD2C0;
	// li r3,3
	ctx.r3.s64 = 3;
	// addi r1,r1,7872
	ctx.r1.s64 = ctx.r1.s64 + 7872;
	// b 0x831cdb14
	__restgprlr_19(ctx, base);
	return;
loc_832CD2C0:
	// li r11,32000
	ctx.r11.s64 = 32000;
	// b 0x832cd2d4
	goto loc_832CD2D4;
loc_832CD2C8:
	// li r11,24000
	ctx.r11.s64 = 24000;
	// b 0x832cd2d4
	goto loc_832CD2D4;
loc_832CD2D0:
	// li r11,16000
	ctx.r11.s64 = 16000;
loc_832CD2D4:
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// addi r7,r1,1360
	ctx.r7.s64 = ctx.r1.s64 + 1360;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r30,640
	ctx.r3.s64 = ctx.r30.s64 + 640;
	// bl 0x832cfaa0
	ctx.lr = 0x832CD2EC;
	sub_832CFAA0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x832cd8ac
	if (!cr6.eq) goto loc_832CD8AC;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// li r7,320
	ctx.r7.s64 = 320;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r5,r1,1360
	ctx.r5.s64 = ctx.r1.s64 + 1360;
	// addi r4,r1,2640
	ctx.r4.s64 = ctx.r1.s64 + 2640;
	// addi r3,r1,5200
	ctx.r3.s64 = ctx.r1.s64 + 5200;
	// bl 0x832cdc18
	ctx.lr = 0x832CD310;
	sub_832CDC18(ctx, base);
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// addi r7,r1,160
	ctx.r7.s64 = ctx.r1.s64 + 160;
	// addi r6,r1,144
	ctx.r6.s64 = ctx.r1.s64 + 144;
	// lvx128 v63,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v62,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r5,r1,192
	ctx.r5.s64 = ctx.r1.s64 + 192;
	// lvx128 v60,r0,r9
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// lvx128 v58,r0,r8
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,224
	ctx.r11.s64 = ctx.r1.s64 + 224;
	// lvx128 v56,r0,r7
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r7.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r10,r1,208
	ctx.r10.s64 = ctx.r1.s64 + 208;
	// lvx128 v54,r0,r6
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r6.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r9,r1,256
	ctx.r9.s64 = ctx.r1.s64 + 256;
	// vcfpsxws128 v61,v63,0
	ctx.fpscr.enableFlushMode();
	simde_mm_store_si128((simde__m128i*)ctx.v61.s32, simde_mm_vctsxs(simde_mm_load_ps(ctx.v63.f32)));
	// lvx128 v51,r0,r5
	simde_mm_store_si128((simde__m128i*)ctx.v51.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r5.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcfpsxws128 v59,v62,0
	simde_mm_store_si128((simde__m128i*)ctx.v59.s32, simde_mm_vctsxs(simde_mm_load_ps(ctx.v62.f32)));
	// lvx128 v50,r0,r4
	simde_mm_store_si128((simde__m128i*)ctx.v50.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r4.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcfpsxws128 v57,v60,0
	simde_mm_store_si128((simde__m128i*)ctx.v57.s32, simde_mm_vctsxs(simde_mm_load_ps(ctx.v60.f32)));
	// lvx128 v49,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v49.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcfpsxws128 v55,v58,0
	simde_mm_store_si128((simde__m128i*)ctx.v55.s32, simde_mm_vctsxs(simde_mm_load_ps(ctx.v58.f32)));
	// lvx128 v48,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v48.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcfpsxws128 v53,v56,0
	simde_mm_store_si128((simde__m128i*)ctx.v53.s32, simde_mm_vctsxs(simde_mm_load_ps(ctx.v56.f32)));
	// lvx128 v47,r0,r9
	simde_mm_store_si128((simde__m128i*)ctx.v47.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcfpsxws128 v52,v54,0
	simde_mm_store_si128((simde__m128i*)ctx.v52.s32, simde_mm_vctsxs(simde_mm_load_ps(ctx.v54.f32)));
	// addi r8,r1,240
	ctx.r8.s64 = ctx.r1.s64 + 240;
	// addi r7,r1,288
	ctx.r7.s64 = ctx.r1.s64 + 288;
	// vcfpsxws128 v38,v51,0
	simde_mm_store_si128((simde__m128i*)ctx.v38.s32, simde_mm_vctsxs(simde_mm_load_ps(ctx.v51.f32)));
	// addi r6,r1,272
	ctx.r6.s64 = ctx.r1.s64 + 272;
	// vcfpsxws128 v37,v50,0
	simde_mm_store_si128((simde__m128i*)ctx.v37.s32, simde_mm_vctsxs(simde_mm_load_ps(ctx.v50.f32)));
	// addi r5,r1,320
	ctx.r5.s64 = ctx.r1.s64 + 320;
	// vcfpsxws128 v36,v49,0
	simde_mm_store_si128((simde__m128i*)ctx.v36.s32, simde_mm_vctsxs(simde_mm_load_ps(ctx.v49.f32)));
	// addi r4,r1,304
	ctx.r4.s64 = ctx.r1.s64 + 304;
	// vcfpsxws128 v35,v48,0
	simde_mm_store_si128((simde__m128i*)ctx.v35.s32, simde_mm_vctsxs(simde_mm_load_ps(ctx.v48.f32)));
	// addi r11,r1,352
	ctx.r11.s64 = ctx.r1.s64 + 352;
	// lvx128 v46,r0,r8
	simde_mm_store_si128((simde__m128i*)ctx.v46.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r10,r1,336
	ctx.r10.s64 = ctx.r1.s64 + 336;
	// lvx128 v45,r0,r7
	simde_mm_store_si128((simde__m128i*)ctx.v45.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r7.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r9,r1,384
	ctx.r9.s64 = ctx.r1.s64 + 384;
	// lvx128 v44,r0,r6
	simde_mm_store_si128((simde__m128i*)ctx.v44.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r6.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v43,r0,r5
	simde_mm_store_si128((simde__m128i*)ctx.v43.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r5.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vpkswss128 v62,v59,v61
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_packs_epi32(simde_mm_load_si128((simde__m128i*)ctx.v61.s32), simde_mm_load_si128((simde__m128i*)ctx.v59.s32)));
	// lvx128 v42,r0,r4
	simde_mm_store_si128((simde__m128i*)ctx.v42.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r4.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r8,16
	ctx.r8.s64 = 16;
	// lvx128 v41,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v41.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vpkswss128 v59,v55,v57
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_packs_epi32(simde_mm_load_si128((simde__m128i*)ctx.v57.s32), simde_mm_load_si128((simde__m128i*)ctx.v55.s32)));
	// lvx128 v40,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v40.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r7,32
	ctx.r7.s64 = 32;
	// lvx128 v39,r0,r9
	simde_mm_store_si128((simde__m128i*)ctx.v39.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,64
	ctx.r5.s64 = 64;
	// vcfpsxws128 v34,v47,0
	simde_mm_store_si128((simde__m128i*)ctx.v34.s32, simde_mm_vctsxs(simde_mm_load_ps(ctx.v47.f32)));
	// li r4,80
	ctx.r4.s64 = 80;
	// vcfpsxws128 v33,v46,0
	simde_mm_store_si128((simde__m128i*)ctx.v33.s32, simde_mm_vctsxs(simde_mm_load_ps(ctx.v46.f32)));
	// li r11,96
	ctx.r11.s64 = 96;
	// vcfpsxws128 v32,v45,0
	simde_mm_store_si128((simde__m128i*)ctx.v32.s32, simde_mm_vctsxs(simde_mm_load_ps(ctx.v45.f32)));
	// li r10,112
	ctx.r10.s64 = 112;
	// vcfpsxws128 v63,v44,0
	simde_mm_store_si128((simde__m128i*)ctx.v63.s32, simde_mm_vctsxs(simde_mm_load_ps(ctx.v44.f32)));
	// li r9,128
	ctx.r9.s64 = 128;
	// vcfpsxws128 v61,v43,0
	simde_mm_store_si128((simde__m128i*)ctx.v61.s32, simde_mm_vctsxs(simde_mm_load_ps(ctx.v43.f32)));
	// li r30,144
	ctx.r30.s64 = 144;
	// vcfpsxws128 v60,v42,0
	simde_mm_store_si128((simde__m128i*)ctx.v60.s32, simde_mm_vctsxs(simde_mm_load_ps(ctx.v42.f32)));
	// li r29,160
	ctx.r29.s64 = 160;
	// vcfpsxws128 v58,v41,0
	simde_mm_store_si128((simde__m128i*)ctx.v58.s32, simde_mm_vctsxs(simde_mm_load_ps(ctx.v41.f32)));
	// li r28,176
	ctx.r28.s64 = 176;
	// vpkswss128 v57,v52,v53
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_packs_epi32(simde_mm_load_si128((simde__m128i*)ctx.v53.s32), simde_mm_load_si128((simde__m128i*)ctx.v52.s32)));
	// li r27,192
	ctx.r27.s64 = 192;
	// vcfpsxws128 v56,v40,0
	simde_mm_store_si128((simde__m128i*)ctx.v56.s32, simde_mm_vctsxs(simde_mm_load_ps(ctx.v40.f32)));
	// li r26,208
	ctx.r26.s64 = 208;
	// vcfpsxws128 v55,v39,0
	simde_mm_store_si128((simde__m128i*)ctx.v55.s32, simde_mm_vctsxs(simde_mm_load_ps(ctx.v39.f32)));
	// li r25,224
	ctx.r25.s64 = 224;
	// addi r24,r1,368
	ctx.r24.s64 = ctx.r1.s64 + 368;
	// vpkswss128 v54,v37,v38
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, simde_mm_packs_epi32(simde_mm_load_si128((simde__m128i*)ctx.v38.s32), simde_mm_load_si128((simde__m128i*)ctx.v37.s32)));
	// addi r23,r1,416
	ctx.r23.s64 = ctx.r1.s64 + 416;
	// vpkswss128 v53,v35,v36
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, simde_mm_packs_epi32(simde_mm_load_si128((simde__m128i*)ctx.v36.s32), simde_mm_load_si128((simde__m128i*)ctx.v35.s32)));
	// addi r22,r1,400
	ctx.r22.s64 = ctx.r1.s64 + 400;
	// vpkswss128 v52,v33,v34
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, simde_mm_packs_epi32(simde_mm_load_si128((simde__m128i*)ctx.v34.s32), simde_mm_load_si128((simde__m128i*)ctx.v33.s32)));
	// addi r21,r1,448
	ctx.r21.s64 = ctx.r1.s64 + 448;
	// vpkswss128 v51,v63,v32
	simde_mm_store_si128((simde__m128i*)ctx.v51.u8, simde_mm_packs_epi32(simde_mm_load_si128((simde__m128i*)ctx.v32.s32), simde_mm_load_si128((simde__m128i*)ctx.v63.s32)));
	// addi r20,r1,432
	ctx.r20.s64 = ctx.r1.s64 + 432;
	// vpkswss128 v50,v60,v61
	simde_mm_store_si128((simde__m128i*)ctx.v50.u8, simde_mm_packs_epi32(simde_mm_load_si128((simde__m128i*)ctx.v61.s32), simde_mm_load_si128((simde__m128i*)ctx.v60.s32)));
	// lvx128 v49,r0,r24
	simde_mm_store_si128((simde__m128i*)ctx.v49.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r24.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r19,r1,480
	ctx.r19.s64 = ctx.r1.s64 + 480;
	// lvx128 v48,r0,r23
	simde_mm_store_si128((simde__m128i*)ctx.v48.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r23.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r24,r1,464
	ctx.r24.s64 = ctx.r1.s64 + 464;
	// lvx128 v47,r0,r22
	simde_mm_store_si128((simde__m128i*)ctx.v47.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r22.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r23,r1,512
	ctx.r23.s64 = ctx.r1.s64 + 512;
	// addi r22,r1,496
	ctx.r22.s64 = ctx.r1.s64 + 496;
	// lvx128 v46,r0,r21
	simde_mm_store_si128((simde__m128i*)ctx.v46.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r21.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v45,r0,r20
	simde_mm_store_si128((simde__m128i*)ctx.v45.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r20.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcfpsxws128 v42,v49,0
	simde_mm_store_si128((simde__m128i*)ctx.v42.s32, simde_mm_vctsxs(simde_mm_load_ps(ctx.v49.f32)));
	// lvx128 v44,r0,r19
	simde_mm_store_si128((simde__m128i*)ctx.v44.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r19.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcfpsxws128 v37,v46,0
	simde_mm_store_si128((simde__m128i*)ctx.v37.s32, simde_mm_vctsxs(simde_mm_load_ps(ctx.v46.f32)));
	// lvx128 v43,r0,r24
	simde_mm_store_si128((simde__m128i*)ctx.v43.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r24.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcfpsxws128 v35,v45,0
	simde_mm_store_si128((simde__m128i*)ctx.v35.s32, simde_mm_vctsxs(simde_mm_load_ps(ctx.v45.f32)));
	// lvx128 v41,r0,r23
	simde_mm_store_si128((simde__m128i*)ctx.v41.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r23.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r21,r1,544
	ctx.r21.s64 = ctx.r1.s64 + 544;
	// lvx128 v39,r0,r22
	simde_mm_store_si128((simde__m128i*)ctx.v39.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r22.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r20,r1,528
	ctx.r20.s64 = ctx.r1.s64 + 528;
	// vcfpsxws128 v40,v48,0
	simde_mm_store_si128((simde__m128i*)ctx.v40.s32, simde_mm_vctsxs(simde_mm_load_ps(ctx.v48.f32)));
	// addi r24,r1,576
	ctx.r24.s64 = ctx.r1.s64 + 576;
	// vcfpsxws128 v38,v47,0
	simde_mm_store_si128((simde__m128i*)ctx.v38.s32, simde_mm_vctsxs(simde_mm_load_ps(ctx.v47.f32)));
	// addi r23,r1,560
	ctx.r23.s64 = ctx.r1.s64 + 560;
	// vcfpsxws128 v33,v44,0
	simde_mm_store_si128((simde__m128i*)ctx.v33.s32, simde_mm_vctsxs(simde_mm_load_ps(ctx.v44.f32)));
	// addi r22,r1,608
	ctx.r22.s64 = ctx.r1.s64 + 608;
	// vcfpsxws128 v32,v43,0
	simde_mm_store_si128((simde__m128i*)ctx.v32.s32, simde_mm_vctsxs(simde_mm_load_ps(ctx.v43.f32)));
	// lvx128 v36,r0,r21
	simde_mm_store_si128((simde__m128i*)ctx.v36.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r21.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcfpsxws128 v63,v41,0
	simde_mm_store_si128((simde__m128i*)ctx.v63.s32, simde_mm_vctsxs(simde_mm_load_ps(ctx.v41.f32)));
	// lvx128 v34,r0,r20
	simde_mm_store_si128((simde__m128i*)ctx.v34.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r20.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcfpsxws128 v61,v39,0
	simde_mm_store_si128((simde__m128i*)ctx.v61.s32, simde_mm_vctsxs(simde_mm_load_ps(ctx.v39.f32)));
	// addi r21,r1,592
	ctx.r21.s64 = ctx.r1.s64 + 592;
	// vcfpsxws128 v60,v36,0
	simde_mm_store_si128((simde__m128i*)ctx.v60.s32, simde_mm_vctsxs(simde_mm_load_ps(ctx.v36.f32)));
	// addi r20,r1,640
	ctx.r20.s64 = ctx.r1.s64 + 640;
	// vcfpsxws128 v49,v34,0
	simde_mm_store_si128((simde__m128i*)ctx.v49.s32, simde_mm_vctsxs(simde_mm_load_ps(ctx.v34.f32)));
	// vpkswss128 v46,v42,v55
	simde_mm_store_si128((simde__m128i*)ctx.v46.u8, simde_mm_packs_epi32(simde_mm_load_si128((simde__m128i*)ctx.v55.s32), simde_mm_load_si128((simde__m128i*)ctx.v42.s32)));
	// vpkswss128 v48,v56,v58
	simde_mm_store_si128((simde__m128i*)ctx.v48.u8, simde_mm_packs_epi32(simde_mm_load_si128((simde__m128i*)ctx.v58.s32), simde_mm_load_si128((simde__m128i*)ctx.v56.s32)));
	// addi r19,r1,624
	ctx.r19.s64 = ctx.r1.s64 + 624;
	// vpkswss128 v39,v35,v37
	simde_mm_store_si128((simde__m128i*)ctx.v39.u8, simde_mm_packs_epi32(simde_mm_load_si128((simde__m128i*)ctx.v37.s32), simde_mm_load_si128((simde__m128i*)ctx.v35.s32)));
	// lvx128 v47,r0,r24
	simde_mm_store_si128((simde__m128i*)ctx.v47.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r24.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v45,r0,r23
	simde_mm_store_si128((simde__m128i*)ctx.v45.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r23.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcfpsxws128 v43,v47,0
	simde_mm_store_si128((simde__m128i*)ctx.v43.s32, simde_mm_vctsxs(simde_mm_load_ps(ctx.v47.f32)));
	// lvx128 v44,r0,r22
	simde_mm_store_si128((simde__m128i*)ctx.v44.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r22.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r24,240
	ctx.r24.s64 = 240;
	// lvx128 v41,r0,r21
	simde_mm_store_si128((simde__m128i*)ctx.v41.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r21.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcfpsxws128 v37,v45,0
	simde_mm_store_si128((simde__m128i*)ctx.v37.s32, simde_mm_vctsxs(simde_mm_load_ps(ctx.v45.f32)));
	// vpkswss128 v42,v38,v40
	simde_mm_store_si128((simde__m128i*)ctx.v42.u8, simde_mm_packs_epi32(simde_mm_load_si128((simde__m128i*)ctx.v40.s32), simde_mm_load_si128((simde__m128i*)ctx.v38.s32)));
	// lvx128 v40,r0,r20
	simde_mm_store_si128((simde__m128i*)ctx.v40.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r20.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v59,r31,r8
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r31.u32 + ctx.r8.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r8,256
	ctx.r8.s64 = 256;
	// vpkswss128 v36,v32,v33
	simde_mm_store_si128((simde__m128i*)ctx.v36.u8, simde_mm_packs_epi32(simde_mm_load_si128((simde__m128i*)ctx.v33.s32), simde_mm_load_si128((simde__m128i*)ctx.v32.s32)));
	// stvx128 v57,r31,r7
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r31.u32 + ctx.r7.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v57.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v54,r31,r6
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r31.u32 + ctx.r6.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v54.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcfpsxws128 v34,v44,0
	simde_mm_store_si128((simde__m128i*)ctx.v34.s32, simde_mm_vctsxs(simde_mm_load_ps(ctx.v44.f32)));
	// vpkswss128 v35,v61,v63
	simde_mm_store_si128((simde__m128i*)ctx.v35.u8, simde_mm_packs_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.s32), simde_mm_load_si128((simde__m128i*)ctx.v61.s32)));
	// stvx128 v53,r31,r5
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r31.u32 + ctx.r5.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v53.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v38,r0,r19
	simde_mm_store_si128((simde__m128i*)ctx.v38.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r19.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r7,272
	ctx.r7.s64 = 272;
	// stvx128 v62,r0,r31
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r31.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vpkswss128 v33,v49,v60
	simde_mm_store_si128((simde__m128i*)ctx.v33.u8, simde_mm_packs_epi32(simde_mm_load_si128((simde__m128i*)ctx.v60.s32), simde_mm_load_si128((simde__m128i*)ctx.v49.s32)));
	// stvx128 v52,r31,r4
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r31.u32 + ctx.r4.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v52.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcfpsxws128 v32,v41,0
	simde_mm_store_si128((simde__m128i*)ctx.v32.s32, simde_mm_vctsxs(simde_mm_load_ps(ctx.v41.f32)));
	// stvx128 v51,r31,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r31.u32 + ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v51.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r6,288
	ctx.r6.s64 = 288;
	// stvx128 v50,r31,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r31.u32 + ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v50.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcfpsxws128 v63,v40,0
	simde_mm_store_si128((simde__m128i*)ctx.v63.s32, simde_mm_vctsxs(simde_mm_load_ps(ctx.v40.f32)));
	// stvx128 v48,r31,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r31.u32 + ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v48.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r5,304
	ctx.r5.s64 = 304;
	// stvx128 v46,r31,r30
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r31.u32 + ctx.r30.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v46.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v42,r31,r29
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r31.u32 + ctx.r29.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v42.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v39,r31,r28
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r31.u32 + ctx.r28.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v39.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v36,r31,r27
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r31.u32 + ctx.r27.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v36.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v35,r31,r26
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r31.u32 + ctx.r26.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v35.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r1,672
	ctx.r4.s64 = ctx.r1.s64 + 672;
	// vpkswss128 v60,v32,v34
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_packs_epi32(simde_mm_load_si128((simde__m128i*)ctx.v34.s32), simde_mm_load_si128((simde__m128i*)ctx.v32.s32)));
	// addi r11,r1,656
	ctx.r11.s64 = ctx.r1.s64 + 656;
	// vcfpsxws128 v62,v38,0
	simde_mm_store_si128((simde__m128i*)ctx.v62.s32, simde_mm_vctsxs(simde_mm_load_ps(ctx.v38.f32)));
	// addi r10,r1,704
	ctx.r10.s64 = ctx.r1.s64 + 704;
	// vpkswss128 v61,v37,v43
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_packs_epi32(simde_mm_load_si128((simde__m128i*)ctx.v43.s32), simde_mm_load_si128((simde__m128i*)ctx.v37.s32)));
	// addi r9,r1,688
	ctx.r9.s64 = ctx.r1.s64 + 688;
	// stvx128 v33,r31,r25
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r31.u32 + ctx.r25.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v33.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r30,r1,736
	ctx.r30.s64 = ctx.r1.s64 + 736;
	// lvx128 v59,r0,r4
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r4.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r29,r1,720
	ctx.r29.s64 = ctx.r1.s64 + 720;
	// lvx128 v58,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r1,768
	ctx.r4.s64 = ctx.r1.s64 + 768;
	// addi r11,r1,752
	ctx.r11.s64 = ctx.r1.s64 + 752;
	// lvx128 v56,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v54,r0,r9
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcfpsxws128 v55,v58,0
	simde_mm_store_si128((simde__m128i*)ctx.v55.s32, simde_mm_vctsxs(simde_mm_load_ps(ctx.v58.f32)));
	// lvx128 v52,r0,r30
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r30.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcfpsxws128 v57,v59,0
	simde_mm_store_si128((simde__m128i*)ctx.v57.s32, simde_mm_vctsxs(simde_mm_load_ps(ctx.v59.f32)));
	// lvx128 v50,r0,r29
	simde_mm_store_si128((simde__m128i*)ctx.v50.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r29.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r10,r1,800
	ctx.r10.s64 = ctx.r1.s64 + 800;
	// lvx128 v46,r0,r4
	simde_mm_store_si128((simde__m128i*)ctx.v46.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r4.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r9,r1,784
	ctx.r9.s64 = ctx.r1.s64 + 784;
	// lvx128 v45,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v45.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r30,r1,816
	ctx.r30.s64 = ctx.r1.s64 + 816;
	// stvx128 v60,r31,r8
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r31.u32 + ctx.r8.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r8,r1,832
	ctx.r8.s64 = ctx.r1.s64 + 832;
	// addi r4,r1,864
	ctx.r4.s64 = ctx.r1.s64 + 864;
	// vcfpsxws128 v53,v56,0
	simde_mm_store_si128((simde__m128i*)ctx.v53.s32, simde_mm_vctsxs(simde_mm_load_ps(ctx.v56.f32)));
	// addi r11,r1,848
	ctx.r11.s64 = ctx.r1.s64 + 848;
	// vcfpsxws128 v51,v54,0
	simde_mm_store_si128((simde__m128i*)ctx.v51.s32, simde_mm_vctsxs(simde_mm_load_ps(ctx.v54.f32)));
	// vcfpsxws128 v49,v52,0
	simde_mm_store_si128((simde__m128i*)ctx.v49.s32, simde_mm_vctsxs(simde_mm_load_ps(ctx.v52.f32)));
	// lvx128 v44,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v44.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcfpsxws128 v48,v50,0
	simde_mm_store_si128((simde__m128i*)ctx.v48.s32, simde_mm_vctsxs(simde_mm_load_ps(ctx.v50.f32)));
	// lvx128 v43,r0,r9
	simde_mm_store_si128((simde__m128i*)ctx.v43.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v42,r0,r8
	simde_mm_store_si128((simde__m128i*)ctx.v42.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r10,r1,896
	ctx.r10.s64 = ctx.r1.s64 + 896;
	// lvx128 v41,r0,r30
	simde_mm_store_si128((simde__m128i*)ctx.v41.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r30.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r9,r1,880
	ctx.r9.s64 = ctx.r1.s64 + 880;
	// lvx128 v40,r0,r4
	simde_mm_store_si128((simde__m128i*)ctx.v40.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r4.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r8,r1,928
	ctx.r8.s64 = ctx.r1.s64 + 928;
	// lvx128 v39,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v39.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r30,r1,912
	ctx.r30.s64 = ctx.r1.s64 + 912;
	// addi r4,r1,960
	ctx.r4.s64 = ctx.r1.s64 + 960;
	// vpkswss128 v57,v55,v57
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_packs_epi32(simde_mm_load_si128((simde__m128i*)ctx.v57.s32), simde_mm_load_si128((simde__m128i*)ctx.v55.s32)));
	// addi r11,r1,944
	ctx.r11.s64 = ctx.r1.s64 + 944;
	// lvx128 v38,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v38.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v37,r0,r9
	simde_mm_store_si128((simde__m128i*)ctx.v37.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vpkswss128 v47,v62,v63
	simde_mm_store_si128((simde__m128i*)ctx.v47.u8, simde_mm_packs_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.s32), simde_mm_load_si128((simde__m128i*)ctx.v62.s32)));
	// lvx128 v36,r0,r8
	simde_mm_store_si128((simde__m128i*)ctx.v36.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r10,320
	ctx.r10.s64 = 320;
	// lvx128 v35,r0,r30
	simde_mm_store_si128((simde__m128i*)ctx.v35.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r30.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r9,336
	ctx.r9.s64 = 336;
	// lvx128 v34,r0,r4
	simde_mm_store_si128((simde__m128i*)ctx.v34.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r4.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vpkswss128 v55,v51,v53
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, simde_mm_packs_epi32(simde_mm_load_si128((simde__m128i*)ctx.v53.s32), simde_mm_load_si128((simde__m128i*)ctx.v51.s32)));
	// lvx128 v33,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v33.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r8,352
	ctx.r8.s64 = 352;
	// vpkswss128 v53,v48,v49
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, simde_mm_packs_epi32(simde_mm_load_si128((simde__m128i*)ctx.v49.s32), simde_mm_load_si128((simde__m128i*)ctx.v48.s32)));
	// stvx128 v61,r31,r24
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r31.u32 + ctx.r24.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r4,368
	ctx.r4.s64 = 368;
	// vcfpsxws128 v32,v46,0
	simde_mm_store_si128((simde__m128i*)ctx.v32.s32, simde_mm_vctsxs(simde_mm_load_ps(ctx.v46.f32)));
	// li r11,384
	ctx.r11.s64 = 384;
	// vcfpsxws128 v63,v45,0
	simde_mm_store_si128((simde__m128i*)ctx.v63.s32, simde_mm_vctsxs(simde_mm_load_ps(ctx.v45.f32)));
	// li r30,400
	ctx.r30.s64 = 400;
	// vcfpsxws128 v62,v44,0
	simde_mm_store_si128((simde__m128i*)ctx.v62.s32, simde_mm_vctsxs(simde_mm_load_ps(ctx.v44.f32)));
	// li r29,416
	ctx.r29.s64 = 416;
	// vcfpsxws128 v61,v43,0
	simde_mm_store_si128((simde__m128i*)ctx.v61.s32, simde_mm_vctsxs(simde_mm_load_ps(ctx.v43.f32)));
	// li r28,432
	ctx.r28.s64 = 432;
	// vcfpsxws128 v60,v42,0
	simde_mm_store_si128((simde__m128i*)ctx.v60.s32, simde_mm_vctsxs(simde_mm_load_ps(ctx.v42.f32)));
	// li r27,448
	ctx.r27.s64 = 448;
	// vcfpsxws128 v59,v41,0
	simde_mm_store_si128((simde__m128i*)ctx.v59.s32, simde_mm_vctsxs(simde_mm_load_ps(ctx.v41.f32)));
	// li r26,464
	ctx.r26.s64 = 464;
	// vcfpsxws128 v58,v40,0
	simde_mm_store_si128((simde__m128i*)ctx.v58.s32, simde_mm_vctsxs(simde_mm_load_ps(ctx.v40.f32)));
	// li r25,480
	ctx.r25.s64 = 480;
	// vcfpsxws128 v56,v39,0
	simde_mm_store_si128((simde__m128i*)ctx.v56.s32, simde_mm_vctsxs(simde_mm_load_ps(ctx.v39.f32)));
	// vcfpsxws128 v54,v38,0
	simde_mm_store_si128((simde__m128i*)ctx.v54.s32, simde_mm_vctsxs(simde_mm_load_ps(ctx.v38.f32)));
	// vcfpsxws128 v52,v37,0
	simde_mm_store_si128((simde__m128i*)ctx.v52.s32, simde_mm_vctsxs(simde_mm_load_ps(ctx.v37.f32)));
	// vcfpsxws128 v51,v36,0
	simde_mm_store_si128((simde__m128i*)ctx.v51.s32, simde_mm_vctsxs(simde_mm_load_ps(ctx.v36.f32)));
	// vcfpsxws128 v50,v35,0
	simde_mm_store_si128((simde__m128i*)ctx.v50.s32, simde_mm_vctsxs(simde_mm_load_ps(ctx.v35.f32)));
	// vcfpsxws128 v49,v34,0
	simde_mm_store_si128((simde__m128i*)ctx.v49.s32, simde_mm_vctsxs(simde_mm_load_ps(ctx.v34.f32)));
	// vcfpsxws128 v48,v33,0
	simde_mm_store_si128((simde__m128i*)ctx.v48.s32, simde_mm_vctsxs(simde_mm_load_ps(ctx.v33.f32)));
	// addi r24,r1,992
	ctx.r24.s64 = ctx.r1.s64 + 992;
	// vpkswss128 v46,v63,v32
	simde_mm_store_si128((simde__m128i*)ctx.v46.u8, simde_mm_packs_epi32(simde_mm_load_si128((simde__m128i*)ctx.v32.s32), simde_mm_load_si128((simde__m128i*)ctx.v63.s32)));
	// addi r23,r1,976
	ctx.r23.s64 = ctx.r1.s64 + 976;
	// vpkswss128 v45,v61,v62
	simde_mm_store_si128((simde__m128i*)ctx.v45.u8, simde_mm_packs_epi32(simde_mm_load_si128((simde__m128i*)ctx.v62.s32), simde_mm_load_si128((simde__m128i*)ctx.v61.s32)));
	// addi r22,r1,1024
	ctx.r22.s64 = ctx.r1.s64 + 1024;
	// vpkswss128 v44,v59,v60
	simde_mm_store_si128((simde__m128i*)ctx.v44.u8, simde_mm_packs_epi32(simde_mm_load_si128((simde__m128i*)ctx.v60.s32), simde_mm_load_si128((simde__m128i*)ctx.v59.s32)));
	// addi r21,r1,1008
	ctx.r21.s64 = ctx.r1.s64 + 1008;
	// vpkswss128 v43,v56,v58
	simde_mm_store_si128((simde__m128i*)ctx.v43.u8, simde_mm_packs_epi32(simde_mm_load_si128((simde__m128i*)ctx.v58.s32), simde_mm_load_si128((simde__m128i*)ctx.v56.s32)));
	// addi r20,r1,1056
	ctx.r20.s64 = ctx.r1.s64 + 1056;
	// stvx128 v57,r31,r6
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r31.u32 + ctx.r6.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v57.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r19,r1,1040
	ctx.r19.s64 = ctx.r1.s64 + 1040;
	// lvx128 v41,r0,r24
	simde_mm_store_si128((simde__m128i*)ctx.v41.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r24.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v40,r0,r23
	simde_mm_store_si128((simde__m128i*)ctx.v40.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r23.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcfpsxws128 v39,v41,0
	simde_mm_store_si128((simde__m128i*)ctx.v39.s32, simde_mm_vctsxs(simde_mm_load_ps(ctx.v41.f32)));
	// lvx128 v38,r0,r22
	simde_mm_store_si128((simde__m128i*)ctx.v38.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r22.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcfpsxws128 v37,v40,0
	simde_mm_store_si128((simde__m128i*)ctx.v37.s32, simde_mm_vctsxs(simde_mm_load_ps(ctx.v40.f32)));
	// lvx128 v36,r0,r21
	simde_mm_store_si128((simde__m128i*)ctx.v36.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r21.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcfpsxws128 v35,v38,0
	simde_mm_store_si128((simde__m128i*)ctx.v35.s32, simde_mm_vctsxs(simde_mm_load_ps(ctx.v38.f32)));
	// lvx128 v34,r0,r20
	simde_mm_store_si128((simde__m128i*)ctx.v34.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r20.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcfpsxws128 v33,v36,0
	simde_mm_store_si128((simde__m128i*)ctx.v33.s32, simde_mm_vctsxs(simde_mm_load_ps(ctx.v36.f32)));
	// lvx128 v32,r0,r19
	simde_mm_store_si128((simde__m128i*)ctx.v32.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r19.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcfpsxws128 v63,v34,0
	simde_mm_store_si128((simde__m128i*)ctx.v63.s32, simde_mm_vctsxs(simde_mm_load_ps(ctx.v34.f32)));
	// vcfpsxws128 v62,v32,0
	simde_mm_store_si128((simde__m128i*)ctx.v62.s32, simde_mm_vctsxs(simde_mm_load_ps(ctx.v32.f32)));
	// addi r24,r1,1088
	ctx.r24.s64 = ctx.r1.s64 + 1088;
	// addi r23,r1,1072
	ctx.r23.s64 = ctx.r1.s64 + 1072;
	// vpkswss128 v42,v52,v54
	simde_mm_store_si128((simde__m128i*)ctx.v42.u8, simde_mm_packs_epi32(simde_mm_load_si128((simde__m128i*)ctx.v54.s32), simde_mm_load_si128((simde__m128i*)ctx.v52.s32)));
	// addi r22,r1,1120
	ctx.r22.s64 = ctx.r1.s64 + 1120;
	// vpkswss128 v60,v48,v49
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_packs_epi32(simde_mm_load_si128((simde__m128i*)ctx.v49.s32), simde_mm_load_si128((simde__m128i*)ctx.v48.s32)));
	// stvx128 v47,r31,r7
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r31.u32 + ctx.r7.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v47.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r7,r1,1152
	ctx.r7.s64 = ctx.r1.s64 + 1152;
	// addi r6,r1,1136
	ctx.r6.s64 = ctx.r1.s64 + 1136;
	// vpkswss128 v61,v50,v51
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_packs_epi32(simde_mm_load_si128((simde__m128i*)ctx.v51.s32), simde_mm_load_si128((simde__m128i*)ctx.v50.s32)));
	// lvx128 v59,r0,r24
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r24.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r21,r1,1104
	ctx.r21.s64 = ctx.r1.s64 + 1104;
	// lvx128 v58,r0,r23
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r23.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r24,r1,1184
	ctx.r24.s64 = ctx.r1.s64 + 1184;
	// lvx128 v57,r0,r22
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r22.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r23,r1,1168
	ctx.r23.s64 = ctx.r1.s64 + 1168;
	// addi r22,r1,1216
	ctx.r22.s64 = ctx.r1.s64 + 1216;
	// vpkswss128 v56,v37,v39
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_packs_epi32(simde_mm_load_si128((simde__m128i*)ctx.v39.s32), simde_mm_load_si128((simde__m128i*)ctx.v37.s32)));
	// addi r20,r1,1200
	ctx.r20.s64 = ctx.r1.s64 + 1200;
	// lvx128 v51,r0,r7
	simde_mm_store_si128((simde__m128i*)ctx.v51.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r7.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vpkswss128 v52,v33,v35
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, simde_mm_packs_epi32(simde_mm_load_si128((simde__m128i*)ctx.v35.s32), simde_mm_load_si128((simde__m128i*)ctx.v33.s32)));
	// lvx128 v50,r0,r6
	simde_mm_store_si128((simde__m128i*)ctx.v50.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r6.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v54,r0,r21
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r21.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcfpsxws128 v49,v59,0
	simde_mm_store_si128((simde__m128i*)ctx.v49.s32, simde_mm_vctsxs(simde_mm_load_ps(ctx.v59.f32)));
	// vpkswss128 v48,v62,v63
	simde_mm_store_si128((simde__m128i*)ctx.v48.u8, simde_mm_packs_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.s32), simde_mm_load_si128((simde__m128i*)ctx.v62.s32)));
	// lvx128 v47,r0,r24
	simde_mm_store_si128((simde__m128i*)ctx.v47.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r24.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v41,r0,r23
	simde_mm_store_si128((simde__m128i*)ctx.v41.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r23.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r7,496
	ctx.r7.s64 = 496;
	// lvx128 v40,r0,r22
	simde_mm_store_si128((simde__m128i*)ctx.v40.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r22.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcfpsxws128 v39,v58,0
	simde_mm_store_si128((simde__m128i*)ctx.v39.s32, simde_mm_vctsxs(simde_mm_load_ps(ctx.v58.f32)));
	// lvx128 v38,r0,r20
	simde_mm_store_si128((simde__m128i*)ctx.v38.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r20.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r6,512
	ctx.r6.s64 = 512;
	// stvx128 v55,r31,r5
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r31.u32 + ctx.r5.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v55.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcfpsxws128 v37,v57,0
	simde_mm_store_si128((simde__m128i*)ctx.v37.s32, simde_mm_vctsxs(simde_mm_load_ps(ctx.v57.f32)));
	// stvx128 v53,r31,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r31.u32 + ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v53.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r5,528
	ctx.r5.s64 = 528;
	// stvx128 v46,r31,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r31.u32 + ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v46.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcfpsxws128 v36,v54,0
	simde_mm_store_si128((simde__m128i*)ctx.v36.s32, simde_mm_vctsxs(simde_mm_load_ps(ctx.v54.f32)));
	// stvx128 v45,r31,r8
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r31.u32 + ctx.r8.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v45.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r10,544
	ctx.r10.s64 = 544;
	// stvx128 v44,r31,r4
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r31.u32 + ctx.r4.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v44.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcfpsxws128 v35,v51,0
	simde_mm_store_si128((simde__m128i*)ctx.v35.s32, simde_mm_vctsxs(simde_mm_load_ps(ctx.v51.f32)));
	// stvx128 v43,r31,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r31.u32 + ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v43.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r9,560
	ctx.r9.s64 = 560;
	// stvx128 v42,r31,r30
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r31.u32 + ctx.r30.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v42.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcfpsxws128 v34,v50,0
	simde_mm_store_si128((simde__m128i*)ctx.v34.s32, simde_mm_vctsxs(simde_mm_load_ps(ctx.v50.f32)));
	// stvx128 v61,r31,r29
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r31.u32 + ctx.r29.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r8,576
	ctx.r8.s64 = 576;
	// stvx128 v60,r31,r28
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r31.u32 + ctx.r28.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcfpsxws128 v33,v47,0
	simde_mm_store_si128((simde__m128i*)ctx.v33.s32, simde_mm_vctsxs(simde_mm_load_ps(ctx.v47.f32)));
	// stvx128 v56,r31,r27
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r31.u32 + ctx.r27.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v56.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r4,592
	ctx.r4.s64 = 592;
	// stvx128 v52,r31,r26
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r31.u32 + ctx.r26.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v52.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcfpsxws128 v32,v41,0
	simde_mm_store_si128((simde__m128i*)ctx.v32.s32, simde_mm_vctsxs(simde_mm_load_ps(ctx.v41.f32)));
	// stvx128 v48,r31,r25
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r31.u32 + ctx.r25.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v48.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,608
	ctx.r11.s64 = 608;
	// vcfpsxws128 v63,v40,0
	simde_mm_store_si128((simde__m128i*)ctx.v63.s32, simde_mm_vctsxs(simde_mm_load_ps(ctx.v40.f32)));
	// li r30,624
	ctx.r30.s64 = 624;
	// vcfpsxws128 v62,v38,0
	simde_mm_store_si128((simde__m128i*)ctx.v62.s32, simde_mm_vctsxs(simde_mm_load_ps(ctx.v38.f32)));
	// addi r29,r1,1248
	ctx.r29.s64 = ctx.r1.s64 + 1248;
	// vpkswss128 v61,v39,v49
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_packs_epi32(simde_mm_load_si128((simde__m128i*)ctx.v49.s32), simde_mm_load_si128((simde__m128i*)ctx.v39.s32)));
	// addi r28,r1,1232
	ctx.r28.s64 = ctx.r1.s64 + 1232;
	// vpkswss128 v60,v36,v37
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_packs_epi32(simde_mm_load_si128((simde__m128i*)ctx.v37.s32), simde_mm_load_si128((simde__m128i*)ctx.v36.s32)));
	// addi r27,r1,1280
	ctx.r27.s64 = ctx.r1.s64 + 1280;
	// vpkswss128 v59,v34,v35
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_packs_epi32(simde_mm_load_si128((simde__m128i*)ctx.v35.s32), simde_mm_load_si128((simde__m128i*)ctx.v34.s32)));
	// addi r26,r1,1264
	ctx.r26.s64 = ctx.r1.s64 + 1264;
	// vpkswss128 v58,v32,v33
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_packs_epi32(simde_mm_load_si128((simde__m128i*)ctx.v33.s32), simde_mm_load_si128((simde__m128i*)ctx.v32.s32)));
	// addi r25,r1,1312
	ctx.r25.s64 = ctx.r1.s64 + 1312;
	// vpkswss128 v57,v62,v63
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_packs_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.s32), simde_mm_load_si128((simde__m128i*)ctx.v62.s32)));
	// lvx128 v56,r0,r29
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r29.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r24,r1,1296
	ctx.r24.s64 = ctx.r1.s64 + 1296;
	// lvx128 v55,r0,r28
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r28.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r29,r1,1344
	ctx.r29.s64 = ctx.r1.s64 + 1344;
	// addi r28,r1,1328
	ctx.r28.s64 = ctx.r1.s64 + 1328;
	// lvx128 v54,r0,r27
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r27.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v53,r0,r26
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r26.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcfpsxws128 v52,v56,0
	simde_mm_store_si128((simde__m128i*)ctx.v52.s32, simde_mm_vctsxs(simde_mm_load_ps(ctx.v56.f32)));
	// lvx128 v51,r0,r25
	simde_mm_store_si128((simde__m128i*)ctx.v51.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r25.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcfpsxws128 v50,v55,0
	simde_mm_store_si128((simde__m128i*)ctx.v50.s32, simde_mm_vctsxs(simde_mm_load_ps(ctx.v55.f32)));
	// lvx128 v49,r0,r24
	simde_mm_store_si128((simde__m128i*)ctx.v49.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r24.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcfpsxws128 v48,v54,0
	simde_mm_store_si128((simde__m128i*)ctx.v48.s32, simde_mm_vctsxs(simde_mm_load_ps(ctx.v54.f32)));
	// lvx128 v47,r0,r29
	simde_mm_store_si128((simde__m128i*)ctx.v47.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r29.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcfpsxws128 v46,v53,0
	simde_mm_store_si128((simde__m128i*)ctx.v46.s32, simde_mm_vctsxs(simde_mm_load_ps(ctx.v53.f32)));
	// lvx128 v45,r0,r28
	simde_mm_store_si128((simde__m128i*)ctx.v45.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r28.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcfpsxws128 v44,v51,0
	simde_mm_store_si128((simde__m128i*)ctx.v44.s32, simde_mm_vctsxs(simde_mm_load_ps(ctx.v51.f32)));
	// vcfpsxws128 v43,v49,0
	simde_mm_store_si128((simde__m128i*)ctx.v43.s32, simde_mm_vctsxs(simde_mm_load_ps(ctx.v49.f32)));
	// stvx128 v61,r31,r7
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r31.u32 + ctx.r7.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcfpsxws128 v42,v47,0
	simde_mm_store_si128((simde__m128i*)ctx.v42.s32, simde_mm_vctsxs(simde_mm_load_ps(ctx.v47.f32)));
	// stvx128 v60,r31,r6
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r31.u32 + ctx.r6.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcfpsxws128 v41,v45,0
	simde_mm_store_si128((simde__m128i*)ctx.v41.s32, simde_mm_vctsxs(simde_mm_load_ps(ctx.v45.f32)));
	// stvx128 v59,r31,r5
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r31.u32 + ctx.r5.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v58,r31,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r31.u32 + ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v58.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v57,r31,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r31.u32 + ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v57.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vpkswss128 v40,v50,v52
	simde_mm_store_si128((simde__m128i*)ctx.v40.u8, simde_mm_packs_epi32(simde_mm_load_si128((simde__m128i*)ctx.v52.s32), simde_mm_load_si128((simde__m128i*)ctx.v50.s32)));
	// vpkswss128 v39,v46,v48
	simde_mm_store_si128((simde__m128i*)ctx.v39.u8, simde_mm_packs_epi32(simde_mm_load_si128((simde__m128i*)ctx.v48.s32), simde_mm_load_si128((simde__m128i*)ctx.v46.s32)));
	// vpkswss128 v38,v43,v44
	simde_mm_store_si128((simde__m128i*)ctx.v38.u8, simde_mm_packs_epi32(simde_mm_load_si128((simde__m128i*)ctx.v44.s32), simde_mm_load_si128((simde__m128i*)ctx.v43.s32)));
	// vpkswss128 v37,v41,v42
	simde_mm_store_si128((simde__m128i*)ctx.v37.u8, simde_mm_packs_epi32(simde_mm_load_si128((simde__m128i*)ctx.v42.s32), simde_mm_load_si128((simde__m128i*)ctx.v41.s32)));
	// stvx128 v40,r31,r8
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r31.u32 + ctx.r8.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v40.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v39,r31,r4
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r31.u32 + ctx.r4.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v39.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v38,r31,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r31.u32 + ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v38.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v37,r31,r30
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r31.u32 + ctx.r30.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v37.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
loc_832CD8AC:
	// addi r1,r1,7872
	ctx.r1.s64 = ctx.r1.s64 + 7872;
	// b 0x831cdb14
	__restgprlr_19(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832CD8B4"))) PPC_WEAK_FUNC(sub_832CD8B4);
PPC_FUNC_IMPL(__imp__sub_832CD8B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832CD8B8"))) PPC_WEAK_FUNC(sub_832CD8B8);
PPC_FUNC_IMPL(__imp__sub_832CD8B8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x832CD8C0;
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
	// lis r11,-31747
	ctx.r11.s64 = -2080571392;
	// lis r10,-31747
	ctx.r10.s64 = -2080571392;
	// addi r29,r11,-29312
	ctx.r29.s64 = ctx.r11.s64 + -29312;
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r11,-28032(r10)
	PPC_STORE_U32(ctx.r10.u32 + -28032, ctx.r11.u32);
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfd f30,-18240(r11)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r11.u32 + -18240);
	// lfd f31,15760(r10)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r10.u32 + 15760);
loc_832CD8F8:
	// extsw r11,r30
	ctx.r11.s64 = ctx.r30.s32;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// fadd f0,f0,f31
	ctx.f0.f64 = ctx.f0.f64 + ctx.f31.f64;
	// fmul f0,f0,f30
	ctx.f0.f64 = ctx.f0.f64 * ctx.f30.f64;
	// frsp f1,f0
	ctx.f1.f64 = double(float(ctx.f0.f64));
	// bl 0x831d1930
	ctx.lr = 0x832CD918;
	sub_831D1930(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// stfs f0,0(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// addi r11,r29,1280
	ctx.r11.s64 = ctx.r29.s64 + 1280;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r31,r11
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, xer);
	// blt cr6,0x832cd8f8
	if (cr6.lt) goto loc_832CD8F8;
	// bl 0x832d11b8
	ctx.lr = 0x832CD938;
	sub_832D11B8(ctx, base);
	// bl 0x832d07b0
	ctx.lr = 0x832CD93C;
	sub_832D07B0(ctx, base);
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

__attribute__((alias("__imp__sub_832CD94C"))) PPC_WEAK_FUNC(sub_832CD94C);
PPC_FUNC_IMPL(__imp__sub_832CD94C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832CD950"))) PPC_WEAK_FUNC(sub_832CD950);
PPC_FUNC_IMPL(__imp__sub_832CD950) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r11,-31747
	ctx.r11.s64 = -2080571392;
	// lwz r11,-28032(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -28032);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// b 0x832cd8b8
	sub_832CD8B8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832CD964"))) PPC_WEAK_FUNC(sub_832CD964);
PPC_FUNC_IMPL(__imp__sub_832CD964) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832CD968"))) PPC_WEAK_FUNC(sub_832CD968);
PPC_FUNC_IMPL(__imp__sub_832CD968) {
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
	// lis r11,-31747
	ctx.r11.s64 = -2080571392;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,-28032(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -28032);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x832cd990
	if (!cr6.eq) goto loc_832CD990;
	// bl 0x832cd8b8
	ctx.lr = 0x832CD990;
	sub_832CD8B8(ctx, base);
loc_832CD990:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,332(r31)
	PPC_STORE_U32(ctx.r31.u32 + 332, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_832CD9AC"))) PPC_WEAK_FUNC(sub_832CD9AC);
PPC_FUNC_IMPL(__imp__sub_832CD9AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832CD9B0"))) PPC_WEAK_FUNC(sub_832CD9B0);
PPC_FUNC_IMPL(__imp__sub_832CD9B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x832CD9B8;
	__savegprlr_28(ctx, base);
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x831ce760
	ctx.lr = 0x832CD9C0;
	__savefpr_22(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// clrlwi r10,r7,29
	ctx.r10.u64 = ctx.r7.u32 & 0x7;
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x832cd9e8
	if (cr6.eq) goto loc_832CD9E8;
loc_832CD9D4:
	// li r3,4
	ctx.r3.s64 = 4;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x831ce7ac
	ctx.lr = 0x832CD9E4;
	__restfpr_22(ctx, base);
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_832CD9E8:
	// cmpwi cr6,r7,320
	cr6.compare<int32_t>(ctx.r7.s32, 320, xer);
	// bne cr6,0x832cd9d4
	if (!cr6.eq) goto loc_832CD9D4;
	// lis r7,-31747
	ctx.r7.s64 = -2080571392;
	// lfs f8,0(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// li r28,39
	ctx.r28.s64 = 39;
	// lfs f7,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// addi r9,r7,-29312
	ctx.r9.s64 = ctx.r7.s64 + -29312;
	// lfs f6,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f6.f64 = double(temp.f32);
	// addi r29,r5,1276
	ctx.r29.s64 = ctx.r5.s64 + 1276;
	// lfs f31,12(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	ctx.f31.f64 = double(temp.f32);
	// addi r10,r8,640
	ctx.r10.s64 = ctx.r8.s64 + 640;
	// lfs f5,1276(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 1276);
	ctx.f5.f64 = double(temp.f32);
	// lfs f0,-29312(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -29312);
	ctx.f0.f64 = double(temp.f32);
	// addi r31,r9,1264
	ctx.r31.s64 = ctx.r9.s64 + 1264;
	// lfs f4,1272(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 1272);
	ctx.f4.f64 = double(temp.f32);
	// addi r11,r11,636
	ctx.r11.s64 = ctx.r11.s64 + 636;
	// lfs f13,4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// addi r7,r10,-4
	ctx.r7.s64 = ctx.r10.s64 + -4;
	// lfs f12,8(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// addi r30,r5,12
	ctx.r30.s64 = ctx.r5.s64 + 12;
	// lfs f2,12(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	ctx.f2.f64 = double(temp.f32);
	// addi r29,r29,-12
	ctx.r29.s64 = ctx.r29.s64 + -12;
	// lfs f11,1276(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 1276);
	ctx.f11.f64 = double(temp.f32);
	// mtctr r28
	ctr.u64 = ctx.r28.u64;
	// lfs f10,1272(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 1272);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,1268(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 1268);
	ctx.f9.f64 = double(temp.f32);
	// lfs f1,1264(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 1264);
	ctx.f1.f64 = double(temp.f32);
	// addi r9,r9,12
	ctx.r9.s64 = ctx.r9.s64 + 12;
	// lfs f3,1268(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 1268);
	ctx.f3.f64 = double(temp.f32);
	// lfs f30,1264(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 1264);
	ctx.f30.f64 = double(temp.f32);
loc_832CDA60:
	// fmuls f29,f5,f0
	ctx.fpscr.disableFlushMode();
	ctx.f29.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// lfs f28,-4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	ctx.f28.f64 = double(temp.f32);
	// fmuls f27,f4,f13
	ctx.f27.f64 = double(float(ctx.f4.f64 * ctx.f13.f64));
	// lfs f26,-8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	ctx.f26.f64 = double(temp.f32);
	// fmuls f25,f3,f12
	ctx.f25.f64 = double(float(ctx.f3.f64 * ctx.f12.f64));
	// lfs f24,-12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -12);
	ctx.f24.f64 = double(temp.f32);
	// fmuls f0,f8,f0
	ctx.f0.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// lfs f22,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f22.f64 = double(temp.f32);
	// fmuls f13,f7,f13
	ctx.f13.f64 = double(float(ctx.f7.f64 * ctx.f13.f64));
	// stfs f22,0(r7)
	temp.f32 = float(ctx.f22.f64);
	PPC_STORE_U32(ctx.r7.u32 + 0, temp.u32);
	// fmuls f23,f30,f2
	ctx.f23.f64 = double(float(ctx.f30.f64 * ctx.f2.f64));
	// stfs f28,-4(r7)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r7.u32 + -4, temp.u32);
	// fmuls f12,f6,f12
	ctx.f12.f64 = double(float(ctx.f6.f64 * ctx.f12.f64));
	// stfs f26,-8(r7)
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r7.u32 + -8, temp.u32);
	// fmuls f2,f31,f2
	ctx.f2.f64 = double(float(ctx.f31.f64 * ctx.f2.f64));
	// stfs f24,-12(r7)
	temp.f32 = float(ctx.f24.f64);
	PPC_STORE_U32(ctx.r7.u32 + -12, temp.u32);
	// addi r7,r7,-16
	ctx.r7.s64 = ctx.r7.s64 + -16;
	// fmsubs f8,f8,f11,f29
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f11.f64 - ctx.f29.f64));
	// stfs f8,0(r10)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// fmsubs f7,f7,f10,f27
	ctx.f7.f64 = double(float(ctx.f7.f64 * ctx.f10.f64 - ctx.f27.f64));
	// stfs f7,4(r10)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// fmsubs f6,f6,f9,f25
	ctx.f6.f64 = double(float(ctx.f6.f64 * ctx.f9.f64 - ctx.f25.f64));
	// stfs f6,8(r10)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// fmadds f7,f5,f11,f0
	ctx.f7.f64 = double(float(ctx.f5.f64 * ctx.f11.f64 + ctx.f0.f64));
	// fmadds f6,f4,f10,f13
	ctx.f6.f64 = double(float(ctx.f4.f64 * ctx.f10.f64 + ctx.f13.f64));
	// fmsubs f8,f31,f1,f23
	ctx.f8.f64 = double(float(ctx.f31.f64 * ctx.f1.f64 - ctx.f23.f64));
	// stfs f8,12(r10)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r10.u32 + 12, temp.u32);
	// fmadds f5,f3,f9,f12
	ctx.f5.f64 = double(float(ctx.f3.f64 * ctx.f9.f64 + ctx.f12.f64));
	// stfs f7,0(r11)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// fmadds f4,f30,f1,f2
	ctx.f4.f64 = double(float(ctx.f30.f64 * ctx.f1.f64 + ctx.f2.f64));
	// stfs f6,-4(r11)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r11.u32 + -4, temp.u32);
	// stfs f5,-8(r11)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r11.u32 + -8, temp.u32);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// stfs f4,-12(r11)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r11.u32 + -12, temp.u32);
	// addi r11,r11,-16
	ctx.r11.s64 = ctx.r11.s64 + -16;
	// lfs f0,4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,8(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,12(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,-4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,-8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,-12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + -12);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,12(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,-4(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + -4);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,-8(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + -8);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,-12(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + -12);
	ctx.f3.f64 = double(temp.f32);
	// lfsu f2,16(r9)
	ea = 16 + ctx.r9.u32;
	temp.u32 = PPC_LOAD_U32(ea);
	ctx.f2.f64 = double(temp.f32);
	ctx.r9.u32 = ea;
	// lfsu f1,-16(r31)
	ea = -16 + ctx.r31.u32;
	temp.u32 = PPC_LOAD_U32(ea);
	ctx.f1.f64 = double(temp.f32);
	ctx.r31.u32 = ea;
	// lfsu f31,16(r30)
	ea = 16 + ctx.r30.u32;
	temp.u32 = PPC_LOAD_U32(ea);
	ctx.f31.f64 = double(temp.f32);
	ctx.r30.u32 = ea;
	// lfsu f30,-16(r29)
	ea = -16 + ctx.r29.u32;
	temp.u32 = PPC_LOAD_U32(ea);
	ctx.f30.f64 = double(temp.f32);
	ctx.r29.u32 = ea;
	// bdnz 0x832cda60
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_832CDA60;
	// fmuls f29,f5,f0
	ctx.f29.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// lfs f28,-4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	ctx.f28.f64 = double(temp.f32);
	// fmuls f27,f4,f13
	ctx.f27.f64 = double(float(ctx.f4.f64 * ctx.f13.f64));
	// lfs f26,-8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	ctx.f26.f64 = double(temp.f32);
	// fmuls f25,f3,f12
	ctx.f25.f64 = double(float(ctx.f3.f64 * ctx.f12.f64));
	// lfs f24,-12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -12);
	ctx.f24.f64 = double(temp.f32);
	// fmuls f0,f8,f0
	ctx.f0.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// lfs f22,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f22.f64 = double(temp.f32);
	// fmuls f13,f7,f13
	ctx.f13.f64 = double(float(ctx.f7.f64 * ctx.f13.f64));
	// stfs f22,0(r7)
	temp.f32 = float(ctx.f22.f64);
	PPC_STORE_U32(ctx.r7.u32 + 0, temp.u32);
	// fmuls f23,f30,f2
	ctx.f23.f64 = double(float(ctx.f30.f64 * ctx.f2.f64));
	// stfs f28,-4(r7)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r7.u32 + -4, temp.u32);
	// fmuls f12,f6,f12
	ctx.f12.f64 = double(float(ctx.f6.f64 * ctx.f12.f64));
	// stfs f26,-8(r7)
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r7.u32 + -8, temp.u32);
	// fmuls f2,f31,f2
	ctx.f2.f64 = double(float(ctx.f31.f64 * ctx.f2.f64));
	// stfs f24,-12(r7)
	temp.f32 = float(ctx.f24.f64);
	PPC_STORE_U32(ctx.r7.u32 + -12, temp.u32);
	// li r7,320
	ctx.r7.s64 = 320;
	// mr r6,r8
	ctx.r6.u64 = ctx.r8.u64;
	// fmsubs f8,f8,f11,f29
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f11.f64 - ctx.f29.f64));
	// stfs f8,0(r10)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// fmsubs f7,f7,f10,f27
	ctx.f7.f64 = double(float(ctx.f7.f64 * ctx.f10.f64 - ctx.f27.f64));
	// stfs f7,4(r10)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// fmsubs f6,f6,f9,f25
	ctx.f6.f64 = double(float(ctx.f6.f64 * ctx.f9.f64 - ctx.f25.f64));
	// stfs f6,8(r10)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// fmadds f7,f5,f11,f0
	ctx.f7.f64 = double(float(ctx.f5.f64 * ctx.f11.f64 + ctx.f0.f64));
	// mr r5,r8
	ctx.r5.u64 = ctx.r8.u64;
	// fmadds f6,f4,f10,f13
	ctx.f6.f64 = double(float(ctx.f4.f64 * ctx.f10.f64 + ctx.f13.f64));
	// fmsubs f8,f31,f1,f23
	ctx.f8.f64 = double(float(ctx.f31.f64 * ctx.f1.f64 - ctx.f23.f64));
	// stfs f8,12(r10)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r10.u32 + 12, temp.u32);
	// fmadds f5,f3,f9,f12
	ctx.f5.f64 = double(float(ctx.f3.f64 * ctx.f9.f64 + ctx.f12.f64));
	// stfs f7,0(r11)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// fmadds f4,f30,f1,f2
	ctx.f4.f64 = double(float(ctx.f30.f64 * ctx.f1.f64 + ctx.f2.f64));
	// stfs f6,-4(r11)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r11.u32 + -4, temp.u32);
	// stfs f5,-8(r11)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r11.u32 + -8, temp.u32);
	// stfs f4,-12(r11)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r11.u32 + -12, temp.u32);
	// bl 0x832d1308
	ctx.lr = 0x832CDBC0;
	sub_832D1308(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x831ce7ac
	ctx.lr = 0x832CDBD0;
	__restfpr_22(ctx, base);
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832CDBD4"))) PPC_WEAK_FUNC(sub_832CDBD4);
PPC_FUNC_IMPL(__imp__sub_832CDBD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832CDBD8"))) PPC_WEAK_FUNC(sub_832CDBD8);
PPC_FUNC_IMPL(__imp__sub_832CDBD8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister temp{};
	uint32_t ea{};
	// rlwinm. r10,r4,29,3,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 29) & 0x1FFFFFFF;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// blelr 
	if (!cr0.gt) return;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r11,r3,-4
	ctx.r11.s64 = ctx.r3.s64 + -4;
	// lfs f0,9008(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
loc_832CDBF0:
	// stfs f0,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stfs f0,8(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stfs f0,12(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// stfs f0,16(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// stfs f0,20(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// stfs f0,24(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// stfs f0,28(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 28, temp.u32);
	// stfsu f0,32(r11)
	ea = 32 + ctx.r11.u32;
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x832cdbf0
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_832CDBF0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832CDC18"))) PPC_WEAK_FUNC(sub_832CDC18);
PPC_FUNC_IMPL(__imp__sub_832CDC18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x832CDC20;
	__savegprlr_26(ctx, base);
	// addi r12,r1,-56
	ctx.r12.s64 = ctx.r1.s64 + -56;
	// bl 0x831ce75c
	ctx.lr = 0x832CDC28;
	__savefpr_21(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// clrlwi r11,r7,29
	ctx.r11.u64 = ctx.r7.u32 & 0x7;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r31,r8
	ctx.r31.u64 = ctx.r8.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x832cdc54
	if (cr6.eq) goto loc_832CDC54;
loc_832CDC40:
	// li r3,4
	ctx.r3.s64 = 4;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// addi r12,r1,-56
	ctx.r12.s64 = ctx.r1.s64 + -56;
	// bl 0x831ce7a8
	ctx.lr = 0x832CDC50;
	__restfpr_21(ctx, base);
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_832CDC54:
	// cmpwi cr6,r7,320
	cr6.compare<int32_t>(ctx.r7.s32, 320, xer);
	// bne cr6,0x832cdc40
	if (!cr6.eq) goto loc_832CDC40;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// bl 0x832d1308
	ctx.lr = 0x832CDC64;
	sub_832D1308(ctx, base);
	// addi r5,r31,640
	ctx.r5.s64 = ctx.r31.s64 + 640;
	// lis r8,-31747
	ctx.r8.s64 = -2080571392;
	// li r10,40
	ctx.r10.s64 = 40;
	// subf r9,r31,r5
	ctx.r9.s64 = ctx.r5.s64 - ctx.r31.s64;
	// addi r11,r8,-29312
	ctx.r11.s64 = ctx.r8.s64 + -29312;
	// addi r7,r31,1276
	ctx.r7.s64 = ctx.r31.s64 + 1276;
	// add r9,r9,r28
	ctx.r9.u64 = ctx.r9.u64 + ctx.r28.u64;
	// lfs f11,-29312(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -29312);
	ctx.f11.f64 = double(temp.f32);
	// subf r27,r7,r28
	ctx.r27.s64 = ctx.r28.s64 - ctx.r7.s64;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// addi r26,r11,8
	ctx.r26.s64 = ctx.r11.s64 + 8;
	// addi r29,r9,-648
	ctx.r29.s64 = ctx.r9.s64 + -648;
	// lfs f0,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// addi r10,r5,-636
	ctx.r10.s64 = ctx.r5.s64 + -636;
	// lfs f13,636(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 636);
	ctx.f13.f64 = double(temp.f32);
	// subf r6,r31,r28
	ctx.r6.s64 = ctx.r28.s64 - ctx.r31.s64;
	// lfs f9,632(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 632);
	ctx.f9.f64 = double(temp.f32);
	// lfs f12,640(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 640);
	ctx.f12.f64 = double(temp.f32);
	// addi r8,r11,8
	ctx.r8.s64 = ctx.r11.s64 + 8;
	// lfs f8,644(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 644);
	ctx.f8.f64 = double(temp.f32);
	// addi r4,r11,632
	ctx.r4.s64 = ctx.r11.s64 + 632;
	// lfs f10,1276(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 1276);
	ctx.f10.f64 = double(temp.f32);
	// addi r3,r11,644
	ctx.r3.s64 = ctx.r11.s64 + 644;
	// lfs f7,1272(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 1272);
	ctx.f7.f64 = double(temp.f32);
	// addi r30,r11,1272
	ctx.r30.s64 = ctx.r11.s64 + 1272;
	// addi r9,r7,-644
	ctx.r9.s64 = ctx.r7.s64 + -644;
	// subf r5,r26,r5
	ctx.r5.s64 = ctx.r5.s64 - ctx.r26.s64;
	// addi r31,r27,636
	ctx.r31.s64 = ctx.r27.s64 + 636;
loc_832CDCD4:
	// lfsx f5,r31,r7
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r7.u32);
	ctx.f5.f64 = double(temp.f32);
	// lfsx f3,r6,r9
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r9.u32);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f2,f5,f13
	ctx.f2.f64 = double(float(ctx.f5.f64 * ctx.f13.f64));
	// lfs f1,-4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -4);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f31,f3,f8
	ctx.f31.f64 = double(float(ctx.f3.f64 * ctx.f8.f64));
	// lfsx f6,r6,r10
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r10.u32);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f29,f1,f13
	ctx.f29.f64 = double(float(ctx.f1.f64 * ctx.f13.f64));
	// lfs f30,8(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f30.f64 = double(temp.f32);
	// fmuls f4,f6,f7
	ctx.f4.f64 = double(float(ctx.f6.f64 * ctx.f7.f64));
	// fmuls f28,f30,f10
	ctx.f28.f64 = double(float(ctx.f30.f64 * ctx.f10.f64));
	// lfs f27,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f27.f64 = double(temp.f32);
	// fmuls f3,f3,f9
	ctx.f3.f64 = double(float(ctx.f3.f64 * ctx.f9.f64));
	// lfs f26,4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f26.f64 = double(temp.f32);
	// fmuls f30,f30,f11
	ctx.f30.f64 = double(float(ctx.f30.f64 * ctx.f11.f64));
	// lfs f25,0(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f25.f64 = double(temp.f32);
	// fmuls f6,f6,f0
	ctx.f6.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// lfsx f24,r5,r8
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r8.u32);
	ctx.f24.f64 = double(temp.f32);
	// lfs f23,640(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 640);
	ctx.f23.f64 = double(temp.f32);
	// lfs f22,0(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f22.f64 = double(temp.f32);
	// fmsubs f2,f1,f12,f2
	ctx.f2.f64 = double(float(ctx.f1.f64 * ctx.f12.f64 - ctx.f2.f64));
	// lfs f21,640(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 640);
	ctx.f21.f64 = double(temp.f32);
	// fmadds f1,f27,f9,f31
	ctx.f1.f64 = double(float(ctx.f27.f64 * ctx.f9.f64 + ctx.f31.f64));
	// lfs f13,-4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + -4);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f9,f5,f12,f29
	ctx.f9.f64 = double(float(ctx.f5.f64 * ctx.f12.f64 + ctx.f29.f64));
	// lfs f12,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f4,f25,f0,f4
	ctx.f4.f64 = double(float(ctx.f25.f64 * ctx.f0.f64 + ctx.f4.f64));
	// lfs f0,4(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f5,f26,f11,f28
	ctx.f5.f64 = double(float(ctx.f26.f64 * ctx.f11.f64 + ctx.f28.f64));
	// lfs f11,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fmsubs f3,f27,f8,f3
	ctx.f3.f64 = double(float(ctx.f27.f64 * ctx.f8.f64 - ctx.f3.f64));
	// stfs f9,4(r9)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r9.u32 + 4, temp.u32);
	// fmsubs f8,f26,f10,f30
	ctx.f8.f64 = double(float(ctx.f26.f64 * ctx.f10.f64 - ctx.f30.f64));
	// lfs f10,-4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + -4);
	ctx.f10.f64 = double(temp.f32);
	// fmsubs f7,f25,f7,f6
	ctx.f7.f64 = double(float(ctx.f25.f64 * ctx.f7.f64 - ctx.f6.f64));
	// stfs f8,0(r7)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r7.u32 + 0, temp.u32);
	// stfs f7,640(r9)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r9.u32 + 640, temp.u32);
	// stfsx f23,r6,r10
	temp.f32 = float(ctx.f23.f64);
	PPC_STORE_U32(ctx.r6.u32 + ctx.r10.u32, temp.u32);
	// stfsx f22,r31,r7
	temp.f32 = float(ctx.f22.f64);
	PPC_STORE_U32(ctx.r31.u32 + ctx.r7.u32, temp.u32);
	// addi r7,r7,-8
	ctx.r7.s64 = ctx.r7.s64 + -8;
	// stfsx f21,r6,r9
	temp.f32 = float(ctx.f21.f64);
	PPC_STORE_U32(ctx.r6.u32 + ctx.r9.u32, temp.u32);
	// stfs f5,-4(r10)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r10.u32 + -4, temp.u32);
	// stfs f4,0(r10)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// stfs f1,0(r9)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// addi r9,r9,-8
	ctx.r9.s64 = ctx.r9.s64 + -8;
	// stfsx f2,r5,r8
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r5.u32 + ctx.r8.u32, temp.u32);
	// addi r8,r8,8
	ctx.r8.s64 = ctx.r8.s64 + 8;
	// stfs f3,640(r10)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r10.u32 + 640, temp.u32);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// lfsu f9,-8(r4)
	ea = -8 + ctx.r4.u32;
	temp.u32 = PPC_LOAD_U32(ea);
	ctx.f9.f64 = double(temp.f32);
	ctx.r4.u32 = ea;
	// lfsu f8,8(r3)
	ea = 8 + ctx.r3.u32;
	temp.u32 = PPC_LOAD_U32(ea);
	ctx.f8.f64 = double(temp.f32);
	ctx.r3.u32 = ea;
	// lfsu f7,-8(r30)
	ea = -8 + ctx.r30.u32;
	temp.u32 = PPC_LOAD_U32(ea);
	ctx.f7.f64 = double(temp.f32);
	ctx.r30.u32 = ea;
	// stfsu f24,8(r29)
	ea = 8 + ctx.r29.u32;
	temp.f32 = float(ctx.f24.f64);
	PPC_STORE_U32(ea, temp.u32);
	ctx.r29.u32 = ea;
	// bdnz 0x832cdcd4
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_832CDCD4;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// addi r12,r1,-56
	ctx.r12.s64 = ctx.r1.s64 + -56;
	// bl 0x831ce7a8
	ctx.lr = 0x832CDDB8;
	__restfpr_21(ctx, base);
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832CDDBC"))) PPC_WEAK_FUNC(sub_832CDDBC);
PPC_FUNC_IMPL(__imp__sub_832CDDBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832CDDC0"))) PPC_WEAK_FUNC(sub_832CDDC0);
PPC_FUNC_IMPL(__imp__sub_832CDDC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdab0
	ctx.lr = 0x832CDDC8;
	__savegprlr_14(ctx, base);
	// mr r16,r3
	ctx.r16.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r26,5
	ctx.r26.s64 = 5;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble cr6,0x832cdef0
	if (!cr6.gt) goto loc_832CDEF0;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-31738
	ctx.r9.s64 = -2079981568;
	// lis r4,-31738
	ctx.r4.s64 = -2079981568;
	// lis r11,-31738
	ctx.r11.s64 = -2079981568;
	// addi r27,r7,-4
	ctx.r27.s64 = ctx.r7.s64 + -4;
	// lfs f11,9008(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9008);
	ctx.f11.f64 = double(temp.f32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lfs f12,23360(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 23360);
	ctx.f12.f64 = double(temp.f32);
	// addi r31,r11,22848
	ctx.r31.s64 = ctx.r11.s64 + 22848;
	// lwz r28,22784(r4)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r4.u32 + 22784);
loc_832CDE04:
	// fmr f0,f11
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f11.f64;
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(ctx.r28.s32, 0, xer);
	// ble cr6,0x832cde50
	if (!cr6.gt) goto loc_832CDE50;
	// addi r11,r28,-1
	ctx.r11.s64 = ctx.r28.s64 + -1;
	// divwu r11,r11,r26
	ctx.r11.u32 = PPCDivide(ctx.r11.u32, ctx.r26.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
loc_832CDE20:
	// lfs f13,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f10,f13,f13,f0
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f0.f64));
	// lfsu f0,4(r30)
	ea = 4 + ctx.r30.u32;
	temp.u32 = PPC_LOAD_U32(ea);
	ctx.f0.f64 = double(temp.f32);
	ctx.r30.u32 = ea;
	// lfsu f13,4(r30)
	ea = 4 + ctx.r30.u32;
	temp.u32 = PPC_LOAD_U32(ea);
	ctx.f13.f64 = double(temp.f32);
	ctx.r30.u32 = ea;
	// fmadds f9,f0,f0,f10
	ctx.f9.f64 = double(float(ctx.f0.f64 * ctx.f0.f64 + ctx.f10.f64));
	// lfsu f0,4(r30)
	ea = 4 + ctx.r30.u32;
	temp.u32 = PPC_LOAD_U32(ea);
	ctx.f0.f64 = double(temp.f32);
	ctx.r30.u32 = ea;
	// fmadds f8,f13,f13,f9
	ctx.f8.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f9.f64));
	// lfsu f13,4(r30)
	ea = 4 + ctx.r30.u32;
	temp.u32 = PPC_LOAD_U32(ea);
	ctx.f13.f64 = double(temp.f32);
	ctx.r30.u32 = ea;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// fmadds f7,f0,f0,f8
	ctx.f7.f64 = double(float(ctx.f0.f64 * ctx.f0.f64 + ctx.f8.f64));
	// fmadds f0,f13,f13,f7
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f7.f64));
	// bdnz 0x832cde20
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_832CDE20;
loc_832CDE50:
	// li r9,2
	ctx.r9.s64 = 2;
	// fmuls f0,f12,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,64
	ctx.r10.s64 = 64;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_832CDE64:
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// srawi r9,r9,1
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 1;
	// rlwinm r4,r9,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r4,r31
	ctx.r4.u64 = ctx.r4.u64 + ctx.r31.u64;
	// lfs f13,-4(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + -4);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x832cde88
	if (!cr6.lt) goto loc_832CDE88;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// b 0x832cde8c
	goto loc_832CDE8C;
loc_832CDE88:
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_832CDE8C:
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// srawi r9,r9,1
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 1;
	// rlwinm r4,r9,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r4,r31
	ctx.r4.u64 = ctx.r4.u64 + ctx.r31.u64;
	// lfs f13,-4(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + -4);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x832cdeb0
	if (!cr6.lt) goto loc_832CDEB0;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// b 0x832cdeb4
	goto loc_832CDEB4;
loc_832CDEB0:
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_832CDEB4:
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// srawi r9,r9,1
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 1;
	// rlwinm r4,r9,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r4,r31
	ctx.r4.u64 = ctx.r4.u64 + ctx.r31.u64;
	// lfs f13,-4(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + -4);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x832cded8
	if (!cr6.lt) goto loc_832CDED8;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// b 0x832cdedc
	goto loc_832CDEDC;
loc_832CDED8:
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_832CDEDC:
	// bdnz 0x832cde64
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_832CDE64;
	// addi r11,r11,-24
	ctx.r11.s64 = ctx.r11.s64 + -24;
	// addic. r29,r29,-1
	xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// stwu r11,4(r27)
	ea = 4 + ctx.r27.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r27.u32 = ea;
	// bne 0x832cde04
	if (!cr0.eq) goto loc_832CDE04;
loc_832CDEF0:
	// addic. r11,r16,-2
	xer.ca = ctx.r16.u32 > 1;
	ctx.r11.s64 = ctx.r16.s64 + -2;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt 0x832cdf28
	if (cr0.lt) goto loc_832CDF28;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_832CDF08:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r10,r10,-11
	ctx.r10.s64 = ctx.r10.s64 + -11;
	// cmpw cr6,r9,r10
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, xer);
	// bge cr6,0x832cdf20
	if (!cr6.lt) goto loc_832CDF20;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_832CDF20:
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// bdnz 0x832cdf08
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_832CDF08;
loc_832CDF28:
	// lwz r10,0(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// subfic r11,r8,1
	xer.ca = ctx.r8.u32 <= 1;
	ctx.r11.s64 = 1 - ctx.r8.s64;
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, xer);
	// bge cr6,0x832cdf3c
	if (!cr6.lt) goto loc_832CDF3C;
	// stw r11,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r11.u32);
loc_832CDF3C:
	// lwz r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// subfic r4,r8,31
	xer.ca = ctx.r8.u32 <= 31;
	ctx.r4.s64 = 31 - ctx.r8.s64;
	// cmpw cr6,r11,r4
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r4.s32, xer);
	// ble cr6,0x832cdf50
	if (!cr6.gt) goto loc_832CDF50;
	// stw r4,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r4.u32);
loc_832CDF50:
	// lwz r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// subfic r9,r8,-8
	xer.ca = ctx.r8.u32 <= 4294967288;
	ctx.r9.s64 = -8 - ctx.r8.s64;
	// lwz r10,4(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// add r8,r11,r8
	ctx.r8.u64 = ctx.r11.u64 + ctx.r8.u64;
	// stw r26,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r26.u32);
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, xer);
	// stw r8,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r8.u32);
	// stw r11,-208(r1)
	PPC_STORE_U32(ctx.r1.u32 + -208, ctx.r11.u32);
	// bge cr6,0x832cdf7c
	if (!cr6.lt) goto loc_832CDF7C;
	// stw r9,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r9.u32);
loc_832CDF7C:
	// lwz r11,4(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// cmpw cr6,r11,r4
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r4.s32, xer);
	// ble cr6,0x832cdf8c
	if (!cr6.gt) goto loc_832CDF8C;
	// stw r4,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r4.u32);
loc_832CDF8C:
	// cmpwi cr6,r16,2
	cr6.compare<int32_t>(ctx.r16.s32, 2, xer);
	// ble cr6,0x832cdff0
	if (!cr6.gt) goto loc_832CDFF0;
	// addi r10,r16,-3
	ctx.r10.s64 = ctx.r16.s64 + -3;
	// addi r11,r7,8
	ctx.r11.s64 = ctx.r7.s64 + 8;
	// rlwinm r10,r10,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_832CDFA8:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, xer);
	// bge cr6,0x832cdfb8
	if (!cr6.lt) goto loc_832CDFB8;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
loc_832CDFB8:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r10,r4
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r4.s32, xer);
	// ble cr6,0x832cdfc8
	if (!cr6.gt) goto loc_832CDFC8;
	// stw r4,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r4.u32);
loc_832CDFC8:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, xer);
	// bge cr6,0x832cdfd8
	if (!cr6.lt) goto loc_832CDFD8;
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
loc_832CDFD8:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpw cr6,r10,r4
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r4.s32, xer);
	// ble cr6,0x832cdfe8
	if (!cr6.gt) goto loc_832CDFE8;
	// stw r4,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r4.u32);
loc_832CDFE8:
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// bdnz 0x832cdfa8
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_832CDFA8;
loc_832CDFF0:
	// li r22,0
	ctx.r22.s64 = 0;
	// li r17,0
	ctx.r17.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// cmpwi cr6,r16,1
	cr6.compare<int32_t>(ctx.r16.s32, 1, xer);
	// ble cr6,0x832ce248
	if (!cr6.gt) goto loc_832CE248;
	// addi r18,r16,-1
	ctx.r18.s64 = ctx.r16.s64 + -1;
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// lis r10,-31772
	ctx.r10.s64 = -2082209792;
	// cmpwi cr6,r18,2
	cr6.compare<int32_t>(ctx.r18.s32, 2, xer);
	// addi r27,r11,29600
	ctx.r27.s64 = ctx.r11.s64 + 29600;
	// addi r26,r10,29392
	ctx.r26.s64 = ctx.r10.s64 + 29392;
	// blt cr6,0x832ce194
	if (cr6.lt) goto loc_832CE194;
	// addi r10,r1,-208
	ctx.r10.s64 = ctx.r1.s64 + -208;
	// addi r9,r1,-208
	ctx.r9.s64 = ctx.r1.s64 + -208;
	// addi r8,r5,4
	ctx.r8.s64 = ctx.r5.s64 + 4;
	// addi r11,r7,8
	ctx.r11.s64 = ctx.r7.s64 + 8;
	// subf r21,r7,r5
	ctx.r21.s64 = ctx.r5.s64 - ctx.r7.s64;
	// subf r20,r7,r6
	ctx.r20.s64 = ctx.r6.s64 - ctx.r7.s64;
	// subf r19,r7,r10
	ctx.r19.s64 = ctx.r10.s64 - ctx.r7.s64;
	// subf r24,r5,r9
	ctx.r24.s64 = ctx.r9.s64 - ctx.r5.s64;
	// subf r23,r5,r6
	ctx.r23.s64 = ctx.r6.s64 - ctx.r5.s64;
loc_832CE044:
	// addi r25,r4,1
	ctx.r25.s64 = ctx.r4.s64 + 1;
	// cmpwi cr6,r4,13
	cr6.compare<int32_t>(ctx.r4.s32, 13, xer);
	// addi r9,r25,-2
	ctx.r9.s64 = ctx.r25.s64 + -2;
	// ble cr6,0x832ce058
	if (!cr6.gt) goto loc_832CE058;
	// li r9,12
	ctx.r9.s64 = 12;
loc_832CE058:
	// lwz r28,-8(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// lwz r10,-4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// subf r10,r28,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r28.s64;
	// cmpwi cr6,r10,-12
	cr6.compare<int32_t>(ctx.r10.s32, -12, xer);
	// bge cr6,0x832ce070
	if (!cr6.lt) goto loc_832CE070;
	// li r10,-12
	ctx.r10.s64 = -12;
loc_832CE070:
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// rlwinm r31,r9,1,0,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// srawi r30,r10,3
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7) != 0);
	ctx.r30.s64 = ctx.r10.s32 >> 3;
	// stwx r10,r24,r8
	PPC_STORE_U32(ctx.r24.u32 + ctx.r8.u32, ctx.r10.u32);
	// add r31,r9,r31
	ctx.r31.u64 = ctx.r9.u64 + ctx.r31.u64;
	// rlwinm r29,r9,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// add r31,r31,r30
	ctx.r31.u64 = ctx.r31.u64 + ctx.r30.u64;
	// add r9,r9,r29
	ctx.r9.u64 = ctx.r9.u64 + ctx.r29.u64;
	// rlwinm r14,r31,2,0,29
	ctx.r14.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r31,r10,4,27,27
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0x10;
	// rlwinm r15,r10,2,27,29
	ctx.r15.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0x1C;
	// stw r31,-224(r1)
	PPC_STORE_U32(ctx.r1.u32 + -224, ctx.r31.u32);
	// add r31,r28,r10
	ctx.r31.u64 = ctx.r28.u64 + ctx.r10.u64;
	// rlwinm r30,r9,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r29,r14,r26
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r14.u32 + ctx.r26.u32);
	// addi r31,r31,-12
	ctx.r31.s64 = ctx.r31.s64 + -12;
	// mr r9,r4
	ctx.r9.u64 = ctx.r4.u64;
	// sraw r29,r29,r15
	temp.u32 = ctx.r15.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	xer.ca = (ctx.r29.s32 < 0) & (((ctx.r29.s32 >> temp.u32) << temp.u32) != ctx.r29.s32);
	ctx.r29.s64 = ctx.r29.s32 >> temp.u32;
	// stw r31,-4(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4, ctx.r31.u32);
	// srawi r10,r10,1
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 1;
	// lwz r15,-224(r1)
	ctx.r15.u64 = PPC_LOAD_U32(ctx.r1.u32 + -224);
	// clrlwi r29,r29,28
	ctx.r29.u64 = ctx.r29.u32 & 0xF;
	// add r30,r30,r10
	ctx.r30.u64 = ctx.r30.u64 + ctx.r10.u64;
	// addi r10,r29,1
	ctx.r10.s64 = ctx.r29.s64 + 1;
	// rlwinm r30,r30,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// add r22,r22,r10
	ctx.r22.u64 = ctx.r22.u64 + ctx.r10.u64;
	// stw r10,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r10.u32);
	// cmpwi cr6,r25,13
	cr6.compare<int32_t>(ctx.r25.s32, 13, xer);
	// lwzx r10,r30,r27
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r27.u32);
	// sraw r10,r10,r15
	temp.u32 = ctx.r15.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	xer.ca = (ctx.r10.s32 < 0) & (((ctx.r10.s32 >> temp.u32) << temp.u32) != ctx.r10.s32);
	ctx.r10.s64 = ctx.r10.s32 >> temp.u32;
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// stwx r10,r23,r8
	PPC_STORE_U32(ctx.r23.u32 + ctx.r8.u32, ctx.r10.u32);
	// ble cr6,0x832ce0f8
	if (!cr6.gt) goto loc_832CE0F8;
	// li r9,12
	ctx.r9.s64 = 12;
loc_832CE0F8:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// subf r10,r31,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r31.s64;
	// cmpwi cr6,r10,-12
	cr6.compare<int32_t>(ctx.r10.s32, -12, xer);
	// bge cr6,0x832ce10c
	if (!cr6.lt) goto loc_832CE10C;
	// li r10,-12
	ctx.r10.s64 = -12;
loc_832CE10C:
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// lwz r31,-4(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// rlwinm r30,r9,1,0,30
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// srawi r28,r10,3
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7) != 0);
	ctx.r28.s64 = ctx.r10.s32 >> 3;
	// stwx r10,r19,r11
	PPC_STORE_U32(ctx.r19.u32 + ctx.r11.u32, ctx.r10.u32);
	// add r29,r9,r30
	ctx.r29.u64 = ctx.r9.u64 + ctx.r30.u64;
	// rlwinm r30,r9,1,0,30
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// add r29,r29,r28
	ctx.r29.u64 = ctx.r29.u64 + ctx.r28.u64;
	// add r30,r9,r30
	ctx.r30.u64 = ctx.r9.u64 + ctx.r30.u64;
	// rlwinm r29,r29,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r31,r10
	ctx.r9.u64 = ctx.r31.u64 + ctx.r10.u64;
	// rlwinm r31,r10,2,27,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0x1C;
	// addi r9,r9,-12
	ctx.r9.s64 = ctx.r9.s64 + -12;
	// rlwinm r30,r30,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r29,r29,r26
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r26.u32);
	// rlwinm r28,r10,4,27,27
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0x10;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r4,r4,2
	ctx.r4.s64 = ctx.r4.s64 + 2;
	// sraw r31,r29,r31
	temp.u32 = ctx.r31.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	xer.ca = (ctx.r29.s32 < 0) & (((ctx.r29.s32 >> temp.u32) << temp.u32) != ctx.r29.s32);
	ctx.r31.s64 = ctx.r29.s32 >> temp.u32;
	// srawi r9,r10,1
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 1;
	// clrlwi r10,r31,28
	ctx.r10.u64 = ctx.r31.u32 & 0xF;
	// add r9,r30,r9
	ctx.r9.u64 = ctx.r30.u64 + ctx.r9.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r10,r21,r11
	PPC_STORE_U32(ctx.r21.u32 + ctx.r11.u32, ctx.r10.u32);
	// add r17,r17,r10
	ctx.r17.u64 = ctx.r17.u64 + ctx.r10.u64;
	// addi r8,r8,8
	ctx.r8.s64 = ctx.r8.s64 + 8;
	// cmpw cr6,r4,r18
	cr6.compare<int32_t>(ctx.r4.s32, ctx.r18.s32, xer);
	// lwzx r10,r9,r27
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r27.u32);
	// sraw r9,r10,r28
	temp.u32 = ctx.r28.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	xer.ca = (ctx.r10.s32 < 0) & (((ctx.r10.s32 >> temp.u32) << temp.u32) != ctx.r10.s32);
	ctx.r9.s64 = ctx.r10.s32 >> temp.u32;
	// clrlwi r10,r9,16
	ctx.r10.u64 = ctx.r9.u32 & 0xFFFF;
	// stwx r10,r20,r11
	PPC_STORE_U32(ctx.r20.u32 + ctx.r11.u32, ctx.r10.u32);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// blt cr6,0x832ce044
	if (cr6.lt) goto loc_832CE044;
loc_832CE194:
	// cmpw cr6,r4,r16
	cr6.compare<int32_t>(ctx.r4.s32, ctx.r16.s32, xer);
	// bge cr6,0x832ce240
	if (!cr6.lt) goto loc_832CE240;
	// addi r10,r4,-1
	ctx.r10.s64 = ctx.r4.s64 + -1;
	// cmpwi cr6,r4,13
	cr6.compare<int32_t>(ctx.r4.s32, 13, xer);
	// ble cr6,0x832ce1ac
	if (!cr6.gt) goto loc_832CE1AC;
	// li r10,12
	ctx.r10.s64 = 12;
loc_832CE1AC:
	// rlwinm r9,r4,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// add r31,r9,r7
	ctx.r31.u64 = ctx.r9.u64 + ctx.r7.u64;
	// lwzx r11,r9,r7
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r7.u32);
	// lwz r3,-4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// subf r11,r3,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r3.s64;
	// cmpwi cr6,r11,-12
	cr6.compare<int32_t>(ctx.r11.s32, -12, xer);
	// bge cr6,0x832ce1cc
	if (!cr6.lt) goto loc_832CE1CC;
	// li r11,-12
	ctx.r11.s64 = -12;
loc_832CE1CC:
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// rlwinm r8,r10,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// srawi r4,r11,3
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r4.s64 = ctx.r11.s32 >> 3;
	// add r7,r10,r8
	ctx.r7.u64 = ctx.r10.u64 + ctx.r8.u64;
	// rlwinm r8,r10,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r7,r7,r4
	ctx.r7.u64 = ctx.r7.u64 + ctx.r4.u64;
	// rlwinm r4,r11,2,27,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x1C;
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// addi r30,r1,-208
	ctx.r30.s64 = ctx.r1.s64 + -208;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r3,r11
	ctx.r10.u64 = ctx.r3.u64 + ctx.r11.u64;
	// lwzx r7,r7,r26
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r26.u32);
	// rlwinm r29,r11,4,27,27
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0x10;
	// sraw r4,r7,r4
	temp.u32 = ctx.r4.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	xer.ca = (ctx.r7.s32 < 0) & (((ctx.r7.s32 >> temp.u32) << temp.u32) != ctx.r7.s32);
	ctx.r4.s64 = ctx.r7.s32 >> temp.u32;
	// stwx r11,r9,r30
	PPC_STORE_U32(ctx.r9.u32 + ctx.r30.u32, ctx.r11.u32);
	// srawi r7,r11,1
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r7.s64 = ctx.r11.s32 >> 1;
	// clrlwi r11,r4,28
	ctx.r11.u64 = ctx.r4.u32 & 0xF;
	// add r3,r8,r7
	ctx.r3.u64 = ctx.r8.u64 + ctx.r7.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r8,r3,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r11,r9,r5
	PPC_STORE_U32(ctx.r9.u32 + ctx.r5.u32, ctx.r11.u32);
	// addi r3,r11,5
	ctx.r3.s64 = ctx.r11.s64 + 5;
	// addi r7,r10,-12
	ctx.r7.s64 = ctx.r10.s64 + -12;
	// stw r7,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r7.u32);
	// lwzx r5,r8,r27
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r27.u32);
	// sraw r4,r5,r29
	temp.u32 = ctx.r29.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	xer.ca = (ctx.r5.s32 < 0) & (((ctx.r5.s32 >> temp.u32) << temp.u32) != ctx.r5.s32);
	ctx.r4.s64 = ctx.r5.s32 >> temp.u32;
	// clrlwi r11,r4,16
	ctx.r11.u64 = ctx.r4.u32 & 0xFFFF;
	// stwx r11,r9,r6
	PPC_STORE_U32(ctx.r9.u32 + ctx.r6.u32, ctx.r11.u32);
loc_832CE240:
	// add r11,r17,r22
	ctx.r11.u64 = ctx.r17.u64 + ctx.r22.u64;
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
loc_832CE248:
	// b 0x831cdb00
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832CE24C"))) PPC_WEAK_FUNC(sub_832CE24C);
PPC_FUNC_IMPL(__imp__sub_832CE24C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832CE250"))) PPC_WEAK_FUNC(sub_832CE250);
PPC_FUNC_IMPL(__imp__sub_832CE250) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x832CE258;
	__savegprlr_24(ctx, base);
	// lis r11,-31771
	ctx.r11.s64 = -2082144256;
	// lis r8,-31771
	ctx.r8.s64 = -2082144256;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,-30384
	ctx.r9.s64 = ctx.r11.s64 + -30384;
	// lis r7,-31738
	ctx.r7.s64 = -2079981568;
	// lis r3,-31738
	ctx.r3.s64 = -2079981568;
	// addi r11,r8,-30448
	ctx.r11.s64 = ctx.r8.s64 + -30448;
	// lis r29,-31771
	ctx.r29.s64 = -2082144256;
	// lis r30,-31772
	ctx.r30.s64 = -2082209792;
	// lwzx r9,r10,r9
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// lis r8,-31771
	ctx.r8.s64 = -2082144256;
	// lis r31,-31772
	ctx.r31.s64 = -2082209792;
	// addi r3,r3,22496
	ctx.r3.s64 = ctx.r3.s64 + 22496;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// addi r7,r7,22528
	ctx.r7.s64 = ctx.r7.s64 + 22528;
	// rlwinm r4,r4,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r29,r29,-30352
	ctx.r29.s64 = ctx.r29.s64 + -30352;
	// addi r26,r30,32436
	ctx.r26.s64 = ctx.r30.s64 + 32436;
	// addi r8,r8,-30480
	ctx.r8.s64 = ctx.r8.s64 + -30480;
	// lfsx f0,r10,r3
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	ctx.f0.f64 = double(temp.f32);
	// addi r31,r31,32092
	ctx.r31.s64 = ctx.r31.s64 + 32092;
	// extsh r30,r9
	ctx.r30.s64 = ctx.r9.s16;
	// lfsx f13,r4,r7
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r7.u32);
	ctx.f13.f64 = double(temp.f32);
	// lfsx f12,r10,r29
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r29.u32);
	ctx.f12.f64 = double(temp.f32);
	// li r28,0
	ctx.r28.s64 = 0;
	// lwzx r26,r10,r26
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r26.u32);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lwzx r25,r10,r8
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// addi r9,r30,1
	ctx.r9.s64 = ctx.r30.s64 + 1;
	// lwzx r27,r10,r31
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// li r29,32
	ctx.r29.s64 = 32;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble cr6,0x832ce540
	if (!cr6.gt) goto loc_832CE540;
	// mr r24,r11
	ctx.r24.u64 = ctx.r11.u64;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f11,9008(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f11.f64 = double(temp.f32);
loc_832CE2EC:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// cmpwi cr6,r25,4
	cr6.compare<int32_t>(ctx.r25.s32, 4, xer);
	// blt cr6,0x832ce458
	if (cr6.lt) goto loc_832CE458;
	// addi r31,r25,-3
	ctx.r31.s64 = ctx.r25.s64 + -3;
loc_832CE308:
	// lfs f0,0(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fabs f10,f0
	ctx.f10.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// fmadd f9,f10,f13,f12
	ctx.f9.f64 = ctx.f10.f64 * ctx.f13.f64 + ctx.f12.f64;
	// fctiwz f8,f9
	ctx.f8.s64 = (ctx.f9.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f9.f64));
	// stfd f8,-80(r1)
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.f8.u64);
	// lwz r10,-76(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -76);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x832ce350
	if (cr6.eq) goto loc_832CE350;
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// fcmpu cr6,f0,f11
	cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// rlwinm r8,r8,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// ble cr6,0x832ce33c
	if (!cr6.gt) goto loc_832CE33C;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
loc_832CE33C:
	// cmpw cr6,r10,r30
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r30.s32, xer);
	// bgt cr6,0x832ce34c
	if (cr6.gt) goto loc_832CE34C;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bge cr6,0x832ce350
	if (!cr6.lt) goto loc_832CE350;
loc_832CE34C:
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
loc_832CE350:
	// lfs f0,4(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// mullw r11,r11,r9
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r9.s32);
	// fabs f10,f0
	ctx.f10.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// fmadd f9,f10,f13,f12
	ctx.f9.f64 = ctx.f10.f64 * ctx.f13.f64 + ctx.f12.f64;
	// fctiwz f8,f9
	ctx.f8.s64 = (ctx.f9.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f9.f64));
	// stfd f8,-80(r1)
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.f8.u64);
	// lwz r11,-76(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -76);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x832ce3a0
	if (cr6.eq) goto loc_832CE3A0;
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// fcmpu cr6,f0,f11
	cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// rlwinm r8,r8,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// ble cr6,0x832ce38c
	if (!cr6.gt) goto loc_832CE38C;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
loc_832CE38C:
	// cmpw cr6,r11,r30
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r30.s32, xer);
	// bgt cr6,0x832ce39c
	if (cr6.gt) goto loc_832CE39C;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bge cr6,0x832ce3a0
	if (!cr6.lt) goto loc_832CE3A0;
loc_832CE39C:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_832CE3A0:
	// lfs f0,8(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// mullw r10,r10,r9
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// fabs f10,f0
	ctx.f10.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// fmadd f9,f10,f13,f12
	ctx.f9.f64 = ctx.f10.f64 * ctx.f13.f64 + ctx.f12.f64;
	// fctiwz f8,f9
	ctx.f8.s64 = (ctx.f9.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f9.f64));
	// stfd f8,-80(r1)
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.f8.u64);
	// lwz r11,-76(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -76);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x832ce3f0
	if (cr6.eq) goto loc_832CE3F0;
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// fcmpu cr6,f0,f11
	cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// rlwinm r8,r8,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// ble cr6,0x832ce3dc
	if (!cr6.gt) goto loc_832CE3DC;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
loc_832CE3DC:
	// cmpw cr6,r11,r30
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r30.s32, xer);
	// bgt cr6,0x832ce3ec
	if (cr6.gt) goto loc_832CE3EC;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bge cr6,0x832ce3f0
	if (!cr6.lt) goto loc_832CE3F0;
loc_832CE3EC:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_832CE3F0:
	// lfs f0,12(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// mullw r10,r10,r9
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// fabs f10,f0
	ctx.f10.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// fmadd f9,f10,f13,f12
	ctx.f9.f64 = ctx.f10.f64 * ctx.f13.f64 + ctx.f12.f64;
	// fctiwz f8,f9
	ctx.f8.s64 = (ctx.f9.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f9.f64));
	// stfd f8,-80(r1)
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.f8.u64);
	// lwz r11,-76(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -76);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x832ce440
	if (cr6.eq) goto loc_832CE440;
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// fcmpu cr6,f0,f11
	cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// rlwinm r8,r8,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// ble cr6,0x832ce42c
	if (!cr6.gt) goto loc_832CE42C;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
loc_832CE42C:
	// cmpw cr6,r11,r30
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r30.s32, xer);
	// bgt cr6,0x832ce43c
	if (cr6.gt) goto loc_832CE43C;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bge cr6,0x832ce440
	if (!cr6.lt) goto loc_832CE440;
loc_832CE43C:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_832CE440:
	// mullw r10,r10,r9
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r5,r5,16
	ctx.r5.s64 = ctx.r5.s64 + 16;
	// cmpw cr6,r7,r31
	cr6.compare<int32_t>(ctx.r7.s32, ctx.r31.s32, xer);
	// blt cr6,0x832ce308
	if (cr6.lt) goto loc_832CE308;
loc_832CE458:
	// cmpw cr6,r7,r25
	cr6.compare<int32_t>(ctx.r7.s32, ctx.r25.s32, xer);
	// bge cr6,0x832ce4c0
	if (!cr6.lt) goto loc_832CE4C0;
	// subf r10,r7,r25
	ctx.r10.s64 = ctx.r25.s64 - ctx.r7.s64;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_832CE468:
	// lfs f0,0(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fabs f10,f0
	ctx.f10.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// fmadd f9,f10,f13,f12
	ctx.f9.f64 = ctx.f10.f64 * ctx.f13.f64 + ctx.f12.f64;
	// fctiwz f8,f9
	ctx.f8.s64 = (ctx.f9.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f9.f64));
	// stfd f8,-80(r1)
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.f8.u64);
	// lwz r10,-76(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -76);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x832ce4b0
	if (cr6.eq) goto loc_832CE4B0;
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// fcmpu cr6,f0,f11
	cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// rlwinm r8,r8,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// ble cr6,0x832ce49c
	if (!cr6.gt) goto loc_832CE49C;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
loc_832CE49C:
	// cmpw cr6,r10,r30
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r30.s32, xer);
	// bgt cr6,0x832ce4ac
	if (cr6.gt) goto loc_832CE4AC;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bge cr6,0x832ce4b0
	if (!cr6.lt) goto loc_832CE4B0;
loc_832CE4AC:
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
loc_832CE4B0:
	// mullw r11,r11,r9
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r9.s32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r5,r5,4
	ctx.r5.s64 = ctx.r5.s64 + 4;
	// bdnz 0x832ce468
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_832CE468;
loc_832CE4C0:
	// srawi r10,r11,3
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 3;
	// rlwinm r7,r11,2,27,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x1C;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r31,r11,4,27,27
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0x10;
	// lwzx r10,r10,r27
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r27.u32);
	// sraw r7,r10,r7
	temp.u32 = ctx.r7.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	xer.ca = (ctx.r10.s32 < 0) & (((ctx.r10.s32 >> temp.u32) << temp.u32) != ctx.r10.s32);
	ctx.r7.s64 = ctx.r10.s32 >> temp.u32;
	// srawi r10,r11,1
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
	// clrlwi r11,r7,28
	ctx.r11.u64 = ctx.r7.u32 & 0xF;
	// rlwinm r7,r10,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// lwzx r7,r7,r26
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r26.u32);
	// subf. r11,r10,r29
	ctx.r11.s64 = ctx.r29.s64 - ctx.r10.s64;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// add r3,r10,r3
	ctx.r3.u64 = ctx.r10.u64 + ctx.r3.u64;
	// sraw r10,r7,r31
	temp.u32 = ctx.r31.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	xer.ca = (ctx.r7.s32 < 0) & (((ctx.r7.s32 >> temp.u32) << temp.u32) != ctx.r7.s32);
	ctx.r10.s64 = ctx.r7.s32 >> temp.u32;
	// clrlwi r7,r10,16
	ctx.r7.u64 = ctx.r10.u32 & 0xFFFF;
	// slw r10,r7,r4
	ctx.r10.u64 = ctx.r4.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r4.u8 & 0x3F));
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// blt 0x832ce51c
	if (cr0.lt) goto loc_832CE51C;
	// slw r10,r10,r11
	ctx.r10.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r11.u8 & 0x3F));
	// add r28,r10,r28
	ctx.r28.u64 = ctx.r10.u64 + ctx.r28.u64;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// b 0x832ce538
	goto loc_832CE538;
loc_832CE51C:
	// neg r8,r11
	ctx.r8.s64 = -ctx.r11.s64;
	// sraw r11,r10,r8
	temp.u32 = ctx.r8.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	xer.ca = (ctx.r10.s32 < 0) & (((ctx.r10.s32 >> temp.u32) << temp.u32) != ctx.r10.s32);
	ctx.r11.s64 = ctx.r10.s32 >> temp.u32;
	// add r7,r11,r28
	ctx.r7.u64 = ctx.r11.u64 + ctx.r28.u64;
	// subfic r29,r8,32
	xer.ca = ctx.r8.u32 <= 32;
	ctx.r29.s64 = 32 - ctx.r8.s64;
	// stw r7,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r7.u32);
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// slw r28,r10,r29
	ctx.r28.u64 = ctx.r29.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r29.u8 & 0x3F));
loc_832CE538:
	// addic. r24,r24,-1
	xer.ca = ctx.r24.u32 > 0;
	ctx.r24.s64 = ctx.r24.s64 + -1;
	cr0.compare<int32_t>(ctx.r24.s32, 0, xer);
	// bne 0x832ce2ec
	if (!cr0.eq) goto loc_832CE2EC;
loc_832CE540:
	// stw r28,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r28.u32);
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832CE548"))) PPC_WEAK_FUNC(sub_832CE548);
PPC_FUNC_IMPL(__imp__sub_832CE548) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdab0
	ctx.lr = 0x832CE550;
	__savegprlr_14(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r21,r10
	ctx.r21.u64 = ctx.r10.u64;
	// stw r4,268(r1)
	PPC_STORE_U32(ctx.r1.u32 + 268, ctx.r4.u32);
	// li r14,0
	ctx.r14.s64 = 0;
	// srawi r11,r4,1
	xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r4.s32 >> 1;
	// mr r15,r5
	ctx.r15.u64 = ctx.r5.u64;
	// mr r17,r6
	ctx.r17.u64 = ctx.r6.u64;
	// mr r20,r7
	ctx.r20.u64 = ctx.r7.u64;
	// stw r14,0(r21)
	PPC_STORE_U32(ctx.r21.u32 + 0, ctx.r14.u32);
	// mr r24,r8
	ctx.r24.u64 = ctx.r8.u64;
	// mr r16,r9
	ctx.r16.u64 = ctx.r9.u64;
	// addic. r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// mr r29,r14
	ctx.r29.u64 = ctx.r14.u64;
	// ble 0x832ce5b8
	if (!cr0.gt) goto loc_832CE5B8;
loc_832CE588:
	// lwz r11,0(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// rotlwi r7,r8,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// stw r8,0(r21)
	PPC_STORE_U32(ctx.r21.u32 + 0, ctx.r8.u32);
	// lwzx r6,r9,r16
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r16.u32);
	// cmpw cr6,r7,r10
	cr6.compare<int32_t>(ctx.r7.s32, ctx.r10.s32, xer);
	// rlwinm r11,r6,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r24
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r24.u32);
	// addi r5,r9,1
	ctx.r5.s64 = ctx.r9.s64 + 1;
	// stwx r5,r11,r24
	PPC_STORE_U32(ctx.r11.u32 + ctx.r24.u32, ctx.r5.u32);
	// blt cr6,0x832ce588
	if (cr6.lt) goto loc_832CE588;
loc_832CE5B8:
	// lis r11,-31738
	ctx.r11.s64 = -2079981568;
	// lwz r18,332(r1)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + 332);
	// lwz r30,324(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 324);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// lwz r19,22784(r11)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r11.u32 + 22784);
	// ble cr6,0x832ce63c
	if (!cr6.gt) goto loc_832CE63C;
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
	// mr r27,r18
	ctx.r27.u64 = ctx.r18.u64;
	// rlwinm r25,r19,2,0,29
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r28,r17
	ctx.r28.u64 = ctx.r17.u64;
	// subf r23,r20,r24
	ctx.r23.s64 = ctx.r24.s64 - ctx.r20.s64;
	// subf r22,r30,r20
	ctx.r22.s64 = ctx.r20.s64 - ctx.r30.s64;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
loc_832CE5EC:
	// add r11,r22,r31
	ctx.r11.u64 = ctx.r22.u64 + ctx.r31.u64;
	// lwzx r3,r11,r23
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r23.u32);
	// cmpwi cr6,r3,7
	cr6.compare<int32_t>(ctx.r3.s32, 7, xer);
	// bge cr6,0x832ce61c
	if (!cr6.lt) goto loc_832CE61C;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x832ce61c
	if (cr6.lt) goto loc_832CE61C;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x832ce250
	ctx.lr = 0x832CE614;
	sub_832CE250(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// b 0x832ce620
	goto loc_832CE620;
loc_832CE61C:
	// stw r14,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r14.u32);
loc_832CE620:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addic. r26,r26,-1
	xer.ca = ctx.r26.u32 > 0;
	ctx.r26.s64 = ctx.r26.s64 + -1;
	cr0.compare<int32_t>(ctx.r26.s32, 0, xer);
	// add r28,r25,r28
	ctx.r28.u64 = ctx.r25.u64 + ctx.r28.u64;
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r27,r27,16
	ctx.r27.s64 = ctx.r27.s64 + 16;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// bne 0x832ce5ec
	if (!cr0.eq) goto loc_832CE5EC;
loc_832CE63C:
	// cmpw cr6,r29,r15
	cr6.compare<int32_t>(ctx.r29.s32, ctx.r15.s32, xer);
	// bge cr6,0x832ce6d0
	if (!cr6.lt) goto loc_832CE6D0;
loc_832CE644:
	// lwz r11,0(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble cr6,0x832ce6cc
	if (!cr6.gt) goto loc_832CE6CC;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r11,0(r21)
	PPC_STORE_U32(ctx.r21.u32 + 0, ctx.r11.u32);
	// lwzx r11,r10,r16
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r16.u32);
	// rlwinm r31,r11,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r31,r24
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r24.u32);
	// addic. r10,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r10.s64 = ctx.r9.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stwx r10,r31,r24
	PPC_STORE_U32(ctx.r31.u32 + ctx.r24.u32, ctx.r10.u32);
	// bge 0x832ce678
	if (!cr0.lt) goto loc_832CE678;
	// stwx r14,r31,r24
	PPC_STORE_U32(ctx.r31.u32 + ctx.r24.u32, ctx.r14.u32);
loc_832CE678:
	// lwzx r3,r31,r24
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r24.u32);
	// lwzx r10,r31,r30
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r30.u32);
	// cmpwi cr6,r3,7
	cr6.compare<int32_t>(ctx.r3.s32, 7, xer);
	// subf r29,r10,r29
	ctx.r29.s64 = ctx.r29.s64 - ctx.r10.s64;
	// bge cr6,0x832ce6b8
	if (!cr6.lt) goto loc_832CE6B8;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x832ce6b8
	if (cr6.lt) goto loc_832CE6B8;
	// mullw r10,r19,r11
	ctx.r10.s64 = int64_t(ctx.r19.s32) * int64_t(ctx.r11.s32);
	// lwzx r4,r31,r20
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r20.u32);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r5,r10,r17
	ctx.r5.u64 = ctx.r10.u64 + ctx.r17.u64;
	// add r6,r11,r18
	ctx.r6.u64 = ctx.r11.u64 + ctx.r18.u64;
	// bl 0x832ce250
	ctx.lr = 0x832CE6B0;
	sub_832CE250(ctx, base);
	// stwx r3,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r3.u32);
	// b 0x832ce6bc
	goto loc_832CE6BC;
loc_832CE6B8:
	// stwx r14,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r14.u32);
loc_832CE6BC:
	// lwzx r11,r31,r30
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r30.u32);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// cmpw cr6,r29,r15
	cr6.compare<int32_t>(ctx.r29.s32, ctx.r15.s32, xer);
	// blt cr6,0x832ce644
	if (cr6.lt) goto loc_832CE644;
loc_832CE6CC:
	// cmpw cr6,r29,r15
	cr6.compare<int32_t>(ctx.r29.s32, ctx.r15.s32, xer);
loc_832CE6D0:
	// ble cr6,0x832ce754
	if (!cr6.gt) goto loc_832CE754;
loc_832CE6D4:
	// lwz r11,0(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// lwz r10,268(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 268);
	// addi r28,r11,1
	ctx.r28.s64 = ctx.r11.s64 + 1;
	// cmpw cr6,r28,r10
	cr6.compare<int32_t>(ctx.r28.s32, ctx.r10.s32, xer);
	// bge cr6,0x832ce754
	if (!cr6.lt) goto loc_832CE754;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r16
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r16.u32);
	// rlwinm r31,r11,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r31,r24
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r24.u32);
	// lwzx r9,r31,r30
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r30.u32);
	// addi r3,r10,1
	ctx.r3.s64 = ctx.r10.s64 + 1;
	// subf r29,r9,r29
	ctx.r29.s64 = ctx.r29.s64 - ctx.r9.s64;
	// stwx r3,r31,r24
	PPC_STORE_U32(ctx.r31.u32 + ctx.r24.u32, ctx.r3.u32);
	// cmpwi cr6,r3,7
	cr6.compare<int32_t>(ctx.r3.s32, 7, xer);
	// bge cr6,0x832ce73c
	if (!cr6.lt) goto loc_832CE73C;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x832ce73c
	if (cr6.lt) goto loc_832CE73C;
	// mullw r10,r19,r11
	ctx.r10.s64 = int64_t(ctx.r19.s32) * int64_t(ctx.r11.s32);
	// lwzx r4,r31,r20
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r20.u32);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r5,r10,r17
	ctx.r5.u64 = ctx.r10.u64 + ctx.r17.u64;
	// add r6,r11,r18
	ctx.r6.u64 = ctx.r11.u64 + ctx.r18.u64;
	// bl 0x832ce250
	ctx.lr = 0x832CE734;
	sub_832CE250(ctx, base);
	// stwx r3,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r3.u32);
	// b 0x832ce740
	goto loc_832CE740;
loc_832CE73C:
	// stwx r14,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r14.u32);
loc_832CE740:
	// lwzx r11,r31,r30
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r30.u32);
	// stw r28,0(r21)
	PPC_STORE_U32(ctx.r21.u32 + 0, ctx.r28.u32);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// cmpw cr6,r29,r15
	cr6.compare<int32_t>(ctx.r29.s32, ctx.r15.s32, xer);
	// bgt cr6,0x832ce6d4
	if (cr6.gt) goto loc_832CE6D4;
loc_832CE754:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x831cdb00
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832CE75C"))) PPC_WEAK_FUNC(sub_832CE75C);
PPC_FUNC_IMPL(__imp__sub_832CE75C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832CE760"))) PPC_WEAK_FUNC(sub_832CE760);
PPC_FUNC_IMPL(__imp__sub_832CE760) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad0
	ctx.lr = 0x832CE768;
	__savegprlr_22(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// mr r22,r7
	ctx.r22.u64 = ctx.r7.u64;
	// addi r10,r1,132
	ctx.r10.s64 = ctx.r1.s64 + 132;
	// addi r9,r1,116
	ctx.r9.s64 = ctx.r1.s64 + 116;
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// addi r7,r1,120
	ctx.r7.s64 = ctx.r1.s64 + 120;
	// addi r6,r1,104
	ctx.r6.s64 = ctx.r1.s64 + 104;
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// addi r4,r1,136
	ctx.r4.s64 = ctx.r1.s64 + 136;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832d01c0
	ctx.lr = 0x832CE7A4;
	sub_832D01C0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x832cec34
	if (!cr6.eq) goto loc_832CEC34;
	// addi r7,r1,108
	ctx.r7.s64 = ctx.r1.s64 + 108;
	// addi r6,r1,124
	ctx.r6.s64 = ctx.r1.s64 + 124;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832d0270
	ctx.lr = 0x832CE7C4;
	sub_832D0270(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x832cec34
	if (!cr6.eq) goto loc_832CEC34;
	// lwz r30,96(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r25,r31,320
	ctx.r25.s64 = ctx.r31.s64 + 320;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// lwz r8,116(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// addi r5,r31,256
	ctx.r5.s64 = ctx.r31.s64 + 256;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832cddc0
	ctx.lr = 0x832CE7F0;
	sub_832CDDC0(ctx, base);
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r10,108(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// addi r29,r31,128
	ctx.r29.s64 = ctx.r31.s64 + 128;
	// lwz r9,104(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// addi r28,r31,64
	ctx.r28.s64 = ctx.r31.s64 + 64;
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r11.s64;
	// lwz r5,112(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// subf r4,r9,r8
	ctx.r4.s64 = ctx.r8.s64 - ctx.r9.s64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// subf r11,r5,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r5.s64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// subf r27,r3,r11
	ctx.r27.s64 = ctx.r11.s64 - ctx.r3.s64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x832d0958
	ctx.lr = 0x832CE830;
	sub_832D0958(ctx, base);
	// lwz r23,96(r1)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmpwi cr6,r23,0
	cr6.compare<int32_t>(ctx.r23.s32, 0, xer);
	// ble cr6,0x832ce86c
	if (!cr6.gt) goto loc_832CE86C;
	// addi r10,r23,-1
	ctx.r10.s64 = ctx.r23.s64 + -1;
	// addi r11,r31,-4
	ctx.r11.s64 = ctx.r31.s64 + -4;
	// rlwinm r10,r10,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_832CE850:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r10,r10,24
	ctx.r10.s64 = ctx.r10.s64 + 24;
	// addi r9,r9,24
	ctx.r9.s64 = ctx.r9.s64 + 24;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// stwu r9,8(r11)
	ea = 8 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x832ce850
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_832CE850;
loc_832CE86C:
	// li r10,7
	ctx.r10.s64 = 7;
	// addi r24,r31,384
	ctx.r24.s64 = ctx.r31.s64 + 384;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r11,r24,-8
	ctx.r11.s64 = ctx.r24.s64 + -8;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_832CE880:
	// stdu r9,8(r11)
	ea = 8 + ctx.r11.u32;
	PPC_STORE_U64(ea, ctx.r9.u64);
	ctx.r11.u32 = ea;
	// bdnz 0x832ce880
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_832CE880;
	// addi r30,r31,448
	ctx.r30.s64 = ctx.r31.s64 + 448;
	// lwz r4,120(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// stw r24,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r24.u32);
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x832ce548
	ctx.lr = 0x832CE8B8;
	sub_832CE548(ctx, base);
	// addi r11,r23,64
	ctx.r11.s64 = ctx.r23.s64 + 64;
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// addi r9,r23,80
	ctx.r9.s64 = ctx.r23.s64 + 80;
	// lwz r8,104(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// rlwinm r7,r11,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r6,124(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// subfic r11,r10,16
	xer.ca = ctx.r10.u32 <= 16;
	ctx.r11.s64 = 16 - ctx.r10.s64;
	// lwz r5,128(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// rlwinm r4,r9,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// slw r10,r6,r11
	ctx.r10.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r6.u32 << (ctx.r11.u8 & 0x3F));
	// stwx r8,r7,r31
	PPC_STORE_U32(ctx.r7.u32 + ctx.r31.u32, ctx.r8.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stwx r5,r4,r31
	PPC_STORE_U32(ctx.r4.u32 + ctx.r31.u32, ctx.r5.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// cmpwi cr6,r23,0
	cr6.compare<int32_t>(ctx.r23.s32, 0, xer);
	// blt cr6,0x832ce988
	if (cr6.lt) goto loc_832CE988;
	// addi r8,r23,1
	ctx.r8.s64 = ctx.r23.s64 + 1;
	// addi r4,r22,-2
	ctx.r4.s64 = ctx.r22.s64 + -2;
	// mr r31,r25
	ctx.r31.u64 = ctx.r25.u64;
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
loc_832CE910:
	// lwz r5,-64(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -64);
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// subf. r8,r11,r5
	ctx.r8.s64 = ctx.r5.s64 - ctx.r11.s64;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// blt 0x832ce96c
	if (cr0.lt) goto loc_832CE96C;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// srw r10,r7,r8
	ctx.r10.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r7.u32 >> (ctx.r8.u8 & 0x3F));
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r11,r9,1
	ctx.r11.s64 = ctx.r9.s64 + 1;
	// extsh r5,r10
	ctx.r5.s64 = ctx.r10.s16;
	// addi r10,r11,-15
	ctx.r10.s64 = ctx.r11.s64 + -15;
	// clrlwi r29,r5,16
	ctx.r29.u64 = ctx.r5.u32 & 0xFFFF;
	// sthu r5,2(r4)
	ea = 2 + ctx.r4.u32;
	PPC_STORE_U16(ea, ctx.r5.u16);
	ctx.r4.u32 = ea;
	// subfic r10,r10,0
	xer.ca = ctx.r10.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r10.s64;
	// slw r10,r29,r9
	ctx.r10.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r29.u32 << (ctx.r9.u8 & 0x3F));
	// subfe r9,r5,r5
	temp.u8 = (~ctx.r5.u32 + ctx.r5.u32 < ~ctx.r5.u32) | (~ctx.r5.u32 + ctx.r5.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~ctx.r5.u64 + ctx.r5.u64 + xer.ca;
	xer.ca = temp.u8;
	// subfic r5,r8,16
	xer.ca = ctx.r8.u32 <= 16;
	ctx.r5.s64 = 16 - ctx.r8.s64;
	// and r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 & ctx.r11.u64;
	// slw r11,r7,r5
	ctx.r11.u64 = ctx.r5.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r5.u8 & 0x3F));
	// xor r3,r10,r3
	ctx.r3.u64 = ctx.r10.u64 ^ ctx.r3.u64;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// subfic r11,r8,16
	xer.ca = ctx.r8.u32 <= 16;
	ctx.r11.s64 = 16 - ctx.r8.s64;
	// b 0x832ce980
	goto loc_832CE980;
loc_832CE96C:
	// neg r8,r8
	ctx.r8.s64 = -ctx.r8.s64;
	// subf r11,r5,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r5.s64;
	// slw r8,r7,r8
	ctx.r8.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r8.u8 & 0x3F));
	// add r7,r8,r10
	ctx.r7.u64 = ctx.r8.u64 + ctx.r10.u64;
	// extsh r10,r7
	ctx.r10.s64 = ctx.r7.s16;
loc_832CE980:
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// bdnz 0x832ce910
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_832CE910;
loc_832CE988:
	// lwz r27,108(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// li r26,0
	ctx.r26.s64 = 0;
	// cmpwi cr6,r23,0
	cr6.compare<int32_t>(ctx.r23.s32, 0, xer);
	// ble cr6,0x832cea70
	if (!cr6.gt) goto loc_832CEA70;
loc_832CE998:
	// rlwinm r4,r6,4,0,27
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 4) & 0xFFFFFFF0;
	// cmpw cr6,r4,r27
	cr6.compare<int32_t>(ctx.r4.s32, ctx.r27.s32, xer);
	// bge cr6,0x832cea70
	if (!cr6.lt) goto loc_832CEA70;
	// lwz r29,0(r24)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// li r8,32
	ctx.r8.s64 = 32;
	// cmpwi cr6,r29,32
	cr6.compare<int32_t>(ctx.r29.s32, 32, xer);
	// bgt cr6,0x832ce9b8
	if (cr6.gt) goto loc_832CE9B8;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
loc_832CE9B8:
	// lwz r7,0(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r31,r30,4
	ctx.r31.s64 = ctx.r30.s64 + 4;
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(ctx.r29.s32, 0, xer);
	// ble cr6,0x832cea5c
	if (!cr6.gt) goto loc_832CEA5C;
	// rlwinm r5,r6,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r28,r31,-4
	ctx.r28.s64 = ctx.r31.s64 + -4;
	// add r5,r5,r22
	ctx.r5.u64 = ctx.r5.u64 + ctx.r22.u64;
	// addi r31,r5,-2
	ctx.r31.s64 = ctx.r5.s64 + -2;
loc_832CE9D8:
	// cmpw cr6,r4,r27
	cr6.compare<int32_t>(ctx.r4.s32, ctx.r27.s32, xer);
	// bge cr6,0x832cea5c
	if (!cr6.lt) goto loc_832CEA5C;
	// cmpw cr6,r8,r11
	cr6.compare<int32_t>(ctx.r8.s32, ctx.r11.s32, xer);
	// blt cr6,0x832cec3c
	if (cr6.lt) goto loc_832CEC3C;
	// subfic r5,r11,32
	xer.ca = ctx.r11.u32 <= 32;
	ctx.r5.s64 = 32 - ctx.r11.s64;
	// subf r8,r11,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r11.s64;
	// srw r5,r7,r5
	ctx.r5.u64 = ctx.r5.u8 & 0x20 ? 0 : (ctx.r7.u32 >> (ctx.r5.u8 & 0x3F));
	// add r10,r5,r10
	ctx.r10.u64 = ctx.r5.u64 + ctx.r10.u64;
	// slw r7,r7,r11
	ctx.r7.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r11.u8 & 0x3F));
	// extsh r5,r10
	ctx.r5.s64 = ctx.r10.s16;
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// clrlwi r11,r5,16
	ctx.r11.u64 = ctx.r5.u32 & 0xFFFF;
	// sthu r5,2(r31)
	ea = 2 + ctx.r31.u32;
	PPC_STORE_U16(ea, ctx.r5.u16);
	ctx.r31.u32 = ea;
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// slw r10,r11,r9
	ctx.r10.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r9.u8 & 0x3F));
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// xor r3,r10,r3
	ctx.r3.u64 = ctx.r10.u64 ^ ctx.r3.u64;
	// addi r11,r9,-15
	ctx.r11.s64 = ctx.r9.s64 + -15;
	// li r10,0
	ctx.r10.s64 = 0;
	// subfic r5,r11,0
	xer.ca = ctx.r11.u32 <= 0;
	ctx.r5.s64 = 0 - ctx.r11.s64;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// subfe r5,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r5.u64 = ~ctx.r11.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// li r11,16
	ctx.r11.s64 = 16;
	// and r9,r5,r9
	ctx.r9.u64 = ctx.r5.u64 & ctx.r9.u64;
	// bne cr6,0x832cea54
	if (!cr6.eq) goto loc_832CEA54;
loc_832CEA3C:
	// addi r29,r29,-32
	ctx.r29.s64 = ctx.r29.s64 + -32;
	// lwzu r7,4(r28)
	ea = 4 + ctx.r28.u32;
	ctx.r7.u64 = PPC_LOAD_U32(ea);
	ctx.r28.u32 = ea;
	// li r8,32
	ctx.r8.s64 = 32;
	// cmpwi cr6,r29,32
	cr6.compare<int32_t>(ctx.r29.s32, 32, xer);
	// bgt cr6,0x832cea54
	if (cr6.gt) goto loc_832CEA54;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
loc_832CEA54:
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(ctx.r29.s32, 0, xer);
	// bgt cr6,0x832ce9d8
	if (cr6.gt) goto loc_832CE9D8;
loc_832CEA5C:
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// addi r24,r24,4
	ctx.r24.s64 = ctx.r24.s64 + 4;
	// cmpw cr6,r26,r23
	cr6.compare<int32_t>(ctx.r26.s32, ctx.r23.s32, xer);
	// blt cr6,0x832ce998
	if (cr6.lt) goto loc_832CE998;
loc_832CEA70:
	// rlwinm r8,r6,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 4) & 0xFFFFFFF0;
	// cmpw cr6,r8,r27
	cr6.compare<int32_t>(ctx.r8.s32, ctx.r27.s32, xer);
	// bge cr6,0x832ceae0
	if (!cr6.lt) goto loc_832CEAE0;
	// rlwinm r7,r6,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// lis r5,0
	ctx.r5.s64 = 0;
	// add r7,r7,r22
	ctx.r7.u64 = ctx.r7.u64 + ctx.r22.u64;
	// ori r4,r5,65535
	ctx.r4.u64 = ctx.r5.u64 | 65535;
	// addi r7,r7,-2
	ctx.r7.s64 = ctx.r7.s64 + -2;
loc_832CEA90:
	// subfic r5,r11,16
	xer.ca = ctx.r11.u32 <= 16;
	ctx.r5.s64 = 16 - ctx.r11.s64;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// srw r10,r4,r5
	ctx.r10.u64 = ctx.r5.u8 & 0x20 ? 0 : (ctx.r4.u32 >> (ctx.r5.u8 & 0x3F));
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r8,r8,16
	ctx.r8.s64 = ctx.r8.s64 + 16;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// clrlwi r5,r10,16
	ctx.r5.u64 = ctx.r10.u32 & 0xFFFF;
	// sthu r10,2(r7)
	ea = 2 + ctx.r7.u32;
	PPC_STORE_U16(ea, ctx.r10.u16);
	ctx.r7.u32 = ea;
	// li r10,0
	ctx.r10.s64 = 0;
	// slw r11,r5,r9
	ctx.r11.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r5.u32 << (ctx.r9.u8 & 0x3F));
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// xor r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 ^ ctx.r3.u64;
	// addi r5,r9,-15
	ctx.r5.s64 = ctx.r9.s64 + -15;
	// li r11,16
	ctx.r11.s64 = 16;
	// subfic r5,r5,0
	xer.ca = ctx.r5.u32 <= 0;
	ctx.r5.s64 = 0 - ctx.r5.s64;
	// cmpw cr6,r8,r27
	cr6.compare<int32_t>(ctx.r8.s32, ctx.r27.s32, xer);
	// subfe r5,r5,r5
	temp.u8 = (~ctx.r5.u32 + ctx.r5.u32 < ~ctx.r5.u32) | (~ctx.r5.u32 + ctx.r5.u32 + xer.ca < xer.ca);
	ctx.r5.u64 = ~ctx.r5.u64 + ctx.r5.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r9,r5,r9
	ctx.r9.u64 = ctx.r5.u64 & ctx.r9.u64;
	// blt cr6,0x832cea90
	if (cr6.lt) goto loc_832CEA90;
loc_832CEAE0:
	// lwz r5,112(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// ble cr6,0x832cec30
	if (!cr6.gt) goto loc_832CEC30;
	// addi r10,r6,-1
	ctx.r10.s64 = ctx.r6.s64 + -1;
	// li r11,-1
	ctx.r11.s64 = -1;
	// rlwinm r8,r10,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r4,r10,1
	ctx.r4.s64 = ctx.r10.s64 + 1;
	// slw r7,r11,r5
	ctx.r7.u64 = ctx.r5.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r5.u8 & 0x3F));
	// lhzx r6,r8,r22
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r8.u32 + ctx.r22.u32);
	// addic. r11,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r11.s64 = ctx.r9.s64 + -1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// extsh r10,r6
	ctx.r10.s64 = ctx.r6.s16;
	// and r9,r7,r10
	ctx.r9.u64 = ctx.r7.u64 & ctx.r10.u64;
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// sthx r9,r8,r22
	PPC_STORE_U16(ctx.r8.u32 + ctx.r22.u32, ctx.r9.u16);
	// bge 0x832ceb20
	if (!cr0.lt) goto loc_832CEB20;
	// li r11,14
	ctx.r11.s64 = 14;
loc_832CEB20:
	// clrlwi r9,r9,16
	ctx.r9.u64 = ctx.r9.u32 & 0xFFFF;
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// lis r8,-31772
	ctx.r8.s64 = -2082209792;
	// xor r7,r10,r9
	ctx.r7.u64 = ctx.r10.u64 ^ ctx.r9.u64;
	// addi r6,r8,24028
	ctx.r6.s64 = ctx.r8.s64 + 24028;
	// slw r11,r7,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r11.u8 & 0x3F));
	// xor r7,r11,r3
	ctx.r7.u64 = ctx.r11.u64 ^ ctx.r3.u64;
	// lwz r10,24028(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 24028);
	// addi r11,r4,-1
	ctx.r11.s64 = ctx.r4.s64 + -1;
	// lwz r9,4(r6)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// srawi r4,r7,15
	xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7FFF) != 0);
	ctx.r4.s64 = ctx.r7.s32 >> 15;
	// lwz r8,8(r6)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// clrlwi r3,r7,17
	ctx.r3.u64 = ctx.r7.u32 & 0x7FFF;
	// lwz r7,12(r6)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// xor r6,r4,r3
	ctx.r6.u64 = ctx.r4.u64 ^ ctx.r3.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// and r3,r10,r6
	ctx.r3.u64 = ctx.r10.u64 & ctx.r6.u64;
	// and r10,r9,r6
	ctx.r10.u64 = ctx.r9.u64 & ctx.r6.u64;
	// srawi r9,r3,8
	xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFF) != 0);
	ctx.r9.s64 = ctx.r3.s32 >> 8;
	// lhzx r31,r11,r22
	ctx.r31.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r22.u32);
	// and r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 & ctx.r6.u64;
	// xor r3,r9,r3
	ctx.r3.u64 = ctx.r9.u64 ^ ctx.r3.u64;
	// and r7,r7,r6
	ctx.r7.u64 = ctx.r7.u64 & ctx.r6.u64;
	// srawi r9,r3,4
	xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xF) != 0);
	ctx.r9.s64 = ctx.r3.s32 >> 4;
	// slw r6,r4,r5
	ctx.r6.u64 = ctx.r5.u8 & 0x20 ? 0 : (ctx.r4.u32 << (ctx.r5.u8 & 0x3F));
	// xor r5,r9,r3
	ctx.r5.u64 = ctx.r9.u64 ^ ctx.r3.u64;
	// addi r4,r6,-1
	ctx.r4.s64 = ctx.r6.s64 + -1;
	// srawi r3,r5,2
	xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x3) != 0);
	ctx.r3.s64 = ctx.r5.s32 >> 2;
	// xor r5,r3,r5
	ctx.r5.u64 = ctx.r3.u64 ^ ctx.r5.u64;
	// srawi r3,r5,1
	xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x1) != 0);
	ctx.r3.s64 = ctx.r5.s32 >> 1;
	// srawi r9,r10,8
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFF) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 8;
	// xor r5,r3,r5
	ctx.r5.u64 = ctx.r3.u64 ^ ctx.r5.u64;
	// xor r3,r9,r10
	ctx.r3.u64 = ctx.r9.u64 ^ ctx.r10.u64;
	// rlwinm r10,r5,1,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0x2;
	// srawi r9,r3,4
	xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xF) != 0);
	ctx.r9.s64 = ctx.r3.s32 >> 4;
	// xor r5,r9,r3
	ctx.r5.u64 = ctx.r9.u64 ^ ctx.r3.u64;
	// srawi r3,r5,2
	xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x3) != 0);
	ctx.r3.s64 = ctx.r5.s32 >> 2;
	// xor r9,r3,r5
	ctx.r9.u64 = ctx.r3.u64 ^ ctx.r5.u64;
	// srawi r5,r9,1
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r5.s64 = ctx.r9.s32 >> 1;
	// srawi r3,r8,8
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFF) != 0);
	ctx.r3.s64 = ctx.r8.s32 >> 8;
	// xor r9,r5,r9
	ctx.r9.u64 = ctx.r5.u64 ^ ctx.r9.u64;
	// xor r8,r3,r8
	ctx.r8.u64 = ctx.r3.u64 ^ ctx.r8.u64;
	// clrlwi r9,r9,31
	ctx.r9.u64 = ctx.r9.u32 & 0x1;
	// srawi r5,r8,4
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xF) != 0);
	ctx.r5.s64 = ctx.r8.s32 >> 4;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// xor r3,r5,r8
	ctx.r3.u64 = ctx.r5.u64 ^ ctx.r8.u64;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// srawi r9,r3,2
	xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r3.s32 >> 2;
	// xor r8,r9,r3
	ctx.r8.u64 = ctx.r9.u64 ^ ctx.r3.u64;
	// srawi r5,r8,1
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1) != 0);
	ctx.r5.s64 = ctx.r8.s32 >> 1;
	// srawi r3,r7,8
	xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xFF) != 0);
	ctx.r3.s64 = ctx.r7.s32 >> 8;
	// xor r9,r5,r8
	ctx.r9.u64 = ctx.r5.u64 ^ ctx.r8.u64;
	// xor r8,r3,r7
	ctx.r8.u64 = ctx.r3.u64 ^ ctx.r7.u64;
	// clrlwi r9,r9,31
	ctx.r9.u64 = ctx.r9.u32 & 0x1;
	// srawi r7,r8,4
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xF) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 4;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// xor r5,r7,r8
	ctx.r5.u64 = ctx.r7.u64 ^ ctx.r8.u64;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// srawi r3,r5,2
	xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x3) != 0);
	ctx.r3.s64 = ctx.r5.s32 >> 2;
	// xor r9,r3,r5
	ctx.r9.u64 = ctx.r3.u64 ^ ctx.r5.u64;
	// srawi r8,r9,1
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 1;
	// xor r7,r8,r9
	ctx.r7.u64 = ctx.r8.u64 ^ ctx.r9.u64;
	// clrlwi r9,r7,31
	ctx.r9.u64 = ctx.r7.u32 & 0x1;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// and r5,r4,r10
	ctx.r5.u64 = ctx.r4.u64 & ctx.r10.u64;
	// or r4,r5,r31
	ctx.r4.u64 = ctx.r5.u64 | ctx.r31.u64;
	// sthx r4,r11,r22
	PPC_STORE_U16(ctx.r11.u32 + ctx.r22.u32, ctx.r4.u16);
loc_832CEC30:
	// li r3,0
	ctx.r3.s64 = 0;
loc_832CEC34:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
loc_832CEC3C:
	// subfic r5,r8,32
	xer.ca = ctx.r8.u32 <= 32;
	ctx.r5.s64 = 32 - ctx.r8.s64;
	// subf r11,r8,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r8.s64;
	// srw r8,r7,r5
	ctx.r8.u64 = ctx.r5.u8 & 0x20 ? 0 : (ctx.r7.u32 >> (ctx.r5.u8 & 0x3F));
	// slw r8,r8,r11
	ctx.r8.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r11.u8 & 0x3F));
	// add r7,r8,r10
	ctx.r7.u64 = ctx.r8.u64 + ctx.r10.u64;
	// extsh r10,r7
	ctx.r10.s64 = ctx.r7.s16;
	// b 0x832cea3c
	goto loc_832CEA3C;
}

__attribute__((alias("__imp__sub_832CEC58"))) PPC_WEAK_FUNC(sub_832CEC58);
PPC_FUNC_IMPL(__imp__sub_832CEC58) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x832CEC60;
	__savegprlr_27(ctx, base);
	// lwz r11,324(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 324);
	// li r27,16
	ctx.r27.s64 = 16;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x832cec8c
	if (!cr6.eq) goto loc_832CEC8C;
	// lwz r11,328(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 328);
	// addi r10,r11,2
	ctx.r10.s64 = ctx.r11.s64 + 2;
	// lhz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// stw r10,328(r3)
	PPC_STORE_U32(ctx.r3.u32 + 328, ctx.r10.u32);
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// stw r27,324(r3)
	PPC_STORE_U32(ctx.r3.u32 + 324, ctx.r27.u32);
	// stw r8,320(r3)
	PPC_STORE_U32(ctx.r3.u32 + 320, ctx.r8.u32);
loc_832CEC8C:
	// lwz r11,324(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 324);
	// lwz r10,320(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 320);
	// addic. r11,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// sraw r9,r10,r11
	temp.u32 = ctx.r11.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	xer.ca = (ctx.r10.s32 < 0) & (((ctx.r10.s32 >> temp.u32) << temp.u32) != ctx.r10.s32);
	ctx.r9.s64 = ctx.r10.s32 >> temp.u32;
	// stw r11,324(r3)
	PPC_STORE_U32(ctx.r3.u32 + 324, ctx.r11.u32);
	// clrlwi r11,r9,31
	ctx.r11.u64 = ctx.r9.u32 & 0x1;
	// stw r11,316(r3)
	PPC_STORE_U32(ctx.r3.u32 + 316, ctx.r11.u32);
	// bne 0x832cecc8
	if (!cr0.eq) goto loc_832CECC8;
	// lwz r10,328(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 328);
	// addi r9,r10,2
	ctx.r9.s64 = ctx.r10.s64 + 2;
	// lhz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// stw r9,328(r3)
	PPC_STORE_U32(ctx.r3.u32 + 328, ctx.r9.u32);
	// extsh r10,r8
	ctx.r10.s64 = ctx.r8.s16;
	// stw r27,324(r3)
	PPC_STORE_U32(ctx.r3.u32 + 324, ctx.r27.u32);
	// stw r10,320(r3)
	PPC_STORE_U32(ctx.r3.u32 + 320, ctx.r10.u32);
loc_832CECC8:
	// lwz r10,324(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 324);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r8,320(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 320);
	// addic. r11,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r11.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// sraw r10,r8,r11
	temp.u32 = ctx.r11.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	xer.ca = (ctx.r8.s32 < 0) & (((ctx.r8.s32 >> temp.u32) << temp.u32) != ctx.r8.s32);
	ctx.r10.s64 = ctx.r8.s32 >> temp.u32;
	// stw r11,324(r3)
	PPC_STORE_U32(ctx.r3.u32 + 324, ctx.r11.u32);
	// clrlwi r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	// stw r10,316(r3)
	PPC_STORE_U32(ctx.r3.u32 + 316, ctx.r10.u32);
	// add r11,r9,r10
	ctx.r11.u64 = ctx.r9.u64 + ctx.r10.u64;
	// bne 0x832ced0c
	if (!cr0.eq) goto loc_832CED0C;
	// lwz r10,328(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 328);
	// addi r9,r10,2
	ctx.r9.s64 = ctx.r10.s64 + 2;
	// lhz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// stw r9,328(r3)
	PPC_STORE_U32(ctx.r3.u32 + 328, ctx.r9.u32);
	// extsh r10,r8
	ctx.r10.s64 = ctx.r8.s16;
	// stw r27,324(r3)
	PPC_STORE_U32(ctx.r3.u32 + 324, ctx.r27.u32);
	// stw r10,320(r3)
	PPC_STORE_U32(ctx.r3.u32 + 320, ctx.r10.u32);
loc_832CED0C:
	// lwz r10,324(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 324);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r8,320(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 320);
	// addic. r11,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r11.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// sraw r10,r8,r11
	temp.u32 = ctx.r11.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	xer.ca = (ctx.r8.s32 < 0) & (((ctx.r8.s32 >> temp.u32) << temp.u32) != ctx.r8.s32);
	ctx.r10.s64 = ctx.r8.s32 >> temp.u32;
	// stw r11,324(r3)
	PPC_STORE_U32(ctx.r3.u32 + 324, ctx.r11.u32);
	// clrlwi r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	// stw r10,316(r3)
	PPC_STORE_U32(ctx.r3.u32 + 316, ctx.r10.u32);
	// add r11,r9,r10
	ctx.r11.u64 = ctx.r9.u64 + ctx.r10.u64;
	// bne 0x832ced50
	if (!cr0.eq) goto loc_832CED50;
	// lwz r10,328(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 328);
	// addi r9,r10,2
	ctx.r9.s64 = ctx.r10.s64 + 2;
	// lhz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// stw r9,328(r3)
	PPC_STORE_U32(ctx.r3.u32 + 328, ctx.r9.u32);
	// extsh r10,r8
	ctx.r10.s64 = ctx.r8.s16;
	// stw r27,324(r3)
	PPC_STORE_U32(ctx.r3.u32 + 324, ctx.r27.u32);
	// stw r10,320(r3)
	PPC_STORE_U32(ctx.r3.u32 + 320, ctx.r10.u32);
loc_832CED50:
	// lwz r10,324(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 324);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r8,320(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 320);
	// addic. r11,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r11.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// sraw r10,r8,r11
	temp.u32 = ctx.r11.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	xer.ca = (ctx.r8.s32 < 0) & (((ctx.r8.s32 >> temp.u32) << temp.u32) != ctx.r8.s32);
	ctx.r10.s64 = ctx.r8.s32 >> temp.u32;
	// stw r11,324(r3)
	PPC_STORE_U32(ctx.r3.u32 + 324, ctx.r11.u32);
	// clrlwi r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	// stw r10,316(r3)
	PPC_STORE_U32(ctx.r3.u32 + 316, ctx.r10.u32);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// bne 0x832ced94
	if (!cr0.eq) goto loc_832CED94;
	// lwz r11,328(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 328);
	// addi r9,r11,2
	ctx.r9.s64 = ctx.r11.s64 + 2;
	// lhz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// stw r9,328(r3)
	PPC_STORE_U32(ctx.r3.u32 + 328, ctx.r9.u32);
	// extsh r11,r8
	ctx.r11.s64 = ctx.r8.s16;
	// stw r27,324(r3)
	PPC_STORE_U32(ctx.r3.u32 + 324, ctx.r27.u32);
	// stw r11,320(r3)
	PPC_STORE_U32(ctx.r3.u32 + 320, ctx.r11.u32);
loc_832CED94:
	// lwz r11,324(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 324);
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r9,320(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 320);
	// li r30,1
	ctx.r30.s64 = 1;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmpwi cr6,r4,1
	cr6.compare<int32_t>(ctx.r4.s32, 1, xer);
	// stw r11,324(r3)
	PPC_STORE_U32(ctx.r3.u32 + 324, ctx.r11.u32);
	// sraw r8,r9,r11
	temp.u32 = ctx.r11.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	xer.ca = (ctx.r9.s32 < 0) & (((ctx.r9.s32 >> temp.u32) << temp.u32) != ctx.r9.s32);
	ctx.r8.s64 = ctx.r9.s32 >> temp.u32;
	// clrlwi r11,r8,31
	ctx.r11.u64 = ctx.r8.u32 & 0x1;
	// stw r11,316(r3)
	PPC_STORE_U32(ctx.r3.u32 + 316, ctx.r11.u32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r10,312(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 312);
	// subf r9,r7,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r7.s64;
	// addi r11,r10,-5
	ctx.r11.s64 = ctx.r10.s64 + -5;
	// stw r9,-112(r1)
	PPC_STORE_U32(ctx.r1.u32 + -112, ctx.r9.u32);
	// stw r11,312(r3)
	PPC_STORE_U32(ctx.r3.u32 + 312, ctx.r11.u32);
	// ble cr6,0x832ceea0
	if (!cr6.gt) goto loc_832CEEA0;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// lwz r8,324(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 324);
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// lwz r31,320(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 320);
	// addi r28,r1,-112
	ctx.r28.s64 = ctx.r1.s64 + -112;
	// addi r7,r11,30224
	ctx.r7.s64 = ctx.r11.s64 + 30224;
loc_832CEDF0:
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r30,14
	cr6.compare<int32_t>(ctx.r30.s32, 14, xer);
	// addi r10,r30,-1
	ctx.r10.s64 = ctx.r30.s64 + -1;
	// blt cr6,0x832cee04
	if (cr6.lt) goto loc_832CEE04;
	// li r10,12
	ctx.r10.s64 = 12;
loc_832CEE04:
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
loc_832CEE10:
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bne cr6,0x832cee38
	if (!cr6.eq) goto loc_832CEE38;
	// lwz r10,328(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 328);
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// addi r31,r10,2
	ctx.r31.s64 = ctx.r10.s64 + 2;
	// lhz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// stw r31,328(r3)
	PPC_STORE_U32(ctx.r3.u32 + 328, ctx.r31.u32);
	// extsh r31,r10
	ctx.r31.s64 = ctx.r10.s16;
	// stw r27,324(r3)
	PPC_STORE_U32(ctx.r3.u32 + 324, ctx.r27.u32);
	// stw r31,320(r3)
	PPC_STORE_U32(ctx.r3.u32 + 320, ctx.r31.u32);
loc_832CEE38:
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// stw r8,324(r3)
	PPC_STORE_U32(ctx.r3.u32 + 324, ctx.r8.u32);
	// sraw r10,r31,r8
	temp.u32 = ctx.r8.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	xer.ca = (ctx.r31.s32 < 0) & (((ctx.r31.s32 >> temp.u32) << temp.u32) != ctx.r31.s32);
	ctx.r10.s64 = ctx.r31.s32 >> temp.u32;
	// clrlwi r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	// stw r10,316(r3)
	PPC_STORE_U32(ctx.r3.u32 + 316, ctx.r10.u32);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// srawi r10,r11,1
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
	// rlwinm r11,r11,4,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0x10;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r7
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r7.u32);
	// beq cr6,0x832cee6c
	if (cr6.eq) goto loc_832CEE6C;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
loc_832CEE6C:
	// sraw r11,r10,r11
	temp.u32 = ctx.r11.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	xer.ca = (ctx.r10.s32 < 0) & (((ctx.r10.s32 >> temp.u32) << temp.u32) != ctx.r10.s32);
	ctx.r11.s64 = ctx.r10.s32 >> temp.u32;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// addi r29,r29,-1
	ctx.r29.s64 = ctx.r29.s64 + -1;
	// addi r11,r11,-32
	ctx.r11.s64 = ctx.r11.s64 + -32;
	// stw r29,312(r3)
	PPC_STORE_U32(ctx.r3.u32 + 312, ctx.r29.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bgt cr6,0x832cee10
	if (cr6.gt) goto loc_832CEE10;
	// neg r11,r11
	ctx.r11.s64 = -ctx.r11.s64;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// stwu r11,4(r28)
	ea = 4 + ctx.r28.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r28.u32 = ea;
	// cmpw cr6,r30,r4
	cr6.compare<int32_t>(ctx.r30.s32, ctx.r4.s32, xer);
	// blt cr6,0x832cedf0
	if (cr6.lt) goto loc_832CEDF0;
	// lwz r9,-112(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + -112);
loc_832CEEA0:
	// lwz r11,-108(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -108);
	// cmpwi cr6,r4,2
	cr6.compare<int32_t>(ctx.r4.s32, 2, xer);
	// stw r9,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r9.u32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r11,r11,-12
	ctx.r11.s64 = ctx.r11.s64 + -12;
	// stw r11,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, ctx.r11.u32);
	// ble cr6,0x832cef08
	if (!cr6.gt) goto loc_832CEF08;
	// addi r11,r4,-3
	ctx.r11.s64 = ctx.r4.s64 + -3;
	// addi r8,r1,-112
	ctx.r8.s64 = ctx.r1.s64 + -112;
	// rlwinm r11,r11,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r9,r1,-112
	ctx.r9.s64 = ctx.r1.s64 + -112;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// addi r11,r6,12
	ctx.r11.s64 = ctx.r6.s64 + 12;
	// subf r3,r6,r8
	ctx.r3.s64 = ctx.r8.s64 - ctx.r6.s64;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_832CEEDC:
	// lwz r7,-8(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// lwzu r10,8(r9)
	ea = 8 + ctx.r9.u32;
	ctx.r10.u64 = PPC_LOAD_U32(ea);
	ctx.r9.u32 = ea;
	// lwzx r8,r3,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r11.u32);
	// add r10,r7,r10
	ctx.r10.u64 = ctx.r7.u64 + ctx.r10.u64;
	// addi r10,r10,-12
	ctx.r10.s64 = ctx.r10.s64 + -12;
	// add r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 + ctx.r10.u64;
	// stw r10,-4(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4, ctx.r10.u32);
	// addi r10,r8,-12
	ctx.r10.s64 = ctx.r8.s64 + -12;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// bdnz 0x832ceedc
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_832CEEDC;
loc_832CEF08:
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// ble cr6,0x832cefcc
	if (!cr6.gt) goto loc_832CEFCC;
	// addi r11,r4,-1
	ctx.r11.s64 = ctx.r4.s64 + -1;
	// li r9,7
	ctx.r9.s64 = 7;
	// addi r10,r6,-4
	ctx.r10.s64 = ctx.r6.s64 + -4;
	// divwu r9,r11,r9
	ctx.r9.u32 = PPCDivide(ctx.r11.u32, ctx.r9.u32);
	// addi r11,r5,4
	ctx.r11.s64 = ctx.r5.s64 + 4;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// subf r7,r5,r6
	ctx.r7.s64 = ctx.r6.s64 - ctx.r5.s64;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// lis r9,-31738
	ctx.r9.s64 = -2079981568;
	// addi r9,r9,23104
	ctx.r9.s64 = ctx.r9.s64 + 23104;
loc_832CEF38:
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// addi r6,r9,96
	ctx.r6.s64 = ctx.r9.s64 + 96;
	// addi r5,r9,96
	ctx.r5.s64 = ctx.r9.s64 + 96;
	// rlwinm r4,r8,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r3,r9,96
	ctx.r3.s64 = ctx.r9.s64 + 96;
	// addi r8,r9,96
	ctx.r8.s64 = ctx.r9.s64 + 96;
	// addi r31,r9,96
	ctx.r31.s64 = ctx.r9.s64 + 96;
	// addi r30,r9,96
	ctx.r30.s64 = ctx.r9.s64 + 96;
	// lfsx f0,r4,r6
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r6.u32);
	ctx.f0.f64 = double(temp.f32);
	// addi r6,r9,96
	ctx.r6.s64 = ctx.r9.s64 + 96;
	// stfs f0,-4(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + -4, temp.u32);
	// lwzx r4,r7,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r11.u32);
	// rlwinm r4,r4,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f13,r4,r5
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r5.u32);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,0(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lwz r5,12(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// rlwinm r4,r5,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f12,r4,r3
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r3.u32);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,4(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lwz r3,16(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// rlwinm r5,r3,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f11,r5,r8
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r8.u32);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,8(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// lwz r4,20(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// rlwinm r3,r4,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f10,r3,r31
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r31.u32);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,12(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// lwz r8,24(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// rlwinm r5,r8,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f9,r5,r30
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r30.u32);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,16(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// lwzu r8,28(r10)
	ea = 28 + ctx.r10.u32;
	ctx.r8.u64 = PPC_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// rlwinm r4,r8,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f8,r4,r6
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r6.u32);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,20(r11)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// addi r11,r11,28
	ctx.r11.s64 = ctx.r11.s64 + 28;
	// bdnz 0x832cef38
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_832CEF38;
loc_832CEFCC:
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832CEFD0"))) PPC_WEAK_FUNC(sub_832CEFD0);
PPC_FUNC_IMPL(__imp__sub_832CEFD0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdab0
	ctx.lr = 0x832CEFD8;
	__savegprlr_14(ctx, base);
	// extsw r10,r8
	ctx.r10.s64 = ctx.r8.s32;
	// stw r4,28(r1)
	PPC_STORE_U32(ctx.r1.u32 + 28, ctx.r4.u32);
	// lwz r9,332(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 332);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// std r10,-168(r1)
	PPC_STORE_U64(ctx.r1.u32 + -168, ctx.r10.u64);
	// lfd f0,-168(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -168);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// stw r5,36(r1)
	PPC_STORE_U32(ctx.r1.u32 + 36, ctx.r5.u32);
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// frsp f9,f13
	ctx.f9.f64 = double(float(ctx.f13.f64));
	// li r16,1
	ctx.r16.s64 = 1;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne cr6,0x832cf020
	if (!cr6.eq) goto loc_832CF020;
	// stw r16,332(r3)
	PPC_STORE_U32(ctx.r3.u32 + 332, ctx.r16.u32);
	// stw r16,336(r3)
	PPC_STORE_U32(ctx.r3.u32 + 336, ctx.r16.u32);
	// stw r16,340(r3)
	PPC_STORE_U32(ctx.r3.u32 + 340, ctx.r16.u32);
	// stw r16,344(r3)
	PPC_STORE_U32(ctx.r3.u32 + 344, ctx.r16.u32);
	// stw r16,348(r3)
	PPC_STORE_U32(ctx.r3.u32 + 348, ctx.r16.u32);
loc_832CF020:
	// li r19,0
	ctx.r19.s64 = 0;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// stw r19,-176(r1)
	PPC_STORE_U32(ctx.r1.u32 + -176, ctx.r19.u32);
	// ble cr6,0x832cf828
	if (!cr6.gt) goto loc_832CF828;
	// lis r8,-32220
	ctx.r8.s64 = -2111569920;
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// lis r18,-31738
	ctx.r18.s64 = -2079981568;
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// lfd f8,-18232(r8)
	ctx.fpscr.disableFlushMode();
	ctx.f8.u64 = PPC_LOAD_U64(ctx.r8.u32 + -18232);
	// lis r10,-31772
	ctx.r10.s64 = -2082209792;
	// lis r9,-31772
	ctx.r9.s64 = -2082209792;
	// lfd f7,-2240(r6)
	ctx.f7.u64 = PPC_LOAD_U64(ctx.r6.u32 + -2240);
	// lis r8,-31771
	ctx.r8.s64 = -2082144256;
	// lfs f10,9008(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 9008);
	ctx.f10.f64 = double(temp.f32);
	// lis r31,-31771
	ctx.r31.s64 = -2082144256;
	// lwz r29,22784(r18)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r18.u32 + 22784);
	// lis r30,-31772
	ctx.r30.s64 = -2082209792;
	// addi r11,r11,29200
	ctx.r11.s64 = ctx.r11.s64 + 29200;
	// addi r17,r10,30848
	ctx.r17.s64 = ctx.r10.s64 + 30848;
	// stw r11,-168(r1)
	PPC_STORE_U32(ctx.r1.u32 + -168, ctx.r11.u32);
	// addi r15,r9,24044
	ctx.r15.s64 = ctx.r9.s64 + 24044;
	// addi r14,r8,-30448
	ctx.r14.s64 = ctx.r8.s64 + -30448;
	// addi r6,r31,-30480
	ctx.r6.s64 = ctx.r31.s64 + -30480;
	// addi r5,r30,29164
	ctx.r5.s64 = ctx.r30.s64 + 29164;
loc_832CF084:
	// lwz r10,36(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 36);
	// rlwinm r11,r19,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 2) & 0xFFFFFFFC;
	// mullw r9,r29,r19
	ctx.r9.s64 = int64_t(ctx.r29.s32) * int64_t(ctx.r19.s32);
	// lwzx r20,r11,r4
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r4.u32);
	// lfsx f11,r11,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	ctx.f11.f64 = double(temp.f32);
	// fneg f12,f11
	ctx.f12.u64 = ctx.f11.u64 ^ 0x8000000000000000;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// cmpwi cr6,r20,7
	cr6.compare<int32_t>(ctx.r20.s32, 7, xer);
	// add r26,r11,r7
	ctx.r26.u64 = ctx.r11.u64 + ctx.r7.u64;
	// bge cr6,0x832cf428
	if (!cr6.lt) goto loc_832CF428;
	// cmpwi cr6,r20,0
	cr6.compare<int32_t>(ctx.r20.s32, 0, xer);
	// blt cr6,0x832cf428
	if (cr6.lt) goto loc_832CF428;
	// rlwinm r10,r20,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 2) & 0xFFFFFFFC;
	// li r21,0
	ctx.r21.s64 = 0;
	// lwzx r24,r10,r15
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r15.u32);
	// lwzx r22,r10,r14
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r14.u32);
	// slw r11,r16,r24
	ctx.r11.u64 = ctx.r24.u8 & 0x20 ? 0 : (ctx.r16.u32 << (ctx.r24.u8 & 0x3F));
	// lwzx r28,r10,r5
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r5.u32);
	// lwzx r23,r10,r6
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r6.u32);
	// addi r25,r11,-1
	ctx.r25.s64 = ctx.r11.s64 + -1;
	// cmpwi cr6,r22,0
	cr6.compare<int32_t>(ctx.r22.s32, 0, xer);
	// ble cr6,0x832cf3c8
	if (!cr6.gt) goto loc_832CF3C8;
loc_832CF0DC:
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
loc_832CF0E0:
	// lwz r27,328(r3)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r3.u32 + 328);
	// li r11,15
	ctx.r11.s64 = 15;
	// lwz r10,324(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 324);
	// subfic r9,r10,16
	xer.ca = ctx.r10.u32 <= 16;
	ctx.r9.s64 = 16 - ctx.r10.s64;
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// lhz r31,-2(r27)
	ctx.r31.u64 = PPC_LOAD_U16(ctx.r27.u32 + -2);
	// lhz r30,0(r27)
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r27.u32 + 0);
	// slw r9,r31,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r31.u32 << (ctx.r9.u8 & 0x3F));
	// srw r10,r30,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r30.u32 >> (ctx.r10.u8 & 0x3F));
	// or r31,r9,r10
	ctx.r31.u64 = ctx.r9.u64 | ctx.r10.u64;
	// rlwinm r30,r31,18,30,30
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 18) & 0x2;
loc_832CF10C:
	// lwz r9,312(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 312);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// lhzx r10,r30,r8
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r30.u32 + ctx.r8.u32);
	// addi r30,r9,-1
	ctx.r30.s64 = ctx.r9.s64 + -1;
	// srw r29,r31,r11
	ctx.r29.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r31.u32 >> (ctx.r11.u8 & 0x3F));
	// rotlwi r8,r10,1
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// stw r30,312(r3)
	PPC_STORE_U32(ctx.r3.u32 + 312, ctx.r30.u32);
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// clrlwi r29,r29,31
	ctx.r29.u64 = ctx.r29.u32 & 0x1;
	// add r8,r8,r28
	ctx.r8.u64 = ctx.r8.u64 + ctx.r28.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x832cf1d8
	if (!cr6.eq) goto loc_832CF1D8;
	// rlwinm r10,r29,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
	// srw r9,r31,r11
	ctx.r9.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r31.u32 >> (ctx.r11.u8 & 0x3F));
	// lhzx r10,r10,r8
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r8.u32);
	// clrlwi r29,r9,31
	ctx.r29.u64 = ctx.r9.u32 & 0x1;
	// stw r30,312(r3)
	PPC_STORE_U32(ctx.r3.u32 + 312, ctx.r30.u32);
	// rotlwi r8,r10,1
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// add r8,r8,r28
	ctx.r8.u64 = ctx.r8.u64 + ctx.r28.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x832cf1d8
	if (!cr6.eq) goto loc_832CF1D8;
	// rlwinm r10,r29,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
	// srw r9,r31,r11
	ctx.r9.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r31.u32 >> (ctx.r11.u8 & 0x3F));
	// lhzx r10,r10,r8
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r8.u32);
	// clrlwi r29,r9,31
	ctx.r29.u64 = ctx.r9.u32 & 0x1;
	// stw r30,312(r3)
	PPC_STORE_U32(ctx.r3.u32 + 312, ctx.r30.u32);
	// rotlwi r8,r10,1
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// add r8,r8,r28
	ctx.r8.u64 = ctx.r8.u64 + ctx.r28.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x832cf1d8
	if (!cr6.eq) goto loc_832CF1D8;
	// rlwinm r10,r29,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r9,r30,-1
	ctx.r9.s64 = ctx.r30.s64 + -1;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r9,312(r3)
	PPC_STORE_U32(ctx.r3.u32 + 312, ctx.r9.u32);
	// srw r30,r31,r11
	ctx.r30.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r31.u32 >> (ctx.r11.u8 & 0x3F));
	// lhzx r10,r10,r8
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r8.u32);
	// clrlwi r30,r30,31
	ctx.r30.u64 = ctx.r30.u32 & 0x1;
	// rotlwi r8,r10,1
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// add r8,r8,r28
	ctx.r8.u64 = ctx.r8.u64 + ctx.r28.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x832cf1d8
	if (!cr6.eq) goto loc_832CF1D8;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// rlwinm r30,r30,1,0,30
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// bge cr6,0x832cf10c
	if (!cr6.lt) goto loc_832CF10C;
loc_832CF1D8:
	// lwz r31,324(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 324);
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// addic. r11,r11,-15
	xer.ca = ctx.r11.u32 > 14;
	ctx.r11.s64 = ctx.r11.s64 + -15;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// stw r11,324(r3)
	PPC_STORE_U32(ctx.r3.u32 + 324, ctx.r11.u32);
	// bge 0x832cf208
	if (!cr0.lt) goto loc_832CF208;
	// lhz r31,0(r27)
	ctx.r31.u64 = PPC_LOAD_U16(ctx.r27.u32 + 0);
	// addi r30,r27,2
	ctx.r30.s64 = ctx.r27.s64 + 2;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// extsh r31,r31
	ctx.r31.s64 = ctx.r31.s16;
	// stw r30,328(r3)
	PPC_STORE_U32(ctx.r3.u32 + 328, ctx.r30.u32);
	// stw r11,324(r3)
	PPC_STORE_U32(ctx.r3.u32 + 324, ctx.r11.u32);
	// stw r31,320(r3)
	PPC_STORE_U32(ctx.r3.u32 + 320, ctx.r31.u32);
loc_832CF208:
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x832cf21c
	if (!cr6.eq) goto loc_832CF21C;
	// lwz r11,312(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 312);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bgt cr6,0x832cf0e0
	if (cr6.gt) goto loc_832CF0E0;
loc_832CF21C:
	// lwz r11,312(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 312);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x832cf41c
	if (cr6.lt) goto loc_832CF41C;
	// lwz r29,328(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 328);
	// rlwinm r11,r10,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// lwz r9,324(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 324);
	// mulli r10,r20,56
	ctx.r10.s64 = ctx.r20.s64 * 56;
	// lhz r8,-2(r29)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r29.u32 + -2);
	// lhz r31,0(r29)
	ctx.r31.u64 = PPC_LOAD_U16(ctx.r29.u32 + 0);
	// subfic r30,r9,16
	xer.ca = ctx.r9.u32 <= 16;
	ctx.r30.s64 = 16 - ctx.r9.s64;
	// clrlwi r9,r9,16
	ctx.r9.u64 = ctx.r9.u32 & 0xFFFF;
	// and r27,r11,r25
	ctx.r27.u64 = ctx.r11.u64 & ctx.r25.u64;
	// slw r8,r8,r30
	ctx.r8.u64 = ctx.r30.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r30.u8 & 0x3F));
	// srw r9,r31,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r31.u32 >> (ctx.r9.u8 & 0x3F));
	// rlwinm r30,r27,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r17
	ctx.r10.u64 = ctx.r10.u64 + ctx.r17.u64;
	// or r31,r8,r9
	ctx.r31.u64 = ctx.r8.u64 | ctx.r9.u64;
	// clrlwi r27,r23,31
	ctx.r27.u64 = ctx.r23.u32 & 0x1;
	// li r9,15
	ctx.r9.s64 = 15;
	// rlwinm r8,r31,17,15,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 17) & 0x1FFFF;
	// lfsx f0,r30,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r10.u32);
	ctx.f0.f64 = double(temp.f32);
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(ctx.r27.s32, 0, xer);
	// beq cr6,0x832cf2c4
	if (cr6.eq) goto loc_832CF2C4;
	// fcmpu cr6,f0,f10
	cr6.compare(ctx.f0.f64, ctx.f10.f64);
	// bne cr6,0x832cf288
	if (!cr6.eq) goto loc_832CF288;
	// stfs f10,0(r26)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r26.u32 + 0, temp.u32);
	// b 0x832cf2ac
	goto loc_832CF2AC;
loc_832CF288:
	// clrlwi r9,r8,31
	ctx.r9.u64 = ctx.r8.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x832cf29c
	if (!cr6.eq) goto loc_832CF29C;
	// fmuls f0,f0,f12
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// b 0x832cf2a0
	goto loc_832CF2A0;
loc_832CF29C:
	// fmuls f0,f0,f11
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
loc_832CF2A0:
	// fmuls f0,f0,f9
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f9.f64));
	// stfs f0,0(r26)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r26.u32 + 0, temp.u32);
	// li r9,14
	ctx.r9.s64 = 14;
loc_832CF2AC:
	// srw r11,r11,r24
	ctx.r11.u64 = ctx.r24.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r24.u8 & 0x3F));
	// and r30,r11,r25
	ctx.r30.u64 = ctx.r11.u64 & ctx.r25.u64;
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// rlwinm r30,r30,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// srw r8,r31,r9
	ctx.r8.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r31.u32 >> (ctx.r9.u8 & 0x3F));
	// lfsx f0,r30,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r10.u32);
	ctx.f0.f64 = double(temp.f32);
loc_832CF2C4:
	// rlwinm r30,r23,0,16,30
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 0) & 0xFFFE;
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// ble cr6,0x832cf378
	if (!cr6.gt) goto loc_832CF378;
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
	// rlwinm r30,r30,31,1,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// mtctr r30
	ctr.u64 = ctx.r30.u64;
loc_832CF2E0:
	// fcmpu cr6,f0,f10
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f0.f64, ctx.f10.f64);
	// bne cr6,0x832cf2f0
	if (!cr6.eq) goto loc_832CF2F0;
	// fmr f13,f10
	ctx.f13.f64 = ctx.f10.f64;
	// b 0x832cf30c
	goto loc_832CF30C;
loc_832CF2F0:
	// clrlwi r8,r8,31
	ctx.r8.u64 = ctx.r8.u32 & 0x1;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x832cf304
	if (!cr6.eq) goto loc_832CF304;
	// fmuls f13,f0,f12
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// b 0x832cf308
	goto loc_832CF308;
loc_832CF304:
	// fmuls f13,f0,f11
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
loc_832CF308:
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
loc_832CF30C:
	// srw r11,r11,r24
	ctx.r11.u64 = ctx.r24.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r24.u8 & 0x3F));
	// and r8,r11,r25
	ctx.r8.u64 = ctx.r11.u64 & ctx.r25.u64;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f0,r8,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f10
	cr6.compare(ctx.f0.f64, ctx.f10.f64);
	// bne cr6,0x832cf32c
	if (!cr6.eq) goto loc_832CF32C;
	// fmr f0,f10
	ctx.f0.f64 = ctx.f10.f64;
	// b 0x832cf34c
	goto loc_832CF34C;
loc_832CF32C:
	// srw r8,r31,r9
	ctx.r8.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r31.u32 >> (ctx.r9.u8 & 0x3F));
	// clrlwi r8,r8,31
	ctx.r8.u64 = ctx.r8.u32 & 0x1;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x832cf344
	if (!cr6.eq) goto loc_832CF344;
	// fmuls f0,f0,f12
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// b 0x832cf348
	goto loc_832CF348;
loc_832CF344:
	// fmuls f0,f0,f11
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
loc_832CF348:
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
loc_832CF34C:
	// srw r11,r11,r24
	ctx.r11.u64 = ctx.r24.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r24.u8 & 0x3F));
	// fmuls f13,f13,f9
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f9.f64));
	// and r8,r11,r25
	ctx.r8.u64 = ctx.r11.u64 & ctx.r25.u64;
	// stfs f13,0(r26)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r26.u32 + 0, temp.u32);
	// fmuls f6,f0,f9
	ctx.f6.f64 = double(float(ctx.f0.f64 * ctx.f9.f64));
	// stfsu f6,4(r26)
	ea = 4 + ctx.r26.u32;
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ea, temp.u32);
	ctx.r26.u32 = ea;
	// rlwinm r30,r8,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// srw r8,r31,r9
	ctx.r8.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r31.u32 >> (ctx.r9.u8 & 0x3F));
	// lfsx f0,r30,r10
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r10.u32);
	ctx.f0.f64 = double(temp.f32);
	// bdnz 0x832cf2e0
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_832CF2E0;
loc_832CF378:
	// lwz r11,324(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 324);
	// subfic r10,r9,15
	xer.ca = ctx.r9.u32 <= 15;
	ctx.r10.s64 = 15 - ctx.r9.s64;
	// subf. r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// stw r11,324(r3)
	PPC_STORE_U32(ctx.r3.u32 + 324, ctx.r11.u32);
	// bge 0x832cf3a8
	if (!cr0.lt) goto loc_832CF3A8;
	// lhz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r29.u32 + 0);
	// addi r8,r29,2
	ctx.r8.s64 = ctx.r29.s64 + 2;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// stw r8,328(r3)
	PPC_STORE_U32(ctx.r3.u32 + 328, ctx.r8.u32);
	// stw r11,324(r3)
	PPC_STORE_U32(ctx.r3.u32 + 324, ctx.r11.u32);
	// stw r9,320(r3)
	PPC_STORE_U32(ctx.r3.u32 + 320, ctx.r9.u32);
loc_832CF3A8:
	// lwz r11,312(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 312);
	// subf. r10,r10,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r10.s64;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r10,312(r3)
	PPC_STORE_U32(ctx.r3.u32 + 312, ctx.r10.u32);
	// blt 0x832cf41c
	if (cr0.lt) goto loc_832CF41C;
	// addi r21,r21,1
	ctx.r21.s64 = ctx.r21.s64 + 1;
	// cmpw cr6,r21,r22
	cr6.compare<int32_t>(ctx.r21.s32, ctx.r22.s32, xer);
	// blt cr6,0x832cf0dc
	if (cr6.lt) goto loc_832CF0DC;
	// lwz r29,22784(r18)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r18.u32 + 22784);
loc_832CF3C8:
	// lwz r11,-176(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -176);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x832cf428
	if (!cr6.eq) goto loc_832CF428;
loc_832CF3D4:
	// lwz r9,28(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 28);
	// addi r11,r19,1
	ctx.r11.s64 = ctx.r19.s64 + 1;
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, xer);
	// bge cr6,0x832cf40c
	if (!cr6.lt) goto loc_832CF40C;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// subf. r11,r11,r9
	ctx.r11.s64 = ctx.r9.s64 - ctx.r11.s64;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// li r9,7
	ctx.r9.s64 = 7;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// beq 0x832cf40c
	if (cr0.eq) goto loc_832CF40C;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
loc_832CF400:
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x832cf400
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_832CF400;
	// lwz r29,22784(r18)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r18.u32 + 22784);
loc_832CF40C:
	// mullw r11,r29,r19
	ctx.r11.s64 = int64_t(ctx.r29.s32) * int64_t(ctx.r19.s32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r26,r11,r7
	ctx.r26.u64 = ctx.r11.u64 + ctx.r7.u64;
	// b 0x832cf70c
	goto loc_832CF70C;
loc_832CF41C:
	// lwz r29,22784(r18)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r18.u32 + 22784);
	// stw r16,-176(r1)
	PPC_STORE_U32(ctx.r1.u32 + -176, ctx.r16.u32);
	// b 0x832cf3d4
	goto loc_832CF3D4;
loc_832CF428:
	// cmpwi cr6,r20,5
	cr6.compare<int32_t>(ctx.r20.s32, 5, xer);
	// beq cr6,0x832cf438
	if (cr6.eq) goto loc_832CF438;
	// cmpwi cr6,r20,6
	cr6.compare<int32_t>(ctx.r20.s32, 6, xer);
	// bne cr6,0x832cf704
	if (!cr6.eq) goto loc_832CF704;
loc_832CF438:
	// mullw r11,r29,r19
	ctx.r11.s64 = int64_t(ctx.r29.s32) * int64_t(ctx.r19.s32);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r11,0
	ctx.r11.s64 = 0;
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// cmpwi cr6,r20,6
	cr6.compare<int32_t>(ctx.r20.s32, 6, xer);
	// bne cr6,0x832cf4f4
	if (!cr6.eq) goto loc_832CF4F4;
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(ctx.r29.s32, 0, xer);
	// ble cr6,0x832cf4e0
	if (!cr6.gt) goto loc_832CF4E0;
	// addi r9,r29,-1
	ctx.r9.s64 = ctx.r29.s64 + -1;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// rlwinm r9,r9,30,2,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_832CF46C:
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// addi r9,r10,4
	ctx.r9.s64 = ctx.r10.s64 + 4;
	// mr r10,r16
	ctx.r10.u64 = ctx.r16.u64;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x832cf484
	if (!cr6.eq) goto loc_832CF484;
	// li r10,0
	ctx.r10.s64 = 0;
loc_832CF484:
	// lwz r31,4(r9)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r11,r9,4
	ctx.r11.s64 = ctx.r9.s64 + 4;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// mr r10,r16
	ctx.r10.u64 = ctx.r16.u64;
	// bne cr6,0x832cf4a0
	if (!cr6.eq) goto loc_832CF4A0;
	// li r10,0
	ctx.r10.s64 = 0;
loc_832CF4A0:
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r8,r10,r8
	ctx.r8.u64 = ctx.r10.u64 + ctx.r8.u64;
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// mr r9,r16
	ctx.r9.u64 = ctx.r16.u64;
	// bne cr6,0x832cf4bc
	if (!cr6.eq) goto loc_832CF4BC;
	// li r9,0
	ctx.r9.s64 = 0;
loc_832CF4BC:
	// lwzu r11,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r11.u64 = PPC_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// addic r8,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// subfe r11,r8,r11
	temp.u8 = (~ctx.r8.u32 + ctx.r11.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r8.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bdnz 0x832cf46c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_832CF46C;
	// cmplwi cr6,r11,20
	cr6.compare<uint32_t>(ctx.r11.u32, 20, xer);
	// blt cr6,0x832cf4e0
	if (cr6.lt) goto loc_832CF4E0;
	// li r11,19
	ctx.r11.s64 = 19;
loc_832CF4E0:
	// lwz r10,-168(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -168);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r10,80
	ctx.r8.s64 = ctx.r10.s64 + 80;
	// lfsx f0,r9,r8
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	ctx.f0.f64 = double(temp.f32);
	// b 0x832cf5d4
	goto loc_832CF5D4;
loc_832CF4F4:
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(ctx.r29.s32, 0, xer);
	// fmul f0,f11,f7
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f11.f64 * ctx.f7.f64;
	// ble cr6,0x832cf5c8
	if (!cr6.gt) goto loc_832CF5C8;
	// addi r9,r29,-1
	ctx.r9.s64 = ctx.r29.s64 + -1;
	// addi r8,r10,8
	ctx.r8.s64 = ctx.r10.s64 + 8;
	// rlwinm r9,r9,30,2,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_832CF518:
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x832cf540
	if (cr6.eq) goto loc_832CF540;
	// lfs f13,-8(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -8);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// fabs f12,f13
	ctx.f12.u64 = ctx.f13.u64 & ~0x8000000000000000;
	// fcmpu cr6,f12,f0
	cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// ble cr6,0x832cf540
	if (!cr6.gt) goto loc_832CF540;
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
loc_832CF540:
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x832cf568
	if (cr6.eq) goto loc_832CF568;
	// lfs f13,-4(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -4);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// fabs f12,f13
	ctx.f12.u64 = ctx.f13.u64 & ~0x8000000000000000;
	// fcmpu cr6,f12,f0
	cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// ble cr6,0x832cf568
	if (!cr6.gt) goto loc_832CF568;
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
loc_832CF568:
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x832cf590
	if (cr6.eq) goto loc_832CF590;
	// lfs f13,0(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// fabs f12,f13
	ctx.f12.u64 = ctx.f13.u64 & ~0x8000000000000000;
	// fcmpu cr6,f12,f0
	cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// ble cr6,0x832cf590
	if (!cr6.gt) goto loc_832CF590;
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
loc_832CF590:
	// lwzu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x832cf5b4
	if (cr6.eq) goto loc_832CF5B4;
	// lfs f13,4(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// fabs f12,f13
	ctx.f12.u64 = ctx.f13.u64 & ~0x8000000000000000;
	// fcmpu cr6,f12,f0
	cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// ble cr6,0x832cf5b4
	if (!cr6.gt) goto loc_832CF5B4;
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
loc_832CF5B4:
	// addi r8,r8,16
	ctx.r8.s64 = ctx.r8.s64 + 16;
	// bdnz 0x832cf518
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_832CF518;
	// cmplwi cr6,r11,20
	cr6.compare<uint32_t>(ctx.r11.u32, 20, xer);
	// blt cr6,0x832cf5c8
	if (cr6.lt) goto loc_832CF5C8;
	// li r11,19
	ctx.r11.s64 = 19;
loc_832CF5C8:
	// lwz r10,-168(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -168);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f0,r9,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	ctx.f0.f64 = double(temp.f32);
loc_832CF5D4:
	// fmuls f13,f0,f11
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// lwz r11,348(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 348);
	// lwz r10,336(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 336);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r9,r11,0,16,16
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// fneg f12,f13
	ctx.f12.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// beq cr6,0x832cf5f8
	if (cr6.eq) goto loc_832CF5F8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_832CF5F8:
	// lwz r9,344(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 344);
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// lwz r31,340(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 340);
	// stw r10,340(r3)
	PPC_STORE_U32(ctx.r3.u32 + 340, ctx.r10.u32);
	// rotlwi r10,r9,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// stw r11,336(r3)
	PPC_STORE_U32(ctx.r3.u32 + 336, ctx.r11.u32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r9,348(r3)
	PPC_STORE_U32(ctx.r3.u32 + 348, ctx.r9.u32);
	// rlwinm r10,r11,0,16,16
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000;
	// stw r31,344(r3)
	PPC_STORE_U32(ctx.r3.u32 + 344, ctx.r31.u32);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x832cf62c
	if (cr6.eq) goto loc_832CF62C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_832CF62C:
	// lwz r29,336(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 336);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// lwz r31,344(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 344);
	// li r10,5
	ctx.r10.s64 = 5;
	// lwz r30,340(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 340);
	// stw r11,336(r3)
	PPC_STORE_U32(ctx.r3.u32 + 336, ctx.r11.u32);
	// stw r29,340(r3)
	PPC_STORE_U32(ctx.r3.u32 + 340, ctx.r29.u32);
	// stw r31,348(r3)
	PPC_STORE_U32(ctx.r3.u32 + 348, ctx.r31.u32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// stw r30,344(r3)
	PPC_STORE_U32(ctx.r3.u32 + 344, ctx.r30.u32);
	// lwz r29,22784(r18)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r18.u32 + 22784);
	// mullw r11,r29,r19
	ctx.r11.s64 = int64_t(ctx.r29.s32) * int64_t(ctx.r19.s32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r26,r11,r7
	ctx.r26.u64 = ctx.r11.u64 + ctx.r7.u64;
loc_832CF664:
	// lfs f0,0(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f10
	cr6.compare(ctx.f0.f64, ctx.f10.f64);
	// bne cr6,0x832cf688
	if (!cr6.eq) goto loc_832CF688;
	// clrlwi r11,r8,31
	ctx.r11.u64 = ctx.r8.u32 & 0x1;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x832cf684
	if (!cr6.eq) goto loc_832CF684;
	// fmr f0,f12
	ctx.f0.f64 = ctx.f12.f64;
loc_832CF684:
	// stfs f0,0(r26)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r26.u32 + 0, temp.u32);
loc_832CF688:
	// lfs f0,4(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f10
	cr6.compare(ctx.f0.f64, ctx.f10.f64);
	// bne cr6,0x832cf6ac
	if (!cr6.eq) goto loc_832CF6AC;
	// clrlwi r11,r9,31
	ctx.r11.u64 = ctx.r9.u32 & 0x1;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x832cf6a8
	if (!cr6.eq) goto loc_832CF6A8;
	// fmr f0,f12
	ctx.f0.f64 = ctx.f12.f64;
loc_832CF6A8:
	// stfs f0,4(r26)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r26.u32 + 4, temp.u32);
loc_832CF6AC:
	// lfs f0,8(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f10
	cr6.compare(ctx.f0.f64, ctx.f10.f64);
	// bne cr6,0x832cf6d0
	if (!cr6.eq) goto loc_832CF6D0;
	// rlwinm r11,r8,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x2;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x832cf6cc
	if (!cr6.eq) goto loc_832CF6CC;
	// fmr f0,f12
	ctx.f0.f64 = ctx.f12.f64;
loc_832CF6CC:
	// stfs f0,8(r26)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r26.u32 + 8, temp.u32);
loc_832CF6D0:
	// lfs f0,12(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f10
	cr6.compare(ctx.f0.f64, ctx.f10.f64);
	// bne cr6,0x832cf6f4
	if (!cr6.eq) goto loc_832CF6F4;
	// rlwinm r11,r9,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x2;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x832cf6f0
	if (!cr6.eq) goto loc_832CF6F0;
	// fmr f0,f12
	ctx.f0.f64 = ctx.f12.f64;
loc_832CF6F0:
	// stfs f0,12(r26)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r26.u32 + 12, temp.u32);
loc_832CF6F4:
	// srawi r8,r8,2
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 2;
	// srawi r9,r9,2
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 2;
	// addi r26,r26,16
	ctx.r26.s64 = ctx.r26.s64 + 16;
	// bdnz 0x832cf664
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_832CF664;
loc_832CF704:
	// cmpwi cr6,r20,7
	cr6.compare<int32_t>(ctx.r20.s32, 7, xer);
	// bne cr6,0x832cf804
	if (!cr6.eq) goto loc_832CF804;
loc_832CF70C:
	// fmul f0,f11,f8
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f11.f64 * ctx.f8.f64;
	// lwz r10,336(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 336);
	// lwz r11,348(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 348);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r10,r11,0,16,16
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// frsp f13,f0
	ctx.f13.f64 = double(float(ctx.f0.f64));
	// fneg f12,f13
	ctx.f12.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// beq cr6,0x832cf734
	if (cr6.eq) goto loc_832CF734;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_832CF734:
	// lwz r10,344(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 344);
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// lwz r9,336(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 336);
	// lwz r31,340(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 340);
	// stw r11,336(r3)
	PPC_STORE_U32(ctx.r3.u32 + 336, ctx.r11.u32);
	// stw r10,348(r3)
	PPC_STORE_U32(ctx.r3.u32 + 348, ctx.r10.u32);
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// stw r9,340(r3)
	PPC_STORE_U32(ctx.r3.u32 + 340, ctx.r9.u32);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r31,344(r3)
	PPC_STORE_U32(ctx.r3.u32 + 344, ctx.r31.u32);
	// rlwinm r11,r10,0,16,16
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x8000;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x832cf76c
	if (cr6.eq) goto loc_832CF76C;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
loc_832CF76C:
	// lwz r31,344(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 344);
	// li r9,5
	ctx.r9.s64 = 5;
	// lwz r30,340(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 340);
	// addi r11,r26,-4
	ctx.r11.s64 = ctx.r26.s64 + -4;
	// lwz r29,336(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 336);
	// stw r10,336(r3)
	PPC_STORE_U32(ctx.r3.u32 + 336, ctx.r10.u32);
	// stw r31,348(r3)
	PPC_STORE_U32(ctx.r3.u32 + 348, ctx.r31.u32);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// stw r30,344(r3)
	PPC_STORE_U32(ctx.r3.u32 + 344, ctx.r30.u32);
	// stw r29,340(r3)
	PPC_STORE_U32(ctx.r3.u32 + 340, ctx.r29.u32);
loc_832CF794:
	// clrlwi r9,r8,31
	ctx.r9.u64 = ctx.r8.u32 & 0x1;
	// fmr f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f13.f64;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne cr6,0x832cf7a8
	if (!cr6.eq) goto loc_832CF7A8;
	// fmr f0,f12
	ctx.f0.f64 = ctx.f12.f64;
loc_832CF7A8:
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// stfs f0,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne cr6,0x832cf7c0
	if (!cr6.eq) goto loc_832CF7C0;
	// fmr f0,f12
	ctx.f0.f64 = ctx.f12.f64;
loc_832CF7C0:
	// rlwinm r9,r8,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x2;
	// stfs f0,8(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne cr6,0x832cf7d8
	if (!cr6.eq) goto loc_832CF7D8;
	// fmr f0,f12
	ctx.f0.f64 = ctx.f12.f64;
loc_832CF7D8:
	// rlwinm r9,r10,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	// stfs f0,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne cr6,0x832cf7f0
	if (!cr6.eq) goto loc_832CF7F0;
	// fmr f0,f12
	ctx.f0.f64 = ctx.f12.f64;
loc_832CF7F0:
	// srawi r8,r8,2
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 2;
	// stfsu f0,16(r11)
	ctx.fpscr.disableFlushMode();
	ea = 16 + ctx.r11.u32;
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// srawi r10,r10,2
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 2;
	// bdnz 0x832cf794
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_832CF794;
	// lwz r29,22784(r18)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r18.u32 + 22784);
loc_832CF804:
	// lwz r11,28(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 28);
	// addi r19,r19,1
	ctx.r19.s64 = ctx.r19.s64 + 1;
	// cmpw cr6,r19,r11
	cr6.compare<int32_t>(ctx.r19.s32, ctx.r11.s32, xer);
	// blt cr6,0x832cf084
	if (cr6.lt) goto loc_832CF084;
	// lwz r11,-176(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -176);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x832cf828
	if (cr6.eq) goto loc_832CF828;
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,312(r3)
	PPC_STORE_U32(ctx.r3.u32 + 312, ctx.r11.u32);
loc_832CF828:
	// b 0x831cdb00
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832CF82C"))) PPC_WEAK_FUNC(sub_832CF82C);
PPC_FUNC_IMPL(__imp__sub_832CF82C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832CF830"))) PPC_WEAK_FUNC(sub_832CF830);
PPC_FUNC_IMPL(__imp__sub_832CF830) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// beq cr6,0x832cfa60
	if (cr6.eq) goto loc_832CFA60;
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// beq cr6,0x832cfa3c
	if (cr6.eq) goto loc_832CFA3C;
	// cmpwi cr6,r3,3
	cr6.compare<int32_t>(ctx.r3.s32, 3, xer);
	// beq cr6,0x832cf850
	if (cr6.eq) goto loc_832CF850;
	// li r3,6
	ctx.r3.s64 = 6;
	// blr 
	return;
loc_832CF850:
	// addi r11,r4,-1
	ctx.r11.s64 = ctx.r4.s64 + -1;
	// cmplwi cr6,r11,58
	cr6.compare<uint32_t>(ctx.r11.u32, 58, xer);
	// bgt cr6,0x832cfa78
	if (cr6.gt) goto loc_832CFA78;
	// lis r12,-32220
	ctx.r12.s64 = -2111569920;
	// addi r12,r12,-18224
	ctx.r12.s64 = ctx.r12.s64 + -18224;
	// lbzx r0,r12,r11
	ctx.r0.u64 = PPC_LOAD_U8(ctx.r12.u32 + ctx.r11.u32);
	// rlwinm r0,r0,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r0.u32 | (ctx.r0.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r12,-31955
	ctx.r12.s64 = -2094202880;
	// nop 
	// addi r12,r12,-1916
	ctx.r12.s64 = ctx.r12.s64 + -1916;
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctr.u64 = ctx.r12.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_832CF88C;
	case 1:
		goto loc_832CF8BC;
	case 2:
		goto loc_832CF8EC;
	case 3:
		goto loc_832CF914;
	case 4:
		goto loc_832CF944;
	case 5:
		goto loc_832CF974;
	case 6:
		goto loc_832CFA88;
	case 7:
		goto loc_832CF9CC;
	case 8:
		goto loc_832CF9FC;
	case 9:
		goto loc_832CFA2C;
	case 10:
		goto loc_832CFA78;
	case 11:
		goto loc_832CF894;
	case 12:
		goto loc_832CF89C;
	case 13:
		goto loc_832CF8A4;
	case 14:
		goto loc_832CF8AC;
	case 15:
		goto loc_832CF8B4;
	case 16:
		goto loc_832CF8C4;
	case 17:
		goto loc_832CF8CC;
	case 18:
		goto loc_832CF8D4;
	case 19:
		goto loc_832CF8DC;
	case 20:
		goto loc_832CF8E4;
	case 21:
		goto loc_832CF8F4;
	case 22:
		goto loc_832CF8FC;
	case 23:
		goto loc_832CF904;
	case 24:
		goto loc_832CFA90;
	case 25:
		goto loc_832CF90C;
	case 26:
		goto loc_832CF91C;
	case 27:
		goto loc_832CF924;
	case 28:
		goto loc_832CF92C;
	case 29:
		goto loc_832CF934;
	case 30:
		goto loc_832CF93C;
	case 31:
		goto loc_832CF94C;
	case 32:
		goto loc_832CF954;
	case 33:
		goto loc_832CF95C;
	case 34:
		goto loc_832CF964;
	case 35:
		goto loc_832CF96C;
	case 36:
		goto loc_832CF97C;
	case 37:
		goto loc_832CF984;
	case 38:
		goto loc_832CF98C;
	case 39:
		goto loc_832CF994;
	case 40:
		goto loc_832CF99C;
	case 41:
		goto loc_832CF9A4;
	case 42:
		goto loc_832CF9AC;
	case 43:
		goto loc_832CF9B4;
	case 44:
		goto loc_832CF9BC;
	case 45:
		goto loc_832CF9C4;
	case 46:
		goto loc_832CF9D4;
	case 47:
		goto loc_832CF9DC;
	case 48:
		goto loc_832CF9E4;
	case 49:
		goto loc_832CF9EC;
	case 50:
		goto loc_832CF9F4;
	case 51:
		goto loc_832CFA04;
	case 52:
		goto loc_832CFA0C;
	case 53:
		goto loc_832CFA14;
	case 54:
		goto loc_832CFA1C;
	case 55:
		goto loc_832CFA24;
	case 56:
		goto loc_832CFA34;
	case 57:
		goto loc_832CFA80;
	case 58:
		goto loc_832CF884;
	default:
		return;
	}
loc_832CF884:
	// li r11,8800
	ctx.r11.s64 = 8800;
	// b 0x832cfa94
	goto loc_832CFA94;
loc_832CF88C:
	// li r11,9600
	ctx.r11.s64 = 9600;
	// b 0x832cfa94
	goto loc_832CFA94;
loc_832CF894:
	// li r11,10000
	ctx.r11.s64 = 10000;
	// b 0x832cfa94
	goto loc_832CFA94;
loc_832CF89C:
	// li r11,10400
	ctx.r11.s64 = 10400;
	// b 0x832cfa94
	goto loc_832CFA94;
loc_832CF8A4:
	// li r11,10800
	ctx.r11.s64 = 10800;
	// b 0x832cfa94
	goto loc_832CFA94;
loc_832CF8AC:
	// li r11,11200
	ctx.r11.s64 = 11200;
	// b 0x832cfa94
	goto loc_832CFA94;
loc_832CF8B4:
	// li r11,11600
	ctx.r11.s64 = 11600;
	// b 0x832cfa94
	goto loc_832CFA94;
loc_832CF8BC:
	// li r11,12000
	ctx.r11.s64 = 12000;
	// b 0x832cfa94
	goto loc_832CFA94;
loc_832CF8C4:
	// li r11,12400
	ctx.r11.s64 = 12400;
	// b 0x832cfa94
	goto loc_832CFA94;
loc_832CF8CC:
	// li r11,12800
	ctx.r11.s64 = 12800;
	// b 0x832cfa94
	goto loc_832CFA94;
loc_832CF8D4:
	// li r11,13200
	ctx.r11.s64 = 13200;
	// b 0x832cfa94
	goto loc_832CFA94;
loc_832CF8DC:
	// li r11,13600
	ctx.r11.s64 = 13600;
	// b 0x832cfa94
	goto loc_832CFA94;
loc_832CF8E4:
	// li r11,14000
	ctx.r11.s64 = 14000;
	// b 0x832cfa94
	goto loc_832CFA94;
loc_832CF8EC:
	// li r11,14400
	ctx.r11.s64 = 14400;
	// b 0x832cfa94
	goto loc_832CFA94;
loc_832CF8F4:
	// li r11,14800
	ctx.r11.s64 = 14800;
	// b 0x832cfa94
	goto loc_832CFA94;
loc_832CF8FC:
	// li r11,15200
	ctx.r11.s64 = 15200;
	// b 0x832cfa94
	goto loc_832CFA94;
loc_832CF904:
	// li r11,15600
	ctx.r11.s64 = 15600;
	// b 0x832cfa94
	goto loc_832CFA94;
loc_832CF90C:
	// li r11,16400
	ctx.r11.s64 = 16400;
	// b 0x832cfa94
	goto loc_832CFA94;
loc_832CF914:
	// li r11,16800
	ctx.r11.s64 = 16800;
	// b 0x832cfa94
	goto loc_832CFA94;
loc_832CF91C:
	// li r11,17200
	ctx.r11.s64 = 17200;
	// b 0x832cfa94
	goto loc_832CFA94;
loc_832CF924:
	// li r11,17600
	ctx.r11.s64 = 17600;
	// b 0x832cfa94
	goto loc_832CFA94;
loc_832CF92C:
	// li r11,18000
	ctx.r11.s64 = 18000;
	// b 0x832cfa94
	goto loc_832CFA94;
loc_832CF934:
	// li r11,18400
	ctx.r11.s64 = 18400;
	// b 0x832cfa94
	goto loc_832CFA94;
loc_832CF93C:
	// li r11,18800
	ctx.r11.s64 = 18800;
	// b 0x832cfa94
	goto loc_832CFA94;
loc_832CF944:
	// li r11,19200
	ctx.r11.s64 = 19200;
	// b 0x832cfa94
	goto loc_832CFA94;
loc_832CF94C:
	// li r11,19600
	ctx.r11.s64 = 19600;
	// b 0x832cfa94
	goto loc_832CFA94;
loc_832CF954:
	// li r11,20000
	ctx.r11.s64 = 20000;
	// b 0x832cfa94
	goto loc_832CFA94;
loc_832CF95C:
	// li r11,20400
	ctx.r11.s64 = 20400;
	// b 0x832cfa94
	goto loc_832CFA94;
loc_832CF964:
	// li r11,20800
	ctx.r11.s64 = 20800;
	// b 0x832cfa94
	goto loc_832CFA94;
loc_832CF96C:
	// li r11,21200
	ctx.r11.s64 = 21200;
	// b 0x832cfa94
	goto loc_832CFA94;
loc_832CF974:
	// li r11,21600
	ctx.r11.s64 = 21600;
	// b 0x832cfa94
	goto loc_832CFA94;
loc_832CF97C:
	// li r11,22000
	ctx.r11.s64 = 22000;
	// b 0x832cfa94
	goto loc_832CFA94;
loc_832CF984:
	// li r11,22400
	ctx.r11.s64 = 22400;
	// b 0x832cfa94
	goto loc_832CFA94;
loc_832CF98C:
	// li r11,22800
	ctx.r11.s64 = 22800;
	// b 0x832cfa94
	goto loc_832CFA94;
loc_832CF994:
	// li r11,23200
	ctx.r11.s64 = 23200;
	// b 0x832cfa94
	goto loc_832CFA94;
loc_832CF99C:
	// li r11,23600
	ctx.r11.s64 = 23600;
	// b 0x832cfa94
	goto loc_832CFA94;
loc_832CF9A4:
	// li r11,24400
	ctx.r11.s64 = 24400;
	// b 0x832cfa94
	goto loc_832CFA94;
loc_832CF9AC:
	// li r11,24800
	ctx.r11.s64 = 24800;
	// b 0x832cfa94
	goto loc_832CFA94;
loc_832CF9B4:
	// li r11,25200
	ctx.r11.s64 = 25200;
	// b 0x832cfa94
	goto loc_832CFA94;
loc_832CF9BC:
	// li r11,25600
	ctx.r11.s64 = 25600;
	// b 0x832cfa94
	goto loc_832CFA94;
loc_832CF9C4:
	// li r11,26000
	ctx.r11.s64 = 26000;
	// b 0x832cfa94
	goto loc_832CFA94;
loc_832CF9CC:
	// li r11,26400
	ctx.r11.s64 = 26400;
	// b 0x832cfa94
	goto loc_832CFA94;
loc_832CF9D4:
	// li r11,26800
	ctx.r11.s64 = 26800;
	// b 0x832cfa94
	goto loc_832CFA94;
loc_832CF9DC:
	// li r11,27200
	ctx.r11.s64 = 27200;
	// b 0x832cfa94
	goto loc_832CFA94;
loc_832CF9E4:
	// li r11,27600
	ctx.r11.s64 = 27600;
	// b 0x832cfa94
	goto loc_832CFA94;
loc_832CF9EC:
	// li r11,28000
	ctx.r11.s64 = 28000;
	// b 0x832cfa94
	goto loc_832CFA94;
loc_832CF9F4:
	// li r11,28400
	ctx.r11.s64 = 28400;
	// b 0x832cfa94
	goto loc_832CFA94;
loc_832CF9FC:
	// li r11,28800
	ctx.r11.s64 = 28800;
	// b 0x832cfa94
	goto loc_832CFA94;
loc_832CFA04:
	// li r11,29200
	ctx.r11.s64 = 29200;
	// b 0x832cfa94
	goto loc_832CFA94;
loc_832CFA0C:
	// li r11,29600
	ctx.r11.s64 = 29600;
	// b 0x832cfa94
	goto loc_832CFA94;
loc_832CFA14:
	// li r11,30000
	ctx.r11.s64 = 30000;
	// b 0x832cfa94
	goto loc_832CFA94;
loc_832CFA1C:
	// li r11,30400
	ctx.r11.s64 = 30400;
	// b 0x832cfa94
	goto loc_832CFA94;
loc_832CFA24:
	// li r11,30800
	ctx.r11.s64 = 30800;
	// b 0x832cfa94
	goto loc_832CFA94;
loc_832CFA2C:
	// li r11,31200
	ctx.r11.s64 = 31200;
	// b 0x832cfa94
	goto loc_832CFA94;
loc_832CFA34:
	// li r11,31600
	ctx.r11.s64 = 31600;
	// b 0x832cfa94
	goto loc_832CFA94;
loc_832CFA3C:
	// cmplwi cr6,r4,1
	cr6.compare<uint32_t>(ctx.r4.u32, 1, xer);
	// beq cr6,0x832cfa88
	if (cr6.eq) goto loc_832CFA88;
	// cmplwi cr6,r4,2
	cr6.compare<uint32_t>(ctx.r4.u32, 2, xer);
	// beq cr6,0x832cfa80
	if (cr6.eq) goto loc_832CFA80;
	// cmplwi cr6,r4,3
	cr6.compare<uint32_t>(ctx.r4.u32, 3, xer);
	// bne cr6,0x832cfa78
	if (!cr6.eq) goto loc_832CFA78;
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r11,r11,48000
	ctx.r11.u64 = ctx.r11.u64 | 48000;
	// b 0x832cfa94
	goto loc_832CFA94;
loc_832CFA60:
	// cmplwi cr6,r4,1
	cr6.compare<uint32_t>(ctx.r4.u32, 1, xer);
	// beq cr6,0x832cfa90
	if (cr6.eq) goto loc_832CFA90;
	// cmplwi cr6,r4,2
	cr6.compare<uint32_t>(ctx.r4.u32, 2, xer);
	// beq cr6,0x832cfa88
	if (cr6.eq) goto loc_832CFA88;
	// cmplwi cr6,r4,3
	cr6.compare<uint32_t>(ctx.r4.u32, 3, xer);
	// beq cr6,0x832cfa80
	if (cr6.eq) goto loc_832CFA80;
loc_832CFA78:
	// li r3,5
	ctx.r3.s64 = 5;
	// blr 
	return;
loc_832CFA80:
	// li r11,32000
	ctx.r11.s64 = 32000;
	// b 0x832cfa94
	goto loc_832CFA94;
loc_832CFA88:
	// li r11,24000
	ctx.r11.s64 = 24000;
	// b 0x832cfa94
	goto loc_832CFA94;
loc_832CFA90:
	// li r11,16000
	ctx.r11.s64 = 16000;
loc_832CFA94:
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832CFAA0"))) PPC_WEAK_FUNC(sub_832CFAA0);
PPC_FUNC_IMPL(__imp__sub_832CFAA0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad0
	ctx.lr = 0x832CFAA8;
	__savegprlr_22(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r22,r7
	ctx.r22.u64 = ctx.r7.u64;
	// cmpwi cr6,r4,3
	cr6.compare<int32_t>(ctx.r4.s32, 3, xer);
	// bne cr6,0x832cfacc
	if (!cr6.eq) goto loc_832CFACC;
	// li r28,1
	ctx.r28.s64 = 1;
loc_832CFACC:
	// addi r10,r1,108
	ctx.r10.s64 = ctx.r1.s64 + 108;
	// addi r9,r1,100
	ctx.r9.s64 = ctx.r1.s64 + 100;
	// addi r8,r1,92
	ctx.r8.s64 = ctx.r1.s64 + 92;
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// addi r6,r1,104
	ctx.r6.s64 = ctx.r1.s64 + 104;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r1,116
	ctx.r4.s64 = ctx.r1.s64 + 116;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x832d01c0
	ctx.lr = 0x832CFAF0;
	sub_832D01C0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x832d01b4
	if (!cr6.eq) goto loc_832D01B4;
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r24,16
	ctx.r24.s64 = 16;
	// stw r30,328(r31)
	PPC_STORE_U32(ctx.r31.u32 + 328, ctx.r30.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// stw r10,324(r31)
	PPC_STORE_U32(ctx.r31.u32 + 324, ctx.r10.u32);
	// ble cr6,0x832cfba8
	if (!cr6.gt) goto loc_832CFBA8;
	// li r4,0
	ctx.r4.s64 = 0;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
loc_832CFB1C:
	// lwz r11,324(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 324);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x832cfb44
	if (!cr6.eq) goto loc_832CFB44;
	// lwz r11,328(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 328);
	// addi r10,r11,2
	ctx.r10.s64 = ctx.r11.s64 + 2;
	// lhz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// stw r10,328(r31)
	PPC_STORE_U32(ctx.r31.u32 + 328, ctx.r10.u32);
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// stw r24,324(r31)
	PPC_STORE_U32(ctx.r31.u32 + 324, ctx.r24.u32);
	// stw r8,320(r31)
	PPC_STORE_U32(ctx.r31.u32 + 320, ctx.r8.u32);
loc_832CFB44:
	// lwz r11,324(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 324);
	// rlwinm r10,r4,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r9,320(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 320);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// sraw r8,r9,r11
	temp.u32 = ctx.r11.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	xer.ca = (ctx.r9.s32 < 0) & (((ctx.r9.s32 >> temp.u32) << temp.u32) != ctx.r9.s32);
	ctx.r8.s64 = ctx.r9.s32 >> temp.u32;
	// stw r11,324(r31)
	PPC_STORE_U32(ctx.r31.u32 + 324, ctx.r11.u32);
	// clrlwi r7,r8,31
	ctx.r7.u64 = ctx.r8.u32 & 0x1;
	// stw r7,316(r31)
	PPC_STORE_U32(ctx.r31.u32 + 316, ctx.r7.u32);
	// or r4,r10,r7
	ctx.r4.u64 = ctx.r10.u64 | ctx.r7.u64;
	// bdnz 0x832cfb1c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_832CFB1C;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x832cf830
	ctx.lr = 0x832CFB78;
	sub_832CF830(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x832d01b4
	if (!cr6.eq) goto loc_832D01B4;
	// cmpwi cr6,r29,1
	cr6.compare<int32_t>(ctx.r29.s32, 1, xer);
	// beq cr6,0x832cfb90
	if (cr6.eq) goto loc_832CFB90;
	// cmpwi cr6,r29,2
	cr6.compare<int32_t>(ctx.r29.s32, 2, xer);
	// bne cr6,0x832cfbb0
	if (!cr6.eq) goto loc_832CFBB0;
loc_832CFB90:
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r28,r4
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r4.u32, xer);
	// beq cr6,0x832cfbb4
	if (cr6.eq) goto loc_832CFBB4;
	// li r3,7
	ctx.r3.s64 = 7;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
loc_832CFBA8:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// b 0x832cfbb4
	goto loc_832CFBB4;
loc_832CFBB0:
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
loc_832CFBB4:
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r6,r1,120
	ctx.r6.s64 = ctx.r1.s64 + 120;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x832d0270
	ctx.lr = 0x832CFBC8;
	sub_832D0270(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x832d01b4
	if (!cr6.eq) goto loc_832D01B4;
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lis r10,-31738
	ctx.r10.s64 = -2079981568;
	// lwz r9,96(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r25,r31,256
	ctx.r25.s64 = ctx.r31.s64 + 256;
	// lwz r8,92(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// subf r4,r11,r9
	ctx.r4.s64 = ctx.r9.s64 - ctx.r11.s64;
	// lwz r26,80(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// lwz r7,100(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// subf r9,r8,r4
	ctx.r9.s64 = ctx.r4.s64 - ctx.r8.s64;
	// lwz r11,22784(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 22784);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 312, ctx.r9.u32);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mullw r23,r11,r26
	ctx.r23.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r26.s32);
	// bl 0x832cec58
	ctx.lr = 0x832CFC14;
	sub_832CEC58(ctx, base);
	// lwz r9,104(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// ble cr6,0x832cfc78
	if (!cr6.gt) goto loc_832CFC78;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_832CFC28:
	// lwz r11,324(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 324);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x832cfc50
	if (!cr6.eq) goto loc_832CFC50;
	// lwz r11,328(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 328);
	// addi r10,r11,2
	ctx.r10.s64 = ctx.r11.s64 + 2;
	// lhz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// stw r10,328(r31)
	PPC_STORE_U32(ctx.r31.u32 + 328, ctx.r10.u32);
	// extsh r7,r8
	ctx.r7.s64 = ctx.r8.s16;
	// stw r24,324(r31)
	PPC_STORE_U32(ctx.r31.u32 + 324, ctx.r24.u32);
	// stw r7,320(r31)
	PPC_STORE_U32(ctx.r31.u32 + 320, ctx.r7.u32);
loc_832CFC50:
	// lwz r11,324(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 324);
	// rlwinm r10,r28,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r8,320(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 320);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// sraw r7,r8,r11
	temp.u32 = ctx.r11.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	xer.ca = (ctx.r8.s32 < 0) & (((ctx.r8.s32 >> temp.u32) << temp.u32) != ctx.r8.s32);
	ctx.r7.s64 = ctx.r8.s32 >> temp.u32;
	// stw r11,324(r31)
	PPC_STORE_U32(ctx.r31.u32 + 324, ctx.r11.u32);
	// clrlwi r11,r7,31
	ctx.r11.u64 = ctx.r7.u32 & 0x1;
	// stw r11,316(r31)
	PPC_STORE_U32(ctx.r31.u32 + 316, ctx.r11.u32);
	// add r28,r10,r11
	ctx.r28.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bdnz 0x832cfc28
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_832CFC28;
loc_832CFC78:
	// lwz r11,312(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 312);
	// addi r27,r31,128
	ctx.r27.s64 = ctx.r31.s64 + 128;
	// addi r29,r31,64
	ctx.r29.s64 = ctx.r31.s64 + 64;
	// subf r4,r9,r11
	ctx.r4.s64 = ctx.r11.s64 - ctx.r9.s64;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// stw r4,312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 312, ctx.r4.u32);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x832d0958
	ctx.lr = 0x832CFCA0;
	sub_832D0958(ctx, base);
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(ctx.r28.s32, 0, xer);
	// ble cr6,0x832cfcc8
	if (!cr6.gt) goto loc_832CFCC8;
	// addi r10,r27,-4
	ctx.r10.s64 = ctx.r27.s64 + -4;
	// mtctr r28
	ctr.u64 = ctx.r28.u64;
loc_832CFCB0:
	// lwzu r11,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r11.u64 = PPC_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r29
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stwx r9,r11,r29
	PPC_STORE_U32(ctx.r11.u32 + ctx.r29.u32, ctx.r9.u32);
	// bdnz 0x832cfcb0
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_832CFCB0;
loc_832CFCC8:
	// mr r7,r22
	ctx.r7.u64 = ctx.r22.u64;
	// lwz r8,108(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832cefd0
	ctx.lr = 0x832CFCE4;
	sub_832CEFD0(ctx, base);
	// lwz r11,312(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 312);
	// li r6,0
	ctx.r6.s64 = 0;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble cr6,0x832cfd5c
	if (!cr6.gt) goto loc_832CFD5C;
	// li r10,0
	ctx.r10.s64 = 0;
loc_832CFCF8:
	// lwz r11,324(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 324);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x832cfd20
	if (!cr6.eq) goto loc_832CFD20;
	// lwz r11,328(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 328);
	// addi r9,r11,2
	ctx.r9.s64 = ctx.r11.s64 + 2;
	// lhz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// stw r9,328(r31)
	PPC_STORE_U32(ctx.r31.u32 + 328, ctx.r9.u32);
	// extsh r7,r8
	ctx.r7.s64 = ctx.r8.s16;
	// stw r24,324(r31)
	PPC_STORE_U32(ctx.r31.u32 + 324, ctx.r24.u32);
	// stw r7,320(r31)
	PPC_STORE_U32(ctx.r31.u32 + 320, ctx.r7.u32);
loc_832CFD20:
	// lwz r11,324(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 324);
	// lwz r9,320(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 320);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// sraw r8,r9,r11
	temp.u32 = ctx.r11.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	xer.ca = (ctx.r9.s32 < 0) & (((ctx.r9.s32 >> temp.u32) << temp.u32) != ctx.r9.s32);
	ctx.r8.s64 = ctx.r9.s32 >> temp.u32;
	// stw r11,324(r31)
	PPC_STORE_U32(ctx.r31.u32 + 324, ctx.r11.u32);
	// clrlwi r7,r8,31
	ctx.r7.u64 = ctx.r8.u32 & 0x1;
	// stw r7,316(r31)
	PPC_STORE_U32(ctx.r31.u32 + 316, ctx.r7.u32);
	// cmpwi cr6,r7,0
	cr6.compare<int32_t>(ctx.r7.s32, 0, xer);
	// bne cr6,0x832cfd48
	if (!cr6.eq) goto loc_832CFD48;
	// li r6,1
	ctx.r6.s64 = 1;
loc_832CFD48:
	// lwz r11,312(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 312);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, xer);
	// blt cr6,0x832cfcf8
	if (cr6.lt) goto loc_832CFCF8;
	// b 0x832cfd78
	goto loc_832CFD78;
loc_832CFD5C:
	// lwz r10,112(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// addi r9,r10,-1
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// cmpw cr6,r28,r9
	cr6.compare<int32_t>(ctx.r28.s32, ctx.r9.s32, xer);
	// bge cr6,0x832cfd78
	if (!cr6.lt) goto loc_832CFD78;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bge cr6,0x832cfd78
	if (!cr6.lt) goto loc_832CFD78;
	// li r6,2
	ctx.r6.s64 = 2;
loc_832CFD78:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble cr6,0x832cfe4c
	if (!cr6.gt) goto loc_832CFE4C;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// li r9,7
	ctx.r9.s64 = 7;
	// addi r10,r31,8
	ctx.r10.s64 = ctx.r31.s64 + 8;
	// divwu r11,r11,r9
	ctx.r11.u32 = PPCDivide(ctx.r11.u32, ctx.r9.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
loc_832CFD9C:
	// lwz r11,-8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -8);
	// cmpwi cr6,r11,33
	cr6.compare<int32_t>(ctx.r11.s32, 33, xer);
	// bgt cr6,0x832cfdb0
	if (cr6.gt) goto loc_832CFDB0;
	// cmpwi cr6,r11,-31
	cr6.compare<int32_t>(ctx.r11.s32, -31, xer);
	// bge cr6,0x832cfdb4
	if (!cr6.lt) goto loc_832CFDB4;
loc_832CFDB0:
	// ori r6,r6,4
	ctx.r6.u64 = ctx.r6.u64 | 4;
loc_832CFDB4:
	// lwz r11,-4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -4);
	// cmpwi cr6,r11,33
	cr6.compare<int32_t>(ctx.r11.s32, 33, xer);
	// bgt cr6,0x832cfdc8
	if (cr6.gt) goto loc_832CFDC8;
	// cmpwi cr6,r11,-31
	cr6.compare<int32_t>(ctx.r11.s32, -31, xer);
	// bge cr6,0x832cfdcc
	if (!cr6.lt) goto loc_832CFDCC;
loc_832CFDC8:
	// ori r6,r6,4
	ctx.r6.u64 = ctx.r6.u64 | 4;
loc_832CFDCC:
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r11,33
	cr6.compare<int32_t>(ctx.r11.s32, 33, xer);
	// bgt cr6,0x832cfde0
	if (cr6.gt) goto loc_832CFDE0;
	// cmpwi cr6,r11,-31
	cr6.compare<int32_t>(ctx.r11.s32, -31, xer);
	// bge cr6,0x832cfde4
	if (!cr6.lt) goto loc_832CFDE4;
loc_832CFDE0:
	// ori r6,r6,4
	ctx.r6.u64 = ctx.r6.u64 | 4;
loc_832CFDE4:
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmpwi cr6,r11,33
	cr6.compare<int32_t>(ctx.r11.s32, 33, xer);
	// bgt cr6,0x832cfdf8
	if (cr6.gt) goto loc_832CFDF8;
	// cmpwi cr6,r11,-31
	cr6.compare<int32_t>(ctx.r11.s32, -31, xer);
	// bge cr6,0x832cfdfc
	if (!cr6.lt) goto loc_832CFDFC;
loc_832CFDF8:
	// ori r6,r6,4
	ctx.r6.u64 = ctx.r6.u64 | 4;
loc_832CFDFC:
	// lwz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// cmpwi cr6,r11,33
	cr6.compare<int32_t>(ctx.r11.s32, 33, xer);
	// bgt cr6,0x832cfe10
	if (cr6.gt) goto loc_832CFE10;
	// cmpwi cr6,r11,-31
	cr6.compare<int32_t>(ctx.r11.s32, -31, xer);
	// bge cr6,0x832cfe14
	if (!cr6.lt) goto loc_832CFE14;
loc_832CFE10:
	// ori r6,r6,4
	ctx.r6.u64 = ctx.r6.u64 | 4;
loc_832CFE14:
	// lwz r11,12(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmpwi cr6,r11,33
	cr6.compare<int32_t>(ctx.r11.s32, 33, xer);
	// bgt cr6,0x832cfe28
	if (cr6.gt) goto loc_832CFE28;
	// cmpwi cr6,r11,-31
	cr6.compare<int32_t>(ctx.r11.s32, -31, xer);
	// bge cr6,0x832cfe2c
	if (!cr6.lt) goto loc_832CFE2C;
loc_832CFE28:
	// ori r6,r6,4
	ctx.r6.u64 = ctx.r6.u64 | 4;
loc_832CFE2C:
	// lwz r11,16(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// cmpwi cr6,r11,33
	cr6.compare<int32_t>(ctx.r11.s32, 33, xer);
	// bgt cr6,0x832cfe40
	if (cr6.gt) goto loc_832CFE40;
	// cmpwi cr6,r11,-31
	cr6.compare<int32_t>(ctx.r11.s32, -31, xer);
	// bge cr6,0x832cfe44
	if (!cr6.lt) goto loc_832CFE44;
loc_832CFE40:
	// ori r6,r6,4
	ctx.r6.u64 = ctx.r6.u64 | 4;
loc_832CFE44:
	// addi r10,r10,28
	ctx.r10.s64 = ctx.r10.s64 + 28;
	// bdnz 0x832cfd9c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_832CFD9C;
loc_832CFE4C:
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble cr6,0x832d0168
	if (!cr6.gt) goto loc_832D0168;
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r8,96(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// slw r9,r10,r11
	ctx.r9.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r11.u8 & 0x3F));
	// srawi r11,r8,4
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r8.s32 >> 4;
	// addi r7,r9,-1
	ctx.r7.s64 = ctx.r9.s64 + -1;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// extsh r8,r7
	ctx.r8.s64 = ctx.r7.s16;
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + ctx.r30.u64;
	// cmpwi cr6,r11,20
	cr6.compare<int32_t>(ctx.r11.s32, 20, xer);
	// addi r9,r10,-2
	ctx.r9.s64 = ctx.r10.s64 + -2;
	// stw r9,328(r31)
	PPC_STORE_U32(ctx.r31.u32 + 328, ctx.r9.u32);
	// lhz r4,-2(r10)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r10.u32 + -2);
	// extsh r3,r4
	ctx.r3.s64 = ctx.r4.s16;
	// stw r30,328(r31)
	PPC_STORE_U32(ctx.r31.u32 + 328, ctx.r30.u32);
	// and r7,r3,r8
	ctx.r7.u64 = ctx.r3.u64 & ctx.r8.u64;
	// bne cr6,0x832d0024
	if (!cr6.eq) goto loc_832D0024;
	// addi r11,r30,2
	ctx.r11.s64 = ctx.r30.s64 + 2;
	// lhz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// stw r11,328(r31)
	PPC_STORE_U32(ctx.r31.u32 + 328, ctx.r11.u32);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// lhz r5,2(r30)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r30.u32 + 2);
	// rotlwi r4,r5,1
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r5.u32, 1);
	// addi r10,r11,2
	ctx.r10.s64 = ctx.r11.s64 + 2;
	// stw r11,328(r31)
	PPC_STORE_U32(ctx.r31.u32 + 328, ctx.r11.u32);
	// lhz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r30.u32 + 4);
	// xor r9,r4,r9
	ctx.r9.u64 = ctx.r4.u64 ^ ctx.r9.u64;
	// stw r10,328(r31)
	PPC_STORE_U32(ctx.r31.u32 + 328, ctx.r10.u32);
	// addi r11,r10,2
	ctx.r11.s64 = ctx.r10.s64 + 2;
	// lhz r5,6(r30)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r30.u32 + 6);
	// rotlwi r4,r3,2
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r3.u32, 2);
	// addi r10,r11,2
	ctx.r10.s64 = ctx.r11.s64 + 2;
	// stw r11,328(r31)
	PPC_STORE_U32(ctx.r31.u32 + 328, ctx.r11.u32);
	// lhz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r30.u32 + 8);
	// xor r4,r4,r9
	ctx.r4.u64 = ctx.r4.u64 ^ ctx.r9.u64;
	// addi r11,r10,2
	ctx.r11.s64 = ctx.r10.s64 + 2;
	// stw r10,328(r31)
	PPC_STORE_U32(ctx.r31.u32 + 328, ctx.r10.u32);
	// lhz r29,10(r30)
	ctx.r29.u64 = PPC_LOAD_U16(ctx.r30.u32 + 10);
	// rotlwi r5,r5,3
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r5.u32, 3);
	// stw r11,328(r31)
	PPC_STORE_U32(ctx.r31.u32 + 328, ctx.r11.u32);
	// addi r10,r11,2
	ctx.r10.s64 = ctx.r11.s64 + 2;
	// lhz r9,12(r30)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r30.u32 + 12);
	// xor r5,r5,r4
	ctx.r5.u64 = ctx.r5.u64 ^ ctx.r4.u64;
	// addi r11,r10,2
	ctx.r11.s64 = ctx.r10.s64 + 2;
	// stw r10,328(r31)
	PPC_STORE_U32(ctx.r31.u32 + 328, ctx.r10.u32);
	// lhz r28,14(r30)
	ctx.r28.u64 = PPC_LOAD_U16(ctx.r30.u32 + 14);
	// rotlwi r3,r3,4
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r3.u32, 4);
	// addi r10,r11,2
	ctx.r10.s64 = ctx.r11.s64 + 2;
	// stw r11,328(r31)
	PPC_STORE_U32(ctx.r31.u32 + 328, ctx.r11.u32);
	// lhz r4,16(r30)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r30.u32 + 16);
	// xor r3,r3,r5
	ctx.r3.u64 = ctx.r3.u64 ^ ctx.r5.u64;
	// addi r11,r10,2
	ctx.r11.s64 = ctx.r10.s64 + 2;
	// stw r10,328(r31)
	PPC_STORE_U32(ctx.r31.u32 + 328, ctx.r10.u32);
	// lhz r27,18(r30)
	ctx.r27.u64 = PPC_LOAD_U16(ctx.r30.u32 + 18);
	// rotlwi r29,r29,5
	ctx.r29.u64 = __builtin_rotateleft32(ctx.r29.u32, 5);
	// addi r10,r11,2
	ctx.r10.s64 = ctx.r11.s64 + 2;
	// stw r11,328(r31)
	PPC_STORE_U32(ctx.r31.u32 + 328, ctx.r11.u32);
	// lhz r5,20(r30)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r30.u32 + 20);
	// xor r3,r29,r3
	ctx.r3.u64 = ctx.r29.u64 ^ ctx.r3.u64;
	// addi r11,r10,2
	ctx.r11.s64 = ctx.r10.s64 + 2;
	// stw r10,328(r31)
	PPC_STORE_U32(ctx.r31.u32 + 328, ctx.r10.u32);
	// lhz r26,22(r30)
	ctx.r26.u64 = PPC_LOAD_U16(ctx.r30.u32 + 22);
	// rotlwi r9,r9,6
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 6);
	// addi r10,r11,2
	ctx.r10.s64 = ctx.r11.s64 + 2;
	// stw r11,328(r31)
	PPC_STORE_U32(ctx.r31.u32 + 328, ctx.r11.u32);
	// lhz r29,24(r30)
	ctx.r29.u64 = PPC_LOAD_U16(ctx.r30.u32 + 24);
	// xor r9,r9,r3
	ctx.r9.u64 = ctx.r9.u64 ^ ctx.r3.u64;
	// addi r11,r10,2
	ctx.r11.s64 = ctx.r10.s64 + 2;
	// stw r10,328(r31)
	PPC_STORE_U32(ctx.r31.u32 + 328, ctx.r10.u32);
	// lhz r25,26(r30)
	ctx.r25.u64 = PPC_LOAD_U16(ctx.r30.u32 + 26);
	// rotlwi r28,r28,7
	ctx.r28.u64 = __builtin_rotateleft32(ctx.r28.u32, 7);
	// stw r11,328(r31)
	PPC_STORE_U32(ctx.r31.u32 + 328, ctx.r11.u32);
	// addi r10,r11,2
	ctx.r10.s64 = ctx.r11.s64 + 2;
	// lhz r3,28(r30)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r30.u32 + 28);
	// xor r9,r28,r9
	ctx.r9.u64 = ctx.r28.u64 ^ ctx.r9.u64;
	// rotlwi r11,r4,8
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r4.u32, 8);
	// stw r10,328(r31)
	PPC_STORE_U32(ctx.r31.u32 + 328, ctx.r10.u32);
	// xor r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r9.u64;
	// lhz r4,30(r30)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r30.u32 + 30);
	// rotlwi r28,r27,9
	ctx.r28.u64 = __builtin_rotateleft32(ctx.r27.u32, 9);
	// rotlwi r9,r5,10
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r5.u32, 10);
	// xor r5,r28,r11
	ctx.r5.u64 = ctx.r28.u64 ^ ctx.r11.u64;
	// xor r9,r9,r5
	ctx.r9.u64 = ctx.r9.u64 ^ ctx.r5.u64;
	// rotlwi r11,r26,11
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r26.u32, 11);
	// rotlwi r5,r29,12
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r29.u32, 12);
	// xor r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 ^ ctx.r9.u64;
	// addi r11,r10,2
	ctx.r11.s64 = ctx.r10.s64 + 2;
	// xor r9,r5,r9
	ctx.r9.u64 = ctx.r5.u64 ^ ctx.r9.u64;
	// rotlwi r10,r25,13
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r25.u32, 13);
	// stw r11,328(r31)
	PPC_STORE_U32(ctx.r31.u32 + 328, ctx.r11.u32);
	// rotlwi r5,r3,14
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r3.u32, 14);
	// lhz r3,32(r30)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r30.u32 + 32);
	// xor r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 ^ ctx.r9.u64;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// xor r9,r5,r4
	ctx.r9.u64 = ctx.r5.u64 ^ ctx.r4.u64;
	// stw r11,328(r31)
	PPC_STORE_U32(ctx.r31.u32 + 328, ctx.r11.u32);
	// xor r5,r9,r10
	ctx.r5.u64 = ctx.r9.u64 ^ ctx.r10.u64;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// lhz r4,34(r30)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r30.u32 + 34);
	// addi r10,r11,2
	ctx.r10.s64 = ctx.r11.s64 + 2;
	// rotlwi r3,r3,1
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r3.u32, 1);
	// stw r11,328(r31)
	PPC_STORE_U32(ctx.r31.u32 + 328, ctx.r11.u32);
	// lhz r11,36(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 36);
	// rotlwi r9,r4,2
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r4.u32, 2);
	// stw r10,328(r31)
	PPC_STORE_U32(ctx.r31.u32 + 328, ctx.r10.u32);
	// xor r5,r3,r5
	ctx.r5.u64 = ctx.r3.u64 ^ ctx.r5.u64;
	// lhz r3,38(r30)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r30.u32 + 38);
	// rotlwi r4,r11,3
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r11.u32, 3);
	// xor r11,r9,r5
	ctx.r11.u64 = ctx.r9.u64 ^ ctx.r5.u64;
	// andc r9,r3,r8
	ctx.r9.u64 = ctx.r3.u64 & ~ctx.r8.u64;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// xor r8,r4,r11
	ctx.r8.u64 = ctx.r4.u64 ^ ctx.r11.u64;
	// rlwinm r5,r9,4,0,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// stw r10,328(r31)
	PPC_STORE_U32(ctx.r31.u32 + 328, ctx.r10.u32);
	// xor r11,r5,r8
	ctx.r11.u64 = ctx.r5.u64 ^ ctx.r8.u64;
	// b 0x832d0084
	goto loc_832D0084;
loc_832D0024:
	// addic. r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r11,0
	ctx.r11.s64 = 0;
	// ble 0x832d0068
	if (!cr0.gt) goto loc_832D0068;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_832D0038:
	// lwz r10,328(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 328);
	// addi r5,r10,2
	ctx.r5.s64 = ctx.r10.s64 + 2;
	// lhz r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// stw r5,328(r31)
	PPC_STORE_U32(ctx.r31.u32 + 328, ctx.r5.u32);
	// slw r3,r4,r11
	ctx.r3.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r4.u32 << (ctx.r11.u8 & 0x3F));
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// xor r9,r3,r9
	ctx.r9.u64 = ctx.r3.u64 ^ ctx.r9.u64;
	// addi r10,r11,-15
	ctx.r10.s64 = ctx.r11.s64 + -15;
	// subfic r10,r10,0
	xer.ca = ctx.r10.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r10.s64;
	// subfe r4,r5,r5
	temp.u8 = (~ctx.r5.u32 + ctx.r5.u32 < ~ctx.r5.u32) | (~ctx.r5.u32 + ctx.r5.u32 + xer.ca < xer.ca);
	ctx.r4.u64 = ~ctx.r5.u64 + ctx.r5.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 & ctx.r11.u64;
	// bdnz 0x832d0038
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_832D0038;
loc_832D0068:
	// lwz r10,328(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 328);
	// addi r5,r10,2
	ctx.r5.s64 = ctx.r10.s64 + 2;
	// lhz r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// stw r5,328(r31)
	PPC_STORE_U32(ctx.r31.u32 + 328, ctx.r5.u32);
	// andc r3,r4,r8
	ctx.r3.u64 = ctx.r4.u64 & ~ctx.r8.u64;
	// slw r11,r3,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r3.u32 << (ctx.r11.u8 & 0x3F));
	// xor r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r9.u64;
loc_832D0084:
	// lis r10,-31772
	ctx.r10.s64 = -2082209792;
	// srawi r9,r11,15
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFF) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 15;
	// clrlwi r8,r11,17
	ctx.r8.u64 = ctx.r11.u32 & 0x7FFF;
	// addi r5,r10,29360
	ctx.r5.s64 = ctx.r10.s64 + 29360;
	// xor r4,r9,r8
	ctx.r4.u64 = ctx.r9.u64 ^ ctx.r8.u64;
	// lwz r11,29360(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 29360);
	// and r3,r11,r4
	ctx.r3.u64 = ctx.r11.u64 & ctx.r4.u64;
	// lwz r11,4(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// srawi r9,r3,8
	xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFF) != 0);
	ctx.r9.s64 = ctx.r3.s32 >> 8;
	// lwz r10,8(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// and r8,r11,r4
	ctx.r8.u64 = ctx.r11.u64 & ctx.r4.u64;
	// lwz r11,12(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	// xor r5,r9,r3
	ctx.r5.u64 = ctx.r9.u64 ^ ctx.r3.u64;
	// and r3,r10,r4
	ctx.r3.u64 = ctx.r10.u64 & ctx.r4.u64;
	// srawi r10,r5,4
	xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r5.s32 >> 4;
	// and r9,r11,r4
	ctx.r9.u64 = ctx.r11.u64 & ctx.r4.u64;
	// xor r5,r10,r5
	ctx.r5.u64 = ctx.r10.u64 ^ ctx.r5.u64;
	// srawi r4,r5,2
	xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x3) != 0);
	ctx.r4.s64 = ctx.r5.s32 >> 2;
	// xor r11,r4,r5
	ctx.r11.u64 = ctx.r4.u64 ^ ctx.r5.u64;
	// srawi r10,r11,1
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
	// srawi r5,r8,8
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFF) != 0);
	ctx.r5.s64 = ctx.r8.s32 >> 8;
	// xor r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// xor r10,r5,r8
	ctx.r10.u64 = ctx.r5.u64 ^ ctx.r8.u64;
	// rlwinm r11,r4,1,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0x2;
	// srawi r5,r10,4
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xF) != 0);
	ctx.r5.s64 = ctx.r10.s32 >> 4;
	// xor r4,r5,r10
	ctx.r4.u64 = ctx.r5.u64 ^ ctx.r10.u64;
	// srawi r10,r4,2
	xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r4.s32 >> 2;
	// xor r8,r10,r4
	ctx.r8.u64 = ctx.r10.u64 ^ ctx.r4.u64;
	// srawi r5,r8,1
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1) != 0);
	ctx.r5.s64 = ctx.r8.s32 >> 1;
	// srawi r4,r3,8
	xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFF) != 0);
	ctx.r4.s64 = ctx.r3.s32 >> 8;
	// xor r10,r5,r8
	ctx.r10.u64 = ctx.r5.u64 ^ ctx.r8.u64;
	// xor r8,r4,r3
	ctx.r8.u64 = ctx.r4.u64 ^ ctx.r3.u64;
	// clrlwi r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	// srawi r5,r8,4
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xF) != 0);
	ctx.r5.s64 = ctx.r8.s32 >> 4;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// xor r4,r5,r8
	ctx.r4.u64 = ctx.r5.u64 ^ ctx.r8.u64;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// srawi r3,r4,2
	xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x3) != 0);
	ctx.r3.s64 = ctx.r4.s32 >> 2;
	// xor r10,r3,r4
	ctx.r10.u64 = ctx.r3.u64 ^ ctx.r4.u64;
	// srawi r8,r10,1
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r8.s64 = ctx.r10.s32 >> 1;
	// srawi r5,r9,8
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFF) != 0);
	ctx.r5.s64 = ctx.r9.s32 >> 8;
	// xor r4,r8,r10
	ctx.r4.u64 = ctx.r8.u64 ^ ctx.r10.u64;
	// xor r3,r5,r9
	ctx.r3.u64 = ctx.r5.u64 ^ ctx.r9.u64;
	// clrlwi r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	// srawi r9,r3,4
	xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xF) != 0);
	ctx.r9.s64 = ctx.r3.s32 >> 4;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// xor r8,r9,r3
	ctx.r8.u64 = ctx.r9.u64 ^ ctx.r3.u64;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// srawi r5,r8,2
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r5.s64 = ctx.r8.s32 >> 2;
	// xor r4,r5,r8
	ctx.r4.u64 = ctx.r5.u64 ^ ctx.r8.u64;
	// srawi r3,r4,1
	xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x1) != 0);
	ctx.r3.s64 = ctx.r4.s32 >> 1;
	// xor r10,r3,r4
	ctx.r10.u64 = ctx.r3.u64 ^ ctx.r4.u64;
	// clrlwi r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// subf. r9,r7,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r7.s64;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x832d0168
	if (cr0.eq) goto loc_832D0168;
	// ori r6,r6,8
	ctx.r6.u64 = ctx.r6.u64 | 8;
loc_832D0168:
	// cmpwi cr6,r6,0
	cr6.compare<int32_t>(ctx.r6.s32, 0, xer);
	// beq cr6,0x832d0194
	if (cr6.eq) goto loc_832D0194;
	// cmpwi cr6,r23,0
	cr6.compare<int32_t>(ctx.r23.s32, 0, xer);
	// ble cr6,0x832d0194
	if (!cr6.gt) goto loc_832D0194;
	// addi r11,r22,-4
	ctx.r11.s64 = ctx.r22.s64 + -4;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r23,0
	cr6.compare<uint32_t>(ctx.r23.u32, 0, xer);
	// beq cr6,0x832d0194
	if (cr6.eq) goto loc_832D0194;
	// mtctr r23
	ctr.u64 = ctx.r23.u64;
loc_832D018C:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x832d018c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_832D018C;
loc_832D0194:
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// rlwinm r11,r23,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 2) & 0xFFFFFFFC;
	// li r4,0
	ctx.r4.s64 = 0;
	// subf r9,r23,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r23.s64;
	// add r3,r11,r22
	ctx.r3.u64 = ctx.r11.u64 + ctx.r22.u64;
	// rlwinm r5,r9,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x831cdcf0
	ctx.lr = 0x832D01B0;
	sub_831CDCF0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_832D01B4:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832D01BC"))) PPC_WEAK_FUNC(sub_832D01BC);
PPC_FUNC_IMPL(__imp__sub_832D01BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832D01C0"))) PPC_WEAK_FUNC(sub_832D01C0);
PPC_FUNC_IMPL(__imp__sub_832D01C0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x832D01C8;
	__savegprlr_26(ctx, base);
	// cmplwi cr6,r3,1
	cr6.compare<uint32_t>(ctx.r3.u32, 1, xer);
	// blt cr6,0x832d022c
	if (cr6.lt) goto loc_832D022C;
	// beq cr6,0x832d020c
	if (cr6.eq) goto loc_832D020C;
	// cmplwi cr6,r3,3
	cr6.compare<uint32_t>(ctx.r3.u32, 3, xer);
	// blt cr6,0x832d0204
	if (cr6.lt) goto loc_832D0204;
	// beq cr6,0x832d01e8
	if (cr6.eq) goto loc_832D01E8;
	// li r3,6
	ctx.r3.s64 = 6;
	// b 0x832d0268
	goto loc_832D0268;
loc_832D01E8:
	// li r31,6
	ctx.r31.s64 = 6;
loc_832D01EC:
	// li r11,640
	ctx.r11.s64 = 640;
	// li r30,5
	ctx.r30.s64 = 5;
	// li r29,32
	ctx.r29.s64 = 32;
	// li r28,4
	ctx.r28.s64 = 4;
	// li r26,33
	ctx.r26.s64 = 33;
	// b 0x832d0244
	goto loc_832D0244;
loc_832D0204:
	// li r31,2
	ctx.r31.s64 = 2;
	// b 0x832d01ec
	goto loc_832D01EC;
loc_832D020C:
	// li r11,320
	ctx.r11.s64 = 320;
	// li r31,2
	ctx.r31.s64 = 2;
	// li r30,4
	ctx.r30.s64 = 4;
	// li r29,16
	ctx.r29.s64 = 16;
	// li r28,4
	ctx.r28.s64 = 4;
	// li r27,-2
	ctx.r27.s64 = -2;
	// li r26,1
	ctx.r26.s64 = 1;
	// b 0x832d0248
	goto loc_832D0248;
loc_832D022C:
	// li r11,320
	ctx.r11.s64 = 320;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r30,4
	ctx.r30.s64 = 4;
	// li r29,16
	ctx.r29.s64 = 16;
	// li r28,0
	ctx.r28.s64 = 0;
	// li r26,22
	ctx.r26.s64 = 22;
loc_832D0244:
	// li r27,7
	ctx.r27.s64 = 7;
loc_832D0248:
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r31,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r31.u32);
	// stw r30,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r30.u32);
	// stw r29,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r29.u32);
	// stw r28,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r28.u32);
	// stw r27,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r27.u32);
	// stw r26,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r26.u32);
loc_832D0268:
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832D026C"))) PPC_WEAK_FUNC(sub_832D026C);
PPC_FUNC_IMPL(__imp__sub_832D026C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832D0270"))) PPC_WEAK_FUNC(sub_832D0270);
PPC_FUNC_IMPL(__imp__sub_832D0270) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r3,1
	cr6.compare<uint32_t>(ctx.r3.u32, 1, xer);
	// blt cr6,0x832d0788
	if (cr6.lt) goto loc_832D0788;
	// beq cr6,0x832d075c
	if (cr6.eq) goto loc_832D075C;
	// cmplwi cr6,r3,3
	cr6.compare<uint32_t>(ctx.r3.u32, 3, xer);
	// blt cr6,0x832d0738
	if (cr6.lt) goto loc_832D0738;
	// beq cr6,0x832d0290
	if (cr6.eq) goto loc_832D0290;
	// li r3,6
	ctx.r3.s64 = 6;
	// blr 
	return;
loc_832D0290:
	// li r11,50
	ctx.r11.s64 = 50;
	// cmplwi cr6,r4,20800
	cr6.compare<uint32_t>(ctx.r4.u32, 20800, xer);
	// divwu r9,r4,r11
	ctx.r9.u32 = PPCDivide(ctx.r4.u32, ctx.r11.u32);
	// bgt cr6,0x832d0500
	if (cr6.gt) goto loc_832D0500;
	// beq cr6,0x832d04f4
	if (cr6.eq) goto loc_832D04F4;
	// cmplwi cr6,r4,14800
	cr6.compare<uint32_t>(ctx.r4.u32, 14800, xer);
	// bgt cr6,0x832d03d8
	if (cr6.gt) goto loc_832D03D8;
	// beq cr6,0x832d03cc
	if (cr6.eq) goto loc_832D03CC;
	// cmplwi cr6,r4,12000
	cr6.compare<uint32_t>(ctx.r4.u32, 12000, xer);
	// bgt cr6,0x832d0354
	if (cr6.gt) goto loc_832D0354;
	// beq cr6,0x832d0348
	if (cr6.eq) goto loc_832D0348;
	// cmplwi cr6,r4,8800
	cr6.compare<uint32_t>(ctx.r4.u32, 8800, xer);
	// beq cr6,0x832d033c
	if (cr6.eq) goto loc_832D033C;
	// cmplwi cr6,r4,9600
	cr6.compare<uint32_t>(ctx.r4.u32, 9600, xer);
	// beq cr6,0x832d0330
	if (cr6.eq) goto loc_832D0330;
	// cmplwi cr6,r4,10000
	cr6.compare<uint32_t>(ctx.r4.u32, 10000, xer);
	// beq cr6,0x832d0324
	if (cr6.eq) goto loc_832D0324;
	// cmplwi cr6,r4,10400
	cr6.compare<uint32_t>(ctx.r4.u32, 10400, xer);
	// beq cr6,0x832d0318
	if (cr6.eq) goto loc_832D0318;
	// cmplwi cr6,r4,10800
	cr6.compare<uint32_t>(ctx.r4.u32, 10800, xer);
	// beq cr6,0x832d030c
	if (cr6.eq) goto loc_832D030C;
	// cmplwi cr6,r4,11200
	cr6.compare<uint32_t>(ctx.r4.u32, 11200, xer);
	// beq cr6,0x832d0300
	if (cr6.eq) goto loc_832D0300;
	// cmplwi cr6,r4,11600
	cr6.compare<uint32_t>(ctx.r4.u32, 11600, xer);
	// bne cr6,0x832d0780
	if (!cr6.eq) goto loc_832D0780;
	// li r10,12
	ctx.r10.s64 = 12;
	// li r11,16
	ctx.r11.s64 = 16;
	// b 0x832d0798
	goto loc_832D0798;
loc_832D0300:
	// li r10,12
	ctx.r10.s64 = 12;
	// li r11,15
	ctx.r11.s64 = 15;
	// b 0x832d0798
	goto loc_832D0798;
loc_832D030C:
	// li r10,12
	ctx.r10.s64 = 12;
	// li r11,14
	ctx.r11.s64 = 14;
	// b 0x832d0798
	goto loc_832D0798;
loc_832D0318:
	// li r10,12
	ctx.r10.s64 = 12;
	// li r11,13
	ctx.r11.s64 = 13;
	// b 0x832d0798
	goto loc_832D0798;
loc_832D0324:
	// li r10,12
	ctx.r10.s64 = 12;
	// li r11,12
	ctx.r11.s64 = 12;
	// b 0x832d0798
	goto loc_832D0798;
loc_832D0330:
	// li r10,12
	ctx.r10.s64 = 12;
loc_832D0334:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x832d0798
	goto loc_832D0798;
loc_832D033C:
	// li r10,12
	ctx.r10.s64 = 12;
	// li r11,59
	ctx.r11.s64 = 59;
	// b 0x832d0798
	goto loc_832D0798;
loc_832D0348:
	// li r10,12
	ctx.r10.s64 = 12;
loc_832D034C:
	// li r11,2
	ctx.r11.s64 = 2;
	// b 0x832d0798
	goto loc_832D0798;
loc_832D0354:
	// cmplwi cr6,r4,12400
	cr6.compare<uint32_t>(ctx.r4.u32, 12400, xer);
	// beq cr6,0x832d03c0
	if (cr6.eq) goto loc_832D03C0;
	// cmplwi cr6,r4,12800
	cr6.compare<uint32_t>(ctx.r4.u32, 12800, xer);
	// beq cr6,0x832d03b4
	if (cr6.eq) goto loc_832D03B4;
	// cmplwi cr6,r4,13200
	cr6.compare<uint32_t>(ctx.r4.u32, 13200, xer);
	// beq cr6,0x832d03a8
	if (cr6.eq) goto loc_832D03A8;
	// cmplwi cr6,r4,13600
	cr6.compare<uint32_t>(ctx.r4.u32, 13600, xer);
	// beq cr6,0x832d039c
	if (cr6.eq) goto loc_832D039C;
	// cmplwi cr6,r4,14000
	cr6.compare<uint32_t>(ctx.r4.u32, 14000, xer);
	// beq cr6,0x832d0390
	if (cr6.eq) goto loc_832D0390;
	// cmplwi cr6,r4,14400
	cr6.compare<uint32_t>(ctx.r4.u32, 14400, xer);
	// bne cr6,0x832d0780
	if (!cr6.eq) goto loc_832D0780;
	// li r10,16
	ctx.r10.s64 = 16;
loc_832D0388:
	// li r11,3
	ctx.r11.s64 = 3;
	// b 0x832d0798
	goto loc_832D0798;
loc_832D0390:
	// li r10,12
	ctx.r10.s64 = 12;
	// li r11,21
	ctx.r11.s64 = 21;
	// b 0x832d0798
	goto loc_832D0798;
loc_832D039C:
	// li r10,12
	ctx.r10.s64 = 12;
	// li r11,20
	ctx.r11.s64 = 20;
	// b 0x832d0798
	goto loc_832D0798;
loc_832D03A8:
	// li r10,12
	ctx.r10.s64 = 12;
	// li r11,19
	ctx.r11.s64 = 19;
	// b 0x832d0798
	goto loc_832D0798;
loc_832D03B4:
	// li r10,12
	ctx.r10.s64 = 12;
	// li r11,18
	ctx.r11.s64 = 18;
	// b 0x832d0798
	goto loc_832D0798;
loc_832D03C0:
	// li r10,12
	ctx.r10.s64 = 12;
	// li r11,17
	ctx.r11.s64 = 17;
	// b 0x832d0798
	goto loc_832D0798;
loc_832D03CC:
	// li r10,16
	ctx.r10.s64 = 16;
	// li r11,22
	ctx.r11.s64 = 22;
	// b 0x832d0798
	goto loc_832D0798;
loc_832D03D8:
	// cmplwi cr6,r4,18000
	cr6.compare<uint32_t>(ctx.r4.u32, 18000, xer);
	// bgt cr6,0x832d047c
	if (cr6.gt) goto loc_832D047C;
	// beq cr6,0x832d0470
	if (cr6.eq) goto loc_832D0470;
	// cmplwi cr6,r4,15200
	cr6.compare<uint32_t>(ctx.r4.u32, 15200, xer);
	// beq cr6,0x832d0464
	if (cr6.eq) goto loc_832D0464;
	// cmplwi cr6,r4,15600
	cr6.compare<uint32_t>(ctx.r4.u32, 15600, xer);
	// beq cr6,0x832d0458
	if (cr6.eq) goto loc_832D0458;
	// cmplwi cr6,r4,16000
	cr6.compare<uint32_t>(ctx.r4.u32, 16000, xer);
	// beq cr6,0x832d044c
	if (cr6.eq) goto loc_832D044C;
	// cmplwi cr6,r4,16400
	cr6.compare<uint32_t>(ctx.r4.u32, 16400, xer);
	// beq cr6,0x832d0440
	if (cr6.eq) goto loc_832D0440;
	// cmplwi cr6,r4,16800
	cr6.compare<uint32_t>(ctx.r4.u32, 16800, xer);
	// beq cr6,0x832d0434
	if (cr6.eq) goto loc_832D0434;
	// cmplwi cr6,r4,17200
	cr6.compare<uint32_t>(ctx.r4.u32, 17200, xer);
	// beq cr6,0x832d0428
	if (cr6.eq) goto loc_832D0428;
	// cmplwi cr6,r4,17600
	cr6.compare<uint32_t>(ctx.r4.u32, 17600, xer);
	// bne cr6,0x832d0780
	if (!cr6.eq) goto loc_832D0780;
	// li r10,18
	ctx.r10.s64 = 18;
	// li r11,28
	ctx.r11.s64 = 28;
	// b 0x832d0798
	goto loc_832D0798;
loc_832D0428:
	// li r10,18
	ctx.r10.s64 = 18;
	// li r11,27
	ctx.r11.s64 = 27;
	// b 0x832d0798
	goto loc_832D0798;
loc_832D0434:
	// li r10,18
	ctx.r10.s64 = 18;
	// li r11,4
	ctx.r11.s64 = 4;
	// b 0x832d0798
	goto loc_832D0798;
loc_832D0440:
	// li r10,16
	ctx.r10.s64 = 16;
	// li r11,26
	ctx.r11.s64 = 26;
	// b 0x832d0798
	goto loc_832D0798;
loc_832D044C:
	// li r10,16
	ctx.r10.s64 = 16;
	// li r11,25
	ctx.r11.s64 = 25;
	// b 0x832d0798
	goto loc_832D0798;
loc_832D0458:
	// li r10,16
	ctx.r10.s64 = 16;
	// li r11,24
	ctx.r11.s64 = 24;
	// b 0x832d0798
	goto loc_832D0798;
loc_832D0464:
	// li r10,16
	ctx.r10.s64 = 16;
	// li r11,23
	ctx.r11.s64 = 23;
	// b 0x832d0798
	goto loc_832D0798;
loc_832D0470:
	// li r10,18
	ctx.r10.s64 = 18;
	// li r11,29
	ctx.r11.s64 = 29;
	// b 0x832d0798
	goto loc_832D0798;
loc_832D047C:
	// cmplwi cr6,r4,18400
	cr6.compare<uint32_t>(ctx.r4.u32, 18400, xer);
	// beq cr6,0x832d04e8
	if (cr6.eq) goto loc_832D04E8;
	// cmplwi cr6,r4,18800
	cr6.compare<uint32_t>(ctx.r4.u32, 18800, xer);
	// beq cr6,0x832d04dc
	if (cr6.eq) goto loc_832D04DC;
	// cmplwi cr6,r4,19200
	cr6.compare<uint32_t>(ctx.r4.u32, 19200, xer);
	// beq cr6,0x832d04d0
	if (cr6.eq) goto loc_832D04D0;
	// cmplwi cr6,r4,19600
	cr6.compare<uint32_t>(ctx.r4.u32, 19600, xer);
	// beq cr6,0x832d04c4
	if (cr6.eq) goto loc_832D04C4;
	// cmplwi cr6,r4,20000
	cr6.compare<uint32_t>(ctx.r4.u32, 20000, xer);
	// beq cr6,0x832d04b8
	if (cr6.eq) goto loc_832D04B8;
	// cmplwi cr6,r4,20400
	cr6.compare<uint32_t>(ctx.r4.u32, 20400, xer);
	// bne cr6,0x832d0780
	if (!cr6.eq) goto loc_832D0780;
	// li r10,20
	ctx.r10.s64 = 20;
	// li r11,34
	ctx.r11.s64 = 34;
	// b 0x832d0798
	goto loc_832D0798;
loc_832D04B8:
	// li r10,20
	ctx.r10.s64 = 20;
	// li r11,33
	ctx.r11.s64 = 33;
	// b 0x832d0798
	goto loc_832D0798;
loc_832D04C4:
	// li r10,20
	ctx.r10.s64 = 20;
	// li r11,32
	ctx.r11.s64 = 32;
	// b 0x832d0798
	goto loc_832D0798;
loc_832D04D0:
	// li r10,20
	ctx.r10.s64 = 20;
	// li r11,5
	ctx.r11.s64 = 5;
	// b 0x832d0798
	goto loc_832D0798;
loc_832D04DC:
	// li r10,18
	ctx.r10.s64 = 18;
	// li r11,31
	ctx.r11.s64 = 31;
	// b 0x832d0798
	goto loc_832D0798;
loc_832D04E8:
	// li r10,18
	ctx.r10.s64 = 18;
	// li r11,30
	ctx.r11.s64 = 30;
	// b 0x832d0798
	goto loc_832D0798;
loc_832D04F4:
	// li r10,20
	ctx.r10.s64 = 20;
	// li r11,35
	ctx.r11.s64 = 35;
	// b 0x832d0798
	goto loc_832D0798;
loc_832D0500:
	// cmplwi cr6,r4,26800
	cr6.compare<uint32_t>(ctx.r4.u32, 26800, xer);
	// bgt cr6,0x832d0634
	if (cr6.gt) goto loc_832D0634;
	// beq cr6,0x832d0628
	if (cr6.eq) goto loc_832D0628;
	// cmplwi cr6,r4,24000
	cr6.compare<uint32_t>(ctx.r4.u32, 24000, xer);
	// bgt cr6,0x832d05b0
	if (cr6.gt) goto loc_832D05B0;
	// beq cr6,0x832d05a4
	if (cr6.eq) goto loc_832D05A4;
	// cmplwi cr6,r4,21200
	cr6.compare<uint32_t>(ctx.r4.u32, 21200, xer);
	// beq cr6,0x832d0598
	if (cr6.eq) goto loc_832D0598;
	// cmplwi cr6,r4,21600
	cr6.compare<uint32_t>(ctx.r4.u32, 21600, xer);
	// beq cr6,0x832d058c
	if (cr6.eq) goto loc_832D058C;
	// cmplwi cr6,r4,22000
	cr6.compare<uint32_t>(ctx.r4.u32, 22000, xer);
	// beq cr6,0x832d0580
	if (cr6.eq) goto loc_832D0580;
	// cmplwi cr6,r4,22400
	cr6.compare<uint32_t>(ctx.r4.u32, 22400, xer);
	// beq cr6,0x832d0574
	if (cr6.eq) goto loc_832D0574;
	// cmplwi cr6,r4,22800
	cr6.compare<uint32_t>(ctx.r4.u32, 22800, xer);
	// beq cr6,0x832d0568
	if (cr6.eq) goto loc_832D0568;
	// cmplwi cr6,r4,23200
	cr6.compare<uint32_t>(ctx.r4.u32, 23200, xer);
	// beq cr6,0x832d055c
	if (cr6.eq) goto loc_832D055C;
	// cmplwi cr6,r4,23600
	cr6.compare<uint32_t>(ctx.r4.u32, 23600, xer);
	// bne cr6,0x832d0780
	if (!cr6.eq) goto loc_832D0780;
	// li r10,22
	ctx.r10.s64 = 22;
	// li r11,41
	ctx.r11.s64 = 41;
	// b 0x832d0798
	goto loc_832D0798;
loc_832D055C:
	// li r10,22
	ctx.r10.s64 = 22;
	// li r11,40
	ctx.r11.s64 = 40;
	// b 0x832d0798
	goto loc_832D0798;
loc_832D0568:
	// li r10,22
	ctx.r10.s64 = 22;
	// li r11,39
	ctx.r11.s64 = 39;
	// b 0x832d0798
	goto loc_832D0798;
loc_832D0574:
	// li r10,22
	ctx.r10.s64 = 22;
	// li r11,38
	ctx.r11.s64 = 38;
	// b 0x832d0798
	goto loc_832D0798;
loc_832D0580:
	// li r10,22
	ctx.r10.s64 = 22;
	// li r11,37
	ctx.r11.s64 = 37;
	// b 0x832d0798
	goto loc_832D0798;
loc_832D058C:
	// li r10,22
	ctx.r10.s64 = 22;
	// li r11,6
	ctx.r11.s64 = 6;
	// b 0x832d0798
	goto loc_832D0798;
loc_832D0598:
	// li r10,20
	ctx.r10.s64 = 20;
	// li r11,36
	ctx.r11.s64 = 36;
	// b 0x832d0798
	goto loc_832D0798;
loc_832D05A4:
	// li r10,24
	ctx.r10.s64 = 24;
	// li r11,7
	ctx.r11.s64 = 7;
	// b 0x832d0798
	goto loc_832D0798;
loc_832D05B0:
	// cmplwi cr6,r4,24400
	cr6.compare<uint32_t>(ctx.r4.u32, 24400, xer);
	// beq cr6,0x832d061c
	if (cr6.eq) goto loc_832D061C;
	// cmplwi cr6,r4,24800
	cr6.compare<uint32_t>(ctx.r4.u32, 24800, xer);
	// beq cr6,0x832d0610
	if (cr6.eq) goto loc_832D0610;
	// cmplwi cr6,r4,25200
	cr6.compare<uint32_t>(ctx.r4.u32, 25200, xer);
	// beq cr6,0x832d0604
	if (cr6.eq) goto loc_832D0604;
	// cmplwi cr6,r4,25600
	cr6.compare<uint32_t>(ctx.r4.u32, 25600, xer);
	// beq cr6,0x832d05f8
	if (cr6.eq) goto loc_832D05F8;
	// cmplwi cr6,r4,26000
	cr6.compare<uint32_t>(ctx.r4.u32, 26000, xer);
	// beq cr6,0x832d05ec
	if (cr6.eq) goto loc_832D05EC;
	// cmplwi cr6,r4,26400
	cr6.compare<uint32_t>(ctx.r4.u32, 26400, xer);
	// bne cr6,0x832d0780
	if (!cr6.eq) goto loc_832D0780;
	// li r10,26
	ctx.r10.s64 = 26;
	// li r11,8
	ctx.r11.s64 = 8;
	// b 0x832d0798
	goto loc_832D0798;
loc_832D05EC:
	// li r10,24
	ctx.r10.s64 = 24;
	// li r11,46
	ctx.r11.s64 = 46;
	// b 0x832d0798
	goto loc_832D0798;
loc_832D05F8:
	// li r10,24
	ctx.r10.s64 = 24;
	// li r11,45
	ctx.r11.s64 = 45;
	// b 0x832d0798
	goto loc_832D0798;
loc_832D0604:
	// li r10,24
	ctx.r10.s64 = 24;
	// li r11,44
	ctx.r11.s64 = 44;
	// b 0x832d0798
	goto loc_832D0798;
loc_832D0610:
	// li r10,24
	ctx.r10.s64 = 24;
	// li r11,43
	ctx.r11.s64 = 43;
	// b 0x832d0798
	goto loc_832D0798;
loc_832D061C:
	// li r10,24
	ctx.r10.s64 = 24;
	// li r11,42
	ctx.r11.s64 = 42;
	// b 0x832d0798
	goto loc_832D0798;
loc_832D0628:
	// li r10,26
	ctx.r10.s64 = 26;
	// li r11,47
	ctx.r11.s64 = 47;
	// b 0x832d0798
	goto loc_832D0798;
loc_832D0634:
	// cmplwi cr6,r4,29600
	cr6.compare<uint32_t>(ctx.r4.u32, 29600, xer);
	// bgt cr6,0x832d06c0
	if (cr6.gt) goto loc_832D06C0;
	// beq cr6,0x832d06b4
	if (cr6.eq) goto loc_832D06B4;
	// cmplwi cr6,r4,27200
	cr6.compare<uint32_t>(ctx.r4.u32, 27200, xer);
	// beq cr6,0x832d06a8
	if (cr6.eq) goto loc_832D06A8;
	// cmplwi cr6,r4,27600
	cr6.compare<uint32_t>(ctx.r4.u32, 27600, xer);
	// beq cr6,0x832d069c
	if (cr6.eq) goto loc_832D069C;
	// cmplwi cr6,r4,28000
	cr6.compare<uint32_t>(ctx.r4.u32, 28000, xer);
	// beq cr6,0x832d0694
	if (cr6.eq) goto loc_832D0694;
	// cmplwi cr6,r4,28400
	cr6.compare<uint32_t>(ctx.r4.u32, 28400, xer);
	// beq cr6,0x832d0688
	if (cr6.eq) goto loc_832D0688;
	// cmplwi cr6,r4,28800
	cr6.compare<uint32_t>(ctx.r4.u32, 28800, xer);
	// beq cr6,0x832d067c
	if (cr6.eq) goto loc_832D067C;
	// cmplwi cr6,r4,29200
	cr6.compare<uint32_t>(ctx.r4.u32, 29200, xer);
	// bne cr6,0x832d0780
	if (!cr6.eq) goto loc_832D0780;
	// li r10,28
	ctx.r10.s64 = 28;
	// li r11,52
	ctx.r11.s64 = 52;
	// b 0x832d0798
	goto loc_832D0798;
loc_832D067C:
	// li r10,28
	ctx.r10.s64 = 28;
	// li r11,9
	ctx.r11.s64 = 9;
	// b 0x832d0798
	goto loc_832D0798;
loc_832D0688:
	// li r10,26
	ctx.r10.s64 = 26;
	// li r11,51
	ctx.r11.s64 = 51;
	// b 0x832d0798
	goto loc_832D0798;
loc_832D0694:
	// li r10,26
	ctx.r10.s64 = 26;
	// b 0x832d0798
	goto loc_832D0798;
loc_832D069C:
	// li r10,26
	ctx.r10.s64 = 26;
	// li r11,49
	ctx.r11.s64 = 49;
	// b 0x832d0798
	goto loc_832D0798;
loc_832D06A8:
	// li r10,26
	ctx.r10.s64 = 26;
	// li r11,48
	ctx.r11.s64 = 48;
	// b 0x832d0798
	goto loc_832D0798;
loc_832D06B4:
	// li r10,28
	ctx.r10.s64 = 28;
	// li r11,53
	ctx.r11.s64 = 53;
	// b 0x832d0798
	goto loc_832D0798;
loc_832D06C0:
	// cmplwi cr6,r4,30000
	cr6.compare<uint32_t>(ctx.r4.u32, 30000, xer);
	// beq cr6,0x832d072c
	if (cr6.eq) goto loc_832D072C;
	// cmplwi cr6,r4,30400
	cr6.compare<uint32_t>(ctx.r4.u32, 30400, xer);
	// beq cr6,0x832d0720
	if (cr6.eq) goto loc_832D0720;
	// cmplwi cr6,r4,30800
	cr6.compare<uint32_t>(ctx.r4.u32, 30800, xer);
	// beq cr6,0x832d0714
	if (cr6.eq) goto loc_832D0714;
	// cmplwi cr6,r4,31200
	cr6.compare<uint32_t>(ctx.r4.u32, 31200, xer);
	// beq cr6,0x832d0708
	if (cr6.eq) goto loc_832D0708;
	// cmplwi cr6,r4,31600
	cr6.compare<uint32_t>(ctx.r4.u32, 31600, xer);
	// beq cr6,0x832d06fc
	if (cr6.eq) goto loc_832D06FC;
	// cmplwi cr6,r4,32000
	cr6.compare<uint32_t>(ctx.r4.u32, 32000, xer);
	// bne cr6,0x832d0780
	if (!cr6.eq) goto loc_832D0780;
	// li r10,28
	ctx.r10.s64 = 28;
	// li r11,58
	ctx.r11.s64 = 58;
	// b 0x832d0798
	goto loc_832D0798;
loc_832D06FC:
	// li r10,28
	ctx.r10.s64 = 28;
	// li r11,57
	ctx.r11.s64 = 57;
	// b 0x832d0798
	goto loc_832D0798;
loc_832D0708:
	// li r10,28
	ctx.r10.s64 = 28;
	// li r11,10
	ctx.r11.s64 = 10;
	// b 0x832d0798
	goto loc_832D0798;
loc_832D0714:
	// li r10,28
	ctx.r10.s64 = 28;
	// li r11,56
	ctx.r11.s64 = 56;
	// b 0x832d0798
	goto loc_832D0798;
loc_832D0720:
	// li r10,28
	ctx.r10.s64 = 28;
	// li r11,55
	ctx.r11.s64 = 55;
	// b 0x832d0798
	goto loc_832D0798;
loc_832D072C:
	// li r10,28
	ctx.r10.s64 = 28;
	// li r11,54
	ctx.r11.s64 = 54;
	// b 0x832d0798
	goto loc_832D0798;
loc_832D0738:
	// li r11,50
	ctx.r11.s64 = 50;
	// li r10,28
	ctx.r10.s64 = 28;
	// divwu r9,r4,r11
	ctx.r9.u32 = PPCDivide(ctx.r4.u32, ctx.r11.u32);
	// cmplwi cr6,r4,24000
	cr6.compare<uint32_t>(ctx.r4.u32, 24000, xer);
	// beq cr6,0x832d0334
	if (cr6.eq) goto loc_832D0334;
	// cmplwi cr6,r4,32000
	cr6.compare<uint32_t>(ctx.r4.u32, 32000, xer);
	// beq cr6,0x832d034c
	if (cr6.eq) goto loc_832D034C;
	// cmplwi cr6,r4,48000
	cr6.compare<uint32_t>(ctx.r4.u32, 48000, xer);
	// b 0x832d077c
	goto loc_832D077C;
loc_832D075C:
	// li r11,50
	ctx.r11.s64 = 50;
	// li r10,14
	ctx.r10.s64 = 14;
	// divwu r9,r4,r11
	ctx.r9.u32 = PPCDivide(ctx.r4.u32, ctx.r11.u32);
	// cmplwi cr6,r4,16000
	cr6.compare<uint32_t>(ctx.r4.u32, 16000, xer);
	// beq cr6,0x832d0334
	if (cr6.eq) goto loc_832D0334;
	// cmplwi cr6,r4,24000
	cr6.compare<uint32_t>(ctx.r4.u32, 24000, xer);
	// beq cr6,0x832d034c
	if (cr6.eq) goto loc_832D034C;
	// cmplwi cr6,r4,32000
	cr6.compare<uint32_t>(ctx.r4.u32, 32000, xer);
loc_832D077C:
	// beq cr6,0x832d0388
	if (cr6.eq) goto loc_832D0388;
loc_832D0780:
	// li r3,3
	ctx.r3.s64 = 3;
	// blr 
	return;
loc_832D0788:
	// li r9,50
	ctx.r9.s64 = 50;
	// li r10,14
	ctx.r10.s64 = 14;
	// li r11,0
	ctx.r11.s64 = 0;
	// divwu r9,r4,r9
	ctx.r9.u32 = PPCDivide(ctx.r4.u32, ctx.r9.u32);
loc_832D0798:
	// stw r10,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// stw r9,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832D07AC"))) PPC_WEAK_FUNC(sub_832D07AC);
PPC_FUNC_IMPL(__imp__sub_832D07AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832D07B0"))) PPC_WEAK_FUNC(sub_832D07B0);
PPC_FUNC_IMPL(__imp__sub_832D07B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x832D07B8;
	__savegprlr_27(ctx, base);
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x831ce778
	ctx.lr = 0x832D07C0;
	__savefpr_28(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// lis r8,-31738
	ctx.r8.s64 = -2079981568;
	// lis r9,-31738
	ctx.r9.s64 = -2079981568;
	// li r11,20
	ctx.r11.s64 = 20;
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// lfs f0,21212(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 21212);
	ctx.f0.f64 = double(temp.f32);
	// lis r6,-32220
	ctx.r6.s64 = -2111569920;
	// stfs f0,23360(r8)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 23360, temp.u32);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// stw r11,22784(r9)
	PPC_STORE_U32(ctx.r9.u32 + 22784, ctx.r11.u32);
	// lis r11,-31738
	ctx.r11.s64 = -2079981568;
	// lis r10,-31738
	ctx.r10.s64 = -2079981568;
	// lis r9,-31738
	ctx.r9.s64 = -2079981568;
	// lfd f30,20040(r7)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r7.u32 + 20040);
	// lfd f31,-18152(r6)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r6.u32 + -18152);
	// li r30,0
	ctx.r30.s64 = 0;
	// lfd f29,17056(r8)
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r8.u32 + 17056);
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r29,r11,22528
	ctx.r29.s64 = ctx.r11.s64 + 22528;
	// addi r28,r10,23104
	ctx.r28.s64 = ctx.r10.s64 + 23104;
	// addi r27,r9,23392
	ctx.r27.s64 = ctx.r9.s64 + 23392;
loc_832D0818:
	// addi r11,r30,-24
	ctx.r11.s64 = ctx.r30.s64 + -24;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fmul f2,f0,f31
	ctx.f2.f64 = ctx.f0.f64 * ctx.f31.f64;
	// bl 0x831d20a0
	ctx.lr = 0x832D083C;
	sub_831D20A0(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// stfsx f0,r31,r27
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + ctx.r27.u32, temp.u32);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// fsqrts f0,f0
	ctx.f0.f64 = double(float(sqrt(ctx.f0.f64)));
	// stfsx f0,r31,r28
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + ctx.r28.u32, temp.u32);
	// fdiv f0,f29,f0
	ctx.f0.f64 = ctx.f29.f64 / ctx.f0.f64;
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// stfsx f0,r31,r29
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + ctx.r29.u32, temp.u32);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmpwi cr6,r31,256
	cr6.compare<int32_t>(ctx.r31.s32, 256, xer);
	// blt cr6,0x832d0818
	if (cr6.lt) goto loc_832D0818;
	// lis r11,-31738
	ctx.r11.s64 = -2079981568;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r29,r11,22848
	ctx.r29.s64 = ctx.r11.s64 + 22848;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
	// lfd f28,15760(r11)
	ctx.f28.u64 = PPC_LOAD_U64(ctx.r11.u32 + 15760);
loc_832D0880:
	// addi r11,r30,-24
	ctx.r11.s64 = ctx.r30.s64 + -24;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fadd f0,f0,f28
	ctx.f0.f64 = ctx.f0.f64 + ctx.f28.f64;
	// fmul f2,f0,f31
	ctx.f2.f64 = ctx.f0.f64 * ctx.f31.f64;
	// bl 0x831d20a0
	ctx.lr = 0x832D08A8;
	sub_831D20A0(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// stfs f0,0(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// addi r11,r29,252
	ctx.r11.s64 = ctx.r29.s64 + 252;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r31,r11
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, xer);
	// blt cr6,0x832d0880
	if (cr6.lt) goto loc_832D0880;
	// li r10,8
	ctx.r10.s64 = 8;
	// lis r8,-32220
	ctx.r8.s64 = -2111569920;
	// lis r9,-31738
	ctx.r9.s64 = -2079981568;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r9,22816
	ctx.r9.s64 = ctx.r9.s64 + 22816;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// lis r10,-31771
	ctx.r10.s64 = -2082144256;
	// lfd f0,-18160(r8)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r8.u32 + -18160);
	// addi r10,r10,-30384
	ctx.r10.s64 = ctx.r10.s64 + -30384;
loc_832D08E8:
	// lwax r8,r11,r10
	ctx.r8.s64 = int32_t(PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32));
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f13,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// fadd f13,f13,f29
	ctx.f13.f64 = ctx.f13.f64 + ctx.f29.f64;
	// fdiv f13,f0,f13
	ctx.f13.f64 = ctx.f0.f64 / ctx.f13.f64;
	// fadd f13,f13,f29
	ctx.f13.f64 = ctx.f13.f64 + ctx.f29.f64;
	// fctiwz f13,f13
	ctx.f13.s64 = (ctx.f13.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfiwx f13,r11,r9
	PPC_STORE_U32(ctx.r11.u32 + ctx.r9.u32, ctx.f13.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x832d08e8
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_832D08E8;
	// li r10,8
	ctx.r10.s64 = 8;
	// lis r9,-31738
	ctx.r9.s64 = -2079981568;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r9,22496
	ctx.r9.s64 = ctx.r9.s64 + 22496;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// lis r10,-31771
	ctx.r10.s64 = -2082144256;
	// addi r10,r10,-30416
	ctx.r10.s64 = ctx.r10.s64 + -30416;
loc_832D0930:
	// lfsx f0,r11,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	ctx.f0.f64 = double(temp.f32);
	// fdiv f0,f29,f0
	ctx.f0.f64 = ctx.f29.f64 / ctx.f0.f64;
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// stfsx f0,r11,r9
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r9.u32, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x832d0930
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_832D0930;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x831ce7c4
	ctx.lr = 0x832D0954;
	__restfpr_28(ctx, base);
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

